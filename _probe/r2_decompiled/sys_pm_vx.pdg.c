// decompiled from sys_pm_vx by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 472) =====

//WARNING: Switch with 1 destination removed at 0x08002078

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x7ff5a213d37b1a6) {
        if (arg1 < -0x3557318fb8d07b71) {
            if (arg1 == -0x66d421a09845f9f8) {
                pcVar2 = sym.debug_time_ms_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            }
            else {
                if (arg1 != -0x57be845bca9148ef) goto code_r0x08002038;
                pcVar2 = sym.vx_resume.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            }
        }
        else if (arg1 == -0x3557318fb8d07b71) {
            pcVar2 = sym.vx_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else {
            if (arg1 != -0x8dc801903aca538) {
                if (arg1 != 0x2b3a43e29242445) goto code_r0x08002038;
                pcVar2 = sym.init_module.cfi_jt;
                goto code_r0x080011c4;
            }
            pcVar2 = sym.open_vx.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
code_r0x080011a4:
        if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
            return;
        }
    }
    else {
        if (arg1 < 0x321969b888d4949e) {
            if (arg1 != 0x7ff5a213d37b1a6) {
                if (arg1 != 0x1e3d0ffe3d0499e9) goto code_r0x08002038;
                pcVar2 = sym.debug_time_ms_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                goto code_r0x080011a4;
            }
            pcVar2 = sym.seq_read.cfi_jt;
        }
        else if (arg1 == 0x321969b888d4949e) {
            pcVar2 = sym.seq_lseek.cfi_jt;
        }
        else if (arg1 == 0x5233d5bc7887ae44) {
            pcVar2 = sym.vx_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else {
            if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08002038;
            pcVar2 = sym.cleanup_module.cfi_jt;
        }
code_r0x080011c4:
        if (pcVar1 == pcVar2) {
            return;
        }
    }
code_r0x08002038:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800208c);
    (*pcVar1)();
}


// ===== sym.seq_lseek.cfi_jt @ 0x080011e0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_lseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.open_vx.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080011e8 (size 8) =====

void sym.open_vx.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.vx_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,*(param_1 + 0x2d8));
    return;
}


// ===== sym.single_release.cfi_jt @ 0x080011f0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.single_release.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.cleanup_module.cfi_jt @ 0x080011f8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.vx_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001200 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.vx_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.debug_time_ms_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001208 (size 8) =====

int64_t sym.debug_time_ms_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int64_t iVar1;
    int iVar2;
    int *piVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar4;
    ulong unaff_x30;
    int iStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    piVar3 = &iStack_3c;
    iVar4 = *(param_1 + 0x98);
    iStack_3c = 0;
    iVar2 = kstrtoint(param_3,0,piVar3);
    if (iVar2 == 0) {
        if (iStack_3c < 1) {
            _printk(0x80003ad,"debug_time_ms_store");
            param_4 = -0x16;
        }
        else {
            iVar1 = iVar4 + 0x20;
            mutex_lock(iVar1);
            *(iVar4 + 0xa4) = iStack_3c;
            mutex_unlock(iVar1);
        }
    }
    else {
        param_4 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.debug_enable_show;
    iVar2 = scnprintf(piVar3,0x1000,0x8000311,*(*(iVar4 + 0x98) + 0xa0));
    return iVar2;
}


// ===== sym.debug_enable_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001210 (size 8) =====

uchar * sym.debug_enable_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,uchar *param_4)

{
    int64_t *piVar1;
    uint32_t uVar2;
    code *pcVar3;
    int iVar4;
    int64_t iVar5;
    ulong uVar6;
    uint64_t uVar7;
    uchar *puVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *puVar10;
    int64_t iVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    int64_t *piVar14;
    uint64_t uVar15;
    ulong unaff_x30;
    uchar auVar16 [16];
    ulong uStack_310;
    ulong *puStack_308;
    ulong uStack_300;
    int64_t iStack_2f8;
    uint64_t uStack_2f0;
    ulong uStack_2e8;
    ulong uStack_2e0;
    ulong uStack_2d8;
    ulong uStack_2d0;
    ulong uStack_2c8;
    ulong uStack_2c0;
    ulong uStack_2b8;
    ulong uStack_2b0;
    ulong uStack_2a8;
    ulong uStack_2a0;
    ulong uStack_298;
    ulong uStack_290;
    ulong uStack_288;
    ulong uStack_280;
    ulong uStack_278;
    ulong uStack_270;
    ulong uStack_268;
    ulong uStack_260;
    ulong uStack_258;
    ulong uStack_250;
    ulong uStack_248;
    ulong uStack_240;
    ulong uStack_238;
    ulong uStack_230;
    ulong uStack_228;
    ulong uStack_220;
    ulong uStack_218;
    unkbyte7 Stack_210;
    uchar uStack_209;
    unkbyte7 Stack_208;
    int64_t iStack_200;
    uchar **ppuStack_1f0;
    code *pcStack_1e8;
    ulong uStack_188;
    ulong *puStack_180;
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
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
    unkbyte7 Stack_88;
    uchar uStack_81;
    unkbyte7 Stack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_38 = *(iVar11 + 0x5e0);
    iVar11 = *(param_1 + 0x98);
    uStack_3c = 0;
    iVar4 = kstrtoint(param_3,0,&uStack_3c);
    if (iVar4 == 0) {
        if (uStack_3c < 2) {
            mutex_lock(iVar11 + 0x20);
            *(iVar11 + 0xa0) = uStack_3c != 0;
            mutex_unlock(iVar11 + 0x20);
            subsystem_sleep_debug_enable(*(iVar11 + 0xa0));
        }
        else {
            _printk(0x8000378,"debug_enable_store");
            param_4 = 0xffffffffffffffea;
        }
    }
    else {
        param_4 = 0xffffffffffffffea;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18 = sym.vx_suspend;
    pcStack_68 = sym.vx_suspend;
    iVar11 = sp_el0;
    iStack_78 = *(iVar11 + 0x5e0);
    iVar11 = *(iVar5 + 0x98);
    puStack_70 = &stack0xffffffffffffffd0;
    if (*(iVar11 + 0xa0) != '\0') {
        uVar6 = ktime_get_with_offset(1);
        *(iVar11 + 0x90) = uVar6;
        if (*(iVar11 + 0xa8) != '\0') {
            uStack_a0 = 0;
            uStack_98 = 0;
            uStack_b0 = 0;
            uStack_a8 = 0;
            Stack_80 = 0;
            uStack_90 = 0;
            Stack_88 = 0;
            uStack_81 = 0;
            uStack_c0 = 0;
            uStack_b8 = 0;
            uStack_d0 = 0;
            uStack_c8 = 0;
            uStack_e0 = 0;
            uStack_d8 = 0;
            uStack_f0 = 0;
            uStack_e8 = 0;
            uStack_100 = 0;
            uStack_f8 = 0;
            uStack_110 = 0;
            uStack_108 = 0;
            uStack_120 = 0;
            uStack_118 = 0;
            uStack_130 = 0;
            uStack_128 = 0;
            uStack_140 = 0;
            uStack_138 = 0;
            uStack_150 = 0;
            uStack_148 = 0;
            uStack_160 = 0;
            uStack_158 = 0;
            uStack_170 = 0;
            uStack_168 = 0;
            uStack_178 = 0;
            uStack_188 = 0;
            mutex_lock(iVar11 + 0x20);
            iVar4 = scnprintf(&uStack_178,0xff,"{class: lpm_mon, type: cxpc, dur: 1000, flush: 5, ts_adj: 1}");
            uStack_188 = CONCAT44(uStack_188._4_4_,iVar4 + 3) & 0xfffffffffffffffc;
            puStack_180 = &uStack_178;
            iVar4 = mbox_send_message(*(iVar11 + 0x50),&uStack_188);
            if (iVar4 < 0) {
                _printk(0x8000251,"sys_pm_vx_send_msg",iVar4);
            }
            mutex_unlock(iVar11 + 0x20);
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_78) {
        return NULL;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18_00 = sym.vx_resume;
    pcStack_1e8 = sym.vx_resume;
    iVar11 = sp_el0;
    iStack_200 = *(iVar11 + 0x5e0);
    iVar11 = *(iVar5 + 0x98);
    ppuStack_1f0 = &puStack_70;
    if (*(iVar11 + 0xa0) != '\0') {
        iVar5 = ktime_get_with_offset(1);
        *(iVar11 + 0x98) = iVar5;
        if (*(iVar11 + 0xa4) < (iVar5 - *(iVar11 + 0x90)) / 1000000) {
            uVar7 = has_system_slept();
            if (((uVar7 & 1) == 0) && (uVar7 = has_subsystem_slept(), (uVar7 & 1) != 0)) {
                if (*(iVar11 + 0xa8) == '\0') {
                    *(iVar11 + 0xa8) = 1;
                }
                else {
                    iStack_2f8 = 0;
                    uStack_2f0 = 0;
                    uStack_300 = 0;
                    iVar4 = sym.read_vx_data(iVar11,&uStack_300);
                    iVar5 = iStack_2f8;
                    if (iVar4 == 0) {
                        iVar4 = uStack_2f0;
                        uVar7 = uStack_2f0 & 0xffffffff;
                        uVar9 = *(iVar11 + 0x10);
                        if (uVar9 != 0) {
                            uVar13 = 0;
                            uVar2 = uStack_2f0 - 1;
                            piVar1 = iStack_2f8 + 8;
                            do {
                                uVar12 = uVar7;
                                piVar14 = piVar1;
                                uVar15 = uVar2;
                                if (0 < iVar4) {
                                    do {
                                        if (*(*piVar14 + uVar13 * 4) == 0) break;
                                        if (uVar15 == 0) {
                                            _printk(0x8000464,"vx_check_drv",*(*(iVar11 + 0x18) + uVar13 * 8));
                                        }
                                        uVar12 = uVar12 - 1;
                                        piVar14 = piVar14 + 2;
                                        uVar15 = uVar15 - 1;
                                    } while (uVar12 != 0);
                                    uVar9 = *(iVar11 + 0x10);
                                }
                                uVar13 = uVar13 + 1;
                            } while (uVar13 < uVar9);
                        }
                        if (0 < iVar4) {
                            puVar10 = iVar5 + 8;
                            do {
                                kfree(*puVar10);
                                uVar7 = uVar7 - 1;
                                puVar10 = puVar10 + 2;
                            } while (uVar7 != 0);
                        }
                        kfree(iVar5);
                    }
                    else {
                        _printk(0x80002e2,"vx_check_drv");
                    }
                }
            }
            else {
                if (*(iVar11 + 0xa8) != '\0') {
                    uStack_228 = 0;
                    uStack_220 = 0;
                    uStack_238 = 0;
                    uStack_230 = 0;
                    Stack_208 = 0;
                    uStack_218 = 0;
                    Stack_210 = 0;
                    uStack_209 = 0;
                    uStack_248 = 0;
                    uStack_240 = 0;
                    uStack_258 = 0;
                    uStack_250 = 0;
                    uStack_268 = 0;
                    uStack_260 = 0;
                    uStack_278 = 0;
                    uStack_270 = 0;
                    uStack_288 = 0;
                    uStack_280 = 0;
                    uStack_298 = 0;
                    uStack_290 = 0;
                    uStack_2a8 = 0;
                    uStack_2a0 = 0;
                    uStack_2b8 = 0;
                    uStack_2b0 = 0;
                    uStack_2c8 = 0;
                    uStack_2c0 = 0;
                    uStack_2d8 = 0;
                    uStack_2d0 = 0;
                    uStack_2e8 = 0;
                    uStack_2e0 = 0;
                    iStack_2f8 = 0;
                    uStack_2f0 = 0;
                    uStack_300 = 0;
                    uStack_310 = 0;
                    mutex_lock(iVar11 + 0x20);
                    iVar4 = scnprintf(&uStack_300,0xff,
                                      "{class: lpm_mon, type: cxpc, dur: 1000, flush: 1, log_once: 1}");
                    uStack_310 = CONCAT44(uStack_310._4_4_,iVar4 + 3) & 0xfffffffffffffffc;
                    puStack_308 = &uStack_300;
                    iVar4 = mbox_send_message(*(iVar11 + 0x50),&uStack_310);
                    if (iVar4 < 0) {
                        _printk(0x8000251,"sys_pm_vx_send_msg",iVar4);
                    }
                    mutex_unlock(iVar11 + 0x20);
                }
                *(iVar11 + 0xa8) = 0;
            }
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) != iStack_200) {
        auVar16 = __stack_chk_fail();
        puVar8 = auVar16._0_8_;
        *extraout_x18_01 = sym.__cfi_check_fail;
        if (puVar8 != NULL) {
            switch(*puVar8) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar8,auVar16._8_8_,0);
                break;
            default:
                return puVar8;
            }
        }
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5502,0x800208c);
        (*pcVar3)();
    }
    return NULL;
}


