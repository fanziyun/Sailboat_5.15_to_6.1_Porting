// decompiled from mi_mempool by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 356) =====

//WARNING: Switch with 1 destination removed at 0x080032ec

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x1b6c344e75cfc4ea) {
        if (arg1 == -0xec78b8726b9c1e8) {
            if ((pcVar1 + -0x8001190 >> 3 | pcVar1 << 0x3d) < 4) {
                return;
            }
            goto code_r0x080032ac;
        }
        if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.mi_mempool_init.cfi_jt;
        }
        else {
            if (arg1 != 0x16ebb04f4d02f2ca) goto code_r0x080032ac;
            pcVar2 = sym.mi_mempool_refill_check.cfi_jt;
        }
    }
    else {
        if (arg1 < 0x641d19c7be126e92) {
            if (arg1 == 0x1b6c344e75cfc4ea) {
                pcVar2 = sym.config_store.cfi_jt;
            }
            else {
                if (arg1 != 0x389eaf2a25fd5ae2) goto code_r0x080032ac;
                pcVar2 = sym.mi_mempool_alloc_reclaim.cfi_jt;
            }
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x080032ac;
        }
        if (arg1 == 0x641d19c7be126e92) {
            pcVar2 = sym.mi_mempool_refill_work.6a23108e27cdbc0fd151c61886d1b542.cfi_jt;
        }
        else {
            if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080032ac;
            pcVar2 = sym.mi_mempool_exit.cfi_jt;
        }
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080032ac:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8003300);
    (*pcVar1)();
}


// ===== sym.mi_mempool_init.cfi_jt @ 0x08001170 (size 8) =====

ulong sym.mi_mempool_init.cfi_jt(void)

{
    uint32_t uVar1;
    uint uVar2;
    code cVar3;
    code *pcVar4;
    int iVar5;
    int64_t iVar6;
    uint *puVar7;
    ulong uVar8;
    int64_t iVar9;
    int64_t *piVar10;
    int64_t iVar11;
    ulong *in_x18;
    uint64_t uVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = obj.g_mi_mempool;
    iVar6 = kobject_create_and_add("mi_mempool",_nr_swap_pages);
    if (iVar6 == 0) {
        _printk(0x800092d);
    }
    else {
        iVar5 = sysfs_create_files(iVar6,obj.proc_tree);
        pcVar4 = _segment.ehdr;
        if (iVar5 == 0) {
            iVar9 = 0;
            *(_segment.ehdr + 0x38) = iVar6;
            *(pcVar4 + 0x40) = 0;
            *(pcVar4 + 0x1c) = 0;
            *(pcVar4 + 0x28) = 0;
            *(pcVar4 + 0x34) = 0;
            pcVar4[0x30] = 0x1;
            *(pcVar4 + 0x2c) = 0;
            *(pcVar4 + 0x70) = 0;
            do {
                *(pcVar4 + iVar9 + 0x44) = 0;
                iVar9 = iVar9 + 4;
            } while (iVar9 != 0x2c);
            *(pcVar4 + 0x74) = 0;
            cVar3 = android_kmalloc_64_create;
            obj.comm_whitelist_sizes.0 = 0x1;
            obj.comm_whitelist_sizes.1 = 0x1;
            *(pcVar4 + 0x78) = 0;
            obj.comm_whitelist_sizes.2 = 0x1;
            iVar6 = 0x38;
            if (cVar3 != 0x0) {
                iVar6 = 0x30;
            }
            *(pcVar4 + 0x20) = 0xb00;
            obj.comm_whitelist_sizes.3 = 0x1;
            obj.comm_whitelist_sizes.4 = 0x1;
            obj.comm_whitelist_sizes.5 = 0x1;
            iVar6 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar6),0xcc0,0x20);
            *_segment.ehdr = iVar6;
            if (iVar6 != 0) {
                iVar6 = 0;
                *0x8000638 = 0xffffffffffffffff;
                *0x8000640 = 0xffffffffffffffff;
                _reloc.direct_relcaim_threshold_mb_store.cfi_jt = 0xffffffffffffffff;
                *0x8000630 = 0xffffffffffffffff;
                _reloc.direct_relcaim_threshold_mb_show.cfi_jt = 0xffffffffffffffff;
                *0x8000648 = 0xffffffff;
                do {
                    uVar1 = *(obj.orders + iVar6 * 4);
                    uVar12 = uVar1;
                    puVar7 = kmem_cache_alloc_trace(_ktime_get,0xcc0,0xc0);
                    if (puVar7 != NULL) {
                        uVar2 = *(obj.order_flags + iVar6 * 4);
                        *(puVar7 + 0xe) = 0;
                        puVar7[1] = uVar2;
                        puVar7[2] = uVar1;
                        iVar5 = *(obj.high_mark_mb + iVar6 * 4);
                        *(puVar7 + 4) = puVar7 + 4;
                        *(puVar7 + 6) = puVar7 + 4;
                        *puVar7 = 0;
                        puVar7[8] = 0;
                        puVar7[9] = 0;
                        puVar7[10] = 0;
                        puVar7[0x18] = 0;
                        iVar5 = ((iVar5 << 0x14) >> 0xc) >> (uVar12 & 0x3f);
                        puVar7[0x19] = 0;
                        puVar7[0x1a] = 0;
                        puVar7[0x1b] = 0;
                        puVar7[0x1c] = 0;
                        puVar7[0x1d] = 0;
                        puVar7[0x1e] = 0;
                        puVar7[0x1f] = 0;
                        puVar7[0x20] = 0;
                        puVar7[0x21] = 0;
                        puVar7[0x22] = 0;
                        puVar7[0x23] = 0;
                        puVar7[0x24] = 0;
                        puVar7[0x25] = 0;
                        puVar7[0x26] = 0;
                        puVar7[0x27] = 0;
                        puVar7[0x28] = 0;
                        puVar7[0x29] = 0;
                        puVar7[0x2a] = 0;
                        puVar7[0x2b] = 0;
                        puVar7[0x2c] = 0;
                        puVar7[0x2d] = 0;
                        puVar7[0x2e] = 0;
                        puVar7[0x2f] = 0;
                        puVar7[0xb] = ((iVar5 * 4 + iVar5 & 0x1fffffffffffffffU) << 1) / 0x19;
                        puVar7[0xc] = iVar5;
                        *(puVar7 + 0x16) = 0;
                        puVar7[0x17] = 0;
                    }
                    pcVar4 = _segment.ehdr;
                    *(*_segment.ehdr + iVar6 * 8) = puVar7;
                    if (0xb < uVar12) {
    //WARNING: Does not return
                        pcVar4 = SoftwareBreakpoint(1,0x80039a8);
                        (*pcVar4)();
                    }
                    *(reloc.direct_relcaim_threshold_mb_show.cfi_jt + uVar12 * 4) = iVar6;
                    if (*(*pcVar4 + iVar6 * 8) == 0) {
                        return 0xffffffff;
                    }
                    iVar6 = iVar6 + 1;
                } while (iVar6 != 4);
                iVar6 = _segment.ehdr;
                if (_segment.ehdr != -1) {
                    *(*(*pcVar4 + iVar6 * 8) + 0x2c) = 0xffffffff;
                }
                iVar9 = _segment.ehdr;
                if (_segment.ehdr == -1) {
                    iVar9 = -1;
                }
                else {
                    *(*(*pcVar4 + iVar9 * 8) + 0x2c) = 0xffffffff;
                }
                piVar10 = *pcVar4;
                iVar11 = *piVar10;
                iVar5 = (*(iVar11 + 0x30) * 10) / 100;
                *(iVar11 + 0x40) = iVar5;
                *(iVar11 + 0x44) = iVar5;
                *(iVar11 + 0x48) = iVar5;
                *(iVar11 + 0x4c) = iVar5;
                *(iVar11 + 0x50) = iVar5;
                *(iVar11 + 0x54) = iVar5;
                iVar11 = piVar10[1];
                iVar5 = (*(iVar11 + 0x30) * 10) / 100;
                *(iVar11 + 0x40) = iVar5;
                *(iVar11 + 0x44) = iVar5;
                *(iVar11 + 0x48) = iVar5;
                *(iVar11 + 0x4c) = iVar5;
                *(iVar11 + 0x50) = iVar5;
                *(iVar11 + 0x54) = iVar5;
                iVar11 = piVar10[2];
                iVar5 = (*(iVar11 + 0x30) * 10) / 100;
                *(iVar11 + 0x40) = iVar5;
                *(iVar11 + 0x44) = iVar5;
                *(iVar11 + 0x48) = iVar5;
                *(iVar11 + 0x4c) = iVar5;
                *(iVar11 + 0x50) = iVar5;
                *(iVar11 + 0x54) = iVar5;
                iVar11 = piVar10[3];
                iVar5 = (*(iVar11 + 0x30) * 10) / 100;
                *(iVar11 + 0x40) = iVar5;
                *(iVar11 + 0x44) = iVar5;
                *(iVar11 + 0x48) = iVar5;
                *(iVar11 + 0x4c) = iVar5;
                *(iVar11 + 0x50) = iVar5;
                *(iVar11 + 0x54) = iVar5;
                iVar11 = *0x8000624;
                iVar5 = (*(piVar10[iVar11] + 0x30) * 0x28) / 100;
                *(piVar10[iVar11] + 0x40) = iVar5;
                *(piVar10[iVar11] + 0x44) = iVar5;
                *(piVar10[iVar11] + 0x48) = iVar5;
                *(piVar10[iVar11] + 0x4c) = iVar5;
                *(piVar10[iVar11] + 0x50) = iVar5;
                *(piVar10[iVar11] + 0x54) = iVar5;
                *(piVar10[_reloc.direct_relcaim_threshold_mb_show.cfi_jt] + 0x50) =
                     (*(piVar10[_reloc.direct_relcaim_threshold_mb_show.cfi_jt] + 0x30) * 0x3c) / 100;
                iVar5 = (*(piVar10[iVar6] + 0x30) * 100) / 100;
                *(piVar10[iVar6] + 0x40) = iVar5;
                *(piVar10[iVar6] + 0x44) = iVar5;
                *(piVar10[iVar6] + 0x48) = iVar5;
                *(piVar10[iVar6] + 0x4c) = iVar5;
                *(piVar10[iVar6] + 0x50) = iVar5;
                *(piVar10[iVar6] + 0x54) = iVar5;
                iVar5 = (*(piVar10[iVar9] + 0x30) * 100) / 100;
                *(piVar10[iVar9] + 0x40) = iVar5;
                *(piVar10[iVar9] + 0x44) = iVar5;
                *(piVar10[iVar9] + 0x48) = iVar5;
                *(piVar10[iVar9] + 0x4c) = iVar5;
                *(piVar10[iVar9] + 0x50) = iVar5;
                *(piVar10[iVar9] + 0x54) = iVar5;
                _segment.ehdr = kmem_cache_create("proc_node",0x20,0,0,0);
                if (_segment.ehdr == NULL) {
                    if (*0x38 != 0) {
                        kobject_put();
                        *(_segment.ehdr + 0x38) = 0;
                    }
                    sym.mi_dynamic_page_pools_destory();
                    uVar8 = 0x80008a3;
                }
                else {
                    uVar12 = kthread_create_on_node
                                       (sym.mi_mempool_refill_work.6a23108e27cdbc0fd151c61886d1b542.cfi_jt,0,
                                        0xffffffff,"mi_mempool");
                    if (uVar12 < 0xfffffffffffff001) {
                        wake_up_process(uVar12);
                        *(_segment.ehdr + 8) = uVar12;
                        iVar5 = tracepoint_probe_register
                                          (__tracepoint_android_vh_alloc_pages_reclaim_bypass,
                                           sym.mi_mempool_alloc_reclaim.cfi_jt,0);
                        if (iVar5 == 0) {
                            iVar5 = tracepoint_probe_register
                                              (__tracepoint_android_vh_alloc_pages_failure_bypass,
                                               sym.mi_mempool_alloc_oom.cfi_jt,0);
                            if (iVar5 == 0) {
                                iVar5 = tracepoint_probe_register
                                                  (__tracepoint_android_vh_mmput,sym.mi_mempool_refill_check.cfi_jt,0)
                                ;
                                if (iVar5 == 0) {
                                    _printk(0x800090c);
                                    return 0;
                                }
                                tracepoint_probe_unregister
                                          (__tracepoint_android_vh_alloc_pages_reclaim_bypass,
                                           sym.mi_mempool_alloc_reclaim.cfi_jt,0);
                                tracepoint_probe_unregister
                                          (__tracepoint_android_vh_alloc_pages_failure_bypass,
                                           sym.mi_mempool_alloc_oom.cfi_jt,0);
                                uVar8 = 0x80006b1;
                            }
                            else {
                                tracepoint_probe_unregister
                                          (__tracepoint_android_vh_alloc_pages_reclaim_bypass,
                                           sym.mi_mempool_alloc_reclaim.cfi_jt,0);
                                uVar8 = 0x8000795;
                            }
                        }
                        else {
                            uVar8 = 0x80009c0;
                        }
                        _printk(uVar8);
                        sym.free_all_proc_nodes_and_caches();
                        if (*(_segment.ehdr + 0x38) != 0) {
                            kobject_put();
                            *(_segment.ehdr + 0x38) = 0;
                        }
                        sym.mi_dynamic_page_pools_destory();
                        if (*(_segment.ehdr + 8) == 0) {
                            return 0xffffffff;
                        }
                        kthread_stop();
                        return 0xffffffff;
                    }
                    *(_segment.ehdr + 8) = uVar12;
                    sym.free_all_proc_nodes_and_caches();
                    if (*(_segment.ehdr + 0x38) != 0) {
                        kobject_put();
                        *(_segment.ehdr + 0x38) = 0;
                    }
                    sym.mi_dynamic_page_pools_destory();
                    uVar8 = 0x800087e;
                }
                _printk(uVar8);
            }
            return 0xffffffff;
        }
        _printk(0x80009f7);
        kobject_put(iVar6);
    }
    *(_segment.ehdr + 0x38) = 0;
    return 0xffffffff;
}


// ===== sym.config_store.cfi_jt @ 0x08001178 (size 8) =====

