#!/usr/bin/env python3
"""Debug: show .init.text section header and the bytes at the BL site, before/after patch."""
import struct, sys

for path in sys.argv[1:]:
    d = open(path, "rb").read()
    u16 = lambda o: struct.unpack_from("<H", d, o)[0]
    u32 = lambda o: struct.unpack_from("<I", d, o)[0]
    u64 = lambda o: struct.unpack_from("<Q", d, o)[0]
    e_shoff, e_shentsize, e_shnum = u64(0x28), u16(0x3A), u16(0x3C)
    shstrndx = u16(0x3E)
    secs = []
    for i in range(e_shnum):
        o = e_shoff + i * e_shentsize
        secs.append(dict(name_off=u32(o), off=u64(o+0x18), size=u64(o+0x20)))
    shstr = secs[shstrndx]
    for i, s in enumerate(secs):
        o = shstr["off"] + s["name_off"]
        s["name"] = bytes(d[o:d.index(b"\0", o)]).decode()
    for i, s in enumerate(secs):
        if s["name"] == ".init.text":
            site = s["off"] + 0x34
            print("%s: .init.text idx=%d sh_off=0x%x  site file_off=0x%x bytes=%s" %
                  (path.split("/")[-1], i, s["off"], site, d[site:site+4].hex()))
