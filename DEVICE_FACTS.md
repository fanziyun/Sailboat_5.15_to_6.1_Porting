# vermeer 设备事实快照（2026-10-01 实测，adb 192.168.31.124:38555）

以下全部为真机测量值，非推测。实测时 SELinux Enforcing，KernelSU v3.3.0-45 root。

## 机型与系统分层

| 项 | 值 |
|---|---|
| 产品 | Xiaomi 13 `vermeer` / 23113RKC6C |
| SoC | SM8550，platform `kalama`，Adreno |
| Framework/System | Android **16** / SDK 36 / HyperOS 3.0.0.307.0.WNKCNXM |
| `ro.system.build.fingerprint` | `Xiaomi/missi/missi:16/BP2A.250605.031.A3/...:user/release-keys` |
| Vendor | Android **13** / SDK 33 |
| `ro.vendor.build.fingerprint` | `Redmi/vermeer/vermeer:13/TKQ1.221114.001/...:user/release-keys` |

**关键结构：Android 16 用户态 + Android 13 vendor + 5.15 GKI 内核。**
这不是「Android 13 手机」，是厂商把新框架叠在旧 vendor 上。

## 内核

- `Linux 5.15.220-202609162-Batch30`，aarch64，SMP PREEMPT
- clang 14.0.7 (r450784e)，LLD 14.0.7
- GKI 线：`android13-5.15`（kci515 家族）

决定性 config（来自 `/proc/config.gz`，已存 `_probe/kernel.config`，7016 行）：

```
CONFIG_MODVERSIONS=y            CONFIG_MODULE_SIG_ALL=y
CONFIG_MODULE_SIG_PROTECT=y     CONFIG_MODULE_SIG_SHA1=y
CONFIG_LTO=y CONFIG_LTO_CLANG_THIN=y
CONFIG_CFI_CLANG=y CONFIG_CFI_CLANG_SHADOW=y
CONFIG_TRIM_UNUSED_KSYMS=y
CONFIG_UNUSED_KSYMS_WHITELIST="/root/kci515/.../abi_symbollist.raw"
CONFIG_ARM64_BTI=y CONFIG_ARM64_MTE=y
CONFIG_DEBUG_INFO_BTF=y CONFIG_LOCALVERSION=""
```

## 启动链（实测）

- `/proc/cmdline` 含 `ro.boot.dtb_idx=2`、`ro.boot.dtbo_idx=53`、`bootconfig`
  → **DTB 由 vendor_boot 提供并按索引选取**，不是编进内核。
  「换内核、留旧 DTB」这条路在硬件层面成立。
- `init_boot_a`(sde30) / `init_boot_b`(sde59) 与 `vendor_boot_a`(sde24) / `vendor_boot_b`(sde54) **互相独立**
- `dtbo_a`(sde18) / `dtbo_b`(sde48) 是独立分区
- `super` = /dev/block/sda28，内含 **逻辑分区** vendor / vendor_dlkm / system_dlkm /
  product / system / system_ext 等。
  **`vendor_dlkm` 没有 `vendor_dlkm_a` 这种物理符号链接**（是逻辑分区），
  不能用 `dd if=/dev/block/by-name/vendor_dlkm_a` 备份；要用 lpdump 或从挂载点打包。
- 存在 `ARCHROOT` 分区 (sda31)
- Bootloader 已解锁；`verifiedbootstate=green`，`vbmeta.device_state=locked`
  → AVB 仍校验 boot/vendor_boot/init_boot 镜像

## 分区挂载（EROGS 只读）

```
/dev/block/dm-11 on /vendor        erofs ro
/dev/block/dm-12 on /vendor_dlkm   erofs ro   ← 299 个 vendor .ko 全在这里
/dev/block/dm-13 on /system_dlkm   erofs ro   ← lib/modules 为 0 个文件（空的！）
/dev/block/dm-8  on /              erofs ro
/dev/block/dm-15 on /mnt/vendor/mi_ext erofs ro
```

