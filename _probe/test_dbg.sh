#!/bin/bash
export LD_LIBRARY_PATH=$HOME/qpkg/usr/lib
export R2_LIBR_PLUGINS=$HOME/qpkg/usr/lib/radare2/6.2.0
export SLEIGHHOME=$HOME/qpkg/usr/lib/radare2/6.2.0/r2ghidra_sleigh
export PATH=$HOME/qpkg/usr/bin:$PATH

~/venv/bin/python - <<'EOF'
import r2pipe, os
W = os.path.expanduser("~/r2work")
r2 = r2pipe.open(W + "/tmp/boot_stats.patched.ko", flags=[
    "-e", "bin.relocs.apply=false", "-e", "scr.color=0", "-e", "scr.html=0", "-e", "scr.prompt=0"])
print("script out:", repr(r2.cmd(". %s/boot_stats.flags.r2" % W))[:200])
r2.cmd("aaa")
afl = r2.cmd("afl")
print("afl lines:", len(afl.strip().splitlines()) if afl.strip() else 0)
aflj = r2.cmdj("aflj")
print("aflj type:", type(aflj), "len:", len(aflj) if isinstance(aflj, list) else "-")
if isinstance(aflj, list) and aflj:
    print("first entry keys:", sorted(aflj[0].keys())[:10])
    print("first entry:", {k: aflj[0][k] for k in ("offset", "name", "size") if k in aflj[0]})
r2.quit()
EOF
