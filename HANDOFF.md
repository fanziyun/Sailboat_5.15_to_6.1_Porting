# vermeer 5.15 → 6.1 移植：交接文档

**生成时间**：2026-10-01
**项目目录**：`C:\Users\Administrator\StudioProjects\Sailboat_5.15_to_6.1_Porting`
**当前状态**：Phase 1 完成（CFI 障碍已排除），Phase 2 前置就绪，**卡在"尚未确认内核在哪个分区"已解决 → 是 `boot_a`**

---

## 〇、给下一个会话的第一句话

**先读本文，再动手。** 本项目已有 **8 次以上"未验证就下结论"的错误**，
每次都是"现象符合预期就停止核查"造成的。请对每个结论问一句：
**"这和已知事实冲突吗？"**

**当前唯一待办**：把 6.1 内核 Image 打进 `boot_b`，刷机，测 vendor 模块。
工具链/构建环境/备份**全部就绪**，见第五节。

---

## 一、设备事实（全部实测，非推测）

| 项 | 值 | 来源 |
|---|---|---|
| 机型 | Xiaomi 13 `vermeer` (23113RKC6C)，SM8550 `kalama`，Adreno | `ro.product.device` |
| System/框架 | Android **16** / SDK 36，HyperOS 3.0.0.307 | `ro.system.build.fingerprint` |
| Vendor 分区 | Android **13** / SDK 33 | 解包 `vendor_a.img` |
| 内核 | `5.15.220-202609162-Batch30` | `uname -r` |
| AOSP 对应分支 | **`android13-5.15-lts`**（SUBLEVEL=220，完全吻合） | `git ls-remote` |
| Root | KernelSU v3.3.0-45 + ReSukiSU v4.1.0，SELinux **Enforcing** | 实测 |
| 分区格局 | A/B 双槽，当前 **`_a`** | `ro.boot.slot_suffix` |
| RootFS | `/` 为 EROFS 只读 (dm-8) | `mount` |

### ⚠️ 这不是"Android 13 手机"

厂商把 **Android 16 用户态 + Android 13 vendor + 5.15 GKI 内核** 叠在一起。
所以"跑 Android 14"在当前语境下其实是**降级**（14 < 16）。

### 分区结构与内核位置（本文档最重要的一条）

| 分区 | 字节数 | magic | 内容 |
|---|---|---|---|
| **`boot_a`** | **201,326,592** | `ANDROID!` | **← 内核在这里**（arm64 Image，image_size 43,384,832） |
| `init_boot_a` | 8,388,608 | `ANDROID!` | generic ramdisk（`init=/init`，无内核） |
| `vendor_boot_a` | 100,663,296 | `VNDRBOOT` v4 | vendor ramdisk + **8 个 DTB** |
| `dtbo_a` | 25,165,824 | — | DTBO overlay |
| `vbmeta_a` | 131,072 | — | AVB |

**`boot_a` 内 `0x1000` 处是标准 arm64 Linux Image**：
```
code0       : 0xFA405A4D        <- "MZ@"
image_size  : 0x2960000 (43,384,832)
magic @0x38 : b'ARMd'           <- 标准 arm64 magic
```

**DTB 在 `vendor_boot` 里，由 bootloader 按 `ro.boot.dtb_idx=2` 选取**
（已扫出 8 个 DTB，`d00dfeed` 魔数，从 0x1D83000 起）。
→ **换 `boot` 里的内核 Image 时，DTB/dtbo/ramdisk 全部不用动。**

> 我曾据"GKI 2.0 惯例"判定内核在 `init_boot`，**未验证**，
> 导致在 8 MB 的 ramdisk 上反推格式十轮、全部无用功。
> 正确做法：读分区字节看 magic。

### vendor_dlkm（核心障碍）

`/vendor_dlkm/lib/modules` 共 **293 个 .ko，72.7 MB**：

