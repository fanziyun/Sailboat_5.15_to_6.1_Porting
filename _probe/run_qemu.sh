#!/usr/bin/env bash
# Boot the 6.1 GKI kernel + CFI probe module under QEMU and capture the result.
#
# Machine: virt (the generic QEMU aarch64 board, no SM8550 hardware).
# This deliberately does NOT attempt vendor drivers -- there is no kalama DTB and
# no qcom platform drivers here, so any vendor module would fail for lack of
# dependencies. Phase 1 asks one question only: does a CFI-instrumented module
# load, initialise and stay visible without tripping a CFI failure on 6.1?
set -euo pipefail

QEMU=~/qpkg/usr/bin/qemu-system-aarch64
KIMG=~/k61/arch/arm64/boot/Image
INITRD=~/k61/initramfs.cpio.gz
LOG=/tmp/qemu_phase1.log
TIMEOUT=${TIMEOUT:-150}

export LD_LIBRARY_PATH="$HOME/qpkg/usr/lib${LD_LIBRARY_PATH:+:$LD_LIBRARY_PATH}"

echo "=== artifacts ==="
ls -la "$KIMG" "$INITRD" | awk '{print "  "$5" "$9}'

echo "=== booting (timeout ${TIMEOUT}s) ==="
timeout --foreground "$TIMEOUT" "$QEMU" \
    -machine virt \
    -cpu cortex-a57 \
    -smp 2 \
    -m 1024 \
    -nic none \
    -kernel "$KIMG" \
    -initrd "$INITRD" \
    -append "console=ttyAMA0 rdinit=/init earlyprintk loglevel=7 panic=-1" \
    -nographic \
    -serial mon:stdio \
    > "$LOG" 2>&1 || echo "  (qemu exited rc=$?)"

echo
echo "=== verdict markers ==="
for m in "PHASE1-INIT-START" "PHASE1-KERNEL" "PHASE1-INSMOD-OK" \
         "PHASE1-INSMOD-FAIL" "PHASE1-INSMOD-RC" "PHASE1-MODULE-SYSFS" \
         "PHASE1-KMSG-cfi" "PHASE1-KMSG-CFI" "PHASE1-KMSG-Oops" \
         "PHASE1-INIT-DONE"; do
    if grep -q "$m" "$LOG"; then
        echo "  FOUND  $m"
    fi
done

echo
echo "=== kernel panic / CFI failure? ==="
grep -inE "Kernel panic|CFI failure|Unable to handle|Oops" "$LOG" | head -5 \
    || echo "  none"

echo
echo "=== the module lines ==="
grep -iE "cfiprobe|init_module" "$LOG" | head -8 || echo "  none"

echo
echo "=== log: $(wc -l < "$LOG") lines, saved to $LOG ==="
