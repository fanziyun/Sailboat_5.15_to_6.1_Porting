# vermeer (Redmi K70 / SM8550) Kernel 5.15 → 6.1 Porting Research

A feasibility study of a **major kernel version upgrade** on a Redmi K70 (codename `vermeer`, Snapdragon 8 Gen 2 / SM8550, shipping HyperOS: Android 16 userspace + Android 13 vendor + 5.15.220 GKI kernel): can the 408 vendor kernel modules built for 5.15 run on a 6.1 GKI kernel?

> **Status**: Phase 1 complete (CFI barrier solved); Phase 2 proved the "pure compatibility-shim" route is not viable; the current deliverable is a **complete C decompilation corpus of 408 vendor modules / 68,492 functions** — the 5.15-side ABI/struct evidence base. 中文版：[README.md](README.md)

## Background: this is not an "Android 13 phone"

| Layer | Version |
|---|---|
| Userspace (system) | Android 16 / HyperOS 3 |
| vendor partition | Android 13 / SDK 33 |
| Kernel | 5.15.220-202609162-Batch30 (GKI) |

The SM8550 KMI baseline is 5.15: Xiaomi's open-source tree stops at 5.15.78, every LineageOS branch is 5.15, and upstream GKI 6.1 has zero SM8550 support (display/GPU/camera/WiFi all missing). **The vendor modules are the only vehicle for getting this device onto 6.1.**

## Key findings (details in [PHASE2_PROGRESS.md](PHASE2_PROGRESS.md))

1. **The CFI barrier is solvable** (Phase 1, proven in QEMU): with `CONFIG_CFI_PERMISSIVE=y`, a CFI-instrumented 5.15 module loads and runs on a 6.1 kernel.
2. **A compatibility shim ≠ compatibility** (Phase 2, proven on-device): after neutralizing every loader-side detector (vermagic / CRC / CFI), a 6.1 kernel plus the 117 first-stage platform modules results in a MI-logo bootloop. The loader has **no checkpoint for struct layout drift** — a mismatch means silent memory corruption. The core of that fatal first-stage batch (sched-walt, qcom_cpu_vendor_hooks, gcc-kalama, rpmh-regulator, qcom_tsens, the whole gunyah family, …) lives in the vendor_boot ramdisk.
3. **The real 5.15→6.1 wall is struct layout and function signature drift.** The decompilation corpus in this repo is the 5.15-side evidence base for that wall.

## The decompilation corpus (`_probe/r2_decompiled/`)

- **408 modules / 68,492 functions / all succeeded / 0 failures**, 205 MB
  - 293 from `vendor_dlkm_a.img` (`/vendor_dlkm/lib/modules`)
  - 115 from the `vendor_boot` ramdisk (first-stage modules not present in vendor_dlkm; list in `_probe/vendor_boot_missing_list.txt`)
  - Index: [`_probe/r2_decompiled/INDEX.md`](_probe/r2_decompiled/INDEX.md); each module also has a `.meta.json` (function count / failures / relocation stats)
- Toolchain: radare2 6.2.0 + r2ghidra 6.2.0 (`pdg`), deployed without root and without building from source
- Quality highlights: imported calls render with real symbol names; **CFI type-dispatch tables are recovered with function names** (`__cfi_check` typeid → function)
- Known imperfections: `.bss` variables appear as r2 flag names; GOT loads appear as `got.<sym>` pseudo-slots

### Key technical detail: r2 does not apply kernel-module relocations

A `.ko` is an ET_REL object; `bl` instruction words ship as zero (filled at insmod time). r2 6.2's `bin.relocs.apply` **zeroes** the AArch64 relocation types it does not implement (JUMP26/CALL26), which makes the whole disassembly invalid and Ghidra throw `UndefinedInstructionException`. The fix is [`_probe/ko_patch.py`](_probe/ko_patch.py): parse and apply all 12 AArch64 relocation classes ourselves (B/BL, adrp/add, GOT family, ABS64/PREL32, …) into a copy of the file — module-local symbols point at their real addresses, imported symbols point at synthesized thunks (registered as empty functions via `af+` so pdg renders real names) — then load with `relocs.apply=false`. This is what makes the corpus usable at all.

### An even sharper weapon than decompilation (pending)

526/624 modules ship a **`.BTF`** section (11 MB) — a machine-readable snapshot of the kernel struct layouts *as the module sees them*. Rebuilding k61 with `CONFIG_DEBUG_INFO_BTF` yields the 6.1 side; a `bpftool btf dump` diff between the two pinpoints exactly which struct drifted and by how many bytes.

