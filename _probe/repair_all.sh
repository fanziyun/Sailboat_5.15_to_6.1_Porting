#!/bin/bash
# Repair all modules that still have empty bodies, sequentially
export LD_LIBRARY_PATH=$HOME/qpkg/usr/lib
export R2_LIBR_PLUGINS=$HOME/qpkg/usr/lib/radare2/6.2.0
export SLEIGHHOME=$HOME/qpkg/usr/lib/radare2/6.2.0/r2ghidra_sleigh
export PATH=$HOME/qpkg/usr/bin:$PATH
export MALLOC_ARENA_MAX=2
export KO_RESTART_EVERY=40
W=$HOME/r2work
for MOD in mac80211 cfg80211 camera ipam migt pmic-pon-log qca_cld3_kiwi_v2 rmnet_shs usb_bam xm_power; do
  n=$(grep -c "// (empty)" $W/out/$MOD.pdg.c 2>/dev/null || echo 0)
  if [ "${n:-0}" -eq 0 ]; then
    echo "SKIP $MOD (no empties)"
    continue
  fi
  if [ ! -s $W/tmp/$MOD.patched.ko ]; then
    ~/venv/bin/python $W/bin/ko_patch.py $W/in/$MOD.ko $W/tmp/$MOD.patched.ko $W/tmp/$MOD.flags.r2 > /dev/null
  fi
  echo "=== repair $MOD ($n empties) ==="
  ~/venv/bin/python $W/bin/ko_repair.py $MOD $W/out $W/tmp
done
echo "ALL_REPAIRS_DONE"
