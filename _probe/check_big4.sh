#!/bin/bash
for m in cfg80211 mac80211 msm_kgsl; do
  echo "== $m =="
  pgrep -f "ko_decompile.py.*$m.ko" | while read pid; do
    ps -o pid=,ppid=,etime=,time=,stat=,comm= -p "$pid"
  done
  # also the r2 child
  rpid=$(pgrep -f "radare2.*$m.patched.ko" | head -1)
  [ -n "$rpid" ] && ps -o pid=,ppid=,etime=,time=,stat=,comm= -p "$rpid"
done
