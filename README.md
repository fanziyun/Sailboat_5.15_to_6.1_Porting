# vermeer（Redmi K70 / SM8550）内核 5.15 → 6.1 移植研究

对一台 Redmi K70（代号 `vermeer`，骁龙 8 Gen 2 / SM8550，出厂 HyperOS：Android 16 用户态 + Android 13 vendor + 5.15.220 GKI 内核）做**内核大版本升级可行性研究**：能否让 5.15 的 408 个 vendor 内核模块跑在 6.1 GKI 内核上。

> **状态**：Phase 1 完成（CFI 障碍排除）；Phase 2 已实证"纯兼容层路线不可行"；当前产出为 **408 个 vendor 模块、61,505 个函数的完整 C 反编译语料**，作为 5.15 侧 ABI/struct 证据库。English version: [README_en.md](README_en.md)

## 背景：这不是一台"Android 13 手机"

| 层 | 版本 |
|---|---|
| 用户态（system） | Android 16 / HyperOS 3 |
| vendor 分区 | Android 13 / SDK 33 |
| 内核 | 5.15.220-202609162-Batch30（GKI） |

SM8550 的 KMI 基线就是 5.15：小米开源树止步 5.15.78，LineageOS 全分支 5.15，上游 GKI 6.1 无任何 SM8550 支持（显示/GPU/相机/WiFi 四大件全缺）。**想让这台机器上 6.1，vendor 模块是唯一载体。**

## 核心结论（详见 [PHASE2_PROGRESS.md](PHASE2_PROGRESS.md)）

1. **CFI 关卡可解**（Phase 1，QEMU 实证）：`CONFIG_CFI_PERMISSIVE=y` 下带 CFI 插桩的 5.15 模块可在 6.1 内核加载运行。
2. **兼容层 ≠ 兼容性**（Phase 2，真机实证）：vermagic/CRC/CFI 检测器全中和后，6.1 内核 + 117 个首启平台模块 → MI logo 循环。加载器对 struct 布局漂移**没有任何检查点**，错了就是静默内存腐坏。首启致命批次的主体（sched-walt、qcom_cpu_vendor_hooks、gcc-kalama、rpmh-regulator、qcom_tsens、gunyah 全家等）恰好都在 vendor_boot ramdisk 里。
3. **5.15→6.1 的真墙 = struct 布局与函数签名漂移**。本仓库的反编译语料就是这个墙的 5.15 侧证据库。

## 反编译语料（`_probe/r2_decompiled/`）

- **408 模块 / 61,505 函数 / 全部成功 / 0 失败**，205MB
  - 293 个来自 `vendor_dlkm_a.img`（`/vendor_dlkm/lib/modules`）
  - 115 个来自 `vendor_boot` ramdisk（与 vendor_dlkm 不重合的首启模块，清单见 `_probe/vendor_boot_missing_list.txt`）
  - 索引：[`_probe/r2_decompiled/INDEX.md`](_probe/r2_decompiled/INDEX.md)，每模块另有 `.meta.json`（函数数/失败/reloc 统计）
- 工具：radare2 6.2.0 + r2ghidra 6.2.0（`pdg`），无 root 环境免编译部署
- 质量亮点：导入调用渲染为真符号名；**CFI 类型分发表还原出函数名**（`__cfi_check` 的 typeid → 函数）
- 已知瑕疵：`.bss` 变量显示为 r2 旗标名、GOT 装载点显示为 `got.<sym>` 伪槽

### 关键技术点：r2 不会应用内核模块的重定位

`.ko` 是 ET_REL，`bl` 指令字出厂全 0（等 insmod 填）。r2 6.2 的
`bin.relocs.apply` 会把不认识的 aarch64 重定位（JUMP26/CALL26）**清零**，
导致反汇编全盘 invalid、Ghidra 抛 `UndefinedInstructionException`。
解法是 [`_probe/ko_patch.py`](_probe/ko_patch.py)：自行解析全部 12 类 AArch64
重定位（B/BL、adrp/add、GOT 系、ABS64/PREL32 等）写入文件副本，模块内符号
指向真实地址、导入符号指向合成 thunk（`af+` 建空函数让 pdg 渲染真名），
再以 `relocs.apply=false` 加载。这是本语料可用的前提。

### 另一件比反编译更锋利的武器（待做）

526/624 个模块自带 **`.BTF`** 段（11MB）——机器可读的"模块眼中"的内核 struct
布局。k61 开 `CONFIG_DEBUG_INFO_BTF` 重编拿 6.1 侧 BTF，两边 `bpftool btf dump`
做 diff，即可程序化定位"哪个 struct 漂了多少字节"。

## 从这里开始读文档

