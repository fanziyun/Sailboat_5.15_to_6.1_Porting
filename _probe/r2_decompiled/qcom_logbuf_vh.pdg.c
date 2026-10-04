// decompiled from qcom_logbuf_vh by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 244) =====

//WARNING: Switch with 1 destination removed at 0x080013e4

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 != -0x5c1829030fe5872c) {
            if ((arg1 == -0x3557318fb8d07b71) && ((pcVar1 + -0x8001118 >> 3 | pcVar1 << 0x3d) < 2)) {
                return;
            }
            goto code_r0x080013a4;
        }
        pcVar2 = sym.copy_boot_log_pr_cont.229c056099aaf17b002bb392bb7a0071.cfi_jt;
    }
    else if (arg1 == 0x2b3a43e29242445) {
        pcVar2 = sym.init_module.cfi_jt;
    }
    else if (arg1 == 0x5e924e1d2b9742d4) {
        pcVar2 = sym.copy_boot_log.229c056099aaf17b002bb392bb7a0071.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080013a4;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080013a4:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80013f8);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001100 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.logbuf_vh_driver_probe.1f145e62783c93fa327f54d0c9889492.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001108 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.logbuf_vh_driver_probe.1f145e62783c93fa327f54d0c9889492.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.copy_boot_log_pr_cont.229c056099aaf17b002bb392bb7a0071.cfi_jt @ 0x08001110 (size 8) =====

void sym.copy_boot_log_pr_cont.229c056099aaf17b002bb392bb7a0071.cfi_jt(ulong param_1,int64_t *param_2,int64_t param_3)

{
    uint16_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint32_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (obj.copy_early_boot_log == 0x1) {
        uVar1 = *(*param_2 + 0x10);
        if (uVar1 != 0 && _segment.ehdr != 0) {
            uVar4 = 0x80000;
            if (obj.boot_log_buf_size == 0x0) {
                uVar4 = 0;
            }
            if (uVar1 + _segment.ehdr + 2 <= uVar4) {
                uVar4 = _segment.ehdr - 1;
                iVar3 = CONCAT44(*0x8000004,_segment.ehdr);
                uVar2 = uVar4;
                if (*(iVar3 + uVar4) != '\n') {
                    uVar4 = _segment.ehdr;
                    uVar2 = _segment.ehdr;
                }
                memcpy(iVar3 + uVar2,param_2[1] + (uVar1 - param_3));
                uVar4 = uVar4 + param_3;
                _segment.ehdr = uVar4;
                if ((*(*param_2 + 0x13) >> 1 & 1) != 0) {
                    _segment.ehdr = uVar4 + 1;
                    *(iVar3 + uVar4) = 10;
                    *(iVar3 + _segment.ehdr) = 0;
                }
            }
        }
    }
    return;
}


// ===== sym.logbuf_vh_driver_probe.1f145e62783c93fa327f54d0c9889492.cfi_jt @ 0x08001118 (size 8) =====

void sym.logbuf_vh_driver_probe.1f145e62783c93fa327f54d0c9889492.cfi_jt(int64_t param_1)

{
    int iVar1;
    int64_t *piVar2;
    int64_t arg1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = debug_symbol_avaliable();
    if (iVar1 != -0x205) {
        if (iVar1 == 0) {
            piVar2 = debug_symbol_lookup_name(0x80002cf);
            arg1 = *piVar2;
        }
        else {
            arg1 = 0;
        }
        sym.register_log_minidump(arg1);
        sym.boot_log_register(param_1 + 0x10);
    }
    return;
}


// ===== sym.logbuf_vh_driver_remove.1f145e62783c93fa327f54d0c9889492.cfi_jt @ 0x08001120 (size 8) =====

ulong sym.logbuf_vh_driver_remove.1f145e62783c93fa327f54d0c9889492.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.boot_log_unregister();
    return 0;
}


