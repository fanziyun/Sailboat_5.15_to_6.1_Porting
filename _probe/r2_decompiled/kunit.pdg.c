// decompiled from kunit by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 1584) =====

//WARNING: Switch with 1 destination removed at 0x0800355c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x7ff5a213d37b1a6) {
        if (arg1 < -0x3de47753bb6f9f5b) {
            if (arg1 < -0x52c1d310304c9e9c) {
                if (arg1 < -0x710361ba635a6e6c) {
                    if (arg1 == -0x7ff0137ad662677c) {
                        pcVar2 = sym.kunit_remove_resource.cfi_jt;
                    }
                    else {
                        if (arg1 != -0x74bc1d4ab9244f29) goto code_r0x0800351c;
                        pcVar2 = sym.kunit_suite_num_test_cases.cfi_jt;
                    }
                }
                else if (arg1 == -0x710361ba635a6e6c) {
                    pcVar2 = sym.kunit_run_tests.cfi_jt;
                }
                else {
                    if (arg1 != -0x5ccae9cfe4b0b7c6) goto code_r0x0800351c;
                    pcVar2 = sym.kunit_alloc_and_get_resource.cfi_jt;
                }
            }
            else if (arg1 < -0x42ee4786efdb1cec) {
                if (arg1 != -0x52c1d310304c9e9c) {
                    if ((arg1 == -0x474bd60426f22ecd) && ((pcVar1 + -0x8001750 >> 3 | pcVar1 << 0x3d) < 8)) {
                        return;
                    }
                    goto code_r0x0800351c;
                }
                pcVar2 = sym.__kunit_test_suites_exit.cfi_jt;
            }
            else {
                if (arg1 != -0x42ee4786efdb1cec) {
                    if (arg1 != -0x40ce29d73e29c540) goto code_r0x0800351c;
                    pcVar2 = sym.__typeid__ZTSFvP14kunit_resourceE_global_addr;
code_r0x080015d4:
                    if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 3) {
                        return;
                    }
                    goto code_r0x0800351c;
                }
                pcVar2 = sym.kunit_init_test.cfi_jt;
            }
        }
        else if (arg1 < -0x8dc801903aca538) {
            if (arg1 < -0x37b44292405a1a35) {
                if (arg1 == -0x3de47753bb6f9f5b) {
                    pcVar2 = sym.kunit_kfree.cfi_jt;
                }
                else {
                    if (arg1 != -0x39f0e9516d6c4c44) goto code_r0x0800351c;
                    pcVar2 = sym.kunit_kmalloc_array.cfi_jt;
                }
            }
            else {
                if (arg1 == -0x37b44292405a1a35) {
                    pcVar2 = sym.__typeid__ZTSFbP5kunitP14kunit_resourcePvE_global_addr;
                    goto code_r0x080015d4;
                }
                if (arg1 != -0x2b470ffa90e2ace8) goto code_r0x0800351c;
                pcVar2 = sym.__typeid__ZTSFvP5kunitE_global_addr;
            }
        }
        else if (arg1 < -0x222ba02bef1b01e) {
            if (arg1 == -0x8dc801903aca538) {
                pcVar2 = sym.debugfs_results_open.5c8c11c49df7de0a6ddeaef783879c24.cfi_jt;
code_r0x0800158c:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x0800351c;
            }
            if (arg1 != -0x2ac316d8df914f8) goto code_r0x0800351c;
            pcVar2 = sym.__typeid__ZTSFvP4krefE_global_addr;
        }
        else if (arg1 == -0x222ba02bef1b01e) {
            pcVar2 = sym.kunit_log_append.cfi_jt;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) goto code_r0x0800351c;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else if (arg1 < 0x4c550309df1cf4c1) {
        if (arg1 < 0x29bc87c66d334d1c) {
            if (arg1 < 0x1cea20c5d160b0d5) {
                if (arg1 != 0x7ff5a213d37b1a6) {
                    if (arg1 != 0xfc3f557367492ab) goto code_r0x0800351c;
                    pcVar2 = sym.__typeid__ZTSFiP14kunit_resourcePvE_global_addr;
                    goto code_r0x080015d4;
                }
                pcVar2 = sym.seq_read.cfi_jt;
            }
            else if (arg1 == 0x1cea20c5d160b0d5) {
                pcVar2 = sym.__kunit_test_suites_init.cfi_jt;
            }
            else {
                if (arg1 != 0x29bb111353f82cef) goto code_r0x0800351c;
                pcVar2 = sym.kunit_destroy_resource.cfi_jt;
            }
        }
        else if (arg1 < 0x3373fdd18eb1686a) {
            if (arg1 == 0x29bc87c66d334d1c) {
                pcVar2 = sym.kunit_add_resource.cfi_jt;
            }
            else {
                if (arg1 != 0x321969b888d4949e) goto code_r0x0800351c;
                pcVar2 = sym.seq_lseek.cfi_jt;
            }
        }
        else if (arg1 == 0x3373fdd18eb1686a) {
            pcVar2 = sym.kunit_do_assertion.cfi_jt;
        }
        else {
            if (arg1 != 0x467634fdbaba0ad1) goto code_r0x0800351c;
            pcVar2 = sym.kunit_test_case_num.cfi_jt;
        }
    }
    else if (arg1 < 0x6e010321bbb6afc7) {
        if (arg1 < 0x5271acac67d8aa53) {
            if (arg1 == 0x4c550309df1cf4c1) {
                pcVar2 = sym.__typeid__ZTSFvPvE_global_addr;
                goto code_r0x0800158c;
            }
            if (arg1 != 0x5233d5bc7887ae44) goto code_r0x0800351c;
            pcVar2 = sym.debugfs_print_results.5c8c11c49df7de0a6ddeaef783879c24.cfi_jt;
        }
        else if (arg1 == 0x5271acac67d8aa53) {
            pcVar2 = sym.kunit_add_named_resource.cfi_jt;
        }
        else {
            if (arg1 != 0x641d19c7be126e92) goto code_r0x0800351c;
            pcVar2 = sym.kunit_generic_run_threadfn_adapter.e1f6b370ce2a588bc8cf7c6f15b0a96f.cfi_jt;
        }
    }
    else if (arg1 < 0x7e04a0fb7ad8bcd5) {
        if (arg1 == 0x6e010321bbb6afc7) {
            pcVar2 = sym.kunit_try_catch_run.cfi_jt;
        }
        else {
            if (arg1 != 0x7c28a75b1bd68ae7) goto code_r0x0800351c;
            pcVar2 = sym.kunit_suite_has_succeeded.cfi_jt;
        }
    }
    else if (arg1 == 0x7e04a0fb7ad8bcd5) {
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    else {
        if (arg1 != 0x7ea70b2f0a7fac01) goto code_r0x0800351c;
        pcVar2 = sym.kunit_try_catch_throw.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x0800351c:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8003570);
    (*pcVar1)();
}


// ===== sym.__kunit_test_suites_exit.cfi_jt @ 0x08001638 (size 8) =====

void sym.__kunit_test_suites_exit.cfi_jt(int64_t *param_1)

{
    int64_t arg1;
    ulong *in_x18;
    uint64_t uVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *param_1;
    if (arg1 != 0) {
        uVar1 = 1;
        do {
            sym.kunit_debugfs_destroy_suite(arg1);
            arg1 = param_1[uVar1];
            uVar1 = uVar1 + 1;
        } while (arg1 != 0);
    }
    return;
}


// ===== sym.kunit_suite_num_test_cases.cfi_jt @ 0x08001640 (size 8) =====

int64_t sym.kunit_suite_num_test_cases.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t *piVar2;
    
    piVar2 = *(param_1 + 0x110);
    if (*piVar2 != 0) {
        iVar1 = 0;
        do {
            piVar2 = piVar2 + 5;
            iVar1 = iVar1 + 1;
        } while (*piVar2 != 0);
        return iVar1;
    }
    return 0;
}


// ===== sym.kunit_do_assertion.cfi_jt @ 0x08001648 (size 8) =====

void sym.kunit_do_assertion.cfi_jt(int64_t param_1,int64_t param_2,uint64_t param_3,code *param_4)

{
    int64_t iVar1;
    int iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t unaff_x19;
    int64_t unaff_x20;
    int64_t unaff_x21;
    code *unaff_x22;
    code *pcVar5;
    int64_t *piVar6;
    int64_t *piVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iVar4 = *(iVar4 + 0x5e0);
    if ((param_3 & 1) != 0) goto code_r0x08001a50;
    *(param_2 + 0x18) = param_4;
    *(param_2 + 0x20) = &stack0xffffffffffffff88;
    *(param_1 + 0x58) = 1;
    unaff_x21 = sym.alloc_string_stream(param_1,0xcc0);
    if (unaff_x21 != 0) {
        pcVar5 = *(param_2 + 0x28);
        if (7 < (pcVar5 + -0x8001750 >> 3 | pcVar5 << 0x3d)) goto code_r0x08001b68;
        while( true ) {
            (*pcVar5)(param_2,unaff_x21);
            uVar3 = sym.string_stream_is_empty(unaff_x21);
            unaff_x22 = pcVar5;
            if ((uVar3 & 1) == 0) {
                unaff_x22 = sym.string_stream_get_string(unaff_x21);
                if (unaff_x22 == NULL) {
                    _printk(0x8000767,*(param_1 + 8));
                    sym.kunit_log_append(*(param_1 + 0x10),0x8000a9f,*(param_1 + 8),param_4);
                    piVar6 = unaff_x21 + 8;
                    piVar7 = *piVar6;
                    if (piVar6 != piVar7) {
                        pcVar5 = 0x80004e0;
                        do {
                            _printk(0x80004e0,*(param_1 + 8),piVar7[2]);
                            param_4 = piVar7[2];
                            sym.kunit_log_append(*(param_1 + 0x10),0x800052b,*(param_1 + 8),param_4);
                            piVar7 = *piVar7;
                        } while (piVar6 != piVar7);
                    }
                    _printk(0x8000a12,*(param_1 + 8));
                    sym.kunit_log_append(*(param_1 + 0x10),0x80006a4,*(param_1 + 8),param_4);
                    unaff_x22 = pcVar5;
                }
                else {
                    _printk(0x80004e0,*(param_1 + 8),unaff_x22);
                    param_4 = unaff_x22;
                    sym.kunit_log_append(*(param_1 + 0x10),0x800052b,*(param_1 + 8),unaff_x22);
                    sym.kunit_kfree(param_1,unaff_x22);
                }
            }
            iVar2 = sym.kunit_destroy_resource(*(unaff_x21 + 0x20),0x80016c0,unaff_x21);
            if (iVar2 != 0) break;
            unaff_x19 = param_1;
            unaff_x20 = param_2;
            if (*(param_2 + 8) != 0) {
code_r0x08001a50:
                iVar1 = sp_el0;
                if (*(iVar1 + 0x5e0) == iVar4) {
                    return;
                }
                __stack_chk_fail();
                param_1 = unaff_x19;
                param_2 = unaff_x20;
            }
            sym.kunit_abort(param_1);
            pcVar5 = unaff_x22;
code_r0x08001b68:
            __cfi_slowpath_diag(0xb8b429fbd90dd133,pcVar5,0x80003c0);
        }
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x8001a2c);
        (*pcVar5)();
    }
    __warn_printk("Could not allocate stream to print failed assertion in %s:%d\n",*(param_2 + 0x10),*(param_2 + 0xc))
    ;
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x800,0x8001a48);
    (*pcVar5)();
}


// ===== sym.debugfs_results_open.5c8c11c49df7de0a6ddeaef783879c24.cfi_jt @ 0x08001650 (size 8) =====

void sym.debugfs_results_open.5c8c11c49df7de0a6ddeaef783879c24.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.debugfs_print_results.5c8c11c49df7de0a6ddeaef783879c24.cfi_jt,*(param_1 + 0x2d8));
    return;
}


// ===== sym.debugfs_release.5c8c11c49df7de0a6ddeaef783879c24.cfi_jt @ 0x08001658 (size 8) =====

void sym.debugfs_release.5c8c11c49df7de0a6ddeaef783879c24.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_release();
    return;
}


// ===== sym.kunit_add_named_resource.cfi_jt @ 0x08001660 (size 8) =====

ulong sym.kunit_add_named_resource.cfi_jt
                (int64_t param_1,code *param_2,ulong param_3,ulong *param_4,int64_t param_5,ulong param_6)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong *puVar3;
    uint32_t uVar4;
    char cVar5;
    bool bVar6;
    int iVar7;
    ulong uVar8;
    uint32_t *puVar9;
    uint64_t uVar10;
    ulong uVar11;
    int64_t iVar12;
    ulong *in_x18;
    code *pcVar13;
    int64_t *piVar14;
    int64_t iVar15;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_5 == 0) {
        uVar8 = 0xffffffea;
    }
    else {
        iVar1 = param_1 + 0x54;
        uVar8 = _raw_spin_lock_irqsave(iVar1);
        iVar15 = *(param_1 + 0x68);
        iVar2 = param_1 + 0x60;
code_r0x08002624:
        if (iVar2 == iVar15) {
            _raw_spin_unlock_irqrestore(iVar1,uVar8);
        }
        else {
            if ((*(iVar15 + -0x18) == 0) || (iVar7 = strcmp(*(iVar15 + -0x18),param_5), iVar7 != 0))
            goto code_r0x08002620;
            puVar9 = iVar15 + -8;
            Hint_Prefetch(puVar9,2,0,1);
            do {
                uVar4 = *puVar9;
                cVar5 = '\x01';
                bVar6 = ExclusiveMonitorPass(puVar9,0x10);
                if (bVar6) {
                    *puVar9 = uVar4 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                }
            } while (cVar5 != '\0');
            iVar12 = iVar15 + -0x20;
            if (uVar4 == 0) {
                uVar11 = 2;
code_r0x080027ac:
                refcount_warn_saturate(puVar9,uVar11);
            }
            else if ((uVar4 + 1 | uVar4) < 0) {
                uVar11 = 1;
                goto code_r0x080027ac;
            }
            _raw_spin_unlock_irqrestore(iVar1,uVar8);
            if (iVar12 != 0) {
                Hint_Prefetch(puVar9,2,0,1);
                do {
                    uVar4 = *puVar9;
                    cVar5 = '\x01';
                    bVar6 = ExclusiveMonitorPass(puVar9,0x10);
                    if (bVar6) {
                        *puVar9 = uVar4 - 1;
                        cVar5 = ExclusiveMonitorsStatus();
                    }
                } while (cVar5 != '\0');
                if (uVar4 == 1) {
                    DataMemoryBarrier(2,1);
                    pcVar13 = *(iVar15 + -0x10);
                    if (pcVar13 != NULL) {
                        if (2 < (pcVar13 + -0x8001790 >> 3 | pcVar13 << 0x3d)) {
                            __cfi_slowpath_diag(0xbf31d628c1d63ac0,pcVar13,0x8000440);
                        }
                        (*pcVar13)(iVar12);
                        kfree(iVar12);
                        return 0xffffffef;
                    }
                }
                else if (uVar4 < 1) {
                    refcount_warn_saturate(puVar9,3);
                    return 0xffffffef;
                }
                return 0xffffffef;
            }
        }
        param_4[1] = param_5;
        param_4[2] = param_3;
        *(param_4 + 3) = 1;
        if (param_2 == NULL) {
            *param_4 = param_6;
        }
        else {
            if (2 < (param_2 + -0x80016e0 >> 3 | param_2 << 0x3d)) {
                __cfi_slowpath_diag(0xfc3f557367492ab,param_2,0x80003a0);
            }
            uVar8 = (*param_2)(param_4,param_6);
            if (uVar8 != 0) {
                return uVar8;
            }
        }
        uVar8 = _raw_spin_lock_irqsave(iVar1);
        piVar14 = *(param_1 + 0x68);
        puVar3 = param_4 + 4;
        uVar10 = __list_add_valid(puVar3,piVar14,iVar2);
        if ((uVar10 & 1) != 0) {
            *(param_1 + 0x68) = puVar3;
            param_4[4] = iVar2;
            param_4[5] = piVar14;
            *piVar14 = puVar3;
        }
        _raw_spin_unlock_irqrestore(iVar1,uVar8);
        uVar8 = 0;
    }
    return uVar8;
code_r0x08002620:
    iVar15 = *(iVar15 + 8);
    goto code_r0x08002624;
}


// ===== sym.seq_lseek.cfi_jt @ 0x08001668 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_lseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.init_module.cfi_jt @ 0x08001670 (size 8) =====

ulong sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.kunit_debugfs_init();
    return 0;
}


// ===== sym.kunit_kmalloc_array.cfi_jt @ 0x08001678 (size 8) =====

int64_t sym.kunit_kmalloc_array.cfi_jt(int64_t param_1,uint64_t param_2,uint64_t param_3,uint32_t param_4)

{
    int64_t *piVar1;
    uchar auVar2 [16];
    uchar auVar3 [16];
    int64_t *piVar4;
    int64_t iVar5;
    ulong uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *puVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_4 & 0x400010) == 0) {
        iVar8 = 0;
    }
    else {
        iVar8 = 1;
        if ((param_4 & 0x10) != 0) {
            iVar8 = 2;
        }
    }
    iVar5 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar5 = 0x30;
    }
    piVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar5 + iVar8 * 0x70),param_4 | 0x100,0x30);
    iVar8 = 0;
    if (piVar4 != NULL) {
        auVar2._8_8_ = 0;
        auVar2._0_8_ = param_2;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = param_3;
        piVar4[2] = sym.__typeid__ZTSFvP14kunit_resourceE_global_addr;
        *(piVar4 + 3) = 1;
        if (SUB168(auVar2 * auVar3,8) == 0) {
            iVar5 = __kmalloc(param_2 * param_3,param_4);
            *piVar4 = iVar5;
            iVar8 = 0;
            if (iVar5 != 0) {
                uVar6 = _raw_spin_lock_irqsave(param_1 + 0x54);
                puVar9 = *(param_1 + 0x68);
                piVar1 = piVar4 + 4;
                uVar7 = __list_add_valid(piVar1,puVar9,param_1 + 0x60);
                if ((uVar7 & 1) != 0) {
                    *(param_1 + 0x68) = piVar1;
                    piVar4[4] = param_1 + 0x60;
                    piVar4[5] = puVar9;
                    *puVar9 = piVar1;
                }
                _raw_spin_unlock_irqrestore(param_1 + 0x54,uVar6);
                iVar8 = *piVar4;
            }
        }
        else {
            iVar8 = 0;
            *piVar4 = 0;
        }
    }
    return iVar8;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001680 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    debugfs_remove(_segment.ehdr);
    return;
}


// ===== sym.kunit_remove_resource.cfi_jt @ 0x08001688 (size 8) =====

void sym.kunit_remove_resource.cfi_jt(int64_t param_1,int64_t param_2)

