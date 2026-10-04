#!/usr/bin/env python3
"""Count .ko files carrying .BTF sections and total BTF bytes."""
import os
import struct
import sys

dirs = sys.argv[1:]
def u16(d, o): return struct.unpack_from("<H", d, o)[0]
def u32(d, o): return struct.unpack_from("<I", d, o)[0]
def u64(d, o): return struct.unpack_from("<Q", d, o)[0]

total = have = btfsz = 0
for dd in dirs:
    for fn in sorted(os.listdir(dd)):
        if not fn.endswith(".ko"):
            continue
        total += 1
        d = open(os.path.join(dd, fn), "rb").read()
        e_shoff, e_shentsize, e_shnum = u64(d, 0x28), u16(d, 0x3A), u16(d, 0x3C)
        ok = False
        for i in range(e_shnum):
            o = e_shoff + i * e_shentsize
            no, typ, sz = u32(d, o), u32(d, o + 4), u64(d, o + 0x20)
            if typ != 8:  # SHT_NOBITS
                shstr_o = 0
        # find shstrtab via e_shstrndx
        shstrndx = u16(d, 0x3E)
        sso = e_shoff + shstrndx * e_shentsize
        strtab = d[u64(d, sso + 0x18): u64(d, sso + 0x18) + u64(d, sso + 0x20)]
        for i in range(e_shnum):
            o = e_shoff + i * e_shentsize
            no, typ, sz = u32(d, o), u32(d, o + 4), u64(d, o + 0x20)
            name = strtab[no:strtab.index(b"\0", no)].decode(errors="replace")
            if name == ".BTF" and sz > 0:
                ok = True
                btfsz += sz
        if ok:
            have += 1
print("modules=%d with .BTF=%d btf_bytes=%d" % (total, have, btfsz))
