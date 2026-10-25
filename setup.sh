#!/usr/bin/env bash
# homeport 套件分发器：按 ABK_MODULE_CHILD_ID 转发到 port/<name>/setup.sh
# CI（ABK）与本地（ci-build-parity 构建器）共用同一契约
set -euo pipefail
SUITE_DIR="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)"
[ -f "$SUITE_DIR/module.conf" ] && source "$SUITE_DIR/module.conf"

CHILD="${ABK_MODULE_CHILD_ID:-}"
STAGE="${CUSTOM_EXTERNAL_MODULE_STAGE:-after_patch}"

case "$CHILD" in
  homeport_iorap2)      SUB="port/iorap2" ;;
  homeport_millet)      SUB="port/millet" ;;
  homeport_os_cpu_qi)   SUB="port/os_cpu_qi" ;;
  homeport_os_cpu_qs)   SUB="port/os_cpu_qs" ;;
  homeport_touch_boost) SUB="port/touch_boost" ;;
  "")  # 无 child（旧 module: 形态指派到套件根）→ 跑 iorap2（默认主力模块）
       SUB="port/iorap2" ;;
  *) echo "[homeport-suite] unknown child: $CHILD" >&2; exit 1 ;;
esac

echo "[homeport-suite] dispatch child=$CHILD stage=$STAGE -> $SUB"
export CUSTOM_EXTERNAL_MODULE_STAGE="$STAGE"
exec bash "$SUITE_DIR/$SUB/setup.sh"
