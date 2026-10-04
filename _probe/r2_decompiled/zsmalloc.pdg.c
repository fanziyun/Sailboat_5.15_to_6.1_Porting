// decompiled from zsmalloc by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 836) =====

//WARNING: Switch with 1 destination removed at 0x08005330

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 < -0x36c89a4ec71c7f70) {
            if (arg1 < -0x53c887a672ae5243) {
                if (arg1 == -0x58ed8cd014872756) {
                    if ((pcVar1 + -0x80013e8 >> 3 | pcVar1 << 0x3d) < 3) {
                        return;
                    }
                    goto code_r0x080052f0;
                }
                if (arg1 != -0x550b9e52359ac614) goto code_r0x080052f0;
                pcVar2 = sym.async_free_zspage.c08505102395ade40ce2f57a59adb2a6.cfi_jt;
            }
            else {
                if (arg1 == -0x53c887a672ae5243) {
                    pcVar2 = sym.zs_cpu_prepare.c08505102395ade40ce2f57a59adb2a6.cfi_jt;
                    goto code_r0x08001330;
                }
                if (arg1 != -0x394376f0a0c643ea) goto code_r0x080052f0;
                pcVar2 = sym.zs_page_putback.c08505102395ade40ce2f57a59adb2a6.cfi_jt;
            }
        }
        else if (arg1 < -0x2769ed5bfcc998a3) {
            if (arg1 == -0x36c89a4ec71c7f70) {
                pcVar2 = sym.zs_free.cfi_jt;
code_r0x08001330:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x080052f0;
            }
            if (arg1 != -0x28c51f005979dace) goto code_r0x080052f0;
            pcVar2 = sym.zs_malloc.cfi_jt;
        }
        else {
            if (arg1 == -0x2769ed5bfcc998a3) {
                pcVar2 = sym.zs_shrinker_scan.c08505102395ade40ce2f57a59adb2a6.cfi_jt;
                goto code_r0x08001330;
            }
            if (arg1 != 0x16ef7635791714b) goto code_r0x080052f0;
            pcVar2 = sym.zs_pool_stats.cfi_jt;
        }
    }
    else if (arg1 < 0x1fc8e17cd2fb5961) {
        if (arg1 < 0x16d387bf109c3f62) {
            if (arg1 == 0x2b3a43e29242445) {
                pcVar2 = sym.init_module.cfi_jt;
            }
            else {
                if (arg1 != 0x764b4c6a2a1e4f0) goto code_r0x080052f0;
                pcVar2 = sym.zs_create_pool.cfi_jt;
            }
        }
        else if (arg1 == 0x16d387bf109c3f62) {
            pcVar2 = sym.kill_anon_super.cfi_jt;
        }
        else {
            if (arg1 != 0x1e9fe0d59c389472) goto code_r0x080052f0;
            pcVar2 = sym.zs_destroy_pool.cfi_jt;
        }
    }
    else if (arg1 < 0x3de570685bb34beb) {
        if (arg1 == 0x1fc8e17cd2fb5961) {
            pcVar2 = sym.zs_init_fs_context.c08505102395ade40ce2f57a59adb2a6.cfi_jt;
        }
        else {
            if (arg1 != 0x2747d786209becd0) goto code_r0x080052f0;
            pcVar2 = sym.zs_page_isolate.c08505102395ade40ce2f57a59adb2a6.cfi_jt;
        }
    }
    else if (arg1 == 0x3de570685bb34beb) {
        pcVar2 = sym.zs_page_migrate.c08505102395ade40ce2f57a59adb2a6.cfi_jt;
    }
    else if (arg1 == 0x453ae77e7ded4d2e) {
        pcVar2 = sym.zs_map_object.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080052f0;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080052f0:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8005344);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001350 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kern_unmount(_segment.ehdr);
    __cpuhp_remove_state(0x3e,1);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001358 (size 8) =====

uint64_t sym.init_module.cfi_jt(void)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = kern_mount(obj.huge_class_size);
    _segment.ehdr = uVar1;
    if ((uVar1 < 0xfffffffffffff001) || (uVar1 == 0)) {
        uVar2 = __cpuhp_setup_state(0x3e,"mm/zsmalloc:prepare",1,
                                    sym.zs_cpu_prepare.c08505102395ade40ce2f57a59adb2a6.cfi_jt,
                                    sym.zs_cpu_dead.c08505102395ade40ce2f57a59adb2a6.cfi_jt,0);
        uVar1 = uVar2 & 0xffffffff;
        if (uVar2 != 0) {
            kern_unmount(_segment.ehdr);
        }
    }
    return uVar1 & 0xffffffff;
}


// ===== sym.zs_create_pool.cfi_jt @ 0x08001360 (size 8) =====

int64_t * sym.zs_create_pool.cfi_jt(ulong param_1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    int64_t *arg1;
    int64_t iVar8;
    uint *puVar9;
    uint64_t uVar10;
    uint32_t uVar11;
    int iVar12;
    ulong *in_x18;
    int64_t iVar13;
    int64_t iVar14;
    int iVar15;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = kmem_cache_alloc_trace(_preempt_schedule,0xdc0,0x8c0);
    if (arg1 != NULL) {
        arg1[0x10d] = 0xfffffffe0;
        arg1[0x10e] = arg1 + 0x10e;
        arg1[0x10f] = arg1 + 0x10e;
        arg1[0x110] = sym.async_free_zspage.c08505102395ade40ce2f57a59adb2a6.cfi_jt;
        iVar8 = kstrdup(param_1,0xcc0);
        *arg1 = iVar8;
        if (iVar8 != 0) {
            __init_waitqueue_head(arg1 + 0x113,"&pool->migration_wait",obj.zs_create_pool.__key);
            iVar8 = kmem_cache_create("zs_handle",8,0,0,0);
            arg1[0x100] = iVar8;
            if (iVar8 != 0) {
                iVar8 = kmem_cache_create("zspage",0x30,0,0,0);
                arg1[0x101] = iVar8;
                if (iVar8 == 0) {
                    kmem_cache_destroy(arg1[0x100]);
                    arg1[0x100] = 0;
                }
                else {
                    puVar9 = NULL;
                    iVar13 = 0xff9;
                    iVar8 = _segment.ehdr;
                    iVar14 = 0xff;
                    do {
                        iVar15 = iVar14 + -1;
                        uVar1 = iVar15 * 0x10 + 0x20;
                        uVar2 = uVar1 & 0xfff0;
                        uVar6 = 0;
                        if (uVar2 != 0) {
                            uVar6 = 0x3000 / uVar2;
                        }
                        uVar11 = 0;
                        if (uVar2 != 0) {
                            uVar11 = 0x1000 / uVar2;
                        }
                        uVar6 = (uVar6 * uVar1 & 0xfff0) * 100;
                        uVar7 = 0;
                        if (uVar2 != 0) {
                            uVar7 = 0x2000 / uVar2;
                        }
                        uVar5 = uVar11 * uVar2 * 100;
                        uVar11 = 0;
                        if (0xfff < uVar5) {
                            uVar11 = uVar5 >> 0xc;
                        }
                        uVar5 = 0;
                        if (uVar2 != 0) {
                            uVar5 = 0x4000 / uVar2;
                        }
                        uVar4 = (uVar7 * uVar1 & 0xfff0) * 100 >> 0xd;
                        uVar7 = uVar4;
                        if (uVar4 <= uVar11) {
                            uVar7 = uVar11;
                        }
                        iVar12 = 1;
                        if (uVar11 < uVar4) {
                            iVar12 = 2;
                        }
                        uVar11 = uVar6 / 0x3000;
                        uVar6 = uVar6 / 0x3000;
                        if (uVar11 <= uVar7) {
                            uVar6 = uVar7;
                        }
                        iVar3 = 3;
                        if (uVar11 <= uVar7) {
                            iVar3 = iVar12;
                        }
                        iVar12 = 4;
                        if ((uVar5 * uVar1 & 0xfff0) * 100 >> 0xe <= uVar6) {
                            iVar12 = iVar3;
                        }
                        uVar1 = 0;
                        if (uVar2 != 0) {
                            uVar1 = (iVar12 << 0xc) / uVar2;
                        }
                        if ((iVar12 != 1) && (uVar1 != 1 && iVar8 == 0)) {
                            iVar8 = iVar13;
                            _segment.ehdr = iVar13;
                        }
                        if (((puVar9 == NULL) || (puVar9[0x14] != iVar12)) || (puVar9[0x13] != uVar1)) {
                            puVar9 = kmem_cache_alloc_trace(_preempt_schedule,0xdc0,0x88);
                            if (puVar9 == NULL) goto code_r0x08002f80;
                            puVar9[0x14] = iVar12;
                            puVar9[0x15] = iVar15;
                            *puVar9 = 0;
                            puVar9[0x12] = iVar13 + 7;
                            puVar9[0x13] = uVar1;
                            iVar8 = _segment.ehdr;
                            arg1[iVar14] = puVar9;
                            *(puVar9 + 2) = puVar9 + 2;
                            *(puVar9 + 4) = puVar9 + 2;
                            *(puVar9 + 6) = puVar9 + 6;
                            *(puVar9 + 8) = puVar9 + 6;
                            *(puVar9 + 10) = puVar9 + 10;
                            *(puVar9 + 0xc) = puVar9 + 10;
                            *(puVar9 + 0xe) = puVar9 + 0xe;
                            *(puVar9 + 0x10) = puVar9 + 0xe;
                        }
                        else {
                            arg1[iVar14] = puVar9;
                        }
                        iVar13 = iVar13 + -0x10;
                        iVar14 = iVar14 + -1;
                    } while (iVar13 != 9);
                    uVar10 = alloc_anon_inode(*(_segment.ehdr + 8));
                    arg1[0x10c] = uVar10;
                    if (uVar10 < 0xfffffffffffff001) {
                        *(*(uVar10 + 0x30) + 0xe8) = arg1;
                        *(*(arg1[0x10c] + 0x30) + 0xc0) = obj.zsmalloc_aops;
                        arg1[0x105] = sym.zs_shrinker_scan.c08505102395ade40ce2f57a59adb2a6.cfi_jt;
                        arg1[0x104] = sym.zs_shrinker_count.c08505102395ade40ce2f57a59adb2a6.cfi_jt;
                        arg1[0x106] = 0;
                        *(arg1 + 0x107) = 2;
                        register_shrinker(arg1 + 0x104);
                        return arg1;
                    }
                    arg1[0x10c] = 0;
                }
            }
        }
code_r0x08002f80:
        sym.zs_destroy_pool(arg1);
    }
    return NULL;
}


// ===== sym.zs_malloc.cfi_jt @ 0x08001368 (size 8) =====

ulong * sym.zs_malloc.cfi_jt(int64_t param_1,int64_t param_2,uint32_t param_3)

{
    uint32_t *puVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    code *pcVar6;
    ulong *arg3;
    ulong uVar7;
    uint32_t *arg2;
    uint64_t uVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    int64_t *piVar11;
    ulong *in_x18;
    int64_t arg2_00;
    int64_t *piVar12;
    int64_t iVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 - 0x1001U < 0xfffffffffffff000) {
        return NULL;
    }
    arg3 = kmem_cache_alloc(*(param_1 + 0x800),param_3 & 0xf7fffff5);
    if (arg3 == NULL) {
        return NULL;
    }
    uVar9 = param_2 + 0xffffffff7U >> 4;
    if (param_2 < 0x19) {
        uVar9 = 0;
    }
    if (0xfd < uVar9) {
        uVar9 = 0xfe;
    }
    if (0xfe < uVar9) {
    //WARNING: Does not return
        pcVar6 = SoftwareBreakpoint(0x5512,0x8001efc);
        (*pcVar6)();
    }
    arg2_00 = *(param_1 + uVar9 * 8 + 8);
    _raw_spin_lock(arg2_00);
    piVar11 = *(arg2_00 + 0x28);
    iVar13 = 0;
    if (arg2_00 + 0x28 != piVar11) {
        iVar13 = piVar11 + -3;
    }
    if (iVar13 == 0) {
        piVar11 = *(arg2_00 + 0x18);
        iVar13 = 0;
        if (arg2_00 + 0x18 != piVar11) {
            iVar13 = piVar11 + -3;
        }
        if ((iVar13 == 0) &&
           ((piVar11 = *(arg2_00 + 8), arg2_00 + 8 == piVar11 || (iVar13 = piVar11 + -3, iVar13 == 0)))) {
            _raw_spin_unlock(arg2_00);
            arg2 = sym.alloc_zspage(param_1,arg2_00,param_3);
            if (arg2 == NULL) {
                kmem_cache_free(*(param_1 + 0x800),arg3);
                return NULL;
            }
            _raw_spin_lock(arg2_00);
            uVar7 = sym.obj_malloc(arg2_00,arg2,arg3);
            uVar9 = arg2[1];
            if (uVar9 == 0) {
                uVar10 = 0;
            }
            else if (uVar9 == *(arg2_00 + 0x4c)) {
                uVar10 = 3;
            }
            else {
                iVar5 = *(arg2_00 + 0x4c) * 3;
                iVar2 = iVar5 + 3;
                if (-1 < iVar5) {
                    iVar2 = iVar5;
                }
                uVar10 = 1;
                if (iVar2 >> 2 < uVar9) {
                    uVar10 = 2;
                }
            }
            iVar13 = arg2_00 + uVar10 * 8;
            piVar11 = arg2_00 + uVar10 * 0x10 + 8;
            *(iVar13 + 0x58) = *(iVar13 + 0x58) + 1;
            piVar12 = *piVar11;
            if (((piVar11 == piVar12) || (piVar12 == 0x18)) || (*(piVar12 + -0x14) <= arg2[1])) {
                iVar13 = *piVar11;
                puVar1 = arg2 + 6;
                uVar8 = __list_add_valid(puVar1,piVar11,iVar13);
                if ((uVar8 & 1) != 0) {
                    *(iVar13 + 8) = puVar1;
                    *(arg2 + 6) = iVar13;
                    *(arg2 + 8) = piVar11;
                    *piVar11 = puVar1;
                }
            }
            else {
                iVar13 = *piVar12;
                puVar1 = arg2 + 6;
                uVar8 = __list_add_valid(puVar1,piVar12,iVar13);
                if ((uVar8 & 1) != 0) {
                    *(iVar13 + 8) = puVar1;
                    *(arg2 + 6) = iVar13;
                    *(arg2 + 8) = piVar12;
                    *piVar12 = puVar1;
                }
            }
            piVar11 = param_1 + 0x810;
            *arg2 = (*(arg2_00 + 0x54) & 0x1ff) << 2 | uVar10 | *arg2 & 0xfffff800;
            *arg3 = uVar7;
            iVar2 = *(arg2_00 + 0x50);
            Hint_Prefetch(piVar11,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(piVar11,0x10);
                if (bVar4) {
                    *piVar11 = *piVar11 + iVar2;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            *(arg2_00 + 0x78) = *(arg2_00 + 0x78) + *(arg2_00 + 0x4c);
            sym.SetZsPageMovable(param_1,arg2);
            goto code_r0x08001d4c;
        }
    }
    uVar7 = sym.obj_malloc(arg2_00,iVar13,arg3);
    sym.fix_fullness_group(arg2_00,iVar13);
    *arg3 = uVar7;
code_r0x08001d4c:
    _raw_spin_unlock(arg2_00);
    return arg3;
}


// ===== sym.zs_free.cfi_jt @ 0x08001370 (size 8) =====

void sym.zs_free.cfi_jt(int64_t param_1,uint64_t *param_2)

{
    uint32_t *puVar1;
    int64_t iVar2;
    int64_t *piVar3;
    uint32_t uVar4;
    char cVar5;
    bool bVar6;
    code *pcVar7;
    int iVar8;
    uint64_t uVar9;
    ulong *in_x18;
    uint32_t *arg2;
    int64_t iVar10;
    uint64_t uVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 != NULL) {
        sym.pin_tag(param_2);
        uVar11 = *param_2;
        arg2 = *((uVar11 >> 0x16 & 0x3ffffffffc0) + (_kill_anon_super >> 0xc) * -0x40 + -0x1ffffffd8);
        if ((*arg2 & 0x3fc000) != 0x160000) {
    //WARNING: Does not return
            pcVar7 = SoftwareBreakpoint(0x800,0x800289c);
            (*pcVar7)();
        }
        puVar1 = arg2 + 10;
        _raw_read_lock(puVar1);
        if ((*arg2 & 0x3fc000) != 0x160000) {
    //WARNING: Does not return
            pcVar7 = SoftwareBreakpoint(0x800,0x80028a0);
            (*pcVar7)();
        }
        uVar9 = *arg2 >> 2 & 0x1ff;
        if (0xfe < uVar9) {
    //WARNING: Does not return
            pcVar7 = SoftwareBreakpoint(0x5512,0x8002888);
            (*pcVar7)();
        }
        iVar10 = *(param_1 + uVar9 * 8 + 8);
        _raw_spin_lock(iVar10);
        sym.obj_free(iVar10,uVar11);
        iVar8 = sym.fix_fullness_group(iVar10,arg2);
        if (iVar8 == 0) {
            uVar4 = *arg2;
            _raw_read_unlock(puVar1);
            if ((uVar4 & 0x3800) == 0) {
                iVar8 = sym.trylock_zspage(arg2);
                if (iVar8 == 0) {
                    queue_work_on(0x20,__raw_read_lock,param_1 + 0x868);
                }
                else {
                    puVar1 = arg2 + 6;
                    uVar11 = __list_del_entry_valid(puVar1);
                    if ((uVar11 & 1) != 0) {
                        iVar2 = *(arg2 + 6);
                        piVar3 = *(arg2 + 8);
                        *(iVar2 + 8) = piVar3;
                        *piVar3 = iVar2;
                    }
                    *(arg2 + 6) = puVar1;
                    *(arg2 + 8) = puVar1;
                    *(iVar10 + 0x58) = *(iVar10 + 0x58) + -1;
                    sym.__free_zspage(param_1,iVar10,arg2);
                }
            }
        }
        else {
            _raw_read_unlock(puVar1);
        }
        _raw_spin_unlock(iVar10);
        Hint_Prefetch(param_2,2,0,1);
        do {
            cVar5 = '\x01';
            bVar6 = ExclusiveMonitorPass(param_2,0x10);
            if (bVar6) {
                *param_2 = *param_2 & 0xfffffffffffffffe;
                cVar5 = ExclusiveMonitorsStatus();
            }
        } while (cVar5 != '\0');
        iVar2 = sp_el0;
        iVar10 = *(iVar2 + 0x10) + -1;
        *(iVar2 + 0x10) = iVar10;
        if ((iVar10 == 0) || (*(iVar2 + 0x10) == 0)) {
            preempt_schedule();
        }
        kmem_cache_free(*(param_1 + 0x800),param_2);
    }
    return;
}


// ===== sym.zs_unmap_object.cfi_jt @ 0x08001378 (size 8) =====

void sym.zs_unmap_object.cfi_jt(int64_t param_1,uint64_t *param_2)

