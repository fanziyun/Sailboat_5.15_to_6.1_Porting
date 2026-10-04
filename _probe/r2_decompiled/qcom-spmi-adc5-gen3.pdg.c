// decompiled from qcom-spmi-adc5-gen3 by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08003000 (size 664) =====

//WARNING: Switch with 1 destination removed at 0x08005d20

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0xf32aca0da37bd25) {
        if (arg1 < -0x550b9e52359ac614) {
            if (arg1 != -0x79e1ae77be533008) {
                if (arg1 == -0x69a26e3dfb9fe875) {
                    pcVar2 = sym.adc_tm_disable_chan_meas_gen3.cfi_jt;
                }
                else {
                    if (arg1 != -0x57be845bca9148ef) goto code_r0x08005ce0;
                    pcVar2 = sym.adc5_gen3_restore.0ad87e129b42622404d2c68837efd3ea.cfi_jt;
                }
                goto code_r0x08003240;
            }
            pcVar2 = sym.adc_tm5_gen3_set_trip_temp.0ad87e129b42622404d2c68837efd3ea.cfi_jt;
        }
        else if (arg1 < -0x3987c0e26ee29729) {
            if (arg1 == -0x550b9e52359ac614) {
                pcVar2 = sym.tm_handler_work.0ad87e129b42622404d2c68837efd3ea.cfi_jt;
code_r0x08003240:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x08005ce0;
            }
            if (arg1 != -0x4260ebb633ab377a) goto code_r0x08005ce0;
            pcVar2 = sym.adc5_gen3_shutdown.0ad87e129b42622404d2c68837efd3ea.cfi_jt;
        }
        else {
            if (arg1 != -0x3987c0e26ee29729) {
                if (arg1 != -0x3557318fb8d07b71) goto code_r0x08005ce0;
                pcVar2 = sym.adc5_gen3_exit.0ad87e129b42622404d2c68837efd3ea.cfi_jt;
                goto code_r0x08003240;
            }
            pcVar2 = sym.adc5_gen3_isr.0ad87e129b42622404d2c68837efd3ea.cfi_jt;
        }
    }
    else if (arg1 < 0xb6cdfc3c9d38873) {
        if (arg1 == -0xf32aca0da37bd25) {
            pcVar2 = sym.adc5_gen3_of_xlate.0ad87e129b42622404d2c68837efd3ea.cfi_jt;
        }
        else if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else {
            if (arg1 != 0x584737d42b54106) goto code_r0x08005ce0;
            pcVar2 = sym.get_adc_tm_gen3.cfi_jt;
        }
    }
    else if (arg1 < 0x23919759ad3b0c58) {
        if (arg1 == 0xb6cdfc3c9d38873) {
            pcVar2 = sym.adc5_gen3_read_raw.0ad87e129b42622404d2c68837efd3ea.cfi_jt;
        }
        else {
            if (arg1 != 0x13365def634cc965) goto code_r0x08005ce0;
            pcVar2 = sym.adc_tm_gen3_get_temp.cfi_jt;
        }
    }
    else if (arg1 == 0x23919759ad3b0c58) {
        pcVar2 = sym.__typeid__ZTSFiP13adc_tm_configE_global_addr;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08005ce0;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08005ce0:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8005d34);
    (*pcVar1)();
}


// ===== sym.adc_tm_gen3_get_temp.cfi_jt @ 0x080032a0 (size 8) =====

code * sym.adc_tm_gen3_get_temp.cfi_jt(int64_t param_1,int16_t *param_2,int16_t *param_3)

{
    ulong *puVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    int iVar4;
    ulong *arg1;
    ulong uVar5;
    int64_t iVar6;
    uint *puVar7;
    ulong uVar8;
    ulong uVar9;
    int64_t *piVar10;
    uint uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    code *pcVar12;
    int64_t iVar13;
    code *pcVar14;
    uint64_t uVar15;
    ulong unaff_x30;
    uchar auVar16 [16];
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    int64_t iStack_d8;
    uchar **ppuStack_d0;
    code *pcStack_c8;
    ulong *puStack_c0;
    uchar auStack_a8 [4];
    uchar auStack_a4 [4];
    uint8_t uStack_a0;
    uchar uStack_9f;
    uchar uStack_9e;
    uint8_t uStack_9d;
    uint8_t uStack_9c;
    uchar uStack_9b;
    uint8_t uStack_9a;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    int16_t aiStack_3c [2];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iStack_38 = *(iVar13 + 0x5e0);
    aiStack_3c[0] = 0;
    if ((param_1 == 0) || (iVar13 = *(param_1 + 0x30), iVar13 == 0)) {
        pcVar12 = 0xffffffea;
    }
    else if (*(param_1 + 0x74) == '\0') {
        param_3 = aiStack_3c;
        uVar3 = sym.adc5_gen3_do_conversion(iVar13,param_1,param_3);
        if (uVar3 < 0) {
            pcVar12 = uVar3;
        }
        else {
            param_3 = *(iVar13 + 0x88);
            uVar15 = qcom_adc5_hw_scale(*(param_1 + 0x20),*(param_1 + 0x10),param_3,aiStack_3c[0],param_2);
            pcVar12 = uVar15 & 0xffffffff;
            iVar13 = *(*(param_1 + 0x30) + 0xe0);
            if ((iVar13 != 0) && (*(param_1 + 0x48) != 0)) {
                thermal_minidump_update_data(iVar13,*(param_1 + 0x48) + 4);
                param_3 = param_2;
            }
        }
    }
    else {
        pcVar12 = NULL;
        *(param_1 + 0x74) = 0;
        *param_2 = *(param_1 + 0x70);
    }
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_38) {
        return pcVar12;
    }
    auVar16 = __stack_chk_fail();
    puVar7 = auVar16._8_8_;
    arg1 = auVar16._0_8_;
    *extraout_x18 = sym.adc5_gen3_do_conversion;
    pcStack_88 = sym.adc5_gen3_do_conversion;
    iVar13 = sp_el0;
    puVar1 = arg1 + 0xb;
    iStack_98 = *(iVar13 + 0x5e0);
    uVar2 = *(puVar7 + 7);
    auStack_a8[0] = 0;
    iVar4 = puVar7[0xe];
    puStack_90 = &stack0xffffffffffffffd0;
    mutex_lock(puVar1);
    uVar3 = sym.adc5_gen3_poll_wait_hs(arg1,0);
    if (uVar3 < 0) {
        pcVar12 = uVar3;
        goto code_r0x0800375c;
    }
    uStack_9c = 0;
    uStack_9b = 0;
    uStack_9a = 0;
    uStack_a0 = 0;
    uStack_9f = 0;
    uStack_9e = 0;
    uStack_9d = 0;
    uVar3 = *(puVar7 + 7);
    if (puVar7[0xe] != 0) {
        uVar3 = 0;
    }
    uVar15 = uVar3;
    uVar3 = regmap_bulk_read(*arg1,*(arg1[2] + uVar15 * 0x18) + 0x4f,&uStack_a0,7);
    if (uVar3 < 0) {
        uVar5 = 0x800033a;
code_r0x080036a8:
        uVar8 = 0x4f;
        uVar9 = 7;
    }
    else {
        uStack_a0 = *(puVar7 + 3) & 0xf;
        uStack_9f = 0x80;
        uStack_9e = 1;
        uStack_9d = uStack_9d & 0xc3 | *(puVar7 + 1) << 4 | *(puVar7 + 2) << 2;
        uStack_9c = uStack_9c & 0x78 | *(puVar7 + 6) | 0x80;
        uStack_9a = uStack_9a & 0xf0 | *(puVar7 + 5);
        uStack_9b = *puVar7;
        *(arg1 + 7) = 0;
        uVar3 = regmap_bulk_write(*arg1,*(arg1[2] + uVar15 * 0x18) + 0x4f,&uStack_a0,7);
        if (uVar3 < 0) {
            uVar5 = 0x8000715;
            goto code_r0x080036a8;
        }
        auStack_a4[0] = 1;
        uVar3 = regmap_bulk_write(*arg1,*(arg1[2] + uVar15 * 0x18) + 0xe5,auStack_a4,1);
        if (-1 < uVar3) {
            iVar13 = wait_for_completion_timeout(arg1 + 7,0x7e);
            if (iVar13 == 0) {
                _printk(0x80007b4,*(puVar7 + 10));
                pcVar12 = 0xffffff92;
            }
            else {
                jiffies_to_msecs();
                uVar3 = uVar2;
                if (iVar4 != 0) {
                    uVar3 = 0;
                }
                uVar15 = uVar3;
                uStack_a0 = 0;
                uStack_9f = 0;
                uVar3 = regmap_bulk_read(*arg1,*(arg1[2] + uVar15 * 0x18) + 0x5c,&uStack_a0,2);
                if (uVar3 < 0) {
                    pcVar12 = uVar3;
                    uVar5 = 0x800033a;
                    uVar8 = 0x5c;
                    uVar9 = 2;
                }
                else {
                    *param_3 = CONCAT11(uStack_9f,uStack_a0);
                    if (CONCAT11(uStack_9f,uStack_a0) == -0x8000) {
                        _printk(0x8000696,0x8000);
                        pcVar12 = 0xffffffea;
                        goto code_r0x0800375c;
                    }
                    auStack_a8[0] = 1;
                    uVar3 = regmap_bulk_write(*arg1,*(arg1[2] + uVar15 * 0x18) + 0x4b,auStack_a8,1);
                    if (uVar3 < 0) {
                        pcVar12 = uVar3;
                        uVar8 = 0x4b;
                    }
                    else {
                        auStack_a8[0] = 0;
                        uVar3 = regmap_bulk_write(*arg1,*(arg1[2] + uVar15 * 0x18) + 0x50,auStack_a8,1);
                        if (uVar3 < 0) {
                            pcVar12 = uVar3;
                            uVar8 = 0x50;
                        }
                        else {
                            auStack_a8[0] = 1;
                            uVar3 = regmap_bulk_write(*arg1,*(arg1[2] + uVar15 * 0x18) + 0xe5,auStack_a8,1);
                            pcVar12 = uVar3;
                            if (-1 < uVar3) goto code_r0x0800375c;
                            uVar8 = 0xe5;
                        }
                    }
                    uVar5 = 0x8000715;
                    uVar9 = 1;
                }
                _printk(uVar5,uVar8,uVar9,pcVar12);
            }
            goto code_r0x0800375c;
        }
        uVar5 = 0x8000715;
        uVar8 = 0xe5;
        uVar9 = 1;
    }
    pcVar12 = uVar3;
    _printk(uVar5,uVar8,uVar9,pcVar12);
    _printk(0x80006eb,pcVar12);
code_r0x0800375c:
    mutex_unlock(puVar1);
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_98) {
        return pcVar12;
    }
    auVar16 = __stack_chk_fail();
    *extraout_x18_00 = sym.get_adc_tm_gen3;
    pcStack_c8 = sym.get_adc_tm_gen3;
    iVar13 = sp_el0;
    iStack_d8 = *(iVar13 + 0x5e0);
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    ppuStack_d0 = &puStack_90;
    puStack_c0 = puVar1;
    scnprintf(&uStack_f8,0x20,"qcom,%s-adc_tm",auVar16._8_8_);
    iVar13 = of_parse_phandle(*(auVar16._0_8_ + 0x2f0),&uStack_f8,0);
    pcVar12 = _obj.adc_tm_device_list;
    if (iVar13 == 0) {
        pcVar12 = 0xffffffffffffffed;
    }
    else {
        for (; pcVar12 != obj.adc_tm_device_list; pcVar12 = *pcVar12) {
            if (*(*(pcVar12 + -0x90) + 0x2f0) == iVar13) {
                pcVar12 = pcVar12 + -0x98;
                goto code_r0x08003844;
            }
        }
        pcVar12 = 0xfffffffffffffdfb;
    }
code_r0x08003844:
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) != iStack_d8) {
        iVar6 = __stack_chk_fail(pcVar12);
        *extraout_x18_01 = sym.notify_adc_tm_fn;
        iVar13 = *(iVar6 + -0x50) + 0x58;
        mutex_lock(iVar13);
        if (*(iVar6 + -0x27) != '\0') {
            for (piVar10 = *(iVar6 + 0x30); piVar10 != iVar6 + 0x30; piVar10 = *piVar10) {
                if (*(piVar10 + 0x23) != '\0') {
                    *(piVar10 + 0x23) = 0;
                    *(piVar10 + 4) = 1;
                    *(piVar10 + 0x24) = (*(piVar10 + 0x24) != 2) << 2;
                }
            }
            *(iVar6 + -0x27) = 0;
        }
        if (*(iVar6 + -0x28) != '\0') {
            for (piVar10 = *(iVar6 + 0x30); piVar10 != iVar6 + 0x30; piVar10 = *piVar10) {
                if (*(piVar10 + 0x22) != '\0') {
                    *(piVar10 + 0x21) = 1;
                    uVar11 = 3;
                    if (*(piVar10 + 0x24) == 2) {
                        uVar11 = 1;
                    }
                    *(piVar10 + 0x24) = uVar11;
                }
            }
            *(iVar6 + -0x28) = 0;
        }
        iVar4 = sym.adc_tm_gen3_manage_thresholds(iVar6 + -0x80);
        if (iVar4 < 0) {
            _printk(0x8000251,iVar4);
        }
        iVar4 = sym.adc_tm5_gen3_configure(iVar6 + -0x80);
        if (iVar4 < 0) {
            _printk(0x8000450,iVar4);
        }
        pcVar12 = mutex_unlock(iVar13);
        for (piVar10 = *(iVar6 + 0x30); piVar10 != iVar6 + 0x30; piVar10 = *piVar10) {
            if ((*(piVar10 + 4) != '\0') && (pcVar14 = *(piVar10[2] + 0x20), pcVar14 != NULL)) {
                __cfi_slowpath_diag(0x3b021bf9e6b1ea36,pcVar14,0x8000200);
                pcVar12 = (*pcVar14)(1,*(piVar10[2] + 0x18));
                *(piVar10 + 4) = 0;
            }
            if ((*(piVar10 + 0x21) != '\0') && (pcVar14 = *(piVar10[2] + 0x20), pcVar14 != NULL)) {
                __cfi_slowpath_diag(0x3b021bf9e6b1ea36,pcVar14,0x8000220);
                pcVar12 = (*pcVar14)(0,*(piVar10[2] + 0x18));
                *(piVar10 + 0x21) = 0;
            }
        }
        return pcVar12;
    }
    return pcVar12;
}


// ===== sym.adc5_gen3_shutdown.0ad87e129b42622404d2c68837efd3ea.cfi_jt @ 0x080032a8 (size 8) =====

uint64_t sym.adc5_gen3_shutdown.0ad87e129b42622404d2c68837efd3ea.cfi_jt
                   (uint64_t param_1,ulong param_2,uint64_t *param_3,ulong param_4,uint *param_5)

{
    uint32_t uVar1;
    uint16_t uVar2;
    code *pcVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    ulong uVar10;
    uint64_t uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint64_t *puVar12;
    ulong *puVar13;
    uint64_t *unaff_x21;
    ulong *unaff_x22;
    int64_t iVar14;
    uint64_t uVar15;
    int64_t iVar16;
    uint32_t *puVar17;
    uint32_t uVar18;
    uint64_t uVar19;
    int64_t iVar20;
    int64_t iVar21;
    ulong unaff_x30;
    uchar auVar22 [16];
    uint16_t auStack_18c [2];
    int64_t iStack_188;
    uchar ***pppuStack_180;
    code *pcStack_178;
    ulong *puStack_170;
    uint64_t *puStack_168;
    uint64_t uStack_160;
    ulong *puStack_158;
    uint uStack_144;
    uchar auStack_140 [4];
    ushort uStack_13c;
    uint64_t auStack_138 [3];
    uchar **ppuStack_120;
    code *pcStack_118;
    uint8_t auStack_bc [4];
    ushort uStack_b8;
    char acStack_b4 [4];
    uint64_t uStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    uchar auStack_4c [12];
    
    *in_x18 = unaff_x30;
    iVar21 = sp_el0;
    auStack_4c._4_8_ = *(iVar21 + 0x5e0);
    puVar12 = *(param_1 + 0xa8);
    if (puVar12[4] != 0) {
        uVar8 = 0;
        unaff_x21 = 0x18;
        do {
            param_3 = puVar12;
            param_1 = devm_free_irq(puVar12[1],*(puVar12[2] + uVar8 * 0x18 + 0x10));
            uVar8 = uVar8 + 1;
        } while (uVar8 < puVar12[4]);
    }
    if ((*(puVar12 + 0x1c) & 0x1fffffff) != 0) {
        unaff_x21 = NULL;
        unaff_x22 = 0x18;
        do {
            iVar6 = unaff_x21;
            iVar5 = iVar6 + 7;
            if (-1 < iVar6) {
                iVar5 = iVar6;
            }
            uVar15 = iVar5 >> 3;
            auStack_4c[0] = 0;
            iVar4 = regmap_bulk_write(*puVar12,*(puVar12[2] + uVar15 * 0x18) + 0x51,auStack_4c,1);
            if (iVar4 < 0) {
                _printk(0x8000715,0x51,1,iVar4);
            }
            auStack_4c[0] = unaff_x21 + (iVar5 >> 3) * -8 | 0x80;
            iVar5 = regmap_bulk_write(*puVar12,*(puVar12[2] + uVar15 * 0x18) + 0x50,auStack_4c,1);
            if (iVar5 < 0) {
                _printk(0x8000715,0x50,1,iVar5);
            }
            auStack_4c[0] = 1;
            param_3 = auStack_4c;
            param_1 = regmap_bulk_write(*puVar12,*(puVar12[2] + uVar15 * 0x18) + 0xe5,param_3,1);
            if (param_1 < 0) {
                param_3 = 0x1;
                param_1 = _printk(0x8000715,0xe5,1,param_1 & 0xffffffff);
            }
            unaff_x21 = iVar6 + 1U;
        } while (iVar6 + 1U < *(puVar12 + 0x1c) << 3);
    }
    iVar21 = sp_el0;
    if (*(iVar21 + 0x5e0) == auStack_4c._4_8_) {
        return param_1;
    }
    auVar22 = __stack_chk_fail();
    puVar13 = auVar22._8_8_;
    *extraout_x18 = sym.adc5_gen3_isr;
    pcStack_98 = sym.adc5_gen3_isr;
    iVar21 = sp_el0;
    iStack_a8 = *(iVar21 + 0x5e0);
    uVar15 = auVar22._0_8_ & 0xffffffff;
    acStack_b4[0] = '\0';
    uStack_b8 = 0;
    auStack_bc[0] = 0;
    puStack_a0 = &stack0xffffffffffffffc0;
    if (*(puVar13 + 4) != 0) {
        unaff_x21 = NULL;
        iVar5 = 0;
code_r0x08005240:
        if (*(puVar13[2] + iVar5 * 0x18 + 0x10) != auVar22._0_4_) goto code_r0x08005250;
        if (iVar5 < 0) goto code_r0x08005308;
        uVar8 = regmap_bulk_read(*puVar13,*(puVar13[2] + unaff_x21) + 0x4a,auStack_bc,1);
        if (uVar8 < 0) {
            uVar15 = uVar8;
            param_3 = 0x1;
            _printk(0x800033a,0x4a,1,uVar15);
            uVar10 = 0x80005f5;
            goto code_r0x0800538c;
        }
        if ((auStack_bc[0] & 1) != 0) {
            complete(puVar13 + 7);
        }
        uVar8 = regmap_bulk_read(*puVar13,*(puVar13[2] + unaff_x21) + 0x48,&uStack_b8,2);
        if (uVar8 < 0) {
            uVar15 = uVar8;
            param_3 = 0x2;
            _printk(0x800033a,0x48,2,uVar15);
            uVar10 = 0x80006c6;
            goto code_r0x0800538c;
        }
        if (uStack_b8 != '\0' || uStack_b8._1_1_ != '\0') {
            queue_work_on(0x20,_adc_tm_absolute_rthr_gen3,puVar13 + 0x16);
        }
        param_3 = acStack_b4;
        uVar15 = regmap_bulk_read(*puVar13,*(puVar13[2] + unaff_x21) + 0x46,param_3,1);
        if (uVar15 < 0) {
            uVar15 = uVar15 & 0xffffffff;
            param_3 = 0x1;
            _printk(0x800033a,0x46,1,uVar15);
            uVar10 = 0x800084b;
            goto code_r0x0800538c;
        }
        if (-1 < acStack_b4[0]) {
            uVar15 = 1;
            goto code_r0x08005394;
        }
        _printk(0x80002dc);
        if (*(puVar13 + 0x1c) != 0) {
            unaff_x22 = NULL;
            do {
                iVar5 = 0;
                uVar2 = *(puVar13[2] + unaff_x22 * 0x18);
                uStack_b0 = 0;
                do {
                    iVar6 = regmap_bulk_read(*puVar13,uVar2 + iVar5,&uStack_b0,8);
                    if (iVar6 < 0) {
                        _printk(0x8000384,iVar6);
                        break;
                    }
                    iVar5 = iVar5 + 8;
                } while (iVar5 != 0x100);
                uVar8 = unaff_x22 + 1;
                unaff_x22 = uVar8;
            } while (uVar8 < *(puVar13 + 0x1c));
        }
        uVar2 = *(puVar13 + 3);
        if (uVar2 != 0) {
            unaff_x22 = NULL;
            uStack_b0 = 0;
            do {
                iVar5 = regmap_bulk_read(*puVar13,uVar2 + unaff_x22,&uStack_b0,8);
                if (iVar5 < 0) {
                    _printk(0x8000384,iVar5);
                    break;
                }
                uVar8 = unaff_x22 + 8;
                unaff_x22 = uVar8;
            } while (uVar8 != 0x100);
        }
        uStack_b0 = CONCAT71(uStack_b0._1_7_,1);
        iVar5 = regmap_bulk_write(*puVar13,*(puVar13[2] + unaff_x21) + 0x4e,&uStack_b0,1);
        if (iVar5 < 0) {
            uVar10 = 0x4e;
code_r0x08005530:
            param_3 = 0x1;
            _printk(0x8000715,uVar10,1,iVar5);
            goto code_r0x08005390;
        }
        uStack_b0 = uStack_b0 & 0xffffffffffffff00;
        uVar15 = 1;
        iVar5 = regmap_bulk_write(*puVar13,*(puVar13[2] + unaff_x21) + 0x50,&uStack_b0,1);
        if (iVar5 < 0) {
            uVar10 = 0x50;
            goto code_r0x08005530;
        }
        uStack_b0 = CONCAT71(uStack_b0._1_7_,1);
        param_3 = &uStack_b0;
        iVar5 = regmap_bulk_write(*puVar13,*(puVar13[2] + unaff_x21) + 0xe5,param_3,1);
        if (iVar5 < 0) {
            uVar10 = 0xe5;
            goto code_r0x08005530;
        }
        goto code_r0x08005394;
    }
code_r0x08005308:
    uVar10 = 0x8000758;
code_r0x0800538c:
    _printk(uVar10,uVar15);
code_r0x08005390:
    uVar15 = 0;
code_r0x08005394:
    iVar21 = sp_el0;
    if (*(iVar21 + 0x5e0) == iStack_a8) {
        return uVar15;
    }
    uVar9 = __stack_chk_fail();
    *extraout_x18_00 = sym.tm_handler_work;
    pcStack_118 = sym.tm_handler_work;
    iVar21 = sp_el0;
    auStack_138[2] = *(iVar21 + 0x5e0);
    uStack_13c = 0;
    auStack_138[0] = 0;
    auStack_138[1] = 0;
    auStack_140[0] = 0;
    uVar19 = uVar9;
    ppuStack_120 = &puStack_a0;
    if (*(uVar9 - 0x8c) != 0) {
        uVar8 = 0;
        unaff_x22 = uVar9 - 0xb0;
        puVar13 = uVar9 - 0x58;
        uVar15 = 0xffffffff;
        do {
            iVar21 = *(uVar9 - 0x88);
            uStack_144 = 0;
            iVar20 = uVar8;
            iVar16 = iVar21 + uVar8 * 200;
            puVar17 = iVar16 + 0x38;
            if ((*puVar17 | 2) == 3) {
                uVar1 = *(iVar16 + 0x3c);
                mutex_lock(puVar13);
                uVar18 = *(iVar21 + iVar20 * 200 + 0x1c);
                uVar19 = uVar18;
                if (uVar18 != uVar15) {
                    uVar15 = 0x18;
                    uVar7 = regmap_bulk_read(*unaff_x22,*(*(uVar9 - 0xa0) + uVar19 * 0x18) + 0x48,&uStack_13c,2);
                    if (uVar7 < 0) {
                        unaff_x21 = uVar7;
                        param_3 = 0x2;
                        _printk(0x800033a,0x48,2,unaff_x21);
                        uVar10 = 0x80006c6;
                    }
                    else {
                        uVar7 = regmap_bulk_write(*unaff_x22,*(*(uVar9 - 0xa0) + uVar19 * 0x18) + 0x4c,&uStack_13c,2)
                        ;
                        if (uVar7 < 0) {
                            unaff_x21 = uVar7;
                            param_3 = 0x2;
                            _printk(0x8000715,0x4c,2,unaff_x21);
                            uVar10 = 0x800086e;
                        }
                        else {
                            auStack_140[0] = 0;
                            uVar7 = regmap_bulk_write(*unaff_x22,*(*(uVar9 - 0xa0) + uVar19 * 0x18) + 0x50,auStack_140
                                                      ,1);
                            if (uVar7 < 0) {
                                unaff_x21 = uVar7;
                                param_3 = 0x1;
                                _printk(0x8000715,0x50,1,unaff_x21);
                                uVar10 = 0x8000270;
                            }
                            else {
                                auStack_140[0] = 1;
                                uVar7 = regmap_bulk_write(*unaff_x22,*(*(uVar9 - 0xa0) + uVar19 * 0x18) + 0xe5,
                                                          auStack_140,1);
                                if (uVar7 < 0) {
                                    unaff_x21 = uVar7;
                                    param_3 = 0x1;
                                    _printk(0x8000715,0xe5,1,unaff_x21);
                                    uVar10 = 0x80002fb;
                                }
                                else {
                                    param_3 = auStack_138;
                                    uVar7 = regmap_bulk_read(*unaff_x22,*(*(uVar9 - 0xa0) + uVar19 * 0x18) + 0x5c,
                                                             param_3,0x10);
                                    uVar15 = uVar18;
                                    if (-1 < uVar7) goto code_r0x08005718;
                                    unaff_x21 = uVar7;
                                    param_3 = 0x10;
                                    _printk(0x800033a,0x5c,0x10,unaff_x21);
                                    uVar10 = 0x80009c0;
                                }
                            }
                        }
                    }
                    _printk(uVar10,unaff_x21);
                    uVar19 = mutex_unlock(puVar13);
                    break;
                }
code_r0x08005718:
                uVar19 = 1L << (uVar1 & 0x3f);
                if ((uVar19 & uStack_13c) == 0) {
                    unaff_x21 = NULL;
                }
                else {
                    unaff_x21 = *(iVar21 + iVar20 * 200 + 0x50) != 0;
                }
                if ((uVar19 & uStack_13c._1_1_) == 0) {
                    uVar18 = 0;
                }
                else {
                    uVar18 = *(iVar21 + iVar20 * 200 + 0x54) != 0;
                }
                uVar19 = mutex_unlock(puVar13);
                if ((unaff_x21 | uVar18) == 1) {
                    uVar1 = uVar1 << 1;
                    if ((0xf < uVar1) || (uVar11 = uVar1 | 1, 0xf < uVar11)) {
    //WARNING: Does not return
                        pcVar3 = SoftwareBreakpoint(0x5512,0x8005938);
                        (*pcVar3)();
                    }
                    if (*puVar17 == 3) {
                        if (uVar18 != 0) {
                            mutex_lock(puVar13);
                            iVar16 = iVar21 + iVar20 * 200;
                            *(iVar16 + 0x54) = 0;
                            *(iVar16 + 0x59) = 1;
                            mutex_unlock(puVar13);
                            param_3 = iVar16 + 0x80;
                            uVar19 = queue_work_on(0x20,*(iVar16 + 0x78));
                        }
                        if (unaff_x21 != 0) {
                            mutex_lock(puVar13);
                            unaff_x21 = iVar21 + iVar20 * 200;
                            *(unaff_x21 + 10) = 0;
                            *(unaff_x21 + 0xb) = '\x01';
                            mutex_unlock(puVar13);
                            param_3 = unaff_x21 + 0x10;
                            uVar19 = queue_work_on(0x20,unaff_x21[0xf]);
                        }
                    }
                    else {
                        iVar16 = iVar21 + iVar20 * 200;
                        param_3 = *(uVar9 - 0x28);
                        param_5 = &uStack_144;
                        unaff_x21 = CONCAT11(*(auStack_138 + uVar11),*(auStack_138 + uVar1));
                        iVar5 = qcom_adc5_hw_scale(*(iVar16 + 0x20),*(iVar16 + 0x10),param_3,unaff_x21);
                        if (iVar5 < 0) {
                            param_3 = unaff_x21;
                            uVar19 = _printk(0x8000782,iVar5);
                        }
                        else {
                            iVar21 = iVar21 + iVar20 * 200;
                            *(iVar21 + 0x70) = uStack_144;
                            *(iVar21 + 0x74) = 1;
                            uVar19 = thermal_zone_device_update(*(iVar21 + 0x48),2);
                        }
                    }
                }
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 < *(uVar9 - 0x8c));
    }
    iVar21 = sp_el0;
    if (*(iVar21 + 0x5e0) == auStack_138[2]) {
        return uVar19;
    }
    auVar22 = __stack_chk_fail();
    *extraout_x18_01 = sym.adc5_gen3_read_raw;
    pcStack_178 = sym.adc5_gen3_read_raw;
    iVar21 = sp_el0;
    iStack_188 = *(iVar21 + 0x5e0);
    iVar20 = *(auVar22._0_8_ + 0x440);
    auStack_18c[0] = 0;
    iVar14 = *(auVar22._8_8_ + 0x10);
    iVar16 = *(iVar20 + 0x28);
    iVar21 = iVar16 + iVar14 * 200;
    pppuStack_180 = &ppuStack_120;
    puStack_170 = unaff_x22;
    puStack_168 = unaff_x21;
    uStack_160 = uVar15;
    puStack_158 = puVar13;
    if (param_5 == NULL) {
        uVar15 = sym.adc5_gen3_do_conversion(iVar20,iVar21,auStack_18c);
        if (-1 < uVar15) {
            uVar15 = 1;
            *param_3 = auStack_18c[0];
        }
    }
    else if (param_5 == 0x1) {
        uVar15 = sym.adc5_gen3_do_conversion(iVar20,iVar21,auStack_18c);
        if (-1 < uVar15) {
            iVar16 = iVar16 + iVar14 * 200;
            uVar8 = qcom_adc5_hw_scale(*(iVar16 + 0x20),*(iVar16 + 0x10),*(iVar20 + 0x88),auStack_18c[0],param_3);
            if (-1 < uVar8) {
                uVar8 = 1;
            }
            uVar15 = uVar8;
        }
    }
    else {
        uVar15 = 0xffffffea;
    }
    iVar21 = sp_el0;
    if (*(iVar21 + 0x5e0) != iStack_188) {
        auVar22 = __stack_chk_fail(uVar15);
        iVar21 = *(auVar22._0_8_ + 0x440);
        uVar8 = *(iVar21 + 0x24);
        if (uVar8 != 0) {
            uVar15 = 0;
            do {
                puVar17 = *(iVar21 + 0x28) + uVar15 * 200;
                if ((*puVar17 | puVar17[3] << 8) == *(auVar22._8_8_ + 0xc)) {
                    return uVar15;
                }
                uVar1 = uVar15 + 1;
                uVar15 = uVar1;
            } while (uVar8 != uVar1);
        }
        return 0xfffffffe;
    }
    return uVar15;
code_r0x08005250:
    iVar5 = iVar5 + 1;
    unaff_x21 = unaff_x21 + 3;
    if (*(puVar13 + 4) == iVar5) goto code_r0x08005308;
    goto code_r0x08005240;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080032b0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.adc5_gen3_probe.0ad87e129b42622404d2c68837efd3ea.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080032b8 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.adc5_gen3_probe.0ad87e129b42622404d2c68837efd3ea.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.adc5_gen3_read_raw.0ad87e129b42622404d2c68837efd3ea.cfi_jt @ 0x080032c0 (size 8) =====

uint64_t sym.adc5_gen3_read_raw.0ad87e129b42622404d2c68837efd3ea.cfi_jt
                   (int64_t param_1,int64_t param_2,uint32_t *param_3,ulong param_4,int64_t param_5)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint32_t *puVar5;
    ulong *in_x18;
    int64_t arg1;
    int64_t iVar6;
    int64_t iVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    uint16_t auStack_3c [2];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    arg1 = *(param_1 + 0x440);
    auStack_3c[0] = 0;
    iVar7 = *(param_2 + 0x10);
    iVar6 = *(arg1 + 0x28);
    iVar4 = iVar6 + iVar7 * 200;
    if (param_5 == 0) {
        uVar3 = sym.adc5_gen3_do_conversion(arg1,iVar4,auStack_3c);
        if (-1 < uVar3) {
            uVar3 = 1;
            *param_3 = auStack_3c[0];
        }
    }
    else if (param_5 == 1) {
        uVar3 = sym.adc5_gen3_do_conversion(arg1,iVar4,auStack_3c);
        if (-1 < uVar3) {
            iVar6 = iVar6 + iVar7 * 200;
            uVar2 = qcom_adc5_hw_scale(*(iVar6 + 0x20),*(iVar6 + 0x10),*(arg1 + 0x88),auStack_3c[0],param_3);
            if (-1 < uVar2) {
                uVar2 = 1;
            }
            uVar3 = uVar2;
        }
    }
    else {
        uVar3 = 0xffffffea;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_38) {
        auVar8 = __stack_chk_fail(uVar3);
        iVar4 = *(auVar8._0_8_ + 0x440);
        uVar2 = *(iVar4 + 0x24);
        if (uVar2 != 0) {
            uVar3 = 0;
            do {
                puVar5 = *(iVar4 + 0x28) + uVar3 * 200;
                if ((*puVar5 | puVar5[3] << 8) == *(auVar8._8_8_ + 0xc)) {
                    return uVar3;
                }
                uVar1 = uVar3 + 1;
                uVar3 = uVar1;
            } while (uVar2 != uVar1);
        }
        return 0xfffffffe;
    }
    return uVar3;
}


// ===== sym.tm_handler_work.0ad87e129b42622404d2c68837efd3ea.cfi_jt @ 0x080032c8 (size 8) =====

uint64_t sym.tm_handler_work.0ad87e129b42622404d2c68837efd3ea.cfi_jt
                   (uint64_t param_1,ulong param_2,uint32_t *param_3,ulong param_4,uint *param_5)

{
    uint32_t uVar1;
    code *pcVar2;
    int iVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    ulong uVar6;
    uint64_t uVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t unaff_x19;
    uint64_t unaff_x20;
    uint32_t *unaff_x21;
    ulong *unaff_x22;
    int64_t iVar8;
    int64_t iVar9;
    uint32_t *puVar10;
    uint32_t uVar11;
    uint64_t uVar12;
    int64_t iVar13;
    int64_t iVar14;
    ulong unaff_x30;
    uchar auVar15 [16];
    uint16_t auStack_cc [2];
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    ulong *puStack_b0;
    uint32_t *puStack_a8;
    uint64_t uStack_a0;
    int64_t iStack_98;
    uint uStack_84;
    uchar auStack_80 [4];
    ushort uStack_7c;
    uint32_t auStack_78 [4];
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iStack_68 = *(iVar14 + 0x5e0);
    uStack_7c = 0;
    auStack_78[0] = 0;
    auStack_78[1] = 0;
    auStack_78[2] = 0;
    auStack_78[3] = 0;
    auStack_80[0] = 0;
    uVar12 = param_1;
    if (*(param_1 - 0x8c) != 0) {
        uVar5 = 0;
        unaff_x22 = param_1 - 0xb0;
        unaff_x19 = param_1 - 0x58;
        unaff_x20 = 0xffffffff;
        do {
            iVar14 = *(param_1 - 0x88);
            uStack_84 = 0;
            iVar13 = uVar5;
            iVar9 = iVar14 + uVar5 * 200;
            puVar10 = iVar9 + 0x38;
            if ((*puVar10 | 2) == 3) {
                uVar1 = *(iVar9 + 0x3c);
                mutex_lock(unaff_x19);
                uVar11 = *(iVar14 + iVar13 * 200 + 0x1c);
                uVar12 = uVar11;
                if (uVar11 != unaff_x20) {
                    unaff_x20 = 0x18;
                    uVar4 = regmap_bulk_read(*unaff_x22,*(*(param_1 - 0xa0) + uVar12 * 0x18) + 0x48,&uStack_7c,2);
                    if (uVar4 < 0) {
                        unaff_x21 = uVar4;
                        param_3 = 0x2;
                        _printk(0x800033a,0x48,2,unaff_x21);
                        uVar6 = 0x80006c6;
                    }
                    else {
                        uVar4 = regmap_bulk_write(*unaff_x22,*(*(param_1 - 0xa0) + uVar12 * 0x18) + 0x4c,&uStack_7c,2
                                                 );
                        if (uVar4 < 0) {
                            unaff_x21 = uVar4;
                            param_3 = 0x2;
                            _printk(0x8000715,0x4c,2,unaff_x21);
                            uVar6 = 0x800086e;
                        }
                        else {
                            auStack_80[0] = 0;
                            uVar4 = regmap_bulk_write(*unaff_x22,*(*(param_1 - 0xa0) + uVar12 * 0x18) + 0x50,
                                                      auStack_80,1);
                            if (uVar4 < 0) {
                                unaff_x21 = uVar4;
                                param_3 = 0x1;
                                _printk(0x8000715,0x50,1,unaff_x21);
                                uVar6 = 0x8000270;
                            }
                            else {
                                auStack_80[0] = 1;
                                uVar4 = regmap_bulk_write(*unaff_x22,*(*(param_1 - 0xa0) + uVar12 * 0x18) + 0xe5,
                                                          auStack_80,1);
                                if (uVar4 < 0) {
                                    unaff_x21 = uVar4;
                                    param_3 = 0x1;
                                    _printk(0x8000715,0xe5,1,unaff_x21);
                                    uVar6 = 0x80002fb;
                                }
                                else {
                                    param_3 = auStack_78;
                                    uVar4 = regmap_bulk_read(*unaff_x22,*(*(param_1 - 0xa0) + uVar12 * 0x18) + 0x5c,
                                                             param_3,0x10);
                                    unaff_x20 = uVar11;
                                    if (-1 < uVar4) goto code_r0x08005718;
                                    unaff_x21 = uVar4;
                                    param_3 = 0x10;
                                    _printk(0x800033a,0x5c,0x10,unaff_x21);
                                    uVar6 = 0x80009c0;
                                }
                            }
                        }
                    }
                    _printk(uVar6,unaff_x21);
                    uVar12 = mutex_unlock(unaff_x19);
                    break;
                }
code_r0x08005718:
                uVar12 = 1L << (uVar1 & 0x3f);
                if ((uVar12 & uStack_7c) == 0) {
                    unaff_x21 = NULL;
                }
                else {
                    unaff_x21 = *(iVar14 + iVar13 * 200 + 0x50) != 0;
                }
                if ((uVar12 & uStack_7c._1_1_) == 0) {
                    uVar11 = 0;
                }
                else {
                    uVar11 = *(iVar14 + iVar13 * 200 + 0x54) != 0;
                }
                uVar12 = mutex_unlock(unaff_x19);
                if ((unaff_x21 | uVar11) == 1) {
                    uVar1 = uVar1 << 1;
                    if ((0xf < uVar1) || (uVar7 = uVar1 | 1, 0xf < uVar7)) {
    //WARNING: Does not return
                        pcVar2 = SoftwareBreakpoint(0x5512,0x8005938);
                        (*pcVar2)();
                    }
                    if (*puVar10 == 3) {
                        if (uVar11 != 0) {
                            mutex_lock(unaff_x19);
                            iVar9 = iVar14 + iVar13 * 200;
                            *(iVar9 + 0x54) = 0;
                            *(iVar9 + 0x59) = 1;
                            mutex_unlock(unaff_x19);
                            param_3 = iVar9 + 0x80;
                            uVar12 = queue_work_on(0x20,*(iVar9 + 0x78));
                        }
                        if (unaff_x21 != 0) {
                            mutex_lock(unaff_x19);
                            unaff_x21 = iVar14 + iVar13 * 200;
                            unaff_x21[0x14] = 0;
                            *(unaff_x21 + 0x16) = 1;
                            mutex_unlock(unaff_x19);
                            param_3 = unaff_x21 + 0x20;
                            uVar12 = queue_work_on(0x20,*(unaff_x21 + 0x1e));
                        }
                    }
                    else {
                        iVar9 = iVar14 + iVar13 * 200;
                        param_3 = *(param_1 - 0x28);
                        param_5 = &uStack_84;
                        unaff_x21 = CONCAT11(*(auStack_78 + uVar7),*(auStack_78 + uVar1));
                        iVar3 = qcom_adc5_hw_scale(*(iVar9 + 0x20),*(iVar9 + 0x10),param_3,unaff_x21);
                        if (iVar3 < 0) {
                            param_3 = unaff_x21;
                            uVar12 = _printk(0x8000782,iVar3);
                        }
                        else {
                            iVar14 = iVar14 + iVar13 * 200;
                            *(iVar14 + 0x70) = uStack_84;
                            *(iVar14 + 0x74) = 1;
                            uVar12 = thermal_zone_device_update(*(iVar14 + 0x48),2);
                        }
                    }
                }
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < *(param_1 - 0x8c));
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_68) {
        return uVar12;
    }
    auVar15 = __stack_chk_fail();
    *extraout_x18 = sym.adc5_gen3_read_raw;
    pcStack_b8 = sym.adc5_gen3_read_raw;
    iVar14 = sp_el0;
    iStack_c8 = *(iVar14 + 0x5e0);
    iVar13 = *(auVar15._0_8_ + 0x440);
    auStack_cc[0] = 0;
    iVar8 = *(auVar15._8_8_ + 0x10);
    iVar9 = *(iVar13 + 0x28);
    iVar14 = iVar9 + iVar8 * 200;
    puStack_c0 = &stack0xffffffffffffffa0;
    puStack_b0 = unaff_x22;
    puStack_a8 = unaff_x21;
    uStack_a0 = unaff_x20;
    iStack_98 = unaff_x19;
    if (param_5 == NULL) {
        uVar12 = sym.adc5_gen3_do_conversion(iVar13,iVar14,auStack_cc);
        if (-1 < uVar12) {
            uVar12 = 1;
            *param_3 = auStack_cc[0];
        }
    }
    else if (param_5 == 0x1) {
        uVar12 = sym.adc5_gen3_do_conversion(iVar13,iVar14,auStack_cc);
        if (-1 < uVar12) {
            iVar9 = iVar9 + iVar8 * 200;
            uVar5 = qcom_adc5_hw_scale(*(iVar9 + 0x20),*(iVar9 + 0x10),*(iVar13 + 0x88),auStack_cc[0],param_3);
            if (-1 < uVar5) {
                uVar5 = 1;
            }
            uVar12 = uVar5;
        }
    }
    else {
        uVar12 = 0xffffffea;
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) != iStack_c8) {
        auVar15 = __stack_chk_fail(uVar12);
        iVar14 = *(auVar15._0_8_ + 0x440);
        uVar5 = *(iVar14 + 0x24);
        if (uVar5 != 0) {
            uVar12 = 0;
            do {
                puVar10 = *(iVar14 + 0x28) + uVar12 * 200;
                if ((*puVar10 | puVar10[3] << 8) == *(auVar15._8_8_ + 0xc)) {
                    return uVar12;
                }
                uVar1 = uVar12 + 1;
                uVar12 = uVar1;
            } while (uVar5 != uVar1);
        }
        return 0xfffffffe;
    }
    return uVar12;
}


// ===== sym.notify_adc_tm_fn.cfi_jt @ 0x080032d0 (size 8) =====

void sym.notify_adc_tm_fn.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int iVar2;
    int64_t *piVar3;
    uint uVar4;
    ulong *in_x18;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + -0x50) + 0x58;
    mutex_lock(iVar1);
    if (*(param_1 + -0x27) != '\0') {
        for (piVar3 = *(param_1 + 0x30); piVar3 != param_1 + 0x30; piVar3 = *piVar3) {
            if (*(piVar3 + 0x23) != '\0') {
                *(piVar3 + 0x23) = 0;
                *(piVar3 + 4) = 1;
                *(piVar3 + 0x24) = (*(piVar3 + 0x24) != 2) << 2;
            }
        }
        *(param_1 + -0x27) = 0;
    }
    if (*(param_1 + -0x28) != '\0') {
        for (piVar3 = *(param_1 + 0x30); piVar3 != param_1 + 0x30; piVar3 = *piVar3) {
            if (*(piVar3 + 0x22) != '\0') {
                *(piVar3 + 0x21) = 1;
                uVar4 = 3;
                if (*(piVar3 + 0x24) == 2) {
                    uVar4 = 1;
                }
                *(piVar3 + 0x24) = uVar4;
            }
        }
        *(param_1 + -0x28) = 0;
    }
    iVar2 = sym.adc_tm_gen3_manage_thresholds(param_1 + -0x80);
    if (iVar2 < 0) {
        _printk(0x8000251,iVar2);
    }
    iVar2 = sym.adc_tm5_gen3_configure(param_1 + -0x80);
    if (iVar2 < 0) {
        _printk(0x8000450,iVar2);
    }
    mutex_unlock(iVar1);
    for (piVar3 = *(param_1 + 0x30); piVar3 != param_1 + 0x30; piVar3 = *piVar3) {
        if ((*(piVar3 + 4) != '\0') && (pcVar5 = *(piVar3[2] + 0x20), pcVar5 != NULL)) {
            __cfi_slowpath_diag(0x3b021bf9e6b1ea36,pcVar5,0x8000200);
            (*pcVar5)(1,*(piVar3[2] + 0x18));
            *(piVar3 + 4) = 0;
        }
        if ((*(piVar3 + 0x21) != '\0') && (pcVar5 = *(piVar3[2] + 0x20), pcVar5 != NULL)) {
            __cfi_slowpath_diag(0x3b021bf9e6b1ea36,pcVar5,0x8000220);
            (*pcVar5)(0,*(piVar3[2] + 0x18));
            *(piVar3 + 0x21) = 0;
        }
    }
    return;
}