// ===== sym.seq_read.cfi_jt @ 0x08001218 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_read.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.vx_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001220 (size 8) =====

ulong sym.vx_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    uint32_t *puVar2;
    int iVar3;
    uint *puVar4;
    int *piVar5;
    uint8_t uVar6;
    bool bVar7;
    char cVar8;
    uint32_t uVar9;
    int iVar10;
    uint32_t uVar11;
    ulong uVar12;
    int64_t *piVar13;
    int64_t iVar14;
    char *pcVar15;
    char *pcVar16;
    uint32_t *puVar17;
    uint64_t uVar18;
    int64_t iVar19;
    uint64_t uVar20;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar21;
    int64_t iVar22;
    uint64_t uVar23;
    int64_t iVar24;
    uint64_t uVar25;
    ulong unaff_x30;
    uchar auVar26 [16];
    ulong uStack_80;
    int64_t iStack_78;
    uint64_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar22 = sp_el0;
    iStack_68 = *(iVar22 + 0x5e0);
    iVar22 = *(param_1 + 0x80);
    iStack_78 = 0;
    uStack_70 = 0;
    uStack_80 = 0;
    uVar12 = sym.read_vx_data(iVar22,&uStack_80);
    if (uVar12 == 0) {
        cVar8 = uStack_80._3_1_;
        if (uStack_80._3_1_ == -0x56) {
            pcVar15 = "AOSS";
        }
        else if (uStack_80._3_1_ == -0x34) {
            pcVar15 = "CXPC";
        }
        else {
            pcVar15 = 0x80004cd;
            if (uStack_80._3_1_ != -0x23) {
                pcVar15 = 0x80004cc;
            }
        }
        seq_printf(param_1,
                   "Mode           : %s\nDuration (ms)  : %u\nTime Shift     : %u\nFlush Threshold: %u\nMax Log Entries: %u\n"
                   ,pcVar15,uStack_80._6_2_,uStack_80._5_1_,uStack_80._4_1_,uStack_80._2_1_);
        seq_puts(param_1,"Timestamp|");
        if (*(iVar22 + 0x10) != 0) {
            uVar23 = 0;
            do {
                seq_printf(param_1,"%*s|",8,*(*(iVar22 + 0x18) + uVar23 * 8));
                uVar23 = uVar23 + 1;
            } while (uVar23 < *(iVar22 + 0x10));
        }
        seq_puts(param_1,0x8000391);
        iVar24 = iStack_78;
        uVar23 = uStack_70 & 0xffffffff;
        if (0 < uStack_70) {
            uVar25 = 0;
            bVar7 = false;
            pcVar15 = 0x80004cd;
            if (cVar8 != -0x23) {
                pcVar15 = 0x80004cc;
            }
            do {
                puVar4 = iVar24 + uVar25 * 0x10;
                seq_printf(param_1,"%*x|",9,*puVar4);
                piVar13 = puVar4 + 2;
                puVar17 = *piVar13;
                uVar18 = *(iVar22 + 0x10);
                uVar9 = *puVar17;
                if (uVar18 == 0) {
                    if (uVar9 != 0) goto code_r0x08001640;
code_r0x08001708:
                    if (bVar7) {
                        if (cVar8 == -0x56) {
                            pcVar16 = "AOSS";
                        }
                        else {
                            pcVar16 = "CXPC";
                            if (cVar8 != -0x34) {
                                pcVar16 = pcVar15;
                            }
                        }
                        seq_printf(param_1,"%s Exit\n",pcVar16);
                        bVar7 = false;
                    }
                    else {
                        if (cVar8 == -0x56) {
                            pcVar16 = "AOSS";
                        }
                        else {
                            pcVar16 = "CXPC";
                            if (cVar8 != -0x34) {
                                pcVar16 = pcVar15;
                            }
                        }
                        seq_printf(param_1,"%s Enter\n",pcVar16);
                        bVar7 = true;
                    }
                }
                else {
                    if (uVar18 != 1) {
                        uVar20 = 1;
                        do {
                            puVar2 = puVar17 + uVar20;
                            uVar20 = uVar20 + 1;
                            uVar9 = *puVar2 | uVar9;
                        } while (uVar20 < uVar18);
                    }
                    if (uVar9 == 0) goto code_r0x08001708;
                    seq_printf(param_1,"%*u|",8);
                    if (1 < *(iVar22 + 0x10)) {
                        uVar18 = 1;
                        do {
                            seq_printf(param_1,"%*u|",8,*(*piVar13 + uVar18 * 4));
                            uVar18 = uVar18 + 1;
                        } while (uVar18 < *(iVar22 + 0x10));
                    }
code_r0x08001640:
                    seq_puts(param_1,0x8000391);
                }
                uVar25 = uVar25 + 1;
            } while (uVar25 != uVar23);
            puVar21 = iVar24 + 8;
            do {
                kfree(*puVar21);
                uVar23 = uVar23 - 1;
                puVar21 = puVar21 + 2;
            } while (uVar23 != 0);
        }
        kfree(iVar24);
        uVar12 = 0;
    }
    iVar22 = sp_el0;
    if (*(iVar22 + 0x5e0) == iStack_68) {
        return uVar12;
    }
    auVar26 = __stack_chk_fail(uVar12);
    iVar22 = auVar26._8_8_;
    piVar13 = auVar26._0_8_;
    *extraout_x18 = sym.read_vx_data;
    iVar24 = *piVar13;
    uVar9 = sym.readl_relaxed(iVar24);
    DataMemoryBarrier(2,1);
    if (uVar9 != 0) {
        *(iVar22 + 2) = uVar9 >> 8 & 0xff | (uVar9 & 0xff00ff) << 8;
        iVar10 = sym.readl_relaxed(iVar24 + 4);
        DataMemoryBarrier(2,1);
        if (iVar10 != 0) {
            *(iVar22 + 6) = iVar10;
            *(iVar22 + 5) = iVar10 >> 0x10;
            *(iVar22 + 4) = iVar10 >> 0x18;
            iVar14 = __kmalloc(*(iVar22 + 2) << 4,0xdc0);
            if (iVar14 == 0) {
                return 0xfffffff4;
            }
            if (*(iVar22 + 2) == '\0') {
                uVar23 = 0;
            }
            else {
                uVar23 = 0;
                uVar9 = 8;
                do {
                    iVar10 = sym.readl_relaxed(iVar24 + uVar9);
                    DataMemoryBarrier(2,1);
                    piVar5 = iVar14 + uVar23 * 0x10;
                    *piVar5 = iVar10;
                    if (iVar10 == 0) break;
                    iVar19 = piVar13[2];
                    *piVar5 = iVar10 << (*(iVar22 + 5) & 0x1f);
                    if ((iVar19 + 3U >> 0x3e != 0) ||
                       (iVar19 = __kmalloc((iVar19 + 3U & 0xfffffffffffffffc) << 2,0xdc0), iVar19 == 0)) {
                        if (0 < uVar23) {
                            puVar21 = iVar14 + 8;
                            do {
                                kfree(*puVar21);
                                uVar23 = uVar23 - 1;
                                puVar21 = puVar21 + 2;
                            } while (uVar23 != 0);
                        }
                        kfree(iVar14);
                        return 0xfffffff4;
                    }
                    if (piVar13[2] == 0) {
                        uVar9 = uVar9 + 4;
                    }
                    else {
                        iVar10 = 4;
                        do {
                            uVar11 = sym.readl_relaxed(iVar24 + uVar9 + iVar10);
                            DataMemoryBarrier(2,1);
                            *(iVar19 + (iVar10 + -4) * 4) = uVar11 & 0xff;
                            uVar18 = piVar13[2];
                            *(iVar19 + (iVar10 + -3) * 4) = uVar11 >> 8 & 0xff;
                            iVar3 = iVar10 + 4;
                            uVar25 = iVar10;
                            *(iVar19 + (iVar10 + -2) * 4) = uVar11 >> 0x10 & 0xff;
                            *(iVar19 + (iVar10 + -1) * 4) = uVar11 >> 0x18;
                            iVar10 = iVar3;
                        } while (uVar25 < uVar18);
                        uVar9 = uVar9 + iVar3;
                    }
                    uVar6 = *(iVar22 + 2);
                    iVar1 = uVar23 * 0x10;
                    uVar23 = uVar23 + 1;
                    *(iVar14 + iVar1 + 8) = iVar19;
                } while (uVar23 < uVar6);
            }
            *(iVar22 + 8) = iVar14;
            *(iVar22 + 0x10) = uVar23;
            return 0;
        }
    }
    return 0xfffffffe;
}


