# Phase 2：真机测 struct 布局差异

## 状态：前置完成，等待执行刷机

本文件记录 Phase 2 的准备结论和待执行的步骤。

---

## 一、Phase 1 已确认（定稿在 PHASE1_RESULT.md）

6.1.177 + `CFI_CLANG` + `CFI_PERMISSIVE` 下，带 CFI 插桩的模块：
`init_module()` 返回 0、init 执行、sysfs 可见、0 CFI failure。

**CFI 这道障碍已排除**，解法是上游开关 `CONFIG_CFI_PERMISSIVE=y`。

---

## 二、Phase 2 的安全前置（已完成）

### 1. 备份（本地 + 设备双份，共 139 MB）

| 分区 | 大小 | 本地 |
|---|---|---|
| `init_boot_a.img` | 8 MB | ✅ |
| `init_boot_b.img` | 8 MB | ✅ |
| `vendor_boot_a.img` | 96 MB | ✅ |
| `dtbo_a.img` | 24 MB | ✅ |
| `vbmeta_a.img` | 128 KB | ✅ |

位置：`_probe/backup/`，设备上 `/sdcard/bk/`。

### 2. 关键确认：DTB 由 vendor_boot 提供，与内核分离 ✅

`vendor_boot_a.img` 是 `VNDRBOOT` header v4：

```
magic            : b'VNDRBOOT'
header_version   : 4
page_size        : 4096
vendor_ramdisk   : 32768
```

**在 vendor_boot 里找到 8 个 DTB（按 `d00dfeed` 魔数扫描）**：

```
@0x01D83000  size=464090     ← dtb_idx 相关的候选
@0x01DF44DA  size=446937
@0x01E616B3  size=510596
@0x01EDE137  size=529038
@0x01F5F3C5  size=460227
@0x01FCF988  size=443074
@0x0203BC4A  size=506733
@0x020B77B7  size=524436
```

设备实测 `ro.boot.dtb_idx=2`、`ro.boot.dtbo_idx=53`。

**结论：DTB 在 `vendor_boot` 里，由 bootloader 按索引选取。**
→ **换 `init_boot` 里的内核 Image 时，DTB/dtbo 完全可以保持不动。**
这消除了"6.1 内核没有 kalama 设备树"这个最大的未知。

### 3. 硬件前提

- 当前活动槽：**`_a`** → Phase 2 只动 `_b`，`_a` 保持可启动
- 回滚方式：`fastboot set_active a`
- Bootloader 已解锁（此前实测）

---

## 三、Phase 2 要构建什么

一个能在真机上跑的 6.1 `init_boot_b.img`，配置：

```bash
# 在 ~/k61 上改
./scripts/config --file .config -e CFI_CLANG -e CFI_PERMISSIVE   # 已验证
./scripts/config --file .config -d MODVERSIONS                   # 跳过 17,675 个 CRC
./scripts/config --file .config -e MODULES -e MODULE_UNLOAD      # 仍需能加载模块
```

**外加一项 loader 补丁**：`check_modinfo()` / `same_magic()` 放宽 vermagic。
（Phase 1 已实测真机上 `5.15.78` 与 `5.15.220` 都能过，说明厂商已放宽；
6.1 上是全新内核，必须自己 patch。）

补丁位置（6.1 拆分布局）：
- `kernel/module/main.c` —— `check_modinfo()`
- `kernel/module/version.c` —— `same_magic()`

参考现成实现：`ABK_ABI_PATCH_SUITE/scripts/abk_dual_abi_bridge_apply.py`
的 `resolve_layout()`（:28）同时支持 6.1 拆分和 5.15 单文件两种布局。

---

## 四、Phase 2 测试顺序（从低耦合到高耦合）

| 顺序 | 模块 | CRC 绑定 | 冒烟判据 |
|---|---|---|---|
| 1 | `boot_stats.ko` | 10 | 能加载 + `/sys/module/boot_stats` 可见 |
| 2 | `bam_dma.ko` | ~10 | DMA 能正常分配 |
| 3 | `i2c-msm-geni` | ~20 | 触摸/传感器总线枚举 |
| 4 | `pinctrl-*` | ~20 | GPIO 状态 |
| 5 | `spmi` 系 | ~30 | PMIC 通信 |
| 6 | `msm_drm.ko` | 784 | **显示能否点亮** |
| 7 | `msm_kgsl.ko` | 497 | GPU 能否初始化 |
| 8 | `camera.ko` | 396 | 相机 HAL 能否起来 |

**每个模块的纪律**（Phase 1 学到的）：
- 只 `insmod`，**绝不 `rmmod`**
- 一次一个，测完重启设备再测下一个
- 每次先确认设备在线
- 记录 `dmesg` 里的 CFI/Oops/disagrees 行

---

## 五、关键更正：内核在 boot_a，不在 init_boot_a

### 我此前搞错了分区

从"设备有 init_boot 分区 + GKI 2.0 惯例"推断内核在 `init_boot`，**没有验证**。
用户追问"为什么要改 init_boot"后才去查，发现错了。

### 实测三个分区

| 分区 | 字节数 | magic | 内容 |
|---|---|---|---|
| **`boot_a`** | **201,326,592** (192 MB) | `ANDROID!` | **arm64 Image，`image_size`=43,384,832** |
| `init_boot_a` | 8,388,608 | `ANDROID!` | generic ramdisk（`init=/init`） |
| `vendor_boot_a` | 100,663,296 | `VNDRBOOT` v4 | vendor ramdisk + 8 个 DTB |

