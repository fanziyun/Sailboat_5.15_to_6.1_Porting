#!/usr/bin/env python3
"""Build INDEX.md + index.json from the .meta.json files in the output dir."""
import glob
import json
import os
import sys

outdir = sys.argv[1] if len(sys.argv) > 1 else os.path.expanduser("~/r2work/out")

rows = []
for mp in sorted(glob.glob(os.path.join(outdir, "*.meta.json"))):
    m = json.load(open(mp))
    if "error" in m:
        rows.append((m["module"], -1, -1, m.get("error", "error"), 0))
        continue
    rows.append((m["module"], m["functions"], m["decompiled"],
                 len(m.get("failed", [])), m.get("patch", {}).get("skipped", 0)))

ok = [r for r in rows if r[1] >= 0]
bad = [r for r in rows if r[1] < 0]
total_funcs = sum(r[1] for r in ok)
total_dec = sum(r[2] for r in ok)
total_fail = sum(r[3] for r in ok)

lines = []
lines.append("# vendor .ko 反编译索引（r2 + r2ghidra pdg）\n")
lines.append("- 输入：`_probe/vendor_ko/`（Redmi K70 vermeer / SM8550，Android 13 vendor_dlkm，vermagic 5.15.78）")
lines.append("- 工具：radare2 6.2.0 + r2ghidra 6.2.0（pdg），`ko_patch.py` 先自行解析全部 AArch64 重定位（r2 的 relocs.apply 不支持 JUMP26/CALL26），导入符号以 `af+` 空函数呈现")
lines.append("- 生成：`_probe/r2_decompiled/`，每模块一个 `<name>.pdg.c`（全函数 C 伪码）+ `<name>.meta.json`")
lines.append("")
lines.append("| 模块 | 函数数 | 反编译成功 | pdg失败 | reloc跳过 |")
lines.append("|---|---:|---:|---:|---:|")
for name, fn, dec, fail, skipped in rows:
    if fn < 0:
        lines.append("| %s | ERR | ERR | - | - |" % name)
    else:
        lines.append("| %s | %d | %d | %d | %d |" % (name, fn, dec, fail, skipped))
lines.append("")
lines.append("**合计**：模块 %d（成功 %d / 失败 %d），函数 %d，pdg 成功 %d，pdg 失败 %d" %
             (len(rows), len(ok), len(bad), total_funcs, total_dec, total_fail))

with open(os.path.join(outdir, "INDEX.md"), "w") as f:
    f.write("\n".join(lines) + "\n")
with open(os.path.join(outdir, "index.json"), "w") as f:
    json.dump({"modules": rows, "total_functions": total_funcs,
               "total_decompiled": total_dec, "total_pdg_failed": total_fail},
              f, indent=1)
print("INDEX written: %d modules, %d functions, %d decompiled, %d failed" %
      (len(rows), total_funcs, total_dec, total_fail))
