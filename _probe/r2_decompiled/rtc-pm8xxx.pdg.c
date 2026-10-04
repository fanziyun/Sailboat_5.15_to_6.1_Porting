// decompiled from rtc-pm8xxx by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 488) =====

//WARNING: Switch with 1 destination removed at 0x0800224c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x3557318fb8d07b71) {
        if (arg1 < -0x57be845bca9148ef) {
            if (arg1 == -0x70e6cbb5dbaf435b) {
                pcVar2 = sym.pm8xxx_rtc_read_time.62d8a4ffdef8f24a576b76bde8665f7a.cfi_jt;
code_r0x080011bc:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x0800220c;
            }
            if (arg1 != -0x66d421a09845f9f8) goto code_r0x0800220c;
            pcVar2 = sym.rtc_us_val_show.62d8a4ffdef8f24a576b76bde8665f7a.cfi_jt;
        }
        else {
            if (arg1 == -0x57be845bca9148ef) {
                if ((pcVar1 + -0x8001228 >> 3 | pcVar1 << 0x3d) < 4) {
                    return;
                }
                goto code_r0x0800220c;
            }
            if (arg1 == -0x4260ebb633ab377a) {
                pcVar2 = sym.pm8xxx_rtc_shutdown.62d8a4ffdef8f24a576b76bde8665f7a.cfi_jt;
            }
            else {
                if (arg1 != -0x3987c0e26ee29729) goto code_r0x0800220c;
                pcVar2 = sym.pm8xxx_alarm_trigger.62d8a4ffdef8f24a576b76bde8665f7a.cfi_jt;
            }
        }
    }
    else if (arg1 < 0x2d7979f9c446ff80) {
        if (arg1 == -0x3557318fb8d07b71) {
            pcVar2 = sym.pm8xxx_rtc_probe.62d8a4ffdef8f24a576b76bde8665f7a.cfi_jt;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) goto code_r0x0800220c;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else {
        if (arg1 == 0x2d7979f9c446ff80) {
            pcVar2 = sym.pm8xxx_rtc_set_alarm.62d8a4ffdef8f24a576b76bde8665f7a.cfi_jt;
            goto code_r0x080011bc;
        }
        if (arg1 == 0x7b6f320e89e216aa) {
            pcVar2 = sym.pm8xxx_rtc_alarm_irq_enable.62d8a4ffdef8f24a576b76bde8665f7a.cfi_jt;
        }
        else {
            if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x0800220c;
            pcVar2 = sym.cleanup_module.cfi_jt;
        }
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x0800220c:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002260);
    (*pcVar1)();
}


// ===== sym.pm8xxx_rtc_alarm_irq_enable.62d8a4ffdef8f24a576b76bde8665f7a.cfi_jt @ 0x080011f0 (size 8) =====

uint64_t sym.pm8xxx_rtc_alarm_irq_enable.62d8a4ffdef8f24a576b76bde8665f7a.cfi_jt(int64_t param_1,uint32_t param_2)

{
    uchar uVar1;
    uchar uVar2;
    uchar uVar3;
    uchar uVar4;
    uint32_t uVar5;
    int iVar6;
    ulong uVar7;
    char *pcVar8;
    uchar *puVar9;
    ulong *puVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t iVar11;
    uint64_t uVar12;
    int64_t iVar13;
    int64_t iVar14;
    ulong unaff_x30;
    uchar auVar15 [16];
    uint32_t uStack_114;
    uint16_t auStack_110 [2];
    uint uStack_10c;
    int64_t iStack_108;
    uchar **ppuStack_100;
    code *pcStack_f8;
    ulong uStack_a0;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    uint64_t uStack_80;
    int64_t iStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_58 = *(iVar11 + 0x5e0);
    iVar13 = *(param_1 + 0x98);
    uStack_60 = 0;
    iVar11 = iVar13 + 0x28;
    iVar14 = *(iVar13 + 0x18);
    uVar7 = _raw_spin_lock_irqsave(iVar11);
    uVar5 = regmap_read(*(iVar13 + 8),*(iVar14 + 0xc),&uStack_60 + 4);
    uVar12 = uVar5;
    if (uVar5 == 0) {
        if (param_2 == 0) {
            uVar5 = uStack_60._4_4_ & (*(iVar14 + 0x18) ^ 0xffffffff);
        }
        else {
            uVar5 = uStack_60._4_4_ | *(iVar14 + 0x18);
        }
        uStack_60 = CONCAT44(uVar5,uStack_60);
        uVar5 = regmap_write(*(iVar13 + 8),*(iVar14 + 0xc));
        if (uVar5 == 0) {
            if (param_2 == 0) {
                uVar5 = regmap_bulk_write(*(iVar13 + 8),*(iVar14 + 0x14),&uStack_60,4);
                uVar12 = uVar5;
                if (uVar5 != 0) {
                    pcVar8 = "Clear RTC ALARM register failed\n";
                    goto code_r0x08001db4;
                }
            }
            else {
                uVar12 = 0;
            }
        }
        else {
            uVar12 = uVar5;
            pcVar8 = "Write to RTC control register failed\n";
code_r0x08001db4:
            _dev_err(param_1,pcVar8);
        }
    }
    _raw_spin_unlock_irqrestore(iVar11,uVar7);
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_58) {
        return uVar12;
    }
    auVar15 = __stack_chk_fail();
    iVar14 = auVar15._0_8_;
    puVar10 = &uStack_a0;
    *extraout_x18 = sym.pm8xxx_rtc_read_rtc_data;
    pcStack_88 = sym.pm8xxx_rtc_read_rtc_data;
    iVar13 = sp_el0;
    iStack_98 = *(iVar13 + 0x5e0);
    puVar9 = &uStack_a0 + 4;
    iVar13 = *(iVar14 + 0x18);
    uStack_a0 = 0;
    puStack_90 = &stack0xffffffffffffffb0;
    uStack_80 = param_2;
    iStack_78 = param_1;
    uStack_70 = uVar7;
    iStack_68 = iVar11;
    uVar5 = regmap_bulk_read(*(iVar14 + 8),*(iVar13 + 8),puVar9,4);
    if ((uVar5 == 0) && (uVar5 = regmap_read(*(iVar14 + 8),*(iVar13 + 8),&uStack_a0), puVar9 = puVar10, -1 < uVar5))
    {
        if (uStack_a0 < uStack_a0._4_1_) {
            puVar9 = &uStack_a0 + 4;
            uVar5 = regmap_bulk_read(*(iVar14 + 8),*(iVar13 + 8),puVar9,4);
            if (uVar5 != 0) goto code_r0x08001eb0;
        }
        uVar12 = 0;
        *auVar15._8_8_ =
             CONCAT13(uStack_a0._7_1_,CONCAT12(uStack_a0._6_1_,CONCAT11(uStack_a0._5_1_,uStack_a0._4_1_)));
    }
    else {
code_r0x08001eb0:
        uVar12 = uVar5;
        _dev_err(*(iVar14 + 0x20),"RTC read rtc data register failed\n");
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_98) {
        return uVar12;
    }
    iVar13 = __stack_chk_fail();
    *extraout_x18_00 = sym.rtc_us_val_show;
    pcStack_f8 = sym.rtc_us_val_show;
    iVar11 = sp_el0;
    iStack_108 = *(iVar11 + 0x5e0);
    uStack_10c = 0;
    auStack_110[0] = 0;
    uStack_114 = 0;
    iVar11 = *(*(iVar13 + 0x60) + 0x98);
    iVar14 = *(iVar11 + 0x18);
    ppuStack_100 = &puStack_90;
    iVar6 = regmap_bulk_read(*(iVar11 + 8),*(iVar14 + 8),&uStack_10c,4);
    if ((iVar6 == 0) && (iVar6 = regmap_read(*(iVar11 + 8),*(iVar14 + 8),&uStack_114), -1 < iVar6)) {
        uVar1 = uStack_10c;
        if (uStack_114 < (uStack_10c & 0xff)) {
            iVar6 = regmap_bulk_read(*(iVar11 + 8),*(iVar14 + 8),&uStack_10c,4);
            if (iVar6 != 0) goto code_r0x08002040;
            uVar1 = uStack_10c;
        }
        uVar2 = uStack_10c._1_1_;
        uVar3 = uStack_10c._2_1_;
        uVar4 = uStack_10c._3_1_;
        iVar6 = regmap_bulk_read(*(iVar11 + 8),*(iVar14 + 0x1c),auStack_110,2);
        if (iVar6 == 0) {
            uVar12 = (auStack_110[0] * 0xf3e58) / 0x3ff;
            iVar6 = scnprintf(puVar9,0x1000,"%llu\n",
                              CONCAT13(uVar4,CONCAT12(uVar3,CONCAT11(uVar2,uVar1))) * 1000000 +
                              (uVar12 + (auStack_110[0] * 0xf3e58 - uVar12 >> 1) >> 9));
            goto code_r0x08001fe0;
        }
    }
code_r0x08002040:
    _dev_err(iVar13,"RTC read data register failed\n");
code_r0x08001fe0:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_108) {
        return iVar6;
    }
    iVar11 = __stack_chk_fail();
    *extraout_x18_01 = sym.pm8xxx_rtc_suspend;
    if (((*(iVar11 + 0x10c) & 1) != 0) && (*(iVar11 + 0x148) != 0)) {
        irq_set_irq_wake(*(*(iVar11 + 0x98) + 0x14),1);
    }
    return 0;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080011f8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.pm8xxx_rtc_probe.62d8a4ffdef8f24a576b76bde8665f7a.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001200 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.pm8xxx_rtc_probe.62d8a4ffdef8f24a576b76bde8665f7a.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.pm8xxx_rtc_probe.62d8a4ffdef8f24a576b76bde8665f7a.cfi_jt @ 0x08001208 (size 8) =====

uint64_t sym.pm8xxx_rtc_probe.62d8a4ffdef8f24a576b76bde8665f7a.cfi_jt(int64_t param_1)

{
    int iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint64_t *arg1;
    ulong uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar9;
    uint *puVar10;
    ulong unaff_x30;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_48 = *(iVar3 + 0x5e0);
    iVar3 = of_match_node(obj.pm8xxx_id_table,*(param_1 + 0x300));
    if (iVar3 != 0) {
        uVar8 = param_1 + 0x10;
        arg1 = devm_kmalloc(uVar8,0x30,0xdc0);
        if (arg1 == NULL) {
            uVar9 = 0xfffffff4;
            goto code_r0x08001448;
        }
        uVar4 = *(param_1 + 0x70);
        *(arg1 + 5) = 0;
        uVar5 = dev_get_regmap(uVar4,0);
        arg1[1] = uVar5;
        if (uVar5 == 0) {
            _dev_err(uVar8,"Parent regmap unavailable.\n");
        }
        else {
            iVar1 = platform_get_irq(param_1,0);
            *(arg1 + 0x14) = iVar1;
            if (-1 < iVar1) {
                iVar6 = of_find_property(*(param_1 + 0x300),"allow-set-time",0);
                uStack_4c = 0;
                *(arg1 + 2) = iVar6 != 0;
                puVar10 = *(iVar3 + 0xc0);
                arg1[3] = puVar10;
                arg1[4] = uVar8;
                uVar7 = regmap_read(uVar5,*puVar10,&uStack_4c);
                uVar9 = uVar7 & 0xffffffff;
                if (uVar7 == 0) {
                    if ((uStack_4c >> 7 & 1) == 0) {
                        uStack_4c = uStack_4c | 0x80;
                        uVar5 = regmap_write(uVar5,*puVar10);
                        uVar9 = uVar5 & 0xffffffff;
                        if (uVar5 != 0) goto code_r0x08001448;
                    }
                    *(param_1 + 0xa8) = arg1;
                    device_init_wakeup(uVar8,1);
                    uVar9 = devm_rtc_allocate_device(uVar8);
                    *arg1 = uVar9;
                    if (uVar9 < 0xfffffffffffff001) {
                        *(uVar9 + 0x3a0) = obj.pm8xxx_rtc_ops;
                        *(*arg1 + 0x5d0) = 0xffffffff;
                        uVar5 = rtc_add_group(*arg1,obj.pm8xxx_rtc_group);
                        uVar9 = uVar5 & 0xffffffff;
                        if (uVar5 == 0) {
                            uVar2 = devm_request_any_context_irq
                                              (uVar8,*(arg1 + 0x14),
                                               sym.pm8xxx_alarm_trigger.62d8a4ffdef8f24a576b76bde8665f7a.cfi_jt,1,
                                               "pm8xxx_rtc_alarm",arg1);
                            if (uVar2 < 0) {
                                uVar9 = uVar2;
                                _dev_err(uVar8,"Request IRQ failed (%d)\n",uVar9);
                            }
                            else {
                                uVar2 = __devm_rtc_register_device(obj.__this_module,*arg1);
                                if (uVar2 < 0) {
                                    uVar9 = uVar2;
                                    _dev_err(uVar8,"Register RTC device failed\n");
                                }
                                else {
                                    iVar3 = of_find_property(*(param_1 + 0x300),"qcom,disable-alarm-wakeup",0);
                                    if (iVar3 != 0) {
                                        device_set_wakeup_capable(uVar8,0);
                                    }
                                    uVar9 = sym.pm8xxx_rtc_init_alarm(arg1);
                                    uVar9 = uVar9 & 0xffffffff;
                                }
                            }
                        }
                    }
                }
                goto code_r0x08001448;
            }
        }
    }
    uVar9 = 0xfffffffa;
code_r0x08001448:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_48) {
        return uVar9 & 0xffffffff;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.pm8xxx_rtc_shutdown;
    uVar8 = devm_free_irq(*(*(iVar3 + 0xa8) + 0x20),*(*(iVar3 + 0xa8) + 0x14));
    return uVar8;
}


// ===== sym.rtc_us_val_show.62d8a4ffdef8f24a576b76bde8665f7a.cfi_jt @ 0x08001210 (size 8) =====

int64_t sym.rtc_us_val_show.62d8a4ffdef8f24a576b76bde8665f7a.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uchar uVar1;
    uchar uVar2;
    uchar uVar3;
    uchar uVar4;
    int iVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar7;
    int64_t iVar8;
    ulong unaff_x30;
    uint32_t uStack_74;
    uint16_t auStack_70 [2];
    uint uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    uStack_6c = 0;
    auStack_70[0] = 0;
    uStack_74 = 0;
    iVar7 = *(*(param_1 + 0x60) + 0x98);
    iVar8 = *(iVar7 + 0x18);
    iVar5 = regmap_bulk_read(*(iVar7 + 8),*(iVar8 + 8),&uStack_6c,4);
    if ((iVar5 == 0) && (iVar5 = regmap_read(*(iVar7 + 8),*(iVar8 + 8),&uStack_74), -1 < iVar5)) {
        uVar1 = uStack_6c;
        if (uStack_74 < (uStack_6c & 0xff)) {
            iVar5 = regmap_bulk_read(*(iVar7 + 8),*(iVar8 + 8),&uStack_6c,4);
            if (iVar5 != 0) goto code_r0x08002040;
            uVar1 = uStack_6c;
        }
        uVar2 = uStack_6c._1_1_;
        uVar3 = uStack_6c._2_1_;
        uVar4 = uStack_6c._3_1_;
        iVar5 = regmap_bulk_read(*(iVar7 + 8),*(iVar8 + 0x1c),auStack_70,2);
        if (iVar5 == 0) {
            uVar6 = (auStack_70[0] * 0xf3e58) / 0x3ff;
            iVar5 = scnprintf(param_3,0x1000,"%llu\n",
                              CONCAT13(uVar4,CONCAT12(uVar3,CONCAT11(uVar2,uVar1))) * 1000000 +
                              (uVar6 + (auStack_70[0] * 0xf3e58 - uVar6 >> 1) >> 9));
            goto code_r0x08001fe0;
        }
    }
code_r0x08002040:
    _dev_err(param_1,"RTC read data register failed\n");
code_r0x08001fe0:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_68) {
        return iVar5;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18 = sym.pm8xxx_rtc_suspend;
    if (((*(iVar7 + 0x10c) & 1) != 0) && (*(iVar7 + 0x148) != 0)) {
        irq_set_irq_wake(*(*(iVar7 + 0x98) + 0x14),1);
    }
    return 0;
}


// ===== sym.pm8xxx_rtc_read_time.62d8a4ffdef8f24a576b76bde8665f7a.cfi_jt @ 0x08001218 (size 8) =====

uint64_t sym.pm8xxx_rtc_read_time.62d8a4ffdef8f24a576b76bde8665f7a.cfi_jt(int64_t param_1,int64_t param_2)

{
    uchar uVar1;
    uchar uVar2;
    uchar uVar3;
    uchar uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    int iVar8;
    uint64_t uVar9;
    int64_t iVar10;
    ulong uVar11;
    char *pcVar12;
    uint8_t *puVar13;
    char *pcVar14;
    uchar *puVar15;
    ulong *puVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    uint64_t uVar17;
    uint64_t uVar18;
    int64_t iVar19;
    int64_t iVar20;
    int64_t iVar21;
    int64_t iVar22;
    uint *unaff_x24;
    int64_t iVar23;
    uint64_t unaff_x25;
    int64_t iVar24;
    int64_t iVar25;
    ulong unaff_x30;
    uchar auVar26 [16];
    uchar auVar27 [16];
    uint32_t uStack_274;
    uint16_t auStack_270 [2];
    uint uStack_26c;
    int64_t iStack_268;
    ulong ***pppuStack_260;
    code *pcStack_258;
    ulong uStack_200;
    int64_t iStack_1f8;
    ulong ***pppuStack_1f0;
    code *pcStack_1e8;
    uint64_t uStack_1e0;
    int64_t iStack_1d8;
    ulong uStack_1d0;
    int64_t iStack_1c8;
    ulong uStack_1c0;
    int64_t iStack_1b8;
    ulong ***pppuStack_1b0;
    code *pcStack_1a8;
    int64_t iStack_1a0;
    int64_t iStack_190;
    uint64_t uStack_188;
    char *pcStack_180;
    ulong uStack_178;
    int64_t iStack_170;
    int64_t iStack_168;
    uint32_t uStack_160;
    uint uStack_15c;
    int64_t iStack_158;
    uchar ***pppuStack_150;
    code *pcStack_148;
    uint64_t uStack_140;
    uint *puStack_130;
    int64_t iStack_128;
    int64_t iStack_120;
    uint64_t uStack_118;
    uint8_t *puStack_110;
    int64_t iStack_108;
    ulong uStack_100;
    int64_t iStack_f8;
    uchar **ppuStack_f0;
    code *pcStack_e8;
    int64_t iStack_e0;
    uint64_t uStack_d0;
    int64_t iStack_c8;
    int64_t iStack_c0;
    uint64_t uStack_b8;
    uint32_t uStack_a4;
    uint32_t uStack_a0;
    uint uStack_9c;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar20 = sp_el0;
    iStack_38 = *(iVar20 + 0x5e0);
    uStack_40 = 0;
    uVar5 = sym.pm8xxx_rtc_read_rtc_data(*(param_1 + 0x98),&uStack_40);
    uVar17 = uVar5;
    if (uVar5 == 0) {
        rtc_time64_to_tm(uStack_40,param_2);
    }
    else {
        _dev_err(param_1,"RTC read time failed\n");
    }
    iVar20 = sp_el0;
    if (*(iVar20 + 0x5e0) == iStack_38) {
        return uVar17;
    }
    auVar26 = __stack_chk_fail();
    uVar9 = auVar26._0_8_;
    *extraout_x18 = sym.pm8xxx_rtc_set_time;
    pcStack_88 = sym.pm8xxx_rtc_set_time;
    iVar20 = sp_el0;
    iStack_98 = *(iVar20 + 0x5e0);
    iVar20 = *(uVar9 + 0x98);
    uStack_a4 = 0;
    uStack_a0 = 0;
    puStack_90 = &stack0xffffffffffffffd0;
    if (*(iVar20 + 0x10) == '\0') {
        uVar18 = 0xfffffff3;
    }
    else {
        unaff_x24 = *(iVar20 + 0x18);
        uStack_9c = rtc_tm_to_time64(auVar26._8_8_);
        param_2 = iVar20 + 0x28;
        param_1 = _raw_spin_lock_irqsave(param_2);
        uVar5 = regmap_read(*(iVar20 + 8),unaff_x24[3],&uStack_a0);
        uVar18 = uVar5;
        if (uVar5 == 0) {
            uVar5 = unaff_x24[6] & uStack_a0;
            unaff_x25 = uVar5;
            if (uVar5 == 0) {
code_r0x08001904:
                uVar7 = regmap_read(*(iVar20 + 8),*unaff_x24,&uStack_a4);
                uVar6 = uStack_a4;
                uVar18 = uVar7;
                if (uVar7 != 0) goto code_r0x08001a14;
                if ((uStack_a4 >> 7 & 1) == 0) {
code_r0x0800193c:
                    uVar7 = regmap_write(*(iVar20 + 8),unaff_x24[1],0);
                    if ((uVar7 == 0) &&
                       (uVar7 = regmap_bulk_write(*(iVar20 + 8),unaff_x24[1] + 1,&uStack_9c | 1,3), uVar7 == 0)) {
                        uVar7 = regmap_write(*(iVar20 + 8),unaff_x24[1],uStack_9c);
                        if (uVar7 == 0) {
                            if ((uVar6 >> 7 & 1) != 0) {
                                uStack_a4 = uStack_a4 | 0x80;
                                uVar7 = regmap_write(*(iVar20 + 8),*unaff_x24);
                                if (uVar7 != 0) goto code_r0x08001a00;
                            }
                            if (uVar5 == 0) {
                                uVar18 = 0;
                            }
                            else {
                                uStack_a0 = uStack_a0 | unaff_x24[6];
                                uVar5 = regmap_write(*(iVar20 + 8),unaff_x24[3]);
                                uVar18 = uVar5;
                                if (uVar5 != 0) goto code_r0x080019f4;
                            }
                            goto code_r0x08001a14;
                        }
                    }
                    uVar18 = uVar7;
                    pcVar12 = "Write to RTC write data register failed\n";
                }
                else {
                    uStack_a4 = uStack_a4 & 0xffffff7f;
                    uVar7 = regmap_write(*(iVar20 + 8),*unaff_x24);
                    if (uVar7 == 0) goto code_r0x0800193c;
code_r0x08001a00:
                    uVar18 = uVar7;
                    pcVar12 = "Write to RTC control register failed\n";
                }
            }
            else {
                uStack_a0 = uStack_a0 & (unaff_x24[6] ^ 0xffffffff);
                uVar6 = regmap_write(*(iVar20 + 8),unaff_x24[3]);
                if (uVar6 == 0) goto code_r0x08001904;
                uVar18 = uVar6;
code_r0x080019f4:
                pcVar12 = "Write to RTC Alarm control register failed\n";
            }
            _dev_err(uVar9,pcVar12);
        }
code_r0x08001a14:
        _raw_spin_unlock_irqrestore(param_2,param_1);
        uVar17 = uVar9;
    }
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_98) {
        return uVar18;
    }
    auVar26 = __stack_chk_fail();
    puVar13 = auVar26._8_8_;
    iVar22 = auVar26._0_8_;
    *extraout_x18_00 = sym.pm8xxx_rtc_read_alarm;
    pcStack_e8 = sym.pm8xxx_rtc_read_alarm;
    iVar19 = sp_el0;
    iStack_f8 = *(iVar19 + 0x5e0);
    iVar19 = *(iVar22 + 0x98);
    uStack_100 = 0;
    iVar21 = *(iVar19 + 0x18);
    ppuStack_f0 = &puStack_90;
    iStack_e0 = iVar20;
    uStack_d0 = uVar18;
    iStack_c8 = param_1;
    iStack_c0 = param_2;
    uStack_b8 = uVar17;
    uVar5 = regmap_bulk_read(*(iVar19 + 8),*(iVar21 + 0x14),&uStack_100 + 4,4);
    if (uVar5 == 0) {
        rtc_time64_to_tm(uStack_100._4_4_,puVar13 + 4);
        uVar5 = regmap_read(*(iVar19 + 8),*(iVar21 + 0xc),&uStack_100);
        uVar17 = uVar5;
        if (uVar5 != 0) {
            pcVar12 = "Read from RTC alarm control register failed\n";
            goto code_r0x08001b48;
        }
        *puVar13 = uStack_100 >> 7;
    }
    else {
        uVar17 = uVar5;
        _dev_err(*(iVar19 + 0x20),"RTC read alarm data failed\n");
        pcVar12 = "RTC alarm data read failed\n";
code_r0x08001b48:
        _dev_err(iVar22,pcVar12);
    }
    iVar20 = sp_el0;
    if (*(iVar20 + 0x5e0) == iStack_f8) {
        return uVar17;
    }
    auVar26 = __stack_chk_fail();
    pcVar12 = auVar26._8_8_;
    iVar10 = auVar26._0_8_;
    *extraout_x18_01 = sym.pm8xxx_rtc_set_alarm;
    pcStack_148 = sym.pm8xxx_rtc_set_alarm;
    iVar20 = sp_el0;
    iStack_158 = *(iVar20 + 0x5e0);
    iVar23 = *(iVar10 + 0x98);
    uStack_160 = 0;
    iVar24 = *(iVar23 + 0x18);
    pppuStack_150 = &ppuStack_f0;
    uStack_140 = unaff_x25;
    puStack_130 = unaff_x24;
    iStack_128 = iVar21;
    iStack_120 = iVar19;
    uStack_118 = uVar17;
    puStack_110 = puVar13;
    iStack_108 = iVar22;
    uStack_15c = rtc_tm_to_time64(pcVar12 + 4);
    iVar20 = iVar23 + 0x28;
    uVar11 = _raw_spin_lock_irqsave(iVar20);
    uVar5 = regmap_bulk_write(*(iVar23 + 8),*(iVar24 + 0x14),&uStack_15c,4);
    if (uVar5 == 0) {
        uVar5 = regmap_read(*(iVar23 + 8),*(iVar24 + 0xc),&uStack_160);
        uVar17 = uVar5;
        if (uVar5 == 0) {
            if (*pcVar12 == '\0') {
                uStack_160 = uStack_160 & (*(iVar24 + 0x18) ^ 0xffffffff);
            }
            else {
                uStack_160 = uStack_160 | *(iVar24 + 0x18);
            }
            uVar5 = regmap_write(*(iVar23 + 8),*(iVar24 + 0xc));
            uVar17 = uVar5;
            if (uVar5 != 0) {
                pcVar14 = "Write to RTC alarm control register failed\n";
                goto code_r0x08001c80;
            }
        }
    }
    else {
        uVar17 = uVar5;
        pcVar14 = "Write to RTC ALARM register failed\n";
code_r0x08001c80:
        _dev_err(iVar10,pcVar14);
    }
    _raw_spin_unlock_irqrestore(iVar20,uVar11);
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_158) {
        return uVar17;
    }
    auVar26 = __stack_chk_fail();
    iVar22 = auVar26._0_8_;
    *extraout_x18_02 = sym.pm8xxx_rtc_alarm_irq_enable;
    pcStack_1a8 = sym.pm8xxx_rtc_alarm_irq_enable;
    iVar19 = sp_el0;
    iStack_1b8 = *(iVar19 + 0x5e0);
    iVar21 = *(iVar22 + 0x98);
    uStack_1c0 = 0;
    iVar19 = iVar21 + 0x28;
    iVar25 = *(iVar21 + 0x18);
    pppuStack_1b0 = &pppuStack_150;
    iStack_1a0 = iVar24;
    iStack_190 = iVar23;
    uStack_188 = uVar17;
    pcStack_180 = pcVar12;
    uStack_178 = uVar11;
    iStack_170 = iVar20;
    iStack_168 = iVar10;
    uVar11 = _raw_spin_lock_irqsave(iVar19);
    uVar5 = regmap_read(*(iVar21 + 8),*(iVar25 + 0xc),&uStack_1c0 + 4);
    uVar17 = uVar5;
    if (uVar5 == 0) {
        if (auVar26._8_4_ == 0) {
            uVar5 = uStack_1c0._4_4_ & (*(iVar25 + 0x18) ^ 0xffffffff);
        }
        else {
            uVar5 = uStack_1c0._4_4_ | *(iVar25 + 0x18);
        }
        uStack_1c0 = CONCAT44(uVar5,uStack_1c0);
        uVar5 = regmap_write(*(iVar21 + 8),*(iVar25 + 0xc));
        if (uVar5 == 0) {
            if (auVar26._8_4_ == 0) {
                uVar5 = regmap_bulk_write(*(iVar21 + 8),*(iVar25 + 0x14),&uStack_1c0,4);
                uVar17 = uVar5;
                if (uVar5 != 0) {
                    pcVar12 = "Clear RTC ALARM register failed\n";
                    goto code_r0x08001db4;
                }
            }
            else {
                uVar17 = 0;
            }
        }
        else {
            uVar17 = uVar5;
            pcVar12 = "Write to RTC control register failed\n";
code_r0x08001db4:
            _dev_err(iVar22,pcVar12);
        }
    }
    _raw_spin_unlock_irqrestore(iVar19,uVar11);
    iVar20 = sp_el0;
    if (*(iVar20 + 0x5e0) == iStack_1b8) {
        return uVar17;
    }
    auVar27 = __stack_chk_fail();
    iVar21 = auVar27._0_8_;
    puVar16 = &uStack_200;
    *extraout_x18_03 = sym.pm8xxx_rtc_read_rtc_data;
    pcStack_1e8 = sym.pm8xxx_rtc_read_rtc_data;
    iVar20 = sp_el0;
    iStack_1f8 = *(iVar20 + 0x5e0);
    puVar15 = &uStack_200 + 4;
    iVar20 = *(iVar21 + 0x18);
    uStack_200 = 0;
    pppuStack_1f0 = &pppuStack_1b0;
    uStack_1e0 = auVar26._8_8_ & 0xffffffff;
    iStack_1d8 = iVar22;
    uStack_1d0 = uVar11;
    iStack_1c8 = iVar19;
    uVar5 = regmap_bulk_read(*(iVar21 + 8),*(iVar20 + 8),puVar15,4);
    if ((uVar5 == 0) &&
       (uVar5 = regmap_read(*(iVar21 + 8),*(iVar20 + 8),&uStack_200), puVar15 = puVar16, -1 < uVar5)) {
        if (uStack_200 < uStack_200._4_1_) {
            puVar15 = &uStack_200 + 4;
            uVar5 = regmap_bulk_read(*(iVar21 + 8),*(iVar20 + 8),puVar15,4);
            if (uVar5 != 0) goto code_r0x08001eb0;
        }
        uVar17 = 0;
        *auVar27._8_8_ =
             CONCAT13(uStack_200._7_1_,CONCAT12(uStack_200._6_1_,CONCAT11(uStack_200._5_1_,uStack_200._4_1_)));
    }
    else {
code_r0x08001eb0:
        uVar17 = uVar5;
        _dev_err(*(iVar21 + 0x20),"RTC read rtc data register failed\n");
    }
    iVar20 = sp_el0;
    if (*(iVar20 + 0x5e0) == iStack_1f8) {
        return uVar17;
    }
    iVar19 = __stack_chk_fail();
    *extraout_x18_04 = sym.rtc_us_val_show;
    pcStack_258 = sym.rtc_us_val_show;
    iVar20 = sp_el0;
    iStack_268 = *(iVar20 + 0x5e0);
    uStack_26c = 0;
    auStack_270[0] = 0;
    uStack_274 = 0;
    iVar20 = *(*(iVar19 + 0x60) + 0x98);
    iVar22 = *(iVar20 + 0x18);
    pppuStack_260 = &pppuStack_1f0;
    iVar8 = regmap_bulk_read(*(iVar20 + 8),*(iVar22 + 8),&uStack_26c,4);
    if ((iVar8 == 0) && (iVar8 = regmap_read(*(iVar20 + 8),*(iVar22 + 8),&uStack_274), -1 < iVar8)) {
        uVar1 = uStack_26c;
        if (uStack_274 < (uStack_26c & 0xff)) {
            iVar8 = regmap_bulk_read(*(iVar20 + 8),*(iVar22 + 8),&uStack_26c,4);
            if (iVar8 != 0) goto code_r0x08002040;
            uVar1 = uStack_26c;
        }
        uVar2 = uStack_26c._1_1_;
        uVar3 = uStack_26c._2_1_;
        uVar4 = uStack_26c._3_1_;
        iVar8 = regmap_bulk_read(*(iVar20 + 8),*(iVar22 + 0x1c),auStack_270,2);
        if (iVar8 == 0) {
            uVar17 = (auStack_270[0] * 0xf3e58) / 0x3ff;
            iVar8 = scnprintf(puVar15,0x1000,"%llu\n",
                              CONCAT13(uVar4,CONCAT12(uVar3,CONCAT11(uVar2,uVar1))) * 1000000 +
                              (uVar17 + (auStack_270[0] * 0xf3e58 - uVar17 >> 1) >> 9));
            goto code_r0x08001fe0;
        }
    }
