// decompiled from qti-ocp-notifier by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 212) =====

//WARNING: Switch with 1 destination removed at 0x08001714

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 != -0x3987c0e26ee29729) {
            if ((arg1 == -0x3557318fb8d07b71) && ((pcVar1 + -0x80010f8 >> 3 | pcVar1 << 0x3d) < 2)) {
                return;
            }
            goto code_r0x080016d4;
        }
        pcVar2 = sym.ocp_notifier_handler.10b88807fff125de0d04667d917fef4c.cfi_jt;
    }
    else if (arg1 == 0x2b3a43e29242445) {
        pcVar2 = sym.init_module.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080016d4;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080016d4:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001728);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x080010e0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.ocp_notifier_probe.10b88807fff125de0d04667d917fef4c.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080010e8 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.ocp_notifier_probe.10b88807fff125de0d04667d917fef4c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.ocp_notifier_handler.10b88807fff125de0d04667d917fef4c.cfi_jt @ 0x080010f0 (size 8) =====

uchar * sym.ocp_notifier_handler.10b88807fff125de0d04667d917fef4c.cfi_jt(ulong param_1,int64_t param_2)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    uchar *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar5 [16];
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_2c = 0;
    iVar2 = sym.ocp_notifier_read_entry(param_2,0,&uStack_2c);
    if ((iVar2 == 0) && (iVar2 = sym.ocp_notifier_log_event(param_2,&uStack_2c,0x80003a7), iVar2 == 0)) {
        iVar3 = idr_find(param_2 + 0x20,uStack_2c);
        if (iVar3 != 0) {
            regulator_notifier_call_chain(iVar3,2,0);
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_28) {
        auVar5 = __stack_chk_fail();
        puVar4 = auVar5._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar4 != NULL) {
            switch(*puVar4) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar4,auVar5._8_8_,0);
                break;
            default:
                return puVar4;
            }
        }
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5502,0x8001728);
        (*pcVar1)();
    }
    return 0x1;
}


// ===== sym.ocp_notifier_remove.10b88807fff125de0d04667d917fef4c.cfi_jt @ 0x080010f8 (size 8) =====

ulong sym.ocp_notifier_remove.10b88807fff125de0d04667d917fef4c.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0xa8);
    ipc_log_context_destroy(*(iVar1 + 8));
    idr_destroy(iVar1 + 0x20);
    return 0;
}


// ===== sym.ocp_notifier_probe.10b88807fff125de0d04667d917fef4c.cfi_jt @ 0x08001100 (size 8) =====

uint64_t sym.ocp_notifier_probe.10b88807fff125de0d04667d917fef4c.cfi_jt(int64_t param_1)

