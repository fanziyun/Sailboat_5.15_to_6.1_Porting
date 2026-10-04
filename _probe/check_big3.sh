#!/bin/bash
echo "=== qca meta ==="
head -c 300 ~/r2work/out/qca_cld3_kiwi_v2.meta.json 2>/dev/null; echo
echo "=== pdg.c sizes ==="
ls -la ~/r2work/out/qca_cld3_kiwi_v2.pdg.c 2>/dev/null
echo "=== cpu of running workers ==="
for m in cfg80211 mac80211 msm_kgsl; do
  pid=$(pgrep -f "ko_decompile.py.*$m.ko" | head -1)
  [ -n "$pid" ] && ps -o pid=,etime=,time=,%cpu= -p "$pid"
done
