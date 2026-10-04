#!/bin/bash
echo "=== summary ==="
~/venv/bin/python - <<'EOF'
import glob, json, os
out = os.path.expanduser("~/r2work/out")
tot_f = tot_d = tot_e = 0
errs = []
for p in sorted(glob.glob(out + "/*.meta.json")):
    m = json.load(open(p))
    if "error" in m:
        errs.append((m["module"], m["error"]))
        continue
    tot_f += m["functions"]; tot_d += m["decompiled"]; tot_e += len(m["failed"])
    if m["failed"]:
        errs.append((m["module"], "pdg fail: " + ", ".join(m["failed"][:5])))
print("modules=%d functions=%d decompiled=%d pdg_failed=%d" % (len(glob.glob(out+'/*.meta.json')), tot_f, tot_d, tot_e))
for e in errs[:10]:
    print(" ", e)
EOF
echo "=== biggest outputs ==="
ls -la ~/r2work/out/*.pdg.c | sort -k5 -n | tail -5
