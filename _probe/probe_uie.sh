#!/bin/bash
export LD_LIBRARY_PATH=$HOME/qpkg/usr/lib
export R2_LIBR_PLUGINS=$HOME/qpkg/usr/lib/radare2/6.2.0
export SLEIGHHOME=$HOME/qpkg/usr/lib/radare2/6.2.0/r2ghidra_sleigh
export PATH=$HOME/qpkg/usr/bin:$PATH
W=$HOME/r2work
for m in rmnet_aps xlogchar cdsprm; do
  if [ ! -s $W/tmp/$m.patched.ko ]; then
    ~/venv/bin/python ~/r2work/bin/ko_patch.py $W/in/$m.ko $W/tmp/$m.patched.ko $W/tmp/$m.flags.r2 > /dev/null
  fi
done
echo "=== rmnet_aps cleanup_module: UIE context ==="
~/qpkg/usr/bin/r2 -q -e scr.color=0 -e bin.relocs.apply=false -i $W/tmp/rmnet_aps.flags.r2 \
  -c 'aaa; s sym.cleanup_module; pdg' $W/tmp/rmnet_aps.patched.ko 2>/dev/null > /tmp/uie_rmnet.txt
grep -B 3 -A 2 "UndefinedInstructionException" /tmp/uie_rmnet.txt | head -12
addr=$(grep -oE "UndefinedInstructionException\(0,0x[0-9a-f]+\)" /tmp/uie_rmnet.txt | grep -oE "0x[0-9a-f]+" | head -1)
echo "UIE at: $addr"
if [ -n "$addr" ]; then
  ~/qpkg/usr/bin/r2 -q -e scr.color=0 -c "pd 6 @ $addr" $W/tmp/rmnet_aps.patched.ko 2>/dev/null
fi
