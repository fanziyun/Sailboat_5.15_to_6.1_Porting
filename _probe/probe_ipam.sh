#!/bin/bash
export LD_LIBRARY_PATH=$HOME/qpkg/usr/lib
export R2_LIBR_PLUGINS=$HOME/qpkg/usr/lib/radare2/6.2.0
export SLEIGHHOME=$HOME/qpkg/usr/lib/radare2/6.2.0/r2ghidra_sleigh
export PATH=$HOME/qpkg/usr/bin:$PATH
W=$HOME/r2work
CP=/mnt/c/Users/Administrator/StudioProjects/Sailboat_5.15_to_6.1_Porting/_probe
echo "=== ipam meta patch stats ==="
~/venv/bin/python - <<'EOF'
import json, os
m = json.load(open(os.path.expanduser("~/r2work/out/ipam.meta.json")))
print("skipped:", m["patch"]["skipped"], " relocs:", m["patch"]["relocs"])
EOF
echo "=== site probe 0x08155098 ==="
~/venv/bin/python $CP/probe_site.py $W/in/ipam.ko 0x08155098 2>/dev/null | head -12
echo "=== duplicate section names in ipam ==="
~/venv/bin/python - <<'EOF'
import os, sys, collections
sys.path.insert(0, "/mnt/c/Users/Administrator/StudioProjects/Sailboat_5.15_to_6.1_Porting/_probe")
os.chdir("/mnt/c/Users/Administrator/StudioProjects/Sailboat_5.15_to_6.1_Porting/_probe")
from ko_patch import Elf
elf = Elf(open(os.path.expanduser("~/r2work/in/ipam.ko"), "rb").read())
names = collections.Counter(s["name"] for s in elf.sections)
dups = {n: c for n, c in names.items() if c > 1}
print("duplicate section names:", dups if dups else "none")
# find sections containing symbol ipa3_get_ipc_logbuf_low
for s in elf.sections:
    if "ipc_logbuf" in s["name"]:
        print("section:", s["name"], "idx", s["idx"], "off 0x%x size 0x%x" % (s["off"], s["size"]))
EOF
