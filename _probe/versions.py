#!/usr/bin/env python3
"""Parse the __versions section of a stripped vendor .ko correctly.

Layout (confirmed by hexdump of binder_gki.ko):

    0x00000000  63dd2202 00000000  6d6f6475 6c655f6c   "module_l"
    0x00000010  61796f75 74000000  00000000 00000000   "ayout" + pad
    0x00000040  d3d63cf0 00000000  5f5f7472 61636570   next crc + name

i.e. struct modversion_info { unsigned long crc; char name[]; } where the linker
lays each record out with the 8-byte CRC first, the NUL-terminated name after it,
and the WHOLE RECORD padded to an 8-byte boundary. Names longer than 8 bytes
therefore appear to "spill" past the boundary, which is what makes naive parsing
produce fragments like "cepoint_android_vh_binder_reply".

The robust approach: walk the section, take 8 bytes as the crc, then scan forward
for the NUL that terminates the name. The name's end minus the record start,
rounded up to a multiple of 8, is the next record's offset.
"""
import collections
import glob
import os
import struct
import sys


def section_table(d):
    try:
        e_shoff = struct.unpack_from('<Q', d, 0x28)[0]
        e_shentsize = struct.unpack_from('<H', d, 0x3a)[0]
        e_shnum = struct.unpack_from('<H', d, 0x3c)[0]
        e_shstrndx = struct.unpack_from('<H', d, 0x3e)[0]
    except struct.error:
        return None
    if e_shoff == 0 or e_shnum == 0:
        return None
    secs = []
    for i in range(e_shnum):
        b = e_shoff + i * e_shentsize
        if b + 64 > len(d):
            return None
        nameoff = struct.unpack_from('<I', d, b)[0]
        addr, off, size = struct.unpack_from('<QQQ', d, b + 16)
        secs.append((nameoff, addr, off, size))
    if e_shstrndx >= len(secs):
        return None
    str_off = secs[e_shstrndx][2]

    def nm(off):
        end = d.find(b'\x00', str_off + off)
        if end < 0:
            return ''
        return d[str_off + off:end].decode('utf-8', 'replace')

    return {nm(s[0]): s for s in secs if nm(s[0])}


def _printable(bs):
    return all(48 <= c <= 57 or 65 <= c <= 90 or 97 <= c <= 122 or c in (95, 46) for c in bs)


def parse_versions(blob):
    """Return [(crc, symbol_name)] from a __versions section body."""
    out = []
    i = 0
    n = len(blob)
    while i + 8 <= n:
        crc = struct.unpack_from('<Q', blob, i)[0]
        # name starts right after the 8-byte crc
        j = i + 8
        # a name may run past an 8-byte boundary; scan printable chars and stop at
        # the first byte that is neither printable-identifier nor part of a run
        # that is followed by a NUL.
        start = j
        while j < n:
            c = blob[j]
            if _printable(bytes([c])):
                j += 1
                continue
            if c == 0:
                break
            # non-printable, non-NUL inside a name: treat as record end
            break
        if j > start and j < n and blob[j] == 0:
            name = blob[start:j].decode('utf-8', 'replace')
            out.append((crc, name))
            i = (j + 1 + 7) & ~7
        else:
            i += 8
    return out


def load(path):
    d = open(path, 'rb').read()
    if d[:4] != b'\x7fELF':
        return None
    secs = section_table(d)
    if secs is None:
        return None
    recs = []
    if '__versions' in secs:
        _, _, off, size = secs['__versions']
        recs = parse_versions(d[off:off + size])
    vm = ''
    if '.modinfo' in secs:
        _, _, off, size = secs['.modinfo']
        for chunk in d[off:off + size].split(b'\x00'):
            s = chunk.decode('utf-8', 'replace')
            if s.startswith('vermagic='):
                vm = s.split('=', 1)[1]
    counts = collections.Counter()
    crcs = {}
    for crc, name in recs:
        counts[name] += 1
        crcs[name] = crc
    return {
        'vermagic': vm,
        'symbols': counts,
        'crcs': crcs,
        'total': sum(counts.values()),
    }


def self_test():
    """Validate against a hexdump-verified module."""
    p = os.path.join('vendor_ko', 'binder_gki.ko')
    if not os.path.exists(p):
        return None
    r = load(p)
    expect = ['module_layout', '__tracepoint_android_vh_binder_preset',
              '__tracepoint_android_vh_binder_wait_for_work',
              '__tracepoint_android_vh_binder_trans',
              '__tracepoint_android_vh_binder_alloc_new_buf_locked',
              'cpu_hwcap_keys', 'arm64_const_caps_ready',
              '__ubsan_handle_cfi_check_fail_abort', 'tracepoint_probe_register',
              '__put_task_struct', '_raw_spin_unlock', 'refcount_warn_saturate',
              '_raw_spin_lock', 'rb_next', 'rb_first', '_printk',
              '__rcu_read_unlock', '__rcu_read_lock', 'mutex_unlock', 'mutex_lock']
    got = list(r['symbols'])
    ok = all(e in got for e in expect)
    frags = [g for g in got if len(g) < 8 and g not in ('rb_next', 'rb_first', '_printk')]
    return ok, len(got), frags, r['vermagic']


def main():
    src = sys.argv[1] if len(sys.argv) > 1 else 'vendor_ko'
    st = self_test()
    if st:
        ok, n, frags, vm = st
        print('SELF-TEST binder_gki.ko: %s  (%d symbols, fragments: %s, vermagic %s)'
              % ('PASS' if ok else 'FAIL', n, frags[:5] or 'none', vm))
        print()

    imports = collections.Counter()
    rows = []
    vermagics = collections.Counter()
    for f in sorted(glob.glob(os.path.join(src, '*.ko'))):
        r = load(f)
        if not r:
            continue
        vermagics[r['vermagic']] += 1
        rows.append((os.path.basename(f), r['total']))
        for s, c in r['symbols'].items():
            imports[s] += 1

    print('modules parsed: %d   vermagic: %s' % (len(rows), set(vermagics)))
    rows.sort(key=lambda t: -t[1])
    print()
    print('=== TOP 20 MODULES BY KERNEL-SYMBOL CRC BINDINGS ===')
    for name, n in rows[:20]:
        print('  %-32s %d' % (name[:32], n))
    tot = sum(n for _, n in rows)
    print()
    print('total CRC bindings: %d   distinct symbols: %d'
          % (tot, len(imports)))
    print('median bindings/module: %d'
          % sorted(n for _, n in rows)[len(rows) // 2])
    print()
    print('=== 25 MOST SHARED CRC BINDINGS ===')
    for s, c in imports.most_common(25):
        print('  %5d  %s' % (c, s))

    short = [s for s in imports if len(s) < 8]
    print()
    print('suspiciously short symbol names (parser-frag check): %d' % len(short))
    if short:
        print('  e.g.', short[:8])


if __name__ == '__main__':
    main()