- vermagic 全部 `5.15.78 SMP preempt mod_unload modversions aarch64`
- **CRC 绑定总数 17,675 个 / 3,600 个符号**（每模块中位数 40）
- **293/293 带 CFI 插桩**（`.text.__cfi_check`）
- 与 `vendor_dlkm_a.img` 内文件 **md5 完全一致**

耦合最深：`msm_drm.ko`(784)、`qca_cld3_kiwi_v2.ko`(510)、`msm_kgsl.ko`(497)、
`camera.ko`(396)、`ipam.ko`(391)、`cnss2.ko`(331)。

Xiaomi 私有、无公开源码（确定不可重编）：
`migt.ko`、`mi_thermal_interface.ko`、`mi_exception_log.ko`、
`mi_cnss_statistic.ko`、`hardwareinfo.ko`、`gsim.ko`、`smcinvoke_dlkm.ko`、
`aw882xx_dlkm.ko`、`goodix_core.ko`、`goodix_fod.ko`、`fpc1555.ko`

---

## 二、Phase 1 已完成：CFI 障碍已排除

**结论**（`PHASE1_RESULT.md`，单次干净启动 258 行日志）：

在 `android14-6.1-lts`（6.1.177）+ `CONFIG_CFI_CLANG=y` +
`CONFIG_CFI_PERMISSIVE=y` 下，一个带 CFI 插桩的模块：

```
PHASE1-INSMOD-OK: init_module returned 0
[    0.574626] cfiprobe: loaded on 6.1.177-gf96e7cceadcd (CFI-instrumented)
PHASE1-MODULE-SYSFS: present
CFI failure / Oops: 0
```

**意义**：CFI 这道"必杀关卡"有上游官方解法
（`kernel/cfi.c:20` 把 `BUG_TRAP_TYPE_BUG` 换成 `BUG_TRAP_TYPE_WARN`，
Kconfig 原文本就是给 "finding indirect call type mismatches during development" 用的）。

**对照真机那次 panic**：我当时编的模块**没带 CFI**（`__cfi_check` 0 个），
而设备内核 `CONFIG_CFI_CLANG=y`、293 个 vendor 模块全带 CFI。
所以 panic 是"我的测试模块与内核 CFI 指纹不匹配"，**不是 CFI 会杀模块**。

### Phase 1 的三个坑（重要，会再踩）

1. **LTO 不开，CFI 不插桩。** `.o` 是 LLVM IR bitcode，
   CFI 类型 ID 在最终链接才生成。判据不是 grep `.o`，
   是 `System.map` 里的 `__kcfi_typeid_*`（本例 2,284 个）。
2. **`init_module()` 第三参传 NULL → `EFAULT`(-14)。**
   `kernel/module/main.c:2880` 的 `strndup_user(uargs)` 拒绝 NULL，
   必须传指向 `""` 的指针。
3. **initramfs 里必须有 `/proc` `/sys` `/dev` 目录**，
   否则 `mount()` 返回 ENOENT，`/sys` 是空的，
   `faccessat()` 必然报"模块不存在"——我误判过这是模块问题。

### Phase 1 没有证明的

- ❌ **5.15 vendor 模块能否在 6.1 上工作** —— struct 布局差异完全没测到
  （QEMU `virt` 平台没有 SM8550 硬件驱动去碰那些 struct）
- ❌ vendor 模块能否加载 —— QEMU 无 kalama DTB、无 qcom 平台驱动，
  依赖链缺失，测出来全是假阴性

---

## 三、Phase 2 方案与前置（全部就绪）

### 目标

6.1 内核 + 兼容开关 → 刷 `boot_b` → 逐个加载 vendor 模块 →
**拿 dmesg 数据回答"5.15 vendor 驱动有多少能活在 6.1 上"**。

用户已确认接受预期：**"6.1 内核能起来" ≠ "手机能用"**，
Phase 2 大概率只回答前者，且显示/GPU/相机成功概率低。

### 内核配置（`~/k61`，ext4）

