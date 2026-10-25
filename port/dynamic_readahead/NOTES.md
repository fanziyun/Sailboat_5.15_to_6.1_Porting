# dynamic_readahead 移植笔记 —— 已合并归档（2026-10-26）

## 合并结论

**本模块与设备内建实现同源，按"相同则合并"原则撤下，由 modsrc 套件 Batch 9-1 承担。**

- 上游源：`modko-main/decompiled/dynamic_readahead.pdg.c`（9 函数，lhasa 6.18 .ko 反编译）
- 内建等价物：modsrc（`~/kci515/modsrc`）**Batch 9-1 `dynamic_readahead_lowmem`** 组
  ——来源同为小米开源 `xiaomi-modules/mi_dynamic_readahead/dynamic_readahead.c`（Oplus © 2020-2022），
  以内核源码级落地（`mm/readahead.c` + `mm/Kconfig`，`CONFIG_ABK_DYNAMIC_READAHEAD`），
  设备 kallsyms 实锤：`abk_dra_adjust_readahead`/`abk_dra_adjust_readaround`（内建符号）
  + `/sys/module/readahead/parameters/dynamic_readahead=Y`（**激活中**）

## 语义对比（逐函数）

| 功能 | 上游 .ko | modsrc abk_dra（内建） | 判定 |
|---|---|---|---|
| `adjust_readahead`（ra 窗口减半） | background 条件 | **lowmem + background** 条件 | 同源；modsrc 多 lowmem 门（更保守），保留 modsrc |
| `adjust_readaround`（窗口收缩） | background：start=pgoff-ra/4, size=ra/2, async=ra/8 | lowmem+background：同式 async=ra/4 | 同源；async 系数差异来自两代上游，保留 modsrc |
| `page_cache_ra_order_bypass` | 有 | 无 | 5.15 无 large-folio ra_order 路径，无意义，不移植 |
| `should_fault_around` 位图 | 有 | 无 | 上游独立特性；**待评估**是否有价值，若有并入 modsrc 组（源码级）而非独立模块 |
| swapin_boost/shrink/vma_ra/window | 无 | 有 | modsrc 独有增强（设备上 Y + pages=8） |

## 处置

- 构建器清单：`module:port/dynamic_readahead` 已移除（2026-10-26）
- `port/_kernel_patches`（page_cache_ra_order_bypass hook 补丁）一并移除（无消费者）
- 本目录保留作为合并证据与 F0 管线打通的样板记录（构建已验证 REBUILD_EXIT=0 + .ko 产出）

## F0 管线打通记录（本模块作为样板完成的验证）

构建循环的 5 个坑与修法（已固化进全部 setup.sh 模板）：
1. wire 需同时拷 `Kbuild` 与 `Makefile`（make clean 只认 Makefile）
2. 聚合目录 `homeport/` 自身需 Makefile（递归 clean）
3. 子模块目录需生成 `Kconfig`
4. `cp -a src` 必须保留子目录（`src/.` 会平铺破坏 Kbuild 的 src/ 引用）
5. GKI 不导出 `for_each_online_pgdat` 系（modpost 才暴露）——模块内避免；hook 缺失用防御式注册
