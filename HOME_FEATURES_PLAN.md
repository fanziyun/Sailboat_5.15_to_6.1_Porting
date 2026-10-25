# OS4 桌面特性满血移植计划（home-features）

> 目标：把 OS4 桌面（com.miui.home，Flutter+Rust 世代）依赖的全部内核特性从上游固件移植到
> Sailboat 5.15 内核，配合伴生模块（abk 系）接管用户态协议，达到桌面"满血激活"。
> 本计划全部基于真机实测证据（2026-10-26 会话）与上游反编译语料。
> 工作分支：`port/home-features`（自 main 分叉，main 不动）。

---

## 0. 基线事实（全部真机实测，复测脚本见 §5）

| 项 | 状态 | 证据 |
|---|---|---|
| 平台 | vermeer/SM8550(kalama)，HyperOS4 用户态 + Sailboat 5.15.220 GKI + vermeer 自家 5.15.78 vendor 模块（vendor_dlkm 299 个、290 已载） | kallsyms / /proc/modules |
| 桌面 | com.miui.home 8.01（Flutter+Rust），uid=1000 | dumpsys |
| 三通道调度 | ①TurboSched 绑核**实测生效**（手势期主线程 cpus 0-7→3-6）；②应用侧 RT **未生效**（触摸窗口应用线程 SCHED_FIFO 0 次捕获；系统输入线程 InputDispatcher/InputReader=SCHED_FIFO 35 次命中）；③MiBridge **全断**（`miuiboosterservice` 未注册，system_server 反复报 null，开机等待 22s 超时） | test_rt_bind/rt3 日志 |
| millet | 已载但**从未被喂数**：send 计数 0、uid 记录空、netlink 0x1E 无客户端 socket；重启相关进程后消息恢复流动但 363 条握手全败 → **协议代差**（5.15 millet v1 vs 上游用户态 newversion） | /proc/millet/millet_stat 实验 |
| iorap | 自研 abk_lp 内建版：record/replay 机制工作（每冷启确定性重放 +80 kicks/+7101 页≈27MB）但**对微信冷启动无可测收益**（OFF 2827ms vs ON 3389ms 均值）；`abk_lp_enable=0` 拦不住 replay（语义缺陷）；官方链 iorapd 双断（PrereadEnable=false + 上游接口 /dev/iorap_dev、/proc/iorap_node 不存在） | test_iorap_cycle2/ab2 |
| metis | 已载（vermeer 自家，106 vip 符号）；`mi_switch_enable` 开关对桌面帧指标**无可测影响**（A/B/A 方差内）；`mi_freq_enable` 0444 只读不可开；**/dev/metis、/dev/migt（migt_dev 标签）被 SELinux 全拒**（app 侧 chrdev 通道堵死） | test_metis_sf2 + avc 实抓 |
| SELinux | audit 风暴（audit_lost=382116）；四类 denied：migt_dev、sysfs_cpu0maxfreq、vendor_sysfs_kgsl_gpuclk、vendor_turbosched_prop（后者波及全部 app 的 TurboSched 客户端初始化） | dmesg/logcat |
| zram/内存栈 | 实测工作（16G zram 用 5.4G，压缩比 2.5:1，kcompressd 活跃） | /proc/swaps、mm_stat |
| cpufreq | 负载自适应正常（idle 940MHz→负载 2.09GHz→回落 614MHz） | test_final |

**语料权威判定**：上游源 = `modko-main/decompiled`（440 模块 37,029 函数，CNB CI 反编译产物）。
其 `ko/*.ko` 实测 vermagic=`6.18.21-android17-5`（以二进制为准）；INDEX.md 头部"vermeer/5.15.78"
文字是旧模板残留，勿据此判断来源。全部实现仅源自该语料与真机实测，不使用任何外部项目源码。

---

## 1. 路线总表（终版）

### A. 直接重建（hook 依赖 100% 已在设备 5.15 kallsyms 验证，各 4 符号）

