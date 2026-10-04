#!/usr/bin/env bash
# Build the Phase 1 initramfs correctly.
#
# Two bugs fixed from the first attempt, both found by review:
#   1. the mount points /proc /sys /dev must EXIST as directories, otherwise
#      mount() fails with ENOENT and nothing is visible under them
#   2. mount() takes FIVE arguments (source, target, fstype, flags, data) --
#      the init must pass all five, with data = NULL
set -euo pipefail

ROOT=~/q61root
IMG=~/k61/initramfs.cpio.gz

echo "== creating mount points"
mkdir -p "$ROOT/root"/{proc,sys,dev}

echo "== staging files"
cp "$ROOT/init"            "$ROOT/root/"
cp ~/q61mod/cfiprobe.ko    "$ROOT/root/probe.ko"

echo "== initramfs contents"
( cd "$ROOT/root" && find . -print0 | cpio --null -o -H newc 2>/dev/null ) | gzip -9 > "$IMG"
zcat "$IMG" | cpio -t 2>/dev/null

echo "== size: $(stat -c%s "$IMG") bytes"
