#!/usr/bin/env bash
# Build the 6.1 kernel with CFI enabled, detached from any controlling shell.
cd /home/fanziyun/k61 || exit 1
export PATH=/usr/bin:/bin:/usr/local/bin
{
  echo "=== build start $(date) ==="
  make -j12 ARCH=arm64 LLVM=1 Image
  echo "MAKE_EXIT=$?"
  make -j12 ARCH=arm64 LLVM=1 modules
  echo "MODULES_EXIT=$?"
  echo "=== build end $(date) ==="
} > /tmp/b61c.log 2>&1