{
    int *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int iVar4;
    char cVar5;
    bool bVar6;
    ulong uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    code *pcVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar7 = _raw_spin_lock_irqsave(param_1 + 0x54);
    uVar8 = __list_del_entry_valid(param_2 + 0x20);
    if ((uVar8 & 1) != 0) {
        iVar2 = *(param_2 + 0x20);
        piVar3 = *(param_2 + 0x28);
        *(iVar2 + 8) = piVar3;
        *piVar3 = iVar2;
    }
    *(param_2 + 0x20) = 0xdead000000000100;
    *(param_2 + 0x28) = 0xdead000000000122;
    _raw_spin_unlock_irqrestore(param_1 + 0x54,uVar7);
    piVar1 = param_2 + 0x18;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        iVar4 = *piVar1;
        cVar5 = '\x01';
        bVar6 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
            *piVar1 = iVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
        }
    } while (cVar5 != '\0');
    if (iVar4 == 1) {
        DataMemoryBarrier(2,1);
        pcVar9 = *(param_2 + 0x10);
        if (pcVar9 != NULL) {
            if (2 < (pcVar9 + -0x8001790 >> 3 | pcVar9 << 0x3d)) {
                __cfi_slowpath_diag(0xbf31d628c1d63ac0,pcVar9,0x8000440);
            }
            (*pcVar9)(param_2);
            kfree(param_2);
        }
    }
    else if (iVar4 < 1) {
        refcount_warn_saturate(piVar1,3);
    }
    return;
}


// ===== sym.kunit_test_case_num.cfi_jt @ 0x08001690 (size 8) =====

int sym.kunit_test_case_num.cfi_jt(int64_t param_1,int64_t *param_2)

{
    int iVar1;
    int64_t *piVar2;
    
    piVar2 = *(param_1 + 0x110);
    if (*piVar2 != 0) {
        iVar1 = 1;
        do {
            if (piVar2 == param_2) {
                return iVar1;
            }
            piVar2 = piVar2 + 5;
            iVar1 = iVar1 + 1;
        } while (*piVar2 != 0);
    }
    return 0;
}


// ===== sym.kunit_alloc_and_get_resource.cfi_jt @ 0x08001698 (size 8) =====

ulong * sym.kunit_alloc_and_get_resource.cfi_jt
                  (int64_t param_1,code *param_2,ulong param_3,uint32_t param_4,ulong param_5)

{
    ulong *puVar1;
    int64_t iVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    ulong *puVar7;
    ulong uVar8;
    uint64_t uVar9;
    int64_t iVar10;
    ulong *in_x18;
    uint32_t *puVar11;
    int64_t *piVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_4 & 0x400010) == 0) {
        iVar10 = 0;
    }
    else {
        iVar10 = 1;
        if ((param_4 & 0x10) != 0) {
            iVar10 = 2;
        }
    }
    iVar2 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar2 = 0x30;
    }
    puVar7 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar2 + iVar10 * 0x70),param_4 | 0x100,0x30);
    if (puVar7 != NULL) {
        puVar11 = puVar7 + 3;
        *puVar11 = 1;
        puVar7[2] = param_3;
        if (param_2 == NULL) {
            *puVar7 = param_5;
        }
        else {
            if (2 < (param_2 + -0x80016e0 >> 3 | param_2 << 0x3d)) {
                __cfi_slowpath_diag(0xfc3f557367492ab,param_2,0x80003a0);
            }
            iVar6 = (*param_2)(puVar7,param_5);
            if (iVar6 != 0) {
                return NULL;
            }
        }
        uVar8 = _raw_spin_lock_irqsave(param_1 + 0x54);
        piVar12 = *(param_1 + 0x68);
        puVar1 = puVar7 + 4;
        uVar9 = __list_add_valid(puVar1,piVar12,param_1 + 0x60);
        if ((uVar9 & 1) != 0) {
            *(param_1 + 0x68) = puVar1;
            puVar7[4] = param_1 + 0x60;
            puVar7[5] = piVar12;
            *piVar12 = puVar1;
        }
        _raw_spin_unlock_irqrestore(param_1 + 0x54,uVar8);
        Hint_Prefetch(puVar11,2,0,1);
        do {
            uVar3 = *puVar11;
            cVar4 = '\x01';
            bVar5 = ExclusiveMonitorPass(puVar11,0x10);
            if (bVar5) {
                *puVar11 = uVar3 + 1;
                cVar4 = ExclusiveMonitorsStatus();
            }
        } while (cVar4 != '\0');
        if (uVar3 == 0) {
            uVar8 = 2;
        }
        else {
            if (-1 < (uVar3 + 1 | uVar3)) {
                return puVar7;
            }
            uVar8 = 1;
        }
        refcount_warn_saturate(puVar11,uVar8);
    }
    return puVar7;
}


// ===== sym.__kunit_test_suites_init.cfi_jt @ 0x080016a0 (size 8) =====

ulong sym.__kunit_test_suites_init.cfi_jt(int64_t *param_1)

{
    ulong *in_x18;
    int64_t arg1;
    uint64_t uVar1;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *param_1;
    if (arg1 != 0) {
        uVar1 = 1;
        piVar2 = param_1;
        do {
            sym.kunit_debugfs_create_suite(arg1);
            *(arg1 + 0x118) = 0;
            sym.kunit_run_tests(*piVar2);
            piVar2 = param_1 + uVar1;
            uVar1 = uVar1 + 1;
            arg1 = *piVar2;
        } while (arg1 != 0);
    }
    return 0;
}


// ===== sym.kunit_kfree.cfi_jt @ 0x080016a8 (size 8) =====

void sym.kunit_kfree.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t *piVar1;
    int iVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    ulong uVar6;
    uint32_t *puVar7;
    int64_t iVar8;
    ulong *in_x18;
    code *pcVar9;
    int64_t *arg2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar6 = _raw_spin_lock_irqsave(param_1 + 0x54);
    iVar8 = *(param_1 + 0x68);
    do {
        if (param_1 + 0x60 == iVar8) {
            arg2 = NULL;
code_r0x08003000:
            _raw_spin_unlock_irqrestore(param_1 + 0x54,uVar6);
            sym.kunit_remove_resource(param_1,arg2);
            piVar1 = arg2 + 3;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                iVar2 = *piVar1;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                    *piVar1 = iVar2 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            if (iVar2 == 1) {
                DataMemoryBarrier(2,1);
                pcVar9 = arg2[2];
                if (pcVar9 != NULL) {
                    if (2 < (pcVar9 + -0x8001790 >> 3 | pcVar9 << 0x3d)) {
                        __cfi_slowpath_diag(0xbf31d628c1d63ac0,pcVar9,0x8000440);
                    }
                    (*pcVar9)(arg2);
                    kfree(arg2);
                }
            }
            else if (iVar2 < 1) {
                refcount_warn_saturate(piVar1,3);
            }
            return;
        }
        arg2 = iVar8 + -0x20;
        if (*arg2 == param_2) {
            puVar7 = iVar8 + -8;
            Hint_Prefetch(puVar7,2,0,1);
            do {
                uVar3 = *puVar7;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar7,0x10);
                if (bVar5) {
                    *puVar7 = uVar3 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            if (uVar3 == 0) {
                refcount_warn_saturate(puVar7,2);
            }
            else if ((uVar3 + 1 | uVar3) < 0) {
                refcount_warn_saturate(puVar7,1);
            }
            goto code_r0x08003000;
        }
        iVar8 = *(iVar8 + 8);
    } while( true );
}


// ===== sym.debugfs_print_results.5c8c11c49df7de0a6ddeaef783879c24.cfi_jt @ 0x080016b0 (size 8) =====

ulong sym.debugfs_print_results.5c8c11c49df7de0a6ddeaef783879c24.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    char *pcVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t arg1;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0x80);
    uVar1 = sym.kunit_suite_has_succeeded(arg1);
    if ((arg1 != 0) && (*(arg1 + 0x220) != 0)) {
        seq_printf(param_1,0x80005ed);
        piVar4 = *(arg1 + 0x110);
        iVar3 = *piVar4;
        while (iVar3 != 0) {
            if ((piVar4 != NULL) && (piVar4[4] != 0)) {
                seq_printf(param_1,0x80005ed);
            }
            piVar4 = piVar4 + 5;
            iVar3 = *piVar4;
        }
        if (uVar1 < 3) {
            pcVar2 = *(uVar1 * 8 + 0x8000f58);
        }
        else {
            pcVar2 = "invalid";
        }
        seq_printf(param_1,"%s %d - %s\n",pcVar2,1,arg1);
    }
    return 0;
}


// ===== sym.__typeid__ZTSFbP5kunitP14kunit_resourcePvE_global_addr @ 0x080016b8 (size 8) =====

bool sym.__typeid__ZTSFbP5kunitP14kunit_resourcePvE_global_addr(ulong param_1,int64_t *param_2,int64_t param_3)

{
    return *param_2 == param_3;
}


// ===== sym.kunit_resource_instance_match.5cabb814e2bb2d63a9a0361c54bc5597.cfi_jt @ 0x080016c0 (size 8) =====

bool sym.kunit_resource_instance_match.5cabb814e2bb2d63a9a0361c54bc5597.cfi_jt
               (ulong param_1,int64_t *param_2,int64_t param_3)

{
    return *param_2 == param_3;
}


// ===== sym.kunit_resource_name_match.adde4c4ab23eb7e113210deebb519fe6.cfi_jt @ 0x080016c8 (size 8) =====

bool sym.kunit_resource_name_match.adde4c4ab23eb7e113210deebb519fe6.cfi_jt
               (ulong param_1,int64_t param_2,ulong param_3)

{
    bool bVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bVar1 = false;
    if (*(param_2 + 8) != 0) {
        iVar2 = strcmp(*(param_2 + 8),param_3);
        bVar1 = iVar2 == 0;
    }
    return bVar1;
}


// ===== sym.kunit_generic_run_threadfn_adapter.e1f6b370ce2a588bc8cf7c6f15b0a96f.cfi_jt @ 0x080016d0 (size 8) =====

void sym.kunit_generic_run_threadfn_adapter.e1f6b370ce2a588bc8cf7c6f15b0a96f.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    code *extraout_x8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = *(param_1 + 0x18);
    if (1 < (pcVar1 + -0x8001730 >> 3 | pcVar1 << 0x3d)) goto code_r0x08004528;
    do {
        (*pcVar1)(*(param_1 + 0x28));
        complete_and_exit(*(param_1 + 8),0);
        pcVar1 = extraout_x8;
code_r0x08004528:
        __cfi_slowpath_diag(0x4c550309df1cf4c1,pcVar1,0x80004c0);
    } while( true );
}


// ===== sym.kunit_try_catch_throw.cfi_jt @ 0x080016d8 (size 8) =====

void sym.kunit_try_catch_throw.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    ulong uVar5;
    char *arg4;
    ulong *in_x18;
    ulong *extraout_x18;
    code *arg4_00;
    int64_t iVar6;
    ulong unaff_x30;
    uchar auVar7 [16];
    ulong uStack_68;
    ulong uStack_60;
    ulong **ppuStack_58;
    ulong **ppuStack_50;
    int64_t iStack_48;
    uchar *puStack_40;
    code *pcStack_38;
    
    *in_x18 = unaff_x30;
    *(param_1 + 0x10) = 0xfffffff2;
    auVar7 = complete_and_exit(*(param_1 + 8),0xfffffffffffffff2);
    piVar3 = auVar7._0_8_;
    *extraout_x18 = sym.kunit_try_catch_run;
    pcStack_38 = sym.kunit_try_catch_run;
    iVar6 = sp_el0;
    iStack_48 = *(iVar6 + 0x5e0);
    ppuStack_58 = &ppuStack_58;
    arg4 = "kunit_try_catch_thread";
    iVar6 = *piVar3;
    piVar3[5] = auVar7._8_8_;
    piVar3[1] = &uStack_68;
    *(piVar3 + 2) = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    ppuStack_50 = ppuStack_58;
    puStack_40 = &stack0xfffffffffffffff0;
    uVar4 = kthread_create_on_node
                      (sym.kunit_generic_run_threadfn_adapter.e1f6b370ce2a588bc8cf7c6f15b0a96f.cfi_jt,piVar3,
                       0xffffffff);
    if (0xfffffffffffff000 < uVar4) {
        arg4_00 = piVar3[4];
        if ((arg4_00 + -0x8001730 >> 3 | arg4_00 << 0x3d) < 2) goto code_r0x0800442c;
        uVar5 = 0x8000480;
        while( true ) {
            __cfi_slowpath_diag(0x4c550309df1cf4c1,arg4_00,uVar5);
code_r0x0800442c:
            (*arg4_00)(piVar3[5]);
code_r0x08004434:
            iVar6 = sp_el0;
            if (*(iVar6 + 0x5e0) == iStack_48) break;
            __stack_chk_fail();
code_r0x080044bc:
            uVar5 = 0x80004a0;
        }
        return;
    }
    wake_up_process();
    iVar2 = wait_for_completion_timeout(&uStack_68,75000);
    if (iVar2 == 0) {
        _printk(0x8000926,*(iVar6 + 8));
        sym.kunit_log_append(*(iVar6 + 0x10),0x80007ca,*(iVar6 + 8),arg4);
        arg4_00 = 0xffffff92;
        *(piVar3 + 2) = 0xffffff92;
    }
    else {
        uVar1 = *(piVar3 + 2);
        arg4_00 = uVar1;
        if (uVar1 == 0xfffffff2) {
            *(piVar3 + 2) = 0;
            goto code_r0x08004410;
        }
        if (uVar1 == 0) goto code_r0x08004434;
        if (uVar1 == 0xfffffffc) {
            _printk(0x8000999,*(iVar6 + 8));
            sym.kunit_log_append(*(iVar6 + 0x10),0x8000614,*(iVar6 + 8),arg4);
            goto code_r0x08004410;
        }
    }
    _printk(0x80009c9,*(iVar6 + 8),arg4_00);
    sym.kunit_log_append(*(iVar6 + 0x10),0x8000bfd,*(iVar6 + 8),arg4_00);
code_r0x08004410:
    arg4_00 = piVar3[4];
    if (1 < (arg4_00 + -0x8001730 >> 3 | arg4_00 << 0x3d)) goto code_r0x080044bc;
    goto code_r0x0800442c;
}


// ===== sym.__typeid__ZTSFiP14kunit_resourcePvE_global_addr @ 0x080016e0 (size 8) =====

uint sym.__typeid__ZTSFiP14kunit_resourcePvE_global_addr(int64_t *param_1,uint64_t *param_2)

{
    uchar auVar1 [16];
    uchar auVar2 [16];
    int64_t iVar3;
    uint uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = *param_2;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_2[1];
    if (SUB168(auVar1 * auVar2,8) == 0) {
        iVar3 = __kmalloc(*param_2 * param_2[1],param_2[2]);
    }
    else {
        iVar3 = 0;
    }
    *param_1 = iVar3;
    uVar4 = 0xfffffff4;
    if (iVar3 != 0) {
        uVar4 = 0;
    }
    return uVar4;
}


// ===== sym.string_stream_init.5cabb814e2bb2d63a9a0361c54bc5597.cfi_jt @ 0x080016e8 (size 8) =====

ulong sym.string_stream_init.5cabb814e2bb2d63a9a0361c54bc5597.cfi_jt(int64_t *param_1,int64_t *param_2)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sym.kunit_kmalloc_array(*param_2,1,0x30,*(param_2 + 1) | 0x100);
    if (iVar1 == 0) {
        uVar2 = 0xfffffff4;
    }
    else {
        uVar2 = 0;
        *param_1 = iVar1;
        *(iVar1 + 0x28) = param_2[1];
        *(iVar1 + 0x20) = *param_2;
        *(iVar1 + 8) = iVar1 + 8;
        *(iVar1 + 0x10) = iVar1 + 8;
        *(iVar1 + 0x18) = 0;
    }
    return uVar2;
}


// ===== sym.string_stream_fragment_init.5cabb814e2bb2d63a9a0361c54bc5597.cfi_jt @ 0x080016f0 (size 8) =====

ulong sym.string_stream_fragment_init.5cabb814e2bb2d63a9a0361c54bc5597.cfi_jt(ulong *param_1,int64_t *param_2)

{
    int64_t *piVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = sym.kunit_kmalloc_array(*param_2,1,0x20,*(param_2 + 0xc) | 0x100);
    if (piVar1 != NULL) {
        *piVar1 = *param_2;
        iVar2 = sym.kunit_kmalloc_array(*param_2,1,param_2[1],*(param_2 + 0xc));
        piVar1[3] = iVar2;
        if (iVar2 != 0) {
            *param_1 = piVar1;
            return 0;
        }
    }
    return 0xfffffff4;
}


// ===== sym.kunit_try_catch_run.cfi_jt @ 0x080016f8 (size 8) =====

void sym.kunit_try_catch_run.cfi_jt(int64_t *param_1,int64_t param_2)

{
    uint32_t uVar1;
    int iVar2;
    uint64_t uVar3;
    ulong uVar4;
    char *arg4;
    ulong *in_x18;
    code *arg4_00;
    int64_t iVar5;
    ulong unaff_x30;
    ulong uStack_58;
    ulong uStack_50;
    ulong **ppuStack_48;
    ulong **ppuStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    ppuStack_48 = &ppuStack_48;
    arg4 = "kunit_try_catch_thread";
    iVar5 = *param_1;
    param_1[5] = param_2;
    param_1[1] = &uStack_58;
    *(param_1 + 2) = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    ppuStack_40 = ppuStack_48;
    uVar3 = kthread_create_on_node
                      (sym.kunit_generic_run_threadfn_adapter.e1f6b370ce2a588bc8cf7c6f15b0a96f.cfi_jt,param_1,
                       0xffffffff);
    if (0xfffffffffffff000 < uVar3) {
        arg4_00 = param_1[4];
        if ((arg4_00 + -0x8001730 >> 3 | arg4_00 << 0x3d) < 2) goto code_r0x0800442c;
        uVar4 = 0x8000480;
        while( true ) {
            __cfi_slowpath_diag(0x4c550309df1cf4c1,arg4_00,uVar4);
code_r0x0800442c:
            (*arg4_00)(param_1[5]);
code_r0x08004434:
            iVar5 = sp_el0;
            if (*(iVar5 + 0x5e0) == iStack_38) break;
            __stack_chk_fail();
code_r0x080044bc:
            uVar4 = 0x80004a0;
        }
        return;
    }
    wake_up_process();
    iVar2 = wait_for_completion_timeout(&uStack_58,75000);
    if (iVar2 == 0) {
        _printk(0x8000926,*(iVar5 + 8));
        sym.kunit_log_append(*(iVar5 + 0x10),0x80007ca,*(iVar5 + 8),arg4);
        arg4_00 = 0xffffff92;
        *(param_1 + 2) = 0xffffff92;
    }
    else {
        uVar1 = *(param_1 + 2);
        arg4_00 = uVar1;
        if (uVar1 == 0xfffffff2) {
            *(param_1 + 2) = 0;
            goto code_r0x08004410;
        }
        if (uVar1 == 0) goto code_r0x08004434;
        if (uVar1 == 0xfffffffc) {
            _printk(0x8000999,*(iVar5 + 8));
            sym.kunit_log_append(*(iVar5 + 0x10),0x8000614,*(iVar5 + 8),arg4);
            goto code_r0x08004410;
        }
    }
    _printk(0x80009c9,*(iVar5 + 8),arg4_00);
    sym.kunit_log_append(*(iVar5 + 0x10),0x8000bfd,*(iVar5 + 8),arg4_00);
code_r0x08004410:
    arg4_00 = param_1[4];
    if (1 < (arg4_00 + -0x8001730 >> 3 | arg4_00 << 0x3d)) goto code_r0x080044bc;
    goto code_r0x0800442c;
}


