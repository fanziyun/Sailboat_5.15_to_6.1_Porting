#!/bin/bash
# Final mac80211 attempt: 8h timeout, dedicated, with progress logging.
export LD_LIBRARY_PATH=$HOME/qpkg/usr/lib
export R2_LIBR_PLUGINS=$HOME/qpkg/usr/lib/radare2/6.2.0
export SLEIGHHOME=$HOME/qpkg/usr/lib/radare2/6.2.0/r2ghidra_sleigh
export PATH=$HOME/qpkg/usr/bin:$PATH
cp /mnt/c/Users/Administrator/StudioProjects/Sailboat_5.15_to_6.1_Porting/_probe/ko_decompile.py ~/r2work/bin/
rm -f ~/r2work/out/mac80211.pdg.c ~/r2work/out/mac80211.meta.json
timeout 28800 ~/venv/bin/python ~/r2work/bin/ko_decompile.py ~/r2work/in/mac80211.ko ~/r2work/out ~/r2work/tmp \
  > ~/r2work/log/mac80211.log 2>&1
echo "RC=$? mac80211"
