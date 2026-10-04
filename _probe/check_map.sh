#!/bin/bash
set -e
export LD_LIBRARY_PATH=$HOME/qpkg/usr/lib
export R2_LIBR_PLUGINS=$HOME/qpkg/usr/lib/radare2/6.2.0
export SLEIGHHOME=$HOME/qpkg/usr/lib/radare2/6.2.0/r2ghidra_sleigh
R2=$HOME/qpkg/usr/bin/r2
KO=/mnt/c/Users/Administrator/StudioProjects/Sailboat_5.15_to_6.1_Porting/_probe/vendor_ko/boot_stats.ko

echo "=== iSj ==="
$R2 -q -N -c 'iSj' "$KO" 2>/dev/null > /tmp/isj.json
python3 - <<'EOF'
import json
d = json.load(open('/tmp/isj.json'))
for s in d:
    print("%-22s vaddr=0x%x size=0x%x" % (s["name"], s["vaddr"], s["size"]))
EOF

echo "=== pip r2pipe into ~/venv ==="
~/venv/bin/pip install --quiet r2pipe && ~/venv/bin/python -c "import r2pipe; print('r2pipe ok')"