{
    uint32_t uVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    code *pcVar6;
    int64_t iVar7;
    uint64_t uVar8;
    ulong *in_x18;
    uint32_t *puVar9;
    ulong unaff_x30;
    ulong *puStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    iVar7 = (*param_2 >> 0x16 & 0x3ffffffffc0) + (_kill_anon_super >> 0xc) * -0x40;
    puVar9 = *(iVar7 + -0x1ffffffd8);
    uVar1 = *puVar9;
    if ((uVar1 & 0x3fc000) != 0x160000) {
    //WARNING: Does not return
        pcVar6 = SoftwareBreakpoint(0x800,0x8001a58);
        (*pcVar6)();
    }
    uVar8 = uVar1 >> 2 & 0x1ff;
    if (0xfe < uVar8) {
    //WARNING: Does not return
        pcVar6 = SoftwareBreakpoint(0x5512,0x8001a40);
        (*pcVar6)();
    }
    iVar2 = *(*(param_1 + uVar8 * 8 + 8) + 0x48);
    uVar8 = iVar2 * (*param_2 >> 1 & 0x7ffffff) & 0xfff;
    iVar5 = tpidr_el1;
    if (uVar8 + iVar2 < 0x1001) {
        iVar5 = sp_el0;
        *(iVar5 + 0xad0) = *(iVar5 + 0xad0) + -1;
        iVar7 = *(iVar5 + 0x10) + -1;
        *(iVar5 + 0x10) = iVar7;
        if ((iVar7 == 0) || (*(iVar5 + 0x10) == 0)) {
            preempt_schedule();
        }
code_r0x080019a8:
        iVar5 = sp_el0;
        iVar7 = *(iVar5 + 0x10) + -1;
        *(iVar5 + 0x10) = iVar7;
        if ((iVar7 == 0) || (*(iVar5 + 0x10) == 0)) {
            preempt_schedule();
        }
        _raw_read_unlock(puVar9 + 10);
        while( true ) {
            Hint_Prefetch(param_2,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(param_2,0x10);
                if (bVar4) {
                    *param_2 = *param_2 & 0xfffffffffffffffe;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            iVar7 = *(iVar5 + 0x10) + -1;
            *(iVar5 + 0x10) = iVar7;
            if ((iVar7 == 0) || (*(iVar5 + 0x10) == 0)) {
                preempt_schedule();
            }
            iVar7 = sp_el0;
            if (*(iVar7 + 0x5e0) == iStack_38) break;
            __stack_chk_fail();
        }
        return;
    }
    puStack_48 = iVar7 + -0x200000000;
    if ((*puStack_48 >> 10 & 1) == 0) {
        iStack_40 = *(iVar7 + -0x1ffffffe0);
        if (iStack_40 != 0) {
            sym.__zs_unmap_object(obj.zs_map_area + iVar5,&puStack_48,uVar8,iVar2);
            goto code_r0x080019a8;
        }
    }
    else {
        iStack_40 = 0;
    }
    //WARNING: Does not return
    pcVar6 = SoftwareBreakpoint(0x800,0x8001a60);
    (*pcVar6)();
}


// ===== sym.zs_page_putback.c08505102395ade40ce2f57a59adb2a6.cfi_jt @ 0x08001380 (size 8) =====

void sym.zs_page_putback.c08505102395ade40ce2f57a59adb2a6.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    code *pcVar5;
    int iVar6;
    int64_t iVar7;
    ulong *in_x18;
    uint64_t uVar8;
    uint32_t *arg2;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg2 = *(param_1 + 0x28);
    if ((*arg2 & 0x3fc000) != 0x160000) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x8004e00);
        (*pcVar5)();
    }
    uVar8 = *arg2 >> 2 & 0x1ff;
    iVar7 = page_mapping();
    if (uVar8 < 0xff) {
        iVar9 = *(iVar7 + 0xe8);
        iVar7 = *(iVar9 + uVar8 * 8 + 8);
        _raw_spin_lock(iVar7);
        uVar2 = *arg2 + 0x3800 & 0x3800;
        *arg2 = uVar2 | *arg2 & 0xffffc7ff;
        if (uVar2 == 0) {
            iVar6 = sym.putback_zspage(iVar7,arg2);
            if (iVar6 == 0) {
                queue_work_on(0x20,__raw_read_lock,iVar9 + 0x868);
            }
            piVar1 = iVar9 + 0x8b0;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                    *piVar1 = *piVar1 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
            if ((*piVar1 == 0) && (*(iVar9 + 0x8b8) != '\0')) {
                __wake_up(iVar9 + 0x898,3,0,0);
            }
        }
        _raw_spin_unlock(iVar7);
        return;
    }
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x8004dfc);
    (*pcVar5)();
}


// ===== sym.zs_pool_stats.cfi_jt @ 0x08001388 (size 8) =====

void sym.zs_pool_stats.cfi_jt(int64_t param_1,ulong *param_2)

{
    *param_2 = *(param_1 + 0x818);
    return;
}


// ===== sym.zs_destroy_pool.cfi_jt @ 0x08001390 (size 8) =====

void sym.zs_destroy_pool.cfi_jt(ulong *param_1)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t *puVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar6;
    int iVar7;
    uint64_t uVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_48 = *(iVar2 + 0x5e0);
    unregister_shrinker(param_1 + 0x104);
    *(param_1 + 0x117) = 1;
    DataMemoryBarrier(2,3);
    if (param_1[0x116] != 0) {
        uStack_58 = 0;
        uStack_50 = 0;
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_70 = 0;
        init_wait_entry(&uStack_70,0);
        puVar6 = param_1 + 0x113;
        prepare_to_wait_event(puVar6,&uStack_70,2);
        iVar2 = param_1[0x116];
        while (iVar2 != 0) {
            schedule();
            prepare_to_wait_event(puVar6,&uStack_70,2);
            iVar2 = param_1[0x116];
        }
        finish_wait(puVar6,&uStack_70);
    }
    flush_work(param_1 + 0x10d);
    iput(param_1[0x10c]);
    uVar8 = 0;
    do {
        iVar2 = param_1[uVar8 + 1];
        if ((iVar2 != 0) && (uVar8 == *(iVar2 + 0x54))) {
            if (iVar2 + 8 != *(iVar2 + 8)) {
                _printk(0x8000dca,*(iVar2 + 0x48),0);
            }
            if (iVar2 + 0x18 != *(iVar2 + 0x18)) {
                _printk(0x8000dca,*(iVar2 + 0x48),1);
            }
            if (iVar2 + 0x28 != *(iVar2 + 0x28)) {
                _printk(0x8000dca,*(iVar2 + 0x48),2);
            }
            if (iVar2 + 0x38 != *(iVar2 + 0x38)) {
                _printk(0x8000dca,*(iVar2 + 0x48),3);
            }
            kfree(iVar2);
        }
        uVar8 = uVar8 + 1;
    } while (uVar8 != 0xff);
    kmem_cache_destroy(param_1[0x100]);
    kmem_cache_destroy(param_1[0x101]);
    kfree(*param_1);
    kfree(param_1);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_48) {
        return;
    }
    auVar9 = __stack_chk_fail();
    *extraout_x18 = 0x80031e4;
    puVar6 = *(auVar9._8_8_ + 0x10);
    if (puVar6 != NULL) {
        uVar8 = 0;
        iVar7 = 1;
        iVar2 = sp_el0;
code_r0x08003238:
        do {
            *(puVar6 + 6) = uVar8;
            *(iVar2 + 0x10) = *(iVar2 + 0x10) + 1;
            *(iVar2 + 0xad0) = *(iVar2 + 0xad0) + 1;
            puVar3 = ((puVar6 & 0x3ffffffffffc0) << 6 | 0xff00000000000000) + (uVar8 & 0xfffffffffffffff8);
            uVar8 = uVar8 + *(auVar9._0_8_ + 0x48);
            if (uVar8 < 0x1000) {
                uVar4 = iVar7 << 1;
                do {
                    uVar5 = uVar4;
                    iVar7 = iVar7 + 1;
                    uVar4 = uVar4 + 2;
                    *puVar3 = uVar5;
                    uVar5 = *(auVar9._0_8_ + 0x48);
                    uVar8 = uVar8 + uVar5;
                    puVar3 = puVar3 + (uVar5 & 0xfffffffffffffff8);
                } while (uVar8 < 0x1000);
            }
            if ((*puVar6 >> 10 & 1) == 0) {
                puVar6 = puVar6[4];
                if (puVar6 == NULL) goto code_r0x080032e8;
                uVar5 = iVar7 << 1;
                iVar7 = iVar7 + 1;
            }
            else {
                puVar6 = NULL;
code_r0x080032e8:
                uVar5 = 0xfffffffffffffffe;
            }
            *puVar3 = uVar5;
            *(iVar2 + 0xad0) = *(iVar2 + 0xad0) + -1;
            iVar1 = *(iVar2 + 0x10) + -1;
            *(iVar2 + 0x10) = iVar1;
            if ((iVar1 != 0) && (*(iVar2 + 0x10) != 0)) {
                uVar8 = uVar8 & 0xfff;
                if (puVar6 == NULL) break;
                goto code_r0x08003238;
            }
            preempt_schedule();
            uVar8 = uVar8 & 0xfff;
        } while (puVar6 != NULL);
    }
    *(auVar9._8_8_ + 8) = 0;
    return;
}


// ===== sym.kill_anon_super.cfi_jt @ 0x08001398 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.kill_anon_super.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.zs_init_fs_context.c08505102395ade40ce2f57a59adb2a6.cfi_jt @ 0x080013a0 (size 8) =====

uint sym.zs_init_fs_context.c08505102395ade40ce2f57a59adb2a6.cfi_jt(ulong param_1)

{
    int64_t iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = init_pseudo(param_1,0x58295829);
    uVar2 = 0xfffffff4;
    if (iVar1 != 0) {
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.zs_map_object.cfi_jt @ 0x080013a8 (size 8) =====

int64_t sym.zs_map_object.cfi_jt(int64_t param_1,uint64_t *param_2,uint param_3)

{
    uint64_t *puVar1;
    ulong *puVar2;
    int iVar3;
    int64_t iVar4;
    int64_t iVar5;
    code *pcVar6;
    uint64_t uVar7;
    int64_t iVar8;
    ulong *in_x18;
    uint64_t uVar9;
    int64_t iVar10;
    uint32_t *puVar11;
    ulong unaff_x30;
    ulong *puStack_58;
    int64_t iStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iVar4 = sp_el0;
    iStack_48 = *(iVar10 + 0x5e0);
    puVar1 = iVar4 + 0x10;
    if (((*puVar1 & 0xf0000) == 0 && (*puVar1 & 0xf00000) == 0) && (*puVar1 & 0xff00) == 0) {
        sym.pin_tag(param_2);
        uVar9 = *param_2;
        iVar10 = (uVar9 >> 0x16 & 0x3ffffffffc0) + (_kill_anon_super >> 0xc) * -0x40;
        puVar11 = *(iVar10 + -0x1ffffffd8);
        if ((*puVar11 & 0x3fc000) != 0x160000) {
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x800,0x80015fc);
            (*pcVar6)();
        }
        _raw_read_lock(puVar11 + 10);
        if ((*puVar11 & 0x3fc000) != 0x160000) {
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x800,0x8001600);
            (*pcVar6)();
        }
        uVar7 = *puVar11 >> 2 & 0x1ff;
        if (0xfe < uVar7) {
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x5512,0x80015f0);
            (*pcVar6)();
        }
        iVar8 = *(param_1 + uVar7 * 8 + 8);
        iVar3 = *(iVar8 + 0x48);
        *(iVar4 + 0x10) = *(iVar4 + 0x10) + 1;
        iVar5 = tpidr_el1;
        *(iVar5 + 0x80054b8) = param_3;
        iVar8 = *(iVar8 + 0x48);
        uVar9 = iVar3 * (uVar9 >> 1 & 0x7ffffff) & 0xfff;
        puVar2 = iVar10 - 0x200000000;
        if (iVar8 + uVar9 < 0x1001) {
            *(iVar4 + 0x10) = *(iVar4 + 0x10) + 1;
            *(iVar4 + 0xad0) = *(iVar4 + 0xad0) + 1;
            uVar7 = (puVar2 & 0x3ffffffffffc0) << 6 | 0xff00000000000000;
            iVar10 = uVar7 + uVar9;
            *(iVar5 + 0x80054b0) = uVar7;
        }
        else {
            puStack_58 = puVar2;
            if ((*puVar2 >> 10 & 1) != 0) {
                iStack_50 = 0;
code_r0x08001604:
    //WARNING: Does not return
                pcVar6 = SoftwareBreakpoint(0x800,0x8001608);
                (*pcVar6)();
            }
            iStack_50 = *(iVar10 + -0x1ffffffe0);
            if (iStack_50 == 0) goto code_r0x08001604;
            iVar10 = sym.__zs_map_object(obj.zs_map_area + iVar5,&puStack_58,uVar9,iVar8);
        }
        iVar4 = sp_el0;
        if (*(iVar4 + 0x5e0) == iStack_48) {
            return iVar10 + ((*puVar2 >> 7 ^ 0xffffffff) & 8);
        }
        __stack_chk_fail();
    }
    //WARNING: Does not return
    pcVar6 = SoftwareBreakpoint(0x800,0x80015f8);
    (*pcVar6)();
}


// ===== sym.zs_page_migrate.c08505102395ade40ce2f57a59adb2a6.cfi_jt @ 0x080013b0 (size 8) =====

uint sym.zs_page_migrate.c08505102395ade40ce2f57a59adb2a6.cfi_jt
               (int64_t param_1,uint64_t *param_2,uint64_t *param_3,int param_4)

{
    int *piVar1;
    int64_t *piVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    char cVar5;
    bool bVar6;
    int64_t iVar7;
    int64_t iVar8;
    code *pcVar9;
    int iVar10;
    uint64_t uVar11;
    uint64_t *puVar12;
    int64_t iVar13;
    uint64_t *puVar14;
    uint64_t uVar15;
    ulong *in_x18;
    int64_t arg1;
    uint uVar16;
    uint32_t *arg2;
    int64_t iVar17;
    int64_t iVar18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_4 == 3) {
        uVar16 = 0xffffffea;
    }
    else {
        arg2 = param_3[5];
        if ((*arg2 & 0x3fc000) != 0x160000) {
    //WARNING: Does not return
            pcVar9 = SoftwareBreakpoint(0x800,0x8004aac);
            (*pcVar9)();
        }
        _raw_write_lock(arg2 + 10);
        if ((*arg2 & 0x3fc000) != 0x160000) {
    //WARNING: Does not return
            pcVar9 = SoftwareBreakpoint(0x800,0x8004ab0);
            (*pcVar9)();
        }
        uVar11 = *arg2 >> 2 & 0x1ff;
        if (0xfe < uVar11) {
    //WARNING: Does not return
            pcVar9 = SoftwareBreakpoint(0x5512,0x8004a60);
            (*pcVar9)();
        }
        iVar13 = *(param_1 + 0xe8);
        uVar15 = param_3[6];
        arg1 = *(iVar13 + uVar11 * 8 + 8);
        _raw_spin_lock(arg1);
        iVar8 = sp_el0;
        uVar4 = arg2[1];
        *(iVar8 + 0x10) = *(iVar8 + 0x10) + 1;
        *(iVar8 + 0xad0) = *(iVar8 + 0xad0) + 1;
        uVar3 = 0x1000;
        if (uVar4 != 0) {
            uVar3 = uVar15;
        }
        iVar17 = uVar3;
        uVar11 = (param_3 & 0x3ffffffffffc0) << 6 | 0xff00000000000000;
        iVar18 = iVar17;
        while (uVar3 < 0x1000) {
            puVar12 = uVar11 + iVar18;
            if ((*param_3 & 0x400) != 0) {
                puVar12 = param_3 + 4;
            }
            if ((*puVar12 & 1) != 0) {
                puVar12 = *puVar12 & 0xfffffffffffffffe;
                *(iVar8 + 0x10) = *(iVar8 + 0x10) + 1;
                if ((*puVar12 & 1) == 0) {
                    Hint_Prefetch(puVar12,2,0,1);
                    do {
                        uVar15 = *puVar12;
                        cVar5 = '\x01';
                        bVar6 = ExclusiveMonitorPass(puVar12,0x10);
                        if (bVar6) {
                            *puVar12 = uVar15 | 1;
                            cVar5 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar5 != '\0');
                    if ((uVar15 & 1) == 0) goto code_r0x08004730;
                }
                iVar13 = *(iVar8 + 0x10) + -1;
                *(iVar8 + 0x10) = iVar13;
                if ((iVar13 == 0) || (*(iVar8 + 0x10) == 0)) {
                    preempt_schedule();
                    uVar16 = 0xfffffff5;
                }
                else {
                    uVar16 = 0xfffffff5;
                }
                goto code_r0x08004940;
            }
code_r0x08004730:
            uVar3 = *(arg1 + 0x48) + uVar3;
            iVar18 = uVar3;
        }
        *(iVar8 + 0x10) = *(iVar8 + 0x10) + 1;
        *(iVar8 + 0xad0) = *(iVar8 + 0xad0) + 1;
        memcpy((param_2 & 0x3ffffffffffc0) << 6 | 0xff00000000000000,uVar11,0x1000);
        *(iVar8 + 0xad0) = *(iVar8 + 0xad0) + -1;
        iVar7 = *(iVar8 + 0x10) + -1;
        *(iVar8 + 0x10) = iVar7;
        if ((iVar7 == 0) || (*(iVar8 + 0x10) == 0)) {
            preempt_schedule();
        }
        for (puVar12 = uVar11 + iVar17; puVar12 < uVar11 + iVar18; puVar12 = puVar12 + *(arg1 + 0x48)) {
            puVar14 = puVar12;
            if ((*param_3 & 0x400) != 0) {
                puVar14 = param_3 + 4;
            }
            if ((*puVar14 & 1) != 0) {
                puVar14 = *puVar14 & 0xfffffffffffffffe;
                uVar15 = *puVar14;
                if ((uVar15 & 1) == 0) {
    //WARNING: Does not return
                    pcVar9 = SoftwareBreakpoint(0x800,0x8004a68);
                    (*pcVar9)();
                }
                *puVar14 = uVar15 & 0xffffffe | (param_2 + (_kill_anon_super >> 0xc) * 8) * 0x400000 + 0x80000000000000U
                           | 1;
            }
        }
        sym.replace_sub_page(arg1,arg2,param_2,param_3);
        puVar12 = param_2;
        if ((param_2[1] & 1) != 0) {
            puVar12 = param_2[1] - 1;
        }
        piVar1 = puVar12 + 0x34;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            cVar5 = '\x01';
            bVar6 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
                *piVar1 = *piVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
            }
        } while (cVar5 != '\0');
        uVar3 = *arg2 + 0x3800 & 0x3800;
        *arg2 = uVar3 | *arg2 & 0xffffc7ff;
        if (uVar3 == 0) {
            iVar10 = sym.putback_zspage(arg1,arg2);
            if (iVar10 == 0) {
                queue_work_on(0x20,__raw_read_lock,iVar13 + 0x868);
            }
            piVar2 = iVar13 + 0x8b0;
            Hint_Prefetch(piVar2,2,0,1);
            do {
                cVar5 = '\x01';
                bVar6 = ExclusiveMonitorPass(piVar2,0x10);
                if (bVar6) {
                    *piVar2 = *piVar2 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                }
            } while (cVar5 != '\0');
            DataMemoryBarrier(2,3);
            if ((*piVar2 == 0) && (*(iVar13 + 0x8b8) != '\0')) {
                __wake_up(iVar13 + 0x898,3,0,0);
            }
        }
        if ((*param_2 >> 0x3e) * 0x640 + (*param_3 >> 0x3e) * -0x640 != 0) {
            dec_zone_page_state(param_3,9);
            inc_zone_page_state(param_2,9);
        }
        __ClearPageMovable(param_3);
        Hint_Prefetch(param_3,2,0,1);
        do {
            cVar5 = '\x01';
            bVar6 = ExclusiveMonitorPass(param_3,0x10);
            if (bVar6) {
                *param_3 = *param_3 & 0xffffffffffffdfff;
                cVar5 = ExclusiveMonitorsStatus();
            }
        } while (cVar5 != '\0');
        param_3[5] = 0;
        *(param_3 + 6) = 0xffffffff;
        Hint_Prefetch(param_3,2,0,1);
        do {
            cVar5 = '\x01';
            bVar6 = ExclusiveMonitorPass(param_3,0x10);
            if (bVar6) {
                *param_3 = *param_3 & 0xfffffffffffffbff;
                cVar5 = ExclusiveMonitorsStatus();
            }
        } while (cVar5 != '\0');
        param_3[4] = 0;
        if ((param_3[1] & 1) != 0) {
            param_3 = param_3[1] - 1;
        }
        piVar1 = param_3 + 0x34;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            iVar10 = *piVar1;
            cVar5 = '\x01';
            bVar6 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
                *piVar1 = iVar10 + -1;
                cVar5 = ExclusiveMonitorsStatus();
            }
        } while (cVar5 != '\0');
        DataMemoryBarrier(2,3);
        if (iVar10 + -1 == 0) {
            __put_page(param_3);
        }
        uVar16 = 0;
        param_3 = param_2;
code_r0x08004940:
        puVar12 = uVar11 + iVar17;
        if (puVar12 < uVar11 + iVar18) {
            do {
                puVar14 = puVar12;
                if ((*param_3 & 0x400) != 0) {
                    puVar14 = param_3 + 4;
                }
                if ((*puVar14 & 1) != 0) {
                    puVar14 = *puVar14 & 0xfffffffffffffffe;
                    if ((*puVar14 & 1) == 0) {
    //WARNING: Does not return
                        pcVar9 = SoftwareBreakpoint(0x800,0x8004a64);
                        (*pcVar9)();
                    }
                    Hint_Prefetch(puVar14,2,0,1);
                    do {
                        cVar5 = '\x01';
                        bVar6 = ExclusiveMonitorPass(puVar14,0x10);
                        if (bVar6) {
                            *puVar14 = *puVar14 & 0xfffffffffffffffe;
                            cVar5 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar5 != '\0');
                    iVar13 = *(iVar8 + 0x10) + -1;
                    *(iVar8 + 0x10) = iVar13;
                    if ((iVar13 == 0) || (*(iVar8 + 0x10) == 0)) {
                        preempt_schedule();
                    }
                }
                puVar12 = puVar12 + *(arg1 + 0x48);
            } while (puVar12 < uVar11 + iVar18);
        }
        *(iVar8 + 0xad0) = *(iVar8 + 0xad0) + -1;
        iVar13 = *(iVar8 + 0x10) + -1;
        *(iVar8 + 0x10) = iVar13;
        if ((iVar13 == 0) || (*(iVar8 + 0x10) == 0)) {
            preempt_schedule();
        }
        _raw_spin_unlock(arg1);
        _raw_write_unlock(arg2 + 10);
    }
    return uVar16;
}


