# Phase 2 进行时记录（会话日志）

**日期**：2026-10-01
**前置**：HANDOFF.md 全文 + CORRECTIONS.md 全文已读。Phase 1 结论未受挑战。

---

## 本会话已确证的新事实（全部实测）

### 1. boot_a.img 头部语义（解掉 HANDOFF 第八节的 ⚠️）

boot_a.img 是 **boot image v4**（header_size=1584, header_version=4）：

| 字段 | 值 | 含义 |
|---|---|---|
| +0x08 | 42,691,072 | kernel_size（**文件占位**，< Image 自报 image_size 43,384,832，差值=BSS 不落盘，正常） |
| +0x0c | 0 | ramdisk_size = 0（v4 的 ramdisk 在 init_boot/vendor_boot） |
| +0x28 | 4 | header_version |

**结论：拼装 boot_b.img 时头部一个字节都不用改。**
bootloader 按 kernel_size=42,691,072 从 0x1000 加载；新 Image 33.9MB 补齐到
43,384,832 放入后，加载量完全覆盖。备份 md5=`0bd669054957feedff78cf036449dbdd`。

### 2. root 机制在 init_boot（用户指正 + 本地验证）

用户明确：root 挂载在 init_boot，不在内核。本地验证：
`init_boot_a.img` kernel_size=0，ramdisk=LZ4 legacy，含 8 处 `ksu`、0 处 magisk。
**推论**：换 boot 内核不影响 root。⚠️ 第一次进 slot b 后第一个动作：`su -c id`。

### 3. 日志路径 = /data/vendor/diag/（用户指正）

设备 `/sys/fs/pstore` 为空、无 ramoops 预留（/proc/iomem 无、/proc/cmdline 无）。
panic 数据从 `/data/vendor/diag/` 抓 rawdump/oops（`_probe/diag/last_kmsg*` 同源）。

### 4. vendor_boot_a.img 完整解剖（v4）

- ramdisk = **LZ4 legacy 格式**：`magic(4, 0x184C2102, 只在文件头出现一次) +
  [comp_size(4) + raw_block]*`，每块解压上限 8MB。python `lz4.block.decompress
  (data, uncompressed_size=8*1024*1024)` 可解。
- 共 9 块，解压 68,350,464 字节 cpio，**含 331 个 .ko + lib/modules/modules.load
  (117 行) + modules.load.recovery (331 行) + first_stage_ramdisk/fstab.qcom +
  system/bin/snapuserd**。
- **first-stage init 在 adb 可用之前就会 insmod modules.load 里的 117 个平台
  模块**（clk-rpmh、gcc-kalama、rpmh-regulator、qcom_tsens、qcom-cpufreq-hw、
  sched-walt、qcom_cpu_vendor_hooks、gunyah/gh_*、minidump 等）。
  **msm_drm/kgsl/camera 不在 first-stage 列表**（在 vendor_dlkm 后阶段加载）。
- DTB 区绝对偏移 0x1D83000（8 个 DTB，共 3,885,131 字节，0x1D83000 处
  d00dfeed 已验证）。头里**找不到指向 DTB 的 addr 字段**（已全字扫描）→
  ABL 很可能按固定布局定位 DTB。
- 头部：cmdline 实际从 +0x1c 开始（"video=vfb:640x40,bpp=32,... bootconfig"），
  +0x830=2128, +0x834=3,885,131(dtb_size), +0x838=0x1F00000(意义未定，位于
  DTB 区内部)。
- 文件布局：[0,4096) 头 | [4096, 4096+30,938,723) lz4 ramdisk | padding |
  [0x1D83000, +3,885,131) 8×DTB | 其余为 0。

### 5. 迭代阀门方案（如果首启在早阶段 panic）

改 `vendor_boot_b` 的 modules.load：解包→改列表→cpio 重打→lz4 legacy 重压
（python lz4.block.compress）→**新流只会更短，头部只更新 +0x18
vendor_ramdisk_size，DTB 及其后全部原样保留**。不追求字节等长，缝隙补零。
风险（ABL 对 ramdisk 变短后的 DTB 定位）已知但兜底是回槽 a。

