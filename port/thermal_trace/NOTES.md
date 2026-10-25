# thermal_trace 移植笔记

- 上游反编译源：`modko-main/decompiled/thermal_trace.pdg.c`（7 函数）+ `thermal_trace.meta.json`（reloc/GOT/thunk 统计，结构体偏移交叉核对用）
- 计划阶段：**F6**（见 HOME_FEATURES_PLAN.md §3）
- 依赖状态（对照设备 5.15.220 kallsyms，2026-10-26 实测）：

```
无 vh hook
```

## 还原要点

thermal trace 辅助；thermal_perf_limits 提供者候选之一（待证）

## 实现进度

- [ ] src/ 逐函数还原（pdg.c 行号映射在实现时逐条补进本文件）
- [ ] 结构体/常量与 meta.json reloc 交叉核对
- [ ] 构建（_shared/BUILD.md）+ 第 6 级加载验证
- [ ] 专项验收（脚本与判据见 HOME_FEATURES_PLAN.md §5）
