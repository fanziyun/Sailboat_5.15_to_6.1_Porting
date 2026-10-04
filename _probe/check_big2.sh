#!/bin/bash
date
for m in cfg80211 mac80211 msm_kgsl qca_cld3_kiwi_v2; do
  pid=$(pgrep -f "ko_decompile.py.*$m.ko" | head -1)
  if [ -n "$pid" ]; then
    etime=$(ps -o etime= -p "$pid" | tr -d " ")
    echo "$m pid=$pid elapsed=$etime log_mtime=$(stat -c %y ~/r2work/log/$m.log | cut -d. -f1)"
  else
    echo "$m not running"
  fi
done