### 6. init 不支持 modprobe.blacklist

设备 `/system/bin/init` strings 无 blacklist（init 只认 modules.load* 文件）。
所以不能用内核 cmdline 拉黑模块，只能改 modules.load 文件本身。

### 7. Phase 2 内核补丁（已应用，源码级确认）

- `CONFIG_MODVERSIONS=n`：`check_version()`/`check_modstruct_version()` 在
  `kernel/module/internal.h` 的 `#else` 分支直接 `return 1`（17,675 个 CRC 全跳过）。
- vermagic 补丁：改 `internal.h` MODVERSIONS=n 分支的 `same_magic()` stub：
  跳过版本号前缀 + 两边都忽略 `modversions` token + 其余 token（SMP/preempt/
  mod_unload/aarch64）必须精确匹配。**宿主 gcc 6 用例单测全过**（含缺失 preempt、
  多余 token 等反例）。
- `same_magic()` 6.1 自身 vermagic 将为
  `6.1.177-...-SMP preempt mod_unload aarch64`（vermagic.h + asm/vermagic.h 实读）。
- 其余关卡核查结论：`CONFIG_MODULE_SIG=n` → gki_module.o 不编译，GKI 保护导出
  表不生效；`CONFIG_RETPOLINE` 未开 → retpoline 检查恒过。
- 备份：`.config.phase1.bak`、`kernel/module/internal.h.phase1.bak`、
  `/tmp/Image.phase1`（Phase 1 的 33,933,824 字节 Image）。

### 8. 环境坑（新增）

- WSL 发行版名是 `archlinux` 不是 `Arch`。
- `wsl -- bash -lc 'nohup ... &'` 的后台进程随会话退出被杀 → 用 ZCode 的
  run_in_background 跑构建。
- Git Bash 调 `wsl -- bash /tmp/x.sh` 会被 MSYS 路径转换吃掉 `/tmp` →
  必须 `MSYS_NO_PATHCONV=1`。
- python 向 C 源写 `\0` 时工具层转义可能产生字面 NUL 字节（本次已踩，
  `grep` 报 binary file matches 即为此症），写后必须 `file`/`cat -A` 核查。

---

## 测试协议（依用户三条纪律重申）

1. 只 `insmod`，绝不 `rmmod`。
2. 一次一个模块，测完重启设备，每测前确认设备在线。
3. 先验证再结论：每个结论必须与本文已列事实对碰。

模块已在设备 `/data/local/tmp/vendor_ko/`（293 个，推送于 2026-10-01）。
测试顺序按 HANDOFF 第三节：boot_stats → bam_dma → i2c-msm-geni → pinctrl-* →
spmi 系 → msm_drm → msm_kgsl → camera。

## 下一步

- [ ] 等待 Image 构建完成（后台，`/tmp/b61_p2.log`）
- [ ] 拼装 boot_b.img（见第 1 条，头部不动）
- [ ] 刷 boot_b + set_active b（fastboot 需 USB；或 slot a 上 root dd 直写
      /dev/block/by-name/boot_b，无需 fastboot——待定）
- [ ] 首启观察：su 存活？117 个 first-stage 模块加载结果（dmesg）
- [ ] 若早 panic → 阀门方案（第 5 条）迭代剔除致命模块

---

## 2026-10-01 下午：刷机完成，首启后设备暂不可达

### 已完成
1. Phase 2 内核构建成功：`MAKE_EXIT=0`，Image 33,868,288 字节
   （md5 `0dfa56f3213d1255a7bc6192fea538a6`，比 Phase 1 小 64KB）。
   **Image 内嵌 vermagic 实测**：`6.1.177-gf96e7cceadcd-dirty SMP preempt mod_unload aarch64`
   ——无 `modversions`，与 vendor 模块尾部按补丁规则精确匹配。