// ===== sym.vx_resume.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001228 (size 8) =====

uchar * sym.vx_resume.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    uint32_t uVar2;
    code *pcVar3;
    int iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uchar *puVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar9;
    ulong *puVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    int64_t *piVar13;
    uint64_t uVar14;
    ulong unaff_x30;
    uchar auVar15 [16];
    ulong uStack_180;
    ulong *puStack_178;
    ulong uStack_170;
    int64_t iStack_168;
    uint64_t uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
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
    unkbyte7 Stack_80;
    uchar uStack_79;
    unkbyte7 Stack_78;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_70 = *(iVar9 + 0x5e0);
    iVar9 = *(param_1 + 0x98);
    if (*(iVar9 + 0xa0) != '\0') {
        iVar5 = ktime_get_with_offset(1);
        *(iVar9 + 0x98) = iVar5;
        if (*(iVar9 + 0xa4) < (iVar5 - *(iVar9 + 0x90)) / 1000000) {
            uVar6 = has_system_slept();
            if (((uVar6 & 1) == 0) && (uVar6 = has_subsystem_slept(), (uVar6 & 1) != 0)) {
                if (*(iVar9 + 0xa8) == '\0') {
                    *(iVar9 + 0xa8) = 1;
                }
                else {
                    iStack_168 = 0;
                    uStack_160 = 0;
                    uStack_170 = 0;
                    iVar4 = sym.read_vx_data(iVar9,&uStack_170);
                    iVar5 = iStack_168;
                    if (iVar4 == 0) {
                        iVar4 = uStack_160;
                        uVar6 = uStack_160 & 0xffffffff;
                        uVar8 = *(iVar9 + 0x10);
                        if (uVar8 != 0) {
                            uVar12 = 0;
                            uVar2 = uStack_160 - 1;
                            piVar1 = iStack_168 + 8;
                            do {
                                uVar11 = uVar6;
                                piVar13 = piVar1;
                                uVar14 = uVar2;
                                if (0 < iVar4) {
                                    do {
                                        if (*(*piVar13 + uVar12 * 4) == 0) break;
                                        if (uVar14 == 0) {
                                            _printk(0x8000464,"vx_check_drv",*(*(iVar9 + 0x18) + uVar12 * 8));
                                        }
                                        uVar11 = uVar11 - 1;
                                        piVar13 = piVar13 + 2;
                                        uVar14 = uVar14 - 1;
                                    } while (uVar11 != 0);
                                    uVar8 = *(iVar9 + 0x10);
                                }
                                uVar12 = uVar12 + 1;
                            } while (uVar12 < uVar8);
                        }
                        if (0 < iVar4) {
                            puVar10 = iVar5 + 8;
                            do {
                                kfree(*puVar10);
                                uVar6 = uVar6 - 1;
                                puVar10 = puVar10 + 2;
                            } while (uVar6 != 0);
                        }
                        kfree(iVar5);
                    }
                    else {
                        _printk(0x80002e2,"vx_check_drv");
                    }
                }
            }
            else {
                if (*(iVar9 + 0xa8) != '\0') {
                    uStack_98 = 0;
                    uStack_90 = 0;
                    uStack_a8 = 0;
                    uStack_a0 = 0;
                    Stack_78 = 0;
                    uStack_88 = 0;
                    Stack_80 = 0;
                    uStack_79 = 0;
                    uStack_b8 = 0;
                    uStack_b0 = 0;
                    uStack_c8 = 0;
                    uStack_c0 = 0;
                    uStack_d8 = 0;
                    uStack_d0 = 0;
                    uStack_e8 = 0;
                    uStack_e0 = 0;
                    uStack_f8 = 0;
                    uStack_f0 = 0;
                    uStack_108 = 0;
                    uStack_100 = 0;
                    uStack_118 = 0;
                    uStack_110 = 0;
                    uStack_128 = 0;
                    uStack_120 = 0;
                    uStack_138 = 0;
                    uStack_130 = 0;
                    uStack_148 = 0;
                    uStack_140 = 0;
                    uStack_158 = 0;
                    uStack_150 = 0;
                    iStack_168 = 0;
                    uStack_160 = 0;
                    uStack_170 = 0;
                    uStack_180 = 0;
                    mutex_lock(iVar9 + 0x20);
                    iVar4 = scnprintf(&uStack_170,0xff,
                                      "{class: lpm_mon, type: cxpc, dur: 1000, flush: 1, log_once: 1}");
                    uStack_180 = CONCAT44(uStack_180._4_4_,iVar4 + 3) & 0xfffffffffffffffc;
                    puStack_178 = &uStack_170;
                    iVar4 = mbox_send_message(*(iVar9 + 0x50),&uStack_180);
                    if (iVar4 < 0) {
                        _printk(0x8000251,"sys_pm_vx_send_msg",iVar4);
                    }
                    mutex_unlock(iVar9 + 0x20);
                }
                *(iVar9 + 0xa8) = 0;
            }
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_70) {
        auVar15 = __stack_chk_fail();
        puVar7 = auVar15._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar7 != NULL) {
            switch(*puVar7) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar7,auVar15._8_8_,0);
                break;
            default:
                return puVar7;
            }
        }
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5502,0x800208c);
        (*pcVar3)();
    }
    return NULL;
}


// ===== sym.vx_suspend.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001230 (size 8) =====