// ===== sym.adc_tm5_gen3_set_trip_temp.0ad87e129b42622404d2c68837efd3ea.cfi_jt @ 0x080032d8 (size 8) =====

int sym.adc_tm5_gen3_set_trip_temp.0ad87e129b42622404d2c68837efd3ea.cfi_jt(int64_t param_1,int param_2,int param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar2;
    int64_t iVar3;
    uint32_t uVar4;
    ulong unaff_x30;
    int iStack_50;
    int iStack_4c;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    if (param_1 != 0) {
        iStack_50 = 0;
        if (param_3 != 0x7fffffff) {
            iStack_50 = param_3;
        }
        iVar2 = *(param_1 + 0x30);
        iStack_4c = 0;
        iVar1 = param_2;
        if ((param_2 != -0x80000000) || (iVar1 = iStack_4c, param_3 != 0x7fffffff)) {
            iStack_4c = iVar1;
            adc_tm_scale_therm_voltage_100k_gen3(&iStack_50);
            iVar2 = iVar2 + 0x58;
            mutex_lock(iVar2);
            if (param_3 != 0x7fffffff) {
                *(param_1 + 0x68) = uStack_40;
            }
            *(param_1 + 0x54) = param_3 != 0x7fffffff;
            if (-0x7fffffff < param_2) {
                *(param_1 + 0x60) = uStack_48;
            }
            *(param_1 + 0x50) = -0x7fffffff < param_2;
            iVar1 = sym.adc_tm5_gen3_configure(param_1);
            if (iVar1 < 0) {
                _printk(0x8000450,iVar1);
            }
            mutex_unlock(iVar2);
            goto code_r0x08005b64;
        }
        _printk(0x80007fe);
    }
    iVar1 = -0x16;
code_r0x08005b64:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_38) {
        iVar2 = __stack_chk_fail();
        *extraout_x18 = sym.adc5_gen3_freeze;
        iVar3 = *(iVar2 + 0x98);
        mutex_lock(iVar3 + 0x58);
        if (*(iVar3 + 0x20) != 0) {
            uVar4 = 0;
            do {
                devm_free_irq(iVar2,*(*(iVar3 + 0x10) + uVar4 * 0x18 + 0x10),iVar3);
                uVar4 = uVar4 + 1;
            } while (uVar4 < *(iVar3 + 0x20));
        }
        mutex_unlock(iVar3 + 0x58);
        return 0;
    }
    return iVar1;
}


// ===== sym.__typeid__ZTSFiP13adc_tm_configE_global_addr @ 0x080032e0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.__typeid__ZTSFiP13adc_tm_configE_global_addr(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.adc5_gen3_of_xlate.0ad87e129b42622404d2c68837efd3ea.cfi_jt @ 0x080032e8 (size 8) =====

int sym.adc5_gen3_of_xlate.0ad87e129b42622404d2c68837efd3ea.cfi_jt(int64_t param_1,int64_t param_2)

{
    int iVar1;
    int iVar2;
    uint32_t *puVar3;
    
    iVar1 = *(*(param_1 + 0x440) + 0x24);
    if (iVar1 != 0) {
        iVar2 = 0;
        do {
            puVar3 = *(*(param_1 + 0x440) + 0x28) + iVar2 * 200;
            if ((*puVar3 | puVar3[3] << 8) == *(param_2 + 0xc)) {
                return iVar2;
            }
            iVar2 = iVar2 + 1;
        } while (iVar1 != iVar2);
    }
    return -2;
}


// ===== sym.adc5_gen3_isr.0ad87e129b42622404d2c68837efd3ea.cfi_jt @ 0x080032f0 (size 8) =====

uint64_t sym.adc5_gen3_isr.0ad87e129b42622404d2c68837efd3ea.cfi_jt
                   (int param_1,ulong *param_2,uint64_t *param_3,ulong param_4,uint *param_5)

{
    uint32_t uVar1;
    uint16_t uVar2;
    code *pcVar3;
    int iVar4;
    int iVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong uVar9;
    uint64_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar11;
    uint64_t *unaff_x21;
    ulong *unaff_x22;
    int64_t iVar12;
    int64_t iVar13;
    uint32_t *puVar14;
    uint32_t uVar15;
    uint64_t uVar16;
    int64_t iVar17;
    int64_t iVar18;
    ulong unaff_x30;
    uchar auVar19 [16];
    uint16_t auStack_13c [2];
    int64_t iStack_138;
    uchar **ppuStack_130;
    code *pcStack_128;
    ulong *puStack_120;
    uint64_t *puStack_118;
    uint64_t uStack_110;
    ulong *puStack_108;
    uint uStack_f4;
    uchar auStack_f0 [4];
    ushort uStack_ec;
    uint64_t auStack_e8 [3];
    uchar *puStack_d0;
    code *pcStack_c8;
    uint8_t auStack_6c [4];
    ushort uStack_68;
    char acStack_64 [4];
    uint64_t uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar18 = sp_el0;
    iStack_58 = *(iVar18 + 0x5e0);
    acStack_64[0] = '\0';
    uStack_68 = 0;
    auStack_6c[0] = 0;
    if (*(param_2 + 4) != 0) {
        unaff_x21 = NULL;
        iVar5 = 0;
code_r0x08005240:
        if (*(param_2[2] + iVar5 * 0x18 + 0x10) != param_1) goto code_r0x08005250;
        if (iVar5 < 0) goto code_r0x08005308;
        param_1 = regmap_bulk_read(*param_2,*(param_2[2] + unaff_x21) + 0x4a,auStack_6c,1);
        if (param_1 < 0) {
            param_3 = 0x1;
            _printk(0x800033a,0x4a,1,param_1);
            uVar9 = 0x80005f5;
            goto code_r0x0800538c;
        }
        if ((auStack_6c[0] & 1) != 0) {
            complete(param_2 + 7);
        }
        param_1 = regmap_bulk_read(*param_2,*(param_2[2] + unaff_x21) + 0x48,&uStack_68,2);
        if (param_1 < 0) {
            param_3 = 0x2;
            _printk(0x800033a,0x48,2,param_1);
            uVar9 = 0x80006c6;
            goto code_r0x0800538c;
        }
        if (uStack_68 != '\0' || uStack_68._1_1_ != '\0') {
            queue_work_on(0x20,_adc_tm_absolute_rthr_gen3,param_2 + 0x16);
        }
        param_3 = acStack_64;
        param_1 = regmap_bulk_read(*param_2,*(param_2[2] + unaff_x21) + 0x46,param_3,1);
        if (param_1 < 0) {
            param_3 = 0x1;
            _printk(0x800033a,0x46,1,param_1);
            uVar9 = 0x800084b;
            goto code_r0x0800538c;
        }
        if (-1 < acStack_64[0]) {
            uVar11 = 1;
            goto code_r0x08005394;
        }
        _printk(0x80002dc);
        if (*(param_2 + 0x1c) != 0) {
            unaff_x22 = NULL;
            do {
                iVar5 = 0;
                uVar2 = *(param_2[2] + unaff_x22 * 0x18);
                uStack_60 = 0;
                do {
                    iVar4 = regmap_bulk_read(*param_2,uVar2 + iVar5,&uStack_60,8);
                    if (iVar4 < 0) {
                        _printk(0x8000384,iVar4);
                        break;
                    }
                    iVar5 = iVar5 + 8;
                } while (iVar5 != 0x100);
                uVar7 = unaff_x22 + 1;
                unaff_x22 = uVar7;
            } while (uVar7 < *(param_2 + 0x1c));
        }
        uVar2 = *(param_2 + 3);
        if (uVar2 != 0) {
            unaff_x22 = NULL;
            uStack_60 = 0;
            do {
                iVar5 = regmap_bulk_read(*param_2,uVar2 + unaff_x22,&uStack_60,8);
                if (iVar5 < 0) {
                    _printk(0x8000384,iVar5);
                    break;
                }
                uVar7 = unaff_x22 + 8;
                unaff_x22 = uVar7;
            } while (uVar7 != 0x100);
        }
        uStack_60 = CONCAT71(uStack_60._1_7_,1);
        iVar5 = regmap_bulk_write(*param_2,*(param_2[2] + unaff_x21) + 0x4e,&uStack_60,1);
        if (iVar5 < 0) {
            uVar9 = 0x4e;
code_r0x08005530:
            param_3 = 0x1;
            _printk(0x8000715,uVar9,1,iVar5);
            goto code_r0x08005390;
        }
        uStack_60 = uStack_60 & 0xffffffffffffff00;
        uVar11 = 1;
        iVar5 = regmap_bulk_write(*param_2,*(param_2[2] + unaff_x21) + 0x50,&uStack_60,1);
        if (iVar5 < 0) {
            uVar9 = 0x50;
            goto code_r0x08005530;
        }
        uStack_60 = CONCAT71(uStack_60._1_7_,1);
        param_3 = &uStack_60;
        iVar5 = regmap_bulk_write(*param_2,*(param_2[2] + unaff_x21) + 0xe5,param_3,1);
        if (iVar5 < 0) {
            uVar9 = 0xe5;
            goto code_r0x08005530;
        }
        goto code_r0x08005394;
    }
code_r0x08005308:
    uVar9 = 0x8000758;
code_r0x0800538c:
    _printk(uVar9,param_1);
code_r0x08005390:
    uVar11 = 0;
code_r0x08005394:
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) == iStack_58) {
        return uVar11;
    }
    uVar8 = __stack_chk_fail();
    *extraout_x18 = sym.tm_handler_work;
    pcStack_c8 = sym.tm_handler_work;
    iVar18 = sp_el0;
    auStack_e8[2] = *(iVar18 + 0x5e0);
    uStack_ec = 0;
    auStack_e8[0] = 0;
    auStack_e8[1] = 0;
    auStack_f0[0] = 0;
    uVar16 = uVar8;
    puStack_d0 = &stack0xffffffffffffffb0;
    if (*(uVar8 - 0x8c) != 0) {
        uVar7 = 0;
        unaff_x22 = uVar8 - 0xb0;
        param_2 = uVar8 - 0x58;
        uVar11 = 0xffffffff;
        do {
            iVar18 = *(uVar8 - 0x88);
            uStack_f4 = 0;
            iVar17 = uVar7;
            iVar13 = iVar18 + uVar7 * 200;
            puVar14 = iVar13 + 0x38;
            if ((*puVar14 | 2) == 3) {
                uVar1 = *(iVar13 + 0x3c);
                mutex_lock(param_2);
                uVar15 = *(iVar18 + iVar17 * 200 + 0x1c);
                uVar16 = uVar15;
                if (uVar15 != uVar11) {
                    uVar11 = 0x18;
                    uVar6 = regmap_bulk_read(*unaff_x22,*(*(uVar8 - 0xa0) + uVar16 * 0x18) + 0x48,&uStack_ec,2);
                    if (uVar6 < 0) {
                        unaff_x21 = uVar6;
                        param_3 = 0x2;
                        _printk(0x800033a,0x48,2,unaff_x21);
                        uVar9 = 0x80006c6;
                    }
                    else {
                        uVar6 = regmap_bulk_write(*unaff_x22,*(*(uVar8 - 0xa0) + uVar16 * 0x18) + 0x4c,&uStack_ec,2);
                        if (uVar6 < 0) {
                            unaff_x21 = uVar6;
                            param_3 = 0x2;
                            _printk(0x8000715,0x4c,2,unaff_x21);
                            uVar9 = 0x800086e;
                        }
                        else {
                            auStack_f0[0] = 0;
                            uVar6 = regmap_bulk_write(*unaff_x22,*(*(uVar8 - 0xa0) + uVar16 * 0x18) + 0x50,auStack_f0
                                                      ,1);
                            if (uVar6 < 0) {
                                unaff_x21 = uVar6;
                                param_3 = 0x1;
                                _printk(0x8000715,0x50,1,unaff_x21);
                                uVar9 = 0x8000270;
                            }
                            else {
                                auStack_f0[0] = 1;
                                uVar6 = regmap_bulk_write(*unaff_x22,*(*(uVar8 - 0xa0) + uVar16 * 0x18) + 0xe5,
                                                          auStack_f0,1);
                                if (uVar6 < 0) {
                                    unaff_x21 = uVar6;
                                    param_3 = 0x1;
                                    _printk(0x8000715,0xe5,1,unaff_x21);
                                    uVar9 = 0x80002fb;
                                }
                                else {
                                    param_3 = auStack_e8;
                                    uVar6 = regmap_bulk_read(*unaff_x22,*(*(uVar8 - 0xa0) + uVar16 * 0x18) + 0x5c,
                                                             param_3,0x10);
                                    uVar11 = uVar15;
                                    if (-1 < uVar6) goto code_r0x08005718;
                                    unaff_x21 = uVar6;
                                    param_3 = 0x10;
                                    _printk(0x800033a,0x5c,0x10,unaff_x21);
                                    uVar9 = 0x80009c0;
                                }
                            }
                        }
                    }
                    _printk(uVar9,unaff_x21);
                    uVar16 = mutex_unlock(param_2);
                    break;
                }
code_r0x08005718:
                uVar16 = 1L << (uVar1 & 0x3f);
                if ((uVar16 & uStack_ec) == 0) {
                    unaff_x21 = NULL;
                }
                else {
                    unaff_x21 = *(iVar18 + iVar17 * 200 + 0x50) != 0;
                }
                if ((uVar16 & uStack_ec._1_1_) == 0) {
                    uVar15 = 0;
                }
                else {
                    uVar15 = *(iVar18 + iVar17 * 200 + 0x54) != 0;
                }
                uVar16 = mutex_unlock(param_2);
                if ((unaff_x21 | uVar15) == 1) {
                    uVar1 = uVar1 << 1;
                    if ((0xf < uVar1) || (uVar10 = uVar1 | 1, 0xf < uVar10)) {
    //WARNING: Does not return
                        pcVar3 = SoftwareBreakpoint(0x5512,0x8005938);
                        (*pcVar3)();
                    }
                    if (*puVar14 == 3) {
                        if (uVar15 != 0) {
                            mutex_lock(param_2);
                            iVar13 = iVar18 + iVar17 * 200;
                            *(iVar13 + 0x54) = 0;
                            *(iVar13 + 0x59) = 1;
                            mutex_unlock(param_2);
                            param_3 = iVar13 + 0x80;
                            uVar16 = queue_work_on(0x20,*(iVar13 + 0x78));
                        }
                        if (unaff_x21 != 0) {
                            mutex_lock(param_2);
                            unaff_x21 = iVar18 + iVar17 * 200;
                            *(unaff_x21 + 10) = 0;
                            *(unaff_x21 + 0xb) = '\x01';
                            mutex_unlock(param_2);
                            param_3 = unaff_x21 + 0x10;
                            uVar16 = queue_work_on(0x20,unaff_x21[0xf]);
                        }
                    }
                    else {
                        iVar13 = iVar18 + iVar17 * 200;
                        param_3 = *(uVar8 - 0x28);
                        param_5 = &uStack_f4;
                        unaff_x21 = CONCAT11(*(auStack_e8 + uVar10),*(auStack_e8 + uVar1));
                        iVar5 = qcom_adc5_hw_scale(*(iVar13 + 0x20),*(iVar13 + 0x10),param_3,unaff_x21);
                        if (iVar5 < 0) {
                            param_3 = unaff_x21;
                            uVar16 = _printk(0x8000782,iVar5);
                        }
                        else {
                            iVar18 = iVar18 + iVar17 * 200;
                            *(iVar18 + 0x70) = uStack_f4;
                            *(iVar18 + 0x74) = 1;
                            uVar16 = thermal_zone_device_update(*(iVar18 + 0x48),2);
                        }
                    }
                }
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 < *(uVar8 - 0x8c));
    }
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) == auStack_e8[2]) {
        return uVar16;
    }
    auVar19 = __stack_chk_fail();
    *extraout_x18_00 = sym.adc5_gen3_read_raw;
    pcStack_128 = sym.adc5_gen3_read_raw;
    iVar18 = sp_el0;
    iStack_138 = *(iVar18 + 0x5e0);
    iVar17 = *(auVar19._0_8_ + 0x440);
    auStack_13c[0] = 0;
    iVar12 = *(auVar19._8_8_ + 0x10);
    iVar13 = *(iVar17 + 0x28);
    iVar18 = iVar13 + iVar12 * 200;
    ppuStack_130 = &puStack_d0;
    puStack_120 = unaff_x22;
    puStack_118 = unaff_x21;
    uStack_110 = uVar11;
    puStack_108 = param_2;
    if (param_5 == NULL) {
        uVar11 = sym.adc5_gen3_do_conversion(iVar17,iVar18,auStack_13c);
        if (-1 < uVar11) {
            uVar11 = 1;
            *param_3 = auStack_13c[0];
        }
    }
    else if (param_5 == 0x1) {
        uVar11 = sym.adc5_gen3_do_conversion(iVar17,iVar18,auStack_13c);
        if (-1 < uVar11) {
            iVar13 = iVar13 + iVar12 * 200;
            uVar7 = qcom_adc5_hw_scale(*(iVar13 + 0x20),*(iVar13 + 0x10),*(iVar17 + 0x88),auStack_13c[0],param_3);
            if (-1 < uVar7) {
                uVar7 = 1;
            }
            uVar11 = uVar7;
        }
    }
    else {
        uVar11 = 0xffffffea;
    }
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) != iStack_138) {
        auVar19 = __stack_chk_fail(uVar11);
        iVar18 = *(auVar19._0_8_ + 0x440);
        uVar7 = *(iVar18 + 0x24);
        if (uVar7 != 0) {
            uVar11 = 0;
            do {
                puVar14 = *(iVar18 + 0x28) + uVar11 * 200;
                if ((*puVar14 | puVar14[3] << 8) == *(auVar19._8_8_ + 0xc)) {
                    return uVar11;
                }
                uVar1 = uVar11 + 1;
                uVar11 = uVar1;
            } while (uVar7 != uVar1);
        }
        return 0xfffffffe;
    }
    return uVar11;
code_r0x08005250:
    iVar5 = iVar5 + 1;
    unaff_x21 = unaff_x21 + 3;
    if (*(param_2 + 4) == iVar5) goto code_r0x08005308;
    goto code_r0x08005240;
}


// ===== sym.adc5_gen3_restore.0ad87e129b42622404d2c68837efd3ea.cfi_jt @ 0x080032f8 (size 8) =====

ulong sym.adc5_gen3_restore.0ad87e129b42622404d2c68837efd3ea.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t iVar3;
    uint32_t uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0x98);
    if (*(iVar3 + 0x20) == 0) {
        uVar1 = 0;
    }
    else {
        uVar4 = 0;
        do {
            iVar2 = *(iVar3 + 0x10) + uVar4 * 0x18;
            uVar1 = devm_request_threaded_irq
                              (param_1,*(iVar2 + 0x10),sym.adc5_gen3_isr.0ad87e129b42622404d2c68837efd3ea.cfi_jt,0,0
                               ,*(iVar2 + 8),iVar3);
            if (uVar1 < 0) {
                return uVar1;
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < *(iVar3 + 0x20));
    }
    return uVar1;
}


// ===== sym.adc5_gen3_freeze.0ad87e129b42622404d2c68837efd3ea.cfi_jt @ 0x08003300 (size 8) =====

ulong sym.adc5_gen3_freeze.0ad87e129b42622404d2c68837efd3ea.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    uint32_t uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x98);
    mutex_lock(iVar1 + 0x58);
    if (*(iVar1 + 0x20) != 0) {
        uVar2 = 0;
        do {
            devm_free_irq(param_1,*(*(iVar1 + 0x10) + uVar2 * 0x18 + 0x10),iVar1);
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(iVar1 + 0x20));
    }
    mutex_unlock(iVar1 + 0x58);
    return 0;
}


// ===== sym.adc_tm_disable_chan_meas_gen3.cfi_jt @ 0x08003308 (size 8) =====

int sym.adc_tm_disable_chan_meas_gen3.cfi_jt(int64_t param_1,int64_t *param_2)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t *piVar4;
    uint32_t *puVar5;
    ulong *in_x18;
    int64_t *piVar6;
    int iVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 != NULL) {
        iVar1 = *(param_1 + 0x24);
        if (iVar1 == 0) {
            iVar7 = 0;
code_r0x08004030:
            if (iVar7 != iVar1) {
                mutex_lock(param_1 + 0x58);
                iVar3 = *(param_1 + 0x28);
                piVar4 = iVar3 + iVar7 * 200 + 0xb0;
                piVar6 = *piVar4;
                if (piVar6 == piVar4) {
                    iVar1 = 0;
                }
                else {
                    iVar1 = 0;
                    iVar8 = iVar7;
                    do {
                        if (*piVar6[2] == *param_2) {
                            *(piVar6 + 0x24) = 5;
                            iVar1 = sym.adc_tm_gen3_manage_thresholds(*(param_1 + 0x28) + iVar8 * 200);
                            if (iVar1 < 0) {
                                uVar2 = 0x8000251;
                            }
                            else {
                                iVar1 = sym.adc_tm5_gen3_configure(*(param_1 + 0x28) + iVar8 * 200);
                                if (-1 < iVar1) {
                                    iVar3 = *(param_1 + 0x28);
                                    goto code_r0x08004070;
                                }
                                uVar2 = 0x8000450;
                            }
                            _printk(uVar2,iVar1);
                            break;
                        }
code_r0x08004070:
                        piVar6 = *piVar6;
                    } while (piVar6 != iVar3 + iVar8 * 200 + 0xb0);
                }
                mutex_unlock(param_1 + 0x58);
                return iVar1;
            }
        }
        else {
            iVar7 = 0;
            do {
                puVar5 = *(param_1 + 0x28) + iVar7 * 200;
                if ((*puVar5 | puVar5[3] << 8) == *(param_2 + 2)) goto code_r0x08004030;
                iVar7 = iVar7 + 1;
            } while (iVar1 != iVar7);
        }
        _printk(0x800091a);
    }
    return -0x16;
}


// ===== sym.adc_tm_channel_measure_gen3.cfi_jt @ 0x08003310 (size 8) =====

int sym.adc_tm_channel_measure_gen3.cfi_jt(int64_t param_1,int64_t *param_2)

