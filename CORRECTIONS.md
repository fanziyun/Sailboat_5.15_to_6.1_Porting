# 我的错误清单与已确证的事实

按"对项目的影响"排序。前四条改变了方案，是我必须更正的。

---

## 错误 1（最严重）：我说"vermagic 版本号宽松，vendor 已证明"

**我说过**：`5.15.78` 的模块能加载进 `5.15.220` 内核，所以 vermagic 检查被厂商放宽了。

**错了。** 我那个测试里，`probe_78f.ko`（vermagic `5.15.78 SMP preempt ...`）确实加载成功了，
但我用的是**关掉 CFI/LTO、CLANG 22** 编出来的模块。加载成功只证明
`check_modinfo()` 那一关过了，**完全不证明 CRC 和 CFI 能过**。
而 293 个 vendor 模块在真机上跑，是因为它们**带了 CFI 插桩**——
我后来的 `crcprobe.ko` 没带，一卸载就 panic。

**把三件不同的事混成了一件。**

**修正后的事实**：`check_modinfo()` 确实宽松（`5.15.78` vs `5.15.220-g17730f38b70b` 都过），
但 CRC 和 CFI 是否宽松**未测出**，且 CFI 已被证明是严格的。

---

## 错误 2：那次 panic 我归因了三次，前两次都错

**第一次说**："CFI 在 5.15.220 上会把 rmmod 搞崩" —— 你一秒就看出不对：
你的设备正跑着 5.15.220，`rmmod` 用了几千次。

**第二次说**："我字节 patch 出的模块畸形导致的" —— 也不对。

**第三次（正确）**：**我的模块的 CFI 指纹与内核不匹配。**

```
Kernel panic - not syncing: CFI failure (target: cleanup_module+0x0/0xfd0 [crcprobe])
  __ubsan_handle_cfi_check_fail_abort+0x0/0x1c
  __se_sys_delete_module+0x2d8/0x314
```

内核调用路径（`kernel/module.c:973-974`）：

```c
if (mod->exit != NULL)
        mod->exit();          // struct module 里是 void (*exit)(void)，无参数
```

我的 `abk_crc_probe_exit(void)` 签名是对的，`module_exit()` 位置也对。
**问题在编译器和编译选项**：

| | 设备内核 / 293 个 vendor 模块 | 我的 `crcprobe.ko` |
|---|---|---|
| `CONFIG_CFI_CLANG` | **y** | **n**（我构建时关掉了） |
| 编译器 | Android clang **14.0.7** | clang **22.1.8** |
| `__cfi_check` 插桩 | **293 / 293 全有** | **没有** |

**CFI 的指纹算法与编译器和编译选项强绑定。** 我用 clang 22、关着 CFI 编出的
`cleanup_module`，在 clang 14 + 开 CFI 的内核眼里签名指纹不符 → CFI 失败 → panic。

vendor 293 个模块全部带 CFI 插桩且用 clang 14.0.7 编，所以它们没事。

**每次我都在没读内核源码的情况下给结论。** 正确顺序是先读
`kernel/module.c:973` 和 `include/linux/module.h:532` 搞清调用路径，
再看 panic 栈。

### 这一条的关键推论（对方案是决定性的）

CFI 指纹由**内核代码本身**决定。vendor 模块的指纹是按 5.15 内核代码算的，
6.1 内核的指纹按 6.1 代码算——**内核代码变了指纹就变，哪怕函数名和参数都一样**。

| 组合 | 结果 |
|---|---|
| 模块带 CFI（clang 14 编）+ 6.1 内核开 CFI | 指纹不符 → 间接调用全 panic |
| 模块不带 CFI + 6.1 内核开 CFI | 本次实测 → panic |
| 6.1 内核关 CFI | 能跑，但等于关掉内核安全机制 |
| **6.1 内核开 `CONFIG_CFI_PERMISSIVE=y`** | **只 WARN 不 panic ← 唯一可行解** |

所以 `CONFIG_CFI_PERMISSIVE=y` **不是优化项，是 6.1 上跑 5.15 模块的必要条件**。
这就是它被列为 Phase 1 技术前提的原因：不先证明"开 PERMISSIVE 后间接调用不再崩"，
后续所有测试都没有意义。

