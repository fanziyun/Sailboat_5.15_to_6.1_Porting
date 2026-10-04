#!/usr/bin/env python3
"""Histogram of aarch64 relocation types across all vendor .ko files."""
import os
import struct
import sys
from collections import Counter

DIR = sys.argv[1] if len(sys.argv) > 1 else "/mnt/c/Users/Administrator/StudioProjects/Sailboat_5.15_to_6.1_Porting/_probe/vendor_ko"

RTYPE = {
    257: "ABS64", 258: "ABS32", 259: "ABS16", 260: "PREL64", 261: "PREL32",
    275: "ADR_PREL_PG_HI21", 276: "ADR_PREL_LO21", 277: "ADD_ABS_LO12_NC",
    278: "LDST8_ABS_LO12_NC", 279: "TSTBR", 280: "CONDBR", 282: "JUMP26",
    283: "CALL26", 284: "JUMP26_RELAX?/GOT", 285: "GOTPAGE", 286: "GOT12",
    287: "GOTLOADPAGE", 288: "LDST64", 299: "LDST128", 1024: "IRELATIVE",
    1027: "TLSDESC", 1028: "IRELATIVE?", 1030: "ABS32", 1031: "ABS64",
}

def u16(b, o): return struct.unpack_from("<H", b, o)[0]
def u32(b, o): return struct.unpack_from("<I", b, o)[0]
def u64(b, o): return struct.unpack_from("<Q", b, o)[0]

def scan(path):
    d = open(path, "rb").read()
    if u32(d, 0) != 0x464C457F: return None
    e_shoff = u64(d, 0x28)
    e_shentsize = u16(d, 0x3A)
    e_shnum = u16(d, 0x3C)
    e_shstrndx = u16(d, 0x3E)
    secs = []
    for i in range(e_shnum):
        o = e_shoff + i * e_shentsize
        secs.append(dict(
            name=u32(d, o), typ=u32(d, o+4), flags=u64(d, o+8),
            addr=u64(d, o+16), off=u64(d, o+24), size=u64(d, o+32),
            link=u32(d, o+40), entsize=u64(d, o+56)))
    hist = Counter()
    for s in secs:
        if s["typ"] != 4:  # SHT_RELA
            continue
        data = d[s["off"]:s["off"]+s["size"]]
        for j in range(0, len(data) - 24 + 1, 24):
            r_info = u64(data, j + 8)
            hist[r_info & 0xFFFFFFFF] += 1
    return hist

total = Counter()
per_file_missing = 0
for fn in sorted(os.listdir(DIR)):
    if not fn.endswith(".ko"): continue
    h = scan(os.path.join(DIR, fn))
    if h is None: continue
    total.update(h)
for t, c in sorted(total.items()):
    print("%4d %-22s %8d" % (t, RTYPE.get(t, "?"), c))
