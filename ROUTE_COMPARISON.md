# 完整对比：5.15 → 6.1 移植的六条路线

先纠正用户前提里的三处，再给对比表和推荐。

---

## 〇、先纠正三个前提

### 1. 这不是「Android 13 设备」

| 层 | 实测 |
|---|---|
| System/框架 | Android **16** / SDK 36，HyperOS 3.0.0.307 |
| vendor 分区 | Android **13** / SDK 33 |
| 内核 | Linux **5.15.220**，GKI `android13-5.15` |

厂商已经把新框架叠在旧 vendor 上了。所以「跑 Android 14」在当前语境下其实是**降级**。

### 2. 这颗设备没有 6.1 内核可用（已查证）

`MiCode/Xiaomi_Kernel_OpenSource` 全仓 266 个分支里，vermeer 相关只有两个：

| 分支 | SUBLEVEL | commit msg 自称 |
|---|---|---|
| `fuxi-t-oss` | 5.15.41 | "Xiaomi 13 **Pro** Android T" |
| `bsp-vermeer-t-oss` | **5.15.78** | "**Redmi K70** Android U" |

**5.15.78 与设备 vermagic 完全吻合。** 迄今没有 6.1 分支。
另外 `xiaomifirmwareupdater.com` 已是停放待售域名，XFU 取固件的路断了。

该仓库是 GKI 形 `common` 树（140 顶层条目，有 `android/`、`build.config.gki.aarch64`），
**但没有** `msm-kernel`/`techpack`/`vendor_dlkm` → 官方开源不含那 293 个 vendor .ko 的源码。

### 3. 已经有一个可用的 ABI 兼容层（用户已有，此前未提及）

`C:\Users\Administrator\StudioProjects\ABK_ABI_PATCH_SUITE` 是一个已成型的 ABK
`module_set`，`module.conf` 声明 5 个 child：`display_release_spoof`、`abi_bridge`、
`security_backport`、`feature_porting_core`、`feature_porting_backlog`。

**`abi_bridge` 做的事正是「兼容层」**，且不是只打 warning——它真的**中和掉了加载器检查**：

- `resolve_layout()`（`scripts/abk_dual_abi_bridge_apply.py:28`）同时识别
  6.1 的拆分布局（`kernel/module/{main.c,version.c,internal.h}`）和 5.15 的单文件布局，
  注释明确说"split 是代码在哪的问题，不是代码存不存在的问题"。
- 改写 `check_modstruct_version()`（:374-390）：CRC 不匹配时，若模块在白名单内，
  `abk_dual_abi_bridge_note_modstruct(info)` 后 **`return 1`**（放行）而非 `0`。
- 改写 `same_magic()`（:419-427）中和 vermagic 字符串比较。
- CRC 检查路径同样转为 `pr_warn` 后放行（:296-309）。

**但它的门禁是"7.0.12 家族"**：`ABK_DUAL_ABI_BRIDGE_RELEASE_PREFIX "7.0.12"`
（:109/:186），`is_7012_family()` 用 `strncmp(release, "7.0.12", 6)` 判定（:241-244）。
模块白名单默认 `"kernelsu,sukisu,resukisu,ksu"`（:106），即默认只放行 KSU 系模块；
`CONFIG_ABK_DUAL_ABI_BRIDGE_EXPERIMENTAL` 则 `return true` 全放行（:231-322）。

配套有实测基建：`tests/ko/abk_bridge_test.c` + `tests/build_bridge_test_ko.sh`
（用 `MODVERSIONS`/`MODULE_UNLOAD` 编一个真 `.ko` 出来验证），
以及 `tests/android13_5_15_test.py`（专门测 5.15 分支，含"shape-rewriting helper
在 6.1 树上保持 disarmed"）。

**这改变了整个局面**：兼容层的机器你已经有了，缺的只是把门禁从 "7.0.12 家族"
改成 "5.15.78 家族"。

---

## 一、核心约束（量化）

从 293 个 .ko 的 `__versions` section 解析（布局经 hexdump 确认为
`struct modversion_info {u64 crc; char name[]}`，整记录 8 字节对齐 padding；
naive 解析会截断长符号名、低估绑定数。`_probe/versions.py` 有自检 PASS）：

| 指标 | 值 |
|---|---|
| CRC 绑定总数 | **17,761** |
| 不同内核符号 | 3,630 |
| 每模块绑定中位数 | 40 |
| 绑定 100+ 的模块 | 33 |
| 带 CFI 插桩 | **293 / 293** |