（`CONFIG_CFI_PERMISSIVE` 是上游正经开关：`android14-6.1-lts` 的 `arch/Kconfig` 里有，
`kernel/cfi.c:20` 就是它把 `BUG_TRAP_TYPE_BUG` 换成 `BUG_TRAP_TYPE_WARN`。默认 N。）

---

## 错误 3：我说"abi_bridge 能用于本项目"

你说"abi_bridge 原本是在 5.15 内核上用 7.0.12 的 ko"——我当时说你搞反了。
**实际上你对，我错。**

`abk_dual_abi_bridge_apply.py:250-272` 的 `module_allowed()` 读的是
**模块自带的 vermagic**，不是内核版本：

```c
modmagic = abk_dual_abi_bridge_get_modinfo(info, "vermagic");
release = modmagic;
return abk_dual_abi_bridge_release_allowed(release);
```

`RELEASE_PREFIX "7.0.12"` + `POLICY "global_7012"` 的语义是：
**让 7.0.12 的模块跑在 5.15 内核上**。与"5.15 模块跑 6.1"方向相反。

我当时把 `RELEASE_PREFIX` 当成了"目标内核版本"，所以说了"改 prefix 就能用"。
**那是错的。**

abi_bridge 确实能中和三道加载关卡（`check_modstruct_version()` 改写后
`return 1`，见 `w_bridge/common/kernel/module.c:1417`），但它**不解决 struct 布局和 CFI**——
而 CFI 我这次刚用真机证明了是硬的。

---

## 错误 4：CRC 绑定总数算错，且错因我说的不对

我说过 17,761 个 CRC 绑定 / 3,630 个符号。

**错。** 真实是 **17,675 / 3,600**。

错因不是"packed vs 8-byte padding"（我一度这么解释），而是：
`struct modversion_info` 是**定长 64 字节**的
（`include/linux/module.h:38`：`{unsigned long crc; char name[MODULE_NAME_LEN];}`，
`MODULE_NAME_LEN = 56`）。

`kernel/module.c` 里 `num_versions = sh_size / sizeof(struct modversion_info)`
这个除法本身就证明了是定长 stride。我按 packed 解析，
长符号名会溢到解析出碎片（`cepoint_android_vh_binder_reply` 这种）。

`binder_gki.ko` 上两个解析器都给 22 条（= 1408/64）是巧合——它的符号名都短。
但全量 293 个模块上，packed 版会多算出 86 条。

**已修正**：`_probe/versions2.py`，自检通过与 section size 一致。

---

## 错误 5：构建环境踩坑，浪费了大量时间

| 我做的事 | 后果 |
|---|---|
| 在 `/mnt/f/test/gki61`（9p/drvfs）上编内核 | 2060 个对象跑几十分钟，还冒出诡异的 `xt_DSCP.o No rule` 错误 |
| 开着 LTO_CLANG_THIN 编 5.15 | **被 OOM kill**（`Error 137`），12 GB 内存撑不住 ThinLTO 链接 |
| 关掉 CFI 编测试模块 | 直接导致 panic，见错误 2 |

skill `ci-build-parity` 的 Phase 1 第一条就写着"必须落在 ext4，绝不能是 `/mnt/<盘符>`"，
以及"9p 会让 linkfile 退化成 fake symlink、chmod +x 不可靠、大小写不敏感踩 Kbuild"。
**这些我都读过，然后踩了。**

---

## 错误 6：QEMU 方案我说了一半好话

我说过"Phase C：QEMU 里证明 6.1 GKI 内核能启动，零风险"。
这句话本身没错，但我没说清楚它**测不出 vendor 驱动**。

QEMU `virt` 平台没有 `kalama` DTB、没有 SM8550 硬件、
**也没有 `qcom_smem`/`qcom_glink`/`qcom_rpmh`/`qcom_aoss_qmp`/`pinctrl-*`
这些 vendor 平台驱动**（它们在 5.15 上也是 vendor_dlkm 的一部分，6.1 GKI 里没有）。

