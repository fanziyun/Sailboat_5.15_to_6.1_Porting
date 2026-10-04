#!/usr/bin/env python3
"""Classify empty-body blocks: are they real functions or af+ import thunks?"""
import re, sys, os

path = sys.argv[1]
OUT = os.path.dirname(path)
name = os.path.basename(path).replace(".pdg.c", "")
txt = open(path, encoding="utf-8", errors="replace").read()

hdr_re = re.compile(r"^// ===== (.*) @ 0x([0-9a-fA-F]+)(?: \(size (\d+)\))?", re.M)
blocks = []
for m in hdr_re.finditer(txt):
    blocks.append((m.group(1), int(m.group(2), 16), m.group(3)))

# find empty markers and their owning block
empty_names = []
pos = 0
for m in re.finditer(r"// \(empty\)", txt):
    # owning header = last header before this marker
    owner = None
    for h in blocks:
        if h[1] is not None and txt.find(h[0], max(0, m.start() - 4000), m.start()) != -1:
            pass
    # simpler: search backwards for header
    idx = txt.rfind("// ===== ", 0, m.start())
    hm = hdr_re.match(txt[idx:idx + 200]) if idx >= 0 else None
    if hm:
        empty_names.append((hm.group(1), int(hm.group(2), 16), hm.group(3)))

print("total blocks: %d, empty: %d" % (len(blocks), len(empty_names)))
meta_p = os.path.join(OUT, name + ".meta.json")
thunk_base = None
if os.path.exists(meta_p):
    import json
    j = json.load(open(meta_p))
    thunk_base = int(j["patch"]["thunk_base"] if "thunk_base" in j["patch"] else j["patch"].get("region_base", "0"), 16)
in_thunk = sum(1 for n, a, s in empty_names if thunk_base and a >= thunk_base)
with_size = sum(1 for n, a, s in empty_names if s and int(s) > 16)
print("empty blocks inside thunk region (imports): %d" % in_thunk)
print("empty blocks with size>16 (REAL functions!): %d" % with_size)
for n, a, s in empty_names[:8]:
    print("  e.g. %s @ 0x%x size=%s" % (n[:70], a, s))