耦合最深：`msm_drm.ko` 791、`qca_cld3_kiwi_v2.ko` 511、`msm_kgsl.ko` 499、
`camera.ko` 399、`ipam.ko` 392、`cnss2.ko` 336。

普及最广的绑定：`module_layout` 293/293、`__ubsan_handle_cfi_check_fail_abort`
293、`__stack_chk_fail` 245、`_printk` 237、`kfree` 159、`mutex_lock` 157。

### 四道关卡

| 机制 | 位置 | 能否绕过 |
|---|---|---|
| vermagic 字符串 | `check_modinfo`/`same_magic` | **能**（`abi_bridge` 已在做） |
| MODVERSIONS 每符号 CRC | `check_version`/`check_modstruct_version` | **能**（`abi_bridge` 已在做） |
| **struct 布局 ABI** | 无检查点，是**运行期**崩溃 | **不能** |
| CFI_CLANG 间接调用检查 | `.text.__cfi_check` + `__cfi_slowpath_diag` | **极难** |

前三道是"能骗过"，第四道不是骗的问题——`.ko` 里每个间接调用都过 CFI shadow，
目标函数签名对不上就 `__cfi_check_fail` 直接 abort。

### ⚠️ 关键结论

**即使前两道关卡全被中和，第三道（struct 布局）和第四道（CFI）仍会杀掉大部分模块。**

17,761 个绑定里，`msm_drm`/`msm_kgsl`/`camera`/`qca_cld3` 这些合计占了 2,137 个
（约 12%），但它们触屏的 `drm_mode_config_funcs`、`dma_buf_ops`、`iommu_ops`、
`snd_soc_component_driver`、`net_device`、`sched_class` 在 5.15→6.1 之间**全都改过**。

所以：**兼容层能让加载器闭嘴，但没法让 6.1 内核安全地跑这批 5.15 驱动。**

---

## 二、六条路线对比

| # | 路线 | 可行 | 工作量 | 能得到什么 | 关键卡点 |
|---|---|---|---|---|---|
| 1 | **6.1 GKI + 你已有的 abi_bridge，放行 5.15 vendor .ko** | ❌ 低 | 低 | 能启动、KSU 可用；显示/GPU/相机/WiFi/音频大概率挂 | **struct 布局 + CFI 必杀**，兼容层管不了 |
| 2 | **6.1 GKI + 只放行少量低耦合模块** | ⚠️ 中 | 低 | demo：可展示"5.15 ko 在 6.1 上加载成功"；KSU 系全通 | 功能残缺；要逐个验证 |
| 3 | **用 LineageOS 的 SM8550 内核 + vendor 源码构建** | ✅ 高但**不是 6.1** | 中 | **完整可用的 SM8550 Linux 系统，5.15.211** | 内核是 5.15，不满足"6.1"目标 |
| 4 | **自己把 vendor 源码从 5.15 搬到 6.1** | ⚠️ 中 | **很高** | 唯一的真 6.1 + 真 vendor 之路 | 需改 `vendor/kalama_GKI.config`、过 `modules_prepare`、逐模块修 `EXPORT_SYMBOL`/签名差异 |
| 5 | **保持 5.15 内核，只升系统** | ✅ 高 | 低 | 完全可用，且 Android 16 已经在跑 | 仍是 5.15 |
| 6 | **全面逆向后重写 293 个模块** | ❌ 不可行 | 不可能 | 无 | 源码不存在 + 17,761 CRC + 规模 |

### 排序：3 > 5 > 4 > 2 > 1 > 6

**注意这个排序的含义**：如果用户的目标是「一台能用的 SM8550 Linux 系统」，
路线 3 直接达成（LineageOS 已经做好了）。如果目标是「**内核必须是 6.1**」，
那么**只有路线 4**，而它是极高工作量——因为整个 SM8550 生态（官方 + LineageOS）
都停在 5.15，没人铺过这条路。

---

## 三、为什么路线 3 也走不通（新查证，推翻初判）

这是本次补充调研最有价值的发现，但结论与我一开始的判断**相反**。

### LineageOS 为 SM8550 构建 vendor 驱动 —— 但内核是 5.15，不是 6.1

`LineageOS/android_kernel_xiaomi_sm8550` 存在且在维护
（默认分支 `lineage-23.2`，最后推送 2026-09-19），
`LineageOS/android_kernel_xiaomi_sm8550-modules` 同样存在（2026-09-30）。

