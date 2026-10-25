#!/usr/bin/env bash
# 生成 port/ 模块骨架（幂等）。数据表内嵌，重跑覆盖模板文件但不动 src/。
set -euo pipefail
ROOT="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")/.." && pwd)"
CORPUS="F:/yan13/Downloads/modko-main/decompiled"   # 上游语料（只读引用）

# name|config|funcs|阶段|依赖行(多行用\\n)|要点(多行用\\n)
cat > "$ROOT/_shared/modules.tsv" <<'EOF'
iorap2	HOMEPORT_IORAP2	40	F2	6/6 hook 已验证在 5.15 kallsyms（各4符号）：\n- android_vh_filemap_read（读文件采集）\n- android_vh_filemap_map_pages（缺页采集）\n- android_vh_do_async_mmap_readahead\n- android_vh_should_fault_around\n- android_vh_tune_mmap_readaround\n- android_vh_ra_tuning_max_page	设备接口：/dev/iorap_dev（chrdev，register_chrdev+device_create）\nioctl 协议：_IOWR('K',1,264)=启动采集(含包名)、('K',3,264)=清除、('K',5,264)、('K',7,264)、_IOR('L',20,4)=版本查询\n调试接口：/proc/iorap_node/collect（只读：版本/内存/app列表[包名,uid,文件数,mm size]）\n关键函数：mi_lb_ioctl、mi_lb_dealwith_collect_cmd、is_real_timing_package、mi_lb_add_package_info、Hint_Prefetch、lb_cold_exit(unregister全表)\n构建：DEFAULT_SYMBOL_NAMESPACE=VFS_internal\nF2 第一步：在 ~/k515 探测 VFS_internal 命名空间符号可见性
dynamic_readahead	HOMEPORT_DYNAMIC_READAHEAD	9	F0/F2	1/1：android_vh_ra_tuning_max_page（adjust_readahead 回调）	自调节 filemap 读窗口。9 函数最小模块，用作 F0 管线打通样板。\ninit 注册/exit 注销同一 tracepoint（pdg.c 234/262 行）
millet	HOMEPORT_MILLET	70(6模块)	F4	通信：netlink 0x1E（__netlink_kernel_create(init_net,0x1e)）\n接口：/proc/millet/{millet_stat(读统计+写1清零),version}\n版本："1"（与上游一致，排除版本号不匹配）	全家重建：core(32)+binder(12)+pkg(12)+sig(5)+hs(6)+oem_cgroup(3)\n背景：设备 vermeer 版已载但 0 喂数（实测 send=0/uid_rec 空/无 netlink socket；\n重启 millet_monitor+system_server 后消息恢复但 363 条全败 → 协议代差）\nnetlink family 上游同为 0x1e，不变；对齐握手与消息结构（newversion）\n卫星经 register_millet_hook 注入 core → 全家统一重建避免两代 ABI 失配\n关键导出：register_millet_hook/unregister_millet_hook/millet_sendto_user/millet_sendmsg/init_millet_subsystem
os_cpu_qi	HOMEPORT_OS_CPU_QI	376	F3	抽查 5/5 在（完整核对为 F3 首任务）：\n- android_vh_alter_mutex_list_add\n- android_vh_alter_rwsem_list_add\n- android_vh_binder_buffer_release\n- android_vh_binder_proc_transaction\n- android_vh_binder_restore_priority	binder/mutex/rwsem 优先级继承 = setAsyncBinderVIPTaskIfNeeded 内核端，桌面价值最高。\n前置：与已载 binder_prio（MIUI 自有 binder hooks）重叠分析，防双重优先级操纵\n376 函数为语料最大模块，分批还原（hook 回调类→策略类→接口类）
os_cpu_qs	HOMEPORT_OS_CPU_QS	121	F3	抽查 3/3 在：android_vh_binder_preset、android_vh_rwsem_lock_released、android_vh_rwsem_read_wait_start	rwsem 等待/释放调度 + binder preset。与 os_cpu_qi 同批评估
touch_boost	HOMEPORT_TOUCH_BOOST	35	F5	缺失 1：cpuidle_set_allowed_depth（5.15 kallsyms 0 符号）→ 按上游在内核补 API+导出\n已有：__tracepoint_irq_handler_entry（标准，✅）	touch IRQ→CPU 提频。自含 tracepoint：freq/idle_boost_start/end\nsysfs 组属性：unboost_freq_cpu、unboost_idle_cpu、irq_config、irq_num_max\n导出符号：idle_boost_start/idle_boost_end/freq_boost_start/freq_boost_end
mi_reclaim	HOMEPORT_MI_RECLAIM	37	F5	缺 4：alloc_pages_slowpath_start、alloc_pages_slowpath_end、direct_reclaim_end、throttle_direct_reclaim_bypass\n已有 10：alloc_pages_reclaim_bypass、customize_alloc_gfp、drain_all_pages_bypass、free_task、mmput、tune_swappiness、unreserve_highatomic_bypass、shrink_slab_bypass、tune_scan_type、alloc_pages_reclaim_bypass	主动内存回收。hook 补法：~/k515 的 mm/page_alloc.c 慢路径起止、mm/vmscan.c direct_reclaim 结束与 throttle 点，按 6.1 GKI 位置加 tracepoint 定义+调用点+EXPORT_TRACEPOINT_SYMBOL_GPL；每 hook 独立 commit + QEMU 启动验证
mi_perf_memory	HOMEPORT_MI_PERF_MEMORY	22	F5	缺 1：throttle_direct_reclaim_bypass\n已有 2：shrink_slab_bypass、tune_scan_type	内存性能监控/治理
unfairmem	HOMEPORT_UNFAIRMEM	12	F5	缺 1：get_page_wmark\n已有 1：shrink_slab_bypass	非公平内存分配
mi_low_lat_mem	HOMEPORT_MI_LOW_LAT_MEM	112	F5	缺多数：rvh_try_alloc_pages_gfp、compact_bypass、dma_heap_buffer_alloc_lat_start/end、cma_alloc_lat_start/end、mm_direct_reclaim_start/end\n已有抽查：alloc_pages_reclaim_bypass、cma_alloc_bypass、mem_cgroup_alloc、alloc_pages_slowpath 系列部分	低延迟内存（CMA/dma_heap 时延路径）。C 类最重：先完整审计（F0 脚本）再定 hook 补齐顺序
scene_swappiness	HOMEPORT_SCENE_SWAPPINESS	8	F6	1/1：android_vh_tune_swappiness	场景化 swappiness，8 函数小模块
perf_particle	HOMEPORT_PERF_PARTICLE	36	F6	1/1：android_rvh_schedule	perf 粒子
mi_io_monitor	HOMEPORT_MI_IO_MONITOR	70	F6	2/2：android_vh_ufs_send_command、android_vh_ufs_compl_command	UFS IO 监控
mi_wq_dynamic_priority	HOMEPORT_MI_WQ_DYNAMIC_PRIORITY	11	F6	4/4：android_rvh_alloc_and_link_pwqs、android_rvh_create_worker、android_vh_blk_mq_delay_run_hw_queue、android_vh_blk_mq_kick_requeue_list	workqueue 动态优先级
iostat_enhance	HOMEPORT_IOSTAT_ENHANCE	19	F6	无 vh hook（自含/接口型）	IO 统计增强
thermal_trace	HOMEPORT_THERMAL_TRACE	7	F6	无 vh hook	thermal trace 辅助；thermal_perf_limits 提供者候选之一（待证）
EOF