2. `boot_b.img` 拼装完成（`_probe/boot_b.img`，201,326,592 字节，
   md5 `64a21511f0dedbdf2ab938db6363eba0`）：头部与原 boot_a 逐字节相同，
   新 Image 在 0x1000、空格补齐到 43,384,832，其后与原文件一致（已三段校验）。
3. 刷入方式：**root dd 直写**（未用 fastboot）：
   `dd if=/data/local/tmp/boot_b.img of=/dev/block/sde44`（sde44=boot_b），
   分区大小 201,326,592 精确匹配，回读 md5 一致。
4. `bootctl set-active-boot-slot 1`（用 /data/adb/ksu/bin/bootctl，无需 fastboot），
   `adb reboot` 于 11:31:05。
5. 293 个 vendor 模块已推至设备 `/data/local/tmp/vendor_ko/`（/data 跨槽共享）。

### 当前状态（11:31 重启后 ~25 分钟）
- 旧 IP 192.168.31.124：32768-61000 与 1024-30000 全扫无端口，ping 不通
  （注：ping 从未在本项目里验证过原本可通，不作为判据）。
- 全网段扫到 .246（小米 OUI MAC），仅 8080/8098 开放（IoT 特征），无 adb
  —— 判定为其它小米设备（电视/音箱类）。
- mDNS 无发现。**结论：slot b 首启未走到 WiFi+adbd。**
  可能性排序：① early boot 挂死（不 panic 则 ABL 不会重试回退）；
  ② panic 循环（ABL 7 次后回退槽 a，但 ~25 分钟仍未出现，略超预期）；
  ③ 系统起来了但 WiFi 模块没活、adbd 没起。
- **需要物理介入判断（看屏幕状态）。**

### 回滚命令（物理介入时用）
- 音量下 + 电源 → fastboot → `fastboot set_active a`（回 5.15）
- 或再试一次：`fastboot set_active b` + `fastboot reboot`
- panic 数据位置：`/data/vendor/diag/`（rawdump/oops）

### 已备好的工具
- `_probe/valve_vbb.py`：vendor_boot_b 迭代阀门（从原厂备份生成，剔除
  modules.load / modules.load.recovery 里的 .ko 行、cpio 零位移、lz4 legacy
  重压、roundtrip 已验证；实测 68MB 解压→编辑→重压 12 秒）。
  剔除对象必须是"上一轮诊断出的致命模块"，不要凭猜测剔除。

### 本机教训
- 在 ZCode 工具里往 bash heredoc 写含反引号内容会被工具层执行（引号被吃）。
  写文档一律用 Write/Edit 工具。

---

## 2026-10-01 晚：槽 b bootloop 确诊报告 → 改打槽 a + ramoops 诊断机

### 用户物理确认
- 槽 b（6.1 内核）**MI logo 循环**，充电显示正常。从未走到 WiFi/adbd。
- 用户授权：**直接刷槽 a 测试**，出事可 9008（EDL）救回。

### 新验证事实
1. `init_boot_b` 与 `init_boot_a` ramdisk 大小不同（2,242,433 vs 2,729,448），
   两槽镜像非完整复刻——槽 b 一致性本身就是未验证变量。
2. `_probe/diag/last_kmsg`（上次 panic 抓的 2MB 控制台）格式为
   `=== Dump occured at ... ===` + 完整 dmesg——平台原生崩溃捕获依赖 vendor
   minidump（DBGC 区），GKI 6.1 不注册 → 6.1 panic 默认抓不到。
3. 设备 5.15 内核 `CONFIG_PSTORE_RAM=y + PSTORE_CONSOLE=y`（/proc/config.gz），
   原厂 DTB 无 ramoops 固定节点（`ramoops_region` 是高通动态 alloc-ranges 风格，
   upstream pstore 驱动不认）→ **补 DTB 后 5.15 可读回 6.1 的 panic**。