```bash
# 已验证（Phase 1）
CONFIG_CFI_CLANG=y
CONFIG_CFI_PERMISSIVE=y
# 待补
CONFIG_MODVERSIONS=n        # 跳过 17,675 个 CRC
CONFIG_MODULES=y
CONFIG_MODULE_UNLOAD=y
CONFIG_LTO=y                # 必须开，否则 CFI 不插桩
CONFIG_LTO_CLANG_THIN=y
```

外加 `check_modinfo()` / `same_magic()` 放宽 vermagic 的补丁。
现成参考：`ABK_ABI_PATCH_SUITE/scripts/abk_dual_abi_bridge_apply.py`
的 `resolve_layout()`（:28）同时支持 6.1 拆分和 5.15 单文件两种布局。

**注意**：真机实测 `check_modinfo()` 对 vermagic **版本号宽松**
（`5.15.78` 与 `5.15.220-g17730f38b70b` 都能通过），
但**必须保留 flag 尾部** `SMP preempt mod_unload modversions aarch64`，
缺了就 `Exec format error`。6.1 是全新内核，这条补丁要自己做。

### 测试顺序（从低耦合到高耦合）

| 顺序 | 模块 | CRC 绑定 |
|---|---|---|
| 1 | `boot_stats.ko` | 10 |
| 2 | `bam_dma.ko` | ~10 |
| 3 | `i2c-msm-geni` | ~20 |
| 4 | `pinctrl-*` | ~20 |
| 5 | `spmi` 系 | ~30 |
| 6 | `msm_drm.ko` | **784** |
| 7 | `msm_kgsl.ko` | **497** |
| 8 | `camera.ko` | **396** |

### 纪律（Phase 1 学到的，务必遵守）

- **只 `insmod`，绝不 `rmmod`**（真机那次 panic 就走 delete_module 路径）
- **一次一个**，测完重启设备再测下一个
- 每个测试前**先确认设备在线**
- 记录 `dmesg` 里的 CFI/Oops/disagrees 行

---

## 四、安全措施（已完成，刷机前再确认一次）

| 项 | 状态 |
|---|---|
| `boot_a.img` 192 MB 备份到本地 | ✅ `_probe/backup/boot_a.img` |
| `init_boot_a/b.img` | ✅ |
| `vendor_boot_a.img` 96 MB | ✅ |
| `dtbo_a.img` 24 MB | ✅ |
| `vbmeta_a.img` | ✅ |
| 设备上 `/sdcard/bk/` 同套备份 | ✅ |
| 当前活动槽 `_a`，Phase 2 只动 `_b` | ✅ |
| 回滚命令 `fastboot set_active a` | ✅ |

**刷机命令**（Phase 2 实际执行时）：
```bash
fastboot flash boot_b <新 boot_b.img>
fastboot set_active b
# 失败则
fastboot set_active a
```

---

## 五、环境（全部就绪，无需重装）

### WSL Arch Linux

```bash
# QEMU + aarch64 工具链：静态装在 ~/qpkg，无 root，共 56 个包
export LD_LIBRARY_PATH=$HOME/qpkg/usr/lib
~/qpkg/usr/bin/qemu-system-aarch64 --version        # 11.1.1
~/qpkg/usr/bin/aarch64-linux-gnu-gcc --version      # 16.1.0

# lz4 python 模块（venv，因为系统 python 是 PEP 668 托管）
~/venv/bin/python -c "import lz4.block; print('ok')"
```

> sudo 在这台机器**需要密码**，非交互 shell 无法输入。
> 所有东西都是从 Arch mirror 下 `.pkg.tar.zst` 解包到 `~/qpkg/`。

### 内核树（都在 ext4）

| 路径 | 版本 | 用途 |
|---|---|---|
| `~/k61` | **6.1.177** (`android14-6.1-lts` @ `f96e7ccea`) | Phase 2 目标 |
| `~/k515` | **5.15.220** (`android13-5.15-lts` @ `17730f38b70b`) | 设备内核精确复刻，编测试模块用 |

两者都有 `Module.symvers`（15,532 条），`make modules` 可用。

### 一键 QEMU 复现（Phase 1 验证用）

