# os_cpu_qi 移植笔记

- 上游反编译源：`modko-main/decompiled/os_cpu_qi.pdg.c`（376 函数）+ `os_cpu_qi.meta.json`（reloc/GOT/thunk 统计，结构体偏移交叉核对用）
- 计划阶段：**F3**（见 HOME_FEATURES_PLAN.md §3）
- 依赖状态（对照设备 5.15.220 kallsyms，2026-10-26 实测）：

```
抽查 5/5 在（完整核对为 F3 首任务）：
- android_vh_alter_mutex_list_add
- android_vh_alter_rwsem_list_add
- android_vh_binder_buffer_release
- android_vh_binder_proc_transaction
- android_vh_binder_restore_priority
```

## 还原要点

binder/mutex/rwsem 优先级继承 = setAsyncBinderVIPTaskIfNeeded 内核端，桌面价值最高。
前置：与已载 binder_prio（MIUI 自有 binder hooks）重叠分析，防双重优先级操纵
376 函数为语料最大模块，分批还原（hook 回调类→策略类→接口类）

## 实现进度

- [ ] src/ 逐函数还原（pdg.c 行号映射在实现时逐条补进本文件）
- [ ] 结构体/常量与 meta.json reloc 交叉核对
- [ ] 构建（_shared/BUILD.md）+ 第 6 级加载验证
- [ ] 专项验收（脚本与判据见 HOME_FEATURES_PLAN.md §5）
