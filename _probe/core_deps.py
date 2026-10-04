#!/usr/bin/env python3
"""Separate core-kernel symbol imports from vendor-internal ones.

Only the core-kernel imports are affected by a 5.15 -> 6.1 kernel change.
Vendor-internal symbols (cam_*, audio_prm_*, msm_*, btpower_*, ...) are
satisfied by OTHER vendor .ko in the same set, so they move together and are
irrelevant to whether a different kernel can host them.
"""
import collections
import glob
import os
import sys

import symbol_surface

CORE_PREFIXES = [
    'devm_ioremap_resource', 'platform_get_resource', 'platform_driver_register',
    'platform_device_register', 'regmap_update_bits', 'regmap_read',
    'regmap_write', 'sched_setscheduler', 'get_user_pages', 'pin_user_pages',
    'vmalloc_user', 'register_shrinker', 'alloc_workqueue', 'kernel_thread',
    'bpf_prog_put', 'security_add_hooks', 'snd_soc_register_component',
    'videobuf2_', 'dma_buf_attach', 'iommu_map', 'clk_bulk_prepare',
    'of_platform_device_create', 'gpiochip_add_data', 'input_register',
    'request_firmware_nowarn', 'sysfs_create_file', 'strncpy_from_user',
    'access_ok', 'kthread_create_worker', 'blk_mq_', 'drm_mode_',
    'component_add', 'proc_create', 'seq_printf', 'copy_from_user',
    'kmem_cache_create', 'dev_set_name', 'device_add', 'driver_register',
    'i2c_new', 'spi_register', 'usb_register', 'of_property_read',
    'dev_pm_ops', 'register_netdev', 'netlink_', 'timer_setup', 'pwm_apply',
    'devfreq_add', 'devfreq_add_governor', 'thermal_zone', 'rcu_read_lock',
    'synchronize_rcu', 'kfree_skb', 'build_skb', 'napi_schedule',
    'netif_napi_add', 'dma_alloc_coherent', 'firmware_request',
    'ioremap', 'iounmap', 'mutex_lock', 'spin_lock', 'list_add', 'mutex',
    'printk', 'pr_err', 'pr_info', 'snprintf', 'kstrdup', 'krealloc',
    'kasprintf', 'try_module_get', 'module_put',
]


def main():
    src = sys.argv[1] if len(sys.argv) > 1 else 'vendor_ko'
    core_hit = collections.Counter()
    rows = []

    for f in sorted(glob.glob(os.path.join(src, '*.ko'))):
        r = symbol_surface.extract(f)
        if not r:
            continue
        hits = set()
        for s in r['imports']:
            for c in CORE_PREFIXES:
                if s == c or s.startswith(c):
                    hits.add(s)
                    core_hit[s] += 1
                    break
        rows.append((os.path.basename(f), r['n_imports'], r['n_versioned'], len(hits), sorted(hits)))

    print('=== 30 modules most dependent on CORE-KERNEL symbols ===')
    print('%-32s %8s %7s %6s' % ('module', 'imports', 'verd', 'core'))
    for m, i, v, c, h in sorted(rows, key=lambda t: -t[3])[:30]:
        print('%-32s %8d %7d %6d' % (m[:32], i, v, c))

    n_with = sum(1 for r in rows if r[3] > 0)
    n_tot = len(rows)
    print()
    print('modules importing >=1 core-kernel symbol : %d / %d' % (n_with, n_tot))
    print('distinct core-kernel symbols touched     : %d' % len(core_hit))
    print()
    print('=== most widely shared core-kernel deps (how many modules need each) ===')
    for s, c in core_hit.most_common(40):
        print('  %4d  %s' % (c, s))

    print()
    print('=== modules with ZERO core-kernel deps (pure vendor-internal) ===')
    zero = [r[0] for r in rows if r[3] == 0]
    print('count: %d' % len(zero))
    for z in zero[:20]:
        print('  ' + z)
    if len(zero) > 20:
        print('  ... and %d more' % (len(zero) - 20))


if __name__ == '__main__':
    main()
