# iorap2 移植笔记

- 上游反编译源：`modko-main/decompiled/iorap2.pdg.c`（40 函数）+ `iorap2.meta.json`（reloc/GOT/thunk 统计，结构体偏移交叉核对用）
- 计划阶段：**F2**（见 HOME_FEATURES_PLAN.md §3）
- 依赖状态（对照设备 5.15.220 kallsyms，2026-10-26 实测）：

```
6/6 hook 已验证在 5.15 kallsyms（各4符号）：
- android_vh_filemap_read（读文件采集）
- android_vh_filemap_map_pages（缺页采集）
- android_vh_do_async_mmap_readahead
- android_vh_should_fault_around
- android_vh_tune_mmap_readaround
- android_vh_ra_tuning_max_page
```

## 还原要点

设备接口：/dev/iorap_dev（chrdev，register_chrdev+device_create）
ioctl 协议：_IOWR('K',1,264)=启动采集(含包名)、('K',3,264)=清除、('K',5,264)、('K',7,264)、_IOR('L',20,4)=版本查询
调试接口：/proc/iorap_node/collect（只读：版本/内存/app列表[包名,uid,文件数,mm size]）
关键函数：mi_lb_ioctl、mi_lb_dealwith_collect_cmd、is_real_timing_package、mi_lb_add_package_info、Hint_Prefetch、lb_cold_exit(unregister全表)
构建：DEFAULT_SYMBOL_NAMESPACE=VFS_internal
F2 第一步：在 ~/k515 探测 VFS_internal 命名空间符号可见性

## 实现进度

- [ ] src/ 逐函数还原（pdg.c 行号映射在实现时逐条补进本文件）
- [ ] 结构体/常量与 meta.json reloc 交叉核对
- [ ] 构建（_shared/BUILD.md）+ 第 6 级加载验证
- [ ] 专项验收（脚本与判据见 HOME_FEATURES_PLAN.md §5）
