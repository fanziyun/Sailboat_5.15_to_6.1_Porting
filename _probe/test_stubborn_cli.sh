#!/bin/bash
export LD_LIBRARY_PATH=$HOME/qpkg/usr/lib
export R2_LIBR_PLUGINS=$HOME/qpkg/usr/lib/radare2/6.2.0
export SLEIGHHOME=$HOME/qpkg/usr/lib/radare2/6.2.0/r2ghidra_sleigh
export PATH=$HOME/qpkg/usr/bin:$PATH
W=$HOME/r2work
# first 3 empty addrs from current cfg80211.pdg.c
~/venv/bin/python - <<'EOF' > /tmp/stubborn_addrs.txt
import re
txt = open("/home/fanziyun/r2work/out/cfg80211.pdg.c", encoding="utf-8", errors="replace").read()
HDR = re.compile(r"^// ===== (.*) @ 0x([0-9a-fA-F]+)(?: \(size (\d+)\))? ?=====", re.M)
n = 0
for m in re.finditer(r"// \(empty\)", txt):
    idx = txt.rfind("// ===== ", 0, m.start())
    hm = HDR.match(txt[idx:idx + 200])
    if hm and n < 3:
        print("%s %s %s" % (hm.group(2), hm.group(3), hm.group(1)))
        n += 1
EOF
cat /tmp/stubborn_addrs.txt
while read addr size nm; do
  echo "=== 0x$addr (size $size) $nm ==="
  timeout 300 ~/qpkg/usr/bin/r2 -q -e bin.relocs.apply=false -e scr.color=0 -e scr.html=0 -e scr.prompt=0 \
    -c ". $W/tmp/cfg80211.flags.r2" -c "aaa" -c "pdg @ 0x$addr" \
    $W/tmp/cfg80211.patched.ko > /tmp/pdg_out.txt 2>/tmp/pdg_err.txt
  echo "rc=$? outlen=$(wc -c < /tmp/pdg_out.txt)"
  grep -aE "Error|error|Timeout|WARN: Ghidra" /tmp/pdg_err.txt /tmp/pdg_out.txt 2>/dev/null | head -3
  head -c 200 /tmp/pdg_out.txt
  echo
done < /tmp/stubborn_addrs.txt
