#!/bin/bash
export LD_LIBRARY_PATH=$HOME/qpkg/usr/lib
~/venv/bin/python ~/r2work/bin/audit_corpus.py 2>/dev/null | grep -vE "block headers 0" | head -22
echo "=== ipam func_0x after redo ==="
~/venv/bin/python ~/r2work/bin/audit_func0x.py 2>/dev/null | head -6
echo "=== modules with empty bodies ==="
for f in ~/r2work/out/*.pdg.c; do
  n=$(grep -c "// (empty)" "$f" 2>/dev/null)
  if [ "${n:-0}" -gt 0 ]; then
    echo "$(basename "$f" .pdg.c): $n"
  fi
done
