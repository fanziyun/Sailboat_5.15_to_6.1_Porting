# unfairmem 移植笔记

- 上游反编译源：`modko-main/decompiled/unfairmem.pdg.c`（12 函数）+ `unfairmem.meta.json`（reloc/GOT/thunk 统计，结构体偏移交叉核对用）
- 计划阶段：**F5**（见 HOME_FEATURES_PLAN.md §3）
- 依赖状态（对照设备 5.15.220 kallsyms，2026-10-26 实测）：

```
缺 1：get_page_wmark
已有 1：shrink_slab_bypass
```

## 还原要点

非公平内存分配

## 实现进度

- [ ] src/ 逐函数还原（pdg.c 行号映射在实现时逐条补进本文件）
- [ ] 结构体/常量与 meta.json reloc 交叉核对
- [ ] 构建（_shared/BUILD.md）+ 第 6 级加载验证
- [ ] 专项验收（脚本与判据见 HOME_FEATURES_PLAN.md §5）
