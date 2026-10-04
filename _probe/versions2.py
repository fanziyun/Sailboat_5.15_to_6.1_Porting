#!/usr/bin/env python3
"""Parse __versions with the CORRECT struct layout.

struct modversion_info {          # include/linux/module.h:38
        unsigned long crc;        # 8 bytes on aarch64
        char name[MODULE_NAME_LEN];   # MODULE_NAME_LEN = MAX_PARAM_PREFIX_LEN = 56
};

=> sizeof == 64 bytes, FIXED STRIDE. kernel/module.c:check_version() does
   num_versions = sh_size / sizeof(struct modversion_info)
which only makes sense for a fixed stride.

The earlier version of this parser assumed a packed, NUL-terminated,
8-byte-padded layout. That happened to give the right count for binder_gki
(22 == 1408/64) but would mis-parse any module whose symbol names exceed 8
bytes, and it produced the truncated fragments ("cepoint_android_vh_binder_reply")
that were previously blamed on the kernel rather than on the parser.

Symbol names live in a fixed 56-byte field, so a name simply runs to its NUL
inside the field; there is no length prefix and no continuation into the next
record.
"""
import collections
import glob
import os
import struct
import sys

STRIDE = 64          # sizeof(struct modversion_info) on aarch64
CRC_AT = 0
NAME_AT = 8
NAME_MAX = 56


def section_table(d):
    e_shoff = struct.unpack_from('<Q', d, 0x28)[0]
    e_shentsize = struct.unpack_from('<H', d, 0x3a)[0]
    e_shnum = struct.unpack_from('<H', d, 0x3c)[0]
    e_shstrndx = struct.unpack_from('<H', d, 0x3e)[0]
    secs = []
    for i in range(e_shnum):
        b = e_shoff + i * e_shentsize
        nameoff = struct.unpack_from('<I', d, b)[0]
        addr, off, size = struct.unpack_from('<QQQ', d, b + 16)
        secs.append((nameoff, addr, off, size))
    str_off = secs[e_shstrndx][2]

    def nm(off):
        end = d.find(b'\x00', str_off + off)
        return d[str_off + off:end].decode('utf-8', 'replace') if end >= 0 else ''

    return {nm(s[0]): s for s in secs if nm(s[0])}


def parse_versions(blob):
    """Return [(crc, name)] using the fixed 64-byte stride."""
    out = []
    n = len(blob) // STRIDE
    for i in range(n):
        base = i * STRIDE
        crc = struct.unpack_from('<Q', blob, base + CRC_AT)[0]
        field = blob[base + NAME_AT: base + NAME_AT + NAME_MAX]
        end = field.find(b'\x00')
        name = field[:end if end >= 0 else NAME_MAX].decode('utf-8', 'replace')
        if name:
            out.append((crc, name))
    return out


def load(path):
    d = open(path, 'rb').read()
    if d[:4] != b'\x7fELF':
        return None
    secs = section_table(d)
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
    return {'vermagic': vm, 'records': recs}


def self_test():
    p = 'vendor_ko/binder_gki.ko'
    if not os.path.exists(p):
        return None
    d = open(p, 'rb').read()
    secs = section_table(d)
    size = secs['__versions'][3]
    recs = parse_versions(d[secs['__versions'][2]: secs['__versions'][2] + size])
    expect = ['module_layout', '__tracepoint_android_vh_binder_preset',
              '__tracepoint_android_vh_binder_wait_for_work',
              '__tracepoint_android_vh_binder_trans',
              '__tracepoint_android_vh_binder_alloc_new_buf_locked',
              'cpu_hwcap_keys', 'arm64_const_caps_ready',
              '__ubsan_handle_cfi_check_fail_abort', 'tracepoint_probe_register',
              '__put_task_struct', '_raw_spin_unlock', 'refcount_warn_saturate',
              '_raw_spin_lock', 'rb_next', 'rb_first', '_printk',
              '__rcu_read_unlock', '__rcu_read_lock', 'mutex_unlock', 'mutex_lock']
    got = [n for _, n in recs]
    ok = got[:len(expect)] == expect
    frags = [g for g in got if len(g) < 8 and g not in ('rb_next', 'rb_first')]
    return ok, len(recs), size // STRIDE, frags


def main():
    src = sys.argv[1] if len(sys.argv) > 1 else 'vendor_ko'
    st = self_test()
    if st:
        ok, n, expect_n, frags = st
        print('SELF-TEST binder_gki.ko: %s' % ('PASS' if ok else 'FAIL'))
        print('  parsed %d records, section says %d, match=%s'
              % (n, expect_n, n == expect_n))
        print('  short fragments: %s' % (frags[:5] if frags else 'none'))
        print()

    imports = collections.Counter()
    rows = []
    for f in sorted(glob.glob(os.path.join(src, '*.ko'))):
        r = load(f)
        if not r:
            continue
        rows.append((os.path.basename(f), len(r['records'])))
        for _, name in r['records']:
            imports[name] += 1

    print('modules parsed: %d' % len(rows))
    rows.sort(key=lambda t: -t[1])
    print()
    print('=== TOP 15 BY CRC BINDING COUNT ===')
    for name, n in rows[:15]:
        print('  %-32s %d' % (name[:32], n))
    tot = sum(n for _, n in rows)
    print()
    print('total bindings : %d' % tot)
    print('distinct syms  : %d' % len(imports))
    print('median/module  : %d' % sorted(n for _, n in rows)[len(rows) // 2])
    print()
    print('=== 10 MOST SHARED ===')
    for s, c in imports.most_common(10):
        print('  %5d  %s' % (c, s))
    short = [s for s in imports if len(s) < 8]
    print()
    print('short-name symbols (sanity): %d %s' % (len(short), short[:6]))


if __name__ == '__main__':
    main()