// ===== sym.seq_read.cfi_jt @ 0x08001700 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_read.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.kunit_run_tests.cfi_jt @ 0x08001708 (size 8) =====

//WARNING: Type propagation algorithm not settling

ulong sym.kunit_run_tests.cfi_jt(int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    char *pcVar1;
    char *pcVar2;
    int iVar3;
    ulong uVar4;
    int64_t iVar5;
    char *pcVar6;
    uint32_t arg2;
    char *pcVar7;
    int64_t *piVar8;
    uint64_t arg3;
    int64_t iVar9;
    int64_t *piVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar11;
    int64_t arg4;
    uint64_t uVar12;
    code *pcVar13;
    int64_t iVar14;
    int64_t iVar15;
    uint64_t uVar16;
    int64_t iVar17;
    ulong unaff_x30;
    uchar auVar18 [16];
    int64_t aiStack_2a8 [6];
    uchar *puStack_278;
    int64_t iStack_270;
    int64_t *piStack_268;
    uchar auStack_260 [8];
    int64_t iStack_258;
    uchar *puStack_250;
    uchar *apuStack_248 [3];
    code *pcStack_230;
    code *pcStack_228;
    int64_t iStack_218;
    int iStack_210;
    uint uStack_20c;
    uint32_t uStack_208;
    ulong *******pppppppuStack_200;
    ulong *******pppppppuStack_1f8;
    uchar uStack_1f0;
    uint64_t uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_70 = *(iVar5 + 0x5e0);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    aiStack_2a8[4] = 0;
    aiStack_2a8[5] = 0;
    aiStack_2a8[3] = 0;
    _printk(0x8000a51,param_1);
    sym.kunit_log_append(*(param_1 + 0x220),0x8000705,param_1,param_4);
    piVar8 = *(param_1 + 0x110);
    iVar5 = 0;
    if (*piVar8 != 0) {
        iVar5 = 0;
        do {
            piVar8 = piVar8 + 5;
            iVar5 = iVar5 + 1;
        } while (*piVar8 != 0);
    }
    _printk(0x8000603,iVar5);
    iVar5 = 0;
    piVar8 = *(param_1 + 0x110);
    iVar9 = *piVar8;
    while (iVar9 != 0) {
        piVar8 = piVar8 + 5;
        iVar5 = iVar5 + 1;
        iVar9 = *piVar8;
    }
    sym.kunit_log_append(*(param_1 + 0x220),0x8000718,iVar5,param_4);
    piVar8 = *(param_1 + 0x110);
    if (*piVar8 == 0) {
        uVar11 = 0;
        arg4 = 0;
        iVar9 = 0;
        iVar5 = 0;
        uVar12 = 0;
        iVar14 = 0;
        iVar15 = 0;
        iVar17 = 0;
    }
    else {
        uVar12 = 0;
        iVar5 = 0;
        iVar9 = 0;
        arg4 = 0;
        uVar11 = 0;
        do {
            memset(auStack_260,0,0x170);
            pcVar13 = piVar8[2];
            aiStack_2a8[1] = 0;
            aiStack_2a8[2] = 0;
            aiStack_2a8[0] = 0;
            *(piVar8 + 3) = 2;
            if (pcVar13 == NULL) {
                iStack_258 = piVar8[1];
                puStack_250 = piVar8[4];
                uStack_20c = 0;
                if (puStack_250 != NULL) {
                    *puStack_250 = 0;
                }
                puStack_278 = auStack_260;
                uStack_208 = 0;
                uStack_1f0 = 0;
                pcStack_230 = sym.__typeid__ZTSFvPvE_global_addr;
                pcStack_228 = sym.kunit_catch_run_case.adde4c4ab23eb7e113210deebb519fe6.cfi_jt;
                iStack_270 = param_1;
                piStack_268 = piVar8;
                apuStack_248[0] = puStack_278;
                pppppppuStack_200 = &pppppppuStack_200;
                pppppppuStack_1f8 = &pppppppuStack_200;
                sym.kunit_try_catch_run(apuStack_248,&puStack_278);
                if ((uStack_208 == 1) || ((piVar8[3] != 1 && (uStack_208 == 0)))) {
                    *(piVar8 + 3) = uStack_208;
                }
                if (uStack_208 == 0) {
                    piVar10 = aiStack_2a8 + 2;
                }
                else if (uStack_208 == 1) {
                    piVar10 = aiStack_2a8;
                }
                else {
                    if (uStack_208 != 2) {
                        uVar16 = 1;
                        goto code_r0x08001ffc;
                    }
                    piVar10 = aiStack_2a8 + 1;
                }
                uVar16 = 1;
                *piVar10 = *piVar10 + 1;
            }
            else {
                uStack_f0 = uStack_f0 & 0xffffffffffffff00;
                __cfi_slowpath_diag(0xc957a9e93efd3439,pcVar13,0x8000360);
                iStack_218 = (*pcVar13)(0,&uStack_f0);
                uVar16 = 0;
                if (iStack_218 != 0) {
                    do {
                        iStack_258 = piVar8[1];
                        puStack_250 = piVar8[4];
                        uStack_20c = 0;
                        if (puStack_250 != NULL) {
                            *puStack_250 = 0;
                        }
                        puStack_278 = auStack_260;
                        uStack_208 = 0;
                        uStack_1f0 = 0;
                        pcStack_230 = sym.__typeid__ZTSFvPvE_global_addr;
                        pcStack_228 = sym.kunit_catch_run_case.adde4c4ab23eb7e113210deebb519fe6.cfi_jt;
                        iStack_270 = param_1;
                        piStack_268 = piVar8;
                        apuStack_248[0] = puStack_278;
                        pppppppuStack_200 = &pppppppuStack_200;
                        pppppppuStack_1f8 = &pppppppuStack_200;
                        sym.kunit_try_catch_run(apuStack_248,&puStack_278);
                        if ((uStack_208 == 1) || ((piVar8[3] != 1 && (uStack_208 == 0)))) {
                            *(piVar8 + 3) = uStack_208;
                        }
                        if (uStack_f0 == '\0') {
                            snprintf(&uStack_f0,0x80,"param-%d",iStack_210);
                        }
                        pcVar7 = "invalid";
                        if (uStack_208 < 3) {
                            pcVar7 = *(uStack_208 * 8 + 0x8000f20);
                        }
                        _printk(0x8000514,piVar8[1],pcVar7,iStack_210 + 1,&uStack_f0);
                        pcVar7 = "invalid";
                        if (uStack_208 < 3) {
                            pcVar7 = *(uStack_208 * 8 + 0x8000f20);
                        }
                        sym.kunit_log_append(puStack_250,0x80006ef,piVar8[1],pcVar7);
                        pcVar13 = piVar8[2];
                        uStack_f0 = uStack_f0 & 0xffffffffffffff00;
                        __cfi_slowpath_diag(0xc957a9e93efd3439,pcVar13,0x8000380);
                        iStack_218 = (*pcVar13)(iStack_218,&uStack_f0);
                        iStack_210 = iStack_210 + 1;
                        if (uStack_208 == 0) {
                            piVar10 = aiStack_2a8 + 2;
code_r0x08001f20:
                            *piVar10 = *piVar10 + 1;
                        }
                        else {
                            if (uStack_208 == 1) {
                                piVar10 = aiStack_2a8;
                                goto code_r0x08001f20;
                            }
                            if (uStack_208 == 2) {
                                piVar10 = aiStack_2a8 + 1;
                                goto code_r0x08001f20;
                            }
                        }
                        uVar16 = uVar16 + 1;
                    } while (iStack_218 != 0);
                    iStack_218 = 0;
                }
            }
code_r0x08001ffc:
            iVar17 = aiStack_2a8[2];
            iVar15 = aiStack_2a8[1];
            iVar14 = aiStack_2a8[0];
            if ((_segment.ehdr != 0) && ((_segment.ehdr == 2 || (1 < uVar16)))) {
                _printk(0x8000ad6,iStack_258,aiStack_2a8[2],aiStack_2a8[0],aiStack_2a8[1],uVar16);
                sym.kunit_log_append(puStack_250,0x80006b1,iStack_258,iVar17);
            }
            piVar10 = *(param_1 + 0x110);
            arg3 = 0;
            if (*piVar10 != 0) {
                arg3 = 1;
                do {
                    if (piVar10 == piVar8) goto code_r0x08002050;
                    piVar10 = piVar10 + 5;
                    arg3 = arg3 + 1;
                } while (*piVar10 != 0);
                arg3 = 0;
            }
code_r0x08002050:
            sym.kunit_print_ok_not_ok(arg3,1,*(piVar8 + 3),arg3);
            iVar3 = piVar8[3];
            if (iVar3 == 0) {
                piVar10 = aiStack_2a8 + 5;
code_r0x08001d0c:
                *piVar10 = *piVar10 + 1;
            }
            else {
                if (iVar3 == 1) {
                    piVar10 = aiStack_2a8 + 3;
                    goto code_r0x08001d0c;
                }
                if (iVar3 == 2) {
                    piVar10 = aiStack_2a8 + 4;
                    goto code_r0x08001d0c;
                }
            }
            uVar12 = uVar12 + 1;
            iVar5 = iVar17 + iVar5;
            iVar9 = iVar15 + iVar9;
            arg4 = iVar14 + arg4;
            piVar8 = piVar8 + 5;
            uVar11 = uVar16 + uVar11;
            iVar14 = aiStack_2a8[4];
            iVar15 = aiStack_2a8[5];
            iVar17 = aiStack_2a8[3];
        } while (*piVar8 != 0);
    }
    if (_segment.ehdr != 0) {
        if ((_segment.ehdr == 2) || (1 < uVar12)) {
            _printk(0x800057a,param_1,iVar15,iVar17,iVar14,uVar12);
            sym.kunit_log_append(*(param_1 + 0x220),0x800054e,param_1,iVar15);
        }
        if ((_segment.ehdr != 0) && ((_segment.ehdr == 2 || (1 < uVar11)))) {
            _printk(0x8000c4d,iVar5,arg4,iVar9,uVar11);
            sym.kunit_log_append(*(param_1 + 0x220),0x8000817,iVar5,arg4);
        }
    }
    iVar5 = _segment.ehdr;
    if (**(param_1 + 0x110) == 0) {
        arg2 = 2;
    }
    else {
        arg2 = 2;
        piVar8 = *(param_1 + 0x110);
        do {
            piVar10 = piVar8 + 5;
            if (piVar8[3] == 0) {
                arg2 = 0;
            }
            else if (piVar8[3] == 1) {
                arg2 = 1;
                break;
            }
            piVar8 = piVar10;
        } while (*piVar10 != 0);
    }
    pcVar7 = param_1 + 0x118;
    iVar9 = _segment.ehdr;
    _segment.ehdr = _segment.ehdr + 1;
    sym.kunit_print_ok_not_ok(0x8000000,0,arg2,iVar5);
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_70) {
        return 0;
    }
    auVar18 = __stack_chk_fail();
    iVar5 = auVar18._0_8_;
    *extraout_x18 = sym.kunit_print_ok_not_ok;
    pcVar1 = 0x8000a65;
    pcVar2 = " # SKIP ";
    if (arg2 != 2) {
        pcVar2 = pcVar1;
    }
    if ((iVar5 != 0) && ((auVar18._8_8_ & 1) == 0)) {
        if (arg2 < 3) {
            pcVar6 = *(arg2 * 8 + 0x8000f20);
        }
        else {
            pcVar6 = "invalid";
        }
        if (arg2 != 2) {
            pcVar7 = pcVar1;
        }
        uVar4 = _printk(0x8000804,pcVar6,iVar9,param_1,pcVar2,pcVar7);
        return uVar4;
    }
    if ((auVar18._8_8_ & 1) == 0) {
        iVar5 = 0;
    }
    pcVar6 = 0x8000941;
    if ((arg2 == 0) || (arg2 == 2)) {
code_r0x08002378:
        if (arg2 != 2) {
            pcVar7 = pcVar1;
        }
        _printk(0x8000a2a,pcVar6,iVar9,param_1,pcVar2,pcVar7);
        iVar5 = *(iVar5 + 0x10);
        pcVar7 = 0x8000941;
        if ((arg2 == 0) || (pcVar7 = 0x8000941, arg2 == 2)) goto code_r0x080023d0;
        if (arg2 != 1) {
            pcVar7 = "invalid";
            goto code_r0x080023d0;
        }
    }
    else {
        if (arg2 != 1) {
            pcVar6 = "invalid";
            goto code_r0x08002378;
        }
        _printk(0x8000a2a,"not ok",iVar9,param_1,pcVar2,0x8000a65);
        iVar5 = *(iVar5 + 0x10);
    }
    pcVar7 = "not ok";
code_r0x080023d0:
    uVar4 = sym.kunit_log_append(iVar5,0x8000539,pcVar7,iVar9);
    return uVar4;
}


// ===== sym.kunit_destroy_resource.cfi_jt @ 0x08001710 (size 8) =====

ulong sym.kunit_destroy_resource.cfi_jt(int64_t param_1,code *param_2,ulong param_3)

{
    int64_t iVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    ulong uVar5;
    uint64_t uVar6;
    ulong uVar7;
    ulong *in_x18;
    int64_t arg2;
    code *pcVar8;
    uint32_t *puVar9;
    int64_t iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = param_1 + 0x54;
    uVar5 = _raw_spin_lock_irqsave(iVar1);
    iVar10 = *(param_1 + 0x68);
    if (param_1 + 0x60 != iVar10) {
        do {
            arg2 = iVar10 + -0x20;
            if (2 < (param_2 + -0x80016b8 >> 3 | param_2 << 0x3d)) {
                __cfi_slowpath_diag(0xc84bbd6dbfa5e5cb,param_2,0x8000460);
            }
            uVar6 = (*param_2)(param_1,arg2,param_3);
            if ((uVar6 & 1) != 0) {
                puVar9 = iVar10 + -8;
                Hint_Prefetch(puVar9,2,0,1);
                do {
                    uVar2 = *puVar9;
                    cVar3 = '\x01';
                    bVar4 = ExclusiveMonitorPass(puVar9,0x10);
                    if (bVar4) {
                        *puVar9 = uVar2 + 1;
                        cVar3 = ExclusiveMonitorsStatus();
                    }
                } while (cVar3 != '\0');
                if (uVar2 == 0) {
                    uVar7 = 2;
                }
                else {
                    if (-1 < (uVar2 + 1 | uVar2)) goto code_r0x08002c64;
                    uVar7 = 1;
                }
                refcount_warn_saturate(puVar9,uVar7);
code_r0x08002c64:
                _raw_spin_unlock_irqrestore(iVar1,uVar5);
                if (arg2 != 0) {
                    sym.kunit_remove_resource(param_1,arg2);
                    Hint_Prefetch(puVar9,2,0,1);
                    do {
                        uVar2 = *puVar9;
                        cVar3 = '\x01';
                        bVar4 = ExclusiveMonitorPass(puVar9,0x10);
                        if (bVar4) {
                            *puVar9 = uVar2 - 1;
                            cVar3 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar3 != '\0');
                    if (uVar2 == 1) {
                        DataMemoryBarrier(2,1);
                        pcVar8 = *(iVar10 + -0x10);
                        if (pcVar8 != NULL) {
                            if (2 < (pcVar8 + -0x8001790 >> 3 | pcVar8 << 0x3d)) {
                                __cfi_slowpath_diag(0xbf31d628c1d63ac0,pcVar8,0x8000440);
                            }
                            (*pcVar8)(arg2);
                            kfree(arg2);
                        }
                    }
                    else if (uVar2 < 1) {
                        refcount_warn_saturate(puVar9,3);
                    }
                    return 0;
                }
                return 0xfffffffe;
            }
            iVar10 = *(iVar10 + 8);
        } while (param_1 + 0x60 != iVar10);
    }
    _raw_spin_unlock_irqrestore(iVar1,uVar5);
    return 0xfffffffe;
}


// ===== sym.__typeid__ZTSFvP5kunitE_global_addr @ 0x08001718 (size 8) =====

void sym.__typeid__ZTSFvP5kunitE_global_addr(int64_t param_1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *puVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = param_1 + 0x54;
    uVar2 = _raw_spin_lock_irqsave(iVar1);
    puVar3 = *(param_1 + 0x60);
    while (param_1 + 0x60 != puVar3) {
        iVar4 = *(param_1 + 0x68);
        _raw_spin_unlock_irqrestore(iVar1,uVar2);
        sym.kunit_remove_resource(param_1,iVar4 + -0x20);
        uVar2 = _raw_spin_lock_irqsave(iVar1);
        puVar3 = *(param_1 + 0x60);
    }
    _raw_spin_unlock_irqrestore(iVar1,uVar2);
    iVar1 = sp_el0;
    *(iVar1 + 0xa88) = 0;
    return;
}


// ===== sym.kunit_suite_has_succeeded.cfi_jt @ 0x08001720 (size 8) =====

ulong sym.kunit_suite_has_succeeded.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    
    if (**(param_1 + 0x110) == 0) {
        return 2;
    }
    uVar1 = 2;
    piVar3 = *(param_1 + 0x110);
    do {
        piVar2 = piVar3 + 5;
        if (piVar3[3] == 0) {
            uVar1 = 0;
        }
        else if (piVar3[3] == 1) {
            return 1;
        }
        piVar3 = piVar2;
    } while (*piVar2 != 0);
    return uVar1;
}


// ===== sym.kunit_log_append.cfi_jt @ 0x08001728 (size 8) =====

int64_t sym.kunit_log_append.cfi_jt(int64_t param_1,ulong param_2)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t *piVar4;
    ulong *in_x18;
    ulong unaff_x30;
    uchar auStack_238 [512];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iVar3 = memset(auStack_238,0,0x200);
    if (param_1 != 0) {
        iVar3 = strlen(param_1);
        iVar1 = 0x1ff - iVar3;
        if (0 < iVar1) {
            vsnprintf(auStack_238,0x200,param_2,&stack0xfffffffffffffd88);
            iVar3 = strncat(param_1,auStack_238,iVar1);
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return iVar3;
    }
    iVar3 = __stack_chk_fail();
    piVar4 = *(iVar3 + 0x110);
    if (*piVar4 != 0) {
        iVar3 = 0;
        do {
            piVar4 = piVar4 + 5;
            iVar3 = iVar3 + 1;
        } while (*piVar4 != 0);
        return iVar3;
    }
    return 0;
}


// ===== sym.__typeid__ZTSFvPvE_global_addr @ 0x08001730 (size 8) =====

void sym.__typeid__ZTSFvPvE_global_addr(int64_t *param_1)