// ===== sym.zs_cpu_prepare.c08505102395ade40ce2f57a59adb2a6.cfi_jt @ 0x080013b8 (size 8) =====

uint sym.zs_cpu_prepare.c08505102395ade40ce2f57a59adb2a6.cfi_jt(uint32_t param_1)

{
    code *pcVar1;
    int64_t iVar2;
    uint uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    if (param_1 < 0x20) {
        *in_x18 = unaff_x30;
        iVar4 = *(__per_cpu_offset + param_1 * 8);
        if (*(obj.zs_map_area + iVar4) == 0) {
            iVar2 = kmem_cache_alloc_trace(_preempt_schedule,0xcc0,0x1000);
            uVar3 = 0xfffffff4;
            if (iVar2 != 0) {
                uVar3 = 0;
            }
            *(obj.zs_map_area + iVar4) = iVar2;
        }
        else {
            uVar3 = 0;
        }
        return uVar3;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8005258);
    (*pcVar1)();
}


// ===== sym.zs_cpu_dead.c08505102395ade40ce2f57a59adb2a6.cfi_jt @ 0x080013c0 (size 8) =====

ulong sym.zs_cpu_dead.c08505102395ade40ce2f57a59adb2a6.cfi_jt(uint32_t param_1)

{
    code *pcVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    if (param_1 < 0x20) {
        *in_x18 = unaff_x30;
        iVar2 = *(__per_cpu_offset + param_1 * 8);
        kfree(*(obj.zs_map_area + iVar2));
        *(obj.zs_map_area + iVar2) = 0;
        return 0;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x80052b4);
    (*pcVar1)();
}


// ===== sym.async_free_zspage.c08505102395ade40ce2f57a59adb2a6.cfi_jt @ 0x080013c8 (size 8) =====

void sym.async_free_zspage.c08505102395ade40ce2f57a59adb2a6.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    int64_t ***pppiVar2;
    int64_t ***pppiVar3;
    code *pcVar4;
    ulong *in_x18;
    int64_t iVar5;
    uint64_t uVar6;
    int64_t ****ppppiVar7;
    int64_t ****ppppiVar8;
    ulong unaff_x30;
    int64_t ***pppiStack_68;
    int64_t ***pppiStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    uVar6 = 0;
    iStack_58 = *(iVar5 + 0x5e0);
    pppiStack_68 = &pppiStack_68;
    pppiStack_60 = &pppiStack_68;
    do {
        iVar5 = *(param_1 + -0x860 + uVar6 * 8);
        if (uVar6 == *(iVar5 + 0x54)) {
            _raw_spin_lock(iVar5);
            piVar1 = iVar5 + 8;
            if (piVar1 != *piVar1) {
                ppppiVar7 = *(iVar5 + 8);
                pppiVar2 = *(iVar5 + 0x10);
                ppppiVar7[1] = &pppiStack_68;
                *pppiVar2 = pppiStack_68;
                pppiStack_68[1] = pppiVar2;
                *(iVar5 + 8) = piVar1;
                *(iVar5 + 0x10) = piVar1;
                pppiStack_68 = ppppiVar7;
            }
            _raw_spin_unlock(iVar5);
        }
        uVar6 = uVar6 + 1;
    } while (uVar6 != 0xff);
    if (&pppiStack_68 != pppiStack_68) {
        ppppiVar7 = pppiStack_68;
        do {
            ppppiVar8 = *ppppiVar7;
            uVar6 = __list_del_entry_valid(ppppiVar7);
            if ((uVar6 & 1) != 0) {
                pppiVar2 = *ppppiVar7;
                pppiVar3 = ppppiVar7[1];
                pppiVar2[1] = pppiVar3;
                *pppiVar3 = pppiVar2;
            }
            *ppppiVar7 = 0xdead000000000100;
            ppppiVar7[1] = 0xdead000000000122;
            sym.lock_zspage(ppppiVar7 + -3);
            if ((*(ppppiVar7 + -3) & 0x3fc000) != 0x160000) goto code_r0x0800418c;
            uVar6 = *(ppppiVar7 + -3) >> 2 & 0x1ff;
            if (0xfe < uVar6) {
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x5512,0x8004188);
                (*pcVar4)();
            }
            iVar5 = *(param_1 + -0x860 + uVar6 * 8);
            _raw_spin_lock(iVar5);
            sym.__free_zspage(param_1 + -0x868,iVar5,ppppiVar7 + -3);
            _raw_spin_unlock(iVar5);
            ppppiVar7 = ppppiVar8;
        } while (&pppiStack_68 != ppppiVar8);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_58) {
        return;
    }
    __stack_chk_fail();
code_r0x0800418c:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x800,0x8004190);
    (*pcVar4)();
}


// ===== sym.zs_page_isolate.c08505102395ade40ce2f57a59adb2a6.cfi_jt @ 0x080013d0 (size 8) =====

uint sym.zs_page_isolate.c08505102395ade40ce2f57a59adb2a6.cfi_jt(int64_t param_1)

{
    uint32_t *puVar1;
    int64_t *piVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    code *pcVar6;
    int64_t iVar7;
    ulong *in_x18;
    uint64_t uVar8;
    uint uVar9;
    uint32_t *puVar10;
    int64_t iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar10 = *(param_1 + 0x28);
    if ((*puVar10 & 0x3fc000) != 0x160000) {
    //WARNING: Does not return
        pcVar6 = SoftwareBreakpoint(0x800,0x8004cd4);
        (*pcVar6)();
    }
    uVar8 = *puVar10 >> 2 & 0x1ff;
    iVar7 = page_mapping();
    if (uVar8 < 0xff) {
        iVar11 = *(iVar7 + 0xe8);
        iVar7 = *(iVar11 + uVar8 * 8 + 8);
        _raw_spin_lock(iVar7);
        if ((puVar10[1] == 0) || ((puVar1 = puVar10 + 6, puVar1 == *puVar1 && ((*puVar10 & 0x3800) == 0)))) {
            uVar9 = 0;
        }
        else {
            if (puVar1 != *puVar1) {
                uVar3 = *puVar10;
                if ((uVar3 & 0x3800) == 0) {
                    if ((uVar3 & 0x3fc000) != 0x160000) {
    //WARNING: Does not return
                        pcVar6 = SoftwareBreakpoint(0x800,0x8004ce4);
                        (*pcVar6)();
                    }
                    piVar2 = iVar11 + 0x8b0;
                    Hint_Prefetch(piVar2,2,0,1);
                    do {
                        cVar4 = '\x01';
                        bVar5 = ExclusiveMonitorPass(piVar2,0x10);
                        if (bVar5) {
                            *piVar2 = *piVar2 + 1;
                            cVar4 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar4 != '\0');
                    uVar8 = __list_del_entry_valid(puVar1);
                    if ((uVar8 & 1) != 0) {
                        iVar11 = *(puVar10 + 6);
                        piVar2 = *(puVar10 + 8);
                        *(iVar11 + 8) = piVar2;
                        *piVar2 = iVar11;
                    }
                    iVar11 = iVar7 + (uVar3 & 3) * 8;
                    *(puVar10 + 6) = puVar1;
                    *(puVar10 + 8) = puVar1;
                    *(iVar11 + 0x58) = *(iVar11 + 0x58) + -1;
                }
            }
            uVar3 = *puVar10;
            uVar9 = 1;
            *puVar10 = uVar3 & 0xffffc000 | uVar3 & 0x7ff | (uVar3 + 0x800 >> 0xb & 7) << 0xb;
        }
        _raw_spin_unlock(iVar7);
        return uVar9;
    }
    //WARNING: Does not return
    pcVar6 = SoftwareBreakpoint(0x5512,0x8004cd0);
    (*pcVar6)();
}


// ===== sym.zs_shrinker_scan.c08505102395ade40ce2f57a59adb2a6.cfi_jt @ 0x080013d8 (size 8) =====

int64_t sym.zs_shrinker_scan.c08505102395ade40ce2f57a59adb2a6.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sym.zs_compact(param_1 + -0x820);
    if (iVar1 == 0) {
        iVar1 = -1;
    }
    return iVar1;
}


// ===== sym.zs_shrinker_count.c08505102395ade40ce2f57a59adb2a6.cfi_jt @ 0x080013e0 (size 8) =====

//WARNING: Type propagation algorithm not settling

int64_t sym.zs_shrinker_count.c08505102395ade40ce2f57a59adb2a6.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t iVar2;
    bool bVar3;
    bool bVar4;
    bool bVar5;
    bool bVar6;
    bool bVar7;
    bool bVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint32_t uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    int64_t iVar15;
    int64_t iVar16;
    int64_t iVar17;
    uint64_t in_x16;
    uint64_t uVar18;
    uint64_t in_x17;
    uint64_t uVar19;
    int unaff_w19;
    int unaff_w20;
    
    iVar17 = 0;
    iVar15 = 0;
    iVar16 = 0;
    do {
        iVar1 = param_1 + iVar17 * 8;
        iVar2 = *(iVar1 + -0x30);
        iVar1 = *(iVar1 + -0x28);
        bVar4 = iVar1 != 0;
        bVar5 = iVar2 != 0;
        if (iVar1 != 0) {
            in_x16 = *(iVar1 + 0x54);
        }
        if (iVar2 != 0) {
            in_x17 = *(iVar2 + 0x54);
        }
        uVar9 = iVar17 + 0xfe;
        uVar10 = iVar17 + 0xfd;
        bVar6 = uVar9 == (in_x16 & 0xffffffff);
        uVar18 = bVar6;
        bVar7 = uVar10 == (in_x17 & 0xffffffff);
        uVar19 = bVar7;
        if (bVar4 && bVar6) {
            uVar18 = *(iVar1 + 0x78);
        }
        if (bVar5 && bVar7) {
            uVar19 = *(iVar2 + 0x78);
        }
        if (bVar4 && bVar6) {
            uVar9 = *(iVar1 + 0x80);
        }
        if (bVar5 && bVar7) {
            uVar10 = *(iVar2 + 0x80);
        }
        uVar14 = uVar18 - uVar9;
        bVar3 = uVar10 <= uVar19;
        uVar13 = uVar19 - uVar10;
        bVar8 = uVar13 != 0;
        uVar12 = bVar3 && bVar8;
        uVar11 = (bVar4 && bVar6) && (uVar9 <= uVar18 && uVar14 != 0);
        if (uVar11 == 1) {
            unaff_w20 = *(iVar1 + 0x4c);
        }
        if ((bVar5 && bVar7) && (bVar3 && bVar8)) {
            unaff_w19 = *(iVar2 + 0x4c);
            if (uVar11 != 0) goto code_r0x08005170;
code_r0x08005144:
            if ((!bVar5 || !bVar7) || (!bVar3 || !bVar8)) goto code_r0x0800517c;
code_r0x08005148:
            uVar14 = 0;
            if (unaff_w19 != 0) {
                uVar14 = uVar13 / unaff_w19;
            }
            if (uVar11 != 0) goto code_r0x08005180;
code_r0x08005154:
            if ((bVar5 && bVar7) && (bVar3 && bVar8)) goto code_r0x08005188;
        }
        else {
            if (uVar11 == 0) goto code_r0x08005144;
code_r0x08005170:
            uVar12 = 0;
            if (unaff_w20 != 0) {
                uVar12 = uVar14 / unaff_w20;
            }
            if ((bVar5 && bVar7) && (bVar3 && bVar8)) goto code_r0x08005148;
code_r0x0800517c:
            if (uVar11 == 0) goto code_r0x08005154;
code_r0x08005180:
            uVar13 = *(iVar1 + 0x50);
            if ((bVar5 && bVar7) && (bVar3 && bVar8)) {
code_r0x08005188:
                uVar11 = *(iVar2 + 0x50);
            }
        }
        iVar17 = iVar17 + -2;
        in_x17 = 0;
        if ((!bVar4 || !bVar6) || uVar9 < uVar18) {
            in_x17 = uVar12 * uVar13;
        }
        in_x16 = 0;
        if ((!bVar5 || !bVar7) || uVar10 < uVar19) {
            in_x16 = uVar14 * uVar11;
        }
        uVar9 = in_x17;
        if (!bVar4 || !bVar6) {
            uVar9 = 0;
        }
        uVar10 = in_x16;
        if (!bVar5 || !bVar7) {
            uVar10 = 0;
        }
        uVar19 = 0;
        if (iVar1 != 0) {
            uVar19 = uVar9;
        }
        uVar9 = 0;
        if (iVar2 != 0) {
            uVar9 = uVar10;
        }
        iVar15 = iVar15 + uVar19;
        iVar16 = iVar16 + uVar9;
        if (iVar17 == -0xfe) {
            iVar17 = *(param_1 + -0x818);
            iVar16 = iVar16 + iVar15;
            if ((iVar17 != 0) && (*(iVar17 + 0x54) == 0)) {
                uVar9 = *(iVar17 + 0x78) - *(iVar17 + 0x80);
                if (*(iVar17 + 0x78) < *(iVar17 + 0x80) || uVar9 == 0) {
                    iVar15 = 0;
                }
                else {
                    uVar10 = 0;
                    if (*(iVar17 + 0x4c) != 0) {
                        uVar10 = uVar9 / *(iVar17 + 0x4c);
                    }
                    iVar15 = uVar10 * *(iVar17 + 0x54);
                }
                iVar16 = iVar15 + iVar16;
            }
            return iVar16;
        }
    } while( true );
}


// ===== sym.zs_get_total_pages.cfi_jt @ 0x080013e8 (size 8) =====

ulong sym.zs_get_total_pages.cfi_jt(int64_t param_1)

{
    return *(param_1 + 0x810);
}


// ===== sym.zs_compact.cfi_jt @ 0x080013f0 (size 8) =====

void sym.zs_compact.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    bool bVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int64_t *piVar5;
    char cVar6;
    uint64_t uVar7;
    int iVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    int64_t *extraout_x8;
    int64_t *piVar12;
    ulong *in_x18;
    int64_t iVar13;
    int64_t *arg2;
    int64_t *piVar14;
    int64_t iVar15;
    int64_t *piVar16;
    int64_t iVar17;
    ulong unaff_x30;
    int64_t iStack_80;
    int64_t iStack_78;
    uint uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iVar9 = 0;
    iStack_68 = *(iVar13 + 0x5e0);
    uVar11 = 0xfe;
    do {
        iVar13 = *(param_1 + uVar11 * 8 + 8);
        if ((iVar13 != 0) && (uVar11 == *(iVar13 + 0x54))) {
            iStack_78 = 0;
            uStack_70 = 0;
            _raw_spin_lock(iVar13);
            iVar17 = 0;
            piVar12 = iVar13 + 0x18;
            piVar1 = iVar13 + 0x28;
            while( true ) {
                piVar14 = *piVar12;
                arg2 = piVar14 + -3;
                if (piVar12 == piVar14 || arg2 == NULL) {
                    piVar14 = *piVar1;
                    if ((piVar1 == piVar14) || (arg2 = piVar14 + -3, arg2 == NULL)) goto code_r0x08002a50;
                    iVar15 = 2;
                }
                else {
                    iVar15 = 1;
                }
                uVar10 = __list_del_entry_valid(piVar14);
                if ((uVar10 & 1) != 0) {
                    iVar3 = *piVar14;
                    piVar16 = piVar14[1];
                    *(iVar3 + 8) = piVar16;
                    *piVar16 = iVar3;
                }
                iVar15 = iVar13 + iVar15 * 8;
                *piVar14 = piVar14;
                piVar14[1] = piVar14;
                uVar10 = *(iVar13 + 0x78);
                uVar4 = *(iVar13 + 0x80);
                uVar7 = uVar10 - uVar4;
                *(iVar15 + 0x58) = *(iVar15 + 0x58) + -1;
                if (uVar10 < uVar4 || uVar7 == 0) break;
                uVar10 = 0;
                if (*(iVar13 + 0x4c) != 0) {
                    uVar10 = uVar7 / *(iVar13 + 0x4c);
                }
                if (uVar10 * *(iVar13 + 0x54) == 0) break;
                iStack_80 = arg2[2];
                uStack_70 = 0;
                while( true ) {
                    piVar16 = *piVar1;
                    piVar14 = piVar16 + -3;
                    if (piVar1 == piVar16 || piVar14 == NULL) {
                        piVar16 = *piVar12;
                        if ((piVar12 == piVar16) || (piVar14 = piVar16 + -3, piVar14 == NULL)) goto code_r0x08002a44;
                        iVar15 = 1;
                    }
                    else {
                        iVar15 = 2;
                    }
                    uVar10 = __list_del_entry_valid(piVar16);
                    if ((uVar10 & 1) != 0) {
                        iVar3 = *piVar16;
                        piVar5 = piVar16[1];
                        *(iVar3 + 8) = piVar5;
                        *piVar5 = iVar3;
                    }
                    iVar15 = iVar13 + iVar15 * 8;
                    *piVar16 = piVar16;
                    piVar16[1] = piVar16;
                    *(iVar15 + 0x58) = *(iVar15 + 0x58) + -1;
                    iStack_78 = piVar14[2];
                    iVar8 = sym.migrate_zspage(iVar13,&iStack_80);
                    if (iVar8 == 0) break;
                    sym.putback_zspage(iVar13,piVar14);
                }
                sym.putback_zspage(iVar13,piVar14);
                iVar8 = sym.putback_zspage(iVar13,arg2);
                if (iVar8 == 0) {
                    iVar8 = sym.trylock_zspage(arg2);
                    if (iVar8 == 0) {
                        queue_work_on(0x20,__raw_read_lock,param_1 + 0x868);
                    }
                    else {
                        piVar14 = arg2 + 3;
                        uVar10 = __list_del_entry_valid(piVar14);
                        if ((uVar10 & 1) != 0) {
                            iVar15 = arg2[3];
                            piVar16 = arg2[4];
                            *(iVar15 + 8) = piVar16;
                            *piVar16 = iVar15;
                        }
                        arg2[3] = piVar14;
                        arg2[4] = piVar14;
                        *(iVar13 + 0x58) = *(iVar13 + 0x58) + -1;
                        sym.__free_zspage(param_1,iVar13,arg2);
                    }
                    iVar17 = iVar17 + *(iVar13 + 0x50);
                }
                _raw_spin_unlock(iVar13);
                _raw_spin_lock(iVar13);
            }
code_r0x08002a44:
            sym.putback_zspage(iVar13,arg2);
code_r0x08002a50:
            _raw_spin_unlock(iVar13);
            iVar9 = iVar17 + iVar9;
        }
        bVar2 = uVar11 == 0;
        uVar11 = uVar11 - 1;
        if (bVar2) {
            piVar12 = param_1 + 0x818;
            while( true ) {
                Hint_Prefetch(piVar12,2,0,1);
                do {
                    cVar6 = '\x01';
                    bVar2 = ExclusiveMonitorPass(piVar12,0x10);
                    if (bVar2) {
                        *piVar12 = *piVar12 + iVar9;
                        cVar6 = ExclusiveMonitorsStatus();
                    }
                } while (cVar6 != '\0');
                iVar9 = sp_el0;
                if (*(iVar9 + 0x5e0) == iStack_68) break;
                iVar9 = __stack_chk_fail();
                piVar12 = extraout_x8;
            }
            return;
        }
    } while( true );
}


// ===== sym.zs_huge_class_size.cfi_jt @ 0x080013f8 (size 8) =====

ulong sym.zs_huge_class_size.cfi_jt(void)

{
    return _segment.ehdr;
}


// ===== sym.zs_get_total_pages @ 0x08001400 (size 20) =====

ulong sym.zs_get_total_pages(int64_t arg1)

{
    return *(arg1 + 0x810);
}


// ===== sym.zs_map_object @ 0x08001418 (size 496) =====

