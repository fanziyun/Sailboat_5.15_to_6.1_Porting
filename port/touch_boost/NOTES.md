# touch_boost 移植笔记

- 上游反编译源：`modko-main/decompiled/touch_boost.pdg.c`（35 函数）+ `touch_boost.meta.json`（reloc/GOT/thunk 统计，结构体偏移交叉核对用）
- 计划阶段：**F5**（见 HOME_FEATURES_PLAN.md §3）
- 依赖状态（对照设备 5.15.220 kallsyms，2026-10-26 实测）：

```
缺失 1：cpuidle_set_allowed_depth（5.15 kallsyms 0 符号）→ 按上游在内核补 API+导出
已有：__tracepoint_irq_handler_entry（标准，✅）
```

## 还原要点

touch IRQ→CPU 提频。自含 tracepoint：freq/idle_boost_start/end
sysfs 组属性：unboost_freq_cpu、unboost_idle_cpu、irq_config、irq_num_max
导出符号：idle_boost_start/idle_boost_end/freq_boost_start/freq_boost_end

## 实现进度

- [ ] src/ 逐函数还原（pdg.c 行号映射在实现时逐条补进本文件）
- [ ] 结构体/常量与 meta.json reloc 交叉核对
- [ ] 构建（_shared/BUILD.md）+ 第 6 级加载验证
- [ ] 专项验收（脚本与判据见 HOME_FEATURES_PLAN.md §5）
