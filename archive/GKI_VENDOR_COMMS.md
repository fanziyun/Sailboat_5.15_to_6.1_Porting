# vendor 驱动如何与 GKI 内核沟通（以及 5.15.78 vs 5.15.220 之谜）

## 一、先解释你抓到的矛盾

模块 vermagic 是 `5.15.78`，内核 `uname -r` 是 `5.15.220`。
**两者不一致却是正常的**，因为它们来自两个不同的变量。

### vermagic 的构成

`include/linux/vermagic.h`（`android13-5.15-lts`）：

```c
#include <generated/utsrelease.h>
...
#define MODULE_VERMAGIC_SMP        "SMP "        /* CONFIG_SMP */
#define MODULE_VERMAGIC_PREEMPT    "preempt "    /* CONFIG_PREEMPT */
#define MODULE_VERMAGIC_MODULE_UNLOAD "mod_unload "   /* CONFIG_MODULE_UNLOAD */
#define MODULE_VERMAGIC_MODVERSIONS   "modversions "  /* CONFIG_MODVERSIONS */

#define VERMAGIC_STRING \
    UTS_RELEASE " " \
    MODULE_VERMAGIC_SMP MODULE_VERMAGIC_PREEMPT \
    MODULE_VERMAGIC_MODULE_UNLOAD MODULE_VERMAGIC_MODVERSIONS \
    MODULE_ARCH " " MODULE_RANDSTRUCT_PLUGIN
```

在 `kernel/module.c:1225`：
```c
static const char vermagic[] = VERMAGIC_STRING;
```

### 两个 release 字符串，用途不同

| 变量 | 内容 | 用在哪 |
|---|---|---|
| **`UTS_RELEASE`** | `KERNELRELEASE` **去掉** `setlocalversion` 追加的部分 | **vermagic**（模块校验）、`uname()` 的 release 字段 |
| **`KERNELRELEASE`** | `KERNELVERSION` + `setlocalversion` 输出（`-Batch30`、`-dirty` 之类） | `kernel.release`、`/proc/version` 的正文 |

`Makefile` 里的定义：

```make
filechk_kernel.release = \
	echo "$(KERNELVERSION)$$($(CONFIG_SHELL) $(srctree)/scripts/setlocalversion \
		--save-tag $(srctree) $(BRANCH) $(KMI_GENERATION))"

define filechk_utsrelease.h
	echo \#define UTS_RELEASE \"$(KERNELRELEASE)\"
endef
```

**注意关键点**：`KERNELVERSION` 是 `$(VERSION).$(PATCHLEVEL).$(SUBLEVEL)`。
而设备 `uname -r` = `5.15.220-202609162-Batch30`，
其中 `5.15.220` 是 `KERNELVERSION`，`-202609162-Batch30` 是 `setlocalversion` 追加的。

**所以 vermagic 里的 `5.15.78` 不可能是 UTS_RELEASE** —— 除非……模块不是在 5.15.220 树上编的。

### 真实答案：模块比内核旧

设备内核 `5.15.220` 编译日期 2024-12-01（`Sun Dec 01 08:10:00 UTC 2024`）。
而 AOSP `android13-5.15-lts` 现在 HEAD 的 `SUBLEVEL=220`。

**`vendor_dlkm` 里的 .ko 是在更早的 `5.15.78` 树上编的，之后没跟着内核一起升。
这说明 vendor 模块与 GKI 内核是分开维护、各自发布的。**（Xiaomi 升了内核，没重编 vendor_dlkm。）

这也解释了为什么 `bsp-vermeer-t-oss` 的 Makefile 是 `SUBLEVEL=78`——
Xiaomi 那个仓库 fork 自 `5.15.78` 的基线，一直往上打补丁，SUBLEVEL 从没跟着 AOSP LTS 走。

## 二、那 vermagic 为什么能通过校验？

**因为 `vermagic` 只比 `UTS_RELEASE`，而两边都是 5.15.78。**

不对——内核是 5.15.220。让我把逻辑说清楚：

`vermagic` 校验走 `same_magic()`（`kernel/module.c`），比的是模块的 `vermagic=`
字符串与内核的 `vermagic[]`。若内核是 `5.15.220 SMP preempt mod_unload modversions aarch64`，
模块是 `5.15.78 SMP preempt mod_unload modversions aarch64`，
**这两个字符串不相等，`same_magic()` 应该失败。**

但设备实际是正常运行的。只有两种可能：

1. 内核的 `vermagic[]` 也是 5.15.78（即内核源码树的 `VERSION/PATCHLEVEL/SUBLEVEL`
   是 5.15.78，`uname -r` 显示的 5.15.220 来自别处）——**不可能**，`UTS_RELEASE` 就是
   `KERNELVERSION`。
2. **Xiaomi 改了 `vermagic`/`UTS_RELEASE`** —— 把内核的 vermagic 钉在 5.15.78
   （`android13-5.15` 的 KMI generation 机制），或者给内核也打了 `5.15.78` 的 patch。

