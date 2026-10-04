#!/usr/bin/env python3
"""Scan corpus: which modules have .bss VA ranges overlapping other sections?"""
import os
import struct
import sys

sys.path.insert(0, "/mnt/c/Users/Administrator/StudioProjects/Sailboat_5.15_to_6.1_Porting/_probe")
from ko_patch import r2_section_vaddrs

DIRS = ["/mnt/c/Users/Administrator/StudioProjects/Sailboat_5.15_to_6.1_Porting/_probe/vendor_ko",
        "/mnt/c/Users/Administrator/StudioProjects/Sailboat_5.15_to_6.1_Porting/_probe/vendor_boot_ko"]
u16 = lambda d, o: struct.unpack_from("<H", d, o)[0]
u32 = lambda d, o: struct.unpack_from("<I", d, o)[0]
u64 = lambda d, o: struct.unpack_from("<Q", d, o)[0]

affected = []
for dd in DIRS:
    for fn in sorted(os.listdir(dd)):
        if not fn.endswith(".ko"):
            continue
        path = os.path.join(dd, fn)
        d = open(path, "rb").read()
        e_shoff = u64(d, 0x28)
        e_shentsize = u16(d, 0x3A)
        e_shnum = u16(d, 0x3C)
        shstrndx = u16(d, 0x3E)
        raw = []
        for i in range(e_shnum):
            o = e_shoff + i * e_shentsize
            raw.append((u32(d, o), u32(d, o + 4), u64(d, o + 0x18), u64(d, o + 0x20)))
        so = raw[shstrndx][2]
        sl = raw[shstrndx][3]
        strtab = d[so:so + sl]

        def nm(no):
            e = strtab.index(b"\0", no)
            return strtab[no:e].decode(errors="replace")

        vaddrs = r2_section_vaddrs(path)
        brange = None
        for (no, typ, off, sz) in raw:
            if typ == 8:
                n = nm(no)
                if n in vaddrs:
                    brange = (vaddrs[n], vaddrs[n] + sz)
                    break
        if not brange:
            continue
        for (no, typ, off, sz) in raw:
            if typ == 8 or sz == 0:
                continue
            n = nm(no)
            if n not in vaddrs:
                continue
            v = vaddrs[n]
            if v < brange[1] and brange[0] < v + sz:
                affected.append((fn[:-3], n, hex(v), hex(brange[0]), hex(brange[1])))
                break

print("affected modules: %d" % len(affected))
for a in affected:
    print("  %-24s overlaps=%s va=%s bss=[%s..%s)" % a)