int64_t sym.config_store.cfi_jt(ulong param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    int iVar2;
    uint *puVar3;
    ulong uVar4;
    int64_t iVar5;
    ulong uVar6;
    int64_t iVar7;
    ulong uVar8;
    int64_t iVar9;
    ulong uVar10;
    int64_t iVar11;
    ulong uVar12;
    int64_t iVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar14;
    ulong unaff_x30;
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iStack_28 = *(iVar13 + 0x5e0);
    puVar3 = &uStack_2c;
    uStack_2c = 0;
    iVar1 = kstrtoint(param_3,0,puVar3);
    if (iVar1 < 0) {
        param_4 = -0x16;
    }
    else {
        *(_segment.ehdr + 0x34) = uStack_2c;
    }
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_28) {
        return param_4;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.general_stat_info_show;
    iVar2 = snprintf(puVar3,0x1000,"total_page_num: %d\n",_segment.ehdr[8]);
    iVar1 = snprintf(puVar3 + iVar2,0x1000 - iVar2,"last_refill: %lu %d %d\n",_segment.ehdr[2],_segment.ehdr[3],
                     *(_segment.ehdr + 0x1c));
    iVar1 = iVar1 + iVar2;
    iVar13 = **_segment.ehdr;
    iVar2 = snprintf(puVar3 + iVar1,0x1000 - iVar1,"order-%d: %d %d %d %d %d\n",*(iVar13 + 8),*(iVar13 + 0x20),
                     *(iVar13 + 0x24),*(iVar13 + 0x28),*(iVar13 + 0x2c),*(iVar13 + 0x30));
    iVar2 = iVar2 + iVar1;
    iVar13 = *(*_segment.ehdr + 8);
    iVar1 = snprintf(puVar3 + iVar2,0x1000 - iVar2,"order-%d: %d %d %d %d %d\n",*(iVar13 + 8),*(iVar13 + 0x20),
                     *(iVar13 + 0x24),*(iVar13 + 0x28),*(iVar13 + 0x2c),*(iVar13 + 0x30));
    iVar1 = iVar1 + iVar2;
    iVar13 = *(*_segment.ehdr + 0x10);
    iVar2 = snprintf(puVar3 + iVar1,0x1000 - iVar1,"order-%d: %d %d %d %d %d\n",*(iVar13 + 8),*(iVar13 + 0x20),
                     *(iVar13 + 0x24),*(iVar13 + 0x28),*(iVar13 + 0x2c),*(iVar13 + 0x30));
    iVar2 = iVar2 + iVar1;
    iVar13 = *(*_segment.ehdr + 0x18);
    iVar1 = snprintf(puVar3 + iVar2,0x1000 - iVar2,"order-%d: %d %d %d %d %d\n",*(iVar13 + 8),*(iVar13 + 0x20),
                     *(iVar13 + 0x24),*(iVar13 + 0x28),*(iVar13 + 0x2c),*(iVar13 + 0x30));
    iVar1 = iVar1 + iVar2;
    iVar2 = snprintf(puVar3 + iVar1,0x1000 - iVar1,"rb_tree: %d %d %d\n",_segment.ehdr[0xe],_segment.ehdr[0xf],
                     *(_segment.ehdr + 0x74));
    iVar2 = iVar2 + iVar1;
    uVar14 = *(_segment.ehdr + 0x44);
    iVar1 = snprintf(puVar3 + iVar2,0x1000 - iVar2,"",0,uVar14 & 0xffffffff);
    iVar1 = iVar1 + iVar2;
    iVar13 = _segment.ehdr[9];
    iVar2 = snprintf(puVar3 + iVar1,0x1000 - iVar1," %d:%d",1);
    iVar2 = iVar2 + iVar1;
    uVar4 = *(_segment.ehdr + 0x4c);
    iVar1 = snprintf(puVar3 + iVar2,0x1000 - iVar2," %d:%d",2);
    iVar1 = iVar1 + iVar2;
    iVar5 = _segment.ehdr[10];
    iVar2 = snprintf(puVar3 + iVar1,0x1000 - iVar1," %d:%d",3);
    iVar2 = iVar2 + iVar1;
    uVar6 = *(_segment.ehdr + 0x54);
    iVar1 = snprintf(puVar3 + iVar2,0x1000 - iVar2," %d:%d",4);
    iVar1 = iVar1 + iVar2;
    iVar7 = _segment.ehdr[0xb];
    iVar2 = snprintf(puVar3 + iVar1,0x1000 - iVar1," %d:%d",5);
    iVar2 = iVar2 + iVar1;
    uVar8 = *(_segment.ehdr + 0x5c);
    iVar1 = snprintf(puVar3 + iVar2,0x1000 - iVar2," %d:%d",6);
    iVar1 = iVar1 + iVar2;
    iVar9 = _segment.ehdr[0xc];
    iVar2 = snprintf(puVar3 + iVar1,0x1000 - iVar1," %d:%d",7);
    iVar2 = iVar2 + iVar1;
    uVar10 = *(_segment.ehdr + 100);
    iVar1 = snprintf(puVar3 + iVar2,0x1000 - iVar2," %d:%d",8);
    iVar1 = iVar1 + iVar2;
    iVar11 = _segment.ehdr[0xd];
    iVar2 = snprintf(puVar3 + iVar1,0x1000 - iVar1," %d:%d",9);
    iVar2 = iVar2 + iVar1;
    uVar12 = *(_segment.ehdr + 0x6c);
    iVar1 = snprintf(puVar3 + iVar2,0x1000 - iVar2," %d:%d",10);
    iVar1 = iVar1 + iVar2;
    iVar2 = snprintf(puVar3 + iVar1,0x1000 - iVar1," %d\n",
                     uVar12 + iVar11 + uVar10 + iVar9 + uVar8 + iVar7 + uVar6 + iVar5 + uVar4 + iVar13 + uVar14);
    return iVar2 + iVar1;
}


// ===== sym.direct_relcaim_threshold_mb_store.cfi_jt @ 0x08001180 (size 8) =====

int64_t sym.direct_relcaim_threshold_mb_store.cfi_jt(ulong param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int64_t iVar1;
    int iVar2;
    int *piVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    int iStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    piVar3 = &iStack_2c;
    iStack_2c = 0;
    iVar2 = kstrtoint(param_3,0,piVar3);
    if (iVar2 < 0) {
        param_4 = -0x16;
    }
    else {
        *(_segment.ehdr + 0x20) = (iStack_2c << 0x14) >> 0xc;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return param_4;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.config_show;
    iVar2 = sprintf(piVar3,0x80007cc,*(_segment.ehdr + 0x34));
    return iVar2;
}


// ===== sym.mi_mempool_refill_work.6a23108e27cdbc0fd151c61886d1b542.cfi_jt @ 0x08001188 (size 8) =====

ulong sym.mi_mempool_refill_work.6a23108e27cdbc0fd151c61886d1b542.cfi_jt(void)

{
    bool bVar1;
    uint64_t *puVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    uint8_t uVar6;
    code *pcVar7;
    ulong in_tmp_ldXn;
    int iVar8;
    int iVar9;
    int64_t iVar10;
    int64_t iVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    ulong uVar14;
    int64_t iVar15;
    uint *in_x3;
    uint64_t uVar16;
    int64_t iVar17;
    int64_t iVar18;
    int64_t iVar19;
    int64_t *piVar20;
    uint uVar21;
    uint64_t uVar22;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar23;
    uint32_t uVar24;
    uint64_t uVar25;
    int64_t iVar26;
    uint64_t uVar27;
    ulong unaff_x30;
    uint auStack_19c [75];
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    piVar20 = _segment.ehdr;
    iVar15 = sp_el0;
    iStack_70 = *(iVar15 + 0x5e0);
    iVar23 = *_segment.ehdr;
    memset(auStack_19c,0,300);
    iVar15 = sp_el0;
    do {
        iVar10 = ktime_get();
        iVar26 = 0;
        uVar24 = 0;
        piVar20[2] = iVar10 / 1000000;
        piVar20 = _segment.ehdr;
        iVar8 = *(_segment.ehdr + 0x1c);
        *(_segment.ehdr + 5) = 0;
        *(piVar20 + 3) = 0;
        *(piVar20 + 0x1c) = iVar8 + 1;
        do {
            iVar10 = *(iVar23 + iVar26 * 8);
            if (*(iVar10 + 0x58) == '\0') {
code_r0x08002934:
                uVar21 = *(iVar10 + 4);
                if (*(iVar10 + 0x20) < *(iVar10 + 0x30)) {
                    iVar8 = 0;
                    while( true ) {
                        uVar3 = *(iVar10 + 4);
                        iVar11 = ktime_get();
                        if (iVar11 - *(iVar10 + 0x38) < 10000000) break;
                        uVar27 = 0x250015 >> ((uVar3 & 0xf) << 1) & 3;
                        iVar11 = uVar27 * 0x640 + 0x800e124;
                        uVar13 = uVar27;
                        do {
                            uVar14 = tpidr_el1;
                            iVar9 = strcmp(uVar14,*(sysfs_create_files + uVar13 * 0x640),"DMA32");
                            if (iVar9 != 0) {
                                iVar19 = uVar13 * 0x640;
                                uVar4 = *(iVar10 + 8);
                                puVar2 = iVar19 + 0x800e5c4;
                                iVar9 = *(__per_cpu_offset + iVar19);
                                iVar5 = *(_printk + iVar19);
                                uVar22 = *puVar2;
                                uVar3 = *(iVar10 + 8);
                                uVar25 = uVar3;
                                uVar16 = *puVar2 & (*puVar2 >> 0x3f ^ 0xffffffffffffffffU);
                                if ((*(iVar19 + 0x800e584) != 0) && (uVar16 < *(iVar19 + 0x800e584))) {
                                    uVar16 = *puVar2;
                                    *in_x3 = 0x640;
                                    uVar12 = cpumask_next(rb_erase,0xffffffff,__cpu_online_mask);
                                    if (uVar12 < 0x640) {
                                        do {
                                            if (0x1f < uVar12) goto code_r0x08002db4;
                                            uVar16 = uVar16 + *(*(__per_cpu_offset + (uVar12 & 0xffffffff) * 8) +
                                                               *(scnprintf + uVar13 * 0x640));
                                            uVar12 = cpumask_next(uVar12,__cpu_online_mask);
                                        } while (uVar12 < 0x640);
                                    }
                                    uVar16 = uVar16 & (uVar16 >> 0x3f ^ 0xffffffffffffffffU);
                                }
                                puVar2 = uVar13 * 0x640 + 0x800e614;
                                uVar12 = *puVar2;
                                if (uVar27 == 3) goto code_r0x08002db4;
                                in_x3 = (1 << (uVar4 & 0x1f)) + iVar5 + iVar9;
                                if (uVar16 - (*(_raw_spin_lock_irqsave + uVar13 * 0x640) + ~(-1 << (uVar3 & 0x1f)) +
                                             (uVar12 & (uVar12 >> 0x3f ^ 0xffffffffffffffffU))) <=
                                    *(_raw_spin_unlock_irqrestore + uVar13 * 0x640 + uVar27 * 8) + in_x3) {
code_r0x08002bf8:
                                    if ((*(_segment.ehdr + 0x34) >> 1 & 1) != 0) {
                                        uVar21 = uVar22;
                                        if (uVar22 < 1) {
                                            uVar21 = 0;
                                        }
                                        uVar27 = *puVar2;
                                        _printk(0x80006d3,*(sysfs_create_files + uVar13 * 0x640),*(iVar10 + 8),in_x3
                                                ,uVar21,*(_raw_spin_lock_irqsave + uVar13 * 0x640),
                                                uVar27 & (uVar27 >> 0x3f ^ 0xffffffffffffffffU));
                                    }
                                    uVar14 = ktime_get();
                                    *(iVar10 + 0x38) = uVar14;
                                    goto code_r0x08002c1c;
                                }
                                if (uVar3 != 0) {
                                    if (10 < uVar3) goto code_r0x08002bf8;
                                    if (uVar3 < 0xd) {
                                        uVar3 = 0xc;
                                    }
                                    iVar18 = uVar3 - uVar25;
                                    iVar17 = uVar25 * 0x68;
                                    iVar19 = iVar11;
                                    while( true ) {
                                        if (iVar18 == 0) goto code_r0x08002db4;
                                        if ((*(iVar19 + iVar17) != 0) &&
                                           ((((piVar20 = iVar19 + iVar17 + -0x60, piVar20 != *piVar20 ||
                                              (piVar20 = iVar19 + iVar17 + -0x50, piVar20 != *piVar20)) ||
                                             (piVar20 = iVar19 + iVar17 + -0x40, piVar20 != *piVar20)) ||
                                            (piVar20 = iVar19 + iVar17 + -0x30, piVar20 != *piVar20)))) break;
                                        iVar19 = iVar19 + 0x68;
                                        uVar3 = uVar25 + 1;
                                        uVar25 = uVar3;
                                        iVar18 = iVar18 + -1;
                                        if (10 < uVar3) goto code_r0x08002bf8;
                                    }
                                }
                            }
                            iVar11 = iVar11 + -0x640;
                            bVar1 = 0 < uVar13;
                            uVar13 = uVar13 - 1;
                        } while (bVar1);
                        uVar14 = tpidr_el1;
                        in_x3 = NULL;
                        iVar11 = __alloc_pages(uVar14,uVar21,*(iVar10 + 8),0);
                        if (iVar11 == 0) break;
                        sym.mi_dynamic_page_pool_add(iVar10,iVar11);
                        iVar8 = iVar8 + 1;
                        if (*(iVar10 + 0x30) <= *(iVar10 + 0x20)) break;
                    }
                }
                else {
                    iVar8 = 0;
                }
code_r0x08002c1c:
                iVar10 = *(iVar23 + iVar26 * 8);
                uVar3 = *(iVar10 + 8);
                iVar9 = *(iVar10 + 0x20);
                if (*(iVar10 + 0x58) == '\0') {
                    if (iVar9 < *(iVar10 + 0x30)) {
                        *(_segment.ehdr + 5) = 1;
                        iVar10 = *(iVar23 + iVar26 * 8);
                        *(iVar10 + 0x5c) = *(iVar10 + 0x5c) + 1;
                        iVar10 = *(iVar23 + iVar26 * 8);
                        if (*(iVar10 + 0x5c) < 0x10) goto code_r0x08002c9c;
                    }
                    else {
                        iVar10 = *(iVar23 + iVar26 * 8);
                    }
                    piVar20 = iVar10 + 0x58;
code_r0x08002c94:
                    *piVar20 = 1;
                }
                else if (iVar9 <= *(iVar10 + 0x2c)) {
                    piVar20 = _segment.ehdr + 5;
                    goto code_r0x08002c94;
                }
code_r0x08002c9c:
                piVar20 = _segment.ehdr;
                iVar8 = iVar8 << (uVar3 & 0x1f);
                *(_segment.ehdr + 3) = _segment.ehdr[3] + iVar8;
                uVar6 = *(piVar20 + 0x34);
            }
            else {
                if (*(iVar10 + 0x20) <= *(iVar10 + 0x2c)) {
                    iVar10 = *(iVar23 + iVar26 * 8);
                    goto code_r0x08002934;
                }
                iVar8 = 0;
                uVar6 = *(_segment.ehdr + 0x34);
            }
            if (((uVar6 >> 1 & 1) != 0) && (uVar24 < 300)) {
                if (300 < uVar24) goto code_r0x08002db4;
                in_x3 = *(*(iVar23 + iVar26 * 8) + 8);
                iVar8 = scnprintf(auStack_19c + uVar24,300 - uVar24,"order-%d:%d ",in_x3,iVar8);
                uVar24 = iVar8 + uVar24;
            }
            iVar26 = iVar26 + 1;
        } while (iVar26 != 4);
        if ((*(_segment.ehdr + 0x34) >> 1 & 1) != 0) {
            uVar24 = uVar24 - (299 < uVar24);
            if (299 < uVar24) {
code_r0x08002db4:
    //WARNING: Does not return
                pcVar7 = SoftwareBreakpoint(0x5512,0x8002db8);
                (*pcVar7)();
            }
            *(auStack_19c + uVar24) = 0;
            iVar26 = ktime_get();
            in_x3 = auStack_19c;
            _printk(0x8000837,iVar26 / 1000000 - _segment.ehdr[2],*(_segment.ehdr + 0x29));
        }
        *(_segment.ehdr + 0x29) = 0;
        *(iVar15 + 0x28) = 1;
        DataMemoryBarrier(2,3);
        uVar13 = kthread_should_stop();
        if ((uVar13 & 1) != 0) {
            *(iVar15 + 0x28) = 0;
            DataMemoryBarrier(2,3);
            iVar15 = sp_el0;
            if (*(iVar15 + 0x5e0) == iStack_70) {
                return 0;
            }
            __stack_chk_fail();
            uVar14 = tpidr_el2;
            uVar14 = tpidr_el2;
            *extraout_x18 = 0x8002e04;
            uVar14 = _raw_spin_lock_irqsave(in_tmp_ldXn,obj.proc_tree_lock);
            iVar15 = rb_first_postorder(obj.proc_tree);
            while (iVar23 = iVar15, iVar23 != 0) {
                iVar15 = rb_next_postorder(iVar23);
                if (_segment.ehdr != NULL) {
                    kmem_cache_free(_segment.ehdr,iVar23);
                }
            }
            _segment.ehdr = NULL;
            _raw_spin_unlock_irqrestore(obj.proc_tree_lock,uVar14);
            uVar14 = kmem_cache_destroy(_segment.ehdr);
            return uVar14;
        }
        uVar14 = _raw_spin_lock_irqsave(_segment.ehdr + 0x2c);
        iVar26 = _segment.ehdr + 0x2c;
        *(_segment.ehdr + 6) = 0;
        _raw_spin_unlock_irqrestore(iVar26,uVar14);
        schedule();
        *(iVar15 + 0x28) = 0;
        DataMemoryBarrier(2,3);
        piVar20 = _segment.ehdr;
    } while( true );
}


// ===== sym.process_use_count_show.cfi_jt @ 0x08001190 (size 8) =====

int64_t sym.process_use_count_show.cfi_jt(ulong param_1,ulong param_2,int64_t param_3)

{
    ulong *puVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int64_t iVar5;
    ulong *in_x18;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = 0;
    iVar3 = 0;
    iVar7 = 0x6c;
    do {
        iVar2 = snprintf(param_3 + iVar3,0x1000 - iVar3,"comm:%s\n",*(obj.comm_whitelist + iVar6 * 8));
        iVar8 = iVar6 * 4;
        iVar2 = iVar2 + iVar3;
        iVar5 = **_segment.ehdr;
        puVar1 = iVar5 + iVar7;
        iVar3 = snprintf(param_3 + iVar2,0x1000 - iVar2,"order-%d:%d %d %d %d %d\n",*(iVar5 + 8),*(puVar1 + -0xc),
                         puVar1[-1],*(puVar1 + -4),*puVar1,*(iVar5 + iVar8 + 0x40));
        iVar3 = iVar3 + iVar2;
        iVar5 = *(*_segment.ehdr + 8);
        puVar1 = iVar5 + iVar7;
        iVar2 = snprintf(param_3 + iVar3,0x1000 - iVar3,"order-%d:%d %d %d %d %d\n",*(iVar5 + 8),*(puVar1 + -0xc),
                         puVar1[-1],*(puVar1 + -4),*puVar1,*(iVar5 + iVar8 + 0x40));
        iVar2 = iVar2 + iVar3;
        iVar5 = *(*_segment.ehdr + 0x10);
        puVar1 = iVar5 + iVar7;
        iVar4 = snprintf(param_3 + iVar2,0x1000 - iVar2,"order-%d:%d %d %d %d %d\n",*(iVar5 + 8),*(puVar1 + -0xc),
                         puVar1[-1],*(puVar1 + -4),*puVar1,*(iVar5 + iVar8 + 0x40));
        iVar4 = iVar4 + iVar2;
        iVar5 = *(*_segment.ehdr + 0x18);
        puVar1 = iVar5 + iVar7;
        iVar3 = snprintf(param_3 + iVar4,0x1000 - iVar4,"order-%d:%d %d %d %d %d\n",*(iVar5 + 8),*(puVar1 + -0xc),
                         puVar1[-1],*(puVar1 + -4),*puVar1,*(iVar5 + iVar8 + 0x40));
        iVar6 = iVar6 + 1;
        iVar3 = iVar3 + iVar4;
        iVar7 = iVar7 + 0x10;
    } while (iVar7 != 0xcc);
    return iVar3;
}


// ===== sym.direct_relcaim_threshold_mb_show.cfi_jt @ 0x08001198 (size 8) =====

int64_t sym.direct_relcaim_threshold_mb_show.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sprintf(param_3,"%lumb\n",*(_segment.ehdr + 0x20) >> 8 & 0xfffffffffff);
    return iVar1;
}


