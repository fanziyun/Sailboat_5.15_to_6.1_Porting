// decompiled from repeater-i2c-eusb2 by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 280) =====

//WARNING: Switch with 1 destination removed at 0x080018bc

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2795f870d8daa47d) {
        if (arg1 == -0x1604c64a8725f30a) {
            pcVar2 = sym.eusb2_repeater_powerup.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt;
code_r0x080010cc:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x0800187c;
        }
        if (arg1 == 0x176ac9d9535a0da) {
            pcVar2 = sym.eusb2_repeater_init.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) goto code_r0x0800187c;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else if (arg1 == 0x2795f870d8daa47d) {
        pcVar2 = sym.eusb2_repeater_reset.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) {
            if (arg1 != 0x7ea68a074636b5b8) goto code_r0x0800187c;
            pcVar2 = sym.eusb2_repeater_i2c_remove.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt;
            goto code_r0x080010cc;
        }
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x0800187c:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80018d0);
    (*pcVar1)();
}


// ===== sym.eusb2_repeater_init.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt @ 0x08001120 (size 8) =====

ulong sym.eusb2_repeater_init.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt(ulong *param_1)

{
    uchar *puVar1;
    uint8_t uVar2;
    uchar uVar3;
    uchar uVar4;
    int iVar5;
    char cVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar7;
    int64_t iVar8;
    ulong unaff_x30;
    uchar auVar9 [12];
    uint uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_58 = *(iVar8 + 0x5e0);
    if (*param_1[0xb] == 1) {
        uStack_5c = 0;
        iVar5 = regmap_read(param_1[10],0x13,&uStack_5c);
        if (-1 < iVar5) {
            cVar6 = uStack_5c;
            goto code_r0x08001704;
        }
        _dev_err(param_1[-1],"Failed to read reg:0x%02x ret=%d\n",0x13,iVar5);
    }
    else if (*param_1[0xb] == 0) {
        uStack_5c = 0;
        iVar5 = regmap_read(param_1[10],0xb0,&uStack_5c);
        if (-1 < iVar5) {
            cVar6 = uStack_5c;
            if (uStack_5c == '\x03') {
                *(param_1 + 2) = *(param_1 + 2) | 1;
            }
            goto code_r0x08001704;
        }
        _dev_err(param_1[-1],"Failed to read reg:0x%02x ret=%d\n",0xb0,iVar5);
    }
    else {
        _dev_err(*param_1,"Invalid repeater\n");
    }
    cVar6 = '\0';
code_r0x08001704:
    _dev_info(*param_1,"eUSB2 repeater version = 0x%x ur->flags:0x%x\n",cVar6,*(param_1 + 2));
    uVar2 = *(param_1 + 0x12);
    if (uVar2 != 0) {
        uVar7 = 0;
        iVar8 = param_1[0x11];
        do {
            puVar1 = iVar8 + uVar7 * 4;
            uVar3 = puVar1[4];
            uVar4 = *puVar1;
            iVar5 = regmap_write(param_1[10],uVar3,uVar4);
            if (iVar5 < 0) {
                _dev_err(param_1[-1],"failed to write 0x%02x to reg: 0x%02x ret=%d\n",uVar4,uVar3,iVar5);
            }
            uVar7 = uVar7 + 2;
        } while (uVar7 < uVar2);
    }
    _dev_info(*param_1,"eUSB2 repeater init\n");
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_58) {
        return 0;
    }
    auVar9 = __stack_chk_fail();
    *extraout_x18 = sym.eusb2_repeater_reset;
    gpiod_set_value_cansleep(*(auVar9._0_8_ + 0x80),auVar9._8_4_ & 1);
    return 0;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001128 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    i2c_del_driver(obj.eusb2_i2c_repeater_driver);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001130 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    i2c_register_driver(obj.__this_module,obj.eusb2_i2c_repeater_driver);
    return;
}


// ===== sym.eusb2_repeater_powerup.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt @ 0x08001138 (size 8) =====

void sym.eusb2_repeater_powerup.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.eusb2_repeater_power(param_1 + -8,1);
    return;
}


// ===== sym.eusb2_repeater_powerdown.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt @ 0x08001140 (size 8) =====

void sym.eusb2_repeater_powerdown.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.eusb2_repeater_power(param_1 + -8,0);
    return;
}