uchar * sym.vx_suspend.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    uint32_t uVar2;
    code *pcVar3;
    int iVar4;
    ulong uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uchar *puVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *puVar10;
    int64_t iVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    int64_t *piVar14;
    uint64_t uVar15;
    ulong unaff_x30;
    uchar auVar16 [16];
    ulong uStack_2d0;
    ulong *puStack_2c8;
    ulong uStack_2c0;
    int64_t iStack_2b8;
    uint64_t uStack_2b0;
    ulong uStack_2a8;
    ulong uStack_2a0;
    ulong uStack_298;
    ulong uStack_290;
    ulong uStack_288;
    ulong uStack_280;
    ulong uStack_278;
    ulong uStack_270;
    ulong uStack_268;
    ulong uStack_260;
    ulong uStack_258;
    ulong uStack_250;
    ulong uStack_248;
    ulong uStack_240;
    ulong uStack_238;
    ulong uStack_230;
    ulong uStack_228;
    ulong uStack_220;
    ulong uStack_218;
    ulong uStack_210;
    ulong uStack_208;
    ulong uStack_200;
    ulong uStack_1f8;
    ulong uStack_1f0;
    ulong uStack_1e8;
    ulong uStack_1e0;
    ulong uStack_1d8;
    unkbyte7 Stack_1d0;
    uchar uStack_1c9;
    unkbyte7 Stack_1c8;
    int64_t iStack_1c0;
    uchar *puStack_1b0;
    code *pcStack_1a8;
    ulong uStack_148;
    ulong *puStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
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
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    unkbyte7 Stack_48;
    uchar uStack_41;
    unkbyte7 Stack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_38 = *(iVar11 + 0x5e0);
    iVar11 = *(param_1 + 0x98);
    if (*(iVar11 + 0xa0) != '\0') {
        uVar5 = ktime_get_with_offset(1);
        *(iVar11 + 0x90) = uVar5;
        if (*(iVar11 + 0xa8) != '\0') {
            uStack_60 = 0;
            uStack_58 = 0;
            uStack_70 = 0;
            uStack_68 = 0;
            Stack_40 = 0;
            uStack_50 = 0;
            Stack_48 = 0;
            uStack_41 = 0;
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
            uStack_100 = 0;
            uStack_f8 = 0;
            uStack_110 = 0;
            uStack_108 = 0;
            uStack_120 = 0;
            uStack_118 = 0;
            uStack_130 = 0;
            uStack_128 = 0;
            uStack_138 = 0;
            uStack_148 = 0;
            mutex_lock(iVar11 + 0x20);
            iVar4 = scnprintf(&uStack_138,0xff,"{class: lpm_mon, type: cxpc, dur: 1000, flush: 5, ts_adj: 1}");
            uStack_148 = CONCAT44(uStack_148._4_4_,iVar4 + 3) & 0xfffffffffffffffc;
            puStack_140 = &uStack_138;
            iVar4 = mbox_send_message(*(iVar11 + 0x50),&uStack_148);
            if (iVar4 < 0) {
                _printk(0x8000251,"sys_pm_vx_send_msg",iVar4);
            }
            mutex_unlock(iVar11 + 0x20);
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_38) {
        return NULL;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18 = sym.vx_resume;
    pcStack_1a8 = sym.vx_resume;
    iVar11 = sp_el0;
    iStack_1c0 = *(iVar11 + 0x5e0);
    iVar11 = *(iVar6 + 0x98);
    puStack_1b0 = &stack0xffffffffffffffd0;
    if (*(iVar11 + 0xa0) != '\0') {
        iVar6 = ktime_get_with_offset(1);
        *(iVar11 + 0x98) = iVar6;
        if (*(iVar11 + 0xa4) < (iVar6 - *(iVar11 + 0x90)) / 1000000) {
            uVar7 = has_system_slept();
            if (((uVar7 & 1) == 0) && (uVar7 = has_subsystem_slept(), (uVar7 & 1) != 0)) {
                if (*(iVar11 + 0xa8) == '\0') {
                    *(iVar11 + 0xa8) = 1;
                }
                else {
                    iStack_2b8 = 0;
                    uStack_2b0 = 0;
                    uStack_2c0 = 0;
                    iVar4 = sym.read_vx_data(iVar11,&uStack_2c0);
                    iVar6 = iStack_2b8;
                    if (iVar4 == 0) {
                        iVar4 = uStack_2b0;
                        uVar7 = uStack_2b0 & 0xffffffff;
                        uVar9 = *(iVar11 + 0x10);
                        if (uVar9 != 0) {
                            uVar13 = 0;
                            uVar2 = uStack_2b0 - 1;
                            piVar1 = iStack_2b8 + 8;
                            do {
                                uVar12 = uVar7;
                                piVar14 = piVar1;
                                uVar15 = uVar2;
                                if (0 < iVar4) {
                                    do {
                                        if (*(*piVar14 + uVar13 * 4) == 0) break;
                                        if (uVar15 == 0) {
                                            _printk(0x8000464,"vx_check_drv",*(*(iVar11 + 0x18) + uVar13 * 8));
                                        }
                                        uVar12 = uVar12 - 1;
                                        piVar14 = piVar14 + 2;
                                        uVar15 = uVar15 - 1;
                                    } while (uVar12 != 0);
                                    uVar9 = *(iVar11 + 0x10);
                                }
                                uVar13 = uVar13 + 1;
                            } while (uVar13 < uVar9);
                        }
                        if (0 < iVar4) {
                            puVar10 = iVar6 + 8;
                            do {
                                kfree(*puVar10);
                                uVar7 = uVar7 - 1;
                                puVar10 = puVar10 + 2;
                            } while (uVar7 != 0);
                        }
                        kfree(iVar6);
                    }
                    else {
                        _printk(0x80002e2,"vx_check_drv");
                    }
                }
            }
            else {
                if (*(iVar11 + 0xa8) != '\0') {
                    uStack_1e8 = 0;
                    uStack_1e0 = 0;
                    uStack_1f8 = 0;
                    uStack_1f0 = 0;
                    Stack_1c8 = 0;
                    uStack_1d8 = 0;
                    Stack_1d0 = 0;
                    uStack_1c9 = 0;
                    uStack_208 = 0;
                    uStack_200 = 0;
                    uStack_218 = 0;
                    uStack_210 = 0;
                    uStack_228 = 0;
                    uStack_220 = 0;
                    uStack_238 = 0;
                    uStack_230 = 0;
                    uStack_248 = 0;
                    uStack_240 = 0;
                    uStack_258 = 0;
                    uStack_250 = 0;
                    uStack_268 = 0;
                    uStack_260 = 0;
                    uStack_278 = 0;
                    uStack_270 = 0;
                    uStack_288 = 0;
                    uStack_280 = 0;
                    uStack_298 = 0;
                    uStack_290 = 0;
                    uStack_2a8 = 0;
                    uStack_2a0 = 0;
                    iStack_2b8 = 0;
                    uStack_2b0 = 0;
                    uStack_2c0 = 0;
                    uStack_2d0 = 0;
                    mutex_lock(iVar11 + 0x20);
                    iVar4 = scnprintf(&uStack_2c0,0xff,
                                      "{class: lpm_mon, type: cxpc, dur: 1000, flush: 1, log_once: 1}");
                    uStack_2d0 = CONCAT44(uStack_2d0._4_4_,iVar4 + 3) & 0xfffffffffffffffc;
                    puStack_2c8 = &uStack_2c0;
                    iVar4 = mbox_send_message(*(iVar11 + 0x50),&uStack_2d0);
                    if (iVar4 < 0) {
                        _printk(0x8000251,"sys_pm_vx_send_msg",iVar4);
                    }
                    mutex_unlock(iVar11 + 0x20);
                }
                *(iVar11 + 0xa8) = 0;
            }
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) != iStack_1c0) {
        auVar16 = __stack_chk_fail();
        puVar8 = auVar16._0_8_;
        *extraout_x18_00 = sym.__cfi_check_fail;
        if (puVar8 != NULL) {
            switch(*puVar8) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar8,auVar16._8_8_,0);
                break;
            default:
                return puVar8;
            }
        }
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5502,0x800208c);
        (*pcVar3)();
    }
    return NULL;
}


// ===== sym.vx_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001238 (size 8) =====

uint64_t sym.vx_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    uint64_t uVar1;
    int iVar2;
    uint32_t uVar3;
    uint64_t *puVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int iVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = param_1 + 0x10;
    puVar4 = devm_kmalloc(uVar1,0xb0,0xdc0);
    if (puVar4 == NULL) {
        uVar5 = 0xfffffff4;
    }
    else {
        uVar5 = of_iomap(*(param_1 + 0x300),0);
        *puVar4 = uVar5;
        if ((uVar5 != 0) && (uVar5 < 0xfffffffffffff001)) {
            iVar6 = of_match_node(obj.drv_match_table,*(param_1 + 0x300));
            if (iVar6 == 0) {
                uVar5 = 0xffffffed;
            }
            else {
                uVar5 = *(iVar6 + 0xc0);
                iVar2 = 0;
                do {
                    iVar7 = iVar2;
                    iVar2 = iVar7 + 1;
                } while (**(uVar5 + iVar7 * 8) != '\0');
                puVar4[2] = iVar7;
                puVar4[3] = uVar5;
                uVar5 = debugfs_create_file("sys_pm_violators",0x100,0,puVar4,obj.sys_pm_vx_fops);
                if (uVar5 == 0) {
                    uVar5 = 0xffffffea;
                }
                else {
                    puVar4[1] = uVar5;
                    uVar3 = device_create_file(uVar1,obj.dev_attr_debug_time_ms);
                    if (uVar3 == 0) {
                        uVar3 = device_create_file(uVar1,obj.dev_attr_debug_enable);
                        if (uVar3 == 0) {
                            puVar4[0xb] = uVar1;
                            *(puVar4 + 0xc) = 1;
                            puVar4[0xd] = 1000;
                            *(puVar4 + 0xe) = 0;
                            uVar5 = mbox_request_channel(puVar4 + 0xb,0);
                            puVar4[10] = uVar5;
                            if (uVar5 < 0xfffffffffffff001) {
                                __mutex_init(puVar4 + 4,"&pd->lock",obj.vx_probe.__key);
                                uVar5 = 0;
                                *(puVar4 + 0x14) = 0;
                                *(puVar4 + 0x15) = 0;
                                *(puVar4 + 0xa4) = 10000;
                                *(param_1 + 0xa8) = puVar4;
                                goto code_r0x08001424;
                            }
                            _dev_err(uVar1,"failed to get mbox channel\n");
                            uVar3 = puVar4[10];
                            device_remove_file(uVar1,obj.dev_attr_debug_enable);
                        }
                        else {
                            _dev_err(uVar1,"failed: create sys pm vx sysfs debug enable entry\n");
                        }
                        device_remove_file(uVar1,obj.dev_attr_debug_time_ms);
                    }
                    else {
                        _dev_err(uVar1,"failed: create sys pm vx sysfs debug time entry\n");
                    }
                    uVar5 = uVar3;
                    debugfs_remove(puVar4[1]);
                }
            }
        }
    }
code_r0x08001424:
    return uVar5 & 0xffffffff;
}


// ===== sym.vx_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001240 (size 8) =====

ulong sym.vx_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0xa8);
    debugfs_remove(*(iVar1 + 8));
    device_remove_file(param_1 + 0x10,obj.dev_attr_debug_time_ms);
    device_remove_file(param_1 + 0x10,obj.dev_attr_debug_enable);
    mbox_free_channel(*(iVar1 + 0x50));
    subsystem_sleep_debug_enable(0);
    return 0;
}


// ===== sym.debug_time_ms_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001248 (size 8) =====

int64_t sym.debug_time_ms_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x8000311,*(*(param_1 + 0x98) + 0xa4));
    return iVar1;
}


// ===== sym.debug_enable_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001250 (size 8) =====

int64_t sym.debug_enable_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x8000311,*(*(param_1 + 0x98) + 0xa0));
    return iVar1;
}


// ===== sym.vx_probe @ 0x08001258 (size 488) =====

uint64_t sym.vx_probe(int64_t arg1)

