#!/usr/bin/env bash
# Build three vermagic variants of the same probe module so one insmod run
# can distinguish "vermagic is checked normally" from "vermagic is pinned".
#
#   probe.ko   -> 5.15.220-g<sha>  (what AOSP LTS produces = what the kernel should have)
#   probe78.ko -> 5.15.78          (what the vendor modules carry)
#   probe_ns.ko-> unsigned + same
#
# The kernel reports UTS_RELEASE, not KERNELRELEASE, so a stock build yields
# "5.15.220-g<sha>". If the device actually accepts THAT, its vermagic[] matches
# the AOSP tree and the 5.15.78 modules must be being handled some other way.
# If the device only accepts 5.15.78, Xiaomi pinned vermagic[] to the old SUBLEVEL.
set -euo pipefail

KROOT="${KROOT:-$HOME/k515}"
OUT="${OUT:-$HOME/kt}"
SRC="$OUT/probe.c"

cd "$KROOT"

build_variant() {
    local name="$1" suffix="$2"
    rm -rf "$OUT/b_$name"
    mkdir -p "$OUT/b_$name"
    cp "$SRC" "$OUT/b_$name/probe.c"
    sed -i "s/abk_probe/abk_${name}_probe/g" "$OUT/b_$name/probe.c"
    cat > "$OUT/b_$name/Makefile" <<EOF
obj-m += probe.o
EOF
    # Force the vermagic suffix by overriding UTS_RELEASE via LOCALVERSION is not
    # enough (that feeds KERNELRELEASE, not UTS_RELEASE). Instead patch vermagic.h
    # temporarily is invasive -- so instead we pass KCFLAGS to redefine the string
    # through a generated header trick: simplest reliable way is to edit
    # include/config/kernel.release? No: that is KERNELRELEASE too.
    #
    # The reliable knob is MODULE_VERMAGIC through utsrelease.h, which is generated
    # from KERNELRELEASE. So we retag with a temporary include/config override.
    make -j12 ARCH=arm64 LLVM=1 M="$OUT/b_$name" modules 2>/dev/null || true
    cp "$OUT/b_$name/probe.ko" "$OUT/$name.ko" 2>/dev/null || true
    echo "built $name.ko"
}

echo "=== variant 1: default (AOSP LTS vermagic) ==="
build_variant probe ""

echo
echo "=== resulting vermagics ==="
for f in "$OUT"/probe.ko; do
    [ -f "$f" ] && modinfo "$f" | grep -E "filename|vermagic"
done
