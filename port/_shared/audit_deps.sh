#!/usr/bin/env bash
# F0 依赖全量审计：从上游 .ko 二进制提取全部 tracepoint 依赖 → 对照设备 5.15 kallsyms
# 产出：port/_shared/DEPS_AUDIT.md（内核补齐清单）
# 用法：bash port/_shared/audit_deps.sh [adb序列号]
set -euo pipefail
SER=${1:-14d93093}
KO_DIR="F:/yan13/Downloads/modko-main/ko"
OUT="C:/Users/Administrator/StudioProjects/Sailboat_5.15_to_6.1_Porting/port/_shared/DEPS_AUDIT.md"
MODULES="iorap2 dynamic_readahead millet millet_binder millet_pkg millet_sig millet_hs millet_oem_cgroup os_cpu_qi os_cpu_qs touch_boost mi_reclaim mi_perf_memory unfairmem mi_low_lat_mem scene_swappiness perf_particle mi_io_monitor mi_wq_dynamic_priority iostat_enhance thermal_trace"
# 额外人工点名的非 tracepoint 依赖（已知缺口）
SPECIAL_SYMS="touch_boost:cpuidle_set_allowed_depth"

TMP=$(mktemp -d)
trap 'rm -rf "$TMP"' EXIT

echo "# 内核补齐清单（F0 依赖全量审计）" > "$OUT"
echo "" >> "$OUT"
echo "- 生成：port/_shared/audit_deps.sh（$(date '+%F %T')）" >> "$OUT"
echo "- 方法：从上游 .ko 的 symtab 字符串提取全部 __tracepoint_* 引用 → adb 查设备 5.15.220 kallsyms 符号计数" >> "$OUT"
echo "- 分类：android_vh/android_rvh 前缀 = GKI hook，必须存在于内核；其余（无前缀）多为模块自定义或标准 tracepoint，标注但不强制" >> "$OUT"
echo "" >> "$OUT"

# 汇总所有 hook 名
: > "$TMP/all_hooks.txt"
: > "$TMP/per_mod.tsv"
for m in $MODULES; do
  ko="$KO_DIR/$m.ko"
  [ -f "$ko" ] || { echo -e "$m\t(NO .ko in corpus)" >> "$TMP/per_mod.tsv"; continue; }
  hooks=$(grep -aoE '__tracepoint_[a-zA-Z0-9_]+' "$ko" | sed 's/^__tracepoint_//' | sort -u || true)
  [ -z "$hooks" ] && hooks="(无 tracepoint 引用)"
  echo "$hooks" | while read -r h; do echo -e "$m\t$h" >> "$TMP/per_mod.tsv"; done
  echo "$hooks" | grep -v '^(' >> "$TMP/all_hooks.txt" || true
done
sort -u "$TMP/all_hooks.txt" > "$TMP/uniq_hooks.txt"

# 一次性到设备上查（root kallsyms）
adb -s "$SER" shell "su -c 'cat /proc/kallsyms'" 2>/dev/null | tr -d '\r' > "$TMP/kallsyms.txt"
[ -s "$TMP/kallsyms.txt" ] || { echo "ERROR: kallsyms 拉取失败"; exit 1; }

echo "## 一、hook 存在性总表（设备 5.15.220）" >> "$OUT"
echo "" >> "$OUT"
echo "| hook | 内核符号数 | 分类 |" >> "$OUT"
echo "|---|---:|---|" >> "$OUT"
while read -r h; do
  [ -z "$h" ] && continue
  cnt=$(grep -c "__tracepoint_$h\$" "$TMP/kallsyms.txt" || true)
  case "$h" in
    android_vh_*|android_rvh_*) cls="GKI hook（必须）" ;;
    *) cls="自定义/标准" ;;
  esac
  mark=""
  [ "$cnt" = "0" ] && [ "$cls" = "GKI hook（必须）" ] && mark=" ← **缺失，需补**"
  echo "| \`$h\` | ${cnt} | $cls$mark |" >> "$OUT"
done < "$TMP/uniq_hooks.txt"

echo "" >> "$OUT"
echo "## 二、逐模块依赖矩阵" >> "$OUT"
echo "" >> "$OUT"
echo "| 模块 | hook | 内核有 | 需补 |" >> "$OUT"
echo "|---|---|:-:|:-:|" >> "$OUT"
sort "$TMP/per_mod.tsv" | awk -F'\t' '{print $1"\t"$2}' > "$TMP/per_mod.sorted"
while IFS=$'\t' read -r m h; do
  case "$h" in
    "("*) echo "| $m | $h | - | - |" >> "$OUT"; continue ;;
  esac
  cnt=$(grep -c "__tracepoint_$h\$" "$TMP/kallsyms.txt" || true)
  case "$h" in android_vh_*|android_rvh_*) must=1;; *) must=0;; esac
  if [ "$cnt" -gt 0 ]; then need=""; elif [ "$must" = "1" ]; then need="**是**"; else need="(非GKI)"; fi
  echo "| $m | \`$h\` | $([ "$cnt" -gt 0 ] && echo ✅ || echo ✗) | $need |" >> "$OUT"
done < "$TMP/per_mod.sorted"

echo "" >> "$OUT"
echo "## 三、特殊符号（非 tracepoint 已知依赖）" >> "$OUT"
echo "" >> "$OUT"
echo "| 模块 | 符号 | 内核符号数 |" >> "$OUT"
echo "|---|---|---:|" >> "$OUT"
echo "$SPECIAL_SYMS" | tr ':' '\t' | while IFS=$'\t' read -r m s; do
  [ -z "$s" ] && continue
  cnt=$(grep -c " $s\$" "$TMP/kallsyms.txt" || true)
  echo "| $m | \`$s\` | $cnt |" >> "$OUT"
done

echo "" >> "$OUT"
echo "## 四、说明与边界" >> "$OUT"
echo "" >> "$OUT"
echo "- 本审计只覆盖 tracepoint 与点名符号；**完整符号解析以本地链接为准**（modpost 报未定义符号即真缺口），构建即审计。" >> "$OUT"
echo "- millet 卫星模块的依赖还包括 millet core 导出（register_millet_hook 等），由全家统一重建天然满足。" >> "$OUT"
echo "- 缺失 GKI hook 的补法见 HOME_FEATURES_PLAN.md §1-C 与各模块 NOTES.md。" >> "$OUT"
echo "DONE -> $OUT"