code_r0x08002040:
    _dev_err(iVar19,"RTC read data register failed\n");
code_r0x08001fe0:
    iVar20 = sp_el0;
    if (*(iVar20 + 0x5e0) != iStack_268) {
        iVar20 = __stack_chk_fail();
        *extraout_x18_05 = sym.pm8xxx_rtc_suspend;
        if (((*(iVar20 + 0x10c) & 1) != 0) && (*(iVar20 + 0x148) != 0)) {
            irq_set_irq_wake(*(*(iVar20 + 0x98) + 0x14),1);
        }
        return 0;
    }
    return iVar8;
}


// ===== sym.pm8xxx_rtc_set_time.62d8a4ffdef8f24a576b76bde8665f7a.cfi_jt @ 0x08001220 (size 8) =====

uint64_t sym.pm8xxx_rtc_set_time.62d8a4ffdef8f24a576b76bde8665f7a.cfi_jt(int64_t param_1,ulong param_2)

{
    uchar uVar1;
    uchar uVar2;
    uchar uVar3;
    uchar uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    int iVar8;
    int64_t iVar9;
    ulong uVar10;
    char *pcVar11;
    uint8_t *puVar12;
    char *pcVar13;
    uchar *puVar14;
    ulong *puVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    int64_t unaff_x19;
    int64_t unaff_x20;
    ulong unaff_x21;
    uint64_t uVar16;
    int64_t iVar17;
    int64_t iVar18;
    int64_t iVar19;
    int64_t iVar20;
    uint *unaff_x24;
    int64_t iVar21;
    uint64_t unaff_x25;
    int64_t iVar22;
    int64_t iVar23;
    ulong unaff_x30;
    uchar auVar24 [16];
    uchar auVar25 [16];
    uint32_t uStack_234;
    uint16_t auStack_230 [2];
    uint uStack_22c;
    int64_t iStack_228;
    ulong ***pppuStack_220;
    code *pcStack_218;
    ulong uStack_1c0;
    int64_t iStack_1b8;
    ulong ***pppuStack_1b0;
    code *pcStack_1a8;
    uint64_t uStack_1a0;
    int64_t iStack_198;
    ulong uStack_190;
    int64_t iStack_188;
    ulong uStack_180;
    int64_t iStack_178;
    uchar ***pppuStack_170;
    code *pcStack_168;
    int64_t iStack_160;
    int64_t iStack_150;
    uint64_t uStack_148;
    char *pcStack_140;
    ulong uStack_138;
    int64_t iStack_130;
    int64_t iStack_128;
    uint32_t uStack_120;
    uint uStack_11c;
    int64_t iStack_118;
    uchar **ppuStack_110;
    code *pcStack_108;
    uint64_t uStack_100;
    uint *puStack_f0;
    int64_t iStack_e8;
    int64_t iStack_e0;
    uint64_t uStack_d8;
    uint8_t *puStack_d0;
    int64_t iStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    int64_t iStack_a0;
    uint64_t uStack_90;
    ulong uStack_88;
    int64_t iStack_80;
    int64_t iStack_78;
    uint32_t uStack_64;
    uint32_t uStack_60;
    uint uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar18 = sp_el0;
    iStack_58 = *(iVar18 + 0x5e0);
    iVar18 = *(param_1 + 0x98);
    uStack_64 = 0;
    uStack_60 = 0;
    if (*(iVar18 + 0x10) == '\0') {
        uVar16 = 0xfffffff3;
    }
    else {
        unaff_x24 = *(iVar18 + 0x18);
        uStack_5c = rtc_tm_to_time64(param_2);
        unaff_x20 = iVar18 + 0x28;
        unaff_x21 = _raw_spin_lock_irqsave(unaff_x20);
        uVar5 = regmap_read(*(iVar18 + 8),unaff_x24[3],&uStack_60);
        uVar16 = uVar5;
        if (uVar5 == 0) {
            uVar5 = unaff_x24[6] & uStack_60;
            unaff_x25 = uVar5;
            if (uVar5 == 0) {
code_r0x08001904:
                uVar7 = regmap_read(*(iVar18 + 8),*unaff_x24,&uStack_64);
                uVar6 = uStack_64;
                uVar16 = uVar7;
                if (uVar7 != 0) goto code_r0x08001a14;
                if ((uStack_64 >> 7 & 1) == 0) {
code_r0x0800193c:
                    uVar7 = regmap_write(*(iVar18 + 8),unaff_x24[1],0);
                    if ((uVar7 == 0) &&
                       (uVar7 = regmap_bulk_write(*(iVar18 + 8),unaff_x24[1] + 1,&uStack_5c | 1,3), uVar7 == 0)) {
                        uVar7 = regmap_write(*(iVar18 + 8),unaff_x24[1],uStack_5c);
                        if (uVar7 == 0) {
                            if ((uVar6 >> 7 & 1) != 0) {
                                uStack_64 = uStack_64 | 0x80;
                                uVar7 = regmap_write(*(iVar18 + 8),*unaff_x24);
                                if (uVar7 != 0) goto code_r0x08001a00;
                            }
                            if (uVar5 == 0) {
                                uVar16 = 0;
                            }
                            else {
                                uStack_60 = uStack_60 | unaff_x24[6];
                                uVar5 = regmap_write(*(iVar18 + 8),unaff_x24[3]);
                                uVar16 = uVar5;
                                if (uVar5 != 0) goto code_r0x080019f4;
                            }
                            goto code_r0x08001a14;
                        }
                    }
                    uVar16 = uVar7;
                    pcVar11 = "Write to RTC write data register failed\n";
                }
                else {
                    uStack_64 = uStack_64 & 0xffffff7f;
                    uVar7 = regmap_write(*(iVar18 + 8),*unaff_x24);
                    if (uVar7 == 0) goto code_r0x0800193c;
code_r0x08001a00:
                    uVar16 = uVar7;
                    pcVar11 = "Write to RTC control register failed\n";
                }
            }
            else {
                uStack_60 = uStack_60 & (unaff_x24[6] ^ 0xffffffff);
                uVar6 = regmap_write(*(iVar18 + 8),unaff_x24[3]);
                if (uVar6 == 0) goto code_r0x08001904;
                uVar16 = uVar6;
code_r0x080019f4:
                pcVar11 = "Write to RTC Alarm control register failed\n";
            }
            _dev_err(param_1,pcVar11);
        }
code_r0x08001a14:
        _raw_spin_unlock_irqrestore(unaff_x20,unaff_x21);
        unaff_x19 = param_1;
    }
    iVar17 = sp_el0;
    if (*(iVar17 + 0x5e0) == iStack_58) {
        return uVar16;
    }
    auVar24 = __stack_chk_fail();
    puVar12 = auVar24._8_8_;
    iVar20 = auVar24._0_8_;
    *extraout_x18 = sym.pm8xxx_rtc_read_alarm;
    pcStack_a8 = sym.pm8xxx_rtc_read_alarm;
    iVar17 = sp_el0;
    iStack_b8 = *(iVar17 + 0x5e0);
    iVar17 = *(iVar20 + 0x98);
    uStack_c0 = 0;
    iVar19 = *(iVar17 + 0x18);
    puStack_b0 = &stack0xffffffffffffffb0;
    iStack_a0 = iVar18;
    uStack_90 = uVar16;
    uStack_88 = unaff_x21;
    iStack_80 = unaff_x20;
    iStack_78 = unaff_x19;
    uVar5 = regmap_bulk_read(*(iVar17 + 8),*(iVar19 + 0x14),&uStack_c0 + 4,4);
    if (uVar5 == 0) {
        rtc_time64_to_tm(uStack_c0._4_4_,puVar12 + 4);
        uVar5 = regmap_read(*(iVar17 + 8),*(iVar19 + 0xc),&uStack_c0);
        uVar16 = uVar5;
        if (uVar5 != 0) {
            pcVar11 = "Read from RTC alarm control register failed\n";
            goto code_r0x08001b48;
        }
        *puVar12 = uStack_c0 >> 7;
    }
    else {
        uVar16 = uVar5;
        _dev_err(*(iVar17 + 0x20),"RTC read alarm data failed\n");
        pcVar11 = "RTC alarm data read failed\n";
code_r0x08001b48:
        _dev_err(iVar20,pcVar11);
    }
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) == iStack_b8) {
        return uVar16;
    }
    auVar24 = __stack_chk_fail();
    pcVar11 = auVar24._8_8_;
    iVar9 = auVar24._0_8_;
    *extraout_x18_00 = sym.pm8xxx_rtc_set_alarm;
    pcStack_108 = sym.pm8xxx_rtc_set_alarm;
    iVar18 = sp_el0;
    iStack_118 = *(iVar18 + 0x5e0);
    iVar21 = *(iVar9 + 0x98);
    uStack_120 = 0;
    iVar22 = *(iVar21 + 0x18);
    ppuStack_110 = &puStack_b0;
    uStack_100 = unaff_x25;
    puStack_f0 = unaff_x24;
    iStack_e8 = iVar19;
    iStack_e0 = iVar17;
    uStack_d8 = uVar16;
    puStack_d0 = puVar12;
    iStack_c8 = iVar20;
    uStack_11c = rtc_tm_to_time64(pcVar11 + 4);
    iVar18 = iVar21 + 0x28;
    uVar10 = _raw_spin_lock_irqsave(iVar18);
    uVar5 = regmap_bulk_write(*(iVar21 + 8),*(iVar22 + 0x14),&uStack_11c,4);
    if (uVar5 == 0) {
        uVar5 = regmap_read(*(iVar21 + 8),*(iVar22 + 0xc),&uStack_120);
        uVar16 = uVar5;
        if (uVar5 == 0) {
            if (*pcVar11 == '\0') {
                uStack_120 = uStack_120 & (*(iVar22 + 0x18) ^ 0xffffffff);
            }
            else {
                uStack_120 = uStack_120 | *(iVar22 + 0x18);
            }
            uVar5 = regmap_write(*(iVar21 + 8),*(iVar22 + 0xc));
            uVar16 = uVar5;
            if (uVar5 != 0) {
                pcVar13 = "Write to RTC alarm control register failed\n";
                goto code_r0x08001c80;
            }
        }
    }
    else {
        uVar16 = uVar5;
        pcVar13 = "Write to RTC ALARM register failed\n";
code_r0x08001c80:
        _dev_err(iVar9,pcVar13);
    }
    _raw_spin_unlock_irqrestore(iVar18,uVar10);
    iVar17 = sp_el0;
    if (*(iVar17 + 0x5e0) == iStack_118) {
        return uVar16;
    }
    auVar24 = __stack_chk_fail();
    iVar20 = auVar24._0_8_;
    *extraout_x18_01 = sym.pm8xxx_rtc_alarm_irq_enable;
    pcStack_168 = sym.pm8xxx_rtc_alarm_irq_enable;
    iVar17 = sp_el0;
    iStack_178 = *(iVar17 + 0x5e0);
    iVar19 = *(iVar20 + 0x98);
    uStack_180 = 0;
    iVar17 = iVar19 + 0x28;
    iVar23 = *(iVar19 + 0x18);
    pppuStack_170 = &ppuStack_110;
    iStack_160 = iVar22;
    iStack_150 = iVar21;
    uStack_148 = uVar16;
    pcStack_140 = pcVar11;
    uStack_138 = uVar10;
    iStack_130 = iVar18;
    iStack_128 = iVar9;
    uVar10 = _raw_spin_lock_irqsave(iVar17);
    uVar5 = regmap_read(*(iVar19 + 8),*(iVar23 + 0xc),&uStack_180 + 4);
    uVar16 = uVar5;
    if (uVar5 == 0) {
        if (auVar24._8_4_ == 0) {
            uVar5 = uStack_180._4_4_ & (*(iVar23 + 0x18) ^ 0xffffffff);
        }
        else {
            uVar5 = uStack_180._4_4_ | *(iVar23 + 0x18);
        }
        uStack_180 = CONCAT44(uVar5,uStack_180);
        uVar5 = regmap_write(*(iVar19 + 8),*(iVar23 + 0xc));
        if (uVar5 == 0) {
            if (auVar24._8_4_ == 0) {
                uVar5 = regmap_bulk_write(*(iVar19 + 8),*(iVar23 + 0x14),&uStack_180,4);
                uVar16 = uVar5;
                if (uVar5 != 0) {
                    pcVar11 = "Clear RTC ALARM register failed\n";
                    goto code_r0x08001db4;
                }
            }
            else {
                uVar16 = 0;
            }
        }
        else {
            uVar16 = uVar5;
            pcVar11 = "Write to RTC control register failed\n";
code_r0x08001db4:
            _dev_err(iVar20,pcVar11);
        }
    }
    _raw_spin_unlock_irqrestore(iVar17,uVar10);
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) == iStack_178) {
        return uVar16;
    }
    auVar25 = __stack_chk_fail();
    iVar19 = auVar25._0_8_;
    puVar15 = &uStack_1c0;
    *extraout_x18_02 = sym.pm8xxx_rtc_read_rtc_data;
    pcStack_1a8 = sym.pm8xxx_rtc_read_rtc_data;
    iVar18 = sp_el0;
    iStack_1b8 = *(iVar18 + 0x5e0);
    puVar14 = &uStack_1c0 + 4;
    iVar18 = *(iVar19 + 0x18);
    uStack_1c0 = 0;
    pppuStack_1b0 = &pppuStack_170;
    uStack_1a0 = auVar24._8_8_ & 0xffffffff;
    iStack_198 = iVar20;
    uStack_190 = uVar10;
    iStack_188 = iVar17;
    uVar5 = regmap_bulk_read(*(iVar19 + 8),*(iVar18 + 8),puVar14,4);
    if ((uVar5 == 0) &&
       (uVar5 = regmap_read(*(iVar19 + 8),*(iVar18 + 8),&uStack_1c0), puVar14 = puVar15, -1 < uVar5)) {
        if (uStack_1c0 < uStack_1c0._4_1_) {
            puVar14 = &uStack_1c0 + 4;
            uVar5 = regmap_bulk_read(*(iVar19 + 8),*(iVar18 + 8),puVar14,4);
            if (uVar5 != 0) goto code_r0x08001eb0;
        }
        uVar16 = 0;
        *auVar25._8_8_ =
             CONCAT13(uStack_1c0._7_1_,CONCAT12(uStack_1c0._6_1_,CONCAT11(uStack_1c0._5_1_,uStack_1c0._4_1_)));
    }
    else {
code_r0x08001eb0:
        uVar16 = uVar5;
        _dev_err(*(iVar19 + 0x20),"RTC read rtc data register failed\n");
    }
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) == iStack_1b8) {
        return uVar16;
    }
    iVar17 = __stack_chk_fail();
    *extraout_x18_03 = sym.rtc_us_val_show;
    pcStack_218 = sym.rtc_us_val_show;
    iVar18 = sp_el0;
    iStack_228 = *(iVar18 + 0x5e0);
    uStack_22c = 0;
    auStack_230[0] = 0;
    uStack_234 = 0;
    iVar18 = *(*(iVar17 + 0x60) + 0x98);
    iVar20 = *(iVar18 + 0x18);
    pppuStack_220 = &pppuStack_1b0;
    iVar8 = regmap_bulk_read(*(iVar18 + 8),*(iVar20 + 8),&uStack_22c,4);
    if ((iVar8 == 0) && (iVar8 = regmap_read(*(iVar18 + 8),*(iVar20 + 8),&uStack_234), -1 < iVar8)) {
        uVar1 = uStack_22c;
        if (uStack_234 < (uStack_22c & 0xff)) {
            iVar8 = regmap_bulk_read(*(iVar18 + 8),*(iVar20 + 8),&uStack_22c,4);
            if (iVar8 != 0) goto code_r0x08002040;
            uVar1 = uStack_22c;
        }
        uVar2 = uStack_22c._1_1_;
        uVar3 = uStack_22c._2_1_;
        uVar4 = uStack_22c._3_1_;
        iVar8 = regmap_bulk_read(*(iVar18 + 8),*(iVar20 + 0x1c),auStack_230,2);
        if (iVar8 == 0) {
            uVar16 = (auStack_230[0] * 0xf3e58) / 0x3ff;
            iVar8 = scnprintf(puVar14,0x1000,"%llu\n",
                              CONCAT13(uVar4,CONCAT12(uVar3,CONCAT11(uVar2,uVar1))) * 1000000 +
                              (uVar16 + (auStack_230[0] * 0xf3e58 - uVar16 >> 1) >> 9));
            goto code_r0x08001fe0;
        }
    }
code_r0x08002040:
    _dev_err(iVar17,"RTC read data register failed\n");
code_r0x08001fe0:
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) != iStack_228) {
        iVar18 = __stack_chk_fail();
        *extraout_x18_04 = sym.pm8xxx_rtc_suspend;
        if (((*(iVar18 + 0x10c) & 1) != 0) && (*(iVar18 + 0x148) != 0)) {
            irq_set_irq_wake(*(*(iVar18 + 0x98) + 0x14),1);
        }
        return 0;
    }
    return iVar8;
}


// ===== sym.pm8xxx_rtc_freeze.62d8a4ffdef8f24a576b76bde8665f7a.cfi_jt @ 0x08001228 (size 8) =====

ulong sym.pm8xxx_rtc_freeze.62d8a4ffdef8f24a576b76bde8665f7a.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    devm_free_irq(*(*(param_1 + 0x98) + 0x20),*(*(param_1 + 0x98) + 0x14));
    return 0;
}


// ===== sym.pm8xxx_rtc_restore.62d8a4ffdef8f24a576b76bde8665f7a.cfi_jt @ 0x08001230 (size 8) =====

uchar * sym.pm8xxx_rtc_restore.62d8a4ffdef8f24a576b76bde8665f7a.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    uchar *puVar4;
    uint *puVar5;
    ulong unaff_x30;
    uchar auVar6 [16];
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iVar3 = *(param_1 + 0x98);
    uVar2 = devm_request_any_context_irq
                      (*(iVar3 + 0x20),*(iVar3 + 0x14),
                       sym.pm8xxx_alarm_trigger.62d8a4ffdef8f24a576b76bde8665f7a.cfi_jt,1,"pm8xxx_rtc_alarm",iVar3);
    if (uVar2 < 0) {
        puVar4 = uVar2;
        _dev_err(*(iVar3 + 0x20),"Request IRQ failed (%d)\n",puVar4);
    }
    else {
        puVar5 = *(iVar3 + 0x18);
        uStack_3c = 0;
        uVar2 = regmap_read(*(iVar3 + 8),*puVar5,&uStack_3c);
        puVar4 = uVar2;
        if (uVar2 == 0) {
            if ((uStack_3c >> 7 & 1) == 0) {
                uStack_3c = uStack_3c | 0x80;
                uVar2 = regmap_write(*(iVar3 + 8),*puVar5);
                puVar4 = uVar2;
                if (uVar2 != 0) goto code_r0x080021b4;
            }
            puVar4 = NULL;
        }
    }
code_r0x080021b4:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_38) {
        auVar6 = __stack_chk_fail();
        puVar4 = auVar6._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar4 != NULL) {
            switch(*puVar4) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar4,auVar6._8_8_,0);
                break;
            default:
                return puVar4;
            }
        }
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5502,0x8002260);
        (*pcVar1)();
    }
    return puVar4;
}


// ===== sym.pm8xxx_rtc_resume.62d8a4ffdef8f24a576b76bde8665f7a.cfi_jt @ 0x08001238 (size 8) =====

ulong sym.pm8xxx_rtc_resume.62d8a4ffdef8f24a576b76bde8665f7a.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((*(param_1 + 0x10c) & 1) != 0) && (*(param_1 + 0x148) != 0)) {
        irq_set_irq_wake(*(*(param_1 + 0x98) + 0x14),0);
    }
    return 0;
}


// ===== sym.pm8xxx_rtc_suspend.62d8a4ffdef8f24a576b76bde8665f7a.cfi_jt @ 0x08001240 (size 8) =====

ulong sym.pm8xxx_rtc_suspend.62d8a4ffdef8f24a576b76bde8665f7a.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((*(param_1 + 0x10c) & 1) != 0) && (*(param_1 + 0x148) != 0)) {
        irq_set_irq_wake(*(*(param_1 + 0x98) + 0x14),1);
    }
    return 0;
}


// ===== sym.pm8xxx_alarm_trigger.62d8a4ffdef8f24a576b76bde8665f7a.cfi_jt @ 0x08001248 (size 8) =====

uint64_t sym.pm8xxx_alarm_trigger.62d8a4ffdef8f24a576b76bde8665f7a.cfi_jt(ulong param_1,ulong *param_2)

