# 内核补齐清单（F0 依赖全量审计）

- 生成：port/_shared/audit_deps.sh（2026-10-26 04:33:11）
- 方法：从上游 .ko 的 symtab 字符串提取全部 __tracepoint_* 引用 → adb 查设备 5.15.220 kallsyms 符号计数
- 分类：android_vh/android_rvh 前缀 = GKI hook，必须存在于内核；其余（无前缀）多为模块自定义或标准 tracepoint，标注但不强制

## 一、hook 存在性总表（设备 5.15.220）

| hook | 内核符号数 | 分类 |
|---|---:|---|
| `android_rvh_alloc_and_link_pwqs` | 4 | GKI hook（必须） |
| `android_rvh_create_worker` | 4 | GKI hook（必须） |
| `android_rvh_schedule` | 4 | GKI hook（必须） |
| `android_rvh_try_alloc_pages_gfp` | 0 | GKI hook（必须） ← **缺失，需补** |
| `android_vh_alloc_pages_reclaim_bypass` | 4 | GKI hook（必须） |
| `android_vh_alloc_pages_slowpath_end` | 0 | GKI hook（必须） ← **缺失，需补** |
| `android_vh_alloc_pages_slowpath_start` | 0 | GKI hook（必须） ← **缺失，需补** |
| `android_vh_alter_mutex_list_add` | 4 | GKI hook（必须） |
| `android_vh_alter_rwsem_list_add` | 4 | GKI hook（必须） |
| `android_vh_binder_buffer_release` | 4 | GKI hook（必须） |
| `android_vh_binder_preset` | 4 | GKI hook（必须） |
| `android_vh_binder_proc_transaction` | 4 | GKI hook（必须） |
| `android_vh_binder_restore_priority` | 4 | GKI hook（必须） |
| `android_vh_binder_set_priority` | 4 | GKI hook（必须） |
| `android_vh_binder_transaction_init` | 4 | GKI hook（必须） |
| `android_vh_blk_mq_delay_run_hw_queue` | 4 | GKI hook（必须） |
| `android_vh_blk_mq_kick_requeue_list` | 4 | GKI hook（必须） |
| `android_vh_clear_rwsem_reader_owned` | 4 | GKI hook（必须） |
| `android_vh_clear_rwsem_writer_owned` | 4 | GKI hook（必须） |
| `android_vh_cma_alloc_bypass` | 4 | GKI hook（必须） |
| `android_vh_cma_alloc_end` | 0 | GKI hook（必须） ← **缺失，需补** |
| `android_vh_cma_alloc_lat_end` | 0 | GKI hook（必须） ← **缺失，需补** |
| `android_vh_cma_alloc_lat_start` | 0 | GKI hook（必须） ← **缺失，需补** |
| `android_vh_cma_release_bypass` | 0 | GKI hook（必须） ← **缺失，需补** |
| `android_vh_compact_bypass` | 0 | GKI hook（必须） ← **缺失，需补** |
| `android_vh_customize_alloc_gfp` | 1 | GKI hook（必须） |
| `android_vh_direct_reclaim_end` | 0 | GKI hook（必须） ← **缺失，需补** |
| `android_vh_dma_heap_buffer_alloc_lat_end` | 0 | GKI hook（必须） ← **缺失，需补** |
| `android_vh_dma_heap_buffer_alloc_lat_start` | 0 | GKI hook（必须） ← **缺失，需补** |
| `android_vh_do_async_mmap_readahead` | 4 | GKI hook（必须） |
| `android_vh_do_futex` | 4 | GKI hook（必须） |
| `android_vh_do_send_sig_info` | 4 | GKI hook（必须） |
| `android_vh_drain_all_pages_bypass` | 4 | GKI hook（必须） |
| `android_vh_dup_task_struct` | 4 | GKI hook（必须） |
| `android_vh_exit_check` | 4 | GKI hook（必须） |
| `android_vh_filemap_map_pages` | 4 | GKI hook（必须） |
| `android_vh_filemap_read` | 4 | GKI hook（必须） |
| `android_vh_free_oem_binder_struct` | 4 | GKI hook（必须） |
| `android_vh_free_task` | 4 | GKI hook（必须） |
| `android_vh_fuse_request_end` | 4 | GKI hook（必须） |
| `android_vh_fuse_request_fetch` | 0 | GKI hook（必须） ← **缺失，需补** |
| `android_vh_futex_wait_end` | 4 | GKI hook（必须） |
| `android_vh_futex_wait_queue_start` | 0 | GKI hook（必须） ← **缺失，需补** |
| `android_vh_futex_wake_traverse_plist` | 4 | GKI hook（必须） |
| `android_vh_futex_wake_up_q_finish` | 4 | GKI hook（必须） |
| `android_vh_get_page_wmark` | 0 | GKI hook（必须） ← **缺失，需补** |
| `android_vh_mem_cgroup_alloc` | 4 | GKI hook（必须） |
| `android_vh_mem_cgroup_free` | 4 | GKI hook（必须） |
| `android_vh_mm_direct_reclaim_end` | 0 | GKI hook（必须） ← **缺失，需补** |
| `android_vh_mm_direct_reclaim_start` | 0 | GKI hook（必须） ← **缺失，需补** |
| `android_vh_mmap_lock_free` | 0 | GKI hook（必须） ← **缺失，需补** |
| `android_vh_mmap_lock_init` | 0 | GKI hook（必须） ← **缺失，需补** |
| `android_vh_mmput` | 4 | GKI hook（必须） |
| `android_vh_mutex_can_spin_on_owner` | 4 | GKI hook（必须） |
| `android_vh_mutex_lock_released` | 0 | GKI hook（必须） ← **缺失，需补** |
| `android_vh_mutex_opt_spin_finish` | 4 | GKI hook（必须） |
| `android_vh_mutex_opt_spin_start` | 4 | GKI hook（必须） |
| `android_vh_mutex_unlock_slowpath` | 4 | GKI hook（必须） |
| `android_vh_mutex_wait_finish` | 4 | GKI hook（必须） |
| `android_vh_mutex_wait_start` | 4 | GKI hook（必须） |
| `android_vh_page_cache_ra_order_bypass` | 0 | GKI hook（必须） ← **缺失，需补** |
| `android_vh_pcpu_rwsem_lock_acquired` | 0 | GKI hook（必须） ← **缺失，需补** |
| `android_vh_pcpu_rwsem_lock_released` | 0 | GKI hook（必须） ← **缺失，需补** |
| `android_vh_percpu_rwsem_init` | 0 | GKI hook（必须） ← **缺失，需补** |
| `android_vh_percpu_rwsem_wq_add` | 4 | GKI hook（必须） |
| `android_vh_ra_tuning_max_page` | 4 | GKI hook（必须） |
| `android_vh_rcu_boost_end` | 0 | GKI hook（必须） ← **缺失，需补** |
| `android_vh_rcu_boost_start` | 0 | GKI hook（必须） ← **缺失，需补** |
| `android_vh_rwsem_direct_rsteal` | 4 | GKI hook（必须） |
| `android_vh_rwsem_init` | 4 | GKI hook（必须） |
| `android_vh_rwsem_lock_acquired` | 0 | GKI hook（必须） ← **缺失，需补** |
| `android_vh_rwsem_lock_released` | 0 | GKI hook（必须） ← **缺失，需补** |
| `android_vh_rwsem_optimistic_rspin` | 4 | GKI hook（必须） |
| `android_vh_rwsem_read_wait_finish` | 4 | GKI hook（必须） |
| `android_vh_rwsem_read_wait_start` | 4 | GKI hook（必须） |
| `android_vh_rwsem_write_wait_finish` | 4 | GKI hook（必须） |
| `android_vh_should_fault_around` | 4 | GKI hook（必须） |
| `android_vh_shrink_slab_bypass` | 4 | GKI hook（必须） |
| `android_vh_sync_rcu_wait_end` | 0 | GKI hook（必须） ← **缺失，需补** |
| `android_vh_sync_rcu_wait_start` | 0 | GKI hook（必须） ← **缺失，需补** |
| `android_vh_throttle_direct_reclaim_bypass` | 0 | GKI hook（必须） ← **缺失，需补** |
| `android_vh_tune_mmap_readaround` | 4 | GKI hook（必须） |
| `android_vh_tune_scan_type` | 4 | GKI hook（必须） |
| `android_vh_tune_swappiness` | 4 | GKI hook（必须） |
| `android_vh_ufs_compl_command` | 4 | GKI hook（必须） |
| `android_vh_ufs_send_command` | 4 | GKI hook（必须） |
| `android_vh_unreserve_highatomic_bypass` | 4 | GKI hook（必须） |
| `block_bio_queue` | 4 | 自定义/标准 |
| `block_getrq` | 4 | 自定义/标准 |
| `block_rq_complete` | 4 | 自定义/标准 |
| `block_rq_insert` | 4 | 自定义/标准 |
| `block_rq_issue` | 4 | 自定义/标准 |
| `freq_boost_end` | 0 | 自定义/标准 |
| `freq_boost_start` | 0 | 自定义/标准 |
| `idle_boost_end` | 0 | 自定义/标准 |
| `idle_boost_start` | 0 | 自定义/标准 |
| `irq_handler_entry` | 4 | 自定义/标准 |
| `mi_smart_refill_alloc` | 0 | 自定义/标准 |
| `mi_smart_refill_pool_shrink` | 0 | 自定义/标准 |
| `qi_binder_buffer_release` | 0 | 自定义/标准 |
| `qi_binder_proc_transaction` | 0 | 自定义/标准 |
| `qi_binder_restore_priority` | 0 | 自定义/标准 |
| `qi_binder_set_priority` | 0 | 自定义/标准 |
| `qi_free_task` | 0 | 自定义/标准 |
| `qi_fuse_inherit` | 0 | 自定义/标准 |
| `qi_fuse_uninherit` | 0 | 自定义/标准 |
| `qi_futex_inherit` | 0 | 自定义/标准 |
| `qi_futex_uninherit` | 0 | 自定义/标准 |
| `qi_get_qos_by_pid` | 0 | 自定义/标准 |
| `qi_get_qos_by_tid` | 0 | 自定义/标准 |
| `qi_gpu_blocked` | 0 | 自定义/标准 |
| `qi_gpu_unblocked` | 0 | 自定义/标准 |
| `qi_iter_binder_inherit` | 0 | 自定义/标准 |
| `qi_iter_fuse_inherit` | 0 | 自定义/标准 |
| `qi_iter_futex_inherit` | 0 | 自定义/标准 |
| `qi_iter_mutex_inherit` | 0 | 自定义/标准 |
| `qi_iter_percpu_rwsem_inherit` | 0 | 自定义/标准 |
| `qi_iter_rwsem_inherit` | 0 | 自定义/标准 |
| `qi_mutex_inherit` | 0 | 自定义/标准 |
| `qi_mutex_jump` | 0 | 自定义/标准 |
| `qi_mutex_uninherit` | 0 | 自定义/标准 |
| `qi_percpu_rwsem_inherit` | 0 | 自定义/标准 |
| `qi_percpu_rwsem_jump` | 0 | 自定义/标准 |
| `qi_percpu_rwsem_skip` | 0 | 自定义/标准 |
| `qi_percpu_rwsem_uninherit` | 0 | 自定义/标准 |
| `qi_rcu_inherit` | 0 | 自定义/标准 |
| `qi_rcu_uninherit` | 0 | 自定义/标准 |
| `qi_reader_owner_rwsem_inherit` | 0 | 自定义/标准 |
| `qi_rwsem_inherit` | 0 | 自定义/标准 |
| `qi_rwsem_jump` | 0 | 自定义/标准 |
| `qi_rwsem_reader_retry_lock` | 0 | 自定义/标准 |
| `qi_rwsem_skip` | 0 | 自定义/标准 |
| `qi_rwsem_uninherit` | 0 | 自定义/标准 |
| `qi_set_async_binder` | 0 | 自定义/标准 |
| `qi_set_qos` | 0 | 自定义/标准 |
| `qi_task_exit` | 0 | 自定义/标准 |
| `qos_mutex_opt_spin` | 0 | 自定义/标准 |
| `qos_mutex_wait` | 0 | 自定义/标准 |
| `qos_rwsem_opt_rspin` | 0 | 自定义/标准 |
| `qos_rwsem_wait` | 0 | 自定义/标准 |
| `qs_binder_preset` | 0 | 自定义/标准 |
| `qs_correct_rt_sched` | 0 | 自定义/标准 |
| `qs_exchange_rtg_grp` | 0 | 自定义/标准 |
| `qs_move_rtg_grp` | 0 | 自定义/标准 |
| `qs_reset_vip_sched` | 0 | 自定义/标准 |
| `qs_restore_rt_sched` | 0 | 自定义/标准 |
| `qs_restore_rtg_grp` | 0 | 自定义/标准 |
| `qs_set_rt_sched` | 0 | 自定义/标准 |
| `qs_set_rtg_grp` | 0 | 自定义/标准 |
| `qs_set_vip_sched` | 0 | 自定义/标准 |
| `qs_skip_rt_sched` | 0 | 自定义/标准 |
| `qs_skip_rtg_grp` | 0 | 自定义/标准 |
| `qs_update_rt_sched` | 0 | 自定义/标准 |
| `rwmmio_post_read` | 4 | 自定义/标准 |
| `rwmmio_post_write` | 4 | 自定义/标准 |
| `rwmmio_read` | 4 | 自定义/标准 |
| `rwmmio_write` | 4 | 自定义/标准 |
| `sched_set_state_tp` | 0 | 自定义/标准 |
| `sl_reset` | 0 | 自定义/标准 |
| `sl_set` | 0 | 自定义/标准 |
| `sl_timeout` | 0 | 自定义/标准 |