`/system_dlkm/lib/modules` 为空是 Android 12+ 的正确分工：GKI 侧模块进
system_dlkm，vendor 模块进 vendor_dlkm。**6.1 内核的 GKI 模块有独立位置放，
不必碰 vendor_dlkm。**

## Vendor 内核模块（核心障碍）

- `/vendor_dlkm/lib/modules`：**293 个 .ko，72.7 MB**
- 全部 `vermagic=5.15.78 SMP preempt mod_unload modversions aarch64`
- `modules.load` 411 行，`modules.dep` / `modules.alias` / `modules.softdep` 齐全
- 已整包抓到本地：`_probe/vendor_ko/`（含 `_probe/vendor_ko.tar`）

体积前列：
`qca_cld3_kiwi_v2.ko` 17.9M(WiFi) / `camera.ko` 7.0M / `msm_drm.ko` 5.9M(显示) /
`ipam.ko` 5.5M / `msm_kgsl.ko` 2.9M(GPU) / `cfg80211.ko` 2.6M / `mac80211.ko` 2.3M /
`msm_video.ko` 1.4M / `cnss2.ko` 979K / `msm-eva.ko` 922K

功能关键：msm_drm、msm_kgsl、camera、msm_video、ADSP/CDSP 音频栈(snd_event/q6 系列)、
cs35l41/cs35l43/wcd938x(音频功放)、goodix_core(触摸)、fpc1555(指纹)、aw882xx、
cnss2+cfg80211(无线)、dwc3-msm(USB)、UFS phy、i2c-msm-geni、gpucc-kalama、
qcom_q6v5/rproc/glink/smem(ADSP/CDSP/modem 远程处理器)

**Xiaomi 私有、无公开源码（确定不可重编）**：
`migt.ko`、`mi_thermal_interface.ko`、`mi_exception_log.ko`、`mi_cnss_statistic.ko`、
`hardwareinfo.ko`、`gsim.ko`、`smcinvoke_dlkm.ko`、`aw882xx_dlkm.ko`、
`goodix_core.ko`、`goodix_fod.ko`、`fpc1555.ko`

## Root 与 KSU

- `me.weishu.kernelsu` v3.3.0-45-g87db8315（ksud 在 /data/adb/ksud）
- 另装 `com.resukisu.resukisu` v4.1.0
- SELinux Enforcing
- 已加载 KSU 模块：trickyStore、zygisksu、hma_oss_zygisk、hybrid_mount、
  device_faker、TA_enhanced、HyperUnlocked、LibNoActive、GPU driver
- `/data/adb/ksu/bin/` 有 bootctl、busybox、ksud、resetprop、znctl
- 无 `/sys/kernel/susfs`（SUSFS 未启用）

## 工具链

- WSL2 Arch Linux（ar
chlinux distro, WSL2 kernel 6.18.33.2），有 aarch64 交叉编译器
- adb 无线连接正常
- 本地 `_probe/`：`kernel.config`、`vendor_ko.tar`、`vendor_ko/`

## Vendor 内核模块的量化 ABI 面（2026-10-01 实测，`_probe/versions.py`）

从 `__versions` section 解析每个模块实际绑定的内核符号与 CRC。
`__versions` 的布局已用 hexdump 确认为 `struct modversion_info {unsigned long crc; char
name[]}`，整条记录按 8 字节对齐 padding——这一步很关键，naive 解析会产出
`cepoint_android_vh_binder_reply` 这类**前半截被截断**的碎片名，
从而低估绑定数。`_probe/versions.py` 有自检（对 hexdump 核过的一份样本 PASS）。

| 指标 | 实测值 |
|---|---|
| 解析成功的模块 | 293 / 293 |
| CRC 绑定总数 | **17,675** |
| 不同内核符号 | 3,600 |
| 每模块绑定数中位数 | 40 |

按耦合度分桶：

| 绑定数 | 模块数 |
|---|---|
| 100+ | 33 |
| 50-99 | 69 |
| 20-49 | 128 |
| 5-19 | 61 |
| 1-4 | 2 |