4. 我们的 6.1 k61 原缺 PSTORE_RAM/CONSOLE/PMSG → 已打开并重编
   （Image 33,872,384 B，md5 `21d1499cd239cc7d163f20d1a69d2ff7`，
   strings 验证 38 处 ramoops）。
5. DTB[2]（dtb_idx=2 用的是 8 个 DTB 中第 3 个 @0x1E616B3）已加节点：
   `/reserved-memory/ramoops@e8000000`，reg=0xE8000000/4MB
   （console 2M + pmsg 1M + record 512K，无 ecc）。
   地址选择依据：bank1(0x80000000-1G) 固定保留区止于 0xE671D000，
   0xFF800000-0xFFE00000 也是保留区；0xE8000000 位于两者之间的空闲带。
   **外科手术式二进制 FDT 拼接**（不 dtc 反编译重编译——那会重排 phandle 使
   __symbols__ 失效连累 dtbo overlay）。验证：fdtget 读回 reg 正确、dtc 解析过、
   __symbols__ 表 diff 逐字节一致。
6. **重大工具 bug（已被 assert 拦截，未造成损害）**：cpio newc 头 namesize
   字段偏移是 hdr+94（field 11），不是 86（那是 rdevminor）→ valve_vbb.py
   之前"验证通过"的 modules.load 编辑实为语义损坏（首行混入路径碎片）。
   valve_vbb.py 已删除，统一用 `_probe/build_vb.py`
   （DTB 替换 + modules.load 编辑二合一，语义验证过：
   p1 无编辑=与原厂逐字节一致；--exclude 版首行干净、目标行确实消失）。

### 已备好的槽 a 四件套（_probe/）
| 文件 | 内容 | md5 |
|---|---|---|
| `boot_a_61.img` | boot_a 头原样 + 6.1(pstore) 内核补齐 43,384,832 | `aaf1c70120fb8c6bc50fc0104fc75052` |
| `boot_b_stock.img` | 原厂 boot_a 备份的副本（槽 b 回退用 5.15） | =boot_a 备份 `0bd669054957feedff78cf036449dbdd` |
| `vendor_boot_a_p1.img` | ramoops DTB + **原厂 modules.load 全量 117**（首轮全信息） | - |
| （vendor_boot_b 同用 a 的补丁镜像） | 回退槽也能读 pstore | - |

### 自动化流程（`_probe/flash_kit_when_ready.sh`，后台已挂）
fastboot 设备出现 → fetch vendor_boot_b 对比 md5 → 刷 boot_a(6.1) /
vendor_boot_a(补丁) / boot_b(stock) / vendor_boot_b(补丁) → set_active a →
reboot → 转 adb 守望（轮询 32768-61000）。

### 预期剧本
- 6.1 bootloop 时 panic 控制台写入 0xE8000000（ramoops）。
- ABL 数次失败后回退槽 b（stock 5.15 + 补丁 DTB）→ adb + su(root 在 init_boot) →
  `/sys/fs/pstore/console-ramoops` 读回 6.1 panic 现场 → 精确定位致命模块。
- 若槽 b 回退也失败：用户再进 fastboot，刷回原厂 boot_a（备份在
  `_probe/backup/boot_a.img`），槽 a 上读 pstore（vendor_boot_a 已带补丁节点）。
- 若 0xE8000000 与 ABL 加载地址冲突（首启即异常）：改地址重出 DTB。

### 诊断数据回读后的迭代
- 用 `build_vb.py --exclude <致命.ko>` 重出 vendor_boot_a，fastboot/adb 刷写迭代。
- vendor 模块 293 个仍在 `/data/local/tmp/vendor_ko/`。

---

## 2026-10-02 凌晨：设备恢复，现状盘点 + 方向裁决

### 设备现状（全部实测）