```bash
export LD_LIBRARY_PATH=$HOME/qpkg/usr/lib:${LD_LIBRARY_PATH:-}
timeout 60 ~/qpkg/usr/bin/qemu-system-aarch64 \
    -machine virt -cpu cortex-a57 -smp 1 -m 512 -nic none -no-reboot \
    -kernel ~/k61/arch/arm64/boot/Image \
    -initrd ~/k61/initramfs.cpio.gz \
    -append "console=ttyAMA0 rdinit=/init panic=-1" -nographic
```

### 设备连接

**无线调试端口会变**，`adb mdns services` 不一定扫得到，可靠办法是全端口扫描：
```bash
python -c "
import socket, concurrent.futures
def chk(p):
    s=socket.socket(); s.settimeout(0.6)
    try: s.connect(('192.168.31.124',p)); s.close(); return p
    except: return None
with concurrent.futures.ThreadPoolExecutor(max_workers=200) as ex:
    print([r for r in ex.map(chk, range(30000,50001)) if r])
"
```
（本次发现的端口：38555 → 38683 → 43355 → 40901）

Git Bash 调 adb 的路径坑：**用 `MSYS_NO_PATHCONV=1` + 正斜杠 Windows 路径**
（`C:/Users/...`），反斜杠会被吃。

---

## 六、已排除的路与关键查证

### 6.1 源码不存在（两家独立来源交叉验证）

| 来源 | SM8550 最新内核 |
|---|---|
| `MiCode/Xiaomi_Kernel_OpenSource` | 5.15.78（`bsp-vermeer-t-oss`），**无一 6.1** |
| LineageOS `android_kernel_xiaomi_sm8550` | **8 分支全 5.15**（lineage-23.2/24.0 = 5.15.211） |

**SM8550 的 KMI 基线就是 5.15**，没人把它挪到 6.1。
这解释了 293 个 blob 为何全是 5.15.78。
`xiaomifirmwareupdater.com` 已是停放待售域名。

### 上游 GKI 6.1 无任何 SM8550 支持

| 子系统 | 上游状态（`android14-6.1-lts`） |
|---|---|
| GPU (Adreno 740) | **只到 a6xx**，`a7xx_gpu.c`/`a8xx_gpu.c` = 404 |
| 显示 | MSM DRM 只到 **SM8250**，DSI PHY 只到 SM8150/SM8250 |
| 相机 | `drivers/media/platform/msm` = **404** |
| WiFi | `drivers/staging/qcacld-3.0` = **404** |
| 设备树 | `kalama.dtsi`/`sm8550.dtsi` = **404** |

**推论**：显示/GPU/相机/WiFi 四大件在 6.1 上无上游替代，
必须靠 5.15 blob，而 blob 又面临 struct 布局差异。

### VINTF 不是障碍（解包证据）

`vendor_a.img/etc/vintf/`：
- `compatibility_matrix.xml` = `version="5.0"`（Android 13）
- `manifest_kalama.xml` = `target-level="7"`，sepolicy **33.0**，**全 HIDL 无 AIDL**
- **vendor 无 FCM（framework compatibility matrix）→ 不检查内核 KMI**

**vendor 侧不会拒绝 6.1 内核。** 我此前怀疑 VINTF 会拦，是错的。
约束方向是反的：Android 16 框架 FCM 检查 vendor manifest（level 5.0），
但那是 vendor↔framework 接口问题，与内核版本无绑定。

### abi_bridge 方向相反，不能直接用

`ABK_ABI_PATCH_SUITE` 的 `abi_bridge` 用户原本就理解对了：

`abk_dual_abi_bridge_apply.py:250-272` 的 `module_allowed()` 读的是
**模块自带 vermagic**，不是内核版本。
`RELEASE_PREFIX "7.0.12"` + `POLICY "global_7012"` 的语义是
**"让 7.0.12 的模块跑在 5.15 内核上"**，与本项目"5.15 模块跑 6.1"方向相反。