{
    uchar uVar1;
    uchar uVar2;
    uchar uVar3;
    uchar uVar4;
    int iVar5;
    uint32_t uVar8;
    uint32_t uVar6;
    uint32_t uVar7;
    int64_t iVar9;
    ulong uVar10;
    int64_t iVar11;
    char *pcVar12;
    uint8_t *puVar13;
    char *pcVar14;
    uchar *puVar15;
    ulong *puVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong *extraout_x18_07;
    uint64_t uVar17;
    uint64_t uVar18;
    int64_t iVar19;
    uint64_t uVar20;
    int64_t iVar21;
    int64_t iVar22;
    uint *unaff_x24;
    uint *puVar23;
    int64_t iVar24;
    uint64_t unaff_x25;
    int64_t iVar25;
    int64_t iVar26;
    uint64_t unaff_x26;
    uint64_t unaff_x27;
    ulong unaff_x30;
    uchar auVar27 [16];
    uchar auVar28 [16];
    uint32_t uStack_334;
    uint16_t auStack_330 [2];
    uint uStack_32c;
    int64_t iStack_328;
    ulong ***pppuStack_320;
    code *pcStack_318;
    uint64_t uStack_310;
    uint64_t uStack_300;
    int64_t iStack_2f8;
    int64_t iStack_2f0;
    uint64_t uStack_2e8;
    int64_t iStack_2e0;
    uint64_t uStack_2d8;
    uchar auStack_2d0 [16];
    ulong uStack_2c0;
    int64_t iStack_2b8;
    ulong ***pppuStack_2b0;
    code *pcStack_2a8;
    uint64_t uStack_2a0;
    int64_t iStack_298;
    ulong uStack_290;
    int64_t iStack_288;
    ulong uStack_280;
    int64_t iStack_278;
    ulong ***pppuStack_270;
    code *pcStack_268;
    int64_t iStack_260;
    int64_t iStack_250;
    uint64_t uStack_248;
    char *pcStack_240;
    ulong uStack_238;
    int64_t iStack_230;
    int64_t iStack_228;
    uint32_t uStack_220;
    uint uStack_21c;
    int64_t iStack_218;
    ulong ***pppuStack_210;
    code *pcStack_208;
    uint64_t uStack_200;
    uint *puStack_1f0;
    int64_t iStack_1e8;
    int64_t iStack_1e0;
    uint64_t uStack_1d8;
    uint8_t *puStack_1d0;
    int64_t iStack_1c8;
    ulong uStack_1c0;
    int64_t iStack_1b8;
    ulong ***pppuStack_1b0;
    code *pcStack_1a8;
    int64_t iStack_1a0;
    uint64_t uStack_190;
    uchar auStack_188 [16];
    uint64_t uStack_178;
    uint32_t uStack_164;
    uint32_t uStack_160;
    uint uStack_15c;
    int64_t iStack_158;
    uchar ***pppuStack_150;
    code *pcStack_148;
    uint64_t uStack_140;
    uint64_t uStack_138;
    uint *puStack_130;
    int64_t iStack_128;
    ulong uStack_120;
    uchar auStack_118 [16];
    uint64_t uStack_108;
    ulong uStack_100;
    int64_t iStack_f8;
    uchar **ppuStack_f0;
    code *pcStack_e8;
    int64_t iStack_e0;
    uint64_t uStack_d0;
    int64_t iStack_c8;
    uint uStack_bc;
    uint *puStack_b8;
    uint uStack_ac;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar19 = sp_el0;
    iStack_38 = *(iVar19 + 0x5e0);
    iVar19 = param_2[3];
    uStack_3c = 0;
    rtc_update_irq(*param_2,1,0xa0);
    puVar16 = param_2 + 5;
    _raw_spin_lock(puVar16);
    iVar5 = regmap_read(param_2[1],*(iVar19 + 0xc),&uStack_3c);
    if (iVar5 == 0) {
        uStack_3c = uStack_3c & (*(iVar19 + 0x18) ^ 0xffffffff);
        iVar5 = regmap_write(param_2[1],*(iVar19 + 0xc));
        _raw_spin_unlock(puVar16);
        if (iVar5 == 0) {
            iVar5 = regmap_read(param_2[1],*(iVar19 + 0x10),&uStack_3c);
            if (iVar5 == 0) {
                uStack_3c = uStack_3c | 1;
                iVar5 = regmap_write(param_2[1],*(iVar19 + 0x10));
                if (iVar5 == 0) goto code_r0x080015b4;
                uVar10 = param_2[4];
                pcVar12 = "Write to RTC Alarm control2 register failed\n";
            }
            else {
                uVar10 = param_2[4];
                pcVar12 = "RTC Alarm control2 register read failed\n";
            }
        }
        else {
            uVar10 = param_2[4];
            pcVar12 = "Write to alarm control register failed\n";
        }
        _dev_err(uVar10,pcVar12);
    }
    else {
        _raw_spin_unlock(puVar16);
    }
code_r0x080015b4:
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_38) {
        return 1;
    }
    iVar9 = __stack_chk_fail();
    *extraout_x18 = sym.pm8xxx_rtc_init_alarm;
    pcStack_98 = sym.pm8xxx_rtc_init_alarm;
    iVar21 = sp_el0;
    iVar19 = iVar9 + 0x28;
    iStack_a8 = *(iVar21 + 0x5e0);
    iVar21 = *(iVar9 + 0x18);
    puStack_b8 = NULL;
    uStack_bc = 0;
    puStack_a0 = &stack0xffffffffffffffd0;
    uVar10 = _raw_spin_lock_irqsave(iVar19);
    uVar6 = sym.pm8xxx_rtc_read_rtc_data(iVar9,&puStack_b8);
    if (uVar6 == 0) {
        uStack_ac = 0;
        uVar7 = regmap_bulk_read(*(iVar9 + 8),*(*(iVar9 + 0x18) + 0x14),&uStack_ac,4);
        uVar6 = uStack_ac;
        if (uVar7 == 0) {
            unaff_x24 = uStack_ac;
            unaff_x27 = uStack_ac._1_1_;
            unaff_x25 = uStack_ac._2_1_;
            unaff_x26 = uStack_ac._3_1_;
            uVar7 = regmap_read(*(iVar9 + 8),*(iVar21 + 0xc),&uStack_bc);
            uVar17 = uVar7;
            if (uVar7 == 0) {
                iVar11 = _raw_spin_unlock_irqrestore(iVar19,uVar10);
                if ((uStack_bc < '\0') && (unaff_x24 = uVar6, unaff_x24 <= puStack_b8)) {
                    sym.pm8xxx_alarm_trigger(iVar11,iVar9);
                    uVar17 = 0;
                }
            }
            else {
                _raw_spin_unlock_irqrestore(iVar19,uVar10);
                _dev_err(*(iVar9 + 0x20),"Read from RTC alarm control register failed\n");
            }
        }
        else {
            uVar17 = uVar7;
            _dev_err(*(iVar9 + 0x20),"RTC read alarm data failed\n");
            _raw_spin_unlock_irqrestore(iVar19,uVar10);
            _dev_err(*(iVar9 + 0x20),"rtc read alarm data failed\n");
        }
    }
    else {
        uVar17 = uVar6;
        _raw_spin_unlock_irqrestore(iVar19,uVar10);
        _dev_err(*(iVar9 + 0x20),"rtc read rtc data failed\n");
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_a8) {
        return uVar17;
    }
    auVar27 = __stack_chk_fail();
    *extraout_x18_00 = sym.pm8xxx_rtc_read_time;
    pcStack_e8 = sym.pm8xxx_rtc_read_time;
    iVar11 = sp_el0;
    iStack_f8 = *(iVar11 + 0x5e0);
    uStack_100 = 0;
    ppuStack_f0 = &puStack_a0;
    iStack_e0 = iVar19;
    uStack_d0 = uVar17;
    iStack_c8 = iVar9;
    uVar6 = sym.pm8xxx_rtc_read_rtc_data(*(auVar27._0_8_ + 0x98),&uStack_100);
    uVar17 = uVar6;
    if (uVar6 == 0) {
        rtc_time64_to_tm(uStack_100,auVar27._8_8_);
    }
    else {
        _dev_err(auVar27._0_8_,"RTC read time failed\n");
    }
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_f8) {
        return uVar17;
    }
    auVar28 = __stack_chk_fail();
    uVar18 = auVar28._0_8_;
    *extraout_x18_01 = sym.pm8xxx_rtc_set_time;
    pcStack_148 = sym.pm8xxx_rtc_set_time;
    iVar19 = sp_el0;
    iStack_158 = *(iVar19 + 0x5e0);
    iVar19 = *(uVar18 + 0x98);
    uStack_164 = 0;
    uStack_160 = 0;
    pppuStack_150 = &ppuStack_f0;
    uStack_140 = unaff_x26;
    uStack_138 = unaff_x25;
    puStack_130 = unaff_x24;
    iStack_128 = iVar21;
    uStack_120 = uVar10;
    uStack_108 = uVar17;
    auStack_118 = auVar27;
    if (*(iVar19 + 0x10) == '\0') {
        uVar20 = 0xfffffff3;
    }
    else {
        puVar23 = *(iVar19 + 0x18);
        uStack_15c = rtc_tm_to_time64(auVar28._8_8_);
        iVar21 = iVar19 + 0x28;
        uVar10 = _raw_spin_lock_irqsave(iVar21);
        auVar27._8_8_ = iVar21;
        auVar27._0_8_ = uVar10;
        uVar6 = regmap_read(*(iVar19 + 8),puVar23[3],&uStack_160);
        uVar20 = uVar6;
        if (uVar6 == 0) {
            uVar6 = puVar23[6] & uStack_160;
            unaff_x25 = uVar6;
            if (uVar6 == 0) {
code_r0x08001904:
                uVar8 = regmap_read(*(iVar19 + 8),*puVar23,&uStack_164);
                uVar7 = uStack_164;
                uVar20 = uVar8;
                if (uVar8 != 0) goto code_r0x08001a14;
                unaff_x26 = uStack_164;
                if ((uStack_164 >> 7 & 1) == 0) {
code_r0x0800193c:
                    uVar8 = regmap_write(*(iVar19 + 8),puVar23[1],0);
                    if (uVar8 == 0) {
                        uVar8 = regmap_bulk_write(*(iVar19 + 8),puVar23[1] + 1,&uStack_15c | 1,3);
                        if (uVar8 == 0) {
                            uVar8 = regmap_write(*(iVar19 + 8),puVar23[1],uStack_15c);
                            if (uVar8 == 0) {
                                if ((uVar7 >> 7 & 1) != 0) {
                                    uStack_164 = uStack_164 | 0x80;
                                    uVar8 = regmap_write(*(iVar19 + 8),*puVar23);
                                    if (uVar8 != 0) goto code_r0x08001a00;
                                }
                                if (uVar6 == 0) {
                                    uVar20 = 0;
                                }
                                else {
                                    uStack_160 = uStack_160 | puVar23[6];
                                    uVar6 = regmap_write(*(iVar19 + 8),puVar23[3]);
                                    uVar20 = uVar6;
                                    if (uVar6 != 0) goto code_r0x080019f4;
                                }
                                goto code_r0x08001a14;
                            }
                        }
                    }
                    uVar20 = uVar8;
                    pcVar12 = "Write to RTC write data register failed\n";
                }
                else {
                    uStack_164 = uStack_164 & 0xffffff7f;
                    uVar8 = regmap_write(*(iVar19 + 8),*puVar23);
                    if (uVar8 == 0) goto code_r0x0800193c;
code_r0x08001a00:
                    uVar20 = uVar8;
                    pcVar12 = "Write to RTC control register failed\n";
                }
            }
            else {
                uStack_160 = uStack_160 & (puVar23[6] ^ 0xffffffff);
                uVar7 = regmap_write(*(iVar19 + 8),puVar23[3]);
                if (uVar7 == 0) goto code_r0x08001904;
                uVar20 = uVar7;
code_r0x080019f4:
                pcVar12 = "Write to RTC Alarm control register failed\n";
            }
            _dev_err(uVar18,pcVar12);
        }
code_r0x08001a14:
        _raw_spin_unlock_irqrestore(iVar21,uVar10);
        uVar17 = uVar18;
        unaff_x24 = puVar23;
    }
    iVar21 = sp_el0;
    if (*(iVar21 + 0x5e0) == iStack_158) {
        return uVar20;
    }
    auVar28 = __stack_chk_fail();
    puVar13 = auVar28._8_8_;
    iVar9 = auVar28._0_8_;
    *extraout_x18_02 = sym.pm8xxx_rtc_read_alarm;
    pcStack_1a8 = sym.pm8xxx_rtc_read_alarm;
    iVar21 = sp_el0;
    iStack_1b8 = *(iVar21 + 0x5e0);
    iVar21 = *(iVar9 + 0x98);
    uStack_1c0 = 0;
    iVar11 = *(iVar21 + 0x18);
    pppuStack_1b0 = &pppuStack_150;
    iStack_1a0 = iVar19;
    uStack_190 = uVar20;
    uStack_178 = uVar17;
    auStack_188 = auVar27;
    uVar6 = regmap_bulk_read(*(iVar21 + 8),*(iVar11 + 0x14),&uStack_1c0 + 4,4);
    if (uVar6 == 0) {
        rtc_time64_to_tm(uStack_1c0._4_4_,puVar13 + 4);
        uVar6 = regmap_read(*(iVar21 + 8),*(iVar11 + 0xc),&uStack_1c0);
        uVar17 = uVar6;
        if (uVar6 != 0) {
            pcVar12 = "Read from RTC alarm control register failed\n";
            goto code_r0x08001b48;
        }
        *puVar13 = uStack_1c0 >> 7;
    }
    else {
        uVar17 = uVar6;
        _dev_err(*(iVar21 + 0x20),"RTC read alarm data failed\n");
        pcVar12 = "RTC alarm data read failed\n";
code_r0x08001b48:
        _dev_err(iVar9,pcVar12);
    }
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_1b8) {
        return uVar17;
    }
    auVar27 = __stack_chk_fail();
    pcVar12 = auVar27._8_8_;
    iVar22 = auVar27._0_8_;
    *extraout_x18_03 = sym.pm8xxx_rtc_set_alarm;
    pcStack_208 = sym.pm8xxx_rtc_set_alarm;
    iVar19 = sp_el0;
    iStack_218 = *(iVar19 + 0x5e0);
    iVar24 = *(iVar22 + 0x98);
    uStack_220 = 0;
    iVar25 = *(iVar24 + 0x18);
    pppuStack_210 = &pppuStack_1b0;
    uStack_200 = unaff_x25;
    puStack_1f0 = unaff_x24;
    iStack_1e8 = iVar11;
    iStack_1e0 = iVar21;
    uStack_1d8 = uVar17;
    puStack_1d0 = puVar13;
    iStack_1c8 = iVar9;
    uStack_21c = rtc_tm_to_time64(pcVar12 + 4);
    iVar19 = iVar24 + 0x28;
    uVar10 = _raw_spin_lock_irqsave(iVar19);
    uVar6 = regmap_bulk_write(*(iVar24 + 8),*(iVar25 + 0x14),&uStack_21c,4);
    if (uVar6 == 0) {
        uVar6 = regmap_read(*(iVar24 + 8),*(iVar25 + 0xc),&uStack_220);
        uVar17 = uVar6;
        if (uVar6 == 0) {
            if (*pcVar12 == '\0') {
                uStack_220 = uStack_220 & (*(iVar25 + 0x18) ^ 0xffffffff);
            }
            else {
                uStack_220 = uStack_220 | *(iVar25 + 0x18);
            }
            uVar6 = regmap_write(*(iVar24 + 8),*(iVar25 + 0xc));
            uVar17 = uVar6;
            if (uVar6 != 0) {
                pcVar14 = "Write to RTC alarm control register failed\n";
                goto code_r0x08001c80;
            }
        }
    }
    else {
        uVar17 = uVar6;
        pcVar14 = "Write to RTC ALARM register failed\n";
code_r0x08001c80:
        _dev_err(iVar22,pcVar14);
    }
    _raw_spin_unlock_irqrestore(iVar19,uVar10);
    iVar21 = sp_el0;
    if (*(iVar21 + 0x5e0) == iStack_218) {
        return uVar17;
    }
    auVar27 = __stack_chk_fail();
    iVar9 = auVar27._0_8_;
    *extraout_x18_04 = sym.pm8xxx_rtc_alarm_irq_enable;
    pcStack_268 = sym.pm8xxx_rtc_alarm_irq_enable;
    iVar21 = sp_el0;
    iStack_278 = *(iVar21 + 0x5e0);
    iVar11 = *(iVar9 + 0x98);
    uStack_280 = 0;
    iVar21 = iVar11 + 0x28;
    iVar26 = *(iVar11 + 0x18);
    pppuStack_270 = &pppuStack_210;
    iStack_260 = iVar25;
    iStack_250 = iVar24;
    uStack_248 = uVar17;
    pcStack_240 = pcVar12;
    uStack_238 = uVar10;
    iStack_230 = iVar19;
    iStack_228 = iVar22;
    uVar10 = _raw_spin_lock_irqsave(iVar21);
    uVar6 = regmap_read(*(iVar11 + 8),*(iVar26 + 0xc),&uStack_280 + 4);
    uVar17 = uVar6;
    if (uVar6 == 0) {
        if (auVar27._8_4_ == 0) {
            uVar6 = uStack_280._4_4_ & (*(iVar26 + 0x18) ^ 0xffffffff);
        }
        else {
            uVar6 = uStack_280._4_4_ | *(iVar26 + 0x18);
        }
        uStack_280 = CONCAT44(uVar6,uStack_280);
        uVar6 = regmap_write(*(iVar11 + 8),*(iVar26 + 0xc));
        if (uVar6 == 0) {
            if (auVar27._8_4_ == 0) {
                uVar6 = regmap_bulk_write(*(iVar11 + 8),*(iVar26 + 0x14),&uStack_280,4);
                uVar17 = uVar6;
                if (uVar6 != 0) {
                    pcVar12 = "Clear RTC ALARM register failed\n";
                    goto code_r0x08001db4;
                }
            }
            else {
                uVar17 = 0;
            }
        }
        else {
            uVar17 = uVar6;
            pcVar12 = "Write to RTC control register failed\n";
code_r0x08001db4:
            _dev_err(iVar9,pcVar12);
        }
    }
    _raw_spin_unlock_irqrestore(iVar21,uVar10);
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_278) {
        return uVar17;
    }
    auVar28 = __stack_chk_fail();
    iVar22 = auVar28._0_8_;
    puVar16 = &uStack_2c0;
    *extraout_x18_05 = sym.pm8xxx_rtc_read_rtc_data;
    pcStack_2a8 = sym.pm8xxx_rtc_read_rtc_data;
    iVar19 = sp_el0;
    iStack_2b8 = *(iVar19 + 0x5e0);
    puVar15 = &uStack_2c0 + 4;
    iVar19 = *(iVar22 + 0x18);
    uStack_2c0 = 0;
    pppuStack_2b0 = &pppuStack_270;
    uStack_2a0 = auVar27._8_8_ & 0xffffffff;
    iStack_298 = iVar9;
    uStack_290 = uVar10;
    iStack_288 = iVar21;
    uVar6 = regmap_bulk_read(*(iVar22 + 8),*(iVar19 + 8),puVar15,4);
    if (uVar6 == 0) {
        uVar6 = regmap_read(*(iVar22 + 8),*(iVar19 + 8),&uStack_2c0);
        puVar15 = puVar16;
        if (uVar6 < 0) goto code_r0x08001eb0;
        if (uStack_2c0 < uStack_2c0._4_1_) {
            puVar15 = &uStack_2c0 + 4;
            uVar6 = regmap_bulk_read(*(iVar22 + 8),*(iVar19 + 8),puVar15,4);
            if (uVar6 != 0) goto code_r0x08001eb0;
        }
        uVar18 = 0;
        *auVar28._8_8_ =
             CONCAT13(uStack_2c0._7_1_,CONCAT12(uStack_2c0._6_1_,CONCAT11(uStack_2c0._5_1_,uStack_2c0._4_1_)));
    }
    else {
code_r0x08001eb0:
        uVar18 = uVar6;
        _dev_err(*(iVar22 + 0x20),"RTC read rtc data register failed\n");
    }
    iVar21 = sp_el0;
    if (*(iVar21 + 0x5e0) == iStack_2b8) {
        return uVar18;
    }
    iVar9 = __stack_chk_fail();
    *extraout_x18_06 = sym.rtc_us_val_show;
    pcStack_318 = sym.rtc_us_val_show;
    iVar21 = sp_el0;
    iStack_328 = *(iVar21 + 0x5e0);
    uStack_32c = 0;
    auStack_330[0] = 0;
    uStack_334 = 0;
    iVar21 = *(*(iVar9 + 0x60) + 0x98);
    iVar22 = *(iVar21 + 0x18);
    pppuStack_320 = &pppuStack_2b0;
    uStack_310 = unaff_x27;
    uStack_300 = unaff_x26;
    iStack_2f8 = iVar26;
    iStack_2f0 = iVar11;
    uStack_2e8 = uVar17;
    iStack_2e0 = iVar19;
    uStack_2d8 = uVar18;
    auStack_2d0 = auVar28;
    iVar5 = regmap_bulk_read(*(iVar21 + 8),*(iVar22 + 8),&uStack_32c,4);
    if (iVar5 == 0) {
        iVar5 = regmap_read(*(iVar21 + 8),*(iVar22 + 8),&uStack_334);
        if (-1 < iVar5) {
            uVar1 = uStack_32c;
            if (uStack_334 < (uStack_32c & 0xff)) {
                iVar5 = regmap_bulk_read(*(iVar21 + 8),*(iVar22 + 8),&uStack_32c,4);
                if (iVar5 != 0) goto code_r0x08002040;
                uVar1 = uStack_32c;
            }
            uVar2 = uStack_32c._1_1_;
            uVar3 = uStack_32c._2_1_;
            uVar4 = uStack_32c._3_1_;
            iVar5 = regmap_bulk_read(*(iVar21 + 8),*(iVar22 + 0x1c),auStack_330,2);
            if (iVar5 == 0) {
                uVar17 = (auStack_330[0] * 0xf3e58) / 0x3ff;
                iVar5 = scnprintf(puVar15,0x1000,"%llu\n",
                                  CONCAT13(uVar4,CONCAT12(uVar3,CONCAT11(uVar2,uVar1))) * 1000000 +
                                  (uVar17 + (auStack_330[0] * 0xf3e58 - uVar17 >> 1) >> 9));
                goto code_r0x08001fe0;
            }
        }
    }
code_r0x08002040:
    _dev_err(iVar9,"RTC read data register failed\n");
code_r0x08001fe0:
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) != iStack_328) {
        iVar19 = __stack_chk_fail();
        *extraout_x18_07 = sym.pm8xxx_rtc_suspend;
        if (((*(iVar19 + 0x10c) & 1) != 0) && (*(iVar19 + 0x148) != 0)) {
            irq_set_irq_wake(*(*(iVar19 + 0x98) + 0x14),1);
        }
        return 0;
    }
    return iVar5;
}


// ===== sym.pm8xxx_rtc_shutdown.62d8a4ffdef8f24a576b76bde8665f7a.cfi_jt @ 0x08001250 (size 8) =====

void sym.pm8xxx_rtc_shutdown.62d8a4ffdef8f24a576b76bde8665f7a.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    devm_free_irq(*(*(param_1 + 0xa8) + 0x20),*(*(param_1 + 0xa8) + 0x14));
    return;
}


// ===== sym.pm8xxx_rtc_set_alarm.62d8a4ffdef8f24a576b76bde8665f7a.cfi_jt @ 0x08001258 (size 8) =====

uint64_t sym.pm8xxx_rtc_set_alarm.62d8a4ffdef8f24a576b76bde8665f7a.cfi_jt(int64_t param_1,char *param_2)

