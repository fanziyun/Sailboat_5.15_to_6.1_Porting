# abi_bridge 的真实设计与「能不能用」（2026-10-01）

## 先纠正我之前的错误理解

我此前说「abi_bridge 能把 5.15 的 ko 放行加载到 6.1 内核」。**这个说法方向搞反了。**

用户的说法是对的：**abi_bridge 原本是在 5.15 内核上使用 7.0.12 版本的 ko 模块。**

## 证据

### 1. 彩排树的版本组合实测（`F:\test\`）

```
w_bridge   → common/kernel/module.c      (5.15 单文件布局)  31 行 bridge 代码
w_br61     → common/kernel/module/       (6.1 拆分布局)     29 行 bridge 代码
             version.c, 6.1.118
```

两棵树都落在：
```c
ABK_DUAL_ABI_BRIDGE_RELEASE_PREFIX "7.0.12"
ABK_DUAL_ABI_BRIDGE_POLICY       "global_7012"
```

`F:\test\refstub` 是 **7.0.12** 的参考树（`VERSION=7 PATCHLEVEL=0 SUBLEVEL=12`），
正是 `ABK_MAINLINE_7012_ROOT` 指向的东西。

### 2. 代码语义（`scripts/abk_dual_abi_bridge_apply.py:250-272`）

```c
static bool abk_dual_abi_bridge_is_7012_family(const char *release)
{
    return release && !strncmp(release, ABK_DUAL_ABI_BRIDGE_RELEASE_PREFIX,
                               strlen(ABK_DUAL_ABI_BRIDGE_RELEASE_PREFIX));
}

bool abk_dual_abi_bridge_module_allowed(const struct load_info *info)
{
    ...
    modmagic = abk_dual_abi_bridge_get_modinfo(info, "vermagic");
    ...
    release = modmagic;
    return abk_dual_abi_bridge_release_allowed(release);   /* 看的是【模块】的 vermagic */
}
```

**判定的是模块自带的 vermagic 前缀，不是内核版本。**

所以 `global_7012` 策略的真实含义是：

> 内核是 5.15（或 6.1），但**模块**声称自己是 `7.0.12` 家族 →
> 加载器放行 vermagic 不匹配和 CRC 不匹配。

**即：让 7.0.12 的 ko 跑在 5.15 内核上。** 不是让 5.15 的 ko 跑在 6.1 内核上。

### 3. 我此前的错误在哪

我把 `RELEASE_PREFIX` 当成了「目标内核版本」，实际它是「**模块**侧的放行白名单」。
所以我说「只要把 prefix 从 7.0.12 改成 5.15.78 就能用于本项目」——
**改是能改，但那是在说「让 5.15.78 的 ko 跑在某个内核上」，
而门禁依然只看模块 vermagic，不解决内核与模块之间的 ABI 差异。**

## 那么本项目能不能用？——分两问

### 问一：能不能靠改 prefix 让 293 个 5.15 vendor ko 加载到 6.1 内核？

**技术上能放行加载，实际上没用。** 理由：

| 关卡 | abi_bridge 能否解决 |
|---|---|
| vermagic 字符串不匹配 | ✅ 能（`same_magic()` 改写） |
| MODVERSIONS 每符号 CRC | ✅ **能，是真的放行**（见下） |
| **struct 布局 ABI 差异** | ❌ **不能** —— 无检查点，是运行期崩溃 |
| **CFI_CLANG 间接调用检查** | ❌ **不能** —— 293/293 模块带 CFI，签名不符直接 abort |

### 逐符号 CRC 是真的放行（已在彩排树源码里确认）

`F:\test\w_bridge\common\kernel\module.c:1380-1430`，`check_version()` 改写后：

```c
		if (versions[i].crc == crcval)
			return 1;
		pr_debug("Found checksum %X vs module %lX\n", crcval, versions[i].crc);
		if (abk_dual_abi_bridge_module_allowed(info)) {
			abk_dual_abi_bridge_note_symbol_crc(info, symname, crcval, versions[i].crc);
			return 1;                    /* ← 真的 return 1，不是只 warn */
		}
		goto bad_version;
```

**所以三道静态关卡（vermagic / module_layout CRC / 逐符号 CRC）全部被真正中和。**
我在前一版说「CRC 可能只是 warn」是低估了——`note_symbol_crc()` 确实伴随 `return 1`。

（`check_modstruct_version()` 那处 :1451-1453 同理，`module_layout` 不匹配也 `return 1`。）

### 那为什么还是没用

因为剩下两道不是加载器能放行的：

1. **struct 布局** —— CRC 检查的是符号**指向的内容**的哈希。CRC 对不上，
   说明 5.15 和 6.1 里这个符号背后的 `struct` **成员已经变了**。
   bridge 放行加载，等于**告诉内核「别管，加载」**，然后驱动按 5.15 的偏移去访问
   6.1 的 struct → 静默读写错字段 / 越界 / 崩溃。
   **CRC 放行恰恰是这里最危险的操作**，因为 CRC 就是为拦住这种情况而存在的。

2. **CFI** —— 293/293 模块都有 `.text.__cfi_check` section 和 cfi 符号引用。
   内核侧 `CONFIG_CFI_CLANG=y`。间接调用目标签名不符时走 `__cfi_check_fail`
   直接 abort，bridge 没有 hook 这一层。

### 问二：abi_bridge 原本的用途（7.0.12 ko on 5.15）真的能用么？

**这个用途本身是自洽的，但适用场景与本项目不同。** 它解决的是：

> 拿一个**新版内核源码树**（7.0.12）编出的模块，塞进一个**旧内核**（5.15）。
> 新模块可能引用了旧内核没有的符号/结构，bridge 让加载器别卡 vermagic 和 CRC。

注意方向：**新版模块 → 旧内核**。这种情况下 CRC 不匹配主要是因为内核**旧**，
而模块的 struct 布局通常比旧内核**新**，加载进来照样可能崩——
所以这个用法本质上是「实验性/展示性」，`CONFIG_ABK_DUAL_ABI_BRIDGE_EXPERIMENTAL`
直接 `return true` 全放行，正是这个性质。

**它对「把 5.15 的 293 个 vendor blob 搬到 6.1」这个具体目标没有帮助。**

## 结论

| 问题 | 答案 |
|---|---|
| abi_bridge 原本用途是否自洽？ | ✅ 自洽，且双线测试全绿（22/22 + 19/19） |
| 它解决哪个方向？ | **新模块（7.0.12）→ 旧内核（5.15）** |
| 静态关卡（vermagic/CRC）是否真被中和？ | ✅ **是，真的 `return 1`**（`w_bridge/module.c:1417`） |
| 对本项目（5.15 blob → 6.1 内核）有帮助吗？ | ❌ **几乎无帮助**。方向相反，且 struct/CFI 两层管不了 |
| 强行用会怎样？ | ⚠️ **更糟**—— 放行 CRC 等于关掉了唯一能拦住 struct 错位的警报 |
| 我此前说「改 prefix 就能用」 | ❌ 错误，已纠正 |

**本项目真正需要的不是 abi_bridge，而是把 vendor 驱动源码从 5.15 移植到 6.1**
（ROUTE_COMPARISON.md 路线 4）。abi_bridge 的正确用法是另一个场景。