- USB 在线（serial `14d93093`），活动槽 **a**，内核 `5.15.220-202609162-Batch30`。
- `boot_a` md5 = `0bd669054957feedff78cf036449dbdd` = **原厂备份一致**，slot a 已完全回滚 stock。
- root 存活：`su -c id` → `uid=0 ... context=u:r:ksu:s0`（root 在 init_boot，未被动过，符合预期）。
- **boot_b 身份查明**：md5 `64ac984e16e5a36731d63dbb48b58c78`，boot v4（header_size=1584），
  kernel_size=47,442,432，内核 banner
  `Linux version 5.15.178-android13-8-00021-g6f2f96be86b9-ab13729987`。
  即**另一个原厂固件批次的 5.15 boot**（既非我方 6.1，也非备份的 5.15.220；推测物理恢复时刷入）。
  可用作 5.15 回退，但动 b 槽前须知道它不是备份那份。
- **6.1 bootloop 的 panic 无现场可查**：`/sys/fs/pstore` 空。被刷的 Phase 2 内核
  （`0dfa56f3…`）没编 PSTORE_RAM；带 pstore 的重编版（`21d1499c…`）**从未刷入过设备**；
  vendor minidump（DBGC）6.1 不注册。`/data/vendor/diag/` 在 ksu su 上下文 ls 被拒，未查。

### 方向裁决（本会话结论）

**兼容层 = 中和加载器的"检测器"（vermagic/CRC/签名+保护导出表/CFI-abort），
它不提供兼容性本身。** 5.15→6.1 的真墙是 struct 布局与函数签名漂移：加载器对它
没有检查点，只有运行期内存腐坏；`CFI_PERMISSIVE` 把 abort 降级为 warn+继续执行
错误签名的调用，等于把可诊断失败变成静默腐坏。首启 117 个 first-stage 模块全是
深 ABI 模块（clk/regulator/thermal/cpufreq/sched-walt+GKI vendor hooks/gunyah），
任一错位 → panic 或平台带不起来 → MI logo 循环——slot b 首启结果与
ROUTE_COMPARISON.md 第一节的预判一致（该节原话："兼容层能让加载器闭嘴，但没法让
6.1 内核安全地跑这批 5.15 驱动"；路线 1 排序 5/6）。

**决定：停止"全量 117 + 阀门逐个剔除"的迭代路线**（按 17,675 绑定先验，剔一个还有
下一批，不收敛）。ramoops 一轮只值得做一次，且定位为"死因实证收档"或路线 2 demo，
不是修复手段。Phase 1 QEMU 结论未被推翻，但其范围本就只到"CFI 可解 + 6.1 内核能跑"
（HANDOFF 第二节自己列明"没有证明的"）。

### 新情报（本会话查证，部分待证实）

- 高通 CodeLinaro `clo/la/kernel/msm` 存在 `android14-6.1-*` 分支
  （`android14-6.1-2025-02_r3` 的 Makefile 实测 = **6.1.124**），但该树为 GKI 形
  （有 build.config.gki.aarch64，无 kalama 配置/DT）≈ AOSP common，不构成新素材。
- `clo/la/platform/vendor/opensource/{display-drivers,camera-kernel}` 等组件仓库存在，
  分支为 LA/DISPLAY 发布流命名（DISPLAY.LA.2.0.x / LA.UM.*），**与 6.1 的对应关系
  须经 LA.VENDOR.14 / KERNEL.PLATFORM.2.0 世代的 manifest 对版本，尚未定位**。
- 社区已有 SM8550 BSP 整包同步脚本（GitHub `QRD-Development/SM8550_BSP_Sync`，
  含 qssi/target manifest）+ 编译指南（HackMD "SM8550 BSP Compile Guide"，kalama HLOS）。
- 若 manifest 摸排证实"kalama vendor 组件有 6.1 代源码"，路线 4（对 6.1 重编 vendor
  模块）素材从"自己搬 5.15→6.1"升级为"取高通自编 6.1 组件"，工作量从拓荒降为组装。
  Xiaomi 私有 11 模块（goodix/fpc1555/aw882xx/migt/smcinvoke 等）仍无源码，触控/指纹/
  扬声器有降级风险。

