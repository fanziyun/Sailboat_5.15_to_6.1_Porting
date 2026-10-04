#!/bin/bash
for i in 0 1 2 3 4 5 6 7 8 9; do
  if grep -q "^OK mac80211" ~/r2work/log/mac80211_s$i.log 2>/dev/null; then
    echo "shard$i: DONE"
  else
    p=$(grep -oE "pdg [0-9]+/[0-9]+" ~/r2work/log/mac80211_s$i.log 2>/dev/null | tail -1)
    echo "shard$i: running ${p:-...}"
  fi
done
ls ~/r2work/out/mac80211.pdg.c 2>/dev/null && echo "MERGED" || echo "merge pending"
top -bn1 | grep "%Cpu"
