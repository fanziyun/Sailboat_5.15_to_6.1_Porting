#!/bin/bash
echo "ko_repair procs: $(pgrep -f ko_repair | wc -l)"
echo "empties remaining per module:"
for f in ~/r2work/out/*.pdg.c; do
  n=$(grep -c "// (empty)" "$f" 2>/dev/null)
  if [ "${n:-0}" -gt 0 ]; then
    echo "  $(basename "$f" .pdg.c): $n"
  fi
done
echo "---repair log markers---"
grep -aE "DONE |giving up" "/mnt/c/Users/Administrator/.zcode/cli/exec/sess_bac4542e-ac6d-4dea-b4c1-8512785807c1/call_d7d06f53556e4412bcd8149c-stdout.log" 2>/dev/null | tail -8