// ===== sym.eusb2_repeater_reset.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt @ 0x08001148 (size 8) =====

ulong sym.eusb2_repeater_reset.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt(int64_t param_1,uint32_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    gpiod_set_value_cansleep(*(param_1 + 0x80),param_2 & 1);
    return 0;
}


// ===== sym.eusb2_repeater_i2c_remove.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt @ 0x08001150 (size 8) =====

ulong sym.eusb2_repeater_i2c_remove.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0xb8);
    if (arg1 != 0) {
        usb_remove_repeater_dev(arg1 + 8);
        sym.eusb2_repeater_power(arg1,0);
    }
    return 0;
}


// ===== sym.eusb2_repeater_i2c_probe.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt @ 0x08001158 (size 8) =====

uint64_t sym.eusb2_repeater_i2c_probe.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    uint32_t uVar2;
    int64_t *piVar3;
    int64_t iVar4;
    uint64_t uVar5;
    char *pcVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = param_1 + 0x20;
    piVar3 = devm_kmalloc(iVar1,0xa0,0xdc0);
    if (piVar3 == NULL) {
code_r0x08001344:
        uVar5 = 0xfffffff4;
        goto code_r0x08001348;
    }
    *piVar3 = iVar1;
    iVar4 = of_match_node(obj.eusb2_repeater_id_table,*(param_1 + 0x310));
    piVar3[0xc] = *(iVar4 + 0xc0);
    iVar4 = __devm_regmap_init_i2c(param_1,obj.eusb2_i2c_regmap,0,0);
    piVar3[0xb] = iVar4;
    if (iVar4 == 0) {
        pcVar6 = "failed to allocate register map\n";
code_r0x0800136c:
        _dev_err(iVar1,pcVar6);
        uVar5 = 0xffffffea;
    }
    else {
        devm_regmap_qti_debugfs_register(iVar1,iVar4);
        *(param_1 + 0xb8) = piVar3;
        uVar2 = of_property_read_variable_u16_array(*(param_1 + 0x310),0x80005c8,piVar3 + 0xd,1,0);
        if (uVar2 < 0) {
            pcVar6 = "failed to get reg base address:%d\n";
code_r0x08001388:
            uVar5 = uVar2;
            _dev_err(iVar1,pcVar6,uVar5);
            goto code_r0x08001348;
        }
        uVar5 = devm_regulator_get(iVar1,"vdd3");
        piVar3[0xf] = uVar5;
        if (0xfffffffffffff000 < uVar5) {
            _dev_err(iVar1,"unable to get vdd3 supply\n");
            uVar5 = *(piVar3 + 0xf);
            goto code_r0x08001348;
        }
        uVar5 = devm_regulator_get(iVar1,"vdd18");
        piVar3[0xe] = uVar5;
        if (0xfffffffffffff000 < uVar5) {
            _dev_err(iVar1,"unable to get vdd18 supply\n");
            uVar5 = *(piVar3 + 0xe);
            goto code_r0x08001348;
        }
        uVar5 = devm_gpiod_get_optional(iVar1,"reset",7);
        piVar3[0x11] = uVar5;
        if (0xfffffffffffff000 < uVar5) goto code_r0x08001348;
        uVar2 = of_property_count_elems_of_size(*(param_1 + 0x310),"qcom,param-override-seq",4);
        if (0 < uVar2) {
            if ((uVar2 & 1) != 0) {
                pcVar6 = "invalid param_override_seq_len\n";
                goto code_r0x0800136c;
            }
            *(piVar3 + 0x13) = uVar2;
            iVar4 = devm_kmalloc(iVar1,(uVar2 & 0xff) << 2,0xdc0);
            piVar3[0x12] = iVar4;
            if (iVar4 == 0) goto code_r0x08001344;
            uVar2 = of_property_read_variable_u32_array
                              (*(param_1 + 0x310),"qcom,param-override-seq",iVar4,piVar3[0x13],0);
            if (uVar2 < 0) {
                pcVar6 = "qcom,param-override-seq read failed %d\n";
                goto code_r0x08001388;
            }
        }
        piVar3[1] = iVar1;
        piVar3[6] = sym.eusb2_repeater_reset.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt;
        piVar3[7] = sym.eusb2_repeater_init.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt;
        piVar3[9] = sym.eusb2_repeater_powerup.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt;
        piVar3[10] = sym.eusb2_repeater_powerdown.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt;
        uVar5 = usb_add_repeater_dev(piVar3 + 1);
        uVar5 = uVar5 & 0xffffffff;
    }
