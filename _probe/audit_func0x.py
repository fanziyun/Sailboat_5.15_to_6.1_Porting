#!/usr/bin/env python3
"""Sample func_0x targets in ipam: are they thunk region (unnamed imports) or real code?"""
import os
import re
import json
import collections

OUT = os.path.expanduser("~/r2work/out")
txt = open(os.path.join(OUT, "ipam.pdg.c"), encoding="utf-8", errors="replace").read()
targets = re.findall(r"func_0x([0-9a-fA-F]+)", txt)
c = collections.Counter(int(t, 16) for t in targets)
meta = json.load(open(os.path.join(OUT, "ipam.meta.json")))
region = int(meta["patch"]["region_base"], 16)
thunks = region
gots = region + 0x1000
in_thunk = sum(n for a, n in c.items() if region <= a < gots)
beyond = sum(n for a, n in c.items() if a >= region)
print("total func_0x refs: %d, distinct targets: %d" % (len(targets), len(c)))
print("refs into import-thunk region (>=0x%x): %d" % (region, in_thunk))
print("refs beyond region end: %d" % sum(n for a, n in c.items() if a >= gots + 0x4000))
top = c.most_common(8)
for a, n in top:
    where = "THUNK" if a >= region else "code"
    print("  0x%08x x%-4d %s" % (a, n, where))