**[HANDOFF.md](HANDOFF.md)** — 交接总文档：全部实测事实、Phase 1 结论、Phase 2 方案、环境状态、错误清单、当前待办。新会话先读它，不要从其他文件开始。

## 根目录文档

| 文件 | 内容 | 状态 |
|---|---|---|
| `HANDOFF.md` | **交接总文档** | ✅ 当前 |
| `PHASE2_PROGRESS.md` | Phase 2 会话日志（刷机实录、槽位实验、反编译语料、资源坑） | ✅ 最新 |
| `DEVICE_FACTS.md` | 设备事实、17,675 个 CRC 绑定的量化、启动链实测 | ✅ 当前 |
| `PHASE1_RESULT.md` | Phase 1 定稿：CFI 障碍已排除 | ✅ 当前 |
| `PHASE1_RETRACTED.md` | Phase 1 的错误与修正过程 | 📌 留作记录 |
| `PHASE2_PREP.md` | Phase 2 方案 + 分区位置更正（内核在 `boot_a`） | ✅ 当前 |
| `CORRECTIONS.md` | 全部 8+ 次错误清单 | ✅ **必读** |
| `PLAN_V2.md` | 四阶段总方案 | ✅ 当前 |
| `ROUTE_COMPARISON.md` | 六条路线对比与排序 | ✅ 当前 |
| `ABK_CAPABILITY.md` | ABK 构建工具链能力边界实测 | ✅ 当前 |

## archive/（已被取代，可作论据仓库）

`KEY_FINDING_NO_6_1.md` — 6.1 源码不存在（官方+LineageOS 双源查证）；
`ABI_BRIDGE_VERDICT.md` — abi_bridge 方向相反，不能直接用；
`DISPLAY_GPU_CAMERA_WIFI.md` — 四大件上游支持逐项 404 查证；
`VENDOR_IMG_FINDINGS.md` — vendor 镜像解包结论（VINTF 非障碍）；
`GKI_VENDOR_COMMS.md` — GKI/vendor 沟通机制；
`INSMOD_VERMAGIC_TEST.md` — 真机 vermagic 宽松性实测。

> 这些的结论多数已并入 `HANDOFF.md`，保留是因为其中的原始证据链
> （逐项 HTTP 状态码、md5 比对、日志片段）在复议时有用。

## 目录结构

```
├── HANDOFF.md              交接文档（从这里读起）
├── PHASE2_PROGRESS.md      Phase 2 会话日志（最新状态）
├── PHASE2_PREP.md / PHASE1_RESULT.md / PHASE1_RETRACTED.md
├── CORRECTIONS.md          错误清单（本项目纪律：先验证再结论）
├── PLAN_V2.md / ROUTE_COMPARISON.md / ABK_CAPABILITY.md / DEVICE_FACTS.md
└── _probe/
    ├── ko_patch.py         重定位解析器（反编译可用的前提）
    ├── ko_decompile.py     批量反编译驱动（分片/会话回收/内存控制）
    ├── batch_decompile.sh  408 模块批处理入口
    ├── build_index.py      INDEX.md 生成器
    ├── merge_shards.py / collect_monsters.sh
    ├── versions2.py / bootimg.py / build_vb.py …  既有分析工具
    ├── r2_decompiled/      ★ 反编译成品（已入库）
    ├── vendor_ko/ vendor_boot_ko/   原始 .ko（未入库，可从镜像解出）
    └── backup/             分区镜像备份（未入库，仅本地）
```

## 复现

```bash
# 依赖：radare2 6.2.0 + r2ghidra 6.2.0（Arch 包直装或解包到任意前缀）
# 免 root 安装需要环境变量 R2_LIBR_PLUGINS、SLEIGHHOME，见 PHASE2_PROGRESS.md
python3 _probe/ko_patch.py  <in.ko> <patched.ko> <flags.r2>   # 重定位解析
python3 _probe/ko_decompile.py <in.ko> <outdir> [workdir]     # 单模块反编译
bash   _probe/batch_decompile.sh                              # 批量（幂等可续跑）
python3 _probe/build_index.py <outdir>                        # 重建索引
```

## 最重要的三条教训

1. **先验证再结论。** 本项目 8+ 次错误全是"现象符合预期就停止核查"。
2. **读分区字节看 magic**，不要靠惯例推断（我曾因此错判内核在 `init_boot`）。
3. **测试模块只 `insmod` 绝不 `rmmod`**（真机 panic 就走 delete_module 路径）。

## 用途与声明

个人设备研究用途。所有实验均在可回退的双槽机制下进行（备份齐全，回滚命令见 HANDOFF 第四节）；文档中的每个结论都标注了验证方式，错误与修正记录保留在 CORRECTIONS.md。