{
    uint64_t uVar1;
    int iVar2;
    uint32_t uVar3;
    uint64_t *puVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int iVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = arg1 + 0x10;
    puVar4 = devm_kmalloc(uVar1,0xb0,0xdc0);
    if (puVar4 == NULL) {
        uVar5 = 0xfffffff4;
    }
    else {
        uVar5 = of_iomap(*(arg1 + 0x300),0);
        *puVar4 = uVar5;
        if ((uVar5 != 0) && (uVar5 < 0xfffffffffffff001)) {
            iVar6 = of_match_node(obj.drv_match_table,*(arg1 + 0x300));
            if (iVar6 == 0) {
                uVar5 = 0xffffffed;
            }
            else {
                uVar5 = *(iVar6 + 0xc0);
                iVar2 = 0;
                do {
                    iVar7 = iVar2;
                    iVar2 = iVar7 + 1;
                } while (**(uVar5 + iVar7 * 8) != '\0');
                puVar4[2] = iVar7;
                puVar4[3] = uVar5;
                uVar5 = debugfs_create_file("sys_pm_violators",0x100,0,puVar4,obj.sys_pm_vx_fops);
                if (uVar5 == 0) {
                    uVar5 = 0xffffffea;
                }
                else {
                    puVar4[1] = uVar5;
                    uVar3 = device_create_file(uVar1,obj.dev_attr_debug_time_ms);
                    if (uVar3 == 0) {
                        uVar3 = device_create_file(uVar1,obj.dev_attr_debug_enable);
                        if (uVar3 == 0) {
                            puVar4[0xb] = uVar1;
                            *(puVar4 + 0xc) = 1;
                            puVar4[0xd] = 1000;
                            *(puVar4 + 0xe) = 0;
                            uVar5 = mbox_request_channel(puVar4 + 0xb,0);
                            puVar4[10] = uVar5;
                            if (uVar5 < 0xfffffffffffff001) {
                                __mutex_init(puVar4 + 4,"&pd->lock",obj.vx_probe.__key);
                                uVar5 = 0;
                                *(puVar4 + 0x14) = 0;
                                *(puVar4 + 0x15) = 0;
                                *(puVar4 + 0xa4) = 10000;
                                *(arg1 + 0xa8) = puVar4;
                                goto code_r0x08001424;
                            }
                            _dev_err(uVar1,"failed to get mbox channel\n");
                            uVar3 = puVar4[10];
                            device_remove_file(uVar1,obj.dev_attr_debug_enable);
                        }
                        else {
                            _dev_err(uVar1,"failed: create sys pm vx sysfs debug enable entry\n");
                        }
                        device_remove_file(uVar1,obj.dev_attr_debug_time_ms);
                    }
                    else {
                        _dev_err(uVar1,"failed: create sys pm vx sysfs debug time entry\n");
                    }
                    uVar5 = uVar3;
                    debugfs_remove(puVar4[1]);
                }
            }
        }
    }
code_r0x08001424:
    return uVar5 & 0xffffffff;
}


// ===== sym.vx_remove @ 0x08001440 (size 108) =====

ulong sym.vx_remove(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0xa8);
    debugfs_remove(*(iVar1 + 8));
    device_remove_file(arg1 + 0x10,obj.dev_attr_debug_time_ms);
    device_remove_file(arg1 + 0x10,obj.dev_attr_debug_enable);
    mbox_free_channel(*(iVar1 + 0x50));
    subsystem_sleep_debug_enable(0);
    return 0;
}


// ===== sym.open_vx @ 0x080014ac (size 56) =====

void sym.open_vx(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg2,sym.vx_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,*(arg1 + 0x2d8));
    return;
}


// ===== sym.vx_show @ 0x080014e4 (size 772) =====

ulong sym.vx_show(int64_t arg1)

{
    int64_t iVar1;
    uint32_t *puVar2;
    int iVar3;
    uint *puVar4;
    int *piVar5;
    uint8_t uVar6;
    bool bVar7;
    char cVar8;
    uint32_t uVar9;
    int iVar10;
    uint32_t uVar11;
    ulong uVar12;
    int64_t *piVar13;
    int64_t iVar14;
    char *pcVar15;
    char *pcVar16;
    uint32_t *puVar17;
    uint64_t uVar18;
    int64_t iVar19;
    uint64_t uVar20;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar21;
    int64_t iVar22;
    uint64_t uVar23;
    int64_t iVar24;
    uint64_t uVar25;
    ulong unaff_x30;
    uchar auVar26 [16];
    ulong uStack_80;
    int64_t iStack_78;
    uint64_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar22 = sp_el0;
    iStack_68 = *(iVar22 + 0x5e0);
    iVar22 = *(arg1 + 0x80);
    iStack_78 = 0;
    uStack_70 = 0;
    uStack_80 = 0;
    uVar12 = sym.read_vx_data(iVar22,&uStack_80);
    if (uVar12 == 0) {
        cVar8 = uStack_80._3_1_;
        if (uStack_80._3_1_ == -0x56) {
            pcVar15 = "AOSS";
        }
        else if (uStack_80._3_1_ == -0x34) {
            pcVar15 = "CXPC";
        }
        else {
            pcVar15 = 0x80004cd;
            if (uStack_80._3_1_ != -0x23) {
                pcVar15 = 0x80004cc;
            }
        }
        seq_printf(arg1,
                   "Mode           : %s\nDuration (ms)  : %u\nTime Shift     : %u\nFlush Threshold: %u\nMax Log Entries: %u\n"
                   ,pcVar15,uStack_80._6_2_,uStack_80._5_1_,uStack_80._4_1_,uStack_80._2_1_);
        seq_puts(arg1,"Timestamp|");
        if (*(iVar22 + 0x10) != 0) {
            uVar23 = 0;
            do {
                seq_printf(arg1,"%*s|",8,*(*(iVar22 + 0x18) + uVar23 * 8));
                uVar23 = uVar23 + 1;
            } while (uVar23 < *(iVar22 + 0x10));
        }
        seq_puts(arg1,0x8000391);
        iVar24 = iStack_78;
        uVar23 = uStack_70 & 0xffffffff;
        if (0 < uStack_70) {
            uVar25 = 0;
            bVar7 = false;
            pcVar15 = 0x80004cd;
            if (cVar8 != -0x23) {
                pcVar15 = 0x80004cc;
            }
            do {
                puVar4 = iVar24 + uVar25 * 0x10;
                seq_printf(arg1,"%*x|",9,*puVar4);
                piVar13 = puVar4 + 2;
                puVar17 = *piVar13;
                uVar18 = *(iVar22 + 0x10);
                uVar9 = *puVar17;
                if (uVar18 == 0) {
                    if (uVar9 != 0) goto code_r0x08001640;
code_r0x08001708:
                    if (bVar7) {
                        if (cVar8 == -0x56) {
                            pcVar16 = "AOSS";
                        }
                        else {
                            pcVar16 = "CXPC";
                            if (cVar8 != -0x34) {
                                pcVar16 = pcVar15;
                            }
                        }
                        seq_printf(arg1,"%s Exit\n",pcVar16);
                        bVar7 = false;
                    }
                    else {
                        if (cVar8 == -0x56) {
                            pcVar16 = "AOSS";
                        }
                        else {
                            pcVar16 = "CXPC";
                            if (cVar8 != -0x34) {
                                pcVar16 = pcVar15;
                            }
                        }
                        seq_printf(arg1,"%s Enter\n",pcVar16);
                        bVar7 = true;
                    }
                }
                else {
                    if (uVar18 != 1) {
                        uVar20 = 1;
                        do {
                            puVar2 = puVar17 + uVar20;
                            uVar20 = uVar20 + 1;
                            uVar9 = *puVar2 | uVar9;
                        } while (uVar20 < uVar18);
                    }
                    if (uVar9 == 0) goto code_r0x08001708;
                    seq_printf(arg1,"%*u|",8);
                    if (1 < *(iVar22 + 0x10)) {
                        uVar18 = 1;
                        do {
                            seq_printf(arg1,"%*u|",8,*(*piVar13 + uVar18 * 4));
                            uVar18 = uVar18 + 1;
                        } while (uVar18 < *(iVar22 + 0x10));
                    }
code_r0x08001640:
                    seq_puts(arg1,0x8000391);
                }
                uVar25 = uVar25 + 1;
            } while (uVar25 != uVar23);
            puVar21 = iVar24 + 8;
            do {
                kfree(*puVar21);
                uVar23 = uVar23 - 1;
                puVar21 = puVar21 + 2;
            } while (uVar23 != 0);
        }
        kfree(iVar24);
        uVar12 = 0;
    }
    iVar22 = sp_el0;
    if (*(iVar22 + 0x5e0) == iStack_68) {
        return uVar12;
    }
    auVar26 = __stack_chk_fail(uVar12);
    iVar22 = auVar26._8_8_;
    piVar13 = auVar26._0_8_;
    *extraout_x18 = sym.read_vx_data;
    iVar24 = *piVar13;
    uVar9 = sym.readl_relaxed(iVar24);
    DataMemoryBarrier(2,1);
    if (uVar9 != 0) {
        *(iVar22 + 2) = uVar9 >> 8 & 0xff | (uVar9 & 0xff00ff) << 8;
        iVar10 = sym.readl_relaxed(iVar24 + 4);
        DataMemoryBarrier(2,1);
        if (iVar10 != 0) {
            *(iVar22 + 6) = iVar10;
            *(iVar22 + 5) = iVar10 >> 0x10;
            *(iVar22 + 4) = iVar10 >> 0x18;
            iVar14 = __kmalloc(*(iVar22 + 2) << 4,0xdc0);
            if (iVar14 == 0) {
                return 0xfffffff4;
            }
            if (*(iVar22 + 2) == '\0') {
                uVar23 = 0;
            }
            else {
                uVar23 = 0;
                uVar9 = 8;
                do {
                    iVar10 = sym.readl_relaxed(iVar24 + uVar9);
                    DataMemoryBarrier(2,1);
                    piVar5 = iVar14 + uVar23 * 0x10;
                    *piVar5 = iVar10;
                    if (iVar10 == 0) break;
                    iVar19 = piVar13[2];
                    *piVar5 = iVar10 << (*(iVar22 + 5) & 0x1f);
                    if ((iVar19 + 3U >> 0x3e != 0) ||
                       (iVar19 = __kmalloc((iVar19 + 3U & 0xfffffffffffffffc) << 2,0xdc0), iVar19 == 0)) {
                        if (0 < uVar23) {
                            puVar21 = iVar14 + 8;
                            do {
                                kfree(*puVar21);
                                uVar23 = uVar23 - 1;
                                puVar21 = puVar21 + 2;
                            } while (uVar23 != 0);
                        }
                        kfree(iVar14);
                        return 0xfffffff4;
                    }
                    if (piVar13[2] == 0) {
                        uVar9 = uVar9 + 4;
                    }
                    else {
                        iVar10 = 4;
                        do {
                            uVar11 = sym.readl_relaxed(iVar24 + uVar9 + iVar10);
                            DataMemoryBarrier(2,1);
                            *(iVar19 + (iVar10 + -4) * 4) = uVar11 & 0xff;
                            uVar18 = piVar13[2];
                            *(iVar19 + (iVar10 + -3) * 4) = uVar11 >> 8 & 0xff;
                            iVar3 = iVar10 + 4;
                            uVar25 = iVar10;
                            *(iVar19 + (iVar10 + -2) * 4) = uVar11 >> 0x10 & 0xff;
                            *(iVar19 + (iVar10 + -1) * 4) = uVar11 >> 0x18;
                            iVar10 = iVar3;
                        } while (uVar25 < uVar18);
                        uVar9 = uVar9 + iVar3;
                    }
                    uVar6 = *(iVar22 + 2);
                    iVar1 = uVar23 * 0x10;
                    uVar23 = uVar23 + 1;
                    *(iVar14 + iVar1 + 8) = iVar19;
                } while (uVar23 < uVar6);
            }
            *(iVar22 + 8) = iVar14;
            *(iVar22 + 0x10) = uVar23;
            return 0;
        }
    }
    return 0xfffffffe;
}


