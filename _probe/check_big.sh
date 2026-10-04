#!/bin/bash
for m in cfg80211 mac80211 msm_kgsl qca_cld3_kiwi_v2; do
  if [ -f ~/r2work/out/$m.meta.json ]; then
    echo "$m DONE $(cat ~/r2work/out/$m.meta.json | head -c 120)"
  else
    echo "$m logsize=$(stat -c %s ~/r2work/log/$m.log 2>/dev/null)"
  fi
done
sleep 90
echo "---90s later---"
for m in cfg80211 mac80211 msm_kgsl qca_cld3_kiwi_v2; do
  if [ -f ~/r2work/out/$m.meta.json ]; then
    echo "$m DONE"
  else
    echo "$m logsize=$(stat -c %s ~/r2work/log/$m.log 2>/dev/null)"
  fi
done