{
    uint uVar1;
    uint uVar2;
    bool bVar3;
    int iVar4;
    uint64_t uVar5;
    int64_t *piVar6;
    int64_t iVar7;
    int64_t *piVar8;
    uint32_t *puVar9;
    ulong *in_x18;
    ulong *puVar10;
    int64_t iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_2 != NULL) && (param_2[4] != 0)) {
        if (*(param_1 + 0x24) != 0) {
            iVar11 = 0;
            iVar4 = 0;
            do {
                puVar9 = *(param_1 + 0x28) + iVar4 * 200;
                if ((*puVar9 | puVar9[3] << 8) == *(param_2 + 2)) {
                    mutex_lock(param_1 + 0x58);
                    iVar7 = *(param_1 + 0x28);
                    piVar8 = iVar7 + iVar11 + 0xb0;
                    piVar6 = *piVar8;
                    if (piVar8 == piVar6) {
code_r0x08003ee4:
                        piVar6 = devm_kmalloc(*(param_1 + 8),0x28,0xdc0);
                        if (piVar6 != NULL) {
                            *piVar6[2] = piVar6;
                            uVar1 = *(param_2 + 0xc);
                            uVar2 = *(param_2 + 0x14);
                            iVar7 = *(param_1 + 0x28) + iVar11;
                            *(piVar6 + 3) = param_2[1];
                            *(piVar6 + 0x1c) = uVar1;
                            *(piVar6 + 0x24) = uVar2;
                            puVar10 = *(iVar7 + 0xb8);
                            uVar5 = __list_add_valid(piVar6,puVar10,iVar7 + 0xb0);
                            if ((uVar5 & 1) != 0) {
                                *(iVar7 + 0xb8) = piVar6;
                                *piVar6 = iVar7 + 0xb0;
                                piVar6[1] = puVar10;
                                *puVar10 = piVar6;
                            }
                        }
                    }
                    else {
                        bVar3 = false;
                        do {
                            while (*piVar6[2] != *param_2) {
                                piVar6 = *piVar6;
                                if (iVar7 + iVar11 + 0xb0 == piVar6) {
                                    if (!bVar3) goto code_r0x08003ee4;
                                    goto code_r0x08003f40;
                                }
                            }
                            *(piVar6 + 3) = param_2[1];
                            *(piVar6 + 0x1c) = *(param_2 + 0xc);
                            uVar1 = *(param_2 + 0x14);
                            *(piVar6 + 4) = 0;
                            *(piVar6 + 0x24) = uVar1;
                            piVar6 = *piVar6;
                            iVar7 = *(param_1 + 0x28);
                            bVar3 = true;
                        } while (iVar7 + iVar11 + 0xb0 != piVar6);
                    }
code_r0x08003f40:
                    iVar4 = sym.adc_tm_gen3_manage_thresholds(*(param_1 + 0x28) + iVar11);
                    if (iVar4 < 0) {
                        _printk(0x8000251,iVar4);
                    }
                    iVar4 = sym.adc_tm5_gen3_configure(*(param_1 + 0x28) + iVar11);
                    if (iVar4 < 0) {
                        _printk(0x8000450,iVar4);
                    }
                    mutex_unlock(param_1 + 0x58);
                    return iVar4;
                }
                iVar4 = iVar4 + 1;
                iVar11 = iVar11 + 200;
            } while (*(param_1 + 0x24) != iVar4);
        }
        _printk(0x800091a);
    }
    return -0x16;
}


// ===== sym.adc5_gen3_exit.0ad87e129b42622404d2c68837efd3ea.cfi_jt @ 0x08003318 (size 8) =====

uint64_t sym.adc5_gen3_exit.0ad87e129b42622404d2c68837efd3ea.cfi_jt
                   (int64_t param_1,ulong param_2,uint64_t *param_3,ulong param_4,uint *param_5)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    uint16_t uVar3;
    code *pcVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    ulong uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    uint64_t *puVar14;
    ulong *puVar15;
    uint64_t unaff_x20;
    uint64_t *puVar16;
    ulong *unaff_x22;
    int64_t iVar17;
    ulong unaff_x23;
    uint64_t unaff_x24;
    uint64_t unaff_x25;
    int64_t iVar18;
    uint32_t *puVar19;
    uint32_t uVar20;
    uint64_t uVar21;
    int64_t iVar22;
    int64_t iVar23;
    ulong unaff_x30;
    uchar auVar24 [16];
    uint16_t auStack_1ec [2];
    int64_t iStack_1e8;
    uchar ****ppppuStack_1e0;
    code *pcStack_1d8;
    ulong *puStack_1d0;
    uint64_t *puStack_1c8;
    uint64_t uStack_1c0;
    ulong *puStack_1b8;
    uint uStack_1a4;
    uchar auStack_1a0 [4];
    ushort uStack_19c;
    uint64_t auStack_198 [3];
    uchar ***pppuStack_180;
    code *pcStack_178;
    uint8_t auStack_11c [4];
    ushort uStack_118;
    char acStack_114 [4];
    uint64_t uStack_110;
    int64_t iStack_108;
    uchar **ppuStack_100;
    code *pcStack_f8;
    uint64_t uStack_f0;
    uint64_t uStack_e0;
    ulong uStack_d8;
    ulong *puStack_d0;
    uint64_t *puStack_c8;
    uint64_t uStack_c0;
    uint64_t *puStack_b8;
    uchar auStack_ac [12];
    uchar *puStack_a0;
    code *pcStack_98;
    uint64_t uStack_90;
    ulong uStack_88;
    ulong *puStack_80;
    uint64_t *puStack_78;
    uint64_t uStack_70;
    uint64_t *puStack_68;
    uchar auStack_5c [12];
    
    *in_x18 = unaff_x30;
    iVar23 = sp_el0;
    auStack_5c._4_8_ = *(iVar23 + 0x5e0);
    puVar16 = *(param_1 + 0xa8);
    auStack_5c[0] = 0;
    puVar1 = puVar16 + 0xb;
    mutex_lock(puVar1);
    if (*(puVar16 + 0x24) != 0) {
        unaff_x22 = NULL;
        unaff_x20 = 200;
        do {
            uVar12 = puVar16[5];
            iVar6 = unaff_x22;
            if (*(uVar12 + iVar6 * 200 + 0x78) != 0) {
                destroy_workqueue();
                uVar12 = puVar16[5];
            }
            unaff_x22 = iVar6 + 1U;
            *(uVar12 + iVar6 * 200 + 0x40) = 0;
        } while (iVar6 + 1U < *(puVar16 + 0x24));
    }
    if ((*(puVar16 + 0x1c) & 0x1fffffff) != 0) {
        unaff_x22 = NULL;
        unaff_x23 = 0x18;
        unaff_x24 = 1;
        unaff_x20 = 0x8000715;
        do {
            iVar7 = unaff_x22;
            iVar6 = iVar7 + 7;
            if (-1 < iVar7) {
                iVar6 = iVar7;
            }
            unaff_x25 = iVar6 >> 3;
            auStack_5c[0] = 0;
            iVar5 = regmap_bulk_write(*puVar16,*(puVar16[2] + unaff_x25 * 0x18) + 0x51,auStack_5c,1);
            if (iVar5 < 0) {
                _printk(0x8000715,0x51,1,iVar5);
            }
            auStack_5c[0] = unaff_x22 + (iVar6 >> 3) * -8 | 0x80;
            iVar6 = regmap_bulk_write(*puVar16,*(puVar16[2] + unaff_x25 * 0x18) + 0x50,auStack_5c,1);
            if (iVar6 < 0) {
                _printk(0x8000715,0x50,1,iVar6);
            }
            auStack_5c[0] = 1;
            param_3 = auStack_5c;
            iVar6 = regmap_bulk_write(*puVar16,*(puVar16[2] + unaff_x25 * 0x18) + 0xe5,param_3,1);
            if (iVar6 < 0) {
                param_3 = 0x1;
                _printk(0x8000715,0xe5,1,iVar6);
            }
            unaff_x22 = iVar7 + 1U;
        } while (iVar7 + 1U < *(puVar16 + 0x1c) << 3);
    }
    mutex_unlock(puVar1);
    if (puVar16[0x12] != 0) {
        cancel_work_sync(puVar16 + 0x16);
    }
    uVar12 = __list_del_entry_valid(puVar16 + 0x13);
    if ((uVar12 & 1) != 0) {
        uVar12 = puVar16[0x13];
        puVar14 = puVar16[0x14];
        *(uVar12 + 8) = puVar14;
        *puVar14 = uVar12;
    }
    puVar16[0x13] = 0xdead000000000100;
    puVar16[0x14] = 0xdead000000000122;
    thermal_minidump_unregister(puVar16[0x1c]);
    iVar23 = sp_el0;
    if (*(iVar23 + 0x5e0) == auStack_5c._4_8_) {
        return 0;
    }
    uVar12 = __stack_chk_fail();
    *extraout_x18 = sym.adc5_gen3_shutdown;
    pcStack_98 = sym.adc5_gen3_shutdown;
    iVar23 = sp_el0;
    auStack_ac._4_8_ = *(iVar23 + 0x5e0);
    puVar14 = *(uVar12 + 0xa8);
    puStack_a0 = &stack0xffffffffffffffb0;
    uStack_90 = unaff_x24;
    uStack_88 = unaff_x23;
    puStack_80 = unaff_x22;
    puStack_78 = puVar16;
    uStack_70 = unaff_x20;
    puStack_68 = puVar1;
    if (puVar14[4] != 0) {
        puVar16 = 0x18;
        uVar21 = 0;
        do {
            param_3 = puVar14;
            uVar12 = devm_free_irq(puVar14[1],*(puVar14[2] + uVar21 * 0x18 + 0x10));
            uVar9 = uVar21 + 1;
            unaff_x20 = uVar9;
            uVar21 = unaff_x20;
        } while (uVar9 < puVar14[4]);
    }
    if ((*(puVar14 + 0x1c) & 0x1fffffff) != 0) {
        puVar16 = NULL;
        unaff_x22 = 0x18;
        unaff_x23 = 1;
        unaff_x20 = 0x8000715;
        do {
            iVar7 = puVar16;
            iVar6 = iVar7 + 7;
            if (-1 < iVar7) {
                iVar6 = iVar7;
            }
            unaff_x24 = iVar6 >> 3;
            auStack_ac[0] = 0;
            iVar5 = regmap_bulk_write(*puVar14,*(puVar14[2] + unaff_x24 * 0x18) + 0x51,auStack_ac,1);
            if (iVar5 < 0) {
                _printk(0x8000715,0x51,1,iVar5);
            }
            auStack_ac[0] = puVar16 + (iVar6 >> 3) * -8 | 0x80;
            iVar6 = regmap_bulk_write(*puVar14,*(puVar14[2] + unaff_x24 * 0x18) + 0x50,auStack_ac,1);
            if (iVar6 < 0) {
                _printk(0x8000715,0x50,1,iVar6);
            }
            auStack_ac[0] = 1;
            param_3 = auStack_ac;
            uVar12 = regmap_bulk_write(*puVar14,*(puVar14[2] + unaff_x24 * 0x18) + 0xe5,param_3,1);
            if (uVar12 < 0) {
                param_3 = 0x1;
                uVar12 = _printk(0x8000715,0xe5,1,uVar12 & 0xffffffff);
            }
            puVar16 = iVar7 + 1U;
        } while (iVar7 + 1U < *(puVar14 + 0x1c) << 3);
    }
    iVar23 = sp_el0;
    if (*(iVar23 + 0x5e0) == auStack_ac._4_8_) {
        return uVar12;
    }
    auVar24 = __stack_chk_fail();
    puVar15 = auVar24._8_8_;
    *extraout_x18_00 = sym.adc5_gen3_isr;
    pcStack_f8 = sym.adc5_gen3_isr;
    iVar23 = sp_el0;
    iStack_108 = *(iVar23 + 0x5e0);
    uVar12 = auVar24._0_8_ & 0xffffffff;
    acStack_114[0] = '\0';
    uStack_118 = 0;
    auStack_11c[0] = 0;
    ppuStack_100 = &puStack_a0;
    uStack_f0 = unaff_x25;
    uStack_e0 = unaff_x24;
    uStack_d8 = unaff_x23;
    puStack_d0 = unaff_x22;
    puStack_c8 = puVar16;
    uStack_c0 = unaff_x20;
    puStack_b8 = puVar14;
    if (*(puVar15 + 4) != 0) {
        puVar16 = NULL;
        iVar6 = 0;
code_r0x08005240:
        if (*(puVar15[2] + iVar6 * 0x18 + 0x10) != auVar24._0_4_) goto code_r0x08005250;
        if (iVar6 < 0) goto code_r0x08005308;
        uVar9 = regmap_bulk_read(*puVar15,*(puVar15[2] + puVar16) + 0x4a,auStack_11c,1);
        if (uVar9 < 0) {
            uVar12 = uVar9;
            param_3 = 0x1;
            _printk(0x800033a,0x4a,1,uVar12);
            uVar11 = 0x80005f5;
            goto code_r0x0800538c;
        }
        if ((auStack_11c[0] & 1) != 0) {
            complete(puVar15 + 7);
        }
        uVar9 = regmap_bulk_read(*puVar15,*(puVar15[2] + puVar16) + 0x48,&uStack_118,2);
        if (uVar9 < 0) {
            uVar12 = uVar9;
            param_3 = 0x2;
            _printk(0x800033a,0x48,2,uVar12);
            uVar11 = 0x80006c6;
            goto code_r0x0800538c;
        }
        if (uStack_118 != '\0' || uStack_118._1_1_ != '\0') {
            queue_work_on(0x20,_adc_tm_absolute_rthr_gen3,puVar15 + 0x16);
        }
        param_3 = acStack_114;
        uVar12 = regmap_bulk_read(*puVar15,*(puVar15[2] + puVar16) + 0x46,param_3,1);
        if (uVar12 < 0) {
            uVar12 = uVar12 & 0xffffffff;
            param_3 = 0x1;
            _printk(0x800033a,0x46,1,uVar12);
            uVar11 = 0x800084b;
            goto code_r0x0800538c;
        }
        if (-1 < acStack_114[0]) {
            uVar12 = 1;
            goto code_r0x08005394;
        }
        _printk(0x80002dc);
        if (*(puVar15 + 0x1c) != 0) {
            unaff_x22 = NULL;
            do {
                iVar6 = 0;
                uVar3 = *(puVar15[2] + unaff_x22 * 0x18);
                uStack_110 = 0;
                do {
                    iVar7 = regmap_bulk_read(*puVar15,uVar3 + iVar6,&uStack_110,8);
                    if (iVar7 < 0) {
                        _printk(0x8000384,iVar7);
                        break;
                    }
                    iVar6 = iVar6 + 8;
                } while (iVar6 != 0x100);
                uVar9 = unaff_x22 + 1;
                unaff_x22 = uVar9;
            } while (uVar9 < *(puVar15 + 0x1c));
        }
        uVar3 = *(puVar15 + 3);
        if (uVar3 != 0) {
            unaff_x22 = NULL;
            uStack_110 = 0;
            do {
                iVar6 = regmap_bulk_read(*puVar15,uVar3 + unaff_x22,&uStack_110,8);
                if (iVar6 < 0) {
                    _printk(0x8000384,iVar6);
                    break;
                }
                uVar9 = unaff_x22 + 8;
                unaff_x22 = uVar9;
            } while (uVar9 != 0x100);
        }
        uStack_110 = CONCAT71(uStack_110._1_7_,1);
        iVar6 = regmap_bulk_write(*puVar15,*(puVar15[2] + puVar16) + 0x4e,&uStack_110,1);
        if (iVar6 < 0) {
            uVar11 = 0x4e;
code_r0x08005530:
            param_3 = 0x1;
            _printk(0x8000715,uVar11,1,iVar6);
            goto code_r0x08005390;
        }
        uStack_110 = uStack_110 & 0xffffffffffffff00;
        uVar12 = 1;
        iVar6 = regmap_bulk_write(*puVar15,*(puVar15[2] + puVar16) + 0x50,&uStack_110,1);
        if (iVar6 < 0) {
            uVar11 = 0x50;
            goto code_r0x08005530;
        }
        uStack_110 = CONCAT71(uStack_110._1_7_,1);
        param_3 = &uStack_110;
        iVar6 = regmap_bulk_write(*puVar15,*(puVar15[2] + puVar16) + 0xe5,param_3,1);
        if (iVar6 < 0) {
            uVar11 = 0xe5;
            goto code_r0x08005530;
        }
        goto code_r0x08005394;
    }
code_r0x08005308:
    uVar11 = 0x8000758;
code_r0x0800538c:
    _printk(uVar11,uVar12);
code_r0x08005390:
    uVar12 = 0;
code_r0x08005394:
    iVar23 = sp_el0;
    if (*(iVar23 + 0x5e0) == iStack_108) {
        return uVar12;
    }
    uVar10 = __stack_chk_fail();
    *extraout_x18_01 = sym.tm_handler_work;
    pcStack_178 = sym.tm_handler_work;
    iVar23 = sp_el0;
    auStack_198[2] = *(iVar23 + 0x5e0);
    uStack_19c = 0;
    auStack_198[0] = 0;
    auStack_198[1] = 0;
    auStack_1a0[0] = 0;
    uVar21 = uVar10;
    pppuStack_180 = &ppuStack_100;
    if (*(uVar10 - 0x8c) != 0) {
        uVar9 = 0;
        unaff_x22 = uVar10 - 0xb0;
        puVar15 = uVar10 - 0x58;
        uVar12 = 0xffffffff;
        do {
            iVar23 = *(uVar10 - 0x88);
            uStack_1a4 = 0;
            iVar22 = uVar9;
            iVar18 = iVar23 + uVar9 * 200;
            puVar19 = iVar18 + 0x38;
            if ((*puVar19 | 2) == 3) {
                uVar2 = *(iVar18 + 0x3c);
                mutex_lock(puVar15);
                uVar20 = *(iVar23 + iVar22 * 200 + 0x1c);
                uVar21 = uVar20;
                if (uVar20 != uVar12) {
                    uVar12 = 0x18;
                    uVar8 = regmap_bulk_read(*unaff_x22,*(*(uVar10 - 0xa0) + uVar21 * 0x18) + 0x48,&uStack_19c,2);
                    if (uVar8 < 0) {
                        puVar16 = uVar8;
                        param_3 = 0x2;
                        _printk(0x800033a,0x48,2,puVar16);
                        uVar11 = 0x80006c6;
                    }
                    else {
                        uVar8 = regmap_bulk_write(*unaff_x22,*(*(uVar10 - 0xa0) + uVar21 * 0x18) + 0x4c,&uStack_19c,2
                                                 );
                        if (uVar8 < 0) {
                            puVar16 = uVar8;
                            param_3 = 0x2;
                            _printk(0x8000715,0x4c,2,puVar16);
                            uVar11 = 0x800086e;
                        }
                        else {
                            auStack_1a0[0] = 0;
                            uVar8 = regmap_bulk_write(*unaff_x22,*(*(uVar10 - 0xa0) + uVar21 * 0x18) + 0x50,
                                                      auStack_1a0,1);
                            if (uVar8 < 0) {
                                puVar16 = uVar8;
                                param_3 = 0x1;
                                _printk(0x8000715,0x50,1,puVar16);
                                uVar11 = 0x8000270;
                            }
                            else {
                                auStack_1a0[0] = 1;
                                uVar8 = regmap_bulk_write(*unaff_x22,*(*(uVar10 - 0xa0) + uVar21 * 0x18) + 0xe5,
                                                          auStack_1a0,1);
                                if (uVar8 < 0) {
                                    puVar16 = uVar8;
                                    param_3 = 0x1;
                                    _printk(0x8000715,0xe5,1,puVar16);
                                    uVar11 = 0x80002fb;
                                }
                                else {
                                    param_3 = auStack_198;
                                    uVar8 = regmap_bulk_read(*unaff_x22,*(*(uVar10 - 0xa0) + uVar21 * 0x18) + 0x5c,
                                                             param_3,0x10);
                                    uVar12 = uVar20;
                                    if (-1 < uVar8) goto code_r0x08005718;
                                    puVar16 = uVar8;
                                    param_3 = 0x10;
                                    _printk(0x800033a,0x5c,0x10,puVar16);
                                    uVar11 = 0x80009c0;
                                }
                            }
                        }
                    }
                    _printk(uVar11,puVar16);
                    uVar21 = mutex_unlock(puVar15);
                    break;
                }
code_r0x08005718:
                uVar21 = 1L << (uVar2 & 0x3f);
                if ((uVar21 & uStack_19c) == 0) {
                    puVar16 = NULL;
                }
                else {
                    puVar16 = *(iVar23 + iVar22 * 200 + 0x50) != 0;
                }
                if ((uVar21 & uStack_19c._1_1_) == 0) {
                    uVar20 = 0;
                }
                else {
                    uVar20 = *(iVar23 + iVar22 * 200 + 0x54) != 0;
                }
                uVar21 = mutex_unlock(puVar15);
                if ((puVar16 | uVar20) == 1) {
                    uVar2 = uVar2 << 1;
                    if ((0xf < uVar2) || (uVar13 = uVar2 | 1, 0xf < uVar13)) {
    //WARNING: Does not return
                        pcVar4 = SoftwareBreakpoint(0x5512,0x8005938);
                        (*pcVar4)();
                    }
                    if (*puVar19 == 3) {
                        if (uVar20 != 0) {
                            mutex_lock(puVar15);
                            iVar18 = iVar23 + iVar22 * 200;
                            *(iVar18 + 0x54) = 0;
                            *(iVar18 + 0x59) = 1;
                            mutex_unlock(puVar15);
                            param_3 = iVar18 + 0x80;
                            uVar21 = queue_work_on(0x20,*(iVar18 + 0x78));
                        }
                        if (puVar16 != 0) {
                            mutex_lock(puVar15);
                            puVar16 = iVar23 + iVar22 * 200;
                            *(puVar16 + 10) = 0;
                            *(puVar16 + 0xb) = '\x01';
                            mutex_unlock(puVar15);
                            param_3 = puVar16 + 0x10;
                            uVar21 = queue_work_on(0x20,puVar16[0xf]);
                        }
                    }
                    else {
                        iVar18 = iVar23 + iVar22 * 200;
                        param_3 = *(uVar10 - 0x28);
                        param_5 = &uStack_1a4;
                        puVar16 = CONCAT11(*(auStack_198 + uVar13),*(auStack_198 + uVar2));
                        iVar6 = qcom_adc5_hw_scale(*(iVar18 + 0x20),*(iVar18 + 0x10),param_3,puVar16);
                        if (iVar6 < 0) {
                            param_3 = puVar16;
                            uVar21 = _printk(0x8000782,iVar6);
                        }
                        else {
                            iVar23 = iVar23 + iVar22 * 200;
                            *(iVar23 + 0x70) = uStack_1a4;
                            *(iVar23 + 0x74) = 1;
                            uVar21 = thermal_zone_device_update(*(iVar23 + 0x48),2);
                        }
                    }
                }
            }
            uVar9 = uVar9 + 1;
        } while (uVar9 < *(uVar10 - 0x8c));
    }
    iVar23 = sp_el0;
    if (*(iVar23 + 0x5e0) == auStack_198[2]) {
        return uVar21;
    }
    auVar24 = __stack_chk_fail();
    *extraout_x18_02 = sym.adc5_gen3_read_raw;
    pcStack_1d8 = sym.adc5_gen3_read_raw;
    iVar23 = sp_el0;
    iStack_1e8 = *(iVar23 + 0x5e0);
    iVar22 = *(auVar24._0_8_ + 0x440);
    auStack_1ec[0] = 0;
    iVar17 = *(auVar24._8_8_ + 0x10);
    iVar18 = *(iVar22 + 0x28);
    iVar23 = iVar18 + iVar17 * 200;
    ppppuStack_1e0 = &pppuStack_180;
    puStack_1d0 = unaff_x22;
    puStack_1c8 = puVar16;
    uStack_1c0 = uVar12;
    puStack_1b8 = puVar15;
    if (param_5 == NULL) {
        uVar12 = sym.adc5_gen3_do_conversion(iVar22,iVar23,auStack_1ec);
        if (-1 < uVar12) {
            uVar12 = 1;
            *param_3 = auStack_1ec[0];
        }
    }
    else if (param_5 == 0x1) {
        uVar12 = sym.adc5_gen3_do_conversion(iVar22,iVar23,auStack_1ec);
        if (-1 < uVar12) {
            iVar18 = iVar18 + iVar17 * 200;
            uVar9 = qcom_adc5_hw_scale(*(iVar18 + 0x20),*(iVar18 + 0x10),*(iVar22 + 0x88),auStack_1ec[0],param_3);
            if (-1 < uVar9) {
                uVar9 = 1;
            }
            uVar12 = uVar9;
        }
    }
    else {
        uVar12 = 0xffffffea;
    }
    iVar23 = sp_el0;
    if (*(iVar23 + 0x5e0) != iStack_1e8) {
        auVar24 = __stack_chk_fail(uVar12);
        iVar23 = *(auVar24._0_8_ + 0x440);
        uVar9 = *(iVar23 + 0x24);
        if (uVar9 != 0) {
            uVar12 = 0;
            do {
                puVar19 = *(iVar23 + 0x28) + uVar12 * 200;
                if ((*puVar19 | puVar19[3] << 8) == *(auVar24._8_8_ + 0xc)) {
                    return uVar12;
                }
                uVar2 = uVar12 + 1;
                uVar12 = uVar2;
            } while (uVar9 != uVar2);
        }
        return 0xfffffffe;
    }
    return uVar12;
code_r0x08005250:
    iVar6 = iVar6 + 1;
    puVar16 = puVar16 + 3;
    if (*(puVar15 + 4) == iVar6) goto code_r0x08005308;
    goto code_r0x08005240;
}


// ===== sym.adc5_gen3_probe.0ad87e129b42622404d2c68837efd3ea.cfi_jt @ 0x08003320 (size 8) =====

uint64_t sym.adc5_gen3_probe.0ad87e129b42622404d2c68837efd3ea.cfi_jt(int64_t *param_1)