### 文档修复

`HANDOFF.md`、`PHASE2_PREP.md` 曾混入字面 NUL 字节（PHASE2_PROGRESS 第 8 条同类
环境坑），导致 Read 工具/编码探测全部失败。已原地去 NUL（其余内容逐字节保留）。

---

## 2026-10-02 凌晨（续）：槽 a 直刷实验 + vendor_boot 拒载根因修复

### 实验轮次记录（全部 fastboot 刷写，BL 实测 unlocked=yes）

`fastboot getvar unlocked` = yes（**ro.boot props 全部不可信**：flash.locked=1 /
green / locked 与 fastboot 矛盾，以 fastboot 为准）。

1. 刷 `boot_a_61.img`（6.1 pstore 内核）+ `vendor_boot_a_p1.img` + vbmeta_a
   （--disable-verity --disable-verification）→ 卡 logo + 自动重启。
2. 刷回 stock boot_a → 重启 **直接进 fastboot**；`set_active a` 后重启仍进 fastboot。
3. 刷回 stock vendor_boot_a → 立即正常开机（25s 上 adb）。
4. ABL 槽状态实测：bootloop 会把 `slot-unbootable:a=yes, retry-count=0`；
   `fastboot set_active a` 可清除。**双槽 unbootable → ABL 直接进 fastboot。**

### 根因（字节级实锤）：build_vb.py:133 把 dtb_size 写成大端

vendor_boot 头全部小端。原厂 `@0x834` = `4b 48 3b 00`（LE=3,885,131 ✓）；
p1 `@0x834` = `00 3b 49 22` —— 这是 3,885,346 的**大端**字节序
（`struct.pack_into(">I", ...)`），ABL 按小端读出 0x22493B00 = **575MB** > 分区
大小 → 拒载 vendor_boot → 进 fastboot。此前所有"直接进 fastboot"事件全部由此
一行代码导致；6.1 那轮的"卡 logo + 重启"很可能也是 ABL 拒载循环而非内核 panic
（无任何 panic 落盘可查，pstore 为空）。

**修复**：`">I"` → `"<I"`（build_vb.py:133），重新生成
`_probe/vendor_boot_a_fixed.img`（md5 `6a0c0afd399984dc539907bfc85efd12`）：
- dtb_size LE @0x834 = 3,885,346 ✓（DTB[2] +215B → 后续 DTB 位移是预期行为，
  ABL 按 index 选 DTB[2] 不受影响）
- DTB[2] 语义校验（WSL fdtget/dtc）：`/reserved-memory/ramoops@e8000000`
  reg=0xe8000000/0x400000, compatible="ramoops", console=0x200000,
  record=0x80000, pmsg=0x100000 ✓，dtc 全树解析通过
- ramdisk lz4 流重压后与原厂**等长**（30,938,723，确定性压缩）✓

### 排查中绕的弯（记录避免重犯）

- 曾怀疑"DTB[2] 变大导致越界"，深挖后确认 orig DTB[2] 是满打包零冗余，
  但这不是拒载原因——**字节序才是**。教训：diff 到"DTB 尺寸变化"就停了，
  没有继续核对头字段的字节序（又是"现象符合预期就停止核查"的变体）。
- _probe/fix_dtb_neutral.py（size-neutral DTB 重排）因此方案作废，留在仓库。

### 环境新坑（本会话新增）

- **ksu su 上下文能力残缺**：`/proc/self/status` CapEff = **全 0**（uid 0 但无任何
  capability）。后果：块设备节点读写行为不稳定（本次 sde24 读被拒、写成功）、
  `dmesg` klogctl 被拒、`/data/adb/ksu/bin/` 无法 ls。上个会话能 dd+md5 回读，
  本会话不行——差异原因未查明（疑似与重启次数/KSU 状态有关）。
