#!/usr/bin/env bash
# Raise mtdoops' MTD size limit: the phone's mtd0 (block2mtd of sda19) is 16MB,
# upstream caps at 8MiB. 64MiB keeps headroom. Vanilla 5.15 has the same cap,
# which is why the stock stack never actually used mtdoops despite the cmdline.
set -euo pipefail
cd ~/k61
grep -n 'MTDOOPS_MAX_MTD_SIZE' drivers/mtd/mtdoops.c | head -3
sed -i 's/#define MTDOOPS_MAX_MTD_SIZE (8 \* 1024 \* 1024)/#define MTDOOPS_MAX_MTD_SIZE (64 * 1024 * 1024)/' drivers/mtd/mtdoops.c
grep -n 'MTDOOPS_MAX_MTD_SIZE' drivers/mtd/mtdoops.c | head -2
echo "=== rebuild ==="
make -j12 ARCH=arm64 LLVM=1 Image 2>&1 | tail -3
echo "MAKE_EXIT=$?"
md5sum arch/arm64/boot/Image
