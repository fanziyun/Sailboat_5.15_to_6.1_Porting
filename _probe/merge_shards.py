#!/usr/bin/env python3
"""Merge mac80211.shard*.pdg.c + mac80211.big*.pdg.c, sorted by function address."""
import glob
import json
import os
import re
import sys

out = sys.argv[1]
name = sys.argv[2]

files = sorted(glob.glob(os.path.join(out, name + ".shard*.pdg.c")) +
               glob.glob(os.path.join(out, name + ".big*.pdg.c")))
assert files, "no part files"
hdr_re = re.compile(r"^// ===== (.*) @ 0x([0-9a-fA-F]+) ")

blocks = []
tot_f = tot_d = 0
failed = []
patch = None
for p in files:
    txt = open(p).read()
    lines = txt.split("\n")
    if lines and lines[0].startswith("// decompiled from"):
        txt = "\n".join(lines[1:])
    # split into function blocks
    splits = re.split(r"(?m)(?=// ===== )", txt)
    for b in splits:
        if not b.strip():
            continue
        m = hdr_re.match(b)
        key = int(m.group(2), 16) if m else 0xFFFFFFFFFFFF
        blocks.append((key, b))
    mp = None
    for cand in (p.replace(".pdg.c", ".meta.json"),):
        if os.path.exists(cand):
            mp = cand
    if mp:
        m = json.load(open(mp))
        if patch is None:
            patch = m.get("patch")
        if not name + ".shard" in p and not name + ".big" in p:
            pass
        # big files carry per-function metas; shard metas carry totals.
        if ".shard" in p:
            tot_f += m.get("functions", 0)
            tot_d += m.get("decompiled", 0)
            failed.extend(m.get("failed", []))
        else:
            tot_f += 1
            if m.get("failed"):
                failed.extend(m["failed"])
            elif "FAILED" in open(p).read()[:2000]:
                pass
            else:
                tot_d += 1

blocks.sort(key=lambda x: x[0])
with open(os.path.join(out, name + ".pdg.c"), "w") as f:
    f.write("// decompiled from %s by radare2+r2ghidra (pdg)\n" % name)
    for _, b in blocks:
        f.write(b if b.startswith("\n") or b.startswith("//") else "\n" + b)
meta = {"module": name, "functions": tot_f, "decompiled": tot_d,
        "failed": failed, "patch": patch}
with open(os.path.join(out, name + ".meta.json"), "w") as f:
    json.dump(meta, f, indent=1)
for p in files:
    os.remove(p)
    mp = p.replace(".pdg.c", ".meta.json")
    if os.path.exists(mp):
        os.remove(mp)
print("merged %d parts: functions=%d decompiled=%d failed=%d"
      % (len(files), tot_f, tot_d, len(failed)))