- `setenforce 0` 可用，**`setenforce 1` 被拒**（内核单向开关，重启恢复 Enforcing）。
- 每次重启后 SELinux 回到 Enforcing，块设备/pstore 读取若再被拒，先 `setenforce 0`。

### 下一步（已排好，等设备 USB 重连）

1. **Phase A（零 6.1 风险）**：`fastboot flash vendor_boot_a _probe/vendor_boot_a_fixed.img`
   （内核保持 stock）→ 开机验证：
   `ls /proc/device-tree/reserved-memory/ | grep ramoops` 出现 +
   `/sys/fs/pstore/console-ramoops` 有内容（5.15 自己的开机日志）→ 读取链路通。
2. **Phase B**：`fastboot flash boot_a _probe/boot_a_61.img` → bootloop（panic
   写入 0xE8000000）→ 数分钟后进 fastboot 刷回 stock boot_a → 开机读
   `/sys/fs/pstore/console-ramoops` = 6.1 panic 现场。
3. 读到 panic 后按原裁决：先定位死因，再决定是否继续（不回退到阀门迭代）。

---

## 2026-10-03：293 个 vendor .ko 全量 r2ghidra 反编译（完成）

### 动机

方向裁决后，5.15→6.1 的真墙是 struct 布局漂移。把 293 个无源码/有源码
vendor 模块反编译成 C 伪码，作为 struct/ABI 证据库（ goodix/migt/smcinvoke
等 Xiaomi 私有模块尤其只有这条路可看）。

### 工具链（WSL archlinux，免 root，全部解包进 ~/qpkg）

- `radare2 6.2.0` + `r2ghidra 6.2.0`：Arch extra 镜像直接有二进制包
  （`r2ghidra-6.2.0-1-x86_64.pkg.tar.zst`），不必自己编译。
- 依赖坑：r2 需要 `libzip`/`zydis`/`libuv`（同法抓包解包）。
- 插件路径坑（编译时前缀=/usr，我们装在 ~/qpkg）：
  - `export R2_LIBR_PLUGINS=$HOME/qpkg/usr/lib/radare2/6.2.0`
  - **sleigh home 的环境变量名是 `SLEIGHHOME`**（不是
    R2GHIDRA_SLEIGHHOME）：`export SLEIGHHOME=$HOME/qpkg/usr/lib/radare2/6.2.0/r2ghidra_sleigh`
  - r2pipe 需要 PATH 里有 `radare2` 这个名字（包内 r2→radare2 符号链接；
    若手工 ln 反向覆盖会把两者变成循环链接，ELOOP）。
- ⚠️ 脚本一律放 ext4 跑（`~/r2work/bin/`）。/mnt/c(9p) 有陈旧缓存：
  本次 driver 曾连续读到旧版 ko_patch.py；且用户明确定性"放 NTFS 效率太低"。

### 关键障碍与解法（ko_patch.py）

**r2 6.2.0 的 `bin.relocs.apply=true` 会把不认识的 aarch64 重定位字清零**
（JUMP26/CALL26 unsupported → 装载前 bl 字=0 的 .ko 直接变 `udf`，
Ghidra 全线 UndefinedInstructionException，函数分析也断）。
解法 = 自己把**全部**重定位解析进文件副本，再以 `relocs.apply=false` 加载：

- 282 JUMP26/283 CALL26：编码 B/BL，imm26=(目标-现场)>>2；
  模块内符号→真实 VA；导入符号→追加区 thunk（±128MB 范围内必达）。
- 275 adrp / 277 add / 278 ldst8：imm12/immhi:immlo 编码。
- 284/285/286（GOT 系）：每导入符号造一个 8 字节"伪 GOT 槽"。
- 257 ABS64 / 258 ABS32 / 260 PREL64 / 261 PREL32：数据段直接写 S+A / S+A-P。
- ET_REL 的 VA 映射 = r2 给每 section 顺序分配（iSj 读出），导入 thunk/GOT 槽
  放在最大 section 末尾 4K 对齐处；`f <sym> 4 @ <addr>` + **`af+` 建空函数**，
  pdg 才会把调用渲染成真符号名（只打 flag 不建函数会显示 func_0x…）。
