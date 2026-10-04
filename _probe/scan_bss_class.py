#!/usr/bin/env python3
"""Classify bss overlap per module: exec (fatal) vs data (minor), with byte counts."""
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

exec_hit, data_only = [], []
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
            raw.append((u32(d, o), u32(d, o + 4), u64(d, o + 8), u64(d, o + 0x18), u64(d, o + 0x20)))
        so, sl = raw[shstrndx][3], raw[shstrndx][4]
        strtab = d[so:so + sl]
        nm = lambda no: strtab[no:strtab.index(b"\0", no)].decode(errors="replace")
        vaddrs = r2_section_vaddrs(path)
        brange = None
        for (no, typ, fl, off, sz) in raw:
            if typ == 8:
                n = nm(no)
                if n in vaddrs:
                    brange = (vaddrs[n], vaddrs[n] + sz)
                    break
        if not brange:
            continue
        execb = 0
        datab = 0
        for (no, typ, fl, off, sz) in raw:
            if typ == 8 or sz == 0:
                continue
            n = nm(no)
            if n not in vaddrs:
                continue
            v = vaddrs[n]
            lo = max(v, brange[0])
            hi = min(v + sz, brange[1])
            if hi > lo:
                if fl & 0x4:  # SHF_EXECINSTR
                    execb += hi - lo
                else:
                    datab += hi - lo
        if execb:
            exec_hit.append((fn[:-3], execb, datab))
        elif datab:
            data_only.append((fn[:-3], execb, datab))

print("EXEC-overlap (must redo): %d" % len(exec_hit))
for m, e, db in sorted(exec_hit, key=lambda x: -x[1])[:40]:
    print("  %-28s exec_overlap=%d data_overlap=%d" % (m, e, db))
print("data-only overlap (minor): %d" % len(data_only))
