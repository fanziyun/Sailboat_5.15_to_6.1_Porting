#!/usr/bin/env python3
"""Audit the decompiled corpus in ~/r2work/out (mirrors _probe/r2_decompiled)."""
import glob
import json
import os
import re
import sys

OUT = sys.argv[1] if len(sys.argv) > 1 else os.path.expanduser("~/r2work/out")

metas = sorted(glob.glob(os.path.join(OUT, "*.meta.json")))
modules = [os.path.basename(m)[:-len(".meta.json")] for m in metas]
print("meta files: %d" % len(metas))

issues = []
tot_f = tot_d = 0
func_re = re.compile(r"^// ===== (.*) @ 0x([0-9a-fA-F]+)")

for m in modules:
    base = os.path.join(OUT, m)
    cj = base + ".pdg.c"
    meta = json.load(open(base + ".meta.json"))
    if "error" in meta:
        issues.append((m, "meta has error: %s" % meta["error"]))
        continue
    if not os.path.exists(cj):
        issues.append((m, "MISSING pdg.c"))
        continue
    txt = open(cj, encoding="utf-8", errors="replace").read()
    hdr_count = len(func_re.findall(txt, re.M))
    empt = txt.count("// (empty)")
    uie = txt.count("UndefinedInstructionException")
    gde = txt.count("Ghidra Decompiler Error")
    toobig = txt.count("SKIPPED-TOOBIG")
    func_0x = len(re.findall(r"func_0x[0-9a-fA-F]+", txt))
    # meta consistency
    mf, md = meta["functions"], meta["decompiled"]
    tot_f += mf; tot_d += md
    if hdr_count != mf:
        issues.append((m, "block headers %d != meta functions %d" % (hdr_count, mf)))
    if md != mf:
        issues.append((m, "meta decompiled %d != functions %d" % (md, mf)))
    if gde != len(meta.get("failed", [])):
        issues.append((m, "in-file GhidraError %d != meta failed %d" % (gde, len(meta.get("failed", [])))))
    if uie:
        issues.append((m, "UndefinedInstructionException x%d" % uie))
    if empt:
        issues.append((m, "empty bodies x%d" % empt))
    if toobig:
        issues.append((m, "SKIPPED-TOOBIG markers x%d (pass B merged?)" % toobig))
    if mf and os.path.getsize(cj) / mf < 60:
        issues.append((m, "suspiciously small: %dB/function" % (os.path.getsize(cj) / mf)))
    if func_0x > mf * 0.5 and mf > 20:
        issues.append((m, "func_0x heavy: %d/%d" % (func_0x, mf)))

print("total functions(meta): %d decompiled: %d" % (tot_f, tot_d))
print("\n=== issues (%d) ===" % len(issues))
for m, s in issues:
    print(" %-28s %s" % (m, s))

# INDEX consistency
idx = os.path.join(OUT, "index.json")
if os.path.exists(idx):
    j = json.load(open(idx))
    print("\nindex.json: modules=%d functions=%d decompiled=%d failed=%d" %
          (len(j["modules"]), j["total_functions"], j["total_decompiled"], j["total_pdg_failed"]))
    if j["total_functions"] != tot_f:
        print("!! INDEX total_functions %d != meta sum %d" % (j["total_functions"], tot_f))
