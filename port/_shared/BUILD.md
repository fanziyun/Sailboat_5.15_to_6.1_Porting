# homeport 构建与刷载（ci-build-parity 构建器）

> 构建器位于 `D:\Kernel`（init.sh / rebuild.sh / apply-ci-knobs.sh），WSL ext4 构建目录 `~/kci515`，
> 目标 android13-5.15（与设备 Sailboat 内核同线）。本文件只记 homeport 的用法与纪律。

## 1. 首次接入一个模块（路径指派，无需 commit/push）

```bash
# Windows 侧（git-bash 或 wsl 都行，脚本在 skill 的 scripts/ 下）
bash <skill>/scripts/add-custom-module.sh ~/kci515/.local-build/env.sh \
  add "module:/mnt/c/Users/Administrator/StudioProjects/Sailboat_5.15_to_6.1_Porting/port/<name>" after_patch

# 校验清单
bash <skill>/scripts/add-custom-module.sh ~/kci515/.local-build/env.sh list
```

本地路径分支走 `rsync -a --delete --exclude='.git'`：改完直接编，删除同步，仓库历史不进构建树。

## 2. 迭代循环（铁纪律）

```bash
./rebuild.sh --reseed --allow-dirty-template    # 每次改完代码必须 --reseed
```

- **不带 `--reseed` = 静默编旧产物**（构建成功、无报错、改动一个字都没进树）。改模块代码不动清单时**没有任何提示**。
- `--reseed` 前段（rsync 8.5G 模板 + 重打补丁 + 重跑模块）≈ 95-115s；热 ccache 整轮 ≈ 7-9 分钟。
- 本地必须 `USE_CUSTOM_EXTERNAL_MODULES=true`（add-custom-module.sh 会自动补）。

## 3. 加载验证（构建第 6 级，缺一即静默失败）

| 检查 | 期望 |
|---|---|
| 日志 `preparing custom module #N (stage/kind): <路径>` | 清单每个块一行、编号连续 |
| 日志 `running custom module [stage]: <路径>` | 与 preparing 成对（只有 preparing = 没跑） |
| `~/kci515/.local-build/workspace/state/custom_external_modules.tsv` | 行数与清单一致 |
| 模块自身日志 | `[homeport/<name>] wired into ...` / `CONFIG_...=m` / `done stage=...` |

## 4. CRLF 防护

port/ 根有 `.gitattributes`（`*.sh text eol=lf`、`Kbuild text eol=lf`）。Windows 侧编辑器若把
setup.sh 检出成 CRLF，构建会报 `$'\r': command not found`。克隆后先 `git add --renormalize .`。

## 5. 产物与刷载

- 产物：`~/kci515/.local-build/workspace/artifacts/android13-5.15.*-AnyKernel3.zip`（含内核+模块）
- 刷内核：boot_b 字节替换法（见仓库 PHASE2_PREP.md，已验证）或 AnyKernel3
- 模块 .ko 也可单独从工作树取（`drivers/misc/homeport/<name>/<name>.ko`）→ adb push → 伴生模块 insmod
- 运行期加载/参数/协议接管：扩展 abk_runtime_tunables（service.sh 增加对应 supervisor）

## 6. 内核侧 hook/API 补齐（B/C 路线模块的前置）

- 形式：after_patch 补丁（独立 patch 文件，由 `_shared/kernel-patches/` 统一管理后指派进构建）
- KMI 红线：**只加不改**——新增 tracepoint 定义与 EXPORT 是加法（可接受）；禁止修改既有 struct 布局
- 每 hook 独立 commit + QEMU 启动验证（`~/k515` 或 `~/kci515` 产 Image + initramfs 一键复现，见 HANDOFF.md §五）
- 与既有补丁套件的符号冲突：注入前查其 porting_policy（同符号=静默语义冲突）

## 7. 阶段日志规范

每阶段验收日志落仓库外 `_probe/logs/F<n>/`（不入库），摘要回写 `HOME_FEATURES_PLAN.md` §7。