## 二、逐模块依赖矩阵

| 模块 | hook | 内核有 | 需补 |
|---|---|:-:|:-:|
| dynamic_readahead | `android_vh_page_cache_ra_order_bypass` | ✗ | **是** |
| dynamic_readahead | `android_vh_ra_tuning_max_page` | ✅ |  |
| dynamic_readahead | `android_vh_should_fault_around` | ✅ |  |
| dynamic_readahead | `android_vh_tune_mmap_readaround` | ✅ |  |
| iorap2 | `android_vh_do_async_mmap_readahead` | ✅ |  |
| iorap2 | `android_vh_filemap_map_pages` | ✅ |  |
| iorap2 | `android_vh_filemap_read` | ✅ |  |
| iorap2 | `android_vh_ra_tuning_max_page` | ✅ |  |
| iorap2 | `android_vh_should_fault_around` | ✅ |  |
| iorap2 | `android_vh_tune_mmap_readaround` | ✅ |  |
| iostat_enhance | (无 tracepoint 引用) | - | - |
| mi_io_monitor | `android_vh_ufs_compl_command` | ✅ |  |
| mi_io_monitor | `android_vh_ufs_send_command` | ✅ |  |
| mi_io_monitor | `block_bio_queue` | ✅ |  |
| mi_io_monitor | `block_getrq` | ✅ |  |
| mi_io_monitor | `block_rq_complete` | ✅ |  |
| mi_io_monitor | `block_rq_insert` | ✅ |  |
| mi_io_monitor | `block_rq_issue` | ✅ |  |
| mi_low_lat_mem | `android_rvh_try_alloc_pages_gfp` | ✗ | **是** |
| mi_low_lat_mem | `android_vh_alloc_pages_reclaim_bypass` | ✅ |  |
| mi_low_lat_mem | `android_vh_alloc_pages_slowpath_end` | ✗ | **是** |
| mi_low_lat_mem | `android_vh_alloc_pages_slowpath_start` | ✗ | **是** |
| mi_low_lat_mem | `android_vh_cma_alloc_bypass` | ✅ |  |
| mi_low_lat_mem | `android_vh_cma_alloc_end` | ✗ | **是** |
| mi_low_lat_mem | `android_vh_cma_alloc_lat_end` | ✗ | **是** |
| mi_low_lat_mem | `android_vh_cma_alloc_lat_start` | ✗ | **是** |
| mi_low_lat_mem | `android_vh_cma_release_bypass` | ✗ | **是** |
| mi_low_lat_mem | `android_vh_compact_bypass` | ✗ | **是** |
| mi_low_lat_mem | `android_vh_dma_heap_buffer_alloc_lat_end` | ✗ | **是** |
| mi_low_lat_mem | `android_vh_dma_heap_buffer_alloc_lat_start` | ✗ | **是** |
| mi_low_lat_mem | `android_vh_mem_cgroup_alloc` | ✅ |  |
| mi_low_lat_mem | `android_vh_mem_cgroup_free` | ✅ |  |
| mi_low_lat_mem | `android_vh_mm_direct_reclaim_end` | ✗ | **是** |
| mi_low_lat_mem | `android_vh_mm_direct_reclaim_start` | ✗ | **是** |
| mi_low_lat_mem | `mi_smart_refill_alloc` | ✗ | (非GKI) |
| mi_low_lat_mem | `mi_smart_refill_pool_shrink` | ✗ | (非GKI) |
| mi_perf_memory | `android_vh_shrink_slab_bypass` | ✅ |  |
| mi_perf_memory | `android_vh_throttle_direct_reclaim_bypass` | ✗ | **是** |
| mi_perf_memory | `android_vh_tune_scan_type` | ✅ |  |
| mi_reclaim | `android_vh_alloc_pages_reclaim_bypass` | ✅ |  |
| mi_reclaim | `android_vh_alloc_pages_slowpath_end` | ✗ | **是** |
| mi_reclaim | `android_vh_alloc_pages_slowpath_start` | ✗ | **是** |
| mi_reclaim | `android_vh_customize_alloc_gfp` | ✅ |  |
| mi_reclaim | `android_vh_direct_reclaim_end` | ✗ | **是** |
| mi_reclaim | `android_vh_drain_all_pages_bypass` | ✅ |  |
| mi_reclaim | `android_vh_free_task` | ✅ |  |
| mi_reclaim | `android_vh_get_page_wmark` | ✗ | **是** |
| mi_reclaim | `android_vh_mmput` | ✅ |  |
| mi_reclaim | `android_vh_shrink_slab_bypass` | ✅ |  |
| mi_reclaim | `android_vh_throttle_direct_reclaim_bypass` | ✗ | **是** |
| mi_reclaim | `android_vh_tune_scan_type` | ✅ |  |
| mi_reclaim | `android_vh_tune_swappiness` | ✅ |  |
| mi_reclaim | `android_vh_unreserve_highatomic_bypass` | ✅ |  |
| mi_reclaim | `sched_set_state_tp` | ✗ | (非GKI) |
| mi_wq_dynamic_priority | `android_rvh_alloc_and_link_pwqs` | ✅ |  |
| mi_wq_dynamic_priority | `android_rvh_create_worker` | ✅ |  |
| mi_wq_dynamic_priority | `android_vh_blk_mq_delay_run_hw_queue` | ✅ |  |
| mi_wq_dynamic_priority | `android_vh_blk_mq_kick_requeue_list` | ✅ |  |
| millet | (无 tracepoint 引用) | - | - |
| millet_binder | (无 tracepoint 引用) | - | - |
| millet_hs | (无 tracepoint 引用) | - | - |
| millet_oem_cgroup | (无 tracepoint 引用) | - | - |
| millet_pkg | (无 tracepoint 引用) | - | - |
| millet_sig | `android_vh_do_send_sig_info` | ✅ |  |
| os_cpu_qi | `android_vh_alter_mutex_list_add` | ✅ |  |
| os_cpu_qi | `android_vh_alter_rwsem_list_add` | ✅ |  |
| os_cpu_qi | `android_vh_binder_buffer_release` | ✅ |  |
| os_cpu_qi | `android_vh_binder_proc_transaction` | ✅ |  |
| os_cpu_qi | `android_vh_binder_restore_priority` | ✅ |  |
| os_cpu_qi | `android_vh_binder_set_priority` | ✅ |  |
| os_cpu_qi | `android_vh_binder_transaction_init` | ✅ |  |
| os_cpu_qi | `android_vh_clear_rwsem_reader_owned` | ✅ |  |
| os_cpu_qi | `android_vh_clear_rwsem_writer_owned` | ✅ |  |
| os_cpu_qi | `android_vh_do_futex` | ✅ |  |
| os_cpu_qi | `android_vh_dup_task_struct` | ✅ |  |
| os_cpu_qi | `android_vh_exit_check` | ✅ |  |
| os_cpu_qi | `android_vh_free_oem_binder_struct` | ✅ |  |
| os_cpu_qi | `android_vh_free_task` | ✅ |  |
| os_cpu_qi | `android_vh_fuse_request_end` | ✅ |  |
| os_cpu_qi | `android_vh_fuse_request_fetch` | ✗ | **是** |
| os_cpu_qi | `android_vh_futex_wait_end` | ✅ |  |
| os_cpu_qi | `android_vh_futex_wait_queue_start` | ✗ | **是** |
| os_cpu_qi | `android_vh_futex_wake_traverse_plist` | ✅ |  |
| os_cpu_qi | `android_vh_futex_wake_up_q_finish` | ✅ |  |
| os_cpu_qi | `android_vh_mmap_lock_free` | ✗ | **是** |
| os_cpu_qi | `android_vh_mmap_lock_init` | ✗ | **是** |
| os_cpu_qi | `android_vh_mutex_can_spin_on_owner` | ✅ |  |
| os_cpu_qi | `android_vh_mutex_lock_released` | ✗ | **是** |
| os_cpu_qi | `android_vh_mutex_opt_spin_finish` | ✅ |  |
| os_cpu_qi | `android_vh_mutex_opt_spin_start` | ✅ |  |
| os_cpu_qi | `android_vh_mutex_unlock_slowpath` | ✅ |  |
| os_cpu_qi | `android_vh_mutex_wait_finish` | ✅ |  |
| os_cpu_qi | `android_vh_mutex_wait_start` | ✅ |  |
| os_cpu_qi | `android_vh_pcpu_rwsem_lock_acquired` | ✗ | **是** |
| os_cpu_qi | `android_vh_pcpu_rwsem_lock_released` | ✗ | **是** |
| os_cpu_qi | `android_vh_percpu_rwsem_init` | ✗ | **是** |
| os_cpu_qi | `android_vh_percpu_rwsem_wq_add` | ✅ |  |
| os_cpu_qi | `android_vh_rcu_boost_end` | ✗ | **是** |
| os_cpu_qi | `android_vh_rcu_boost_start` | ✗ | **是** |
| os_cpu_qi | `android_vh_rwsem_direct_rsteal` | ✅ |  |
| os_cpu_qi | `android_vh_rwsem_init` | ✅ |  |
| os_cpu_qi | `android_vh_rwsem_lock_acquired` | ✗ | **是** |
| os_cpu_qi | `android_vh_rwsem_optimistic_rspin` | ✅ |  |
| os_cpu_qi | `android_vh_rwsem_read_wait_finish` | ✅ |  |
| os_cpu_qi | `android_vh_rwsem_write_wait_finish` | ✅ |  |
| os_cpu_qi | `android_vh_sync_rcu_wait_end` | ✗ | **是** |
| os_cpu_qi | `android_vh_sync_rcu_wait_start` | ✗ | **是** |
| os_cpu_qi | `qi_binder_buffer_release` | ✗ | (非GKI) |
| os_cpu_qi | `qi_binder_proc_transaction` | ✗ | (非GKI) |
| os_cpu_qi | `qi_binder_restore_priority` | ✗ | (非GKI) |
| os_cpu_qi | `qi_binder_set_priority` | ✗ | (非GKI) |
| os_cpu_qi | `qi_free_task` | ✗ | (非GKI) |
| os_cpu_qi | `qi_fuse_inherit` | ✗ | (非GKI) |
| os_cpu_qi | `qi_fuse_uninherit` | ✗ | (非GKI) |
| os_cpu_qi | `qi_futex_inherit` | ✗ | (非GKI) |
| os_cpu_qi | `qi_futex_uninherit` | ✗ | (非GKI) |
| os_cpu_qi | `qi_get_qos_by_pid` | ✗ | (非GKI) |
| os_cpu_qi | `qi_get_qos_by_tid` | ✗ | (非GKI) |
| os_cpu_qi | `qi_gpu_blocked` | ✗ | (非GKI) |
| os_cpu_qi | `qi_gpu_unblocked` | ✗ | (非GKI) |
| os_cpu_qi | `qi_iter_binder_inherit` | ✗ | (非GKI) |
| os_cpu_qi | `qi_iter_fuse_inherit` | ✗ | (非GKI) |
| os_cpu_qi | `qi_iter_futex_inherit` | ✗ | (非GKI) |
| os_cpu_qi | `qi_iter_mutex_inherit` | ✗ | (非GKI) |
| os_cpu_qi | `qi_iter_percpu_rwsem_inherit` | ✗ | (非GKI) |
| os_cpu_qi | `qi_iter_rwsem_inherit` | ✗ | (非GKI) |
| os_cpu_qi | `qi_mutex_inherit` | ✗ | (非GKI) |
| os_cpu_qi | `qi_mutex_jump` | ✗ | (非GKI) |
| os_cpu_qi | `qi_mutex_uninherit` | ✗ | (非GKI) |
| os_cpu_qi | `qi_percpu_rwsem_inherit` | ✗ | (非GKI) |
| os_cpu_qi | `qi_percpu_rwsem_jump` | ✗ | (非GKI) |
| os_cpu_qi | `qi_percpu_rwsem_skip` | ✗ | (非GKI) |
| os_cpu_qi | `qi_percpu_rwsem_uninherit` | ✗ | (非GKI) |
| os_cpu_qi | `qi_rcu_inherit` | ✗ | (非GKI) |
| os_cpu_qi | `qi_rcu_uninherit` | ✗ | (非GKI) |
| os_cpu_qi | `qi_reader_owner_rwsem_inherit` | ✗ | (非GKI) |
| os_cpu_qi | `qi_rwsem_inherit` | ✗ | (非GKI) |
| os_cpu_qi | `qi_rwsem_jump` | ✗ | (非GKI) |
| os_cpu_qi | `qi_rwsem_reader_retry_lock` | ✗ | (非GKI) |
| os_cpu_qi | `qi_rwsem_skip` | ✗ | (非GKI) |
| os_cpu_qi | `qi_rwsem_uninherit` | ✗ | (非GKI) |
| os_cpu_qi | `qi_set_async_binder` | ✗ | (非GKI) |
| os_cpu_qi | `qi_set_qos` | ✗ | (非GKI) |
| os_cpu_qi | `qi_task_exit` | ✗ | (非GKI) |
| os_cpu_qi | `qos_mutex_opt_spin` | ✗ | (非GKI) |
| os_cpu_qi | `qos_mutex_wait` | ✗ | (非GKI) |
| os_cpu_qi | `qos_rwsem_opt_rspin` | ✗ | (非GKI) |
| os_cpu_qi | `qos_rwsem_wait` | ✗ | (非GKI) |
| os_cpu_qs | `android_vh_binder_preset` | ✅ |  |
| os_cpu_qs | `android_vh_rwsem_lock_released` | ✗ | **是** |
| os_cpu_qs | `android_vh_rwsem_read_wait_start` | ✅ |  |
| os_cpu_qs | `qs_binder_preset` | ✗ | (非GKI) |
| os_cpu_qs | `qs_correct_rt_sched` | ✗ | (非GKI) |
| os_cpu_qs | `qs_exchange_rtg_grp` | ✗ | (非GKI) |
| os_cpu_qs | `qs_move_rtg_grp` | ✗ | (非GKI) |
| os_cpu_qs | `qs_reset_vip_sched` | ✗ | (非GKI) |
| os_cpu_qs | `qs_restore_rt_sched` | ✗ | (非GKI) |
| os_cpu_qs | `qs_restore_rtg_grp` | ✗ | (非GKI) |
| os_cpu_qs | `qs_set_rt_sched` | ✗ | (非GKI) |
| os_cpu_qs | `qs_set_rtg_grp` | ✗ | (非GKI) |
| os_cpu_qs | `qs_set_vip_sched` | ✗ | (非GKI) |
| os_cpu_qs | `qs_skip_rt_sched` | ✗ | (非GKI) |
| os_cpu_qs | `qs_skip_rtg_grp` | ✗ | (非GKI) |
| os_cpu_qs | `qs_update_rt_sched` | ✗ | (非GKI) |
| os_cpu_qs | `sl_reset` | ✗ | (非GKI) |
| os_cpu_qs | `sl_set` | ✗ | (非GKI) |
| os_cpu_qs | `sl_timeout` | ✗ | (非GKI) |
| perf_particle | `android_rvh_schedule` | ✅ |  |
| perf_particle | `rwmmio_post_read` | ✅ |  |
| perf_particle | `rwmmio_post_write` | ✅ |  |
| perf_particle | `rwmmio_read` | ✅ |  |
| perf_particle | `rwmmio_write` | ✅ |  |
| scene_swappiness | `android_vh_tune_swappiness` | ✅ |  |
| thermal_trace | (无 tracepoint 引用) | - | - |
| touch_boost | `freq_boost_end` | ✗ | (非GKI) |
| touch_boost | `freq_boost_start` | ✗ | (非GKI) |
| touch_boost | `idle_boost_end` | ✗ | (非GKI) |
| touch_boost | `idle_boost_start` | ✗ | (非GKI) |
| touch_boost | `irq_handler_entry` | ✅ |  |
| unfairmem | `android_vh_get_page_wmark` | ✗ | **是** |
| unfairmem | `android_vh_shrink_slab_bypass` | ✅ |  |

## 三、特殊符号（非 tracepoint 已知依赖）

| 模块 | 符号 | 内核符号数 |
|---|---|---:|
| touch_boost | `cpuidle_set_allowed_depth` | 0 |

## 四、说明与边界

- 本审计只覆盖 tracepoint 与点名符号；**完整符号解析以本地链接为准**（modpost 报未定义符号即真缺口），构建即审计。
- millet 卫星模块的依赖还包括 millet core 导出（register_millet_hook 等），由全家统一重建天然满足。
- 缺失 GKI hook 的补法见 HOME_FEATURES_PLAN.md §1-C 与各模块 NOTES.md。