// ===== sym.copy_boot_log.229c056099aaf17b002bb392bb7a0071.cfi_jt @ 0x08001128 (size 8) =====

void sym.copy_boot_log.229c056099aaf17b002bb392bb7a0071.cfi_jt(ulong param_1,uint32_t *param_2,int64_t *param_3)

{
    int64_t arg2;
    int64_t iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint16_t uVar4;
    int iVar5;
    int64_t *extraout_x1;
    int64_t *arg3;
    int64_t iVar6;
    uint64_t uVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    int64_t iVar10;
    uint64_t uVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    int64_t iVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *arg3_00;
    uint64_t uVar15;
    uint64_t uVar16;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iVar6 = *(iVar1 + 0x5e0);
    iVar1 = *(param_2 + 2);
    iVar3 = *(param_2 + 4);
    uVar2 = *(param_2 + 6);
    uVar15 = *(param_2 + 8);
    uVar8 = *param_2;
    uVar12 = param_2[0xc];
    iVar14 = *(param_2 + 0xe);
    if (obj.copy_early_boot_log == 0x1) {
        uVar4 = *(*param_3 + 0x10);
        arg3 = uVar4;
        if (uVar4 != 0) {
            uVar8 = 0x80000;
            if (obj.boot_log_buf_size == 0x0) {
                uVar8 = 0;
            }
            if ((uVar4 + _segment.ehdr + 0x32 <= uVar8) &&
               (arg3_00 = uVar8 - _segment.ehdr, uVar8 - _segment.ehdr != 0)) {
                iVar1 = CONCAT44(*0x8000004,_segment.ehdr) + _segment.ehdr;
                memcpy(iVar1,param_3[1]);
                iVar5 = sym.record_print_text(*param_3,iVar1,arg3_00);
                _segment.ehdr = _segment.ehdr + iVar5;
                arg3 = arg3_00;
            }
        }
code_r0x08001670:
        iVar1 = sp_el0;
        if (*(iVar1 + 0x5e0) == iVar6) {
            return;
        }
        __stack_chk_fail();
        *extraout_x18 = 0x80017e8;
        if (obj.copy_early_boot_log == 0x1) {
            uVar4 = *(*extraout_x1 + 0x10);
            if (uVar4 != 0 && _segment.ehdr != 0) {
                uVar8 = 0x80000;
                if (obj.boot_log_buf_size == 0x0) {
                    uVar8 = 0;
                }
                if (uVar4 + _segment.ehdr + 2 <= uVar8) {
                    uVar8 = _segment.ehdr - 1;
                    iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
                    uVar2 = uVar8;
                    if (*(iVar1 + uVar8) != '\n') {
                        uVar8 = _segment.ehdr;
                        uVar2 = _segment.ehdr;
                    }
                    memcpy(iVar1 + uVar2,extraout_x1[1] + (uVar4 - arg3));
                    uVar8 = uVar8 + arg3;
                    _segment.ehdr = uVar8;
                    if ((*(*extraout_x1 + 0x13) >> 1 & 1) != 0) {
                        _segment.ehdr = uVar8 + 1;
                        *(iVar1 + uVar8) = 10;
                        *(iVar1 + _segment.ehdr) = 0;
                    }
                }
            }
        }
        return;
    }
    obj.copy_early_boot_log = 0x1;
    sym.register_log_minidump(param_2);
    uVar16 = (1L << (uVar12 & 0x3f) & 0xffffffffU) - 1;
    arg3 = param_3;
    do {
        uVar7 = uVar15 & (1L << (uVar8 & 0x3f)) - 1U;
        if (0xfffffffd < (*(iVar1 + uVar7 * 0x18) >> 0x3e) - 3) {
            iVar10 = iVar1 + uVar7 * 0x18;
            uVar9 = *(iVar10 + 8) & uVar16;
            if ((uVar9 & 1) == 0) {
                uVar11 = *(iVar10 + 0x10) & uVar16;
                uVar4 = *(iVar3 + uVar7 * 0x58 + 0x10);
                iVar10 = 8;
                if (uVar9 <= uVar11) {
                    iVar10 = uVar9 + 8;
                }
                uVar11 = uVar11 - iVar10;
                uVar12 = uVar11;
                if (uVar4 <= uVar11) {
                    uVar12 = uVar4;
                }
                uVar13 = 0x80000;
                if (obj.boot_log_buf_size == 0x0) {
                    uVar13 = 0;
                }
                if (uVar13 < _segment.ehdr + (uVar12 & 0xffff) + 0x32) goto code_r0x08001670;
                arg3 = uVar13 - _segment.ehdr;
                arg2 = CONCAT44(*0x8000004,_segment.ehdr) + _segment.ehdr;
                memcpy(arg2,iVar14 + iVar10,uVar12 & 0xffff);
                iVar5 = sym.record_print_text(iVar3 + uVar7 * 0x58,arg2,arg3);
                _segment.ehdr = _segment.ehdr + iVar5;
            }
        }
        if (uVar15 == uVar2) goto code_r0x08001670;
        uVar15 = uVar15 + 1 & 0x3fffffffffffffff;
    } while( true );
}


