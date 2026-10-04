#!/bin/bash
export LD_LIBRARY_PATH=$HOME/qpkg/usr/lib
export R2_LIBR_PLUGINS=$HOME/qpkg/usr/lib/radare2/6.2.0
export SLEIGHHOME=$HOME/qpkg/usr/lib/radare2/6.2.0/r2ghidra_sleigh
export PATH=$HOME/qpkg/usr/bin:$PATH
W=$HOME/r2work
if [ ! -s $W/tmp/ipam.patched.ko ]; then
  ~/venv/bin/python $W/bin/ko_patch.py $W/in/ipam.ko $W/tmp/ipam.patched.ko $W/tmp/ipam.flags.r2 > /dev/null
fi
for a in 0x08155098 0x0815506c; do
  echo "=== $a ==="
  ~/qpkg/usr/bin/r2 -q -e scr.color=0 -e bin.relocs.apply=false -i $W/tmp/ipam.flags.r2 \
    -c "aaa; f~ @$a; s $a; pd 4; aflj~?$a" $W/tmp/ipam.patched.ko 2>/dev/null | head -12
done