// ===== sym.general_stat_info_show.cfi_jt @ 0x080011a0 (size 8) =====

int64_t sym.general_stat_info_show.cfi_jt(ulong param_1,ulong param_2,int64_t param_3)

{
    int iVar1;
    int iVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong uVar5;
    int64_t iVar6;
    ulong uVar7;
    int64_t iVar8;
    ulong uVar9;
    int64_t iVar10;
    ulong uVar11;
    int64_t iVar12;
    ulong *in_x18;
    uint64_t uVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(param_3,0x1000,"total_page_num: %d\n",_segment.ehdr[8]);
    iVar2 = snprintf(param_3 + iVar1,0x1000 - iVar1,"last_refill: %lu %d %d\n",_segment.ehdr[2],_segment.ehdr[3],
                     *(_segment.ehdr + 0x1c));
    iVar2 = iVar2 + iVar1;
    iVar12 = **_segment.ehdr;
    iVar1 = snprintf(param_3 + iVar2,0x1000 - iVar2,"order-%d: %d %d %d %d %d\n",*(iVar12 + 8),*(iVar12 + 0x20),
                     *(iVar12 + 0x24),*(iVar12 + 0x28),*(iVar12 + 0x2c),*(iVar12 + 0x30));
    iVar1 = iVar1 + iVar2;
    iVar12 = *(*_segment.ehdr + 8);
    iVar2 = snprintf(param_3 + iVar1,0x1000 - iVar1,"order-%d: %d %d %d %d %d\n",*(iVar12 + 8),*(iVar12 + 0x20),
                     *(iVar12 + 0x24),*(iVar12 + 0x28),*(iVar12 + 0x2c),*(iVar12 + 0x30));
    iVar2 = iVar2 + iVar1;
    iVar12 = *(*_segment.ehdr + 0x10);
    iVar1 = snprintf(param_3 + iVar2,0x1000 - iVar2,"order-%d: %d %d %d %d %d\n",*(iVar12 + 8),*(iVar12 + 0x20),
                     *(iVar12 + 0x24),*(iVar12 + 0x28),*(iVar12 + 0x2c),*(iVar12 + 0x30));
    iVar1 = iVar1 + iVar2;
    iVar12 = *(*_segment.ehdr + 0x18);
    iVar2 = snprintf(param_3 + iVar1,0x1000 - iVar1,"order-%d: %d %d %d %d %d\n",*(iVar12 + 8),*(iVar12 + 0x20),
                     *(iVar12 + 0x24),*(iVar12 + 0x28),*(iVar12 + 0x2c),*(iVar12 + 0x30));
    iVar2 = iVar2 + iVar1;
    iVar1 = snprintf(param_3 + iVar2,0x1000 - iVar2,"rb_tree: %d %d %d\n",_segment.ehdr[0xe],_segment.ehdr[0xf],
                     *(_segment.ehdr + 0x74));
    iVar1 = iVar1 + iVar2;
    uVar13 = *(_segment.ehdr + 0x44);
    iVar2 = snprintf(param_3 + iVar1,0x1000 - iVar1,"",0,uVar13 & 0xffffffff);
    iVar2 = iVar2 + iVar1;
    iVar12 = _segment.ehdr[9];
    iVar1 = snprintf(param_3 + iVar2,0x1000 - iVar2," %d:%d",1);
    iVar1 = iVar1 + iVar2;
    uVar3 = *(_segment.ehdr + 0x4c);
    iVar2 = snprintf(param_3 + iVar1,0x1000 - iVar1," %d:%d",2);
    iVar2 = iVar2 + iVar1;
    iVar4 = _segment.ehdr[10];
    iVar1 = snprintf(param_3 + iVar2,0x1000 - iVar2," %d:%d",3);
    iVar1 = iVar1 + iVar2;
    uVar5 = *(_segment.ehdr + 0x54);
    iVar2 = snprintf(param_3 + iVar1,0x1000 - iVar1," %d:%d",4);
    iVar2 = iVar2 + iVar1;
    iVar6 = _segment.ehdr[0xb];
    iVar1 = snprintf(param_3 + iVar2,0x1000 - iVar2," %d:%d",5);
    iVar1 = iVar1 + iVar2;
    uVar7 = *(_segment.ehdr + 0x5c);
    iVar2 = snprintf(param_3 + iVar1,0x1000 - iVar1," %d:%d",6);
    iVar2 = iVar2 + iVar1;
    iVar8 = _segment.ehdr[0xc];
    iVar1 = snprintf(param_3 + iVar2,0x1000 - iVar2," %d:%d",7);
    iVar1 = iVar1 + iVar2;
    uVar9 = *(_segment.ehdr + 100);
    iVar2 = snprintf(param_3 + iVar1,0x1000 - iVar1," %d:%d",8);
    iVar2 = iVar2 + iVar1;
    iVar10 = _segment.ehdr[0xd];
    iVar1 = snprintf(param_3 + iVar2,0x1000 - iVar2," %d:%d",9);
    iVar1 = iVar1 + iVar2;
    uVar11 = *(_segment.ehdr + 0x6c);
    iVar2 = snprintf(param_3 + iVar1,0x1000 - iVar1," %d:%d",10);
    iVar2 = iVar2 + iVar1;
    iVar1 = snprintf(param_3 + iVar2,0x1000 - iVar2," %d\n",
                     uVar11 + iVar10 + uVar9 + iVar8 + uVar7 + iVar6 + uVar5 + iVar4 + uVar3 + iVar12 + uVar13);
    return iVar1 + iVar2;
}


// ===== sym.config_show.cfi_jt @ 0x080011a8 (size 8) =====

int64_t sym.config_show.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sprintf(param_3,0x80007cc,*(_segment.ehdr + 0x34));
    return iVar1;
}


// ===== sym.mi_mempool_exit.cfi_jt @ 0x080011b0 (size 8) =====

void sym.mi_mempool_exit.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    tracepoint_probe_unregister
              (__tracepoint_android_vh_alloc_pages_reclaim_bypass,sym.mi_mempool_alloc_reclaim.cfi_jt,0);
    tracepoint_probe_unregister(__tracepoint_android_vh_alloc_pages_failure_bypass,sym.mi_mempool_alloc_oom.cfi_jt,0);
    tracepoint_probe_unregister(__tracepoint_android_vh_mmput,sym.mi_mempool_refill_check.cfi_jt,0);
    sym.free_all_proc_nodes_and_caches();
    if (*(_segment.ehdr + 0x38) != 0) {
        kobject_put();
        *(_segment.ehdr + 0x38) = 0;
    }
    sym.mi_dynamic_page_pools_destory();
    if (*(_segment.ehdr + 8) != 0) {
        kthread_stop();
    }
    return;
}


// ===== sym.mi_mempool_alloc_reclaim.cfi_jt @ 0x080011b8 (size 8) =====

//WARNING: Type propagation algorithm not settling

void sym.mi_mempool_alloc_reclaim.cfi_jt
               (ulong param_1,uint32_t param_2,uint32_t param_3,uint64_t *param_4,ulong param_5,int64_t *param_6)

{
    int *piVar1;
    char cVar2;
    bool bVar3;
    uint64_t *puVar4;
    ulong uVar5;
    bool bVar6;
    code *pcVar7;
    int iVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    code *pcVar11;
    ulong *in_x18;
    uint32_t uVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    int64_t iVar15;
    int64_t arg2;
    int64_t iVar16;
    uint64_t uVar17;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar13 = param_2;
    if (param_3 < 0xb) {
        if (0xb < param_3) goto code_r0x080015d8;
        if (*(reloc.direct_relcaim_threshold_mb_show.cfi_jt + param_3 * 4) == -1) goto code_r0x080012c8;
        arg2 = *(*_segment.ehdr + *(reloc.direct_relcaim_threshold_mb_show.cfi_jt + param_3 * 4) * 8);
        iVar8 = sym.check_whitelist();
    }
    else {
code_r0x080012c8:
        arg2 = 0;
        iVar8 = sym.check_whitelist();
    }
    if ((((iVar8 != 0) && (arg2 != 0)) && (puVar4 = sp_el0, (*(puVar4 + 0x3e) >> 5 & 1) == 0)) &&
       (((*puVar4 & 1) == 0 || ((*(puVar4 + 0x829) & 1) == 0)))) {
        iVar16 = 0;
        uVar17 = 0;
        uVar5 = tpidr_el1;
        bVar3 = false;
        do {
            if (*(rb_next_postorder + iVar16 * 0x640) != 0) {
                uVar9 = 0xffffffff;
                uVar14 = *(iVar16 * 0x640 + 0x800e5dc);
                pcVar7 = scnprintf + iVar16 * 0x640;
                *param_4 = uVar13;
                while( true ) {
                    uVar9 = cpumask_next(uVar9,__cpu_online_mask);
                    uVar12 = uVar13;
                    if (uVar12 <= uVar9) break;
                    if (0x1f < uVar9) goto code_r0x080015d8;
                    uVar14 = uVar14 + *(*(__per_cpu_offset + (uVar9 & 0xffffffff) * 8) + *pcVar7 + 3);
                }
                uVar10 = 0xffffffff;
                uVar9 = *(iVar16 * 0x640 + 0x800e5e4);
                pcVar11 = rb_erase;
                *param_4 = uVar13;
                while( true ) {
                    uVar10 = cpumask_next(pcVar11,uVar10,__cpu_online_mask);
                    if (uVar12 <= uVar10) break;
                    if (0x1f < uVar10) goto code_r0x080015d8;
                    pcVar11 = *(*(__per_cpu_offset + (uVar10 & 0xffffffff) * 8) + *pcVar7 + 4);
                    uVar9 = uVar9 + pcVar11;
                }
                iVar15 = (uVar9 & (uVar9 >> 0x3f ^ 0xffffffffffffffffU)) +
                         (uVar14 & (uVar14 >> 0x3f ^ 0xffffffffffffffffU));
                if (0 < _nr_swap_pages) {
                    uVar9 = 0xffffffff;
                    uVar14 = *(iVar16 * 0x640 + 0x800e5cc);
                    pcVar11 = rb_erase;
                    *param_4 = uVar13;
                    while( true ) {
                        uVar9 = cpumask_next(pcVar11,uVar9,__cpu_online_mask);
                        if (uVar12 <= uVar9) break;
                        if (0x1f < uVar9) goto code_r0x080015d8;
                        pcVar11 = *(*(__per_cpu_offset + (uVar9 & 0xffffffff) * 8) + *pcVar7 + 1);
                        uVar14 = uVar14 + pcVar11;
                    }
                    uVar9 = 0xffffffff;
                    uVar13 = *(iVar16 * 0x640 + 0x800e5d4);
                    pcVar11 = rb_erase;
                    *param_4 = uVar17;
                    while( true ) {
                        uVar9 = cpumask_next(pcVar11,uVar9,__cpu_online_mask);
                        if (uVar17 <= uVar9) break;
                        if (0x1f < uVar9) goto code_r0x080015d8;
                        pcVar11 = *(*(__per_cpu_offset + (uVar9 & 0xffffffff) * 8) + *pcVar7 + 2);
                        uVar13 = uVar13 + pcVar11;
                    }
                    iVar15 = (uVar14 & (uVar14 >> 0x3f ^ 0xffffffffffffffffU)) + iVar15 +
                             (uVar13 & (uVar13 >> 0x3f ^ 0xffffffffffffffffU));
                }
                if (iVar15 != 0) {
                    uVar14 = *(iVar16 * 0x640 + 0x800e5c4);
                    uVar17 = (uVar14 & (uVar14 >> 0x3f ^ 0xffffffffffffffffU)) + uVar17;
                }
            }
            iVar16 = 1;
            bVar6 = !bVar3;
            bVar3 = true;
        } while (bVar6);
        uVar13 = _segment.ehdr[4];
        if ((*(_segment.ehdr + 0x34) >> 1 & 1) != 0) {
            _printk(0x80007d0,puVar4 + 0xf5,puVar4[0xbb],uVar17,uVar13);
        }
        if (uVar17 <= uVar13) {
            uVar12 = iVar8 - 1;
            if (5 < uVar12) {
code_r0x080015d8:
    //WARNING: Does not return
                pcVar7 = SoftwareBreakpoint(0x5512,0x80015dc);
                (*pcVar7)();
            }
            if (*(arg2 + uVar12 * 4 + 0x40) < *(arg2 + 0x20)) {
                iVar16 = sym.mi_dynamic_page_pool_alloc(param_3,arg2,param_2,0);
                *param_6 = iVar16;
            }
            if ((*(_segment.ehdr + 0x34) & 1) != 0) {
                if (*param_6 == 0) {
                    piVar1 = arg2 + uVar12 * 0x10 + 100;
                    Hint_Prefetch(piVar1,2,0,1);
                    do {
                        cVar2 = '\x01';
                        bVar3 = ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar3) {
                            *piVar1 = *piVar1 + 1;
                            cVar2 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar2 != '\0');
                }
                else {
                    piVar1 = arg2 + uVar12 * 0x10 + 0x60;
                    Hint_Prefetch(piVar1,2,0,1);
                    do {
                        cVar2 = '\x01';
                        bVar3 = ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar3) {
                            *piVar1 = *piVar1 + 1;
                            cVar2 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar2 != '\0');
                }
            }
        }
    }
    return;
}


