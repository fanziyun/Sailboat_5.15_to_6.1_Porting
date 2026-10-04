#!/bin/bash
# Batch-decompile all vendor .ko modules with r2ghidra.
# Idempotent: skips modules that already have both output files.
export LD_LIBRARY_PATH=$HOME/qpkg/usr/lib
export R2_LIBR_PLUGINS=$HOME/qpkg/usr/lib/radare2/6.2.0
export SLEIGHHOME=$HOME/qpkg/usr/lib/radare2/6.2.0/r2ghidra_sleigh
export PATH=$HOME/qpkg/usr/bin:$PATH
PROJ=/mnt/c/Users/Administrator/StudioProjects/Sailboat_5.15_to_6.1_Porting

mkdir -p ~/r2work/in ~/r2work/out ~/r2work/log ~/r2work/tmp ~/r2work/bin
cp $PROJ/_probe/ko_patch.py $PROJ/_probe/ko_decompile.py ~/r2work/bin/
echo "copying 293 .ko from vendor_ko ..."
cp -u $PROJ/_probe/vendor_ko/*.ko ~/r2work/in/
ls ~/r2work/in/*.ko | wc -l

run_one() {
  ko="$1"
  name=$(basename "$ko" .ko)
  if [ -s ~/r2work/out/"$name".pdg.c ] && [ -s ~/r2work/out/"$name".meta.json ]; then
    echo "SKIP $name"
    return 0
  fi
  timeout 3600 ~/venv/bin/python ~/r2work/bin/ko_decompile.py "$ko" ~/r2work/out ~/r2work/tmp \
    > ~/r2work/log/"$name".log 2>&1
  echo "RC=$? $name"
}
export -f run_one

ls ~/r2work/in/*.ko | xargs -P 8 -I{} bash -c 'run_one "$@"' _ {}
echo "ALL_DONE"
