#!/usr/bin/env python3
"""Identify section containing a vaddr, dump bytes + relocs near it."""
import json
import os
import struct
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from ko_patch import Elf, r2_section_vaddrs

ko = sys.argv[1]
target = int(sys.argv[2], 16)

elf = Elf(open(ko, "rb").read())
vaddrs = r2_section_vaddrs(ko)

# which section contains target (by name->vaddr + size)
for s in elf.sections:
    va = vaddrs.get(s["name"])
    if va is not None and va <= target < va + s["size"]:
        print("section %s: vaddr=0x%x size=0x%x (target offset +0x%x)" %
              (s["name"], va, s["size"], target - va))
        sec = s
        break
else:
    print("vaddr 0x%x not in any mapped section; nearest:" % target)
    cands = sorted((v for v in vaddrs.values() if v <= target))
    print("  prev vaddr: 0x%x" % cands[-1] if cands else "  none")
    sec = None

# find RELOCs with site in [target-0x20, target+0x20]
for sec2 in elf.sections:
    if sec2["typ"] != 4:
        continue
    tsec = elf.sections[sec2["info"]] if sec2["info"] < len(elf.sections) else None
    symsec = elf.sections[sec2["link"]] if sec2["link"] < len(elf.sections) else None
    if not tsec or not symsec or symsec["typ"] != 2 or tsec["name"] not in vaddrs:
        continue
    syms = elf.symbols(symsec)
    tva = vaddrs[tsec["name"]]
    for i in range(sec2["size"] // 24):
        o = sec2["off"] + i * 24
        r_offset, r_info, r_addend = struct.unpack_from("<QQq", elf.d, o)
        site = tva + r_offset
        if abs(site - target) <= 0x30:
            sym = syms[r_info >> 32] if 0 < (r_info >> 32) < len(syms) else None
            print("reloc: site=0x%x type=%d sym=%s shndx=%d addend=%d" % (
                site, r_info & 0xFFFFFFFF, sym["name"] if sym else "?",
                sym["shndx"] if sym else -1, r_addend))

# dump raw bytes around target from the FILE (find section covering via file offset)
best = None
for s in elf.sections:
    va = vaddrs.get(s["name"])
    if va is None or s["typ"] == 8:
        continue
    if va <= target < va + s["size"]:
        best = s
        break
if best:
    fo = best["off"] + (target - vaddrs[best["name"]])
    d = elf.d[fo - 16:fo + 32]
    for j in range(0, len(d) - 3, 4):
        w = struct.unpack_from("<I", d, j)[0]
        mark = " <<<" if fo - 16 + j == fo else ""
        print("  0x%x: %08x%s" % (target - 16 + j, w, mark))
