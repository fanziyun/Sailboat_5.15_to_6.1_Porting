#!/usr/bin/env python3
"""List .ko inside vendor_boot_a.img ramdisk, diff against vendor_ko (vendor_dlkm)."""
import lz4.block
import struct
import sys

VB = sys.argv[1]
VKDIR = sys.argv[2]

d = open(VB, "rb").read()
MAGIC = 0x184C2102
off = d.find(MAGIC.to_bytes(4, "little"))
if off < 0:
    sys.exit("no lz4 legacy magic")
off += 4
out = bytearray()
while off + 4 <= len(d):
    (comp, ) = struct.unpack_from("<I", d, off)
    off += 4
    if comp == 0 or comp > 8 * 1024 * 1024:
        break
    out += lz4.block.decompress(d[off:off + comp], uncompressed_size=8 * 1024 * 1024)
    off += comp
print("ramdisk cpio bytes: %d" % len(out))

# walk newc cpio, record .ko names
ko_names = []
o = 0
while o + 110 <= len(out):
    if out[o:o + 6] != b"070701":
        break
    def hf(i):
        return int(out[o + 6 + i * 8: o + 14 + i * 8], 16)
    namesize = hf(11)
    filesize = hf(6)
    name = out[o + 110: o + 110 + namesize - 1].decode(errors="replace")
    fo = o + 110 + namesize
    fo = (fo + 3) & ~3
    if name.endswith(".ko"):
        ko_names.append(name)
    o = fo + filesize
    o = (o + 3) & ~3
    if name == "TRAILER!!!":
        break
print("vendor_boot .ko count: %d" % len(ko_names))

vk = set()
import os
for f in os.listdir(VKDIR):
    if f.endswith(".ko"):
        vk.add(f)
vb = set(n.split("/")[-1] for n in ko_names)
print("vendor_ko (vendor_dlkm): %d" % len(vk))
print("in vendor_boot but NOT in vendor_dlkm (%d):" % len(vb - vk))
for n in sorted(vb - vk):
    print("  " + n)
print("in vendor_dlkm but NOT in vendor_boot (%d)" % len(vk - vb))
