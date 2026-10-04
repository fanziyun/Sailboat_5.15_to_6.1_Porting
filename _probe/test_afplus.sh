#!/bin/bash
set -e
export LD_LIBRARY_PATH=$HOME/qpkg/usr/lib
export R2_LIBR_PLUGINS=$HOME/qpkg/usr/lib/radare2/6.2.0
export SLEIGHHOME=$HOME/qpkg/usr/lib/radare2/6.2.0/r2ghidra_sleigh
R2=$HOME/qpkg/usr/bin/r2
W=$HOME/r2work

# build a flags script that also tries af+ (function without bytes)
{
  echo "f of_find_compatible_node 4 @ 0x800300c"
  echo "af+ 0x800300c of_find_compatible_node"
  echo "f of_iomap 4 @ 0x8003010"
  echo "af+ 0x8003010 of_iomap"
  echo "f _printk 4 @ 0x800301c"
  echo "af+ 0x800301c _printk"
} > $W/test_afplus.r2

$R2 -q -e scr.color=0 -e bin.relocs.apply=false -i $W/test_afplus.r2 \
    -c 'aaa; pdg @ sym.init_module' $W/boot_stats.patched.ko 2>/dev/null | head -40

echo "=== try malloc map fallback ==="
$R2 -q -e scr.color=0 -e bin.relocs.apply=false \
    -c 'o malloc://0x2000; om $(o~:[1]) 0 0x8003000 0x2000 rwx; wx c0035fd6c0035fd6c0035fd6c0035fd6 @ 0x8003000; f of_find_compatible_node 4 @ 0x800300c; af @ 0x800300c; afn of_find_compatible_node @ 0x800300c; afl~of_find' \
    $W/boot_stats.patched.ko 2>&1 | head -10