| 模块 | 函数数 | 已验证依赖 | 接口/要点 |
|---|---:|---|---|
| **iorap2** | 40 | 6/6：filemap_read、filemap_map_pages、do_async_mmap_readahead、should_fault_around、tune_mmap_readaround、ra_tuning_max_page（**全部在当前 Sailboat 内核已存在，无需刷内核**） | `/dev/iorap_dev` chrdev；ioctl `_IOWR('L',1/3/5/7,264)` + `_IOR('L',20,4)`（魔数 'L' 经 F2 解码修正）；`/proc/iorap_node/collect` 只读视图 |
| ~~dynamic_readahead~~ | 9 | — | **已合并撤下（F0）**：与设备内建 `abk_dra_*`（modsrc Batch 9-1，同源小米 mi_dynamic_readahead，`dynamic_readahead=Y` 激活中）语义相同；差异与证据见 `port/dynamic_readahead/NOTES.md` |
| scene_swappiness | 8 | tune_swappiness | 场景化 swappiness |
| perf_particle | 36 | rvh_schedule | |
| mi_io_monitor | 70 | ufs_send_command、ufs_compl_command | |
| mi_wq_dynamic_priority | 11 | rvh_alloc_and_link_pwqs、rvh_create_worker、vh_blk_mq_delay_run_hw_queue、vh_blk_mq_kick_requeue_list | |

### B. 完整移植 + 内核依赖补齐（不做绕行小改，按上游原样补内核）

| 模块 | 函数数 | 缺口 → 补法 |
|---|---:|---|
| touch_boost | 35 | `cpuidle_set_allowed_depth` 不在 5.15 → 按上游在内核补该 API/导出；其余自包含（irq_handler_entry✅，sysfs：unboost_freq_cpu/unboost_idle_cpu/irq_config/irq_num_max） |
| unfairmem | 12 | `get_page_wmark` hook 缺 → 内核补 hook |
| mi_perf_memory | 22 | `throttle_direct_reclaim_bypass` hook 缺 → 内核补 hook |

### C. 完整移植 + 多 hook backport（tracepoint 定义+调用点+EXPORT，按 6.1 GKI 位置）

| 模块 | 函数数 | 缺失 hook |
|---|---:|---|
| mi_reclaim | 37 | alloc_pages_slowpath_start/end、direct_reclaim_end、throttle_direct_reclaim_bypass（其余 10 个已在） |
| mi_low_lat_mem | 112 | rvh_try_alloc_pages_gfp、compact_bypass、dma_heap_buffer_alloc_lat_start/end、cma_alloc_lat_start/end、mm_direct_reclaim_start/end 等（多数缺） |

### E. 高价值列入

| 项 | 规模 | 说明 |
|---|---|---|
| **os_cpu_qi** | 376 fns | binder/mutex/rwsem 优先级继承（`setAsyncBinderVIPTaskIfNeeded` 内核端）——桌面价值最高；F0 审计实测**缺 13 hook**（mutex_lock_released、rwsem_lock_acquired/released、pcpu_rwsem 系、mmap_lock_init/free、fuse_request_fetch、futex_wait_queue_start、rcu_boost/sync_rcu 系）——需按 §1-C 补法 backport |
| **os_cpu_qs** | 121 fns | rwsem 等待/释放调度 + binder_preset；F0 审计缺 1 hook |
| **millet 全家** | 70 fns（core 32 + binder 12 + pkg 12 + sig 5 + hs 6 + oem_cgroup 3） | 协议对齐重建，netlink 0x1E 不变；替换设备 vermeer 版 core+卫星（两代 ABI 统一） |

### D. 不移植（结论依据见 §0）

os_cpu_vip_sched（90fns，metis 等价 + 调用点协议冲突 + 实测放置基线近满）、rust_binder（binder_gki+binder_prio 已载）、
zram 套件（abk 实测在）、os_cpu_plat_common（20fns，仅当 os_cpu_qi 重建需要时随带）。

### 待定位

thermal_perf_limits 提供者（不在语料 440；候选 thermal_passive_policy 30fns 待证）→ 修复后 PowerKeeper
才能初始化 → `miuiboosterservice` 注册 → MiBridge 全通道（CPU/GPU/DDR 提频、IO prefetch、触摸提频、热回调）复活。

---

## 2. 构建与刷载管线（ci-build-parity 构建器，能力已验证）

- 构建器：`D:\Kernel` 的 `init.sh`/`rebuild.sh`/`apply-ci-knobs.sh`；WSL ext4 构建目录 `~/kci515`；
  目标 **android13-5.15**（与设备 Sailboat 内核同线）；产物 = AnyKernel3.zip（可刷）+ 模块 .ko。
