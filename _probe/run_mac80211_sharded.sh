#!/bin/bash
# mac80211 sharded: kill single run, 10 parallel r2 sessions by function index, merge.
export LD_LIBRARY_PATH=$HOME/qpkg/usr/lib
export R2_LIBR_PLUGINS=$HOME/qpkg/usr/lib/radare2/6.2.0
export SLEIGHHOME=$HOME/qpkg/usr/lib/radare2/6.2.0/r2ghidra_sleigh
export PATH=$HOME/qpkg/usr/bin:$PATH
export W=$HOME/r2work

pkill -f "ko_decompile.py.*mac80211" 2>/dev/null
sleep 2
cp /mnt/c/Users/Administrator/StudioProjects/Sailboat_5.15_to_6.1_Porting/_probe/ko_decompile.py \
   /mnt/c/Users/Administrator/StudioProjects/Sailboat_5.15_to_6.1_Porting/_probe/merge_shards.py $W/bin/
rm -f $W/out/mac80211.pdg.c $W/out/mac80211.meta.json $W/out/mac80211.shard*

run_shard() {
  i=$1
  KO_SHARD=$i/10 timeout 7200 ~/venv/bin/python $W/bin/ko_decompile.py \
    $W/in/mac80211.ko $W/out $W/tmp > $W/log/mac80211_s$i.log 2>&1
  echo "RC=$? shard$i"
}
export -f run_shard

seq 0 9 | xargs -P 10 -I{} bash -c 'run_shard "$@"' _ {}
~/venv/bin/python $W/bin/merge_shards.py $W/out mac80211
echo "MAC80211_DONE"
