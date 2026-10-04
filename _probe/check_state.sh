#!/bin/bash
echo "=== running ko_decompile / radare2 procs ==="
ps -eo pid,ppid,etime,time,args | grep -E "ko_decompile|radare2" | grep -v grep
echo "=== missing meta ==="
for ko in ~/r2work/in/*.ko; do
  n=$(basename "$ko" .ko)
  [ -f ~/r2work/out/$n.meta.json ] || echo "$n"
done
echo "=== rerun task still alive? ==="
pgrep -fa "rerun_stragglers" || echo "rerun script gone"
