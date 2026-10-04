#!/usr/bin/env python3
"""Fresh-session test of CURRENT empty functions from cfg80211.pdg.c."""
import os
import re
import sys
import r2pipe

W = os.path.expanduser("~/r2work")
mod = sys.argv[1] if len(sys.argv) > 1 else "cfg80211"
path = "%s/out/%s.pdg.c" % (W, mod)
txt = open(path, encoding="utf-8", errors="replace").read()
HDR = re.compile(r"^// ===== (.*) @ 0x([0-9a-fA-F]+)(?: \(size (\d+)\))? ?=====", re.M)

empties = []
for m in re.finditer(r"// \(empty\)", txt):
    idx = txt.rfind("// ===== ", 0, m.start())
    hm = HDR.match(txt[idx:idx + 200])
    if hm:
        empties.append((hm.group(1), int(hm.group(2), 16), int(hm.group(3) or 0)))
print("current empties: %d" % len(empties))

patched = "%s/tmp/%s.patched.ko" % (W, mod)
flags = "%s/tmp/%s.flags.r2" % (W, mod)

for nm, addr, size in empties[:4]:
    r2 = r2pipe.open(patched, flags=["-e", "bin.relocs.apply=false", "-e", "scr.color=0",
                                     "-e", "scr.html=0", "-e", "scr.prompt=0"])
    try:
        r2.cmd(". %s" % flags)
        r2.cmd("aaa")
        code = r2.cmd("pdg @ 0x%x" % addr)
        print("0x%08x size=%d %s -> len=%d" % (addr, size, nm[:60], len(code or "")))
        if code:
            print((code[:300] or "").replace("\n", " | ")[:300])
    finally:
        r2.quit()
