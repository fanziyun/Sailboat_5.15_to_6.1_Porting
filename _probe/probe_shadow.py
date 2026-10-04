#!/usr/bin/env python3
"""Compare original vs patched bytes at a VA; check r2's view vs file bytes."""
import os
import struct
import sys

sys.path.insert(0, "/mnt/c/Users/Administrator/StudioProjects/Sailboat_5.15_to_6.1_Porting/_probe")
from ko_patch import Elf, r2_section_vaddrs

W = os.path.expanduser("~/r2work")
orig = Elf(open(W + "/in/ipam.ko", "rb").read())
patched = Elf(open(W + "/tmp/ipam.patched.ko", "rb").read())
vaddrs = r2_section_vaddrs(W + "/in/ipam.ko")

va = int(sys.argv[1], 16)
# find owning section in ORIGINAL (non-NOBITS)
for s in orig.sections:
    if s["typ"] == 8:
        continue
    v = vaddrs.get(s["name"])
    if v is not None and v <= va < v + s["size"]:
        fo = s["off"] + (va - v)
        print("VA 0x%x in section %s (vaddr 0x%x), file offset 0x%x" % (va, s["name"], v, fo))
        print("  orig    bytes: %s" % orig.d[fo:fo + 8].hex())
        print("  patched bytes: %s" % patched.d[fo:fo + 8].hex())
        # is it a reloc site?
        for sec in orig.sections:
            if sec["typ"] != 4:
                continue
            tsec = orig.sections[sec["info"]]
            if tsec["name"] != s["name"]:
                continue
            for i in range(sec["size"] // 24):
                o = sec["off"] + i * 24
                r_offset, r_info, r_addend = struct.unpack_from("<QQq", orig.d, o)
                if v + r_offset == va:
                    print("  IS reloc site: type=%d symidx=%d addend=%d" %
                          (r_info & 0xFFFFFFFF, r_info >> 32, r_addend))
        break
else:
    print("VA not in any non-NOBITS section")
# .bss info
for s in orig.sections:
    if s["name"] == ".bss":
        print(".bss: vaddr=%s size=0x%x (covers 0x%x..0x%x)" %
              (hex(vaddrs[".bss"]), s["size"], vaddrs[".bss"], vaddrs[".bss"] + s["size"]))
