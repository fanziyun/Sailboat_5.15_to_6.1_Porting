#!/usr/bin/env bash
# ci-build-parity 契约：after_patch 接入内核树，before_build 打开 CONFIG
set -euo pipefail
MODULE_DIR="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)"
[ -f "$MODULE_DIR/module.conf" ] && source "$MODULE_DIR/module.conf"

MOD_NAME="mi_wq_dynamic_priority"
MOD_CFG="HOMEPORT_MI_WQ_DYNAMIC_PRIORITY"
TREE_BASE="${KERNEL_ROOT:?KERNEL_ROOT not set}/drivers/misc/homeport"

log() { echo "[homeport/$MOD_NAME] $*"; }

wire_tree() {
  # 幂等：拷贝 src + Kbuild 到内核树，并在 drivers/misc 挂 homeport/ 总开关
  mkdir -p "$TREE_BASE/$MOD_NAME"
  cp -a "$MODULE_DIR/src/." "$TREE_BASE/$MOD_NAME/"
  cp "$MODULE_DIR/Kbuild" "$TREE_BASE/$MOD_NAME/Kbuild"
  local mm="${KERNEL_ROOT}/drivers/misc/Makefile"
  local kk="${KERNEL_ROOT}/drivers/misc/Kconfig"
  grep -q 'homeport' "$mm" 2>/dev/null || echo 'obj-y += homeport/' >> "$mm"
  grep -q 'HOMEPORT_MENU' "$kk" 2>/dev/null || cat >> "$kk" <<KCFG

menu "HOMEPORT_MENU"
config HOMEPORT_MENU
	bool "homeport ported features"
	default y
source "drivers/misc/homeport/Kconfig"
endmenu
KCFG
  local hk="$TREE_BASE/Kconfig"
  [ -f "$hk" ] || echo 'menu "homeport modules"' > "$hk"
  grep -q "config $MOD_CFG" "$hk" || cat >> "$hk" <<KCFG2

config HOMEPORT_MI_WQ_DYNAMIC_PRIORITY
	tristate "homeport mi_wq_dynamic_priority"
	depends on HOMEPORT_MENU
	default m
KCFG2
  log "wired into $TREE_BASE/$MOD_NAME"
}

enable_cfg() {
  # 幂等：写入 defconfig
  local dc="${DEFCONFIG:?DEFCONFIG not set}"
  grep -q "^CONFIG_$MOD_CFG=" "$dc" 2>/dev/null || echo "CONFIG_$MOD_CFG=m" >> "$dc"
  log "CONFIG_$MOD_CFG=m -> $dc"
}

case "${CUSTOM_EXTERNAL_MODULE_STAGE:-}" in
  after_patch)  wire_tree ;;
  before_build) enable_cfg ;;
  *) echo "unsupported stage: $CUSTOM_EXTERNAL_MODULE_STAGE" >&2; exit 1 ;;
esac
log "done stage=$CUSTOM_EXTERNAL_MODULE_STAGE"