**结合 `CONFIG_LOCALVERSION=""` 和 `CONFIG_LOCALVERSION_AUTO=y`**（实测），
以及 `uname -r` 带 `-202609162-Batch30`，最可能是：

**Xiaomi 把 5.15.78 的 vendor 模块和 5.15.220 的内核拼在一起，
靠改 vermagic 或 KMI 让它们相容。** 这正是"厂商魔改"的典型痕迹。

**这也是本项目最值得挖的线索** —— 如果 Xiaomi 能做到 5.15.78 模块 + 5.15.220 内核
共存，说明 KMI 稳定性有可操作的空间。但我没有内核源码（只有 config.gz），无法确认手法。

## 三、vendor 驱动与 GKI 内核沟通的完整机制

这是 GKI（Generic Kernel Image）的设计核心：

```
┌─────────────────────────────────────────────┐
│ boot.img / init_boot.img                    │
│   └─ Image (GKI 通用内核, 无 vendor 代码)      │
├─────────────────────────────────────────────┤
│ vendor_boot.img                             │
│   └─ dtb (来自 vendor, 按 dtb_idx 选取)        │
│   └─ vendor_ramdisk                          │
├─────────────────────────────────────────────┤
│ vendor_dlkm (EROFS, dm-12)                    │
│   └─ lib/modules/*.ko  ← 293 个 vendor 驱动    │
│   └─ modules.load / modules.dep / modules.alias│
├─────────────────────────────────────────────┤
│ system_dlkm (EROFS, dm-13)                    │
│   └─ lib/modules/  ← 实测为空 (0 个)           │
└─────────────────────────────────────────────┘
```

### 三层通信

1. **设备树（DTB）** —— 从 `vendor_boot` 传入，按 `ro.boot.dtb_idx=2` 选取
   （实测）。内核是 generic 的，不认识 SM8550；所有硬件信息（compatible 字符串、
   寄存器地址、中断号、时钟、regulator）都从 DTB 来。
   **这就是为什么换内核可以保留旧 DTB** —— DTB 是数据，不是代码。

2. **模块加载** —— `modules.load`（411 行，去重 293）由 first-stage init 逐条
   `init_module()`。`/system/bin/modprobe` 和 `/vendor/bin/modprobe` 都只是
   toybox toolbox 的 symlink，不参与批量加载。
   `.rc` 里有零散 `vendor_modprobe` 调用（rmnet 系列按需 load/unload）。

3. **符号解析（vermagic + CRC）** —— 这才是真正的"沟通契约"：
   - `.ko` 的 `.modinfo` 带 `vermagic=...`
   - `.ko` 的 `__versions` section 带 `{(crc, symbol_name)}` 数组
   - 内核 `check_modinfo()` / `same_magic()` 比 vermagic
   - 内核 `check_version()` 逐个比 CRC
   - `__ksymtab` 导出内核符号表，模块按名字 + CRC 绑定

### 关键：沟通只通过"符号表 + DTB"，不通过源码

GKI 的契约是：**内核导出稳定的 KMI（Kernel Module Interface）符号 ABI**，
vendor 模块按这个 ABI 编译。两侧源码独立演进，只靠符号 CRC 对齐。

**一旦 ABI 破裂（5.15 → 6.1），整套机制就断了** —— 这就是 17,761 个 CRC 全部失效的含义。

## 四、这个机制对本项目的直接启示

**"Xiaomi 让 5.15.78 模块跑在 5.15.220 内核上"这个现象，比 6.1 移植更值得研究。**

因为：
- 它证明了**跨 SUBLEVEL 的 KMI 兼容是可以人为维持的**
- 若能拿到内核源码，就能知道 Xiaomi 改了哪里（很可能钉了 vermagic）
- 这个手法可以直接用在 6.1 上吗？**不能** —— 5.15.78→5.15.220 是同大版本
  小版本跃迁，struct 布局基本没变；6.1 是跨大版本，struct 布局全变。
  前者只需骗 vermagic，后者骗不过 struct。

**但它揭示了一件事**：厂商自己也在维护这个 vermagic/KMI 契约。所以
"5.15 模块跑在 5.15 内核"是有人在维持的，不是天然成立。

## 五、待验证（需要内核源码，目前没有）

1. Xiaomi 内核的 `vermagic[]` 实际值是多少？（会终结 5.15.78 vs 5.15.220 之谜）
   —— 可从设备读已加载模块的 `.modinfo` 反推，或用 KSU 读内核内存
2. `check_modinfo()` 是否被 Xiaomi patch 过
3. 若 vermagic 被钉死，那么 `CONFIG_MODVERSIONS` 的 CRC 是否也被 patch 放宽

**这三条决定了一件事**：这台设备的模块加载可能比标准 GKI 宽松得多，
那 6.1 移植的实验空间会比理论估计大。
