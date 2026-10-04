#!/bin/bash
# mac80211 sharded v3: 4 workers (mem-bound), session recycle, timeout, MALLOC_ARENA_MAX.
export LD_LIBRARY_PATH=$HOME/qpkg/usr/lib
export R2_LIBR_PLUGINS=$HOME/qpkg/usr/lib/radare2/6.2.0
export SLEIGHHOME=$HOME/qpkg/usr/lib/radare2/6.2.0/r2ghidra_sleigh
export PATH=$HOME/qpkg/usr/bin:$PATH
export MALLOC_ARENA_MAX=2
export KO_RESTART_EVERY=60
export W=$HOME/r2work

pkill -f "ko_decompile.py" 2>/dev/null
pkill -f "mac80211.patched" 2>/dev/null
sleep 3

run_shard() {
  i=$1
  [ -s $W/out/mac80211.shard$(printf %02d $i).pdg.c ] && { echo "SKIP shard$i"; return 0; }
  mkdir -p /dev/shm/kos$i
  KO_SHARD=$i/10 timeout 10800 ~/venv/bin/python $W/bin/ko_decompile.py \
    $W/in/mac80211.ko $W/out /dev/shm/kos$i > $W/log/mac80211_s$i.log 2>&1
  rc=$?
  rm -rf /dev/shm/kos$i
  echo "RC=$rc shard$i"
}
export -f run_shard

MISSING=""
for i in 0 1 2 3 4 5 6 7 8 9; do
  [ -s $W/out/mac80211.shard$(printf %02d $i).pdg.c ] || MISSING="$MISSING $i"
done
echo "missing shards:$MISSING"
echo $MISSING | xargs -P 4 -n1 bash -c 'run_shard "$@"' _
~/venv/bin/python $W/bin/merge_shards.py $W/out mac80211
echo "MAC80211_DONE"
free -m | head -2