它确实能真中和三道加载关卡（`check_modstruct_version()` 改写后 `return 1`，
见 `w_bridge/common/kernel/module.c:1417`），
但**不解决 struct 布局和 CFI**。而 CFI 已由 Phase 1 证明需 `CFI_PERMISSIVE`。

### ABK 的能力边界

- ✅ 支持 `source_mode: custom_git` 指向 GKI 形树
- ⚠️ 但要求源码在仓库根目录并放进 `common`，且**即使 custom 也要求 AOSP
  存在精确 `common-<android>-<kernel>-<patch>` 分支**
- ❌ **产不出 `init_boot.img`**（所有 workflow 只产 `boot` 分区）——需改 ABK
- ❌ ABK 不构建 vendor_dlkm / techpack / msm-kernel
- `ABK_MODULE_SUPPORTED_STAGES` **workflow 根本不读**，只被 Android app 用于 UI 显示
- 外部模块必须带 `setup.sh`，否则构建直接报错
- `set:<url>#<child-id>` 的 `#child-id` **必须带**，否则静默什么都不做

---

## 七、错误清单（必须读，避免重犯）

完整版 `CORRECTIONS.md`。摘要：

1. **"vermagic 宽松，vendor 已证明"** —— 混淆了三件不同的事。
   `check_modinfo()` 宽松只证明那一关，CRC/CFI 没测出。
2. **panic 归因错三次**。真实原因：我的模块不带 CFI 插桩 + clang 22
   （设备是 clang 14.0.7 且 `CONFIG_CFI_CLANG=y`）。
   每次都在**没读内核源码**的情况下给结论。
3. **abi_bridge 方向说反**。用户一开始就是对的。
4. **CRC 总数算错**（17,761 → 实为 **17,675**）。
   `struct modversion_info` 是定长 **64 字节**
   （`{u64 crc; char name[56]}`），`kernel/module.c` 的
   `sh_size / sizeof()` 本身就证明是定长 stride。
5. **在 9p/drvfs 上编译**（`/mnt/f/test`）→ 慢且出诡异错误；
   **开 ThinLTO 被 OOM kill**（`Error 137`）；**关 CFI 编测试模块** → panic。
5. **Phase 1 结论错两轮**：先因"两次 init_module 调用"蒙对结果但理由错，
   再因 RC=EEXIST 而错误地自我否定。
   根因是 `sed` 修行号时没删旧行。
6. **"62 次成功"没意义**：`panic=-1` 没能阻止重启，QEMU 反复启动叠加输出。
   必须 `-no-reboot` + 全新日志。
7. **判定内核在 `init_boot`**（未验证，GKI 2.0 惯例推断）→ 实际在 `boot_a`。
   浪费了十轮格式反推。

**共同点：每次都在现象符合预期时停止核查。**

---

## 八、当前待办（按依赖顺序）

### 打包方式：直接字节替换，**不需要** `unpack_bootimg` / `mkbootimg`

`boot_a.img` 192 MB 的构成：

| 区段 | 大小 | 处理 |
|---|---|---|
| 分区头 `0x00–0x1000` | 4 KB | 原样保留 |
| **arm64 Image `0x1000` 起** | **43.4 MB** | **用源码编译的 6.1 Image 替换** |
| 其余（ramdisk 等） | ~157 MB | 原样保留 |

ramdisk **完全不用动**，所以不需要解包工具，直接拼装：

```bash
python3 - <<'EOF'
orig = open('_probe/backup/boot_a.img','rb').read()
newk = open('~/k61/arch/arm64/boot/Image','rb').read()
KOFF, KSZ = 0x1000, 43384832
assert len(newk) <= KSZ
out = orig[:KOFF] + newk + b''*(KSZ-len(newk)) + orig[KOFF+KSZ:]
open('boot_b.img','wb').write(out)
EOF
```

尺寸已验证：原内核 43,384,832（41.4 MB），我编的 6.1 Image 33,933,824（32 MB），装得下。

