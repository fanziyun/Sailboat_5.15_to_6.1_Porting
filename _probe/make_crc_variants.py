#!/usr/bin/env python3
"""Corrupt specific CRCs in crcprobe.ko to test check_version() leniency.

Baseline (built against android13-5.15-lts @ 17730f38b70b):
    a59207cd  module_layout     <- this tree's CRC
    92997ed8  _printk           <- this tree's CRC

What the 293 vendor modules carry for module_layout:
    0222dd63  module_layout     <- DIFFERENT from 5.15.220's

Variants:
  crc_ok.ko     both CRCs left as built            -> must load
  crc_vendor.ko module_layout -> 0222dd63 (vendor) -> tells us if vendor CRC passes
  crc_bad.ko    module_layout -> deadbeef (garbage)-> tells us if CRCs are checked at all
  crc_vbad.ko   _printk       -> deadbeef          -> second symbol, confirms it is per-symbol

check_version() in kernel/module.c compares versions[i].crc == crcval and on
mismatch does `goto bad_version` which returns 0 -> load fails with
"disagrees about version of symbol". If crc_vendor/crc_bad still load, the
kernel's check_version() has been relaxed the same way check_modinfo() was.
"""
import struct
import sys

SRC = '/home/fanziyun/crc/crcprobe.ko'
STRIDE = 64
NAME_OFF = 8
NAME_MAX = 56

VARIANTS = {
    # filename : {symbol_name: new_crc_u32}
    'crc_ok.ko':     {},
    'crc_vendor.ko': {'module_layout': 0x0222dd63},
    'crc_bad.ko':    {'module_layout': 0xdeadbeef},
    'crc_vbad.ko':   {'_printk': 0xdeadbeef},
}


def sections(d):
    e_shoff = struct.unpack_from('<Q', d, 0x28)[0]
    e_shentsize = struct.unpack_from('<H', d, 0x3a)[0]
    e_shnum = struct.unpack_from('<H', d, 0x3c)[0]
    e_shstrndx = struct.unpack_from('<H', d, 0x3e)[0]
    secs = []
    for i in range(e_shnum):
        b = e_shoff + i * e_shentsize
        no = struct.unpack_from('<I', d, b)[0]
        a, off, size = struct.unpack_from('<QQQ', d, b + 16)
        secs.append((no, a, off, size))
    st = secs[e_shstrndx][2]

    def nm(o):
        e = d.find(b'\x00', st + o)
        return d[st + o:e].decode('utf-8', 'replace')

    return {nm(s[0]): s for s in secs if nm(s[0])}


def read_versions(blob):
    out = []
    for i in range(len(blob) // STRIDE):
        base = i * STRIDE
        crc = struct.unpack_from('<Q', blob, base)[0]
        field = blob[base + NAME_OFF: base + NAME_OFF + NAME_MAX]
        end = field.find(b'\x00')
        name = field[:end if end >= 0 else NAME_MAX].decode()
        if name:
            out.append((base, crc, name))
    return out


base = bytearray(open(SRC, 'rb').read())
secs = sections(base)
key = '__versions'
if key not in secs:
    raise SystemExit('no __versions in %s' % SRC)
voff, vsize = secs[key][2], secs[key][3]
body = bytes(base[voff:voff + vsize])
recs = read_versions(body)
print('baseline __versions (size=%d, stride=%d -> %d records):' % (vsize, STRIDE, len(recs)))
for abscrc, crc, name in recs:
    print('   +%-6d %08x  %s' % (abscrc, crc & 0xffffffff, name))

for fname, patch in VARIANTS.items():
    data = bytearray(base)
    for absoff, crc, name in recs:
        if name in patch:
            # crc is unsigned long (8 bytes); write the low 32 bits, clear the top
            struct.pack_into('<Q', data, voff + absoff, patch[name] & 0xffffffff)
    out = '/home/fanziyun/crc/' + fname
    open(out, 'wb').write(bytes(data))
    desc = 'pristine' if not patch else ', '.join(
        '%s=%08x' % (k, v) for k, v in patch.items())
    print('wrote %-16s (%s)' % (fname, desc))
