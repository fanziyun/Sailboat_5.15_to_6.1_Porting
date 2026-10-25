#!/usr/bin/env bash
# homeport 内核 hook/API 补齐（after_patch 阶段，幂等编辑 $KERNEL_ROOT/common）
# 纯补丁模块：无 src/ 无 Kbuild，不参与 wire_tree
set -euo pipefail
MODULE_DIR="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)"
[ -f "$MODULE_DIR/module.conf" ] && source "$MODULE_DIR/module.conf"

K="${KERNEL_ROOT:?KERNEL_ROOT not set}/common"
MM_H="$K/include/trace/hooks/mm.h"
VH_C="$K/drivers/android/vendor_hooks.c"

log() { echo "[homeport/kernel-patches] $*"; }

declare_hook() { # $1=头文件 $2=锚点(grep -F) $3=声明文本
  local h="$1" anchor="$2" decl="$3"
  local first; first="$(echo "$decl" | head -1)"
  grep -qF "$first" "$h" 2>/dev/null && { log "already: $(echo "$first" | sed 's/DECLARE_HOOK(//;s/,.*//')"; return 0; }
  awk -v anchor="$anchor" -v decl="$decl" '
    index($0, anchor) && !done { print; print decl; done=1; next }
    { print }' "$h" > "$h.tmp" && mv "$h.tmp" "$h"
  log "DECLARE_HOOK added -> $h"
}

export_hook() { # $1=hook 名（追加到 vendor_hooks.c 尾部）
  grep -q "EXPORT_TRACEPOINT_SYMBOL_GPL($1);" "$VH_C" && { log "already exported: $1"; return 0; }
  echo "EXPORT_TRACEPOINT_SYMBOL_GPL($1);" >> "$VH_C"
  log "EXPORT added: $1"
}

hook_page_cache_ra_order_bypass() {
  # F0: dynamic_readahead 依赖。5.15 无 page_cache_ra_order 路径（大页预读 6.1 才有），
  # 故仅定义+导出（模块绑载不报错，特性天然 inert）。签名由本移植自定义并与模块对齐。
  declare_hook "$MM_H" "TP_ARGS(ractl, max_page));" \
'DECLARE_HOOK(android_vh_page_cache_ra_order_bypass,
	TP_PROTO(struct file *file, struct file_ra_state *ra, bool *bypass),
	TP_ARGS(file, ra, bypass));'
  export_hook android_vh_page_cache_ra_order_bypass
}

apply_all() {
  hook_page_cache_ra_order_bypass
  # 后续 hook 按阶段追加：F3 锁事件系 / F5 内存系（逐 hook 独立可回滚）
  log "all patches applied (idempotent)"
}

case "${CUSTOM_EXTERNAL_MODULE_STAGE:-}" in
  after_patch) apply_all ;;
  before_build) log "nothing to do at before_build" ;;
  *) echo "unsupported stage: $CUSTOM_EXTERNAL_MODULE_STAGE" >&2; exit 1 ;;
esac
log "done stage=$CUSTOM_EXTERNAL_MODULE_STAGE"