code_r0x08001348:
    return uVar5 & 0xffffffff;
}


// ===== sym.eusb2_repeater_i2c_remove @ 0x08001160 (size 72) =====

ulong sym.eusb2_repeater_i2c_remove(int64_t arg1)

{
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0xb8);
    if (arg1_00 != 0) {
        usb_remove_repeater_dev(arg1_00 + 8);
        sym.eusb2_repeater_power(arg1_00,0);
    }
    return 0;
}


// ===== sym.eusb2_repeater_i2c_probe @ 0x080011a8 (size 572) =====

uint64_t sym.eusb2_repeater_i2c_probe(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    int64_t *piVar3;
    int64_t iVar4;
    uint64_t uVar5;
    char *pcVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg1 + 0x20;
    piVar3 = devm_kmalloc(iVar1,0xa0,0xdc0);
    if (piVar3 == NULL) {
code_r0x08001344:
        uVar5 = 0xfffffff4;
        goto code_r0x08001348;
    }
    *piVar3 = iVar1;
    iVar4 = of_match_node(obj.eusb2_repeater_id_table,*(arg1 + 0x310));
    piVar3[0xc] = *(iVar4 + 0xc0);
    iVar4 = __devm_regmap_init_i2c(arg1,obj.eusb2_i2c_regmap,0,0);
    piVar3[0xb] = iVar4;
    if (iVar4 == 0) {
        pcVar6 = "failed to allocate register map\n";
code_r0x0800136c:
        _dev_err(iVar1,pcVar6);
        uVar5 = 0xffffffea;
    }
    else {
        devm_regmap_qti_debugfs_register(iVar1,iVar4);
        *(arg1 + 0xb8) = piVar3;
        uVar2 = of_property_read_variable_u16_array(*(arg1 + 0x310),0x80005c8,piVar3 + 0xd,1,0);
        if (uVar2 < 0) {
            pcVar6 = "failed to get reg base address:%d\n";
code_r0x08001388:
            uVar5 = uVar2;
            _dev_err(iVar1,pcVar6,uVar5);
            goto code_r0x08001348;
        }
        uVar5 = devm_regulator_get(iVar1,"vdd3");
        piVar3[0xf] = uVar5;
        if (0xfffffffffffff000 < uVar5) {
            _dev_err(iVar1,"unable to get vdd3 supply\n");
            uVar5 = *(piVar3 + 0xf);
            goto code_r0x08001348;
        }
        uVar5 = devm_regulator_get(iVar1,"vdd18");
        piVar3[0xe] = uVar5;
        if (0xfffffffffffff000 < uVar5) {
            _dev_err(iVar1,"unable to get vdd18 supply\n");
            uVar5 = *(piVar3 + 0xe);
            goto code_r0x08001348;
        }
        uVar5 = devm_gpiod_get_optional(iVar1,"reset",7);
        piVar3[0x11] = uVar5;
        if (0xfffffffffffff000 < uVar5) goto code_r0x08001348;
        uVar2 = of_property_count_elems_of_size(*(arg1 + 0x310),"qcom,param-override-seq",4);
        if (0 < uVar2) {
            if ((uVar2 & 1) != 0) {
                pcVar6 = "invalid param_override_seq_len\n";
                goto code_r0x0800136c;
            }
            *(piVar3 + 0x13) = uVar2;
            iVar4 = devm_kmalloc(iVar1,(uVar2 & 0xff) << 2,0xdc0);
            piVar3[0x12] = iVar4;
            if (iVar4 == 0) goto code_r0x08001344;
            uVar2 = of_property_read_variable_u32_array
                              (*(arg1 + 0x310),"qcom,param-override-seq",iVar4,piVar3[0x13],0);
            if (uVar2 < 0) {
                pcVar6 = "qcom,param-override-seq read failed %d\n";
                goto code_r0x08001388;
            }
        }
        piVar3[1] = iVar1;
        piVar3[6] = sym.eusb2_repeater_reset.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt;
        piVar3[7] = sym.eusb2_repeater_init.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt;
        piVar3[9] = sym.eusb2_repeater_powerup.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt;
        piVar3[10] = sym.eusb2_repeater_powerdown.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt;
        uVar5 = usb_add_repeater_dev(piVar3 + 1);
        uVar5 = uVar5 & 0xffffffff;
    }
code_r0x08001348:
    return uVar5 & 0xffffffff;
}