{
    int64_t arg1;
    int64_t arg2;
    int64_t iVar1;
    uint32_t uVar2;
    ulong *in_x18;
    code *pcVar3;
    ulong *puVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *param_1;
    arg2 = param_1[1];
    iVar1 = sp_el0;
    puVar4 = param_1[2];
    *(iVar1 + 0xa88) = arg1;
    pcVar3 = *(arg2 + 0x100);
    if (pcVar3 != NULL) {
        __cfi_slowpath_diag(0xe0908ae9f1892030,pcVar3,0x80003e0);
        uVar2 = (*pcVar3)(arg1);
        if (uVar2 != 0) {
            _printk(0x8000c27,*(arg1 + 8),uVar2);
            sym.kunit_log_append(*(arg1 + 0x10),0x8000a66,*(arg1 + 8),uVar2);
            *(arg1 + 0x58) = 1;
            goto code_r0x0800325c;
        }
    }
    pcVar3 = *puVar4;
    if (pcVar3 != sym.__typeid__ZTSFvP5kunitE_global_addr) {
        __cfi_slowpath_diag(0xd4b8f0056f1d5318,pcVar3,0x8000400);
    }
    (*pcVar3)(arg1);
code_r0x0800325c:
    sym.kunit_run_case_cleanup(arg1,arg2);
    return;
}


// ===== sym.kunit_catch_run_case.adde4c4ab23eb7e113210deebb519fe6.cfi_jt @ 0x08001738 (size 8) =====

void sym.kunit_catch_run_case.adde4c4ab23eb7e113210deebb519fe6.cfi_jt
               (int64_t *param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint32_t uVar1;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *param_1;
    uVar1 = *(arg1 + 0x28);
    if (uVar1 == 0) {
        sym.kunit_run_case_cleanup(arg1,param_1[1]);
    }
    else {
        *(arg1 + 0x58) = 1;
        if (uVar1 == 0xffffff92) {
            _printk(0x8000724,*(arg1 + 8));
            sym.kunit_log_append(*(arg1 + 0x10),0x80007e4,*(arg1 + 8),param_4);
        }
        else {
            _printk(0x80008c0,*(arg1 + 8),uVar1);
            sym.kunit_log_append(*(arg1 + 0x10),0x8000b4e,*(arg1 + 8),uVar1);
        }
    }
    return;
}


// ===== sym.kunit_init_test.cfi_jt @ 0x08001740 (size 8) =====

void sym.kunit_init_test.cfi_jt(int64_t param_1,ulong param_2,uchar *param_3)

{
    *(param_1 + 0x54) = 0;
    *(param_1 + 0x60) = param_1 + 0x60;
    *(param_1 + 0x68) = param_1 + 0x60;
    *(param_1 + 8) = param_2;
    *(param_1 + 0x10) = param_3;
    if (param_3 != NULL) {
        *param_3 = 0;
    }
    *(param_1 + 0x58) = 0;
    *(param_1 + 0x70) = 0;
    return;
}


// ===== sym.kunit_add_resource.cfi_jt @ 0x08001748 (size 8) =====

ulong sym.kunit_add_resource.cfi_jt(int64_t param_1,code *param_2,ulong param_3,ulong *param_4,ulong param_5)

{
    ulong *puVar1;
    ulong uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    param_4[2] = param_3;
    *(param_4 + 3) = 1;
    if (param_2 == NULL) {
        *param_4 = param_5;
    }
    else {
        if (2 < (param_2 + -0x80016e0 >> 3 | param_2 << 0x3d)) {
            __cfi_slowpath_diag(0xfc3f557367492ab,param_2,0x80003a0);
        }
        uVar2 = (*param_2)(param_4,param_5);
        if (uVar2 != 0) {
            return uVar2;
        }
    }
    uVar2 = _raw_spin_lock_irqsave(param_1 + 0x54);
    piVar4 = *(param_1 + 0x68);
    puVar1 = param_4 + 4;
    uVar3 = __list_add_valid(puVar1,piVar4,param_1 + 0x60);
    if ((uVar3 & 1) != 0) {
        *(param_1 + 0x68) = puVar1;
        param_4[4] = param_1 + 0x60;
        param_4[5] = piVar4;
        *piVar4 = puVar1;
    }
    _raw_spin_unlock_irqrestore(param_1 + 0x54,uVar2);
    return 0;
}


// ===== sym.__typeid__ZTSFvPK12kunit_assertP13string_streamE_global_addr @ 0x08001750 (size 8) =====

void sym.__typeid__ZTSFvPK12kunit_assertP13string_streamE_global_addr
               (uchar param_1 [16],int64_t param_2,int64_t param_3)

{
    char *pcVar1;
    char *arg2;
    int64_t arg3;
    ulong *in_x18;
    ulong unaff_x30;
    uchar noname_1 [16];
    
    *in_x18 = unaff_x30;
    pcVar1 = "ASSERTION";
    if (*(param_2 + 8) != 0) {
        pcVar1 = NULL;
    }
    arg2 = "EXPECTATION";
    if (*(param_2 + 8) != 1) {
        arg2 = pcVar1;
    }
    arg3 = *(param_2 + 0x10);
    noname_1 = sym.string_stream_add(param_3,param_1,arg2,arg3);
    sym.string_stream_add(param_3,noname_1,param_2 + 0x18,arg3);
    return;
}


// ===== sym.kunit_binary_assert_format.cfi_jt @ 0x08001758 (size 8) =====

void sym.kunit_binary_assert_format.cfi_jt(uchar param_1 [16],int64_t param_2,int64_t param_3)

{
    char *pcVar1;
    char *arg2;
    uint64_t uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    uchar auVar4 [16];
    uchar noname_1 [16];
    uchar noname_1_00 [16];
    
    *in_x18 = unaff_x30;
    pcVar1 = "ASSERTION";
    if (*(param_2 + 8) != 0) {
        pcVar1 = NULL;
    }
    arg2 = "EXPECTATION";
    if (*(param_2 + 8) != 1) {
        arg2 = pcVar1;
    }
    auVar4 = sym.string_stream_add(param_3,param_1,arg2,*(param_2 + 0x10));
    sym.string_stream_add(param_3,auVar4,*(param_2 + 0x38),*(param_2 + 0x30));
    uVar2 = sym.is_literal(*(param_3 + 0x20),*(param_2 + 0x38),*(param_2 + 0x40),*(param_3 + 0x28));
    if ((uVar2 & 1) == 0) {
        sym.string_stream_add(param_3,noname_1,*(param_2 + 0x38),*(param_2 + 0x40));
    }
    uVar2 = *(param_3 + 0x28);
    uVar3 = sym.is_literal(*(param_3 + 0x20),*(param_2 + 0x48),*(param_2 + 0x50),uVar2);
    auVar4 = noname_1_00;
    if ((uVar3 & 1) == 0) {
        uVar2 = *(param_2 + 0x50);
        auVar4 = sym.string_stream_add(param_3,noname_1_00,*(param_2 + 0x48),uVar2);
    }
    if (*(param_2 + 0x18) != 0) {
        sym.string_stream_add(param_3,auVar4,param_2 + 0x18,uVar2);
    }
    return;
}


// ===== sym.kunit_ptr_not_err_assert_format.cfi_jt @ 0x08001760 (size 8) =====

void sym.kunit_ptr_not_err_assert_format.cfi_jt(uchar param_1 [16],int64_t param_2,int64_t param_3)

{
    char *pcVar1;
    char *arg2;
    uint64_t arg3;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    uchar noname_1 [16];
    
    *in_x18 = unaff_x30;
    pcVar1 = "ASSERTION";
    if (*(param_2 + 8) != 0) {
        pcVar1 = NULL;
    }
    arg2 = "EXPECTATION";
    if (*(param_2 + 8) != 1) {
        arg2 = pcVar1;
    }
    noname_1 = sym.string_stream_add(param_3,param_1,arg2,*(param_2 + 0x10));
    arg3 = *(param_2 + 0x38);
    if (arg3 == 0) {
        noname_1 = sym.string_stream_add(param_3,noname_1,*(param_2 + 0x30),0);
        iVar2 = *(param_2 + 0x18);
    }
    else {
        if (0xfffffffffffff000 < arg3) {
            noname_1 = sym.string_stream_add(param_3,noname_1,*(param_2 + 0x30),arg3);
        }
        iVar2 = *(param_2 + 0x18);
    }
    if (iVar2 != 0) {
        sym.string_stream_add(param_3,noname_1,param_2 + 0x18,arg3);
    }
    return;
}


// ===== sym.kunit_assert_print_msg.cfi_jt @ 0x08001768 (size 8) =====

void sym.kunit_assert_print_msg.cfi_jt
               (uchar param_1 [16],int64_t param_2,int64_t param_3,ulong param_4,int64_t param_5)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_2 + 0x18) != 0) {
        sym.string_stream_add(param_3,param_1,param_2 + 0x18,param_5);
    }
    return;
}


// ===== sym.kunit_binary_str_assert_format.cfi_jt @ 0x08001770 (size 8) =====

void sym.kunit_binary_str_assert_format.cfi_jt(uchar param_1 [16],int64_t param_2,int64_t param_3)

{
    char *pcVar1;
    char *arg2;
    int iVar2;
    int64_t arg3;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    uchar auVar4 [16];
    uchar extraout_q0 [16];
    uchar extraout_q0_00 [16];
    uchar extraout_q0_01 [16];
    uchar extraout_q0_02 [16];
    
    *in_x18 = unaff_x30;
    pcVar1 = "ASSERTION";
    if (*(param_2 + 8) != 0) {
        pcVar1 = NULL;
    }
    arg2 = "EXPECTATION";
    if (*(param_2 + 8) != 1) {
        arg2 = pcVar1;
    }
    auVar4 = sym.string_stream_add(param_3,param_1,arg2,*(param_2 + 0x10));
    arg3 = *(param_2 + 0x30);
    sym.string_stream_add(param_3,auVar4,*(param_2 + 0x38),arg3);
    pcVar1 = *(param_2 + 0x38);
    iVar3 = *(param_2 + 0x40);
    iVar2 = strlen(pcVar1);
    auVar4 = extraout_q0;
    if ((((iVar2 < 2) || (*pcVar1 != '\"')) || (pcVar1[iVar2 - 1] != '\"')) ||
       (iVar2 = strncmp(pcVar1 + 1,iVar3,iVar2 + -2), auVar4 = extraout_q0_00, iVar2 != 0)) {
        sym.string_stream_add(param_3,auVar4,pcVar1,iVar3);
        arg3 = iVar3;
    }
    pcVar1 = *(param_2 + 0x48);
    iVar3 = *(param_2 + 0x50);
    iVar2 = strlen(pcVar1);
    auVar4 = extraout_q0_01;
    if (((iVar2 < 2) || (*pcVar1 != '\"')) ||
       ((pcVar1[iVar2 - 1] != '\"' ||
        (iVar2 = strncmp(pcVar1 + 1,iVar3,iVar2 + -2), auVar4 = extraout_q0_02, iVar2 != 0)))) {
        auVar4 = sym.string_stream_add(param_3,auVar4,pcVar1,iVar3);
        arg3 = iVar3;
    }
    if (*(param_2 + 0x18) != 0) {
        sym.string_stream_add(param_3,auVar4,param_2 + 0x18,arg3);
    }
    return;
}


// ===== sym.kunit_binary_ptr_assert_format.cfi_jt @ 0x08001778 (size 8) =====

void sym.kunit_binary_ptr_assert_format.cfi_jt(uchar param_1 [16],int64_t param_2,int64_t param_3)

{
    char *pcVar1;
    char *arg2;
    int64_t arg3;
    ulong *in_x18;
    ulong unaff_x30;
    uchar auVar2 [16];
    
    *in_x18 = unaff_x30;
    pcVar1 = "ASSERTION";
    if (*(param_2 + 8) != 0) {
        pcVar1 = NULL;
    }
    arg2 = "EXPECTATION";
    if (*(param_2 + 8) != 1) {
        arg2 = pcVar1;
    }
    auVar2 = sym.string_stream_add(param_3,param_1,arg2,*(param_2 + 0x10));
    auVar2 = sym.string_stream_add(param_3,auVar2,*(param_2 + 0x38),*(param_2 + 0x30));
    auVar2 = sym.string_stream_add(param_3,auVar2,*(param_2 + 0x38),*(param_2 + 0x40));
    arg3 = *(param_2 + 0x50);
    auVar2 = sym.string_stream_add(param_3,auVar2,*(param_2 + 0x48),arg3);
    if (*(param_2 + 0x18) != 0) {
        sym.string_stream_add(param_3,auVar2,param_2 + 0x18,arg3);
    }
    return;
}


// ===== sym.kunit_unary_assert_format.cfi_jt @ 0x08001780 (size 8) =====

void sym.kunit_unary_assert_format.cfi_jt(uchar param_1 [16],int64_t param_2,int64_t param_3)

{
    char *pcVar1;
    char *arg2;
    int64_t arg3;
    ulong *in_x18;
    ulong unaff_x30;
    uchar auVar2 [16];
    
    *in_x18 = unaff_x30;
    pcVar1 = "ASSERTION";
    if (*(param_2 + 8) != 0) {
        pcVar1 = NULL;
    }
    arg2 = "EXPECTATION";
    if (*(param_2 + 8) != 1) {
        arg2 = pcVar1;
    }
    arg3 = *(param_2 + 0x10);
    auVar2 = sym.string_stream_add(param_3,param_1,arg2,arg3);
    auVar2 = sym.string_stream_add(param_3,auVar2,*(param_2 + 0x30),arg3);
    if (*(param_2 + 0x18) != 0) {
        sym.string_stream_add(param_3,auVar2,param_2 + 0x18,arg3);
    }
    return;
}


// ===== sym.kunit_base_assert_format.cfi_jt @ 0x08001788 (size 8) =====

void sym.kunit_base_assert_format.cfi_jt(uchar param_1 [16],int64_t param_2,int64_t param_3)

{
    char *pcVar1;
    char *arg2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = "ASSERTION";
    if (*(param_2 + 8) != 0) {
        pcVar1 = NULL;
    }
    arg2 = "EXPECTATION";
    if (*(param_2 + 8) != 1) {
        arg2 = pcVar1;
    }
    sym.string_stream_add(param_3,param_1,arg2,*(param_2 + 0x10));
    return;
}


// ===== sym.__typeid__ZTSFvP14kunit_resourceE_global_addr @ 0x08001790 (size 8) =====

void sym.__typeid__ZTSFvP14kunit_resourceE_global_addr(ulong *param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree(*param_1);
    return;
}


// ===== sym.string_stream_fragment_free.5cabb814e2bb2d63a9a0361c54bc5597.cfi_jt @ 0x08001798 (size 8) =====

void sym.string_stream_fragment_free.5cabb814e2bb2d63a9a0361c54bc5597.cfi_jt(ulong *param_1)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *in_x18;
    int64_t *arg2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg2 = *param_1;
    uVar3 = __list_del_entry_valid(arg2 + 1);
    if ((uVar3 & 1) != 0) {
        iVar1 = arg2[1];
        piVar2 = arg2[2];
        *(iVar1 + 8) = piVar2;
        *piVar2 = iVar1;
    }
    arg2[1] = -0x2152ffffffffff00;
    arg2[2] = -0x2152fffffffffede;
    sym.kunit_kfree(*arg2,arg2[3]);
    sym.kunit_kfree(*arg2,arg2);
    return;
}


// ===== sym.string_stream_free.5cabb814e2bb2d63a9a0361c54bc5597.cfi_jt @ 0x080017a0 (size 8) =====

void sym.string_stream_free.5cabb814e2bb2d63a9a0361c54bc5597.cfi_jt(ulong *param_1)

{
    ulong *puVar1;
    ulong *in_x18;
    ulong *puVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    param_1 = *param_1;
    _raw_spin_lock(param_1 + 3);
    puVar1 = param_1[1];
    while (param_1 + 1 != puVar1) {
        puVar2 = *puVar1;
        sym.kunit_destroy_resource(puVar1[-1],0x80016c0,puVar1 + -1);
        puVar1 = puVar2;
    }
    *param_1 = 0;
    _raw_spin_unlock(param_1 + 3);
    return;
}


// ===== sym.__typeid__ZTSFvP4krefE_global_addr @ 0x080017a8 (size 8) =====

void sym.__typeid__ZTSFvP4krefE_global_addr(int64_t param_1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = *(param_1 + -8);
    if (pcVar1 != NULL) {
        if (2 < (pcVar1 + -0x8001790 >> 3 | pcVar1 << 0x3d)) {
            __cfi_slowpath_diag(0xbf31d628c1d63ac0,pcVar1,0x8000440);
        }
        (*pcVar1)(param_1 + -0x18);
        kfree(param_1 + -0x18);
    }
    return;
}


// ===== sym.kunit_log_append @ 0x080017b0 (size 236) =====