int64_t sym.zs_map_object(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t *puVar1;
    ulong *puVar2;
    int iVar3;
    int64_t iVar4;
    int64_t iVar5;
    code *pcVar6;
    uint64_t uVar7;
    int64_t iVar8;
    ulong *in_x18;
    uint64_t uVar9;
    int64_t iVar10;
    uint32_t *puVar11;
    ulong unaff_x30;
    ulong *puStack_58;
    int64_t iStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iVar4 = sp_el0;
    iStack_48 = *(iVar10 + 0x5e0);
    puVar1 = iVar4 + 0x10;
    if (((*puVar1 & 0xf0000) == 0 && (*puVar1 & 0xf00000) == 0) && (*puVar1 & 0xff00) == 0) {
        sym.pin_tag(arg2);
        uVar9 = *arg2;
        iVar10 = (uVar9 >> 0x16 & 0x3ffffffffc0) + (_kill_anon_super >> 0xc) * -0x40;
        puVar11 = *(iVar10 + -0x1ffffffd8);
        if ((*puVar11 & 0x3fc000) != 0x160000) {
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x800,0x80015fc);
            (*pcVar6)();
        }
        _raw_read_lock(puVar11 + 10);
        if ((*puVar11 & 0x3fc000) != 0x160000) {
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x800,0x8001600);
            (*pcVar6)();
        }
        uVar7 = *puVar11 >> 2 & 0x1ff;
        if (0xfe < uVar7) {
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x5512,0x80015f0);
            (*pcVar6)();
        }
        iVar8 = *(arg1 + uVar7 * 8 + 8);
        iVar3 = *(iVar8 + 0x48);
        *(iVar4 + 0x10) = *(iVar4 + 0x10) + 1;
        iVar5 = tpidr_el1;
        *(iVar5 + 0x80054b8) = arg3;
        iVar8 = *(iVar8 + 0x48);
        uVar9 = iVar3 * (uVar9 >> 1 & 0x7ffffff) & 0xfff;
        puVar2 = iVar10 - 0x200000000;
        if (iVar8 + uVar9 < 0x1001) {
            *(iVar4 + 0x10) = *(iVar4 + 0x10) + 1;
            *(iVar4 + 0xad0) = *(iVar4 + 0xad0) + 1;
            uVar7 = (puVar2 & 0x3ffffffffffc0) << 6 | 0xff00000000000000;
            iVar10 = uVar7 + uVar9;
            *(iVar5 + 0x80054b0) = uVar7;
        }
        else {
            puStack_58 = puVar2;
            if ((*puVar2 >> 10 & 1) != 0) {
                iStack_50 = 0;
code_r0x08001604:
    //WARNING: Does not return
                pcVar6 = SoftwareBreakpoint(0x800,0x8001608);
                (*pcVar6)();
            }
            iStack_50 = *(iVar10 + -0x1ffffffe0);
            if (iStack_50 == 0) goto code_r0x08001604;
            iVar10 = sym.__zs_map_object(obj.zs_map_area + iVar5,&puStack_58,uVar9,iVar8);
        }
        iVar4 = sp_el0;
        if (*(iVar4 + 0x5e0) == iStack_48) {
            return iVar10 + ((*puVar2 >> 7 ^ 0xffffffff) & 8);
        }
        __stack_chk_fail();
    }
    //WARNING: Does not return
    pcVar6 = SoftwareBreakpoint(0x800,0x80015f8);
    (*pcVar6)();
}


// ===== sym.pin_tag @ 0x08001620 (size 232) =====

void sym.pin_tag(int64_t arg1)

{
    char cVar1;
    bool bVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    *(iVar4 + 0x10) = *(iVar4 + 0x10) + 1;
    uVar5 = *arg1;
    do {
        if ((uVar5 & 1) == 0) {
            Hint_Prefetch(arg1,2,0,1);
            do {
                uVar5 = *arg1;
                cVar1 = '\x01';
                bVar2 = ExclusiveMonitorPass(arg1,0x10);
                if (bVar2) {
                    *arg1 = uVar5 | 1;
                    cVar1 = ExclusiveMonitorsStatus();
                }
            } while (cVar1 != '\0');
            if ((uVar5 & 1) == 0) {
                return;
            }
        }
        iVar3 = *(iVar4 + 0x10) + -1;
        *(iVar4 + 0x10) = iVar3;
        if ((iVar3 == 0) || (*(iVar4 + 0x10) == 0)) {
            preempt_schedule();
        }
        do {
            Yield();
        } while ((*arg1 & 1) != 0);
        *(iVar4 + 0x10) = *(iVar4 + 0x10) + 1;
        uVar5 = *arg1;
    } while( true );
}


// ===== sym.__zs_map_object @ 0x08001708 (size 392) =====

ulong sym.__zs_map_object(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iVar5 = *arg1;
    *(iVar3 + 0xad0) = *(iVar3 + 0xad0) + 1;
    if (*(arg1 + 0x10) != 2) {
        uVar4 = *arg2;
        *(iVar3 + 0x10) = *(iVar3 + 0x10) + 1;
        *(iVar3 + 0xad0) = *(iVar3 + 0xad0) + 1;
        uVar1 = 0x1000 - arg3;
        memcpy(iVar5,((uVar4 & 0x3ffffffffffc0) << 6 | 0xff00000000000000) + (arg3 & 0xffffffffU),uVar1);
        *(iVar3 + 0xad0) = *(iVar3 + 0xad0) + -1;
        iVar2 = *(iVar3 + 0x10) + -1;
        *(iVar3 + 0x10) = iVar2;
        if ((iVar2 == 0) || (*(iVar3 + 0x10) == 0)) {
            preempt_schedule();
        }
        uVar4 = *(arg2 + 8);
        *(iVar3 + 0x10) = *(iVar3 + 0x10) + 1;
        *(iVar3 + 0xad0) = *(iVar3 + 0xad0) + 1;
        memcpy(iVar5 + uVar1,(uVar4 & 0x3ffffffffffc0) << 6 | 0xff00000000000000,arg4 - uVar1);
        *(iVar3 + 0xad0) = *(iVar3 + 0xad0) + -1;
        iVar5 = *(iVar3 + 0x10) + -1;
        *(iVar3 + 0x10) = iVar5;
        if ((iVar5 == 0) || (*(iVar3 + 0x10) == 0)) {
            preempt_schedule();
        }
    }
    return *arg1;
}


// ===== sym.zs_unmap_object @ 0x080018a8 (size 492) =====

void sym.zs_unmap_object(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    code *pcVar6;
    int64_t iVar7;
    uint64_t uVar8;
    ulong *in_x18;
    uint32_t *puVar9;
    ulong unaff_x30;
    ulong *puStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    iVar7 = (*arg2 >> 0x16 & 0x3ffffffffc0) + (_kill_anon_super >> 0xc) * -0x40;
    puVar9 = *(iVar7 + -0x1ffffffd8);
    uVar1 = *puVar9;
    if ((uVar1 & 0x3fc000) != 0x160000) {
    //WARNING: Does not return
        pcVar6 = SoftwareBreakpoint(0x800,0x8001a58);
        (*pcVar6)();
    }
    uVar8 = uVar1 >> 2 & 0x1ff;
    if (0xfe < uVar8) {
    //WARNING: Does not return
        pcVar6 = SoftwareBreakpoint(0x5512,0x8001a40);
        (*pcVar6)();
    }
    iVar2 = *(*(arg1 + uVar8 * 8 + 8) + 0x48);
    uVar8 = iVar2 * (*arg2 >> 1 & 0x7ffffff) & 0xfff;
    iVar5 = tpidr_el1;
    if (uVar8 + iVar2 < 0x1001) {
        iVar5 = sp_el0;
        *(iVar5 + 0xad0) = *(iVar5 + 0xad0) + -1;
        iVar7 = *(iVar5 + 0x10) + -1;
        *(iVar5 + 0x10) = iVar7;
        if ((iVar7 == 0) || (*(iVar5 + 0x10) == 0)) {
            preempt_schedule();
        }
code_r0x080019a8:
        iVar5 = sp_el0;
        iVar7 = *(iVar5 + 0x10) + -1;
        *(iVar5 + 0x10) = iVar7;
        if ((iVar7 == 0) || (*(iVar5 + 0x10) == 0)) {
            preempt_schedule();
        }
        _raw_read_unlock(puVar9 + 10);
        while( true ) {
            Hint_Prefetch(arg2,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(arg2,0x10);
                if (bVar4) {
                    *arg2 = *arg2 & 0xfffffffffffffffe;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            iVar7 = *(iVar5 + 0x10) + -1;
            *(iVar5 + 0x10) = iVar7;
            if ((iVar7 == 0) || (*(iVar5 + 0x10) == 0)) {
                preempt_schedule();
            }
            iVar7 = sp_el0;
            if (*(iVar7 + 0x5e0) == iStack_38) break;
            __stack_chk_fail();
        }
        return;
    }
    puStack_48 = iVar7 + -0x200000000;
    if ((*puStack_48 >> 10 & 1) == 0) {
        iStack_40 = *(iVar7 + -0x1ffffffe0);
        if (iStack_40 != 0) {
            sym.__zs_unmap_object(obj.zs_map_area + iVar5,&puStack_48,uVar8,iVar2);
            goto code_r0x080019a8;
        }
    }
    else {
        iStack_40 = 0;
    }
    //WARNING: Does not return
    pcVar6 = SoftwareBreakpoint(0x800,0x8001a60);
    (*pcVar6)();
}


// ===== sym.__zs_unmap_object @ 0x08001a94 (size 392) =====

void sym.__zs_unmap_object(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    int iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x10) != 1) {
        iVar2 = sp_el0;
        arg1 = *arg1;
        uVar4 = *arg2;
        iVar3 = arg3;
        *(iVar2 + 0x10) = *(iVar2 + 0x10) + 1;
        *(iVar2 + 0xad0) = *(iVar2 + 0xad0) + 1;
        memcpy(((uVar4 & 0x3ffffffffffc0) << 6 | 0xff00000000000000) + iVar3 + 8,arg1 + 8,0xff8 - iVar3);
        *(iVar2 + 0xad0) = *(iVar2 + 0xad0) + -1;
        iVar1 = *(iVar2 + 0x10) + -1;
        *(iVar2 + 0x10) = iVar1;
        if ((iVar1 == 0) || (*(iVar2 + 0x10) == 0)) {
            preempt_schedule();
        }
        uVar4 = *(arg2 + 8);
        *(iVar2 + 0x10) = *(iVar2 + 0x10) + 1;
        *(iVar2 + 0xad0) = *(iVar2 + 0xad0) + 1;
        memcpy((uVar4 & 0x3ffffffffffc0) << 6 | 0xff00000000000000,arg1 + 8 + (0xff8 - iVar3),iVar3 + arg4 + -0x1000);
        *(iVar2 + 0xad0) = *(iVar2 + 0xad0) + -1;
        iVar1 = *(iVar2 + 0x10) + -1;
        *(iVar2 + 0x10) = iVar1;
        if ((iVar1 == 0) || (*(iVar2 + 0x10) == 0)) {
            preempt_schedule();
        }
    }
    iVar1 = sp_el0;
    *(iVar1 + 0xad0) = *(iVar1 + 0xad0) + -1;
    return;
}


// ===== sym.zs_huge_class_size @ 0x08001c34 (size 20) =====

ulong sym.zs_huge_class_size(void)

{
    return _segment.ehdr;
}


// ===== sym.zs_malloc @ 0x08001c48 (size 744) =====

ulong * sym.zs_malloc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t *puVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    code *pcVar6;
    ulong *arg3_00;
    ulong uVar7;
    uint32_t *arg2_00;
    uint64_t uVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    int64_t *piVar11;
    ulong *in_x18;
    int64_t arg2_01;
    int64_t *piVar12;
    int64_t iVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 - 0x1001U < 0xfffffffffffff000) {
        return NULL;
    }
    arg3_00 = kmem_cache_alloc(*(arg1 + 0x800),arg3 & 0xf7fffff5);
    if (arg3_00 == NULL) {
        return NULL;
    }
    uVar9 = arg2 + 0xffffffff7U >> 4;
    if (arg2 < 0x19) {
        uVar9 = 0;
    }
    if (0xfd < uVar9) {
        uVar9 = 0xfe;
    }
    if (0xfe < uVar9) {
    //WARNING: Does not return
        pcVar6 = SoftwareBreakpoint(0x5512,0x8001efc);
        (*pcVar6)();
    }
    arg2_01 = *(arg1 + uVar9 * 8 + 8);
    _raw_spin_lock(arg2_01);
    piVar11 = *(arg2_01 + 0x28);
    iVar13 = 0;
    if (arg2_01 + 0x28 != piVar11) {
        iVar13 = piVar11 + -3;
    }
    if (iVar13 == 0) {
        piVar11 = *(arg2_01 + 0x18);
        iVar13 = 0;
        if (arg2_01 + 0x18 != piVar11) {
            iVar13 = piVar11 + -3;
        }
        if ((iVar13 == 0) &&
           ((piVar11 = *(arg2_01 + 8), arg2_01 + 8 == piVar11 || (iVar13 = piVar11 + -3, iVar13 == 0)))) {
            _raw_spin_unlock(arg2_01);
            arg2_00 = sym.alloc_zspage(arg1,arg2_01,arg3 & 0xffffffff);
            if (arg2_00 == NULL) {
                kmem_cache_free(*(arg1 + 0x800),arg3_00);
                return NULL;
            }
            _raw_spin_lock(arg2_01);
            uVar7 = sym.obj_malloc(arg2_01,arg2_00,arg3_00);
            uVar9 = arg2_00[1];
            if (uVar9 == 0) {
                uVar10 = 0;
            }
            else if (uVar9 == *(arg2_01 + 0x4c)) {
                uVar10 = 3;
            }
            else {
                iVar5 = *(arg2_01 + 0x4c) * 3;
                iVar2 = iVar5 + 3;
                if (-1 < iVar5) {
                    iVar2 = iVar5;
                }
                uVar10 = 1;
                if (iVar2 >> 2 < uVar9) {
                    uVar10 = 2;
                }
            }
            iVar13 = arg2_01 + uVar10 * 8;
            piVar11 = arg2_01 + uVar10 * 0x10 + 8;
            *(iVar13 + 0x58) = *(iVar13 + 0x58) + 1;
            piVar12 = *piVar11;
            if (((piVar11 == piVar12) || (piVar12 == 0x18)) || (*(piVar12 + -0x14) <= arg2_00[1])) {
                iVar13 = *piVar11;
                puVar1 = arg2_00 + 6;
                uVar8 = __list_add_valid(puVar1,piVar11,iVar13);
                if ((uVar8 & 1) != 0) {
                    *(iVar13 + 8) = puVar1;
                    *(arg2_00 + 6) = iVar13;
                    *(arg2_00 + 8) = piVar11;
                    *piVar11 = puVar1;
                }
            }
            else {
                iVar13 = *piVar12;
                puVar1 = arg2_00 + 6;
                uVar8 = __list_add_valid(puVar1,piVar12,iVar13);
                if ((uVar8 & 1) != 0) {
                    *(iVar13 + 8) = puVar1;
                    *(arg2_00 + 6) = iVar13;
                    *(arg2_00 + 8) = piVar12;
                    *piVar12 = puVar1;
                }
            }
            piVar11 = arg1 + 0x810;
            *arg2_00 = (*(arg2_01 + 0x54) & 0x1ff) << 2 | uVar10 | *arg2_00 & 0xfffff800;
            *arg3_00 = uVar7;
            iVar2 = *(arg2_01 + 0x50);
            Hint_Prefetch(piVar11,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(piVar11,0x10);
                if (bVar4) {
                    *piVar11 = *piVar11 + iVar2;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            *(arg2_01 + 0x78) = *(arg2_01 + 0x78) + *(arg2_01 + 0x4c);
            sym.SetZsPageMovable(arg1,arg2_00);
            goto code_r0x08001d4c;
        }
    }
    uVar7 = sym.obj_malloc(arg2_01,iVar13,arg3_00);
    sym.fix_fullness_group(arg2_01,iVar13);
    *arg3_00 = uVar7;
code_r0x08001d4c:
    _raw_spin_unlock(arg2_01);
    return arg3_00;
}


// ===== sym.obj_malloc @ 0x08001f30 (size 348) =====

uint64_t sym.obj_malloc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t *puVar5;
    uint32_t uVar6;
    ulong *in_x18;
    ulong *puVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg2 + 8);
    puVar7 = *(arg2 + 0x10);
    uVar2 = *(arg1 + 0x48) * iVar1;
    if (0xfff < uVar2) {
        uVar6 = uVar2 >> 0xc;
        do {
            while ((*puVar7 >> 10 & 1) != 0) {
                puVar7 = NULL;
                uVar6 = uVar6 - 1;
                if (uVar6 == 0) goto code_r0x08001f94;
            }
            puVar7 = puVar7[4];
            uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
    }
code_r0x08001f94:
    iVar4 = sp_el0;
    *(iVar4 + 0x10) = *(iVar4 + 0x10) + 1;
    *(iVar4 + 0xad0) = *(iVar4 + 0xad0) + 1;
    puVar5 = ((puVar7 & 0x3ffffffffffc0) << 6 | 0xff00000000000000) + (uVar2 >> 3 & 0x1ff) * 8;
    *(arg2 + 8) = *puVar5 >> 1;
    if ((*puVar7 >> 10 & 1) != 0) {
        puVar5 = *(arg2 + 0x10) + 0x20;
    }
    *puVar5 = arg3 | 1;
    *(iVar4 + 0xad0) = *(iVar4 + 0xad0) + -1;
    iVar3 = *(iVar4 + 0x10) + -1;
    *(iVar4 + 0x10) = iVar3;
    if ((iVar3 == 0) || (*(iVar4 + 0x10) == 0)) {
        preempt_schedule();
    }
    *(arg2 + 4) = *(arg2 + 4) + 1;
    *(arg1 + 0x80) = *(arg1 + 0x80) + 1;
    return (puVar7 + (_kill_anon_super >> 0xc) * 8) * 0x400000 + 0x80000000000000U | iVar1 << 1 & 0xffffffe;
}


// ===== sym.fix_fullness_group @ 0x08002098 (size 412) =====

uint32_t sym.fix_fullness_group(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    int64_t *piVar3;
    uint32_t uVar4;
    int iVar5;
    int iVar6;
    code *pcVar7;
    uint64_t uVar8;
    int64_t iVar9;
    uint32_t uVar10;
    ulong *in_x18;
    uint32_t uVar11;
    int64_t *piVar12;
    int64_t iVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = *arg2;
    if ((uVar4 & 0x3fc000) != 0x160000) {
    //WARNING: Does not return
        pcVar7 = SoftwareBreakpoint(0x800,0x8002234);
        (*pcVar7)();
    }
    iVar5 = *(arg2 + 4);
    uVar11 = uVar4 & 3;
    if (iVar5 == 0) {
        uVar10 = 0;
        if (uVar11 == 0) {
            return 0;
        }
    }
    else if (iVar5 == *(arg1 + 0x4c)) {
        uVar10 = 3;
        if (uVar11 == 3) {
            return 3;
        }
    }
    else {
        iVar6 = *(arg1 + 0x4c) * 3;
        iVar2 = iVar6 + 3;
        if (-1 < iVar6) {
            iVar2 = iVar6;
        }
        uVar10 = 1;
        if (iVar2 >> 2 < iVar5) {
            uVar10 = 2;
        }
        if (uVar10 == uVar11) {
            return uVar10;
        }
    }
    if ((uVar4 & 0x3800) == 0) {
        iVar1 = arg2 + 0x18;
        uVar8 = __list_del_entry_valid(iVar1);
        if ((uVar8 & 1) != 0) {
            iVar13 = *(arg2 + 0x18);
            piVar3 = *(arg2 + 0x20);
            *(iVar13 + 8) = piVar3;
            *piVar3 = iVar13;
        }
        iVar9 = (uVar4 & 3) * 8;
        iVar13 = arg1 + 0x58;
        *(arg2 + 0x18) = iVar1;
        *(arg2 + 0x20) = iVar1;
        *(iVar13 + iVar9) = *(iVar13 + iVar9) + -1;
        piVar3 = arg1 + uVar10 * 0x10 + 8;
        *(iVar13 + uVar10 * 8) = *(iVar13 + uVar10 * 8) + 1;
        piVar12 = *piVar3;
        if (((piVar3 == piVar12) || (piVar12 == 0x18)) || (*(piVar12 + -0x14) <= *(arg2 + 4))) {
            iVar13 = *piVar3;
            uVar8 = __list_add_valid(iVar1,piVar3,iVar13);
            piVar12 = piVar3;
        }
        else {
            iVar13 = *piVar12;
            uVar8 = __list_add_valid(iVar1,piVar12,iVar13);
        }
        if ((uVar8 & 1) != 0) {
            *(iVar13 + 8) = iVar1;
            *(arg2 + 0x18) = iVar13;
            *(arg2 + 0x20) = piVar12;
            *piVar12 = iVar1;
        }
    }
    *arg2 = uVar10 | uVar4 & 0x7fc | *arg2 & 0xfffff800;
    return uVar10;
}


