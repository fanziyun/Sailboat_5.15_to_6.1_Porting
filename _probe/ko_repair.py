#!/usr/bin/env python3
"""Repair pass v2: re-decompile empty-body functions of an existing .pdg.c.

Strategy:
  - small empties (size <= KO_SPLIT_SIZE, default 2048): batch mode, one session
    decompiles up to KO_BATCH of them (default 40), then recycle.
  - big empties: single fresh session per function with KO_GHIDRA_TIMEOUT
    (default 1200s) — heavy functions need the headroom.
  - anything still empty afterwards is marked failed in meta + annotated inline.

Usage: ko_repair.py <module> [outdir] [workdir]
"""
import json
import os
import re
import signal
import subprocess
import sys
import threading

import r2pipe

R2FLAGS = ["-e", "bin.relocs.apply=false", "-e", "scr.color=0", "-e", "scr.html=0",
           "-e", "scr.mouse=0", "-e", "scr.prompt=0"]
HDR = re.compile(r"^// ===== (.*) @ 0x([0-9a-fA-F]+)(?: \(size (\d+)\))? ?=====", re.M)

SESSION_LIMIT = int(os.environ.get("KO_SESSION_LIMIT", "600"))


def open_session(patched, flags):
    """Open r2, apply flags+analysis, with a hard SIGKILL watchdog.

    r2ghidra sessions degrade (pdg returns empty) and individual functions can
    hang past any config timeout (r2ghidra.timeout is not settable via -e:
    plugin configs do not exist at -e processing time). Killing the process is
    the only reliable bound.
    """
    r2 = r2pipe.open(patched, flags=R2FLAGS)
    if SESSION_LIMIT > 0:
        pid = r2.process.pid

        def killer():
            try:
                os.kill(pid, signal.SIGKILL)
            except ProcessLookupError:
                pass
        t = threading.Timer(SESSION_LIMIT, killer)
        t.daemon = True
        t.start()
    r2.cmd("e scr.color=0")
    r2.cmd(". %s" % flags)
    r2.cmd("aaa")
    return r2


def parse_blocks(txt):
    marks = []
    for m in HDR.finditer(txt):
        marks.append((m.start(), m.end(), m.group(1), int(m.group(2), 16), m.group(3)))
    blocks = []
    for i, (s, e, nm, addr, size) in enumerate(marks):
        end = marks[i + 1][0] if i + 1 < len(marks) else len(txt)
        blocks.append(dict(name=nm, addr=addr, size=int(size or 0),
                           header=txt[s:e], body=txt[e:end]))
    return blocks