{
    int64_t iVar1;
    uchar uVar2;
    uchar uVar3;
    uchar uVar4;
    uchar uVar5;
    uint32_t uVar6;
    int iVar7;
    ulong uVar8;
    int64_t iVar9;
    char *pcVar10;
    uchar *puVar11;
    ulong *puVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    int64_t iVar13;
    uint64_t uVar14;
    int64_t iVar15;
    int64_t iVar16;
    int64_t iVar17;
    int64_t iVar18;
    ulong unaff_x30;
    uchar auVar19 [16];
    uchar auVar20 [16];
    uint32_t uStack_174;
    uint16_t auStack_170 [2];
    uint uStack_16c;
    int64_t iStack_168;
    ulong **ppuStack_160;
    code *pcStack_158;
    ulong uStack_100;
    int64_t iStack_f8;
    uchar **ppuStack_f0;
    code *pcStack_e8;
    uint64_t uStack_e0;
    int64_t iStack_d8;
    ulong uStack_d0;
    int64_t iStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    int64_t iStack_a0;
    int64_t iStack_90;
    uint64_t uStack_88;
    char *pcStack_80;
    ulong uStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    uint32_t uStack_60;
    uint uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iStack_58 = *(iVar13 + 0x5e0);
    iVar15 = *(param_1 + 0x98);
    uStack_60 = 0;
    iVar17 = *(iVar15 + 0x18);
    uStack_5c = rtc_tm_to_time64(param_2 + 4);
    iVar13 = iVar15 + 0x28;
    uVar8 = _raw_spin_lock_irqsave(iVar13);
    uVar6 = regmap_bulk_write(*(iVar15 + 8),*(iVar17 + 0x14),&uStack_5c,4);
    if (uVar6 == 0) {
        uVar6 = regmap_read(*(iVar15 + 8),*(iVar17 + 0xc),&uStack_60);
        uVar14 = uVar6;
        if (uVar6 == 0) {
            if (*param_2 == '\0') {
                uStack_60 = uStack_60 & (*(iVar17 + 0x18) ^ 0xffffffff);
            }
            else {
                uStack_60 = uStack_60 | *(iVar17 + 0x18);
            }
            uVar6 = regmap_write(*(iVar15 + 8),*(iVar17 + 0xc));
            uVar14 = uVar6;
            if (uVar6 != 0) {
                pcVar10 = "Write to RTC alarm control register failed\n";
                goto code_r0x08001c80;
            }
        }
    }
    else {
        uVar14 = uVar6;
        pcVar10 = "Write to RTC ALARM register failed\n";
code_r0x08001c80:
        _dev_err(param_1,pcVar10);
    }
    _raw_spin_unlock_irqrestore(iVar13,uVar8);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_58) {
        return uVar14;
    }
    auVar19 = __stack_chk_fail();
    iVar9 = auVar19._0_8_;
    *extraout_x18 = sym.pm8xxx_rtc_alarm_irq_enable;
    pcStack_a8 = sym.pm8xxx_rtc_alarm_irq_enable;
    iVar1 = sp_el0;
    iStack_b8 = *(iVar1 + 0x5e0);
    iVar16 = *(iVar9 + 0x98);
    uStack_c0 = 0;
    iVar1 = iVar16 + 0x28;
    iVar18 = *(iVar16 + 0x18);
    puStack_b0 = &stack0xffffffffffffffb0;
    iStack_a0 = iVar17;
    iStack_90 = iVar15;
    uStack_88 = uVar14;
    pcStack_80 = param_2;
    uStack_78 = uVar8;
    iStack_70 = iVar13;
    iStack_68 = param_1;
    uVar8 = _raw_spin_lock_irqsave(iVar1);
    uVar6 = regmap_read(*(iVar16 + 8),*(iVar18 + 0xc),&uStack_c0 + 4);
    uVar14 = uVar6;
    if (uVar6 == 0) {
        if (auVar19._8_4_ == 0) {
            uVar6 = uStack_c0._4_4_ & (*(iVar18 + 0x18) ^ 0xffffffff);
        }
        else {
            uVar6 = uStack_c0._4_4_ | *(iVar18 + 0x18);
        }
        uStack_c0 = CONCAT44(uVar6,uStack_c0);
        uVar6 = regmap_write(*(iVar16 + 8),*(iVar18 + 0xc));
        if (uVar6 == 0) {
            if (auVar19._8_4_ == 0) {
                uVar6 = regmap_bulk_write(*(iVar16 + 8),*(iVar18 + 0x14),&uStack_c0,4);
                uVar14 = uVar6;
                if (uVar6 != 0) {
                    pcVar10 = "Clear RTC ALARM register failed\n";
                    goto code_r0x08001db4;
                }
            }
            else {
                uVar14 = 0;
            }
        }
        else {
            uVar14 = uVar6;
            pcVar10 = "Write to RTC control register failed\n";
code_r0x08001db4:
            _dev_err(iVar9,pcVar10);
        }
    }
    _raw_spin_unlock_irqrestore(iVar1,uVar8);
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_b8) {
        return uVar14;
    }
    auVar20 = __stack_chk_fail();
    iVar15 = auVar20._0_8_;
    puVar12 = &uStack_100;
    *extraout_x18_00 = sym.pm8xxx_rtc_read_rtc_data;
    pcStack_e8 = sym.pm8xxx_rtc_read_rtc_data;
    iVar13 = sp_el0;
    iStack_f8 = *(iVar13 + 0x5e0);
    puVar11 = &uStack_100 + 4;
    iVar13 = *(iVar15 + 0x18);
    uStack_100 = 0;
    ppuStack_f0 = &puStack_b0;
    uStack_e0 = auVar19._8_8_ & 0xffffffff;
    iStack_d8 = iVar9;
    uStack_d0 = uVar8;
    iStack_c8 = iVar1;
    uVar6 = regmap_bulk_read(*(iVar15 + 8),*(iVar13 + 8),puVar11,4);
    if ((uVar6 == 0) &&
       (uVar6 = regmap_read(*(iVar15 + 8),*(iVar13 + 8),&uStack_100), puVar11 = puVar12, -1 < uVar6)) {
        if (uStack_100 < uStack_100._4_1_) {
            puVar11 = &uStack_100 + 4;
            uVar6 = regmap_bulk_read(*(iVar15 + 8),*(iVar13 + 8),puVar11,4);
            if (uVar6 != 0) goto code_r0x08001eb0;
        }
        uVar14 = 0;
        *auVar20._8_8_ =
             CONCAT13(uStack_100._7_1_,CONCAT12(uStack_100._6_1_,CONCAT11(uStack_100._5_1_,uStack_100._4_1_)));
    }
    else {
code_r0x08001eb0:
        uVar14 = uVar6;
        _dev_err(*(iVar15 + 0x20),"RTC read rtc data register failed\n");
    }
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_f8) {
        return uVar14;
    }
    iVar15 = __stack_chk_fail();
    *extraout_x18_01 = sym.rtc_us_val_show;
    pcStack_158 = sym.rtc_us_val_show;
    iVar13 = sp_el0;
    iStack_168 = *(iVar13 + 0x5e0);
    uStack_16c = 0;
    auStack_170[0] = 0;
    uStack_174 = 0;
    iVar13 = *(*(iVar15 + 0x60) + 0x98);
    iVar17 = *(iVar13 + 0x18);
    ppuStack_160 = &ppuStack_f0;
    iVar7 = regmap_bulk_read(*(iVar13 + 8),*(iVar17 + 8),&uStack_16c,4);
    if ((iVar7 == 0) && (iVar7 = regmap_read(*(iVar13 + 8),*(iVar17 + 8),&uStack_174), -1 < iVar7)) {
        uVar2 = uStack_16c;
        if (uStack_174 < (uStack_16c & 0xff)) {
            iVar7 = regmap_bulk_read(*(iVar13 + 8),*(iVar17 + 8),&uStack_16c,4);
            if (iVar7 != 0) goto code_r0x08002040;
            uVar2 = uStack_16c;
        }
        uVar3 = uStack_16c._1_1_;
        uVar4 = uStack_16c._2_1_;
        uVar5 = uStack_16c._3_1_;
        iVar7 = regmap_bulk_read(*(iVar13 + 8),*(iVar17 + 0x1c),auStack_170,2);
        if (iVar7 == 0) {
            uVar14 = (auStack_170[0] * 0xf3e58) / 0x3ff;
            iVar7 = scnprintf(puVar11,0x1000,"%llu\n",
                              CONCAT13(uVar5,CONCAT12(uVar4,CONCAT11(uVar3,uVar2))) * 1000000 +
                              (uVar14 + (auStack_170[0] * 0xf3e58 - uVar14 >> 1) >> 9));
            goto code_r0x08001fe0;
        }
    }
code_r0x08002040:
    _dev_err(iVar15,"RTC read data register failed\n");
code_r0x08001fe0:
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_168) {
        return iVar7;
    }
    iVar13 = __stack_chk_fail();
    *extraout_x18_02 = sym.pm8xxx_rtc_suspend;
    if (((*(iVar13 + 0x10c) & 1) != 0) && (*(iVar13 + 0x148) != 0)) {
        irq_set_irq_wake(*(*(iVar13 + 0x98) + 0x14),1);
    }
    return 0;
}


// ===== sym.pm8xxx_rtc_read_alarm.62d8a4ffdef8f24a576b76bde8665f7a.cfi_jt @ 0x08001260 (size 8) =====

uint64_t sym.pm8xxx_rtc_read_alarm.62d8a4ffdef8f24a576b76bde8665f7a.cfi_jt(int64_t param_1,uint8_t *param_2)

{
    int64_t iVar1;
    uchar uVar2;
    uchar uVar3;
    uchar uVar4;
    uchar uVar5;
    uint32_t uVar6;
    int iVar7;
    ulong uVar8;
    int64_t iVar9;
    char *pcVar10;
    char *pcVar11;
    uchar *puVar12;
    ulong *puVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    uint64_t uVar14;
    int64_t iVar15;
    int64_t iVar16;
    int64_t iVar17;
    int64_t iVar18;
    int64_t iVar19;
    int64_t iVar20;
    ulong unaff_x30;
    uchar auVar21 [16];
    uchar auVar22 [16];
    uint32_t uStack_1c4;
    uint16_t auStack_1c0 [2];
    uint uStack_1bc;
    int64_t iStack_1b8;
    ulong **ppuStack_1b0;
    code *pcStack_1a8;
    ulong uStack_150;
    int64_t iStack_148;
    ulong **ppuStack_140;
    code *pcStack_138;
    uint64_t uStack_130;
    int64_t iStack_128;
    ulong uStack_120;
    int64_t iStack_118;
    ulong uStack_110;
    int64_t iStack_108;
    uchar **ppuStack_100;
    code *pcStack_f8;
    int64_t iStack_f0;
    int64_t iStack_e0;
    uint64_t uStack_d8;
    char *pcStack_d0;
    ulong uStack_c8;
    int64_t iStack_c0;
    int64_t iStack_b8;
    uint32_t uStack_b0;
    uint uStack_ac;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar15 = sp_el0;
    iStack_48 = *(iVar15 + 0x5e0);
    iVar15 = *(param_1 + 0x98);
    uStack_50 = 0;
    iVar16 = *(iVar15 + 0x18);
    uVar6 = regmap_bulk_read(*(iVar15 + 8),*(iVar16 + 0x14),&uStack_50 + 4,4);
    if (uVar6 == 0) {
        rtc_time64_to_tm(uStack_50._4_4_,param_2 + 4);
        uVar6 = regmap_read(*(iVar15 + 8),*(iVar16 + 0xc),&uStack_50);
        uVar14 = uVar6;
        if (uVar6 != 0) {
            pcVar11 = "Read from RTC alarm control register failed\n";
            goto code_r0x08001b48;
        }
        *param_2 = uStack_50 >> 7;
    }
    else {
        uVar14 = uVar6;
        _dev_err(*(iVar15 + 0x20),"RTC read alarm data failed\n");
        pcVar11 = "RTC alarm data read failed\n";
code_r0x08001b48:
        _dev_err(param_1,pcVar11);
    }
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_48) {
        return uVar14;
    }
    auVar21 = __stack_chk_fail();
    pcVar11 = auVar21._8_8_;
    iVar16 = auVar21._0_8_;
    *extraout_x18 = sym.pm8xxx_rtc_set_alarm;
    pcStack_98 = sym.pm8xxx_rtc_set_alarm;
    iVar15 = sp_el0;
    iStack_a8 = *(iVar15 + 0x5e0);
    iVar17 = *(iVar16 + 0x98);
    uStack_b0 = 0;
    iVar19 = *(iVar17 + 0x18);
    puStack_a0 = &stack0xffffffffffffffc0;
    uStack_ac = rtc_tm_to_time64(pcVar11 + 4);
    iVar15 = iVar17 + 0x28;
    uVar8 = _raw_spin_lock_irqsave(iVar15);
    uVar6 = regmap_bulk_write(*(iVar17 + 8),*(iVar19 + 0x14),&uStack_ac,4);
    if (uVar6 == 0) {
        uVar6 = regmap_read(*(iVar17 + 8),*(iVar19 + 0xc),&uStack_b0);
        uVar14 = uVar6;
        if (uVar6 == 0) {
            if (*pcVar11 == '\0') {
                uStack_b0 = uStack_b0 & (*(iVar19 + 0x18) ^ 0xffffffff);
            }
            else {
                uStack_b0 = uStack_b0 | *(iVar19 + 0x18);
            }
            uVar6 = regmap_write(*(iVar17 + 8),*(iVar19 + 0xc));
            uVar14 = uVar6;
            if (uVar6 != 0) {
                pcVar10 = "Write to RTC alarm control register failed\n";
                goto code_r0x08001c80;
            }
        }
    }
    else {
        uVar14 = uVar6;
        pcVar10 = "Write to RTC ALARM register failed\n";
code_r0x08001c80:
        _dev_err(iVar16,pcVar10);
    }
    _raw_spin_unlock_irqrestore(iVar15,uVar8);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_a8) {
        return uVar14;
    }
    auVar21 = __stack_chk_fail();
    iVar9 = auVar21._0_8_;
    *extraout_x18_00 = sym.pm8xxx_rtc_alarm_irq_enable;
    pcStack_f8 = sym.pm8xxx_rtc_alarm_irq_enable;
    iVar1 = sp_el0;
    iStack_108 = *(iVar1 + 0x5e0);
    iVar18 = *(iVar9 + 0x98);
    uStack_110 = 0;
    iVar1 = iVar18 + 0x28;
    iVar20 = *(iVar18 + 0x18);
    ppuStack_100 = &puStack_a0;
    iStack_f0 = iVar19;
    iStack_e0 = iVar17;
    uStack_d8 = uVar14;
    pcStack_d0 = pcVar11;
    uStack_c8 = uVar8;
    iStack_c0 = iVar15;
    iStack_b8 = iVar16;
    uVar8 = _raw_spin_lock_irqsave(iVar1);
    uVar6 = regmap_read(*(iVar18 + 8),*(iVar20 + 0xc),&uStack_110 + 4);
    uVar14 = uVar6;
    if (uVar6 == 0) {
        if (auVar21._8_4_ == 0) {
            uVar6 = uStack_110._4_4_ & (*(iVar20 + 0x18) ^ 0xffffffff);
        }
        else {
            uVar6 = uStack_110._4_4_ | *(iVar20 + 0x18);
        }
        uStack_110 = CONCAT44(uVar6,uStack_110);
        uVar6 = regmap_write(*(iVar18 + 8),*(iVar20 + 0xc));
        if (uVar6 == 0) {
            if (auVar21._8_4_ == 0) {
                uVar6 = regmap_bulk_write(*(iVar18 + 8),*(iVar20 + 0x14),&uStack_110,4);
                uVar14 = uVar6;
                if (uVar6 != 0) {
                    pcVar11 = "Clear RTC ALARM register failed\n";
                    goto code_r0x08001db4;
                }
            }
            else {
                uVar14 = 0;
            }
        }
        else {
            uVar14 = uVar6;
            pcVar11 = "Write to RTC control register failed\n";
code_r0x08001db4:
            _dev_err(iVar9,pcVar11);
        }
    }
    _raw_spin_unlock_irqrestore(iVar1,uVar8);
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_108) {
        return uVar14;
    }
    auVar22 = __stack_chk_fail();
    iVar16 = auVar22._0_8_;
    puVar13 = &uStack_150;
    *extraout_x18_01 = sym.pm8xxx_rtc_read_rtc_data;
    pcStack_138 = sym.pm8xxx_rtc_read_rtc_data;
    iVar15 = sp_el0;
    iStack_148 = *(iVar15 + 0x5e0);
    puVar12 = &uStack_150 + 4;
    iVar15 = *(iVar16 + 0x18);
    uStack_150 = 0;
    ppuStack_140 = &ppuStack_100;
    uStack_130 = auVar21._8_8_ & 0xffffffff;
    iStack_128 = iVar9;
    uStack_120 = uVar8;
    iStack_118 = iVar1;
    uVar6 = regmap_bulk_read(*(iVar16 + 8),*(iVar15 + 8),puVar12,4);
    if ((uVar6 == 0) &&
       (uVar6 = regmap_read(*(iVar16 + 8),*(iVar15 + 8),&uStack_150), puVar12 = puVar13, -1 < uVar6)) {
        if (uStack_150 < uStack_150._4_1_) {
            puVar12 = &uStack_150 + 4;
            uVar6 = regmap_bulk_read(*(iVar16 + 8),*(iVar15 + 8),puVar12,4);
            if (uVar6 != 0) goto code_r0x08001eb0;
        }
        uVar14 = 0;
        *auVar22._8_8_ =
             CONCAT13(uStack_150._7_1_,CONCAT12(uStack_150._6_1_,CONCAT11(uStack_150._5_1_,uStack_150._4_1_)));
    }
    else {
code_r0x08001eb0:
        uVar14 = uVar6;
        _dev_err(*(iVar16 + 0x20),"RTC read rtc data register failed\n");
    }
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_148) {
        return uVar14;
    }
    iVar16 = __stack_chk_fail();
    *extraout_x18_02 = sym.rtc_us_val_show;
    pcStack_1a8 = sym.rtc_us_val_show;
    iVar15 = sp_el0;
    iStack_1b8 = *(iVar15 + 0x5e0);
    uStack_1bc = 0;
    auStack_1c0[0] = 0;
    uStack_1c4 = 0;
    iVar15 = *(*(iVar16 + 0x60) + 0x98);
    iVar17 = *(iVar15 + 0x18);
    ppuStack_1b0 = &ppuStack_140;
    iVar7 = regmap_bulk_read(*(iVar15 + 8),*(iVar17 + 8),&uStack_1bc,4);
    if ((iVar7 == 0) && (iVar7 = regmap_read(*(iVar15 + 8),*(iVar17 + 8),&uStack_1c4), -1 < iVar7)) {
        uVar2 = uStack_1bc;
        if (uStack_1c4 < (uStack_1bc & 0xff)) {
            iVar7 = regmap_bulk_read(*(iVar15 + 8),*(iVar17 + 8),&uStack_1bc,4);
            if (iVar7 != 0) goto code_r0x08002040;
            uVar2 = uStack_1bc;
        }
        uVar3 = uStack_1bc._1_1_;
        uVar4 = uStack_1bc._2_1_;
        uVar5 = uStack_1bc._3_1_;
        iVar7 = regmap_bulk_read(*(iVar15 + 8),*(iVar17 + 0x1c),auStack_1c0,2);
        if (iVar7 == 0) {
            uVar14 = (auStack_1c0[0] * 0xf3e58) / 0x3ff;
            iVar7 = scnprintf(puVar12,0x1000,"%llu\n",
                              CONCAT13(uVar5,CONCAT12(uVar4,CONCAT11(uVar3,uVar2))) * 1000000 +
                              (uVar14 + (auStack_1c0[0] * 0xf3e58 - uVar14 >> 1) >> 9));
            goto code_r0x08001fe0;
        }
    }
code_r0x08002040:
    _dev_err(iVar16,"RTC read data register failed\n");
code_r0x08001fe0:
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_1b8) {
        return iVar7;
    }
    iVar15 = __stack_chk_fail();
    *extraout_x18_03 = sym.pm8xxx_rtc_suspend;
    if (((*(iVar15 + 0x10c) & 1) != 0) && (*(iVar15 + 0x148) != 0)) {
        irq_set_irq_wake(*(*(iVar15 + 0x98) + 0x14),1);
    }
    return 0;
}


// ===== sym.pm8xxx_rtc_probe @ 0x08001268 (size 592) =====

uint64_t sym.pm8xxx_rtc_probe(int64_t arg1)

{
    int iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint64_t *arg1_00;
    ulong uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar9;
    uint *puVar10;
    ulong unaff_x30;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_48 = *(iVar3 + 0x5e0);
    iVar3 = of_match_node(obj.pm8xxx_id_table,*(arg1 + 0x300));
    if (iVar3 != 0) {
        uVar8 = arg1 + 0x10;
        arg1_00 = devm_kmalloc(uVar8,0x30,0xdc0);
        if (arg1_00 == NULL) {
            uVar9 = 0xfffffff4;
            goto code_r0x08001448;
        }
        uVar4 = *(arg1 + 0x70);
        *(arg1_00 + 5) = 0;
        uVar5 = dev_get_regmap(uVar4,0);
        arg1_00[1] = uVar5;
        if (uVar5 == 0) {
            _dev_err(uVar8,"Parent regmap unavailable.\n");
        }
        else {
            iVar1 = platform_get_irq(arg1,0);
            *(arg1_00 + 0x14) = iVar1;
            if (-1 < iVar1) {
                iVar6 = of_find_property(*(arg1 + 0x300),"allow-set-time",0);
                uStack_4c = 0;
                *(arg1_00 + 2) = iVar6 != 0;
                puVar10 = *(iVar3 + 0xc0);
                arg1_00[3] = puVar10;
                arg1_00[4] = uVar8;
                uVar7 = regmap_read(uVar5,*puVar10,&uStack_4c);
                uVar9 = uVar7 & 0xffffffff;
                if (uVar7 == 0) {
                    if ((uStack_4c >> 7 & 1) == 0) {
                        uStack_4c = uStack_4c | 0x80;
                        uVar5 = regmap_write(uVar5,*puVar10);
                        uVar9 = uVar5 & 0xffffffff;
                        if (uVar5 != 0) goto code_r0x08001448;
                    }
                    *(arg1 + 0xa8) = arg1_00;
                    device_init_wakeup(uVar8,1);
                    uVar9 = devm_rtc_allocate_device(uVar8);
                    *arg1_00 = uVar9;
                    if (uVar9 < 0xfffffffffffff001) {
                        *(uVar9 + 0x3a0) = obj.pm8xxx_rtc_ops;
                        *(*arg1_00 + 0x5d0) = 0xffffffff;
                        uVar5 = rtc_add_group(*arg1_00,obj.pm8xxx_rtc_group);
                        uVar9 = uVar5 & 0xffffffff;
                        if (uVar5 == 0) {
                            uVar2 = devm_request_any_context_irq
                                              (uVar8,*(arg1_00 + 0x14),
                                               sym.pm8xxx_alarm_trigger.62d8a4ffdef8f24a576b76bde8665f7a.cfi_jt,1,
                                               "pm8xxx_rtc_alarm",arg1_00);
                            if (uVar2 < 0) {
                                uVar9 = uVar2;
                                _dev_err(uVar8,"Request IRQ failed (%d)\n",uVar9);
                            }
                            else {
                                uVar2 = __devm_rtc_register_device(obj.__this_module,*arg1_00);
                                if (uVar2 < 0) {
                                    uVar9 = uVar2;
                                    _dev_err(uVar8,"Register RTC device failed\n");
                                }
                                else {
                                    iVar3 = of_find_property(*(arg1 + 0x300),"qcom,disable-alarm-wakeup",0);
                                    if (iVar3 != 0) {
                                        device_set_wakeup_capable(uVar8,0);
                                    }
                                    uVar9 = sym.pm8xxx_rtc_init_alarm(arg1_00);
                                    uVar9 = uVar9 & 0xffffffff;
                                }
                            }
                        }
                    }
                }
                goto code_r0x08001448;
            }
        }
    }
    uVar9 = 0xfffffffa;
code_r0x08001448:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_48) {
        return uVar9 & 0xffffffff;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.pm8xxx_rtc_shutdown;
    uVar8 = devm_free_irq(*(*(iVar3 + 0xa8) + 0x20),*(*(iVar3 + 0xa8) + 0x14));
    return uVar8;
}


// ===== sym.pm8xxx_rtc_shutdown @ 0x080014b8 (size 48) =====

void sym.pm8xxx_rtc_shutdown(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    devm_free_irq(*(*(arg1 + 0xa8) + 0x20),*(*(arg1 + 0xa8) + 0x14));
    return;
}


// ===== sym.pm8xxx_alarm_trigger @ 0x080014e8 (size 312) =====

uint64_t sym.pm8xxx_alarm_trigger(int64_t arg1,int64_t arg2)