// ===== sym.register_log_minidump @ 0x08001130 (size 488) =====

void sym.register_log_minidump(int64_t arg1)

{
    uint64_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    int iVar5;
    int64_t iVar6;
    int64_t *piVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar9;
    ulong unaff_x30;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    int64_t iStack_80;
    int64_t iStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_68 = *(iVar6 + 0x5e0);
    iStack_78 = 0;
    iStack_70 = 0;
    uStack_88 = 0;
    iStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    if ((arg1 != 0) && ((reloc.logbuf_vh_driver_probe.1f145e62783c93fa327f54d0c9889492.cfi_jt & 1) == 0)) {
        iVar6 = *(arg1 + 8);
        iVar8 = *(arg1 + 0x10);
        uVar2 = *arg1;
        uVar3 = *(arg1 + 0x30);
        iVar9 = *(arg1 + 0x38);
        reloc.logbuf_vh_driver_probe.1f145e62783c93fa327f54d0c9889492.cfi_jt = 0x1;
        strscpy(&uStack_98,"KLOGBUF",0xd);
        iVar4 = (iVar9 << 8) >> 8;
        uVar1 = iVar4 + 0x8000000000;
        iStack_78 = uVar1 + _strscpy;
        if (uVar1 >> 0x26 != 0) {
            iStack_78 = iVar4 - _kimage_voffset;
        }
        iStack_70 = 1L << (uVar3 & 0x3f);
        iStack_80 = iVar9;
        iVar5 = msm_minidump_add_region(&uStack_98);
        if (iVar5 < 0) {
            _printk(0x80001f7);
        }
        strscpy(&uStack_98,"LOG_DESC",0xd);
        iVar4 = (iVar6 << 8) >> 8;
        iVar9 = 1L << (uVar2 & 0x3f);
        uVar1 = iVar4 + 0x8000000000;
        iStack_78 = _strscpy + uVar1;
        if (uVar1 >> 0x26 != 0) {
            iStack_78 = iVar4 - _kimage_voffset;
        }
        iStack_70 = iVar9 * 0x18;
        iStack_80 = iVar6;
        iVar5 = msm_minidump_add_region(&uStack_98);
        if (iVar5 < 0) {
            _printk(0x80001ba);
        }
        strscpy(&uStack_98,"LOG_INFO",0xd);
        iVar6 = (iVar8 << 8) >> 8;
        uVar1 = iVar6 + 0x8000000000;
        iStack_78 = _strscpy + uVar1;
        if (uVar1 >> 0x26 != 0) {
            iStack_78 = iVar6 - _kimage_voffset;
        }
        iStack_70 = iVar9 * 0x58;
        iStack_80 = iVar8;
        iVar5 = msm_minidump_add_region(&uStack_98);
        if (iVar5 < 0) {
            _printk(0x8000276);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_68) {
        return;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18 = sym.logbuf_vh_driver_probe;
    iVar5 = debug_symbol_avaliable();
    if (iVar5 != -0x205) {
        if (iVar5 == 0) {
            piVar7 = debug_symbol_lookup_name(0x80002cf);
            iVar8 = *piVar7;
        }
        else {
            iVar8 = 0;
        }
        sym.register_log_minidump(iVar8);
        sym.boot_log_register(iVar6 + 0x10);
    }
    return;
}


// ===== sym.logbuf_vh_driver_probe @ 0x08001318 (size 96) =====

void sym.logbuf_vh_driver_probe(int64_t arg1)

{
    int iVar1;
    int64_t *piVar2;
    int64_t arg1_00;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = debug_symbol_avaliable();
    if (iVar1 != -0x205) {
        if (iVar1 == 0) {
            piVar2 = debug_symbol_lookup_name(0x80002cf);
            arg1_00 = *piVar2;
        }
        else {
            arg1_00 = 0;
        }
        sym.register_log_minidump(arg1_00);
        sym.boot_log_register(arg1 + 0x10);
    }
    return;
}


// ===== sym.logbuf_vh_driver_remove @ 0x08001378 (size 40) =====

ulong sym.logbuf_vh_driver_remove(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.boot_log_unregister();
    return 0;
}


// ===== sym.__cfi_check_fail @ 0x080013a0 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080013e4

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
    //switch table (4 cases) at 0x8000160
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80013f8);
    (*pcVar1)();
}