// ===== sym.eusb2_repeater_power @ 0x080013e4 (size 604) =====

int sym.eusb2_repeater_power(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int iVar2;
    ulong uVar3;
    char *pcVar4;
    uchar uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x80) == (arg2 & 1)) {
        return 0;
    }
    if ((arg2 & 1U) == 0) {
        iVar2 = regulator_disable(*(arg1 + 0x78));
        if (iVar2 != 0) {
            uVar3 = *(arg1 + 8);
            pcVar4 = "Unable to disable vdd3:%d\n";
code_r0x08001638:
            _dev_err(uVar3,pcVar4,iVar2);
        }
        iVar2 = regulator_set_voltage(*(arg1 + 0x78),0,3300000);
        if (iVar2 != 0) {
            uVar3 = *(arg1 + 8);
            pcVar4 = "Unable to set (0) voltage for vdd3:%d\n";
code_r0x08001620:
            _dev_err(uVar3,pcVar4,iVar2);
        }
        iVar2 = regulator_set_load(*(arg1 + 0x78),0);
        if (iVar2 < 0) {
            _dev_err(*(arg1 + 8),"Unable to set (0) HPM of vdd3\n");
        }
code_r0x080014c8:
        iVar2 = regulator_disable(*(arg1 + 0x70));
        if (iVar2 != 0) {
            uVar3 = *(arg1 + 8);
            pcVar4 = "Unable to disable vdd18:%d\n";
code_r0x080015f0:
            _dev_err(uVar3,pcVar4,iVar2);
        }
        iVar2 = regulator_set_voltage(*(arg1 + 0x70),0,1800000);
        if (iVar2 != 0) {
            uVar3 = *(arg1 + 8);
            pcVar4 = "Unable to set (0) voltage for vdd18:%d\n";
code_r0x080015c4:
            _dev_err(uVar3,pcVar4,iVar2);
        }
        iVar2 = regulator_set_load(*(arg1 + 0x70),0);
        if (iVar2 < 0) {
            _dev_err(*(arg1 + 8),"Unable to set LPM of vdd18\n");
            cVar1 = *(arg1 + 0x80);
        }
        else {
            cVar1 = *(arg1 + 0x80);
        }
        if (cVar1 == '\0') {
            return -0x16;
        }
    }
    else {
        iVar2 = regulator_set_load(*(arg1 + 0x70),32000);
        if (-1 < iVar2) {
            iVar2 = regulator_set_voltage(*(arg1 + 0x70),1800000,1800000);
            if (iVar2 == 0) {
                iVar2 = regulator_enable(*(arg1 + 0x70));
                if (iVar2 == 0) {
                    iVar2 = regulator_set_load(*(arg1 + 0x78),0xdac);
                    if (-1 < iVar2) {
                        iVar2 = regulator_set_voltage(*(arg1 + 0x78),0x2eebb8,3300000);
                        if (iVar2 == 0) {
                            iVar2 = regulator_enable(*(arg1 + 0x78));
                            if (iVar2 == 0) {
                                iVar2 = 0;
                                uVar5 = 1;
                                goto code_r0x0800150c;
                            }
                            uVar3 = *(arg1 + 8);
                            pcVar4 = "Unable to enable vdd3:%d\n";
                            goto code_r0x08001638;
                        }
                        uVar3 = *(arg1 + 8);
                        pcVar4 = "Unable to set voltage for vdd3:%d\n";
                        goto code_r0x08001620;
                    }
                    _dev_err(*(arg1 + 8),"Unable to set HPM of vdd3:%d\n",iVar2);
                    goto code_r0x080014c8;
                }
                uVar3 = *(arg1 + 8);
                pcVar4 = "Unable to enable vdd18:%d\n";
                goto code_r0x080015f0;
            }
            uVar3 = *(arg1 + 8);
            pcVar4 = "Unable to set voltage for vdd18:%d\n";
            goto code_r0x080015c4;
        }
        _dev_err(*(arg1 + 8),"Unable to set HPM of vdd12:%d\n",iVar2);
    }
    uVar5 = 0;