int64_t sym.kunit_log_append(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t *piVar4;
    ulong *in_x18;
    ulong unaff_x30;
    uchar auStack_238 [512];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iVar3 = memset(auStack_238,0,0x200);
    if (arg1 != 0) {
        iVar3 = strlen(arg1);
        iVar1 = 0x1ff - iVar3;
        if (0 < iVar1) {
            vsnprintf(auStack_238,0x200,arg2,&stack0xfffffffffffffd88);
            iVar3 = strncat(arg1,auStack_238,iVar1);
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return iVar3;
    }
    iVar3 = __stack_chk_fail();
    piVar4 = *(iVar3 + 0x110);
    if (*piVar4 != 0) {
        iVar3 = 0;
        do {
            piVar4 = piVar4 + 5;
            iVar3 = iVar3 + 1;
        } while (*piVar4 != 0);
        return iVar3;
    }
    return 0;
}


// ===== sym.kunit_suite_num_test_cases @ 0x0800189c (size 56) =====

int64_t sym.kunit_suite_num_test_cases(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    
    piVar2 = *(arg1 + 0x110);
    if (*piVar2 != 0) {
        iVar1 = 0;
        do {
            piVar2 = piVar2 + 5;
            iVar1 = iVar1 + 1;
        } while (*piVar2 != 0);
        return iVar1;
    }
    return 0;
}


// ===== sym.kunit_suite_has_succeeded @ 0x080018d4 (size 80) =====

ulong sym.kunit_suite_has_succeeded(int64_t arg1)

{
    ulong uVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    
    if (**(arg1 + 0x110) == 0) {
        return 2;
    }
    uVar1 = 2;
    piVar3 = *(arg1 + 0x110);
    do {
        piVar2 = piVar3 + 5;
        if (piVar3[3] == 0) {
            uVar1 = 0;
        }
        else if (piVar3[3] == 1) {
            return 1;
        }
        piVar3 = piVar2;
    } while (*piVar2 != 0);
    return uVar1;
}


// ===== sym.kunit_test_case_num @ 0x08001924 (size 52) =====

int sym.kunit_test_case_num(int64_t arg1,uint32_t arg2)

{
    int iVar1;
    int64_t *piVar2;
    
    piVar2 = *(arg1 + 0x110);
    if (*piVar2 != 0) {
        iVar1 = 1;
        do {
            if (piVar2 == arg2) {
                return iVar1;
            }
            piVar2 = piVar2 + 5;
            iVar1 = iVar1 + 1;
        } while (*piVar2 != 0);
    }
    return 0;
}


// ===== sym.kunit_do_assertion @ 0x08001958 (size 564) =====

void sym.kunit_do_assertion(int64_t arg1,int64_t arg2,uchar noname_2 [16],int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    uint64_t uVar3;
    uint64_t in_x2;
    int64_t iVar4;
    ulong *in_x18;
    int64_t unaff_x19;
    int64_t unaff_x20;
    int64_t unaff_x21;
    code *unaff_x22;
    code *pcVar5;
    int64_t *piVar6;
    int64_t *piVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iVar4 = *(iVar4 + 0x5e0);
    if ((in_x2 & 1) != 0) goto code_r0x08001a50;
    *(arg2 + 0x18) = arg3;
    *(arg2 + 0x20) = &stack0xffffffffffffff88;
    *(arg1 + 0x58) = 1;
    unaff_x21 = sym.alloc_string_stream(arg1,0xcc0);
    if (unaff_x21 != 0) {
        pcVar5 = *(arg2 + 0x28);
        if (7 < (pcVar5 + -0x8001750 >> 3 | pcVar5 << 0x3d)) goto code_r0x08001b68;
        while( true ) {
            (*pcVar5)(arg2,unaff_x21);
            uVar3 = sym.string_stream_is_empty(unaff_x21);
            unaff_x22 = pcVar5;
            if ((uVar3 & 1) == 0) {
                unaff_x22 = sym.string_stream_get_string(unaff_x21);
                if (unaff_x22 == NULL) {
                    _printk(0x8000767,*(arg1 + 8));
                    sym.kunit_log_append(*(arg1 + 0x10),0x8000a9f,*(arg1 + 8),arg3);
                    piVar6 = unaff_x21 + 8;
                    piVar7 = *piVar6;
                    if (piVar6 != piVar7) {
                        pcVar5 = 0x80004e0;
                        do {
                            _printk(0x80004e0,*(arg1 + 8),piVar7[2]);
                            arg3 = piVar7[2];
                            sym.kunit_log_append(*(arg1 + 0x10),0x800052b,*(arg1 + 8),arg3);
                            piVar7 = *piVar7;
                        } while (piVar6 != piVar7);
                    }
                    _printk(0x8000a12,*(arg1 + 8));
                    sym.kunit_log_append(*(arg1 + 0x10),0x80006a4,*(arg1 + 8),arg3);
                    unaff_x22 = pcVar5;
                }
                else {
                    _printk(0x80004e0,*(arg1 + 8),unaff_x22);
                    arg3 = unaff_x22;
                    sym.kunit_log_append(*(arg1 + 0x10),0x800052b,*(arg1 + 8),unaff_x22);
                    sym.kunit_kfree(arg1,unaff_x22);
                }
            }
            iVar2 = sym.kunit_destroy_resource(*(unaff_x21 + 0x20),0x80016c0,unaff_x21);
            if (iVar2 != 0) break;
            unaff_x19 = arg1;
            unaff_x20 = arg2;
            if (*(arg2 + 8) != 0) {
code_r0x08001a50:
                iVar1 = sp_el0;
                if (*(iVar1 + 0x5e0) == iVar4) {
                    return;
                }
                __stack_chk_fail();
                arg1 = unaff_x19;
                arg2 = unaff_x20;
            }
            sym.kunit_abort(arg1);
            pcVar5 = unaff_x22;
code_r0x08001b68:
            __cfi_slowpath_diag(0xb8b429fbd90dd133,pcVar5,0x80003c0);
        }
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x8001a2c);
        (*pcVar5)();
    }
    __warn_printk("Could not allocate stream to print failed assertion in %s:%d\n",*(arg2 + 0x10),*(arg2 + 0xc));
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x800,0x8001a48);
    (*pcVar5)();
}


// ===== sym.kunit_abort @ 0x08001b8c (size 24) =====

void sym.kunit_abort(int64_t arg1)

{
    int64_t iVar1;
    uchar *in_x2;
    ulong *in_x18;
    ulong unaff_x30;
    uchar auVar2 [16];
    
    *in_x18 = unaff_x30;
    auVar2 = sym.kunit_try_catch_throw(arg1 + 0x18);
    iVar1 = auVar2._0_8_;
    *(iVar1 + 0x54) = 0;
    *(iVar1 + 0x60) = iVar1 + 0x60;
    *(iVar1 + 0x68) = iVar1 + 0x60;
    *(iVar1 + 8) = auVar2._8_8_;
    *(iVar1 + 0x10) = in_x2;
    if (in_x2 != NULL) {
        *in_x2 = 0;
    }
    *(iVar1 + 0x58) = 0;
    *(iVar1 + 0x70) = 0;
    return;
}


// ===== sym.kunit_init_test @ 0x08001ba4 (size 48) =====

void sym.kunit_init_test(int64_t arg1,int64_t arg2,int64_t arg3)

{
    *(arg1 + 0x54) = 0;
    *(arg1 + 0x60) = arg1 + 0x60;
    *(arg1 + 0x68) = arg1 + 0x60;
    *(arg1 + 8) = arg2;
    *(arg1 + 0x10) = arg3;
    if (arg3 != 0) {
        *arg3 = 0;
    }
    *(arg1 + 0x58) = 0;
    *(arg1 + 0x70) = 0;
    return;
}


// ===== sym.kunit_run_tests @ 0x08001bd4 (size 1720) =====

//WARNING: Type propagation algorithm not settling

ulong sym.kunit_run_tests(int64_t arg1)

{
    char *pcVar1;
    char *pcVar2;
    int iVar3;
    ulong uVar4;
    int64_t iVar5;
    char *pcVar6;
    uint32_t arg2;
    char *pcVar7;
    int64_t in_x3;
    int64_t *piVar8;
    uint64_t arg3;
    int64_t iVar9;
    int64_t *piVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar11;
    int64_t arg4;
    uint64_t uVar12;
    code *pcVar13;
    int64_t iVar14;
    int64_t iVar15;
    uint64_t uVar16;
    int64_t iVar17;
    ulong unaff_x30;
    uchar auVar18 [16];
    int64_t aiStack_2a8 [6];
    uchar *puStack_278;
    int64_t iStack_270;
    int64_t *piStack_268;
    uchar auStack_260 [8];
    int64_t iStack_258;
    uchar *puStack_250;
    uchar *apuStack_248 [3];
    code *pcStack_230;
    code *pcStack_228;
    int64_t iStack_218;
    int iStack_210;
    uint uStack_20c;
    uint32_t uStack_208;
    ulong *******pppppppuStack_200;
    ulong *******pppppppuStack_1f8;
    uchar uStack_1f0;
    uint64_t uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_70 = *(iVar5 + 0x5e0);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    aiStack_2a8[4] = 0;
    aiStack_2a8[5] = 0;
    aiStack_2a8[3] = 0;
    _printk(0x8000a51,arg1);
    sym.kunit_log_append(*(arg1 + 0x220),0x8000705,arg1,in_x3);
    piVar8 = *(arg1 + 0x110);
    iVar5 = 0;
    if (*piVar8 != 0) {
        iVar5 = 0;
        do {
            piVar8 = piVar8 + 5;
            iVar5 = iVar5 + 1;
        } while (*piVar8 != 0);
    }
    _printk(0x8000603,iVar5);
    iVar5 = 0;
    piVar8 = *(arg1 + 0x110);
    iVar9 = *piVar8;
    while (iVar9 != 0) {
        piVar8 = piVar8 + 5;
        iVar5 = iVar5 + 1;
        iVar9 = *piVar8;
    }
    sym.kunit_log_append(*(arg1 + 0x220),0x8000718,iVar5,in_x3);
    piVar8 = *(arg1 + 0x110);
    if (*piVar8 == 0) {
        uVar11 = 0;
        arg4 = 0;
        iVar9 = 0;
        iVar5 = 0;
        uVar12 = 0;
        iVar14 = 0;
        iVar15 = 0;
        iVar17 = 0;
    }
    else {
        uVar12 = 0;
        iVar5 = 0;
        iVar9 = 0;
        arg4 = 0;
        uVar11 = 0;
        do {
            memset(auStack_260,0,0x170);
            pcVar13 = piVar8[2];
            aiStack_2a8[1] = 0;
            aiStack_2a8[2] = 0;
            aiStack_2a8[0] = 0;
            *(piVar8 + 3) = 2;
            if (pcVar13 == NULL) {
                iStack_258 = piVar8[1];
                puStack_250 = piVar8[4];
                uStack_20c = 0;
                if (puStack_250 != NULL) {
                    *puStack_250 = 0;
                }
                puStack_278 = auStack_260;
                uStack_208 = 0;
                uStack_1f0 = 0;
                pcStack_230 = sym.__typeid__ZTSFvPvE_global_addr;
                pcStack_228 = sym.kunit_catch_run_case.adde4c4ab23eb7e113210deebb519fe6.cfi_jt;
                iStack_270 = arg1;
                piStack_268 = piVar8;
                apuStack_248[0] = puStack_278;
                pppppppuStack_200 = &pppppppuStack_200;
                pppppppuStack_1f8 = &pppppppuStack_200;
                sym.kunit_try_catch_run(apuStack_248,&puStack_278);
                if ((uStack_208 == 1) || ((piVar8[3] != 1 && (uStack_208 == 0)))) {
                    *(piVar8 + 3) = uStack_208;
                }
                if (uStack_208 == 0) {
                    piVar10 = aiStack_2a8 + 2;
                }
                else if (uStack_208 == 1) {
                    piVar10 = aiStack_2a8;
                }
                else {
                    if (uStack_208 != 2) {
                        uVar16 = 1;
                        goto code_r0x08001ffc;
                    }
                    piVar10 = aiStack_2a8 + 1;
                }
                uVar16 = 1;
                *piVar10 = *piVar10 + 1;
            }
            else {
                uStack_f0 = uStack_f0 & 0xffffffffffffff00;
                __cfi_slowpath_diag(0xc957a9e93efd3439,pcVar13,0x8000360);
                iStack_218 = (*pcVar13)(0,&uStack_f0);
                uVar16 = 0;
                if (iStack_218 != 0) {
                    do {
                        iStack_258 = piVar8[1];
                        puStack_250 = piVar8[4];
                        uStack_20c = 0;
                        if (puStack_250 != NULL) {
                            *puStack_250 = 0;
                        }
                        puStack_278 = auStack_260;
                        uStack_208 = 0;
                        uStack_1f0 = 0;
                        pcStack_230 = sym.__typeid__ZTSFvPvE_global_addr;
                        pcStack_228 = sym.kunit_catch_run_case.adde4c4ab23eb7e113210deebb519fe6.cfi_jt;
                        iStack_270 = arg1;
                        piStack_268 = piVar8;
                        apuStack_248[0] = puStack_278;
                        pppppppuStack_200 = &pppppppuStack_200;
                        pppppppuStack_1f8 = &pppppppuStack_200;
                        sym.kunit_try_catch_run(apuStack_248,&puStack_278);
                        if ((uStack_208 == 1) || ((piVar8[3] != 1 && (uStack_208 == 0)))) {
                            *(piVar8 + 3) = uStack_208;
                        }
                        if (uStack_f0 == '\0') {
                            snprintf(&uStack_f0,0x80,"param-%d",iStack_210);
                        }
                        pcVar7 = "invalid";
                        if (uStack_208 < 3) {
                            pcVar7 = *(uStack_208 * 8 + 0x8000f20);
                        }
                        _printk(0x8000514,piVar8[1],pcVar7,iStack_210 + 1,&uStack_f0);
                        pcVar7 = "invalid";
                        if (uStack_208 < 3) {
                            pcVar7 = *(uStack_208 * 8 + 0x8000f20);
                        }
                        sym.kunit_log_append(puStack_250,0x80006ef,piVar8[1],pcVar7);
                        pcVar13 = piVar8[2];
                        uStack_f0 = uStack_f0 & 0xffffffffffffff00;
                        __cfi_slowpath_diag(0xc957a9e93efd3439,pcVar13,0x8000380);
                        iStack_218 = (*pcVar13)(iStack_218,&uStack_f0);
                        iStack_210 = iStack_210 + 1;
                        if (uStack_208 == 0) {
                            piVar10 = aiStack_2a8 + 2;
code_r0x08001f20:
                            *piVar10 = *piVar10 + 1;
                        }
                        else {
                            if (uStack_208 == 1) {
                                piVar10 = aiStack_2a8;
                                goto code_r0x08001f20;
                            }
                            if (uStack_208 == 2) {
                                piVar10 = aiStack_2a8 + 1;
                                goto code_r0x08001f20;
                            }
                        }
                        uVar16 = uVar16 + 1;
                    } while (iStack_218 != 0);
                    iStack_218 = 0;
                }
            }
code_r0x08001ffc:
            iVar17 = aiStack_2a8[2];
            iVar15 = aiStack_2a8[1];
            iVar14 = aiStack_2a8[0];
            if ((_segment.ehdr != 0) && ((_segment.ehdr == 2 || (1 < uVar16)))) {
                _printk(0x8000ad6,iStack_258,aiStack_2a8[2],aiStack_2a8[0],aiStack_2a8[1],uVar16);
                sym.kunit_log_append(puStack_250,0x80006b1,iStack_258,iVar17);
            }
            piVar10 = *(arg1 + 0x110);
            arg3 = 0;
            if (*piVar10 != 0) {
                arg3 = 1;
                do {
                    if (piVar10 == piVar8) goto code_r0x08002050;
                    piVar10 = piVar10 + 5;
                    arg3 = arg3 + 1;
                } while (*piVar10 != 0);
                arg3 = 0;
            }
code_r0x08002050:
            sym.kunit_print_ok_not_ok(arg3,1,*(piVar8 + 3),arg3);
            iVar3 = piVar8[3];
            if (iVar3 == 0) {
                piVar10 = aiStack_2a8 + 5;
code_r0x08001d0c:
                *piVar10 = *piVar10 + 1;
            }
            else {
                if (iVar3 == 1) {
                    piVar10 = aiStack_2a8 + 3;
                    goto code_r0x08001d0c;
                }
                if (iVar3 == 2) {
                    piVar10 = aiStack_2a8 + 4;
                    goto code_r0x08001d0c;
                }
            }
            uVar12 = uVar12 + 1;
            iVar5 = iVar17 + iVar5;
            iVar9 = iVar15 + iVar9;
            arg4 = iVar14 + arg4;
            piVar8 = piVar8 + 5;
            uVar11 = uVar16 + uVar11;
            iVar14 = aiStack_2a8[4];
            iVar15 = aiStack_2a8[5];
            iVar17 = aiStack_2a8[3];
        } while (*piVar8 != 0);
    }
    if (_segment.ehdr != 0) {
        if ((_segment.ehdr == 2) || (1 < uVar12)) {
            _printk(0x800057a,arg1,iVar15,iVar17,iVar14,uVar12);
            sym.kunit_log_append(*(arg1 + 0x220),0x800054e,arg1,iVar15);
        }
        if ((_segment.ehdr != 0) && ((_segment.ehdr == 2 || (1 < uVar11)))) {
            _printk(0x8000c4d,iVar5,arg4,iVar9,uVar11);
            sym.kunit_log_append(*(arg1 + 0x220),0x8000817,iVar5,arg4);
        }
    }
    iVar5 = _segment.ehdr;
    if (**(arg1 + 0x110) == 0) {
        arg2 = 2;
    }
    else {
        arg2 = 2;
        piVar8 = *(arg1 + 0x110);
        do {
            piVar10 = piVar8 + 5;
            if (piVar8[3] == 0) {
                arg2 = 0;
            }
            else if (piVar8[3] == 1) {
                arg2 = 1;
                break;
            }
            piVar8 = piVar10;
        } while (*piVar10 != 0);
    }
    pcVar7 = arg1 + 0x118;
    iVar9 = _segment.ehdr;
    _segment.ehdr = _segment.ehdr + 1;
    sym.kunit_print_ok_not_ok(0x8000000,0,arg2,iVar5);
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_70) {
        return 0;
    }
    auVar18 = __stack_chk_fail();
    iVar5 = auVar18._0_8_;
    *extraout_x18 = sym.kunit_print_ok_not_ok;
    pcVar1 = 0x8000a65;
    pcVar2 = " # SKIP ";
    if (arg2 != 2) {
        pcVar2 = pcVar1;
    }
    if ((iVar5 != 0) && ((auVar18._8_8_ & 1) == 0)) {
        if (arg2 < 3) {
            pcVar6 = *(arg2 * 8 + 0x8000f20);
        }
        else {
            pcVar6 = "invalid";
        }
        if (arg2 != 2) {
            pcVar7 = pcVar1;
        }
        uVar4 = _printk(0x8000804,pcVar6,iVar9,arg1,pcVar2,pcVar7);
        return uVar4;
    }
    if ((auVar18._8_8_ & 1) == 0) {
        iVar5 = 0;
    }
    pcVar6 = 0x8000941;
    if ((arg2 == 0) || (arg2 == 2)) {
code_r0x08002378:
        if (arg2 != 2) {
            pcVar7 = pcVar1;
        }
        _printk(0x8000a2a,pcVar6,iVar9,arg1,pcVar2,pcVar7);
        iVar5 = *(iVar5 + 0x10);
        pcVar7 = 0x8000941;
        if ((arg2 == 0) || (pcVar7 = 0x8000941, arg2 == 2)) goto code_r0x080023d0;
        if (arg2 != 1) {
            pcVar7 = "invalid";
            goto code_r0x080023d0;
        }
    }
    else {
        if (arg2 != 1) {
            pcVar6 = "invalid";
            goto code_r0x08002378;
        }
        _printk(0x8000a2a,"not ok",iVar9,arg1,pcVar2,0x8000a65);
        iVar5 = *(iVar5 + 0x10);
    }
    pcVar7 = "not ok";
code_r0x080023d0:
    uVar4 = sym.kunit_log_append(iVar5,0x8000539,pcVar7,iVar9);
    return uVar4;
}


// ===== sym.kunit_print_ok_not_ok @ 0x0800228c (size 380) =====

void sym.kunit_print_ok_not_ok(ulong noname_0,uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    int64_t in_x0;
    int64_t arg1_00;
    char *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((in_x0 != 0) && ((arg1 & 1) == 0)) {
        if (arg2 < 3) {
            pcVar1 = *(arg2 * 8 + 0x8000f20);
        }
        else {
            pcVar1 = "invalid";
        }
        _printk(0x8000804,pcVar1,arg3);
        return;
    }
    if ((arg1 & 1) == 0) {
        in_x0 = 0;
    }
    pcVar1 = 0x8000941;
    if ((arg2 == 0) || (arg2 == 2)) {
code_r0x08002378:
        _printk(0x8000a2a,pcVar1,arg3);
        arg1_00 = *(in_x0 + 0x10);
        pcVar1 = 0x8000941;
        if ((arg2 == 0) || (pcVar1 = 0x8000941, arg2 == 2)) goto code_r0x080023d0;
        if (arg2 != 1) {
            pcVar1 = "invalid";
            goto code_r0x080023d0;
        }
    }
    else {
        if (arg2 != 1) {
            pcVar1 = "invalid";
            goto code_r0x08002378;
        }
        _printk(0x8000a2a,"not ok",arg3);
        arg1_00 = *(in_x0 + 0x10);
    }
    pcVar1 = "not ok";
code_r0x080023d0:
    sym.kunit_log_append(arg1_00,0x8000539,pcVar1,arg3);
    return;
}


// ===== sym.__kunit_test_suites_init @ 0x08002408 (size 108) =====

ulong sym.__kunit_test_suites_init(int64_t arg1)