{
    uint32_t uVar1;
    uint uVar2;
    int iVar3;
    uint32_t uVar4;
    int64_t iVar5;
    uint *puVar6;
    uint64_t uVar7;
    ulong uVar8;
    int64_t iVar9;
    int64_t *piVar10;
    char *pcVar11;
    uint32_t *puVar12;
    ulong *in_x18;
    int64_t *unaff_x19;
    code *pcVar13;
    uint *puVar14;
    uint64_t uVar15;
    int64_t *piVar16;
    int64_t iVar17;
    uint32_t uVar18;
    int64_t *piVar19;
    int64_t *piVar20;
    uint64_t uVar21;
    ulong unaff_x30;
    uint uStack_94;
    ulong uStack_90;
    uint32_t uStack_88;
    uint32_t uStack_84;
    ulong uStack_80;
    ulong uStack_78;
    uint uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_68 = *(iVar5 + 0x5e0);
    iVar17 = param_1[0x60];
    uStack_94 = 0;
    uStack_70 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    iVar5 = dev_get_regmap(param_1[0xe],0);
    piVar19 = param_1;
    if (iVar5 == 0) {
        uVar21 = 0xffffffed;
    }
    else {
        piVar20 = param_1 + 2;
        puVar6 = devm_iio_device_alloc(piVar20,0xe8);
        if (puVar6 != NULL) {
            unaff_x19 = *(puVar6 + 0x110);
            *unaff_x19 = iVar5;
            unaff_x19[1] = piVar20;
            uVar7 = of_property_count_elems_of_size(iVar17,0x80007d8,4);
            uVar21 = uVar7 & 0xffffffff;
            if (uVar7 < 0) goto code_r0x0800454c;
            *(unaff_x19 + 0x1c) = uVar7;
            uVar2 = of_property_read_string_helper(iVar17,"interrupt-names",0,0,0);
            *(unaff_x19 + 4) = uVar2;
            iVar5 = devm_kmalloc(unaff_x19[1],*(unaff_x19 + 0x1c) * 0x18,0xdc0);
            unaff_x19[2] = iVar5;
            if (iVar5 != 0) {
                if (*(unaff_x19 + 0x1c) != 0) {
                    uVar18 = 0;
                    do {
                        uVar21 = of_property_read_u32_index(iVar17,0x80007d8,uVar18,&uStack_94);
                        if (uVar21 < 0) {
                            uVar21 = uVar21 & 0xffffffff;
                            goto code_r0x0800454c;
                        }
                        iVar5 = uVar18;
                        uVar18 = uVar18 + 1;
                        *(unaff_x19[2] + iVar5 * 0x18) = uStack_94;
                    } while (uVar18 < *(unaff_x19 + 0x1c));
                }
                if (unaff_x19[4] != 0) {
                    uVar18 = 0;
                    do {
                        scnprintf(&uStack_80,0x14,"adc-sdam%d",uVar18);
                        uVar7 = of_irq_get_byname(iVar17,&uStack_80);
                        uVar21 = uVar7 & 0xffffffff;
                        if (uVar7 < 0) {
                            _printk(0x800097a,uVar18,uVar21);
                            goto code_r0x0800454c;
                        }
                        *(unaff_x19[2] + uVar18 * 0x18 + 0x10) = uVar7;
                        uVar8 = devm_kstrdup(unaff_x19[1],&uStack_80,0xcc0);
                        *(unaff_x19[2] + uVar18 * 0x18 + 8) = uVar8;
                        if (*(unaff_x19[2] + uVar18 * 0x18 + 8) == 0) goto code_r0x08004548;
                        uVar18 = uVar18 + 1;
                    } while (uVar18 < *(unaff_x19 + 4));
                }
                iVar3 = of_property_read_variable_u32_array(iVar17,"qcom,debug-base",&uStack_94,1,0);
                if (-1 < iVar3) {
                    *(unaff_x19 + 3) = uStack_94;
                }
                param_1[0x15] = unaff_x19;
                *(puVar6 + 0x10c) = obj.adc5_gen3_info;
                *(unaff_x19 + 7) = 0;
                __init_swait_queue_head(unaff_x19 + 8,"&x->wait",obj.adc_tm_device_list);
                __mutex_init(unaff_x19 + 0xb,"&adc->lock",obj.adc_tm_device_list);
                iVar5 = of_get_next_available_child(iVar17,0);
                if (iVar5 == 0) {
                    uVar21 = 0xffffffea;
                    *(unaff_x19 + 0x24) = 0;
                    goto code_r0x08004db8;
                }
                uVar18 = 0;
                do {
                    uVar18 = uVar18 + 1;
                    iVar5 = of_get_next_available_child(iVar17,iVar5);
                } while (iVar5 != 0);
                *(unaff_x19 + 0x24) = uVar18;
                if (uVar18 == 0) {
                    uVar21 = 0xffffffea;
                    goto code_r0x08004db8;
                }
                iVar5 = devm_kmalloc(unaff_x19[1],uVar18 * 0x98,0xdc0);
                unaff_x19[6] = iVar5;
                if (iVar5 != 0) {
                    iVar5 = devm_kmalloc(unaff_x19[1],*(unaff_x19 + 0x24) * 200,0xdc0);
                    unaff_x19[5] = iVar5;
                    if (iVar5 != 0) {
                        puVar14 = unaff_x19[6];
                        *(unaff_x19 + 0x12) = 0;
                        iVar9 = of_match_node(obj.adc5_match_table,iVar17);
                        if (iVar9 == 0) {
                            pcVar13 = obj.adc5_gen3_data_pmic;
                        }
                        else {
                            pcVar13 = *(iVar9 + 0xc0);
                        }
                        unaff_x19[0x11] = pcVar13;
                        piVar10 = of_get_next_available_child(iVar17,0);
                        if (piVar10 != NULL) {
                            uVar18 = 0;
                            piVar16 = iVar5 + 0x78;
                            do {
                                iVar5 = *piVar10;
                                uStack_84 = 0;
                                piVar19 = unaff_x19[1];
                                uStack_88 = 0;
                                uStack_90 = 0;
                                uVar4 = of_property_read_variable_u32_array(piVar10,0x80007d8,&uStack_84,1,0);
                                if (uVar4 < 0) {
                                    uVar21 = uVar4;
                                    _dev_err(piVar19,"invalid channel number %s\n",iVar5);
                                    param_1 = piVar19;
                                    goto code_r0x08004db8;
                                }
                                uVar4 = uStack_84 & 0xff;
                                if ((0xf8 < uVar4) || (*(*(pcVar13 + 0x10) + (uStack_84 & 0xff) * 0x20) == 0)) {
                                    uStack_84 = uVar4;
                                    _dev_err(piVar19,"%s invalid channel number %d\n",iVar5);
                                    uVar21 = 0xffffffea;
                                    param_1 = piVar19;
                                    goto code_r0x08004db8;
                                }
                                *(piVar16 + -0xf) = uVar4;
                                *(piVar16 + -0x6c) = uStack_84 >> 8;
                                uStack_84 = uVar4;
                                iVar5 = of_get_property(piVar10,"label",0);
                                if ((iVar5 == 0) && (iVar5 = *piVar10, iVar5 == 0)) {
                                    _printk(0x80008d4);
                                    uVar21 = 0xffffffea;
                                    param_1 = piVar19;
                                    goto code_r0x08004db8;
                                }
                                piVar16[-10] = iVar5;
                                iVar3 = of_property_read_variable_u32_array
                                                  (piVar10,"qcom,decimation",&uStack_88,1,0);
                                if (iVar3 < 0) {
code_r0x08004708:
                                    uVar2 = 2;
                                }
                                else {
                                    puVar12 = *(pcVar13 + 0x20);
                                    if (*puVar12 == uStack_88) {
                                        uVar2 = 0;
                                    }
                                    else {
                                        if (puVar12[1] != uStack_88) {
                                            if (puVar12[2] != uStack_88) {
                                                pcVar11 = "%02x invalid decimation %d\n";
                                                goto code_r0x08004dac;
                                            }
                                            goto code_r0x08004708;
                                        }
                                        uVar2 = 1;
                                    }
                                }
                                *(piVar16 + -0xe) = uVar2;
                                iVar3 = of_property_read_variable_u32_array
                                                  (piVar10,"qcom,pre-scaling",&uStack_90,2,0);
                                if (iVar3 < 0) {
                                    iVar3 = *(*(unaff_x19[0x11] + 0x10) + *(piVar16 + -0xf) * 0x20 + 8);
                                }
                                else {
                                    uVar7 = qcom_adc5_prescaling_from_dt(uStack_90 & 0xffffffff,uStack_90._4_4_);
                                    uVar21 = uVar7 & 0xffffffff;
                                    iVar3 = uVar7;
                                    if (iVar3 < 0) {
                                        _dev_err(piVar19,"%02x invalid pre-scaling <%d %d>\n",uStack_84,
                                                 uStack_90 & 0xffffffff,uStack_90._4_4_);
                                        param_1 = piVar19;
                                        goto code_r0x08004db8;
                                    }
                                }
                                *(piVar16 + -0xd) = iVar3;
                                iVar3 = of_property_read_variable_u32_array
                                                  (piVar10,"qcom,hw-settle-time",&uStack_88,1,0);
                                if ((iVar3 < 0) || (puVar12 = *(pcVar13 + 0x28), *puVar12 == uStack_88)) {
                                    uVar2 = 0;
                                }
                                else if (puVar12[1] == uStack_88) {
                                    uVar2 = 1;
                                }
                                else if (puVar12[2] == uStack_88) {
                                    uVar2 = 2;
                                }
                                else if (puVar12[3] == uStack_88) {
                                    uVar2 = 3;
                                }
                                else if (puVar12[4] == uStack_88) {
                                    uVar2 = 4;
                                }
                                else if (puVar12[5] == uStack_88) {
                                    uVar2 = 5;
                                }
                                else if (puVar12[6] == uStack_88) {
                                    uVar2 = 6;
                                }
                                else if (puVar12[7] == uStack_88) {
                                    uVar2 = 7;
                                }
                                else if (puVar12[8] == uStack_88) {
                                    uVar2 = 8;
                                }
                                else if (puVar12[9] == uStack_88) {
                                    uVar2 = 9;
                                }
                                else if (puVar12[10] == uStack_88) {
                                    uVar2 = 10;
                                }
                                else if (puVar12[0xb] == uStack_88) {
                                    uVar2 = 0xb;
                                }
                                else if (puVar12[0xc] == uStack_88) {
                                    uVar2 = 0xc;
                                }
                                else if (puVar12[0xd] == uStack_88) {
                                    uVar2 = 0xd;
                                }
                                else if (puVar12[0xe] == uStack_88) {
                                    uVar2 = 0xe;
                                }
                                else {
                                    if (puVar12[0xf] != uStack_88) goto code_r0x08004e04;
                                    uVar2 = 0xf;
                                }
                                *(piVar16 + -100) = uVar2;
                                iVar3 = of_property_read_variable_u32_array
                                                  (piVar10,"qcom,avg-samples",&uStack_88,1,0);
                                if (iVar3 < 0) {
                                    uVar2 = 0;
                                }
                                else {
                                    uVar21 = uStack_88;
                                    if (((uStack_88 == 0) || (0x10 < uStack_88)) ||
                                       (uVar7 = uVar21 - (uStack_88 >> 1 & 0x5555555555555555),
                                       uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333),
                                       1 < (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
                                        _dev_err(piVar19,"%02x invalid avg-samples %d\n",uStack_84);
                                        uVar21 = 0xffffffea;
                                        param_1 = piVar19;
                                        goto code_r0x08004db8;
                                    }
                                    uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
                                    uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
                                    uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
                                    uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
                                    uVar2 = LZCOUNT((uVar21 >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10) << 0x20);
                                }
                                *(piVar16 + -0xc) = uVar2;
                                *(piVar16 + -0xb) = 0xffffffea;
                                iVar3 = of_property_read_variable_u32_array
                                                  (piVar10,"qcom,scale-fn-type",&uStack_88,1,0);
                                if ((-1 < iVar3) && (uStack_88 < 0x1a)) {
                                    *(piVar16 + -0xb) = uStack_88;
                                }
                                iVar5 = of_find_property(piVar10,"qcom,ratiometric",0);
                                uVar2 = 1;
                                *(piVar16 + -7) = 1;
                                if (iVar5 == 0) {
                                    uVar2 = 2;
                                }
                                *(piVar16 + -8) = 0;
                                *(piVar16 + -0x74) = uVar2;
                                iVar3 = of_property_read_variable_u32_array
                                                  (piVar10,"qcom,adc-tm-type",&uStack_88,1,0);
                                if ((iVar3 < 0) || (3 < uStack_88)) {
                                    uVar4 = *(piVar16 + -8);
                                }
                                else {
                                    *(piVar16 + -8) = uStack_88;
                                    uVar4 = uStack_88;
                                }
                                if (uVar4 == 3) {
                                    piVar19 = piVar16 + 9;
                                    iVar3 = of_property_read_variable_u32_array
                                                      (piVar10,"qcom,rscale-type",piVar19,1,0);
                                    if (iVar3 < 0) {
                                        *piVar19 = 1;
                                    }
                                }
                                uVar4 = *(piVar16 + -8);
                                if ((uVar4 | 2) != 2) {
                                    uVar1 = unaff_x19[0x12] + 1;
                                    *(unaff_x19 + 0x12) = uVar1;
                                    if (*(unaff_x19 + 0x1c) * 8 - 1U < uVar1) {
                                        _printk(0x80003b5);
                                        uVar21 = 0xffffffea;
                                        param_1 = piVar19;
                                        goto code_r0x08004db8;
                                    }
                                    *(piVar16 + -0x5c) = uVar1 >> 3;
                                    *(piVar16 + -0x3c) = uVar1 & 7;
                                    *(piVar16 + -7) = 4;
                                    if (uVar4 == 3) {
                                        iVar5 = alloc_workqueue("adc_tm_notify_wq",0x10,0);
                                        *piVar16 = iVar5;
                                        if (iVar5 == 0) {
                                            _printk(0x80005c6);
                                            uVar21 = 0xfffffff4;
                                            param_1 = piVar19;
                                            goto code_r0x08004db8;
                                        }
                                        piVar16[1] = 0xfffffffe0;
                                        piVar16[2] = piVar16 + 2;
                                        piVar16[3] = piVar16 + 2;
                                        piVar16[4] = sym.notify_adc_tm_fn.cfi_jt;
                                    }
                                    piVar16[7] = piVar16 + 7;
                                    piVar16[8] = piVar16 + 7;
                                }
                                piVar16[-9] = unaff_x19;
                                if (piVar16[-0xb] == -0x16) {
                                    uVar21 = *(piVar16 + -0xf);
                                    *(piVar16 + -0xb) = *(*(pcVar13 + 0x10) + uVar21 * 0x20 + 0x18);
                                }
                                else {
                                    uVar21 = *(piVar16 + -0xf);
                                }
                                iVar5 = *(pcVar13 + 0x10);
                                puVar14[1] = uVar21;
                                iVar5 = iVar5 + uVar21 * 0x20;
                                *(puVar14 + 0x22) = piVar16[-10];
                                *(puVar14 + 0x20) = piVar16[-10];
                                uVar21 = uVar18;
                                uVar18 = uVar18 + 1;
                                *(puVar14 + 10) = *(iVar5 + 0x10);
                                uVar2 = *(iVar5 + 0xc);
                                *(puVar14 + 4) = uVar21;
                                *puVar14 = uVar2;
                                piVar10 = of_get_next_available_child(iVar17,piVar10);
                                piVar16 = piVar16 + 0x19;
                                puVar14 = puVar14 + 0x26;
                            } while (piVar10 != NULL);
                        }
                        if (unaff_x19[4] != 0) {
                            uVar18 = 0;
                            do {
                                iVar5 = unaff_x19[2] + uVar18 * 0x18;
                                uVar21 = devm_request_threaded_irq
                                                   (piVar20,*(iVar5 + 0x10),
                                                    sym.adc5_gen3_isr.0ad87e129b42622404d2c68837efd3ea.cfi_jt,0,0,
                                                    *(iVar5 + 8),unaff_x19);
                                if (uVar21 < 0) {
                                    uVar21 = uVar21 & 0xffffffff;
                                    goto code_r0x08004dc4;
                                }
                                uVar18 = uVar18 + 1;
                            } while (uVar18 < *(unaff_x19 + 4));
                        }
                        uVar7 = *(unaff_x19 + 0x24);
                        if (*(unaff_x19 + 0x24) != 0) {
                            iVar5 = 0;
                            uVar15 = 0;
                            do {
                                iVar9 = unaff_x19[5];
                                puVar12 = iVar9 + iVar5;
                                if (3 < puVar12[0xe]) {
                                    _printk(0x8000633);
                                    uVar21 = 0xffffffea;
                                    goto code_r0x08004dc4;
                                }
                                uVar21 = 0;
                                pcVar13 = obj.adc_tm_ops;
                                switch(puVar12[0xe]) {
                                case 0:
                                    goto code_r0x08004b5c;
                                case 2:
                                    pcVar13 = reloc.adc_tm_gen3_get_temp.cfi_jt;
                                    break;
                                case 3:
                                    goto code_r0x08004b4c;
                                }
                                uVar21 = devm_thermal_zone_of_sensor_register
                                                   (unaff_x19[1],*puVar12 | puVar12[3] << 8,iVar9 + iVar5,pcVar13);
                                if (0xfffffffffffff000 < uVar21) {
                                    _printk(0x80008ec,uVar21,*(unaff_x19[5] + iVar5));
                                    if (uVar21 < 0) goto code_r0x08004dc4;
                                    break;
                                }
                                iVar9 = unaff_x19[5];
code_r0x08004b4c:
                                *(iVar9 + iVar5 + 0x48) = uVar21;
                                uVar7 = *(unaff_x19 + 0x24);
code_r0x08004b5c:
                                uVar15 = uVar15 + 1;
                                iVar5 = iVar5 + 200;
                            } while (uVar15 < uVar7);
                        }
                        iVar5 = thermal_minidump_register("adc5_gen3");
                        unaff_x19[0x1c] = iVar5;
                        if (unaff_x19[0x12] != 0) {
                            unaff_x19[0x16] = 0xfffffffe0;
                            unaff_x19[0x17] = unaff_x19 + 0x17;
                            unaff_x19[0x18] = unaff_x19 + 0x17;
                            unaff_x19[0x19] = sym.tm_handler_work.0ad87e129b42622404d2c68837efd3ea.cfi_jt;
                        }
                        *(puVar6 + 0x1a) = piVar20;
                        *(puVar6 + 0xbe) = iVar17;
                        piVar19 = unaff_x19 + 0x13;
                        iVar5 = *param_1;
                        *puVar6 = 1;
                        piVar10 = *0x8000078;
                        *(puVar6 + 0x108) = iVar5;
                        *(puVar6 + 0x104) = unaff_x19[6];
                        puVar6[0x106] = *(unaff_x19 + 0x24);
                        uVar21 = __list_add_valid(piVar19,piVar10,obj.adc_tm_device_list);
                        if ((uVar21 & 1) != 0) {
                            *0x8000078 = piVar19;
                            unaff_x19[0x13] = obj.adc_tm_device_list;
                            unaff_x19[0x14] = piVar10;
                            *piVar10 = piVar19;
                        }
                        unaff_x19[0x15] = obj.adc_tm_device_list;
                        uVar21 = __devm_iio_device_register(piVar20,puVar6,obj.__this_module);
                        uVar21 = uVar21 & 0xffffffff;
                        piVar19 = piVar20;
                        goto code_r0x0800454c;
                    }
                }
                uVar21 = 0xfffffff4;
                goto code_r0x08004db8;
            }
        }
code_r0x08004548:
        uVar21 = 0xfffffff4;
    }
code_r0x0800454c:
    while (iVar5 = sp_el0, *(iVar5 + 0x5e0) != iStack_68) {
        __stack_chk_fail();
code_r0x08004e04:
        pcVar11 = "%02x invalid hw-settle-time %d us\n";
code_r0x08004dac:
        _dev_err(piVar19,pcVar11,uStack_84);
        uVar21 = 0xfffffffe;
        param_1 = piVar19;
code_r0x08004db8:
        _printk(0x8000577);
        piVar20 = param_1;
code_r0x08004dc4:
        uVar18 = *(unaff_x19 + 0x24);
        piVar19 = piVar20;
        if (uVar18 != 0) {
            uVar4 = 0;
            do {
                if (*(unaff_x19[5] + uVar4 * 200 + 0x78) != 0) {
                    destroy_workqueue();
                    uVar18 = *(unaff_x19 + 0x24);
                }
                uVar4 = uVar4 + 1;
            } while (uVar4 < uVar18);
        }
    }
    return uVar21 & 0xffffffff;
}


// ===== sym.get_adc_tm_gen3.cfi_jt @ 0x08003328 (size 8) =====

void sym.get_adc_tm_gen3.cfi_jt(int64_t param_1,ulong param_2)

{
    int iVar1;
    int64_t iVar2;
    code *pcVar3;
    int64_t iVar4;
    int64_t *piVar5;
    uint uVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    scnprintf(&uStack_48,0x20,"qcom,%s-adc_tm",param_2);
    iVar2 = of_parse_phandle(*(param_1 + 0x2f0),&uStack_48,0);
    pcVar3 = _obj.adc_tm_device_list;
    if (iVar2 == 0) {
        pcVar3 = 0xffffffffffffffed;
    }
    else {
        for (; pcVar3 != obj.adc_tm_device_list; pcVar3 = *pcVar3) {
            if (*(*(pcVar3 + -0x90) + 0x2f0) == iVar2) {
                pcVar3 = pcVar3 + -0x98;
                goto code_r0x08003844;
            }
        }
        pcVar3 = 0xfffffffffffffdfb;
    }
code_r0x08003844:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_28) {
        iVar4 = __stack_chk_fail(pcVar3);
        *extraout_x18 = sym.notify_adc_tm_fn;
        iVar2 = *(iVar4 + -0x50) + 0x58;
        mutex_lock(iVar2);
        if (*(iVar4 + -0x27) != '\0') {
            for (piVar5 = *(iVar4 + 0x30); piVar5 != iVar4 + 0x30; piVar5 = *piVar5) {
                if (*(piVar5 + 0x23) != '\0') {
                    *(piVar5 + 0x23) = 0;
                    *(piVar5 + 4) = 1;
                    *(piVar5 + 0x24) = (*(piVar5 + 0x24) != 2) << 2;
                }
            }
            *(iVar4 + -0x27) = 0;
        }
        if (*(iVar4 + -0x28) != '\0') {
            for (piVar5 = *(iVar4 + 0x30); piVar5 != iVar4 + 0x30; piVar5 = *piVar5) {
                if (*(piVar5 + 0x22) != '\0') {
                    *(piVar5 + 0x21) = 1;
                    uVar6 = 3;
                    if (*(piVar5 + 0x24) == 2) {
                        uVar6 = 1;
                    }
                    *(piVar5 + 0x24) = uVar6;
                }
            }
            *(iVar4 + -0x28) = 0;
        }
        iVar1 = sym.adc_tm_gen3_manage_thresholds(iVar4 + -0x80);
        if (iVar1 < 0) {
            _printk(0x8000251,iVar1);
        }
        iVar1 = sym.adc_tm5_gen3_configure(iVar4 + -0x80);
        if (iVar1 < 0) {
            _printk(0x8000450,iVar1);
        }
        mutex_unlock(iVar2);
        for (piVar5 = *(iVar4 + 0x30); piVar5 != iVar4 + 0x30; piVar5 = *piVar5) {
            if ((*(piVar5 + 4) != '\0') && (pcVar3 = *(piVar5[2] + 0x20), pcVar3 != NULL)) {
                __cfi_slowpath_diag(0x3b021bf9e6b1ea36,pcVar3,0x8000200);
                (*pcVar3)(1,*(piVar5[2] + 0x18));
                *(piVar5 + 4) = 0;
            }
            if ((*(piVar5 + 0x21) != '\0') && (pcVar3 = *(piVar5[2] + 0x20), pcVar3 != NULL)) {
                __cfi_slowpath_diag(0x3b021bf9e6b1ea36,pcVar3,0x8000220);
                (*pcVar3)(0,*(piVar5[2] + 0x18));
                *(piVar5 + 0x21) = 0;
            }
        }
        return;
    }
    return;
}


// ===== sym.adc_tm_gen3_get_temp @ 0x08003330 (size 248) =====

code * sym.adc_tm_gen3_get_temp(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    int iVar4;
    ulong *arg1_00;
    ulong uVar5;
    int64_t iVar6;
    uint *puVar7;
    ulong uVar8;
    int16_t *in_x2;
    ulong uVar9;
    int64_t *piVar10;
    uint uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    code *pcVar12;
    int64_t iVar13;
    code *pcVar14;
    uint64_t uVar15;
    ulong unaff_x30;
    uchar auVar16 [16];
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    int64_t iStack_d8;
    uchar **ppuStack_d0;
    code *pcStack_c8;
    ulong *puStack_c0;
    uchar auStack_a8 [4];
    uchar auStack_a4 [4];
    uint8_t uStack_a0;
    uchar uStack_9f;
    uchar uStack_9e;
    uint8_t uStack_9d;
    uint8_t uStack_9c;
    uchar uStack_9b;
    uint8_t uStack_9a;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    int16_t aiStack_3c [2];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iStack_38 = *(iVar13 + 0x5e0);
    aiStack_3c[0] = 0;
    if ((arg1 == 0) || (iVar13 = *(arg1 + 0x30), iVar13 == 0)) {
        pcVar12 = 0xffffffea;
    }
    else if (*(arg1 + 0x74) == '\0') {
        in_x2 = aiStack_3c;
        uVar3 = sym.adc5_gen3_do_conversion(iVar13,arg1,in_x2);
        if (uVar3 < 0) {
            pcVar12 = uVar3;
        }
        else {
            in_x2 = *(iVar13 + 0x88);
            uVar15 = qcom_adc5_hw_scale(*(arg1 + 0x20),*(arg1 + 0x10),in_x2,aiStack_3c[0],arg2);
            pcVar12 = uVar15 & 0xffffffff;
            iVar13 = *(*(arg1 + 0x30) + 0xe0);
            if ((iVar13 != 0) && (*(arg1 + 0x48) != 0)) {
                thermal_minidump_update_data(iVar13,*(arg1 + 0x48) + 4);
                in_x2 = arg2;
            }
        }
    }
    else {
        pcVar12 = NULL;
        *(arg1 + 0x74) = 0;
        *arg2 = *(arg1 + 0x70);
    }
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_38) {
        return pcVar12;
    }
    auVar16 = __stack_chk_fail();
    puVar7 = auVar16._8_8_;
    arg1_00 = auVar16._0_8_;
    *extraout_x18 = sym.adc5_gen3_do_conversion;
    pcStack_88 = sym.adc5_gen3_do_conversion;
    iVar13 = sp_el0;
    puVar1 = arg1_00 + 0xb;
    iStack_98 = *(iVar13 + 0x5e0);
    uVar2 = *(puVar7 + 7);
    auStack_a8[0] = 0;
    iVar4 = puVar7[0xe];
    puStack_90 = &stack0xffffffffffffffd0;
    mutex_lock(puVar1);
    uVar3 = sym.adc5_gen3_poll_wait_hs(arg1_00,0);
    if (uVar3 < 0) {
        pcVar12 = uVar3;
        goto code_r0x0800375c;
    }
    uStack_9c = 0;
    uStack_9b = 0;
    uStack_9a = 0;
    uStack_a0 = 0;
    uStack_9f = 0;
    uStack_9e = 0;
    uStack_9d = 0;
    uVar3 = *(puVar7 + 7);
    if (puVar7[0xe] != 0) {
        uVar3 = 0;
    }
    uVar15 = uVar3;
    uVar3 = regmap_bulk_read(*arg1_00,*(arg1_00[2] + uVar15 * 0x18) + 0x4f,&uStack_a0,7);
    if (uVar3 < 0) {
        uVar5 = 0x800033a;
code_r0x080036a8:
        uVar8 = 0x4f;
        uVar9 = 7;
    }
    else {
        uStack_a0 = *(puVar7 + 3) & 0xf;
        uStack_9f = 0x80;
        uStack_9e = 1;
        uStack_9d = uStack_9d & 0xc3 | *(puVar7 + 1) << 4 | *(puVar7 + 2) << 2;
        uStack_9c = uStack_9c & 0x78 | *(puVar7 + 6) | 0x80;
        uStack_9a = uStack_9a & 0xf0 | *(puVar7 + 5);
        uStack_9b = *puVar7;
        *(arg1_00 + 7) = 0;
        uVar3 = regmap_bulk_write(*arg1_00,*(arg1_00[2] + uVar15 * 0x18) + 0x4f,&uStack_a0,7);
        if (uVar3 < 0) {
            uVar5 = 0x8000715;
            goto code_r0x080036a8;
        }
        auStack_a4[0] = 1;
        uVar3 = regmap_bulk_write(*arg1_00,*(arg1_00[2] + uVar15 * 0x18) + 0xe5,auStack_a4,1);
        if (-1 < uVar3) {
            iVar13 = wait_for_completion_timeout(arg1_00 + 7,0x7e);
            if (iVar13 == 0) {
                _printk(0x80007b4,*(puVar7 + 10));
                pcVar12 = 0xffffff92;
            }
            else {
                jiffies_to_msecs();
                uVar3 = uVar2;
                if (iVar4 != 0) {
                    uVar3 = 0;
                }
                uVar15 = uVar3;
                uStack_a0 = 0;
                uStack_9f = 0;
                uVar3 = regmap_bulk_read(*arg1_00,*(arg1_00[2] + uVar15 * 0x18) + 0x5c,&uStack_a0,2);
                if (uVar3 < 0) {
                    pcVar12 = uVar3;
                    uVar5 = 0x800033a;
                    uVar8 = 0x5c;
                    uVar9 = 2;
                }
                else {
                    *in_x2 = CONCAT11(uStack_9f,uStack_a0);
                    if (CONCAT11(uStack_9f,uStack_a0) == -0x8000) {
                        _printk(0x8000696,0x8000);
                        pcVar12 = 0xffffffea;
                        goto code_r0x0800375c;
                    }
                    auStack_a8[0] = 1;
                    uVar3 = regmap_bulk_write(*arg1_00,*(arg1_00[2] + uVar15 * 0x18) + 0x4b,auStack_a8,1);
                    if (uVar3 < 0) {
                        pcVar12 = uVar3;
                        uVar8 = 0x4b;
                    }
                    else {
                        auStack_a8[0] = 0;
                        uVar3 = regmap_bulk_write(*arg1_00,*(arg1_00[2] + uVar15 * 0x18) + 0x50,auStack_a8,1);
                        if (uVar3 < 0) {
                            pcVar12 = uVar3;
                            uVar8 = 0x50;
                        }
                        else {
                            auStack_a8[0] = 1;
                            uVar3 = regmap_bulk_write(*arg1_00,*(arg1_00[2] + uVar15 * 0x18) + 0xe5,auStack_a8,1);
                            pcVar12 = uVar3;
                            if (-1 < uVar3) goto code_r0x0800375c;
                            uVar8 = 0xe5;
                        }
                    }
                    uVar5 = 0x8000715;
                    uVar9 = 1;
                }
                _printk(uVar5,uVar8,uVar9,pcVar12);
            }
            goto code_r0x0800375c;
        }
        uVar5 = 0x8000715;
        uVar8 = 0xe5;
        uVar9 = 1;
    }
    pcVar12 = uVar3;
    _printk(uVar5,uVar8,uVar9,pcVar12);
    _printk(0x80006eb,pcVar12);
code_r0x0800375c:
    mutex_unlock(puVar1);
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_98) {
        return pcVar12;
    }
    auVar16 = __stack_chk_fail();
    *extraout_x18_00 = sym.get_adc_tm_gen3;
    pcStack_c8 = sym.get_adc_tm_gen3;
    iVar13 = sp_el0;
    iStack_d8 = *(iVar13 + 0x5e0);
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    ppuStack_d0 = &puStack_90;
    puStack_c0 = puVar1;
    scnprintf(&uStack_f8,0x20,"qcom,%s-adc_tm",auVar16._8_8_);
    iVar13 = of_parse_phandle(*(auVar16._0_8_ + 0x2f0),&uStack_f8,0);
    pcVar12 = _obj.adc_tm_device_list;
    if (iVar13 == 0) {
        pcVar12 = 0xffffffffffffffed;
    }
    else {
        for (; pcVar12 != obj.adc_tm_device_list; pcVar12 = *pcVar12) {
            if (*(*(pcVar12 + -0x90) + 0x2f0) == iVar13) {
                pcVar12 = pcVar12 + -0x98;
                goto code_r0x08003844;
            }
        }
        pcVar12 = 0xfffffffffffffdfb;
    }
code_r0x08003844:
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) != iStack_d8) {
        iVar6 = __stack_chk_fail(pcVar12);
        *extraout_x18_01 = sym.notify_adc_tm_fn;
        iVar13 = *(iVar6 + -0x50) + 0x58;
        mutex_lock(iVar13);
        if (*(iVar6 + -0x27) != '\0') {
            for (piVar10 = *(iVar6 + 0x30); piVar10 != iVar6 + 0x30; piVar10 = *piVar10) {
                if (*(piVar10 + 0x23) != '\0') {
                    *(piVar10 + 0x23) = 0;
                    *(piVar10 + 4) = 1;
                    *(piVar10 + 0x24) = (*(piVar10 + 0x24) != 2) << 2;
                }
            }
            *(iVar6 + -0x27) = 0;
        }
        if (*(iVar6 + -0x28) != '\0') {
            for (piVar10 = *(iVar6 + 0x30); piVar10 != iVar6 + 0x30; piVar10 = *piVar10) {
                if (*(piVar10 + 0x22) != '\0') {
                    *(piVar10 + 0x21) = 1;
                    uVar11 = 3;
                    if (*(piVar10 + 0x24) == 2) {
                        uVar11 = 1;
                    }
                    *(piVar10 + 0x24) = uVar11;
                }
            }
            *(iVar6 + -0x28) = 0;
        }
        iVar4 = sym.adc_tm_gen3_manage_thresholds(iVar6 + -0x80);
        if (iVar4 < 0) {
            _printk(0x8000251,iVar4);
        }
        iVar4 = sym.adc_tm5_gen3_configure(iVar6 + -0x80);
        if (iVar4 < 0) {
            _printk(0x8000450,iVar4);
        }
        pcVar12 = mutex_unlock(iVar13);
        for (piVar10 = *(iVar6 + 0x30); piVar10 != iVar6 + 0x30; piVar10 = *piVar10) {
            if ((*(piVar10 + 4) != '\0') && (pcVar14 = *(piVar10[2] + 0x20), pcVar14 != NULL)) {
                __cfi_slowpath_diag(0x3b021bf9e6b1ea36,pcVar14,0x8000200);
                pcVar12 = (*pcVar14)(1,*(piVar10[2] + 0x18));
                *(piVar10 + 4) = 0;
            }
            if ((*(piVar10 + 0x21) != '\0') && (pcVar14 = *(piVar10[2] + 0x20), pcVar14 != NULL)) {
                __cfi_slowpath_diag(0x3b021bf9e6b1ea36,pcVar14,0x8000220);
                pcVar12 = (*pcVar14)(0,*(piVar10[2] + 0x18));
                *(piVar10 + 0x21) = 0;
            }
        }
        return pcVar12;
    }
    return pcVar12;
}


// ===== sym.adc5_gen3_do_conversion @ 0x08003428 (size 892) =====

code * sym.adc5_gen3_do_conversion(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    ulong uVar5;
    int64_t iVar6;
    ulong uVar7;
    ulong uVar8;
    int64_t *piVar9;
    uint uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    code *pcVar11;
    code *pcVar12;
    uint64_t uVar13;
    ulong unaff_x30;
    uchar auVar14 [16];
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    int64_t iStack_80;
    uchar auStack_68 [4];
    uchar auStack_64 [4];
    uint8_t uStack_60;
    uchar uStack_5f;
    uchar uStack_5e;
    uint8_t uStack_5d;
    uint8_t uStack_5c;
    uchar uStack_5b;
    uint8_t uStack_5a;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iVar6 = arg1 + 0x58;
    iStack_58 = *(iVar4 + 0x5e0);
    uVar1 = *(arg2 + 0x1c);
    auStack_68[0] = 0;
    iVar3 = *(arg2 + 0x38);
    mutex_lock(iVar6);
    uVar2 = sym.adc5_gen3_poll_wait_hs(arg1,0);
    if (uVar2 < 0) {
        pcVar11 = uVar2;
        goto code_r0x0800375c;
    }
    uStack_5c = 0;
    uStack_5b = 0;
    uStack_5a = 0;
    uStack_60 = 0;
    uStack_5f = 0;
    uStack_5e = 0;
    uStack_5d = 0;
    uVar2 = *(arg2 + 0x1c);
    if (*(arg2 + 0x38) != 0) {
        uVar2 = 0;
    }
    uVar13 = uVar2;
    uVar2 = regmap_bulk_read(*arg1,*(*(arg1 + 0x10) + uVar13 * 0x18) + 0x4f,&uStack_60,7);
    if (uVar2 < 0) {
        uVar5 = 0x800033a;
code_r0x080036a8:
        uVar7 = 0x4f;
        uVar8 = 7;
    }
    else {
        uStack_60 = *(arg2 + 0xc) & 0xf;
        uStack_5f = 0x80;
        uStack_5e = 1;
        uStack_5d = uStack_5d & 0xc3 | *(arg2 + 4) << 4 | *(arg2 + 8) << 2;
        uStack_5c = uStack_5c & 0x78 | *(arg2 + 0x18) | 0x80;
        uStack_5a = uStack_5a & 0xf0 | *(arg2 + 0x14);
        uStack_5b = *arg2;
        *(arg1 + 0x38) = 0;
        uVar2 = regmap_bulk_write(*arg1,*(*(arg1 + 0x10) + uVar13 * 0x18) + 0x4f,&uStack_60,7);
        if (uVar2 < 0) {
            uVar5 = 0x8000715;
            goto code_r0x080036a8;
        }
        auStack_64[0] = 1;
        uVar2 = regmap_bulk_write(*arg1,*(*(arg1 + 0x10) + uVar13 * 0x18) + 0xe5,auStack_64,1);
        if (-1 < uVar2) {
            iVar4 = wait_for_completion_timeout(arg1 + 0x38,0x7e);
            if (iVar4 == 0) {
                _printk(0x80007b4,*(arg2 + 0x28));
                pcVar11 = 0xffffff92;
            }
            else {
                jiffies_to_msecs();
                uVar2 = uVar1;
                if (iVar3 != 0) {
                    uVar2 = 0;
                }
                uVar13 = uVar2;
                uStack_60 = 0;
                uStack_5f = 0;
                uVar2 = regmap_bulk_read(*arg1,*(*(arg1 + 0x10) + uVar13 * 0x18) + 0x5c,&uStack_60,2);
                if (uVar2 < 0) {
                    pcVar11 = uVar2;
                    uVar5 = 0x800033a;
                    uVar7 = 0x5c;
                    uVar8 = 2;
                }
                else {
                    *arg3 = CONCAT11(uStack_5f,uStack_60);
                    if (CONCAT11(uStack_5f,uStack_60) == -0x8000) {
                        _printk(0x8000696,0x8000);
                        pcVar11 = 0xffffffea;
                        goto code_r0x0800375c;
                    }
                    auStack_68[0] = 1;
                    uVar2 = regmap_bulk_write(*arg1,*(*(arg1 + 0x10) + uVar13 * 0x18) + 0x4b,auStack_68,1);
                    if (uVar2 < 0) {
                        pcVar11 = uVar2;
                        uVar7 = 0x4b;
                    }
                    else {
                        auStack_68[0] = 0;
                        uVar2 = regmap_bulk_write(*arg1,*(*(arg1 + 0x10) + uVar13 * 0x18) + 0x50,auStack_68,1);
                        if (uVar2 < 0) {
                            pcVar11 = uVar2;
                            uVar7 = 0x50;
                        }
                        else {
                            auStack_68[0] = 1;
                            uVar2 = regmap_bulk_write(*arg1,*(*(arg1 + 0x10) + uVar13 * 0x18) + 0xe5,auStack_68,1);
                            pcVar11 = uVar2;
                            if (-1 < uVar2) goto code_r0x0800375c;
                            uVar7 = 0xe5;
                        }
                    }
                    uVar5 = 0x8000715;
                    uVar8 = 1;
                }
                _printk(uVar5,uVar7,uVar8,pcVar11);
            }
            goto code_r0x0800375c;
        }
        uVar5 = 0x8000715;
        uVar7 = 0xe5;
        uVar8 = 1;
    }
    pcVar11 = uVar2;
    _printk(uVar5,uVar7,uVar8,pcVar11);
    _printk(0x80006eb,pcVar11);
code_r0x0800375c:
    mutex_unlock(iVar6);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_58) {
        return pcVar11;
    }
    auVar14 = __stack_chk_fail();
    *extraout_x18 = sym.get_adc_tm_gen3;
    pcStack_88 = sym.get_adc_tm_gen3;
    iVar4 = sp_el0;
    iStack_98 = *(iVar4 + 0x5e0);
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    puStack_90 = &stack0xffffffffffffffb0;
    iStack_80 = iVar6;
    scnprintf(&uStack_b8,0x20,"qcom,%s-adc_tm",auVar14._8_8_);
    iVar6 = of_parse_phandle(*(auVar14._0_8_ + 0x2f0),&uStack_b8,0);
    pcVar11 = _obj.adc_tm_device_list;
    if (iVar6 == 0) {
        pcVar11 = 0xffffffffffffffed;
    }
    else {
        for (; pcVar11 != obj.adc_tm_device_list; pcVar11 = *pcVar11) {
            if (*(*(pcVar11 + -0x90) + 0x2f0) == iVar6) {
                pcVar11 = pcVar11 + -0x98;
                goto code_r0x08003844;
            }
        }
        pcVar11 = 0xfffffffffffffdfb;
    }
code_r0x08003844:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_98) {
        iVar4 = __stack_chk_fail(pcVar11);
        *extraout_x18_00 = sym.notify_adc_tm_fn;
        iVar6 = *(iVar4 + -0x50) + 0x58;
        mutex_lock(iVar6);
        if (*(iVar4 + -0x27) != '\0') {
            for (piVar9 = *(iVar4 + 0x30); piVar9 != iVar4 + 0x30; piVar9 = *piVar9) {
                if (*(piVar9 + 0x23) != '\0') {
                    *(piVar9 + 0x23) = 0;
                    *(piVar9 + 4) = 1;
                    *(piVar9 + 0x24) = (*(piVar9 + 0x24) != 2) << 2;
                }
            }
            *(iVar4 + -0x27) = 0;
        }
        if (*(iVar4 + -0x28) != '\0') {
            for (piVar9 = *(iVar4 + 0x30); piVar9 != iVar4 + 0x30; piVar9 = *piVar9) {
                if (*(piVar9 + 0x22) != '\0') {
                    *(piVar9 + 0x21) = 1;
                    uVar10 = 3;
                    if (*(piVar9 + 0x24) == 2) {
                        uVar10 = 1;
                    }
                    *(piVar9 + 0x24) = uVar10;
                }
            }
            *(iVar4 + -0x28) = 0;
        }
        iVar3 = sym.adc_tm_gen3_manage_thresholds(iVar4 + -0x80);
        if (iVar3 < 0) {
            _printk(0x8000251,iVar3);
        }
        iVar3 = sym.adc_tm5_gen3_configure(iVar4 + -0x80);
        if (iVar3 < 0) {
            _printk(0x8000450,iVar3);
        }
        pcVar11 = mutex_unlock(iVar6);
        for (piVar9 = *(iVar4 + 0x30); piVar9 != iVar4 + 0x30; piVar9 = *piVar9) {
            if ((*(piVar9 + 4) != '\0') && (pcVar12 = *(piVar9[2] + 0x20), pcVar12 != NULL)) {
                __cfi_slowpath_diag(0x3b021bf9e6b1ea36,pcVar12,0x8000200);
                pcVar11 = (*pcVar12)(1,*(piVar9[2] + 0x18));
                *(piVar9 + 4) = 0;
            }
            if ((*(piVar9 + 0x21) != '\0') && (pcVar12 = *(piVar9[2] + 0x20), pcVar12 != NULL)) {
                __cfi_slowpath_diag(0x3b021bf9e6b1ea36,pcVar12,0x8000220);
                pcVar11 = (*pcVar12)(0,*(piVar9[2] + 0x18));
                *(piVar9 + 0x21) = 0;
            }
        }
        return pcVar11;
    }
    return pcVar11;
}


// ===== sym.get_adc_tm_gen3 @ 0x080037a4 (size 208) =====

