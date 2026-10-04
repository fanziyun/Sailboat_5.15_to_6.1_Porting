# ABK 工具链能力实测（源码级，2026-10-01）

依据：`C:\Users\Administrator\StudioProjects\ABK\.github\workflows\build.yml` 等文件逐行阅读。
这回答「这个项目能不能、以及怎么塞进 ABK」。

## 1. ABK 的源码输入：`custom_git` 能用，但有硬约束

`build.yml` 有 `source_mode` 输入，取值为 `aosp` 或 **`custom_git`**（build.yml:10-53）。

选 `custom_git` 时（build.yml:462-488）要求提供：

| 输入 | 说明 |
|---|---|
| `source_repo` | 任意 git 仓库 URL |
| `source_ref` | 分支/tag（必填） |
| `source_commit` | **必须是完整 40 位 SHA**（build.yml:480 硬校验） |
| `source_private` | 是否私有仓（用 `secrets.ABK_CUSTOM_SOURCE_GITHUB_TOKEN`） |
| `source_defconfigs` | defconfig 列表 |
| `source_kernel_version` | 限 `5.10/5.15/6.1/6.6/6.12`（build.yml:485） |
| `source_android_version` | 与内核线有绑定校验 |
| `source_device_label` | 设备标签 |
| `os_patch_level` | 必须 `YYYY-MM`（build.yml:483） |

`6.1 → android14` 的映射在 build.yml:487-488 硬编码校验。

### ⚠️ 三个会卡住的约束（重要）

1. **源码必须位于仓库根目录**（`kernel-source.yml:12` 明示「源码必须位于仓库根目录」），
   它被整体放进 `$KERNEL_ROOT/common`，即**必须是一棵 GKI 形的 `common` 树**。
   一棵带 `msm-kernel`/`techpack`/`vendor`/`modem` 的完整 CAF SM8550 平台树放不进去。

2. **即使 `custom_git` 模式，仍然要求 AOSP 存在精确 manifest 分支**
   （`kernel-source.yml:233-237` preflight）：
   ```
   manifest_ref="common-${android_version}-${kernel_version}-${OS_PATCH_LEVEL}"
   git ls-remote --exit-code --heads android.googlesource.com/kernel/manifest "refs/heads/$manifest_ref"
   ```
   不存在就 `::error::AOSP manifest 不存在精确分支`，**不会自动改用其他月份**。

3. **没有 `CUSTOM_KERNEL_SOURCE` / `KERNEL_REPO` / `KERNEL_BRANCH` 这类变量名。**
   真实名字是 `source_mode` / `source_repo` / `source_ref` / `source_commit`。
   `custom_external_modules` 是**模块**输入，不是内核源码输入，别混。

**修正我此前的说法**：我先前说「CAF android14-6.1 树可直接喂进 ABK，不用改代码」。
准确的说法是：**只有 GKI 形的 `common` 树能直接喂进去**；完整 vendor 平台树需要
改造 ABK，或走下面第 7 节的 OnePlus vendor 路径。

## 6.5 ABK 唯一能编 vendor 树的地方：OnePlus 路径（但不能挂外部模块）

`.github/workflows/oneplus-build.yml` 是 ABK 里**唯一**同步 vendor GKI 树的构建器：

```yaml
# oneplus-build.yml:296-299
repo init -u https://github.com/Xiaomichael/kernel_manifest.git \
  -b "refs/heads/oneplus/${CPU}" -m "${DEVICE_MANIFEST}.xml"
```

它同步 `kernel_platform/common` + `kernel_platform/msm-kernel` + `external` 三者
（oneplus-build.yml:332 还清理 `msm-kernel/android/abi_gki_protected_exports_*`）。

**但所有 OnePlus workflow 都没有 `custom_external_modules` 输入** —— 无法挂外部模块。

而且 `sm8550` 在 ABK 里只作为 **OnePlus 设备标签字符串**出现，
且 `KernelSupport.kt:83-87` 把这些设备全映射到 **android13 / 5.15**
（一加 11 / 12R / Ace2 Pro / Ace3 / Open），不是 android14/6.1。

**ABK 对 SM8550 / kalama / Qualcomm / vendor_dlkm / techpack 零感知**：
`kalama`、`qualcomm`、`techpack`、`vendor_dlkm`（构建侧）全部 **NOT FOUND**。
`vendor_dlkm` 唯一命中在 `SusfsRuntimeSupport.kt:53`，是运行时挂载路径列表，与构建无关。


## 2. ABK 外部模块机制（两种形态）

触发输入：`custom_external_modules`（字符串，build.yml:150）。

条目格式：`<LHS>;<stage>`，多条用 `|` 分隔。`stage` 经 `normalize_stage()`
归一化，**只接受两个值**（build.yml:775-790）：

