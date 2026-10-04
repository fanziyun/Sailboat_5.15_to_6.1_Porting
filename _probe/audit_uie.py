#!/usr/bin/env python3
"""Locate UndefinedInstructionException sites: owning function + module patch stats."""
import json
import os
import re
import sys

OUT = sys.argv[1] if len(sys.argv) > 1 else os.path.expanduser("~/r2work/out")
HDR = re.compile(r"^// ===== (.*) @ 0x([0-9a-fA-F]+)", re.M)

for mod in sys.argv[2:]:
    pdg = os.path.join(OUT, mod + ".pdg.c")
    meta = json.load(open(os.path.join(OUT, mod + ".meta.json")))
    txt = open(pdg, encoding="utf-8", errors="replace").read()
    print("== %s: patch.skipped=%s relocs=%s" % (
        mod, meta["patch"].get("skipped"), meta["patch"].get("relocs")))
    for m in re.finditer(r"UndefinedInstructionException", txt):
        idx = txt.rfind("// ===== ", 0, m.start())
        hm = HDR.match(txt[idx:idx + 200])
        if hm:
            print("   UIE in %s @ 0x%s" % (hm.group(1), hm.group(2)))
