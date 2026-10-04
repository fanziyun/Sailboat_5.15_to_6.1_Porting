#!/bin/bash
export LD_LIBRARY_PATH=$HOME/qpkg/usr/lib
export R2_LIBR_PLUGINS=$HOME/qpkg/usr/lib/radare2/6.2.0
export SLEIGHHOME=$HOME/qpkg/usr/lib/radare2/6.2.0/r2ghidra_sleigh
export PATH=$HOME/qpkg/usr/bin:$PATH
PROJ=/mnt/c/Users/Administrator/StudioProjects/Sailboat_5.15_to_6.1_Porting

echo "=== ko_patch direct ==="
~/venv/bin/python $PROJ/_probe/ko_patch.py ~/r2work/in/boot_stats.ko /tmp/bs.patched.ko /tmp/bs.flags.r2
echo "rc=$?"