{
    int64_t *arg1;
    uint64_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar5;
    uint32_t arg2;
    ulong unaff_x30;
    uint64_t uStack_58;
    uint uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iVar4 = param_1 + 0x10;
    iStack_48 = *(iVar3 + 0x5e0);
    uStack_4c = 0;
    uStack_58 = 0;
    arg1 = devm_kmalloc(iVar4,0x38,0xdc0);
    if (arg1 == NULL) {
        uVar5 = 0xfffffff4;
    }
    else {
        *arg1 = iVar4;
        uVar1 = devm_nvmem_cell_get(iVar4,"ocp_log");
        arg1[2] = uVar1;
        if (uVar1 < 0xfffffffffffff001) {
            uVar2 = platform_get_irq(param_1,0);
            uVar5 = uVar2 & 0xffffffff;
            if (uVar2 < 0) {
                _dev_err(iVar4,"failed to irq, ret=%d\n",uVar5);
            }
            else {
                iVar3 = ipc_log_context_create(3,0x8000357,0);
                arg1[1] = iVar3;
                *(param_1 + 0xa8) = arg1;
                uVar1 = nvmem_cell_read(uVar1,&uStack_58);
                if (uVar1 < 0xfffffffffffff001) {
                    *(arg1 + 3) = uStack_58 >> 1;
                    kfree(uVar1);
                    arg1[6] = 0;
                    arg1[4] = 0x1000000400000000;
                    arg1[5] = 0;
                    if (0 < arg1[3]) {
                        arg2 = 0;
                        do {
                            uVar1 = sym.ocp_notifier_read_entry(arg1,arg2,&uStack_4c);
                            if (uVar1 != 0) goto code_r0x0800127c;
                            uVar1 = sym.ocp_notifier_log_event(arg1,&uStack_4c,0x8000305);
                            if (uVar1 != 0) {
                                uVar5 = uVar1 & 0xffffffff;
                                if (uVar1 != -0x205) {
                                    _dev_err(iVar4,"failed to log entry %d, ret=%d\n",arg2,uVar5);
                                }
                                goto code_r0x080012f4;
                            }
                            arg2 = arg2 + 1;
                        } while (arg2 < arg1[3]);
                    }
                    uVar1 = devm_request_threaded_irq
                                      (iVar4,uVar5,0,sym.ocp_notifier_handler.10b88807fff125de0d04667d917fef4c.cfi_jt
                                       ,0x2000,"regulator-ocp",arg1);
code_r0x0800127c:
                    uVar5 = uVar1 & 0xffffffff;
                }
                else {
                    _dev_err(iVar4,"failed to read nvmem cell, ret=%d\n",uVar1 & 0xffffffff);
                    uVar5 = uVar1;
                }
            }
        }
        else if (uVar1 == -0x205) {
            uVar5 = 0xfffffdfb;
        }
        else {
            _dev_err(iVar4,"failed to get nvmem cell, ret=%d\n",uVar1 & 0xffffffff);
            uVar5 = uVar1;
        }
    }
code_r0x080012f4:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return uVar5 & 0xffffffff;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.ocp_notifier_remove;
    iVar4 = *(iVar4 + 0xa8);
    ipc_log_context_destroy(*(iVar4 + 8));
    idr_destroy(iVar4 + 0x20);
    return 0;
}


// ===== sym.ocp_notifier_probe @ 0x08001108 (size 552) =====

uint64_t sym.ocp_notifier_probe(int64_t arg1)

{
    int64_t *arg1_00;
    uint64_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar5;
    uint32_t arg2;
    ulong unaff_x30;
    uint64_t uStack_58;
    uint uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iVar4 = arg1 + 0x10;
    iStack_48 = *(iVar3 + 0x5e0);
    uStack_4c = 0;
    uStack_58 = 0;
    arg1_00 = devm_kmalloc(iVar4,0x38,0xdc0);
    if (arg1_00 == NULL) {
        uVar5 = 0xfffffff4;
    }
    else {
        *arg1_00 = iVar4;
        uVar1 = devm_nvmem_cell_get(iVar4,"ocp_log");
        arg1_00[2] = uVar1;
        if (uVar1 < 0xfffffffffffff001) {
            uVar2 = platform_get_irq(arg1,0);
            uVar5 = uVar2 & 0xffffffff;
            if (uVar2 < 0) {
                _dev_err(iVar4,"failed to irq, ret=%d\n",uVar5);
            }
            else {
                iVar3 = ipc_log_context_create(3,0x8000357,0);
                arg1_00[1] = iVar3;
                *(arg1 + 0xa8) = arg1_00;
                uVar1 = nvmem_cell_read(uVar1,&uStack_58);
                if (uVar1 < 0xfffffffffffff001) {
                    *(arg1_00 + 3) = uStack_58 >> 1;
                    kfree(uVar1);
                    arg1_00[6] = 0;
                    arg1_00[4] = 0x1000000400000000;
                    arg1_00[5] = 0;
                    if (0 < arg1_00[3]) {
                        arg2 = 0;
                        do {
                            uVar1 = sym.ocp_notifier_read_entry(arg1_00,arg2,&uStack_4c);
                            if (uVar1 != 0) goto code_r0x0800127c;
                            uVar1 = sym.ocp_notifier_log_event(arg1_00,&uStack_4c,0x8000305);
                            if (uVar1 != 0) {
                                uVar5 = uVar1 & 0xffffffff;
                                if (uVar1 != -0x205) {
                                    _dev_err(iVar4,"failed to log entry %d, ret=%d\n",arg2,uVar5);
                                }
                                goto code_r0x080012f4;
                            }
                            arg2 = arg2 + 1;
                        } while (arg2 < arg1_00[3]);
                    }
                    uVar1 = devm_request_threaded_irq
                                      (iVar4,uVar5,0,sym.ocp_notifier_handler.10b88807fff125de0d04667d917fef4c.cfi_jt
                                       ,0x2000,"regulator-ocp",arg1_00);
code_r0x0800127c:
                    uVar5 = uVar1 & 0xffffffff;
                }
                else {
                    _dev_err(iVar4,"failed to read nvmem cell, ret=%d\n",uVar1 & 0xffffffff);
                    uVar5 = uVar1;
                }
            }
        }
        else if (uVar1 == -0x205) {
            uVar5 = 0xfffffdfb;
        }
        else {
            _dev_err(iVar4,"failed to get nvmem cell, ret=%d\n",uVar1 & 0xffffffff);
            uVar5 = uVar1;
        }
    }
code_r0x080012f4:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return uVar5 & 0xffffffff;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.ocp_notifier_remove;
    iVar4 = *(iVar4 + 0xa8);
    ipc_log_context_destroy(*(iVar4 + 8));
    idr_destroy(iVar4 + 0x20);
    return 0;
}