gen_module() {
  local name="$1" cfg="$2" funcs="$3" phase="$4" deps="$5" notes="$6"
  local d="$ROOT/$name"
  mkdir -p "$d/src"

  cat > "$d/module.conf" <<EOF
ABK_MODULE_ID="${cfg,,}"
ABK_MODULE_NAME="homeport ${name}"
ABK_MODULE_VERSION="0.1.0"
ABK_MODULE_REPO_URL="local"
ABK_MODULE_SUPPORTED_STAGES="after_patch,before_build"
ABK_MODULE_DEFAULT_STAGE="after_patch"
EOF

  cat > "$d/setup.sh" <<EOF
#!/usr/bin/env bash
# ci-build-parity 契约：after_patch 接入内核树，before_build 打开 CONFIG
set -euo pipefail
MODULE_DIR="\$(cd -- "\$(dirname -- "\${BASH_SOURCE[0]}")" && pwd)"
[ -f "\$MODULE_DIR/module.conf" ] && source "\$MODULE_DIR/module.conf"

MOD_NAME="${name}"
MOD_CFG="${cfg}"
TREE_BASE="\${KERNEL_ROOT:?KERNEL_ROOT not set}/drivers/misc/homeport"

log() { echo "[homeport/\$MOD_NAME] \$*"; }

wire_tree() {
  # 幂等：拷贝 src + Kbuild 到内核树，并在 drivers/misc 挂 homeport/ 总开关
  mkdir -p "\$TREE_BASE/\$MOD_NAME"
  cp -a "\$MODULE_DIR/src/." "\$TREE_BASE/\$MOD_NAME/"
  cp "\$MODULE_DIR/Kbuild" "\$TREE_BASE/\$MOD_NAME/Kbuild"
  local mm="\${KERNEL_ROOT}/drivers/misc/Makefile"
  local kk="\${KERNEL_ROOT}/drivers/misc/Kconfig"
  grep -q 'homeport' "\$mm" 2>/dev/null || echo 'obj-y += homeport/' >> "\$mm"
  grep -q 'HOMEPORT_MENU' "\$kk" 2>/dev/null || cat >> "\$kk" <<KCFG

menu "HOMEPORT_MENU"
config HOMEPORT_MENU
	bool "homeport ported features"
	default y
source "drivers/misc/homeport/Kconfig"
endmenu
KCFG
  local hk="\$TREE_BASE/Kconfig"
  [ -f "\$hk" ] || echo 'menu "homeport modules"' > "\$hk"
  grep -q "config \$MOD_CFG" "\$hk" || cat >> "\$hk" <<KCFG2

config ${cfg}
	tristate "homeport ${name}"
	depends on HOMEPORT_MENU
	default m
KCFG2
  log "wired into \$TREE_BASE/\$MOD_NAME"
}

enable_cfg() {
  # 幂等：写入 defconfig
  local dc="\${DEFCONFIG:?DEFCONFIG not set}"
  grep -q "^CONFIG_\$MOD_CFG=" "\$dc" 2>/dev/null || echo "CONFIG_\$MOD_CFG=m" >> "\$dc"
  log "CONFIG_\$MOD_CFG=m -> \$dc"
}

case "\${CUSTOM_EXTERNAL_MODULE_STAGE:-}" in
  after_patch)  wire_tree ;;
  before_build) enable_cfg ;;
  *) echo "unsupported stage: \$CUSTOM_EXTERNAL_MODULE_STAGE" >&2; exit 1 ;;
