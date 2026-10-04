# Phase 1 定稿：CFI-instrumented 模块在 6.1 上正常加载（2026-10-01）

**本文为最终结论。** 早先一版"62 次成功"的证据链有误，已连同错误与修正过程
一并保留在 [PHASE1_RETRACTED.md](PHASE1_RETRACTED.md)。本文只用单次干净启动的数据。

## 结论

在开着 `CONFIG_CFI_CLANG` + `CONFIG_CFI_PERMISSIVE` 的 AOSP
`android14-6.1-lts`（6.1.177）内核上，一个带 CFI 插桩的模块：

- `init_module()` 返回 **0**
- `cfiprobe_init()` **执行了**
- **`/sys/module/cfiprobe` 在 sysfs 里可见**
- **0 次 CFI failure、0 次 Oops**

## 证据（单次启动，`-no-reboot`，258 行日志）

```
PHASE1-INIT-START: userspace reached
PHASE1-KERNEL: 6.1.177-gf96e7cceadcd
PHASE1-INSMOD-SIZE: 11992 bytes
[    0.569948] cfiprobe: loading out-of-tree module taints kernel.
[    0.576237] cfiprobe: loaded on 6.1.177-gf96e7cceadcd (CFI-instrumented)
PHASE1-INSMOD-OK: init_module returned 0
PHASE1-MODULE-SYSFS: present
PHASE1-INIT-DONE: powering off -- no rmmod by design
```

| 指标 | 值 |
|---|---|
| `init_module` 返回 | **0** |
| `cfiprobe_init()` 执行 | **1 次** |
| `/sys/module/cfiprobe` | **present** |
| CFI failure / Oops | **0** |

## 意义：CFI 从"可能障碍"变成"有官方解法的已排除项"

对照真机那次 panic：

| | 真机 5.15.220 | QEMU 6.1.177 |
|---|---|---|
| 模块带 CFI 插桩 | ❌ 否（当时我关掉了） | ✅ 是 |
| `CONFIG_CFI_PERMISSIVE` | 设备未开 | ✅ 开 |
| 结果 | **kernel panic** | **正常加载 + sysfs 可见** |

**推论**：6.1 上跑 5.15 vendor 模块时，CFI 这一关用上游开关
`CONFIG_CFI_PERMISSIVE=y` 即可解决。Kconfig 原文写明这是给
"finding indirect call type mismatches during development" 用的正经模式，
不是我 hack 的 stub。

## 构建配置

`android14-6.1-lts` @ `f96e7ccea`，落 ext4（`~/k61`）：

```bash
make ARCH=arm64 LLVM=1 defconfig
./scripts/config -e CFI_CLANG -e CFI_PERMISSIVE
./scripts/config -e MODVERSIONS -e MODULES -e MODULE_UNLOAD
./scripts/config -e LTO -e LTO_CLANG_THIN     # LTO 必须开，否则 CFI 不插桩
```

### 两个必须记住的坑

**坑 1：LTO 不开，CFI 不插桩。**
`-fsanitize=kcfi` 确实在编译命令里，但 `.o` 是 **LLVM IR bitcode**
（`file` 输出 "LLVM IR bitcode"），CFI 类型 ID 在最终链接才生成。
**判据不是 grep `.o`，是链接后 `System.map` 里的 `__kcfi_typeid_*`**
（本例 2,284 个）。我曾因用错判据而误判"CFI 没生效"。

**坑 2：`init_module()` 第三参传 NULL → `EFAULT`(-14)。**
`kernel/module/main.c:2880`：
```c
mod->args = strndup_user(uargs, ~0UL >> 1);
```
`uargs == NULL` 时直接 `-EFAULT`。必须传指向 `""` 的指针。

**坑 3（initramfs，本轮新踩）**：`/proc` `/sys` `/dev` 必须在 initramfs 里
作为**目录**存在，否则 `mount()` 返回 `ENOENT`，`/sys` 是空的，
`faccessat()` 必然报"模块不存在"——我曾把这个误判成模块问题。

## 复现

```bash
# QEMU 静态装在 ~/qpkg，无 root，56 个包从 Arch mirror 直接解包
~/qpkg/usr/bin/qemu-system-aarch64 --version          # 11.1.1

# 单次干净启动
~/qpkg/usr/bin/qemu-system-aarch64 \
    -machine virt -cpu cortex-a57 -smp 1 -m 512 -nic none -no-reboot \
    -kernel ~/k61/arch/arm64/boot/Image \
    -initrd ~/k61/initramfs.cpio.gz \
    -append "console=ttyAMA0 rdinit=/init panic=-1" -nographic
```

产物：
| 文件 | 作用 |
|---|---|
| `_probe/cfiprobe.c` | 模块源码（sysfs + workqueue，刻意触发多次间接调用） |
| `_probe/init_nolibc.c` | freestanding aarch64 init（raw syscall，无 libc） |
| `_probe/mkinitramfs_fixed.sh` | 打 initramfs，**含 proc/sys/dev 挂载点** |
| `_probe/run_qemu.sh` | QEMU 启动 + 结果判读 |
| `_probe/fetch_qemu.py` | 无 root 抓 QEMU 依赖 |

## Phase 1 的边界（未证明的事）

- ❌ **5.15 vendor 模块能否在 6.1 上工作** —— struct 布局差异完全没测到。
  QEMU `virt` 平台没有 SM8550 硬件驱动去碰那些 struct，所以撞不到布局问题。
- ❌ **vendor 模块能否加载** —— QEMU 无 kalama DTB、无 qcom 平台驱动
  （`qcom_smem`/`qcom_glink`/`qcom_rpmh` 等在 6.1 GKI 里不存在），
  依赖链缺失，测出来全是假阴性。

**下一个必须回答的问题仍是 struct 布局，而它只能真机测 —— 即 Phase 2。**