// ===== sym.ocp_notifier_remove @ 0x08001330 (size 64) =====

ulong sym.ocp_notifier_remove(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0xa8);
    ipc_log_context_destroy(*(iVar1 + 8));
    idr_destroy(iVar1 + 0x20);
    return 0;
}


// ===== sym.ocp_notifier_read_entry @ 0x08001370 (size 272) =====

uchar * sym.ocp_notifier_read_entry(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint16_t uVar1;
    code *pcVar2;
    int iVar3;
    uint64_t uVar4;
    ulong *puVar5;
    ulong *puVar6;
    uchar *puVar7;
    int64_t iVar8;
    uint16_t *puVar9;
    int64_t arg1_00;
    uint64_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint32_t uVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    uint uStack_cc;
    int64_t iStack_c8;
    uchar **ppuStack_c0;
    code *pcStack_b8;
    uint64_t uStack_b0;
    uint64_t auStack_98 [3];
    uchar *puStack_80;
    code *pcStack_78;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_38 = *(iVar8 + 0x5e0);
    uStack_40 = 0;
    uVar10 = arg3;
    if (arg2 < *(arg1 + 0x18)) {
        uVar4 = nvmem_cell_read(*(arg1 + 0x10),&uStack_40);
        if (uVar4 < 0xfffffffffffff001) {
            uVar10 = arg2 << 1;
            if (uStack_40 <= (uVar10 | 1)) {
                _dev_err(*arg1,"invalid OCP log index=%i\n");
                kfree(uVar4);
                goto code_r0x08001444;
            }
            *arg3 = CONCAT11(*(uVar4 + uVar10) >> 4,*(uVar4 + (uVar10 | 1)));
            *(arg3 + 2) = *(uVar4 + uVar10) & 7;
            kfree(uVar4);
            uVar4 = 0;
        }
        else {
            uVar10 = uVar4 & 0xffffffff;
            _dev_err(*arg1,"failed to read nvmem cell, ret=%d\n");
        }
    }
    else {
code_r0x08001444:
        uVar4 = 0xffffffea;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_38) {
        return uVar4 & 0xffffffff;
    }
    auVar12 = __stack_chk_fail();
    puVar9 = auVar12._8_8_;
    puVar5 = auVar12._0_8_;
    *extraout_x18 = sym.ocp_notifier_log_event;
    pcStack_78 = sym.ocp_notifier_log_event;
    iVar8 = sp_el0;
    auStack_98[2] = *(iVar8 + 0x5e0);
    uVar1 = *puVar9;
    puStack_80 = &stack0xffffffffffffffd0;
    if (uVar1 != 0) {
        auStack_98[0] = 0;
        auStack_98[1] = 0;
        puVar6 = idr_find(puVar5 + 4,uVar1);
        uVar4 = uVar10;
        if (puVar6 == NULL) {
            auStack_98[0] = auStack_98[0] & 0xffffffffffffff00;
            scnprintf(auStack_98,0x10,"periph-%03x",uVar1);
            puVar7 = regulator_get_optional(*puVar5,auStack_98);
            if (puVar7 < 0xfffffffffffff001) {
                puVar6 = *(puVar7 + 0x78);
                regulator_put();
                uVar11 = uVar1;
                puVar7 = idr_alloc(puVar5 + 4,puVar6,uVar11,uVar11 + 1,0xcc0);
                if (puVar7 < 0) goto code_r0x080015f0;
                if (puVar7 != uVar11) {
                    puVar7 = 0xffffffea;
                    goto code_r0x080015f0;
                }
                goto code_r0x0800154c;
            }
            if (puVar7 == -0x205) goto code_r0x080015f0;
        }
        else {
code_r0x0800154c:
            if (puVar6 != NULL) {
                if ((puVar6[0x8f] == NULL) || (iVar8 = *puVar6[0x8f], iVar8 == 0)) {
                    iVar8 = 0x8000453;
                    if (**puVar6 != 0) {
                        iVar8 = **puVar6;
                    }
                }
                _printk(0x8000421,uVar10,iVar8,*puVar9,puVar9[1]);
                ipc_log_string(puVar5[1],"%s name=%s, ppid=0x%03X, mode=%u\n",uVar10,iVar8,*puVar9,puVar9[1]);
                goto code_r0x080015ec;
            }
        }
        _printk(0x80002ea,uVar10,*puVar9,puVar9[1]);
        ipc_log_string(puVar5[1],"%s ppid=0x%03X, mode=%u\n",uVar10,*puVar9,puVar9[1]);
    }
code_r0x080015ec:
    puVar7 = NULL;
    uVar10 = uVar4;
code_r0x080015f0:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == auStack_98[2]) {
        return puVar7;
    }
    __stack_chk_fail(puVar7);
    *extraout_x18_00 = sym.ocp_notifier_handler;
    pcStack_b8 = sym.ocp_notifier_handler;
    iVar8 = sp_el0;
    iStack_c8 = *(iVar8 + 0x5e0);
    uStack_cc = 0;
    ppuStack_c0 = &puStack_80;
    uStack_b0 = uVar10;
    iVar3 = sym.ocp_notifier_read_entry(arg1_00,0,&uStack_cc);
    if ((iVar3 == 0) && (iVar3 = sym.ocp_notifier_log_event(arg1_00,&uStack_cc,0x80003a7), iVar3 == 0)) {
        iVar8 = idr_find(arg1_00 + 0x20,uStack_cc);
        if (iVar8 != 0) {
            regulator_notifier_call_chain(iVar8,2,0);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_c8) {
        auVar12 = __stack_chk_fail();
        puVar7 = auVar12._0_8_;
        *extraout_x18_01 = sym.__cfi_check_fail;
        if (puVar7 != NULL) {
            switch(*puVar7) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar7,auVar12._8_8_,0);
                break;
            default:
                return puVar7;
            }
        }
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5502,0x8001728);
        (*pcVar2)();
    }
    return 0x1;
}


