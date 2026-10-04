# 关键结论：这颗设备没有 6.1 内核可用（2026-10-01 查证）

## 结论

**Xiaomi 从未为 vermeer（Xiaomi 13）发布 6.1 内核。**
直至当前最新固件线，官方内核源码仍是 **5.15.78** —— 与设备上运行的 vermagic
`5.15.78 SMP preempt mod_unload modversions aarch64` 逐字节相同。

## 查证过程

Xiaomi 官方内核开源仓库：`github.com/MiCode/Xiaomi_Kernel_OpenSource`

枚举全部分支（3 页 × 100，共 262 个分支名）中与该设备相关的只有两个：

| 分支 | SUBLEVEL | 备注 |
|---|---|---|
| `fuxi-t-oss` | 5.15.41 | commit msg: "Xiaomi kernel changes for **Xiaomi 13 Pro Android T**" |
| `bsp-vermeer-t-oss` | **5.15.78** | commit msg: "Xiaomi kernel changes for **Redmi K70 Android U**" |

`bsp-vermeer-t-oss/Makefile`：
```
VERSION = 5
PATCHLEVEL = 15
SUBLEVEL = 78
EXTRAVERSION =
NAME = Trick or Treat
```

注意两个分支的 commit message 与分支名的设备名不一致（`bsp-vermeer-t-oss`
说是 Redmi K70，`fuxi-t-oss` 说是 13 Pro），所以 Xiaomi 的分支命名不可靠，
但 **SUBLEVEL=78 与设备 vermagic 完全吻合**这一点是硬的。

## 这意味着什么

1. **「官方后期 ROM 自带 6.1 vendor_dlkm」这条最省事的路不存在。**
   原本这是所有方案里最理想的一个（直接换 vendor_dlkm 就行），现在排除。

2. `xiaomifirmwareupdater.com` **已经是停放待售域名**（该网站正在出售），
   XFU 这条常规取固件的路也断了。

3. 该仓库是 **GKI 形的 `common` 树**：有 `android/`、`build.config.gki.aarch64`、
   `BUILD.bazel`，共 140 个顶层条目。
   **但没有** `msm-kernel` / `techpack` / `msm` / `vendor` / `modem` / `vendor_dlkm`。
   → 官方开源的只是 GKI 部分，**不含那 293 个 vendor .ko 的源码**。
   → 形状恰好符合 ABK `source_mode: custom_git` 的要求（源码在仓库根目录），
   但它只是 5.15 的，对 6.1 目标没有直接帮助。

## 剩余的可能性（未验证）

| 途径 | 说明 |
|---|---|
| CAF / codelinaro `android14-6.1` SM8550 平台树 | 需自行确认 kalama 的 LA.UM.x release tag 覆盖哪些模块。Xiaomi 私有的那十几个 .ko 仍无源码 |
| LineageOS 等第三方 ROM 的 device tree | 可能指出 6.1 分支，但同样受 vendor blob 限制 |
| 从别处获得 Android 14 固件的 vendor_dlkm | 但按上表，Xiaomi 没出过 Android 14/6.1 的 vermeer 固件 |

## 对用户三条原始设想的裁决

- 「**直接逆 ko，重新自己编译一套 vendor**」：排除。源码不存在，且 17,761 个 CRC
  绑定 + 293 个模块的规模不是可逆的量级。
  （注：Qualcomm 大头驱动有开源源码，见 ROUTE_COMPARISON.md 路线 4 的素材清单，
  但那是"从源码改到 6.1"，不是"逆向后重写"。）
- 「**制作兼容层**」：方向仍是最合理的，但要兼容的是「让 6.1 内核跑起来」，
  不是「让 5.15 的 ko 在 6.1 上加载」——后者不可能。
- 「**抓 vendor.img 解包查看**」：已做（`_probe/vendor_ko/`），可用于研究和确认，
  但不能靠它转向 6.1。

## 第二轮补充：社区也同样停在 5.15（2026-10-01）

Xiaomi 官方不是个例。LineageOS 的 SM8550 内核仓库
`LineageOS/android_kernel_xiaomi_sm8550` 全部 8 个分支都是 5.15：

| 分支 | SUBLEVEL |
|---|---|
| lineage-21 | 152 |
| lineage-22.0 / 22.1 | 169 |
| lineage-22.2 | 189 |
| lineage-23.0 / 23.1 | 197 |
| lineage-23.2 | 211（Android 16） |
| lineage-24.0 | 211（Android 18 dev） |

两家独立来源（官方 + 社区）交叉验证同一结论：**SM8550 的 KMI 基线是 5.15**。
这解释了为什么 293 个 vendor blob 全是 5.15.78——是这个平台的既定基线，不是疏漏。

推论：**想在这台设备上跑 6.1，必须自己从 5.15 抬起 vendor 栈，没有现成件可捡。**
LineageOS 的价值在于它给出了 23 个 Qualcomm 开源组件的完整清单
（`BoardConfigCommon.mk:90-118`），这是唯一可行的路线（ROUTE_COMPARISON.md 路线 4）
的素材来源。
