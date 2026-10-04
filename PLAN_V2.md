# 6.1 移植测试方案（v2，基于已更正的事实）

**本文件取代 `FINAL_PLAN.md`。** 后者写于几次错误归因之前，部分结论已不成立。

已更正的错误见 `CORRECTIONS.md`。本文件只写**有证据支撑的**内容和**可执行步骤**。

---

## 一、当前最硬的五个事实

| # | 事实 | 证据 |
|---|---|---|
| 1 | 设备内核 = AOSP `android13-5.15-lts`（5.15.220） | SUBLEVEL 吻合 |
| 2 | 293 个 vendor 模块全带 CFI 插桩，编译器 clang 14.0.7 | `__cfi_check` 293/293 |
| 3 | **CFI 严格**：无插桩模块的导出函数被调用 → kernel panic | 真机 panic 日志 |
| 4 | `check_modinfo()` 对 vermagic 版本号**宽松** | `5.15.78` 模块加载成功 |
| 5 | 6.1 GKI 上游无任何 SM8550 支持（GPU/显示/相机/WiFi/DT 全无） | 逐项 404 确认 |

**第 3 条是本次最重要的新发现**，它把"CFI 是可选项"变成了"CFI 是必选项"。

---

## 二、方案原则（从错误中学到的）

1. **不能关 CFI 测试**。关掉 CFI 编出来的模块测不出真实行为（我正是这样崩的）。
2. **不能只 `insmod` 完就下结论**。必须让模块**实际执行**才撞得到 struct 布局问题。
3. **绝不自动 `rmmod`**。上次 panic 走的是 `delete_module` 路径。
4. **一次只测一个**，测前确认设备在线。
5. **构建必须落 ext4**，用与设备同代的编译器（clang 14 系）。
6. **QEMU 只用于证明"6.1 内核本身能启动"**，不用于测 vendor 驱动
   （缺依赖链，全是假阴性）。

---

## 三、分四个 Phase，每 Phase 独立可判、可回退

### Phase 0：证明 6.1 GKI 内核能启动（QEMU，零风险，不需设备）

**目标**：确认 AOSP `android14-6.1-lts` + 我们的 Kconfig 改动能编译并启动到 userspace。

**不涉及任何 vendor 驱动。** 纯 GKI，无 kalama DTB。

步骤：
```
1. ext4 上 clone android14-6.1-lts + kernel/build
2. 用 LLVM=1 + gki_defconfig，开 MODVERSIONS / CFI_CLANG（全部默认）
3. make Image    （目标：arch/arm64/boot/Image 存在）
4. QEMU virt 平台启动，确认能打印并进 init
```

**通过判据**：QEMU 里看到内核启动日志并进入用户态。
**不通过则**：方案在第一步就断了，不必往下走。
**此 Phase 不刷机，对设备零风险。**

**注意内存**：6.1 + ThinLTO 在 12 GB 上会被 OOM kill（我在 5.15 上遇到过 `Error 137`）。
若 OOM，关 `CONFIG_LTO` 重试——**但那样 Phase 2 的结论要打折**（LTO 影响符号）。
更优解：给 `.wslconfig` 加到 `memory=20GB, swap=8GB`。

---

### Phase 1：证明"带 CFI 的模块"能被 6.1 内核加载并运行（QEMU）

**目标**：这是**整个方案的技术前提**，必须先证明。

编一个**带 CFI 插桩**的最小模块（开着 `CONFIG_CFI_CLANG` 编），在 QEMU 里：
- `insmod` 成功
- 调用它的导出函数**不 panic**

**通过判据**：模块加载 + 调用 + 卸载都正常，无 `CFI failure`。

**这一步的意义**：上次 panic 是因为我的模块**不带** CFI。如果我能在 6.1 上
造出**带** CFI 且能正常工作的模块，就证明"开 CFI 编译"是解决办法，
Phase 2 才有正确的测试基础。

**不通过则**：说明 6.1 上 CFI 无法与非内核树代码共存，整个方向要重新评估。

---

### Phase 2：真机测 vendor 模块加载（有风险）

**前置条件**：Phase 0、1 都通过。

**目标**：用 6.1 内核 + 兼容补丁，在真机上加载 vendor 模块，测能活几个。

**内核侧改动（四项）**：
```bash
# 1. vermagic —— 已证设备上 check_modinfo 宽松，6.1 上需 patch
#    kernel/module/main.c（6.1 拆分布局）的 check_modinfo() / same_magic()
# 2. MODVERSIONS —— CONFIG_MODVERSIONS=n 一次性跳过 17,675 个 CRC
# 3. 模块签名 —— CONFIG_MODULE_SIG_FORCE=n
# 4. CFI —— 必须【开着】CFI 编译，不能关
```

**测试顺序（从低耦合到高耦合）**：

| 顺序 | 模块 | CRC 绑定 | 理由 |
|---|---|---|---|
| 1 | `boot_stats.ko` | 10 | 最低耦合，无硬件依赖 |
| 2 | `bam_dma.ko` | ~10 | DMA，基础设施 |
| 3 | `i2c-msm-geni` | ~20 | 有真实硬件但简单 |
| 4 | `pinctrl-*` | ~20 | 平台基础 |
| 5 | `spmi` 系 | ~30 | 平台基础 |
| 6 | `msm_drm.ko` | 784 | 显示，最高风险 |
| 7 | `msm_kgsl.ko` | 497 | GPU |
| 8 | `camera.ko` | 396 | 相机 |