// ===== sym.alloc_zspage @ 0x08002238 (size 980) =====

uint32_t * sym.alloc_zspage(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    char cVar2;
    bool bVar3;
    ulong uVar4;
    code *pcVar5;
    uint32_t *arg2_00;
    uint64_t *puVar6;
    uint64_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    ulong *in_x18;
    uint64_t uVar10;
    ulong unaff_x30;
    uint64_t *apuStack_80 [2];
    uint64_t uStack_70;
    int64_t iStack_68;
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_58 = *(iVar9 + 0x5e0);
    uVar10 = arg3 & 0xffffffff;
    iStack_68 = 0;
    iStack_60 = 0;
    uStack_70 = 0;
    arg2_00 = kmem_cache_alloc(*(arg1 + 0x808),arg3 & 0xf7fffef5 | 0x100);
    if (arg2_00 != NULL) {
        iVar1 = *(arg2 + 0x50);
        arg2_00[10] = 0;
        arg2_00[0xb] = 0;
        *arg2_00 = *arg2_00 & 0xffc00000 | *arg2_00 & 0x3fff | 0x160000;
        if (iVar1 < 1) {
code_r0x08002474:
            sym.init_zspage(arg2,arg2_00);
        }
        else {
            uVar4 = tpidr_el1;
            puVar6 = __alloc_pages(uVar4,uVar10,0,0,0);
            if (puVar6 != NULL) {
                inc_zone_page_state(puVar6,9);
                iVar1 = *(arg2 + 0x50);
                apuStack_80[1] = puVar6;
                if (iVar1 < 2) {
                    iVar9 = 0;
                    iVar8 = 0;
                    uVar7 = 0;
joined_r0x080023d4:
                    if (0 < iVar1) {
                        puVar6[4] = 0;
                        puVar6[5] = arg2_00;
                        *(arg2_00 + 4) = puVar6;
                        Hint_Prefetch(puVar6,2,0,1);
                        do {
                            cVar2 = '\x01';
                            bVar3 = ExclusiveMonitorPass(puVar6,0x10);
                            if (bVar3) {
                                *puVar6 = *puVar6 | 0x2000;
                                cVar2 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar2 != '\0');
                        if ((*(arg2 + 0x4c) == 1) && (*(arg2 + 0x50) == 1)) {
                            Hint_Prefetch(puVar6,2,0,1);
                            do {
                                cVar2 = '\x01';
                                bVar3 = ExclusiveMonitorPass(puVar6,0x10);
                                if (bVar3) {
                                    *puVar6 = *puVar6 | 0x400;
                                    cVar2 = ExclusiveMonitorsStatus();
                                }
                            } while (cVar2 != '\0');
                        }
                        if (iVar1 != 1) {
                            *(uVar7 + 0x20) = 0;
                            *(uVar7 + 0x28) = arg2_00;
                            puVar6[4] = uVar7;
                            if (iVar1 != 2) {
                                *(iVar8 + 0x20) = 0;
                                *(iVar8 + 0x28) = arg2_00;
                                *(uVar7 + 0x20) = iVar8;
                                if (iVar1 != 3) {
                                    *(iVar9 + 0x20) = 0;
                                    *(iVar9 + 0x28) = arg2_00;
                                    *(iVar8 + 0x20) = iVar9;
                                }
                            }
                        }
                    }
                    goto code_r0x08002474;
                }
                uVar4 = tpidr_el1;
                uVar7 = __alloc_pages(uVar4,uVar10,0,0,0);
                if (uVar7 == 0) {
                    iVar9 = 0;
                    bVar3 = true;
                }
                else {
                    inc_zone_page_state(uVar7,9);
                    iVar1 = *(arg2 + 0x50);
                    uStack_70 = uVar7;
                    if (iVar1 < 3) {
                        iVar9 = 0;
                        iVar8 = 0;
                        goto joined_r0x080023d4;
                    }
                    uVar4 = tpidr_el1;
                    iVar8 = __alloc_pages(uVar4,uVar10,0,0,0);
                    if (iVar8 == 0) {
                        bVar3 = false;
                        iVar9 = 1;
                    }
                    else {
                        inc_zone_page_state(iVar8,9);
                        iVar1 = *(arg2 + 0x50);
                        iStack_68 = iVar8;
                        if (iVar1 < 4) {
                            iVar9 = 0;
                            goto joined_r0x080023d4;
                        }
                        uVar4 = tpidr_el1;
                        iVar9 = __alloc_pages(uVar4,uVar10,0,0,0);
                        if (iVar9 == 0) {
                            bVar3 = false;
                            iVar9 = 2;
                        }
                        else {
                            inc_zone_page_state(iVar9,9);
                            iVar1 = *(arg2 + 0x50);
                            iStack_60 = iVar9;
                            if (iVar1 < 5) goto joined_r0x080023d4;
                            uVar4 = tpidr_el1;
                            iVar9 = __alloc_pages(uVar4,uVar10,0,0,0);
                            if (iVar9 != 0) {
                                inc_zone_page_state(iVar9,9);
    //WARNING: Does not return
                                pcVar5 = SoftwareBreakpoint(0x5512,0x80025b0);
                                (*pcVar5)();
                            }
                            bVar3 = false;
                            iVar9 = 3;
                        }
                    }
                }
                puVar6 = apuStack_80[iVar9 + 1];
                dec_zone_page_state(puVar6,9);
                __free_pages(puVar6,0);
                if (!bVar3) {
                    if ((iVar9 - 1U & 0x1ffffffffffffffc) != 0) goto code_r0x080025a0;
                    puVar6 = apuStack_80[iVar9];
                    dec_zone_page_state(puVar6,9);
                    __free_pages(puVar6,0);
                    if (iVar9 - 1U != 0) {
                        if ((iVar9 - 2U & 0x1ffffffffffffffc) != 0) goto code_r0x080025a0;
                        puVar6 = apuStack_80[iVar9 + -1];
                        dec_zone_page_state(puVar6,9);
                        __free_pages(puVar6,0);
                        if (iVar9 - 2U != 0) {
                            if ((iVar9 - 3U & 0x1ffffffffffffffc) != 0) goto code_r0x080025a0;
                            puVar6 = apuStack_80[iVar9 + -2];
                            dec_zone_page_state(puVar6,9);
                            __free_pages(puVar6,0);
                        }
                    }
                }
            }
            kmem_cache_free(*(arg1 + 0x808),arg2_00);
            arg2_00 = NULL;
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_58) {
        return arg2_00;
    }
    __stack_chk_fail();
code_r0x080025a0:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(1,0x80025a4);
    (*pcVar5)();
}


// ===== sym.SetZsPageMovable @ 0x0800260c (size 208) =====

void sym.SetZsPageMovable(int64_t arg1,int64_t arg2)

{
    char cVar1;
    bool bVar2;
    code *pcVar3;
    uint64_t *puVar4;
    uint64_t uVar5;
    ulong *in_x18;
    uint64_t *puVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar6 = *(arg2 + 0x10);
    while( true ) {
        if ((puVar6[1] & 1) == 0) {
            uVar5 = *puVar6;
            puVar4 = puVar6;
        }
        else {
            puVar4 = puVar6[1] - 1;
            uVar5 = *puVar4;
        }
        if ((uVar5 & 1) != 0) break;
        Hint_Prefetch(puVar4,2,0,1);
        do {
            uVar5 = *puVar4;
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(puVar4,0x10);
            if (bVar2) {
                *puVar4 = uVar5 | 1;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        if ((uVar5 & 1) != 0) break;
        __SetPageMovable(puVar6,*(*(arg1 + 0x860) + 0x30));
        unlock_page(puVar6);
        if (((*puVar6 >> 10 & 1) != 0) || (puVar6 = puVar6[4], puVar6 == NULL)) {
            return;
        }
    }
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x800,0x8002668);
    (*pcVar3)();
}


// ===== sym.zs_free @ 0x080026dc (size 484) =====

void sym.zs_free(int64_t arg1,int64_t arg2)

{
    uint32_t *puVar1;
    int64_t iVar2;
    int64_t *piVar3;
    uint32_t uVar4;
    char cVar5;
    bool bVar6;
    code *pcVar7;
    int iVar8;
    uint64_t uVar9;
    ulong *in_x18;
    uint32_t *arg2_00;
    int64_t iVar10;
    uint64_t uVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 != 0) {
        sym.pin_tag(arg2);
        uVar11 = *arg2;
        arg2_00 = *((uVar11 >> 0x16 & 0x3ffffffffc0) + (_kill_anon_super >> 0xc) * -0x40 + -0x1ffffffd8);
        if ((*arg2_00 & 0x3fc000) != 0x160000) {
    //WARNING: Does not return
            pcVar7 = SoftwareBreakpoint(0x800,0x800289c);
            (*pcVar7)();
        }
        puVar1 = arg2_00 + 10;
        _raw_read_lock(puVar1);
        if ((*arg2_00 & 0x3fc000) != 0x160000) {
    //WARNING: Does not return
            pcVar7 = SoftwareBreakpoint(0x800,0x80028a0);
            (*pcVar7)();
        }
        uVar9 = *arg2_00 >> 2 & 0x1ff;
        if (0xfe < uVar9) {
    //WARNING: Does not return
            pcVar7 = SoftwareBreakpoint(0x5512,0x8002888);
            (*pcVar7)();
        }
        iVar10 = *(arg1 + uVar9 * 8 + 8);
        _raw_spin_lock(iVar10);
        sym.obj_free(iVar10,uVar11);
        iVar8 = sym.fix_fullness_group(iVar10,arg2_00);
        if (iVar8 == 0) {
            uVar4 = *arg2_00;
            _raw_read_unlock(puVar1);
            if ((uVar4 & 0x3800) == 0) {
                iVar8 = sym.trylock_zspage(arg2_00);
                if (iVar8 == 0) {
                    queue_work_on(0x20,__raw_read_lock,arg1 + 0x868);
                }
                else {
                    puVar1 = arg2_00 + 6;
                    uVar11 = __list_del_entry_valid(puVar1);
                    if ((uVar11 & 1) != 0) {
                        iVar2 = *(arg2_00 + 6);
                        piVar3 = *(arg2_00 + 8);
                        *(iVar2 + 8) = piVar3;
                        *piVar3 = iVar2;
                    }
                    *(arg2_00 + 6) = puVar1;
                    *(arg2_00 + 8) = puVar1;
                    *(iVar10 + 0x58) = *(iVar10 + 0x58) + -1;
                    sym.__free_zspage(arg1,iVar10,arg2_00);
                }
            }
        }
        else {
            _raw_read_unlock(puVar1);
        }
        _raw_spin_unlock(iVar10);
        Hint_Prefetch(arg2,2,0,1);
        do {
            cVar5 = '\x01';
            bVar6 = ExclusiveMonitorPass(arg2,0x10);
            if (bVar6) {
                *arg2 = *arg2 & 0xfffffffffffffffe;
                cVar5 = ExclusiveMonitorsStatus();
            }
        } while (cVar5 != '\0');
        iVar2 = sp_el0;
        iVar10 = *(iVar2 + 0x10) + -1;
        *(iVar2 + 0x10) = iVar10;
        if ((iVar10 == 0) || (*(iVar2 + 0x10) == 0)) {
            preempt_schedule();
        }
        kmem_cache_free(*(arg1 + 0x800),arg2);
    }
    return;
}


// ===== sym.obj_free @ 0x080028c0 (size 292) =====

void sym.obj_free(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    code *pcVar3;
    int64_t iVar4;
    ulong *in_x18;
    uint32_t *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = (arg2 >> 0x16 & 0x3ffffffffc0) + (_kill_anon_super >> 0xc) * -0x40;
    puVar5 = *(iVar4 + -0x1ffffffd8);
    if ((*puVar5 & 0x3fc000) == 0x160000) {
        iVar2 = sp_el0;
        iVar1 = *(arg1 + 0x48);
        *(iVar2 + 0x10) = *(iVar2 + 0x10) + 1;
        *(iVar2 + 0xad0) = *(iVar2 + 0xad0) + 1;
        *(((iVar4 - 0x200000000U & 0x3ffffffffffc0) << 6 | 0xff00000000000000) +
         (iVar1 * (arg2 >> 1 & 0x7fffffff) & 0xfff)) = puVar5[2] << 1;
        *(iVar2 + 0xad0) = *(iVar2 + 0xad0) + -1;
        iVar4 = *(iVar2 + 0x10) + -1;
        *(iVar2 + 0x10) = iVar4;
        if ((iVar4 == 0) || (*(iVar2 + 0x10) == 0)) {
            preempt_schedule();
        }
        puVar5[1] = puVar5[1] - 1;
        puVar5[2] = arg2 >> 1 & 0x7ffffff;
        *(arg1 + 0x80) = *(arg1 + 0x80) + -1;
        return;
    }
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x800,0x80029e4);
    (*pcVar3)();
}


// ===== sym.zs_compact @ 0x080029f0 (size 756) =====

void sym.zs_compact(int64_t arg1)

{
    int64_t *piVar1;
    bool bVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int64_t *piVar5;
    char cVar6;
    uint64_t uVar7;
    int iVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    int64_t *extraout_x8;
    int64_t *piVar12;
    ulong *in_x18;
    int64_t iVar13;
    int64_t *arg2;
    int64_t *piVar14;
    int64_t iVar15;
    int64_t *piVar16;
    int64_t iVar17;
    ulong unaff_x30;
    int64_t iStack_80;
    int64_t iStack_78;
    uint uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iVar9 = 0;
    iStack_68 = *(iVar13 + 0x5e0);
    uVar11 = 0xfe;
    do {
        iVar13 = *(arg1 + uVar11 * 8 + 8);
        if ((iVar13 != 0) && (uVar11 == *(iVar13 + 0x54))) {
            iStack_78 = 0;
            uStack_70 = 0;
            _raw_spin_lock(iVar13);
            iVar17 = 0;
            piVar12 = iVar13 + 0x18;
            piVar1 = iVar13 + 0x28;
            while( true ) {
                piVar14 = *piVar12;
                arg2 = piVar14 + -3;
                if (piVar12 == piVar14 || arg2 == NULL) {
                    piVar14 = *piVar1;
                    if ((piVar1 == piVar14) || (arg2 = piVar14 + -3, arg2 == NULL)) goto code_r0x08002a50;
                    iVar15 = 2;
                }
                else {
                    iVar15 = 1;
                }
                uVar10 = __list_del_entry_valid(piVar14);
                if ((uVar10 & 1) != 0) {
                    iVar3 = *piVar14;
                    piVar16 = piVar14[1];
                    *(iVar3 + 8) = piVar16;
                    *piVar16 = iVar3;
                }
                iVar15 = iVar13 + iVar15 * 8;
                *piVar14 = piVar14;
                piVar14[1] = piVar14;
                uVar10 = *(iVar13 + 0x78);
                uVar4 = *(iVar13 + 0x80);
                uVar7 = uVar10 - uVar4;
                *(iVar15 + 0x58) = *(iVar15 + 0x58) + -1;
                if (uVar10 < uVar4 || uVar7 == 0) break;
                uVar10 = 0;
                if (*(iVar13 + 0x4c) != 0) {
                    uVar10 = uVar7 / *(iVar13 + 0x4c);
                }
                if (uVar10 * *(iVar13 + 0x54) == 0) break;
                iStack_80 = arg2[2];
                uStack_70 = 0;
                while( true ) {
                    piVar16 = *piVar1;
                    piVar14 = piVar16 + -3;
                    if (piVar1 == piVar16 || piVar14 == NULL) {
                        piVar16 = *piVar12;
                        if ((piVar12 == piVar16) || (piVar14 = piVar16 + -3, piVar14 == NULL)) goto code_r0x08002a44;
                        iVar15 = 1;
                    }
                    else {
                        iVar15 = 2;
                    }
                    uVar10 = __list_del_entry_valid(piVar16);
                    if ((uVar10 & 1) != 0) {
                        iVar3 = *piVar16;
                        piVar5 = piVar16[1];
                        *(iVar3 + 8) = piVar5;
                        *piVar5 = iVar3;
                    }
                    iVar15 = iVar13 + iVar15 * 8;
                    *piVar16 = piVar16;
                    piVar16[1] = piVar16;
                    *(iVar15 + 0x58) = *(iVar15 + 0x58) + -1;
                    iStack_78 = piVar14[2];
                    iVar8 = sym.migrate_zspage(iVar13,&iStack_80);
                    if (iVar8 == 0) break;
                    sym.putback_zspage(iVar13,piVar14);
                }
                sym.putback_zspage(iVar13,piVar14);
                iVar8 = sym.putback_zspage(iVar13,arg2);
                if (iVar8 == 0) {
                    iVar8 = sym.trylock_zspage(arg2);
                    if (iVar8 == 0) {
                        queue_work_on(0x20,__raw_read_lock,arg1 + 0x868);
                    }
                    else {
                        piVar14 = arg2 + 3;
                        uVar10 = __list_del_entry_valid(piVar14);
                        if ((uVar10 & 1) != 0) {
                            iVar15 = arg2[3];
                            piVar16 = arg2[4];
                            *(iVar15 + 8) = piVar16;
                            *piVar16 = iVar15;
                        }
                        arg2[3] = piVar14;
                        arg2[4] = piVar14;
                        *(iVar13 + 0x58) = *(iVar13 + 0x58) + -1;
                        sym.__free_zspage(arg1,iVar13,arg2);
                    }
                    iVar17 = iVar17 + *(iVar13 + 0x50);
                }
                _raw_spin_unlock(iVar13);
                _raw_spin_lock(iVar13);
            }
code_r0x08002a44:
            sym.putback_zspage(iVar13,arg2);
code_r0x08002a50:
            _raw_spin_unlock(iVar13);
            iVar9 = iVar17 + iVar9;
        }
        bVar2 = uVar11 == 0;
        uVar11 = uVar11 - 1;
        if (bVar2) {
            piVar12 = arg1 + 0x818;
            while( true ) {
                Hint_Prefetch(piVar12,2,0,1);
                do {
                    cVar6 = '\x01';
                    bVar2 = ExclusiveMonitorPass(piVar12,0x10);
                    if (bVar2) {
                        *piVar12 = *piVar12 + iVar9;
                        cVar6 = ExclusiveMonitorsStatus();
                    }
                } while (cVar6 != '\0');
                iVar9 = sp_el0;
                if (*(iVar9 + 0x5e0) == iStack_68) break;
                iVar9 = __stack_chk_fail();
                piVar12 = extraout_x8;
            }
            return;
        }
    } while( true );
}


// ===== sym.zs_pool_stats @ 0x08002ce4 (size 20) =====

void sym.zs_pool_stats(int64_t arg1,int64_t arg2)

{
    *arg2 = *(arg1 + 0x818);
    return;
}


// ===== sym.zs_create_pool @ 0x08002cf8 (size 776) =====

int64_t * sym.zs_create_pool(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    int64_t *arg1_00;
    int64_t iVar8;
    uint *puVar9;
    uint64_t uVar10;
    uint32_t uVar11;
    int iVar12;
    ulong *in_x18;
    int64_t iVar13;
    int64_t iVar14;
    int iVar15;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = kmem_cache_alloc_trace(_preempt_schedule,0xdc0,0x8c0);
    if (arg1_00 != NULL) {
        arg1_00[0x10d] = 0xfffffffe0;
        arg1_00[0x10e] = arg1_00 + 0x10e;
        arg1_00[0x10f] = arg1_00 + 0x10e;
        arg1_00[0x110] = sym.async_free_zspage.c08505102395ade40ce2f57a59adb2a6.cfi_jt;
        iVar8 = kstrdup(arg1,0xcc0);
        *arg1_00 = iVar8;
        if (iVar8 != 0) {
            __init_waitqueue_head(arg1_00 + 0x113,"&pool->migration_wait",obj.zs_create_pool.__key);
            iVar8 = kmem_cache_create("zs_handle",8,0,0,0);
            arg1_00[0x100] = iVar8;
            if (iVar8 != 0) {
                iVar8 = kmem_cache_create("zspage",0x30,0,0,0);
                arg1_00[0x101] = iVar8;
                if (iVar8 == 0) {
                    kmem_cache_destroy(arg1_00[0x100]);
                    arg1_00[0x100] = 0;
                }
                else {
                    puVar9 = NULL;
                    iVar13 = 0xff9;
                    iVar8 = _segment.ehdr;
                    iVar14 = 0xff;
                    do {
                        iVar15 = iVar14 + -1;
                        uVar1 = iVar15 * 0x10 + 0x20;
                        uVar2 = uVar1 & 0xfff0;
                        uVar6 = 0;
                        if (uVar2 != 0) {
                            uVar6 = 0x3000 / uVar2;
                        }
                        uVar11 = 0;
                        if (uVar2 != 0) {
                            uVar11 = 0x1000 / uVar2;
                        }
                        uVar6 = (uVar6 * uVar1 & 0xfff0) * 100;
                        uVar7 = 0;
                        if (uVar2 != 0) {
                            uVar7 = 0x2000 / uVar2;
                        }
                        uVar5 = uVar11 * uVar2 * 100;
                        uVar11 = 0;
                        if (0xfff < uVar5) {
                            uVar11 = uVar5 >> 0xc;
                        }
                        uVar5 = 0;
                        if (uVar2 != 0) {
                            uVar5 = 0x4000 / uVar2;
                        }
                        uVar4 = (uVar7 * uVar1 & 0xfff0) * 100 >> 0xd;
                        uVar7 = uVar4;
                        if (uVar4 <= uVar11) {
                            uVar7 = uVar11;
                        }
                        iVar12 = 1;
                        if (uVar11 < uVar4) {
                            iVar12 = 2;
                        }
                        uVar11 = uVar6 / 0x3000;
                        uVar6 = uVar6 / 0x3000;
                        if (uVar11 <= uVar7) {
                            uVar6 = uVar7;
                        }
                        iVar3 = 3;
                        if (uVar11 <= uVar7) {
                            iVar3 = iVar12;
                        }
                        iVar12 = 4;
                        if ((uVar5 * uVar1 & 0xfff0) * 100 >> 0xe <= uVar6) {
                            iVar12 = iVar3;
                        }
                        uVar1 = 0;
                        if (uVar2 != 0) {
                            uVar1 = (iVar12 << 0xc) / uVar2;
                        }
                        if ((iVar12 != 1) && (uVar1 != 1 && iVar8 == 0)) {
                            iVar8 = iVar13;
                            _segment.ehdr = iVar13;
                        }
                        if (((puVar9 == NULL) || (puVar9[0x14] != iVar12)) || (puVar9[0x13] != uVar1)) {
                            puVar9 = kmem_cache_alloc_trace(_preempt_schedule,0xdc0,0x88);
                            if (puVar9 == NULL) goto code_r0x08002f80;
                            puVar9[0x14] = iVar12;
                            puVar9[0x15] = iVar15;
                            *puVar9 = 0;
                            puVar9[0x12] = iVar13 + 7;
                            puVar9[0x13] = uVar1;
                            iVar8 = _segment.ehdr;
                            arg1_00[iVar14] = puVar9;
                            *(puVar9 + 2) = puVar9 + 2;
                            *(puVar9 + 4) = puVar9 + 2;
                            *(puVar9 + 6) = puVar9 + 6;
                            *(puVar9 + 8) = puVar9 + 6;
                            *(puVar9 + 10) = puVar9 + 10;
                            *(puVar9 + 0xc) = puVar9 + 10;
                            *(puVar9 + 0xe) = puVar9 + 0xe;
                            *(puVar9 + 0x10) = puVar9 + 0xe;
                        }
                        else {
                            arg1_00[iVar14] = puVar9;
                        }
                        iVar13 = iVar13 + -0x10;
                        iVar14 = iVar14 + -1;
                    } while (iVar13 != 9);
                    uVar10 = alloc_anon_inode(*(_segment.ehdr + 8));
                    arg1_00[0x10c] = uVar10;
                    if (uVar10 < 0xfffffffffffff001) {
                        *(*(uVar10 + 0x30) + 0xe8) = arg1_00;
                        *(*(arg1_00[0x10c] + 0x30) + 0xc0) = obj.zsmalloc_aops;
                        arg1_00[0x105] = sym.zs_shrinker_scan.c08505102395ade40ce2f57a59adb2a6.cfi_jt;
                        arg1_00[0x104] = sym.zs_shrinker_count.c08505102395ade40ce2f57a59adb2a6.cfi_jt;
                        arg1_00[0x106] = 0;
                        *(arg1_00 + 0x107) = 2;
                        register_shrinker(arg1_00 + 0x104);
                        return arg1_00;
                    }
                    arg1_00[0x10c] = 0;
                }
            }
        }
code_r0x08002f80:
        sym.zs_destroy_pool(arg1_00);
    }
    return NULL;
}


// ===== sym.zs_destroy_pool @ 0x08003000 (size 512) =====

void sym.zs_destroy_pool(int64_t arg1)

{
    int64_t iVar1;
    uint64_t *puVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar5;
    ulong *puVar6;
    int iVar7;
    uint64_t uVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    unregister_shrinker(arg1 + 0x820);
    *(arg1 + 0x8b8) = 1;
    DataMemoryBarrier(2,3);
    if (*(arg1 + 0x8b0) != 0) {
        uStack_58 = 0;
        uStack_50 = 0;
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_70 = 0;
        init_wait_entry(&stack0xffffffffffffff90,0);
        iVar5 = arg1 + 0x898;
        prepare_to_wait_event(iVar5,&stack0xffffffffffffff90,2);
        iVar1 = *(arg1 + 0x8b0);
        while (iVar1 != 0) {
            schedule();
            prepare_to_wait_event(iVar5,&stack0xffffffffffffff90,2);
            iVar1 = *(arg1 + 0x8b0);
        }
        finish_wait(iVar5,&stack0xffffffffffffff90);
    }
    flush_work(arg1 + 0x868);
    iput(*(arg1 + 0x860));
    uVar8 = 0;
    do {
        iVar5 = *(arg1 + 8 + uVar8 * 8);
        if ((iVar5 != 0) && (uVar8 == *(iVar5 + 0x54))) {
            if (iVar5 + 8 != *(iVar5 + 8)) {
                _printk(0x8000dca,*(iVar5 + 0x48),0);
            }
            if (iVar5 + 0x18 != *(iVar5 + 0x18)) {
                _printk(0x8000dca,*(iVar5 + 0x48),1);
            }
            if (iVar5 + 0x28 != *(iVar5 + 0x28)) {
                _printk(0x8000dca,*(iVar5 + 0x48),2);
            }
            if (iVar5 + 0x38 != *(iVar5 + 0x38)) {
                _printk(0x8000dca,*(iVar5 + 0x48),3);
            }
            kfree(iVar5);
        }
        uVar8 = uVar8 + 1;
    } while (uVar8 != 0xff);
    kmem_cache_destroy(*(arg1 + 0x800));
    kmem_cache_destroy(*(arg1 + 0x808));
    kfree(*arg1);
    kfree(arg1);
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return;
    }
    auVar9 = __stack_chk_fail();
    *extraout_x18 = 0x80031e4;
    puVar6 = *(auVar9._8_8_ + 0x10);
    if (puVar6 != NULL) {
        uVar8 = 0;
        iVar7 = 1;
        iVar5 = sp_el0;
code_r0x08003238:
        do {
            *(puVar6 + 6) = uVar8;
            *(iVar5 + 0x10) = *(iVar5 + 0x10) + 1;
            *(iVar5 + 0xad0) = *(iVar5 + 0xad0) + 1;
            puVar2 = ((puVar6 & 0x3ffffffffffc0) << 6 | 0xff00000000000000) + (uVar8 & 0xfffffffffffffff8);
            uVar8 = uVar8 + *(auVar9._0_8_ + 0x48);
            if (uVar8 < 0x1000) {
                uVar3 = iVar7 << 1;
                do {
                    uVar4 = uVar3;
                    iVar7 = iVar7 + 1;
                    uVar3 = uVar3 + 2;
                    *puVar2 = uVar4;
                    uVar4 = *(auVar9._0_8_ + 0x48);
                    uVar8 = uVar8 + uVar4;
                    puVar2 = puVar2 + (uVar4 & 0xfffffffffffffff8);
                } while (uVar8 < 0x1000);
            }
            if ((*puVar6 >> 10 & 1) == 0) {
                puVar6 = puVar6[4];
                if (puVar6 == NULL) goto code_r0x080032e8;
                uVar4 = iVar7 << 1;
                iVar7 = iVar7 + 1;
            }
            else {
                puVar6 = NULL;
code_r0x080032e8:
                uVar4 = 0xfffffffffffffffe;
            }
            *puVar2 = uVar4;
            *(iVar5 + 0xad0) = *(iVar5 + 0xad0) + -1;
            iVar1 = *(iVar5 + 0x10) + -1;
            *(iVar5 + 0x10) = iVar1;
            if ((iVar1 != 0) && (*(iVar5 + 0x10) != 0)) {
                uVar8 = uVar8 & 0xfff;
                if (puVar6 == NULL) break;
                goto code_r0x08003238;
            }
            preempt_schedule();
            uVar8 = uVar8 & 0xfff;
        } while (puVar6 != NULL);
    }
    *(auVar9._8_8_ + 8) = 0;
    return;
}


