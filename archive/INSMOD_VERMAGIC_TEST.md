# insmod 实测：vermagic 的真实校验行为（2026-10-01，真机）

## 实验设计

在 AOSP `android13-5.15-lts`（`SUBLEVEL=220`，与设备 `uname -r` 的 `5.15.220` 一致）
上编译一个最小模块，然后**只改 `.modinfo` 里的 vermagic 字符串**，生成多个变体，
逐个 `insmod` 到设备上。

构建树：`~/k515`（ext4），`CONFIG_MODULE_SIG` 关闭，`Module.symvers` 缺失
→ 所以变体**没有 `__versions` CRC 段**，`check_version()` 走 `versindex == 0` 分支。
**这隔离了 vermagic 这一个变量。**

设备内核：`5.15.220-202609162-Batch30`

## 结果

| 变体 | vermagic 字符串 | 结果 |
|---|---|---|
| `probe.ko` | `5.15.220-g17730f38b70b`（原样，无 flag 尾部） | ❌ `Exec format error` |
| `probe78.ko` | `5.15.78`（无 flag 尾部） | ❌ `Exec format error` |
| **`probe_220.ko`** | `5.15.220-g17730f38b70b SMP preempt mod_unload modversions aarch64` | ✅ **EXIT=0** |
| **`probe_78f.ko`** | `5.15.78 SMP preempt mod_unload modversions aarch64` | ✅ **EXIT=0** |
| **`probe_v78.ko`** | `5.15.78-g17730f38b70b SMP preempt mod_unload modversions aarch64` | ✅ **EXIT=0** |

293 个 vendor 模块的 vermagic 是 `5.15.78 SMP preempt mod_unload modversions aarch64`
—— **与 `probe_78f.ko` 逐字节相同，而它加载成功。**

## 结论（推翻我先前的判断）

### 1. vermagic 不是逐字节全串比对

`5.15.78 ...` 和 `5.15.220-g17730f38b70b ...` **都能通过**，而内核 UTS_RELEASE 是
`5.15.220-g17730f38b70b`。所以只比了**前面某个前缀**，不是整个字符串。

### 2. 真正的判据是 flag 尾部，不是版本号

这是本次最重要的发现：

- **有** `SMP preempt mod_unload modversions aarch64` 尾部 → 通过
- **没有**尾部（无论版本号是 5.15.78 还是 5.15.220）→ `Exec format error`

即：**尾部 flag 缺失才是致命项，版本号差异被容忍。**

### 3. 这解释了 vendor 模块为何能加载

vendor 模块 vermagic 前缀是 `5.15.78`（旧 SUBLEVEL），内核是 `5.15.220-g17730f38b70b`。
按标准 GKI 这应该被 `same_magic()` 拒绝——**但设备实际能跑 293 个模块**。

所以 **Xiaomi 一定 patch 过 `check_modinfo()` / `same_magic()`**，
把版本号部分变成前缀匹配或干脆忽略，只保留 flag 校验。

（另一种可能是 utsrelease.h 里 `MODULE_VERMAGIC_*` 之外的某种 generation 机制，
但无论哪种，结论一致：**这台设备的内核对 vermagic 版本号宽松**。）

## 对 6.1 移植的意义（重要，且是正面的）

| 关卡 | 原判断 | 修正后 |
|---|---|---|
| vermagic 版本号 | 会被拒 | ✅ **实际宽松，vendor 已证明** |
| vermagic flag 尾部 | — | ⚠️ **必须保留** `SMP preempt mod_unload modversions aarch64` |
| MODVERSIONS CRC | 17,761 个全废 | 未测（本实验无 CRC 段） |
| struct 布局 | 必崩 | 未变，仍是最大障碍 |
| CFI | 293/293 带 | 未测 |

**关键推论**：既然这台设备的 `check_modinfo()` 已经被厂商改宽松了，
那么 **6.1 上的同类 patch 阻力比理论上小** —— 这个手法在这个平台上已有先例。

而且 `CONFIG_MODVERSIONS=n` 可以一次性跳过大 CRC 大 CRC 问题。
**剩下唯一真障碍仍是 struct 布局**，而这个只能靠实测。

## 下一步（未做）

1. **测 CRC 是否被放宽**：编一个带正确 5.15 CRC 的模块 vs 带错误 CRC 的模块，
   看 `check_version()` 是否被 patch。这决定 `CONFIG_MODVERSIONS=n` 是否还有必要。
2. **测 CFI**：加载一个带 CFI 插桩但目标签名不符的模块，看是否 abort。
3. **测 struct**：拿一个低耦合 vendor 模块（如 `boot_stats.ko`，0 个绑定）
   在 6.1 内核上试加载 —— 这是唯一能直接回答"结构差异有多大"的实验。

## 复现脚本

- `_probe/probe.c` + `Makefile` —— 模块源码
- `_probe/make_variants.py` —— 生成 vermagic 变体（字节级改 `.modinfo`）
- `_probe/ko/` —— 构出的 5 个变体
- 构建树：WSL `~/k515` = AOSP `android13-5.15-lts` @ `17730f38b70b`

命令：
```bash
adb -s <serial> shell su -c 'insmod /data/local/tmp/probe_78f.ko; echo EXIT=$?'
```
