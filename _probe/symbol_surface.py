#!/usr/bin/env python3
"""Extract kernel-symbol dependency surface from vendor .ko modules.

For each module, read:
  __ksymtab_strings -> the symbols this module IMPORTS from the kernel
  __versions         -> the (symbol, crc) pairs modversions will check
  .modinfo           -> vermagic

The CRC set is what actually gates loading on a kernel built from a different
source/config. Symbols whose struct layout CRC differs between 5.15 and 6.1 are
the ones that make a recompile mandatory.
"""
import struct
import sys
import glob
import os
import collections


def parse(path):
    d = open(path, 'rb').read()
    if d[:4] != b'\x7fELF':
        return None

    def u16(off):
        return struct.unpack_from('<H', d, off)[0]

    def u64(off):
        return struct.unpack_from('<Q', d, off)[0]

    e_shoff = u64(0x28)
    e_shentsize = u16(0x3a)
    e_shnum = u16(0x3c)
    e_shstrndx = u16(0x3e)

    secs = []
    for i in range(e_shnum):
        b = e_shoff + i * e_shentsize
        nameoff = struct.unpack_from('<I', d, b)[0]
        addr, off, size = struct.unpack_from('<QQQ', d, b + 16)
        secs.append((nameoff, addr, off, size))

    sh = secs[e_shstrndx]
    str_off = sh[2]

    def nm(off):
        end = d.index(b'\x00', str_off + off)
        return d[str_off + off:end].decode('utf-8', 'replace')

    by_name = {nm(s[0]): s for s in secs}
    return d, by_name, nm


def extract(path):
    r = parse(path)
    if r is None:
        return None
    d, by_name, nm = r

    modinfo = b''
    if '.modinfo' in by_name:
        _, _, o, s = by_name['.modinfo']
        modinfo = d[o:o + s]
    vermagic = ''
    for chunk in modinfo.split(b'\x00'):
        if chunk.startswith(b'vermagic='):
            vermagic = chunk.decode('utf-8', 'replace').split('=', 1)[1]

    # __ksymtab and __ksymtab_strings pair up index-for-index in kernel builds
    imports = []
    if '__ksymtab_strings' in by_name:
        _, _, o, s = by_name['__ksymtab_strings']
        blob = d[o:o + s]
        imports = sorted(set(x.decode('utf-8', 'replace') for x in blob.split(b'\x00') if len(x) >= 3))

    # __versions is an array of (crc32, name-string) pairs laid out as
    # two parallel arrays: kernel uses struct {unsigned long crc; const char *name;}
    # but in the section the layout on aarch64 LE with relocation is:
    # struct modversion_info { unsigned long crc; const char name[]; } -- 8-byte
    # aligned. Extract the name strings that sit after each 8-byte crc.
    crcs = 0
    if '__versions' in by_name:
        _, _, o, s = by_name['__versions']
        blob = d[o:o + s]
        i = 0
        while i + 8 <= len(blob):
            crcs += 1
            end = blob.find(b'\x00', i + 8)
            if end < 0:
                break
            i = ((end + 1) + 7) & ~7

    return {
        'vermagic': vermagic,
        'imports': imports,
        'n_imports': len(imports),
        'n_versioned': crcs,
    }


def main():
    files = sorted(glob.glob(os.path.join(sys.argv[1], '*.ko')))
    if not files:
        print('no .ko found')
        return

    all_imports = collections.Counter()
    vermagics = collections.Counter()
    rows = []
    for f in files:
        r = extract(f)
        if r is None:
            continue
        vermagics[r['vermagic']] += 1
        rows.append((os.path.basename(f), r['n_imports'], r['n_versioned']))
        for s in r['imports']:
            all_imports[s] += 1

    print('=== VERMAGIC ===')
    for v, c in vermagics.most_common():
        print('  %4d  %s' % (c, v))

    rows.sort(key=lambda t: -t[1])
    print()
    print('=== TOP 25 BY IMPORT COUNT (how much kernel ABI surface they touch) ===')
    for name, ni, nv in rows[:25]:
        print('  %-34s imports=%-4d versioned=%d' % (name, ni, nv))

    tot = sum(ni for _, ni, _ in rows)
    print()
    print('modules analysed: %d   total import slots: %d   distinct symbols: %d'
          % (len(rows), tot, len(all_imports)))

    print()
    print('=== 60 MOST-WIDELY IMPORTED SYMBOLS ===')
    for s, c in all_imports.most_common(60):
        print('  %5d  %s' % (c, s))


if __name__ == '__main__':
    main()