// ===== sym.mi_mempool_alloc_oom.cfi_jt @ 0x080011c0 (size 8) =====

void sym.mi_mempool_alloc_oom.cfi_jt
               (ulong param_1,uint32_t param_2,uint32_t param_3,ulong param_4,ulong param_5,int64_t *param_6)

{
    int *piVar1;
    char cVar2;
    bool bVar3;
    uint32_t uVar4;
    code *pcVar5;
    int iVar6;
    int64_t iVar7;
    uint64_t arg3;
    ulong *in_x18;
    int64_t iVar8;
    ulong unaff_x30;
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_38 = *(iVar8 + 0x5e0);
    uStack_3c = param_2;
    if (((param_2 >> 0xd & 1) == 0) && (param_3 < 0xb)) {
        if (0xb < param_3) goto code_r0x08001a6c;
        if ((*(reloc.direct_relcaim_threshold_mb_show.cfi_jt + param_3 * 4) != -1) &&
           (iVar8 = *(*_segment.ehdr + *(reloc.direct_relcaim_threshold_mb_show.cfi_jt + param_3 * 4) * 8), iVar8 != 0)
           ) {
            arg3 = param_2;
            if ((*(_segment.ehdr + 0x34) >> 1 & 1) != 0) {
                iVar7 = sp_el0;
                _printk(0x80008ca,iVar7 + 0x7a8,*(iVar7 + 0x5d8),param_3,arg3,&uStack_3c);
                arg3 = uStack_3c;
            }
            iVar7 = sym.mi_dynamic_page_pool_alloc(param_3,iVar8,arg3,1);
            *param_6 = iVar7;
            if (((*(_segment.ehdr + 0x34) & 1) != 0) && (iVar6 = sym.check_whitelist(), iVar6 != 0)) {
                uVar4 = iVar6 - 1;
                if (*param_6 == 0) {
                    if (5 < uVar4) goto code_r0x08001a6c;
                    piVar1 = iVar8 + uVar4 * 0x10 + 0x6c;
                    Hint_Prefetch(piVar1,2,0,1);
                    do {
                        cVar2 = '\x01';
                        bVar3 = ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar3) {
                            *piVar1 = *piVar1 + 1;
                            cVar2 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar2 != '\0');
                }
                else {
                    if (5 < uVar4) goto code_r0x08001a6c;
                    piVar1 = iVar8 + uVar4 * 0x10 + 0x68;
                    Hint_Prefetch(piVar1,2,0,1);
                    do {
                        cVar2 = '\x01';
                        bVar3 = ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar3) {
                            *piVar1 = *piVar1 + 1;
                            cVar2 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar2 != '\0');
                }
            }
        }
    }
    if (((uStack_3c._1_1_ >> 5 & 1) == 0) && (*param_6 == 0)) {
        if (0xb < param_3) goto code_r0x08001a6c;
        piVar1 = _segment.ehdr + param_3 * 4 + 0x44;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
                *piVar1 = *piVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail();
code_r0x08001a6c:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x8001a70);
    (*pcVar5)();
}


// ===== sym.mi_mempool_refill_check.cfi_jt @ 0x080011c8 (size 8) =====

void sym.mi_mempool_refill_check.cfi_jt(void)

{
    int iVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = ktime_get();
    if (((299 < iVar2 / 1000000 - *(_segment.ehdr + 0x10)) && (*(_segment.ehdr + 0x28) != '\0')) &&
       ((*(_segment.ehdr + 0x30) & 1) == 0)) {
        uVar3 = _raw_spin_lock_irqsave(_segment.ehdr + 0x2c);
        iVar2 = _segment.ehdr;
        if ((*(_segment.ehdr + 0x30) & 1) == 0) {
            *(_segment.ehdr + 0x29) = 1;
            *(iVar2 + 0x30) = 1;
            wake_up_process(*(iVar2 + 8));
        }
        _raw_spin_unlock_irqrestore(_segment.ehdr + 0x2c,uVar3);
    }
    uVar3 = _raw_spin_lock_irqsave(obj.proc_tree_lock);
    if (_segment.ehdr != 0) {
        iVar2 = sp_el0;
        iVar1 = *(*(iVar2 + 0x618) + 0x5d8);
        iVar2 = _segment.ehdr;
        do {
            while (iVar1 < *(iVar2 + 0x18)) {
                iVar2 = *(iVar2 + 8);
                if (iVar2 == 0) goto code_r0x08001e68;
            }
            if (iVar1 <= *(iVar2 + 0x18)) {
                rb_erase(iVar2,obj.proc_tree);
                *(_segment.ehdr + 0x78) = *(_segment.ehdr + 0x78) + -1;
                _raw_spin_unlock_irqrestore(obj.proc_tree_lock,uVar3);
                if (_segment.ehdr == 0) {
                    return;
                }
                kmem_cache_free(_segment.ehdr,iVar2);
                return;
            }
            iVar2 = *(iVar2 + 0x10);
        } while (iVar2 != 0);
    }
code_r0x08001e68:
    _raw_spin_unlock_irqrestore(obj.proc_tree_lock,uVar3);
    return;
}


// ===== sym.del_proc_node_by_pid_locked @ 0x080011d0 (size 132) =====

int64_t sym.del_proc_node_by_pid_locked(int64_t arg1)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = _segment.ehdr;
    do {
        if (iVar2 == 0) {
            return 0;
        }
        if (arg1 < *(iVar2 + 0x18)) {
            piVar1 = iVar2 + 8;
        }
        else {
            if (arg1 <= *(iVar2 + 0x18)) {
                rb_erase(iVar2,obj.proc_tree);
                *(_segment.ehdr + 0x78) = *(_segment.ehdr + 0x78) + -1;
                return iVar2;
            }
            piVar1 = iVar2 + 0x10;
        }
        iVar2 = *piVar1;
    } while( true );
}


// ===== sym.mi_mempool_alloc_reclaim @ 0x08001254 (size 1012) =====

//WARNING: Type propagation algorithm not settling

void sym.mi_mempool_alloc_reclaim(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int *piVar1;
    char cVar2;
    bool bVar3;
    uint64_t *puVar4;
    ulong uVar5;
    bool bVar6;
    code *pcVar7;
    int iVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t *in_x3;
    int64_t *in_x5;
    code *pcVar11;
    ulong *in_x18;
    uint32_t uVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    int64_t iVar15;
    int64_t arg2_00;
    int64_t iVar16;
    uint64_t uVar17;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar13 = arg1 & 0xffffffff;
    if (arg2 < 0xb) {
        if (0xb < arg2) goto code_r0x080015d8;
        if (*(reloc.direct_relcaim_threshold_mb_show.cfi_jt + (arg2 & 0xffffffffU) * 4) == -1) goto code_r0x080012c8;
        arg2_00 = *(*_segment.ehdr + *(reloc.direct_relcaim_threshold_mb_show.cfi_jt + (arg2 & 0xffffffffU) * 4) * 8);
        iVar8 = sym.check_whitelist();
    }
    else {
code_r0x080012c8:
        arg2_00 = 0;
        iVar8 = sym.check_whitelist();
    }
    if ((((iVar8 != 0) && (arg2_00 != 0)) && (puVar4 = sp_el0, (*(puVar4 + 0x3e) >> 5 & 1) == 0)) &&
       (((*puVar4 & 1) == 0 || ((*(puVar4 + 0x829) & 1) == 0)))) {
        iVar16 = 0;
        uVar17 = 0;
        uVar5 = tpidr_el1;
        bVar3 = false;
        do {
            if (*(rb_next_postorder + iVar16 * 0x640) != 0) {
                uVar9 = 0xffffffff;
                uVar14 = *(iVar16 * 0x640 + 0x800e5dc);
                pcVar7 = scnprintf + iVar16 * 0x640;
                *in_x3 = uVar13;
                while( true ) {
                    uVar9 = cpumask_next(uVar9,__cpu_online_mask);
                    uVar12 = uVar13;
                    if (uVar12 <= uVar9) break;
                    if (0x1f < uVar9) goto code_r0x080015d8;
                    uVar14 = uVar14 + *(*(__per_cpu_offset + (uVar9 & 0xffffffff) * 8) + *pcVar7 + 3);
                }
                uVar10 = 0xffffffff;
                uVar9 = *(iVar16 * 0x640 + 0x800e5e4);
                pcVar11 = rb_erase;
                *in_x3 = uVar13;
                while( true ) {
                    uVar10 = cpumask_next(pcVar11,uVar10,__cpu_online_mask);
                    if (uVar12 <= uVar10) break;
                    if (0x1f < uVar10) goto code_r0x080015d8;
                    pcVar11 = *(*(__per_cpu_offset + (uVar10 & 0xffffffff) * 8) + *pcVar7 + 4);
                    uVar9 = uVar9 + pcVar11;
                }
                iVar15 = (uVar9 & (uVar9 >> 0x3f ^ 0xffffffffffffffffU)) +
                         (uVar14 & (uVar14 >> 0x3f ^ 0xffffffffffffffffU));
                if (0 < _nr_swap_pages) {
                    uVar9 = 0xffffffff;
                    uVar14 = *(iVar16 * 0x640 + 0x800e5cc);
                    pcVar11 = rb_erase;
                    *in_x3 = uVar13;
                    while( true ) {
                        uVar9 = cpumask_next(pcVar11,uVar9,__cpu_online_mask);
                        if (uVar12 <= uVar9) break;
                        if (0x1f < uVar9) goto code_r0x080015d8;
                        pcVar11 = *(*(__per_cpu_offset + (uVar9 & 0xffffffff) * 8) + *pcVar7 + 1);
                        uVar14 = uVar14 + pcVar11;
                    }
                    uVar9 = 0xffffffff;
                    uVar13 = *(iVar16 * 0x640 + 0x800e5d4);
                    pcVar11 = rb_erase;
                    *in_x3 = uVar17;
                    while( true ) {
                        uVar9 = cpumask_next(pcVar11,uVar9,__cpu_online_mask);
                        if (uVar17 <= uVar9) break;
                        if (0x1f < uVar9) goto code_r0x080015d8;
                        pcVar11 = *(*(__per_cpu_offset + (uVar9 & 0xffffffff) * 8) + *pcVar7 + 2);
                        uVar13 = uVar13 + pcVar11;
                    }
                    iVar15 = (uVar14 & (uVar14 >> 0x3f ^ 0xffffffffffffffffU)) + iVar15 +
                             (uVar13 & (uVar13 >> 0x3f ^ 0xffffffffffffffffU));
                }
                if (iVar15 != 0) {
                    uVar14 = *(iVar16 * 0x640 + 0x800e5c4);
                    uVar17 = (uVar14 & (uVar14 >> 0x3f ^ 0xffffffffffffffffU)) + uVar17;
                }
            }
            iVar16 = 1;
            bVar6 = !bVar3;
            bVar3 = true;
        } while (bVar6);
        uVar13 = _segment.ehdr[4];
        if ((*(_segment.ehdr + 0x34) >> 1 & 1) != 0) {
            _printk(0x80007d0,puVar4 + 0xf5,puVar4[0xbb],uVar17,uVar13);
        }
        if (uVar17 <= uVar13) {
            uVar12 = iVar8 - 1;
            if (5 < uVar12) {
code_r0x080015d8:
    //WARNING: Does not return
                pcVar7 = SoftwareBreakpoint(0x5512,0x80015dc);
                (*pcVar7)();
            }
            if (*(arg2_00 + uVar12 * 4 + 0x40) < *(arg2_00 + 0x20)) {
                iVar16 = sym.mi_dynamic_page_pool_alloc(arg2 & 0xffffffff,arg2_00,arg1 & 0xffffffff,0);
                *in_x5 = iVar16;
            }
            if ((*(_segment.ehdr + 0x34) & 1) != 0) {
                if (*in_x5 == 0) {
                    piVar1 = arg2_00 + uVar12 * 0x10 + 100;
                    Hint_Prefetch(piVar1,2,0,1);
                    do {
                        cVar2 = '\x01';
                        bVar3 = ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar3) {
                            *piVar1 = *piVar1 + 1;
                            cVar2 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar2 != '\0');
                }
                else {
                    piVar1 = arg2_00 + uVar12 * 0x10 + 0x60;
                    Hint_Prefetch(piVar1,2,0,1);
                    do {
                        cVar2 = '\x01';
                        bVar3 = ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar3) {
                            *piVar1 = *piVar1 + 1;
                            cVar2 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar2 != '\0');
                }
            }
        }
    }
    return;
}


// ===== sym.mi_dynamic_page_pool_alloc @ 0x08001648 (size 664) =====