void sym.get_adc_tm_gen3(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    code *pcVar3;
    int64_t iVar4;
    int64_t *piVar5;
    uint uVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    scnprintf(&uStack_48,0x20,"qcom,%s-adc_tm",arg2);
    iVar2 = of_parse_phandle(*(arg1 + 0x2f0),&uStack_48,0);
    pcVar3 = _obj.adc_tm_device_list;
    if (iVar2 == 0) {
        pcVar3 = 0xffffffffffffffed;
    }
    else {
        for (; pcVar3 != obj.adc_tm_device_list; pcVar3 = *pcVar3) {
            if (*(*(pcVar3 + -0x90) + 0x2f0) == iVar2) {
                pcVar3 = pcVar3 + -0x98;
                goto code_r0x08003844;
            }
        }
        pcVar3 = 0xfffffffffffffdfb;
    }
code_r0x08003844:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_28) {
        iVar4 = __stack_chk_fail(pcVar3);
        *extraout_x18 = sym.notify_adc_tm_fn;
        iVar2 = *(iVar4 + -0x50) + 0x58;
        mutex_lock(iVar2);
        if (*(iVar4 + -0x27) != '\0') {
            for (piVar5 = *(iVar4 + 0x30); piVar5 != iVar4 + 0x30; piVar5 = *piVar5) {
                if (*(piVar5 + 0x23) != '\0') {
                    *(piVar5 + 0x23) = 0;
                    *(piVar5 + 4) = 1;
                    *(piVar5 + 0x24) = (*(piVar5 + 0x24) != 2) << 2;
                }
            }
            *(iVar4 + -0x27) = 0;
        }
        if (*(iVar4 + -0x28) != '\0') {
            for (piVar5 = *(iVar4 + 0x30); piVar5 != iVar4 + 0x30; piVar5 = *piVar5) {
                if (*(piVar5 + 0x22) != '\0') {
                    *(piVar5 + 0x21) = 1;
                    uVar6 = 3;
                    if (*(piVar5 + 0x24) == 2) {
                        uVar6 = 1;
                    }
                    *(piVar5 + 0x24) = uVar6;
                }
            }
            *(iVar4 + -0x28) = 0;
        }
        iVar1 = sym.adc_tm_gen3_manage_thresholds(iVar4 + -0x80);
        if (iVar1 < 0) {
            _printk(0x8000251,iVar1);
        }
        iVar1 = sym.adc_tm5_gen3_configure(iVar4 + -0x80);
        if (iVar1 < 0) {
            _printk(0x8000450,iVar1);
        }
        mutex_unlock(iVar2);
        for (piVar5 = *(iVar4 + 0x30); piVar5 != iVar4 + 0x30; piVar5 = *piVar5) {
            if ((*(piVar5 + 4) != '\0') && (pcVar3 = *(piVar5[2] + 0x20), pcVar3 != NULL)) {
                __cfi_slowpath_diag(0x3b021bf9e6b1ea36,pcVar3,0x8000200);
                (*pcVar3)(1,*(piVar5[2] + 0x18));
                *(piVar5 + 4) = 0;
            }
            if ((*(piVar5 + 0x21) != '\0') && (pcVar3 = *(piVar5[2] + 0x20), pcVar3 != NULL)) {
                __cfi_slowpath_diag(0x3b021bf9e6b1ea36,pcVar3,0x8000220);
                (*pcVar3)(0,*(piVar5[2] + 0x18));
                *(piVar5 + 0x21) = 0;
            }
        }
        return;
    }
    return;
}


// ===== sym.notify_adc_tm_fn @ 0x08003874 (size 508) =====

void sym.notify_adc_tm_fn(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    int64_t *piVar3;
    uint uVar4;
    ulong *in_x18;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + -0x50) + 0x58;
    mutex_lock(iVar1);
    if (*(arg1 + -0x27) != '\0') {
        for (piVar3 = *(arg1 + 0x30); piVar3 != arg1 + 0x30; piVar3 = *piVar3) {
            if (*(piVar3 + 0x23) != '\0') {
                *(piVar3 + 0x23) = 0;
                *(piVar3 + 4) = 1;
                *(piVar3 + 0x24) = (*(piVar3 + 0x24) != 2) << 2;
            }
        }
        *(arg1 + -0x27) = 0;
    }
    if (*(arg1 + -0x28) != '\0') {
        for (piVar3 = *(arg1 + 0x30); piVar3 != arg1 + 0x30; piVar3 = *piVar3) {
            if (*(piVar3 + 0x22) != '\0') {
                *(piVar3 + 0x21) = 1;
                uVar4 = 3;
                if (*(piVar3 + 0x24) == 2) {
                    uVar4 = 1;
                }
                *(piVar3 + 0x24) = uVar4;
            }
        }
        *(arg1 + -0x28) = 0;
    }
    iVar2 = sym.adc_tm_gen3_manage_thresholds(arg1 + -0x80);
    if (iVar2 < 0) {
        _printk(0x8000251,iVar2);
    }
    iVar2 = sym.adc_tm5_gen3_configure(arg1 + -0x80);
    if (iVar2 < 0) {
        _printk(0x8000450,iVar2);
    }
    mutex_unlock(iVar1);
    for (piVar3 = *(arg1 + 0x30); piVar3 != arg1 + 0x30; piVar3 = *piVar3) {
        if ((*(piVar3 + 4) != '\0') && (pcVar5 = *(piVar3[2] + 0x20), pcVar5 != NULL)) {
            __cfi_slowpath_diag(0x3b021bf9e6b1ea36,pcVar5,0x8000200);
            (*pcVar5)(1,*(piVar3[2] + 0x18));
            *(piVar3 + 4) = 0;
        }
        if ((*(piVar3 + 0x21) != '\0') && (pcVar5 = *(piVar3[2] + 0x20), pcVar5 != NULL)) {
            __cfi_slowpath_diag(0x3b021bf9e6b1ea36,pcVar5,0x8000220);
            (*pcVar5)(0,*(piVar3[2] + 0x18));
            *(piVar3 + 0x21) = 0;
        }
    }
    return;
}


// ===== sym.adc_tm_gen3_manage_thresholds @ 0x08003a70 (size 376) =====

int sym.adc_tm_gen3_manage_thresholds(int64_t arg1)

{
    uint8_t uVar1;
    uint uVar2;
    uint uVar3;
    bool bVar4;
    uint8_t uVar5;
    int iVar6;
    int iVar7;
    uint *puVar8;
    ulong uVar9;
    int64_t iVar10;
    uint64_t uVar11;
    ulong uVar12;
    ulong uVar13;
    int64_t *piVar14;
    int64_t *piVar15;
    int64_t iVar16;
    int iVar17;
    int64_t *piVar18;
    uint32_t uVar19;
    uint32_t *puVar20;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *puVar21;
    int64_t iVar22;
    ulong unaff_x30;
    uchar auVar23 [16];
    uchar auStack_8c [4];
    ulong uStack_88;
    uint uStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    ulong uStack_40;
    int64_t iStack_38;
    int64_t iStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_28 = *(iVar10 + 0x5e0);
    piVar14 = arg1 + 0xb0;
    piVar15 = *piVar14;
    uStack_40 = 0;
    *(arg1 + 0x50) = 0;
    if (piVar15 == piVar14) {
code_r0x08003b20:
        iVar7 = -0x80000000;
        iVar17 = 0x7fffffff;
    }
    else {
        do {
            *(piVar15 + 0x22) = 0;
            piVar15 = *piVar15;
        } while (piVar15 != piVar14);
        piVar15 = *piVar14;
        if (piVar15 == piVar14) goto code_r0x08003b20;
        iVar7 = -0x80000000;
        iVar17 = 0x7fffffff;
        piVar18 = piVar15;
        do {
            iVar6 = iVar17;
            if (((*(piVar18 + 0x24) | 2) == 2) && (iVar6 = *(piVar18 + 0x1c), iVar17 <= *(piVar18 + 0x1c))) {
                iVar6 = iVar17;
            }
            iVar17 = iVar6;
            iVar6 = iVar7;
            if ((*(piVar18 + 0x24) - 1 < 2) && (iVar6 = piVar18[3], piVar18[3] <= iVar7)) {
                iVar6 = iVar7;
            }
            iVar7 = iVar6;
            piVar18 = *piVar18;
        } while (piVar18 != piVar14);
        do {
            uVar19 = *(piVar15 + 0x24);
            if (((uVar19 | 2) == 2) && (iVar17 == *(piVar15 + 0x1c))) {
                *(arg1 + 0x50) = 1;
                uVar19 = *(piVar15 + 0x24);
                *(piVar15 + 0x22) = 1;
            }
            if ((uVar19 - 1 < 2) && (iVar7 == piVar15[3])) {
                *(arg1 + 0x54) = 1;
                *(piVar15 + 0x23) = 1;
            }
            piVar15 = *piVar15;
        } while (piVar15 != piVar14);
    }
    iStack_38 = iVar17;
    iStack_30 = iVar7;
    if (*(arg1 + 0xc0) == 0) {
        adc_tm_absolute_rthr_gen3(&uStack_40);
        iVar7 = 0;
        *(arg1 + 0x60) = iStack_38;
        *(arg1 + 0x68) = iStack_30;
    }
    else {
        iVar7 = -9;
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_28) {
        return iVar7;
    }
    puVar8 = __stack_chk_fail(iVar7);
    *extraout_x18 = sym.adc_tm5_gen3_configure;
    pcStack_68 = sym.adc_tm5_gen3_configure;
    iVar10 = sp_el0;
    iStack_78 = *(iVar10 + 0x5e0);
    puVar21 = *(puVar8 + 0xc);
    uStack_80 = 0;
    uStack_88 = 0;
    puStack_70 = &stack0xffffffffffffffe0;
    iVar7 = sym.adc5_gen3_poll_wait_hs(puVar21,puVar8[7]);
    if (iVar7 < 0) goto code_r0x08003d90;
    iVar7 = regmap_bulk_read(*puVar21,*(puVar21[2] + puVar8[7] * 0x18) + 0x4f,&uStack_88,0xc);
    if (iVar7 < 0) {
        uVar9 = 0x800033a;
code_r0x08003d80:
        uVar12 = 0x4f;
        uVar13 = 0xc;
    }
    else {
        uVar1 = uStack_88._3_1_ & 0xc3;
        uVar5 = uStack_88._4_1_;
        uStack_88 = CONCAT71(uStack_88._1_7_,*(puVar8 + 3)) & 0xffffffffffffff0f;
        uStack_80 = CONCAT22(*(puVar8 + 0x18),*(puVar8 + 0x1a));
        uStack_88 = CONCAT17(puVar8[0x15] | puVar8[0x14] << 1,
                             CONCAT16(uStack_88._6_1_ & 0xf0 | *(puVar8 + 5),
                                      CONCAT15(*puVar8,CONCAT14(uVar5 & 0x78 | *(puVar8 + 6),
                                                                 CONCAT13(uVar1 | *(puVar8 + 1) << 4 |
                                                                          *(puVar8 + 2) << 2,
                                                                          CONCAT12(puVar8[0x10],
                                                                                   CONCAT11(*(puVar8 + 0xf),uStack_88))
                                                                         ))))) | 0x8000008000;
        iVar7 = regmap_bulk_write(*puVar21,*(puVar21[2] + puVar8[7] * 0x18) + 0x4f,&uStack_88,0xc);
        if (iVar7 < 0) {
            uVar9 = 0x8000715;
            goto code_r0x08003d80;
        }
        auStack_8c[0] = 1;
        iVar7 = regmap_bulk_write(*puVar21,*(puVar21[2] + puVar8[7] * 0x18) + 0xe5,auStack_8c,1);
        if (-1 < iVar7) goto code_r0x08003d90;
        uVar12 = 0xe5;
        uVar9 = 0x8000715;
        uVar13 = 1;
    }
    _printk(uVar9,uVar12,uVar13,iVar7);
code_r0x08003d90:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_78) {
        return iVar7;
    }
    auVar23 = __stack_chk_fail();
    piVar14 = auVar23._8_8_;
    iVar10 = auVar23._0_8_;
    *extraout_x18_00 = sym.adc_tm_channel_measure_gen3;
    if ((piVar14 != NULL) && (piVar14[4] != 0)) {
        if (*(iVar10 + 0x24) != 0) {
            iVar22 = 0;
            iVar7 = 0;
            do {
                puVar20 = *(iVar10 + 0x28) + iVar7 * 200;
                if ((*puVar20 | puVar20[3] << 8) == *(piVar14 + 2)) {
                    mutex_lock(iVar10 + 0x58);
                    iVar16 = *(iVar10 + 0x28);
                    piVar18 = iVar16 + iVar22 + 0xb0;
                    piVar15 = *piVar18;
                    if (piVar18 == piVar15) {
code_r0x08003ee4:
                        piVar15 = devm_kmalloc(*(iVar10 + 8),0x28,0xdc0);
                        if (piVar15 != NULL) {
                            *piVar15[2] = piVar15;
                            uVar2 = *(piVar14 + 0xc);
                            uVar3 = *(piVar14 + 0x14);
                            iVar16 = *(iVar10 + 0x28) + iVar22;
                            *(piVar15 + 3) = piVar14[1];
                            *(piVar15 + 0x1c) = uVar2;
                            *(piVar15 + 0x24) = uVar3;
                            puVar21 = *(iVar16 + 0xb8);
                            uVar11 = __list_add_valid(piVar15,puVar21,iVar16 + 0xb0);
                            if ((uVar11 & 1) != 0) {
                                *(iVar16 + 0xb8) = piVar15;
                                *piVar15 = iVar16 + 0xb0;
                                piVar15[1] = puVar21;
                                *puVar21 = piVar15;
                            }
                        }
                    }
                    else {
                        bVar4 = false;
                        do {
                            while (*piVar15[2] != *piVar14) {
                                piVar15 = *piVar15;
                                if (iVar16 + iVar22 + 0xb0 == piVar15) {
                                    if (bVar4) goto code_r0x08003f40;
                                    goto code_r0x08003ee4;
                                }
                            }
                            *(piVar15 + 3) = piVar14[1];
                            *(piVar15 + 0x1c) = *(piVar14 + 0xc);
                            uVar2 = *(piVar14 + 0x14);
                            *(piVar15 + 4) = 0;
                            *(piVar15 + 0x24) = uVar2;
                            piVar15 = *piVar15;
                            iVar16 = *(iVar10 + 0x28);
                            bVar4 = true;
                        } while (iVar16 + iVar22 + 0xb0 != piVar15);
                    }
code_r0x08003f40:
                    iVar7 = sym.adc_tm_gen3_manage_thresholds(*(iVar10 + 0x28) + iVar22);
                    if (iVar7 < 0) {
                        _printk(0x8000251,iVar7);
                    }
                    iVar7 = sym.adc_tm5_gen3_configure(*(iVar10 + 0x28) + iVar22);
                    if (iVar7 < 0) {
                        _printk(0x8000450,iVar7);
                    }
                    mutex_unlock(iVar10 + 0x58);
                    return iVar7;
                }
                iVar7 = iVar7 + 1;
                iVar22 = iVar22 + 200;
            } while (*(iVar10 + 0x24) != iVar7);
        }
        _printk(0x800091a);
    }
    return -0x16;
}


// ===== sym.adc_tm5_gen3_configure @ 0x08003be8 (size 480) =====

int sym.adc_tm5_gen3_configure(int64_t arg1)

{
    uint8_t uVar1;
    uint uVar2;
    uint uVar3;
    bool bVar4;
    uint8_t uVar5;
    int iVar6;
    ulong uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    ulong uVar10;
    int64_t *piVar11;
    ulong uVar12;
    int64_t *piVar13;
    int64_t iVar14;
    int64_t *piVar15;
    uint32_t *puVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar17;
    int64_t iVar18;
    ulong unaff_x30;
    uchar auVar19 [16];
    uchar auStack_4c [4];
    ulong uStack_48;
    uint uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_38 = *(iVar8 + 0x5e0);
    puVar17 = *(arg1 + 0x30);
    uStack_40 = 0;
    uStack_48 = 0;
    iVar6 = sym.adc5_gen3_poll_wait_hs(puVar17,*(arg1 + 0x1c));
    if (iVar6 < 0) goto code_r0x08003d90;
    iVar6 = regmap_bulk_read(*puVar17,*(puVar17[2] + *(arg1 + 0x1c) * 0x18) + 0x4f,&uStack_48,0xc);
    if (iVar6 < 0) {
        uVar7 = 0x800033a;
code_r0x08003d80:
        uVar10 = 0x4f;
        uVar12 = 0xc;
    }
    else {
        uVar1 = uStack_48._3_1_ & 0xc3;
        uVar5 = uStack_48._4_1_;
        uStack_48 = CONCAT71(uStack_48._1_7_,*(arg1 + 0xc)) & 0xffffffffffffff0f;
        uStack_40 = CONCAT22(*(arg1 + 0x60),*(arg1 + 0x68));
        uStack_48 = CONCAT17(*(arg1 + 0x54) | *(arg1 + 0x50) << 1,
                             CONCAT16(uStack_48._6_1_ & 0xf0 | *(arg1 + 0x14),
                                      CONCAT15(*arg1,CONCAT14(uVar5 & 0x78 | *(arg1 + 0x18),
                                                               CONCAT13(uVar1 | *(arg1 + 4) << 4 | *(arg1 + 8) << 2,
                                                                        CONCAT12(*(arg1 + 0x40),
                                                                                 CONCAT11(*(arg1 + 0x3c),uStack_48)))))
                                     )) | 0x8000008000;
        iVar6 = regmap_bulk_write(*puVar17,*(puVar17[2] + *(arg1 + 0x1c) * 0x18) + 0x4f,&uStack_48,0xc);
        if (iVar6 < 0) {
            uVar7 = 0x8000715;
            goto code_r0x08003d80;
        }
        auStack_4c[0] = 1;
        iVar6 = regmap_bulk_write(*puVar17,*(puVar17[2] + *(arg1 + 0x1c) * 0x18) + 0xe5,auStack_4c,1);
        if (-1 < iVar6) goto code_r0x08003d90;
        uVar10 = 0xe5;
        uVar7 = 0x8000715;
        uVar12 = 1;
    }
    _printk(uVar7,uVar10,uVar12,iVar6);
code_r0x08003d90:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_38) {
        return iVar6;
    }
    auVar19 = __stack_chk_fail();
    piVar11 = auVar19._8_8_;
    iVar8 = auVar19._0_8_;
    *extraout_x18 = sym.adc_tm_channel_measure_gen3;
    if ((piVar11 != NULL) && (piVar11[4] != 0)) {
        if (*(iVar8 + 0x24) != 0) {
            iVar18 = 0;
            iVar6 = 0;
            do {
                puVar16 = *(iVar8 + 0x28) + iVar6 * 200;
                if ((*puVar16 | puVar16[3] << 8) == *(piVar11 + 2)) {
                    mutex_lock(iVar8 + 0x58);
                    iVar14 = *(iVar8 + 0x28);
                    piVar15 = iVar14 + iVar18 + 0xb0;
                    piVar13 = *piVar15;
                    if (piVar15 == piVar13) {
code_r0x08003ee4:
                        piVar13 = devm_kmalloc(*(iVar8 + 8),0x28,0xdc0);
                        if (piVar13 != NULL) {
                            *piVar13[2] = piVar13;
                            uVar2 = *(piVar11 + 0xc);
                            uVar3 = *(piVar11 + 0x14);
                            iVar14 = *(iVar8 + 0x28) + iVar18;
                            *(piVar13 + 3) = piVar11[1];
                            *(piVar13 + 0x1c) = uVar2;
                            *(piVar13 + 0x24) = uVar3;
                            puVar17 = *(iVar14 + 0xb8);
                            uVar9 = __list_add_valid(piVar13,puVar17,iVar14 + 0xb0);
                            if ((uVar9 & 1) != 0) {
                                *(iVar14 + 0xb8) = piVar13;
                                *piVar13 = iVar14 + 0xb0;
                                piVar13[1] = puVar17;
                                *puVar17 = piVar13;
                            }
                        }
                    }
                    else {
                        bVar4 = false;
                        do {
                            while (*piVar13[2] != *piVar11) {
                                piVar13 = *piVar13;
                                if (iVar14 + iVar18 + 0xb0 == piVar13) {
                                    if (bVar4) goto code_r0x08003f40;
                                    goto code_r0x08003ee4;
                                }
                            }
                            *(piVar13 + 3) = piVar11[1];
                            *(piVar13 + 0x1c) = *(piVar11 + 0xc);
                            uVar2 = *(piVar11 + 0x14);
                            *(piVar13 + 4) = 0;
                            *(piVar13 + 0x24) = uVar2;
                            piVar13 = *piVar13;
                            iVar14 = *(iVar8 + 0x28);
                            bVar4 = true;
                        } while (iVar14 + iVar18 + 0xb0 != piVar13);
                    }
code_r0x08003f40:
                    iVar6 = sym.adc_tm_gen3_manage_thresholds(*(iVar8 + 0x28) + iVar18);
                    if (iVar6 < 0) {
                        _printk(0x8000251,iVar6);
                    }
                    iVar6 = sym.adc_tm5_gen3_configure(*(iVar8 + 0x28) + iVar18);
                    if (iVar6 < 0) {
                        _printk(0x8000450,iVar6);
                    }
                    mutex_unlock(iVar8 + 0x58);
                    return iVar6;
                }
                iVar6 = iVar6 + 1;
                iVar18 = iVar18 + 200;
            } while (*(iVar8 + 0x24) != iVar6);
        }
        _printk(0x800091a);
    }
    return -0x16;
}


// ===== sym.adc_tm_channel_measure_gen3 @ 0x08003dc8 (size 496) =====

int sym.adc_tm_channel_measure_gen3(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    uint uVar2;
    bool bVar3;
    int iVar4;
    uint64_t uVar5;
    int64_t *piVar6;
    int64_t iVar7;
    int64_t *piVar8;
    uint32_t *puVar9;
    ulong *in_x18;
    ulong *puVar10;
    int64_t iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg2 != 0) && (*(arg2 + 0x20) != 0)) {
        if (*(arg1 + 0x24) != 0) {
            iVar11 = 0;
            iVar4 = 0;
            do {
                puVar9 = *(arg1 + 0x28) + iVar4 * 200;
                if ((*puVar9 | puVar9[3] << 8) == *(arg2 + 0x10)) {
                    mutex_lock(arg1 + 0x58);
                    iVar7 = *(arg1 + 0x28);
                    piVar8 = iVar7 + iVar11 + 0xb0;
                    piVar6 = *piVar8;
                    if (piVar8 == piVar6) {
code_r0x08003ee4:
                        piVar6 = devm_kmalloc(*(arg1 + 8),0x28,0xdc0);
                        if (piVar6 != NULL) {
                            *piVar6[2] = piVar6;
                            uVar1 = *(arg2 + 0xc);
                            uVar2 = *(arg2 + 0x14);
                            iVar7 = *(arg1 + 0x28) + iVar11;
                            *(piVar6 + 3) = *(arg2 + 8);
                            *(piVar6 + 0x1c) = uVar1;
                            *(piVar6 + 0x24) = uVar2;
                            puVar10 = *(iVar7 + 0xb8);
                            uVar5 = __list_add_valid(piVar6,puVar10,iVar7 + 0xb0);
                            if ((uVar5 & 1) != 0) {
                                *(iVar7 + 0xb8) = piVar6;
                                *piVar6 = iVar7 + 0xb0;
                                piVar6[1] = puVar10;
                                *puVar10 = piVar6;
                            }
                        }
                    }
                    else {
                        bVar3 = false;
                        do {
                            while (*piVar6[2] != *arg2) {
                                piVar6 = *piVar6;
                                if (iVar7 + iVar11 + 0xb0 == piVar6) {
                                    if (!bVar3) goto code_r0x08003ee4;
                                    goto code_r0x08003f40;
                                }
                            }
                            *(piVar6 + 3) = *(arg2 + 8);
                            *(piVar6 + 0x1c) = *(arg2 + 0xc);
                            uVar1 = *(arg2 + 0x14);
                            *(piVar6 + 4) = 0;
                            *(piVar6 + 0x24) = uVar1;
                            piVar6 = *piVar6;
                            iVar7 = *(arg1 + 0x28);
                            bVar3 = true;
                        } while (iVar7 + iVar11 + 0xb0 != piVar6);
                    }
code_r0x08003f40:
                    iVar4 = sym.adc_tm_gen3_manage_thresholds(*(arg1 + 0x28) + iVar11);
                    if (iVar4 < 0) {
                        _printk(0x8000251,iVar4);
                    }
                    iVar4 = sym.adc_tm5_gen3_configure(*(arg1 + 0x28) + iVar11);
                    if (iVar4 < 0) {
                        _printk(0x8000450,iVar4);
                    }
                    mutex_unlock(arg1 + 0x58);
                    return iVar4;
                }
                iVar4 = iVar4 + 1;
                iVar11 = iVar11 + 200;
            } while (*(arg1 + 0x24) != iVar4);
        }
        _printk(0x800091a);
    }
    return -0x16;
}


// ===== sym.adc_tm_disable_chan_meas_gen3 @ 0x08003fb8 (size 376) =====

int sym.adc_tm_disable_chan_meas_gen3(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t *piVar4;
    uint32_t *puVar5;
    ulong *in_x18;
    int64_t *piVar6;
    int iVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 != 0) {
        iVar1 = *(arg1 + 0x24);
        if (iVar1 == 0) {
            iVar7 = 0;
code_r0x08004030:
            if (iVar7 != iVar1) {
                mutex_lock(arg1 + 0x58);
                iVar3 = *(arg1 + 0x28);
                piVar4 = iVar3 + iVar7 * 200 + 0xb0;
                piVar6 = *piVar4;
                if (piVar6 == piVar4) {
                    iVar1 = 0;
                }
                else {
                    iVar1 = 0;
                    iVar8 = iVar7;
                    do {
                        if (*piVar6[2] == *arg2) {
                            *(piVar6 + 0x24) = 5;
                            iVar1 = sym.adc_tm_gen3_manage_thresholds(*(arg1 + 0x28) + iVar8 * 200);
                            if (iVar1 < 0) {
                                uVar2 = 0x8000251;
                            }
                            else {
                                iVar1 = sym.adc_tm5_gen3_configure(*(arg1 + 0x28) + iVar8 * 200);
                                if (-1 < iVar1) {
                                    iVar3 = *(arg1 + 0x28);
                                    goto code_r0x08004070;
                                }
                                uVar2 = 0x8000450;
                            }
                            _printk(uVar2,iVar1);
                            break;
                        }
code_r0x08004070:
                        piVar6 = *piVar6;
                    } while (piVar6 != iVar3 + iVar8 * 200 + 0xb0);
                }
                mutex_unlock(arg1 + 0x58);
                return iVar1;
            }
        }
        else {
            iVar7 = 0;
            do {
                puVar5 = *(arg1 + 0x28) + iVar7 * 200;
                if ((*puVar5 | puVar5[3] << 8) == *(arg2 + 0x10)) goto code_r0x08004030;
                iVar7 = iVar7 + 1;
            } while (iVar1 != iVar7);
        }
        _printk(0x800091a);
    }
    return -0x16;
}


// ===== sym.adc5_gen3_poll_wait_hs @ 0x08004130 (size 332) =====

