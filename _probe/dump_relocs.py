#!/usr/bin/env python3
"""Dump relocations of one .ko: type, target symbol, offset (section-relative)."""
import struct
import sys

path = sys.argv[1]
RTYPE = {257: "ABS64", 260: "PREL64", 261: "PREL32", 275: "ADR_PREL_PG_HI21",
         277: "ADD_ABS_LO12_NC", 278: "LDST8_ABS_LO12_NC", 279: "TSTBR14",
         280: "CONDBR19", 282: "JUMP26", 283: "CALL26", 284: "GOT_LD_PREL19",
         285: "GOT_ADRP_PAGE", 286: "GOT_LD64", 287: "GOT_ADRP_MODULE",
         288: "GOT_GOTPCREL", 289: "GOT_CALL", 299: "LDST128_ABS_LO12_NC"}

d = open(path, "rb").read()
u16 = lambda o: struct.unpack_from("<H", d, o)[0]
u32 = lambda o: struct.unpack_from("<I", d, o)[0]
u64 = lambda o: struct.unpack_from("<Q", d, o)[0]
e_shoff = u64(0x28)
e_shentsize = u16(0x3A)
e_shnum = u16(0x3C)
secs = []
for i in range(e_shnum):
    o = e_shoff + i * e_shentsize
    s = dict(name_off=u32(o), typ=u32(o+4), flags=u64(o+8), off=u64(o+24), size=u64(o+32), link=u32(o+40))
    secs.append(s)
shstr = secs[u16(0x3E)]
def secname(s):
    o = shstr["off"] + s["name_off"]
    return d[o:d.index(b"\0", o)].decode()

for s in secs:
    if s["typ"] != 4:
        continue
    target_sec = secs[s["link"] - 1] if 0 < s["link"] <= len(secs) else None
    print("RELA sec -> target sec idx %d" % s["link"])
    data = d[s["off"]:s["off"]+s["size"]]
    for j in range(0, len(data) - 24 + 1, 24):
        r_offset, r_info, r_addend = struct.unpack_from("<QQq", data, j)
        sym_idx = r_info >> 32
        rtype = r_info & 0xFFFFFFFF
        # find symtab via sh_link of reloc section
        print("  off=0x%-6x type=%-16s (%d) symidx=%d addend=%d" % (
            r_offset, RTYPE.get(rtype, "?"), rtype, sym_idx, r_addend))