// ===== sym.ocp_notifier_log_event @ 0x08001480 (size 424) =====

uchar * sym.ocp_notifier_log_event(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint16_t uVar1;
    code *pcVar2;
    int iVar3;
    ulong *puVar4;
    uchar *puVar5;
    int64_t iVar6;
    int64_t arg1_00;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t unaff_x19;
    uint32_t uVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    uint uStack_8c;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    int64_t iStack_70;
    uint64_t auStack_58 [3];
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    auStack_58[2] = *(iVar6 + 0x5e0);
    uVar1 = *arg2;
    if (uVar1 != 0) {
        auStack_58[0] = 0;
        auStack_58[1] = 0;
        puVar4 = idr_find(arg1 + 0x20,uVar1);
        unaff_x19 = arg3;
        if (puVar4 == NULL) {
            auStack_58[0] = auStack_58[0] & 0xffffffffffffff00;
            scnprintf(auStack_58,0x10,"periph-%03x",uVar1);
            puVar5 = regulator_get_optional(*arg1,auStack_58);
            if (puVar5 < 0xfffffffffffff001) {
                puVar4 = *(puVar5 + 0x78);
                regulator_put();
                uVar7 = uVar1;
                puVar5 = idr_alloc(arg1 + 0x20,puVar4,uVar7,uVar7 + 1,0xcc0);
                if (puVar5 < 0) goto code_r0x080015f0;
                if (puVar5 != uVar7) {
                    puVar5 = 0xffffffea;
                    goto code_r0x080015f0;
                }
                goto code_r0x0800154c;
            }
            if (puVar5 == -0x205) goto code_r0x080015f0;
        }
        else {
code_r0x0800154c:
            if (puVar4 != NULL) {
                if ((puVar4[0x8f] == NULL) || (iVar6 = *puVar4[0x8f], iVar6 == 0)) {
                    iVar6 = 0x8000453;
                    if (**puVar4 != 0) {
                        iVar6 = **puVar4;
                    }
                }
                _printk(0x8000421,arg3,iVar6,*arg2,*(arg2 + 2));
                ipc_log_string(*(arg1 + 8),"%s name=%s, ppid=0x%03X, mode=%u\n",arg3,iVar6,*arg2,*(arg2 + 2));
                goto code_r0x080015ec;
            }
        }
        _printk(0x80002ea,arg3,*arg2,*(arg2 + 2));
        ipc_log_string(*(arg1 + 8),"%s ppid=0x%03X, mode=%u\n",arg3,*arg2,*(arg2 + 2));
    }
code_r0x080015ec:
    puVar5 = NULL;
    arg3 = unaff_x19;
code_r0x080015f0:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == auStack_58[2]) {
        return puVar5;
    }
    __stack_chk_fail(puVar5);
    *extraout_x18 = sym.ocp_notifier_handler;
    pcStack_78 = sym.ocp_notifier_handler;
    iVar6 = sp_el0;
    iStack_88 = *(iVar6 + 0x5e0);
    uStack_8c = 0;
    puStack_80 = &stack0xffffffffffffffc0;
    iStack_70 = arg3;
    iVar3 = sym.ocp_notifier_read_entry(arg1_00,0,&uStack_8c);
    if ((iVar3 == 0) && (iVar3 = sym.ocp_notifier_log_event(arg1_00,&uStack_8c,0x80003a7), iVar3 == 0)) {
        iVar6 = idr_find(arg1_00 + 0x20,uStack_8c);
        if (iVar6 != 0) {
            regulator_notifier_call_chain(iVar6,2,0);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_88) {
        auVar8 = __stack_chk_fail();
        puVar5 = auVar8._0_8_;
        *extraout_x18_00 = sym.__cfi_check_fail;
        if (puVar5 != NULL) {
            switch(*puVar5) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar5,auVar8._8_8_,0);
                break;
            default:
                return puVar5;
            }
        }
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5502,0x8001728);
        (*pcVar2)();
    }
    return 0x1;
}