`BoardConfigCommon.mk`（`android_device_xiaomi_sm8550-common/lineage-23.2`）确实展示了
完整的 vendor 驱动源码构建，值得逐条列出来——**因为它证明了这条路在工程上成立**：

```makefile
# :80-85
BOARD_USES_GENERIC_KERNEL_IMAGE := true
BOARD_KERNEL_IMAGE_NAME := Image
TARGET_KERNEL_SOURCE := kernel/xiaomi/sm8550
TARGET_KERNEL_CONFIG := \
    gki_defconfig \
    vendor/kalama_GKI.config \
    vendor/$(PRODUCT_DEVICE)_GKI.config

# :90-118
TARGET_KERNEL_EXT_MODULE_ROOT := kernel/xiaomi/sm8550-modules
TARGET_KERNEL_EXT_MODULES := \
	qcom/opensource/mmrm-driver \
	qcom/opensource/mm-drivers/hw_fence \
	qcom/opensource/mm-drivers/msm_ext_display \
	qcom/opensource/mm-drivers/sync_fence \
	qcom/opensource/audio-kernel \
	qcom/opensource/camera-kernel \
	qcom/opensource/dataipa/drivers/platform/msm \
	qcom/opensource/datarmnet/{core,aps,offload,shs,perf,perf_tether,sch,wlan} \
	qcom/opensource/securemsm-kernel \
	qcom/opensource/display-drivers/msm \
	qcom/opensource/eva-kernel \
	qcom/opensource/video-driver \
	qcom/opensource/graphics-kernel \
	qcom/opensource/wlan/platform \
	qcom/opensource/wlan/qcacld-3.0/.kiwi_v2 \
	qcom/opensource/bt-kernel \
	nxp/opensource/driver
```

对照我实测的 293 个 blob，映射关系很清晰：
`camera.ko`↔`camera-kernel`、`msm_drm.ko`↔`display-drivers/msm`、
`msm_kgsl.ko`↔`graphics-kernel`、`qca_cld3_kiwi_v2.ko`↔`wlan/qcacld-3.0/.kiwi_v2`、
`ipa_*`↔`dataipa`、`rmnet_*`↔`datarmnet*`。**大头确实都有 Qualcomm 开源源码。**

Xiaomi 私有部分也确认仍是 blob（`android_device_xiaomi_vermeer/BoardConfig.mk`
的 `BOARD_VENDOR_KERNEL_MODULES_LOAD`）：
`aw882xx_dlkm.ko`、`goodix_fod.ko`、`goodix_core.ko`、`wl2868c.ko`、
`wl2866d.ko`、`xiaomi_touch.ko` —— 与我在 293 个 blob 里标记"无公开源码"的那批精确吻合。
但这些是边缘功能模块，缺了是降级，不是不开机。

### ❌ 但内核版本是 5.15

`android_kernel_xiaomi_sm8550` 的 **Makefile**：

```
VERSION = 5
PATCHLEVEL = 15
SUBLEVEL = 211          # lineage-23.2，即 Android 16
EXTRAVERSION =
```

**全部 8 个分支无一例外，全是 5.15：**

| 分支 | SUBLEVEL | 对应 |
|---|---|---|
| `lineage-21` | 152 | |
| `lineage-22.0` | 169 | |
| `lineage-22.1` | 169 | |
| `lineage-22.2` | 189 | |
| `lineage-23.0` | 197 | |
| `lineage-23.1` | 197 | |
| `lineage-23.2` | **211** | Android 16 |
| `lineage-24.0` | 211 | Android 18 dev |

**从 Android 16 到 Android 18 开发版，LineageOS 给 SM8550 用的都是 5.15，从来没有 6.1。**

（`android_kernel_xiaomi_sm8550-modules` 的 Makefile 返回 404，说明它不是一个独立
内核树，而是模块集合——与 `TARGET_KERNEL_EXT_MODULE_ROOT` 的定位一致。）

### 结论：不只是 Xiaomi，整个社区都停在 5.15

两家独立来源交叉验证同一结论：

| 来源 | 最新 SM8550 内核 |
|---|---|
| Xiaomi 官方 `MiCode/Xiaomi_Kernel_OpenSource` | 5.15.78（`bsp-vermeer-t-oss`） |
| LineageOS `android_kernel_xiaomi_sm8550` | 5.15.211（`lineage-23.2`/`24.0`） |

**SM8550 的 KMI 基线就是 5.15，没人把它挪到 6.1。** 这解释了为什么 293 个 vendor blob
全是 5.15.78——不是厂商懒，是这个平台的既定基线。

