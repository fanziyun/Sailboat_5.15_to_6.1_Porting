#!/bin/bash
for i in 0 1 2 3 4 5 6 7 8 9; do
  echo "s$i: $(grep -oE 'pdg [0-9]+/[0-9]+ .*' ~/r2work/log/mac80211_s$i.log 2>/dev/null | tail -1)"
done
echo "=== how many timeout errors so far ==="
grep -l "timed out\|timeout" ~/r2work/log/mac80211_s?.log 2>/dev/null | head
