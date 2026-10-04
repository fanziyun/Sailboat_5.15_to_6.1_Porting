#!/usr/bin/env python3
"""Decompile one aarch64 kernel module to C with r2ghidra.

Flow: ko_patch.py resolves all relocations into <name>.patched.ko (+flags.r2),
then r2 sessions apply the flags, run `aaa`, and pdg-decompile every function.

Memory control (mac80211-class modules blow up r2ghidra sessions):
  - KO_RESTART_EVERY: reopen + re-aaa every N functions (default 60)
  - r2ghidra.timeout=240 caps pathological single functions
  - KO_SHARD="i/N" decompiles only functions idx%N==i into <name>.shardNN.*
  - KO_SKIP_FUNCS="hex,hex" skips given function addresses

Output: <outdir>/<name>.pdg.c and <outdir>/<name>.meta.json
"""
import json
import os
import subprocess
import sys

import r2pipe

R2FLAGS = [
    "-e", "bin.relocs.apply=false",
    "-e", "scr.color=0",
    "-e", "scr.html=0",
    "-e", "scr.mouse=0",
    "-e", "scr.prompt=0",
    "-e", "r2ghidra.timeout=240",
]


def open_session(patched, flags):
    r2 = r2pipe.open(patched, flags=R2FLAGS)
    # never pass the flags script via -i: in -q mode r2 exits after -i
    # without reading the r2pipe stdin protocol. Run it with "." instead.
    r2.cmd(". %s" % flags)
    r2.cmd("aaa")
    return r2


def main():
    in_ko = os.path.abspath(sys.argv[1])
    outdir = os.path.abspath(sys.argv[2])
    workdir = sys.argv[3] if len(sys.argv) > 3 else "/dev/shm/kowork"
    os.makedirs(workdir, exist_ok=True)
    os.makedirs(outdir, exist_ok=True)

    name = os.path.basename(in_ko)[:-3]  # strip .ko
    probe = os.path.dirname(os.path.abspath(__file__))
    patched = os.path.join(workdir, name + ".patched.ko")
    flags = os.path.join(workdir, name + ".flags.r2")

    # 1. resolve relocations
    p = subprocess.run([sys.executable, os.path.join(probe, "ko_patch.py"),
                        in_ko, patched, flags],
                       capture_output=True, text=True)
    if p.returncode != 0:
        json.dump({"module": name, "error": "ko_patch failed",
                   "stderr": p.stderr[-2000:]},
                  open(os.path.join(outdir, name + ".meta.json"), "w"))
        print("PATCH-FAIL", name)
        return 1
    patch_info = json.loads(p.stdout.strip().splitlines()[-1])

    # 2. r2 session(s): flags, aaa, pdg per function
    r2 = open_session(patched, flags)
    try:
        funcs = r2.cmdj("aflj") or []
        # r2 6.x aflj entries carry "addr" (older builds used "offset")
        seen = {}
        for f in funcs:
            addr = f.get("addr", f.get("offset"))
            if addr is None or f.get("size", 0) <= 0:
                continue
            seen[addr] = f
        ordered = sorted(seen.values(), key=lambda f: f.get("addr", f.get("offset")))

        # optional sharding: KO_SHARD="i/N" -> only idx%N==i, output shardNN files
        outname = name
        shard = os.environ.get("KO_SHARD")
        if shard:
            si, sn = (int(x) for x in shard.split("/"))
            ordered = [f for i, f in enumerate(ordered) if i % sn == si]
            outname = "%s.shard%02d" % (name, si)

        skip = set()
        for tok in os.environ.get("KO_SKIP_FUNCS", "").replace(" ", "").split(","):
            if tok:
                skip.add(int(tok, 16))
        restart_every = int(os.environ.get("KO_RESTART_EVERY", "60"))
        max_size = int(os.environ.get("KO_MAX_FUNC_SIZE", "0"))  # 0 = no limit

        parts = []
        errors = []
        for i, f in enumerate(ordered):
            addr = f.get("addr", f.get("offset"))
            fn = f.get("name", "fcn_%x" % addr)
            fsize = f.get("size", 0)
            if i % 25 == 0:
                print("[%s] pdg %d/%d %s" % (name, i, len(ordered), fn),
                      file=sys.stderr, flush=True)
            if max_size and fsize > max_size:
                # single pdg on such a function can eat GBs; handled separately
                parts.append("\n// ===== %s @ 0x%08x (size %d) =====\n"
                             "// SKIPPED-TOOBIG (handled by pass B)\n" % (fn, addr, fsize))
                continue
            if i and i % restart_every == 0:
                # r2ghidra sessions accumulate GBs over long runs; recycle
                r2.quit()
                r2 = open_session(patched, flags)
            if addr in skip:
                parts.append("\n// ===== %s @ 0x%08x (SKIPPED) =====\n" % (fn, addr))
                continue
            hdr = "\n// ===== %s @ 0x%08x (size %d) =====\n" % (fn, addr, f.get("size", 0))
            try:
                code = r2.cmd("pdg @ 0x%x" % addr)
            except Exception as e:  # noqa: BLE001
                code = "// decompile exception: %r" % (e,)
            if code and "Ghidra Decompiler Error" in code:
                errors.append(fn)
            parts.append(hdr + (code or "// (empty)"))

        meta = {
            "module": outname,
            "functions": len(ordered),
            "decompiled": len(ordered) - len(errors),
            "failed": errors,
            "patch": patch_info,
        }
        with open(os.path.join(outdir, outname + ".pdg.c"), "w") as fo:
            fo.write("// decompiled from %s by radare2+r2ghidra (pdg)\n" % name)
            fo.write("".join(parts))
        with open(os.path.join(outdir, outname + ".meta.json"), "w") as fo:
            json.dump(meta, fo, indent=1)
        print("OK %s funcs=%d fail=%d" % (outname, len(ordered), len(errors)))
        return 0
    finally:
        try:
            r2.quit()
        except Exception:  # noqa: BLE001
            pass


if __name__ == "__main__":
    sys.exit(main())