{
    ulong *in_x18;
    int64_t arg1_00;
    uint64_t uVar1;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *arg1;
    if (arg1_00 != 0) {
        uVar1 = 1;
        piVar2 = arg1;
        do {
            sym.kunit_debugfs_create_suite(arg1_00);
            *(arg1_00 + 0x118) = 0;
            sym.kunit_run_tests(*piVar2);
            piVar2 = arg1 + uVar1 * 8;
            uVar1 = uVar1 + 1;
            arg1_00 = *piVar2;
        } while (arg1_00 != 0);
    }
    return 0;
}


// ===== sym.__kunit_test_suites_exit @ 0x08002474 (size 72) =====

void sym.__kunit_test_suites_exit(int64_t arg1)

{
    int64_t arg1_00;
    ulong *in_x18;
    uint64_t uVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *arg1;
    if (arg1_00 != 0) {
        uVar1 = 1;
        do {
            sym.kunit_debugfs_destroy_suite(arg1_00);
            arg1_00 = *(arg1 + uVar1 * 8);
            uVar1 = uVar1 + 1;
        } while (arg1_00 != 0);
    }
    return;
}


// ===== sym.kunit_add_resource @ 0x080024bc (size 260) =====

ulong sym.kunit_add_resource(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    ulong uVar2;
    uint64_t uVar3;
    ulong in_x4;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg4 + 0x10) = arg3;
    *(arg4 + 0x18) = 1;
    if (arg2 == 0) {
        *arg4 = in_x4;
    }
    else {
        if (2 < (arg2 - 0x80016e0U >> 3 | arg2 << 0x3d)) {
            __cfi_slowpath_diag(0xfc3f557367492ab,arg2,0x80003a0);
        }
        uVar2 = (*arg2)(arg4,in_x4);
        if (uVar2 != 0) {
            return uVar2;
        }
    }
    uVar2 = _raw_spin_lock_irqsave(arg1 + 0x54);
    piVar4 = *(arg1 + 0x68);
    iVar1 = arg4 + 0x20;
    uVar3 = __list_add_valid(iVar1,piVar4,arg1 + 0x60);
    if ((uVar3 & 1) != 0) {
        *(arg1 + 0x68) = iVar1;
        *(arg4 + 0x20) = arg1 + 0x60;
        *(arg4 + 0x28) = piVar4;
        *piVar4 = iVar1;
    }
    _raw_spin_unlock_irqrestore(arg1 + 0x54,uVar2);
    return 0;
}


// ===== sym.kunit_add_named_resource @ 0x080025c0 (size 688) =====

ulong sym.kunit_add_named_resource(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    ulong uVar7;
    uint32_t *puVar8;
    uint64_t uVar9;
    ulong uVar10;
    int64_t in_x4;
    ulong in_x5;
    int64_t iVar11;
    ulong *in_x18;
    code *pcVar12;
    int64_t *piVar13;
    int64_t iVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (in_x4 == 0) {
        uVar7 = 0xffffffea;
    }
    else {
        iVar1 = arg1 + 0x54;
        uVar7 = _raw_spin_lock_irqsave(iVar1);
        iVar14 = *(arg1 + 0x68);
        iVar2 = arg1 + 0x60;
code_r0x08002624:
        if (iVar2 == iVar14) {
            _raw_spin_unlock_irqrestore(iVar1,uVar7);
        }
        else {
            if ((*(iVar14 + -0x18) == 0) || (iVar6 = strcmp(), iVar6 != 0)) goto code_r0x08002620;
            puVar8 = iVar14 + -8;
            Hint_Prefetch(puVar8,2,0,1);
            do {
                uVar3 = *puVar8;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar8,0x10);
                if (bVar5) {
                    *puVar8 = uVar3 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            iVar11 = iVar14 + -0x20;
            if (uVar3 == 0) {
                uVar10 = 2;
code_r0x080027ac:
                refcount_warn_saturate(puVar8,uVar10);
            }
            else if ((uVar3 + 1 | uVar3) < 0) {
                uVar10 = 1;
                goto code_r0x080027ac;
            }
            _raw_spin_unlock_irqrestore(iVar1,uVar7);
            if (iVar11 != 0) {
                Hint_Prefetch(puVar8,2,0,1);
                do {
                    uVar3 = *puVar8;
                    cVar4 = '\x01';
                    bVar5 = ExclusiveMonitorPass(puVar8,0x10);
                    if (bVar5) {
                        *puVar8 = uVar3 - 1;
                        cVar4 = ExclusiveMonitorsStatus();
                    }
                } while (cVar4 != '\0');
                if (uVar3 == 1) {
                    DataMemoryBarrier(2,1);
                    pcVar12 = *(iVar14 + -0x10);
                    if (pcVar12 != NULL) {
                        if (2 < (pcVar12 + -0x8001790 >> 3 | pcVar12 << 0x3d)) {
                            __cfi_slowpath_diag(0xbf31d628c1d63ac0,pcVar12,0x8000440);
                        }
                        (*pcVar12)(iVar11);
                        kfree(iVar11);
                        return 0xffffffef;
                    }
                }
                else if (uVar3 < 1) {
                    refcount_warn_saturate(puVar8,3);
                    return 0xffffffef;
                }
                return 0xffffffef;
            }
        }
        *(arg4 + 8) = in_x4;
        *(arg4 + 0x10) = arg3;
        *(arg4 + 0x18) = 1;
        if (arg2 == 0) {
            *arg4 = in_x5;
        }
        else {
            if (2 < (arg2 - 0x80016e0U >> 3 | arg2 << 0x3d)) {
                __cfi_slowpath_diag(0xfc3f557367492ab,arg2,0x80003a0);
            }
            uVar7 = (*arg2)(arg4);
            if (uVar7 != 0) {
                return uVar7;
            }
        }
        uVar7 = _raw_spin_lock_irqsave(iVar1);
        piVar13 = *(arg1 + 0x68);
        iVar14 = arg4 + 0x20;
        uVar9 = __list_add_valid(iVar14,piVar13,iVar2);
        if ((uVar9 & 1) != 0) {
            *(arg1 + 0x68) = iVar14;
            *(arg4 + 0x20) = iVar2;
            *(arg4 + 0x28) = piVar13;
            *piVar13 = iVar14;
        }
        _raw_spin_unlock_irqrestore(iVar1,uVar7);
        uVar7 = 0;
    }
    return uVar7;
code_r0x08002620:
    iVar14 = *(iVar14 + 8);
    goto code_r0x08002624;
}


// ===== sym.kunit_alloc_and_get_resource @ 0x08002870 (size 456) =====

ulong * sym.kunit_alloc_and_get_resource(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    ulong *puVar1;
    int64_t iVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    ulong *puVar7;
    ulong uVar8;
    uint64_t uVar9;
    ulong in_x4;
    int64_t iVar10;
    ulong *in_x18;
    uint32_t *puVar11;
    int64_t *piVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg4 & 0x400010) == 0) {
        iVar10 = 0;
    }
    else {
        iVar10 = 1;
        if ((arg4 & 0x10) != 0) {
            iVar10 = 2;
        }
    }
    iVar2 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar2 = 0x30;
    }
    puVar7 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar2 + iVar10 * 0x70),arg4 | 0x100,0x30);
    if (puVar7 != NULL) {
        puVar11 = puVar7 + 3;
        *puVar11 = 1;
        puVar7[2] = arg3;
        if (arg2 == 0) {
            *puVar7 = in_x4;
        }
        else {
            if (2 < (arg2 - 0x80016e0U >> 3 | arg2 << 0x3d)) {
                __cfi_slowpath_diag(0xfc3f557367492ab,arg2,0x80003a0);
            }
            iVar6 = (*arg2)(puVar7);
            if (iVar6 != 0) {
                return NULL;
            }
        }
        uVar8 = _raw_spin_lock_irqsave(arg1 + 0x54);
        piVar12 = *(arg1 + 0x68);
        puVar1 = puVar7 + 4;
        uVar9 = __list_add_valid(puVar1,piVar12,arg1 + 0x60);
        if ((uVar9 & 1) != 0) {
            *(arg1 + 0x68) = puVar1;
            puVar7[4] = arg1 + 0x60;
            puVar7[5] = piVar12;
            *piVar12 = puVar1;
        }
        _raw_spin_unlock_irqrestore(arg1 + 0x54,uVar8);
        Hint_Prefetch(puVar11,2,0,1);
        do {
            uVar3 = *puVar11;
            cVar4 = '\x01';
            bVar5 = ExclusiveMonitorPass(puVar11,0x10);
            if (bVar5) {
                *puVar11 = uVar3 + 1;
                cVar4 = ExclusiveMonitorsStatus();
            }
        } while (cVar4 != '\0');
        if (uVar3 == 0) {
            uVar8 = 2;
        }
        else {
            if (-1 < (uVar3 + 1 | uVar3)) {
                return puVar7;
            }
            uVar8 = 1;
        }
        refcount_warn_saturate(puVar11,uVar8);
    }
    return puVar7;
}


// ===== sym.kunit_remove_resource @ 0x08002a38 (size 316) =====

void sym.kunit_remove_resource(int64_t arg1,int64_t arg2)

{
    int *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int iVar4;
    char cVar5;
    bool bVar6;
    ulong uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    code *pcVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar7 = _raw_spin_lock_irqsave(arg1 + 0x54);
    uVar8 = __list_del_entry_valid(arg2 + 0x20);
    if ((uVar8 & 1) != 0) {
        iVar2 = *(arg2 + 0x20);
        piVar3 = *(arg2 + 0x28);
        *(iVar2 + 8) = piVar3;
        *piVar3 = iVar2;
    }
    *(arg2 + 0x20) = 0xdead000000000100;
    *(arg2 + 0x28) = 0xdead000000000122;
    _raw_spin_unlock_irqrestore(arg1 + 0x54,uVar7);
    piVar1 = arg2 + 0x18;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        iVar4 = *piVar1;
        cVar5 = '\x01';
        bVar6 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
            *piVar1 = iVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
        }
    } while (cVar5 != '\0');
    if (iVar4 == 1) {
        DataMemoryBarrier(2,1);
        pcVar9 = *(arg2 + 0x10);
        if (pcVar9 != NULL) {
            if (2 < (pcVar9 + -0x8001790 >> 3 | pcVar9 << 0x3d)) {
                __cfi_slowpath_diag(0xbf31d628c1d63ac0,pcVar9,0x8000440);
            }
            (*pcVar9)(arg2);
            kfree(arg2);
        }
    }
    else if (iVar4 < 1) {
        refcount_warn_saturate(piVar1,3);
    }
    return;
}


// ===== sym.kunit_destroy_resource @ 0x08002b74 (size 564) =====

ulong sym.kunit_destroy_resource(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    ulong uVar5;
    uint64_t uVar6;
    ulong uVar7;
    ulong *in_x18;
    int64_t arg2_00;
    code *pcVar8;
    uint32_t *puVar9;
    int64_t iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg1 + 0x54;
    uVar5 = _raw_spin_lock_irqsave(iVar1);
    iVar10 = *(arg1 + 0x68);
    if (arg1 + 0x60 != iVar10) {
        do {
            arg2_00 = iVar10 + -0x20;
            if (2 < (arg2 - 0x80016b8U >> 3 | arg2 << 0x3d)) {
                __cfi_slowpath_diag(0xc84bbd6dbfa5e5cb,arg2,0x8000460);
            }
            uVar6 = (*arg2)(arg1,arg2_00,arg3);
            if ((uVar6 & 1) != 0) {
                puVar9 = iVar10 + -8;
                Hint_Prefetch(puVar9,2,0,1);
                do {
                    uVar2 = *puVar9;
                    cVar3 = '\x01';
                    bVar4 = ExclusiveMonitorPass(puVar9,0x10);
                    if (bVar4) {
                        *puVar9 = uVar2 + 1;
                        cVar3 = ExclusiveMonitorsStatus();
                    }
                } while (cVar3 != '\0');
                if (uVar2 == 0) {
                    uVar7 = 2;
                }
                else {
                    if (-1 < (uVar2 + 1 | uVar2)) goto code_r0x08002c64;
                    uVar7 = 1;
                }
                refcount_warn_saturate(puVar9,uVar7);
code_r0x08002c64:
                _raw_spin_unlock_irqrestore(iVar1,uVar5);
                if (arg2_00 != 0) {
                    sym.kunit_remove_resource(arg1,arg2_00);
                    Hint_Prefetch(puVar9,2,0,1);
                    do {
                        uVar2 = *puVar9;
                        cVar3 = '\x01';
                        bVar4 = ExclusiveMonitorPass(puVar9,0x10);
                        if (bVar4) {
                            *puVar9 = uVar2 - 1;
                            cVar3 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar3 != '\0');
                    if (uVar2 == 1) {
                        DataMemoryBarrier(2,1);
                        pcVar8 = *(iVar10 + -0x10);
                        if (pcVar8 != NULL) {
                            if (2 < (pcVar8 + -0x8001790 >> 3 | pcVar8 << 0x3d)) {
                                __cfi_slowpath_diag(0xbf31d628c1d63ac0,pcVar8,0x8000440);
                            }
                            (*pcVar8)(arg2_00);
                            kfree(arg2_00);
                        }
                    }
                    else if (uVar2 < 1) {
                        refcount_warn_saturate(puVar9,3);
                    }
                    return 0;
                }
                return 0xfffffffe;
            }
            iVar10 = *(iVar10 + 8);
        } while (arg1 + 0x60 != iVar10);
    }
    _raw_spin_unlock_irqrestore(iVar1,uVar5);
    return 0xfffffffe;
}


// ===== sym.kunit_kmalloc_array @ 0x08002da8 (size 320) =====

int64_t sym.kunit_kmalloc_array(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    uchar auVar2 [16];
    uchar auVar3 [16];
    int64_t *piVar4;
    int64_t iVar5;
    ulong uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *puVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg4 & 0x400010U) == 0) {
        iVar8 = 0;
    }
    else {
        iVar8 = 1;
        if ((arg4 & 0x10U) != 0) {
            iVar8 = 2;
        }
    }
    iVar5 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar5 = 0x30;
    }
    piVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar5 + iVar8 * 0x70),arg4 | 0x100,0x30);
    iVar8 = 0;
    if (piVar4 != NULL) {
        auVar2._8_8_ = 0;
        auVar2._0_8_ = arg2;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = arg3;
        piVar4[2] = sym.__typeid__ZTSFvP14kunit_resourceE_global_addr;
        *(piVar4 + 3) = 1;
        if (SUB168(auVar2 * auVar3,8) == 0) {
            iVar5 = __kmalloc(arg2 * arg3,arg4 & 0xffffffff);
            *piVar4 = iVar5;
            iVar8 = 0;
            if (iVar5 != 0) {
                uVar6 = _raw_spin_lock_irqsave(arg1 + 0x54);
                puVar9 = *(arg1 + 0x68);
                piVar1 = piVar4 + 4;
                uVar7 = __list_add_valid(piVar1,puVar9,arg1 + 0x60);
                if ((uVar7 & 1) != 0) {
                    *(arg1 + 0x68) = piVar1;
                    piVar4[4] = arg1 + 0x60;
                    piVar4[5] = puVar9;
                    *puVar9 = piVar1;
                }
                _raw_spin_unlock_irqrestore(arg1 + 0x54,uVar6);
                iVar8 = *piVar4;
            }
        }
        else {
            iVar8 = 0;
            *piVar4 = 0;
        }
    }
    return iVar8;
}


// ===== sym.kunit_kmalloc_array_init @ 0x08002ee8 (size 100) =====

uint sym.kunit_kmalloc_array_init(int64_t arg1,int64_t arg2)

{
    uchar auVar1 [16];
    uchar auVar2 [16];
    int64_t iVar3;
    uint uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = *arg2;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = *(arg2 + 8);
    if (SUB168(auVar1 * auVar2,8) == 0) {
        iVar3 = __kmalloc(*arg2 * *(arg2 + 8),*(arg2 + 0x10));
    }
    else {
        iVar3 = 0;
    }
    *arg1 = iVar3;
    uVar4 = 0xfffffff4;
    if (iVar3 != 0) {
        uVar4 = 0;
    }
    return uVar4;
}


// ===== sym.kunit_kmalloc_array_free @ 0x08002f4c (size 40) =====

void sym.kunit_kmalloc_array_free(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree(*arg1);
    return;
}


// ===== sym.kunit_kfree @ 0x08002f74 (size 444) =====