{
    uchar uVar1;
    uchar uVar2;
    uchar uVar3;
    uchar uVar4;
    int iVar5;
    uint32_t uVar8;
    uint32_t uVar6;
    uint32_t uVar7;
    int64_t iVar9;
    ulong uVar10;
    int64_t iVar11;
    char *pcVar12;
    uint8_t *puVar13;
    char *pcVar14;
    uchar *puVar15;
    ulong *puVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong *extraout_x18_07;
    uint64_t uVar17;
    uint64_t uVar18;
    int64_t iVar19;
    uint64_t uVar20;
    int64_t iVar21;
    int64_t iVar22;
    uint *unaff_x24;
    uint *puVar23;
    int64_t iVar24;
    uint64_t unaff_x25;
    int64_t iVar25;
    int64_t iVar26;
    uint64_t unaff_x26;
    uint64_t unaff_x27;
    ulong unaff_x30;
    uchar auVar27 [16];
    uchar auVar28 [16];
    uint32_t uStack_334;
    uint16_t auStack_330 [2];
    uint uStack_32c;
    int64_t iStack_328;
    ulong ***pppuStack_320;
    code *pcStack_318;
    uint64_t uStack_310;
    uint64_t uStack_300;
    int64_t iStack_2f8;
    int64_t iStack_2f0;
    uint64_t uStack_2e8;
    int64_t iStack_2e0;
    uint64_t uStack_2d8;
    uchar auStack_2d0 [16];
    ulong uStack_2c0;
    int64_t iStack_2b8;
    ulong ***pppuStack_2b0;
    code *pcStack_2a8;
    uint64_t uStack_2a0;
    int64_t iStack_298;
    ulong uStack_290;
    int64_t iStack_288;
    ulong uStack_280;
    int64_t iStack_278;
    ulong ***pppuStack_270;
    code *pcStack_268;
    int64_t iStack_260;
    int64_t iStack_250;
    uint64_t uStack_248;
    char *pcStack_240;
    ulong uStack_238;
    int64_t iStack_230;
    int64_t iStack_228;
    uint32_t uStack_220;
    uint uStack_21c;
    int64_t iStack_218;
    ulong ***pppuStack_210;
    code *pcStack_208;
    uint64_t uStack_200;
    uint *puStack_1f0;
    int64_t iStack_1e8;
    int64_t iStack_1e0;
    uint64_t uStack_1d8;
    uint8_t *puStack_1d0;
    int64_t iStack_1c8;
    ulong uStack_1c0;
    int64_t iStack_1b8;
    ulong ***pppuStack_1b0;
    code *pcStack_1a8;
    int64_t iStack_1a0;
    uint64_t uStack_190;
    uchar auStack_188 [16];
    uint64_t uStack_178;
    uint32_t uStack_164;
    uint32_t uStack_160;
    uint uStack_15c;
    int64_t iStack_158;
    uchar ***pppuStack_150;
    code *pcStack_148;
    uint64_t uStack_140;
    uint64_t uStack_138;
    uint *puStack_130;
    int64_t iStack_128;
    ulong uStack_120;
    uchar auStack_118 [16];
    uint64_t uStack_108;
    ulong uStack_100;
    int64_t iStack_f8;
    uchar **ppuStack_f0;
    code *pcStack_e8;
    int64_t iStack_e0;
    uint64_t uStack_d0;
    int64_t iStack_c8;
    uint uStack_bc;
    uint *puStack_b8;
    uint uStack_ac;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar21 = sp_el0;
    iStack_38 = *(iVar21 + 0x5e0);
    iVar19 = *(arg2 + 0x18);
    uStack_3c = 0;
    rtc_update_irq(*arg2,1,0xa0);
    iVar21 = arg2 + 0x28;
    _raw_spin_lock(iVar21);
    iVar5 = regmap_read(*(arg2 + 8),*(iVar19 + 0xc),&uStack_3c);
    if (iVar5 == 0) {
        uStack_3c = uStack_3c & (*(iVar19 + 0x18) ^ 0xffffffff);
        iVar5 = regmap_write(*(arg2 + 8),*(iVar19 + 0xc));
        _raw_spin_unlock(iVar21);
        if (iVar5 == 0) {
            iVar5 = regmap_read(*(arg2 + 8),*(iVar19 + 0x10),&uStack_3c);
            if (iVar5 == 0) {
                uStack_3c = uStack_3c | 1;
                iVar5 = regmap_write(*(arg2 + 8),*(iVar19 + 0x10));
                if (iVar5 == 0) goto code_r0x080015b4;
                uVar10 = *(arg2 + 0x20);
                pcVar12 = "Write to RTC Alarm control2 register failed\n";
            }
            else {
                uVar10 = *(arg2 + 0x20);
                pcVar12 = "RTC Alarm control2 register read failed\n";
            }
        }
        else {
            uVar10 = *(arg2 + 0x20);
            pcVar12 = "Write to alarm control register failed\n";
        }
        _dev_err(uVar10,pcVar12);
    }
    else {
        _raw_spin_unlock(iVar21);
    }
code_r0x080015b4:
    iVar21 = sp_el0;
    if (*(iVar21 + 0x5e0) == iStack_38) {
        return 1;
    }
    iVar9 = __stack_chk_fail();
    *extraout_x18 = sym.pm8xxx_rtc_init_alarm;
    pcStack_98 = sym.pm8xxx_rtc_init_alarm;
    iVar19 = sp_el0;
    iVar21 = iVar9 + 0x28;
    iStack_a8 = *(iVar19 + 0x5e0);
    iVar19 = *(iVar9 + 0x18);
    puStack_b8 = NULL;
    uStack_bc = 0;
    puStack_a0 = &stack0xffffffffffffffd0;
    uVar10 = _raw_spin_lock_irqsave(iVar21);
    uVar6 = sym.pm8xxx_rtc_read_rtc_data(iVar9,&puStack_b8);
    if (uVar6 == 0) {
        uStack_ac = 0;
        uVar7 = regmap_bulk_read(*(iVar9 + 8),*(*(iVar9 + 0x18) + 0x14),&uStack_ac,4);
        uVar6 = uStack_ac;
        if (uVar7 == 0) {
            unaff_x24 = uStack_ac;
            unaff_x27 = uStack_ac._1_1_;
            unaff_x25 = uStack_ac._2_1_;
            unaff_x26 = uStack_ac._3_1_;
            uVar7 = regmap_read(*(iVar9 + 8),*(iVar19 + 0xc),&uStack_bc);
            uVar17 = uVar7;
            if (uVar7 == 0) {
                iVar11 = _raw_spin_unlock_irqrestore(iVar21,uVar10);
                if ((uStack_bc < '\0') && (unaff_x24 = uVar6, unaff_x24 <= puStack_b8)) {
                    sym.pm8xxx_alarm_trigger(iVar11,iVar9);
                    uVar17 = 0;
                }
            }
            else {
                _raw_spin_unlock_irqrestore(iVar21,uVar10);
                _dev_err(*(iVar9 + 0x20),"Read from RTC alarm control register failed\n");
            }
        }
        else {
            uVar17 = uVar7;
            _dev_err(*(iVar9 + 0x20),"RTC read alarm data failed\n");
            _raw_spin_unlock_irqrestore(iVar21,uVar10);
            _dev_err(*(iVar9 + 0x20),"rtc read alarm data failed\n");
        }
    }
    else {
        uVar17 = uVar6;
        _raw_spin_unlock_irqrestore(iVar21,uVar10);
        _dev_err(*(iVar9 + 0x20),"rtc read rtc data failed\n");
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_a8) {
        return uVar17;
    }
    auVar27 = __stack_chk_fail();
    *extraout_x18_00 = sym.pm8xxx_rtc_read_time;
    pcStack_e8 = sym.pm8xxx_rtc_read_time;
    iVar11 = sp_el0;
    iStack_f8 = *(iVar11 + 0x5e0);
    uStack_100 = 0;
    ppuStack_f0 = &puStack_a0;
    iStack_e0 = iVar21;
    uStack_d0 = uVar17;
    iStack_c8 = iVar9;
    uVar6 = sym.pm8xxx_rtc_read_rtc_data(*(auVar27._0_8_ + 0x98),&uStack_100);
    uVar17 = uVar6;
    if (uVar6 == 0) {
        rtc_time64_to_tm(uStack_100,auVar27._8_8_);
    }
    else {
        _dev_err(auVar27._0_8_,"RTC read time failed\n");
    }
    iVar21 = sp_el0;
    if (*(iVar21 + 0x5e0) == iStack_f8) {
        return uVar17;
    }
    auVar28 = __stack_chk_fail();
    uVar18 = auVar28._0_8_;
    *extraout_x18_01 = sym.pm8xxx_rtc_set_time;
    pcStack_148 = sym.pm8xxx_rtc_set_time;
    iVar21 = sp_el0;
    iStack_158 = *(iVar21 + 0x5e0);
    iVar21 = *(uVar18 + 0x98);
    uStack_164 = 0;
    uStack_160 = 0;
    pppuStack_150 = &ppuStack_f0;
    uStack_140 = unaff_x26;
    uStack_138 = unaff_x25;
    puStack_130 = unaff_x24;
    iStack_128 = iVar19;
    uStack_120 = uVar10;
    uStack_108 = uVar17;
    auStack_118 = auVar27;
    if (*(iVar21 + 0x10) == '\0') {
        uVar20 = 0xfffffff3;
    }
    else {
        puVar23 = *(iVar21 + 0x18);
        uStack_15c = rtc_tm_to_time64(auVar28._8_8_);
        iVar19 = iVar21 + 0x28;
        uVar10 = _raw_spin_lock_irqsave(iVar19);
        auVar27._8_8_ = iVar19;
        auVar27._0_8_ = uVar10;
        uVar6 = regmap_read(*(iVar21 + 8),puVar23[3],&uStack_160);
        uVar20 = uVar6;
        if (uVar6 == 0) {
            uVar6 = puVar23[6] & uStack_160;
            unaff_x25 = uVar6;
            if (uVar6 == 0) {
code_r0x08001904:
                uVar8 = regmap_read(*(iVar21 + 8),*puVar23,&uStack_164);
                uVar7 = uStack_164;
                uVar20 = uVar8;
                if (uVar8 != 0) goto code_r0x08001a14;
                unaff_x26 = uStack_164;
                if ((uStack_164 >> 7 & 1) == 0) {
code_r0x0800193c:
                    uVar8 = regmap_write(*(iVar21 + 8),puVar23[1],0);
                    if (uVar8 == 0) {
                        uVar8 = regmap_bulk_write(*(iVar21 + 8),puVar23[1] + 1,&uStack_15c | 1,3);
                        if (uVar8 == 0) {
                            uVar8 = regmap_write(*(iVar21 + 8),puVar23[1],uStack_15c);
                            if (uVar8 == 0) {
                                if ((uVar7 >> 7 & 1) != 0) {
                                    uStack_164 = uStack_164 | 0x80;
                                    uVar8 = regmap_write(*(iVar21 + 8),*puVar23);
                                    if (uVar8 != 0) goto code_r0x08001a00;
                                }
                                if (uVar6 == 0) {
                                    uVar20 = 0;
                                }
                                else {
                                    uStack_160 = uStack_160 | puVar23[6];
                                    uVar6 = regmap_write(*(iVar21 + 8),puVar23[3]);
                                    uVar20 = uVar6;
                                    if (uVar6 != 0) goto code_r0x080019f4;
                                }
                                goto code_r0x08001a14;
                            }
                        }
                    }
                    uVar20 = uVar8;
                    pcVar12 = "Write to RTC write data register failed\n";
                }
                else {
                    uStack_164 = uStack_164 & 0xffffff7f;
                    uVar8 = regmap_write(*(iVar21 + 8),*puVar23);
                    if (uVar8 == 0) goto code_r0x0800193c;
code_r0x08001a00:
                    uVar20 = uVar8;
                    pcVar12 = "Write to RTC control register failed\n";
                }
            }
            else {
                uStack_160 = uStack_160 & (puVar23[6] ^ 0xffffffff);
                uVar7 = regmap_write(*(iVar21 + 8),puVar23[3]);
                if (uVar7 == 0) goto code_r0x08001904;
                uVar20 = uVar7;
code_r0x080019f4:
                pcVar12 = "Write to RTC Alarm control register failed\n";
            }
            _dev_err(uVar18,pcVar12);
        }
code_r0x08001a14:
        _raw_spin_unlock_irqrestore(iVar19,uVar10);
        uVar17 = uVar18;
        unaff_x24 = puVar23;
    }
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_158) {
        return uVar20;
    }
    auVar28 = __stack_chk_fail();
    puVar13 = auVar28._8_8_;
    iVar9 = auVar28._0_8_;
    *extraout_x18_02 = sym.pm8xxx_rtc_read_alarm;
    pcStack_1a8 = sym.pm8xxx_rtc_read_alarm;
    iVar19 = sp_el0;
    iStack_1b8 = *(iVar19 + 0x5e0);
    iVar19 = *(iVar9 + 0x98);
    uStack_1c0 = 0;
    iVar11 = *(iVar19 + 0x18);
    pppuStack_1b0 = &pppuStack_150;
    iStack_1a0 = iVar21;
    uStack_190 = uVar20;
    uStack_178 = uVar17;
    auStack_188 = auVar27;
    uVar6 = regmap_bulk_read(*(iVar19 + 8),*(iVar11 + 0x14),&uStack_1c0 + 4,4);
    if (uVar6 == 0) {
        rtc_time64_to_tm(uStack_1c0._4_4_,puVar13 + 4);
        uVar6 = regmap_read(*(iVar19 + 8),*(iVar11 + 0xc),&uStack_1c0);
        uVar17 = uVar6;
        if (uVar6 != 0) {
            pcVar12 = "Read from RTC alarm control register failed\n";
            goto code_r0x08001b48;
        }
        *puVar13 = uStack_1c0 >> 7;
    }
    else {
        uVar17 = uVar6;
        _dev_err(*(iVar19 + 0x20),"RTC read alarm data failed\n");
        pcVar12 = "RTC alarm data read failed\n";
code_r0x08001b48:
        _dev_err(iVar9,pcVar12);
    }
    iVar21 = sp_el0;
    if (*(iVar21 + 0x5e0) == iStack_1b8) {
        return uVar17;
    }
    auVar27 = __stack_chk_fail();
    pcVar12 = auVar27._8_8_;
    iVar22 = auVar27._0_8_;
    *extraout_x18_03 = sym.pm8xxx_rtc_set_alarm;
    pcStack_208 = sym.pm8xxx_rtc_set_alarm;
    iVar21 = sp_el0;
    iStack_218 = *(iVar21 + 0x5e0);
    iVar24 = *(iVar22 + 0x98);
    uStack_220 = 0;
    iVar25 = *(iVar24 + 0x18);
    pppuStack_210 = &pppuStack_1b0;
    uStack_200 = unaff_x25;
    puStack_1f0 = unaff_x24;
    iStack_1e8 = iVar11;
    iStack_1e0 = iVar19;
    uStack_1d8 = uVar17;
    puStack_1d0 = puVar13;
    iStack_1c8 = iVar9;
    uStack_21c = rtc_tm_to_time64(pcVar12 + 4);
    iVar21 = iVar24 + 0x28;
    uVar10 = _raw_spin_lock_irqsave(iVar21);
    uVar6 = regmap_bulk_write(*(iVar24 + 8),*(iVar25 + 0x14),&uStack_21c,4);
    if (uVar6 == 0) {
        uVar6 = regmap_read(*(iVar24 + 8),*(iVar25 + 0xc),&uStack_220);
        uVar17 = uVar6;
        if (uVar6 == 0) {
            if (*pcVar12 == '\0') {
                uStack_220 = uStack_220 & (*(iVar25 + 0x18) ^ 0xffffffff);
            }
            else {
                uStack_220 = uStack_220 | *(iVar25 + 0x18);
            }
            uVar6 = regmap_write(*(iVar24 + 8),*(iVar25 + 0xc));
            uVar17 = uVar6;
            if (uVar6 != 0) {
                pcVar14 = "Write to RTC alarm control register failed\n";
                goto code_r0x08001c80;
            }
        }
    }
    else {
        uVar17 = uVar6;
        pcVar14 = "Write to RTC ALARM register failed\n";
code_r0x08001c80:
        _dev_err(iVar22,pcVar14);
    }
    _raw_spin_unlock_irqrestore(iVar21,uVar10);
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_218) {
        return uVar17;
    }
    auVar27 = __stack_chk_fail();
    iVar9 = auVar27._0_8_;
    *extraout_x18_04 = sym.pm8xxx_rtc_alarm_irq_enable;
    pcStack_268 = sym.pm8xxx_rtc_alarm_irq_enable;
    iVar19 = sp_el0;
    iStack_278 = *(iVar19 + 0x5e0);
    iVar11 = *(iVar9 + 0x98);
    uStack_280 = 0;
    iVar19 = iVar11 + 0x28;
    iVar26 = *(iVar11 + 0x18);
    pppuStack_270 = &pppuStack_210;
    iStack_260 = iVar25;
    iStack_250 = iVar24;
    uStack_248 = uVar17;
    pcStack_240 = pcVar12;
    uStack_238 = uVar10;
    iStack_230 = iVar21;
    iStack_228 = iVar22;
    uVar10 = _raw_spin_lock_irqsave(iVar19);
    uVar6 = regmap_read(*(iVar11 + 8),*(iVar26 + 0xc),&uStack_280 + 4);
    uVar17 = uVar6;
    if (uVar6 == 0) {
        if (auVar27._8_4_ == 0) {
            uVar6 = uStack_280._4_4_ & (*(iVar26 + 0x18) ^ 0xffffffff);
        }
        else {
            uVar6 = uStack_280._4_4_ | *(iVar26 + 0x18);
        }
        uStack_280 = CONCAT44(uVar6,uStack_280);
        uVar6 = regmap_write(*(iVar11 + 8),*(iVar26 + 0xc));
        if (uVar6 == 0) {
            if (auVar27._8_4_ == 0) {
                uVar6 = regmap_bulk_write(*(iVar11 + 8),*(iVar26 + 0x14),&uStack_280,4);
                uVar17 = uVar6;
                if (uVar6 != 0) {
                    pcVar12 = "Clear RTC ALARM register failed\n";
                    goto code_r0x08001db4;
                }
            }
            else {
                uVar17 = 0;
            }
        }
        else {
            uVar17 = uVar6;
            pcVar12 = "Write to RTC control register failed\n";
code_r0x08001db4:
            _dev_err(iVar9,pcVar12);
        }
    }
    _raw_spin_unlock_irqrestore(iVar19,uVar10);
    iVar21 = sp_el0;
    if (*(iVar21 + 0x5e0) == iStack_278) {
        return uVar17;
    }
    auVar28 = __stack_chk_fail();
    iVar22 = auVar28._0_8_;
    puVar16 = &uStack_2c0;
    *extraout_x18_05 = sym.pm8xxx_rtc_read_rtc_data;
    pcStack_2a8 = sym.pm8xxx_rtc_read_rtc_data;
    iVar21 = sp_el0;
    iStack_2b8 = *(iVar21 + 0x5e0);
    puVar15 = &uStack_2c0 + 4;
    iVar21 = *(iVar22 + 0x18);
    uStack_2c0 = 0;
    pppuStack_2b0 = &pppuStack_270;
    uStack_2a0 = auVar27._8_8_ & 0xffffffff;
    iStack_298 = iVar9;
    uStack_290 = uVar10;
    iStack_288 = iVar19;
    uVar6 = regmap_bulk_read(*(iVar22 + 8),*(iVar21 + 8),puVar15,4);
    if (uVar6 == 0) {
        uVar6 = regmap_read(*(iVar22 + 8),*(iVar21 + 8),&uStack_2c0);
        puVar15 = puVar16;
        if (uVar6 < 0) goto code_r0x08001eb0;
        if (uStack_2c0 < uStack_2c0._4_1_) {
            puVar15 = &uStack_2c0 + 4;
            uVar6 = regmap_bulk_read(*(iVar22 + 8),*(iVar21 + 8),puVar15,4);
            if (uVar6 != 0) goto code_r0x08001eb0;
        }
        uVar18 = 0;
        *auVar28._8_8_ =
             CONCAT13(uStack_2c0._7_1_,CONCAT12(uStack_2c0._6_1_,CONCAT11(uStack_2c0._5_1_,uStack_2c0._4_1_)));
    }
    else {
code_r0x08001eb0:
        uVar18 = uVar6;
        _dev_err(*(iVar22 + 0x20),"RTC read rtc data register failed\n");
    }
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_2b8) {
        return uVar18;
    }
    iVar9 = __stack_chk_fail();
    *extraout_x18_06 = sym.rtc_us_val_show;
    pcStack_318 = sym.rtc_us_val_show;
    iVar19 = sp_el0;
    iStack_328 = *(iVar19 + 0x5e0);
    uStack_32c = 0;
    auStack_330[0] = 0;
    uStack_334 = 0;
    iVar19 = *(*(iVar9 + 0x60) + 0x98);
    iVar22 = *(iVar19 + 0x18);
    pppuStack_320 = &pppuStack_2b0;
    uStack_310 = unaff_x27;
    uStack_300 = unaff_x26;
    iStack_2f8 = iVar26;
    iStack_2f0 = iVar11;
    uStack_2e8 = uVar17;
    iStack_2e0 = iVar21;
    uStack_2d8 = uVar18;
    auStack_2d0 = auVar28;
    iVar5 = regmap_bulk_read(*(iVar19 + 8),*(iVar22 + 8),&uStack_32c,4);
    if (iVar5 == 0) {
        iVar5 = regmap_read(*(iVar19 + 8),*(iVar22 + 8),&uStack_334);
        if (-1 < iVar5) {
            uVar1 = uStack_32c;
            if (uStack_334 < (uStack_32c & 0xff)) {
                iVar5 = regmap_bulk_read(*(iVar19 + 8),*(iVar22 + 8),&uStack_32c,4);
                if (iVar5 != 0) goto code_r0x08002040;
                uVar1 = uStack_32c;
            }
            uVar2 = uStack_32c._1_1_;
            uVar3 = uStack_32c._2_1_;
            uVar4 = uStack_32c._3_1_;
            iVar5 = regmap_bulk_read(*(iVar19 + 8),*(iVar22 + 0x1c),auStack_330,2);
            if (iVar5 == 0) {
                uVar17 = (auStack_330[0] * 0xf3e58) / 0x3ff;
                iVar5 = scnprintf(puVar15,0x1000,"%llu\n",
                                  CONCAT13(uVar4,CONCAT12(uVar3,CONCAT11(uVar2,uVar1))) * 1000000 +
                                  (uVar17 + (auStack_330[0] * 0xf3e58 - uVar17 >> 1) >> 9));
                goto code_r0x08001fe0;
            }
        }
    }
code_r0x08002040:
    _dev_err(iVar9,"RTC read data register failed\n");
code_r0x08001fe0:
    iVar21 = sp_el0;
    if (*(iVar21 + 0x5e0) != iStack_328) {
        iVar21 = __stack_chk_fail();
        *extraout_x18_07 = sym.pm8xxx_rtc_suspend;
        if (((*(iVar21 + 0x10c) & 1) != 0) && (*(iVar21 + 0x148) != 0)) {
            irq_set_irq_wake(*(*(iVar21 + 0x98) + 0x14),1);
        }
        return 0;
    }
    return iVar5;
}


// ===== sym.pm8xxx_rtc_init_alarm @ 0x08001620 (size 416) =====

uint64_t sym.pm8xxx_rtc_init_alarm(int64_t arg1)

