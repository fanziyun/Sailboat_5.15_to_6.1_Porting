#!/bin/bash
# Finalize: wait for nothing — assumes stragglers finished. Build index, copy all outputs to project.
set -e
export LD_LIBRARY_PATH=$HOME/qpkg/usr/lib
OUT=~/r2work/out
DST=/mnt/c/Users/Administrator/StudioProjects/Sailboat_5.15_to_6.1_Porting/_probe/r2_decompiled

~/venv/bin/python ~/r2work/bin/build_index.py $OUT
mkdir -p $DST
cp -u $OUT/*.pdg.c $OUT/*.meta.json $OUT/INDEX.md $OUT/index.json $DST/
echo "=== totals ==="
head -c 400 $OUT/index.json
echo
echo "=== project dir ==="
ls $DST | wc -l
du -sh $DST
echo FINALIZE_DONE