- **模块开发迭代（模式 A，路径指派）**：
  ```bash
  scripts/add-custom-module.sh ~/kci515/.local-build/env.sh add "module:/mnt/c/Users/Administrator/StudioProjects/Sailboat_5.15_to_6.1_Porting/port/<name>" after_patch
  ./rebuild.sh --reseed --allow-dirty-template   # 热缓存整轮 ≈ 7-9 分钟
  ```
- **铁纪律**：改模块代码每次必须 `--reseed`（否则静默编旧产物、无任何报错）；本地还须
  `USE_CUSTOM_EXTERNAL_MODULES=true`；`.gitattributes` 钉 `*.sh text eol=lf` 防 CRLF 坑。
- **加载验证（构建第 6 级）**：日志须同时出现 `preparing custom module #N` 与
  `running custom module [stage]`；查 `workspace/state/custom_external_modules.tsv` 行数一致。
- **内核侧 hook/API 补齐（合并决策：一律走 modsrc 组，不自造补丁模块）**：
  Sailboat 内核本身就是 modsrc 引擎的产物（构建清单 3 个 child），引擎带幂等/回滚/四道审计；
  自造的 `port/_kernel_patches` 已撤（F0）。新 hook 补齐 = 在 modsrc 注册新 Batch 组
  （anchor script 形态，参照其 Batch 13 customize_alloc_gfp 的 3-hunk upstream-shape 惯例）。
  KMI 红线沿用：新增导出=加法可接受；禁改既有 struct 布局。
- **刷载**：boot_b 字节替换法（仓库已验证，PHASE2_PREP.md）或 AnyKernel3；运行期模块加载/参数/协议
  接管由伴生模块（扩展 abk_runtime_tunables）负责。
- **零刷机原则（F0 修正）**：iorap2/millet 等纯模块的依赖 hook 在当前 Sailboat 内核已存在，
  直接 insmod；仅当 F3/F5 需要 modsrc 补新 hook 时才重刷内核（modsrc 组随下次构建自动带上）。

## 3. 阶段计划

| 阶段 | 内容 | 工期 | 出口判据（全部要日志） |
|---|---|---|---|
| **F0** | 依赖全量审计 + 管线打通：`_probe/audit_port_deps.sh` 提取每模块全部外部依赖对照设备 kallsyms →《内核补齐清单》；dynamic_readahead 走通 指派→编译→推载→insmod | 0.5-1 天 | 审计报告落 `port/_shared/DEPS_AUDIT.md`；构建日志含第 6 级双行；设备 `lsmod` 见模块 + dmesg 无错 |
| **F1** | 纯策略（与 F0 并行）：伴生模块 sepolicy.rule 补 4 条 allow（migt_dev / sysfs_cpu0maxfreq / vendor_sysfs_kgsl_gpuclk / vendor_turbosched_prop）+ `iorap.min_uid=1000` | 0.5 天 | avc denied 四类归零；`/dev/metis` 可被 app 域打开；audit_lost 不再增长；kick.1000 出现 |
| **F2** | iorap2 重建（第一批已写：chrdev+ioctl+页采集+proc）；`persist.sys.stability.PrereadEnable=true` 激活官方 iorapd | 2-3 天 | `/proc/iorap_node/collect` 出现包名级 app 列表；iorapd 常驻；冷启动 A/B（test_iorap_ab2）+ SF 帧统计 |
| **F2-x** | **abk_lp 退役（合并决策）**：iorap2 验收通过后 `iorap.watch=0` 关闭自研链（互斥，避免双预取系统抢 IO——A/B 已证预取 IO 与启动 IO 抢带宽）；abk_lp 两缺陷（enable=0 拦不住 replay、respawn 吃 kick 冷却）仅在 iorapd 链验证失败回头修时才处理 | 0.5 天 | iorap2 激活后 `abk_lp_stats_*` 计数停止增长；单系统预取 |
| **F3** | os_cpu_qi/qs：完整 hook 核对 → **modsrc 锁系组语义盘点（前置，modsrc 已有 mutex_unlock_slowpath/mutex_wakeup_patch/rwsem_wakeup_patch 等 7 个锁系 hook，防同路径双重补丁）** → binder_prio 重叠分析（替换或共存，防双重优先级操纵）→ 376+121 函数重建 | 4-6 天 | binder RT 优先级捕获 >0（新脚本）；锁等待延迟对比；与 binder_prio/modsrc 锁系的共存/替换决策记录 |
| **F4** | millet 全家重建替换（core+5 卫星统一上游协议） | 2-3 天 | `/proc/millet/millet_stat` HANDSHK send_suc>0、uid_rec 非空；netlink 0x1E 客户端 socket 出现；应用线程 RT 捕获 >0（test_rt3） |
| **F5** | 缺口全补批次：F0 清单的内核 hook/API 以 **modsrc 新 Batch 组**形态落地 → touch_boost、mi_reclaim、mi_perf_memory、unfairmem、mi_low_lat_mem 全量移植 | 3-5 天 | 触摸→提频时延（cpu_frequency trace 对齐输入事件）；PSI/冷启动对比；每 hook 独立 modsrc 组（幂等/回滚/审计） |
| **F6** | 收尾：剩余 A 类批量（scene_swappiness/perf_particle/mi_io_monitor/mi_wq_dynamic_priority/iostat_enhance/thermal_trace）+ thermal_perf 提供者定位 → PowerKeeper 激活；全量回归 | 2-3 天 | `miuiboosterservice` 注册成功、MiuiBoosterUtils 报错消失；全验收矩阵回归 |