uint64_t sym.adc5_gen3_poll_wait_hs(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint uVar3;
    int iVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    int64_t *piVar7;
    int64_t iVar8;
    uint *puVar9;
    uint64_t uVar10;
    ulong uVar11;
    int64_t iVar12;
    int64_t *piVar13;
    char *pcVar14;
    uint32_t *puVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar16;
    uint *puVar17;
    uint64_t uVar18;
    int64_t *piVar19;
    int64_t iVar20;
    int64_t *piVar21;
    int64_t *piVar22;
    ulong unaff_x30;
    uint uStack_e4;
    ulong uStack_e0;
    uint32_t uStack_d8;
    uint32_t uStack_d4;
    ulong uStack_d0;
    ulong uStack_c8;
    uint uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    char acStack_50 [4];
    char acStack_4c [4];
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_48 = *(iVar8 + 0x5e0);
    iVar4 = 0x96;
    acStack_4c[0] = '\0';
    acStack_50[0] = '\x01';
    do {
        uVar2 = regmap_bulk_read(*arg1,*(*(arg1 + 0x10) + (arg2 & 0xffffffffU) * 0x18) + 0x45,acStack_4c,1);
        if (uVar2 < 0) {
            uVar6 = uVar2;
            uVar11 = 0x45;
code_r0x08004268:
            _printk(0x800033a,uVar11,1,uVar6);
            goto code_r0x080041f4;
        }
        if (acStack_4c[0] == '\x01') {
            uVar6 = regmap_bulk_read(*arg1,*(*(arg1 + 0x10) + (arg2 & 0xffffffffU) * 0x18) + 0xe5,acStack_50,1);
            if (uVar6 < 0) {
                uVar6 = uVar6 & 0xffffffff;
                uVar11 = 0xe5;
                goto code_r0x08004268;
            }
            if (acStack_50[0] == '\0') {
                uVar6 = 0;
                goto code_r0x080041f4;
            }
        }
        usleep_range_state(100,0x6e,2);
        iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    _printk(0x800040a,acStack_4c[0]);
    uVar6 = 0xffffff92;
code_r0x080041f4:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_48) {
        return uVar6;
    }
    piVar7 = __stack_chk_fail();
    *extraout_x18 = sym.adc5_gen3_probe;
    pcStack_a8 = sym.adc5_gen3_probe;
    iVar8 = sp_el0;
    iStack_b8 = *(iVar8 + 0x5e0);
    iVar20 = piVar7[0x60];
    uStack_e4 = 0;
    uStack_c0 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    puStack_b0 = &stack0xffffffffffffffc0;
    iVar8 = dev_get_regmap(piVar7[0xe],0);
    piVar21 = piVar7;
    if (iVar8 == 0) {
        uVar6 = 0xffffffed;
    }
    else {
        piVar22 = piVar7 + 2;
        puVar9 = devm_iio_device_alloc(piVar22,0xe8);
        if (puVar9 != NULL) {
            arg1 = *(puVar9 + 0x110);
            *arg1 = iVar8;
            *(arg1 + 8) = piVar22;
            uVar10 = of_property_count_elems_of_size(iVar20,0x80007d8,4);
            uVar6 = uVar10 & 0xffffffff;
            if (uVar10 < 0) goto code_r0x0800454c;
            *(arg1 + 0x1c) = uVar10;
            uVar3 = of_property_read_string_helper(iVar20,"interrupt-names",0,0,0);
            *(arg1 + 0x20) = uVar3;
            iVar8 = devm_kmalloc(*(arg1 + 8),*(arg1 + 0x1c) * 0x18,0xdc0);
            *(arg1 + 0x10) = iVar8;
            if (iVar8 != 0) {
                if (*(arg1 + 0x1c) != 0) {
                    uVar2 = 0;
                    do {
                        uVar6 = of_property_read_u32_index(iVar20,0x80007d8,uVar2,&uStack_e4);
                        if (uVar6 < 0) {
                            uVar6 = uVar6 & 0xffffffff;
                            goto code_r0x0800454c;
                        }
                        iVar8 = uVar2;
                        uVar2 = uVar2 + 1;
                        *(*(arg1 + 0x10) + iVar8 * 0x18) = uStack_e4;
                    } while (uVar2 < *(arg1 + 0x1c));
                }
                if (*(arg1 + 0x20) != 0) {
                    uVar2 = 0;
                    do {
                        scnprintf(&uStack_d0,0x14,"adc-sdam%d",uVar2);
                        uVar10 = of_irq_get_byname(iVar20,&uStack_d0);
                        uVar6 = uVar10 & 0xffffffff;
                        if (uVar10 < 0) {
                            _printk(0x800097a,uVar2,uVar6);
                            goto code_r0x0800454c;
                        }
                        *(*(arg1 + 0x10) + uVar2 * 0x18 + 0x10) = uVar10;
                        uVar11 = devm_kstrdup(*(arg1 + 8),&uStack_d0,0xcc0);
                        *(*(arg1 + 0x10) + uVar2 * 0x18 + 8) = uVar11;
                        if (*(*(arg1 + 0x10) + uVar2 * 0x18 + 8) == 0) goto code_r0x08004548;
                        uVar2 = uVar2 + 1;
                    } while (uVar2 < *(arg1 + 0x20));
                }
                iVar4 = of_property_read_variable_u32_array(iVar20,"qcom,debug-base",&uStack_e4,1,0);
                if (-1 < iVar4) {
                    *(arg1 + 0x18) = uStack_e4;
                }
                piVar7[0x15] = arg1;
                *(puVar9 + 0x10c) = obj.adc5_gen3_info;
                *(arg1 + 0x38) = 0;
                __init_swait_queue_head(arg1 + 0x40,"&x->wait",obj.adc_tm_device_list);
                __mutex_init(arg1 + 0x58,"&adc->lock",obj.adc_tm_device_list);
                iVar8 = of_get_next_available_child(iVar20,0);
                if (iVar8 == 0) {
                    uVar6 = 0xffffffea;
                    *(arg1 + 0x24) = 0;
                    goto code_r0x08004db8;
                }
                uVar2 = 0;
                do {
                    uVar2 = uVar2 + 1;
                    iVar8 = of_get_next_available_child(iVar20,iVar8);
                } while (iVar8 != 0);
                *(arg1 + 0x24) = uVar2;
                if (uVar2 == 0) {
                    uVar6 = 0xffffffea;
                    goto code_r0x08004db8;
                }
                iVar8 = devm_kmalloc(*(arg1 + 8),uVar2 * 0x98,0xdc0);
                *(arg1 + 0x30) = iVar8;
                if (iVar8 != 0) {
                    iVar8 = devm_kmalloc(*(arg1 + 8),*(arg1 + 0x24) * 200,0xdc0);
                    *(arg1 + 0x28) = iVar8;
                    if (iVar8 != 0) {
                        puVar17 = *(arg1 + 0x30);
                        *(arg1 + 0x90) = 0;
                        iVar12 = of_match_node(obj.adc5_match_table,iVar20);
                        if (iVar12 == 0) {
                            pcVar16 = obj.adc5_gen3_data_pmic;
                        }
                        else {
                            pcVar16 = *(iVar12 + 0xc0);
                        }
                        *(arg1 + 0x88) = pcVar16;
                        piVar13 = of_get_next_available_child(iVar20,0);
                        if (piVar13 != NULL) {
                            uVar2 = 0;
                            piVar19 = iVar8 + 0x78;
                            do {
                                iVar8 = *piVar13;
                                uStack_d4 = 0;
                                piVar21 = *(arg1 + 8);
                                uStack_d8 = 0;
                                uStack_e0 = 0;
                                uVar5 = of_property_read_variable_u32_array(piVar13,0x80007d8,&uStack_d4,1,0);
                                if (uVar5 < 0) {
                                    uVar6 = uVar5;
                                    _dev_err(piVar21,"invalid channel number %s\n",iVar8);
                                    piVar7 = piVar21;
                                    goto code_r0x08004db8;
                                }
                                uVar5 = uStack_d4 & 0xff;
                                if ((0xf8 < uVar5) || (*(*(pcVar16 + 0x10) + (uStack_d4 & 0xff) * 0x20) == 0)) {
                                    uStack_d4 = uVar5;
                                    _dev_err(piVar21,"%s invalid channel number %d\n",iVar8);
                                    uVar6 = 0xffffffea;
                                    piVar7 = piVar21;
                                    goto code_r0x08004db8;
                                }
                                *(piVar19 + -0xf) = uVar5;
                                *(piVar19 + -0x6c) = uStack_d4 >> 8;
                                uStack_d4 = uVar5;
                                iVar8 = of_get_property(piVar13,"label",0);
                                if ((iVar8 == 0) && (iVar8 = *piVar13, iVar8 == 0)) {
                                    _printk(0x80008d4);
                                    uVar6 = 0xffffffea;
                                    piVar7 = piVar21;
                                    goto code_r0x08004db8;
                                }
                                piVar19[-10] = iVar8;
                                iVar4 = of_property_read_variable_u32_array
                                                  (piVar13,"qcom,decimation",&uStack_d8,1,0);
                                if (iVar4 < 0) {
code_r0x08004708:
                                    uVar3 = 2;
                                }
                                else {
                                    puVar15 = *(pcVar16 + 0x20);
                                    if (*puVar15 == uStack_d8) {
                                        uVar3 = 0;
                                    }
                                    else {
                                        if (puVar15[1] != uStack_d8) {
                                            if (puVar15[2] != uStack_d8) {
                                                pcVar14 = "%02x invalid decimation %d\n";
                                                goto code_r0x08004dac;
                                            }
                                            goto code_r0x08004708;
                                        }
                                        uVar3 = 1;
                                    }
                                }
                                *(piVar19 + -0xe) = uVar3;
                                iVar4 = of_property_read_variable_u32_array
                                                  (piVar13,"qcom,pre-scaling",&uStack_e0,2,0);
                                if (iVar4 < 0) {
                                    iVar4 = *(*(*(arg1 + 0x88) + 0x10) + *(piVar19 + -0xf) * 0x20 + 8);
                                }
                                else {
                                    uVar10 = qcom_adc5_prescaling_from_dt(uStack_e0 & 0xffffffff,uStack_e0._4_4_);
                                    uVar6 = uVar10 & 0xffffffff;
                                    iVar4 = uVar10;
                                    if (iVar4 < 0) {
                                        _dev_err(piVar21,"%02x invalid pre-scaling <%d %d>\n",uStack_d4,
                                                 uStack_e0 & 0xffffffff,uStack_e0._4_4_);
                                        piVar7 = piVar21;
                                        goto code_r0x08004db8;
                                    }
                                }
                                *(piVar19 + -0xd) = iVar4;
                                iVar4 = of_property_read_variable_u32_array
                                                  (piVar13,"qcom,hw-settle-time",&uStack_d8,1,0);
                                if ((iVar4 < 0) || (puVar15 = *(pcVar16 + 0x28), *puVar15 == uStack_d8)) {
                                    uVar3 = 0;
                                }
                                else if (puVar15[1] == uStack_d8) {
                                    uVar3 = 1;
                                }
                                else if (puVar15[2] == uStack_d8) {
                                    uVar3 = 2;
                                }
                                else if (puVar15[3] == uStack_d8) {
                                    uVar3 = 3;
                                }
                                else if (puVar15[4] == uStack_d8) {
                                    uVar3 = 4;
                                }
                                else if (puVar15[5] == uStack_d8) {
                                    uVar3 = 5;
                                }
                                else if (puVar15[6] == uStack_d8) {
                                    uVar3 = 6;
                                }
                                else if (puVar15[7] == uStack_d8) {
                                    uVar3 = 7;
                                }
                                else if (puVar15[8] == uStack_d8) {
                                    uVar3 = 8;
                                }
                                else if (puVar15[9] == uStack_d8) {
                                    uVar3 = 9;
                                }
                                else if (puVar15[10] == uStack_d8) {
                                    uVar3 = 10;
                                }
                                else if (puVar15[0xb] == uStack_d8) {
                                    uVar3 = 0xb;
                                }
                                else if (puVar15[0xc] == uStack_d8) {
                                    uVar3 = 0xc;
                                }
                                else if (puVar15[0xd] == uStack_d8) {
                                    uVar3 = 0xd;
                                }
                                else if (puVar15[0xe] == uStack_d8) {
                                    uVar3 = 0xe;
                                }
                                else {
                                    if (puVar15[0xf] != uStack_d8) goto code_r0x08004e04;
                                    uVar3 = 0xf;
                                }
                                *(piVar19 + -100) = uVar3;
                                iVar4 = of_property_read_variable_u32_array
                                                  (piVar13,"qcom,avg-samples",&uStack_d8,1,0);
                                if (iVar4 < 0) {
                                    uVar3 = 0;
                                }
                                else {
                                    uVar6 = uStack_d8;
                                    if (((uStack_d8 == 0) || (0x10 < uStack_d8)) ||
                                       (uVar10 = uVar6 - (uStack_d8 >> 1 & 0x5555555555555555),
                                       uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333),
                                       1 < (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
                                        _dev_err(piVar21,"%02x invalid avg-samples %d\n",uStack_d4);
                                        uVar6 = 0xffffffea;
                                        piVar7 = piVar21;
                                        goto code_r0x08004db8;
                                    }
                                    uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
                                    uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
                                    uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
                                    uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
                                    uVar3 = LZCOUNT((uVar6 >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10) << 0x20);
                                }
                                *(piVar19 + -0xc) = uVar3;
                                *(piVar19 + -0xb) = 0xffffffea;
                                iVar4 = of_property_read_variable_u32_array
                                                  (piVar13,"qcom,scale-fn-type",&uStack_d8,1,0);
                                if ((-1 < iVar4) && (uStack_d8 < 0x1a)) {
                                    *(piVar19 + -0xb) = uStack_d8;
                                }
                                iVar8 = of_find_property(piVar13,"qcom,ratiometric",0);
                                uVar3 = 1;
                                *(piVar19 + -7) = 1;
                                if (iVar8 == 0) {
                                    uVar3 = 2;
                                }
                                *(piVar19 + -8) = 0;
                                *(piVar19 + -0x74) = uVar3;
                                iVar4 = of_property_read_variable_u32_array
                                                  (piVar13,"qcom,adc-tm-type",&uStack_d8,1,0);
                                if ((iVar4 < 0) || (3 < uStack_d8)) {
                                    uVar5 = *(piVar19 + -8);
                                }
                                else {
                                    *(piVar19 + -8) = uStack_d8;
                                    uVar5 = uStack_d8;
                                }
                                if (uVar5 == 3) {
                                    piVar21 = piVar19 + 9;
                                    iVar4 = of_property_read_variable_u32_array
                                                      (piVar13,"qcom,rscale-type",piVar21,1,0);
                                    if (iVar4 < 0) {
                                        *piVar21 = 1;
                                    }
                                }
                                uVar5 = *(piVar19 + -8);
                                if ((uVar5 | 2) != 2) {
                                    uVar1 = *(arg1 + 0x90) + 1;
                                    *(arg1 + 0x90) = uVar1;
                                    if (*(arg1 + 0x1c) * 8 - 1U < uVar1) {
                                        _printk(0x80003b5);
                                        uVar6 = 0xffffffea;
                                        piVar7 = piVar21;
                                        goto code_r0x08004db8;
                                    }
                                    *(piVar19 + -0x5c) = uVar1 >> 3;
                                    *(piVar19 + -0x3c) = uVar1 & 7;
                                    *(piVar19 + -7) = 4;
                                    if (uVar5 == 3) {
                                        iVar8 = alloc_workqueue("adc_tm_notify_wq",0x10,0);
                                        *piVar19 = iVar8;
                                        if (iVar8 == 0) {
                                            _printk(0x80005c6);
                                            uVar6 = 0xfffffff4;
                                            piVar7 = piVar21;
                                            goto code_r0x08004db8;
                                        }
                                        piVar19[1] = 0xfffffffe0;
                                        piVar19[2] = piVar19 + 2;
                                        piVar19[3] = piVar19 + 2;
                                        piVar19[4] = sym.notify_adc_tm_fn.cfi_jt;
                                    }
                                    piVar19[7] = piVar19 + 7;
                                    piVar19[8] = piVar19 + 7;
                                }
                                piVar19[-9] = arg1;
                                if (piVar19[-0xb] == -0x16) {
                                    uVar6 = *(piVar19 + -0xf);
                                    *(piVar19 + -0xb) = *(*(pcVar16 + 0x10) + uVar6 * 0x20 + 0x18);
                                }
                                else {
                                    uVar6 = *(piVar19 + -0xf);
                                }
                                iVar8 = *(pcVar16 + 0x10);
                                puVar17[1] = uVar6;
                                iVar8 = iVar8 + uVar6 * 0x20;
                                *(puVar17 + 0x22) = piVar19[-10];
                                *(puVar17 + 0x20) = piVar19[-10];
                                uVar6 = uVar2;
                                uVar2 = uVar2 + 1;
                                *(puVar17 + 10) = *(iVar8 + 0x10);
                                uVar3 = *(iVar8 + 0xc);
                                *(puVar17 + 4) = uVar6;
                                *puVar17 = uVar3;
                                piVar13 = of_get_next_available_child(iVar20,piVar13);
                                piVar19 = piVar19 + 0x19;
                                puVar17 = puVar17 + 0x26;
                            } while (piVar13 != NULL);
                        }
                        if (*(arg1 + 0x20) != 0) {
                            uVar2 = 0;
                            do {
                                iVar8 = *(arg1 + 0x10) + uVar2 * 0x18;
                                uVar6 = devm_request_threaded_irq
                                                  (piVar22,*(iVar8 + 0x10),
                                                   sym.adc5_gen3_isr.0ad87e129b42622404d2c68837efd3ea.cfi_jt,0,0,
                                                   *(iVar8 + 8),arg1);
                                if (uVar6 < 0) {
                                    uVar6 = uVar6 & 0xffffffff;
                                    goto code_r0x08004dc4;
                                }
                                uVar2 = uVar2 + 1;
                            } while (uVar2 < *(arg1 + 0x20));
                        }
                        uVar10 = *(arg1 + 0x24);
                        if (*(arg1 + 0x24) != 0) {
                            iVar8 = 0;
                            uVar18 = 0;
                            do {
                                iVar12 = *(arg1 + 0x28);
                                puVar15 = iVar12 + iVar8;
                                if (3 < puVar15[0xe]) {
                                    _printk(0x8000633);
                                    uVar6 = 0xffffffea;
                                    goto code_r0x08004dc4;
                                }
                                uVar6 = 0;
                                pcVar16 = obj.adc_tm_ops;
                                switch(puVar15[0xe]) {
                                case 0:
                                    goto code_r0x08004b5c;
                                case 2:
                                    pcVar16 = reloc.adc_tm_gen3_get_temp.cfi_jt;
                                    break;
                                case 3:
                                    goto code_r0x08004b4c;
                                }
                                uVar6 = devm_thermal_zone_of_sensor_register
                                                  (*(arg1 + 8),*puVar15 | puVar15[3] << 8,iVar12 + iVar8,pcVar16);
                                if (0xfffffffffffff000 < uVar6) {
                                    _printk(0x80008ec,uVar6,*(*(arg1 + 0x28) + iVar8));
                                    if (uVar6 < 0) goto code_r0x08004dc4;
                                    break;
                                }
                                iVar12 = *(arg1 + 0x28);
code_r0x08004b4c:
                                *(iVar12 + iVar8 + 0x48) = uVar6;
                                uVar10 = *(arg1 + 0x24);
code_r0x08004b5c:
                                uVar18 = uVar18 + 1;
                                iVar8 = iVar8 + 200;
                            } while (uVar18 < uVar10);
                        }
                        iVar8 = thermal_minidump_register("adc5_gen3");
                        *(arg1 + 0xe0) = iVar8;
                        if (*(arg1 + 0x90) != 0) {
                            *(arg1 + 0xb0) = 0xfffffffe0;
                            *(arg1 + 0xb8) = arg1 + 0xb8;
                            *(arg1 + 0xc0) = arg1 + 0xb8;
                            *(arg1 + 200) = sym.tm_handler_work.0ad87e129b42622404d2c68837efd3ea.cfi_jt;
                        }
                        *(puVar9 + 0x1a) = piVar22;
                        *(puVar9 + 0xbe) = iVar20;
                        piVar21 = arg1 + 0x98;
                        iVar8 = *piVar7;
                        *puVar9 = 1;
                        piVar7 = *0x8000078;
                        *(puVar9 + 0x108) = iVar8;
                        *(puVar9 + 0x104) = *(arg1 + 0x30);
                        puVar9[0x106] = *(arg1 + 0x24);
                        uVar6 = __list_add_valid(piVar21,piVar7,obj.adc_tm_device_list);
                        if ((uVar6 & 1) != 0) {
                            *0x8000078 = piVar21;
                            *(arg1 + 0x98) = obj.adc_tm_device_list;
                            *(arg1 + 0xa0) = piVar7;
                            *piVar7 = piVar21;
                        }
                        *(arg1 + 0xa8) = obj.adc_tm_device_list;
                        uVar6 = __devm_iio_device_register(piVar22,puVar9,obj.__this_module);
                        uVar6 = uVar6 & 0xffffffff;
                        piVar21 = piVar22;
                        goto code_r0x0800454c;
                    }
                }
                uVar6 = 0xfffffff4;
                goto code_r0x08004db8;
            }
        }
code_r0x08004548:
        uVar6 = 0xfffffff4;
    }
code_r0x0800454c:
    while (iVar8 = sp_el0, *(iVar8 + 0x5e0) != iStack_b8) {
        __stack_chk_fail();
code_r0x08004e04:
        pcVar14 = "%02x invalid hw-settle-time %d us\n";
code_r0x08004dac:
        _dev_err(piVar21,pcVar14,uStack_d4);
        uVar6 = 0xfffffffe;
        piVar7 = piVar21;
code_r0x08004db8:
        _printk(0x8000577);
        piVar22 = piVar7;
code_r0x08004dc4:
        uVar2 = *(arg1 + 0x24);
        piVar21 = piVar22;
        if (uVar2 != 0) {
            uVar5 = 0;
            do {
                if (*(*(arg1 + 0x28) + uVar5 * 200 + 0x78) != 0) {
                    destroy_workqueue();
                    uVar2 = *(arg1 + 0x24);
                }
                uVar5 = uVar5 + 1;
            } while (uVar5 < uVar2);
        }
    }
    return uVar6 & 0xffffffff;
}


// ===== sym.adc5_gen3_probe @ 0x0800427c (size 2968) =====

uint64_t sym.adc5_gen3_probe(int64_t arg1)

{
    uint32_t uVar1;
    uint uVar2;
    int iVar3;
    uint32_t uVar4;
    int64_t iVar5;
    uint *puVar6;
    uint64_t uVar7;
    ulong uVar8;
    int64_t iVar9;
    int64_t *piVar10;
    char *pcVar11;
    uint32_t *puVar12;
    ulong *in_x18;
    int64_t *unaff_x19;
    code *pcVar13;
    uint *puVar14;
    uint64_t uVar15;
    int64_t *piVar16;
    ulong uVar17;
    uint32_t uVar18;
    int64_t *piVar19;
    int64_t *piVar20;
    uint64_t uVar21;
    ulong unaff_x30;
    uint uStack_94;
    ulong uStack_90;
    uint32_t uStack_88;
    uint32_t uStack_84;
    ulong uStack_80;
    ulong uStack_78;
    uint uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_68 = *(iVar5 + 0x5e0);
    uVar17 = *(arg1 + 0x300);
    uStack_94 = 0;
    uStack_70 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    iVar5 = dev_get_regmap(*(arg1 + 0x70),0);
    piVar19 = arg1;
    if (iVar5 == 0) {
        uVar21 = 0xffffffed;
    }
    else {
        piVar20 = arg1 + 0x10;
        puVar6 = devm_iio_device_alloc(piVar20,0xe8);
        if (puVar6 != NULL) {
            unaff_x19 = *(puVar6 + 0x110);
            *unaff_x19 = iVar5;
            unaff_x19[1] = piVar20;
            uVar7 = of_property_count_elems_of_size(uVar17,0x80007d8,4);
            uVar21 = uVar7 & 0xffffffff;
            if (uVar7 < 0) goto code_r0x0800454c;
            *(unaff_x19 + 0x1c) = uVar7;
            uVar2 = of_property_read_string_helper(uVar17,"interrupt-names",0,0,0);
            *(unaff_x19 + 4) = uVar2;
            iVar5 = devm_kmalloc(unaff_x19[1],*(unaff_x19 + 0x1c) * 0x18,0xdc0);
            unaff_x19[2] = iVar5;
            if (iVar5 != 0) {
                if (*(unaff_x19 + 0x1c) != 0) {
                    uVar18 = 0;
                    do {
                        uVar21 = of_property_read_u32_index(uVar17,0x80007d8,uVar18,&uStack_94);
                        if (uVar21 < 0) {
                            uVar21 = uVar21 & 0xffffffff;
                            goto code_r0x0800454c;
                        }
                        iVar5 = uVar18;
                        uVar18 = uVar18 + 1;
                        *(unaff_x19[2] + iVar5 * 0x18) = uStack_94;
                    } while (uVar18 < *(unaff_x19 + 0x1c));
                }
                if (unaff_x19[4] != 0) {
                    uVar18 = 0;
                    do {
                        scnprintf(&uStack_80,0x14,"adc-sdam%d",uVar18);
                        uVar7 = of_irq_get_byname(uVar17,&uStack_80);
                        uVar21 = uVar7 & 0xffffffff;
                        if (uVar7 < 0) {
                            _printk(0x800097a,uVar18,uVar21);
                            goto code_r0x0800454c;
                        }
                        *(unaff_x19[2] + uVar18 * 0x18 + 0x10) = uVar7;
                        uVar8 = devm_kstrdup(unaff_x19[1],&uStack_80,0xcc0);
                        *(unaff_x19[2] + uVar18 * 0x18 + 8) = uVar8;
                        if (*(unaff_x19[2] + uVar18 * 0x18 + 8) == 0) goto code_r0x08004548;
                        uVar18 = uVar18 + 1;
                    } while (uVar18 < *(unaff_x19 + 4));
                }
                iVar3 = of_property_read_variable_u32_array(uVar17,"qcom,debug-base",&uStack_94,1,0);
                if (-1 < iVar3) {
                    *(unaff_x19 + 3) = uStack_94;
                }
                *(arg1 + 0xa8) = unaff_x19;
                *(puVar6 + 0x10c) = obj.adc5_gen3_info;
                *(unaff_x19 + 7) = 0;
                __init_swait_queue_head(unaff_x19 + 8,"&x->wait",obj.adc_tm_device_list);
                __mutex_init(unaff_x19 + 0xb,"&adc->lock",obj.adc_tm_device_list);
                iVar5 = of_get_next_available_child(uVar17,0);
                if (iVar5 == 0) {
                    uVar21 = 0xffffffea;
                    *(unaff_x19 + 0x24) = 0;
                    goto code_r0x08004db8;
                }
                uVar18 = 0;
                do {
                    uVar18 = uVar18 + 1;
                    iVar5 = of_get_next_available_child(uVar17,iVar5);
                } while (iVar5 != 0);
                *(unaff_x19 + 0x24) = uVar18;
                if (uVar18 == 0) {
                    uVar21 = 0xffffffea;
                    goto code_r0x08004db8;
                }
                iVar5 = devm_kmalloc(unaff_x19[1],uVar18 * 0x98,0xdc0);
                unaff_x19[6] = iVar5;
                if (iVar5 != 0) {
                    iVar5 = devm_kmalloc(unaff_x19[1],*(unaff_x19 + 0x24) * 200,0xdc0);
                    unaff_x19[5] = iVar5;
                    if (iVar5 != 0) {
                        puVar14 = unaff_x19[6];
                        *(unaff_x19 + 0x12) = 0;
                        iVar9 = of_match_node(obj.adc5_match_table,uVar17);
                        if (iVar9 == 0) {
                            pcVar13 = obj.adc5_gen3_data_pmic;
                        }
                        else {
                            pcVar13 = *(iVar9 + 0xc0);
                        }
                        unaff_x19[0x11] = pcVar13;
                        piVar10 = of_get_next_available_child(uVar17,0);
                        if (piVar10 != NULL) {
                            uVar18 = 0;
                            piVar16 = iVar5 + 0x78;
                            do {
                                iVar5 = *piVar10;
                                uStack_84 = 0;
                                piVar19 = unaff_x19[1];
                                uStack_88 = 0;
                                uStack_90 = 0;
                                uVar4 = of_property_read_variable_u32_array(piVar10,0x80007d8,&uStack_84,1,0);
                                if (uVar4 < 0) {
                                    uVar21 = uVar4;
                                    _dev_err(piVar19,"invalid channel number %s\n",iVar5);
                                    arg1 = piVar19;
                                    goto code_r0x08004db8;
                                }
                                uVar4 = uStack_84 & 0xff;
                                if ((0xf8 < uVar4) || (*(*(pcVar13 + 0x10) + (uStack_84 & 0xff) * 0x20) == 0)) {
                                    uStack_84 = uVar4;
                                    _dev_err(piVar19,"%s invalid channel number %d\n",iVar5);
                                    uVar21 = 0xffffffea;
                                    arg1 = piVar19;
                                    goto code_r0x08004db8;
                                }
                                *(piVar16 + -0xf) = uVar4;
                                *(piVar16 + -0x6c) = uStack_84 >> 8;
                                uStack_84 = uVar4;
                                iVar5 = of_get_property(piVar10,"label",0);
                                if ((iVar5 == 0) && (iVar5 = *piVar10, iVar5 == 0)) {
                                    _printk(0x80008d4);
                                    uVar21 = 0xffffffea;
                                    arg1 = piVar19;
                                    goto code_r0x08004db8;
                                }
                                piVar16[-10] = iVar5;
                                iVar3 = of_property_read_variable_u32_array
                                                  (piVar10,"qcom,decimation",&uStack_88,1,0);
                                if (iVar3 < 0) {
code_r0x08004708:
                                    uVar2 = 2;
                                }
                                else {
                                    puVar12 = *(pcVar13 + 0x20);
                                    if (*puVar12 == uStack_88) {
                                        uVar2 = 0;
                                    }
                                    else {
                                        if (puVar12[1] != uStack_88) {
                                            if (puVar12[2] != uStack_88) {
                                                pcVar11 = "%02x invalid decimation %d\n";
                                                goto code_r0x08004dac;
                                            }
                                            goto code_r0x08004708;
                                        }
                                        uVar2 = 1;
                                    }
                                }
                                *(piVar16 + -0xe) = uVar2;
                                iVar3 = of_property_read_variable_u32_array
                                                  (piVar10,"qcom,pre-scaling",&uStack_90,2,0);
                                if (iVar3 < 0) {
                                    iVar3 = *(*(unaff_x19[0x11] + 0x10) + *(piVar16 + -0xf) * 0x20 + 8);
                                }
                                else {
                                    uVar7 = qcom_adc5_prescaling_from_dt(uStack_90 & 0xffffffff,uStack_90._4_4_);
                                    uVar21 = uVar7 & 0xffffffff;
                                    iVar3 = uVar7;
                                    if (iVar3 < 0) {
                                        _dev_err(piVar19,"%02x invalid pre-scaling <%d %d>\n",uStack_84,
                                                 uStack_90 & 0xffffffff,uStack_90._4_4_);
                                        arg1 = piVar19;
                                        goto code_r0x08004db8;
                                    }
                                }
                                *(piVar16 + -0xd) = iVar3;
                                iVar3 = of_property_read_variable_u32_array
                                                  (piVar10,"qcom,hw-settle-time",&uStack_88,1,0);
                                if ((iVar3 < 0) || (puVar12 = *(pcVar13 + 0x28), *puVar12 == uStack_88)) {
                                    uVar2 = 0;
                                }
                                else if (puVar12[1] == uStack_88) {
                                    uVar2 = 1;
                                }
                                else if (puVar12[2] == uStack_88) {
                                    uVar2 = 2;
                                }
                                else if (puVar12[3] == uStack_88) {
                                    uVar2 = 3;
                                }
                                else if (puVar12[4] == uStack_88) {
                                    uVar2 = 4;
                                }
                                else if (puVar12[5] == uStack_88) {
                                    uVar2 = 5;
                                }
                                else if (puVar12[6] == uStack_88) {
                                    uVar2 = 6;
                                }
                                else if (puVar12[7] == uStack_88) {
                                    uVar2 = 7;
                                }
                                else if (puVar12[8] == uStack_88) {
                                    uVar2 = 8;
                                }
                                else if (puVar12[9] == uStack_88) {
                                    uVar2 = 9;
                                }
                                else if (puVar12[10] == uStack_88) {
                                    uVar2 = 10;
                                }
                                else if (puVar12[0xb] == uStack_88) {
                                    uVar2 = 0xb;
                                }
                                else if (puVar12[0xc] == uStack_88) {
                                    uVar2 = 0xc;
                                }
                                else if (puVar12[0xd] == uStack_88) {
                                    uVar2 = 0xd;
                                }
                                else if (puVar12[0xe] == uStack_88) {
                                    uVar2 = 0xe;
                                }
                                else {
                                    if (puVar12[0xf] != uStack_88) goto code_r0x08004e04;
                                    uVar2 = 0xf;
                                }
                                *(piVar16 + -100) = uVar2;
                                iVar3 = of_property_read_variable_u32_array
                                                  (piVar10,"qcom,avg-samples",&uStack_88,1,0);
                                if (iVar3 < 0) {
                                    uVar2 = 0;
                                }
                                else {
                                    uVar21 = uStack_88;
                                    if (((uStack_88 == 0) || (0x10 < uStack_88)) ||
                                       (uVar7 = uVar21 - (uStack_88 >> 1 & 0x5555555555555555),
                                       uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333),
                                       1 < (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
                                        _dev_err(piVar19,"%02x invalid avg-samples %d\n",uStack_84);
                                        uVar21 = 0xffffffea;
                                        arg1 = piVar19;
                                        goto code_r0x08004db8;
                                    }
                                    uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
                                    uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
                                    uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
                                    uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
                                    uVar2 = LZCOUNT((uVar21 >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10) << 0x20);
                                }
                                *(piVar16 + -0xc) = uVar2;
                                *(piVar16 + -0xb) = 0xffffffea;
                                iVar3 = of_property_read_variable_u32_array
                                                  (piVar10,"qcom,scale-fn-type",&uStack_88,1,0);
                                if ((-1 < iVar3) && (uStack_88 < 0x1a)) {
                                    *(piVar16 + -0xb) = uStack_88;
                                }
                                iVar5 = of_find_property(piVar10,"qcom,ratiometric",0);
                                uVar2 = 1;
                                *(piVar16 + -7) = 1;
                                if (iVar5 == 0) {
                                    uVar2 = 2;
                                }
                                *(piVar16 + -8) = 0;
                                *(piVar16 + -0x74) = uVar2;
                                iVar3 = of_property_read_variable_u32_array
                                                  (piVar10,"qcom,adc-tm-type",&uStack_88,1,0);
                                if ((iVar3 < 0) || (3 < uStack_88)) {
                                    uVar4 = *(piVar16 + -8);
                                }
                                else {
                                    *(piVar16 + -8) = uStack_88;
                                    uVar4 = uStack_88;
                                }
                                if (uVar4 == 3) {
                                    piVar19 = piVar16 + 9;
                                    iVar3 = of_property_read_variable_u32_array
                                                      (piVar10,"qcom,rscale-type",piVar19,1,0);
                                    if (iVar3 < 0) {
                                        *piVar19 = 1;
                                    }
                                }
                                uVar4 = *(piVar16 + -8);
                                if ((uVar4 | 2) != 2) {
                                    uVar1 = unaff_x19[0x12] + 1;
                                    *(unaff_x19 + 0x12) = uVar1;
                                    if (*(unaff_x19 + 0x1c) * 8 - 1U < uVar1) {
                                        _printk(0x80003b5);
                                        uVar21 = 0xffffffea;
                                        arg1 = piVar19;
                                        goto code_r0x08004db8;
                                    }
                                    *(piVar16 + -0x5c) = uVar1 >> 3;
                                    *(piVar16 + -0x3c) = uVar1 & 7;
                                    *(piVar16 + -7) = 4;
                                    if (uVar4 == 3) {
                                        iVar5 = alloc_workqueue("adc_tm_notify_wq",0x10,0);
                                        *piVar16 = iVar5;
                                        if (iVar5 == 0) {
                                            _printk(0x80005c6);
                                            uVar21 = 0xfffffff4;
                                            arg1 = piVar19;
                                            goto code_r0x08004db8;
                                        }
                                        piVar16[1] = 0xfffffffe0;
                                        piVar16[2] = piVar16 + 2;
                                        piVar16[3] = piVar16 + 2;
                                        piVar16[4] = sym.notify_adc_tm_fn.cfi_jt;
                                    }
                                    piVar16[7] = piVar16 + 7;
                                    piVar16[8] = piVar16 + 7;
                                }
                                piVar16[-9] = unaff_x19;
                                if (piVar16[-0xb] == -0x16) {
                                    uVar21 = *(piVar16 + -0xf);
                                    *(piVar16 + -0xb) = *(*(pcVar13 + 0x10) + uVar21 * 0x20 + 0x18);
                                }
                                else {
                                    uVar21 = *(piVar16 + -0xf);
                                }
                                iVar5 = *(pcVar13 + 0x10);
                                puVar14[1] = uVar21;
                                iVar5 = iVar5 + uVar21 * 0x20;
                                *(puVar14 + 0x22) = piVar16[-10];
                                *(puVar14 + 0x20) = piVar16[-10];
                                uVar21 = uVar18;
                                uVar18 = uVar18 + 1;
                                *(puVar14 + 10) = *(iVar5 + 0x10);
                                uVar2 = *(iVar5 + 0xc);
                                *(puVar14 + 4) = uVar21;
                                *puVar14 = uVar2;
                                piVar10 = of_get_next_available_child(uVar17,piVar10);
                                piVar16 = piVar16 + 0x19;
                                puVar14 = puVar14 + 0x26;
                            } while (piVar10 != NULL);
                        }
                        if (unaff_x19[4] != 0) {
                            uVar18 = 0;
                            do {
                                iVar5 = unaff_x19[2] + uVar18 * 0x18;
                                uVar21 = devm_request_threaded_irq
                                                   (piVar20,*(iVar5 + 0x10),
                                                    sym.adc5_gen3_isr.0ad87e129b42622404d2c68837efd3ea.cfi_jt,0,0,
                                                    *(iVar5 + 8),unaff_x19);
                                if (uVar21 < 0) {
                                    uVar21 = uVar21 & 0xffffffff;
                                    goto code_r0x08004dc4;
                                }
                                uVar18 = uVar18 + 1;
                            } while (uVar18 < *(unaff_x19 + 4));
                        }
                        uVar7 = *(unaff_x19 + 0x24);
                        if (*(unaff_x19 + 0x24) != 0) {
                            iVar5 = 0;
                            uVar15 = 0;
                            do {
                                iVar9 = unaff_x19[5];
                                puVar12 = iVar9 + iVar5;
                                if (3 < puVar12[0xe]) {
                                    _printk(0x8000633);
                                    uVar21 = 0xffffffea;
                                    goto code_r0x08004dc4;
                                }
    //switch table (3 cases) at 0x8000240
                                uVar21 = 0;
                                pcVar13 = obj.adc_tm_ops;
                                switch(puVar12[0xe]) {
                                case 0:
                                    goto code_r0x08004b5c;
                                case 2:
                                    pcVar13 = reloc.adc_tm_gen3_get_temp.cfi_jt;
                                    break;
                                case 3:
                                    goto code_r0x08004b4c;
                                }
                                uVar21 = devm_thermal_zone_of_sensor_register
                                                   (unaff_x19[1],*puVar12 | puVar12[3] << 8,iVar9 + iVar5,pcVar13);
                                if (0xfffffffffffff000 < uVar21) {
                                    _printk(0x80008ec,uVar21,*(unaff_x19[5] + iVar5));
                                    if (uVar21 < 0) goto code_r0x08004dc4;
                                    break;
                                }
                                iVar9 = unaff_x19[5];
code_r0x08004b4c:
                                *(iVar9 + iVar5 + 0x48) = uVar21;
                                uVar7 = *(unaff_x19 + 0x24);
code_r0x08004b5c:
                                uVar15 = uVar15 + 1;
                                iVar5 = iVar5 + 200;
                            } while (uVar15 < uVar7);
                        }
                        iVar5 = thermal_minidump_register("adc5_gen3");
                        unaff_x19[0x1c] = iVar5;
                        if (unaff_x19[0x12] != 0) {
                            unaff_x19[0x16] = 0xfffffffe0;
                            unaff_x19[0x17] = unaff_x19 + 0x17;
                            unaff_x19[0x18] = unaff_x19 + 0x17;
                            unaff_x19[0x19] = sym.tm_handler_work.0ad87e129b42622404d2c68837efd3ea.cfi_jt;
                        }
                        *(puVar6 + 0x1a) = piVar20;
                        *(puVar6 + 0xbe) = uVar17;
                        piVar19 = unaff_x19 + 0x13;
                        uVar17 = *arg1;
                        *puVar6 = 1;
                        piVar10 = *0x8000078;
                        *(puVar6 + 0x108) = uVar17;
                        *(puVar6 + 0x104) = unaff_x19[6];
                        puVar6[0x106] = *(unaff_x19 + 0x24);
                        uVar21 = __list_add_valid(piVar19,piVar10,obj.adc_tm_device_list);
                        if ((uVar21 & 1) != 0) {
                            *0x8000078 = piVar19;
                            unaff_x19[0x13] = obj.adc_tm_device_list;
                            unaff_x19[0x14] = piVar10;
                            *piVar10 = piVar19;
                        }
                        unaff_x19[0x15] = obj.adc_tm_device_list;
                        uVar21 = __devm_iio_device_register(piVar20,puVar6,obj.__this_module);
                        uVar21 = uVar21 & 0xffffffff;
                        piVar19 = piVar20;
                        goto code_r0x0800454c;
                    }
                }
                uVar21 = 0xfffffff4;
                goto code_r0x08004db8;
            }
        }
code_r0x08004548:
        uVar21 = 0xfffffff4;
    }
code_r0x0800454c:
    while (iVar5 = sp_el0, *(iVar5 + 0x5e0) != iStack_68) {
        __stack_chk_fail();
code_r0x08004e04:
        pcVar11 = "%02x invalid hw-settle-time %d us\n";
code_r0x08004dac:
        _dev_err(piVar19,pcVar11,uStack_84);
        uVar21 = 0xfffffffe;
        arg1 = piVar19;
code_r0x08004db8:
        _printk(0x8000577);
        piVar20 = arg1;
code_r0x08004dc4:
        uVar18 = *(unaff_x19 + 0x24);
        piVar19 = piVar20;
        if (uVar18 != 0) {
            uVar4 = 0;
            do {
                if (*(unaff_x19[5] + uVar4 * 200 + 0x78) != 0) {
                    destroy_workqueue();
                    uVar18 = *(unaff_x19 + 0x24);
                }
                uVar4 = uVar4 + 1;
            } while (uVar4 < uVar18);
        }
    }
    return uVar21 & 0xffffffff;
}


// ===== sym.adc5_gen3_exit @ 0x08004e14 (size 552) =====

uint64_t sym.adc5_gen3_exit(int64_t arg1)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    uint16_t uVar3;
    code *pcVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    ulong uVar11;
    uint64_t *in_x2;
    uint *in_x4;
    uint64_t uVar12;
    uint64_t uVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    uint64_t *puVar14;
    ulong *puVar15;
    uint64_t unaff_x20;
    uint64_t *puVar16;
    ulong *unaff_x22;
    int64_t iVar17;
    ulong unaff_x23;
    uint64_t unaff_x24;
    uint64_t unaff_x25;
    int64_t iVar18;
    uint32_t *puVar19;
    uint32_t uVar20;
    uint64_t uVar21;
    int64_t iVar22;
    int64_t iVar23;
    ulong unaff_x30;
    uchar auVar24 [16];
    uint16_t auStack_1ec [2];
    int64_t iStack_1e8;
    uchar ****ppppuStack_1e0;
    code *pcStack_1d8;
    ulong *puStack_1d0;
    uint64_t *puStack_1c8;
    uint64_t uStack_1c0;
    ulong *puStack_1b8;
    uint uStack_1a4;
    uchar auStack_1a0 [4];
    ushort uStack_19c;
    uint64_t auStack_198 [3];
    uchar ***pppuStack_180;
    code *pcStack_178;
    uint8_t auStack_11c [4];
    ushort uStack_118;
    char acStack_114 [4];
    uint64_t uStack_110;
    int64_t iStack_108;
    uchar **ppuStack_100;
    code *pcStack_f8;
    uint64_t uStack_f0;
    uint64_t uStack_e0;
    ulong uStack_d8;
    ulong *puStack_d0;
    uint64_t *puStack_c8;
    uint64_t uStack_c0;
    uint64_t *puStack_b8;
    uchar auStack_ac [12];
    uchar *puStack_a0;
    code *pcStack_98;
    uint64_t uStack_90;
    ulong uStack_88;
    ulong *puStack_80;
    uint64_t *puStack_78;
    uint64_t uStack_70;
    uint64_t *puStack_68;
    uchar auStack_5c [12];
    
    *in_x18 = unaff_x30;
    iVar23 = sp_el0;
    auStack_5c._4_8_ = *(iVar23 + 0x5e0);
    puVar16 = *(arg1 + 0xa8);
    auStack_5c[0] = 0;
    puVar1 = puVar16 + 0xb;
    mutex_lock(puVar1);
    if (*(puVar16 + 0x24) != 0) {
        unaff_x22 = NULL;
        unaff_x20 = 200;
        do {
            uVar12 = puVar16[5];
            iVar6 = unaff_x22;
            if (*(uVar12 + iVar6 * 200 + 0x78) != 0) {
                destroy_workqueue();
                uVar12 = puVar16[5];
            }
            unaff_x22 = iVar6 + 1U;
            *(uVar12 + iVar6 * 200 + 0x40) = 0;
        } while (iVar6 + 1U < *(puVar16 + 0x24));
    }
    if ((*(puVar16 + 0x1c) & 0x1fffffff) != 0) {
        unaff_x22 = NULL;
        unaff_x23 = 0x18;
        unaff_x24 = 1;
        unaff_x20 = 0x8000715;
        do {
            iVar7 = unaff_x22;
            iVar6 = iVar7 + 7;
            if (-1 < iVar7) {
                iVar6 = iVar7;
            }
            unaff_x25 = iVar6 >> 3;
            auStack_5c[0] = 0;
            iVar5 = regmap_bulk_write(*puVar16,*(puVar16[2] + unaff_x25 * 0x18) + 0x51,auStack_5c,1);
            if (iVar5 < 0) {
                _printk(0x8000715,0x51,1,iVar5);
            }
            auStack_5c[0] = unaff_x22 + (iVar6 >> 3) * -8 | 0x80;
            iVar6 = regmap_bulk_write(*puVar16,*(puVar16[2] + unaff_x25 * 0x18) + 0x50,auStack_5c,1);
            if (iVar6 < 0) {
                _printk(0x8000715,0x50,1,iVar6);
            }
            auStack_5c[0] = 1;
            in_x2 = auStack_5c;
            iVar6 = regmap_bulk_write(*puVar16,*(puVar16[2] + unaff_x25 * 0x18) + 0xe5,in_x2,1);
            if (iVar6 < 0) {
                in_x2 = 0x1;
                _printk(0x8000715,0xe5,1,iVar6);
            }
            unaff_x22 = iVar7 + 1U;
        } while (iVar7 + 1U < *(puVar16 + 0x1c) << 3);
    }
    mutex_unlock(puVar1);
    if (puVar16[0x12] != 0) {
        cancel_work_sync(puVar16 + 0x16);
    }
    uVar12 = __list_del_entry_valid(puVar16 + 0x13);
    if ((uVar12 & 1) != 0) {
        uVar12 = puVar16[0x13];
        puVar14 = puVar16[0x14];
        *(uVar12 + 8) = puVar14;
        *puVar14 = uVar12;
    }
    puVar16[0x13] = 0xdead000000000100;
    puVar16[0x14] = 0xdead000000000122;
    thermal_minidump_unregister(puVar16[0x1c]);
    iVar23 = sp_el0;
    if (*(iVar23 + 0x5e0) == auStack_5c._4_8_) {
        return 0;
    }
    uVar12 = __stack_chk_fail();
    *extraout_x18 = sym.adc5_gen3_shutdown;
    pcStack_98 = sym.adc5_gen3_shutdown;
    iVar23 = sp_el0;
    auStack_ac._4_8_ = *(iVar23 + 0x5e0);
    puVar14 = *(uVar12 + 0xa8);
    puStack_a0 = &stack0xffffffffffffffb0;
    uStack_90 = unaff_x24;
    uStack_88 = unaff_x23;
    puStack_80 = unaff_x22;
    puStack_78 = puVar16;
    uStack_70 = unaff_x20;
    puStack_68 = puVar1;
    if (puVar14[4] != 0) {
        puVar16 = 0x18;
        uVar21 = 0;
        do {
            in_x2 = puVar14;
            uVar12 = devm_free_irq(puVar14[1],*(puVar14[2] + uVar21 * 0x18 + 0x10));
            uVar9 = uVar21 + 1;
            unaff_x20 = uVar9;
            uVar21 = unaff_x20;
        } while (uVar9 < puVar14[4]);
    }
    if ((*(puVar14 + 0x1c) & 0x1fffffff) != 0) {
        puVar16 = NULL;
        unaff_x22 = 0x18;
        unaff_x23 = 1;
        unaff_x20 = 0x8000715;
        do {
            iVar7 = puVar16;
            iVar6 = iVar7 + 7;
            if (-1 < iVar7) {
                iVar6 = iVar7;
            }
            unaff_x24 = iVar6 >> 3;
            auStack_ac[0] = 0;
            iVar5 = regmap_bulk_write(*puVar14,*(puVar14[2] + unaff_x24 * 0x18) + 0x51,auStack_ac,1);
            if (iVar5 < 0) {
                _printk(0x8000715,0x51,1,iVar5);
            }
            auStack_ac[0] = puVar16 + (iVar6 >> 3) * -8 | 0x80;
            iVar6 = regmap_bulk_write(*puVar14,*(puVar14[2] + unaff_x24 * 0x18) + 0x50,auStack_ac,1);
            if (iVar6 < 0) {
                _printk(0x8000715,0x50,1,iVar6);
            }
            auStack_ac[0] = 1;
            in_x2 = auStack_ac;
            uVar12 = regmap_bulk_write(*puVar14,*(puVar14[2] + unaff_x24 * 0x18) + 0xe5,in_x2,1);
            if (uVar12 < 0) {
                in_x2 = 0x1;
                uVar12 = _printk(0x8000715,0xe5,1,uVar12 & 0xffffffff);
            }
            puVar16 = iVar7 + 1U;
        } while (iVar7 + 1U < *(puVar14 + 0x1c) << 3);
    }
    iVar23 = sp_el0;
    if (*(iVar23 + 0x5e0) == auStack_ac._4_8_) {
        return uVar12;
    }
    auVar24 = __stack_chk_fail();
    puVar15 = auVar24._8_8_;
    *extraout_x18_00 = sym.adc5_gen3_isr;
    pcStack_f8 = sym.adc5_gen3_isr;
    iVar23 = sp_el0;
    iStack_108 = *(iVar23 + 0x5e0);
    uVar12 = auVar24._0_8_ & 0xffffffff;
    acStack_114[0] = '\0';
    uStack_118 = 0;
    auStack_11c[0] = 0;
    ppuStack_100 = &puStack_a0;
    uStack_f0 = unaff_x25;
    uStack_e0 = unaff_x24;
    uStack_d8 = unaff_x23;
    puStack_d0 = unaff_x22;
    puStack_c8 = puVar16;
    uStack_c0 = unaff_x20;
    puStack_b8 = puVar14;
    if (*(puVar15 + 4) != 0) {
        puVar16 = NULL;
        iVar6 = 0;
code_r0x08005240:
        if (*(puVar15[2] + iVar6 * 0x18 + 0x10) != auVar24._0_4_) goto code_r0x08005250;
        if (iVar6 < 0) goto code_r0x08005308;
        uVar9 = regmap_bulk_read(*puVar15,*(puVar15[2] + puVar16) + 0x4a,auStack_11c,1);
        if (uVar9 < 0) {
            uVar12 = uVar9;
            in_x2 = 0x1;
            _printk(0x800033a,0x4a,1,uVar12);
            uVar11 = 0x80005f5;
            goto code_r0x0800538c;
        }
        if ((auStack_11c[0] & 1) != 0) {
            complete(puVar15 + 7);
        }
        uVar9 = regmap_bulk_read(*puVar15,*(puVar15[2] + puVar16) + 0x48,&uStack_118,2);
        if (uVar9 < 0) {
            uVar12 = uVar9;
            in_x2 = 0x2;
            _printk(0x800033a,0x48,2,uVar12);
            uVar11 = 0x80006c6;
            goto code_r0x0800538c;
        }
        if (uStack_118 != '\0' || uStack_118._1_1_ != '\0') {
            queue_work_on(0x20,_adc_tm_absolute_rthr_gen3,puVar15 + 0x16);
        }
        in_x2 = acStack_114;
        uVar12 = regmap_bulk_read(*puVar15,*(puVar15[2] + puVar16) + 0x46,in_x2,1);
        if (uVar12 < 0) {
            uVar12 = uVar12 & 0xffffffff;
            in_x2 = 0x1;
            _printk(0x800033a,0x46,1,uVar12);
            uVar11 = 0x800084b;
            goto code_r0x0800538c;
        }
        if (-1 < acStack_114[0]) {
            uVar12 = 1;
            goto code_r0x08005394;
        }
        _printk(0x80002dc);
        if (*(puVar15 + 0x1c) != 0) {
            unaff_x22 = NULL;
            do {
                iVar6 = 0;
                uVar3 = *(puVar15[2] + unaff_x22 * 0x18);
                uStack_110 = 0;
                do {
                    iVar7 = regmap_bulk_read(*puVar15,uVar3 + iVar6,&uStack_110,8);
                    if (iVar7 < 0) {
                        _printk(0x8000384,iVar7);
                        break;
                    }
                    iVar6 = iVar6 + 8;
                } while (iVar6 != 0x100);
                uVar9 = unaff_x22 + 1;
                unaff_x22 = uVar9;
            } while (uVar9 < *(puVar15 + 0x1c));
        }
        uVar3 = *(puVar15 + 3);
        if (uVar3 != 0) {
            unaff_x22 = NULL;
            uStack_110 = 0;
            do {
                iVar6 = regmap_bulk_read(*puVar15,uVar3 + unaff_x22,&uStack_110,8);
                if (iVar6 < 0) {
                    _printk(0x8000384,iVar6);
                    break;
                }
                uVar9 = unaff_x22 + 8;
                unaff_x22 = uVar9;
            } while (uVar9 != 0x100);
        }
        uStack_110 = CONCAT71(uStack_110._1_7_,1);
        iVar6 = regmap_bulk_write(*puVar15,*(puVar15[2] + puVar16) + 0x4e,&uStack_110,1);
        if (iVar6 < 0) {
            uVar11 = 0x4e;
code_r0x08005530:
            in_x2 = 0x1;
            _printk(0x8000715,uVar11,1,iVar6);
            goto code_r0x08005390;
        }
        uStack_110 = uStack_110 & 0xffffffffffffff00;
        uVar12 = 1;
        iVar6 = regmap_bulk_write(*puVar15,*(puVar15[2] + puVar16) + 0x50,&uStack_110,1);
        if (iVar6 < 0) {
            uVar11 = 0x50;
            goto code_r0x08005530;
        }
        uStack_110 = CONCAT71(uStack_110._1_7_,1);
        in_x2 = &uStack_110;
        iVar6 = regmap_bulk_write(*puVar15,*(puVar15[2] + puVar16) + 0xe5,in_x2,1);
        if (iVar6 < 0) {
            uVar11 = 0xe5;
            goto code_r0x08005530;
        }
        goto code_r0x08005394;
    }
code_r0x08005308:
    uVar11 = 0x8000758;
code_r0x0800538c:
    _printk(uVar11,uVar12);
code_r0x08005390:
    uVar12 = 0;
code_r0x08005394:
    iVar23 = sp_el0;
    if (*(iVar23 + 0x5e0) == iStack_108) {
        return uVar12;
    }
    uVar10 = __stack_chk_fail();
    *extraout_x18_01 = sym.tm_handler_work;
    pcStack_178 = sym.tm_handler_work;
    iVar23 = sp_el0;
    auStack_198[2] = *(iVar23 + 0x5e0);
    uStack_19c = 0;
    auStack_198[0] = 0;
    auStack_198[1] = 0;
    auStack_1a0[0] = 0;
    uVar21 = uVar10;
    pppuStack_180 = &ppuStack_100;
    if (*(uVar10 - 0x8c) != 0) {
        uVar9 = 0;
        unaff_x22 = uVar10 - 0xb0;
        puVar15 = uVar10 - 0x58;
        uVar12 = 0xffffffff;
        do {
            iVar23 = *(uVar10 - 0x88);
            uStack_1a4 = 0;
            iVar22 = uVar9;
            iVar18 = iVar23 + uVar9 * 200;
            puVar19 = iVar18 + 0x38;
            if ((*puVar19 | 2) == 3) {
                uVar2 = *(iVar18 + 0x3c);
                mutex_lock(puVar15);
                uVar20 = *(iVar23 + iVar22 * 200 + 0x1c);
                uVar21 = uVar20;
                if (uVar20 != uVar12) {
                    uVar12 = 0x18;
                    uVar8 = regmap_bulk_read(*unaff_x22,*(*(uVar10 - 0xa0) + uVar21 * 0x18) + 0x48,&uStack_19c,2);
                    if (uVar8 < 0) {
                        puVar16 = uVar8;
                        in_x2 = 0x2;
                        _printk(0x800033a,0x48,2,puVar16);
                        uVar11 = 0x80006c6;
                    }
                    else {
                        uVar8 = regmap_bulk_write(*unaff_x22,*(*(uVar10 - 0xa0) + uVar21 * 0x18) + 0x4c,&uStack_19c,2
                                                 );
                        if (uVar8 < 0) {
                            puVar16 = uVar8;
                            in_x2 = 0x2;
                            _printk(0x8000715,0x4c,2,puVar16);
                            uVar11 = 0x800086e;
                        }
                        else {
                            auStack_1a0[0] = 0;
                            uVar8 = regmap_bulk_write(*unaff_x22,*(*(uVar10 - 0xa0) + uVar21 * 0x18) + 0x50,
                                                      auStack_1a0,1);
                            if (uVar8 < 0) {
                                puVar16 = uVar8;
                                in_x2 = 0x1;
                                _printk(0x8000715,0x50,1,puVar16);
                                uVar11 = 0x8000270;
                            }
                            else {
                                auStack_1a0[0] = 1;
                                uVar8 = regmap_bulk_write(*unaff_x22,*(*(uVar10 - 0xa0) + uVar21 * 0x18) + 0xe5,
                                                          auStack_1a0,1);
                                if (uVar8 < 0) {
                                    puVar16 = uVar8;
                                    in_x2 = 0x1;
                                    _printk(0x8000715,0xe5,1,puVar16);
                                    uVar11 = 0x80002fb;
                                }
                                else {
                                    in_x2 = auStack_198;
                                    uVar8 = regmap_bulk_read(*unaff_x22,*(*(uVar10 - 0xa0) + uVar21 * 0x18) + 0x5c,
                                                             in_x2,0x10);
                                    uVar12 = uVar20;
                                    if (-1 < uVar8) goto code_r0x08005718;
                                    puVar16 = uVar8;
                                    in_x2 = 0x10;
                                    _printk(0x800033a,0x5c,0x10,puVar16);
                                    uVar11 = 0x80009c0;
                                }
                            }
                        }
                    }
                    _printk(uVar11,puVar16);
                    uVar21 = mutex_unlock(puVar15);
                    break;
                }
code_r0x08005718:
                uVar21 = 1L << (uVar2 & 0x3f);
                if ((uVar21 & uStack_19c) == 0) {
                    puVar16 = NULL;
                }
                else {
                    puVar16 = *(iVar23 + iVar22 * 200 + 0x50) != 0;
                }
                if ((uVar21 & uStack_19c._1_1_) == 0) {
                    uVar20 = 0;
                }
                else {
                    uVar20 = *(iVar23 + iVar22 * 200 + 0x54) != 0;
                }
                uVar21 = mutex_unlock(puVar15);
                if ((puVar16 | uVar20) == 1) {
                    uVar2 = uVar2 << 1;
                    if ((0xf < uVar2) || (uVar13 = uVar2 | 1, 0xf < uVar13)) {
    //WARNING: Does not return
                        pcVar4 = SoftwareBreakpoint(0x5512,0x8005938);
                        (*pcVar4)();
                    }
                    if (*puVar19 == 3) {
                        if (uVar20 != 0) {
                            mutex_lock(puVar15);
                            iVar18 = iVar23 + iVar22 * 200;
                            *(iVar18 + 0x54) = 0;
                            *(iVar18 + 0x59) = 1;
                            mutex_unlock(puVar15);
                            in_x2 = iVar18 + 0x80;
                            uVar21 = queue_work_on(0x20,*(iVar18 + 0x78));
                        }
                        if (puVar16 != 0) {
                            mutex_lock(puVar15);
                            puVar16 = iVar23 + iVar22 * 200;
                            *(puVar16 + 10) = 0;
                            *(puVar16 + 0xb) = '\x01';
                            mutex_unlock(puVar15);
                            in_x2 = puVar16 + 0x10;
                            uVar21 = queue_work_on(0x20,puVar16[0xf]);
                        }
                    }
                    else {
                        iVar18 = iVar23 + iVar22 * 200;
                        in_x2 = *(uVar10 - 0x28);
                        in_x4 = &uStack_1a4;
                        puVar16 = CONCAT11(*(auStack_198 + uVar13),*(auStack_198 + uVar2));
                        iVar6 = qcom_adc5_hw_scale(*(iVar18 + 0x20),*(iVar18 + 0x10),in_x2,puVar16);
                        if (iVar6 < 0) {
                            in_x2 = puVar16;
                            uVar21 = _printk(0x8000782,iVar6);
                        }
                        else {
                            iVar23 = iVar23 + iVar22 * 200;
                            *(iVar23 + 0x70) = uStack_1a4;
                            *(iVar23 + 0x74) = 1;
                            uVar21 = thermal_zone_device_update(*(iVar23 + 0x48),2);
                        }
                    }
                }
            }
            uVar9 = uVar9 + 1;
        } while (uVar9 < *(uVar10 - 0x8c));
    }
    iVar23 = sp_el0;
    if (*(iVar23 + 0x5e0) == auStack_198[2]) {
        return uVar21;
    }
    auVar24 = __stack_chk_fail();
    *extraout_x18_02 = sym.adc5_gen3_read_raw;
    pcStack_1d8 = sym.adc5_gen3_read_raw;
    iVar23 = sp_el0;
    iStack_1e8 = *(iVar23 + 0x5e0);
    iVar22 = *(auVar24._0_8_ + 0x440);
    auStack_1ec[0] = 0;
    iVar17 = *(auVar24._8_8_ + 0x10);
    iVar18 = *(iVar22 + 0x28);
    iVar23 = iVar18 + iVar17 * 200;
    ppppuStack_1e0 = &pppuStack_180;
    puStack_1d0 = unaff_x22;
    puStack_1c8 = puVar16;
    uStack_1c0 = uVar12;
    puStack_1b8 = puVar15;
    if (in_x4 == NULL) {
        uVar12 = sym.adc5_gen3_do_conversion(iVar22,iVar23,auStack_1ec);
        if (-1 < uVar12) {
            uVar12 = 1;
            *in_x2 = auStack_1ec[0];
        }
    }
    else if (in_x4 == 0x1) {
        uVar12 = sym.adc5_gen3_do_conversion(iVar22,iVar23,auStack_1ec);
        if (-1 < uVar12) {
            iVar18 = iVar18 + iVar17 * 200;
            uVar9 = qcom_adc5_hw_scale(*(iVar18 + 0x20),*(iVar18 + 0x10),*(iVar22 + 0x88),auStack_1ec[0],in_x2);
            if (-1 < uVar9) {
                uVar9 = 1;
            }
            uVar12 = uVar9;
        }
    }
    else {
        uVar12 = 0xffffffea;
    }
    iVar23 = sp_el0;
    if (*(iVar23 + 0x5e0) != iStack_1e8) {
        auVar24 = __stack_chk_fail(uVar12);
        iVar23 = *(auVar24._0_8_ + 0x440);
        uVar9 = *(iVar23 + 0x24);
        if (uVar9 != 0) {
            uVar12 = 0;
            do {
                puVar19 = *(iVar23 + 0x28) + uVar12 * 200;
                if ((*puVar19 | puVar19[3] << 8) == *(auVar24._8_8_ + 0xc)) {
                    return uVar12;
                }
                uVar2 = uVar12 + 1;
                uVar12 = uVar2;
            } while (uVar9 != uVar2);
        }
        return 0xfffffffe;
    }
    return uVar12;
code_r0x08005250:
    iVar6 = iVar6 + 1;
    puVar16 = puVar16 + 3;
    if (*(puVar15 + 4) == iVar6) goto code_r0x08005308;
    goto code_r0x08005240;
}


// ===== sym.adc5_gen3_shutdown @ 0x0800503c (size 424) =====

int64_t sym.adc5_gen3_shutdown(int64_t arg1)

{
    uint32_t uVar1;
    uint16_t uVar2;
    code *pcVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    ulong uVar10;
    uint64_t *in_x2;
    uint *in_x4;
    uint64_t uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint64_t *puVar12;
    ulong *puVar13;
    uint64_t *unaff_x21;
    ulong *unaff_x22;
    int64_t iVar14;
    uint64_t uVar15;
    int64_t iVar16;
    uint32_t *puVar17;
    uint32_t uVar18;
    uint64_t uVar19;
    int64_t iVar20;
    int64_t iVar21;
    ulong unaff_x30;
    uchar auVar22 [16];
    uint16_t auStack_18c [2];
    int64_t iStack_188;
    uchar ***pppuStack_180;
    code *pcStack_178;
    ulong *puStack_170;
    uint64_t *puStack_168;
    uint64_t uStack_160;
    ulong *puStack_158;
    uint uStack_144;
    uchar auStack_140 [4];
    ushort uStack_13c;
    uint64_t auStack_138 [3];
    uchar **ppuStack_120;
    code *pcStack_118;
    uint8_t auStack_bc [4];
    ushort uStack_b8;
    char acStack_b4 [4];
    uint64_t uStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    uchar auStack_4c [12];
    
    *in_x18 = unaff_x30;
    iVar21 = sp_el0;
    auStack_4c._4_8_ = *(iVar21 + 0x5e0);
    puVar12 = *(arg1 + 0xa8);
    if (puVar12[4] != 0) {
        uVar8 = 0;
        unaff_x21 = 0x18;
        do {
            in_x2 = puVar12;
            arg1 = devm_free_irq(puVar12[1],*(puVar12[2] + uVar8 * 0x18 + 0x10));
            uVar8 = uVar8 + 1;
        } while (uVar8 < puVar12[4]);
    }
    if ((*(puVar12 + 0x1c) & 0x1fffffff) != 0) {
        unaff_x21 = NULL;
        unaff_x22 = 0x18;
        do {
            iVar6 = unaff_x21;
            iVar5 = iVar6 + 7;
            if (-1 < iVar6) {
                iVar5 = iVar6;
            }
            uVar15 = iVar5 >> 3;
            auStack_4c[0] = 0;
            iVar4 = regmap_bulk_write(*puVar12,*(puVar12[2] + uVar15 * 0x18) + 0x51,auStack_4c,1);
            if (iVar4 < 0) {
                _printk(0x8000715,0x51,1,iVar4);
            }
            auStack_4c[0] = unaff_x21 + (iVar5 >> 3) * -8 | 0x80;
            iVar5 = regmap_bulk_write(*puVar12,*(puVar12[2] + uVar15 * 0x18) + 0x50,auStack_4c,1);
            if (iVar5 < 0) {
                _printk(0x8000715,0x50,1,iVar5);
            }
            auStack_4c[0] = 1;
            in_x2 = auStack_4c;
            arg1 = regmap_bulk_write(*puVar12,*(puVar12[2] + uVar15 * 0x18) + 0xe5,in_x2,1);
            if (arg1 < 0) {
                in_x2 = 0x1;
                arg1 = _printk(0x8000715,0xe5,1,arg1 & 0xffffffff);
            }
            unaff_x21 = iVar6 + 1U;
        } while (iVar6 + 1U < *(puVar12 + 0x1c) << 3);
    }
    iVar21 = sp_el0;
    if (*(iVar21 + 0x5e0) == auStack_4c._4_8_) {
        return arg1;
    }
    auVar22 = __stack_chk_fail();
    puVar13 = auVar22._8_8_;
    *extraout_x18 = sym.adc5_gen3_isr;
    pcStack_98 = sym.adc5_gen3_isr;
    iVar21 = sp_el0;
    iStack_a8 = *(iVar21 + 0x5e0);
    uVar15 = auVar22._0_8_ & 0xffffffff;
    acStack_b4[0] = '\0';
    uStack_b8 = 0;
    auStack_bc[0] = 0;
    puStack_a0 = &stack0xffffffffffffffc0;
    if (*(puVar13 + 4) != 0) {
        unaff_x21 = NULL;
        iVar5 = 0;
code_r0x08005240:
        if (*(puVar13[2] + iVar5 * 0x18 + 0x10) != auVar22._0_4_) goto code_r0x08005250;
        if (iVar5 < 0) goto code_r0x08005308;
        uVar8 = regmap_bulk_read(*puVar13,*(puVar13[2] + unaff_x21) + 0x4a,auStack_bc,1);
        if (uVar8 < 0) {
            uVar15 = uVar8;
            in_x2 = 0x1;
            _printk(0x800033a,0x4a,1,uVar15);
            uVar10 = 0x80005f5;
            goto code_r0x0800538c;
        }
        if ((auStack_bc[0] & 1) != 0) {
            complete(puVar13 + 7);
        }
        uVar8 = regmap_bulk_read(*puVar13,*(puVar13[2] + unaff_x21) + 0x48,&uStack_b8,2);
        if (uVar8 < 0) {
            uVar15 = uVar8;
            in_x2 = 0x2;
            _printk(0x800033a,0x48,2,uVar15);
            uVar10 = 0x80006c6;
            goto code_r0x0800538c;
        }
        if (uStack_b8 != '\0' || uStack_b8._1_1_ != '\0') {
            queue_work_on(0x20,_adc_tm_absolute_rthr_gen3,puVar13 + 0x16);
        }
        in_x2 = acStack_b4;
        uVar15 = regmap_bulk_read(*puVar13,*(puVar13[2] + unaff_x21) + 0x46,in_x2,1);
        if (uVar15 < 0) {
            uVar15 = uVar15 & 0xffffffff;
            in_x2 = 0x1;
            _printk(0x800033a,0x46,1,uVar15);
            uVar10 = 0x800084b;
            goto code_r0x0800538c;
        }
        if (-1 < acStack_b4[0]) {
            uVar15 = 1;
            goto code_r0x08005394;
        }
        _printk(0x80002dc);
        if (*(puVar13 + 0x1c) != 0) {
            unaff_x22 = NULL;
            do {
                iVar5 = 0;
                uVar2 = *(puVar13[2] + unaff_x22 * 0x18);
                uStack_b0 = 0;
                do {
                    iVar6 = regmap_bulk_read(*puVar13,uVar2 + iVar5,&uStack_b0,8);
                    if (iVar6 < 0) {
                        _printk(0x8000384,iVar6);
                        break;
                    }
                    iVar5 = iVar5 + 8;
                } while (iVar5 != 0x100);
                uVar8 = unaff_x22 + 1;
                unaff_x22 = uVar8;
            } while (uVar8 < *(puVar13 + 0x1c));
        }
        uVar2 = *(puVar13 + 3);
        if (uVar2 != 0) {
            unaff_x22 = NULL;
            uStack_b0 = 0;
            do {
                iVar5 = regmap_bulk_read(*puVar13,uVar2 + unaff_x22,&uStack_b0,8);
                if (iVar5 < 0) {
                    _printk(0x8000384,iVar5);
                    break;
                }
                uVar8 = unaff_x22 + 8;
                unaff_x22 = uVar8;
            } while (uVar8 != 0x100);
        }
        uStack_b0 = CONCAT71(uStack_b0._1_7_,1);
        iVar5 = regmap_bulk_write(*puVar13,*(puVar13[2] + unaff_x21) + 0x4e,&uStack_b0,1);
        if (iVar5 < 0) {
            uVar10 = 0x4e;
code_r0x08005530:
            in_x2 = 0x1;
            _printk(0x8000715,uVar10,1,iVar5);
            goto code_r0x08005390;
        }
        uStack_b0 = uStack_b0 & 0xffffffffffffff00;
        uVar15 = 1;
        iVar5 = regmap_bulk_write(*puVar13,*(puVar13[2] + unaff_x21) + 0x50,&uStack_b0,1);
        if (iVar5 < 0) {
            uVar10 = 0x50;
            goto code_r0x08005530;
        }
        uStack_b0 = CONCAT71(uStack_b0._1_7_,1);
        in_x2 = &uStack_b0;
        iVar5 = regmap_bulk_write(*puVar13,*(puVar13[2] + unaff_x21) + 0xe5,in_x2,1);
        if (iVar5 < 0) {
            uVar10 = 0xe5;
            goto code_r0x08005530;
        }
        goto code_r0x08005394;
    }
code_r0x08005308:
    uVar10 = 0x8000758;
code_r0x0800538c:
    _printk(uVar10,uVar15);
code_r0x08005390:
    uVar15 = 0;
code_r0x08005394:
    iVar21 = sp_el0;
    if (*(iVar21 + 0x5e0) == iStack_a8) {
        return uVar15;
    }
    uVar9 = __stack_chk_fail();
    *extraout_x18_00 = sym.tm_handler_work;
    pcStack_118 = sym.tm_handler_work;
    iVar21 = sp_el0;
    auStack_138[2] = *(iVar21 + 0x5e0);
    uStack_13c = 0;
    auStack_138[0] = 0;
    auStack_138[1] = 0;
    auStack_140[0] = 0;
    uVar19 = uVar9;
    ppuStack_120 = &puStack_a0;
    if (*(uVar9 - 0x8c) != 0) {
        uVar8 = 0;
        unaff_x22 = uVar9 - 0xb0;
        puVar13 = uVar9 - 0x58;
        uVar15 = 0xffffffff;
        do {
            iVar21 = *(uVar9 - 0x88);
            uStack_144 = 0;
            iVar20 = uVar8;
            iVar16 = iVar21 + uVar8 * 200;
            puVar17 = iVar16 + 0x38;
            if ((*puVar17 | 2) == 3) {
                uVar1 = *(iVar16 + 0x3c);
                mutex_lock(puVar13);
                uVar18 = *(iVar21 + iVar20 * 200 + 0x1c);
                uVar19 = uVar18;
                if (uVar18 != uVar15) {
                    uVar15 = 0x18;
                    uVar7 = regmap_bulk_read(*unaff_x22,*(*(uVar9 - 0xa0) + uVar19 * 0x18) + 0x48,&uStack_13c,2);
                    if (uVar7 < 0) {
                        unaff_x21 = uVar7;
                        in_x2 = 0x2;
                        _printk(0x800033a,0x48,2,unaff_x21);
                        uVar10 = 0x80006c6;
                    }
                    else {
                        uVar7 = regmap_bulk_write(*unaff_x22,*(*(uVar9 - 0xa0) + uVar19 * 0x18) + 0x4c,&uStack_13c,2)
                        ;
                        if (uVar7 < 0) {
                            unaff_x21 = uVar7;
                            in_x2 = 0x2;
                            _printk(0x8000715,0x4c,2,unaff_x21);
                            uVar10 = 0x800086e;
                        }
                        else {
                            auStack_140[0] = 0;
                            uVar7 = regmap_bulk_write(*unaff_x22,*(*(uVar9 - 0xa0) + uVar19 * 0x18) + 0x50,auStack_140
                                                      ,1);
                            if (uVar7 < 0) {
                                unaff_x21 = uVar7;
                                in_x2 = 0x1;
                                _printk(0x8000715,0x50,1,unaff_x21);
                                uVar10 = 0x8000270;
                            }
                            else {
                                auStack_140[0] = 1;
                                uVar7 = regmap_bulk_write(*unaff_x22,*(*(uVar9 - 0xa0) + uVar19 * 0x18) + 0xe5,
                                                          auStack_140,1);
                                if (uVar7 < 0) {
                                    unaff_x21 = uVar7;
                                    in_x2 = 0x1;
                                    _printk(0x8000715,0xe5,1,unaff_x21);
                                    uVar10 = 0x80002fb;
                                }
                                else {
                                    in_x2 = auStack_138;
                                    uVar7 = regmap_bulk_read(*unaff_x22,*(*(uVar9 - 0xa0) + uVar19 * 0x18) + 0x5c,
                                                             in_x2,0x10);
                                    uVar15 = uVar18;
                                    if (-1 < uVar7) goto code_r0x08005718;
                                    unaff_x21 = uVar7;
                                    in_x2 = 0x10;
                                    _printk(0x800033a,0x5c,0x10,unaff_x21);
                                    uVar10 = 0x80009c0;
                                }
                            }
                        }
                    }
                    _printk(uVar10,unaff_x21);
                    uVar19 = mutex_unlock(puVar13);
                    break;
                }
code_r0x08005718:
                uVar19 = 1L << (uVar1 & 0x3f);
                if ((uVar19 & uStack_13c) == 0) {
                    unaff_x21 = NULL;
                }
                else {
                    unaff_x21 = *(iVar21 + iVar20 * 200 + 0x50) != 0;
                }
                if ((uVar19 & uStack_13c._1_1_) == 0) {
                    uVar18 = 0;
                }
                else {
                    uVar18 = *(iVar21 + iVar20 * 200 + 0x54) != 0;
                }
                uVar19 = mutex_unlock(puVar13);
                if ((unaff_x21 | uVar18) == 1) {
                    uVar1 = uVar1 << 1;
                    if ((0xf < uVar1) || (uVar11 = uVar1 | 1, 0xf < uVar11)) {
    //WARNING: Does not return
                        pcVar3 = SoftwareBreakpoint(0x5512,0x8005938);
                        (*pcVar3)();
                    }
                    if (*puVar17 == 3) {
                        if (uVar18 != 0) {
                            mutex_lock(puVar13);
                            iVar16 = iVar21 + iVar20 * 200;
                            *(iVar16 + 0x54) = 0;
                            *(iVar16 + 0x59) = 1;
                            mutex_unlock(puVar13);
                            in_x2 = iVar16 + 0x80;
                            uVar19 = queue_work_on(0x20,*(iVar16 + 0x78));
                        }
                        if (unaff_x21 != 0) {
                            mutex_lock(puVar13);
                            unaff_x21 = iVar21 + iVar20 * 200;
                            *(unaff_x21 + 10) = 0;
                            *(unaff_x21 + 0xb) = '\x01';
                            mutex_unlock(puVar13);
                            in_x2 = unaff_x21 + 0x10;
                            uVar19 = queue_work_on(0x20,unaff_x21[0xf]);
                        }
                    }
                    else {
                        iVar16 = iVar21 + iVar20 * 200;
                        in_x2 = *(uVar9 - 0x28);
                        in_x4 = &uStack_144;
                        unaff_x21 = CONCAT11(*(auStack_138 + uVar11),*(auStack_138 + uVar1));
                        iVar5 = qcom_adc5_hw_scale(*(iVar16 + 0x20),*(iVar16 + 0x10),in_x2,unaff_x21);
                        if (iVar5 < 0) {
                            in_x2 = unaff_x21;
                            uVar19 = _printk(0x8000782,iVar5);
                        }
                        else {
                            iVar21 = iVar21 + iVar20 * 200;
                            *(iVar21 + 0x70) = uStack_144;
                            *(iVar21 + 0x74) = 1;
                            uVar19 = thermal_zone_device_update(*(iVar21 + 0x48),2);
                        }
                    }
                }
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 < *(uVar9 - 0x8c));
    }
    iVar21 = sp_el0;
    if (*(iVar21 + 0x5e0) == auStack_138[2]) {
        return uVar19;
    }
    auVar22 = __stack_chk_fail();
    *extraout_x18_01 = sym.adc5_gen3_read_raw;
    pcStack_178 = sym.adc5_gen3_read_raw;
    iVar21 = sp_el0;
    iStack_188 = *(iVar21 + 0x5e0);
    iVar20 = *(auVar22._0_8_ + 0x440);
    auStack_18c[0] = 0;
    iVar14 = *(auVar22._8_8_ + 0x10);
    iVar16 = *(iVar20 + 0x28);
    iVar21 = iVar16 + iVar14 * 200;
    pppuStack_180 = &ppuStack_120;
    puStack_170 = unaff_x22;
    puStack_168 = unaff_x21;
    uStack_160 = uVar15;
    puStack_158 = puVar13;
    if (in_x4 == NULL) {
        uVar15 = sym.adc5_gen3_do_conversion(iVar20,iVar21,auStack_18c);
        if (-1 < uVar15) {
            uVar15 = 1;
            *in_x2 = auStack_18c[0];
        }
    }
    else if (in_x4 == 0x1) {
        uVar15 = sym.adc5_gen3_do_conversion(iVar20,iVar21,auStack_18c);
        if (-1 < uVar15) {
            iVar16 = iVar16 + iVar14 * 200;
            uVar8 = qcom_adc5_hw_scale(*(iVar16 + 0x20),*(iVar16 + 0x10),*(iVar20 + 0x88),auStack_18c[0],in_x2);
            if (-1 < uVar8) {
                uVar8 = 1;
            }
            uVar15 = uVar8;
        }
    }
    else {
        uVar15 = 0xffffffea;
    }
    iVar21 = sp_el0;
    if (*(iVar21 + 0x5e0) != iStack_188) {
        auVar22 = __stack_chk_fail(uVar15);
        iVar21 = *(auVar22._0_8_ + 0x440);
        uVar8 = *(iVar21 + 0x24);
        if (uVar8 != 0) {
            uVar15 = 0;
            do {
                puVar17 = *(iVar21 + 0x28) + uVar15 * 200;
                if ((*puVar17 | puVar17[3] << 8) == *(auVar22._8_8_ + 0xc)) {
                    return uVar15;
                }
                uVar1 = uVar15 + 1;
                uVar15 = uVar1;
            } while (uVar8 != uVar1);
        }
        return 0xfffffffe;
    }
    return uVar15;
code_r0x08005250:
    iVar5 = iVar5 + 1;
    unaff_x21 = unaff_x21 + 3;
    if (*(puVar13 + 4) == iVar5) goto code_r0x08005308;
    goto code_r0x08005240;
}


// ===== sym.adc5_gen3_isr @ 0x080051e4 (size 880) =====

uint64_t sym.adc5_gen3_isr(char arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint16_t uVar2;
    code *pcVar3;
    int iVar4;
    int iVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong uVar9;
    uint64_t *in_x2;
    uint *in_x4;
    uint64_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar11;
    uint64_t *unaff_x21;
    ulong *unaff_x22;
    int64_t iVar12;
    int64_t iVar13;
    uint32_t *puVar14;
    uint32_t uVar15;
    uint64_t uVar16;
    int64_t iVar17;
    int64_t iVar18;
    ulong unaff_x30;
    uchar auVar19 [16];
    uint16_t auStack_13c [2];
    int64_t iStack_138;
    uchar **ppuStack_130;
    code *pcStack_128;
    ulong *puStack_120;
    uint64_t *puStack_118;
    uint64_t uStack_110;
    int64_t iStack_108;
    uint uStack_f4;
    uchar auStack_f0 [4];
    ushort uStack_ec;
    uint64_t auStack_e8 [3];
    uchar *puStack_d0;
    code *pcStack_c8;
    uint8_t auStack_6c [4];
    ushort uStack_68;
    char acStack_64 [4];
    uint64_t uStack_60;
    int64_t iStack_58;
    
    uVar7 = arg1;
    *in_x18 = unaff_x30;
    iVar18 = sp_el0;
    iStack_58 = *(iVar18 + 0x5e0);
    acStack_64[0] = '\0';
    uStack_68 = 0;
    auStack_6c[0] = 0;
    if (*(arg2 + 0x20) != 0) {
        unaff_x21 = NULL;
        iVar5 = 0;
code_r0x08005240:
        if (*(*(arg2 + 0x10) + iVar5 * 0x18 + 0x10) != arg1) goto code_r0x08005250;
        if (iVar5 < 0) goto code_r0x08005308;
        uVar7 = regmap_bulk_read(*arg2,*(*(arg2 + 0x10) + unaff_x21) + 0x4a,auStack_6c,1);
        if (uVar7 < 0) {
            in_x2 = 0x1;
            _printk(0x800033a,0x4a,1,uVar7);
            uVar9 = 0x80005f5;
            goto code_r0x0800538c;
        }
        if ((auStack_6c[0] & 1) != 0) {
            complete(arg2 + 0x38);
        }
        uVar7 = regmap_bulk_read(*arg2,*(*(arg2 + 0x10) + unaff_x21) + 0x48,&uStack_68,2);
        if (uVar7 < 0) {
            in_x2 = 0x2;
            _printk(0x800033a,0x48,2,uVar7);
            uVar9 = 0x80006c6;
            goto code_r0x0800538c;
        }
        if (uStack_68 != '\0' || uStack_68._1_1_ != '\0') {
            queue_work_on(0x20,_adc_tm_absolute_rthr_gen3,arg2 + 0xb0);
        }
        in_x2 = acStack_64;
        uVar7 = regmap_bulk_read(*arg2,*(*(arg2 + 0x10) + unaff_x21) + 0x46,in_x2,1);
        if (uVar7 < 0) {
            in_x2 = 0x1;
            _printk(0x800033a,0x46,1,uVar7);
            uVar9 = 0x800084b;
            goto code_r0x0800538c;
        }
        if (-1 < acStack_64[0]) {
            uVar11 = 1;
            goto code_r0x08005394;
        }
        _printk(0x80002dc);
        if (*(arg2 + 0x1c) != 0) {
            unaff_x22 = NULL;
            do {
                iVar5 = 0;
                uVar2 = *(*(arg2 + 0x10) + unaff_x22 * 0x18);
                uStack_60 = 0;
                do {
                    iVar4 = regmap_bulk_read(*arg2,uVar2 + iVar5,&uStack_60,8);
                    if (iVar4 < 0) {
                        _printk(0x8000384,iVar4);
                        break;
                    }
                    iVar5 = iVar5 + 8;
                } while (iVar5 != 0x100);
                uVar7 = unaff_x22 + 1;
                unaff_x22 = uVar7;
            } while (uVar7 < *(arg2 + 0x1c));
        }
        uVar2 = *(arg2 + 0x18);
        if (uVar2 != 0) {
            unaff_x22 = NULL;
            uStack_60 = 0;
            do {
                iVar5 = regmap_bulk_read(*arg2,uVar2 + unaff_x22,&uStack_60,8);
                if (iVar5 < 0) {
                    _printk(0x8000384,iVar5);
                    break;
                }
                uVar7 = unaff_x22 + 8;
                unaff_x22 = uVar7;
            } while (uVar7 != 0x100);
        }
        uStack_60 = CONCAT71(uStack_60._1_7_,1);
        iVar5 = regmap_bulk_write(*arg2,*(*(arg2 + 0x10) + unaff_x21) + 0x4e,&uStack_60,1);
        if (iVar5 < 0) {
            uVar9 = 0x4e;
code_r0x08005530:
            in_x2 = 0x1;
            _printk(0x8000715,uVar9,1,iVar5);
            goto code_r0x08005390;
        }
        uStack_60 = uStack_60 & 0xffffffffffffff00;
        uVar11 = 1;
        iVar5 = regmap_bulk_write(*arg2,*(*(arg2 + 0x10) + unaff_x21) + 0x50,&uStack_60,1);
        if (iVar5 < 0) {
            uVar9 = 0x50;
            goto code_r0x08005530;
        }
        uStack_60 = CONCAT71(uStack_60._1_7_,1);
        in_x2 = &uStack_60;
        iVar5 = regmap_bulk_write(*arg2,*(*(arg2 + 0x10) + unaff_x21) + 0xe5,in_x2,1);
        if (iVar5 < 0) {
            uVar9 = 0xe5;
            goto code_r0x08005530;
        }
        goto code_r0x08005394;
    }
code_r0x08005308:
    uVar9 = 0x8000758;
code_r0x0800538c:
    _printk(uVar9,uVar7);
code_r0x08005390:
    uVar11 = 0;
code_r0x08005394:
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) == iStack_58) {
        return uVar11;
    }
    uVar8 = __stack_chk_fail();
    *extraout_x18 = sym.tm_handler_work;
    pcStack_c8 = sym.tm_handler_work;
    iVar18 = sp_el0;
    auStack_e8[2] = *(iVar18 + 0x5e0);
    uStack_ec = 0;
    auStack_e8[0] = 0;
    auStack_e8[1] = 0;
    auStack_f0[0] = 0;
    uVar16 = uVar8;
    puStack_d0 = &stack0xffffffffffffffb0;
    if (*(uVar8 - 0x8c) != 0) {
        uVar7 = 0;
        unaff_x22 = uVar8 - 0xb0;
        arg2 = uVar8 - 0x58;
        uVar11 = 0xffffffff;
        do {
            iVar18 = *(uVar8 - 0x88);
            uStack_f4 = 0;
            iVar17 = uVar7;
            iVar13 = iVar18 + uVar7 * 200;
            puVar14 = iVar13 + 0x38;
            if ((*puVar14 | 2) == 3) {
                uVar1 = *(iVar13 + 0x3c);
                mutex_lock(arg2);
                uVar15 = *(iVar18 + iVar17 * 200 + 0x1c);
                uVar16 = uVar15;
                if (uVar15 != uVar11) {
                    uVar11 = 0x18;
                    uVar6 = regmap_bulk_read(*unaff_x22,*(*(uVar8 - 0xa0) + uVar16 * 0x18) + 0x48,&uStack_ec,2);
                    if (uVar6 < 0) {
                        unaff_x21 = uVar6;
                        in_x2 = 0x2;
                        _printk(0x800033a,0x48,2,unaff_x21);
                        uVar9 = 0x80006c6;
                    }
                    else {
                        uVar6 = regmap_bulk_write(*unaff_x22,*(*(uVar8 - 0xa0) + uVar16 * 0x18) + 0x4c,&uStack_ec,2);
                        if (uVar6 < 0) {
                            unaff_x21 = uVar6;
                            in_x2 = 0x2;
                            _printk(0x8000715,0x4c,2,unaff_x21);
                            uVar9 = 0x800086e;
                        }
                        else {
                            auStack_f0[0] = 0;
                            uVar6 = regmap_bulk_write(*unaff_x22,*(*(uVar8 - 0xa0) + uVar16 * 0x18) + 0x50,auStack_f0
                                                      ,1);
                            if (uVar6 < 0) {
                                unaff_x21 = uVar6;
                                in_x2 = 0x1;
                                _printk(0x8000715,0x50,1,unaff_x21);
                                uVar9 = 0x8000270;
                            }
                            else {
                                auStack_f0[0] = 1;
                                uVar6 = regmap_bulk_write(*unaff_x22,*(*(uVar8 - 0xa0) + uVar16 * 0x18) + 0xe5,
                                                          auStack_f0,1);
                                if (uVar6 < 0) {
                                    unaff_x21 = uVar6;
                                    in_x2 = 0x1;
                                    _printk(0x8000715,0xe5,1,unaff_x21);
                                    uVar9 = 0x80002fb;
                                }
                                else {
                                    in_x2 = auStack_e8;
                                    uVar6 = regmap_bulk_read(*unaff_x22,*(*(uVar8 - 0xa0) + uVar16 * 0x18) + 0x5c,
                                                             in_x2,0x10);
                                    uVar11 = uVar15;
                                    if (-1 < uVar6) goto code_r0x08005718;
                                    unaff_x21 = uVar6;
                                    in_x2 = 0x10;
                                    _printk(0x800033a,0x5c,0x10,unaff_x21);
                                    uVar9 = 0x80009c0;
                                }
                            }
                        }
                    }
                    _printk(uVar9,unaff_x21);
                    uVar16 = mutex_unlock(arg2);
                    break;
                }
code_r0x08005718:
                uVar16 = 1L << (uVar1 & 0x3f);
                if ((uVar16 & uStack_ec) == 0) {
                    unaff_x21 = NULL;
                }
                else {
                    unaff_x21 = *(iVar18 + iVar17 * 200 + 0x50) != 0;
                }
                if ((uVar16 & uStack_ec._1_1_) == 0) {
                    uVar15 = 0;
                }
                else {
                    uVar15 = *(iVar18 + iVar17 * 200 + 0x54) != 0;
                }
                uVar16 = mutex_unlock(arg2);
                if ((unaff_x21 | uVar15) == 1) {
                    uVar1 = uVar1 << 1;
                    if ((0xf < uVar1) || (uVar10 = uVar1 | 1, 0xf < uVar10)) {
    //WARNING: Does not return
                        pcVar3 = SoftwareBreakpoint(0x5512,0x8005938);
                        (*pcVar3)();
                    }
                    if (*puVar14 == 3) {
                        if (uVar15 != 0) {
                            mutex_lock(arg2);
                            iVar13 = iVar18 + iVar17 * 200;
                            *(iVar13 + 0x54) = 0;
                            *(iVar13 + 0x59) = 1;
                            mutex_unlock(arg2);
                            in_x2 = iVar13 + 0x80;
                            uVar16 = queue_work_on(0x20,*(iVar13 + 0x78));
                        }
                        if (unaff_x21 != 0) {
                            mutex_lock(arg2);
                            unaff_x21 = iVar18 + iVar17 * 200;
                            *(unaff_x21 + 10) = 0;
                            *(unaff_x21 + 0xb) = '\x01';
                            mutex_unlock(arg2);
                            in_x2 = unaff_x21 + 0x10;
                            uVar16 = queue_work_on(0x20,unaff_x21[0xf]);
                        }
                    }
                    else {
                        iVar13 = iVar18 + iVar17 * 200;
                        in_x2 = *(uVar8 - 0x28);
                        in_x4 = &uStack_f4;
                        unaff_x21 = CONCAT11(*(auStack_e8 + uVar10),*(auStack_e8 + uVar1));
                        iVar5 = qcom_adc5_hw_scale(*(iVar13 + 0x20),*(iVar13 + 0x10),in_x2,unaff_x21);
                        if (iVar5 < 0) {
                            in_x2 = unaff_x21;
                            uVar16 = _printk(0x8000782,iVar5);
                        }
                        else {
                            iVar18 = iVar18 + iVar17 * 200;
                            *(iVar18 + 0x70) = uStack_f4;
                            *(iVar18 + 0x74) = 1;
                            uVar16 = thermal_zone_device_update(*(iVar18 + 0x48),2);
                        }
                    }
                }
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 < *(uVar8 - 0x8c));
    }
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) == auStack_e8[2]) {
        return uVar16;
    }
    auVar19 = __stack_chk_fail();
    *extraout_x18_00 = sym.adc5_gen3_read_raw;
    pcStack_128 = sym.adc5_gen3_read_raw;
    iVar18 = sp_el0;
    iStack_138 = *(iVar18 + 0x5e0);
    iVar17 = *(auVar19._0_8_ + 0x440);
    auStack_13c[0] = 0;
    iVar12 = *(auVar19._8_8_ + 0x10);
    iVar13 = *(iVar17 + 0x28);
    iVar18 = iVar13 + iVar12 * 200;
    ppuStack_130 = &puStack_d0;
    puStack_120 = unaff_x22;
    puStack_118 = unaff_x21;
    uStack_110 = uVar11;
    iStack_108 = arg2;
    if (in_x4 == NULL) {
        uVar11 = sym.adc5_gen3_do_conversion(iVar17,iVar18,auStack_13c);
        if (-1 < uVar11) {
            uVar11 = 1;
            *in_x2 = auStack_13c[0];
        }
    }
    else if (in_x4 == 0x1) {
        uVar11 = sym.adc5_gen3_do_conversion(iVar17,iVar18,auStack_13c);
        if (-1 < uVar11) {
            iVar13 = iVar13 + iVar12 * 200;
            uVar7 = qcom_adc5_hw_scale(*(iVar13 + 0x20),*(iVar13 + 0x10),*(iVar17 + 0x88),auStack_13c[0],in_x2);
            if (-1 < uVar7) {
                uVar7 = 1;
            }
            uVar11 = uVar7;
        }
    }
    else {
        uVar11 = 0xffffffea;
    }
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) != iStack_138) {
        auVar19 = __stack_chk_fail(uVar11);
        iVar18 = *(auVar19._0_8_ + 0x440);
        uVar7 = *(iVar18 + 0x24);
        if (uVar7 != 0) {
            uVar11 = 0;
            do {
                puVar14 = *(iVar18 + 0x28) + uVar11 * 200;
                if ((*puVar14 | puVar14[3] << 8) == *(auVar19._8_8_ + 0xc)) {
                    return uVar11;
                }
                uVar1 = uVar11 + 1;
                uVar11 = uVar1;
            } while (uVar7 != uVar1);
        }
        return 0xfffffffe;
    }
    return uVar11;
