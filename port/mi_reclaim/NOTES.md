# mi_reclaim 移植笔记

- 上游反编译源：`modko-main/decompiled/mi_reclaim.pdg.c`（37 函数）+ `mi_reclaim.meta.json`（reloc/GOT/thunk 统计，结构体偏移交叉核对用）
- 计划阶段：**F5**（见 HOME_FEATURES_PLAN.md §3）
- 依赖状态（对照设备 5.15.220 kallsyms，2026-10-26 实测）：

```
缺 4：alloc_pages_slowpath_start、alloc_pages_slowpath_end、direct_reclaim_end、throttle_direct_reclaim_bypass
已有 10：alloc_pages_reclaim_bypass、customize_alloc_gfp、drain_all_pages_bypass、free_task、mmput、tune_swappiness、unreserve_highatomic_bypass、shrink_slab_bypass、tune_scan_type、alloc_pages_reclaim_bypass
```

## 还原要点

主动内存回收。hook 补法：~/k515 的 mm/page_alloc.c 慢路径起止、mm/vmscan.c direct_reclaim 结束与 throttle 点，按 6.1 GKI 位置加 tracepoint 定义+调用点+EXPORT_TRACEPOINT_SYMBOL_GPL；每 hook 独立 commit + QEMU 启动验证

## 实现进度

- [ ] src/ 逐函数还原（pdg.c 行号映射在实现时逐条补进本文件）
- [ ] 结构体/常量与 meta.json reloc 交叉核对
- [ ] 构建（_shared/BUILD.md）+ 第 6 级加载验证
- [ ] 专项验收（脚本与判据见 HOME_FEATURES_PLAN.md §5）
