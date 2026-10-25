# os_cpu_qs 移植笔记

- 上游反编译源：`modko-main/decompiled/os_cpu_qs.pdg.c`（121 函数）+ `os_cpu_qs.meta.json`（reloc/GOT/thunk 统计，结构体偏移交叉核对用）
- 计划阶段：**F3**（见 HOME_FEATURES_PLAN.md §3）
- 依赖状态（对照设备 5.15.220 kallsyms，2026-10-26 实测）：

```
抽查 3/3 在：android_vh_binder_preset、android_vh_rwsem_lock_released、android_vh_rwsem_read_wait_start
```

## 还原要点

rwsem 等待/释放调度 + binder preset。与 os_cpu_qi 同批评估

## 实现进度

- [ ] src/ 逐函数还原（pdg.c 行号映射在实现时逐条补进本文件）
- [ ] 结构体/常量与 meta.json reloc 交叉核对
- [ ] 构建（_shared/BUILD.md）+ 第 6 级加载验证
- [ ] 专项验收（脚本与判据见 HOME_FEATURES_PLAN.md §5）