code_r0x08005250:
    iVar5 = iVar5 + 1;
    unaff_x21 = unaff_x21 + 3;
    if (*(arg2 + 0x20) == iVar5) goto code_r0x08005308;
    goto code_r0x08005240;
}


// ===== sym.tm_handler_work @ 0x08005554 (size 1000) =====

uint64_t sym.tm_handler_work(int64_t arg1)

{
    uint32_t uVar1;
    code *pcVar2;
    int iVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    ulong uVar6;
    uint32_t *in_x2;
    uint *in_x4;
    uint64_t uVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t unaff_x19;
    uint64_t unaff_x20;
    uint32_t *unaff_x21;
    ulong *unaff_x22;
    int64_t iVar8;
    int64_t iVar9;
    uint32_t *puVar10;
    uint32_t uVar11;
    uint64_t uVar12;
    int64_t iVar13;
    int64_t iVar14;
    ulong unaff_x30;
    uchar auVar15 [16];
    uint16_t auStack_cc [2];
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    ulong *puStack_b0;
    uint32_t *puStack_a8;
    uint64_t uStack_a0;
    int64_t iStack_98;
    uint uStack_84;
    uchar auStack_80 [4];
    ushort uStack_7c;
    uint32_t auStack_78 [4];
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iStack_68 = *(iVar14 + 0x5e0);
    uStack_7c = 0;
    auStack_78[0] = 0;
    auStack_78[1] = 0;
    auStack_78[2] = 0;
    auStack_78[3] = 0;
    auStack_80[0] = 0;
    uVar12 = arg1;
    if (*(arg1 + -0x8c) != 0) {
        uVar5 = 0;
        unaff_x22 = arg1 + -0xb0;
        unaff_x19 = arg1 + -0x58;
        unaff_x20 = 0xffffffff;
        do {
            iVar14 = *(arg1 + -0x88);
            uStack_84 = 0;
            iVar13 = uVar5;
            iVar9 = iVar14 + uVar5 * 200;
            puVar10 = iVar9 + 0x38;
            if ((*puVar10 | 2) == 3) {
                uVar1 = *(iVar9 + 0x3c);
                mutex_lock(unaff_x19);
                uVar11 = *(iVar14 + iVar13 * 200 + 0x1c);
                uVar12 = uVar11;
                if (uVar11 != unaff_x20) {
                    unaff_x20 = 0x18;
                    uVar4 = regmap_bulk_read(*unaff_x22,*(*(arg1 + -0xa0) + uVar12 * 0x18) + 0x48,&uStack_7c,2);
                    if (uVar4 < 0) {
                        unaff_x21 = uVar4;
                        in_x2 = 0x2;
                        _printk(0x800033a,0x48,2,unaff_x21);
                        uVar6 = 0x80006c6;
                    }
                    else {
                        uVar4 = regmap_bulk_write(*unaff_x22,*(*(arg1 + -0xa0) + uVar12 * 0x18) + 0x4c,&uStack_7c,2);
                        if (uVar4 < 0) {
                            unaff_x21 = uVar4;
                            in_x2 = 0x2;
                            _printk(0x8000715,0x4c,2,unaff_x21);
                            uVar6 = 0x800086e;
                        }
                        else {
                            auStack_80[0] = 0;
                            uVar4 = regmap_bulk_write(*unaff_x22,*(*(arg1 + -0xa0) + uVar12 * 0x18) + 0x50,auStack_80
                                                      ,1);
                            if (uVar4 < 0) {
                                unaff_x21 = uVar4;
                                in_x2 = 0x1;
                                _printk(0x8000715,0x50,1,unaff_x21);
                                uVar6 = 0x8000270;
                            }
                            else {
                                auStack_80[0] = 1;
                                uVar4 = regmap_bulk_write(*unaff_x22,*(*(arg1 + -0xa0) + uVar12 * 0x18) + 0xe5,
                                                          auStack_80,1);
                                if (uVar4 < 0) {
                                    unaff_x21 = uVar4;
                                    in_x2 = 0x1;
                                    _printk(0x8000715,0xe5,1,unaff_x21);
                                    uVar6 = 0x80002fb;
                                }
                                else {
                                    in_x2 = auStack_78;
                                    uVar4 = regmap_bulk_read(*unaff_x22,*(*(arg1 + -0xa0) + uVar12 * 0x18) + 0x5c,
                                                             in_x2,0x10);
                                    unaff_x20 = uVar11;
                                    if (-1 < uVar4) goto code_r0x08005718;
                                    unaff_x21 = uVar4;
                                    in_x2 = 0x10;
                                    _printk(0x800033a,0x5c,0x10,unaff_x21);
                                    uVar6 = 0x80009c0;
                                }
                            }
                        }
                    }
                    _printk(uVar6,unaff_x21);
                    uVar12 = mutex_unlock(unaff_x19);
                    break;
                }
code_r0x08005718:
                uVar12 = 1L << (uVar1 & 0x3f);
                if ((uVar12 & uStack_7c) == 0) {
                    unaff_x21 = NULL;
                }
                else {
                    unaff_x21 = *(iVar14 + iVar13 * 200 + 0x50) != 0;
                }
                if ((uVar12 & uStack_7c._1_1_) == 0) {
                    uVar11 = 0;
                }
                else {
                    uVar11 = *(iVar14 + iVar13 * 200 + 0x54) != 0;
                }
                uVar12 = mutex_unlock(unaff_x19);
                if ((unaff_x21 | uVar11) == 1) {
                    uVar1 = uVar1 << 1;
                    if ((0xf < uVar1) || (uVar7 = uVar1 | 1, 0xf < uVar7)) {
    //WARNING: Does not return
                        pcVar2 = SoftwareBreakpoint(0x5512,0x8005938);
                        (*pcVar2)();
                    }
                    if (*puVar10 == 3) {
                        if (uVar11 != 0) {
                            mutex_lock(unaff_x19);
                            iVar9 = iVar14 + iVar13 * 200;
                            *(iVar9 + 0x54) = 0;
                            *(iVar9 + 0x59) = 1;
                            mutex_unlock(unaff_x19);
                            in_x2 = iVar9 + 0x80;
                            uVar12 = queue_work_on(0x20,*(iVar9 + 0x78));
                        }
                        if (unaff_x21 != 0) {
                            mutex_lock(unaff_x19);
                            unaff_x21 = iVar14 + iVar13 * 200;
                            unaff_x21[0x14] = 0;
                            *(unaff_x21 + 0x16) = 1;
                            mutex_unlock(unaff_x19);
                            in_x2 = unaff_x21 + 0x20;
                            uVar12 = queue_work_on(0x20,*(unaff_x21 + 0x1e));
                        }
                    }
                    else {
                        iVar9 = iVar14 + iVar13 * 200;
                        in_x2 = *(arg1 + -0x28);
                        in_x4 = &uStack_84;
                        unaff_x21 = CONCAT11(*(auStack_78 + uVar7),*(auStack_78 + uVar1));
                        iVar3 = qcom_adc5_hw_scale(*(iVar9 + 0x20),*(iVar9 + 0x10),in_x2,unaff_x21);
                        if (iVar3 < 0) {
                            in_x2 = unaff_x21;
                            uVar12 = _printk(0x8000782,iVar3);
                        }
                        else {
                            iVar14 = iVar14 + iVar13 * 200;
                            *(iVar14 + 0x70) = uStack_84;
                            *(iVar14 + 0x74) = 1;
                            uVar12 = thermal_zone_device_update(*(iVar14 + 0x48),2);
                        }
                    }
                }
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < *(arg1 + -0x8c));
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_68) {
        return uVar12;
    }
    auVar15 = __stack_chk_fail();
    *extraout_x18 = sym.adc5_gen3_read_raw;
    pcStack_b8 = sym.adc5_gen3_read_raw;
    iVar14 = sp_el0;
    iStack_c8 = *(iVar14 + 0x5e0);
    iVar13 = *(auVar15._0_8_ + 0x440);
    auStack_cc[0] = 0;
    iVar8 = *(auVar15._8_8_ + 0x10);
    iVar9 = *(iVar13 + 0x28);
    iVar14 = iVar9 + iVar8 * 200;
    puStack_c0 = &stack0xffffffffffffffa0;
    puStack_b0 = unaff_x22;
    puStack_a8 = unaff_x21;
    uStack_a0 = unaff_x20;
    iStack_98 = unaff_x19;
    if (in_x4 == NULL) {
        uVar12 = sym.adc5_gen3_do_conversion(iVar13,iVar14,auStack_cc);
        if (-1 < uVar12) {
            uVar12 = 1;
            *in_x2 = auStack_cc[0];
        }
    }
    else if (in_x4 == 0x1) {
        uVar12 = sym.adc5_gen3_do_conversion(iVar13,iVar14,auStack_cc);
        if (-1 < uVar12) {
            iVar9 = iVar9 + iVar8 * 200;
            uVar5 = qcom_adc5_hw_scale(*(iVar9 + 0x20),*(iVar9 + 0x10),*(iVar13 + 0x88),auStack_cc[0],in_x2);
            if (-1 < uVar5) {
                uVar5 = 1;
            }
            uVar12 = uVar5;
        }
    }
    else {
        uVar12 = 0xffffffea;
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) != iStack_c8) {
        auVar15 = __stack_chk_fail(uVar12);
        iVar14 = *(auVar15._0_8_ + 0x440);
        uVar5 = *(iVar14 + 0x24);
        if (uVar5 != 0) {
            uVar12 = 0;
            do {
                puVar10 = *(iVar14 + 0x28) + uVar12 * 200;
                if ((*puVar10 | puVar10[3] << 8) == *(auVar15._8_8_ + 0xc)) {
                    return uVar12;
                }
                uVar1 = uVar12 + 1;
                uVar12 = uVar1;
            } while (uVar5 != uVar1);
        }
        return 0xfffffffe;
    }
    return uVar12;
}


