#!/usr/bin/env python3
"""Fully resolve aarch64 kernel-module (ET_REL) relocations into a patched .ko.

r2's bin.relocs.apply zeroes JUMP26/CALL26 words it cannot encode, so we apply
ALL relocations ourselves and load r2 with bin.relocs.apply=false instead.

Two synthetic regions are appended beyond the mapped sections (flags only,
no bytes needed by the decompiler):
  - one 4-byte thunk per imported symbol          -> referenced by BL/B
  - one 8-byte GOT slot per imported symbol       -> referenced by GOT relocs

Usage: ko_patch.py <in.ko> <out.ko> <flags.r2>
"""
import json
import os
import struct
import subprocess
import sys

R2 = os.path.expanduser("~/qpkg/usr/bin/r2")
ENV = dict(os.environ)
ENV["LD_LIBRARY_PATH"] = os.path.expanduser("~/qpkg/usr/lib")
ENV["R2_LIBR_PLUGINS"] = os.path.expanduser("~/qpkg/usr/lib/radare2/6.2.0")
ENV["SLEIGHHOME"] = os.path.expanduser("~/qpkg/usr/lib/radare2/6.2.0/r2ghidra_sleigh")


def r2_section_vaddrs(path):
    p = subprocess.run([R2, "-q", "-N", "-c", "iSj", path],
                       capture_output=True, text=True, env=ENV)
    out = {}
    for sec in json.loads(p.stdout):
        out[sec["name"]] = sec["vaddr"]
    return out


