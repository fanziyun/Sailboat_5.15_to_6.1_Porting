#!/bin/bash
set -e
PROJ=/mnt/c/Users/Administrator/StudioProjects/Sailboat_5.15_to_6.1_Porting
cp $PROJ/_probe/vboot_ko_extract.py ~/r2work/bin/
mkdir -p $PROJ/_probe/vendor_boot_ko
~/venv/bin/python ~/r2work/bin/vboot_ko_extract.py \
  $PROJ/_probe/backup/vendor_boot_a.img \
  $PROJ/_probe/vendor_boot_ko \
  $PROJ/_probe/vendor_ko
cp -u $PROJ/_probe/vendor_boot_ko/*.ko ~/r2work/in/
echo "workqueue inputs: $(ls ~/r2work/in/*.ko | wc -l)"
