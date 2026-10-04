#!/usr/bin/env bash
# QEMU end-to-end test of the 6.1 kernel's mtdoops pipeline:
#   boot 1 (panic mode): canary on console -> sysrq-c panic -> mtdoops writes /dev/mtd0
#   boot 2 (read mode):  scan /dev/mtd0 for the canary, print verdict
# /dev/mtd0 = block2mtd over a virtio disk, exactly mirroring the phone's
# block2mtd(/dev/block/sda19) arrangement but in RAM.
set -uo pipefail

SRC=/mnt/c/Users/Administrator/StudioProjects/Sailboat_5.15_to_6.1_Porting/_probe
CC="clang --target=aarch64-linux-gnu -march=armv8-a"
QEMU=~/qpkg/usr/bin/qemu-system-aarch64
KIMG=~/k61/arch/arm64/boot/Image
ROOT=~/q61mtd/root
IMG=~/k61/initramfs_mtd.cpio.gz
DISK=/tmp/mtddisk.img
export PATH="$HOME/qpkg/usr/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin"
export LD_LIBRARY_PATH="$HOME/qpkg/usr/lib${LD_LIBRARY_PATH:+:$LD_LIBRARY_PATH}"

echo "== compiling mttest init"
mkdir -p "$ROOT"/root "$ROOT"/proc "$ROOT"/sys "$ROOT"/dev
rm -f "$ROOT/root/init"
$CC -static -nostdlib -nostdinc -ffreestanding -fno-stack-protector -fuse-ld=lld \
    -Wl,--build-id=none -o "$ROOT/root/init" "$SRC/mttest_init.c" || exit 1
( cd "$ROOT/root" && find . -print0 | cpio --null -o -H newc 2>/dev/null ) | gzip -9 > "$IMG"

echo "== preparing 16MB virtio disk"
dd if=/dev/zero of="$DISK" bs=1M count=16 status=none

COMMON_APPEND="console=ttyAMA0 rdinit=/init loglevel=7 panic=-1 block2mtd=/dev/vda,65536 mtdoops.mtddev=0 mtdoops.record_size=65536"

echo "== boot 1: panic mode"
timeout --foreground 120 "$QEMU" \
    -machine virt -cpu cortex-a57 -smp 2 -m 1024 -nic none -no-reboot \
    -kernel "$KIMG" -initrd "$IMG" \
    -drive if=none,file="$DISK",format=raw,id=h0 \
    -device virtio-blk-device,drive=h0 \
    -append "$COMMON_APPEND mtdtest=panic" \
    -nographic -serial mon:stdio > /tmp/mtd_run1.log 2>&1 || true
grep -E "MTDOOPS-CANARY|Kernel panic|mtdoops|block2mtd" /tmp/mtd_run1.log | head -12

echo
echo "== boot 2: read mode"
timeout --foreground 120 "$QEMU" \
    -machine virt -cpu cortex-a57 -smp 2 -m 1024 -nic none -no-reboot \
    -kernel "$KIMG" -initrd "$IMG" \
    -drive if=none,file="$DISK",format=raw,id=h0 \
    -device virtio-blk-device,drive=h0 \
    -append "$COMMON_APPEND mtdtest=read" \
    -nographic -serial mon:stdio > /tmp/mtd_run2.log 2>&1 || true
grep -E "MTDOOPS-TEST|/proc/mtd|block2mtd|mtdoops" /tmp/mtd_run2.log | head -12

echo
echo "== verdict =="
if grep -q "MTDOOPS-TEST-PASS" /tmp/mtd_run2.log; then
    echo "MTDOOPS PIPELINE: PASS"
else
    echo "MTDOOPS PIPELINE: FAIL"
fi