uint64_t * sym.mi_dynamic_page_pool_alloc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int *piVar1;
    char cVar2;
    bool bVar3;
    ulong uVar4;
    uint64_t *puVar5;
    uint32_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    uint64_t *puVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar8 = NULL;
    if ((arg2 != 0) && (iVar7 = sp_el0, *(_segment.ehdr + 8) != iVar7)) {
        if ((0x250015U >> ((arg3 & 0xf) << 1) & 3) < (0x250015U >> ((*(arg2 + 4) & 0xf) << 1) & 3)) {
            puVar8 = NULL;
        }
        else {
            puVar8 = sym.mi_dynamic_page_pool_remove(arg2);
            if (puVar8 != NULL) {
                if ((arg4 & 1U) == 0) {
                    piVar1 = arg2 + 0x24;
                    Hint_Prefetch(piVar1,2,0,1);
                    do {
                        cVar2 = '\x01';
                        bVar3 = ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar3) {
                            *piVar1 = *piVar1 + 1;
                            cVar2 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar2 != '\0');
                }
                else {
                    piVar1 = arg2 + 0x28;
                    Hint_Prefetch(piVar1,2,0,1);
                    do {
                        cVar2 = '\x01';
                        bVar3 = ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar3) {
                            *piVar1 = *piVar1 + 1;
                            cVar2 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar2 != '\0');
                }
                if ((arg1 != 0) && ((arg3 >> 0x12 & 1) != 0)) {
                    uVar6 = 1 << (arg1 & 0x1f);
                    *puVar8 = *puVar8 | 0x10000;
                    if (1 < uVar6) {
                        iVar7 = uVar6 - 1;
                        puVar5 = puVar8 + 9;
                        do {
                            iVar7 = iVar7 + -1;
                            *(puVar5 + 0x2c) = 0;
                            puVar5[2] = 0xdead000000000400;
                            *puVar5 = puVar8 + 1;
                            puVar5 = puVar5 + 8;
                        } while (iVar7 != 0);
                    }
                    *(puVar8 + 10) = 1;
                    *(puVar8 + 0x51) = arg1;
                    *(puVar8 + 0xb) = uVar6;
                    *(puVar8 + 0x54) = 0xffffffff;
                    if ((puVar8[1] & 1) == 0) {
                        uVar6 = *puVar8;
                        puVar5 = puVar8;
                    }
                    else {
                        puVar5 = puVar8[1] - 1;
                        uVar6 = *puVar5;
                    }
                    if (((((uVar6 >> 0x10 & 1) != 0) || ((puVar5[1] & 1) != 0)) && ((*puVar5 >> 0x10 & 1) != 0)) &&
                       (1 < *(puVar5 + 0x51))) {
                        *(puVar8 + 0x12) = 0;
                    }
                }
            }
            if (((*(_segment.ehdr + 8) != 0) && (*(arg2 + 0x20) <= *(arg2 + 0x2c))) &&
               ((iVar7 = ktime_get(), 299 < iVar7 / 1000000 - *(_segment.ehdr + 0x10) &&
                ((*(_segment.ehdr + 0x30) & 1) == 0)))) {
                uVar4 = _raw_spin_lock_irqsave(_segment.ehdr + 0x2c);
                iVar7 = _segment.ehdr;
                if ((*(_segment.ehdr + 0x30) & 1) == 0) {
                    *(_segment.ehdr + 0x30) = 1;
                    wake_up_process(*(iVar7 + 8));
                }
                _raw_spin_unlock_irqrestore(_segment.ehdr + 0x2c,uVar4);
            }
        }
    }
    return puVar8;
}


// ===== sym.mi_mempool_alloc_oom @ 0x080018e0 (size 508) =====

void sym.mi_mempool_alloc_oom(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int *piVar1;
    char cVar2;
    bool bVar3;
    uint32_t uVar4;
    code *pcVar5;
    int iVar6;
    int64_t iVar7;
    uint64_t arg3;
    int64_t *in_x5;
    ulong *in_x18;
    uint32_t uVar8;
    uint64_t arg1_00;
    int64_t iVar9;
    ulong unaff_x30;
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_38 = *(iVar9 + 0x5e0);
    arg1_00 = arg2 & 0xffffffff;
    uStack_3c = arg1;
    uVar8 = arg2;
    if (((uStack_3c >> 0xd & 1) == 0) && (uVar8 < 0xb)) {
        if (0xb < uVar8) goto code_r0x08001a6c;
        if ((*(reloc.direct_relcaim_threshold_mb_show.cfi_jt + arg1_00 * 4) != -1) &&
           (iVar9 = *(*_segment.ehdr + *(reloc.direct_relcaim_threshold_mb_show.cfi_jt + arg1_00 * 4) * 8), iVar9 != 0)
           ) {
            arg3 = arg1 & 0xffffffff;
            if ((*(_segment.ehdr + 0x34) >> 1 & 1) != 0) {
                iVar7 = sp_el0;
                _printk(0x80008ca,iVar7 + 0x7a8,*(iVar7 + 0x5d8),arg1_00,arg3,&uStack_3c);
                arg3 = uStack_3c;
            }
            iVar7 = sym.mi_dynamic_page_pool_alloc(arg1_00,iVar9,arg3,1);
            *in_x5 = iVar7;
            if (((*(_segment.ehdr + 0x34) & 1) != 0) && (iVar6 = sym.check_whitelist(), iVar6 != 0)) {
                uVar4 = iVar6 - 1;
                if (*in_x5 == 0) {
                    if (5 < uVar4) goto code_r0x08001a6c;
                    piVar1 = iVar9 + uVar4 * 0x10 + 0x6c;
                    Hint_Prefetch(piVar1,2,0,1);
                    do {
                        cVar2 = '\x01';
                        bVar3 = ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar3) {
                            *piVar1 = *piVar1 + 1;
                            cVar2 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar2 != '\0');
                }
                else {
                    if (5 < uVar4) goto code_r0x08001a6c;
                    piVar1 = iVar9 + uVar4 * 0x10 + 0x68;
                    Hint_Prefetch(piVar1,2,0,1);
                    do {
                        cVar2 = '\x01';
                        bVar3 = ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar3) {
                            *piVar1 = *piVar1 + 1;
                            cVar2 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar2 != '\0');
                }
            }
        }
    }
    if (((uStack_3c._1_1_ >> 5 & 1) == 0) && (*in_x5 == 0)) {
        if (0xb < uVar8) goto code_r0x08001a6c;
        piVar1 = _segment.ehdr + arg1_00 * 4 + 0x44;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
                *piVar1 = *piVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail();
code_r0x08001a6c:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x8001a70);
    (*pcVar5)();
}


// ===== sym.check_whitelist @ 0x08001adc (size 644) =====

uint32_t sym.check_whitelist(void)

{
    int *piVar1;
    char cVar2;
    bool bVar3;
    int64_t iVar4;
    int iVar5;
    ulong uVar6;
    ulong *in_x18;
    uint32_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(_segment.ehdr + 0x34) >> 2 & 1) != 0) {
        piVar1 = _segment.ehdr + 0x70;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
                *piVar1 = *piVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
    }
    uVar6 = _raw_spin_lock_irqsave(obj.proc_tree_lock);
    iVar4 = sp_el0;
    if (_segment.ehdr != 0) {
        iVar5 = *(*(iVar4 + 0x618) + 0x5d8);
        iVar8 = _segment.ehdr;
        do {
            while (*(iVar8 + 0x18) <= iVar5) {
                if (iVar5 <= *(iVar8 + 0x18)) {
                    _raw_spin_unlock_irqrestore(obj.proc_tree_lock,uVar6);
                    return *(iVar8 + 0x1c);
                }
                iVar8 = *(iVar8 + 0x10);
                if (iVar8 == 0) goto code_r0x08001b68;
            }
            iVar8 = *(iVar8 + 8);
        } while (iVar8 != 0);
    }
code_r0x08001b68:
    _raw_spin_unlock_irqrestore(obj.proc_tree_lock,uVar6);
    if ((*(*(iVar4 + 0x7f0) + 0x3c2) == -1000) && (iVar8 = *(iVar4 + 0x618), iVar8 != 0)) {
        uVar6 = 8;
        if (obj.comm_whitelist_sizes.0 == 0x0) {
            uVar6 = 0;
        }
        iVar5 = strncmp(iVar8 + 0x7a8,"composer",uVar6);
        if (iVar5 != 0) goto code_r0x08001bb4;
        uVar7 = 1;
        goto code_r0x08001d18;
    }
code_r0x08001bb4:
    if (*(*(iVar4 + 0x7f0) + 0x3c2) == -1000) {
        iVar8 = *(iVar4 + 0x618);
        if (iVar8 != 0) {
            uVar6 = 0xe;
            if (obj.comm_whitelist_sizes.1 == 0x0) {
                uVar6 = 0;
            }
            iVar5 = strncmp(iVar8 + 0x7a8,"surfaceflinger",uVar6);
            if (iVar5 == 0) {
                uVar7 = 2;
                goto code_r0x08001d18;
            }
            goto code_r0x08001bf4;
        }
code_r0x08001c54:
        if (*(*(iVar4 + 0x7f0) + 0x3c2) == -900) {
            iVar8 = *(iVar4 + 0x618);
            iVar9 = 0;
            if (iVar8 != 0) {
                uVar6 = 0xd;
                if (obj.comm_whitelist_sizes.4 == 0x0) {
                    uVar6 = 0;
                }
                iVar5 = strncmp(iVar8 + 0x7a8,"system_server",uVar6);
                if (iVar5 == 0) {
                    uVar7 = 5;
                    goto code_r0x08001d18;
                }
                goto code_r0x08001c94;
            }
        }
        else {
code_r0x08001c94:
            iVar8 = *(iVar4 + 0x618);
            iVar9 = iVar8;
            if (iVar8 != 0) {
                uVar6 = 0xf;
                if (obj.comm_whitelist_sizes.5 == 0x0) {
                    uVar6 = 0;
                }
                iVar5 = strncmp(iVar8 + 0x7a8,"",uVar6);
                if (iVar5 == 0) {
                    uVar7 = 6;
                    goto code_r0x08001d18;
                }
            }
        }
        sym.insert_new_proc_node(*(iVar9 + 0x5d8),0);
        uVar7 = 0;
    }
    else {
code_r0x08001bf4:
        iVar8 = *(iVar4 + 0x618);
        if (iVar8 == 0) goto code_r0x08001c54;
        uVar6 = 0xd;
        if (obj.comm_whitelist_sizes.2 == 0x0) {
            uVar6 = 0;
        }
        iVar5 = strncmp(iVar8 + 0x7a8,"com.miui.home",uVar6);
        if (iVar5 != 0) {
            iVar8 = *(iVar4 + 0x618);
            if (iVar8 != 0) {
                uVar6 = 0x14;
                if (obj.comm_whitelist_sizes.3 == 0x0) {
                    uVar6 = 0;
                }
                iVar5 = strncmp(iVar8 + 0x7a8,"com.android.systemui",uVar6);
                if (iVar5 == 0) {
                    uVar7 = 4;
                    goto code_r0x08001d18;
                }
            }
            goto code_r0x08001c54;
        }
        uVar7 = 3;
code_r0x08001d18:
        sym.insert_new_proc_node(*(iVar8 + 0x5d8),uVar7);
    }
    return uVar7;
}


// ===== sym.mi_mempool_refill_check @ 0x08001d60 (size 376) =====

void sym.mi_mempool_refill_check(void)

{
    int iVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = ktime_get();
    if (((299 < iVar2 / 1000000 - *(_segment.ehdr + 0x10)) && (*(_segment.ehdr + 0x28) != '\0')) &&
       ((*(_segment.ehdr + 0x30) & 1) == 0)) {
        uVar3 = _raw_spin_lock_irqsave(_segment.ehdr + 0x2c);
        iVar2 = _segment.ehdr;
        if ((*(_segment.ehdr + 0x30) & 1) == 0) {
            *(_segment.ehdr + 0x29) = 1;
            *(iVar2 + 0x30) = 1;
            wake_up_process(*(iVar2 + 8));
        }
        _raw_spin_unlock_irqrestore(_segment.ehdr + 0x2c,uVar3);
    }
    uVar3 = _raw_spin_lock_irqsave(obj.proc_tree_lock);
    if (_segment.ehdr != 0) {
        iVar2 = sp_el0;
        iVar1 = *(*(iVar2 + 0x618) + 0x5d8);
        iVar2 = _segment.ehdr;
        do {
            while (iVar1 < *(iVar2 + 0x18)) {
                iVar2 = *(iVar2 + 8);
                if (iVar2 == 0) goto code_r0x08001e68;
            }
            if (iVar1 <= *(iVar2 + 0x18)) {
                rb_erase(iVar2,obj.proc_tree);
                *(_segment.ehdr + 0x78) = *(_segment.ehdr + 0x78) + -1;
                _raw_spin_unlock_irqrestore(obj.proc_tree_lock,uVar3);
                if (_segment.ehdr == 0) {
                    return;
                }
                kmem_cache_free(_segment.ehdr,iVar2);
                return;
            }
            iVar2 = *(iVar2 + 0x10);
        } while (iVar2 != 0);
    }
code_r0x08001e68:
    _raw_spin_unlock_irqrestore(obj.proc_tree_lock,uVar3);
    return;
}


// ===== sym.process_use_count_show @ 0x08001ee4 (size 516) =====

int64_t sym.process_use_count_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    ulong *puVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int64_t iVar5;
    ulong *in_x18;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    
    *in_x18 = unaff_x30;
    iVar6 = 0;
    iVar3 = 0;
    iVar7 = 0x6c;
    do {
        iVar2 = snprintf(noname_1,arg2 + iVar3,0x1000 - iVar3,"comm:%s\n",*(obj.comm_whitelist + iVar6 * 8));
        iVar8 = iVar6 * 4;
        iVar2 = iVar2 + iVar3;
        iVar5 = **_segment.ehdr;
        puVar1 = iVar5 + iVar7;
        iVar3 = snprintf(arg2 + iVar2,0x1000 - iVar2,"order-%d:%d %d %d %d %d\n",*(iVar5 + 8),*(puVar1 + -0xc),
                         puVar1[-1],*(puVar1 + -4),*puVar1,*(iVar5 + iVar8 + 0x40));
        iVar3 = iVar3 + iVar2;
        iVar5 = *(*_segment.ehdr + 8);
        puVar1 = iVar5 + iVar7;
        iVar2 = snprintf(arg2 + iVar3,0x1000 - iVar3,"order-%d:%d %d %d %d %d\n",*(iVar5 + 8),*(puVar1 + -0xc),
                         puVar1[-1],*(puVar1 + -4),*puVar1,*(iVar5 + iVar8 + 0x40));
        iVar2 = iVar2 + iVar3;
        iVar5 = *(*_segment.ehdr + 0x10);
        puVar1 = iVar5 + iVar7;
        iVar4 = snprintf(arg2 + iVar2,0x1000 - iVar2,"order-%d:%d %d %d %d %d\n",*(iVar5 + 8),*(puVar1 + -0xc),
                         puVar1[-1],*(puVar1 + -4),*puVar1,*(iVar5 + iVar8 + 0x40));
        iVar4 = iVar4 + iVar2;
        iVar5 = *(*_segment.ehdr + 0x18);
        puVar1 = iVar5 + iVar7;
        iVar3 = snprintf(arg2 + iVar4,0x1000 - iVar4,"order-%d:%d %d %d %d %d\n",*(iVar5 + 8),*(puVar1 + -0xc),
                         puVar1[-1],*(puVar1 + -4),*puVar1,*(iVar5 + iVar8 + 0x40));
        iVar6 = iVar6 + 1;
        iVar3 = iVar3 + iVar4;
        iVar7 = iVar7 + 0x10;
        noname_1 = extraout_q0;
    } while (iVar7 != 0xcc);
    return iVar3;
}