code_r0x0800150c:
    *(arg1 + 0x80) = uVar5;
    return iVar2;
}


// ===== sym.eusb2_repeater_init @ 0x08001640 (size 432) =====

ulong sym.eusb2_repeater_init(int64_t arg1)

{
    uchar *puVar1;
    uint8_t uVar2;
    uchar uVar3;
    uchar uVar4;
    int iVar5;
    char cVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar7;
    int64_t iVar8;
    ulong unaff_x30;
    uchar auVar9 [12];
    uint uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_58 = *(iVar8 + 0x5e0);
    if (**(arg1 + 0x58) == 1) {
        uStack_5c = 0;
        iVar5 = regmap_read(*(arg1 + 0x50),0x13,&uStack_5c);
        if (-1 < iVar5) {
            cVar6 = uStack_5c;
            goto code_r0x08001704;
        }
        _dev_err(*(arg1 + -8),"Failed to read reg:0x%02x ret=%d\n",0x13,iVar5);
    }
    else if (**(arg1 + 0x58) == 0) {
        uStack_5c = 0;
        iVar5 = regmap_read(*(arg1 + 0x50),0xb0,&uStack_5c);
        if (-1 < iVar5) {
            cVar6 = uStack_5c;
            if (uStack_5c == '\x03') {
                *(arg1 + 0x10) = *(arg1 + 0x10) | 1;
            }
            goto code_r0x08001704;
        }
        _dev_err(*(arg1 + -8),"Failed to read reg:0x%02x ret=%d\n",0xb0,iVar5);
    }
    else {
        _dev_err(*arg1,"Invalid repeater\n");
    }
    cVar6 = '\0';
code_r0x08001704:
    _dev_info(*arg1,"eUSB2 repeater version = 0x%x ur->flags:0x%x\n",cVar6,*(arg1 + 0x10));
    uVar2 = *(arg1 + 0x90);
    if (uVar2 != 0) {
        uVar7 = 0;
        iVar8 = *(arg1 + 0x88);
        do {
            puVar1 = iVar8 + uVar7 * 4;
            uVar3 = puVar1[4];
            uVar4 = *puVar1;
            iVar5 = regmap_write(*(arg1 + 0x50),uVar3,uVar4);
            if (iVar5 < 0) {
                _dev_err(*(arg1 + -8),"failed to write 0x%02x to reg: 0x%02x ret=%d\n",uVar4,uVar3,iVar5);
            }
            uVar7 = uVar7 + 2;
        } while (uVar7 < uVar2);
    }
    _dev_info(*arg1,"eUSB2 repeater init\n");
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_58) {
        return 0;
    }
    auVar9 = __stack_chk_fail();
    *extraout_x18 = sym.eusb2_repeater_reset;
    gpiod_set_value_cansleep(*(auVar9._0_8_ + 0x80),auVar9._8_4_ & 1);
    return 0;
}


// ===== sym.eusb2_repeater_reset @ 0x080017f0 (size 48) =====

ulong sym.eusb2_repeater_reset(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    gpiod_set_value_cansleep(*(arg1 + 0x80),arg2 & 1);
    return 0;
}


// ===== sym.eusb2_repeater_powerup @ 0x08001820 (size 44) =====

void sym.eusb2_repeater_powerup(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.eusb2_repeater_power(arg1 + -8,1);
    return;
}


// ===== sym.eusb2_repeater_powerdown @ 0x0800184c (size 44) =====

void sym.eusb2_repeater_powerdown(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.eusb2_repeater_power(arg1 + -8,0);
    return;
}


// ===== sym.__cfi_check_fail @ 0x08001878 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080018bc

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
    //switch table (4 cases) at 0x8000158
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80018d0);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080018d4 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    i2c_register_driver(obj.__this_module,obj.eusb2_i2c_repeater_driver);
    return;
}


// ===== sym.cleanup_module @ 0x08001908 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    i2c_del_driver(obj.eusb2_i2c_repeater_driver);
    return;
}