// ===== sym.read_vx_data @ 0x080017e8 (size 468) =====

ulong sym.read_vx_data(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    uint64_t uVar3;
    int *piVar4;
    uint8_t uVar5;
    uint32_t uVar6;
    int iVar7;
    uint32_t uVar8;
    int64_t iVar9;
    int64_t iVar10;
    uint64_t uVar11;
    ulong *in_x18;
    ulong *puVar12;
    int64_t arg1_00;
    uint64_t uVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *arg1;
    uVar6 = sym.readl_relaxed(arg1_00);
    DataMemoryBarrier(2,1);
    if (uVar6 != 0) {
        *(arg2 + 2) = uVar6 >> 8 & 0xff | (uVar6 & 0xff00ff) << 8;
        iVar7 = sym.readl_relaxed(arg1_00 + 4);
        DataMemoryBarrier(2,1);
        if (iVar7 != 0) {
            *(arg2 + 6) = iVar7;
            *(arg2 + 5) = iVar7 >> 0x10;
            *(arg2 + 4) = iVar7 >> 0x18;
            iVar9 = __kmalloc(*(arg2 + 2) << 4,0xdc0);
            if (iVar9 == 0) {
                return 0xfffffff4;
            }
            if (*(arg2 + 2) == '\0') {
                uVar13 = 0;
            }
            else {
                uVar13 = 0;
                uVar6 = 8;
                do {
                    iVar7 = sym.readl_relaxed(arg1_00 + uVar6);
                    DataMemoryBarrier(2,1);
                    piVar4 = iVar9 + uVar13 * 0x10;
                    *piVar4 = iVar7;
                    if (iVar7 == 0) break;
                    uVar3 = *(arg1 + 0x10) + 3;
                    *piVar4 = iVar7 << (*(arg2 + 5) & 0x1f);
                    if ((uVar3 >> 0x3e != 0) ||
                       (iVar10 = __kmalloc((uVar3 & 0xfffffffffffffffc) << 2,0xdc0), iVar10 == 0)) {
                        if (0 < uVar13) {
                            puVar12 = iVar9 + 8;
                            do {
                                kfree(*puVar12);
                                uVar13 = uVar13 - 1;
                                puVar12 = puVar12 + 2;
                            } while (uVar13 != 0);
                        }
                        kfree(iVar9);
                        return 0xfffffff4;
                    }
                    if (*(arg1 + 0x10) == 0) {
                        uVar6 = uVar6 + 4;
                    }
                    else {
                        iVar7 = 4;
                        do {
                            uVar8 = sym.readl_relaxed(arg1_00 + uVar6 + iVar7);
                            DataMemoryBarrier(2,1);
                            *(iVar10 + (iVar7 + -4) * 4) = uVar8 & 0xff;
                            uVar11 = *(arg1 + 0x10);
                            *(iVar10 + (iVar7 + -3) * 4) = uVar8 >> 8 & 0xff;
                            iVar2 = iVar7 + 4;
                            uVar3 = iVar7;
                            *(iVar10 + (iVar7 + -2) * 4) = uVar8 >> 0x10 & 0xff;
                            *(iVar10 + (iVar7 + -1) * 4) = uVar8 >> 0x18;
                            iVar7 = iVar2;
                        } while (uVar3 < uVar11);
                        uVar6 = uVar6 + iVar2;
                    }
                    uVar5 = *(arg2 + 2);
                    iVar1 = uVar13 * 0x10;
                    uVar13 = uVar13 + 1;
                    *(iVar9 + iVar1 + 8) = iVar10;
                } while (uVar13 < uVar5);
            }
            *(arg2 + 8) = iVar9;
            *(arg2 + 0x10) = uVar13;
            return 0;
        }
    }
    return 0xfffffffe;
}


// ===== sym.readl_relaxed @ 0x080019bc (size 108) =====

uint sym.readl_relaxed(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x80019c0);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x80019f4);
    return uVar1;
}


// ===== sym.debug_time_ms_show @ 0x08001a2c (size 68) =====

int64_t sym.debug_time_ms_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x8000311,*(*(arg1 + 0x98) + 0xa4));
    return iVar1;
}


// ===== sym.debug_time_ms_store @ 0x08001a70 (size 208) =====

int64_t sym.debug_time_ms_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    int *piVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar4;
    ulong unaff_x30;
    int iStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    piVar3 = &iStack_3c;
    iVar4 = *(arg1 + 0x98);
    iStack_3c = 0;
    iVar2 = kstrtoint(arg2,0,piVar3);
    if (iVar2 == 0) {
        if (iStack_3c < 1) {
            _printk(0x80003ad,"debug_time_ms_store");
            arg3 = -0x16;
        }
        else {
            iVar1 = iVar4 + 0x20;
            mutex_lock(iVar1);
            *(iVar4 + 0xa4) = iStack_3c;
            mutex_unlock(iVar1);
        }
    }
    else {
        arg3 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.debug_enable_show;
    iVar2 = scnprintf(piVar3,0x1000,0x8000311,*(*(iVar4 + 0x98) + 0xa0));
    return iVar2;
}


// ===== sym.debug_enable_show @ 0x08001b40 (size 68) =====

int64_t sym.debug_enable_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x8000311,*(*(arg1 + 0x98) + 0xa0));
    return iVar1;
}


// ===== sym.debug_enable_store @ 0x08001b84 (size 224) =====