{
    uchar uVar1;
    uchar uVar2;
    uchar uVar3;
    uchar uVar4;
    uint32_t uVar5;
    uint32_t uVar7;
    int iVar8;
    uint32_t uVar6;
    ulong uVar9;
    int64_t iVar10;
    char *pcVar11;
    uint8_t *puVar12;
    char *pcVar13;
    uchar *puVar14;
    ulong *puVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    uint64_t uVar16;
    uint64_t uVar17;
    uint64_t uVar18;
    int64_t iVar19;
    int64_t iVar20;
    int64_t iVar21;
    int64_t iVar22;
    uint *unaff_x24;
    uint *puVar23;
    int64_t iVar24;
    uint64_t unaff_x25;
    int64_t iVar25;
    int64_t iVar26;
    uint64_t unaff_x26;
    uint64_t unaff_x27;
    ulong unaff_x30;
    uchar auVar27 [16];
    uchar auVar28 [16];
    uint32_t uStack_2f4;
    uint16_t auStack_2f0 [2];
    uint uStack_2ec;
    int64_t iStack_2e8;
    ulong ***pppuStack_2e0;
    code *pcStack_2d8;
    uint64_t uStack_2d0;
    uint64_t uStack_2c0;
    int64_t iStack_2b8;
    int64_t iStack_2b0;
    uint64_t uStack_2a8;
    int64_t iStack_2a0;
    uint64_t uStack_298;
    uchar auStack_290 [16];
    ulong uStack_280;
    int64_t iStack_278;
    ulong ***pppuStack_270;
    code *pcStack_268;
    uint64_t uStack_260;
    int64_t iStack_258;
    ulong uStack_250;
    int64_t iStack_248;
    ulong uStack_240;
    int64_t iStack_238;
    ulong ***pppuStack_230;
    code *pcStack_228;
    int64_t iStack_220;
    int64_t iStack_210;
    uint64_t uStack_208;
    char *pcStack_200;
    ulong uStack_1f8;
    int64_t iStack_1f0;
    int64_t iStack_1e8;
    uint32_t uStack_1e0;
    uint uStack_1dc;
    int64_t iStack_1d8;
    ulong ***pppuStack_1d0;
    code *pcStack_1c8;
    uint64_t uStack_1c0;
    uint *puStack_1b0;
    int64_t iStack_1a8;
    int64_t iStack_1a0;
    uint64_t uStack_198;
    uint8_t *puStack_190;
    int64_t iStack_188;
    ulong uStack_180;
    int64_t iStack_178;
    uchar ***pppuStack_170;
    code *pcStack_168;
    int64_t iStack_160;
    uint64_t uStack_150;
    uchar auStack_148 [16];
    uint64_t uStack_138;
    uint32_t uStack_124;
    uint32_t uStack_120;
    uint uStack_11c;
    int64_t iStack_118;
    uchar **ppuStack_110;
    code *pcStack_108;
    uint64_t uStack_100;
    uint64_t uStack_f8;
    uint *puStack_f0;
    int64_t iStack_e8;
    ulong uStack_e0;
    uchar auStack_d8 [16];
    uint64_t uStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    int64_t iStack_a0;
    uint64_t uStack_90;
    int64_t iStack_88;
    uint uStack_7c;
    uint *puStack_78;
    uint uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar19 = sp_el0;
    iVar20 = arg1 + 0x28;
    iStack_68 = *(iVar19 + 0x5e0);
    iVar19 = *(arg1 + 0x18);
    puStack_78 = NULL;
    uStack_7c = 0;
    uVar9 = _raw_spin_lock_irqsave(iVar20);
    uVar5 = sym.pm8xxx_rtc_read_rtc_data(arg1,&puStack_78);
    if (uVar5 == 0) {
        uStack_6c = 0;
        uVar6 = regmap_bulk_read(*(arg1 + 8),*(*(arg1 + 0x18) + 0x14),&uStack_6c,4);
        uVar5 = uStack_6c;
        if (uVar6 == 0) {
            unaff_x24 = uStack_6c;
            unaff_x27 = uStack_6c._1_1_;
            unaff_x25 = uStack_6c._2_1_;
            unaff_x26 = uStack_6c._3_1_;
            uVar6 = regmap_read(*(arg1 + 8),*(iVar19 + 0xc),&uStack_7c);
            uVar16 = uVar6;
            if (uVar6 == 0) {
                iVar10 = _raw_spin_unlock_irqrestore(iVar20,uVar9);
                if ((uStack_7c < '\0') && (unaff_x24 = uVar5, unaff_x24 <= puStack_78)) {
                    sym.pm8xxx_alarm_trigger(iVar10,arg1);
                    uVar16 = 0;
                }
            }
            else {
                _raw_spin_unlock_irqrestore(iVar20,uVar9);
                _dev_err(*(arg1 + 0x20),"Read from RTC alarm control register failed\n");
            }
        }
        else {
            uVar16 = uVar6;
            _dev_err(*(arg1 + 0x20),"RTC read alarm data failed\n");
            _raw_spin_unlock_irqrestore(iVar20,uVar9);
            _dev_err(*(arg1 + 0x20),"rtc read alarm data failed\n");
        }
    }
    else {
        uVar16 = uVar5;
        _raw_spin_unlock_irqrestore(iVar20,uVar9);
        _dev_err(*(arg1 + 0x20),"rtc read rtc data failed\n");
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_68) {
        return uVar16;
    }
    auVar27 = __stack_chk_fail();
    *extraout_x18 = sym.pm8xxx_rtc_read_time;
    pcStack_a8 = sym.pm8xxx_rtc_read_time;
    iVar10 = sp_el0;
    iStack_b8 = *(iVar10 + 0x5e0);
    uStack_c0 = 0;
    puStack_b0 = &stack0xffffffffffffffa0;
    iStack_a0 = iVar20;
    uStack_90 = uVar16;
    iStack_88 = arg1;
    uVar5 = sym.pm8xxx_rtc_read_rtc_data(*(auVar27._0_8_ + 0x98),&uStack_c0);
    uVar16 = uVar5;
    if (uVar5 == 0) {
        rtc_time64_to_tm(uStack_c0,auVar27._8_8_);
    }
    else {
        _dev_err(auVar27._0_8_,"RTC read time failed\n");
    }
    iVar20 = sp_el0;
    if (*(iVar20 + 0x5e0) == iStack_b8) {
        return uVar16;
    }
    auVar28 = __stack_chk_fail();
    uVar17 = auVar28._0_8_;
    *extraout_x18_00 = sym.pm8xxx_rtc_set_time;
    pcStack_108 = sym.pm8xxx_rtc_set_time;
    iVar20 = sp_el0;
    iStack_118 = *(iVar20 + 0x5e0);
    iVar20 = *(uVar17 + 0x98);
    uStack_124 = 0;
    uStack_120 = 0;
    ppuStack_110 = &puStack_b0;
    uStack_100 = unaff_x26;
    uStack_f8 = unaff_x25;
    puStack_f0 = unaff_x24;
    iStack_e8 = iVar19;
    uStack_e0 = uVar9;
    uStack_c8 = uVar16;
    auStack_d8 = auVar27;
    if (*(iVar20 + 0x10) == '\0') {
        uVar18 = 0xfffffff3;
    }
    else {
        puVar23 = *(iVar20 + 0x18);
        uStack_11c = rtc_tm_to_time64(auVar28._8_8_);
        iVar19 = iVar20 + 0x28;
        uVar9 = _raw_spin_lock_irqsave(iVar19);
        auVar27._8_8_ = iVar19;
        auVar27._0_8_ = uVar9;
        uVar5 = regmap_read(*(iVar20 + 8),puVar23[3],&uStack_120);
        uVar18 = uVar5;
        if (uVar5 == 0) {
            uVar5 = puVar23[6] & uStack_120;
            unaff_x25 = uVar5;
            if (uVar5 == 0) {
code_r0x08001904:
                uVar7 = regmap_read(*(iVar20 + 8),*puVar23,&uStack_124);
                uVar6 = uStack_124;
                uVar18 = uVar7;
                if (uVar7 != 0) goto code_r0x08001a14;
                unaff_x26 = uStack_124;
                if ((uStack_124 >> 7 & 1) == 0) {
code_r0x0800193c:
                    uVar7 = regmap_write(*(iVar20 + 8),puVar23[1],0);
                    if (uVar7 == 0) {
                        uVar7 = regmap_bulk_write(*(iVar20 + 8),puVar23[1] + 1,&uStack_11c | 1,3);
                        if (uVar7 == 0) {
                            uVar7 = regmap_write(*(iVar20 + 8),puVar23[1],uStack_11c);
                            if (uVar7 == 0) {
                                if ((uVar6 >> 7 & 1) != 0) {
                                    uStack_124 = uStack_124 | 0x80;
                                    uVar7 = regmap_write(*(iVar20 + 8),*puVar23);
                                    if (uVar7 != 0) goto code_r0x08001a00;
                                }
                                if (uVar5 == 0) {
                                    uVar18 = 0;
                                }
                                else {
                                    uStack_120 = uStack_120 | puVar23[6];
                                    uVar5 = regmap_write(*(iVar20 + 8),puVar23[3]);
                                    uVar18 = uVar5;
                                    if (uVar5 != 0) goto code_r0x080019f4;
                                }
                                goto code_r0x08001a14;
                            }
                        }
                    }
                    uVar18 = uVar7;
                    pcVar11 = "Write to RTC write data register failed\n";
                }
                else {
                    uStack_124 = uStack_124 & 0xffffff7f;
                    uVar7 = regmap_write(*(iVar20 + 8),*puVar23);
                    if (uVar7 == 0) goto code_r0x0800193c;
code_r0x08001a00:
                    uVar18 = uVar7;
                    pcVar11 = "Write to RTC control register failed\n";
                }
            }
            else {
                uStack_120 = uStack_120 & (puVar23[6] ^ 0xffffffff);
                uVar6 = regmap_write(*(iVar20 + 8),puVar23[3]);
                if (uVar6 == 0) goto code_r0x08001904;
                uVar18 = uVar6;
code_r0x080019f4:
                pcVar11 = "Write to RTC Alarm control register failed\n";
            }
            _dev_err(uVar17,pcVar11);
        }
code_r0x08001a14:
        _raw_spin_unlock_irqrestore(iVar19,uVar9);
        uVar16 = uVar17;
        unaff_x24 = puVar23;
    }
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_118) {
        return uVar18;
    }
    auVar28 = __stack_chk_fail();
    puVar12 = auVar28._8_8_;
    iVar10 = auVar28._0_8_;
    *extraout_x18_01 = sym.pm8xxx_rtc_read_alarm;
    pcStack_168 = sym.pm8xxx_rtc_read_alarm;
    iVar19 = sp_el0;
    iStack_178 = *(iVar19 + 0x5e0);
    iVar19 = *(iVar10 + 0x98);
    uStack_180 = 0;
    iVar21 = *(iVar19 + 0x18);
    pppuStack_170 = &ppuStack_110;
    iStack_160 = iVar20;
    uStack_150 = uVar18;
    uStack_138 = uVar16;
    auStack_148 = auVar27;
    uVar5 = regmap_bulk_read(*(iVar19 + 8),*(iVar21 + 0x14),&uStack_180 + 4,4);
    if (uVar5 == 0) {
        rtc_time64_to_tm(uStack_180._4_4_,puVar12 + 4);
        uVar5 = regmap_read(*(iVar19 + 8),*(iVar21 + 0xc),&uStack_180);
        uVar16 = uVar5;
        if (uVar5 != 0) {
            pcVar11 = "Read from RTC alarm control register failed\n";
            goto code_r0x08001b48;
        }
        *puVar12 = uStack_180 >> 7;
    }
    else {
        uVar16 = uVar5;
        _dev_err(*(iVar19 + 0x20),"RTC read alarm data failed\n");
        pcVar11 = "RTC alarm data read failed\n";
code_r0x08001b48:
        _dev_err(iVar10,pcVar11);
    }
    iVar20 = sp_el0;
    if (*(iVar20 + 0x5e0) == iStack_178) {
        return uVar16;
    }
    auVar27 = __stack_chk_fail();
    pcVar11 = auVar27._8_8_;
    iVar22 = auVar27._0_8_;
    *extraout_x18_02 = sym.pm8xxx_rtc_set_alarm;
    pcStack_1c8 = sym.pm8xxx_rtc_set_alarm;
    iVar20 = sp_el0;
    iStack_1d8 = *(iVar20 + 0x5e0);
    iVar24 = *(iVar22 + 0x98);
    uStack_1e0 = 0;
    iVar25 = *(iVar24 + 0x18);
    pppuStack_1d0 = &pppuStack_170;
    uStack_1c0 = unaff_x25;
    puStack_1b0 = unaff_x24;
    iStack_1a8 = iVar21;
    iStack_1a0 = iVar19;
    uStack_198 = uVar16;
    puStack_190 = puVar12;
    iStack_188 = iVar10;
    uStack_1dc = rtc_tm_to_time64(pcVar11 + 4);
    iVar20 = iVar24 + 0x28;
    uVar9 = _raw_spin_lock_irqsave(iVar20);
    uVar5 = regmap_bulk_write(*(iVar24 + 8),*(iVar25 + 0x14),&uStack_1dc,4);
    if (uVar5 == 0) {
        uVar5 = regmap_read(*(iVar24 + 8),*(iVar25 + 0xc),&uStack_1e0);
        uVar16 = uVar5;
        if (uVar5 == 0) {
            if (*pcVar11 == '\0') {
                uStack_1e0 = uStack_1e0 & (*(iVar25 + 0x18) ^ 0xffffffff);
            }
            else {
                uStack_1e0 = uStack_1e0 | *(iVar25 + 0x18);
            }
            uVar5 = regmap_write(*(iVar24 + 8),*(iVar25 + 0xc));
            uVar16 = uVar5;
            if (uVar5 != 0) {
                pcVar13 = "Write to RTC alarm control register failed\n";
                goto code_r0x08001c80;
            }
        }
    }
    else {
        uVar16 = uVar5;
        pcVar13 = "Write to RTC ALARM register failed\n";
code_r0x08001c80:
        _dev_err(iVar22,pcVar13);
    }
    _raw_spin_unlock_irqrestore(iVar20,uVar9);
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_1d8) {
        return uVar16;
    }
    auVar27 = __stack_chk_fail();
    iVar10 = auVar27._0_8_;
    *extraout_x18_03 = sym.pm8xxx_rtc_alarm_irq_enable;
    pcStack_228 = sym.pm8xxx_rtc_alarm_irq_enable;
    iVar19 = sp_el0;
    iStack_238 = *(iVar19 + 0x5e0);
    iVar21 = *(iVar10 + 0x98);
    uStack_240 = 0;
    iVar19 = iVar21 + 0x28;
    iVar26 = *(iVar21 + 0x18);
    pppuStack_230 = &pppuStack_1d0;
    iStack_220 = iVar25;
    iStack_210 = iVar24;
    uStack_208 = uVar16;
    pcStack_200 = pcVar11;
    uStack_1f8 = uVar9;
    iStack_1f0 = iVar20;
    iStack_1e8 = iVar22;
    uVar9 = _raw_spin_lock_irqsave(iVar19);
    uVar5 = regmap_read(*(iVar21 + 8),*(iVar26 + 0xc),&uStack_240 + 4);
    uVar16 = uVar5;
    if (uVar5 == 0) {
        if (auVar27._8_4_ == 0) {
            uVar5 = uStack_240._4_4_ & (*(iVar26 + 0x18) ^ 0xffffffff);
        }
        else {
            uVar5 = uStack_240._4_4_ | *(iVar26 + 0x18);
        }
        uStack_240 = CONCAT44(uVar5,uStack_240);
        uVar5 = regmap_write(*(iVar21 + 8),*(iVar26 + 0xc));
        if (uVar5 == 0) {
            if (auVar27._8_4_ == 0) {
                uVar5 = regmap_bulk_write(*(iVar21 + 8),*(iVar26 + 0x14),&uStack_240,4);
                uVar16 = uVar5;
                if (uVar5 != 0) {
                    pcVar11 = "Clear RTC ALARM register failed\n";
                    goto code_r0x08001db4;
                }
            }
            else {
                uVar16 = 0;
            }
        }
        else {
            uVar16 = uVar5;
            pcVar11 = "Write to RTC control register failed\n";
code_r0x08001db4:
            _dev_err(iVar10,pcVar11);
        }
    }
    _raw_spin_unlock_irqrestore(iVar19,uVar9);
    iVar20 = sp_el0;
    if (*(iVar20 + 0x5e0) == iStack_238) {
        return uVar16;
    }
    auVar28 = __stack_chk_fail();
    iVar22 = auVar28._0_8_;
    puVar15 = &uStack_280;
    *extraout_x18_04 = sym.pm8xxx_rtc_read_rtc_data;
    pcStack_268 = sym.pm8xxx_rtc_read_rtc_data;
    iVar20 = sp_el0;
    iStack_278 = *(iVar20 + 0x5e0);
    puVar14 = &uStack_280 + 4;
    iVar20 = *(iVar22 + 0x18);
    uStack_280 = 0;
    pppuStack_270 = &pppuStack_230;
    uStack_260 = auVar27._8_8_ & 0xffffffff;
    iStack_258 = iVar10;
    uStack_250 = uVar9;
    iStack_248 = iVar19;
    uVar5 = regmap_bulk_read(*(iVar22 + 8),*(iVar20 + 8),puVar14,4);
    if (uVar5 == 0) {
        uVar5 = regmap_read(*(iVar22 + 8),*(iVar20 + 8),&uStack_280);
        puVar14 = puVar15;
        if (uVar5 < 0) goto code_r0x08001eb0;
        if (uStack_280 < uStack_280._4_1_) {
            puVar14 = &uStack_280 + 4;
            uVar5 = regmap_bulk_read(*(iVar22 + 8),*(iVar20 + 8),puVar14,4);
            if (uVar5 != 0) goto code_r0x08001eb0;
        }
        uVar17 = 0;
        *auVar28._8_8_ =
             CONCAT13(uStack_280._7_1_,CONCAT12(uStack_280._6_1_,CONCAT11(uStack_280._5_1_,uStack_280._4_1_)));
    }
    else {
code_r0x08001eb0:
        uVar17 = uVar5;
        _dev_err(*(iVar22 + 0x20),"RTC read rtc data register failed\n");
    }
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_278) {
        return uVar17;
    }
    iVar10 = __stack_chk_fail();
    *extraout_x18_05 = sym.rtc_us_val_show;
    pcStack_2d8 = sym.rtc_us_val_show;
    iVar19 = sp_el0;
    iStack_2e8 = *(iVar19 + 0x5e0);
    uStack_2ec = 0;
    auStack_2f0[0] = 0;
    uStack_2f4 = 0;
    iVar19 = *(*(iVar10 + 0x60) + 0x98);
    iVar22 = *(iVar19 + 0x18);
    pppuStack_2e0 = &pppuStack_270;
    uStack_2d0 = unaff_x27;
    uStack_2c0 = unaff_x26;
    iStack_2b8 = iVar26;
    iStack_2b0 = iVar21;
    uStack_2a8 = uVar16;
    iStack_2a0 = iVar20;
    uStack_298 = uVar17;
    auStack_290 = auVar28;
    iVar8 = regmap_bulk_read(*(iVar19 + 8),*(iVar22 + 8),&uStack_2ec,4);
    if (iVar8 == 0) {
        iVar8 = regmap_read(*(iVar19 + 8),*(iVar22 + 8),&uStack_2f4);
        if (-1 < iVar8) {
            uVar1 = uStack_2ec;
            if (uStack_2f4 < (uStack_2ec & 0xff)) {
                iVar8 = regmap_bulk_read(*(iVar19 + 8),*(iVar22 + 8),&uStack_2ec,4);
                if (iVar8 != 0) goto code_r0x08002040;
                uVar1 = uStack_2ec;
            }
            uVar2 = uStack_2ec._1_1_;
            uVar3 = uStack_2ec._2_1_;
            uVar4 = uStack_2ec._3_1_;
            iVar8 = regmap_bulk_read(*(iVar19 + 8),*(iVar22 + 0x1c),auStack_2f0,2);
            if (iVar8 == 0) {
                uVar16 = (auStack_2f0[0] * 0xf3e58) / 0x3ff;
                iVar8 = scnprintf(puVar14,0x1000,"%llu\n",
                                  CONCAT13(uVar4,CONCAT12(uVar3,CONCAT11(uVar2,uVar1))) * 1000000 +
                                  (uVar16 + (auStack_2f0[0] * 0xf3e58 - uVar16 >> 1) >> 9));
                goto code_r0x08001fe0;
            }
        }
    }
code_r0x08002040:
    _dev_err(iVar10,"RTC read data register failed\n");
code_r0x08001fe0:
    iVar20 = sp_el0;
    if (*(iVar20 + 0x5e0) != iStack_2e8) {
        iVar20 = __stack_chk_fail();
        *extraout_x18_06 = sym.pm8xxx_rtc_suspend;
        if (((*(iVar20 + 0x10c) & 1) != 0) && (*(iVar20 + 0x148) != 0)) {
            irq_set_irq_wake(*(*(iVar20 + 0x98) + 0x14),1);
        }
        return 0;
    }
    return iVar8;
}


// ===== sym.pm8xxx_rtc_read_time @ 0x080017c0 (size 160) =====

uint64_t sym.pm8xxx_rtc_read_time(int64_t arg1,int64_t arg2)

{
    uchar uVar1;
    uchar uVar2;
    uchar uVar3;
    uchar uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    int iVar8;
    uint64_t uVar9;
    int64_t iVar10;
    ulong uVar11;
    char *pcVar12;
    uint8_t *puVar13;
    char *pcVar14;
    uchar *puVar15;
    ulong *puVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    uint64_t uVar17;
    uint64_t uVar18;
    int64_t iVar19;
    int64_t iVar20;
    int64_t iVar21;
    int64_t iVar22;
    uint *unaff_x24;
    int64_t iVar23;
    uint64_t unaff_x25;
    int64_t iVar24;
    int64_t iVar25;
    ulong unaff_x30;
    uchar auVar26 [16];
    uchar auVar27 [16];
    uint32_t uStack_274;
    uint16_t auStack_270 [2];
    uint uStack_26c;
    int64_t iStack_268;
    ulong ***pppuStack_260;
    code *pcStack_258;
    ulong uStack_200;
    int64_t iStack_1f8;
    ulong ***pppuStack_1f0;
    code *pcStack_1e8;
    uint64_t uStack_1e0;
    int64_t iStack_1d8;
    ulong uStack_1d0;
    int64_t iStack_1c8;
    ulong uStack_1c0;
    int64_t iStack_1b8;
    ulong ***pppuStack_1b0;
    code *pcStack_1a8;
    int64_t iStack_1a0;
    int64_t iStack_190;
    uint64_t uStack_188;
    char *pcStack_180;
    ulong uStack_178;
    int64_t iStack_170;
    int64_t iStack_168;
    uint32_t uStack_160;
    uint uStack_15c;
    int64_t iStack_158;
    uchar ***pppuStack_150;
    code *pcStack_148;
    uint64_t uStack_140;
    uint *puStack_130;
    int64_t iStack_128;
    int64_t iStack_120;
    uint64_t uStack_118;
    uint8_t *puStack_110;
    int64_t iStack_108;
    ulong uStack_100;
    int64_t iStack_f8;
    uchar **ppuStack_f0;
    code *pcStack_e8;
    int64_t iStack_e0;
    uint64_t uStack_d0;
    int64_t iStack_c8;
    int64_t iStack_c0;
    uint64_t uStack_b8;
    uint32_t uStack_a4;
    uint32_t uStack_a0;
    uint uStack_9c;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar20 = sp_el0;
    iStack_38 = *(iVar20 + 0x5e0);
    uStack_40 = 0;
    uVar5 = sym.pm8xxx_rtc_read_rtc_data(*(arg1 + 0x98),&uStack_40);
    uVar17 = uVar5;
    if (uVar5 == 0) {
        rtc_time64_to_tm(uStack_40,arg2);
    }
    else {
        _dev_err(arg1,"RTC read time failed\n");
    }
    iVar20 = sp_el0;
    if (*(iVar20 + 0x5e0) == iStack_38) {
        return uVar17;
    }
    auVar26 = __stack_chk_fail();
    uVar9 = auVar26._0_8_;
    *extraout_x18 = sym.pm8xxx_rtc_set_time;
    pcStack_88 = sym.pm8xxx_rtc_set_time;
    iVar20 = sp_el0;
    iStack_98 = *(iVar20 + 0x5e0);
    iVar20 = *(uVar9 + 0x98);
    uStack_a4 = 0;
    uStack_a0 = 0;
    puStack_90 = &stack0xffffffffffffffd0;
    if (*(iVar20 + 0x10) == '\0') {
        uVar18 = 0xfffffff3;
    }
    else {
        unaff_x24 = *(iVar20 + 0x18);
        uStack_9c = rtc_tm_to_time64(auVar26._8_8_);
        arg2 = iVar20 + 0x28;
        arg1 = _raw_spin_lock_irqsave(arg2);
        uVar5 = regmap_read(*(iVar20 + 8),unaff_x24[3],&uStack_a0);
        uVar18 = uVar5;
        if (uVar5 == 0) {
            uVar5 = unaff_x24[6] & uStack_a0;
            unaff_x25 = uVar5;
            if (uVar5 == 0) {
code_r0x08001904:
                uVar7 = regmap_read(*(iVar20 + 8),*unaff_x24,&uStack_a4);
                uVar6 = uStack_a4;
                uVar18 = uVar7;
                if (uVar7 != 0) goto code_r0x08001a14;
                if ((uStack_a4 >> 7 & 1) == 0) {
code_r0x0800193c:
                    uVar7 = regmap_write(*(iVar20 + 8),unaff_x24[1],0);
                    if ((uVar7 == 0) &&
                       (uVar7 = regmap_bulk_write(*(iVar20 + 8),unaff_x24[1] + 1,&uStack_9c | 1,3), uVar7 == 0)) {
                        uVar7 = regmap_write(*(iVar20 + 8),unaff_x24[1],uStack_9c);
                        if (uVar7 == 0) {
                            if ((uVar6 >> 7 & 1) != 0) {
                                uStack_a4 = uStack_a4 | 0x80;
                                uVar7 = regmap_write(*(iVar20 + 8),*unaff_x24);
                                if (uVar7 != 0) goto code_r0x08001a00;
                            }
                            if (uVar5 == 0) {
                                uVar18 = 0;
                            }
                            else {
                                uStack_a0 = uStack_a0 | unaff_x24[6];
                                uVar5 = regmap_write(*(iVar20 + 8),unaff_x24[3]);
                                uVar18 = uVar5;
                                if (uVar5 != 0) goto code_r0x080019f4;
                            }
                            goto code_r0x08001a14;
                        }
                    }
                    uVar18 = uVar7;
                    pcVar12 = "Write to RTC write data register failed\n";
                }
                else {
                    uStack_a4 = uStack_a4 & 0xffffff7f;
                    uVar7 = regmap_write(*(iVar20 + 8),*unaff_x24);
                    if (uVar7 == 0) goto code_r0x0800193c;
code_r0x08001a00:
                    uVar18 = uVar7;
                    pcVar12 = "Write to RTC control register failed\n";
                }
            }
            else {
                uStack_a0 = uStack_a0 & (unaff_x24[6] ^ 0xffffffff);
                uVar6 = regmap_write(*(iVar20 + 8),unaff_x24[3]);
                if (uVar6 == 0) goto code_r0x08001904;
                uVar18 = uVar6;
code_r0x080019f4:
                pcVar12 = "Write to RTC Alarm control register failed\n";
            }
            _dev_err(uVar9,pcVar12);
        }
code_r0x08001a14:
        _raw_spin_unlock_irqrestore(arg2,arg1);
        uVar17 = uVar9;
    }
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_98) {
        return uVar18;
    }
    auVar26 = __stack_chk_fail();
    puVar13 = auVar26._8_8_;
    iVar22 = auVar26._0_8_;
    *extraout_x18_00 = sym.pm8xxx_rtc_read_alarm;
    pcStack_e8 = sym.pm8xxx_rtc_read_alarm;
    iVar19 = sp_el0;
    iStack_f8 = *(iVar19 + 0x5e0);
    iVar19 = *(iVar22 + 0x98);
    uStack_100 = 0;
    iVar21 = *(iVar19 + 0x18);
    ppuStack_f0 = &puStack_90;
    iStack_e0 = iVar20;
    uStack_d0 = uVar18;
    iStack_c8 = arg1;
    iStack_c0 = arg2;
    uStack_b8 = uVar17;
    uVar5 = regmap_bulk_read(*(iVar19 + 8),*(iVar21 + 0x14),&uStack_100 + 4,4);
    if (uVar5 == 0) {
        rtc_time64_to_tm(uStack_100._4_4_,puVar13 + 4);
        uVar5 = regmap_read(*(iVar19 + 8),*(iVar21 + 0xc),&uStack_100);
        uVar17 = uVar5;
        if (uVar5 != 0) {
            pcVar12 = "Read from RTC alarm control register failed\n";
            goto code_r0x08001b48;
        }
        *puVar13 = uStack_100 >> 7;
    }
    else {
        uVar17 = uVar5;
        _dev_err(*(iVar19 + 0x20),"RTC read alarm data failed\n");
        pcVar12 = "RTC alarm data read failed\n";
code_r0x08001b48:
        _dev_err(iVar22,pcVar12);
    }
    iVar20 = sp_el0;
    if (*(iVar20 + 0x5e0) == iStack_f8) {
        return uVar17;
    }
    auVar26 = __stack_chk_fail();
    pcVar12 = auVar26._8_8_;
    iVar10 = auVar26._0_8_;
    *extraout_x18_01 = sym.pm8xxx_rtc_set_alarm;
    pcStack_148 = sym.pm8xxx_rtc_set_alarm;
    iVar20 = sp_el0;
    iStack_158 = *(iVar20 + 0x5e0);
    iVar23 = *(iVar10 + 0x98);
    uStack_160 = 0;
    iVar24 = *(iVar23 + 0x18);
    pppuStack_150 = &ppuStack_f0;
    uStack_140 = unaff_x25;
    puStack_130 = unaff_x24;
    iStack_128 = iVar21;
    iStack_120 = iVar19;
    uStack_118 = uVar17;
    puStack_110 = puVar13;
    iStack_108 = iVar22;
    uStack_15c = rtc_tm_to_time64(pcVar12 + 4);
    iVar20 = iVar23 + 0x28;
    uVar11 = _raw_spin_lock_irqsave(iVar20);
    uVar5 = regmap_bulk_write(*(iVar23 + 8),*(iVar24 + 0x14),&uStack_15c,4);
    if (uVar5 == 0) {
        uVar5 = regmap_read(*(iVar23 + 8),*(iVar24 + 0xc),&uStack_160);
        uVar17 = uVar5;
        if (uVar5 == 0) {
            if (*pcVar12 == '\0') {
                uStack_160 = uStack_160 & (*(iVar24 + 0x18) ^ 0xffffffff);
            }
            else {
                uStack_160 = uStack_160 | *(iVar24 + 0x18);
            }
            uVar5 = regmap_write(*(iVar23 + 8),*(iVar24 + 0xc));
            uVar17 = uVar5;
            if (uVar5 != 0) {
                pcVar14 = "Write to RTC alarm control register failed\n";
                goto code_r0x08001c80;
            }
        }
    }
    else {
        uVar17 = uVar5;
        pcVar14 = "Write to RTC ALARM register failed\n";
code_r0x08001c80:
        _dev_err(iVar10,pcVar14);
    }
    _raw_spin_unlock_irqrestore(iVar20,uVar11);
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_158) {
        return uVar17;
    }
    auVar26 = __stack_chk_fail();
    iVar22 = auVar26._0_8_;
    *extraout_x18_02 = sym.pm8xxx_rtc_alarm_irq_enable;
    pcStack_1a8 = sym.pm8xxx_rtc_alarm_irq_enable;
    iVar19 = sp_el0;
    iStack_1b8 = *(iVar19 + 0x5e0);
    iVar21 = *(iVar22 + 0x98);
    uStack_1c0 = 0;
    iVar19 = iVar21 + 0x28;
    iVar25 = *(iVar21 + 0x18);
    pppuStack_1b0 = &pppuStack_150;
    iStack_1a0 = iVar24;
    iStack_190 = iVar23;
    uStack_188 = uVar17;
    pcStack_180 = pcVar12;
    uStack_178 = uVar11;
    iStack_170 = iVar20;
    iStack_168 = iVar10;
    uVar11 = _raw_spin_lock_irqsave(iVar19);
    uVar5 = regmap_read(*(iVar21 + 8),*(iVar25 + 0xc),&uStack_1c0 + 4);
    uVar17 = uVar5;
    if (uVar5 == 0) {
        if (auVar26._8_4_ == 0) {
            uVar5 = uStack_1c0._4_4_ & (*(iVar25 + 0x18) ^ 0xffffffff);
        }
        else {
            uVar5 = uStack_1c0._4_4_ | *(iVar25 + 0x18);
        }
        uStack_1c0 = CONCAT44(uVar5,uStack_1c0);
        uVar5 = regmap_write(*(iVar21 + 8),*(iVar25 + 0xc));
        if (uVar5 == 0) {
            if (auVar26._8_4_ == 0) {
                uVar5 = regmap_bulk_write(*(iVar21 + 8),*(iVar25 + 0x14),&uStack_1c0,4);
                uVar17 = uVar5;
                if (uVar5 != 0) {
                    pcVar12 = "Clear RTC ALARM register failed\n";
                    goto code_r0x08001db4;
                }
            }
            else {
                uVar17 = 0;
            }
        }
        else {
            uVar17 = uVar5;
            pcVar12 = "Write to RTC control register failed\n";
code_r0x08001db4:
            _dev_err(iVar22,pcVar12);
        }
    }
    _raw_spin_unlock_irqrestore(iVar19,uVar11);
    iVar20 = sp_el0;
    if (*(iVar20 + 0x5e0) == iStack_1b8) {
        return uVar17;
    }
    auVar27 = __stack_chk_fail();
    iVar21 = auVar27._0_8_;
    puVar16 = &uStack_200;
    *extraout_x18_03 = sym.pm8xxx_rtc_read_rtc_data;
    pcStack_1e8 = sym.pm8xxx_rtc_read_rtc_data;
    iVar20 = sp_el0;
    iStack_1f8 = *(iVar20 + 0x5e0);
    puVar15 = &uStack_200 + 4;
    iVar20 = *(iVar21 + 0x18);
    uStack_200 = 0;
    pppuStack_1f0 = &pppuStack_1b0;
    uStack_1e0 = auVar26._8_8_ & 0xffffffff;
    iStack_1d8 = iVar22;
    uStack_1d0 = uVar11;
    iStack_1c8 = iVar19;
    uVar5 = regmap_bulk_read(*(iVar21 + 8),*(iVar20 + 8),puVar15,4);
    if ((uVar5 == 0) &&
       (uVar5 = regmap_read(*(iVar21 + 8),*(iVar20 + 8),&uStack_200), puVar15 = puVar16, -1 < uVar5)) {
        if (uStack_200 < uStack_200._4_1_) {
            puVar15 = &uStack_200 + 4;
            uVar5 = regmap_bulk_read(*(iVar21 + 8),*(iVar20 + 8),puVar15,4);
            if (uVar5 != 0) goto code_r0x08001eb0;
        }
        uVar17 = 0;
        *auVar27._8_8_ =
             CONCAT13(uStack_200._7_1_,CONCAT12(uStack_200._6_1_,CONCAT11(uStack_200._5_1_,uStack_200._4_1_)));
    }
    else {
code_r0x08001eb0:
        uVar17 = uVar5;
        _dev_err(*(iVar21 + 0x20),"RTC read rtc data register failed\n");
    }
    iVar20 = sp_el0;
    if (*(iVar20 + 0x5e0) == iStack_1f8) {
        return uVar17;
    }
    iVar19 = __stack_chk_fail();
    *extraout_x18_04 = sym.rtc_us_val_show;
    pcStack_258 = sym.rtc_us_val_show;
    iVar20 = sp_el0;
    iStack_268 = *(iVar20 + 0x5e0);
    uStack_26c = 0;
    auStack_270[0] = 0;
    uStack_274 = 0;
    iVar20 = *(*(iVar19 + 0x60) + 0x98);
    iVar22 = *(iVar20 + 0x18);
    pppuStack_260 = &pppuStack_1f0;
    iVar8 = regmap_bulk_read(*(iVar20 + 8),*(iVar22 + 8),&uStack_26c,4);
    if ((iVar8 == 0) && (iVar8 = regmap_read(*(iVar20 + 8),*(iVar22 + 8),&uStack_274), -1 < iVar8)) {
        uVar1 = uStack_26c;
        if (uStack_274 < (uStack_26c & 0xff)) {
            iVar8 = regmap_bulk_read(*(iVar20 + 8),*(iVar22 + 8),&uStack_26c,4);
            if (iVar8 != 0) goto code_r0x08002040;
            uVar1 = uStack_26c;
        }
        uVar2 = uStack_26c._1_1_;
        uVar3 = uStack_26c._2_1_;
        uVar4 = uStack_26c._3_1_;
        iVar8 = regmap_bulk_read(*(iVar20 + 8),*(iVar22 + 0x1c),auStack_270,2);
        if (iVar8 == 0) {
            uVar17 = (auStack_270[0] * 0xf3e58) / 0x3ff;
            iVar8 = scnprintf(puVar15,0x1000,"%llu\n",
                              CONCAT13(uVar4,CONCAT12(uVar3,CONCAT11(uVar2,uVar1))) * 1000000 +
                              (uVar17 + (auStack_270[0] * 0xf3e58 - uVar17 >> 1) >> 9));
            goto code_r0x08001fe0;
        }
    }