def main():
    module = sys.argv[1]
    outdir = os.path.abspath(sys.argv[2] if len(sys.argv) > 2 else "~/r2work/out")
    workdir = sys.argv[3] if len(sys.argv) > 3 else "/dev/shm/repair"
    os.makedirs(workdir, exist_ok=True)
    W = os.path.expanduser("~/r2work")
    pdg_path = os.path.join(outdir, module + ".pdg.c")
    meta_path = os.path.join(outdir, module + ".meta.json")
    blocks = parse_blocks(open(pdg_path, encoding="utf-8", errors="replace").read())

    patched = os.path.join(workdir, module + ".patched.ko")
    flags = os.path.join(workdir, module + ".flags.r2")
    if not (os.path.exists(patched) and os.path.exists(flags)):
        p = subprocess.run([sys.executable, os.path.join(W, "bin", "ko_patch.py"),
                            os.path.join(W, "in", module + ".ko"), patched, flags],
                           capture_output=True, text=True)
        if p.returncode != 0:
            print("ko_patch failed", p.stderr[-500:])
            return 1

    split = int(os.environ.get("KO_SPLIT_SIZE", "2048"))
    only_min = int(os.environ.get("KO_MIN_EMPTY_SIZE", "0"))
    only_max = int(os.environ.get("KO_MAX_EMPTY_SIZE", "0"))
    batch = int(os.environ.get("KO_BATCH", "40"))

    small_q, big_q = [], []
    for b in blocks:
        if b["body"].strip().startswith("// (empty)"):
            if not (only_min <= b["size"] and (only_max == 0 or b["size"] <= only_max)):
                continue
            (small_q if b["size"] <= split else big_q).append(b["addr"])
    names = {b["addr"]: b["name"] for b in blocks}
    print("%s: empties small=%d big=%d" % (module, len(small_q), len(big_q)), flush=True)

    repaired, failed = {}, []
    max_rounds = int(os.environ.get("KO_MAX_ROUNDS", "4"))
    skip_pdg = os.environ.get("KO_SKIP_PDG", "0") == "1"

    # ---- batch mode for small empties (watchdog-bounded sessions) ----
    rnd = 0
    while small_q and rnd < max_rounds and not skip_pdg:
        rnd += 1
        try:
            r2 = open_session(patched, flags)
        except Exception as e:  # noqa: BLE001
            print("  session open failed: %r" % (e,), flush=True)
            break
        done = 0
        for _ in range(min(batch, len(small_q))):
            addr = small_q.pop(0)
            try:
                code = r2.cmd("pdg @ 0x%x" % addr)
            except Exception:  # noqa: BLE001 - watchdog killed the session
                small_q.append(addr)
                break
            if code and code.strip() and "Ghidra Decompiler Error" not in code:
                repaired[addr] = code
                done += 1
            else:
                small_q.append(addr)  # retry next session/round
        try:
            r2.quit()
        except Exception:  # noqa: BLE001
            pass
        print("  round %d small: repaired=%d remaining=%d" % (rnd, done, len(small_q)), flush=True)
        if done == 0 and rnd >= 2:
            break  # two barren rounds: leave the rest to the singles pass below
    for addr in small_q:
        failed.append(addr)

    # ---- singles mode for big empties (fresh session each) ----
    for addr in [] if skip_pdg else big_q:
        try:
            r2 = open_session(patched, flags)
        except Exception as e:  # noqa: BLE001
            print("  session open failed: %r" % (e,), flush=True)
            failed.append(addr)
            continue
        try:
            code = r2.cmd("pdg @ 0x%x" % addr)
        except Exception:  # noqa: BLE001
            code = ""
        finally:
            try:
                r2.quit()
            except Exception:  # noqa: BLE001
                pass
        if code and code.strip() and "Ghidra Decompiler Error" not in code:
            repaired[addr] = code
            print("  big repaired %s (0x%x)" % (names.get(addr, "?"), addr), flush=True)
        else:
            failed.append(addr)

    # ---- disassembly fallback for whatever is still empty ----
    # pdg on cfi_jt/trace stubs either inline-expands to hundreds of KB or hits
    # the internal timeout and returns empty; pdf is instant and bounded.
    if os.environ.get("KO_PDF_FALLBACK", "1") == "1" and failed:
        todo = list(failed)
        failed = []
        fb = 0
        while todo:
            r2 = open_session(patched, flags)
            try:
                for _ in range(min(200, len(todo))):
                    addr = todo.pop(0)
                    try:
                        dis = r2.cmd("pdf @ 0x%x" % addr)
                    except Exception:  # noqa: BLE001 - watchdog killed session
                        todo.insert(0, addr)
                        break
                    if dis and dis.strip():
                        repaired[addr] = ("// [pdg failed: disassembly fallback]\n"
                                          "/*\n%s\n*/" % dis)
                        fb += 1
                    else:
                        todo.append(addr)
            finally:
                try:
                    r2.quit()
                except Exception:  # noqa: BLE001
                    pass
            print("  pdf fallback: %d done, %d left" % (fb, len(todo)), flush=True)
            if not todo or fb == 0:
                break
        failed = todo
        print("  pdf fallback total: %d" % fb, flush=True)

    # ---- splice back, address order ----
    for b in blocks:
        if b["addr"] in repaired:
            body = "\n" + repaired[b["addr"]].lstrip("\n")
            b["body"] = body if body.endswith("\n") else body + "\n"
        elif b["addr"] in failed:
            b["body"] = "\n// (empty) -- pdg produced nothing even in a fresh session\n"
    blocks.sort(key=lambda b: b["addr"])
    with open(pdg_path, "w") as f:
        f.write("// decompiled from %s by radare2+r2ghidra (pdg); repaired by ko_repair\n" % module)
        for b in blocks:
            f.write("\n// ===== %s @ 0x%08x (size %d) =====\n" % (b["name"], b["addr"], b["size"]))
            f.write(b["body"] if b["body"].startswith("\n") else "\n" + b["body"])

    meta = json.load(open(meta_path))
    meta["decompiled"] = meta["functions"] - len(failed)
    meta["failed"] = [names.get(a, "0x%x" % a) for a in failed]
    meta["repaired"] = len(repaired)
    json.dump(meta, open(meta_path, "w"), indent=1)
    print("DONE %s: repaired=%d still_empty=%d" % (module, len(repaired), len(failed)))
    return 0


if __name__ == "__main__":
    sys.exit(main())