## Where to start reading

**[HANDOFF.md](HANDOFF.md)** — the handoff document: all measured facts, Phase 1 conclusions, Phase 2 plan, environment state, the mistake log, and current TODOs. New sessions should read it first.

## Root-directory documents

| File | Content | Status |
|---|---|---|
| `HANDOFF.md` | **Master handoff document** | ✅ current |
| `PHASE2_PROGRESS.md` | Phase 2 session log (flashing, slot experiments, decompilation corpus, resource pitfalls) | ✅ latest |
| `DEVICE_FACTS.md` | Device facts, quantified 17,675 CRC bindings, boot-chain measurements | ✅ current |
| `PHASE1_RESULT.md` | Phase 1 final: CFI barrier solved | ✅ current |
| `PHASE1_RETRACTED.md` | Phase 1 mistakes and corrections | 📌 kept for the record |
| `PHASE2_PREP.md` | Phase 2 plan + partition correction (kernel is in `boot_a`) | ✅ current |
| `CORRECTIONS.md` | The full mistake log (8+ entries) | ✅ **must read** |
| `PLAN_V2.md` | The four-phase master plan | ✅ current |
| `ROUTE_COMPARISON.md` | Comparison and ranking of six candidate routes | ✅ current |
| `ABK_CAPABILITY.md` | Measured capability boundaries of the ABK build toolchain | ✅ current |

## archive/ (superseded, kept as evidence)

`KEY_FINDING_NO_6_1.md` — no 6.1 source exists (dual-source verification); `ABI_BRIDGE_VERDICT.md` — the abi_bridge direction is inverted, unusable; `DISPLAY_GPU_CAMERA_WIFI.md` — per-component upstream 404 verification; `VENDOR_IMG_FINDINGS.md` — vendor image unpacking (VINTF is not a blocker); `GKI_VENDOR_COMMS.md` — GKI/vendor communication; `INSMOD_VERMAGIC_TEST.md` — on-device vermagic leniency test.

> Most of these conclusions have been folded into `HANDOFF.md`; they are kept because the raw evidence chains (HTTP status codes, md5 comparisons, log excerpts) are useful if a conclusion is ever challenged.

## Repository layout

```
├── HANDOFF.md              master handoff (start here)
├── PHASE2_PROGRESS.md      Phase 2 session log (latest status)
├── PHASE2_PREP.md / PHASE1_RESULT.md / PHASE1_RETRACTED.md
├── CORRECTIONS.md          mistake log (house rule: verify, then conclude)
├── PLAN_V2.md / ROUTE_COMPARISON.md / ABK_CAPABILITY.md / DEVICE_FACTS.md
└── _probe/
    ├── ko_patch.py         relocation resolver (prerequisite for everything)
    ├── ko_decompile.py     batch decompile driver (sharding / session recycling / memory control)
    ├── batch_decompile.sh  batch entry point for all 408 modules
    ├── build_index.py      INDEX.md generator
    ├── merge_shards.py / collect_monsters.sh
    ├── versions2.py / bootimg.py / build_vb.py …  earlier analysis tools
    ├── r2_decompiled/      ★ the decompiled corpus (committed)
    ├── vendor_ko/ vendor_boot_ko/   raw .ko files (not committed; re-extractable from images)
    └── backup/             partition image backups (not committed; local only)
```

## Reproducing

```bash
# Dependencies: radare2 6.2.0 + r2ghidra 6.2.0 (Arch packages, or unpack into any prefix)
# A root-less install needs R2_LIBR_PLUGINS and SLEIGHHOME; see PHASE2_PROGRESS.md
python3 _probe/ko_patch.py  <in.ko> <patched.ko> <flags.r2>   # resolve relocations
python3 _probe/ko_decompile.py <in.ko> <outdir> [workdir]     # decompile one module
bash   _probe/batch_decompile.sh                              # batch (idempotent, resumable)
python3 _probe/build_index.py <outdir>                        # rebuild the index
```

## The three most important lessons

1. **Verify, then conclude.** All 8+ mistakes in this project came from stopping the investigation once the symptom matched expectations.
2. **Read the partition bytes for magic values**; don't infer from conventions (I once mislocated the kernel into `init_boot` this way).
3. **Test modules are `insmod`-only, never `rmmod`** (the on-device panic went through the delete_module path).

## Purpose & disclaimer

Personal device research. Every experiment ran under the fallback-capable A/B slot scheme (full backups; rollback commands in HANDOFF §4). Every conclusion in the docs notes how it was verified, and the mistakes are preserved in CORRECTIONS.md.
