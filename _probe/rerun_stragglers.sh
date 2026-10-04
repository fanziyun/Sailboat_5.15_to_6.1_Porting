#!/bin/bash
# Rerun the 3 stragglers with a 4h timeout each, 3 parallel (they get dedicated cores)
export LD_LIBRARY_PATH=$HOME/qpkg/usr/lib
export R2_LIBR_PLUGINS=$HOME/qpkg/usr/lib/radare2/6.2.0
export SLEIGHHOME=$HOME/qpkg/usr/lib/radare2/6.2.0/r2ghidra_sleigh
export PATH=$HOME/qpkg/usr/bin:$PATH

pkill -f "ko_decompile.py" 2>/dev/null
sleep 2
for m in cfg80211 mac80211 msm_kgsl; do
  rm -f ~/r2work/out/$m.pdg.c ~/r2work/out/$m.meta.json
done

run_one() {
  m=$1
  timeout 14400 ~/venv/bin/python ~/r2work/bin/ko_decompile.py ~/r2work/in/$m.ko ~/r2work/out ~/r2work/tmp \
    > ~/r2work/log/$m.log 2>&1
  echo "RC=$? $m"
}
export -f run_one
printf "%s\n" cfg80211 mac80211 msm_kgsl | xargs -P 3 -I{} bash -c 'run_one "$@"' _ {}
echo "RERUN_DONE"