// ===== sym.adc5_gen3_read_raw @ 0x0800593c (size 228) =====

uint64_t sym.adc5_gen3_read_raw(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t in_x4;
    uint32_t *puVar5;
    ulong *in_x18;
    int64_t arg1_00;
    int64_t iVar6;
    int64_t iVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    uint16_t auStack_3c [2];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    arg1_00 = *(arg1 + 0x440);
    auStack_3c[0] = 0;
    iVar7 = *(arg2 + 0x10);
    iVar6 = *(arg1_00 + 0x28);
    iVar4 = iVar6 + iVar7 * 200;
    if (in_x4 == 0) {
        uVar3 = sym.adc5_gen3_do_conversion(arg1_00,iVar4,auStack_3c);
        if (-1 < uVar3) {
            uVar3 = 1;
            *arg3 = auStack_3c[0];
        }
    }
    else if (in_x4 == 1) {
        uVar3 = sym.adc5_gen3_do_conversion(arg1_00,iVar4,auStack_3c);
        if (-1 < uVar3) {
            iVar6 = iVar6 + iVar7 * 200;
            uVar2 = qcom_adc5_hw_scale(*(iVar6 + 0x20),*(iVar6 + 0x10),*(arg1_00 + 0x88),auStack_3c[0],arg3);
            if (-1 < uVar2) {
                uVar2 = 1;
            }
            uVar3 = uVar2;
        }
    }
    else {
        uVar3 = 0xffffffea;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_38) {
        auVar8 = __stack_chk_fail(uVar3);
        iVar4 = *(auVar8._0_8_ + 0x440);
        uVar2 = *(iVar4 + 0x24);
        if (uVar2 != 0) {
            uVar3 = 0;
            do {
                puVar5 = *(iVar4 + 0x28) + uVar3 * 200;
                if ((*puVar5 | puVar5[3] << 8) == *(auVar8._8_8_ + 0xc)) {
                    return uVar3;
                }
                uVar1 = uVar3 + 1;
                uVar3 = uVar1;
            } while (uVar2 != uVar1);
        }
        return 0xfffffffe;
    }
    return uVar3;
}


// ===== sym.adc5_gen3_of_xlate @ 0x08005a20 (size 80) =====

int sym.adc5_gen3_of_xlate(uint32_t arg1,int64_t arg2)

{
    int iVar1;
    int iVar2;
    uint32_t *puVar3;
    
    iVar1 = *(*(arg1 + 0x440) + 0x24);
    if (iVar1 != 0) {
        iVar2 = 0;
        do {
            puVar3 = *(*(arg1 + 0x440) + 0x28) + iVar2 * 200;
            if ((*puVar3 | puVar3[3] << 8) == *(arg2 + 0xc)) {
                return iVar2;
            }
            iVar2 = iVar2 + 1;
        } while (iVar1 != iVar2);
    }
    return -2;
}


// ===== sym.adc_tm5_gen3_set_trip_temp @ 0x08005a70 (size 320) =====

int sym.adc_tm5_gen3_set_trip_temp(int64_t arg1,uint32_t arg2,uint32_t arg3)

{
    int iVar1;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar2;
    int64_t iVar3;
    uint32_t uVar4;
    ulong unaff_x30;
    uint32_t uStack_50;
    uint32_t uStack_4c;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    if (arg1 != 0) {
        uStack_50 = 0;
        if (arg3 != 0x7fffffff) {
            uStack_50 = arg3;
        }
        iVar2 = *(arg1 + 0x30);
        uStack_4c = 0;
        uVar4 = arg2;
        if ((arg2 != 0x80000000) || (uVar4 = uStack_4c, arg3 != 0x7fffffff)) {
            uStack_4c = uVar4;
            adc_tm_scale_therm_voltage_100k_gen3(&uStack_50);
            iVar2 = iVar2 + 0x58;
            mutex_lock(iVar2);
            if (arg3 != 0x7fffffff) {
                *(arg1 + 0x68) = uStack_40;
            }
            *(arg1 + 0x54) = arg3 != 0x7fffffff;
            if (-0x7fffffff < arg2) {
                *(arg1 + 0x60) = uStack_48;
            }
            *(arg1 + 0x50) = -0x7fffffff < arg2;
            iVar1 = sym.adc_tm5_gen3_configure(arg1);
            if (iVar1 < 0) {
                _printk(0x8000450,iVar1);
            }
            mutex_unlock(iVar2);
            goto code_r0x08005b64;
        }
        _printk(0x80007fe);
    }
    iVar1 = -0x16;
code_r0x08005b64:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_38) {
        iVar2 = __stack_chk_fail();
        *extraout_x18 = sym.adc5_gen3_freeze;
        iVar3 = *(iVar2 + 0x98);
        mutex_lock(iVar3 + 0x58);
        if (*(iVar3 + 0x20) != 0) {
            uVar4 = 0;
            do {
                devm_free_irq(iVar2,*(*(iVar3 + 0x10) + uVar4 * 0x18 + 0x10),iVar3);
                uVar4 = uVar4 + 1;
            } while (uVar4 < *(iVar3 + 0x20));
        }
        mutex_unlock(iVar3 + 0x58);
        return 0;
    }
    return iVar1;
}


// ===== sym.adc5_gen3_freeze @ 0x08005bb0 (size 144) =====

ulong sym.adc5_gen3_freeze(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    uint32_t uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x98);
    mutex_lock(iVar1 + 0x58);
    if (*(iVar1 + 0x20) != 0) {
        uVar2 = 0;
        do {
            devm_free_irq(arg1,*(*(iVar1 + 0x10) + uVar2 * 0x18 + 0x10),iVar1);
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(iVar1 + 0x20));
    }
    mutex_unlock(iVar1 + 0x58);
    return 0;
}


// ===== sym.adc5_gen3_restore @ 0x08005c40 (size 156) =====

ulong sym.adc5_gen3_restore(int64_t arg1)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t iVar3;
    uint32_t uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x98);
    if (*(iVar3 + 0x20) == 0) {
        uVar1 = 0;
    }
    else {
        uVar4 = 0;
        do {
            iVar2 = *(iVar3 + 0x10) + uVar4 * 0x18;
            uVar1 = devm_request_threaded_irq
                              (arg1,*(iVar2 + 0x10),sym.adc5_gen3_isr.0ad87e129b42622404d2c68837efd3ea.cfi_jt,0,0,
                               *(iVar2 + 8),iVar3);
            if (uVar1 < 0) {
                return uVar1;
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < *(iVar3 + 0x20));
    }
    return uVar1;
}


// ===== sym.__cfi_check_fail @ 0x08005cdc (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08005d20

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
    //switch table (4 cases) at 0x8000244
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8005d34);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08005d90 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.adc5_gen3_probe.0ad87e129b42622404d2c68837efd3ea.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08005dc4 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.adc5_gen3_probe.0ad87e129b42622404d2c68837efd3ea.cfi_jt);
    return;
}