`boot_a` 内 `0x1000` 处：
```
code0       : 0xFA405A4D      <- arm64 Image "MZ@"
image_size  : 0x2960000 (43,384,832 bytes)
flags       : 0x0
magic @0x38 : b'ARMd'  <- 标准 arm64 Linux Image
```

`boot_a` 外层 `+0x08 = 42,691,072` ≈ 内核大小（对上）。

### 为什么这大幅简化 Phase 2

**`boot_a` 是标准 Android boot image v4，`unpack_bootimg` 能直接吃。**
我此前担心的"厂商私有 init_boot 格式"根本不存在——因为盯错了分区。
（在 8 MB 的 init_boot 上反推十轮格式，全部是无用功。）

换 `boot_a` 的好处：
- **ramdisk 不用动**（Android 16 generic ramdisk，6.1 内核照样能用）
- **DTB 不用动**（在 vendor_boot，已证实 8 个 DTB 对应 `ro.boot.dtb_idx=2`）
- **只换内核 Image 一个文件**

### 教训

读分区字节看 magic（`4d 5a 40 fa` + `ARMd`）一眼定位，
比任何基于惯例的推断都可靠。**应该先做这个。**

## 六、boot_b.img 怎么打：直接字节替换，不用 unpack_bootimg

### 为什么不需要解包工具

`boot_a.img` 192 MB 的构成：

| 区段 | 大小 | 来源 |
|---|---|---|
| 分区头 `0x00–0x1000` | 4 KB | **原样保留**（含 `kernel_size` 等字段） |
| **arm64 Image `0x1000` 起** | **43.4 MB** | **← 用我源码编译的 6.1 Image 替换** |
| 其余（ramdisk 等） | ~157 MB | **原样保留** |

`unpack_bootimg` 的唯一作用是取出 ramdisk——**但 ramdisk 根本不用动**，
所以直接字节级拼装更简单也更稳：

```bash
# 1. 我的 6.1 Image（32 MB，小于原 43.4 MB，装得下）
cp ~/k61/arch/arm64/boot/Image  new_kernel

# 2. 拼装：原头 + 新内核 + 原尾部
python3 - <<'EOF'
orig = open('_probe/backup/boot_a.img','rb').read()
newk = open('new_kernel','rb').read()
KOFF = 0x1000
KEND = 0x1000 + 43384832        # 原内核区结束偏移
assert len(newk) <= 43384832, "新内核太大"
out = orig[:KOFF] + newk + b'' * (43384832 - len(newk)) + orig[KEND:]
open('boot_b.img','wb').write(out)
print('boot_b.img:', len(out), 'bytes')
EOF
```

内核区不足 43 MB 的部分补零——arm64 Image 头里自带 `image_size`，
bootloader 按它加载，尾部补零无影响。

### 尺寸已验证

| | 大小 |
|---|---|
| 原设备内核 | 43,384,832 (41.4 MB) |
| 我编的 6.1 Image | 33,933,824 (32 MB) ✅ 装得下，余 9 MB |

### ⚠️ 仍需验证的一点

分区头 `+0x08` 字段（值 42,691,072 ≈ 内核大小）**是否需要同步改成
新内核实际大小**，我还没确认。若 bootloader 按这个字段而非 Image 头
`image_size` 加载，就得改它。**这是 Phase 2 第一个要验的事。**

保守做法：新内核也补齐到 43,384,832 字节，让该字段不用改。

## 六、Phase 2 其余部分（不变）

### 内核侧改动（已验证 + 待补）

```bash
# 已验证（Phase 1）
CONFIG_CFI_CLANG=y
CONFIG_CFI_PERMISSIVE=y
# 待补
CONFIG_MODVERSIONS=n        # 跳过 17,675 个 CRC
CONFIG_MODULES=y
CONFIG_MODULE_UNLOAD=y
```

外加 `check_modinfo()` / `same_magic()` 放宽 vermagic 的补丁
（参考 `ABK_ABI_PATCH_SUITE/scripts/abk_dual_abi_bridge_apply.py` 的 `resolve_layout()`）。

### 安全措施（已完成）

| 项 | 状态 |
|---|---|
| 5 个分区备份到本地 `_probe/backup/` | ✅ 139 MB |
| 备份到设备 `/sdcard/bk/` | ✅ |
| 只刷非活动槽（当前 `_a`，动 `_b`） | ✅ |
| 回滚 `fastboot set_active a` | ✅ |

### 测试顺序与纪律

从 `boot_stats.ko`(10 绑定) 到 `msm_drm.ko`(784 绑定) 逐级；
**只 insmod 绝不 rmmod**；一次一个，测完重启。

---

## 七、诚实预期

Phase 1 排除了 CFI，但 Phase 2 才是碰核心问题：

| 结果 | 可能性 |
|---|---|
| 6.1 内核在真机上启动 | 中（vendor ramdisk + DTB 留着，但 vendor 模块加载可能失败） |
| 低耦合模块能加载 | 中 |
| 显示/GPU/相机 | **低**（struct 差异最大的正是这几个） |

**"6.1 内核能起来"和"手机能用"是两件事**，Phase 2 大概率只回答前者。
用户已确认接受这个预期（目标是拿 dmesg 数据）。
