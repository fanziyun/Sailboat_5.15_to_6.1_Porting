#!/bin/bash
export LD_LIBRARY_PATH=$HOME/qpkg/usr/lib
export R2_LIBR_PLUGINS=$HOME/qpkg/usr/lib/radare2/6.2.0
export SLEIGHHOME=$HOME/qpkg/usr/lib/radare2/6.2.0/r2ghidra_sleigh
export PATH=$HOME/qpkg/usr/bin:$PATH
W=$HOME/r2work
CP=/mnt/c/Users/Administrator/StudioProjects/Sailboat_5.15_to_6.1_Porting/_probe/classify_skipped.py
for m in rmnet_aps cdsprm xlogchar; do
  [ -s $W/tmp/$m.patched.ko ] || ~/venv/bin/python $W/bin/ko_patch.py $W/in/$m.ko $W/tmp/$m.patched.ko $W/tmp/$m.flags.r2 >/dev/null
done
for m in rmnet_aps cdsprm xlogchar; do
  echo "=== $m ==="
  ~/venv/bin/python $CP $W/in/$m.ko
done