// ===== sym.boot_log_register @ 0x080013f8 (size 416) =====

uint64_t sym.boot_log_register(int64_t arg1)

{
    int64_t arg2;
    int64_t iVar1;
    uint16_t uVar2;
    int64_t iVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint32_t *arg1_00;
    int64_t *piVar7;
    int64_t *arg3;
    int64_t iVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    int64_t iVar11;
    uint64_t uVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    int64_t iVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar16;
    int64_t *arg3_00;
    uint64_t uVar17;
    ulong unaff_x30;
    uchar auVar18 [16];
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    uint64_t uStack_50;
    int64_t iStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    piVar7 = 0x7;
    iStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uVar5 = kmalloc_order_trace(0x80000,0xdc0);
    if (uVar5 == 0) {
        uVar16 = 0xfffffff4;
    }
    else {
        piVar7 = 0xd;
        strscpy(&uStack_68,"KBOOT_LOG");
        iVar3 = (uVar5 << 8) >> 8;
        uVar16 = iVar3 + 0x8000000000;
        iStack_48 = _strscpy + uVar16;
        if (uVar16 >> 0x26 != 0) {
            iStack_48 = iVar3 - _kimage_voffset;
        }
        uStack_40 = 0x80000;
        uStack_50 = uVar5;
        uVar4 = msm_minidump_add_region(&uStack_68);
        if (uVar4 < 0) {
            uVar16 = uVar4;
            _printk(0x800016e);
        }
        else {
            obj.boot_log_buf_size = 0x1;
            piVar7 = NULL;
            DataMemoryBarrier(2,3);
            _segment.ehdr = uVar5;
            uVar4 = tracepoint_probe_register
                              (__tracepoint_android_vh_logbuf,sym.copy_boot_log.229c056099aaf17b002bb392bb7a0071.cfi_jt
                              );
            if (uVar4 == 0) {
                piVar7 = NULL;
                uVar4 = tracepoint_probe_register
                                  (__tracepoint_android_vh_logbuf_pr_cont,
                                   sym.copy_boot_log_pr_cont.229c056099aaf17b002bb392bb7a0071.cfi_jt);
                uVar16 = uVar4;
                if (uVar4 == 0) goto code_r0x08001560;
                _dev_err(arg1,"Failed to register android_vh_logbuf_pr_cont hook\n");
                piVar7 = NULL;
                tracepoint_probe_unregister
                          (__tracepoint_android_vh_logbuf,sym.copy_boot_log.229c056099aaf17b002bb392bb7a0071.cfi_jt);
                uVar5 = _segment.ehdr;
            }
            else {
                uVar16 = uVar4;
                _dev_err(arg1,"Failed to register android_vh_logbuf hook\n");
                uVar5 = _segment.ehdr;
            }
        }
        kfree(uVar5);
    }
code_r0x08001560:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return uVar16;
    }
    auVar18 = __stack_chk_fail();
    arg1_00 = auVar18._8_8_;
    uVar6 = auVar18._0_8_;
    *extraout_x18 = sym.copy_boot_log;
    iVar3 = sp_el0;
    iVar8 = *(iVar3 + 0x5e0);
    iVar3 = *(arg1_00 + 2);
    iVar1 = *(arg1_00 + 4);
    uVar5 = *(arg1_00 + 6);
    uVar16 = *(arg1_00 + 8);
    uVar4 = *arg1_00;
    uVar13 = arg1_00[0xc];
    iVar15 = *(arg1_00 + 0xe);
    if (obj.copy_early_boot_log == 0x1) {
        uVar2 = *(*piVar7 + 0x10);
        arg3 = uVar2;
        if (uVar2 != 0) {
            uVar4 = 0x80000;
            if (obj.boot_log_buf_size == 0x0) {
                uVar4 = 0;
            }
            if ((uVar2 + _segment.ehdr + 0x32 <= uVar4) &&
               (arg3_00 = uVar4 - _segment.ehdr, uVar4 - _segment.ehdr != 0)) {
                iVar3 = _segment.ehdr + (_segment.ehdr & 0xffffffff);
                memcpy(iVar3,piVar7[1]);
                uVar6 = sym.record_print_text(*piVar7,iVar3,arg3_00);
                _segment.ehdr = CONCAT44(*0x8000004,_segment.ehdr + uVar6);
                arg3 = arg3_00;
            }
        }
code_r0x08001670:
        iVar3 = sp_el0;
        if (*(iVar3 + 0x5e0) == iVar8) {
            return uVar6;
        }
        auVar18 = __stack_chk_fail();
        piVar7 = auVar18._8_8_;
        uVar16 = auVar18._0_8_;
        *extraout_x18_00 = 0x80017e8;
        uVar5 = _segment.ehdr;
        if (obj.copy_early_boot_log == 0x1) {
            uVar2 = *(*piVar7 + 0x10);
            if (uVar2 != 0 && _segment.ehdr != 0) {
                uVar4 = 0x80000;
                if (obj.boot_log_buf_size == 0x0) {
                    uVar4 = 0;
                }
                if (uVar2 + _segment.ehdr + 2 <= uVar4) {
                    uVar4 = _segment.ehdr - 1;
                    uVar16 = uVar4;
                    if (*(_segment.ehdr + uVar4) != '\n') {
                        uVar4 = _segment.ehdr;
                        uVar16 = _segment.ehdr & 0xffffffff;
                    }
                    uVar16 = memcpy(_segment.ehdr + uVar16,piVar7[1] + (uVar2 - arg3));
                    uVar4 = uVar4 + arg3;
                    _segment.ehdr = CONCAT44(*0x8000004,uVar4);
                    if ((*(*piVar7 + 0x13) >> 1 & 1) != 0) {
                        *(uVar5 + uVar4) = 10;
                        *(uVar5 + (uVar4 + 1)) = 0;
                        _segment.ehdr = CONCAT44(*0x8000004,uVar4 + 1);
                    }
                }
            }
        }
        return uVar16;
    }
    obj.copy_early_boot_log = 0x1;
    uVar6 = sym.register_log_minidump(arg1_00);
    uVar17 = (1L << (uVar13 & 0x3f) & 0xffffffffU) - 1;
    arg3 = piVar7;
    do {
        uVar9 = uVar16 & (1L << (uVar4 & 0x3f)) - 1U;
        if (0xfffffffd < (*(iVar3 + uVar9 * 0x18) >> 0x3e) - 3) {
            iVar11 = iVar3 + uVar9 * 0x18;
            uVar10 = *(iVar11 + 8) & uVar17;
            if ((uVar10 & 1) == 0) {
                uVar12 = *(iVar11 + 0x10) & uVar17;
                uVar2 = *(iVar1 + uVar9 * 0x58 + 0x10);
                iVar11 = 8;
                if (uVar10 <= uVar12) {
                    iVar11 = uVar10 + 8;
                }
                uVar12 = uVar12 - iVar11;
                uVar13 = uVar12;
                if (uVar2 <= uVar12) {
                    uVar13 = uVar2;
                }
                uVar14 = 0x80000;
                if (obj.boot_log_buf_size == 0x0) {
                    uVar14 = 0;
                }
                if (uVar14 < _segment.ehdr + (uVar13 & 0xffff) + 0x32) goto code_r0x08001670;
                arg3 = uVar14 - _segment.ehdr;
                arg2 = _segment.ehdr + (_segment.ehdr & 0xffffffff);
                memcpy(arg2,iVar15 + iVar11,uVar13 & 0xffff);
                uVar6 = sym.record_print_text(iVar1 + uVar9 * 0x58,arg2,arg3);
                _segment.ehdr = CONCAT44(*0x8000004,_segment.ehdr + uVar6);
            }
        }
        if (uVar16 == uVar5) goto code_r0x08001670;
        uVar16 = uVar16 + 1 & 0x3fffffffffffffff;
    } while( true );
}


