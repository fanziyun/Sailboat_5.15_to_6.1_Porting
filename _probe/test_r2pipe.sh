#!/bin/bash
export LD_LIBRARY_PATH=$HOME/qpkg/usr/lib
export R2_LIBR_PLUGINS=$HOME/qpkg/usr/lib/radare2/6.2.0
export SLEIGHHOME=$HOME/qpkg/usr/lib/radare2/6.2.0/r2ghidra_sleigh
export PATH=$HOME/qpkg/usr/bin:$PATH
W=$HOME/r2work

echo "=== fresh ko_patch flags (direct run, /tmp) ==="
grep -c "af+" /tmp/bs.flags.r2 2>/dev/null || echo "no af+ in /tmp flags"
tail -3 /tmp/bs.flags.r2

echo "=== r2 -q + stdin WITHOUT -i ==="
printf '?V\nf foo 4 @ 0x8003000\nafl~foo\n' | timeout 60 $HOME/qpkg/usr/bin/r2 -q \
  -e bin.relocs.apply=false -e scr.color=0 $W/tmp/boot_stats.patched.ko 2>/dev/null | head -5

echo "=== r2 -q + stdin with '.' script command first ==="
printf '. %s\n?V\n' $W/boot_stats.flags.r2 | timeout 60 $HOME/qpkg/usr/bin/r2 -q \
  -e bin.relocs.apply=false -e scr.color=0 $W/tmp/boot_stats.patched.ko 2>/dev/null | head -8