void sym.kunit_kfree(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int iVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    ulong uVar6;
    uint32_t *puVar7;
    int64_t iVar8;
    ulong *in_x18;
    code *pcVar9;
    int64_t *arg2_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar6 = _raw_spin_lock_irqsave(arg1 + 0x54);
    iVar8 = *(arg1 + 0x68);
    do {
        if (arg1 + 0x60 == iVar8) {
            arg2_00 = NULL;
code_r0x08003000:
            _raw_spin_unlock_irqrestore(arg1 + 0x54,uVar6);
            sym.kunit_remove_resource(arg1,arg2_00);
            piVar1 = arg2_00 + 3;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                iVar2 = *piVar1;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                    *piVar1 = iVar2 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            if (iVar2 == 1) {
                DataMemoryBarrier(2,1);
                pcVar9 = arg2_00[2];
                if (pcVar9 != NULL) {
                    if (2 < (pcVar9 + -0x8001790 >> 3 | pcVar9 << 0x3d)) {
                        __cfi_slowpath_diag(0xbf31d628c1d63ac0,pcVar9,0x8000440);
                    }
                    (*pcVar9)(arg2_00);
                    kfree(arg2_00);
                }
            }
            else if (iVar2 < 1) {
                refcount_warn_saturate(piVar1,3);
            }
            return;
        }
        arg2_00 = iVar8 + -0x20;
        if (*arg2_00 == arg2) {
            puVar7 = iVar8 + -8;
            Hint_Prefetch(puVar7,2,0,1);
            do {
                uVar3 = *puVar7;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar7,0x10);
                if (bVar5) {
                    *puVar7 = uVar3 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            if (uVar3 == 0) {
                refcount_warn_saturate(puVar7,2);
            }
            else if ((uVar3 + 1 | uVar3) < 0) {
                refcount_warn_saturate(puVar7,1);
            }
            goto code_r0x08003000;
        }
        iVar8 = *(iVar8 + 8);
    } while( true );
}


// ===== sym.kunit_resource_instance_match @ 0x08003130 (size 24) =====

bool sym.kunit_resource_instance_match(ulong noname_0,int64_t arg1,uint32_t arg2)

{
    return *arg1 == arg2;
}


// ===== sym.kunit_cleanup @ 0x08003148 (size 148) =====

void sym.kunit_cleanup(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *puVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg1 + 0x54;
    uVar2 = _raw_spin_lock_irqsave(iVar1);
    puVar3 = *(arg1 + 0x60);
    while (arg1 + 0x60 != puVar3) {
        iVar4 = *(arg1 + 0x68);
        _raw_spin_unlock_irqrestore(iVar1,uVar2);
        sym.kunit_remove_resource(arg1,iVar4 + -0x20);
        uVar2 = _raw_spin_lock_irqsave(iVar1);
        puVar3 = *(arg1 + 0x60);
    }
    _raw_spin_unlock_irqrestore(iVar1,uVar2);
    iVar1 = sp_el0;
    *(iVar1 + 0xa88) = 0;
    return;
}


// ===== sym.kunit_try_run_case @ 0x080031e4 (size 248) =====

void sym.kunit_try_run_case(int64_t arg1)

{
    int64_t arg1_00;
    int64_t arg2;
    int64_t iVar1;
    uint32_t uVar2;
    ulong *in_x18;
    code *pcVar3;
    ulong *puVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *arg1;
    arg2 = *(arg1 + 8);
    iVar1 = sp_el0;
    puVar4 = *(arg1 + 0x10);
    *(iVar1 + 0xa88) = arg1_00;
    pcVar3 = *(arg2 + 0x100);
    if (pcVar3 != NULL) {
        __cfi_slowpath_diag(0xe0908ae9f1892030,pcVar3,0x80003e0);
        uVar2 = (*pcVar3)(arg1_00);
        if (uVar2 != 0) {
            _printk(0x8000c27,*(arg1_00 + 8),uVar2);
            sym.kunit_log_append(*(arg1_00 + 0x10),0x8000a66,*(arg1_00 + 8),uVar2);
            *(arg1_00 + 0x58) = 1;
            goto code_r0x0800325c;
        }
    }
    pcVar3 = *puVar4;
    if (pcVar3 != sym.__typeid__ZTSFvP5kunitE_global_addr) {
        __cfi_slowpath_diag(0xd4b8f0056f1d5318,pcVar3,0x8000400);
    }
    (*pcVar3)(arg1_00);
code_r0x0800325c:
    sym.kunit_run_case_cleanup(arg1_00,arg2);
    return;
}


// ===== sym.kunit_catch_run_case @ 0x080032dc (size 156) =====

void sym.kunit_catch_run_case(int64_t arg1)

{
    uint32_t uVar1;
    int64_t in_x3;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *arg1;
    uVar1 = *(arg1_00 + 0x28);
    if (uVar1 == 0) {
        sym.kunit_run_case_cleanup(arg1_00,*(arg1 + 8));
    }
    else {
        *(arg1_00 + 0x58) = 1;
        if (uVar1 == 0xffffff92) {
            _printk(0x8000724,*(arg1_00 + 8));
            sym.kunit_log_append(*(arg1_00 + 0x10),0x80007e4,*(arg1_00 + 8),in_x3);
        }
        else {
            _printk(0x80008c0,*(arg1_00 + 8),uVar1);
            sym.kunit_log_append(*(arg1_00 + 0x10),0x8000b4e,*(arg1_00 + 8),uVar1);
        }
    }
    return;
}


// ===== sym.kunit_run_case_cleanup @ 0x08003378 (size 216) =====

void sym.kunit_run_case_cleanup(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *puVar3;
    int64_t iVar4;
    ulong *in_x18;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar5 = *(arg2 + 0x108);
    if (pcVar5 != NULL) {
        if (pcVar5 != sym.__typeid__ZTSFvP5kunitE_global_addr) {
            __cfi_slowpath_diag(0xd4b8f0056f1d5318,pcVar5,0x8000420);
        }
        (*pcVar5)(arg1);
    }
    iVar1 = arg1 + 0x54;
    uVar2 = _raw_spin_lock_irqsave(iVar1);
    puVar3 = *(arg1 + 0x60);
    while (arg1 + 0x60 != puVar3) {
        iVar4 = *(arg1 + 0x68);
        _raw_spin_unlock_irqrestore(iVar1,uVar2);
        sym.kunit_remove_resource(arg1,iVar4 + -0x20);
        uVar2 = _raw_spin_lock_irqsave(iVar1);
        puVar3 = *(arg1 + 0x60);
    }
    _raw_spin_unlock_irqrestore(iVar1,uVar2);
    iVar1 = sp_el0;
    *(iVar1 + 0xa88) = 0;
    return;
}


// ===== sym.kunit_resource_name_match @ 0x08003458 (size 56) =====

bool sym.kunit_resource_name_match(ulong noname_0,int64_t arg1,int64_t arg2)

{
    bool bVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bVar1 = false;
    if (*(arg1 + 8) != 0) {
        iVar2 = strcmp(*(arg1 + 8),arg2);
        bVar1 = iVar2 == 0;
    }
    return bVar1;
}


// ===== sym.kunit_release_resource @ 0x08003490 (size 136) =====

void sym.kunit_release_resource(int64_t arg1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = *(arg1 + -8);
    if (pcVar1 != NULL) {
        if (2 < (pcVar1 + -0x8001790 >> 3 | pcVar1 << 0x3d)) {
            __cfi_slowpath_diag(0xbf31d628c1d63ac0,pcVar1,0x8000440);
        }
        (*pcVar1)(arg1 + -0x18);
        kfree(arg1 + -0x18);
    }
    return;
}


// ===== sym.__cfi_check_fail @ 0x08003518 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800355c

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
    //switch table (4 cases) at 0x8000c7e
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8003570);
    (*pcVar1)();
}


// ===== sym.string_stream_vadd @ 0x08003570 (size 456) =====

int64_t sym.string_stream_vadd(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    int64_t *piVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar8;
    int64_t *piVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    uchar *puStack_f8;
    uchar **ppuStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    uchar *puStack_d8;
    uchar **ppuStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    uchar auStack_a0 [8];
    int64_t iStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_58 = *(iVar7 + 0x5e0);
    iStack_98 = *arg3;
    uStack_90 = *(arg3 + 8);
    uStack_88 = *(arg3 + 0x10);
    uStack_80 = *(arg3 + 0x18);
    uStack_78 = iStack_98;
    uStack_70 = uStack_90;
    uStack_68 = uStack_88;
    uStack_60 = uStack_80;
    iVar3 = vsnprintf(0,0,arg2);
    uVar2 = *(arg1 + 0x28);
    iVar7 = 0;
    iVar8 = *(arg1 + 0x20);
    uStack_90 = CONCAT44(uVar2,iVar3 + 1);
    if (((uVar2 & 0x400010) != 0) && (iVar7 = 1, (uVar2 & 0x10) != 0)) {
        iVar7 = 2;
    }
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    iStack_98 = iVar8;
    piVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1 + iVar7 * 0x70),uVar2 | 0x100);
    if (((piVar5 == NULL) || (iVar4 = sym.kunit_add_resource(iVar8,0x80016f0,0x8001798,piVar5), iVar4 != 0)) ||
       (iVar7 = *piVar5, iVar7 == 0)) {
        iVar7 = 0xfffffff4;
    }
    else {
        iStack_98 = *arg3;
        uStack_90 = *(arg3 + 8);
        uStack_88 = *(arg3 + 0x10);
        uStack_80 = *(arg3 + 0x18);
        iVar3 = vsnprintf(*(iVar7 + 0x18),iVar3 + 1,arg2);
        _raw_spin_lock(arg1 + 0x18);
        piVar5 = *(arg1 + 0x10);
        iVar8 = iVar7 + 8;
        *arg1 = *arg1 + iVar3;
        uVar6 = __list_add_valid(iVar8,piVar5);
        if ((uVar6 & 1) != 0) {
            *(arg1 + 0x10) = iVar8;
            *(iVar7 + 8) = arg1 + 8;
            *(iVar7 + 0x10) = piVar5;
            *piVar5 = iVar8;
        }
        _raw_spin_unlock(arg1 + 0x18);
        iVar7 = 0;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_58) {
        return iVar7;
    }
    auVar10 = __stack_chk_fail(iVar7);
    *extraout_x18 = sym.string_stream_add;
    pcStack_a8 = sym.string_stream_add;
    iVar7 = sp_el0;
    iStack_b8 = *(iVar7 + 0x5e0);
    puStack_f8 = auStack_a0;
    ppuStack_f0 = &puStack_f8;
    uStack_c8 = 0;
    uStack_c0 = 0xffffffd0;
    uStack_e8 = 0;
    uStack_e0 = 0xffffffd0;
    puStack_d8 = puStack_f8;
    ppuStack_d0 = ppuStack_f0;
    puStack_b0 = &stack0xffffffffffffffb0;
    iVar8 = sym.string_stream_vadd(auVar10._0_8_,auVar10._8_8_,&puStack_f8);
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_b8) {
        return iVar8;
    }
    piVar5 = __stack_chk_fail();
    *extraout_x18_00 = sym.string_stream_get_string;
    iVar8 = *piVar5;
    iVar7 = sym.kunit_kmalloc_array(piVar5[4],1,iVar8 + 1,*(piVar5 + 5) | 0x100);
    if (iVar7 != 0) {
        _raw_spin_lock(piVar5 + 3);
        for (piVar9 = piVar5[1]; piVar5 + 1 != piVar9; piVar9 = *piVar9) {
            strlcat(iVar7,piVar9[2],iVar8 + 1);
        }
        _raw_spin_unlock(piVar5 + 3);
    }
    return iVar7;
}


// ===== sym.string_stream_add @ 0x08003738 (size 128) =====

int64_t sym.string_stream_add(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t iVar3;
    int64_t in_x1;
    int64_t iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iVar4 = *(iVar3 + 0x5e0);
    iVar1 = sym.string_stream_vadd(arg1,in_x1,&stack0xffffffffffffffa8);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iVar4) {
        piVar2 = __stack_chk_fail();
        *extraout_x18 = sym.string_stream_get_string;
        iVar1 = *piVar2;
        iVar3 = sym.kunit_kmalloc_array(piVar2[4],1,iVar1 + 1,*(piVar2 + 5) | 0x100);
        if (iVar3 != 0) {
            _raw_spin_lock(piVar2 + 3);
            for (piVar5 = piVar2[1]; piVar2 + 1 != piVar5; piVar5 = *piVar5) {
                strlcat(iVar3,piVar5[2],iVar1 + 1);
            }
            _raw_spin_unlock(piVar2 + 3);
        }
        return iVar3;
    }
    return iVar1;
}


// ===== sym.string_stream_get_string @ 0x080037b8 (size 164) =====

int64_t sym.string_stream_get_string(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t *piVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *arg1;
    iVar1 = sym.kunit_kmalloc_array(*(arg1 + 0x20),1,iVar2 + 1,*(arg1 + 0x28) | 0x100);
    if (iVar1 != 0) {
        _raw_spin_lock(arg1 + 0x18);
        for (piVar3 = *(arg1 + 8); arg1 + 8 != piVar3; piVar3 = *piVar3) {
            strlcat(iVar1,piVar3[2],iVar2 + 1);
        }
        _raw_spin_unlock(arg1 + 0x18);
    }
    return iVar1;
}


// ===== sym.string_stream_append @ 0x0800385c (size 184) =====

ulong sym.string_stream_append(int64_t arg1,int64_t arg2)

{
    int64_t arg3;
    int64_t iVar1;
    ulong uVar2;
    int64_t arg2_00;
    uint64_t arg4;
    ulong *in_x18;
    int64_t *piVar3;
    ulong unaff_x30;
    uchar noname_1 [16];
    
    *in_x18 = unaff_x30;
    arg3 = *arg2 + 1;
    arg4 = *(arg2 + 0x28) | 0x100;
    arg2_00 = arg3;
    iVar1 = sym.kunit_kmalloc_array(*(arg2 + 0x20),1,arg3,arg4);
    if (iVar1 == 0) {
        uVar2 = 0xfffffff4;
    }
    else {
        _raw_spin_lock(arg2 + 0x18);
        for (piVar3 = *(arg2 + 8); arg2 + 8 != piVar3; piVar3 = *piVar3) {
            arg2_00 = arg3;
            strlcat(iVar1,piVar3[2]);
        }
        noname_1 = _raw_spin_unlock(arg2 + 0x18);
        uVar2 = sym.string_stream_add(arg1,noname_1,arg2_00,arg4);
    }
    return uVar2;
}


// ===== sym.string_stream_is_empty @ 0x08003914 (size 28) =====

bool sym.string_stream_is_empty(int64_t arg1)

{
    return arg1 + 8 == *(arg1 + 8);
}


// ===== sym.alloc_string_stream @ 0x08003934 (size 244) =====

ulong sym.alloc_string_stream(int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    int iVar2;
    ulong *arg4;
    ulong uVar3;
    int64_t *piVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar7 [16];
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iVar6 = *(iVar5 + 0x5e0);
    iVar5 = 0;
    if (((arg2 & 0x400010) != 0) && (iVar5 = 1, (arg2 & 0x10) != 0)) {
        iVar5 = 2;
    }
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    arg4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1 + iVar5 * 0x70),arg2 | 0x100,0x30);
    uVar3 = 0;
    if (arg4 != NULL) {
        iVar2 = sym.kunit_add_resource(arg1,0x80016e8,0x80017a0,arg4);
        if (iVar2 == 0) {
            uVar3 = *arg4;
        }
        else {
            uVar3 = 0;
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iVar6) {
        auVar7 = __stack_chk_fail(uVar3);
        piVar4 = auVar7._8_8_;
        *extraout_x18 = sym.string_stream_init;
        iVar5 = sym.kunit_kmalloc_array(*piVar4,1,0x30,*(piVar4 + 1) | 0x100);
        if (iVar5 == 0) {
            uVar3 = 0xfffffff4;
        }
        else {
            uVar3 = 0;
            *auVar7._0_8_ = iVar5;
            *(iVar5 + 0x28) = piVar4[1];
            *(iVar5 + 0x20) = *piVar4;
            *(iVar5 + 8) = iVar5 + 8;
            *(iVar5 + 0x10) = iVar5 + 8;
            *(iVar5 + 0x18) = 0;
        }
        return uVar3;
    }
    return uVar3;
}


// ===== sym.string_stream_init @ 0x08003a28 (size 128) =====

ulong sym.string_stream_init(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sym.kunit_kmalloc_array(*arg2,1,0x30,*(arg2 + 8) | 0x100);
    if (iVar1 == 0) {
        uVar2 = 0xfffffff4;
    }
    else {
        uVar2 = 0;
        *arg1 = iVar1;
        *(iVar1 + 0x28) = *(arg2 + 8);
        *(iVar1 + 0x20) = *arg2;
        *(iVar1 + 8) = iVar1 + 8;
        *(iVar1 + 0x10) = iVar1 + 8;
        *(iVar1 + 0x18) = 0;
    }
    return uVar2;
}


// ===== sym.string_stream_free @ 0x08003aa8 (size 136) =====

void sym.string_stream_free(int64_t arg1)

{
    ulong *puVar1;
    ulong *in_x18;
    ulong *puVar2;
    ulong *puVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = *arg1;
    _raw_spin_lock(puVar2 + 3);
    puVar1 = puVar2[1];
    while (puVar2 + 1 != puVar1) {
        puVar3 = *puVar1;
        sym.kunit_destroy_resource(puVar1[-1],0x80016c0,puVar1 + -1);
        puVar1 = puVar3;
    }
    *puVar2 = 0;
    _raw_spin_unlock(puVar2 + 3);
    return;
}


// ===== sym.string_stream_destroy @ 0x08003b30 (size 52) =====

void sym.string_stream_destroy(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.kunit_destroy_resource(*(arg1 + 0x20),0x80016c0,arg1);
    return;
}


// ===== sym.kunit_resource_instance_match_1 @ 0x08003b64 (size 24) =====

bool sym.kunit_resource_instance_match_1(ulong noname_0,int64_t arg1,uint32_t arg2)

{
    return *arg1 == arg2;
}


// ===== sym.string_stream_fragment_init @ 0x08003b7c (size 140) =====

ulong sym.string_stream_fragment_init(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = sym.kunit_kmalloc_array(*arg2,1,0x20,*(arg2 + 0xc) | 0x100);
    if (puVar1 != NULL) {
        *puVar1 = *arg2;
        iVar2 = sym.kunit_kmalloc_array(*arg2,1,*(arg2 + 8),*(arg2 + 0xc));
        puVar1[3] = iVar2;
        if (iVar2 != 0) {
            *arg1 = puVar1;
            return 0;
        }
    }
    return 0xfffffff4;
}


// ===== sym.string_stream_fragment_free @ 0x08003c08 (size 112) =====

void sym.string_stream_fragment_free(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *in_x18;
    int64_t *arg2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg2 = *arg1;
    uVar3 = __list_del_entry_valid(arg2 + 1);
    if ((uVar3 & 1) != 0) {
        iVar1 = arg2[1];
        piVar2 = arg2[2];
        *(iVar1 + 8) = piVar2;
        *piVar2 = iVar1;
    }
    arg2[1] = -0x2152ffffffffff00;
    arg2[2] = -0x2152fffffffffede;
    sym.kunit_kfree(*arg2,arg2[3]);
    sym.kunit_kfree(*arg2,arg2);
    return;
}


// ===== sym.kunit_base_assert_format @ 0x08003c78 (size 92) =====

void sym.kunit_base_assert_format(int64_t arg1,int64_t arg2)

{
    char *pcVar1;
    char *arg2_00;
    ulong *in_x18;
    ulong unaff_x30;
    uchar in_q0 [16];
    
    *in_x18 = unaff_x30;
    pcVar1 = "ASSERTION";
    if (*(arg1 + 8) != 0) {
        pcVar1 = NULL;
    }
    arg2_00 = "EXPECTATION";
    if (*(arg1 + 8) != 1) {
        arg2_00 = pcVar1;
    }
    sym.string_stream_add(arg2,in_q0,arg2_00,*(arg1 + 0x10));
    return;
}


// ===== sym.kunit_assert_print_msg @ 0x08003cd4 (size 64) =====

void sym.kunit_assert_print_msg(int64_t arg1,int64_t arg2)

{
    int64_t in_x3;
    ulong *in_x18;
    ulong unaff_x30;
    uchar in_q0 [16];
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x18) != 0) {
        sym.string_stream_add(arg2,in_q0,arg1 + 0x18,in_x3);
    }
    return;
}


// ===== sym.kunit_fail_assert_format @ 0x08003d14 (size 124) =====

void sym.kunit_fail_assert_format(int64_t arg1,int64_t arg2)

{
    char *pcVar1;
    char *arg2_00;
    int64_t arg3;
    ulong *in_x18;
    ulong unaff_x30;
    uchar in_q0 [16];
    uchar noname_1 [16];
    
    *in_x18 = unaff_x30;
    pcVar1 = "ASSERTION";
    if (*(arg1 + 8) != 0) {
        pcVar1 = NULL;
    }
    arg2_00 = "EXPECTATION";
    if (*(arg1 + 8) != 1) {
        arg2_00 = pcVar1;
    }
    arg3 = *(arg1 + 0x10);
    noname_1 = sym.string_stream_add(arg2,in_q0,arg2_00,arg3);
    sym.string_stream_add(arg2,noname_1,arg1 + 0x18,arg3);
    return;
}


// ===== sym.kunit_unary_assert_format @ 0x08003d90 (size 172) =====

void sym.kunit_unary_assert_format(int64_t arg1,int64_t arg2)

