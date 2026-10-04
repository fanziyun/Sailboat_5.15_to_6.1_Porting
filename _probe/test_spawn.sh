#!/bin/bash
export LD_LIBRARY_PATH=$HOME/qpkg/usr/lib
export R2_LIBR_PLUGINS=$HOME/qpkg/usr/lib/radare2/6.2.0
export SLEIGHHOME=$HOME/qpkg/usr/lib/radare2/6.2.0/r2ghidra_sleigh
export PATH=$HOME/qpkg/usr/bin:$PATH

echo "=== bash spawn ==="
~/qpkg/usr/bin/r2 -v | head -1

echo "=== python subprocess spawn ==="
~/venv/bin/python - <<'EOF'
import os, subprocess
print("python:", sys.version if (sys:=__import__("sys")) else "")
p = subprocess.run([os.path.expanduser("~/qpkg/usr/bin/r2"), "-v"], capture_output=True, text=True)
print("rc=", p.returncode)
print(p.stdout.splitlines()[:1], p.stderr[:200])
EOF

echo "=== readlink state ==="
ls -la ~/qpkg/usr/bin/r2 ~/qpkg/usr/bin/radare2