// ===== sym.direct_relcaim_threshold_mb_show @ 0x08002128 (size 68) =====

int64_t sym.direct_relcaim_threshold_mb_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sprintf(arg1,"%lumb\n",*(_segment.ehdr + 0x20) >> 8 & 0xfffffffffff);
    return iVar1;
}


// ===== sym.direct_relcaim_threshold_mb_store @ 0x0800216c (size 152) =====

int64_t sym.direct_relcaim_threshold_mb_store(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    int *piVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    int iStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    piVar3 = &iStack_2c;
    iStack_2c = 0;
    iVar2 = kstrtoint(arg1,0,piVar3);
    if (iVar2 < 0) {
        arg2 = -0x16;
    }
    else {
        *(_segment.ehdr + 0x20) = (iStack_2c << 0x14) >> 0xc;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return arg2;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.config_show;
    iVar2 = sprintf(piVar3,0x80007cc,*(_segment.ehdr + 0x34));
    return iVar2;
}


// ===== sym.config_show @ 0x08002204 (size 64) =====

int64_t sym.config_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sprintf(arg1,0x80007cc,*(_segment.ehdr + 0x34));
    return iVar1;
}


// ===== sym.config_store @ 0x08002244 (size 140) =====

int64_t sym.config_store(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    int iVar1;
    int iVar2;
    uint *puVar3;
    ulong uVar4;
    int64_t iVar5;
    ulong uVar6;
    int64_t iVar7;
    ulong uVar8;
    int64_t iVar9;
    ulong uVar10;
    int64_t iVar11;
    ulong uVar12;
    int64_t iVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar14;
    ulong unaff_x30;
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iStack_28 = *(iVar13 + 0x5e0);
    puVar3 = &uStack_2c;
    uStack_2c = 0;
    iVar1 = kstrtoint(arg1,0,puVar3);
    if (iVar1 < 0) {
        arg2 = -0x16;
    }
    else {
        *(_segment.ehdr + 0x34) = uStack_2c;
    }
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_28) {
        return arg2;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.general_stat_info_show;
    iVar2 = snprintf(puVar3,0x1000,"total_page_num: %d\n",_segment.ehdr[8]);
    iVar1 = snprintf(puVar3 + iVar2,0x1000 - iVar2,"last_refill: %lu %d %d\n",_segment.ehdr[2],_segment.ehdr[3],
                     *(_segment.ehdr + 0x1c));
    iVar1 = iVar1 + iVar2;
    iVar13 = **_segment.ehdr;
    iVar2 = snprintf(puVar3 + iVar1,0x1000 - iVar1,"order-%d: %d %d %d %d %d\n",*(iVar13 + 8),*(iVar13 + 0x20),
                     *(iVar13 + 0x24),*(iVar13 + 0x28),*(iVar13 + 0x2c),*(iVar13 + 0x30));
    iVar2 = iVar2 + iVar1;
    iVar13 = *(*_segment.ehdr + 8);
    iVar1 = snprintf(puVar3 + iVar2,0x1000 - iVar2,"order-%d: %d %d %d %d %d\n",*(iVar13 + 8),*(iVar13 + 0x20),
                     *(iVar13 + 0x24),*(iVar13 + 0x28),*(iVar13 + 0x2c),*(iVar13 + 0x30));
    iVar1 = iVar1 + iVar2;
    iVar13 = *(*_segment.ehdr + 0x10);
    iVar2 = snprintf(puVar3 + iVar1,0x1000 - iVar1,"order-%d: %d %d %d %d %d\n",*(iVar13 + 8),*(iVar13 + 0x20),
                     *(iVar13 + 0x24),*(iVar13 + 0x28),*(iVar13 + 0x2c),*(iVar13 + 0x30));
    iVar2 = iVar2 + iVar1;
    iVar13 = *(*_segment.ehdr + 0x18);
    iVar1 = snprintf(puVar3 + iVar2,0x1000 - iVar2,"order-%d: %d %d %d %d %d\n",*(iVar13 + 8),*(iVar13 + 0x20),
                     *(iVar13 + 0x24),*(iVar13 + 0x28),*(iVar13 + 0x2c),*(iVar13 + 0x30));
    iVar1 = iVar1 + iVar2;
    iVar2 = snprintf(puVar3 + iVar1,0x1000 - iVar1,"rb_tree: %d %d %d\n",_segment.ehdr[0xe],_segment.ehdr[0xf],
                     *(_segment.ehdr + 0x74));
    iVar2 = iVar2 + iVar1;
    uVar14 = *(_segment.ehdr + 0x44);
    iVar1 = snprintf(puVar3 + iVar2,0x1000 - iVar2,"",0,uVar14 & 0xffffffff);
    iVar1 = iVar1 + iVar2;
    iVar13 = _segment.ehdr[9];
    iVar2 = snprintf(puVar3 + iVar1,0x1000 - iVar1," %d:%d",1);
    iVar2 = iVar2 + iVar1;
    uVar4 = *(_segment.ehdr + 0x4c);
    iVar1 = snprintf(puVar3 + iVar2,0x1000 - iVar2," %d:%d",2);
    iVar1 = iVar1 + iVar2;
    iVar5 = _segment.ehdr[10];
    iVar2 = snprintf(puVar3 + iVar1,0x1000 - iVar1," %d:%d",3);
    iVar2 = iVar2 + iVar1;
    uVar6 = *(_segment.ehdr + 0x54);
    iVar1 = snprintf(puVar3 + iVar2,0x1000 - iVar2," %d:%d",4);
    iVar1 = iVar1 + iVar2;
    iVar7 = _segment.ehdr[0xb];
    iVar2 = snprintf(puVar3 + iVar1,0x1000 - iVar1," %d:%d",5);
    iVar2 = iVar2 + iVar1;
    uVar8 = *(_segment.ehdr + 0x5c);
    iVar1 = snprintf(puVar3 + iVar2,0x1000 - iVar2," %d:%d",6);
    iVar1 = iVar1 + iVar2;
    iVar9 = _segment.ehdr[0xc];
    iVar2 = snprintf(puVar3 + iVar1,0x1000 - iVar1," %d:%d",7);
    iVar2 = iVar2 + iVar1;
    uVar10 = *(_segment.ehdr + 100);
    iVar1 = snprintf(puVar3 + iVar2,0x1000 - iVar2," %d:%d",8);
    iVar1 = iVar1 + iVar2;
    iVar11 = _segment.ehdr[0xd];
    iVar2 = snprintf(puVar3 + iVar1,0x1000 - iVar1," %d:%d",9);
    iVar2 = iVar2 + iVar1;
    uVar12 = *(_segment.ehdr + 0x6c);
    iVar1 = snprintf(puVar3 + iVar2,0x1000 - iVar2," %d:%d",10);
    iVar1 = iVar1 + iVar2;
    iVar2 = snprintf(puVar3 + iVar1,0x1000 - iVar1," %d\n",
                     uVar12 + iVar11 + uVar10 + iVar9 + uVar8 + iVar7 + uVar6 + iVar5 + uVar4 + iVar13 + uVar14);
    return iVar2 + iVar1;
}


// ===== sym.general_stat_info_show @ 0x080022d0 (size 1044) =====

int64_t sym.general_stat_info_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    int iVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong uVar5;
    int64_t iVar6;
    ulong uVar7;
    int64_t iVar8;
    ulong uVar9;
    int64_t iVar10;
    ulong uVar11;
    int64_t iVar12;
    ulong *in_x18;
    uint64_t uVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(arg1,0x1000,"total_page_num: %d\n",_segment.ehdr[8]);
    iVar2 = snprintf(arg1 + iVar1,0x1000 - iVar1,"last_refill: %lu %d %d\n",_segment.ehdr[2],_segment.ehdr[3],
                     *(_segment.ehdr + 0x1c));
    iVar2 = iVar2 + iVar1;
    iVar12 = **_segment.ehdr;
    iVar1 = snprintf(arg1 + iVar2,0x1000 - iVar2,"order-%d: %d %d %d %d %d\n",*(iVar12 + 8),*(iVar12 + 0x20),
                     *(iVar12 + 0x24),*(iVar12 + 0x28),*(iVar12 + 0x2c),*(iVar12 + 0x30));
    iVar1 = iVar1 + iVar2;
    iVar12 = *(*_segment.ehdr + 8);
    iVar2 = snprintf(arg1 + iVar1,0x1000 - iVar1,"order-%d: %d %d %d %d %d\n",*(iVar12 + 8),*(iVar12 + 0x20),
                     *(iVar12 + 0x24),*(iVar12 + 0x28),*(iVar12 + 0x2c),*(iVar12 + 0x30));
    iVar2 = iVar2 + iVar1;
    iVar12 = *(*_segment.ehdr + 0x10);
    iVar1 = snprintf(arg1 + iVar2,0x1000 - iVar2,"order-%d: %d %d %d %d %d\n",*(iVar12 + 8),*(iVar12 + 0x20),
                     *(iVar12 + 0x24),*(iVar12 + 0x28),*(iVar12 + 0x2c),*(iVar12 + 0x30));
    iVar1 = iVar1 + iVar2;
    iVar12 = *(*_segment.ehdr + 0x18);
    iVar2 = snprintf(arg1 + iVar1,0x1000 - iVar1,"order-%d: %d %d %d %d %d\n",*(iVar12 + 8),*(iVar12 + 0x20),
                     *(iVar12 + 0x24),*(iVar12 + 0x28),*(iVar12 + 0x2c),*(iVar12 + 0x30));
    iVar2 = iVar2 + iVar1;
    iVar1 = snprintf(arg1 + iVar2,0x1000 - iVar2,"rb_tree: %d %d %d\n",_segment.ehdr[0xe],_segment.ehdr[0xf],
                     *(_segment.ehdr + 0x74));
    iVar1 = iVar1 + iVar2;
    uVar13 = *(_segment.ehdr + 0x44);
    iVar2 = snprintf(arg1 + iVar1,0x1000 - iVar1,"",0,uVar13 & 0xffffffff);
    iVar2 = iVar2 + iVar1;
    iVar12 = _segment.ehdr[9];
    iVar1 = snprintf(arg1 + iVar2,0x1000 - iVar2," %d:%d",1);
    iVar1 = iVar1 + iVar2;
    uVar3 = *(_segment.ehdr + 0x4c);
    iVar2 = snprintf(arg1 + iVar1,0x1000 - iVar1," %d:%d",2);
    iVar2 = iVar2 + iVar1;
    iVar4 = _segment.ehdr[10];
    iVar1 = snprintf(arg1 + iVar2,0x1000 - iVar2," %d:%d",3);
    iVar1 = iVar1 + iVar2;
    uVar5 = *(_segment.ehdr + 0x54);
    iVar2 = snprintf(arg1 + iVar1,0x1000 - iVar1," %d:%d",4);
    iVar2 = iVar2 + iVar1;
    iVar6 = _segment.ehdr[0xb];
    iVar1 = snprintf(arg1 + iVar2,0x1000 - iVar2," %d:%d",5);
    iVar1 = iVar1 + iVar2;
    uVar7 = *(_segment.ehdr + 0x5c);
    iVar2 = snprintf(arg1 + iVar1,0x1000 - iVar1," %d:%d",6);
    iVar2 = iVar2 + iVar1;
    iVar8 = _segment.ehdr[0xc];
    iVar1 = snprintf(arg1 + iVar2,0x1000 - iVar2," %d:%d",7);
    iVar1 = iVar1 + iVar2;
    uVar9 = *(_segment.ehdr + 100);
    iVar2 = snprintf(arg1 + iVar1,0x1000 - iVar1," %d:%d",8);
    iVar2 = iVar2 + iVar1;
    iVar10 = _segment.ehdr[0xd];
    iVar1 = snprintf(arg1 + iVar2,0x1000 - iVar2," %d:%d",9);
    iVar1 = iVar1 + iVar2;
    uVar11 = *(_segment.ehdr + 0x6c);
    iVar2 = snprintf(arg1 + iVar1,0x1000 - iVar1," %d:%d",10);
    iVar2 = iVar2 + iVar1;
    iVar1 = snprintf(arg1 + iVar2,0x1000 - iVar2," %d\n",
                     uVar11 + iVar10 + uVar9 + iVar8 + uVar7 + iVar6 + uVar5 + iVar4 + uVar3 + iVar12 + uVar13);
    return iVar1 + iVar2;
}


// ===== sym.mi_dynamic_page_pools_destory @ 0x08002750 (size 220) =====

void sym.mi_dynamic_page_pools_destory(void)

{
    int64_t iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = **_segment.ehdr;
    while (iVar1 = sym.mi_dynamic_page_pool_remove(iVar2), iVar1 != 0) {
        __free_pages(iVar1,*(iVar2 + 8));
    }
    kfree(iVar2);
    iVar2 = *(*_segment.ehdr + 8);
    while (iVar1 = sym.mi_dynamic_page_pool_remove(iVar2), iVar1 != 0) {
        __free_pages(iVar1,*(iVar2 + 8));
    }
    kfree(iVar2);
    iVar2 = *(*_segment.ehdr + 0x10);
    while (iVar1 = sym.mi_dynamic_page_pool_remove(iVar2), iVar1 != 0) {
        __free_pages(iVar1,*(iVar2 + 8));
    }
    kfree(iVar2);
    iVar2 = *(*_segment.ehdr + 0x18);
    while (iVar1 = sym.mi_dynamic_page_pool_remove(iVar2), iVar1 != 0) {
        __free_pages(iVar1,*(iVar2 + 8));
    }
    kfree(iVar2);
    return;
}


// ===== sym.mi_mempool_refill_work @ 0x0800282c (size 1560) =====

ulong sym.mi_mempool_refill_work(int64_t arg1)

