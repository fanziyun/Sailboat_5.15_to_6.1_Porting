#!/usr/bin/env python3
"""Fresh-session pdg test of empty victims, mirrors production driver."""
import os
import sys
import r2pipe

W = os.path.expanduser("~/r2work")
R2FLAGS = ["-e", "bin.relocs.apply=false", "-e", "scr.color=0", "-e", "scr.html=0",
           "-e", "scr.mouse=0", "-e", "scr.prompt=0", "-e", "r2ghidra.timeout=240"]

tests = [("mac80211", 0x080815c8), ("mac80211", 0x0805da34), ("cfg80211", 0x0803f858)]

for mod, addr in tests:
    patched = "%s/tmp/%s.patched.ko" % (W, mod)
    flags = "%s/tmp/%s.flags.r2" % (W, mod)
    if not os.path.exists(patched):
        import subprocess
        subprocess.run([sys.executable, W + "/bin/ko_patch.py",
                        "%s/in/%s.ko" % (W, mod), patched, flags], check=True,
                       stdout=subprocess.DEVNULL)
    r2 = r2pipe.open(patched, flags=R2FLAGS)
    try:
        r2.cmd(". %s" % flags)
        r2.cmd("aaa")
        code = r2.cmd("pdg @ 0x%x" % addr)
        print("=== %s @ 0x%x === len=%d" % (mod, addr, len(code or "")))
        print((code or "(EMPTY)")[:600])
        print()
    finally:
        r2.quit()
