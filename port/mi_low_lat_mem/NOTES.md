# mi_low_lat_mem 移植笔记

- 上游反编译源：`modko-main/decompiled/mi_low_lat_mem.pdg.c`（112 函数）+ `mi_low_lat_mem.meta.json`（reloc/GOT/thunk 统计，结构体偏移交叉核对用）
- 计划阶段：**F5**（见 HOME_FEATURES_PLAN.md §3）
- 依赖状态（对照设备 5.15.220 kallsyms，2026-10-26 实测）：

```
缺多数：rvh_try_alloc_pages_gfp、compact_bypass、dma_heap_buffer_alloc_lat_start/end、cma_alloc_lat_start/end、mm_direct_reclaim_start/end
已有抽查：alloc_pages_reclaim_bypass、cma_alloc_bypass、mem_cgroup_alloc、alloc_pages_slowpath 系列部分
```

## 还原要点

低延迟内存（CMA/dma_heap 时延路径）。C 类最重：先完整审计（F0 脚本）再定 hook 补齐顺序

## 实现进度

- [ ] src/ 逐函数还原（pdg.c 行号映射在实现时逐条补进本文件）
- [ ] 结构体/常量与 meta.json reloc 交叉核对
- [ ] 构建（_shared/BUILD.md）+ 第 6 级加载验证
- [ ] 专项验收（脚本与判据见 HOME_FEATURES_PLAN.md §5）