- `after_patch` → 源码打补丁之后、构建之前
- `before_build` → 构建之前（用于改 Kconfig/CONFIG）

### 形态 A：单模块

```
module:https://github.com/<user>/<repo>;after_patch
```

### 形态 B：模块集子模块（用户要的「模块集」）

```
set:https://github.com/<user>/<module-set-repo>#<child_id>;after_patch
```

`set:` 左侧必须是 `<仓库URL>#<子模块id>`（build.yml:822-832），
解析出 `entry_kind=module_set_child`、`group_repo_url`、`child_id`。
一个 set 仓库可以挂多个子模块。

URL 协议限 `http/https/git/ssh/git@`（build.yml:848-854）。
克隆是 `git clone --depth 1`（build.yml:869）。
TSV 清单位段为：`stage / module_dir / repo_url / entry_kind / group_repo_url / child_id`（:877-883）。

三种写法（build.yml:818-836）：
- `module:<url>;<stage>` — 单模块
- `set:<group-url>#<child-id>;<stage>` — 模块集子模块
- `<url>;<stage>` — 旧式兼容写法

**本地构建路径额外支持本地目录**（`desktop/assets/local_build/rebuild.sh:568-575`，
`USE_CUSTOM_EXTERNAL_MODULES=true` + `CUSTOM_EXTERNAL_MODULES=<本地路径>;after_patch`），
这条 GHA 路径不支持（要求 git URL）。调试新模块时用本地路径最省事。

## 3. 外部模块契约：你要提供什么

**每个模块目录必须有一个 `setup.sh`，否则构建直接报错退出**
（build.yml:3811、4083：

```
::error::自定义外部模块缺少入口文件 setup.sh
```

### 调用方式（关键细节）

`bash setup.sh`，**零参数**（build.yml:3818-3832 / 4090-4098）。
- cwd = 模块仓库根目录
- env = GHA 全量环境 + ABK 写进 `$GITHUB_ENV` 的所有变量 + 下面这个每阶段显式块

`after_patch`（build.yml:3772-3794）与 `before_build`（:4044-4066）env 集合同构，
只有 `CUSTOM_EXTERNAL_MODULE_STAGE` 不同：

```
CUSTOM_EXTERNAL_MODULE_STAGE after_patch|before_build
ABK_MODULE_ENTRY_KIND / ABK_MODULE_GROUP_REPO_URL / ABK_MODULE_CHILD_ID
ABK_BUILD_ANDROID_VERSION / KERNEL_VERSION / SUB_LEVEL / OS_PATCH_LEVEL / REVISION
ABK_BUILD_KSU_VARIANT / KSU_BRANCH / VERSION / BUILD_TIME / VIRTUALIZATION_SUPPORT
ABK_FEATURE_USE_ZRAM / BBG / DDK / NTSYNC / NETWORKING / KPM / REKERNEL
ABK_FEATURE_ENABLE_SUSFS / SUPP_OP / ZRAM_FULL_ALGO
```

README 记录的完整变量清单（README.md:162-192）还包括
`GITHUB_WORKSPACE`、`CONFIG`、`KERNEL_ROOT`、`DEFCONFIG`、`ANYKERNEL3`、
`KERNEL_PATCHES`、`SUSFS4KSU`、`AVBTOOL`、`MKBOOTIMG`、`CCACHE_DIR` 等。

**两个坑**：
1. `KBUILD_BUILD_TIMESTAMP` / `KBUILD_BUILD_VERSION` **只在 `before_build` 可用**
   （设置自定义构建时间在 :4012，夹在两个 stage 之间）。
2. README.md:159：`${{ inputs.xxx }}` **不会**在模块脚本里展开。

内核算术位置：模块被 clone 到 `$GITHUB_WORKSPACE/custom_external_module_NN-<repo>/`，
源码在 `$KERNEL_ROOT/common`。setup.sh 要靠相对路径回退到内核树改文件。

### 两个 stage 在流程里的真实位置

`after_patch`(:3770) 之后到编译(:6222) 之前，中间还有：
`配置内核选项`(:3841)、`配置 KPM 超级密码`(:3928)、`添加 SUSFS 配置`(:3934)、
`配置内核名称`(:3973)、`设置自定义构建时间`(:4012)、然后才是 `before_build`(:4042)。

`before_build`(:4042) 之后到编译前，还有：`应用自定义内核选项`(:4104)、
四个 SUSFS/KSU 兼容修复(:4241/:5636/:5813/:5824/:6018)、`校验 ABK 管理器桥接`(:6106)。

### README 定的模块规则（:214-222）

