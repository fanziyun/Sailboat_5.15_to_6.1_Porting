#!/bin/bash
export LD_LIBRARY_PATH=$HOME/qpkg/usr/lib
export R2_LIBR_PLUGINS=$HOME/qpkg/usr/lib/radare2/6.2.0
export SLEIGHHOME=$HOME/qpkg/usr/lib/radare2/6.2.0/r2ghidra_sleigh
export PATH=$HOME/qpkg/usr/bin:$PATH
export MALLOC_ARENA_MAX=2
export KO_SKIP_PDG=1
export KO_PDF_FALLBACK=1
W=$HOME/r2work
for MOD in mac80211 cfg80211 qca_cld3_kiwi_v2; do
  echo "=== pdf-fallback repair: $MOD ==="
  ~/venv/bin/python $W/bin/ko_repair.py $MOD $W/out $W/tmp 2>&1 | grep -aE "empties|fallback|DONE"
done
echo FALLBACK_DONE