⚠️ **待验证**：分区头 `+0x08` 字段（值 42,691,072 ≈ 内核大小）是否需同步改成新内核大小。
若 bootloader 按它加载就得改。保守做法：新内核补齐到 43,384,832 字节，让该字段不变。

### Phase 2 步骤

1. **改 `~/k61` 配置**：加 `CONFIG_MODVERSIONS=n`，
   补 `check_modinfo()`/`same_magic()` vermagic 放宽补丁，重编 Image
2. **字节级拼装** `boot_b.img`（见上）
3. `fastboot flash boot_b boot_b.img && fastboot set_active b`
4. 按第三节纪律逐个测 vendor 模块

**第一个实际动作是第 1 步：改 `~/k61` 配置并重编。**

---

## 九、本地文件清单

### 根目录（当前有效）

| 文件 | 内容 |
|---|---|
| `DEVICE_FACTS.md` | 设备事实、量化 ABI 面、启动链实测 |
| `PHASE1_RESULT.md` | Phase 1 定稿结论 |
| `PHASE1_RETRACTED.md` | Phase 1 错误与修正过程（保留作记录） |
| `PHASE2_PREP.md` | Phase 2 方案、分区更正、安全措施 |
| `CORRECTIONS.md` | 全部错误清单 |
| `PLAN_V2.md` | 四阶段总方案 |
| `ROUTE_COMPARISON.md` | 六条路线对比与排序 |
| `ABK_CAPABILITY.md` | ABK 能力边界实测 |

### `archive/`（已被更新文档取代，可作为论据仓库）

`KEY_FINDING_NO_6_1.md`、`ABI_BRIDGE_VERDICT.md`、
`DISPLAY_GPU_CAMERA_WIFI.md`、`VENDOR_IMG_FINDINGS.md`、
`GKI_VENDOR_COMMS.md`、`INSMOD_VERMAGIC_TEST.md`

### `_probe/`（工具与数据）

| 文件 | 用途 |
|---|---|
| `versions2.py` | **正确的** `__versions` 解析器（定长 64 字节 stride） |
| `bootimg.py` | boot image 解析（**注意：不认本设备的厂商变体**） |
| `cfiprobe.c` | Phase 1 模块源码 |
| `init_nolibc.c` | freestanding aarch64 init（含 `sys6` 六参封装） |
| `mkinitramfs_fixed.sh` | 打 initramfs（**含 proc/sys/dev 挂载点**） |
| `run_qemu.sh` | QEMU 启动 + 结果判读 |
| `fetch_qemu.py` | 无 root 抓 QEMU 依赖 |
| `make_variants.py` / `make_crc_variants.py` | vermagic / CRC 变体生成 |
| `build61.sh` | 6.1 构建脚本（detached） |
| `kernel.config` | 设备 `/proc/config.gz`（7016 行） |
| `vendor_ko/` | 293 个 vendor .ko（72.7 MB） |
| `backup/` | **139 MB + 192 MB boot_a 分区备份** |
| `diag/` | 真机 panic 时的 `last_kmsg*` |

---

## 十、Source 引用

- AOSP kernel/common：https://android.googlesource.com/kernel/common
  - `android13-5.15-lts` @ `17730f38b70b`（设备内核基线）
  - `android14-6.1-lts` @ `f96e7cceadcd`（Phase 2 目标，6.1.177）
- Xiaomi 内核开源：https://github.com/MiCode/Xiaomi_Kernel_OpenSource
- LineageOS SM8550：https://github.com/LineageOS/android_kernel_xiaomi_sm8550
- ABK：`C:\Users\Administrator\StudioProjects\ABK`
- ABI Patch Suite：`C:\Users\Administrator\StudioProjects\ABK_ABI_PATCH_SUITE`
- K70 ROM（同机型 vermeer）：
  `G:\K70\17U_(纯净版)RedmiK70_OS3.0.303.0_16.0_追梦_77acd37d\zhuimeng\init_boot.img`
- vendor 镜像：`F:\yan13\Downloads\vendor.zip`（`vendor_a.img` + `vendor_dlkm_a.img`）