{
    char *pcVar1;
    char *arg2_00;
    int64_t arg3;
    ulong *in_x18;
    ulong unaff_x30;
    uchar in_q0 [16];
    uchar auVar2 [16];
    
    *in_x18 = unaff_x30;
    pcVar1 = "ASSERTION";
    if (*(arg1 + 8) != 0) {
        pcVar1 = NULL;
    }
    arg2_00 = "EXPECTATION";
    if (*(arg1 + 8) != 1) {
        arg2_00 = pcVar1;
    }
    arg3 = *(arg1 + 0x10);
    auVar2 = sym.string_stream_add(arg2,in_q0,arg2_00,arg3);
    auVar2 = sym.string_stream_add(arg2,auVar2,*(arg1 + 0x30),arg3);
    if (*(arg1 + 0x18) != 0) {
        sym.string_stream_add(arg2,auVar2,arg1 + 0x18,arg3);
    }
    return;
}


// ===== sym.kunit_ptr_not_err_assert_format @ 0x08003e3c (size 200) =====

void sym.kunit_ptr_not_err_assert_format(int64_t arg1,int64_t arg2)

{
    char *pcVar1;
    char *arg2_00;
    uint64_t arg3;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    uchar in_q0 [16];
    uchar noname_1 [16];
    
    *in_x18 = unaff_x30;
    pcVar1 = "ASSERTION";
    if (*(arg1 + 8) != 0) {
        pcVar1 = NULL;
    }
    arg2_00 = "EXPECTATION";
    if (*(arg1 + 8) != 1) {
        arg2_00 = pcVar1;
    }
    noname_1 = sym.string_stream_add(arg2,in_q0,arg2_00,*(arg1 + 0x10));
    arg3 = *(arg1 + 0x38);
    if (arg3 == 0) {
        noname_1 = sym.string_stream_add(arg2,noname_1,*(arg1 + 0x30),0);
        iVar2 = *(arg1 + 0x18);
    }
    else {
        if (0xfffffffffffff000 < arg3) {
            noname_1 = sym.string_stream_add(arg2,noname_1,*(arg1 + 0x30),arg3);
        }
        iVar2 = *(arg1 + 0x18);
    }
    if (iVar2 != 0) {
        sym.string_stream_add(arg2,noname_1,arg1 + 0x18,arg3);
    }
    return;
}


// ===== sym.kunit_binary_assert_format @ 0x08003f04 (size 236) =====

void sym.kunit_binary_assert_format(int64_t arg1,int64_t arg2)

{
    char *pcVar1;
    char *arg2_00;
    uint64_t uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    uchar in_q0 [16];
    uchar auVar4 [16];
    uchar noname_1 [16];
    uchar noname_1_00 [16];
    
    *in_x18 = unaff_x30;
    pcVar1 = "ASSERTION";
    if (*(arg1 + 8) != 0) {
        pcVar1 = NULL;
    }
    arg2_00 = "EXPECTATION";
    if (*(arg1 + 8) != 1) {
        arg2_00 = pcVar1;
    }
    auVar4 = sym.string_stream_add(arg2,in_q0,arg2_00,*(arg1 + 0x10));
    sym.string_stream_add(arg2,auVar4,*(arg1 + 0x38),*(arg1 + 0x30));
    uVar2 = sym.is_literal(*(arg2 + 0x20),*(arg1 + 0x38),*(arg1 + 0x40),*(arg2 + 0x28));
    if ((uVar2 & 1) == 0) {
        sym.string_stream_add(arg2,noname_1,*(arg1 + 0x38),*(arg1 + 0x40));
    }
    uVar2 = *(arg2 + 0x28);
    uVar3 = sym.is_literal(*(arg2 + 0x20),*(arg1 + 0x48),*(arg1 + 0x50),uVar2);
    auVar4 = noname_1_00;
    if ((uVar3 & 1) == 0) {
        uVar2 = *(arg1 + 0x50);
        auVar4 = sym.string_stream_add(arg2,noname_1_00,*(arg1 + 0x48),uVar2);
    }
    if (*(arg1 + 0x18) != 0) {
        sym.string_stream_add(arg2,auVar4,arg1 + 0x18,uVar2);
    }
    return;
}


// ===== sym.is_literal @ 0x08003ff0 (size 224) =====

bool sym.is_literal(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    int64_t iVar2;
    int64_t arg2_00;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(0,0,"%lld",arg3);
    iVar2 = strlen(arg2);
    if (iVar2 == iVar1) {
        arg2_00 = sym.kunit_kmalloc_array(arg1,1,iVar1 + 1,arg4 & 0xffffffff);
        if (arg2_00 != 0) {
            snprintf(arg2_00,iVar1 + 1,"%lld",arg3);
            iVar1 = strncmp(arg2_00,arg2,iVar2);
            sym.kunit_kfree(arg1,arg2_00);
            return iVar1 == 0;
        }
    }
    return false;
}


// ===== sym.kunit_binary_ptr_assert_format @ 0x080040d0 (size 196) =====

void sym.kunit_binary_ptr_assert_format(int64_t arg1,int64_t arg2)

{
    char *pcVar1;
    char *arg2_00;
    int64_t arg3;
    ulong *in_x18;
    ulong unaff_x30;
    uchar in_q0 [16];
    uchar auVar2 [16];
    
    *in_x18 = unaff_x30;
    pcVar1 = "ASSERTION";
    if (*(arg1 + 8) != 0) {
        pcVar1 = NULL;
    }
    arg2_00 = "EXPECTATION";
    if (*(arg1 + 8) != 1) {
        arg2_00 = pcVar1;
    }
    auVar2 = sym.string_stream_add(arg2,in_q0,arg2_00,*(arg1 + 0x10));
    auVar2 = sym.string_stream_add(arg2,auVar2,*(arg1 + 0x38),*(arg1 + 0x30));
    auVar2 = sym.string_stream_add(arg2,auVar2,*(arg1 + 0x38),*(arg1 + 0x40));
    arg3 = *(arg1 + 0x50);
    auVar2 = sym.string_stream_add(arg2,auVar2,*(arg1 + 0x48),arg3);
    if (*(arg1 + 0x18) != 0) {
        sym.string_stream_add(arg2,auVar2,arg1 + 0x18,arg3);
    }
    return;
}


// ===== sym.kunit_binary_str_assert_format @ 0x08004194 (size 356) =====

void sym.kunit_binary_str_assert_format(int64_t arg1,int64_t arg2)

{
    char *pcVar1;
    char *arg2_00;
    int iVar2;
    int64_t arg3;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    uchar in_q0 [16];
    uchar auVar4 [16];
    uchar extraout_q0 [16];
    uchar extraout_q0_00 [16];
    uchar extraout_q0_01 [16];
    uchar extraout_q0_02 [16];
    
    *in_x18 = unaff_x30;
    pcVar1 = "ASSERTION";
    if (*(arg1 + 8) != 0) {
        pcVar1 = NULL;
    }
    arg2_00 = "EXPECTATION";
    if (*(arg1 + 8) != 1) {
        arg2_00 = pcVar1;
    }
    auVar4 = sym.string_stream_add(arg2,in_q0,arg2_00,*(arg1 + 0x10));
    arg3 = *(arg1 + 0x30);
    sym.string_stream_add(arg2,auVar4,*(arg1 + 0x38),arg3);
    pcVar1 = *(arg1 + 0x38);
    iVar3 = *(arg1 + 0x40);
    iVar2 = strlen(pcVar1);
    auVar4 = extraout_q0;
    if ((((iVar2 < 2) || (*pcVar1 != '\"')) || (pcVar1[iVar2 - 1] != '\"')) ||
       (iVar2 = strncmp(pcVar1 + 1,iVar3,iVar2 + -2), auVar4 = extraout_q0_00, iVar2 != 0)) {
        sym.string_stream_add(arg2,auVar4,pcVar1,iVar3);
        arg3 = iVar3;
    }
    pcVar1 = *(arg1 + 0x48);
    iVar3 = *(arg1 + 0x50);
    iVar2 = strlen(pcVar1);
    auVar4 = extraout_q0_01;
    if (((iVar2 < 2) || (*pcVar1 != '\"')) ||
       ((pcVar1[iVar2 - 1] != '\"' ||
        (iVar2 = strncmp(pcVar1 + 1,iVar3,iVar2 + -2), auVar4 = extraout_q0_02, iVar2 != 0)))) {
        auVar4 = sym.string_stream_add(arg2,auVar4,pcVar1,iVar3);
        arg3 = iVar3;
    }
    if (*(arg1 + 0x18) != 0) {
        sym.string_stream_add(arg2,auVar4,arg1 + 0x18,arg3);
    }
    return;
}


// ===== sym.kunit_try_catch_throw @ 0x080042f8 (size 40) =====

void sym.kunit_try_catch_throw(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    ulong uVar5;
    char *arg4;
    ulong *in_x18;
    ulong *extraout_x18;
    code *arg4_00;
    int64_t iVar6;
    ulong unaff_x30;
    uchar auVar7 [16];
    ulong uStack_68;
    ulong uStack_60;
    ulong **ppuStack_58;
    ulong **ppuStack_50;
    int64_t iStack_48;
    uchar *puStack_40;
    code *pcStack_38;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0x10) = 0xfffffff2;
    auVar7 = complete_and_exit(*(arg1 + 8),0xfffffffffffffff2);
    piVar3 = auVar7._0_8_;
    *extraout_x18 = sym.kunit_try_catch_run;
    pcStack_38 = sym.kunit_try_catch_run;
    iVar6 = sp_el0;
    iStack_48 = *(iVar6 + 0x5e0);
    ppuStack_58 = &ppuStack_58;
    arg4 = "kunit_try_catch_thread";
    iVar6 = *piVar3;
    piVar3[5] = auVar7._8_8_;
    piVar3[1] = &uStack_68;
    *(piVar3 + 2) = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    ppuStack_50 = ppuStack_58;
    puStack_40 = &stack0xfffffffffffffff0;
    uVar4 = kthread_create_on_node
                      (sym.kunit_generic_run_threadfn_adapter.e1f6b370ce2a588bc8cf7c6f15b0a96f.cfi_jt,piVar3,
                       0xffffffff);
    if (0xfffffffffffff000 < uVar4) {
        arg4_00 = piVar3[4];
        if ((arg4_00 + -0x8001730 >> 3 | arg4_00 << 0x3d) < 2) goto code_r0x0800442c;
        uVar5 = 0x8000480;
        while( true ) {
            __cfi_slowpath_diag(0x4c550309df1cf4c1,arg4_00,uVar5);
code_r0x0800442c:
            (*arg4_00)(piVar3[5]);
code_r0x08004434:
            iVar6 = sp_el0;
            if (*(iVar6 + 0x5e0) == iStack_48) break;
            __stack_chk_fail();
code_r0x080044bc:
            uVar5 = 0x80004a0;
        }
        return;
    }
    wake_up_process();
    iVar2 = wait_for_completion_timeout(&uStack_68,75000);
    if (iVar2 == 0) {
        _printk(0x8000926,*(iVar6 + 8));
        sym.kunit_log_append(*(iVar6 + 0x10),0x80007ca,*(iVar6 + 8),arg4);
        arg4_00 = 0xffffff92;
        *(piVar3 + 2) = 0xffffff92;
    }
    else {
        uVar1 = *(piVar3 + 2);
        arg4_00 = uVar1;
        if (uVar1 == 0xfffffff2) {
            *(piVar3 + 2) = 0;
            goto code_r0x08004410;
        }
        if (uVar1 == 0) goto code_r0x08004434;
        if (uVar1 == 0xfffffffc) {
            _printk(0x8000999,*(iVar6 + 8));
            sym.kunit_log_append(*(iVar6 + 0x10),0x8000614,*(iVar6 + 8),arg4);
            goto code_r0x08004410;
        }
    }
    _printk(0x80009c9,*(iVar6 + 8),arg4_00);
    sym.kunit_log_append(*(iVar6 + 0x10),0x8000bfd,*(iVar6 + 8),arg4_00);
code_r0x08004410:
    arg4_00 = piVar3[4];
    if (1 < (arg4_00 + -0x8001730 >> 3 | arg4_00 << 0x3d)) goto code_r0x080044bc;
    goto code_r0x0800442c;
}


// ===== sym.kunit_try_catch_run @ 0x08004320 (size 448) =====

void sym.kunit_try_catch_run(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    uint64_t uVar3;
    ulong uVar4;
    char *arg4;
    ulong *in_x18;
    code *arg4_00;
    int64_t iVar5;
    ulong unaff_x30;
    ulong uStack_58;
    ulong uStack_50;
    ulong **ppuStack_48;
    ulong **ppuStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    ppuStack_48 = &ppuStack_48;
    arg4 = "kunit_try_catch_thread";
    iVar5 = *arg1;
    *(arg1 + 0x28) = arg2;
    *(arg1 + 8) = &uStack_58;
    *(arg1 + 0x10) = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    ppuStack_40 = ppuStack_48;
    uVar3 = kthread_create_on_node
                      (sym.kunit_generic_run_threadfn_adapter.e1f6b370ce2a588bc8cf7c6f15b0a96f.cfi_jt,arg1,0xffffffff)
    ;
    if (0xfffffffffffff000 < uVar3) {
        arg4_00 = *(arg1 + 0x20);
        if ((arg4_00 + -0x8001730 >> 3 | arg4_00 << 0x3d) < 2) goto code_r0x0800442c;
        uVar4 = 0x8000480;
        while( true ) {
            __cfi_slowpath_diag(0x4c550309df1cf4c1,arg4_00,uVar4);
code_r0x0800442c:
            (*arg4_00)(*(arg1 + 0x28));
code_r0x08004434:
            iVar5 = sp_el0;
            if (*(iVar5 + 0x5e0) == iStack_38) break;
            __stack_chk_fail();
code_r0x080044bc:
            uVar4 = 0x80004a0;
        }
        return;
    }
    wake_up_process();
    iVar2 = wait_for_completion_timeout(&uStack_58,75000);
    if (iVar2 == 0) {
        _printk(0x8000926,*(iVar5 + 8));
        sym.kunit_log_append(*(iVar5 + 0x10),0x80007ca,*(iVar5 + 8),arg4);
        arg4_00 = 0xffffff92;
        *(arg1 + 0x10) = 0xffffff92;
    }
    else {
        uVar1 = *(arg1 + 0x10);
        arg4_00 = uVar1;
        if (uVar1 == 0xfffffff2) {
            *(arg1 + 0x10) = 0;
            goto code_r0x08004410;
        }
        if (uVar1 == 0) goto code_r0x08004434;
        if (uVar1 == 0xfffffffc) {
            _printk(0x8000999,*(iVar5 + 8));
            sym.kunit_log_append(*(iVar5 + 0x10),0x8000614,*(iVar5 + 8),arg4);
            goto code_r0x08004410;
        }
    }
    _printk(0x80009c9,*(iVar5 + 8),arg4_00);
    sym.kunit_log_append(*(iVar5 + 0x10),0x8000bfd,*(iVar5 + 8),arg4_00);
code_r0x08004410:
    arg4_00 = *(arg1 + 0x20);
    if (1 < (arg4_00 + -0x8001730 >> 3 | arg4_00 << 0x3d)) goto code_r0x080044bc;
    goto code_r0x0800442c;
}


// ===== sym.kunit_generic_run_threadfn_adapter @ 0x080044e0 (size 116) =====

void sym.kunit_generic_run_threadfn_adapter(int64_t arg1)

{
    code *pcVar1;
    code *extraout_x8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = *(arg1 + 0x18);
    if (1 < (pcVar1 + -0x8001730 >> 3 | pcVar1 << 0x3d)) goto code_r0x08004528;
    do {
        (*pcVar1)(*(arg1 + 0x28));
        complete_and_exit(*(arg1 + 8),0);
        pcVar1 = extraout_x8;
code_r0x08004528:
        __cfi_slowpath_diag(0x4c550309df1cf4c1,pcVar1,0x80004c0);
    } while( true );
}


// ===== sym.kunit_debugfs_cleanup @ 0x08004554 (size 44) =====

void sym.kunit_debugfs_cleanup(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    debugfs_remove(_segment.ehdr);
    return;
}


// ===== sym.kunit_debugfs_init @ 0x08004580 (size 72) =====

void sym.kunit_debugfs_init(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == 0) {
        _segment.ehdr = debugfs_create_dir("kunit",0);
    }
    return;
}


// ===== sym.kunit_debugfs_create_suite @ 0x080045c8 (size 176) =====

void sym.kunit_debugfs_create_suite(int64_t arg1)

{
    int64_t *piVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = kmem_cache_alloc_trace(_seq_lseek,0xdc0,0x200);
    *(arg1 + 0x220) = uVar2;
    iVar4 = **(arg1 + 0x110);
    piVar1 = *(arg1 + 0x110);
    while (iVar4 != 0) {
        iVar3 = kmem_cache_alloc_trace(_seq_lseek,0xdc0,0x200);
        iVar4 = piVar1[5];
        piVar1[4] = iVar3;
        piVar1 = piVar1 + 5;
    }
    uVar2 = debugfs_create_dir(arg1,_segment.ehdr);
    *(arg1 + 0x218) = uVar2;
    debugfs_create_file("results",0x8124,uVar2,arg1,obj.debugfs_results_fops);
    return;
}


// ===== sym.kunit_debugfs_destroy_suite @ 0x08004678 (size 92) =====

void sym.kunit_debugfs_destroy_suite(int64_t arg1)

{
    int64_t *piVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    debugfs_remove(*(arg1 + 0x218));
    kfree(*(arg1 + 0x220));
    iVar2 = **(arg1 + 0x110);
    piVar1 = *(arg1 + 0x110);
    while (iVar2 != 0) {
        kfree(piVar1[4]);
        iVar2 = piVar1[5];
        piVar1 = piVar1 + 5;
    }
    return;
}


// ===== sym.debugfs_results_open @ 0x080046d4 (size 56) =====

void sym.debugfs_results_open(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg2,sym.debugfs_print_results.5c8c11c49df7de0a6ddeaef783879c24.cfi_jt,*(arg1 + 0x2d8));
    return;
}


// ===== sym.debugfs_release @ 0x0800470c (size 36) =====

void sym.debugfs_release(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_release();
    return;
}


// ===== sym.debugfs_print_results @ 0x08004730 (size 224) =====

ulong sym.debugfs_print_results(int64_t arg1)

{
    uint32_t uVar1;
    char *pcVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t arg1_00;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x80);
    uVar1 = sym.kunit_suite_has_succeeded(arg1_00);
    if ((arg1_00 != 0) && (*(arg1_00 + 0x220) != 0)) {
        seq_printf(arg1,0x80005ed);
        piVar4 = *(arg1_00 + 0x110);
        iVar3 = *piVar4;
        while (iVar3 != 0) {
            if ((piVar4 != NULL) && (piVar4[4] != 0)) {
                seq_printf(arg1,0x80005ed);
            }
            piVar4 = piVar4 + 5;
            iVar3 = *piVar4;
        }
        if (uVar1 < 3) {
            pcVar2 = *(uVar1 * 8 + 0x8000f58);
        }
        else {
            pcVar2 = "invalid";
        }
        seq_printf(arg1,"%s %d - %s\n",pcVar2,1,arg1_00);
    }
    return 0;
}


// ===== sym.init_module @ 0x08004a80 (size 40) =====

ulong sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.kunit_debugfs_init();
    return 0;
}


// ===== sym.cleanup_module @ 0x08004aa8 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    debugfs_remove(_segment.ehdr);
    return;
}