**受限项（明记不死磕）**：metis 的 `mi_freq_enable`（0444 只读 + vermeer 闭源二进制）无法开启；
freq 效应由 cpufreq 自适应 + dynamic_readahead + touch_boost 路径覆盖（F5 落地后等价能力补齐）。

## 4. port/ 目录契约

```
port/
  <module>/            # 16 个：iorap2 dynamic_readahead millet(全家) os_cpu_qi os_cpu_qs
                       #        touch_boost mi_reclaim mi_perf_memory unfairmem mi_low_lat_mem
                       #        scene_swappiness perf_particle mi_io_monitor mi_wq_dynamic_priority
                       #        iostat_enhance thermal_trace
    NOTES.md           # pdg.c 行号映射、接口规格、依赖(✅/✗)、验收步骤
    module.conf        # ci-build-parity 元数据
    setup.sh           # after_patch/before_build 契约（构建器调用）
    Kbuild             # 构建接线
    src/               # F 阶段填充：按 pdg.c 逐函数还原的 C 源码
  _shared/BUILD.md     # 构建器用法、--reseed 纪律、刷载流程、日志规范
  _shared/DEPS_AUDIT.md# F0 产出：全量依赖审计 + 内核补齐清单
```

## 5. 验收矩阵（脚本已存在 `_probe/`，日志落 `_probe/logs/<阶段>/`）

| 维度 | 脚本/方法 | 通过判据 |
|---|---|---|
| 构建加载 | rebuild 日志 + tsv | 第 6 级：`preparing`/`running` 成对、条数一致；设备 insmod 成功 |
| 预取链路+收益 | test_iorap_cycle2.sh / test_iorap_ab2.sh | record/replay 计数增长；A/B 冷启动差值可解释 |
| RT/绑核 | test_rt3.sh / test_rt_bind.sh | 手势窗口应用线程 policy=1/2 或 cpus≠0-7 捕获 |
| 帧统计 | test_metis_sf2.sh（SF timestats A/B/A） | 同条件方差 > 条件间差异才认增益 |
| 策略生效 | avc 采样 + dmesg | denied 归零、无 audit 风暴 |
| 锁延迟（F3 新增） | 待写：mutex/rwsem 等待 tracepoint 采样 | 开/关模块对比 |
| 提频时延（F5 新增） | 待写：cpu_frequency tracepoint 对齐 input 事件 | 触摸→提频 < 阈值 |

每阶段完成在本文件 §7 追加结果记录。

## 6. 风险与对策

1. **millet 两代 ABI**：全家统一重建；替换设备 vermeer 版前先侧载验证 `register_millet_hook` 对接。
2. **os_cpu_qi 与 binder_prio 双重优先级操纵**：F3 前置重叠分析，二选一或明确分工。
3. **iorap2 的 VFS_internal 命名空间符号可见性**：F2 第一步先在 ~/k515 探测符号可达性。
4. **反编译源的结构体偏移/常量**：pdg.c + meta.json reloc 双源交叉；ioctl 结构（0x108/0x118/0x130 字节布局）从 .ko 二进制复核。
5. **hook backport 触 mm/sched 热路径**：每 hook 独立 commit + QEMU 启动验证 + 回滚预案；KMI 只加不改。
6. **构建静默偏差**：严守 `--reseed` 与第 6 级验收（构建器文档已载明全部坑）。
7. **上游引用纪律**：仅源自 modko-main/decompiled 语料与真机实测；文档/日志不出现外部项目名。
8. **INDEX.md 头部模板残留**（见 §0 语料判定）：以 .ko 二进制 vermagic 为唯一权威。