**每个模块的测试步骤**：
```bash
# a. 只 insmod，绝不 rmmod
adb shell su -c 'insmod /data/local/tmp/<mod>.ko; echo EXIT=$?'
# b. 若成功，立即查 dmesg 有无 CFI/Oops
adb shell su -c 'dmesg | grep -iE "CFI failure|Oops|disagrees|Unknown symbol" | tail -20'
# c. 记录：加载成败 + dmesg 关键行
# d. 不卸载；重启设备清除状态再测下一个
```

**安全措施**：
1. 刷 **非活动槽**（`fastboot flash init_boot_b` + `fastboot set_active b`）
2. 失败立即 `fastboot set_active a` 回滚
3. **先备份四个物理分区**
4. 每测一个模块重启一次设备（不用 rmmod 清理）

**通过判据**：至少前 5 个低耦合模块能加载且无 CFI/Oops。
**部分通过**：记录哪些活哪些死——这本身就是有价值的实验数据。

---

### Phase 3：固化成 ABK 模块集

只在前两 Phase 有正面结果时才值得做。

按 `ci-build-parity` skill 契约做成 ABK 外部模块：

```
module.conf
  ABK_MODULE_ID="abk_gki61_vendor_compat"
  ABK_MODULE_SUPPORTED_STAGES="after_patch,before_build"
  ABK_MODULE_DEFAULT_STAGE="after_patch"

setup.sh
  after_patch)
    # patch kernel/module/main.c 的 check_modinfo()/same_magic()
    ;;
  before_build)
    # CONFIG_MODVERSIONS=n, CONFIG_MODULE_SIG_FORCE=n
    # CFI 保持默认（开）
    ;;

patches/6.1/*.patch     # 版本分目录，git apply --check 幂等
```

**skill 三条铁律**：
1. 必须 ext4，不能在 `/mnt/<盘符>`
2. 6.1 用 **bazel**（`tools/bazel`），非 legacy `build/build.sh`
   → `CC=ccache clang` 和 `-j` 两个补丁**不适用**
3. `set:<url>#<child-id>` 必须带 child id，否则静默失效

**ABK 能力边界（实测）**：
- ✅ 支持 `source_mode: custom_git` 指向 GKI 形树
- ⚠️ 但要求源码在仓库根目录并放进 `common`，
  且**即使 custom 也要求 AOSP 存在精确 `common-<android>-<kernel>-<patch>` 分支**
- ❌ **产不出 `init_boot.img`**（所有 workflow 只产 `boot` 分区），需改 ABK
- ❌ ABK 不构建 vendor_dlkm / techpack / msm-kernel

---

## 四、诚实的预期

| 结果 | 可能性 | 依据 |
|---|---|---|
| Phase 0（6.1 启动） | **高** | 纯 GKI，无 vendor 依赖 |
| Phase 1（CFI 模块可用） | **中高** | 开着 CFI 编是对的方向，但需验证 |
| Phase 2 低耦合模块加载 | **中** | vermagic 宽松 + MODVERSIONS 可关 |
| Phase 2 显示/GPU/相机/WiFi | **低** | struct 布局差异最大，且上游无替代 |
| 最终能用的 6.1 手机 | **很低** | 四大件无源码、上游无支持 |

---

## 五、明确的"不要做"

1. ❌ **不要逆向后重写 293 个模块**（17,675 CRC + 72.7 MB，不可行）
2. ❌ **不要指望 QEMU 测出 vendor 驱动兼容性**（缺依赖链，假阴性）
3. ❌ **不要关 CFI 编译测试模块**（我已因此崩过一次）
4. ❌ **不要在 9p/drvfs 上编译**（`/mnt/<盘符>`，慢且出诡异错误）
5. ❌ **不要自动 rmmod**（上次 panic 路径）
6. ❌ **不要直接用 abi_bridge 当兼容层**（方向相反，且不解决 CFI）

---

## 六、下一步（等你决定）

三个选项：

**A. 直接从 Phase 0 开始**（QEMU + 6.1，ext4，零风险，不需设备在线）

**B. 先补 5.15 的一个干净测试**：用**开着 CFI 的 clang 14** 重编
一个带 CFI 的最小模块，在 5.15 真机上验证"带 CFI 的模块能正常加载/卸载"。
这能确认 Phase 1 的方法正确，且风险低于直接上 6.1。

**C. 什么都不做**，先只保留这份文档。

我建议 **B → A → 2**：
B 用最小代价证明"带 CFI 的模块没问题"（排除我的测试方法问题），
A 证明 6.1 内核本身能跑，
然后才轮到有刷机风险的 Phase 2。

理由：我在这条路上已经错了 6 次，其中 2 次是我自己的测试方法有问题
（关 CFI、字节 patch CRC），不是内核的问题。
**先把测法验对，再测内核**，否则我可能在用一个坏测试去否定一个好内核。