// ===== sym.init_zspage @ 0x08003200 (size 336) =====

void sym.init_zspage(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t *puVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong *puVar7;
    int iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar7 = *(arg2 + 0x10);
    if (puVar7 != NULL) {
        uVar5 = 0;
        iVar8 = 1;
        iVar2 = sp_el0;
code_r0x08003238:
        do {
            *(puVar7 + 6) = uVar5;
            *(iVar2 + 0x10) = *(iVar2 + 0x10) + 1;
            *(iVar2 + 0xad0) = *(iVar2 + 0xad0) + 1;
            puVar3 = ((puVar7 & 0x3ffffffffffc0) << 6 | 0xff00000000000000) + (uVar5 & 0xfffffffffffffff8);
            uVar5 = uVar5 + *(arg1 + 0x48);
            if (uVar5 < 0x1000) {
                uVar4 = iVar8 << 1;
                do {
                    uVar6 = uVar4;
                    iVar8 = iVar8 + 1;
                    uVar4 = uVar4 + 2;
                    *puVar3 = uVar6;
                    uVar5 = uVar5 + *(arg1 + 0x48);
                    puVar3 = puVar3 + (*(arg1 + 0x48) & 0xfffffffffffffff8U);
                } while (uVar5 < 0x1000);
            }
            if ((*puVar7 >> 10 & 1) == 0) {
                puVar7 = puVar7[4];
                if (puVar7 == NULL) goto code_r0x080032e8;
                uVar6 = iVar8 << 1;
                iVar8 = iVar8 + 1;
            }
            else {
                puVar7 = NULL;
code_r0x080032e8:
                uVar6 = 0xfffffffffffffffe;
            }
            *puVar3 = uVar6;
            *(iVar2 + 0xad0) = *(iVar2 + 0xad0) + -1;
            iVar1 = *(iVar2 + 0x10) + -1;
            *(iVar2 + 0x10) = iVar1;
            if ((iVar1 == 0) || (*(iVar2 + 0x10) == 0)) {
                preempt_schedule();
                uVar5 = uVar5 & 0xfff;
                if (puVar7 == NULL) break;
                goto code_r0x08003238;
            }
            uVar5 = uVar5 & 0xfff;
        } while (puVar7 != NULL);
    }
    *(arg2 + 8) = 0;
    return;
}


// ===== sym.trylock_zspage @ 0x0800335c (size 232) =====

ulong sym.trylock_zspage(int64_t arg1)

{
    char cVar1;
    bool bVar2;
    uint64_t uVar3;
    ulong *in_x18;
    uint64_t *puVar4;
    uint64_t *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar5 = *(arg1 + 0x10);
    while( true ) {
        if (puVar5 == NULL) {
            return 1;
        }
        if ((puVar5[1] & 1) == 0) {
            uVar3 = *puVar5;
            puVar4 = puVar5;
        }
        else {
            puVar4 = puVar5[1] - 1;
            uVar3 = *puVar4;
        }
        if ((uVar3 & 1) != 0) break;
        Hint_Prefetch(puVar4,2,0,1);
        do {
            uVar3 = *puVar4;
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(puVar4,0x10);
            if (bVar2) {
                *puVar4 = uVar3 | 1;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        if ((uVar3 & 1) != 0) break;
        if ((*puVar5 >> 10 & 1) != 0) {
            return 1;
        }
        puVar5 = puVar5[4];
    }
    puVar4 = *(arg1 + 0x10);
    while (puVar4 != puVar5) {
        unlock_page(puVar4);
        if ((*puVar4 >> 10 & 1) == 0) {
            puVar4 = puVar4[4];
        }
        else {
            puVar4 = NULL;
        }
    }
    return 0;
}


// ===== sym.__free_zspage @ 0x08003444 (size 512) =====

void sym.__free_zspage(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int *piVar1;
    int64_t *piVar2;
    int iVar3;
    char cVar4;
    bool bVar5;
    code *pcVar6;
    ulong *in_x18;
    uint64_t *puVar7;
    uint64_t *puVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*arg3 & 0x3fc000) != 0x160000) {
    //WARNING: Does not return
        pcVar6 = SoftwareBreakpoint(0x800,0x80035d4);
        (*pcVar6)();
    }
    if (*arg2 != 0) {
        puVar7 = *(arg3 + 0x10);
        do {
            if ((*puVar7 >> 10 & 1) == 0) {
                puVar8 = puVar7[4];
            }
            else {
                puVar8 = NULL;
            }
            __ClearPageMovable(puVar7);
            Hint_Prefetch(puVar7,2,0,1);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar7,0x10);
                if (bVar5) {
                    *puVar7 = *puVar7 & 0xffffffffffffdfff;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            puVar7[5] = 0;
            *(puVar7 + 6) = 0xffffffff;
            Hint_Prefetch(puVar7,2,0,1);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar7,0x10);
                if (bVar5) {
                    *puVar7 = *puVar7 & 0xfffffffffffffbff;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            puVar7[4] = 0;
            unlock_page(puVar7);
            dec_zone_page_state(puVar7,9);
            if ((puVar7[1] & 1) != 0) {
                puVar7 = puVar7[1] - 1;
            }
            piVar1 = puVar7 + 0x34;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                iVar3 = *piVar1;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                    *piVar1 = iVar3 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
            if (iVar3 + -1 == 0) {
                __put_page(puVar7);
            }
            puVar7 = puVar8;
        } while (puVar8 != NULL);
        kmem_cache_free(*(arg1 + 0x808),arg3);
        iVar3 = *(arg2 + 0x54);
        piVar2 = arg1 + 0x810;
        *(arg2 + 0x78) = *(arg2 + 0x78) - *(arg2 + 0x4c);
        Hint_Prefetch(piVar2,2,0,1);
        do {
            cVar4 = '\x01';
            bVar5 = ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
                *piVar2 = *piVar2 - iVar3;
                cVar4 = ExclusiveMonitorsStatus();
            }
        } while (cVar4 != '\0');
        return;
    }
    //WARNING: Does not return
    pcVar6 = SoftwareBreakpoint(0x800,0x80035d8);
    (*pcVar6)();
}


// ===== sym.migrate_zspage @ 0x08003644 (size 532) =====