## 7. 结果记录（逐阶段追加）

### F0
**依赖全量审计已完成（2026-10-26）**，产物 `port/_shared/DEPS_AUDIT.md`（脚本 `port/_shared/audit_deps.sh` 可复跑）：

- 审计方法：从上游 .ko 二进制 symtab 提取全部 `__tracepoint_*` 引用（比 pdg.c 抽查权威——dynamic_readahead
  的第 4 个依赖即由此发现）→ 对照设备 5.15.220 kallsyms。
- **缺失 GKI hook 共 25 个 + 1 个 API**（cpuidle_set_allowed_depth），按模块：
  - mi_low_lat_mem：14（cma_alloc_lat/dma_heap_lat/mm_direct_reclaim/try_alloc_pages_gfp/compact_bypass/smart_refill 系…）
  - os_cpu_qi：13（mutex_lock_released、rwsem_lock_acquired/released、pcpu_rwsem 系、mmap_lock 系、fuse_request_fetch、futex_wait_queue_start、rcu_boost 系）
  - mi_reclaim：5（alloc_pages_slowpath_start/end、direct_reclaim_end、throttle_direct_reclaim_bypass、page_cache_ra_order_bypass）
  - dynamic_readahead / unfairmem / mi_perf_memory / os_cpu_qs：各 1
- **跨模块依赖新发现**：mi_low_lat_mem 引用 `mi_smart_refill_alloc/pool_shrink`（设备已载的 vermeer 版
  mi_mempool 无此导出）→ 需随 F5 一并重建新版 mi_mempool。
- 好消息：mutex 乐观自旋/futex wake/rwsem 读等待/binder 全系 hook 已在内核（MIUI vermeer 补丁底子），F3 的
  backport 量集中在锁事件通知类。
- **管线打通完成（REBUILD_EXIT=0）**：dynamic_readahead 样板走通"指派→编译→.ko 产出"全链（第 6 级双行 ✓、
  tsv ✓）；构建循环 5 个坑已固化进 setup.sh 模板（Kbuild/Makefile 双拷、聚合 Makefile、子模块 Kconfig、
  src 子目录保留、GKI 未导出 pgdat 遍历系）。

### F0-x 自家资产盘点与合并（重叠消除，2026-10-26）

计划初版只做了"上游语料 × 设备 kallsyms"两轴对比，漏了**自家第三轴 modsrc 套件**
（`~/kci515/modsrc`，100 个移植组的补丁引擎；Sailboat 内核即其产物，构建清单 3 个 child）。
逐项合并处置：

| 重叠 | 处置 |
|---|---|
| port/dynamic_readahead ↔ modsrc Batch 9-1 `abk_dra_*`（同源小米 mi_dynamic_readahead，设备 `dynamic_readahead=Y` 激活中） | **撤下模块**，语义对比归档 `port/dynamic_readahead/NOTES.md`（差异：modsrc 多 lowmem 门 + swapin 增强系；上游独有的 should_fault_around 位图待评估后并入 modsrc 组） |
| port/_kernel_patches（自造 hook 补丁模块）↔ modsrc 引擎（幂等/回滚/四道审计） | **撤下**；F3/F5 的 hook 补齐一律走 **modsrc 新 Batch 组** |
| abk_lp（自研预取）↔ iorap2（上游官方链） | **互斥条款**：iorap2 验收通过后 `iorap.watch=0` 关 abk_lp（防双预取抢 IO）；abk_lp 缺陷修复降级为条件任务 F2-x |
| modsrc 已覆盖的 24 个 hook（含锁系 7 个：mutex_unlock_slowpath/mutex_wakeup_patch/rwsem_wakeup_patch…） | F3 动手前先盘点 modsrc 锁系组语义，防同路径双重补丁；F0 缺失 25 hook 结论复核后仍成立（modsrc 不含那 25 个） |

教训沉淀：后续任何"要移植 X"的判断，先过三轴：上游语料 → 设备 kallsyms → **modsrc registry**。

### F1
（待填）

### F2-F6
（待填）