所以 QEMU 加载 `msm_drm.ko` 会因依赖链缺失直接失败——
**这是假阴性，不代表真机上加载不了**。QEMU 只能回答"ELF 结构接不接受"，
回答不了"struct 布局兼不兼容"，而后者才是有用的那个问题。

---

# 已确证的事实（这些是可靠的）

以下全部有证据支撑，路径可查。

## 设备

| 项 | 值 | 来源 |
|---|---|---|
| 机型 | Xiaomi 13 `vermeer` (23113RKC6C)，SM8550 `kalama` | `ro.product.device` |
| System | Android 16 / SDK 36，HyperOS 3.0.0.307 | `ro.system.build.fingerprint` |
| Vendor | Android 13 / SDK 33 | `ro.vendor.build.fingerprint` |
| 内核 | `5.15.220-202609162-Batch30` | `uname -r` |
| 内核对应 AOSP 分支 | `android13-5.15-lts`（SUBLEVEL=220 吻合） | `git ls-remote` |
| Root | KernelSU v3.3.0-45 + ReSukiSU v4.1.0，SELinux Enforcing | 实测 |
| 分区 | `init_boot_a/b` 与 `vendor_boot_a/b` **独立**；`dtbo_a` 独立 | `/dev/block/by-name` |

## 内核配置（设备 `/proc/config.gz`）

```
CONFIG_MODVERSIONS=y      CONFIG_CFI_CLANG=y     CONFIG_CFI_CLANG_SHADOW=y
CONFIG_LTO=y (ThinLTO)    CONFIG_MODULE_SIG_ALL=y
CONFIG_TRIM_UNUSED_KSYMS=y  CONFIG_ARM64_BTI=y
```

## vendor 模块（`_probe/vendor_ko/`，293 个）

- vermagic `5.15.78 SMP preempt mod_unload modversions aarch64`
- **CRC 绑定 17,675 个 / 3,600 个符号**（`_probe/versions2.py`，定长 64 字节解析）
- **293/293 带 `__cfi_check` 插桩**
- 与 `vendor_dlkm_a.img` 内文件 **md5 完全一致**（已抽 6 个比对）

## 模块加载机制

- `/system/bin/modprobe` 和 `/vendor/bin/modprobe` **都只是 toybox symlink**
- 批量加载靠 `modules.load`（411 行，去重 293，与 `.ko` 数一致）
- `check_modinfo()` **对 vermagic 版本号宽松**（`5.15.78` vs `5.15.220-g17730f38b70b` 都通过）
- **CFI 严格**：不带插桩的模块被调用导出函数时 panic（真机实测）
- DTB 由 boot 镜像按 `ro.boot.dtb_idx=2` 传入，**不编进内核**

## 显示/GPU/相机/WiFi 上游支持（AOSP `android14-6.1-lts`）

| 子系统 | 上游状态 |
|---|---|
| GPU (Adreno 740) | **只到 a6xx**，`a7xx_gpu.c` / `a8xx_gpu.c` = 404 |
| 显示 | MSM DRM 只到 **SM8250**，DSI PHY 只到 SM8150/SM8250 |
| 相机 | `drivers/media/platform/msm` = **404** |
| WiFi | `drivers/staging/qcacld-3.0` = **404** |
| 设备树 | `kalama.dtsi` / `sm8550.dtsi` = **404** |

## 6.1 源码可用性

- AOSP `android14-6.1-lts` = **6.1.177**，存在且有 30 个被 ABK 认的月份分支
- `MiCode/Xiaomi_Kernel_OpenSource`：vermeer 相关仅 `fuxi-t-oss`(5.15.41) 和
  `bsp-vermeer-t-oss`(**5.15.78**)，**无一 6.1**
- LineageOS `android_kernel_xiaomi_sm8550`：**8 个分支全 5.15**
  （lineage-23.2 / 24.0 = 5.15.211）
- `vendor_a.img` / `vendor_dlkm_a.img` 已解包（EROFS + LZ4_0PADDING），
  VINTF matrix level **5.0**（Android 13），sepolicy **33.0**，全 HIDL，
  **vendor 无 FCM → 不检查内核 KMI**