// ===== sym.copy_boot_log @ 0x08001598 (size 608) =====

void sym.copy_boot_log(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t arg2_00;
    int64_t iVar1;
    int64_t iVar2;
    uint16_t uVar3;
    int iVar4;
    int64_t *extraout_x1;
    uint64_t arg3;
    int64_t iVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    int64_t iVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar14;
    uint64_t uVar15;
    uint64_t uVar16;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iVar5 = *(iVar1 + 0x5e0);
    iVar1 = *(arg1 + 8);
    iVar2 = *(arg1 + 0x10);
    uVar14 = *(arg1 + 0x18);
    uVar15 = *(arg1 + 0x20);
    uVar7 = *arg1;
    uVar11 = *(arg1 + 0x30);
    iVar13 = *(arg1 + 0x38);
    if (obj.copy_early_boot_log == 0x1) {
        uVar3 = *(*arg2 + 0x10);
        arg3 = uVar3;
        if (uVar3 != 0) {
            uVar7 = 0x80000;
            if (obj.boot_log_buf_size == 0x0) {
                uVar7 = 0;
            }
            if ((uVar3 + _segment.ehdr + 0x32 <= uVar7) && (uVar14 = uVar7 - _segment.ehdr, uVar7 - _segment.ehdr != 0)
               ) {
                iVar1 = CONCAT44(*0x8000004,_segment.ehdr) + _segment.ehdr;
                memcpy(iVar1,*(arg2 + 8));
                iVar4 = sym.record_print_text(*arg2,iVar1,uVar14);
                _segment.ehdr = _segment.ehdr + iVar4;
                arg3 = uVar14;
            }
        }
code_r0x08001670:
        iVar1 = sp_el0;
        if (*(iVar1 + 0x5e0) == iVar5) {
            return;
        }
        __stack_chk_fail();
        *extraout_x18 = 0x80017e8;
        if (obj.copy_early_boot_log == 0x1) {
            uVar3 = *(*extraout_x1 + 0x10);
            if (uVar3 != 0 && _segment.ehdr != 0) {
                uVar7 = 0x80000;
                if (obj.boot_log_buf_size == 0x0) {
                    uVar7 = 0;
                }
                if (uVar3 + _segment.ehdr + 2 <= uVar7) {
                    uVar7 = _segment.ehdr - 1;
                    iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
                    uVar14 = uVar7;
                    if (*(iVar1 + uVar7) != '\n') {
                        uVar7 = _segment.ehdr;
                        uVar14 = _segment.ehdr;
                    }
                    memcpy(iVar1 + uVar14,extraout_x1[1] + (uVar3 - arg3));
                    uVar7 = uVar7 + arg3;
                    _segment.ehdr = uVar7;
                    if ((*(*extraout_x1 + 0x13) >> 1 & 1) != 0) {
                        _segment.ehdr = uVar7 + 1;
                        *(iVar1 + uVar7) = 10;
                        *(iVar1 + _segment.ehdr) = 0;
                    }
                }
            }
        }
        return;
    }
    obj.copy_early_boot_log = 0x1;
    sym.register_log_minidump(arg1);
    uVar16 = (1L << (uVar11 & 0x3f) & 0xffffffffU) - 1;
    arg3 = arg2;
    do {
        uVar6 = uVar15 & (1L << (uVar7 & 0x3f)) - 1U;
        if (0xfffffffd < (*(iVar1 + uVar6 * 0x18) >> 0x3e) - 3) {
            iVar9 = iVar1 + uVar6 * 0x18;
            uVar8 = *(iVar9 + 8) & uVar16;
            if ((uVar8 & 1) == 0) {
                uVar10 = *(iVar9 + 0x10) & uVar16;
                uVar3 = *(iVar2 + uVar6 * 0x58 + 0x10);
                iVar9 = 8;
                if (uVar8 <= uVar10) {
                    iVar9 = uVar8 + 8;
                }
                uVar10 = uVar10 - iVar9;
                uVar11 = uVar10;
                if (uVar3 <= uVar10) {
                    uVar11 = uVar3;
                }
                uVar12 = 0x80000;
                if (obj.boot_log_buf_size == 0x0) {
                    uVar12 = 0;
                }
                if (uVar12 < _segment.ehdr + (uVar11 & 0xffff) + 0x32) goto code_r0x08001670;
                arg3 = uVar12 - _segment.ehdr;
                arg2_00 = CONCAT44(*0x8000004,_segment.ehdr) + _segment.ehdr;
                memcpy(arg2_00,iVar13 + iVar9,uVar11 & 0xffff);
                iVar4 = sym.record_print_text(iVar2 + uVar6 * 0x58,arg2_00,arg3);
                _segment.ehdr = _segment.ehdr + iVar4;
            }
        }
        if (uVar15 == uVar14) goto code_r0x08001670;
        uVar15 = uVar15 + 1 & 0x3fffffffffffffff;
    } while( true );
}


