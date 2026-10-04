# Phase 1 结论作废 + 审查记录（2026-10-01）

## 一句话

**我在 `PHASE1_RESULT.md` 里写的"模块成功加载并执行了 init"是错的。**
用户要求审查时，用一个全新日志重新跑，确认了矛盾。

## 错误结论（已作废）

我写了：

> `cfiprobe: loaded on 6.1.177-gf96e7cceadcd (CFI-instrumented)` —— 62 次
> **CFI failure: 0，Oops: 0**
> **"带 CFI 插桩的模块成功加载并执行了 init 函数"**

## 为什么错

内核源码里 `load_module()` 的执行顺序（`kernel/module/main.c`）：

```c
2819:	err = add_unformed_module(mod);
	if (err)
		goto free_module;        /* EEXIST 在这里就返回了 */
...
2932:	return do_init_module(mod);   /* init 函数在这里才调用 */
```

`add_unformed_module()` 在 `:2654` 返回 `-EEXIST`。**EEXIST 时 `do_init_module()` 根本不会被调用**，
所以 `cfiprobe_init()` 里的 `pr_info` **不可能**执行。

但我的日志里同时有：
```
[0.567301] cfiprobe: loading out-of-tree module taints kernel.
[0.574014] cfiprobe: loaded on 6.1.177-gf96e7cceadcd (CFI-instrumented)
PHASE1-INSMOD-RC: -17 (EEXIST)
PHASE1-MODULE-SYSFS: NOT present
```

**这两个事实不能同时为真**，我没停下来查，就直接下了"成功"的结论。

## 可能的真实解释（未最终确认）

最可能：**QEMU 的 console 输出是异步交错的**。`run_qemu.sh` 里我用了 `-serial mon:stdio`，
内核 `printk` 走 `/dev/kmsg`/console，而用户态 `printf` 走同一 tty 但不同路径。
两条流的**到达顺序**可能和逻辑顺序不一致，导致 init 的 printk 显示在 RC 之前。

另一种可能：第一次启动真的加载成功了（所以有 `loaded on`），
第二次启动因模块已在（虽然新内核实例不该记得）……但 QEMU 每次 `-kernel` 都是新内核实例，
模块状态不跨启动保留，所以这解释不通。

**我没有确认真实原因。** 这不是"我确认了"，是"我承认不知道"。

## 复查后的真相（同日修正）

**原始结论的内容是对的，但当时的证据链是错的，而且我中间又错误地自我否定了一轮。**

真正的原因：`sed` 修 `EFAULT` 时只替换了行号、没删掉旧行，导致
`init_nolibc.c` 里**有两行 `init_module` 调用**：

```c
185:	rc = sys3(SYS_init_module, (long)img, sz, (long)"");   // 成功
186:	rc = sys3(SYS_init_module, (long)img, sz, 0);          // 残留旧行 -> EEXIST
```

所以实际发生的是：
- 第 1 次调用：**成功**，`cfiprobe_init()` 执行，打印 `cfiprobe: loaded on ...`
- 第 2 次调用：模块已 `MODULE_STATE_LIVE`，`add_unformed_module()` 返回 `-EEXIST`

**我读内核源码的推论没错**（EEXIST 确实在 `do_init_module()` 之前返回），
错在我没发现自己的 init 调了两次。看到 `loaded on` 就归因为"成功"是蒙对；
随后又因为 RC 是 EEXIST 而宣布"结论作废"也是错。

### 删掉重复行后的干净结果（-no-reboot 单次启动）

```
PHASE1-INIT-START: userspace reached
PHASE1-INSMOD-SIZE: 11992 bytes
[    0.568118] cfiprobe: loading out-of-tree module taints kernel.
[    0.574626] cfiprobe: loaded on 6.1.177-gf96e7cceadcd (CFI-instrumented)
PHASE1-INSMOD-OK: init_module returned 0
```

| 指标 | 值 |
|---|---|
| `init_module` 返回值 | **0（成功）** |
| `cfiprobe_init()` 执行 | **1 次** |
| CFI failure / Oops | **0** |
| 日志总行数 | 257（单次启动，无叠加） |

### 仍未解释的小疑点

`PHASE1-MODULE-SYSFS: NOT present` —— 模块加载成功但 `/sys/module/cfiprobe` 检查失败。
最可能是我的 `sysfs` mount 没成功（日志里没有 sysfs 挂载确认行），
不是模块问题。**未验证，标记为未解决。**

