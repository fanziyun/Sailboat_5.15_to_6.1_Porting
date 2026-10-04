#!/bin/bash
set -e
export LD_LIBRARY_PATH=$HOME/qpkg/usr/lib
export R2_LIBR_PLUGINS=$HOME/qpkg/usr/lib/radare2/6.2.0
export SLEIGHHOME=$HOME/qpkg/usr/lib/radare2/6.2.0/r2ghidra_sleigh
R2=$HOME/qpkg/usr/bin/r2
PROJ=/mnt/c/Users/Administrator/StudioProjects/Sailboat_5.15_to_6.1_Porting
KO=$PROJ/_probe/vendor_ko/boot_stats.ko
W=$HOME/r2work
mkdir -p $W

python3 $PROJ/_probe/ko_patch.py $KO $W/boot_stats.patched.ko $W/boot_stats.flags.r2

echo "=== disasm init_module (relocs.apply=false) ==="
$R2 -q -e scr.color=0 -e bin.relocs.apply=false -i $W/boot_stats.flags.r2 \
    -c 'aaa; pdf @ sym.init_module' $W/boot_stats.patched.ko 2>/dev/null
echo
echo "=== pdg init_module ==="
$R2 -q -e scr.color=0 -e bin.relocs.apply=false -i $W/boot_stats.flags.r2 \
    -c 'aaa; pdg @ sym.init_module' $W/boot_stats.patched.ko 2>/dev/null