code_r0x08002040:
    _dev_err(iVar19,"RTC read data register failed\n");
code_r0x08001fe0:
    iVar20 = sp_el0;
    if (*(iVar20 + 0x5e0) != iStack_268) {
        iVar20 = __stack_chk_fail();
        *extraout_x18_05 = sym.pm8xxx_rtc_suspend;
        if (((*(iVar20 + 0x10c) & 1) != 0) && (*(iVar20 + 0x148) != 0)) {
            irq_set_irq_wake(*(*(iVar20 + 0x98) + 0x14),1);
        }
        return 0;
    }
    return iVar8;
}


// ===== sym.pm8xxx_rtc_set_time @ 0x08001860 (size 512) =====

uint64_t sym.pm8xxx_rtc_set_time(int64_t arg1,int64_t arg2)

{
    uchar uVar1;
    uchar uVar2;
    uchar uVar3;
    uchar uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    int iVar8;
    int64_t iVar9;
    ulong uVar10;
    char *pcVar11;
    uint8_t *puVar12;
    char *pcVar13;
    uchar *puVar14;
    ulong *puVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    int64_t unaff_x19;
    int64_t unaff_x20;
    ulong unaff_x21;
    uint64_t uVar16;
    int64_t iVar17;
    int64_t iVar18;
    int64_t iVar19;
    int64_t iVar20;
    uint *unaff_x24;
    int64_t iVar21;
    uint64_t unaff_x25;
    int64_t iVar22;
    int64_t iVar23;
    ulong unaff_x30;
    uchar auVar24 [16];
    uchar auVar25 [16];
    uint32_t uStack_234;
    uint16_t auStack_230 [2];
    uint uStack_22c;
    int64_t iStack_228;
    ulong ***pppuStack_220;
    code *pcStack_218;
    ulong uStack_1c0;
    int64_t iStack_1b8;
    ulong ***pppuStack_1b0;
    code *pcStack_1a8;
    uint64_t uStack_1a0;
    int64_t iStack_198;
    ulong uStack_190;
    int64_t iStack_188;
    ulong uStack_180;
    int64_t iStack_178;
    uchar ***pppuStack_170;
    code *pcStack_168;
    int64_t iStack_160;
    int64_t iStack_150;
    uint64_t uStack_148;
    char *pcStack_140;
    ulong uStack_138;
    int64_t iStack_130;
    int64_t iStack_128;
    uint32_t uStack_120;
    uint uStack_11c;
    int64_t iStack_118;
    uchar **ppuStack_110;
    code *pcStack_108;
    uint64_t uStack_100;
    uint *puStack_f0;
    int64_t iStack_e8;
    int64_t iStack_e0;
    uint64_t uStack_d8;
    uint8_t *puStack_d0;
    int64_t iStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    int64_t iStack_a0;
    uint64_t uStack_90;
    ulong uStack_88;
    int64_t iStack_80;
    int64_t iStack_78;
    uint32_t uStack_64;
    uint32_t uStack_60;
    uint uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar18 = sp_el0;
    iStack_58 = *(iVar18 + 0x5e0);
    iVar18 = *(arg1 + 0x98);
    uStack_64 = 0;
    uStack_60 = 0;
    if (*(iVar18 + 0x10) == '\0') {
        uVar16 = 0xfffffff3;
    }
    else {
        unaff_x24 = *(iVar18 + 0x18);
        uStack_5c = rtc_tm_to_time64(arg2);
        unaff_x20 = iVar18 + 0x28;
        unaff_x21 = _raw_spin_lock_irqsave(unaff_x20);
        uVar5 = regmap_read(*(iVar18 + 8),unaff_x24[3],&uStack_60);
        uVar16 = uVar5;
        if (uVar5 == 0) {
            uVar5 = unaff_x24[6] & uStack_60;
            unaff_x25 = uVar5;
            if (uVar5 == 0) {
code_r0x08001904:
                uVar7 = regmap_read(*(iVar18 + 8),*unaff_x24,&uStack_64);
                uVar6 = uStack_64;
                uVar16 = uVar7;
                if (uVar7 != 0) goto code_r0x08001a14;
                if ((uStack_64 >> 7 & 1) == 0) {
code_r0x0800193c:
                    uVar7 = regmap_write(*(iVar18 + 8),unaff_x24[1],0);
                    if ((uVar7 == 0) &&
                       (uVar7 = regmap_bulk_write(*(iVar18 + 8),unaff_x24[1] + 1,&uStack_5c | 1,3), uVar7 == 0)) {
                        uVar7 = regmap_write(*(iVar18 + 8),unaff_x24[1],uStack_5c);
                        if (uVar7 == 0) {
                            if ((uVar6 >> 7 & 1) != 0) {
                                uStack_64 = uStack_64 | 0x80;
                                uVar7 = regmap_write(*(iVar18 + 8),*unaff_x24);
                                if (uVar7 != 0) goto code_r0x08001a00;
                            }
                            if (uVar5 == 0) {
                                uVar16 = 0;
                            }
                            else {
                                uStack_60 = uStack_60 | unaff_x24[6];
                                uVar5 = regmap_write(*(iVar18 + 8),unaff_x24[3]);
                                uVar16 = uVar5;
                                if (uVar5 != 0) goto code_r0x080019f4;
                            }
                            goto code_r0x08001a14;
                        }
                    }
                    uVar16 = uVar7;
                    pcVar11 = "Write to RTC write data register failed\n";
                }
                else {
                    uStack_64 = uStack_64 & 0xffffff7f;
                    uVar7 = regmap_write(*(iVar18 + 8),*unaff_x24);
                    if (uVar7 == 0) goto code_r0x0800193c;
code_r0x08001a00:
                    uVar16 = uVar7;
                    pcVar11 = "Write to RTC control register failed\n";
                }
            }
            else {
                uStack_60 = uStack_60 & (unaff_x24[6] ^ 0xffffffff);
                uVar6 = regmap_write(*(iVar18 + 8),unaff_x24[3]);
                if (uVar6 == 0) goto code_r0x08001904;
                uVar16 = uVar6;
code_r0x080019f4:
                pcVar11 = "Write to RTC Alarm control register failed\n";
            }
            _dev_err(arg1,pcVar11);
        }
code_r0x08001a14:
        _raw_spin_unlock_irqrestore(unaff_x20,unaff_x21);
        unaff_x19 = arg1;
    }
    iVar17 = sp_el0;
    if (*(iVar17 + 0x5e0) == iStack_58) {
        return uVar16;
    }
    auVar24 = __stack_chk_fail();
    puVar12 = auVar24._8_8_;
    iVar20 = auVar24._0_8_;
    *extraout_x18 = sym.pm8xxx_rtc_read_alarm;
    pcStack_a8 = sym.pm8xxx_rtc_read_alarm;
    iVar17 = sp_el0;
    iStack_b8 = *(iVar17 + 0x5e0);
    iVar17 = *(iVar20 + 0x98);
    uStack_c0 = 0;
    iVar19 = *(iVar17 + 0x18);
    puStack_b0 = &stack0xffffffffffffffb0;
    iStack_a0 = iVar18;
    uStack_90 = uVar16;
    uStack_88 = unaff_x21;
    iStack_80 = unaff_x20;
    iStack_78 = unaff_x19;
    uVar5 = regmap_bulk_read(*(iVar17 + 8),*(iVar19 + 0x14),&uStack_c0 + 4,4);
    if (uVar5 == 0) {
        rtc_time64_to_tm(uStack_c0._4_4_,puVar12 + 4);
        uVar5 = regmap_read(*(iVar17 + 8),*(iVar19 + 0xc),&uStack_c0);
        uVar16 = uVar5;
        if (uVar5 != 0) {
            pcVar11 = "Read from RTC alarm control register failed\n";
            goto code_r0x08001b48;
        }
        *puVar12 = uStack_c0 >> 7;
    }
    else {
        uVar16 = uVar5;
        _dev_err(*(iVar17 + 0x20),"RTC read alarm data failed\n");
        pcVar11 = "RTC alarm data read failed\n";
code_r0x08001b48:
        _dev_err(iVar20,pcVar11);
    }
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) == iStack_b8) {
        return uVar16;
    }
    auVar24 = __stack_chk_fail();
    pcVar11 = auVar24._8_8_;
    iVar9 = auVar24._0_8_;
    *extraout_x18_00 = sym.pm8xxx_rtc_set_alarm;
    pcStack_108 = sym.pm8xxx_rtc_set_alarm;
    iVar18 = sp_el0;
    iStack_118 = *(iVar18 + 0x5e0);
    iVar21 = *(iVar9 + 0x98);
    uStack_120 = 0;
    iVar22 = *(iVar21 + 0x18);
    ppuStack_110 = &puStack_b0;
    uStack_100 = unaff_x25;
    puStack_f0 = unaff_x24;
    iStack_e8 = iVar19;
    iStack_e0 = iVar17;
    uStack_d8 = uVar16;
    puStack_d0 = puVar12;
    iStack_c8 = iVar20;
    uStack_11c = rtc_tm_to_time64(pcVar11 + 4);
    iVar18 = iVar21 + 0x28;
    uVar10 = _raw_spin_lock_irqsave(iVar18);
    uVar5 = regmap_bulk_write(*(iVar21 + 8),*(iVar22 + 0x14),&uStack_11c,4);
    if (uVar5 == 0) {
        uVar5 = regmap_read(*(iVar21 + 8),*(iVar22 + 0xc),&uStack_120);
        uVar16 = uVar5;
        if (uVar5 == 0) {
            if (*pcVar11 == '\0') {
                uStack_120 = uStack_120 & (*(iVar22 + 0x18) ^ 0xffffffff);
            }
            else {
                uStack_120 = uStack_120 | *(iVar22 + 0x18);
            }
            uVar5 = regmap_write(*(iVar21 + 8),*(iVar22 + 0xc));
            uVar16 = uVar5;
            if (uVar5 != 0) {
                pcVar13 = "Write to RTC alarm control register failed\n";
                goto code_r0x08001c80;
            }
        }
    }
    else {
        uVar16 = uVar5;
        pcVar13 = "Write to RTC ALARM register failed\n";
code_r0x08001c80:
        _dev_err(iVar9,pcVar13);
    }
    _raw_spin_unlock_irqrestore(iVar18,uVar10);
    iVar17 = sp_el0;
    if (*(iVar17 + 0x5e0) == iStack_118) {
        return uVar16;
    }
    auVar24 = __stack_chk_fail();
    iVar20 = auVar24._0_8_;
    *extraout_x18_01 = sym.pm8xxx_rtc_alarm_irq_enable;
    pcStack_168 = sym.pm8xxx_rtc_alarm_irq_enable;
    iVar17 = sp_el0;
    iStack_178 = *(iVar17 + 0x5e0);
    iVar19 = *(iVar20 + 0x98);
    uStack_180 = 0;
    iVar17 = iVar19 + 0x28;
    iVar23 = *(iVar19 + 0x18);
    pppuStack_170 = &ppuStack_110;
    iStack_160 = iVar22;
    iStack_150 = iVar21;
    uStack_148 = uVar16;
    pcStack_140 = pcVar11;
    uStack_138 = uVar10;
    iStack_130 = iVar18;
    iStack_128 = iVar9;
    uVar10 = _raw_spin_lock_irqsave(iVar17);
    uVar5 = regmap_read(*(iVar19 + 8),*(iVar23 + 0xc),&uStack_180 + 4);
    uVar16 = uVar5;
    if (uVar5 == 0) {
        if (auVar24._8_4_ == 0) {
            uVar5 = uStack_180._4_4_ & (*(iVar23 + 0x18) ^ 0xffffffff);
        }
        else {
            uVar5 = uStack_180._4_4_ | *(iVar23 + 0x18);
        }
        uStack_180 = CONCAT44(uVar5,uStack_180);
        uVar5 = regmap_write(*(iVar19 + 8),*(iVar23 + 0xc));
        if (uVar5 == 0) {
            if (auVar24._8_4_ == 0) {
                uVar5 = regmap_bulk_write(*(iVar19 + 8),*(iVar23 + 0x14),&uStack_180,4);
                uVar16 = uVar5;
                if (uVar5 != 0) {
                    pcVar11 = "Clear RTC ALARM register failed\n";
                    goto code_r0x08001db4;
                }
            }
            else {
                uVar16 = 0;
            }
        }
        else {
            uVar16 = uVar5;
            pcVar11 = "Write to RTC control register failed\n";
code_r0x08001db4:
            _dev_err(iVar20,pcVar11);
        }
    }
    _raw_spin_unlock_irqrestore(iVar17,uVar10);
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) == iStack_178) {
        return uVar16;
    }
    auVar25 = __stack_chk_fail();
    iVar19 = auVar25._0_8_;
    puVar15 = &uStack_1c0;
    *extraout_x18_02 = sym.pm8xxx_rtc_read_rtc_data;
    pcStack_1a8 = sym.pm8xxx_rtc_read_rtc_data;
    iVar18 = sp_el0;
    iStack_1b8 = *(iVar18 + 0x5e0);
    puVar14 = &uStack_1c0 + 4;
    iVar18 = *(iVar19 + 0x18);
    uStack_1c0 = 0;
    pppuStack_1b0 = &pppuStack_170;
    uStack_1a0 = auVar24._8_8_ & 0xffffffff;
    iStack_198 = iVar20;
    uStack_190 = uVar10;
    iStack_188 = iVar17;
    uVar5 = regmap_bulk_read(*(iVar19 + 8),*(iVar18 + 8),puVar14,4);
    if ((uVar5 == 0) &&
       (uVar5 = regmap_read(*(iVar19 + 8),*(iVar18 + 8),&uStack_1c0), puVar14 = puVar15, -1 < uVar5)) {
        if (uStack_1c0 < uStack_1c0._4_1_) {
            puVar14 = &uStack_1c0 + 4;
            uVar5 = regmap_bulk_read(*(iVar19 + 8),*(iVar18 + 8),puVar14,4);
            if (uVar5 != 0) goto code_r0x08001eb0;
        }
        uVar16 = 0;
        *auVar25._8_8_ =
             CONCAT13(uStack_1c0._7_1_,CONCAT12(uStack_1c0._6_1_,CONCAT11(uStack_1c0._5_1_,uStack_1c0._4_1_)));
    }
    else {
code_r0x08001eb0:
        uVar16 = uVar5;
        _dev_err(*(iVar19 + 0x20),"RTC read rtc data register failed\n");
    }
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) == iStack_1b8) {
        return uVar16;
    }
    iVar17 = __stack_chk_fail();
    *extraout_x18_03 = sym.rtc_us_val_show;
    pcStack_218 = sym.rtc_us_val_show;
    iVar18 = sp_el0;
    iStack_228 = *(iVar18 + 0x5e0);
    uStack_22c = 0;
    auStack_230[0] = 0;
    uStack_234 = 0;
    iVar18 = *(*(iVar17 + 0x60) + 0x98);
    iVar20 = *(iVar18 + 0x18);
    pppuStack_220 = &pppuStack_1b0;
    iVar8 = regmap_bulk_read(*(iVar18 + 8),*(iVar20 + 8),&uStack_22c,4);
    if ((iVar8 == 0) && (iVar8 = regmap_read(*(iVar18 + 8),*(iVar20 + 8),&uStack_234), -1 < iVar8)) {
        uVar1 = uStack_22c;
        if (uStack_234 < (uStack_22c & 0xff)) {
            iVar8 = regmap_bulk_read(*(iVar18 + 8),*(iVar20 + 8),&uStack_22c,4);
            if (iVar8 != 0) goto code_r0x08002040;
            uVar1 = uStack_22c;
        }
        uVar2 = uStack_22c._1_1_;
        uVar3 = uStack_22c._2_1_;
        uVar4 = uStack_22c._3_1_;
        iVar8 = regmap_bulk_read(*(iVar18 + 8),*(iVar20 + 0x1c),auStack_230,2);
        if (iVar8 == 0) {
            uVar16 = (auStack_230[0] * 0xf3e58) / 0x3ff;
            iVar8 = scnprintf(puVar14,0x1000,"%llu\n",
                              CONCAT13(uVar4,CONCAT12(uVar3,CONCAT11(uVar2,uVar1))) * 1000000 +
                              (uVar16 + (auStack_230[0] * 0xf3e58 - uVar16 >> 1) >> 9));
            goto code_r0x08001fe0;
        }
    }
code_r0x08002040:
    _dev_err(iVar17,"RTC read data register failed\n");
code_r0x08001fe0:
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) != iStack_228) {
        iVar18 = __stack_chk_fail();
        *extraout_x18_04 = sym.pm8xxx_rtc_suspend;
        if (((*(iVar18 + 0x10c) & 1) != 0) && (*(iVar18 + 0x148) != 0)) {
            irq_set_irq_wake(*(*(iVar18 + 0x98) + 0x14),1);
        }
        return 0;
    }
    return iVar8;
}


// ===== sym.pm8xxx_rtc_read_alarm @ 0x08001a60 (size 248) =====

uint64_t sym.pm8xxx_rtc_read_alarm(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uchar uVar2;
    uchar uVar3;
    uchar uVar4;
    uchar uVar5;
    uint32_t uVar6;
    int iVar7;
    ulong uVar8;
    int64_t iVar9;
    char *pcVar10;
    char *pcVar11;
    uchar *puVar12;
    ulong *puVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    uint64_t uVar14;
    int64_t iVar15;
    int64_t iVar16;
    int64_t iVar17;
    int64_t iVar18;
    int64_t iVar19;
    int64_t iVar20;
    ulong unaff_x30;
    uchar auVar21 [16];
    uchar auVar22 [16];
    uint32_t uStack_1c4;
    uint16_t auStack_1c0 [2];
    uint uStack_1bc;
    int64_t iStack_1b8;
    ulong **ppuStack_1b0;
    code *pcStack_1a8;
    ulong uStack_150;
    int64_t iStack_148;
    ulong **ppuStack_140;
    code *pcStack_138;
    uint64_t uStack_130;
    int64_t iStack_128;
    ulong uStack_120;
    int64_t iStack_118;
    ulong uStack_110;
    int64_t iStack_108;
    uchar **ppuStack_100;
    code *pcStack_f8;
    int64_t iStack_f0;
    int64_t iStack_e0;
    uint64_t uStack_d8;
    char *pcStack_d0;
    ulong uStack_c8;
    int64_t iStack_c0;
    int64_t iStack_b8;
    uint32_t uStack_b0;
    uint uStack_ac;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar15 = sp_el0;
    iStack_48 = *(iVar15 + 0x5e0);
    iVar15 = *(arg1 + 0x98);
    uStack_50 = 0;
    iVar16 = *(iVar15 + 0x18);
    uVar6 = regmap_bulk_read(*(iVar15 + 8),*(iVar16 + 0x14),&uStack_50 + 4,4);
    if (uVar6 == 0) {
        rtc_time64_to_tm(uStack_50._4_4_,arg2 + 4);
        uVar6 = regmap_read(*(iVar15 + 8),*(iVar16 + 0xc),&uStack_50);
        uVar14 = uVar6;
        if (uVar6 != 0) {
            pcVar11 = "Read from RTC alarm control register failed\n";
            goto code_r0x08001b48;
        }
        *arg2 = uStack_50 >> 7;
    }
    else {
        uVar14 = uVar6;
        _dev_err(*(iVar15 + 0x20),"RTC read alarm data failed\n");
        pcVar11 = "RTC alarm data read failed\n";
code_r0x08001b48:
        _dev_err(arg1,pcVar11);
    }
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_48) {
        return uVar14;
    }
    auVar21 = __stack_chk_fail();
    pcVar11 = auVar21._8_8_;
    iVar16 = auVar21._0_8_;
    *extraout_x18 = sym.pm8xxx_rtc_set_alarm;
    pcStack_98 = sym.pm8xxx_rtc_set_alarm;
    iVar15 = sp_el0;
    iStack_a8 = *(iVar15 + 0x5e0);
    iVar17 = *(iVar16 + 0x98);
    uStack_b0 = 0;
    iVar19 = *(iVar17 + 0x18);
    puStack_a0 = &stack0xffffffffffffffc0;
    uStack_ac = rtc_tm_to_time64(pcVar11 + 4);
    iVar15 = iVar17 + 0x28;
    uVar8 = _raw_spin_lock_irqsave(iVar15);
    uVar6 = regmap_bulk_write(*(iVar17 + 8),*(iVar19 + 0x14),&uStack_ac,4);
    if (uVar6 == 0) {
        uVar6 = regmap_read(*(iVar17 + 8),*(iVar19 + 0xc),&uStack_b0);
        uVar14 = uVar6;
        if (uVar6 == 0) {
            if (*pcVar11 == '\0') {
                uStack_b0 = uStack_b0 & (*(iVar19 + 0x18) ^ 0xffffffff);
            }
            else {
                uStack_b0 = uStack_b0 | *(iVar19 + 0x18);
            }
            uVar6 = regmap_write(*(iVar17 + 8),*(iVar19 + 0xc));
            uVar14 = uVar6;
            if (uVar6 != 0) {
                pcVar10 = "Write to RTC alarm control register failed\n";
                goto code_r0x08001c80;
            }
        }
    }
    else {
        uVar14 = uVar6;
        pcVar10 = "Write to RTC ALARM register failed\n";
code_r0x08001c80:
        _dev_err(iVar16,pcVar10);
    }
    _raw_spin_unlock_irqrestore(iVar15,uVar8);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_a8) {
        return uVar14;
    }
    auVar21 = __stack_chk_fail();
    iVar9 = auVar21._0_8_;
    *extraout_x18_00 = sym.pm8xxx_rtc_alarm_irq_enable;
    pcStack_f8 = sym.pm8xxx_rtc_alarm_irq_enable;
    iVar1 = sp_el0;
    iStack_108 = *(iVar1 + 0x5e0);
    iVar18 = *(iVar9 + 0x98);
    uStack_110 = 0;
    iVar1 = iVar18 + 0x28;
    iVar20 = *(iVar18 + 0x18);
    ppuStack_100 = &puStack_a0;
    iStack_f0 = iVar19;
    iStack_e0 = iVar17;
    uStack_d8 = uVar14;
    pcStack_d0 = pcVar11;
    uStack_c8 = uVar8;
    iStack_c0 = iVar15;
    iStack_b8 = iVar16;
    uVar8 = _raw_spin_lock_irqsave(iVar1);
    uVar6 = regmap_read(*(iVar18 + 8),*(iVar20 + 0xc),&uStack_110 + 4);
    uVar14 = uVar6;
    if (uVar6 == 0) {
        if (auVar21._8_4_ == 0) {
            uVar6 = uStack_110._4_4_ & (*(iVar20 + 0x18) ^ 0xffffffff);
        }
        else {
            uVar6 = uStack_110._4_4_ | *(iVar20 + 0x18);
        }
        uStack_110 = CONCAT44(uVar6,uStack_110);
        uVar6 = regmap_write(*(iVar18 + 8),*(iVar20 + 0xc));
        if (uVar6 == 0) {
            if (auVar21._8_4_ == 0) {
                uVar6 = regmap_bulk_write(*(iVar18 + 8),*(iVar20 + 0x14),&uStack_110,4);
                uVar14 = uVar6;
                if (uVar6 != 0) {
                    pcVar11 = "Clear RTC ALARM register failed\n";
                    goto code_r0x08001db4;
                }
            }
            else {
                uVar14 = 0;
            }
        }
        else {
            uVar14 = uVar6;
            pcVar11 = "Write to RTC control register failed\n";
code_r0x08001db4:
            _dev_err(iVar9,pcVar11);
        }
    }
    _raw_spin_unlock_irqrestore(iVar1,uVar8);
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_108) {
        return uVar14;
    }
    auVar22 = __stack_chk_fail();
    iVar16 = auVar22._0_8_;
    puVar13 = &uStack_150;
    *extraout_x18_01 = sym.pm8xxx_rtc_read_rtc_data;
    pcStack_138 = sym.pm8xxx_rtc_read_rtc_data;
    iVar15 = sp_el0;
    iStack_148 = *(iVar15 + 0x5e0);
    puVar12 = &uStack_150 + 4;
    iVar15 = *(iVar16 + 0x18);
    uStack_150 = 0;
    ppuStack_140 = &ppuStack_100;
    uStack_130 = auVar21._8_8_ & 0xffffffff;
    iStack_128 = iVar9;
    uStack_120 = uVar8;
    iStack_118 = iVar1;
    uVar6 = regmap_bulk_read(*(iVar16 + 8),*(iVar15 + 8),puVar12,4);
    if ((uVar6 == 0) &&
       (uVar6 = regmap_read(*(iVar16 + 8),*(iVar15 + 8),&uStack_150), puVar12 = puVar13, -1 < uVar6)) {
        if (uStack_150 < uStack_150._4_1_) {
            puVar12 = &uStack_150 + 4;
            uVar6 = regmap_bulk_read(*(iVar16 + 8),*(iVar15 + 8),puVar12,4);
            if (uVar6 != 0) goto code_r0x08001eb0;
        }
        uVar14 = 0;
        *auVar22._8_8_ =
             CONCAT13(uStack_150._7_1_,CONCAT12(uStack_150._6_1_,CONCAT11(uStack_150._5_1_,uStack_150._4_1_)));
    }
    else {
code_r0x08001eb0:
        uVar14 = uVar6;
        _dev_err(*(iVar16 + 0x20),"RTC read rtc data register failed\n");
    }
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_148) {
        return uVar14;
    }
    iVar16 = __stack_chk_fail();
    *extraout_x18_02 = sym.rtc_us_val_show;
    pcStack_1a8 = sym.rtc_us_val_show;
    iVar15 = sp_el0;
    iStack_1b8 = *(iVar15 + 0x5e0);
    uStack_1bc = 0;
    auStack_1c0[0] = 0;
    uStack_1c4 = 0;
    iVar15 = *(*(iVar16 + 0x60) + 0x98);
    iVar17 = *(iVar15 + 0x18);
    ppuStack_1b0 = &ppuStack_140;
    iVar7 = regmap_bulk_read(*(iVar15 + 8),*(iVar17 + 8),&uStack_1bc,4);
    if ((iVar7 == 0) && (iVar7 = regmap_read(*(iVar15 + 8),*(iVar17 + 8),&uStack_1c4), -1 < iVar7)) {
        uVar2 = uStack_1bc;
        if (uStack_1c4 < (uStack_1bc & 0xff)) {
            iVar7 = regmap_bulk_read(*(iVar15 + 8),*(iVar17 + 8),&uStack_1bc,4);
            if (iVar7 != 0) goto code_r0x08002040;
            uVar2 = uStack_1bc;
        }
        uVar3 = uStack_1bc._1_1_;
        uVar4 = uStack_1bc._2_1_;
        uVar5 = uStack_1bc._3_1_;
        iVar7 = regmap_bulk_read(*(iVar15 + 8),*(iVar17 + 0x1c),auStack_1c0,2);
        if (iVar7 == 0) {
            uVar14 = (auStack_1c0[0] * 0xf3e58) / 0x3ff;
            iVar7 = scnprintf(puVar12,0x1000,"%llu\n",
                              CONCAT13(uVar5,CONCAT12(uVar4,CONCAT11(uVar3,uVar2))) * 1000000 +
                              (uVar14 + (auStack_1c0[0] * 0xf3e58 - uVar14 >> 1) >> 9));
            goto code_r0x08001fe0;
        }
    }