- 产出：`_probe/ko_patch.py`（293 个模块全部 skipped=0/range_fail=0）。

### 批量驱动（ko_decompile.py + batch_decompile.sh）

- r2pipe 单会话：`.` 执行 flags 脚本（⚠️ **不能用 `-i`**：-q 模式下 r2 跑完
  -i 就退出，不吃 r2pipe stdin 协议）→ `aaa` → `aflj` → 逐函数 `pdg @ addr`。
- ⚠️ r2 6.2 的 `aflj` 键名是 **`addr`**（不是老版的 `offset`）。
- `pdg @@ afl` 在 6.2 里无输出（静默失败），必须逐函数调用。
- 8 并行 xargs；每模块 1h 超时。**4 个大模块超时被杀**（cfg80211/mac80211/
  msm_kgsl/qca_cld3_kiwi_v2），重跑改 4h 超时+独占核心后 qca 28 分钟完成，
  其余 3 个约 1 小时级。工作副本在 WSL ext4（~/r2work/{in,out,log,tmp}），
  完成后回拷项目目录。

### 结果（最终，2026-10-04）

- **408/408 模块（293 vendor_dlkm + 115 vendor_boot 独有），61,505 函数全部
  pdg 成功，0 失败**。最大：qca_cld3_kiwi_v2 19,013 函数/52MB、msm_drm 17MB、
  mac80211 2,218 函数。
- 输出：`_probe/r2_decompiled/<name>.pdg.c` + `<name>.meta.json` +
  `INDEX.md`/`index.json`（205MB）。
- 526/624 个模块自带 `.BTF` 段（11MB）——模块侧 struct 布局的机器可读证据，
  与 6.1 侧 BTF（k61 需开 CONFIG_DEBUG_INFO_BTF 重编）做 diff 即可程序化定位
  struct 漂移，这是比读反编译更锋利的下一步工具。
- vendor_boot 独有 115 模块清单：`_probe/vendor_boot_missing_list.txt`
  （sched-walt、qcom_cpu_vendor_hooks、gcc-kalama、rpmh-regulator、qcom_tsens、
  qcom-cpufreq-hw、pinctrl-kalama、gunyah 全家……= 首启致命批次的主体）。

### 大模块资源坑（mac80211 战役实录，会再遇到）

1. **单 pdg 会话内存随函数数增长**（mac80211 会话 5 分钟到 2-3.4GB RSS），
   系统级症状是 swap 狂抖（40MB/s）+ iowait 30%+ + CPU 利用率个位数。
2. **换页风暴下 WSL VM 会整体失联**：`Wsl/Service/0x8007274c`，后台任务随机
   127 死亡——不是脚本 bug，是 VM 被内存压垮。
3. 处置（已固化到脚本）：
   - `.wslconfig` memory=10GB / swap=4GB（原 12GB/8GB 会把宿主机 16GB 压到
     剩 250MB；改动可逆，想还原改回即可）；
   - `wsl --shutdown` 清毒化 swap 后再跑；
   - 驱动内置：`KO_RESTART_EVERY`（默认 60 函数重启会话回收内存）、
     `r2ghidra.timeout=240`（注：超时只放弃等待，不保证释放内存）、
     `KO_MAX_FUNC_SIZE`（>8KB 函数跳过）、`KO_SHARD=i/N`（分片并行）；
   - >8KB 的"内存怪物"走 pass B：每函数独立 r2 进程 + OS `timeout 900`
     强杀（进程死=内存必释放）。mac80211 实测仅 1 个真怪物，内存健康后
     pass A 5 分钟跑完 10 分片——大部分"怪物"是换页压力的连锁产物。
4. 教训：**并行度上限是内存不是核数**；6C12T 吃满的前提是每会话内存受控。