class Elf:
    def __init__(self, data):
        self.d = bytearray(data)
        assert self.d[:4] == b"\x7fELF" and self.d[4] == 2 and self.d[5] == 1, "not ELF64 LE"
        self.e_shoff = self.u64(0x28)
        self.e_shentsize = self.u16(0x3A)
        self.e_shnum = self.u16(0x3C)
        self.sections = []
        for i in range(self.e_shoff and self.e_shnum or 0):
            o = self.e_shoff + i * self.e_shentsize
            self.sections.append(dict(
                idx=i,
                name_off=self.u32(o + 0x00),
                typ=self.u32(o + 0x04),
                off=self.u64(o + 0x18),
                size=self.u64(o + 0x20),
                link=self.u32(o + 0x28),
                info=self.u32(o + 0x2C),
            ))
        shstr = self.sections[self.u16(0x3E)]
        for s in self.sections:
            o = shstr["off"] + s["name_off"]
            s["name"] = bytes(self.d[o:self.d.index(b"\0", o)]).decode()

    def u16(self, o): return struct.unpack_from("<H", self.d, o)[0]
    def u32(self, o): return struct.unpack_from("<I", self.d, o)[0]
    def u64(self, o): return struct.unpack_from("<Q", self.d, o)[0]
    def w32(self, o, v): struct.pack_into("<I", self.d, o, v & 0xFFFFFFFF)
    def w64(self, o, v): struct.pack_into("<Q", self.d, o, v & 0xFFFFFFFFFFFFFFFF)

    def symbols(self, symtab_sec):
        strtab = self.sections[symtab_sec["link"]]
        syms = []
        for i in range(symtab_sec["size"] // 24):
            o = symtab_sec["off"] + i * 24
            name_off, info, other, shndx, value, size = struct.unpack_from("<IBBHQQ", self.d, o)
            no = strtab["off"] + name_off
            name = bytes(self.d[no:self.d.index(b"\0", no)]).decode(errors="replace")
            syms.append(dict(name=name, shndx=shndx, value=value))
        return syms


def main():
    in_path, out_path, flags_path = sys.argv[1], sys.argv[2], sys.argv[3]

    elf = Elf(open(in_path, "rb").read())
    vaddrs = r2_section_vaddrs(in_path)
    hist = {}
    skipped = 0
    range_fail = 0

    # Zero out SHT_NOBITS (.bss) section sizes: r2 maps NOBITS sections at
    # base+sh_offset with full size, and where that VA range overlaps .text
    # the zero-fill SHADOWS real code (functions read as 0-words and vanish
    # from analysis). Unmapping .bss costs only its variable flag names.
    bss_zeroed = 0
    for s in elf.sections:
        if s["typ"] == 8 and s["size"] > 0:  # SHT_NOBITS
            o = elf.e_shoff + s["idx"] * elf.e_shentsize
            struct.pack_into("<Q", elf.d, o + 0x20, 0)  # sh_size = 0
            bss_zeroed += 1

    max_end = 0
    for s in elf.sections:
        va = vaddrs.get(s["name"])
        if va is not None:
            max_end = max(max_end, va + s["size"])
    region_base = (max(max_end, 0x08000000) + 0xFFF) & ~0xFFF

    thunks = {}   # import name -> 4B thunk address (for BL/B)
    gots = {}     # import name -> 8B GOT slot address

    def thunk_addr(name):
        if name not in thunks:
            thunks[name] = region_base + 4 * len(thunks)
        return thunks[name]

    def got_addr(name):
        if name not in gots:
            gots[name] = region_base + 0x1000 + 8 * len(gots)
        return gots[name]

    for sec in elf.sections:
        if sec["typ"] != 4:  # SHT_RELA
            continue
        tsec = elf.sections[sec["info"]] if sec["info"] < len(elf.sections) else None
        symsec = elf.sections[sec["link"]] if sec["link"] < len(elf.sections) else None
        if not tsec or not symsec or symsec["typ"] != 2 or tsec["name"] not in vaddrs:
            continue
        syms = elf.symbols(symsec)
        tva = vaddrs[tsec["name"]]
        for i in range(sec["size"] // 24):
            o = sec["off"] + i * 24
            r_offset, r_info, r_addend = struct.unpack_from("<QQq", elf.d, o)
            rtype = r_info & 0xFFFFFFFF
            symidx = r_info >> 32
            sym = syms[symidx] if 0 < symidx < len(syms) else None
            if sym is None:
                skipped += 1
                continue
            defined = sym["shndx"] != 0 and sym["shndx"] < len(elf.sections)
            if defined:
                sym_sec = elf.sections[sym["shndx"]]
                if sym_sec["name"] not in vaddrs:
                    skipped += 1
                    continue
                target = vaddrs[sym_sec["name"]] + sym["value"] + r_addend
            elif sym["shndx"] == 0:
                # import: branch relocs point at a thunk, GOT relocs at a slot
                target = None
            else:
                skipped += 1
                continue
            site = tva + r_offset
            file_off = tsec["off"] + r_offset
            hist[rtype] = hist.get(rtype, 0) + 1

            if rtype in (282, 283):
                t = target if defined else thunk_addr(sym["name"])
                delta = t - site
                if not (-(1 << 27) <= delta < (1 << 27)):
                    range_fail += 1
                    continue
                op = 0x14000000 if rtype == 282 else 0x94000000
                elf.w32(file_off, op | ((delta >> 2) & 0x3FFFFFF))
            elif rtype == 275:  # ADR_PREL_PG_HI21
                t = target if defined else thunk_addr(sym["name"])
                imm = ((t & ~0xFFF) - (site & ~0xFFF)) >> 12
                if not (-(1 << 20) <= imm < (1 << 20)):
                    range_fail += 1
                    continue
                w = elf.u32(file_off)
                w = (w & ~((3 << 29) | (0x7FFFF << 5))) | ((imm & 3) << 29) | (((imm >> 2) & 0x7FFFF) << 5)
                elf.w32(file_off, w)
            elif rtype in (277, 278):  # ADD/LDST8 ABS_LO12_NC
                t = target if defined else thunk_addr(sym["name"])
                w = elf.u32(file_off)
                w = (w & ~(0xFFF << 10)) | ((t & 0xFFF) << 10)
                elf.w32(file_off, w)
            elif rtype == 285:  # GOT_ADRP_PAGE (adrp page of GOT slot)
                if defined:
                    continue  # r2 handles data relocs? no matter: skip, rare
                slot = got_addr(sym["name"])
                imm = ((slot & ~0xFFF) - (site & ~0xFFF)) >> 12
                if not (-(1 << 20) <= imm < (1 << 20)):
                    range_fail += 1
                    continue
                w = elf.u32(file_off)
                w = (w & ~((3 << 29) | (0x7FFFF << 5))) | ((imm & 3) << 29) | (((imm >> 2) & 0x7FFFF) << 5)
                elf.w32(file_off, w)
            elif rtype == 286:  # LD64_GOT_LO12_NC (ldr x, [x, :got_lo12:sym])
                if defined:
                    continue
                slot = got_addr(sym["name"])
                w = elf.u32(file_off)
                w = (w & ~(0xFFF << 10)) | (((slot & 0xFFF) >> 3) << 10)
                elf.w32(file_off, w)
            elif rtype == 284:  # GOT_LD_PREL19 (ldr literal)
                if defined:
                    continue
                slot = got_addr(sym["name"])
                delta = slot - site
                if delta & 3 or not (-(1 << 20) <= delta < (1 << 20)):
                    range_fail += 1
                    continue
                w = elf.u32(file_off)
                w = (w & ~(0x7FFFF << 5)) | (((delta >> 2) & 0x7FFFF) << 5)
                elf.w32(file_off, w)
            elif rtype == 257:  # ABS64
                t = target if defined else got_addr(sym["name"])
                elf.w64(file_off, t)
            elif rtype == 258:  # ABS32
                t = target if defined else got_addr(sym["name"])
                if not (0 <= t < (1 << 32)):
                    range_fail += 1
                    continue
                elf.w32(file_off, t)
            elif rtype == 260:  # PREL64
                t = target if defined else got_addr(sym["name"])
                elf.w64(file_off, t - site)
            elif rtype == 261:  # PREL32
                t = target if defined else got_addr(sym["name"])
                v = t - site
                if not (-(1 << 31) <= v < (1 << 31)):
                    range_fail += 1
                    continue
                elf.w32(file_off, v)
            else:
                skipped += 1

    flags_cmd = []
    for name, addr in sorted(thunks.items(), key=lambda kv: kv[1]):
        flags_cmd.append("f %s 4 @ 0x%x" % (name, addr))
        flags_cmd.append("af+ 0x%x %s" % (addr, name))
    for name, addr in sorted(gots.items(), key=lambda kv: kv[1]):
        flags_cmd.append("f got.%s 8 @ 0x%x" % (name, addr))

    with open(out_path, "wb") as f:
        f.write(elf.d)
    with open(flags_path, "w") as f:
        f.write("\n".join(flags_cmd) + "\n")

    print(json.dumps({
        "in": in_path, "region_base": hex(region_base),
        "thunks": len(thunks), "gots": len(gots),
        "bss_zeroed": bss_zeroed,
        "relocs": {str(k): v for k, v in sorted(hist.items())},
        "skipped": skipped, "range_fail": range_fail,
    }))


if __name__ == "__main__":
    main()