// ===== sym.copy_boot_log_pr_cont @ 0x080017f8 (size 232) =====

void sym.copy_boot_log_pr_cont(ulong noname_0,int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint32_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (obj.copy_early_boot_log == 0x1) {
        uVar1 = *(*arg1 + 0x10);
        if (uVar1 != 0 && _segment.ehdr != 0) {
            uVar4 = 0x80000;
            if (obj.boot_log_buf_size == 0x0) {
                uVar4 = 0;
            }
            if (uVar1 + _segment.ehdr + 2 <= uVar4) {
                uVar4 = _segment.ehdr - 1;
                iVar3 = CONCAT44(*0x8000004,_segment.ehdr);
                uVar2 = uVar4;
                if (*(iVar3 + uVar4) != '\n') {
                    uVar4 = _segment.ehdr;
                    uVar2 = _segment.ehdr;
                }
                memcpy(iVar3 + uVar2,*(arg1 + 8) + (uVar1 - arg2));
                uVar4 = uVar4 + arg2;
                _segment.ehdr = uVar4;
                if ((*(*arg1 + 0x13) >> 1 & 1) != 0) {
                    _segment.ehdr = uVar4 + 1;
                    *(iVar3 + uVar4) = 10;
                    *(iVar3 + _segment.ehdr) = 0;
                }
            }
        }
    }
    return;
}


