#!/bin/bash
# usage: collect_monsters.sh <outdir> <in.ko> <outlist> <module>
OUT=$1; KO=$2; LIST=$3; MOD=$4
BASE=${KO%.ko}
if [ ! -s "$BASE.patched.ko" ]; then
  ~/venv/bin/python ~/r2work/bin/ko_patch.py "$KO" "$BASE.patched.ko" "$BASE.flags.r2"
fi
grep -h -B1 "SKIPPED-TOOBIG" $OUT/$MOD.shard*.pdg.c 2>/dev/null \
  | grep "^// =====" \
  | sed -E 's|^// ===== (.*) @ 0x([0-9a-fA-F]+) .*|\2 \1|' \
  | sort -u > "$LIST"
wc -l < "$LIST"
