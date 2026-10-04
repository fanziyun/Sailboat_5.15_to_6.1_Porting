#!/bin/bash
# Fetch radare2 deps (libzip/zydis/libuv) from Arch mirror, extract to ~/qpkg, verify r2 runs.
set -e
MIRROR=https://mirror.rackspace.com/archlinux/extra/os/x86_64
mkdir -p ~/dl ~/qpkg
cd ~/dl
listing=$(curl -s $MIRROR/)
for want in libzip zydis libuv; do
  f=$(echo "$listing" | grep -oE "\"${want}-[^\"]*-x86_64\.pkg\.tar\.zst\"" | tr -d '"' | grep -v sig | head -1)
  if [ -z "$f" ]; then echo "MISSING: $want"; continue; fi
  if [ ! -s "$f" ]; then curl -sO $MIRROR/"$f"; fi
  tar -xf "$f" -C ~/qpkg
  echo "extracted $f"
done
echo "--- ldd r2 ---"
LD_LIBRARY_PATH=$HOME/qpkg/usr/lib ldd ~/qpkg/usr/bin/r2 2>&1 | grep -i "not found" || echo "(no missing deps)"
echo "--- r2 -v ---"
export LD_LIBRARY_PATH=$HOME/qpkg/usr/lib
~/qpkg/usr/bin/r2 -v