code_r0x08002040:
    _dev_err(iVar16,"RTC read data register failed\n");
code_r0x08001fe0:
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_1b8) {
        return iVar7;
    }
    iVar15 = __stack_chk_fail();
    *extraout_x18_03 = sym.pm8xxx_rtc_suspend;
    if (((*(iVar15 + 0x10c) & 1) != 0) && (*(iVar15 + 0x148) != 0)) {
        irq_set_irq_wake(*(*(iVar15 + 0x98) + 0x14),1);
    }
    return 0;
}


// ===== sym.pm8xxx_rtc_set_alarm @ 0x08001b58 (size 312) =====

uint64_t sym.pm8xxx_rtc_set_alarm(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uchar uVar2;
    uchar uVar3;
    uchar uVar4;
    uchar uVar5;
    uint32_t uVar6;
    int iVar7;
    ulong uVar8;
    int64_t iVar9;
    char *pcVar10;
    uchar *puVar11;
    ulong *puVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    int64_t iVar13;
    uint64_t uVar14;
    int64_t iVar15;
    int64_t iVar16;
    int64_t iVar17;
    int64_t iVar18;
    ulong unaff_x30;
    uchar auVar19 [16];
    uchar auVar20 [16];
    uint32_t uStack_174;
    uint16_t auStack_170 [2];
    uint uStack_16c;
    int64_t iStack_168;
    ulong **ppuStack_160;
    code *pcStack_158;
    ulong uStack_100;
    int64_t iStack_f8;
    uchar **ppuStack_f0;
    code *pcStack_e8;
    uint64_t uStack_e0;
    int64_t iStack_d8;
    ulong uStack_d0;
    int64_t iStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    int64_t iStack_a0;
    int64_t iStack_90;
    uint64_t uStack_88;
    int64_t iStack_80;
    ulong uStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    uint32_t uStack_60;
    uint uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iStack_58 = *(iVar13 + 0x5e0);
    iVar15 = *(arg1 + 0x98);
    uStack_60 = 0;
    iVar17 = *(iVar15 + 0x18);
    uStack_5c = rtc_tm_to_time64(arg2 + 4);
    iVar13 = iVar15 + 0x28;
    uVar8 = _raw_spin_lock_irqsave(iVar13);
    uVar6 = regmap_bulk_write(*(iVar15 + 8),*(iVar17 + 0x14),&uStack_5c,4);
    if (uVar6 == 0) {
        uVar6 = regmap_read(*(iVar15 + 8),*(iVar17 + 0xc),&uStack_60);
        uVar14 = uVar6;
        if (uVar6 == 0) {
            if (*arg2 == '\0') {
                uStack_60 = uStack_60 & (*(iVar17 + 0x18) ^ 0xffffffff);
            }
            else {
                uStack_60 = uStack_60 | *(iVar17 + 0x18);
            }
            uVar6 = regmap_write(*(iVar15 + 8),*(iVar17 + 0xc));
            uVar14 = uVar6;
            if (uVar6 != 0) {
                pcVar10 = "Write to RTC alarm control register failed\n";
                goto code_r0x08001c80;
            }
        }
    }
    else {
        uVar14 = uVar6;
        pcVar10 = "Write to RTC ALARM register failed\n";
code_r0x08001c80:
        _dev_err(arg1,pcVar10);
    }
    _raw_spin_unlock_irqrestore(iVar13,uVar8);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_58) {
        return uVar14;
    }
    auVar19 = __stack_chk_fail();
    iVar9 = auVar19._0_8_;
    *extraout_x18 = sym.pm8xxx_rtc_alarm_irq_enable;
    pcStack_a8 = sym.pm8xxx_rtc_alarm_irq_enable;
    iVar1 = sp_el0;
    iStack_b8 = *(iVar1 + 0x5e0);
    iVar16 = *(iVar9 + 0x98);
    uStack_c0 = 0;
    iVar1 = iVar16 + 0x28;
    iVar18 = *(iVar16 + 0x18);
    puStack_b0 = &stack0xffffffffffffffb0;
    iStack_a0 = iVar17;
    iStack_90 = iVar15;
    uStack_88 = uVar14;
    iStack_80 = arg2;
    uStack_78 = uVar8;
    iStack_70 = iVar13;
    iStack_68 = arg1;
    uVar8 = _raw_spin_lock_irqsave(iVar1);
    uVar6 = regmap_read(*(iVar16 + 8),*(iVar18 + 0xc),&uStack_c0 + 4);
    uVar14 = uVar6;
    if (uVar6 == 0) {
        if (auVar19._8_4_ == 0) {
            uVar6 = uStack_c0._4_4_ & (*(iVar18 + 0x18) ^ 0xffffffff);
        }
        else {
            uVar6 = uStack_c0._4_4_ | *(iVar18 + 0x18);
        }
        uStack_c0 = CONCAT44(uVar6,uStack_c0);
        uVar6 = regmap_write(*(iVar16 + 8),*(iVar18 + 0xc));
        if (uVar6 == 0) {
            if (auVar19._8_4_ == 0) {
                uVar6 = regmap_bulk_write(*(iVar16 + 8),*(iVar18 + 0x14),&uStack_c0,4);
                uVar14 = uVar6;
                if (uVar6 != 0) {
                    pcVar10 = "Clear RTC ALARM register failed\n";
                    goto code_r0x08001db4;
                }
            }
            else {
                uVar14 = 0;
            }
        }
        else {
            uVar14 = uVar6;
            pcVar10 = "Write to RTC control register failed\n";
code_r0x08001db4:
            _dev_err(iVar9,pcVar10);
        }
    }
    _raw_spin_unlock_irqrestore(iVar1,uVar8);
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_b8) {
        return uVar14;
    }
    auVar20 = __stack_chk_fail();
    iVar15 = auVar20._0_8_;
    puVar12 = &uStack_100;
    *extraout_x18_00 = sym.pm8xxx_rtc_read_rtc_data;
    pcStack_e8 = sym.pm8xxx_rtc_read_rtc_data;
    iVar13 = sp_el0;
    iStack_f8 = *(iVar13 + 0x5e0);
    puVar11 = &uStack_100 + 4;
    iVar13 = *(iVar15 + 0x18);
    uStack_100 = 0;
    ppuStack_f0 = &puStack_b0;
    uStack_e0 = auVar19._8_8_ & 0xffffffff;
    iStack_d8 = iVar9;
    uStack_d0 = uVar8;
    iStack_c8 = iVar1;
    uVar6 = regmap_bulk_read(*(iVar15 + 8),*(iVar13 + 8),puVar11,4);
    if ((uVar6 == 0) &&
       (uVar6 = regmap_read(*(iVar15 + 8),*(iVar13 + 8),&uStack_100), puVar11 = puVar12, -1 < uVar6)) {
        if (uStack_100 < uStack_100._4_1_) {
            puVar11 = &uStack_100 + 4;
            uVar6 = regmap_bulk_read(*(iVar15 + 8),*(iVar13 + 8),puVar11,4);
            if (uVar6 != 0) goto code_r0x08001eb0;
        }
        uVar14 = 0;
        *auVar20._8_8_ =
             CONCAT13(uStack_100._7_1_,CONCAT12(uStack_100._6_1_,CONCAT11(uStack_100._5_1_,uStack_100._4_1_)));
    }
    else {
code_r0x08001eb0:
        uVar14 = uVar6;
        _dev_err(*(iVar15 + 0x20),"RTC read rtc data register failed\n");
    }
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_f8) {
        return uVar14;
    }
    iVar15 = __stack_chk_fail();
    *extraout_x18_01 = sym.rtc_us_val_show;
    pcStack_158 = sym.rtc_us_val_show;
    iVar13 = sp_el0;
    iStack_168 = *(iVar13 + 0x5e0);
    uStack_16c = 0;
    auStack_170[0] = 0;
    uStack_174 = 0;
    iVar13 = *(*(iVar15 + 0x60) + 0x98);
    iVar17 = *(iVar13 + 0x18);
    ppuStack_160 = &ppuStack_f0;
    iVar7 = regmap_bulk_read(*(iVar13 + 8),*(iVar17 + 8),&uStack_16c,4);
    if ((iVar7 == 0) && (iVar7 = regmap_read(*(iVar13 + 8),*(iVar17 + 8),&uStack_174), -1 < iVar7)) {
        uVar2 = uStack_16c;
        if (uStack_174 < (uStack_16c & 0xff)) {
            iVar7 = regmap_bulk_read(*(iVar13 + 8),*(iVar17 + 8),&uStack_16c,4);
            if (iVar7 != 0) goto code_r0x08002040;
            uVar2 = uStack_16c;
        }
        uVar3 = uStack_16c._1_1_;
        uVar4 = uStack_16c._2_1_;
        uVar5 = uStack_16c._3_1_;
        iVar7 = regmap_bulk_read(*(iVar13 + 8),*(iVar17 + 0x1c),auStack_170,2);
        if (iVar7 == 0) {
            uVar14 = (auStack_170[0] * 0xf3e58) / 0x3ff;
            iVar7 = scnprintf(puVar11,0x1000,"%llu\n",
                              CONCAT13(uVar5,CONCAT12(uVar4,CONCAT11(uVar3,uVar2))) * 1000000 +
                              (uVar14 + (auStack_170[0] * 0xf3e58 - uVar14 >> 1) >> 9));
            goto code_r0x08001fe0;
        }
    }
code_r0x08002040:
    _dev_err(iVar15,"RTC read data register failed\n");
code_r0x08001fe0:
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_168) {
        return iVar7;
    }
    iVar13 = __stack_chk_fail();
    *extraout_x18_02 = sym.pm8xxx_rtc_suspend;
    if (((*(iVar13 + 0x10c) & 1) != 0) && (*(iVar13 + 0x148) != 0)) {
        irq_set_irq_wake(*(*(iVar13 + 0x98) + 0x14),1);
    }
    return 0;
}


// ===== sym.pm8xxx_rtc_alarm_irq_enable @ 0x08001c90 (size 308) =====

uint64_t sym.pm8xxx_rtc_alarm_irq_enable(int64_t arg1,int64_t arg2)

{
    uchar uVar1;
    uchar uVar2;
    uchar uVar3;
    uchar uVar4;
    uint32_t uVar5;
    int iVar6;
    ulong uVar7;
    char *pcVar8;
    uchar *puVar9;
    ulong *puVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t iVar11;
    uint64_t uVar12;
    int64_t iVar13;
    int64_t iVar14;
    ulong unaff_x30;
    uchar auVar15 [16];
    uint32_t uStack_114;
    uint16_t auStack_110 [2];
    uint uStack_10c;
    int64_t iStack_108;
    uchar **ppuStack_100;
    code *pcStack_f8;
    ulong uStack_a0;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    uint64_t uStack_80;
    int64_t iStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_58 = *(iVar11 + 0x5e0);
    iVar13 = *(arg1 + 0x98);
    uStack_60 = 0;
    iVar11 = iVar13 + 0x28;
    iVar14 = *(iVar13 + 0x18);
    uVar7 = _raw_spin_lock_irqsave(iVar11);
    uVar5 = regmap_read(*(iVar13 + 8),*(iVar14 + 0xc),&uStack_60 + 4);
    uVar12 = uVar5;
    if (uVar5 == 0) {
        if (arg2 == 0) {
            uVar5 = uStack_60._4_4_ & (*(iVar14 + 0x18) ^ 0xffffffff);
        }
        else {
            uVar5 = uStack_60._4_4_ | *(iVar14 + 0x18);
        }
        uStack_60 = CONCAT44(uVar5,uStack_60);
        uVar5 = regmap_write(*(iVar13 + 8),*(iVar14 + 0xc));
        if (uVar5 == 0) {
            if (arg2 == 0) {
                uVar5 = regmap_bulk_write(*(iVar13 + 8),*(iVar14 + 0x14),&uStack_60,4);
                uVar12 = uVar5;
                if (uVar5 != 0) {
                    pcVar8 = "Clear RTC ALARM register failed\n";
                    goto code_r0x08001db4;
                }
            }
            else {
                uVar12 = 0;
            }
        }
        else {
            uVar12 = uVar5;
            pcVar8 = "Write to RTC control register failed\n";
code_r0x08001db4:
            _dev_err(arg1,pcVar8);
        }
    }
    _raw_spin_unlock_irqrestore(iVar11,uVar7);
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_58) {
        return uVar12;
    }
    auVar15 = __stack_chk_fail();
    iVar14 = auVar15._0_8_;
    puVar10 = &uStack_a0;
    *extraout_x18 = sym.pm8xxx_rtc_read_rtc_data;
    pcStack_88 = sym.pm8xxx_rtc_read_rtc_data;
    iVar13 = sp_el0;
    iStack_98 = *(iVar13 + 0x5e0);
    puVar9 = &uStack_a0 + 4;
    iVar13 = *(iVar14 + 0x18);
    uStack_a0 = 0;
    puStack_90 = &stack0xffffffffffffffb0;
    uStack_80 = arg2 & 0xffffffff;
    iStack_78 = arg1;
    uStack_70 = uVar7;
    iStack_68 = iVar11;
    uVar5 = regmap_bulk_read(*(iVar14 + 8),*(iVar13 + 8),puVar9,4);
    if ((uVar5 == 0) && (uVar5 = regmap_read(*(iVar14 + 8),*(iVar13 + 8),&uStack_a0), puVar9 = puVar10, -1 < uVar5))
    {
        if (uStack_a0 < uStack_a0._4_1_) {
            puVar9 = &uStack_a0 + 4;
            uVar5 = regmap_bulk_read(*(iVar14 + 8),*(iVar13 + 8),puVar9,4);
            if (uVar5 != 0) goto code_r0x08001eb0;
        }
        uVar12 = 0;
        *auVar15._8_8_ =
             CONCAT13(uStack_a0._7_1_,CONCAT12(uStack_a0._6_1_,CONCAT11(uStack_a0._5_1_,uStack_a0._4_1_)));
    }
    else {
code_r0x08001eb0:
        uVar12 = uVar5;
        _dev_err(*(iVar14 + 0x20),"RTC read rtc data register failed\n");
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_98) {
        return uVar12;
    }
    iVar13 = __stack_chk_fail();
    *extraout_x18_00 = sym.rtc_us_val_show;
    pcStack_f8 = sym.rtc_us_val_show;
    iVar11 = sp_el0;
    iStack_108 = *(iVar11 + 0x5e0);
    uStack_10c = 0;
    auStack_110[0] = 0;
    uStack_114 = 0;
    iVar11 = *(*(iVar13 + 0x60) + 0x98);
    iVar14 = *(iVar11 + 0x18);
    ppuStack_100 = &puStack_90;
    iVar6 = regmap_bulk_read(*(iVar11 + 8),*(iVar14 + 8),&uStack_10c,4);
    if ((iVar6 == 0) && (iVar6 = regmap_read(*(iVar11 + 8),*(iVar14 + 8),&uStack_114), -1 < iVar6)) {
        uVar1 = uStack_10c;
        if (uStack_114 < (uStack_10c & 0xff)) {
            iVar6 = regmap_bulk_read(*(iVar11 + 8),*(iVar14 + 8),&uStack_10c,4);
            if (iVar6 != 0) goto code_r0x08002040;
            uVar1 = uStack_10c;
        }
        uVar2 = uStack_10c._1_1_;
        uVar3 = uStack_10c._2_1_;
        uVar4 = uStack_10c._3_1_;
        iVar6 = regmap_bulk_read(*(iVar11 + 8),*(iVar14 + 0x1c),auStack_110,2);
        if (iVar6 == 0) {
            uVar12 = (auStack_110[0] * 0xf3e58) / 0x3ff;
            iVar6 = scnprintf(puVar9,0x1000,"%llu\n",
                              CONCAT13(uVar4,CONCAT12(uVar3,CONCAT11(uVar2,uVar1))) * 1000000 +
                              (uVar12 + (auStack_110[0] * 0xf3e58 - uVar12 >> 1) >> 9));
            goto code_r0x08001fe0;
        }
    }
code_r0x08002040:
    _dev_err(iVar13,"RTC read data register failed\n");
code_r0x08001fe0:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_108) {
        return iVar6;
    }
    iVar11 = __stack_chk_fail();
    *extraout_x18_01 = sym.pm8xxx_rtc_suspend;
    if (((*(iVar11 + 0x10c) & 1) != 0) && (*(iVar11 + 0x148) != 0)) {
        irq_set_irq_wake(*(*(iVar11 + 0x98) + 0x14),1);
    }
    return 0;
}


// ===== sym.pm8xxx_rtc_read_rtc_data @ 0x08001dc4 (size 264) =====

uint64_t sym.pm8xxx_rtc_read_rtc_data(int64_t arg1,int64_t arg2)

{
    uchar uVar1;
    uchar uVar2;
    uchar uVar3;
    uchar uVar4;
    uint32_t uVar5;
    int iVar6;
    int64_t iVar7;
    uchar *puVar8;
    ulong *puVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar10;
    int64_t iVar11;
    int64_t iVar12;
    ulong unaff_x30;
    uint32_t uStack_b4;
    uint16_t auStack_b0 [2];
    uint uStack_ac;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    ulong uStack_40;
    int64_t iStack_38;
    
    puVar9 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_38 = *(iVar11 + 0x5e0);
    puVar8 = &uStack_40 + 4;
    iVar11 = *(arg1 + 0x18);
    uStack_40 = 0;
    uVar5 = regmap_bulk_read(*(arg1 + 8),*(iVar11 + 8),puVar8,4);
    if ((uVar5 == 0) && (uVar5 = regmap_read(*(arg1 + 8),*(iVar11 + 8),&uStack_40), puVar8 = puVar9, -1 < uVar5)) {
        if (uStack_40 < uStack_40._4_1_) {
            puVar8 = &uStack_40 + 4;
            uVar5 = regmap_bulk_read(*(arg1 + 8),*(iVar11 + 8),puVar8,4);
            if (uVar5 != 0) goto code_r0x08001eb0;
        }
        uVar10 = 0;
        *arg2 = CONCAT13(uStack_40._7_1_,CONCAT12(uStack_40._6_1_,CONCAT11(uStack_40._5_1_,uStack_40._4_1_)));
    }
    else {
code_r0x08001eb0:
        uVar10 = uVar5;
        _dev_err(*(arg1 + 0x20),"RTC read rtc data register failed\n");
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_38) {
        return uVar10;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18 = sym.rtc_us_val_show;
    pcStack_98 = sym.rtc_us_val_show;
    iVar11 = sp_el0;
    iStack_a8 = *(iVar11 + 0x5e0);
    uStack_ac = 0;
    auStack_b0[0] = 0;
    uStack_b4 = 0;
    iVar11 = *(*(iVar7 + 0x60) + 0x98);
    iVar12 = *(iVar11 + 0x18);
    puStack_a0 = &stack0xffffffffffffffd0;
    iVar6 = regmap_bulk_read(*(iVar11 + 8),*(iVar12 + 8),&uStack_ac,4);
    if ((iVar6 == 0) && (iVar6 = regmap_read(*(iVar11 + 8),*(iVar12 + 8),&uStack_b4), -1 < iVar6)) {
        uVar1 = uStack_ac;
        if (uStack_b4 < (uStack_ac & 0xff)) {
            iVar6 = regmap_bulk_read(*(iVar11 + 8),*(iVar12 + 8),&uStack_ac,4);
            if (iVar6 != 0) goto code_r0x08002040;
            uVar1 = uStack_ac;
        }
        uVar2 = uStack_ac._1_1_;
        uVar3 = uStack_ac._2_1_;
        uVar4 = uStack_ac._3_1_;
        iVar6 = regmap_bulk_read(*(iVar11 + 8),*(iVar12 + 0x1c),auStack_b0,2);
        if (iVar6 == 0) {
            uVar10 = (auStack_b0[0] * 0xf3e58) / 0x3ff;
            iVar6 = scnprintf(puVar8,0x1000,"%llu\n",
                              CONCAT13(uVar4,CONCAT12(uVar3,CONCAT11(uVar2,uVar1))) * 1000000 +
                              (uVar10 + (auStack_b0[0] * 0xf3e58 - uVar10 >> 1) >> 9));
            goto code_r0x08001fe0;
        }
    }
code_r0x08002040:
    _dev_err(iVar7,"RTC read data register failed\n");
code_r0x08001fe0:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_a8) {
        return iVar6;
    }
    iVar11 = __stack_chk_fail();
    *extraout_x18_00 = sym.pm8xxx_rtc_suspend;
    if (((*(iVar11 + 0x10c) & 1) != 0) && (*(iVar11 + 0x148) != 0)) {
        irq_set_irq_wake(*(*(iVar11 + 0x98) + 0x14),1);
    }
    return 0;
}


// ===== sym.rtc_us_val_show @ 0x08001ecc (size 400) =====

int64_t sym.rtc_us_val_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uchar uVar1;
    uchar uVar2;
    uchar uVar3;
    uchar uVar4;
    int iVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar7;
    int64_t iVar8;
    ulong unaff_x30;
    uint32_t uStack_74;
    uint16_t auStack_70 [2];
    uint uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    uStack_6c = 0;
    auStack_70[0] = 0;
    uStack_74 = 0;
    iVar7 = *(*(arg1 + 0x60) + 0x98);
    iVar8 = *(iVar7 + 0x18);
    iVar5 = regmap_bulk_read(*(iVar7 + 8),*(iVar8 + 8),&uStack_6c,4);
    if ((iVar5 == 0) && (iVar5 = regmap_read(*(iVar7 + 8),*(iVar8 + 8),&uStack_74), -1 < iVar5)) {
        uVar1 = uStack_6c;
        if (uStack_74 < (uStack_6c & 0xff)) {
            iVar5 = regmap_bulk_read(*(iVar7 + 8),*(iVar8 + 8),&uStack_6c,4);
            if (iVar5 != 0) goto code_r0x08002040;
            uVar1 = uStack_6c;
        }
        uVar2 = uStack_6c._1_1_;
        uVar3 = uStack_6c._2_1_;
        uVar4 = uStack_6c._3_1_;
        iVar5 = regmap_bulk_read(*(iVar7 + 8),*(iVar8 + 0x1c),auStack_70,2);
        if (iVar5 == 0) {
            uVar6 = (auStack_70[0] * 0xf3e58) / 0x3ff;
            iVar5 = scnprintf(arg2,0x1000,"%llu\n",
                              CONCAT13(uVar4,CONCAT12(uVar3,CONCAT11(uVar2,uVar1))) * 1000000 +
                              (uVar6 + (auStack_70[0] * 0xf3e58 - uVar6 >> 1) >> 9));
            goto code_r0x08001fe0;
        }
    }
code_r0x08002040:
    _dev_err(arg1,"RTC read data register failed\n");
code_r0x08001fe0:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_68) {
        return iVar5;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18 = sym.pm8xxx_rtc_suspend;
    if (((*(iVar7 + 0x10c) & 1) != 0) && (*(iVar7 + 0x148) != 0)) {
        irq_set_irq_wake(*(*(iVar7 + 0x98) + 0x14),1);
    }
    return 0;
}


// ===== sym.pm8xxx_rtc_suspend @ 0x0800205c (size 68) =====

ulong sym.pm8xxx_rtc_suspend(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((*(arg1 + 0x10c) & 1) != 0) && (*(arg1 + 0x148) != 0)) {
        irq_set_irq_wake(*(*(arg1 + 0x98) + 0x14),1);
    }
    return 0;
}


// ===== sym.pm8xxx_rtc_resume @ 0x080020a0 (size 68) =====

ulong sym.pm8xxx_rtc_resume(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((*(arg1 + 0x10c) & 1) != 0) && (*(arg1 + 0x148) != 0)) {
        irq_set_irq_wake(*(*(arg1 + 0x98) + 0x14),0);
    }
    return 0;
}


// ===== sym.pm8xxx_rtc_freeze @ 0x080020e4 (size 52) =====

ulong sym.pm8xxx_rtc_freeze(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    devm_free_irq(*(*(arg1 + 0x98) + 0x20),*(*(arg1 + 0x98) + 0x14));
    return 0;
}


// ===== sym.pm8xxx_rtc_restore @ 0x08002118 (size 240) =====

uchar * sym.pm8xxx_rtc_restore(int64_t arg1)

{
    code *pcVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    uchar *puVar4;
    uint *puVar5;
    ulong unaff_x30;
    uchar auVar6 [16];
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iVar3 = *(arg1 + 0x98);
    uVar2 = devm_request_any_context_irq
                      (*(iVar3 + 0x20),*(iVar3 + 0x14),
                       sym.pm8xxx_alarm_trigger.62d8a4ffdef8f24a576b76bde8665f7a.cfi_jt,1,"pm8xxx_rtc_alarm",iVar3);
    if (uVar2 < 0) {
        puVar4 = uVar2;
        _dev_err(*(iVar3 + 0x20),"Request IRQ failed (%d)\n",puVar4);
    }
    else {
        puVar5 = *(iVar3 + 0x18);
        uStack_3c = 0;
        uVar2 = regmap_read(*(iVar3 + 8),*puVar5,&uStack_3c);
        puVar4 = uVar2;
        if (uVar2 == 0) {
            if ((uStack_3c >> 7 & 1) == 0) {
                uStack_3c = uStack_3c | 0x80;
                uVar2 = regmap_write(*(iVar3 + 8),*puVar5);
                puVar4 = uVar2;
                if (uVar2 != 0) goto code_r0x080021b4;
            }
            puVar4 = NULL;
        }
    }
code_r0x080021b4:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_38) {
        auVar6 = __stack_chk_fail();
        puVar4 = auVar6._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar4 != NULL) {
            switch(*puVar4) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar4,auVar6._8_8_,0);
                break;
            default:
                return puVar4;
            }
        }
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5502,0x8002260);
        (*pcVar1)();
    }
    return puVar4;
}


// ===== sym.__cfi_check_fail @ 0x08002208 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800224c

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
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002260);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08002264 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.pm8xxx_rtc_probe.62d8a4ffdef8f24a576b76bde8665f7a.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08002298 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.pm8xxx_rtc_probe.62d8a4ffdef8f24a576b76bde8665f7a.cfi_jt);
    return;
}