// ===== sym.boot_log_unregister @ 0x080018e0 (size 96) =====

void sym.boot_log_unregister(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    tracepoint_probe_unregister
              (__tracepoint_android_vh_logbuf_pr_cont,sym.copy_boot_log_pr_cont.229c056099aaf17b002bb392bb7a0071.cfi_jt
               ,0);
    tracepoint_probe_unregister
              (__tracepoint_android_vh_logbuf,sym.copy_boot_log.229c056099aaf17b002bb392bb7a0071.cfi_jt,0);
    if (_segment.ehdr != 0) {
        kfree();
    }
    return;
}


// ===== sym.record_print_text @ 0x08001940 (size 556) =====

//WARNING: Control flow encountered bad instruction data

int64_t sym.record_print_text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint uVar5;
    ulong *in_x18;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint64_t uVar10;
    ulong unaff_x30;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    uint uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_58 = *(iVar9 + 0x5e0);
    uVar6 = *(arg1 + 0x10);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uVar4 = *(arg1 + 8) / 1000000000;
    iVar2 = scnprintf(&uStack_98,0x30,"[%5lu.%06lu]",uVar4,(*(arg1 + 8) + uVar4 * -1000000000) / 1000);
    iVar9 = iVar2;
    uVar5 = 0x54;
    if (*(arg1 + 0x14) < 0) {
        uVar5 = 0x43;
    }
    uStack_60 = 0;
    uStack_68 = 0;
    snprintf(&uStack_68,0xc,"%c%u",uVar5,*(arg1 + 0x14) & 0x7fffffff);
    iVar2 = scnprintf(&uStack_98 + iVar9,0x30 - iVar9,"[%6s]",&uStack_68);
    uVar4 = iVar9 + iVar2;
    if ((0x2f < uVar4) || (*(&uStack_98 + uVar4) = 0x20, uVar4 - 0x2f < 0xffffffffffffffd0)) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(1,0x8001b68);
        (*pcVar1)();
    }
    iVar9 = uVar4 + 1;
    *(&uStack_98 + uVar4 + 1) = 0;
    iVar3 = memchr(arg2,10,uVar6);
    if (arg3 < uVar4 + 3 + uVar6) {
        iVar7 = 0;
    }
    else {
        iVar7 = 0;
        iVar8 = arg2;
        uVar10 = uVar6;
        if (iVar3 != 0) {
            uVar10 = iVar3 - arg2;
        }
        do {
            memmove(iVar8 + iVar9,iVar8,uVar6);
            memcpy(iVar8,&uStack_98,iVar9);
            iVar3 = uVar10 + iVar9 + 1;
            iVar7 = iVar3 + iVar7;
            if (uVar6 == uVar10) {
                *(iVar8 + uVar10 + iVar9) = 10;
                break;
            }
            iVar8 = iVar8 + iVar3;
            uVar6 = uVar6 + ~uVar10;
            iVar3 = memchr(iVar8,10,uVar6);
            uVar10 = uVar6;
            if (iVar3 != 0) {
                uVar10 = iVar3 - iVar8;
            }
        } while (uVar4 + 3 + uVar6 + iVar7 <= arg3);
    }
    if (arg3 != 0) {
        *(arg2 + iVar7) = 0;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_58) {
        return iVar7;
    }
    __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.init_module @ 0x08001b74 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.logbuf_vh_driver_probe.1f145e62783c93fa327f54d0c9889492.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08001ba8 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.logbuf_vh_driver_probe.1f145e62783c93fa327f54d0c9889492.cfi_jt);
    return;
}