void sym.migrate_zspage(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    char cVar2;
    bool bVar3;
    int64_t iVar4;
    int64_t iVar5;
    code *pcVar6;
    uint64_t *arg3;
    uint64_t arg2_00;
    ulong uVar7;
    uint32_t *arg2_01;
    ulong *in_x18;
    ulong *arg2_02;
    uint64_t arg3_00;
    ulong unaff_x30;
    int iStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    iVar5 = sp_el0;
    arg2_02 = *arg2;
    iVar1 = *(arg2 + 8);
    iStack_6c = *(arg2 + 0x10);
code_r0x08003694:
    while (arg3 = sym.find_alloced_obj(arg1,arg2_02,&iStack_6c), arg3 != NULL) {
        arg2_01 = *(iVar1 + 0x28);
        if ((*arg2_01 & 0x3fc000) != 0x160000) goto code_r0x08003804;
        if (arg2_01[1] == *(arg1 + 0x4c)) {
            Hint_Prefetch(arg3,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(arg3,0x10);
                if (bVar3) {
                    *arg3 = *arg3 & 0xfffffffffffffffe;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            iVar5 = sp_el0;
            iVar1 = *(iVar5 + 0x10) + -1;
            *(iVar5 + 0x10) = iVar1;
            if ((iVar1 == 0) || (*(iVar5 + 0x10) == 0)) {
                preempt_schedule();
            }
            uVar7 = 0xfffffff4;
            goto code_r0x080037a4;
        }
        arg3_00 = *arg3;
        arg2_00 = sym.obj_malloc(arg1,arg2_01,arg3);
        sym.zs_object_copy(arg1,arg2_00,arg3_00);
        iStack_6c = iStack_6c + 1;
        *arg3 = arg2_00 | 1;
        Hint_Prefetch(arg3,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(arg3,0x10);
            if (bVar3) {
                *arg3 = *arg3 & 0xfffffffffffffffe;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        iVar4 = *(iVar5 + 0x10) + -1;
        *(iVar5 + 0x10) = iVar4;
        if ((iVar4 == 0) || (*(iVar5 + 0x10) == 0)) {
            preempt_schedule();
        }
        sym.obj_free(arg1,arg3_00);
    }
    if ((*arg2_02 >> 10 & 1) == 0) {
        arg2_02 = arg2_02[4];
        if (arg2_02 != NULL) goto code_r0x08003754;
    }
    else {
        arg2_02 = NULL;
    }
    uVar7 = 0;
code_r0x080037a4:
    *arg2 = arg2_02;
    *(arg2 + 0x10) = iStack_6c;
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return;
    }
    __stack_chk_fail(uVar7);
code_r0x08003804:
    //WARNING: Does not return
    pcVar6 = SoftwareBreakpoint(0x800,0x8003808);
    (*pcVar6)();
code_r0x08003754:
    iStack_6c = 0;
    goto code_r0x08003694;
}


// ===== sym.putback_zspage @ 0x08003858 (size 304) =====

uint32_t sym.putback_zspage(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t *piVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    ulong *in_x18;
    int64_t *piVar8;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg2 + 4);
    if (iVar4 == 0) {
        uVar7 = 0;
    }
    else if (iVar4 == *(arg1 + 0x4c)) {
        uVar7 = 3;
    }
    else {
        iVar5 = *(arg1 + 0x4c) * 3;
        iVar3 = iVar5 + 3;
        if (-1 < iVar5) {
            iVar3 = iVar5;
        }
        uVar7 = 1;
        if (iVar3 >> 2 < iVar4) {
            uVar7 = 2;
        }
    }
    iVar1 = arg1 + uVar7 * 8;
    piVar2 = arg1 + uVar7 * 0x10 + 8;
    *(iVar1 + 0x58) = *(iVar1 + 0x58) + 1;
    piVar8 = *piVar2;
    if ((piVar2 == piVar8 || piVar8 == 0x18) || (*(piVar8 + -0x14) <= *(arg2 + 4))) {
        iVar9 = *piVar2;
        iVar1 = arg2 + 0x18;
        uVar6 = __list_add_valid(iVar1,piVar2,iVar9);
        if ((uVar6 & 1) != 0) {
            *(iVar9 + 8) = iVar1;
            *(arg2 + 0x18) = iVar9;
            *(arg2 + 0x20) = piVar2;
            *piVar2 = iVar1;
        }
    }
    else {
        iVar9 = *piVar8;
        iVar1 = arg2 + 0x18;
        uVar6 = __list_add_valid(iVar1,piVar8,iVar9);
        if ((uVar6 & 1) != 0) {
            *(iVar9 + 8) = iVar1;
            *(arg2 + 0x18) = iVar9;
            *(arg2 + 0x20) = piVar8;
            *piVar8 = iVar1;
        }
    }
    *arg2 = (*(arg1 + 0x54) & 0x1ff) << 2 | uVar7 | *arg2 & 0xfffff800;
    return uVar7;
}


// ===== sym.find_alloced_obj @ 0x0800398c (size 464) =====

uint64_t * sym.find_alloced_obj(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    char cVar2;
    bool bVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    ulong *in_x18;
    uint64_t *puVar7;
    int iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iVar8 = *arg3;
    *(iVar5 + 0x10) = *(iVar5 + 0x10) + 1;
    *(iVar5 + 0xad0) = *(iVar5 + 0xad0) + 1;
    uVar1 = *(arg2 + 0x30) + *(arg1 + 0x48) * iVar8;
    if (uVar1 < 0x1000) {
        do {
            puVar7 = ((arg2 & 0x3ffffffffffc0U) << 6 | 0xff00000000000000) + uVar1;
            if ((*arg2 & 0x400) != 0) {
                puVar7 = arg2 + 0x20;
            }
            if ((*puVar7 & 1) != 0) {
                puVar7 = *puVar7 & 0xfffffffffffffffe;
                *(iVar5 + 0x10) = *(iVar5 + 0x10) + 1;
                if ((*puVar7 & 1) == 0) {
                    Hint_Prefetch(puVar7,2,0,1);
                    do {
                        uVar6 = *puVar7;
                        cVar2 = '\x01';
                        bVar3 = ExclusiveMonitorPass(puVar7,0x10);
                        if (bVar3) {
                            *puVar7 = uVar6 | 1;
                            cVar2 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar2 != '\0');
                    if ((uVar6 & 1) == 0) break;
                }
                iVar4 = *(iVar5 + 0x10) + -1;
                *(iVar5 + 0x10) = iVar4;
                if ((iVar4 == 0) || (*(iVar5 + 0x10) == 0)) {
                    preempt_schedule();
                }
            }
            puVar7 = NULL;
            iVar8 = iVar8 + 1;
            uVar1 = *(arg1 + 0x48) + uVar1;
        } while (uVar1 < 0x1000);
    }
    else {
        puVar7 = NULL;
    }
    *(iVar5 + 0xad0) = *(iVar5 + 0xad0) + -1;
    iVar4 = *(iVar5 + 0x10) + -1;
    *(iVar5 + 0x10) = iVar4;
    if ((iVar4 == 0) || (*(iVar5 + 0x10) == 0)) {
        preempt_schedule();
    }
    *arg3 = iVar8;
    return puVar7;
}


// ===== sym.zs_object_copy @ 0x08003b64 (size 1132) =====

void sym.zs_object_copy(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    int iVar10;
    ulong *in_x18;
    uint64_t uVar11;
    ulong *puVar12;
    ulong unaff_x30;
    ulong *puStack_78;
    int iStack_6c;
    uint64_t uStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iVar10 = *(arg1 + 0x48);
    iVar8 = _kill_anon_super >> 0xc;
    *(iVar6 + 0x10) = *(iVar6 + 0x10) + 1;
    iVar8 = iVar8 * -0x40 + -0x200000000;
    puStack_78 = iVar8 + (arg3 >> 0x16 & 0x3ffffffffc0);
    puVar12 = iVar8 + (arg2 >> 0x16 & 0x3ffffffffc0);
    uVar1 = iVar10 * (arg3 >> 1 & 0x7fffffff) & 0xfff;
    uVar11 = uVar1;
    uVar2 = iVar10 * (arg2 >> 1 & 0x7fffffff) & 0xfff;
    uStack_68 = uVar2;
    iVar4 = 0x1000 - uVar1;
    if (uVar11 + iVar10 < 0x1001) {
        iVar4 = iVar10;
    }
    *(iVar6 + 0xad0) = *(iVar6 + 0xad0) + 1;
    iStack_6c = 0x1000 - uVar2;
    if (uStack_68 + iVar10 < 0x1001) {
        iStack_6c = iVar10;
    }
    *(iVar6 + 0x10) = *(iVar6 + 0x10) + 1;
    *(iVar6 + 0xad0) = *(iVar6 + 0xad0) + 1;
    uVar9 = (puStack_78 & 0x3ffffffffffc0) << 6 | 0xff00000000000000;
    iVar10 = iVar4;
    if (iStack_6c <= iVar4) {
        iVar10 = iStack_6c;
    }
    uVar7 = (puVar12 & 0x3ffffffffffc0) << 6 | 0xff00000000000000;
    iVar8 = iVar10;
    memcpy(uVar7 + uStack_68,uVar9 + uVar11,iVar8);
    iVar3 = iVar10;
    if (iVar10 != *(arg1 + 0x48)) {
        do {
            uVar11 = uVar11 + iVar8;
            if (uVar11 < 0x1000) {
                iVar4 = iVar4 - iVar3;
            }
            else {
                *(iVar6 + 0xad0) = *(iVar6 + 0xad0) + -1;
                iVar5 = *(iVar6 + 0x10) + -1;
                *(iVar6 + 0x10) = iVar5;
                if ((iVar5 == 0) || (*(iVar6 + 0x10) == 0)) {
                    preempt_schedule();
                }
                *(iVar6 + 0xad0) = *(iVar6 + 0xad0) + -1;
                iVar5 = *(iVar6 + 0x10) + -1;
                *(iVar6 + 0x10) = iVar5;
                if ((iVar5 == 0) || (*(iVar6 + 0x10) == 0)) {
                    preempt_schedule();
                }
                if ((*puStack_78 >> 10 & 1) == 0) {
                    puStack_78 = puStack_78[4];
                }
                else {
                    puStack_78 = NULL;
                }
                *(iVar6 + 0x10) = *(iVar6 + 0x10) + 1;
                *(iVar6 + 0xad0) = *(iVar6 + 0xad0) + 1;
                *(iVar6 + 0x10) = *(iVar6 + 0x10) + 1;
                *(iVar6 + 0xad0) = *(iVar6 + 0xad0) + 1;
                uVar9 = (puStack_78 & 0x3ffffffffffc0) << 6 | 0xff00000000000000;
                uVar11 = 0;
                uVar7 = (puVar12 & 0x3ffffffffffc0) << 6 | 0xff00000000000000;
                iVar4 = *(arg1 + 0x48) - iVar10;
            }
            uStack_68 = uStack_68 + iVar8;
            if (uStack_68 < 0x1000) {
                iStack_6c = iStack_6c - iVar3;
            }
            else {
                *(iVar6 + 0xad0) = *(iVar6 + 0xad0) + -1;
                iVar8 = *(iVar6 + 0x10) + -1;
                *(iVar6 + 0x10) = iVar8;
                if ((iVar8 == 0) || (*(iVar6 + 0x10) == 0)) {
                    preempt_schedule();
                    if ((*puVar12 >> 10 & 1) == 0) goto code_r0x08003f04;
code_r0x08003fb0:
                    puVar12 = NULL;
                }
                else {
                    if ((*puVar12 >> 10 & 1) != 0) goto code_r0x08003fb0;
code_r0x08003f04:
                    puVar12 = puVar12[4];
                }
                *(iVar6 + 0x10) = *(iVar6 + 0x10) + 1;
                *(iVar6 + 0xad0) = *(iVar6 + 0xad0) + 1;
                uStack_68 = 0;
                uVar7 = (puVar12 & 0x3ffffffffffc0) << 6 | 0xff00000000000000;
                iStack_6c = *(arg1 + 0x48) - iVar10;
            }
            iVar3 = iVar4;
            if (iStack_6c <= iVar4) {
                iVar3 = iStack_6c;
            }
            iVar8 = iVar3;
            memcpy(uVar7 + uStack_68,uVar9 + uVar11,iVar8);
            iVar10 = iVar3 + iVar10;
        } while (iVar10 != *(arg1 + 0x48));
    }
    *(iVar6 + 0xad0) = *(iVar6 + 0xad0) + -1;
    iVar8 = *(iVar6 + 0x10) + -1;
    *(iVar6 + 0x10) = iVar8;
    if ((iVar8 == 0) || (*(iVar6 + 0x10) == 0)) {
        preempt_schedule();
    }
    *(iVar6 + 0xad0) = *(iVar6 + 0xad0) + -1;
    iVar8 = *(iVar6 + 0x10) + -1;
    *(iVar6 + 0x10) = iVar8;
    if ((iVar8 == 0) || (*(iVar6 + 0x10) == 0)) {
        preempt_schedule();
    }
    return;
}


// ===== sym.async_free_zspage @ 0x0800400c (size 388) =====

void sym.async_free_zspage(int64_t arg1)

{
    int64_t *piVar1;
    int64_t ***pppiVar2;
    int64_t ***pppiVar3;
    code *pcVar4;
    ulong *in_x18;
    int64_t iVar5;
    uint64_t uVar6;
    int64_t ****ppppiVar7;
    int64_t ****ppppiVar8;
    ulong unaff_x30;
    int64_t ***pppiStack_68;
    int64_t ***pppiStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    uVar6 = 0;
    iStack_58 = *(iVar5 + 0x5e0);
    pppiStack_68 = &pppiStack_68;
    pppiStack_60 = &pppiStack_68;
    do {
        iVar5 = *(arg1 + -0x860 + uVar6 * 8);
        if (uVar6 == *(iVar5 + 0x54)) {
            _raw_spin_lock(iVar5);
            piVar1 = iVar5 + 8;
            if (piVar1 != *piVar1) {
                ppppiVar7 = *(iVar5 + 8);
                pppiVar2 = *(iVar5 + 0x10);
                ppppiVar7[1] = &pppiStack_68;
                *pppiVar2 = pppiStack_68;
                pppiStack_68[1] = pppiVar2;
                *(iVar5 + 8) = piVar1;
                *(iVar5 + 0x10) = piVar1;
                pppiStack_68 = ppppiVar7;
            }
            _raw_spin_unlock(iVar5);
        }
        uVar6 = uVar6 + 1;
    } while (uVar6 != 0xff);
    if (&pppiStack_68 != pppiStack_68) {
        ppppiVar7 = pppiStack_68;
        do {
            ppppiVar8 = *ppppiVar7;
            uVar6 = __list_del_entry_valid(ppppiVar7);
            if ((uVar6 & 1) != 0) {
                pppiVar2 = *ppppiVar7;
                pppiVar3 = ppppiVar7[1];
                pppiVar2[1] = pppiVar3;
                *pppiVar3 = pppiVar2;
            }
            *ppppiVar7 = 0xdead000000000100;
            ppppiVar7[1] = 0xdead000000000122;
            sym.lock_zspage(ppppiVar7 + -3);
            if ((*(ppppiVar7 + -3) & 0x3fc000) != 0x160000) goto code_r0x0800418c;
            uVar6 = *(ppppiVar7 + -3) >> 2 & 0x1ff;
            if (0xfe < uVar6) {
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x5512,0x8004188);
                (*pcVar4)();
            }
            iVar5 = *(arg1 + -0x860 + uVar6 * 8);
            _raw_spin_lock(iVar5);
            sym.__free_zspage(arg1 + -0x868,iVar5,ppppiVar7 + -3);
            _raw_spin_unlock(iVar5);
            ppppiVar7 = ppppiVar8;
        } while (&pppiStack_68 != ppppiVar8);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_58) {
        return;
    }
    __stack_chk_fail();
code_r0x0800418c:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x800,0x8004190);
    (*pcVar4)();
}


// ===== sym.lock_zspage @ 0x08004194 (size 920) =====

void sym.lock_zspage(int64_t arg1)

{
    int64_t iVar1;
    int *piVar2;
    int iVar3;
    char cVar4;
    bool bVar5;
    uint32_t uVar6;
    uint64_t *puVar7;
    uint64_t uVar8;
    ulong *in_x18;
    uint64_t *puVar9;
    uint64_t *puVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg1 + 0x28;
code_r0x080041b8:
    _raw_read_lock(iVar1);
    puVar9 = *(arg1 + 0x10);
    if ((puVar9[1] & 1) == 0) {
        uVar8 = *puVar9;
        puVar10 = puVar9;
    }
    else {
        puVar10 = puVar9[1] - 1;
        uVar8 = *puVar10;
    }
    if ((uVar8 & 1) == 0) {
        Hint_Prefetch(puVar10,2,0,1);
        do {
            uVar8 = *puVar10;
            cVar4 = '\x01';
            bVar5 = ExclusiveMonitorPass(puVar10,0x10);
            if (bVar5) {
                *puVar10 = uVar8 | 1;
                cVar4 = ExclusiveMonitorsStatus();
            }
        } while (cVar4 != '\0');
        if ((uVar8 & 1) == 0) goto code_r0x080042e4;
    }
    puVar10 = puVar9;
    if ((puVar9[1] & 1) != 0) {
        puVar10 = puVar9[1] - 1;
    }
    piVar2 = puVar10 + 0x34;
    Hint_Prefetch(piVar2,2,0,1);
    do {
        cVar4 = '\x01';
        bVar5 = ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
            *piVar2 = *piVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
        }
    } while (cVar4 != '\0');
    _raw_read_unlock(iVar1);
    if ((puVar9[1] & 1) == 0) {
        uVar8 = *puVar9;
    }
    else {
        uVar8 = *(puVar9[1] - 1);
    }
    if ((uVar8 & 1) != 0) {
        puVar10 = puVar9;
        if ((puVar9[1] & 1) != 0) {
            puVar10 = puVar9[1] - 1;
        }
        wait_on_page_bit(puVar10,0);
    }
    if ((puVar9[1] & 1) != 0) {
        puVar9 = puVar9[1] - 1;
    }
    piVar2 = puVar9 + 0x34;
    Hint_Prefetch(piVar2,2,0,1);
    do {
        iVar3 = *piVar2;
        cVar4 = '\x01';
        bVar5 = ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
            *piVar2 = iVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
        }
    } while (cVar4 != '\0');
    DataMemoryBarrier(2,3);
    if (iVar3 + -1 == 0) {
        __put_page(puVar9);
    }
    goto code_r0x080041b8;
code_r0x080042e4:
    uVar6 = *puVar9;
    do {
        while( true ) {
            if (((uVar6 >> 10 & 1) != 0) || (puVar10 = puVar9[4], puVar10 == NULL)) {
                _raw_read_unlock(iVar1);
                return;
            }
            if ((puVar10[1] & 1) == 0) {
                uVar8 = *puVar10;
                puVar7 = puVar10;
            }
            else {
                puVar7 = puVar10[1] - 1;
                uVar8 = *puVar7;
            }
            if ((uVar8 & 1) == 0) break;
code_r0x08004354:
            puVar7 = puVar10;
            if ((puVar10[1] & 1) != 0) {
                puVar7 = puVar10[1] - 1;
            }
            piVar2 = puVar7 + 0x34;
            Hint_Prefetch(piVar2,2,0,1);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                    *piVar2 = *piVar2 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            _raw_read_unlock(iVar1);
            if ((puVar10[1] & 1) == 0) {
                uVar8 = *puVar10;
            }
            else {
                uVar8 = *(puVar10[1] - 1);
            }
            if ((uVar8 & 1) != 0) {
                puVar7 = puVar10;
                if ((puVar10[1] & 1) != 0) {
                    puVar7 = puVar10[1] - 1;
                }
                wait_on_page_bit(puVar7,0);
            }
            if ((puVar10[1] & 1) != 0) {
                puVar10 = puVar10[1] - 1;
            }
            piVar2 = puVar10 + 0x34;
            Hint_Prefetch(piVar2,2,0,1);
            do {
                iVar3 = *piVar2;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                    *piVar2 = iVar3 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
            if (iVar3 + -1 == 0) {
                __put_page(puVar10);
            }
            _raw_read_lock(iVar1);
            uVar6 = *puVar9;
        }
        Hint_Prefetch(puVar7,2,0,1);
        do {
            uVar8 = *puVar7;
            cVar4 = '\x01';
            bVar5 = ExclusiveMonitorPass(puVar7,0x10);
            if (bVar5) {
                *puVar7 = uVar8 | 1;
                cVar4 = ExclusiveMonitorsStatus();
            }
        } while (cVar4 != '\0');
        if ((uVar8 & 1) != 0) goto code_r0x08004354;
        uVar6 = *puVar10;
        puVar9 = puVar10;
    } while( true );
}


// ===== sym.zs_page_migrate @ 0x0800452c (size 1660) =====

uint sym.zs_page_migrate(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    int *piVar1;
    int64_t *piVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    char cVar6;
    bool bVar7;
    int64_t iVar8;
    code *pcVar9;
    int iVar10;
    uint64_t uVar11;
    int64_t iVar12;
    int64_t iVar13;
    uint64_t *puVar14;
    uint64_t *puVar15;
    uint64_t uVar16;
    ulong *in_x18;
    int64_t arg1_00;
    uint uVar17;
    uint32_t *arg2_00;
    int64_t iVar18;
    int64_t iVar19;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg4 == 3) {
        uVar17 = 0xffffffea;
    }
    else {
        arg2_00 = *(arg3 + 0x28);
        if ((*arg2_00 & 0x3fc000) != 0x160000) {
    //WARNING: Does not return
            pcVar9 = SoftwareBreakpoint(0x800,0x8004aac);
            (*pcVar9)();
        }
        _raw_write_lock(arg2_00 + 10);
        if ((*arg2_00 & 0x3fc000) != 0x160000) {
    //WARNING: Does not return
            pcVar9 = SoftwareBreakpoint(0x800,0x8004ab0);
            (*pcVar9)();
        }
        uVar11 = *arg2_00 >> 2 & 0x1ff;
        if (0xfe < uVar11) {
    //WARNING: Does not return
            pcVar9 = SoftwareBreakpoint(0x5512,0x8004a60);
            (*pcVar9)();
        }
        iVar13 = *(arg1 + 0xe8);
        uVar4 = *(arg3 + 0x30);
        arg1_00 = *(iVar13 + uVar11 * 8 + 8);
        _raw_spin_lock(arg1_00);
        iVar8 = sp_el0;
        uVar5 = arg2_00[1];
        *(iVar8 + 0x10) = *(iVar8 + 0x10) + 1;
        *(iVar8 + 0xad0) = *(iVar8 + 0xad0) + 1;
        uVar3 = 0x1000;
        if (uVar5 != 0) {
            uVar3 = uVar4;
        }
        iVar18 = uVar3;
        uVar11 = (arg3 & 0x3ffffffffffc0U) << 6 | 0xff00000000000000;
        iVar19 = iVar18;
        while (uVar3 < 0x1000) {
            puVar14 = uVar11 + iVar19;
            if ((*arg3 & 0x400) != 0) {
                puVar14 = arg3 + 0x20U;
            }
            if ((*puVar14 & 1) != 0) {
                puVar14 = *puVar14 & 0xfffffffffffffffe;
                *(iVar8 + 0x10) = *(iVar8 + 0x10) + 1;
                if ((*puVar14 & 1) == 0) {
                    Hint_Prefetch(puVar14,2,0,1);
                    do {
                        uVar16 = *puVar14;
                        cVar6 = '\x01';
                        bVar7 = ExclusiveMonitorPass(puVar14,0x10);
                        if (bVar7) {
                            *puVar14 = uVar16 | 1;
                            cVar6 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar6 != '\0');
                    if ((uVar16 & 1) == 0) goto code_r0x08004730;
                }
                iVar13 = *(iVar8 + 0x10) + -1;
                *(iVar8 + 0x10) = iVar13;
                arg2 = arg3;
                if ((iVar13 == 0) || (*(iVar8 + 0x10) == 0)) {
                    preempt_schedule();
                    uVar17 = 0xfffffff5;
                }
                else {
                    uVar17 = 0xfffffff5;
                }
                goto code_r0x08004940;
            }
code_r0x08004730:
            uVar3 = *(arg1_00 + 0x48) + uVar3;
            iVar19 = uVar3;
        }
        *(iVar8 + 0x10) = *(iVar8 + 0x10) + 1;
        *(iVar8 + 0xad0) = *(iVar8 + 0xad0) + 1;
        memcpy((arg2 & 0x3ffffffffffc0U) << 6 | 0xff00000000000000,uVar11,0x1000);
        *(iVar8 + 0xad0) = *(iVar8 + 0xad0) + -1;
        iVar12 = *(iVar8 + 0x10) + -1;
        *(iVar8 + 0x10) = iVar12;
        if ((iVar12 == 0) || (*(iVar8 + 0x10) == 0)) {
            preempt_schedule();
        }
        for (puVar14 = uVar11 + iVar18; puVar14 < uVar11 + iVar19; puVar14 = puVar14 + *(arg1_00 + 0x48)) {
            puVar15 = puVar14;
            if ((*arg3 & 0x400) != 0) {
                puVar15 = arg3 + 0x20U;
            }
            if ((*puVar15 & 1) != 0) {
                puVar15 = *puVar15 & 0xfffffffffffffffe;
                uVar16 = *puVar15;
                if ((uVar16 & 1) == 0) {
    //WARNING: Does not return
                    pcVar9 = SoftwareBreakpoint(0x800,0x8004a68);
                    (*pcVar9)();
                }
                *puVar15 = uVar16 & 0xffffffe | (arg2 + (_kill_anon_super >> 0xc) * 0x40) * 0x400000 + 0x80000000000000
                           | 1;
            }
        }
        sym.replace_sub_page(arg1_00,arg2_00,arg2,arg3);
        iVar12 = arg2;
        if ((*(arg2 + 8) & 1) != 0) {
            iVar12 = *(arg2 + 8) - 1;
        }
        piVar1 = iVar12 + 0x34;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            cVar6 = '\x01';
            bVar7 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar7) {
                *piVar1 = *piVar1 + 1;
                cVar6 = ExclusiveMonitorsStatus();
            }
        } while (cVar6 != '\0');
        uVar3 = *arg2_00 + 0x3800 & 0x3800;
        *arg2_00 = uVar3 | *arg2_00 & 0xffffc7ff;
        if (uVar3 == 0) {
            iVar10 = sym.putback_zspage(arg1_00,arg2_00);
            if (iVar10 == 0) {
                queue_work_on(0x20,__raw_read_lock,iVar13 + 0x868);
            }
            piVar2 = iVar13 + 0x8b0;
            Hint_Prefetch(piVar2,2,0,1);
            do {
                cVar6 = '\x01';
                bVar7 = ExclusiveMonitorPass(piVar2,0x10);
                if (bVar7) {
                    *piVar2 = *piVar2 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                }
            } while (cVar6 != '\0');
            DataMemoryBarrier(2,3);
            if ((*piVar2 == 0) && (*(iVar13 + 0x8b8) != '\0')) {
                __wake_up(iVar13 + 0x898,3,0,0);
            }
        }
        if ((*arg2 >> 0x3e) * 0x640 + (*arg3 >> 0x3e) * -0x640 != 0) {
            dec_zone_page_state(arg3,9);
            inc_zone_page_state(arg2,9);
        }
        __ClearPageMovable(arg3);
        Hint_Prefetch(arg3,2,0,1);
        do {
            cVar6 = '\x01';
            bVar7 = ExclusiveMonitorPass(arg3,0x10);
            if (bVar7) {
                *arg3 = *arg3 & 0xffffffffffffdfff;
                cVar6 = ExclusiveMonitorsStatus();
            }
        } while (cVar6 != '\0');
        *(arg3 + 0x28) = 0;
        *(arg3 + 0x30) = 0xffffffff;
        Hint_Prefetch(arg3,2,0,1);
        do {
            cVar6 = '\x01';
            bVar7 = ExclusiveMonitorPass(arg3,0x10);
            if (bVar7) {
                *arg3 = *arg3 & 0xfffffffffffffbff;
                cVar6 = ExclusiveMonitorsStatus();
            }
        } while (cVar6 != '\0');
        *(arg3 + 0x20) = 0;
        if ((*(arg3 + 8) & 1) != 0) {
            arg3 = *(arg3 + 8) - 1;
        }
        piVar1 = arg3 + 0x34;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            iVar10 = *piVar1;
            cVar6 = '\x01';
            bVar7 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar7) {
                *piVar1 = iVar10 + -1;
                cVar6 = ExclusiveMonitorsStatus();
            }
        } while (cVar6 != '\0');
        DataMemoryBarrier(2,3);
        if (iVar10 + -1 == 0) {
            __put_page(arg3);
        }
        uVar17 = 0;