耦合最深的模块：`msm_drm.ko` 784、`qca_cld3_kiwi_v2.ko` 510、`msm_kgsl.ko` 497、
`camera.ko` 396、`ipam.ko` 391、`cnss2.ko` 331、`mac80211.ko` 315。

**全部 293 个模块都带 CFI instrumentation**（既有 `.text.__cfi_check` section，
又引用 cfi 符号）。这与 `CONFIG_CFI_CLANG=y` 一致，是独立于 config 的第二重证据。

**结论性含义：17,675 个 CRC 每一个都必须在 6.1 内核上精确匹配。**
不是「几个符号不兼容」。任何 6.1 内核（哪怕只改 defconfig 或编译器版本）
都会改变其中大量 CRC。`module_layout` 293/293 全都有，
`__ubsan_handle_cfi_check_fail_abort`、`__stack_chk_fail`、`_printk`、
`kfree`、`mutex_lock` 这些也都是普及到全集的。

## 启动链实测细节（2026-10-01 补测）

设备 IP 会变，mDNS 最可靠：
```bash
adb mdns services      # 找到实际 host:port
adb connect 192.168.31.124:38683
```
（第一次连的 38555 在无线调试重开后已失效；设备还可能出现在两个 IP 上。）

### 内核加载来源

- `uname -r` = `5.15.220-202609162-Batch30`
- **DTB 由 boot 镜像按索引选择，不是编进内核**：
  - `ro.boot.dtb_idx=2`、`ro.boot.dtbo_idx=53`
  - dtbo 是独立分区 `dtbo_a → /dev/block/sde18`
  - `/proc/device-tree/model` = `Qualcomm Technologies, Inc. 8550 vermeer`
  - `/proc/device-tree/firmware/android/compatible` = `android,firmware`
- bootconfig 只有 `androidboot.hardware=qcom`、`hardware.sku=vermeer` 等少量项

**→ 「换内核 Image、保留旧 DTB」这条路在硬件层面成立**：DTB 从 boot 镜像传入，
内核可以不内置 dtb。LineageOS 的 `BOARD_USES_QCOM_MERGE_DTBS_SCRIPT := true`
（`BoardConfigCommon.mk:87`）正是这个机制。

### 模块加载机制（不同于常见认知）

- `/system/bin/modprobe` 和 `/vendor/bin/modprobe` **都只是 toybox toolbox 的 symlink**
- `modprobe -c` 不被支持（toybox 版没有）
- 批量加载靠 `modules.load`：`/vendor_dlkm/lib/modules/modules.load`
- `modules.load` 有 411 行但**去重后正好 293**，与 `.ko` 数量**完全一致，无缺失**
- `.rc` 里另有零散的 `vendor_modprobe` 调用，用于 rmnet 系列按需加载/卸载
  （`/vendor/bin/modprobe -a -d /vendor/lib/modules rmnet_core` 等），
  并带 `/vendor/lib/modules/5.4-gki` 的兼容回退路径

### 挂载（实测）

```
/dev/block/dm-11 on /vendor          erofs ro
/dev/block/dm-12 on /vendor_dlkm     erofs ro   ← 293 .ko
/dev/block/dm-13 on /system_dlkm     erofs ro   ← lib/modules 为空（0 个）
/dev/block/dm-8  on /                erofs ro
```

`/system_dlkm/lib/modules` 为空是 Android 12+ 的正确分工：GKI 侧模块进
system_dlkm，vendor 模块进 vendor_dlkm。**6.1 内核的 GKI 模块有独立位置放，
不必碰 vendor_dlkm。**

## 本地仓库

- `C:\Users\Administrator\StudioProjects\ABK` — GKI 构建工具链（详见 ab
k-capability.md）
- `C:\Users\Administrator\StudioProjects\ABK_KSU_SANDBOX_MODULE` — ABK 外部模块模板
- `C:\Users\Administrator\StudioProjects\Sailboat_5.15_to_6.1_Porting` — 本项目（初始为空）