{
    bool bVar1;
    uint64_t *puVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    uint8_t uVar6;
    code *pcVar7;
    ulong in_tmp_ldXn;
    int iVar8;
    int iVar9;
    int64_t iVar10;
    int64_t iVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    ulong uVar14;
    int64_t iVar15;
    uint *in_x3;
    uint64_t uVar16;
    int64_t iVar17;
    int64_t iVar18;
    int64_t iVar19;
    int64_t *piVar20;
    uint uVar21;
    uint64_t uVar22;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar23;
    uint32_t uVar24;
    uint64_t uVar25;
    int64_t iVar26;
    uint64_t uVar27;
    ulong unaff_x30;
    uint auStack_19c [75];
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    piVar20 = _segment.ehdr;
    iVar15 = sp_el0;
    iStack_70 = *(iVar15 + 0x5e0);
    iVar23 = *_segment.ehdr;
    memset(&stack0xfffffffffffffe64,0,300);
    iVar15 = sp_el0;
    do {
        iVar10 = ktime_get();
        iVar26 = 0;
        uVar24 = 0;
        piVar20[2] = iVar10 / 1000000;
        piVar20 = _segment.ehdr;
        iVar8 = *(_segment.ehdr + 0x1c);
        *(_segment.ehdr + 5) = 0;
        *(piVar20 + 3) = 0;
        *(piVar20 + 0x1c) = iVar8 + 1;
        do {
            iVar10 = *(iVar23 + iVar26 * 8);
            if (*(iVar10 + 0x58) == '\0') {
code_r0x08002934:
                uVar21 = *(iVar10 + 4);
                if (*(iVar10 + 0x20) < *(iVar10 + 0x30)) {
                    iVar8 = 0;
                    while( true ) {
                        uVar3 = *(iVar10 + 4);
                        iVar11 = ktime_get();
                        if (iVar11 - *(iVar10 + 0x38) < 10000000) break;
                        uVar27 = 0x250015 >> ((uVar3 & 0xf) << 1) & 3;
                        iVar11 = uVar27 * 0x640 + 0x800e124;
                        uVar13 = uVar27;
                        do {
                            uVar14 = tpidr_el1;
                            iVar9 = strcmp(uVar14,*(sysfs_create_files + uVar13 * 0x640),"DMA32");
                            if (iVar9 != 0) {
                                iVar19 = uVar13 * 0x640;
                                uVar4 = *(iVar10 + 8);
                                puVar2 = iVar19 + 0x800e5c4;
                                iVar9 = *(__per_cpu_offset + iVar19);
                                iVar5 = *(_printk + iVar19);
                                uVar22 = *puVar2;
                                uVar3 = *(iVar10 + 8);
                                uVar25 = uVar3;
                                uVar16 = *puVar2 & (*puVar2 >> 0x3f ^ 0xffffffffffffffffU);
                                if ((*(iVar19 + 0x800e584) != 0) && (uVar16 < *(iVar19 + 0x800e584))) {
                                    uVar16 = *puVar2;
                                    *in_x3 = 0x640;
                                    uVar12 = cpumask_next(rb_erase,0xffffffff,__cpu_online_mask);
                                    if (uVar12 < 0x640) {
                                        do {
                                            if (0x1f < uVar12) goto code_r0x08002db4;
                                            uVar16 = uVar16 + *(*(__per_cpu_offset + (uVar12 & 0xffffffff) * 8) +
                                                               *(scnprintf + uVar13 * 0x640));
                                            uVar12 = cpumask_next(uVar12,__cpu_online_mask);
                                        } while (uVar12 < 0x640);
                                    }
                                    uVar16 = uVar16 & (uVar16 >> 0x3f ^ 0xffffffffffffffffU);
                                }
                                puVar2 = uVar13 * 0x640 + 0x800e614;
                                uVar12 = *puVar2;
                                if (uVar27 == 3) goto code_r0x08002db4;
                                in_x3 = (1 << (uVar4 & 0x1f)) + iVar5 + iVar9;
                                if (uVar16 - (*(_raw_spin_lock_irqsave + uVar13 * 0x640) + ~(-1 << (uVar3 & 0x1f)) +
                                             (uVar12 & (uVar12 >> 0x3f ^ 0xffffffffffffffffU))) <=
                                    *(_raw_spin_unlock_irqrestore + uVar13 * 0x640 + uVar27 * 8) + in_x3) {
code_r0x08002bf8:
                                    if ((*(_segment.ehdr + 0x34) >> 1 & 1) != 0) {
                                        uVar21 = uVar22;
                                        if (uVar22 < 1) {
                                            uVar21 = 0;
                                        }
                                        uVar27 = *puVar2;
                                        _printk(0x80006d3,*(sysfs_create_files + uVar13 * 0x640),*(iVar10 + 8),in_x3
                                                ,uVar21,*(_raw_spin_lock_irqsave + uVar13 * 0x640),
                                                uVar27 & (uVar27 >> 0x3f ^ 0xffffffffffffffffU));
                                    }
                                    uVar14 = ktime_get();
                                    *(iVar10 + 0x38) = uVar14;
                                    goto code_r0x08002c1c;
                                }
                                if (uVar3 != 0) {
                                    if (10 < uVar3) goto code_r0x08002bf8;
                                    if (uVar3 < 0xd) {
                                        uVar3 = 0xc;
                                    }
                                    iVar18 = uVar3 - uVar25;
                                    iVar17 = uVar25 * 0x68;
                                    iVar19 = iVar11;
                                    while( true ) {
                                        if (iVar18 == 0) goto code_r0x08002db4;
                                        if ((*(iVar19 + iVar17) != 0) &&
                                           ((((piVar20 = iVar19 + iVar17 + -0x60, piVar20 != *piVar20 ||
                                              (piVar20 = iVar19 + iVar17 + -0x50, piVar20 != *piVar20)) ||
                                             (piVar20 = iVar19 + iVar17 + -0x40, piVar20 != *piVar20)) ||
                                            (piVar20 = iVar19 + iVar17 + -0x30, piVar20 != *piVar20)))) break;
                                        iVar19 = iVar19 + 0x68;
                                        uVar3 = uVar25 + 1;
                                        uVar25 = uVar3;
                                        iVar18 = iVar18 + -1;
                                        if (10 < uVar3) goto code_r0x08002bf8;
                                    }
                                }
                            }
                            iVar11 = iVar11 + -0x640;
                            bVar1 = 0 < uVar13;
                            uVar13 = uVar13 - 1;
                        } while (bVar1);
                        uVar14 = tpidr_el1;
                        in_x3 = NULL;
                        iVar11 = __alloc_pages(uVar14,uVar21,*(iVar10 + 8),0);
                        if (iVar11 == 0) break;
                        sym.mi_dynamic_page_pool_add(iVar10,iVar11);
                        iVar8 = iVar8 + 1;
                        if (*(iVar10 + 0x30) <= *(iVar10 + 0x20)) break;
                    }
                }
                else {
                    iVar8 = 0;
                }
code_r0x08002c1c:
                iVar10 = *(iVar23 + iVar26 * 8);
                uVar3 = *(iVar10 + 8);
                iVar9 = *(iVar10 + 0x20);
                if (*(iVar10 + 0x58) == '\0') {
                    if (iVar9 < *(iVar10 + 0x30)) {
                        *(_segment.ehdr + 5) = 1;
                        iVar10 = *(iVar23 + iVar26 * 8);
                        *(iVar10 + 0x5c) = *(iVar10 + 0x5c) + 1;
                        iVar10 = *(iVar23 + iVar26 * 8);
                        if (*(iVar10 + 0x5c) < 0x10) goto code_r0x08002c9c;
                    }
                    else {
                        iVar10 = *(iVar23 + iVar26 * 8);
                    }
                    piVar20 = iVar10 + 0x58;
code_r0x08002c94:
                    *piVar20 = 1;
                }
                else if (iVar9 <= *(iVar10 + 0x2c)) {
                    piVar20 = _segment.ehdr + 5;
                    goto code_r0x08002c94;
                }
code_r0x08002c9c:
                piVar20 = _segment.ehdr;
                iVar8 = iVar8 << (uVar3 & 0x1f);
                *(_segment.ehdr + 3) = _segment.ehdr[3] + iVar8;
                uVar6 = *(piVar20 + 0x34);
            }
            else {
                if (*(iVar10 + 0x20) <= *(iVar10 + 0x2c)) {
                    iVar10 = *(iVar23 + iVar26 * 8);
                    goto code_r0x08002934;
                }
                iVar8 = 0;
                uVar6 = *(_segment.ehdr + 0x34);
            }
            if (((uVar6 >> 1 & 1) != 0) && (uVar24 < 300)) {
                if (300 < uVar24) goto code_r0x08002db4;
                in_x3 = *(*(iVar23 + iVar26 * 8) + 8);
                iVar8 = scnprintf(&stack0xfffffffffffffe64 + uVar24,300 - uVar24,"order-%d:%d ",in_x3,iVar8);
                uVar24 = iVar8 + uVar24;
            }
            iVar26 = iVar26 + 1;
        } while (iVar26 != 4);
        if ((*(_segment.ehdr + 0x34) >> 1 & 1) != 0) {
            uVar24 = uVar24 - (299 < uVar24);
            if (299 < uVar24) {
code_r0x08002db4:
    //WARNING: Does not return
                pcVar7 = SoftwareBreakpoint(0x5512,0x8002db8);
                (*pcVar7)();
            }
            (&stack0xfffffffffffffe64)[uVar24] = 0;
            iVar26 = ktime_get();
            in_x3 = &stack0xfffffffffffffe64;
            _printk(0x8000837,iVar26 / 1000000 - _segment.ehdr[2],*(_segment.ehdr + 0x29));
        }
        *(_segment.ehdr + 0x29) = 0;
        *(iVar15 + 0x28) = 1;
        DataMemoryBarrier(2,3);
        uVar13 = kthread_should_stop();
        if ((uVar13 & 1) != 0) {
            *(iVar15 + 0x28) = 0;
            DataMemoryBarrier(2,3);
            iVar15 = sp_el0;
            if (*(iVar15 + 0x5e0) == iStack_70) {
                return 0;
            }
            __stack_chk_fail();
            uVar14 = tpidr_el2;
            uVar14 = tpidr_el2;
            *extraout_x18 = 0x8002e04;
            uVar14 = _raw_spin_lock_irqsave(in_tmp_ldXn,obj.proc_tree_lock);
            iVar15 = rb_first_postorder(obj.proc_tree);
            while (iVar23 = iVar15, iVar23 != 0) {
                iVar15 = rb_next_postorder(iVar23);
                if (_segment.ehdr != NULL) {
                    kmem_cache_free(_segment.ehdr,iVar23);
                }
            }
            _segment.ehdr = NULL;
            _raw_spin_unlock_irqrestore(obj.proc_tree_lock,uVar14);
            uVar14 = kmem_cache_destroy(_segment.ehdr);
            return uVar14;
        }
        uVar14 = _raw_spin_lock_irqsave(_segment.ehdr + 0x2c);
        iVar26 = _segment.ehdr + 0x2c;
        *(_segment.ehdr + 6) = 0;
        _raw_spin_unlock_irqrestore(iVar26,uVar14);
        schedule();
        *(iVar15 + 0x28) = 0;
        DataMemoryBarrier(2,3);
        piVar20 = _segment.ehdr;
    } while( true );
}


// ===== sym.free_all_proc_nodes_and_caches @ 0x08002e44 (size 168) =====

void sym.free_all_proc_nodes_and_caches(void)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = _raw_spin_lock_irqsave(obj.proc_tree_lock);
    iVar3 = rb_first_postorder(obj.proc_tree);
    while (iVar1 = iVar3, iVar1 != 0) {
        iVar3 = rb_next_postorder(iVar1);
        if (_segment.ehdr != 0) {
            kmem_cache_free(_segment.ehdr,iVar1);
        }
    }
    _segment.ehdr = 0;
    _raw_spin_unlock_irqrestore(obj.proc_tree_lock,uVar2);
    kmem_cache_destroy(_segment.ehdr);
    return;
}


// ===== sym.mi_dynamic_page_pool_remove @ 0x08002eec (size 332) =====

int64_t sym.mi_dynamic_page_pool_remove(int64_t arg1)

{
    int *piVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint32_t uVar4;
    char cVar5;
    bool bVar6;
    ulong uVar7;
    uint64_t uVar8;
    int64_t *piVar9;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar7 = _raw_spin_lock_irqsave();
    piVar9 = *(arg1 + 0x10);
    iVar2 = 0;
    if (arg1 + 0x10 != piVar9) {
        iVar2 = piVar9 + -1;
    }
    if (iVar2 == 0) {
        _raw_spin_unlock_irqrestore(arg1,uVar7);
    }
    else {
        uVar8 = __list_del_entry_valid(iVar2 + 8);
        if ((uVar8 & 1) != 0) {
            iVar3 = *(iVar2 + 8);
            piVar9 = *(iVar2 + 0x10);
            *(iVar3 + 8) = piVar9;
            *piVar9 = iVar3;
        }
        *(iVar2 + 8) = 0xdead000000000100;
        *(iVar2 + 0x10) = 0xdead000000000122;
        mod_node_page_state(contig_page_data,0x21,-1L << (*(arg1 + 8) & 0x3fU));
        _raw_spin_unlock_irqrestore(arg1,uVar7);
        piVar1 = arg1 + 0x20;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            cVar5 = '\x01';
            bVar6 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
                *piVar1 = *piVar1 + -1;
                cVar5 = ExclusiveMonitorsStatus();
            }
        } while (cVar5 != '\0');
        uVar4 = *(arg1 + 8);
        piVar1 = _segment.ehdr + 0x40;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            cVar5 = '\x01';
            bVar6 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
                *piVar1 = *piVar1 - (1 << (uVar4 & 0x1f));
                cVar5 = ExclusiveMonitorsStatus();
            }
        } while (cVar5 != '\0');
    }
    return iVar2;
}


// ===== sym.insert_new_proc_node @ 0x08003038 (size 336) =====

void sym.insert_new_proc_node(int64_t arg1,int64_t arg2)

{
    int *piVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    int64_t iVar5;
    int64_t *piVar6;
    ulong uVar7;
    code *pcVar8;
    int64_t iVar9;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != 0) {
        iVar4 = arg1;
        piVar6 = kmem_cache_alloc(_segment.ehdr,0xa20);
        if (piVar6 != NULL) {
            *(piVar6 + 3) = iVar4;
            *(piVar6 + 0x1c) = arg2;
            uVar7 = _raw_spin_lock_irqsave(obj.proc_tree_lock);
            pcVar8 = obj.proc_tree;
            iVar5 = _obj.proc_tree;
            if (_obj.proc_tree == 0) {
                iVar9 = 0;
            }
            else {
                do {
                    while (iVar9 = iVar5, *(iVar9 + 0x18) <= iVar4) {
                        if (iVar4 <= *(iVar9 + 0x18)) {
                            if (_segment.ehdr != 0) {
                                kmem_cache_free(_segment.ehdr,piVar6);
                            }
                            goto code_r0x08003100;
                        }
                        pcVar8 = iVar9 + 0x10;
                        iVar5 = *pcVar8;
                        if (*pcVar8 == 0) goto code_r0x080030d0;
                    }
                    pcVar8 = iVar9 + 8;
                    iVar5 = *pcVar8;
                } while (*pcVar8 != 0);
            }
code_r0x080030d0:
            *piVar6 = iVar9;
            piVar6[1] = 0;
            piVar6[2] = 0;
            *pcVar8 = piVar6;
            rb_insert_color(piVar6,obj.proc_tree);
            *(_segment.ehdr + 0x78) = *(_segment.ehdr + 0x78) + 1;
code_r0x08003100:
            _raw_spin_unlock_irqrestore(obj.proc_tree_lock,uVar7);
            return;
        }
    }
    if ((*(_segment.ehdr + 0x34) >> 2 & 1) != 0) {
        piVar1 = _segment.ehdr + 0x74;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
                *piVar1 = *piVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
    }
    return;
}


// ===== sym.mi_dynamic_page_pool_add @ 0x08003188 (size 288) =====

