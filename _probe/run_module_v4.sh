#!/bin/bash
# Generic two-pass decompile for one module (parameterized v4)
# usage: run_module_v4.sh <module>
export LD_LIBRARY_PATH=$HOME/qpkg/usr/lib
export R2_LIBR_PLUGINS=$HOME/qpkg/usr/lib/radare2/6.2.0
export SLEIGHHOME=$HOME/qpkg/usr/lib/radare2/6.2.0/r2ghidra_sleigh
export PATH=$HOME/qpkg/usr/bin:$PATH
export MALLOC_ARENA_MAX=2
export KO_RESTART_EVERY=40
export KO_MAX_FUNC_SIZE=8192
export W=$HOME/r2work
export MOD=$1

pkill -f "ko_decompile.py" 2>/dev/null
pkill -f "$MOD.patched" 2>/dev/null
sleep 2
cp /mnt/c/Users/Administrator/StudioProjects/Sailboat_5.15_to_6.1_Porting/_probe/ko_decompile.py \
   /mnt/c/Users/Administrator/StudioProjects/Sailboat_5.15_to_6.1_Porting/_probe/merge_shards.py \
   /mnt/c/Users/Administrator/StudioProjects/Sailboat_5.15_to_6.1_Porting/_probe/collect_monsters.sh \
   $W/bin/
rm -f $W/out/$MOD.shard* $W/out/$MOD.big* $W/out/$MOD.pdg.c $W/out/$MOD.meta.json

run_shard() {
  i=$1
  mkdir -p /dev/shm/kos$i
  KO_SHARD=$i/10 timeout 10800 ~/venv/bin/python $W/bin/ko_decompile.py \
    $W/in/$MOD.ko $W/out /dev/shm/kos$i > $W/log/${MOD}_s$i.log 2>&1
  echo "RC=$? shard$i"
  rm -rf /dev/shm/kos$i
}
export -f run_shard

echo "=== pass A: $MOD small functions ==="
seq 0 9 | xargs -P 5 -n1 bash -c 'run_shard "$@"' _

echo "=== pass B: $MOD monsters ==="
$W/bin/collect_monsters.sh $W/out $W/tmp/$MOD.patched.ko $W/${MOD}_monsters

run_monster() {
  line="$1"
  addr=$(echo "$line" | cut -d" " -f1)
  nm=$(echo "$line" | cut -d" " -f2-)
  out=$W/out/$MOD.big_0x$addr.pdg.c
  [ -s "$out" ] && return 0
  res=$(timeout 900 ~/qpkg/usr/bin/r2 -q -e bin.relocs.apply=false -e scr.color=0 \
        -e scr.html=0 -e scr.prompt=0 \
        -c ". $W/tmp/$MOD.flags.r2" -c "af @ 0x$addr" -c "pdg @ 0x$addr" \
        $W/tmp/$MOD.patched.ko 2>/dev/null)
  rc=$?
  {
    echo "// ===== $nm @ 0x$addr ====="
    if [ $rc -eq 124 ]; then
      echo "// FAILED: OS timeout 900s (function too heavy for Ghidra)"
    else
      echo "$res"
    fi
  } > "$out"
  echo "monster 0x$addr rc=$rc"
}
export -f run_monster

if [ -s $W/${MOD}_monsters ]; then
  cat $W/${MOD}_monsters | xargs -P 3 -I{} bash -c 'run_monster "$@"' _ {}
fi

echo "=== merge $MOD ==="
~/venv/bin/python $W/bin/merge_shards.py $W/out $MOD
echo "${MOD}_DONE"
free -m | head -2