**路线 3 的价值下降**：它仍然证明了「vendor 驱动可以从源码编」这条工程路径成立，
而且给出了 23 个 Qualcomm 开源组件的完整清单（这是路线 4 的素材），
但它**不提供** 6.1 的 vendor 栈。要 6.1 必须自己改 5.15→6.1，工作量回到路线 4。

### 路线 4 的素材是否齐备

- **GKI 6.1（generic）有**：ABK 的 `KNOWN_KERNEL_PAIRS` 接受 30 个 `android14 6.1`
  组合，从 `6.1.25 / 2023-06` 到 `6.1.138 / 2025-06`。
  所以 `common` 这一层随时能拿到。
- **vendor 层（`vendor/kalama_GKI.config` + 23 个 qcom 组件）有源码**，见上表。
- **缺口**：LineageOS 的 `vendor/kalama_GKI.config` 是配 5.15 内核的，
  它的 `CONFIG_*` 集合和符号集是按 5.15 调过的。搬到 6.1 要重跑
  `modules_prepare`、处理 `EXPORT_SYMBOL` 差异和 k

---

## 四、对用户三条原始设想的最终裁决

| 原始设想 | 裁决 |
|---|---|
| 「直接逆 ko，重新自己编译一套 vendor」 | ❌ **排除**。源码不存在；17,761 CRC + 293 模块不是可逆的量级。但**部分替代**：Qualcomm 大头有 CAF/LineageOS 源码，见路线 3/4 |
| 「制作兼容层」 | ⚠️ **机器已有但不够**。`abi_bridge` 已能中和 vermagic + CRC 两道关卡，但 struct 布局和 CFI 是运行期问题，兼容层管不了 |
| 「抓 vendor.img 解包查看」 | ✅ **已做**（`_probe/vendor_ko/`，293 个 .ko 全在）。用于研究和 blob 抽取，不能靠它转向 6.1 |

---

## 五、ABK 模块集怎么落地

`ABK_ABI_PATCH_SUITE` 已经是标准 ABK `module_set`（`module.conf` 里
`ABK_MODULE_KIND="module_set"` + `ABK_MODULE_SET_ID` + `ABK_MODULE_SET_ITEMS`），
注册形式：

```
set:https://github.com/fanziyun/ABK_ABI_PATCH_SUITE.git#abi_bridge;after_patch
```

这正是你说的「做成 ABK 的模块集」，而且已经做完了。

**要把 `abi_bridge` 用于本项目，最小改动是两处**：

| 位置 | 现值 | 改为 |
|---|---|---|
| `scripts/abk_dual_abi_bridge_apply.py:109,186` | `"7.0.12"` | `"5.15.78"` |
| `:106` | `"kernelsu,sukisu,resukisu,ksu"` | 目标 .ko 名列表（或开 EXPERIMENTAL 全放行） |

`resolve_layout()`（:28）已经同时支持 6.1 拆分布局和 5.15 单文件布局，**不需要改**。

### ABK 的能力边界（实测，有三处要修正直觉）

1. **`source_mode: custom_git` 能喂 GKI 形树**，但有三个硬约束：源码必须在仓库根目录
   并放进 `common`；**即使 custom 模式也要求 AOSP 存在精确
   `common-<android>-<kernel>-<patch>` manifest 分支**（`kernel-source.yml:233-237`），
   不存在就报错不自动换月份；`source_commit` 必须是 40 位 SHA（`build.yml:480`）。
2. **ABK 产不出 `init_boot.img`**：所有 workflow 里 `init_boot` 零命中，
   `mkbootimg`/`avbtool` 全是 `--partition_name boot`（`build.yml:6585-6611`）。
   要做 init_boot 必须改 ABK。
3. **`ABK_MODULE_SUPPORTED_STAGES` workflow 根本不读**，只被 Android app
   （`GitHubRepository.kt:945-978`）用于 UI 显示，**不 gate 任何东西**。

只有两个 stage：`after_patch`（`build.yml:3770`）和 `before_build`（`:4042`），
都在编译之前。**没有 `after_build`** —— 所以「额外 .ko 编进 AnyKernel3」这件事
编码可行、打包不可行，要加第三个 stage。

`custom_external_modules` 支持三种写法（`build.yml:818-836`）：
`module:<url>;<stage>` / `set:<url>#<child>;<stage>` / 旧式 `<url>;<stage>`。
本地构建路径（`desktop/assets/local_build/rebuild.sh:568-575`）还支持**本地目录**
当模块源——调试新模块时最省事。