// ===== sym.ocp_notifier_handler @ 0x08001628 (size 168) =====

uchar * sym.ocp_notifier_handler(ulong noname_0,int64_t arg1)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    uchar *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar5 [16];
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_2c = 0;
    iVar2 = sym.ocp_notifier_read_entry(arg1,0,&uStack_2c);
    if ((iVar2 == 0) && (iVar2 = sym.ocp_notifier_log_event(arg1,&uStack_2c,0x80003a7), iVar2 == 0)) {
        iVar3 = idr_find(arg1 + 0x20,uStack_2c);
        if (iVar3 != 0) {
            regulator_notifier_call_chain(iVar3,2,0);
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_28) {
        auVar5 = __stack_chk_fail();
        puVar4 = auVar5._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar4 != NULL) {
            switch(*puVar4) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar4,auVar5._8_8_,0);
                break;
            default:
                return puVar4;
            }
        }
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5502,0x8001728);
        (*pcVar1)();
    }
    return 0x1;
}


// ===== sym.__cfi_check_fail @ 0x080016d0 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001714

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
    //switch table (4 cases) at 0x8000130
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001728);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001734 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.ocp_notifier_probe.10b88807fff125de0d04667d917fef4c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08001768 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.ocp_notifier_probe.10b88807fff125de0d04667d917fef4c.cfi_jt);
    return;
}

