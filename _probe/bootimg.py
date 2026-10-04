#!/usr/bin/env python3
"""Identify a boot image: parse v0-v4 headers, locate kernel/ramdisk/dtblob."""
import struct
import sys


def u32(b, o):
    return struct.unpack_from('<I', b, o)[0]


def parse(path):
    d = open(path, 'rb').read()
    n = len(d)
    print('file: %s  size=%d (%.2f MB)' % (path, n, n / 1e6))
    sig = d[:8]
    print('signature: %r' % sig)

    if sig != b'ANDROID!':
        # Could be a vendor_boot (VNDRBOOT) or init_boot, or raw kernel
        if d[:8] == b'VNDRBOOT':
            print('=> vendor_boot image')
            return
        print('=> NOT a boot image (no ANDROID! magic)')
        return

    print()
    print('=== common boot header (v0..v3 shared prefix) ===')
    kernel_size = u32(d, 8)
    kernel_addr = u32(d, 12)
    ramdisk_size = u32(d, 16)
    ramdisk_addr = u32(d, 20)
    second_size = u32(d, 24)
    second_addr = u32(d, 28)
    tags_addr = u32(d, 32)
    page_size = u32(d, 36)
    dtree_size = u32(d, 40)
    os_ver = u32(d, 44)
    name = d[48:48 + 16].split(b'\x00')[0].decode('latin1')
    cmdline = d[64:64 + 512].split(b'\x00')[0].decode('latin1')
    print('  kernel_size  : %d (%.2f MB)' % (kernel_size, kernel_size / 1e6))
    print('  kernel_addr  : 0x%X' % kernel_addr)
    print('  ramdisk_size : %d' % ramdisk_size)
    print('  ramdisk_addr : 0x%X' % ramdisk_addr)
    print('  second_size  : %d' % second_size)
    print('  tags_addr    : 0x%X' % tags_addr)
    print('  page_size    : %d' % page_size)
    print('  dtree_size   : %d' % dtree_size)
    print('  os_version   : %d,%d,%d' % ((os_ver >> 14) & 0x7f, (os_ver >> 8) & 0x7f, os_ver & 0xff))
    print('  product_name : %r' % name)
    print('  cmdline      : %r' % cmdline[:120])

    # header version lives at offset 40 in the v3+ extension; for v0/v2 it is absent.
    # In the modern layout, boot_img_hdr_v3 has header_version right after the v0 fields,
    # but AOSP put it at the same offset as dtree_size historically. Detect robustly:
    hv = None
    if n > 4096 and d[4096:4104] == b'VNDRBOOT':
        print('  => vendor_boot payload embedded')
    # v3/v4: header_version field exists
    if kernel_size and kernel_size < n and page_size:
        hv_guess = u32(d, 40) if False else None

    # Try to find header_version by scanning the first 4KB for a plausible 3 or 4
    for off in (56, 60, 64, 68, 72):
        v = u32(d, off)
        if v in (3, 4):
            print('  candidate header_version=%d at +%d' % (v, off))

    # Section layout
    if page_size in (4096, 8192, 16384, 2048, 65536, 131072, 262144):
        print()
        print('=== section offsets (page_size=%d) ===' % page_size)
        base = page_size
        koff = base
        print('  kernel   @ 0x%X  size %d' % (koff, kernel_size))
        roff = koff + ((kernel_size + page_size - 1) // page_size) * page_size
        print('  ramdisk  @ 0x%X  size %d' % (roff, ramdisk_size))
        soff = roff + ((ramdisk_size + page_size - 1) // page_size) * page_size
        print('  second   @ 0x%X  size %d' % (soff, second_size))
        # dtb (v0/v1 only)
        if dtree_size:
            doff = soff + ((second_size + page_size - 1) // page_size) * page_size
            print('  dtb      @ 0x%X  size %d' % (doff, dtree_size))
        # sniff kernel magic
        ksig = d[koff:koff + 8]
        print()
        print('=== kernel blob magic @ 0x%X : %r ===' % (koff, ksig))
        if ksig[:4] == b'\x1f\x8b\x08':
            print('  => gzip-compressed kernel (Image.gz)')
        elif ksig[:2] == b'\x02\x21':
            print('  => LZ4-compressed kernel')
        elif ksig[:4] == b'\x4c\x5a\x34\x00':
            print('  => lz4 legacy')
        elif d[koff:koff + 20].startswith(b'ARM\x64') or ksig[:4] == b'ARMd':
            print('  => raw Image')
    else:
        print()
        print('!! implausible page_size=%d -- not a standard Android boot image' % page_size)


if __name__ == '__main__':
    for p in sys.argv[1:]:
        parse(p)
        print()