---

## 六、abi_bridge 实测结果（2026-10-01，不需设备）

跑模块集自带测试（**注意 Windows 上必须 `PYTHONUTF8=1`**，否则 Python 的
`read_text()` 走 GBK 默认编码，会误报 `UnicodeDecodeError`——是环境问题不是代码问题）：

```bash
cd /c/Users/Administrator/StudioProjects/ABK_ABI_PATCH_SUITE
PYTHONUTF8=1 python3 tests/android13_5_15_test.py            # 22 个全过
PYTHONUTF8=1 python3 tests/feature_porting_regression_test.py # 19 个全过
```

| 测试 | 覆盖 | 结果 |
|---|---|---|
| `tests/android13_5_15_test.py` | 5.15 分支，含"shape-rewriting helper 在 6.1 树上保持 disarmed" | **22/22 OK** |
| `tests/feature_porting_regression_test.py` | android14-6.1 fixtures | **19/19 OK** |
| `python3 -m py_compile scripts/*.py` | 静态编译 | OK |
| `bash -n setup.sh scripts/*.sh` | 语法 | OK |

**关键确认**：`abi_bridge` 的辅助函数在 6.1 树上会自动 disarmed、在 5.15 树上生效。
这正是跨版本移植需要的性质——**同一套代码两支内核线都不会编坏**。

## 七、今天能做的 5 件事

设备已连回（`adb connect 192.168.31.124:38683`，**端口会变，用 `adb mdns services` 找**）。

### 已完成（本次）

```bash
# abi_bridge 双线测试全绿（不需设备）
cd /c/Users/Administrator/StudioProjects/ABK_ABI_PATCH_SUITE
PYTHONUTF8=1 python3 tests/android13_5_15_test.py
PYTHONUTF8=1 python3 tests/feature_porting_regression_test.py
```

### 接下来按优先级

```bash
# 1. 把 abi_bridge 的 release 门禁从 7.0.12 改成 5.15.78（路线 2 的最小改动点）
cd /c/Users/Administrator/StudioProjects/ABK_ABI_PATCH_SUITE
grep -n '7\.0\.12' scripts/abk_dual_abi_bridge_apply.py
```

```bash
# 2. 取 LineageOS 的 kalama GKI config + 23 个 qcom 组件清单（路线 4 的唯一素材）
curl -sO https://raw.githubusercontent.com/LineageOS/android_device_xiaomi_sm8550-common/lineage-23.2/modules.load.vendor_dlkm
```

```bash
# 3. 确认 LineageOS sm8550-modules 里哪些组件有 6.1 分支（判定路线 4 工作量）
curl -s "https://api.github.com/repos/LineageOS/android_kernel_xiaomi_sm8550-modules/branches" | head -20
```

```bash
# 4. 设备侧备份（任何刷机前必做）
#    注意：vendor_dlkm 是 super 里的【逻辑分区】，没有 vendor_dlkm_a 这种物理符号链接，
#    不能用 dd；要备份它用 lpdump 或直接在已挂载路径上打包。
adb shell su -c 'dd if=/dev/block/by-name/init_boot_a of=/sdcard/init_boot_a.img bs=1M'
adb shell su -c 'dd if=/dev/block/by-name/vendor_boot_a of=/sdcard/vendor_boot_a.img bs=1M'
adb shell su -c 'dd if=/dev/block/by-name/dtbo_a of=/sdcard/dtbo_a.img bs=1M'
adb shell su -c 'dd if=/dev/block/by-name/vbmeta_a of=/sdcard/vbmeta_a.img bs=1M'
adb pull /sdcard/init_boot_a.img /sdcard/vendor_boot_a.img /sdcard/dtbo_a.img /sdcard/vbmeta_a.img .
```

```bash
# 5. 验证 DTB 分拆可行性（路线 4 的关键前置）
adb shell getprop ro.boot.dtb_idx     # 实测 = 2，证明 DTB 来自 boot 镜像按索引选取
```

**注**：机器上没有本地 5.15 内核 `common` 树（此前以为有）。
`ABK_5.15_BACKPORT*` / `ABK_ABI_PATCH_SUITE` 是 ABK 模块工程，
`vendor/` 下是 fas-rs 的 Rust 产物，`abk_tmp_common` 只有 `.git`。
ABI_PATCH_SUITE 测试用的是 `%TEMP%\tmp*-b/common/` 单文件夹具。
**路线 4 第一步是把树拉下来。**
