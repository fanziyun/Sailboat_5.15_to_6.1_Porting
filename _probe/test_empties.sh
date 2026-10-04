#!/bin/bash
# Fresh-session re-decompile of empty victims, stderr visible
export LD_LIBRARY_PATH=$HOME/qpkg/usr/lib
export R2_LIBR_PLUGINS=$HOME/qpkg/usr/lib/radare2/6.2.0
export SLEIGHHOME=$HOME/qpkg/usr/lib/radare2/6.2.0/r2ghidra_sleigh
export PATH=$HOME/qpkg/usr/bin:$PATH
export MALLOC_ARENA_MAX=2
W=$HOME/r2work

test_one() {
  local mod=$1 addr=$2
  echo "=== $mod @ $addr ==="
  timeout 400 ~/qpkg/usr/bin/r2 -q \
    -e bin.relocs.apply=false -e scr.color=0 -e scr.html=0 -e scr.prompt=0 \
    -c ". $W/tmp/${mod}.flags.r2" -c "aaa" -c "pdg @ $addr" \
    $W/tmp/${mod}.patched.ko 2>&1 | grep -vE "^(INFO|WARN):" | head -30
  echo "(rc=$?)"
}

# ensure patched copies exist for both
for m in mac80211 cfg80211; do
  if [ ! -s $W/tmp/$m.patched.ko ]; then
    ~/venv/bin/python ~/r2work/bin/ko_patch.py $W/in/$m.ko $W/tmp/$m.patched.ko $W/tmp/$m.flags.r2 > /dev/null
  fi
done

test_one mac80211 0x080815c8   # perf_trace_drv_bss_info_changed 824B
test_one mac80211 0x0805da34   # ieee80211_rx_list 2276B
test_one cfg80211 0x0803f858   # set_regdom 1916B
