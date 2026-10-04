# vendor_a.img / vendor_dlkm_a.img 解包结论（2026-10-01）

镜像来源：`F:\yan13\Downloads\vendor.zip`
内容：`vendor_a.img`(768,258,048 B) + `vendor_dlkm_a.img`(27,807,744 B)
两者均为 **EROFS**（magic `0xE0F5E1E2`，blocksize 4096，incompat `LZ4_0PADDING`）
—— 与设备实测挂载特征一致。

## 1. vendor_dlkm_a.img：与设备字节级一致

用 `erofsfuse` 挂载（注意：不能在 `/mnt/*` 9p 挂载点上 fuse，
需先 copy 到 WSL 原生 ext4 再挂）：

```
root_nid=39, inos=308
├── etc/  NOTICE.xml.gz, NOTICE_GPL.html.gz, build.prop, fs_config_dirs, fs_config_files
└── lib/modules/  293 个 .ko + modules.{alias,blocklist,dep,load,softdep}
```

| 模块 | img md5 | 设备 md5 | |
|---|---|---|---|
| msm_drm.ko | 1c8268194474… | 1c8268194474… | **SAME** |
| msm_kgsl.ko | a3c6cfadb644… | a3c6cfadb644… | **SAME** |
| qca_cld3_kiwi_v2.ko | e095e6f0a8a1… | e095e6f0a8a1… | **SAME** |
| camera.ko | 9e92ea777d0e… | 9e92ea777d0e… | **SAME** |
| goodix_core.ko | fcc17c678019… | fcc17c678019… | **SAME** |
| migt.ko | c23872979708… | c23872979708… | **SAME** |

vermagic：`5.15.78 SMP preempt mod_unload modversions aarch64`

**结论：这份镜像就是设备上跑的 vendor 构建，可作为权威 ground truth。**

## 2. VINTF：vendor 是 Android 13，且明确拒绝 6.1 内核

`vendor_a.img/etc/vintf/`：

### compatibility_matrix.xml（device matrix，即 vendor 要求框架提供什么）

```xml
<compatibility-matrix version="5.0" type="device">
```

**version 5.0 = Android 13 (T)**。这是 VINTF matrix level，不是文件格式版本。

### manifest_kalama.xml（vendor manifest，即 vendor 提供什么）

```xml
<manifest version="5.0" type="device" target-level="7">
    <sepolicy><version>33.0</version></sepolicy>
```

`target-level="7"` 但 `version="5.0"`：manifest 格式升到 7，但**矩阵级别仍是 5.0**。

sepolicy version **33.0** = Android 13。

### HAL 版本（抽样）

| HAL | 版本 | 传输 |
|---|---|---|
| android.hardware.audio | **7.1** | hwbinder |
| android.hardware.audio.effect | 7.0 | hwbinder |

audio HAL 7.1 对应 Android 13。

### build.prop（vendor 分区）

```
ro.vendor.build.fingerprint=Xiaomi/mivendor_sm8550_cn/mivendor:13/TKQ1.221114.001/OS3.0.307.0.WNKCNXM:user
ro.vendor.build.version.release=13
ro.vendor.build.version.sdk=33
ro.vndk.version=33
ro.vendor.build.security_patch=2026-02-01
ro.build.recovery.version.release=16
```

**全 HIDL（`format="hidl"` + `transport hwbinder`）**，没有一个 AIDL HAL——
这进一步确认是 Android 13 时代的 vendor。

### 关键观察

**vendor 分区没有 framework compatibility matrix（FCM）。**
整个 vendor 里只有一份 `compatibility_matrix.xml`（device matrix）。

这意味着 vendor **没有声明任何内核要求**——它不检查 GKI KMI。
所以「6.1 内核被 VINTF 拒绝」这个风险**不来自 vendor**。
真正的约束是反方向：**框架侧（Android 16 system）的 FCM 会检查 vendor manifest**，
而 vendor manifest 是 matrix level 5.0 / sepolicy 33.0。

