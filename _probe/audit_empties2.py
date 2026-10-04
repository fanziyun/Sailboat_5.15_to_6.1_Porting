#!/usr/bin/env python3
import re, sys, os, json

path = sys.argv[1]
OUT = os.path.dirname(path)
name = os.path.basename(path).replace(".pdg.c", "")
txt = open(path, encoding="utf-8", errors="replace").read()
hdr_re = re.compile(r"^// ===== (.*) @ 0x([0-9a-fA-F]+)(?: \(size (\d+)\))?", re.M)

empties = []
pos = 0
for m in re.finditer(r"// \(empty\)", txt):
    idx = txt.rfind("// ===== ", 0, m.start())
    hm = hdr_re.match(txt[idx:idx + 200]) if idx >= 0 else None
    if hm:
        empties.append((hm.group(1), int(hm.group(2), 16), int(hm.group(3) or 0)))

big = [e for e in empties if e[2] > 64]
print("empties=%d  size>64: %d" % (len(empties), len(big)))
big.sort(key=lambda e: -e[2])
for n, a, s in big[:15]:
    print("  %6d B  0x%08x  %s" % (s, a, n[:80]))
with open("/tmp/empty_samples.txt", "w") as f:
    for n, a, s in big[:5]:
        f.write("0x%x %s\n" % (a, n))
