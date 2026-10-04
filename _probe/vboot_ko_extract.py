#!/usr/bin/env python3
"""Extract all .ko from vendor_boot ramdisk cpio into outdir, list those missing from vendor_ko."""
import lz4.block
import os
import struct
import sys

VB = sys.argv[1]
OUTDIR = sys.argv[2]
VKDIR = sys.argv[3]

os.makedirs(OUTDIR, exist_ok=True)
d = open(VB, "rb").read()
off = d.find(struct.pack("<I", 0x184C2102)) + 4
out = bytearray()
while off + 4 <= len(d):
    (comp, ) = struct.unpack_from("<I", d, off)
    off += 4
    if comp == 0 or comp > 8 * 1024 * 1024:
        break
    out += lz4.block.decompress(d[off:off + comp], uncompressed_size=8 * 1024 * 1024)
    off += comp

saved = []
o = 0
while o + 110 <= len(out):
    if out[o:o + 6] != b"070701":
        break
    hf = lambda i: int(out[o + 6 + i * 8: o + 14 + i * 8], 16)
    namesize, filesize, mode = hf(11), hf(6), hf(1)
    name = out[o + 110: o + 110 + namesize - 1].decode(errors="replace")
    fo = (o + 110 + namesize + 3) & ~3
    if name.endswith(".ko") and (mode & 0o170000) == 0o100000:
        data = bytes(out[fo:fo + filesize])
        with open(os.path.join(OUTDIR, os.path.basename(name)), "wb") as f:
            f.write(data)
        saved.append(os.path.basename(name))
    o = (fo + filesize + 3) & ~3
    if name == "TRAILER!!!":
        break
print("saved %d .ko -> %s" % (len(saved), OUTDIR))

vk = set(os.listdir(VKDIR))
missing = sorted(set(saved) - vk)
print("missing from vendor_dlkm corpus (%d)" % len(missing))
with open(os.path.join(OUTDIR, "..", "vendor_boot_missing_list.txt"), "w") as f:
    f.write("\n".join(missing) + "\n")
