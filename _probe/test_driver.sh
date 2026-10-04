#!/bin/bash
export LD_LIBRARY_PATH=$HOME/qpkg/usr/lib
export R2_LIBR_PLUGINS=$HOME/qpkg/usr/lib/radare2/6.2.0
export SLEIGHHOME=$HOME/qpkg/usr/lib/radare2/6.2.0/r2ghidra_sleigh
export PATH=$HOME/qpkg/usr/bin:$PATH
PROJ=/mnt/c/Users/Administrator/StudioProjects/Sailboat_5.15_to_6.1_Porting
mkdir -p ~/r2work/in ~/r2work/out ~/r2work/log ~/r2work/tmp ~/r2work/bin
# scripts copied to ext4: /mnt/c (9p) can serve stale file content
cp $PROJ/_probe/ko_patch.py $PROJ/_probe/ko_decompile.py ~/r2work/bin/
cp -n $PROJ/_probe/vendor_ko/boot_stats.ko ~/r2work/in/ 2>/dev/null || true
rm -f ~/r2work/out/boot_stats.*
time ~/venv/bin/python ~/r2work/bin/ko_decompile.py ~/r2work/in/boot_stats.ko ~/r2work/out ~/r2work/tmp
echo "=== output head ==="
head -45 ~/r2work/out/boot_stats.pdg.c 2>/dev/null
echo "=== meta ==="
cat ~/r2work/out/boot_stats.meta.json 2>/dev/null
