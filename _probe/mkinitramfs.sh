#!/usr/bin/env bash
# Build a minimal initramfs that proves the 6.1 kernel reaches userspace and
# can load a module.
#
# The kernel prints "Kernel panic - not syncing: No working init found" if it
# boots but has no userspace, which would look like a kernel failure. So the
# initramfs must contain a real /init that:
#   1. mounts procfs/devtmpfs (so insmod and /sys/module work)
#   2. insmods the probe module -- this is the actual CFI test
#   3. prints a distinctive success marker we can grep for in the serial log
#   4. powers off cleanly (so QEMU exits instead of hanging)
#
# Order matters: insmod must happen BEFORE poweroff, and we must not rmmod.
# rmmod is the path that panicked on the real device.
set -euo pipefail

KROOT="${KROOT:-/home/fanziyun/k61}"
OUT="${OUT:-/home/fanziyun/q61}"
MODDIR="${MODDIR:-/home/fanziyun/q61mod}"

echo "== preparing $OUT"
rm -rf "$OUT"
mkdir -p "$OUT"

# --- busybox: static, so no userspace libc is needed -----------------------
if ! command -v busybox >/dev/null 2>&1; then
    echo "busybox not found; a minimal static /init is used instead" >&2
fi

echo "== /init"
cat > "$OUT/init" <<'INITEOF'
#!/bin/sh
# Phase 1 probe: does a CFI-instrumented module load and run on 6.1?
mount -t proc     proc     /proc 2>/dev/null
mount -t sysfs    sysfs    /sys  2>/dev/null
mount -t devtmpfs devtmpfs /dev  2>/dev/null

echo "PHASE1-INIT-START kernel=$(uname -r)"

# The module under test
if [ -f /probe.ko ]; then
    echo "PHASE1-INSMOD-BEGIN"
    insmod /probe.ko 2>&1
    echo "PHASE1-INSMOD-RC=$?"
else
    echo "PHASE1-ERR no /probe.ko in initramfs"
fi

if [ -d /sys/module/cfiprobe ]; then
    echo "PHASE1-MODULE-VISIBLE-IN-SYSFS"
    cat /sys/module/cfiprobe/initstate 2>/dev/null
fi

echo "PHASE1-DMESG-TAIL"
dmesg | grep -iE "cfi|cfiprobe|disagrees|Unknown symbol|Oops" | tail -20

echo "PHASE1-INIT-DONE"
# Deliberately NOT rmmod -- that is the path that panicked on hardware.
sync
poweroff -f 2>/dev/null || echo "PHASE1-NO-POWEROFF"
INITEOF
chmod 755 "$OUT/init"

# --- the module -------------------------------------------------------------
if [ -f "$MODDIR/cfiprobe.ko" ]; then
    cp "$MODDIR/cfiprobe.ko" "$OUT/probe.ko"
    echo "== bundled probe.ko"
else
    echo "!! $MODDIR/cfiprobe.ko not built yet"
fi

echo "== packing initramfs"
( cd "$OUT" && find . -print0 | cpio --null -ov --format=newc 2>/dev/null ) \
    | gzip -9 > "$KROOT/initramfs.cpio.gz"
ls -la "$KROOT/initramfs.cpio.gz"
echo "== done"