void sym.mi_dynamic_page_pool_add(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int *piVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    ulong uVar6;
    uint64_t uVar7;
    ulong *in_x18;
    int64_t *piVar8;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar6 = _raw_spin_lock_irqsave();
    iVar1 = arg2 + 8;
    piVar8 = arg1 + 0x10;
    iVar9 = *piVar8;
    uVar7 = __list_add_valid(iVar1,piVar8,iVar9);
    if ((uVar7 & 1) != 0) {
        *(iVar9 + 8) = iVar1;
        *(arg2 + 8) = iVar9;
        *(arg2 + 0x10) = piVar8;
        *piVar8 = iVar1;
    }
    mod_node_page_state(contig_page_data,0x21,1 << (*(arg1 + 8) & 0x1f));
    _raw_spin_unlock_irqrestore(arg1,uVar6);
    piVar2 = arg1 + 0x20;
    Hint_Prefetch(piVar2,2,0,1);
    do {
        cVar4 = '\x01';
        bVar5 = ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
            *piVar2 = *piVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
        }
    } while (cVar4 != '\0');
    uVar3 = *(arg1 + 8);
    piVar2 = _segment.ehdr + 0x40;
    Hint_Prefetch(piVar2,2,0,1);
    do {
        cVar4 = '\x01';
        bVar5 = ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
            *piVar2 = *piVar2 + (1 << (uVar3 & 0x1f));
            cVar4 = ExclusiveMonitorsStatus();
        }
    } while (cVar4 != '\0');
    return;
}


// ===== sym.__cfi_check_fail @ 0x080032a8 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080032ec

void sym.__cfi_check_fail(int64_t arg1)

{
    code *pcVar1;
    ulong in_x1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 != 0) {
        if (4 < *arg1) {
            return;
        }
    //switch table (4 cases) at 0x8000630
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8003300);
    (*pcVar1)();
}


// ===== sym.mi_mempool_init @ 0x08003304 (size 1700) =====

ulong sym.mi_mempool_init(void)

{
    uint32_t uVar1;
    uint uVar2;
    code cVar3;
    code *pcVar4;
    int iVar5;
    int64_t iVar6;
    uint *puVar7;
    ulong uVar8;
    int64_t iVar9;
    int64_t *piVar10;
    int64_t iVar11;
    ulong *in_x18;
    uint64_t uVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = obj.g_mi_mempool;
    iVar6 = kobject_create_and_add("mi_mempool",_nr_swap_pages);
    if (iVar6 == 0) {
        _printk(0x800092d);
    }
    else {
        iVar5 = sysfs_create_files(iVar6,obj.proc_tree);
        pcVar4 = _segment.ehdr;
        if (iVar5 == 0) {
            iVar9 = 0;
            *(_segment.ehdr + 0x38) = iVar6;
            *(pcVar4 + 0x40) = 0;
            *(pcVar4 + 0x1c) = 0;
            *(pcVar4 + 0x28) = 0;
            *(pcVar4 + 0x34) = 0;
            pcVar4[0x30] = 0x1;
            *(pcVar4 + 0x2c) = 0;
            *(pcVar4 + 0x70) = 0;
            do {
                *(pcVar4 + iVar9 + 0x44) = 0;
                iVar9 = iVar9 + 4;
            } while (iVar9 != 0x2c);
            *(pcVar4 + 0x74) = 0;
            cVar3 = android_kmalloc_64_create;
            obj.comm_whitelist_sizes.0 = 0x1;
            obj.comm_whitelist_sizes.1 = 0x1;
            *(pcVar4 + 0x78) = 0;
            obj.comm_whitelist_sizes.2 = 0x1;
            iVar6 = 0x38;
            if (cVar3 != 0x0) {
                iVar6 = 0x30;
            }
            *(pcVar4 + 0x20) = 0xb00;
            obj.comm_whitelist_sizes.3 = 0x1;
            obj.comm_whitelist_sizes.4 = 0x1;
            obj.comm_whitelist_sizes.5 = 0x1;
            iVar6 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar6),0xcc0,0x20);
            *_segment.ehdr = iVar6;
            if (iVar6 != 0) {
                iVar6 = 0;
                *0x8000638 = 0xffffffffffffffff;
                *0x8000640 = 0xffffffffffffffff;
                _reloc.direct_relcaim_threshold_mb_store.cfi_jt = 0xffffffffffffffff;
                *0x8000630 = 0xffffffffffffffff;
                _reloc.direct_relcaim_threshold_mb_show.cfi_jt = 0xffffffffffffffff;
                *0x8000648 = 0xffffffff;
                do {
                    uVar1 = *(obj.orders + iVar6 * 4);
                    uVar12 = uVar1;
                    puVar7 = kmem_cache_alloc_trace(_ktime_get,0xcc0,0xc0);
                    if (puVar7 != NULL) {
                        uVar2 = *(obj.order_flags + iVar6 * 4);
                        *(puVar7 + 0xe) = 0;
                        puVar7[1] = uVar2;
                        puVar7[2] = uVar1;
                        iVar5 = *(obj.high_mark_mb + iVar6 * 4);
                        *(puVar7 + 4) = puVar7 + 4;
                        *(puVar7 + 6) = puVar7 + 4;
                        *puVar7 = 0;
                        puVar7[8] = 0;
                        puVar7[9] = 0;
                        puVar7[10] = 0;
                        puVar7[0x18] = 0;
                        iVar5 = ((iVar5 << 0x14) >> 0xc) >> (uVar12 & 0x3f);
                        puVar7[0x19] = 0;
                        puVar7[0x1a] = 0;
                        puVar7[0x1b] = 0;
                        puVar7[0x1c] = 0;
                        puVar7[0x1d] = 0;
                        puVar7[0x1e] = 0;
                        puVar7[0x1f] = 0;
                        puVar7[0x20] = 0;
                        puVar7[0x21] = 0;
                        puVar7[0x22] = 0;
                        puVar7[0x23] = 0;
                        puVar7[0x24] = 0;
                        puVar7[0x25] = 0;
                        puVar7[0x26] = 0;
                        puVar7[0x27] = 0;
                        puVar7[0x28] = 0;
                        puVar7[0x29] = 0;
                        puVar7[0x2a] = 0;
                        puVar7[0x2b] = 0;
                        puVar7[0x2c] = 0;
                        puVar7[0x2d] = 0;
                        puVar7[0x2e] = 0;
                        puVar7[0x2f] = 0;
                        puVar7[0xb] = ((iVar5 * 4 + iVar5 & 0x1fffffffffffffffU) << 1) / 0x19;
                        puVar7[0xc] = iVar5;
                        *(puVar7 + 0x16) = 0;
                        puVar7[0x17] = 0;
                    }
                    pcVar4 = _segment.ehdr;
                    *(*_segment.ehdr + iVar6 * 8) = puVar7;
                    if (0xb < uVar12) {
    //WARNING: Does not return
                        pcVar4 = SoftwareBreakpoint(1,0x80039a8);
                        (*pcVar4)();
                    }
                    *(reloc.direct_relcaim_threshold_mb_show.cfi_jt + uVar12 * 4) = iVar6;
                    if (*(*pcVar4 + iVar6 * 8) == 0) {
                        return 0xffffffff;
                    }
                    iVar6 = iVar6 + 1;
                } while (iVar6 != 4);
                iVar6 = _segment.ehdr;
                if (_segment.ehdr != -1) {
                    *(*(*pcVar4 + iVar6 * 8) + 0x2c) = 0xffffffff;
                }
                iVar9 = _segment.ehdr;
                if (_segment.ehdr == -1) {
                    iVar9 = -1;
                }
                else {
                    *(*(*pcVar4 + iVar9 * 8) + 0x2c) = 0xffffffff;
                }
                piVar10 = *pcVar4;
                iVar11 = *piVar10;
                iVar5 = (*(iVar11 + 0x30) * 10) / 100;
                *(iVar11 + 0x40) = iVar5;
                *(iVar11 + 0x44) = iVar5;
                *(iVar11 + 0x48) = iVar5;
                *(iVar11 + 0x4c) = iVar5;
                *(iVar11 + 0x50) = iVar5;
                *(iVar11 + 0x54) = iVar5;
                iVar11 = piVar10[1];
                iVar5 = (*(iVar11 + 0x30) * 10) / 100;
                *(iVar11 + 0x40) = iVar5;
                *(iVar11 + 0x44) = iVar5;
                *(iVar11 + 0x48) = iVar5;
                *(iVar11 + 0x4c) = iVar5;
                *(iVar11 + 0x50) = iVar5;
                *(iVar11 + 0x54) = iVar5;
                iVar11 = piVar10[2];
                iVar5 = (*(iVar11 + 0x30) * 10) / 100;
                *(iVar11 + 0x40) = iVar5;
                *(iVar11 + 0x44) = iVar5;
                *(iVar11 + 0x48) = iVar5;
                *(iVar11 + 0x4c) = iVar5;
                *(iVar11 + 0x50) = iVar5;
                *(iVar11 + 0x54) = iVar5;
                iVar11 = piVar10[3];
                iVar5 = (*(iVar11 + 0x30) * 10) / 100;
                *(iVar11 + 0x40) = iVar5;
                *(iVar11 + 0x44) = iVar5;
                *(iVar11 + 0x48) = iVar5;
                *(iVar11 + 0x4c) = iVar5;
                *(iVar11 + 0x50) = iVar5;
                *(iVar11 + 0x54) = iVar5;
                iVar11 = *0x8000624;
                iVar5 = (*(piVar10[iVar11] + 0x30) * 0x28) / 100;
                *(piVar10[iVar11] + 0x40) = iVar5;
                *(piVar10[iVar11] + 0x44) = iVar5;
                *(piVar10[iVar11] + 0x48) = iVar5;
                *(piVar10[iVar11] + 0x4c) = iVar5;
                *(piVar10[iVar11] + 0x50) = iVar5;
                *(piVar10[iVar11] + 0x54) = iVar5;
                *(piVar10[_reloc.direct_relcaim_threshold_mb_show.cfi_jt] + 0x50) =
                     (*(piVar10[_reloc.direct_relcaim_threshold_mb_show.cfi_jt] + 0x30) * 0x3c) / 100;
                iVar5 = (*(piVar10[iVar6] + 0x30) * 100) / 100;
                *(piVar10[iVar6] + 0x40) = iVar5;
                *(piVar10[iVar6] + 0x44) = iVar5;
                *(piVar10[iVar6] + 0x48) = iVar5;
                *(piVar10[iVar6] + 0x4c) = iVar5;
                *(piVar10[iVar6] + 0x50) = iVar5;
                *(piVar10[iVar6] + 0x54) = iVar5;
                iVar5 = (*(piVar10[iVar9] + 0x30) * 100) / 100;
                *(piVar10[iVar9] + 0x40) = iVar5;
                *(piVar10[iVar9] + 0x44) = iVar5;
                *(piVar10[iVar9] + 0x48) = iVar5;
                *(piVar10[iVar9] + 0x4c) = iVar5;
                *(piVar10[iVar9] + 0x50) = iVar5;
                *(piVar10[iVar9] + 0x54) = iVar5;
                _segment.ehdr = kmem_cache_create("proc_node",0x20,0,0,0);
                if (_segment.ehdr == NULL) {
                    if (*0x38 != 0) {
                        kobject_put();
                        *(_segment.ehdr + 0x38) = 0;
                    }
                    sym.mi_dynamic_page_pools_destory();
                    uVar8 = 0x80008a3;
                }
                else {
                    uVar12 = kthread_create_on_node
                                       (sym.mi_mempool_refill_work.6a23108e27cdbc0fd151c61886d1b542.cfi_jt,0,
                                        0xffffffff,"mi_mempool");
                    if (uVar12 < 0xfffffffffffff001) {
                        wake_up_process(uVar12);
                        *(_segment.ehdr + 8) = uVar12;
                        iVar5 = tracepoint_probe_register
                                          (__tracepoint_android_vh_alloc_pages_reclaim_bypass,
                                           sym.mi_mempool_alloc_reclaim.cfi_jt,0);
                        if (iVar5 == 0) {
                            iVar5 = tracepoint_probe_register
                                              (__tracepoint_android_vh_alloc_pages_failure_bypass,
                                               sym.mi_mempool_alloc_oom.cfi_jt,0);
                            if (iVar5 == 0) {
                                iVar5 = tracepoint_probe_register
                                                  (__tracepoint_android_vh_mmput,sym.mi_mempool_refill_check.cfi_jt,0)
                                ;
                                if (iVar5 == 0) {
                                    _printk(0x800090c);
                                    return 0;
                                }
                                tracepoint_probe_unregister
                                          (__tracepoint_android_vh_alloc_pages_reclaim_bypass,
                                           sym.mi_mempool_alloc_reclaim.cfi_jt,0);
                                tracepoint_probe_unregister
                                          (__tracepoint_android_vh_alloc_pages_failure_bypass,
                                           sym.mi_mempool_alloc_oom.cfi_jt,0);
                                uVar8 = 0x80006b1;
                            }
                            else {
                                tracepoint_probe_unregister
                                          (__tracepoint_android_vh_alloc_pages_reclaim_bypass,
                                           sym.mi_mempool_alloc_reclaim.cfi_jt,0);
                                uVar8 = 0x8000795;
                            }
                        }
                        else {
                            uVar8 = 0x80009c0;
                        }
                        _printk(uVar8);
                        sym.free_all_proc_nodes_and_caches();
                        if (*(_segment.ehdr + 0x38) != 0) {
                            kobject_put();
                            *(_segment.ehdr + 0x38) = 0;
                        }
                        sym.mi_dynamic_page_pools_destory();
                        if (*(_segment.ehdr + 8) == 0) {
                            return 0xffffffff;
                        }
                        kthread_stop();
                        return 0xffffffff;
                    }
                    *(_segment.ehdr + 8) = uVar12;
                    sym.free_all_proc_nodes_and_caches();
                    if (*(_segment.ehdr + 0x38) != 0) {
                        kobject_put();
                        *(_segment.ehdr + 0x38) = 0;
                    }
                    sym.mi_dynamic_page_pools_destory();
                    uVar8 = 0x800087e;
                }
                _printk(uVar8);
            }
            return 0xffffffff;
        }
        _printk(0x80009f7);
        kobject_put(iVar6);
    }
    *(_segment.ehdr + 0x38) = 0;
    return 0xffffffff;
}


// ===== sym.mi_mempool_exit @ 0x080039a8 (size 164) =====

void sym.mi_mempool_exit(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    tracepoint_probe_unregister
              (__tracepoint_android_vh_alloc_pages_reclaim_bypass,sym.mi_mempool_alloc_reclaim.cfi_jt,0);
    tracepoint_probe_unregister(__tracepoint_android_vh_alloc_pages_failure_bypass,sym.mi_mempool_alloc_oom.cfi_jt,0);
    tracepoint_probe_unregister(__tracepoint_android_vh_mmput,sym.mi_mempool_refill_check.cfi_jt,0);
    sym.free_all_proc_nodes_and_caches();
    if (*(_segment.ehdr + 0x38) != 0) {
        kobject_put();
        *(_segment.ehdr + 0x38) = 0;
    }
    sym.mi_dynamic_page_pools_destory();
    if (*(_segment.ehdr + 8) != 0) {
        kthread_stop();
    }
    return;
}

