# dynamic_readahead 移植笔记

- 上游反编译源：`modko-main/decompiled/dynamic_readahead.pdg.c`（9 函数）+ `dynamic_readahead.meta.json`（reloc/GOT/thunk 统计，结构体偏移交叉核对用）
- 计划阶段：**F0/F2**（见 HOME_FEATURES_PLAN.md §3）
- 依赖状态（对照设备 5.15.220 kallsyms，2026-10-26 实测）：

```
1 缺失（F0 二进制审计修正，pdg.c 抽查曾漏）：
- android_vh_page_cache_ra_order_bypass ← 缺失，需先补 hook（管线打通的前置）
已有 3：android_vh_ra_tuning_max_page、android_vh_should_fault_around、android_vh_tune_mmap_readaround
（作为 F0 样板正好覆盖"补 1 个 hook + 模块重建"的完整链路）
```

## 还原要点

自调节 filemap 读窗口。9 函数最小模块，用作 F0 管线打通样板。
init 注册/exit 注销同一 tracepoint（pdg.c 234/262 行）

## 实现进度

- [ ] src/ 逐函数还原（pdg.c 行号映射在实现时逐条补进本文件）
- [ ] 结构体/常量与 meta.json reloc 交叉核对
- [ ] 构建（_shared/BUILD.md）+ 第 6 级加载验证
- [ ] 专项验收（脚本与判据见 HOME_FEATURES_PLAN.md §5）
