#!/bin/bash
# Redo the exec-overlap modules with bss-zeroing ko_patch
export LD_LIBRARY_PATH=$HOME/qpkg/usr/lib
export R2_LIBR_PLUGINS=$HOME/qpkg/usr/lib/radare2/6.2.0
export SLEIGHHOME=$HOME/qpkg/usr/lib/radare2/6.2.0/r2ghidra_sleigh
export PATH=$HOME/qpkg/usr/bin:$PATH
W=$HOME/r2work
PROJ=/mnt/c/Users/Administrator/StudioProjects/Sailboat_5.15_to_6.1_Porting

cp $PROJ/_probe/ko_patch.py $PROJ/_probe/ko_decompile.py $PROJ/_probe/merge_shards.py \
   $PROJ/_probe/collect_monsters.sh $W/bin/

REDO="camera ipam metis migt rmnet_shs miwill usb_bam mi_schedule xiaomi_touch perf_helper msm_performance mi_freqwdg debug_ext xm_power hvc_gunyah mi_exception_log usb_f_diag pmic-pon-log"
for m in $REDO; do
  rm -f $W/out/$m.pdg.c $W/out/$m.meta.json
done
echo "redo list: $REDO"
ls $W/in/*.ko | wc -l