uchar * sym.debug_enable_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    uint32_t uVar2;
    code *pcVar3;
    int iVar4;
    int64_t iVar5;
    ulong uVar6;
    uint64_t uVar7;
    uchar *puVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *puVar10;
    int64_t iVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    int64_t *piVar14;
    uint64_t uVar15;
    ulong unaff_x30;
    uchar auVar16 [16];
    ulong uStack_310;
    ulong *puStack_308;
    ulong uStack_300;
    int64_t iStack_2f8;
    uint64_t uStack_2f0;
    ulong uStack_2e8;
    ulong uStack_2e0;
    ulong uStack_2d8;
    ulong uStack_2d0;
    ulong uStack_2c8;
    ulong uStack_2c0;
    ulong uStack_2b8;
    ulong uStack_2b0;
    ulong uStack_2a8;
    ulong uStack_2a0;
    ulong uStack_298;
    ulong uStack_290;
    ulong uStack_288;
    ulong uStack_280;
    ulong uStack_278;
    ulong uStack_270;
    ulong uStack_268;
    ulong uStack_260;
    ulong uStack_258;
    ulong uStack_250;
    ulong uStack_248;
    ulong uStack_240;
    ulong uStack_238;
    ulong uStack_230;
    ulong uStack_228;
    ulong uStack_220;
    ulong uStack_218;
    unkbyte7 Stack_210;
    uchar uStack_209;
    unkbyte7 Stack_208;
    int64_t iStack_200;
    uchar **ppuStack_1f0;
    code *pcStack_1e8;
    ulong uStack_188;
    ulong *puStack_180;
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
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
    unkbyte7 Stack_88;
    uchar uStack_81;
    unkbyte7 Stack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_38 = *(iVar11 + 0x5e0);
    iVar11 = *(arg1 + 0x98);
    uStack_3c = 0;
    iVar4 = kstrtoint(arg2,0,&uStack_3c);
    if (iVar4 == 0) {
        if (uStack_3c < 2) {
            mutex_lock(iVar11 + 0x20);
            *(iVar11 + 0xa0) = uStack_3c != 0;
            mutex_unlock(iVar11 + 0x20);
            subsystem_sleep_debug_enable(*(iVar11 + 0xa0));
        }
        else {
            _printk(0x8000378,"debug_enable_store");
            arg3 = -0x16;
        }
    }
    else {
        arg3 = -0x16;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18 = sym.vx_suspend;
    pcStack_68 = sym.vx_suspend;
    iVar11 = sp_el0;
    iStack_78 = *(iVar11 + 0x5e0);
    iVar11 = *(iVar5 + 0x98);
    puStack_70 = &stack0xffffffffffffffd0;
    if (*(iVar11 + 0xa0) != '\0') {
        uVar6 = ktime_get_with_offset(1);
        *(iVar11 + 0x90) = uVar6;
        if (*(iVar11 + 0xa8) != '\0') {
            uStack_a0 = 0;
            uStack_98 = 0;
            uStack_b0 = 0;
            uStack_a8 = 0;
            Stack_80 = 0;
            uStack_90 = 0;
            Stack_88 = 0;
            uStack_81 = 0;
            uStack_c0 = 0;
            uStack_b8 = 0;
            uStack_d0 = 0;
            uStack_c8 = 0;
            uStack_e0 = 0;
            uStack_d8 = 0;
            uStack_f0 = 0;
            uStack_e8 = 0;
            uStack_100 = 0;
            uStack_f8 = 0;
            uStack_110 = 0;
            uStack_108 = 0;
            uStack_120 = 0;
            uStack_118 = 0;
            uStack_130 = 0;
            uStack_128 = 0;
            uStack_140 = 0;
            uStack_138 = 0;
            uStack_150 = 0;
            uStack_148 = 0;
            uStack_160 = 0;
            uStack_158 = 0;
            uStack_170 = 0;
            uStack_168 = 0;
            uStack_178 = 0;
            uStack_188 = 0;
            mutex_lock(iVar11 + 0x20);
            iVar4 = scnprintf(&uStack_178,0xff,"{class: lpm_mon, type: cxpc, dur: 1000, flush: 5, ts_adj: 1}");
            uStack_188 = CONCAT44(uStack_188._4_4_,iVar4 + 3) & 0xfffffffffffffffc;
            puStack_180 = &uStack_178;
            iVar4 = mbox_send_message(*(iVar11 + 0x50),&uStack_188);
            if (iVar4 < 0) {
                _printk(0x8000251,"sys_pm_vx_send_msg",iVar4);
            }
            mutex_unlock(iVar11 + 0x20);
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_78) {
        return NULL;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18_00 = sym.vx_resume;
    pcStack_1e8 = sym.vx_resume;
    iVar11 = sp_el0;
    iStack_200 = *(iVar11 + 0x5e0);
    iVar11 = *(iVar5 + 0x98);
    ppuStack_1f0 = &puStack_70;
    if (*(iVar11 + 0xa0) != '\0') {
        iVar5 = ktime_get_with_offset(1);
        *(iVar11 + 0x98) = iVar5;
        if (*(iVar11 + 0xa4) < (iVar5 - *(iVar11 + 0x90)) / 1000000) {
            uVar7 = has_system_slept();
            if (((uVar7 & 1) == 0) && (uVar7 = has_subsystem_slept(), (uVar7 & 1) != 0)) {
                if (*(iVar11 + 0xa8) == '\0') {
                    *(iVar11 + 0xa8) = 1;
                }
                else {
                    iStack_2f8 = 0;
                    uStack_2f0 = 0;
                    uStack_300 = 0;
                    iVar4 = sym.read_vx_data(iVar11,&uStack_300);
                    iVar5 = iStack_2f8;
                    if (iVar4 == 0) {
                        iVar4 = uStack_2f0;
                        uVar7 = uStack_2f0 & 0xffffffff;
                        uVar9 = *(iVar11 + 0x10);
                        if (uVar9 != 0) {
                            uVar13 = 0;
                            uVar2 = uStack_2f0 - 1;
                            piVar1 = iStack_2f8 + 8;
                            do {
                                uVar12 = uVar7;
                                piVar14 = piVar1;
                                uVar15 = uVar2;
                                if (0 < iVar4) {
                                    do {
                                        if (*(*piVar14 + uVar13 * 4) == 0) break;
                                        if (uVar15 == 0) {
                                            _printk(0x8000464,"vx_check_drv",*(*(iVar11 + 0x18) + uVar13 * 8));
                                        }
                                        uVar12 = uVar12 - 1;
                                        piVar14 = piVar14 + 2;
                                        uVar15 = uVar15 - 1;
                                    } while (uVar12 != 0);
                                    uVar9 = *(iVar11 + 0x10);
                                }
                                uVar13 = uVar13 + 1;
                            } while (uVar13 < uVar9);
                        }
                        if (0 < iVar4) {
                            puVar10 = iVar5 + 8;
                            do {
                                kfree(*puVar10);
                                uVar7 = uVar7 - 1;
                                puVar10 = puVar10 + 2;
                            } while (uVar7 != 0);
                        }
                        kfree(iVar5);
                    }
                    else {
                        _printk(0x80002e2,"vx_check_drv");
                    }
                }
            }
            else {
                if (*(iVar11 + 0xa8) != '\0') {
                    uStack_228 = 0;
                    uStack_220 = 0;
                    uStack_238 = 0;
                    uStack_230 = 0;
                    Stack_208 = 0;
                    uStack_218 = 0;
                    Stack_210 = 0;
                    uStack_209 = 0;
                    uStack_248 = 0;
                    uStack_240 = 0;
                    uStack_258 = 0;
                    uStack_250 = 0;
                    uStack_268 = 0;
                    uStack_260 = 0;
                    uStack_278 = 0;
                    uStack_270 = 0;
                    uStack_288 = 0;
                    uStack_280 = 0;
                    uStack_298 = 0;
                    uStack_290 = 0;
                    uStack_2a8 = 0;
                    uStack_2a0 = 0;
                    uStack_2b8 = 0;
                    uStack_2b0 = 0;
                    uStack_2c8 = 0;
                    uStack_2c0 = 0;
                    uStack_2d8 = 0;
                    uStack_2d0 = 0;
                    uStack_2e8 = 0;
                    uStack_2e0 = 0;
                    iStack_2f8 = 0;
                    uStack_2f0 = 0;
                    uStack_300 = 0;
                    uStack_310 = 0;
                    mutex_lock(iVar11 + 0x20);
                    iVar4 = scnprintf(&uStack_300,0xff,
                                      "{class: lpm_mon, type: cxpc, dur: 1000, flush: 1, log_once: 1}");
                    uStack_310 = CONCAT44(uStack_310._4_4_,iVar4 + 3) & 0xfffffffffffffffc;
                    puStack_308 = &uStack_300;
                    iVar4 = mbox_send_message(*(iVar11 + 0x50),&uStack_310);
                    if (iVar4 < 0) {
                        _printk(0x8000251,"sys_pm_vx_send_msg",iVar4);
                    }
                    mutex_unlock(iVar11 + 0x20);
                }
                *(iVar11 + 0xa8) = 0;
            }
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) != iStack_200) {
        auVar16 = __stack_chk_fail();
        puVar8 = auVar16._0_8_;
        *extraout_x18_01 = sym.__cfi_check_fail;
        if (puVar8 != NULL) {
            switch(*puVar8) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar8,auVar16._8_8_,0);
                break;
            default:
                return puVar8;
            }
        }
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5502,0x800208c);
        (*pcVar3)();
    }
    return NULL;
}


// ===== sym.vx_suspend @ 0x08001c64 (size 308) =====

uchar * sym.vx_suspend(int64_t arg1)

