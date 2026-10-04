#!/bin/bash
# Repair empty bodies for a module
export LD_LIBRARY_PATH=$HOME/qpkg/usr/lib
export R2_LIBR_PLUGINS=$HOME/qpkg/usr/lib/radare2/6.2.0
export SLEIGHHOME=$HOME/qpkg/usr/lib/radare2/6.2.0/r2ghidra_sleigh
export PATH=$HOME/qpkg/usr/bin:$PATH
export MALLOC_ARENA_MAX=2
export KO_RESTART_EVERY=40
W=$HOME/r2work
MOD=$1
# ensure patched+flags exist in tmp (repair reuses them)
if [ ! -s $W/tmp/$MOD.patched.ko ]; then
  ~/venv/bin/python $W/bin/ko_patch.py $W/in/$MOD.ko $W/tmp/$MOD.patched.ko $W/tmp/$MOD.flags.r2 > /dev/null
fi
~/venv/bin/python $W/bin/ko_repair.py $MOD $W/out $W/tmp