幂等；缺文件/版本不符要 `exit 1` 大声失败；写操作限制在 `$KERNEL_ROOT`、
`$DEFCONFIG` 或自己的临时目录；**不要硬编码内核版本**（读 `$CONFIG` 或
`${KERNEL_ROOT}/common/Makefile`）；禁 secrets/token/不可审计二进制。

## 4. ABK 的构建产物是什么，以及三个做不到的地方

从 build.yml 看，ABK 产出：

- GKI 内核 `Image` / `boot.img`
- AnyKernel3 刷机包（`WildKernels/AnyKernel3`，分支 `gki-2.0`，build.yml:707-729）
- `ABK_FLASH_DEPENDENCIES.json`（刷机时按需拉 Magisk 模块）
- KernelSU 管理器 APK

**ABK 不构建 vendor_dlkm / techpack / modem / 显示相机音频驱动树。**
而且 build.yml:6445-6446 明确**关掉了** system_dlkm 构建：

```bash
sed -i 's/BUILD_SYSTEM_DLKM=1/BUILD_SYSTEM_DLKM=0/' ./common/build.config.gki.aarch64
sed -i '/MODULES_ORDER=android\/gki_aarch64_modules/d' ./common/build.config.gki.aarch64
```

编译只有一次，只针对 `common`：`tools/bazel build //common:kernel_aarch64_dist`（build.yml:6475）
或 `build/build.sh`（:6459）。

### 外部模块的三类产出，各自的真实支持度

| 想要的产出 | ABK 现状 | 需要做什么 |
|---|---|---|
| (i) 构建前打补丁 | **支持** | 无。`patches/` 就是文档约定的位置；`git apply` 后要自己查 `.rej`/`.orig` 并 `exit 1`（build.yml:6645 只扫描上传 `.rej`，**不会因此失败**） |
| (ii) 额外 `.ko` 编进 AnyKernel3 | **编译行、打包不行** | 必须给 ABK 加**第三个 stage**（`after_build`）+ AnyKernel3 里的模块暂存逻辑。现只有 `after_patch`(:3770) 和 `before_build`(:4042)，都在编译前；`创建 AnyKernel3` 在 :6559，只 `mv ../Image` 一个文件进去 |
| (iii) 可刷写的 `init_boot.img` | **完全不行** | 必须新增打包步骤。现有只产 **boot 分区**：`mkbootimg ... --partition_name boot` + `avbtool add_hash_footer --partition_name boot`（:6585-6611）。**所有 workflow 和 scripts 里 `init_boot` 零命中**（只有 Android app 的 `RootUtils.kt:58` 有，用于在手机上判断该 patch 哪个分区） |

注意 `before_build` 也不是最后话语权：:4241 / :5636 / :5813 / :5824 / :6018 都在它之后又重写
KSU/SUSFS 源码，`应用自定义内核选项`(:4104) 在它之后写 `$DEFCONFIG`。
所以 `before_build` 写的 CONFIG 可能被 `custom_kernel_options` 覆盖。

### module.conf 的真实作用（与文档描述有出入）

`ABK_MODULE_SUPPORTED_STAGES` / `ABK_MODULE_DEFAULT_STAGE` / `ABK_MODULE_RECOMMENDED_STAGES`
**workflow 根本不读**。build.yml 只读 `ABK_MODULE_NAME`(:985)、`ABK_MODULE_ID`(:986, :6117)、
`ABK_MODULE_SET_ITEMS`(:989)、`ABK_MAGISK_MODULE_NAME`(:994)、
`ABK_MAGISK_MODULE_DOWNLOAD_URL`(:1000)、`ABK_EXTENSION_*`(:1002-1009)，全集中在
`生成刷写外层 Magisk 依赖清单`(:893-1065) 这一步。

`SUPPORTED_STAGES` 只有 **Android app 和 desktop app 用于 UI 展示**
（`GitHubRepository.kt:945-978`）。**它不 gate 任何东西**——模块声明什么 subset 都行，
workflow 照样执行用户在 `custom_external_modules` 里手写的那个 stage。

## 6. 与 abk_ksu_sandbox 共存

`docs/design.md` 要求 `abk_ksu_sandbox` 在 `CONFIG_LSM` 静态列表中**排最后**，
启动参数也必须是 `...,abk_ksu_sandbox`。唯一例外是 5.10-6.6 的 ReSukiSU SUSFS 构建，
此时允许 `...,abk_ksu_sandbox,ksu`。

→ 任何新增的移植模块若也要注册 LSM，必须插在 `abk_ksu_sandbox` **之前**，
否则违反该契约（会在其 `late init` 检查时判定 not ready，导致匹配提权被拒）。
更稳妥的做法是移植模块**不注册 LSM**，退化为普通 built-in 或 .ko。