esac
log "done stage=\$CUSTOM_EXTERNAL_MODULE_STAGE"
EOF
  chmod +x "$d/setup.sh"

  cat > "$d/Kbuild" <<EOF
# homeport/${name} —— obj 名与真实源文件列表在实现阶段填充
obj-\$(CONFIG_${cfg}) += ${name}.o
# ${name}-y := src/xxx.o ...
EOF

  printf '%b\n' "$deps" > "$d/.deps.tmp"
  printf '%b\n' "$notes" > "$d/.notes.tmp"
  cat > "$d/NOTES.md" <<EOF
# ${name} 移植笔记

- 上游反编译源：\`modko-main/decompiled/${name}.pdg.c\`（${funcs} 函数）+ \`${name}.meta.json\`（reloc/GOT/thunk 统计，结构体偏移交叉核对用）
- 计划阶段：**${phase}**（见 HOME_FEATURES_PLAN.md §3）
- 依赖状态（对照设备 5.15.220 kallsyms，2026-10-26 实测）：

\`\`\`
EOF
  cat "$d/.deps.tmp" >> "$d/NOTES.md"
  cat >> "$d/NOTES.md" <<EOF
\`\`\`

## 还原要点

EOF
  cat "$d/.notes.tmp" >> "$d/NOTES.md"
  cat >> "$d/NOTES.md" <<EOF

## 实现进度

- [ ] src/ 逐函数还原（pdg.c 行号映射在实现时逐条补进本文件）
- [ ] 结构体/常量与 meta.json reloc 交叉核对
- [ ] 构建（_shared/BUILD.md）+ 第 6 级加载验证
- [ ] 专项验收（脚本与判据见 HOME_FEATURES_PLAN.md §5）
EOF
  rm -f "$d/.deps.tmp" "$d/.notes.tmp"
}

# 逐行读取 TSV（deps/notes 内含字面 \n，由 gen_module 的 printf '%b' 展开）
while IFS=$'\t' read -r name cfg funcs phase deps notes; do
  [ -z "${name:-}" ] && continue
  gen_module "$name" "$cfg" "$funcs" "$phase" "$deps" "$notes"
done < "$ROOT/_shared/modules.tsv"

cat > "$ROOT/.gitattributes" <<'EOF'
*.sh text eol=lf
Kbuild text eol=lf
EOF

echo "skeleton done: $(ls -d "$ROOT"/*/ | wc -l) module dirs"
