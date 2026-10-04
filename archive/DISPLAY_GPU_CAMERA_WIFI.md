# 显示 / GPU / 相机 / WiFi 怎么办（2026-10-01 查实）

**方法**：只查 AOSP GKI `android14-6.1-lts` 一棵树，用 HTTP 状态码逐个确认。

## 一、结论表

| 子系统 | 上游 GKI 6.1 有驱动吗 | 能替代 vendor blob 吗 | 判定 |
|---|---|---|---|
| **显示** (msm_drm) | ⚠️ 有 `drivers/gpu/drm/msm`，但只到 SM8150/SM8250 | ❌ | 无 kalama 支持 |
| **GPU** (msm_kgsl) | ⚠️ 有 adreno 驱动，但**只到 a6xx** | ❌ | **Adreno 740 是 a7xx/A750 世代** |
| **相机** (camera.ko) | ❌ `drivers/media/platform/msm` **404** | ❌ | 上游完全没有 |
| **WiFi** (qca_cld3_kiwi_v2) | ❌ `drivers/staging/qcacld-3.0` **404** | ❌ | 上游完全没有 |
| USB / dwc3 | ✅ 有 | — | 非关键 |
| UFS | ❌ `drivers/scsi/ufs` **404**（在 `drivers/ufs/`） | 部分 | — |
| I2C / pinctrl / MMC | ✅ 有 | — | 但**无 kalama 型号** |

## 二、逐个证据

### GPU —— 最硬的墙

`drivers/gpu/drm/msm/adreno/` 目录内容：

```
a2xx_gpu.c  a3xx_gpu.c  a4xx_gpu.c  a5xx_gpu.c  a6xx_gpu.c  a6xx_gmu.c  a6xx_hfi.c
a6xx_gpu_state.c  a6xx.xml.h  a6xx_gmu.xml.h  adreno_device.c ...
```

```
a7xx_gpu.c  → 404
a7xx.xml.h  → 404
a8xx_gpu.c  → 404
```

**上游 Adreno 驱动止于 a6xx。** SM8550 的 **Adreno 740 = a7xx 世代**，
配套 `a7xx_gmu.c` / 新的 GMU firmware 协议 / `A750` compatible 字符串，
上游一个都没有。`adreno_device.c` 的 compatible 表只列到
`qcom,adreno-3xx` / `qcom,kgsl-3d0` 这一代。

### 显示

`drivers/gpu/drm/msm/Kconfig` 提到的平台：

```
devices using APQ8064/MSM8960/MSM8x60 platforms.
using e.g. APQ8016/MSM8916/APQ8096/MSM8996/MSM8974/SDM6x0 platforms.
DSI PHY driver ... (used by MSM8996/APQ8096)
DSI PHY on SM8150/SM8250/SC7280
```

**最新只到 SM8250**（骁龙 865）。DSI PHY 支持停在 SM8150/SM8250。
SM8550 的 DSI 是新一代（`mdss_dsi_n11_42_02_0a_dsc_cmd`，
cmdline 里实测：`msm_drm.dsi_display0=qcom,mdss_dsi_n11_42_02_0a_dsc_cmd:`）。

### 相机

```
drivers/media/platform/msm  → 404
```

**上游根本没有高通相机子系统。** `camera.ko`(7 MB, 399 个 CRC 绑定)
只能靠 QCOM blob。

### WiFi

```
drivers/staging/qcacld-3.0  → 404
```

`qca_cld3_kiwi_v2.ko`(17.9 MB, 511 个 CRC 绑定) 只能靠 blob。
`drivers/net/wireless/` 有上游 WiFi 但**不含 qcacld**。

### 决定性的一条：DT 也不在上游

```
arch/arm64/boot/dts/qcom/kalama.dtsi   → 404
arch/arm64/boot/dts/qcom/sm8550.dtsi   → 404
arch/arm64/boot/dts/qcom/pineapple.dtsi → 404
```

`drivers/pinctrl/qcom/Kconfig` 里 kalama/sm8550 命中数 = **0**。

**AOSP GKI 是纯 generic 内核，不含任何 SM8550 设备树和 SoC 驱动。**

## 三、这意味着什么

设备现在的四大件——显示、GPU、相机、WiFi——**全是 QCOM blob，且上游 GKI 6.1 没有任何替代品**：

| 模块 | 体积 | CRC 绑定 | 上游替代 |
|---|---|---|---|
| `qca_cld3_kiwi_v2.ko` | 17.9 MB | 511 | ❌ 无 |
| `camera.ko` | 7.0 MB | 399 | ❌ 无 |
| `msm_drm.ko` | 5.9 MB | 791 | ❌ 止于 SM8250 |
| `msm_kgsl.ko` | 2.9 MB | 499 | ❌ 止于 a6xx |

合计 **2,200 个 CRC 绑定**，占全部 17,761 的 **12.4%**。

## 四、所以"显示/GPU/相机/WiFi 怎么办"的答案

**三条路，按代价排序：**

### 路 1：接受没有图形界面（唯一零成本选项）

6.1 内核 + 无 vendor 驱动 → 无显示、无 GPU、无相机、无 WiFi。
**能到 userspace、有 adb（USB）、能跑命令行。**
价值：纯粹验证"6.1 GKI 内核 + 我们的 Kconfig 改动能启动"。

**这是我的 Phase C，也是唯一现在就能做的。**

### 路 2：靠兼容层硬加载这 4 个 blob（实验性，期望低）

`CONFIG_MODVERSIONS=n` + `CONFIG_CFI_PERMISSIVE=y` + vermagic patch
骗过加载器后，实测这 4 个能否活。

**期望低的原因**：它们恰是 struct 布局变化最剧烈的模块——
`msm_drm` 动 `drm_mode_config_funcs`/`drm_bridge`，
`msm_kgsl` 动 `iommu_ops`/`devfreq`/`dma_buf_ops`。
而且 Adreno 740 需要 `gpucc-kalama.ko` + `a7xx GMU firmware` 配套，
上游连 `qcom,gpucc-kalama` 的 clock 驱动都没有。

### 路 3：把这 4 个驱动从 5.15 移植到 6.1（唯一"真正解决"之路）

要有 QCOM 源码。但用户已明确：**没有 vendor 分区源码**。

→ **路 3 不可行。** 这就是整个问题的死结。

## 五、诚实的最终判断

**四大件在当前约束下无法在 6.1 上工作。** 这不是工作量问题，是**源码不存在**：

- 上游 GKI 6.1 没有 SM8550 的任何支持（无 DT、无 adreno a7xx、无相机、无 qcacld）
- QCOM 源码用户没有
- 逆编译不可行
- LineageOS 有部分组件源码但用户明确不用，且也都是 5.15

**能验证的**：6.1 GKI 内核 + 兼容开关能启动，进 userspace。
**不能验证的**：显示/GPU/相机/WiFi 在 6.1 上工作。

**如果目标是"一台能用的手机"** —— 那么唯一答案是保持 5.15 内核
（设备现在就是 5.15.220，且 Android 16 用户态已在跑），
而不是 6.1。