{
    int64_t *piVar1;
    uint32_t uVar2;
    code *pcVar3;
    int iVar4;
    ulong uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uchar *puVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *puVar10;
    int64_t iVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    int64_t *piVar14;
    uint64_t uVar15;
    ulong unaff_x30;
    uchar auVar16 [16];
    ulong uStack_2d0;
    ulong *puStack_2c8;
    ulong uStack_2c0;
    int64_t iStack_2b8;
    uint64_t uStack_2b0;
    ulong uStack_2a8;
    ulong uStack_2a0;
    ulong uStack_298;
    ulong uStack_290;
    ulong uStack_288;
    ulong uStack_280;
    ulong uStack_278;
    ulong uStack_270;
    ulong uStack_268;
    ulong uStack_260;
    ulong uStack_258;
    ulong uStack_250;
    ulong uStack_248;
    ulong uStack_240;
    ulong uStack_238;
    ulong uStack_230;
    ulong uStack_228;
    ulong uStack_220;
    ulong uStack_218;
    ulong uStack_210;
    ulong uStack_208;
    ulong uStack_200;
    ulong uStack_1f8;
    ulong uStack_1f0;
    ulong uStack_1e8;
    ulong uStack_1e0;
    ulong uStack_1d8;
    unkbyte7 Stack_1d0;
    uchar uStack_1c9;
    unkbyte7 Stack_1c8;
    int64_t iStack_1c0;
    uchar *puStack_1b0;
    code *pcStack_1a8;
    ulong uStack_148;
    ulong *puStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
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
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    unkbyte7 Stack_48;
    uchar uStack_41;
    unkbyte7 Stack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_38 = *(iVar11 + 0x5e0);
    iVar11 = *(arg1 + 0x98);
    if (*(iVar11 + 0xa0) != '\0') {
        uVar5 = ktime_get_with_offset(1);
        *(iVar11 + 0x90) = uVar5;
        if (*(iVar11 + 0xa8) != '\0') {
            uStack_60 = 0;
            uStack_58 = 0;
            uStack_70 = 0;
            uStack_68 = 0;
            Stack_40 = 0;
            uStack_50 = 0;
            Stack_48 = 0;
            uStack_41 = 0;
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
            uStack_100 = 0;
            uStack_f8 = 0;
            uStack_110 = 0;
            uStack_108 = 0;
            uStack_120 = 0;
            uStack_118 = 0;
            uStack_130 = 0;
            uStack_128 = 0;
            uStack_138 = 0;
            uStack_148 = 0;
            mutex_lock(iVar11 + 0x20);
            iVar4 = scnprintf(&uStack_138,0xff,"{class: lpm_mon, type: cxpc, dur: 1000, flush: 5, ts_adj: 1}");
            uStack_148 = CONCAT44(uStack_148._4_4_,iVar4 + 3) & 0xfffffffffffffffc;
            puStack_140 = &uStack_138;
            iVar4 = mbox_send_message(*(iVar11 + 0x50),&uStack_148);
            if (iVar4 < 0) {
                _printk(0x8000251,"sys_pm_vx_send_msg",iVar4);
            }
            mutex_unlock(iVar11 + 0x20);
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_38) {
        return NULL;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18 = sym.vx_resume;
    pcStack_1a8 = sym.vx_resume;
    iVar11 = sp_el0;
    iStack_1c0 = *(iVar11 + 0x5e0);
    iVar11 = *(iVar6 + 0x98);
    puStack_1b0 = &stack0xffffffffffffffd0;
    if (*(iVar11 + 0xa0) != '\0') {
        iVar6 = ktime_get_with_offset(1);
        *(iVar11 + 0x98) = iVar6;
        if (*(iVar11 + 0xa4) < (iVar6 - *(iVar11 + 0x90)) / 1000000) {
            uVar7 = has_system_slept();
            if (((uVar7 & 1) == 0) && (uVar7 = has_subsystem_slept(), (uVar7 & 1) != 0)) {
                if (*(iVar11 + 0xa8) == '\0') {
                    *(iVar11 + 0xa8) = 1;
                }
                else {
                    iStack_2b8 = 0;
                    uStack_2b0 = 0;
                    uStack_2c0 = 0;
                    iVar4 = sym.read_vx_data(iVar11,&uStack_2c0);
                    iVar6 = iStack_2b8;
                    if (iVar4 == 0) {
                        iVar4 = uStack_2b0;
                        uVar7 = uStack_2b0 & 0xffffffff;
                        uVar9 = *(iVar11 + 0x10);
                        if (uVar9 != 0) {
                            uVar13 = 0;
                            uVar2 = uStack_2b0 - 1;
                            piVar1 = iStack_2b8 + 8;
                            do {
                                uVar12 = uVar7;
                                piVar14 = piVar1;
                                uVar15 = uVar2;
                                if (0 < iVar4) {
                                    do {
                                        if (*(*piVar14 + uVar13 * 4) == 0) break;
                                        if (uVar15 == 0) {
                                            _printk(0x8000464,"vx_check_drv",*(*(iVar11 + 0x18) + uVar13 * 8));
                                        }
                                        uVar12 = uVar12 - 1;
                                        piVar14 = piVar14 + 2;
                                        uVar15 = uVar15 - 1;
                                    } while (uVar12 != 0);
                                    uVar9 = *(iVar11 + 0x10);
                                }
                                uVar13 = uVar13 + 1;
                            } while (uVar13 < uVar9);
                        }
                        if (0 < iVar4) {
                            puVar10 = iVar6 + 8;
                            do {
                                kfree(*puVar10);
                                uVar7 = uVar7 - 1;
                                puVar10 = puVar10 + 2;
                            } while (uVar7 != 0);
                        }
                        kfree(iVar6);
                    }
                    else {
                        _printk(0x80002e2,"vx_check_drv");
                    }
                }
            }
            else {
                if (*(iVar11 + 0xa8) != '\0') {
                    uStack_1e8 = 0;
                    uStack_1e0 = 0;
                    uStack_1f8 = 0;
                    uStack_1f0 = 0;
                    Stack_1c8 = 0;
                    uStack_1d8 = 0;
                    Stack_1d0 = 0;
                    uStack_1c9 = 0;
                    uStack_208 = 0;
                    uStack_200 = 0;
                    uStack_218 = 0;
                    uStack_210 = 0;
                    uStack_228 = 0;
                    uStack_220 = 0;
                    uStack_238 = 0;
                    uStack_230 = 0;
                    uStack_248 = 0;
                    uStack_240 = 0;
                    uStack_258 = 0;
                    uStack_250 = 0;
                    uStack_268 = 0;
                    uStack_260 = 0;
                    uStack_278 = 0;
                    uStack_270 = 0;
                    uStack_288 = 0;
                    uStack_280 = 0;
                    uStack_298 = 0;
                    uStack_290 = 0;
                    uStack_2a8 = 0;
                    uStack_2a0 = 0;
                    iStack_2b8 = 0;
                    uStack_2b0 = 0;
                    uStack_2c0 = 0;
                    uStack_2d0 = 0;
                    mutex_lock(iVar11 + 0x20);
                    iVar4 = scnprintf(&uStack_2c0,0xff,
                                      "{class: lpm_mon, type: cxpc, dur: 1000, flush: 1, log_once: 1}");
                    uStack_2d0 = CONCAT44(uStack_2d0._4_4_,iVar4 + 3) & 0xfffffffffffffffc;
                    puStack_2c8 = &uStack_2c0;
                    iVar4 = mbox_send_message(*(iVar11 + 0x50),&uStack_2d0);
                    if (iVar4 < 0) {
                        _printk(0x8000251,"sys_pm_vx_send_msg",iVar4);
                    }
                    mutex_unlock(iVar11 + 0x20);
                }
                *(iVar11 + 0xa8) = 0;
            }
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) != iStack_1c0) {
        auVar16 = __stack_chk_fail();
        puVar8 = auVar16._0_8_;
        *extraout_x18_00 = sym.__cfi_check_fail;
        if (puVar8 != NULL) {
            switch(*puVar8) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar8,auVar16._8_8_,0);
                break;
            default:
                return puVar8;
            }
        }
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5502,0x800208c);
        (*pcVar3)();
    }
    return NULL;
}


// ===== sym.vx_resume @ 0x08001d98 (size 668) =====

uchar * sym.vx_resume(int64_t arg1)

{
    int64_t *piVar1;
    uint32_t uVar2;
    code *pcVar3;
    int iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uchar *puVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar9;
    ulong *puVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    int64_t *piVar13;
    uint64_t uVar14;
    ulong unaff_x30;
    uchar auVar15 [16];
    ulong uStack_180;
    ulong *puStack_178;
    ulong uStack_170;
    int64_t iStack_168;
    uint64_t uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
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
    unkbyte7 Stack_80;
    uchar uStack_79;
    unkbyte7 Stack_78;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_70 = *(iVar9 + 0x5e0);
    iVar9 = *(arg1 + 0x98);
    if (*(iVar9 + 0xa0) != '\0') {
        iVar5 = ktime_get_with_offset(1);
        *(iVar9 + 0x98) = iVar5;
        if (*(iVar9 + 0xa4) < (iVar5 - *(iVar9 + 0x90)) / 1000000) {
            uVar6 = has_system_slept();
            if (((uVar6 & 1) == 0) && (uVar6 = has_subsystem_slept(), (uVar6 & 1) != 0)) {
                if (*(iVar9 + 0xa8) == '\0') {
                    *(iVar9 + 0xa8) = 1;
                }
                else {
                    iStack_168 = 0;
                    uStack_160 = 0;
                    uStack_170 = 0;
                    iVar4 = sym.read_vx_data(iVar9,&uStack_170);
                    iVar5 = iStack_168;
                    if (iVar4 == 0) {
                        iVar4 = uStack_160;
                        uVar6 = uStack_160 & 0xffffffff;
                        uVar8 = *(iVar9 + 0x10);
                        if (uVar8 != 0) {
                            uVar12 = 0;
                            uVar2 = uStack_160 - 1;
                            piVar1 = iStack_168 + 8;
                            do {
                                uVar11 = uVar6;
                                piVar13 = piVar1;
                                uVar14 = uVar2;
                                if (0 < iVar4) {
                                    do {
                                        if (*(*piVar13 + uVar12 * 4) == 0) break;
                                        if (uVar14 == 0) {
                                            _printk(0x8000464,"vx_check_drv",*(*(iVar9 + 0x18) + uVar12 * 8));
                                        }
                                        uVar11 = uVar11 - 1;
                                        piVar13 = piVar13 + 2;
                                        uVar14 = uVar14 - 1;
                                    } while (uVar11 != 0);
                                    uVar8 = *(iVar9 + 0x10);
                                }
                                uVar12 = uVar12 + 1;
                            } while (uVar12 < uVar8);
                        }
                        if (0 < iVar4) {
                            puVar10 = iVar5 + 8;
                            do {
                                kfree(*puVar10);
                                uVar6 = uVar6 - 1;
                                puVar10 = puVar10 + 2;
                            } while (uVar6 != 0);
                        }
                        kfree(iVar5);
                    }
                    else {
                        _printk(0x80002e2,"vx_check_drv");
                    }
                }
            }
            else {
                if (*(iVar9 + 0xa8) != '\0') {
                    uStack_98 = 0;
                    uStack_90 = 0;
                    uStack_a8 = 0;
                    uStack_a0 = 0;
                    Stack_78 = 0;
                    uStack_88 = 0;
                    Stack_80 = 0;
                    uStack_79 = 0;
                    uStack_b8 = 0;
                    uStack_b0 = 0;
                    uStack_c8 = 0;
                    uStack_c0 = 0;
                    uStack_d8 = 0;
                    uStack_d0 = 0;
                    uStack_e8 = 0;
                    uStack_e0 = 0;
                    uStack_f8 = 0;
                    uStack_f0 = 0;
                    uStack_108 = 0;
                    uStack_100 = 0;
                    uStack_118 = 0;
                    uStack_110 = 0;
                    uStack_128 = 0;
                    uStack_120 = 0;
                    uStack_138 = 0;
                    uStack_130 = 0;
                    uStack_148 = 0;
                    uStack_140 = 0;
                    uStack_158 = 0;
                    uStack_150 = 0;
                    iStack_168 = 0;
                    uStack_160 = 0;
                    uStack_170 = 0;
                    uStack_180 = 0;
                    mutex_lock(iVar9 + 0x20);
                    iVar4 = scnprintf(&uStack_170,0xff,
                                      "{class: lpm_mon, type: cxpc, dur: 1000, flush: 1, log_once: 1}");
                    uStack_180 = CONCAT44(uStack_180._4_4_,iVar4 + 3) & 0xfffffffffffffffc;
                    puStack_178 = &uStack_170;
                    iVar4 = mbox_send_message(*(iVar9 + 0x50),&uStack_180);
                    if (iVar4 < 0) {
                        _printk(0x8000251,"sys_pm_vx_send_msg",iVar4);
                    }
                    mutex_unlock(iVar9 + 0x20);
                }
                *(iVar9 + 0xa8) = 0;
            }
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_70) {
        auVar15 = __stack_chk_fail();
        puVar7 = auVar15._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar7 != NULL) {
            switch(*puVar7) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar7,auVar15._8_8_,0);
                break;
            default:
                return puVar7;
            }
        }
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5502,0x800208c);
        (*pcVar3)();
    }
    return NULL;
}


// ===== sym.__cfi_check_fail @ 0x08002034 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08002078

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
    //switch table (4 cases) at 0x8000180
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800208c);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08002094 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.vx_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x080020c8 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.vx_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}

