#!/usr/bin/env python3
"""Classify skipped/unhandled relocs exactly like ko_patch does, with reasons."""
import json
import os
import struct
import subprocess
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from ko_patch import Elf, r2_section_vaddrs  # reuse the same logic

path = sys.argv[1]
elf = Elf(open(path, "rb").read())
vaddrs = r2_section_vaddrs(path)

reasons = {}
for sec in elf.sections:
    if sec["typ"] != 4:
        continue
    tsec = elf.sections[sec["info"]] if sec["info"] < len(elf.sections) else None
    symsec = elf.sections[sec["link"]] if sec["link"] < len(elf.sections) else None
    if not tsec or not symsec or symsec["typ"] != 2 or tsec["name"] not in vaddrs:
        key = "rela-section-unmapped(target=%s symtab=%s)" % (
            tsec["name"] if tsec else "?", symsec and symsec["typ"])
        reasons.setdefault(key, 0)
        reasons[key] += sec["size"] // 24
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
            reasons.setdefault("symidx-out-of-range/zero", 0)
            reasons["symidx-out-of-range/zero"] += 1
            continue
        if sym["shndx"] != 0 and sym["shndx"] < len(elf.sections):
            sym_sec = elf.sections[sym["shndx"]]
            if sym_sec["name"] not in vaddrs:
                key = "defined-but-section-unmapped: sym-section=%s" % sym_sec["name"]
                reasons.setdefault(key, 0)
                reasons[key] += 1
                continue
            # handled types
            if rtype in (282, 283, 275, 277, 278, 257, 258, 260, 261):
                continue
            if rtype in (284, 285, 286):
                key = "GOT-type-DEFINED-skipped: %s" % sym["name"][:40]
                reasons.setdefault(key, 0)
                reasons[key] += 1
                continue
            key = "unhandled-type-defined: rtype=%d" % rtype
            reasons.setdefault(key, 0)
            reasons[key] += 1
        elif sym["shndx"] == 0:
            if rtype in (282, 283, 275, 277, 278, 284, 285, 286, 257, 258, 260, 261):
                continue
            key = "unhandled-type-import: rtype=%d sym=%s" % (rtype, sym["name"][:30])
            reasons.setdefault(key, 0)
            reasons[key] += 1
        else:
            reasons.setdefault("weird-shndx: %d" % sym["shndx"], 0)
            reasons["weird-shndx: %d" % sym["shndx"]] += 1

for k, v in sorted(reasons.items(), key=lambda kv: -kv[1]):
    print("%5d  %s" % (v, k))