## 3. 这对 6.1 目标意味着什么

| 问题 | 答案 |
|---|---|
| vendor 会拒绝 6.1 内核吗？ | **不会**。vendor 无 FCM，不查 KMI |
| 那谁检查内核？ | 框架侧 FCM（system 分区）+ KSU/resetprop 可伪造 |
| vendor HAL 需要跟着升吗？ | **需要**，但那是 vendor 分区的事，与内核版本无直接绑定 |
| 6.1 的主要障碍是什么？ | **仍然是那 293 个 5.15.78 .ko 的 CRC/struct/CFI**，不是 VINTF |

**这修正了我早前的一个推测。** 我先前怀疑 VINTF 可能拦 6.1 内核，
解包证据显示 vendor 侧不拦。障碍集中在模块 ABI ——
这与 `_probe/versions.py` 测出的 17,761 个 CRC 绑定、293/293 带 CFI 完全吻合。

## 4. 附带发现：vendor_a.img 的内容范围

```
app/  bin/  bt_firmware/  build.prop/  dsp/  etc/  firmware/  firmware_mnt/
framework/  gpu/  lib/  lib64/  odm/  odm_dlkm/  overlay/  rfs/  vm-system/
```

`odm_dlkm/` 存在 —— 这是第二处模块目录（Xiaomi 的 `mi_ext` 扩展）。
`gpu/`（Adreno firmware）、`firmware/`、`dsp/`（ADSP/CDSP 固件）都在这里。
这些固件与内核版本**无强绑定**，但 `gpu/` 里的 Adreno firmware 与 `msm_kgsl.ko`
是配套的，换内核不换 ko 则固件不用动。

## 5. 待查 —— 已查完

- ✅ **`odm_dlkm/` 只有 `build.prop`，无模块**。整个 vendor_a.img 里
  `find . -name "*.ko"` 结果 **0 个**。→ **293 就是完整模块数**，权威确认。
- ✅ **20+ 个 per-HAL manifest 全是 HIDL，版本停在 Android 13**：
  fingerprint 2.1 / camera.provider 2.7 / graphics.mapper 4.0 / keymint 2 /
  wifi 1.6 / usb 1.2 / radio 1.0 / sensors 1.0 / thermal 1.0 —— 没有一个 AIDL HAL。
- ✅ `firmware/` 有 Adreno zap（`a615_zap.mdt`、`a630_gmu.bin`、`a702_sqe.fw`）、
  `gpu/` 有 kbc。**这些固件与 `msm_kgsl.ko` 配套，但两者都与内核版本无绑定** ——
  只换内核不换 ko 的话固件不用动。
- ⬜ system 侧（Android 16）的 FCM 要求 vendor 提供什么 —— 未查（不在 vendor.zip 里）

## 6. 总结论

这份镜像把之前两个悬而未决的问题定死了：

1. **模块数权威值 = 293**（`odm_dlkm` 无补充，`vendor_a.img` 无内嵌 ko）
2. **VINTF 不是 6.1 的障碍**。vendor 侧无 FCM、不查内核 KMI；
   vendor manifest 是 matrix level 5.0 / sepolicy 33.0 / 全 HIDL，
   这是 Android 13 的特征，但它约束的是 **vendor 与 framework 的接口**，
   不是内核与 vendor 模块的接口。

**6.1 的唯一实质障碍仍然是那 293 个 5.15.78 .ko 的 ABI**
（17,761 个 CRC 绑定，293/293 带 CFI，且 `drm_mode_config_funcs`/`dma_buf_ops`/
`iommu_ops`/`snd_soc_component_driver`/`sched_class` 等在 5.15→6.1 间改过布局）。

**推论：换内核 = 换全部 293 个 ko；换 ko = 需要 6.1 源码。** 二者不可分割,
这正是「没有现成 6.1 vendor 可用」的必然结果（官方和 LineageOS 都停在 5.15）。
