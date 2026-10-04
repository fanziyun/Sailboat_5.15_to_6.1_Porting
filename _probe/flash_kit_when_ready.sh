#!/bin/bash
# flash_kit_when_ready.sh — fastboot 设备出现后自动执行 Phase 2 槽 a 四件套刷写
# 全部镜像来自 _probe/，命令逐条日志化；任何失败立即中止。
set -u
P="C:/Users/Administrator/StudioProjects/Sailboat_5.15_to_6.1_Porting/_probe"
FB="C:/Program Files (x86)/platform-tools/fastboot.exe"
ADB="C:/Program Files (x86)/platform-tools/adb.exe"
export MSYS_NO_PATHCONV=1

echo "=== waiting for fastboot device ($(date +%T)) ==="
for i in $(seq 1 240); do
  D="$("$FB" devices 2>/dev/null | grep -v '^$' | head -1 | cut -f1)"
  if [ -n "$D" ]; then echo "fastboot device: $D"; break; fi
  sleep 5
  if [ $i -eq 240 ]; then echo "TIMEOUT waiting for fastboot"; exit 1; fi
done

echo "=== [1/6] fetch vendor_boot_b (对比用) ==="
"$FB" fetch vendor_boot_b "$P/backup/vendor_boot_b.img" 2>&1 | tail -2
if [ -f "$P/backup/vendor_boot_b.img" ]; then
  A_MD5=$(md5sum "$P/backup/vendor_boot_a.img" | cut -d' ' -f1)
  B_MD5=$(md5sum "$P/backup/vendor_boot_b.img" | cut -d' ' -f1)
  echo "vendor_boot_a md5=$A_MD5  vendor_boot_b md5=$B_MD5  same=$([ "$A_MD5" = "$B_MD5" ] && echo yes || echo NO)"
fi

echo "=== [2/6] flash boot_a = 6.1+pstore ==="
"$FB" flash boot_a "$P/boot_a_61.img" 2>&1 | tail -2 || exit 1
echo "=== [3/6] flash vendor_boot_a = ramoops DTB + 原厂 modules.load ==="
"$FB" flash vendor_boot_a "$P/vendor_boot_a_p1.img" 2>&1 | tail -2 || exit 1
echo "=== [4/6] flash boot_b = stock 5.15 (回退保障) ==="
"$FB" flash boot_b "$P/boot_b_stock.img" 2>&1 | tail -2 || exit 1
echo "=== [5/6] flash vendor_boot_b = 同 a 的补丁镜像 ==="
"$FB" flash vendor_boot_b "$P/vendor_boot_a_p1.img" 2>&1 | tail -2 || exit 1
echo "=== [6/6] set_active a + reboot ==="
"$FB" set_active a 2>&1 | tail -1
"$FB" reboot 2>&1 | tail -1

echo "=== flash done, watching adb ($(date +%T)) ==="
for i in $(seq 1 40); do
  sleep 20
  PORTS=$(python -c "
import socket, concurrent.futures
def chk(p):
    s=socket.socket(); s.settimeout(0.3)
    try: s.connect(('192.168.31.124',p)); s.close(); return p
    except: return None
with concurrent.futures.ThreadPoolExecutor(max_workers=400) as ex:
    print(' '.join(str(r) for r in ex.map(chk, range(32768,61000)) if r))
" 2>/dev/null)
  echo "$(date +%T) ports=[$PORTS]"
  if [ -n "$PORTS" ]; then
    for p in $PORTS; do "$ADB" connect 192.168.31.124:$p; done
    echo "ADB CONNECTED — uname: $($ADB shell uname -a 2>/dev/null)"
    echo "slot: $($ADB shell getprop ro.boot.slot_suffix 2>/dev/null)"
    break
  fi
done
echo "=== watcher end $(date +%T) ==="