code_r0x08004940:
        puVar14 = uVar11 + iVar18;
        if (puVar14 < uVar11 + iVar19) {
            do {
                puVar15 = puVar14;
                if ((*arg2 & 0x400) != 0) {
                    puVar15 = arg2 + 0x20;
                }
                if ((*puVar15 & 1) != 0) {
                    puVar15 = *puVar15 & 0xfffffffffffffffe;
                    if ((*puVar15 & 1) == 0) {
    //WARNING: Does not return
                        pcVar9 = SoftwareBreakpoint(0x800,0x8004a64);
                        (*pcVar9)();
                    }
                    Hint_Prefetch(puVar15,2,0,1);
                    do {
                        cVar6 = '\x01';
                        bVar7 = ExclusiveMonitorPass(puVar15,0x10);
                        if (bVar7) {
                            *puVar15 = *puVar15 & 0xfffffffffffffffe;
                            cVar6 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar6 != '\0');
                    iVar13 = *(iVar8 + 0x10) + -1;
                    *(iVar8 + 0x10) = iVar13;
                    if ((iVar13 == 0) || (*(iVar8 + 0x10) == 0)) {
                        preempt_schedule();
                    }
                }
                puVar14 = puVar14 + *(arg1_00 + 0x48);
            } while (puVar14 < uVar11 + iVar19);
        }
        *(iVar8 + 0xad0) = *(iVar8 + 0xad0) + -1;
        iVar13 = *(iVar8 + 0x10) + -1;
        *(iVar8 + 0x10) = iVar13;
        if ((iVar13 == 0) || (*(iVar8 + 0x10) == 0)) {
            preempt_schedule();
        }
        _raw_spin_unlock(arg1_00);
        _raw_write_unlock(arg2_00 + 10);
    }
    return uVar17;
}


// ===== sym.zs_page_isolate @ 0x08004ba8 (size 348) =====

uint sym.zs_page_isolate(int64_t arg1)

{
    uint32_t *puVar1;
    int64_t *piVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    code *pcVar6;
    int64_t iVar7;
    ulong *in_x18;
    uint64_t uVar8;
    uint uVar9;
    uint32_t *puVar10;
    int64_t iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar10 = *(arg1 + 0x28);
    if ((*puVar10 & 0x3fc000) != 0x160000) {
    //WARNING: Does not return
        pcVar6 = SoftwareBreakpoint(0x800,0x8004cd4);
        (*pcVar6)();
    }
    uVar8 = *puVar10 >> 2 & 0x1ff;
    iVar7 = page_mapping();
    if (uVar8 < 0xff) {
        iVar11 = *(iVar7 + 0xe8);
        iVar7 = *(iVar11 + uVar8 * 8 + 8);
        _raw_spin_lock(iVar7);
        if ((puVar10[1] == 0) || ((puVar1 = puVar10 + 6, puVar1 == *puVar1 && ((*puVar10 & 0x3800) == 0)))) {
            uVar9 = 0;
        }
        else {
            if (puVar1 != *puVar1) {
                uVar3 = *puVar10;
                if ((uVar3 & 0x3800) == 0) {
                    if ((uVar3 & 0x3fc000) != 0x160000) {
    //WARNING: Does not return
                        pcVar6 = SoftwareBreakpoint(0x800,0x8004ce4);
                        (*pcVar6)();
                    }
                    piVar2 = iVar11 + 0x8b0;
                    Hint_Prefetch(piVar2,2,0,1);
                    do {
                        cVar4 = '\x01';
                        bVar5 = ExclusiveMonitorPass(piVar2,0x10);
                        if (bVar5) {
                            *piVar2 = *piVar2 + 1;
                            cVar4 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar4 != '\0');
                    uVar8 = __list_del_entry_valid(puVar1);
                    if ((uVar8 & 1) != 0) {
                        iVar11 = *(puVar10 + 6);
                        piVar2 = *(puVar10 + 8);
                        *(iVar11 + 8) = piVar2;
                        *piVar2 = iVar11;
                    }
                    iVar11 = iVar7 + (uVar3 & 3) * 8;
                    *(puVar10 + 6) = puVar1;
                    *(puVar10 + 8) = puVar1;
                    *(iVar11 + 0x58) = *(iVar11 + 0x58) + -1;
                }
            }
            uVar3 = *puVar10;
            uVar9 = 1;
            *puVar10 = uVar3 & 0xffffc000 | uVar3 & 0x7ff | (uVar3 + 0x800 >> 0xb & 7) << 0xb;
        }
        _raw_spin_unlock(iVar7);
        return uVar9;
    }
    //WARNING: Does not return
    pcVar6 = SoftwareBreakpoint(0x5512,0x8004cd0);
    (*pcVar6)();
}


// ===== sym.zs_page_putback @ 0x08004d04 (size 296) =====

void sym.zs_page_putback(int64_t arg1)

{
    int64_t *piVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    code *pcVar5;
    int iVar6;
    int64_t iVar7;
    ulong *in_x18;
    uint64_t uVar8;
    uint32_t *arg2;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg2 = *(arg1 + 0x28);
    if ((*arg2 & 0x3fc000) != 0x160000) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x8004e00);
        (*pcVar5)();
    }
    uVar8 = *arg2 >> 2 & 0x1ff;
    iVar7 = page_mapping();
    if (uVar8 < 0xff) {
        iVar9 = *(iVar7 + 0xe8);
        iVar7 = *(iVar9 + uVar8 * 8 + 8);
        _raw_spin_lock(iVar7);
        uVar2 = *arg2 + 0x3800 & 0x3800;
        *arg2 = uVar2 | *arg2 & 0xffffc7ff;
        if (uVar2 == 0) {
            iVar6 = sym.putback_zspage(iVar7,arg2);
            if (iVar6 == 0) {
                queue_work_on(0x20,__raw_read_lock,iVar9 + 0x868);
            }
            piVar1 = iVar9 + 0x8b0;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                    *piVar1 = *piVar1 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
            if ((*piVar1 == 0) && (*(iVar9 + 0x8b8) != '\0')) {
                __wake_up(iVar9 + 0x898,3,0,0);
            }
        }
        _raw_spin_unlock(iVar7);
        return;
    }
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x8004dfc);
    (*pcVar5)();
}


// ===== sym.replace_sub_page @ 0x08004e2c (size 464) =====

void sym.replace_sub_page(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    char cVar1;
    bool bVar2;
    int64_t iVar3;
    uint64_t *puVar4;
    code *pcVar5;
    ulong uVar6;
    uint64_t *puVar7;
    int iVar8;
    uint64_t uVar9;
    uint64_t extraout_x8;
    uint64_t *puVar10;
    uint64_t *extraout_x9;
    ulong *in_x18;
    ulong unaff_x30;
    uchar auVar11 [16];
    uint64_t *puStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    int64_t iStack_30;
    int64_t iStack_28;
    
    auVar11._8_8_ = arg2;
    auVar11._0_8_ = arg1;
    puVar7 = arg4;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uVar9 = 0;
    puVar10 = *(arg2 + 0x10);
    iStack_38 = 0;
    iStack_30 = 0;
    puStack_48 = NULL;
    uStack_40 = 0;
    do {
        puVar4 = arg3;
        if (puVar10 != puVar7) {
            puVar4 = puVar10;
        }
        if (3 < uVar9) {
    //WARNING: Does not return
            pcVar5 = SoftwareBreakpoint(0x5512,0x8004fb0);
            (*pcVar5)();
        }
        if ((uVar9 & 0x1ffffffffffffffc) != 0) goto code_r0x08004fa8;
        (&puStack_48)[uVar9] = puVar4;
        if ((*puVar10 >> 10 & 1) != 0) break;
        puVar10 = puVar10[4];
        uVar9 = uVar9 + 1;
    } while (puVar10 != NULL);
    uVar9 = *(arg1 + 0x50);
    if (*(arg1 + 0x50) < 1) goto code_r0x08004f38;
    puStack_48[4] = 0;
    puStack_48[5] = arg2;
    *(arg2 + 0x10) = puStack_48;
    puVar10 = puStack_48;
    do {
        uVar6 = auVar11._8_8_;
        Hint_Prefetch(puVar10,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(puVar10,0x10);
            if (bVar2) {
                *puVar10 = *puVar10 | 0x2000;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        if ((*(auVar11._0_8_ + 0x4c) == 1) && (*(auVar11._0_8_ + 0x50) == 1)) {
            Hint_Prefetch(puVar10,2,0,1);
            do {
                cVar1 = '\x01';
                bVar2 = ExclusiveMonitorPass(puVar10,0x10);
                if (bVar2) {
                    *puVar10 = *puVar10 | 0x400;
                    cVar1 = ExclusiveMonitorsStatus();
                }
            } while (cVar1 != '\0');
        }
        iVar8 = uVar9;
        if (iVar8 != 1) {
            *(uStack_40 + 0x20) = 0;
            *(uStack_40 + 0x28) = uVar6;
            puVar10[4] = uStack_40;
            if (iVar8 != 2) {
                *(iStack_38 + 0x20) = 0;
                *(iStack_38 + 0x28) = uVar6;
                *(uStack_40 + 0x20) = iStack_38;
                if (iVar8 != 3) {
                    *(iStack_30 + 0x20) = 0;
                    *(iStack_30 + 0x28) = uVar6;
                    *(iStack_38 + 0x20) = iStack_30;
                    if (iVar8 != 4) {
code_r0x08004fa8:
    //WARNING: Does not return
                        pcVar5 = SoftwareBreakpoint(1,0x8004fac);
                        (*pcVar5)();
                    }
                }
            }
        }
code_r0x08004f38:
        *(arg3 + 0x30) = puVar7[6];
        if ((*puVar7 >> 10 & 1) != 0) {
            *(arg3 + 0x20) = puVar7[4];
        }
        uVar6 = page_mapping(puVar7);
        __SetPageMovable(arg3,uVar6);
        iVar3 = sp_el0;
        if (*(iVar3 + 0x5e0) == iStack_28) {
            return;
        }
        auVar11 = __stack_chk_fail();
        uVar9 = extraout_x8;
        puVar10 = extraout_x9;
    } while( true );
}


// ===== sym.zs_shrinker_scan @ 0x08004ffc (size 48) =====

int64_t sym.zs_shrinker_scan(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sym.zs_compact(arg1 + -0x820);
    if (iVar1 == 0) {
        iVar1 = -1;
    }
    return iVar1;
}


// ===== sym.zs_shrinker_count @ 0x0800502c (size 424) =====

//WARNING: Type propagation algorithm not settling

int64_t sym.zs_shrinker_count(int64_t arg1,uchar noname_1 [16],uchar noname_2 [16],uint32_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    bool bVar3;
    bool bVar4;
    bool bVar5;
    bool bVar6;
    bool bVar7;
    bool bVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint32_t uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    int64_t iVar15;
    int64_t iVar16;
    int64_t iVar17;
    uint64_t in_x16;
    uint64_t uVar18;
    uint64_t in_x17;
    uint64_t uVar19;
    int unaff_w19;
    int unaff_w20;
    
    iVar17 = 0;
    iVar15 = 0;
    iVar16 = 0;
    do {
        iVar1 = arg1 + iVar17 * 8;
        iVar2 = *(iVar1 + -0x30);
        iVar1 = *(iVar1 + -0x28);
        bVar4 = iVar1 != 0;
        bVar5 = iVar2 != 0;
        if (iVar1 != 0) {
            in_x16 = *(iVar1 + 0x54);
        }
        if (iVar2 != 0) {
            in_x17 = *(iVar2 + 0x54);
        }
        uVar9 = iVar17 + 0xfe;
        uVar10 = iVar17 + 0xfd;
        bVar6 = uVar9 == (in_x16 & 0xffffffff);
        uVar18 = bVar6;
        bVar7 = uVar10 == (in_x17 & 0xffffffff);
        uVar19 = bVar7;
        if (bVar4 && bVar6) {
            uVar18 = *(iVar1 + 0x78);
        }
        if (bVar5 && bVar7) {
            uVar19 = *(iVar2 + 0x78);
        }
        if (bVar4 && bVar6) {
            uVar9 = *(iVar1 + 0x80);
        }
        if (bVar5 && bVar7) {
            uVar10 = *(iVar2 + 0x80);
        }
        uVar14 = uVar18 - uVar9;
        bVar3 = uVar10 <= uVar19;
        uVar13 = uVar19 - uVar10;
        bVar8 = uVar13 != 0;
        uVar12 = bVar3 && bVar8;
        uVar11 = (bVar4 && bVar6) && (uVar9 <= uVar18 && uVar14 != 0);
        if (uVar11 == 1) {
            unaff_w20 = *(iVar1 + 0x4c);
        }
        if ((bVar5 && bVar7) && (bVar3 && bVar8)) {
            unaff_w19 = *(iVar2 + 0x4c);
            if (uVar11 != 0) goto code_r0x08005170;
code_r0x08005144:
            if ((!bVar5 || !bVar7) || (!bVar3 || !bVar8)) goto code_r0x0800517c;
code_r0x08005148:
            uVar14 = 0;
            if (unaff_w19 != 0) {
                uVar14 = uVar13 / unaff_w19;
            }
            if (uVar11 != 0) goto code_r0x08005180;
code_r0x08005154:
            if ((bVar5 && bVar7) && (bVar3 && bVar8)) goto code_r0x08005188;
        }
        else {
            if (uVar11 == 0) goto code_r0x08005144;
code_r0x08005170:
            uVar12 = 0;
            if (unaff_w20 != 0) {
                uVar12 = uVar14 / unaff_w20;
            }
            if ((bVar5 && bVar7) && (bVar3 && bVar8)) goto code_r0x08005148;
code_r0x0800517c:
            if (uVar11 == 0) goto code_r0x08005154;
code_r0x08005180:
            uVar13 = *(iVar1 + 0x50);
            if ((bVar5 && bVar7) && (bVar3 && bVar8)) {
code_r0x08005188:
                uVar11 = *(iVar2 + 0x50);
            }
        }
        iVar17 = iVar17 + -2;
        in_x17 = 0;
        if ((!bVar4 || !bVar6) || uVar9 < uVar18) {
            in_x17 = uVar12 * uVar13;
        }
        in_x16 = 0;
        if ((!bVar5 || !bVar7) || uVar10 < uVar19) {
            in_x16 = uVar14 * uVar11;
        }
        uVar9 = in_x17;
        if (!bVar4 || !bVar6) {
            uVar9 = 0;
        }
        uVar10 = in_x16;
        if (!bVar5 || !bVar7) {
            uVar10 = 0;
        }
        uVar19 = 0;
        if (iVar1 != 0) {
            uVar19 = uVar9;
        }
        uVar9 = 0;
        if (iVar2 != 0) {
            uVar9 = uVar10;
        }
        iVar15 = iVar15 + uVar19;
        iVar16 = iVar16 + uVar9;
        if (iVar17 == -0xfe) {
            iVar17 = *(arg1 + -0x818);
            iVar16 = iVar16 + iVar15;
            if ((iVar17 != 0) && (*(iVar17 + 0x54) == 0)) {
                uVar9 = *(iVar17 + 0x78) - *(iVar17 + 0x80);
                if (*(iVar17 + 0x78) < *(iVar17 + 0x80) || uVar9 == 0) {
                    iVar15 = 0;
                }
                else {
                    uVar10 = 0;
                    if (*(iVar17 + 0x4c) != 0) {
                        uVar10 = uVar9 / *(iVar17 + 0x4c);
                    }
                    iVar15 = uVar10 * *(iVar17 + 0x54);
                }
                iVar16 = iVar15 + iVar16;
            }
            return iVar16;
        }
    } while( true );
}


// ===== sym.zs_cpu_prepare @ 0x080051d4 (size 132) =====

uint sym.zs_cpu_prepare(uint32_t arg1)

{
    code *pcVar1;
    int64_t iVar2;
    uint uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    if (arg1 < 0x20) {
        *in_x18 = unaff_x30;
        iVar4 = *(__per_cpu_offset + arg1 * 8);
        if (*(obj.zs_map_area + iVar4) == 0) {
            iVar2 = kmem_cache_alloc_trace(_preempt_schedule,0xcc0,0x1000);
            uVar3 = 0xfffffff4;
            if (iVar2 != 0) {
                uVar3 = 0;
            }
            *(obj.zs_map_area + iVar4) = iVar2;
        }
        else {
            uVar3 = 0;
        }
        return uVar3;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8005258);
    (*pcVar1)();
}


// ===== sym.zs_cpu_dead @ 0x08005258 (size 92) =====

ulong sym.zs_cpu_dead(uint32_t arg1)

{
    code *pcVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    if (arg1 < 0x20) {
        *in_x18 = unaff_x30;
        iVar2 = *(__per_cpu_offset + arg1 * 8);
        kfree(*(obj.zs_map_area + iVar2));
        *(obj.zs_map_area + iVar2) = 0;
        return 0;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x80052b4);
    (*pcVar1)();
}


// ===== sym.zs_init_fs_context @ 0x080052b4 (size 56) =====

uint sym.zs_init_fs_context(ulong param_1)

{
    int64_t iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = init_pseudo(param_1,0x58295829);
    uVar2 = 0xfffffff4;
    if (iVar1 != 0) {
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.__cfi_check_fail @ 0x080052ec (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08005330

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
    //switch table (4 cases) at 0x8000e38
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8005344);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080053e4 (size 136) =====

uint64_t sym.init_module(void)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = kern_mount(obj.huge_class_size);
    _segment.ehdr = uVar1;
    if ((uVar1 < 0xfffffffffffff001) || (uVar1 == 0)) {
        uVar2 = __cpuhp_setup_state(0x3e,"mm/zsmalloc:prepare",1,
                                    sym.zs_cpu_prepare.c08505102395ade40ce2f57a59adb2a6.cfi_jt,
                                    sym.zs_cpu_dead.c08505102395ade40ce2f57a59adb2a6.cfi_jt,0);
        uVar1 = uVar2 & 0xffffffff;
        if (uVar2 != 0) {
            kern_unmount(_segment.ehdr);
        }
    }
    return uVar1 & 0xffffffff;
}


// ===== sym.cleanup_module @ 0x0800546c (size 56) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kern_unmount(_segment.ehdr);
    __cpuhp_remove_state(0x3e,1);
    return;
}

