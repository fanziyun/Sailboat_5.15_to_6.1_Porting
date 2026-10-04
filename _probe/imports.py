#!/usr/bin/env python3
"""Recover the kernel-symbol import list from a stripped vendor .ko.

A final linked .ko has no .symtab, so imported symbols cannot be listed the
obvious way. But `__versions` (written by modpost) is an array of

    struct modversion_info {
        unsigned long crc;   // 8 bytes on aarch64
        const char name[];   // NUL-terminated, then padded to 8-byte alignment
    };

so the symbol names recoverable there are exactly the symbols the module
imported from the kernel and bound a CRC to. That is both the import list AND
the exact set of CRCs the loader (check_modinfo / check_version) compares
against the running kernel.

This is the correct instrument for answering "how much kernel ABI surface does
this module touch".
"""
import collections
import glob
import os
import struct
import sys


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
        end = d.index(b'\x00', str_off + off)
        return d[str_off + off:end].decode('utf-8', 'replace')

    return {nm(s[0]): s for s in secs}


def parse_versions(d, secs):
    """Return {symbol_name: crc} parsed out of the __versions section."""
    out = {}
    if '__versions' not in secs:
        return out
    _, _, off, size = secs['__versions']
    blob = d[off:off + size]
    i = 0
    n = len(blob)
    while i + 8 <= n:
        crc = struct.unpack_from('<Q', blob, i)[0]
        end = blob.find(b'\x00', i + 8)
        if end < 0:
            break
        name = blob[i + 8:end].decode('utf-8', 'replace')
        if name and len(name) < 200 and all(32 <= ord(c) < 127 for c in name):
            out[name] = crc
        i = (end + 1 + 7) & ~7
    return out


def parse_modinfo(d, secs):
    if '.modinfo' not in secs:
        return {}
    _, _, off, size = secs['.modinfo']
    info = {}
    for chunk in d[off:off + size].split(b'\x00'):
        s = chunk.decode('utf-8', 'replace')
        if '=' in s:
            k, v = s.split('=', 1)
            info[k] = v
    return info


def load(path):
    d = open(path, 'rb').read()
    if d[:4] != b'\x7fELF':
        return None
    secs = section_table(d)
    return {
        'vermagic': parse_modinfo(d, secs).get('vermagic'),
        'versions': parse_versions(d, secs),
    }


# Symbols whose struct layout / signature materially changed between 5.15 and 6.1.
# This list is a conservative heuristic: presence here means "this import almost
# certainly cannot be satisfied by a 6.1 kernel either way".
CHANGED = {
    'devm_ioremap_resource': 'stable-ish, signature same',
    'platform_get_resource': 'stable',
    'proc_ops': 'struct proc_ops vs file_operations API changed 5.6+, stable by 6.1',
    'register_shrinker': 'shrinker API changed (count/scan_objects split)',
    'sched_setscheduler': 'stable signature',
    'get_user_pages': 'gup_flags FOLL_* reworked heavily',
    'kernel_thread': 'removed unexported variants',
    'security_add_hooks': 'lsm hook list changed every release',
    'kthread_create_worker': 'reworked',
    'timer_setup': 'init_timer removed, from_timer reworked',
    'dma_buf_attach': 'dma_buf ops reworked (dma_buf_dynamic_attach, map_dma_buf)',
    'register_netdev': 'net_device_ops stable, netdev fields moved',
    'netif_napi_add': 'stable-ish',
    'iommu_map': 'iommu_ops reworked (iommu_domain_alloc signature)',
    'drm_mode': 'drm core reworked heavily',
    'component_add': 'stable-ish',
    'snd_soc_register_component': 'ASoC component struct reworked repeatedly',
    'videobuf2_dma_contig_set_ops': 'vb2 reworked',
    'dma_alloc_coherent': 'stable',
    'devfreq_add': 'devfreq reworked',
    'build_skb': 'reworked',
    'bpf_prog_put': 'verifier/BPF changed',
    'rcu_read_lock': 'RCU stable signature',
}


def main():
    src = sys.argv[1] if len(sys.argv) > 1 else 'vendor_ko'
    files = sorted(glob.glob(os.path.join(src, '*.ko')))
    imports = collections.Counter()
    rows = []
    vermagics = collections.Counter()

    for f in files:
        r = load(f)
        if not r:
            continue
        vermagics[r['vermagic']] += 1
        for name, crc in r['versions'].items():
            imports[name] += 1
        rows.append((os.path.basename(f), len(r['versions'])))

    print('modules parsed: %d' % len(rows))
    print('vermagic:', set(vermagics))
    print()
    print('=== TOP 30 MODULES BY KERNEL-SYMBOL IMPORT COUNT ===')
    print('%-32s %s' % ('module', 'bound symbols'))
    for name, n in sorted(rows, key=lambda t: -t[1])[:30]:
        print('%-32s %d' % (name[:32], n))
    tot = sum(n for _, n in rows)
    print()
    print('total symbol bindings: %d   distinct kernel symbols: %d'
          % (tot, len(imports)))
    print('median bindings/module: %d' % sorted(n for _, n in rows)[len(rows) // 2])
    print()
    print('=== 40 MOST SHARED KERNEL SYMBOLS (each needs a matching CRC on 6.1) ===')
    for s, c in imports.most_common(40):
        print('  %5d  %s' % (c, s))

    hit = {s: c for s, c in imports.items() if s in CHANGED}
    if hit:
        print()
        print('=== bindings touching known-changed 5.15->6.1 symbols ===')
        for s, c in sorted(hit.items(), key=lambda t: -t[1]):
            print('  %5d  %s   (%s)' % (c, s, CHANGED[s]))


if __name__ == '__main__':
    main()
