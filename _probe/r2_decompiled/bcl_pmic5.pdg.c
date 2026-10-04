// decompiled from bcl_pmic5 by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 544) =====

//WARNING: Switch with 1 destination removed at 0x080029d4

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 < -0x3557318fb8d07b71) {
            if (arg1 == -0x79e1ae77be533008) {
                pcVar2 = sym.bcl_set_ibat.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            }
            else {
                if (arg1 != -0x57be845bca9148ef) {
                    if (arg1 != -0x3987c0e26ee29729) goto code_r0x08002994;
                    pcVar2 = sym.bcl_handle_irq.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                    goto code_r0x08001210;
                }
                pcVar2 = sym.bcl_freeze.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            }
        }
        else {
            if (arg1 != -0x3557318fb8d07b71) {
                if (arg1 == -0x3260172810ef9e4f) {
                    pcVar2 = sym.bcl_get_vbat_trip.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                }
                else {
                    if (arg1 != -0xc1bd59c70f4d7ab) goto code_r0x08002994;
                    pcVar2 = sym.bcl_tz_change_mode.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                }
                goto code_r0x08001210;
            }
            pcVar2 = sym.bcl_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
code_r0x080011d4:
        if (1 < (pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d)) {
code_r0x08002994:
            *in_x18 = unaff_x30;
            if (arg3 != 0) {
                if (4 < *arg3) {
                    return;
                }
                __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
            }
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5502,0x80029e8);
            (*pcVar1)();
        }
    }
    else {
        if (arg1 < 0x6505e4e93dbea6af) {
            if (arg1 == 0x2b3a43e29242445) {
                pcVar2 = sym.init_module.cfi_jt;
            }
            else {
                if (arg1 == 0x13365def634cc965) {
                    pcVar2 = sym.bcl_read_ibat.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                    goto code_r0x080011d4;
                }
                if (arg1 != 0x616e2603735ce0bf) goto code_r0x08002994;
                pcVar2 = sym.bcl_read_vbat_tz.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            }
        }
        else if (arg1 == 0x6505e4e93dbea6af) {
            pcVar2 = sym.bcl_get_trend.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else if (arg1 == 0x7843ebedbcb5411d) {
            pcVar2 = sym.bcl_read_vbat_type.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else {
            if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08002994;
            pcVar2 = sym.cleanup_module.cfi_jt;
        }
code_r0x08001210:
        if (pcVar1 != pcVar2) goto code_r0x08002994;
    }
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001228 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.bcl_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001230 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.bcl_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.bcl_tz_change_mode.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001238 (size 8) =====

ulong sym.bcl_tz_change_mode.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int param_2)

{
    int64_t iVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x98);
    if (iVar1 != 0) {
        piVar2 = *(iVar1 + 0x458);
        *(iVar1 + 0x424) = 0x8000000100000000;
        *(iVar1 + 0x418) = 0xfffbd1b0;
        *(iVar1 + 0x42c) = 0x7fffffff;
        for (; iVar1 + 0x458 != piVar2; piVar2 = *piVar2) {
            *(piVar2 + -0x8c) = 0;
            if (param_2 == 0) {
                piVar2[-0xf] = 0xffffffffffffffff;
                *(piVar2[-0x13] + 0x3c0) = 0;
                thermal_cdev_update(piVar2[-0x13]);
            }
        }
    }
    return 0;
}


// ===== sym.bcl_handle_irq.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001240 (size 8) =====

ulong sym.bcl_handle_irq.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(uint param_1,int64_t param_2)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    uint uStack_44;
    uint uStack_40;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_3c = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    if (*(param_2 + 0x98) != 0) {
        iVar4 = *(param_2 + 0xa0);
        if (iVar4 == 0) {
            _printk(0x8000383,"bcl_pmic5","bcl_read_register");
        }
        else {
            iVar3 = regmap_read(*(iVar4 + 8),*(iVar4 + 0x10) + 8,&uStack_3c);
            if (iVar3 < 0) {
                _printk(0x80005ce,"bcl_pmic5","bcl_read_register",*(iVar4 + 0x10) + 8,iVar3);
            }
        }
        if (*(iVar4 + 0xc0) != 0) {
            sym.bcl_read_ibat(iVar4 + 0x28,&uStack_40);
        }
        if (*(iVar4 + 0x210) != 0) {
            sym.bcl_read_vbat_tz(*(iVar4 + 0x210),&uStack_44);
        }
        if ((*(param_2 + 4) & uStack_3c) != 0) {
            if ((iVar4 != 0) && (*(iVar4 + 0x18) != 0)) {
                if (8 < *(param_2 + 0x4c)) goto code_r0x0800240c;
                iVar1 = sp_el0;
                ipc_log_string(*(iVar4 + 0x18),
                               "[%s]: %s: Irq:%d triggered for bcl type:%s. status:%u ibat=%d vbat=%d\n",iVar1 + 0x7a8
                               ,"bcl_handle_irq",param_1,"bcl-ibat-lvl0" + *(param_2 + 0x4c) * 0x19,uStack_3c,
                               uStack_40,uStack_44);
            }
            thermal_zone_device_update(*(param_2 + 0x98),2);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return 1;
    }
    __stack_chk_fail();
code_r0x0800240c:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8002410);
    (*pcVar2)();
}


// ===== sym.bcl_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001248 (size 8) =====

uint64_t sym.bcl_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    uint16_t uVar1;
    code *pcVar2;
    int iVar3;
    uint32_t uVar4;
    int64_t *arg4;
    ulong uVar5;
    int64_t iVar6;
    uint *puVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    int64_t iVar10;
    char *pcVar11;
    uchar uVar12;
    uint uVar13;
    ulong *in_x18;
    ulong unaff_x30;
    uint32_t uStack_84;
    uint64_t uStack_80;
    uint64_t uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_48 = *(iVar10 + 0x5e0);
    iVar10 = param_1 + 0x10;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_70 = 0;
    if (_segment.ehdr < 2) {
        arg4 = devm_kmalloc(iVar10,0x568,0xdc0);
        if (1 < _segment.ehdr) goto code_r0x08001960;
        *(reloc.bcl_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt + _segment.ehdr * 8) = arg4;
        if (arg4 == NULL) {
            uVar9 = 0xfffffff4;
        }
        else {
            uVar5 = *(param_1 + 0x70);
            *arg4 = iVar10;
            iVar6 = dev_get_regmap(uVar5,0);
            arg4[1] = iVar6;
            if (iVar6 == 0) {
                pcVar11 = "Couldn\'t get parent\'s regmap\n";
                goto code_r0x0800179c;
            }
            uVar5 = *(param_1 + 0x300);
            _segment.ehdr = _segment.ehdr + 1;
            puVar7 = __of_get_address(uVar5,0,0xffffffff,0,0);
            if (puVar7 == NULL) {
                _dev_err(iVar10,"No fg_bcl registers found\n");
                uVar9 = 0xffffffed;
            }
            else {
                *(arg4 + 2) = *puVar7 >> 0x18 | *puVar7 >> 8 & 0xff00;
                iVar6 = of_find_property(uVar5,"qcom,ibat-use-qg-adc-5a",0);
                obj.ibat_use_qg_adc = iVar6 != 0;
                iVar6 = of_find_property(uVar5,"qcom,pmic7-threshold",0);
                obj.no_bit_shift = iVar6 != 0;
                iVar6 = of_find_property(uVar5,"qcom,ibat-ccm-hw-support",0);
                uVar5 = *(param_1 + 0x300);
                uStack_80 = 0;
                uStack_78 = 0;
                *(arg4 + 4) = iVar6 != 0;
                uStack_84 = 0;
                iVar3 = of_property_read_string(uVar5,"nvmem-cell-names",&uStack_78);
                if (iVar3 == 0) {
                    uVar8 = nvmem_cell_get(iVar10,uStack_78);
                    if (uVar8 < 0xfffffffffffff001) {
                        uVar9 = nvmem_cell_read(uVar8,&uStack_80);
                        nvmem_cell_put(uVar8);
                        if ((uVar9 != 0) && (uVar9 < 0xfffffffffffff001)) {
                            if (uStack_80 - 5 < 0xfffffffffffffffc) {
                                _dev_err(iVar10,"nvmem cell length out of range %d\n");
                                kfree(uVar9);
                            }
                            else {
                                uVar8 = uStack_80;
                                if (3 < uStack_80) {
                                    uVar8 = 4;
                                }
                                memcpy(&uStack_84,uVar9,uVar8);
                                kfree(uVar9);
                                if (uStack_84 < 3) {
                                    uVar13 = *(obj.bcl_ibat_ext_ranges + uStack_84 * 4);
                                    goto code_r0x08001494;
                                }
                                _dev_err(iVar10,"invalid BCL ibat scaling factor %d\n");
                            }
                            uVar9 = 0xffffffea;
                            goto code_r0x08001918;
                        }
                        _dev_err(iVar10,"failed to read nvmem cell %s\n",uStack_78);
                        iVar3 = uVar9;
                    }
                    else {
                        _dev_err(iVar10,"failed to get nvmem cell %s\n",uStack_78);
                        iVar3 = uVar8;
                        uVar9 = uVar8;
                    }
                    if (iVar3 != 0) goto code_r0x08001918;
                }
                else {
                    uVar13 = 10;
code_r0x08001494:
                    *(arg4 + 0x24) = uVar13;
                }
                uStack_78 = uStack_78 & 0xffffffff00000000;
                uVar4 = regmap_read(arg4[1],*(arg4 + 2) + 1,&uStack_78);
                if (-1 < uVar4) {
                    *(arg4 + 0x12) = uStack_78;
                    iVar3 = regmap_read(arg4[1],arg4[2],&uStack_78);
                    if (iVar3 < 0) {
                        _printk(0x80005ce,"bcl_pmic5","bcl_read_register",arg4[2],iVar3);
                    }
                    else {
                        *(arg4 + 0x13) = uStack_78;
                    }
                    if (*(arg4 + 0x12) < 4) {
                        uVar12 = 0;
                        *(arg4 + 0x14) = 0;
                    }
                    else {
                        uVar4 = regmap_read(arg4[1],*(arg4 + 2) + 0xe,&uStack_78);
                        uVar9 = uStack_78;
                        if (uVar4 < 0) {
                            iVar3 = 0xe;
                            goto code_r0x0800182c;
                        }
                        uStack_78 = uStack_78 & 0xffffffff00000000;
                        *(arg4 + 0x14) = uVar9;
                        iVar3 = regmap_read(arg4[1],*(arg4 + 2) + 0xf,&uStack_78);
                        if (iVar3 < 0) {
                            _printk(0x80005ce,"bcl_pmic5","bcl_read_register",*(arg4 + 2) + 0xf,iVar3);
                        }
                        uVar12 = uStack_78;
                    }
                    *(arg4 + 0x15) = uVar12;
                    uStack_78 = uStack_78 & 0xffffffff00000000;
                    __mutex_init(arg4 + 0x32,"&vbat->state_trans_lock",obj.bcl_vbat_init.__key);
                    arg4[0x43] = arg4;
                    *(arg4 + 0x2f) = 0;
                    *(arg4 + 0x38) = 0;
                    arg4[0x42] = 0;
                    if (*(arg4 + 0x12) < 4) {
                        iVar3 = regmap_read(arg4[1],*(arg4 + 2) + 0x72,&uStack_78);
                        if (iVar3 < 0) {
                            _printk(0x80005ce,"bcl_pmic5","bcl_read_register",*(arg4 + 2) + 0x72);
                        }
                        else if ((iVar3 == 0) && (uStack_78 != 0)) goto code_r0x080015a0;
                    }
                    else if ((*(arg4 + 0x14) & 1) != 0) {
code_r0x080015a0:
                        uVar9 = thermal_zone_device_register
                                          ("vbat",3,0,arg4 + 0x2f,obj.vbat_tzd_ops,"step_wise",0,0);
                        arg4[0x42] = uVar9;
                        if (uVar9 < 0xfffffffffffff001) {
                            iVar3 = thermal_zone_device_enable();
                            if (iVar3 == 0) goto code_r0x080015f0;
                            thermal_zone_device_unregister(arg4[0x42]);
                        }
                        arg4[0x42] = 0;
                    }
code_r0x080015f0:
                    __mutex_init(arg4 + 8,"&ibat->state_trans_lock",obj.bcl_vbat_init.__key);
                    *(arg4 + 0x74) = 0;
                    arg4[0x19] = arg4;
                    *(arg4 + 0xe) = 0;
                    *(arg4 + 5) = 0;
                    arg4[0xf] = sym.bcl_read_ibat.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                    arg4[0x11] = sym.bcl_set_ibat.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                    uVar9 = thermal_zone_of_sensor_register(iVar10,0);
                    arg4[0x18] = uVar9;
                    if (uVar9 < 0xfffffffffffff001) {
                        thermal_zone_device_update(uVar9,5);
                    }
                    else {
                        arg4[0x18] = 0;
                    }
                    __mutex_init(arg4 + 0x1d,"&ibat->state_trans_lock",obj.bcl_vbat_init.__key);
                    arg4[0x2e] = arg4;
                    *(arg4 + 0x23) = 0;
                    *(arg4 + 0x11c) = 1;
                    *(arg4 + 0x1a) = 0;
                    arg4[0x24] = sym.bcl_read_ibat.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                    arg4[0x26] = sym.bcl_set_ibat.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                    uVar9 = thermal_zone_of_sensor_register(iVar10,1,arg4 + 0x1a,arg4 + 0x24);
                    arg4[0x2d] = uVar9;
                    if (uVar9 < 0xfffffffffffff001) {
                        thermal_zone_device_update(uVar9,5);
                    }
                    else {
                        arg4[0x2d] = 0;
                    }
                    sym.bcl_lvl_init(param_1,5,1,arg4);
                    sym.bcl_lvl_init(param_1,6,2,arg4);
                    sym.bcl_lvl_init(param_1,7,4,arg4);
                    uVar1 = *(arg4 + 2);
                    iVar3 = regmap_write(arg4[1],uVar1 + 0x46,0x80);
                    if (iVar3 < 0) {
                        _printk(0x80002cd,"bcl_pmic5","bcl_write_register",uVar1 + 0x46,0x80,iVar3);
                    }
                    iVar10 = arg4[2];
                    iVar3 = _segment.ehdr - 1;
                    *(param_1 + 0xa8) = arg4;
                    snprintf(&uStack_70,0x28,"bcl_0x%04x_%d",iVar10,iVar3);
                    iVar10 = ipc_log_context_create(2,&uStack_70,0);
                    uVar9 = 0;
                    arg4[3] = iVar10;
                    if (iVar10 == 0) {
                        _printk(0x80003f1,"bcl_pmic5","bcl_probe","bcl_probe",&uStack_70);
                        uVar9 = 0;
                    }
                    goto code_r0x08001924;
                }
                iVar3 = 1;
code_r0x0800182c:
                uVar9 = uVar4;
                _printk(0x80005ce,"bcl_pmic5","bcl_read_register",iVar3 + *(arg4 + 2),uVar9);
            }
code_r0x08001918:
            _segment.ehdr = _segment.ehdr - 1;
        }
    }
    else {
        pcVar11 = "Max bcl peripheral supported already.\n";
code_r0x0800179c:
        _dev_err(iVar10,pcVar11);
        uVar9 = 0xffffffea;
    }
code_r0x08001924:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_48) {
        return uVar9 & 0xffffffff;
    }
    __stack_chk_fail();
code_r0x08001960:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8001964);
    (*pcVar2)();
}


// ===== sym.bcl_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001250 (size 8) =====

ulong sym.bcl_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0xa8);
    param_1 = param_1 + 0x10;
    if (*(iVar1 + 0xc0) != 0) {
        thermal_zone_of_sensor_unregister(param_1);
    }
    if (*(iVar1 + 0x168) != 0) {
        thermal_zone_of_sensor_unregister(param_1);
    }
    if (*(iVar1 + 0x210) != 0) {
        thermal_zone_of_sensor_unregister(param_1);
    }
    if (*(iVar1 + 0x2b8) != 0) {
        thermal_zone_of_sensor_unregister(param_1);
    }
    if (*(iVar1 + 0x360) != 0) {
        thermal_zone_of_sensor_unregister(param_1);
    }
    if (*(iVar1 + 0x408) != 0) {
        thermal_zone_of_sensor_unregister(param_1);
    }
    if (*(iVar1 + 0x4b0) != 0) {
        thermal_zone_of_sensor_unregister(param_1);
    }
    if (*(iVar1 + 0x558) != 0) {
        thermal_zone_of_sensor_unregister(param_1);
    }
    return 0;
}


// ===== sym.bcl_get_vbat_trip.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001258 (size 8) =====

uint64_t sym.bcl_get_vbat_trip.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int param_2,int *param_3)

{
    int iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int *piVar5;
    int64_t iVar6;
    ulong in_x6;
    ulong in_x7;
    int iVar7;
    int64_t iVar8;
    int iVar9;
    uint32_t uVar10;
    int iVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong unaff_x21;
    uint64_t uVar12;
    ulong unaff_x22;
    ulong unaff_x30;
    uchar auVar13 [16];
    uchar **ppuVar14;
    code *pcVar15;
    int iStack_8c;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    ulong uStack_70;
    ulong uStack_68;
    uint64_t uStack_60;
    int *piStack_58;
    int iStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_48 = *(iVar8 + 0x5e0);
    iVar8 = *(param_1 + 0x3f0);
    iStack_4c = 0;
    *param_3 = 0;
    if (param_2 == 0) {
        unaff_x22 = 0x48;
        unaff_x21 = 1;
        iVar8 = *(iVar8 + 0xa0);
        if (iVar8 == 0) goto code_r0x08001c6c;
code_r0x08001c0c:
        uVar2 = regmap_read(*(iVar8 + 8),unaff_x22 + *(iVar8 + 0x10),&iStack_4c);
        uStack_60 = uVar2;
        if (uVar2 < 0) {
            _printk(0x80005ce,"bcl_pmic5","bcl_read_register",unaff_x22 + *(iVar8 + 0x10),uStack_60);
        }
        else if (uVar2 == 0) {
            if (unaff_x21 == 0) {
                iVar7 = iStack_4c * 0x19 + 0x8ca;
                if (0xe0f < iVar7) {
                    iVar7 = 0xe10;
                }
            }
            else {
                iVar9 = 2000;
                if (obj.no_bit_shift != 0x0) {
                    iVar9 = 1000;
                }
                iVar7 = 0;
                if (iVar9 != 0) {
                    iVar7 = (iStack_4c * 0xc2a3) / iVar9;
                }
            }
            uStack_60 = 0;
            *param_3 = iVar7;
        }
    }
    else if (param_2 == 2) {
        unaff_x22 = 0x4a;
        iVar8 = *(iVar8 + 0xa0);
joined_r0x08001c68:
        unaff_x21 = 0;
        if (iVar8 != 0) goto code_r0x08001c0c;
code_r0x08001c6c:
        _printk(0x8000383,"bcl_pmic5","bcl_read_register");
        uStack_60 = 0xffffffea;
    }
    else {
        if (param_2 == 1) {
            unaff_x22 = 0x49;
            iVar8 = *(iVar8 + 0xa0);
            goto joined_r0x08001c68;
        }
        uStack_60 = 0xffffffed;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_48) {
        return uStack_60;
    }
    auVar13 = __stack_chk_fail();
    piVar5 = auVar13._8_8_;
    iVar3 = auVar13._0_8_;
    *extraout_x18 = sym.bcl_read_ibat;
    pcStack_78 = sym.bcl_read_ibat;
    ppuVar14 = &puStack_80;
    iVar8 = sp_el0;
    iStack_88 = *(iVar8 + 0x5e0);
    *piVar5 = 0;
    iVar8 = *(iVar3 + 0xa0);
    iStack_8c = 0;
    puStack_80 = &stack0xffffffffffffffc0;
    uStack_70 = unaff_x22;
    uStack_68 = unaff_x21;
    piStack_58 = param_3;
    if (iVar8 == 0) {
        iVar7 = 0x80003a7;
        _printk(0x8000383,"bcl_pmic5");
        uVar12 = 0xffffffea;
    }
    else {
        iVar7 = &iStack_8c;
        uVar4 = regmap_read(*(iVar8 + 8),*(iVar8 + 0x10) + 0x86);
        uVar12 = uVar4 & 0xffffffff;
        if (uVar4 < 0) {
            iVar7 = 0x80003a7;
            _printk(0x80005ce,"bcl_pmic5","bcl_read_register",*(iVar8 + 0x10) + 0x86,uVar12);
        }
        else if (uVar4 == 0) {
            *piVar5 = iStack_8c;
            if (iStack_8c == 0) {
                *piVar5 = *(iVar3 + 0x10);
                iVar8 = *(iVar3 + 0xa0);
            }
            else {
                iVar8 = *(iVar3 + 0xa0);
                if (*(iVar8 + 0x20) == '\0') {
                    iVar9 = 0x16e39;
                    if (*(iVar8 + 0x12) < 4) {
                        iVar9 = 0x1312f;
                    }
                }
                else {
                    iVar9 = 0x3d09;
                }
                iVar11 = 10000;
                if (obj.ibat_use_qg_adc != 0x0) {
                    iVar11 = 2000;
                }
                iVar1 = 0;
                if (iVar11 != 0) {
                    iVar1 = (iVar9 * iStack_8c * *(iVar8 + 0x24)) / iVar11;
                }
                *piVar5 = iVar1;
                *(iVar3 + 0x10) = iVar1;
                iVar8 = *(iVar3 + 0xa0);
            }
            if ((iVar8 != 0) && (*(iVar8 + 0x18) != 0)) {
                iVar6 = sp_el0;
                iVar6 = iVar6 + 0x7a8;
                ipc_log_string(*(iVar8 + 0x18),"[%s]: %s: ibat:%d mA ADC:0x%02x\n",iVar6,"bcl_read_ibat",
                               *(iVar3 + 0x10));
                iVar7 = iVar6;
            }
            uVar12 = 0;
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_88) {
        return uVar12;
    }
    piVar5 = __stack_chk_fail();
    *extraout_x18_00 = sym.bcl_set_ibat;
    pcVar15 = sym.bcl_set_ibat;
    mutex_lock(piVar5 + 6);
    if (*(piVar5 + 2) != iVar7) {
        if ((*piVar5 != 0) && (piVar5[0x12] != '\0')) {
            disable_irq_nosync();
            *(piVar5 + 0x12) = 0;
        }
        if (iVar7 == 0x7fffffff) {
            uVar2 = 0;
            piVar5[2] = 0x7fffffff;
            piVar5[3] = 0;
            goto code_r0x08002074;
        }
        iVar8 = *(piVar5 + 0x28);
        if (*(iVar8 + 0x20) == '\0') {
            iVar9 = *(iVar8 + 0x24);
            if (*(iVar8 + 0x12) < 4) {
                uVar2 = 0x312f;
            }
            else {
                uVar2 = 0x6e39;
            }
            uVar2 = uVar2 | 0x10000;
        }
        else {
            iVar9 = *(iVar8 + 0x24);
            uVar2 = 0x3d09;
        }
        if (obj.ibat_use_qg_adc == 0x0) {
            if (obj.no_bit_shift == 0x0) {
                iVar11 = 20000;
            }
            else {
                iVar11 = 10000;
            }
            uVar12 = iVar7 * iVar11;
        }
        else {
            uVar12 = iVar7 * 4000;
        }
        uVar10 = 0;
        if (iVar9 * uVar2 != 0) {
            uVar10 = uVar12 / (iVar9 * uVar2);
        }
        if (piVar5[0x13] == 0) {
            iVar9 = 0x4b;
        }
        else {
            if (piVar5[0x13] != 1) goto code_r0x08001f00;
            iVar9 = 0x4c;
            if ((3 < *(iVar8 + 0x12)) && (iVar9 = 0x4c, (*(iVar8 + 0x14) & 4) != 0)) {
                iVar9 = 0x4d;
            }
            if ((*(iVar8 + 0x20) != '\0') && (uVar10 = (iVar7 + -800) / 100, 0xe000000 < uVar10 * 0x1000000)) {
                _printk(0x800050e,"bcl_pmic5","convert_ibat_to_ccm_val",iVar7);
                iVar8 = *(piVar5 + 0x28);
                uVar10 = 0xe;
            }
        }
        if (iVar8 == 0) {
            _printk(0x8000383,"bcl_pmic5","bcl_write_register");
            uVar2 = 0xffffffea;
            goto code_r0x08002074;
        }
        iVar9 = *(iVar8 + 0x10) + iVar9;
        uVar2 = regmap_write(*(iVar8 + 8),iVar9,uVar10 & 0xff);
        if (uVar2 < 0) {
            _printk(0x80002cd,"bcl_pmic5","bcl_write_register",iVar9,uVar10 & 0xff,uVar2,in_x6,in_x7,ppuVar14,
                    pcVar15);
            goto code_r0x08002074;
        }
        if (uVar2 != 0) goto code_r0x08002074;
        *(piVar5 + 2) = iVar7;
        if ((*piVar5 != 0) && (piVar5[0x12] == '\0')) {
            enable_irq();
            uVar2 = 0;
            *(piVar5 + 0x12) = 1;
            goto code_r0x08002074;
        }
    }
code_r0x08001f00:
    uVar2 = 0;
code_r0x08002074:
    mutex_unlock(piVar5 + 6);
    return uVar2;
}


// ===== sym.bcl_read_vbat_tz.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001260 (size 8) =====

int sym.bcl_read_vbat_tz.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int *param_2)

{
    int64_t iVar1;
    int iVar2;
    char *pcVar3;
    ulong *in_x18;
    int64_t iVar4;
    int64_t iVar5;
    ulong unaff_x30;
    int iStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    iVar4 = *(param_1 + 0x3f0);
    *param_2 = 0;
    iStack_3c = 0;
    iVar5 = *(iVar4 + 0xa0);
    if (iVar5 == 0) {
        pcVar3 = "bcl_read_register";
        _printk(0x8000383,"bcl_pmic5");
        iVar2 = -0x16;
    }
    else {
        pcVar3 = &iStack_3c;
        iVar2 = regmap_read(*(iVar5 + 8),*(iVar5 + 0x10) + 0x76);
        if (iVar2 < 0) {
            pcVar3 = "bcl_read_register";
            _printk(0x80005ce,"bcl_pmic5","bcl_read_register",*(iVar5 + 0x10) + 0x76,iVar2);
        }
        else if (iVar2 == 0) {
            *param_2 = iStack_3c;
            if (iStack_3c == 0x7f) {
                *param_2 = *(iVar4 + 0x10);
                iVar5 = *(iVar4 + 0xa0);
            }
            else {
                iVar2 = (iStack_3c * 0xc2a3) / 1000;
                *param_2 = iVar2;
                *(iVar4 + 0x10) = iVar2;
                iVar5 = *(iVar4 + 0xa0);
            }
            if ((iVar5 != 0) && (*(iVar5 + 0x18) != 0)) {
                iVar1 = sp_el0;
                pcVar3 = iVar1 + 0x7a8;
                ipc_log_string(*(iVar5 + 0x18),"[%s]: %s: vbat:%d mv ADC:0x%02x\n",pcVar3,"bcl_read_vbat_tz",
                               *(iVar4 + 0x10));
            }
            iVar2 = 0;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return iVar2;
    }
    __stack_chk_fail();
    *pcVar3 = 1;
    return 0;
}


// ===== sym.bcl_read_vbat_type.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001268 (size 8) =====

ulong sym.bcl_read_vbat_type.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,ulong param_2,uint *param_3)

{
    *param_3 = 1;
    return 0;
}


// ===== sym.bcl_freeze.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001270 (size 8) =====

ulong sym.bcl_freeze.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    int64_t iVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = 0;
    iVar4 = *(param_1 + 0x98);
    do {
        iVar1 = iVar4 + iVar3;
        mutex_lock(iVar1 + 0x40);
        iVar2 = *(iVar1 + 0x28);
        if ((0 < iVar2) && (*(iVar1 + 0x70) != '\0')) {
            disable_irq(iVar2);
            iVar2 = *(iVar1 + 0x28);
            *(iVar1 + 0x70) = 0;
        }
        devm_free_irq(param_1,iVar2,iVar1 + 0x28);
        *(iVar1 + 0x71) = 1;
        mutex_unlock(iVar1 + 0x40);
        iVar3 = iVar3 + 0xa8;
    } while (iVar3 != 0x540);
    return 0;
}


// ===== sym.bcl_restore.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001278 (size 8) =====

ulong sym.bcl_restore.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t iVar2;
    int iVar3;
    int iVar4;
    ulong *in_x18;
    char *pcVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = 0;
    iVar6 = *(param_1 + 0x98);
    pcVar5 = "bcl-ibat-lvl0";
    do {
        iVar1 = iVar6 + iVar7;
        mutex_lock(iVar1 + 0x40);
        if ((0 < *(iVar1 + 0x28)) && (*(iVar1 + 0x70) == '\0')) {
            iVar2 = iVar6 + iVar7;
            iVar3 = devm_request_threaded_irq
                              (param_1,*(iVar1 + 0x28),0,sym.bcl_handle_irq.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,
                               0x2001,pcVar5,iVar2 + 0x28);
            if (iVar3 != 0) {
                _dev_err(param_1,"Error requesting trip irq. err:%d\n",iVar3);
                mutex_unlock(iVar2 + 0x40);
                return 0xffffffea;
            }
            disable_irq_nosync(*(iVar1 + 0x28));
            *(iVar2 + 0x71) = 0;
        }
        mutex_unlock(iVar1 + 0x40);
        if (*(iVar1 + 0xc0) != 0) {
            thermal_zone_device_update(*(iVar1 + 0xc0),5);
        }
        iVar7 = iVar7 + 0xa8;
        pcVar5 = pcVar5 + 0x19;
    } while (iVar7 != 0x540);
    if (iVar6 == 0) {
        _printk(0x8000383,"bcl_pmic5","bcl_write_register");
    }
    else {
        iVar3 = *(iVar6 + 0x10) + 0x46;
        iVar4 = regmap_write(*(iVar6 + 8),iVar3,0x80);
        if (iVar4 < 0) {
            _printk(0x80002cd,"bcl_pmic5","bcl_write_register",iVar3,0x80,iVar4);
        }
    }
    return 0;
}


// ===== sym.bcl_read_ibat.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001280 (size 8) =====

int sym.bcl_read_ibat.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int *param_2)

{
    int iVar1;
    int iVar2;
    int *piVar3;
    int iVar4;
    int64_t iVar5;
    ulong in_x6;
    ulong in_x7;
    uint32_t uVar6;
    int iVar7;
    uint64_t uVar8;
    uint32_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar10;
    ulong unaff_x30;
    uchar *puVar11;
    code *pcVar12;
    int iStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    puVar11 = &stack0xffffffffffffffd0;
    iVar10 = sp_el0;
    iStack_38 = *(iVar10 + 0x5e0);
    *param_2 = 0;
    iVar10 = *(param_1 + 0xa0);
    iStack_3c = 0;
    if (iVar10 == 0) {
        iVar4 = 0x80003a7;
        _printk(0x8000383,"bcl_pmic5");
        iVar2 = -0x16;
    }
    else {
        iVar4 = &iStack_3c;
        iVar2 = regmap_read(*(iVar10 + 8),*(iVar10 + 0x10) + 0x86);
        if (iVar2 < 0) {
            iVar4 = 0x80003a7;
            _printk(0x80005ce,"bcl_pmic5","bcl_read_register",*(iVar10 + 0x10) + 0x86,iVar2);
        }
        else if (iVar2 == 0) {
            *param_2 = iStack_3c;
            if (iStack_3c == 0) {
                *param_2 = *(param_1 + 0x10);
                iVar10 = *(param_1 + 0xa0);
            }
            else {
                iVar10 = *(param_1 + 0xa0);
                if (*(iVar10 + 0x20) == '\0') {
                    iVar2 = 0x16e39;
                    if (*(iVar10 + 0x12) < 4) {
                        iVar2 = 0x1312f;
                    }
                }
                else {
                    iVar2 = 0x3d09;
                }
                iVar7 = 10000;
                if (obj.ibat_use_qg_adc != 0x0) {
                    iVar7 = 2000;
                }
                iVar1 = 0;
                if (iVar7 != 0) {
                    iVar1 = (iVar2 * iStack_3c * *(iVar10 + 0x24)) / iVar7;
                }
                *param_2 = iVar1;
                *(param_1 + 0x10) = iVar1;
                iVar10 = *(param_1 + 0xa0);
            }
            if ((iVar10 != 0) && (*(iVar10 + 0x18) != 0)) {
                iVar5 = sp_el0;
                iVar5 = iVar5 + 0x7a8;
                ipc_log_string(*(iVar10 + 0x18),"[%s]: %s: ibat:%d mA ADC:0x%02x\n",iVar5,"bcl_read_ibat",
                               *(param_1 + 0x10));
                iVar4 = iVar5;
            }
            iVar2 = 0;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_38) {
        return iVar2;
    }
    piVar3 = __stack_chk_fail();
    *extraout_x18 = sym.bcl_set_ibat;
    pcVar12 = sym.bcl_set_ibat;
    mutex_lock(piVar3 + 6);
    if (*(piVar3 + 2) != iVar4) {
        if ((*piVar3 != 0) && (piVar3[0x12] != '\0')) {
            disable_irq_nosync();
            *(piVar3 + 0x12) = 0;
        }
        if (iVar4 == 0x7fffffff) {
            iVar2 = 0;
            piVar3[2] = 0x7fffffff;
            piVar3[3] = 0;
            goto code_r0x08002074;
        }
        iVar10 = *(piVar3 + 0x28);
        if (*(iVar10 + 0x20) == '\0') {
            iVar2 = *(iVar10 + 0x24);
            if (*(iVar10 + 0x12) < 4) {
                uVar9 = 0x312f;
            }
            else {
                uVar9 = 0x6e39;
            }
            uVar9 = uVar9 | 0x10000;
        }
        else {
            iVar2 = *(iVar10 + 0x24);
            uVar9 = 0x3d09;
        }
        if (obj.ibat_use_qg_adc == 0x0) {
            if (obj.no_bit_shift == 0x0) {
                iVar7 = 20000;
            }
            else {
                iVar7 = 10000;
            }
            uVar8 = iVar4 * iVar7;
        }
        else {
            uVar8 = iVar4 * 4000;
        }
        uVar6 = 0;
        if (iVar2 * uVar9 != 0) {
            uVar6 = uVar8 / (iVar2 * uVar9);
        }
        if (piVar3[0x13] == 0) {
            iVar7 = 0x4b;
        }
        else {
            if (piVar3[0x13] != 1) goto code_r0x08001f00;
            iVar7 = 0x4c;
            if ((3 < *(iVar10 + 0x12)) && (iVar7 = 0x4c, (*(iVar10 + 0x14) & 4) != 0)) {
                iVar7 = 0x4d;
            }
            if ((*(iVar10 + 0x20) != '\0') && (uVar6 = (iVar4 + -800) / 100, 0xe000000 < uVar6 * 0x1000000)) {
                _printk(0x800050e,"bcl_pmic5","convert_ibat_to_ccm_val",iVar4);
                iVar10 = *(piVar3 + 0x28);
                uVar6 = 0xe;
            }
        }
        if (iVar10 == 0) {
            _printk(0x8000383,"bcl_pmic5","bcl_write_register");
            iVar2 = -0x16;
            goto code_r0x08002074;
        }
        iVar7 = *(iVar10 + 0x10) + iVar7;
        iVar2 = regmap_write(*(iVar10 + 8),iVar7,uVar6 & 0xff);
        if (iVar2 < 0) {
            _printk(0x80002cd,"bcl_pmic5","bcl_write_register",iVar7,uVar6 & 0xff,iVar2,in_x6,in_x7,puVar11,
                    pcVar12);
            goto code_r0x08002074;
        }
        if (iVar2 != 0) goto code_r0x08002074;
        *(piVar3 + 2) = iVar4;
        if ((*piVar3 != 0) && (piVar3[0x12] == '\0')) {
            enable_irq();
            iVar2 = 0;
            *(piVar3 + 0x12) = 1;
            goto code_r0x08002074;
        }
    }
code_r0x08001f00:
    iVar2 = 0;
code_r0x08002074:
    mutex_unlock(piVar3 + 6);
    return iVar2;
}


// ===== sym.bcl_read_lbat.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001288 (size 8) =====

int sym.bcl_read_lbat.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,uint32_t *param_2)

{
    int iVar1;
    int *piVar2;
    int iVar3;
    int64_t iVar4;
    uint32_t uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar6;
    ulong unaff_x30;
    uint32_t uStack_44;
    uchar auStack_40 [4];
    uchar auStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    iVar6 = *(param_1 + 0xa0);
    uStack_44 = 0;
    *param_2 = 0;
    if (iVar6 == 0) {
        iVar3 = 0x80003a7;
        _printk(0x8000383,"bcl_pmic5");
        iVar1 = -0x16;
    }
    else {
        iVar3 = &uStack_44;
        iVar1 = regmap_read(*(iVar6 + 8),*(iVar6 + 0x10) + 8);
        if (iVar1 < 0) {
            iVar3 = 0x80003a7;
            _printk(0x80005ce,"bcl_pmic5","bcl_read_register",*(iVar6 + 0x10) + 8,iVar1);
        }
        else if (iVar1 == 0) {
            iVar1 = *(param_1 + 0x4c);
            if (iVar1 == 7) {
                uVar5 = uStack_44 & 4;
            }
            else if (iVar1 == 6) {
                uVar5 = uStack_44 & 2;
            }
            else {
                if (iVar1 != 5) {
                    iVar3 = 0x800032f;
                    _printk(0x80003b9,"bcl_pmic5");
                    iVar1 = -0x13;
                    goto code_r0x08002508;
                }
                uVar5 = uStack_44 & 1;
            }
            *param_2 = uVar5;
            *(param_1 + 0x10) = uVar5;
            if (*(iVar6 + 0xc0) != 0) {
                sym.bcl_read_ibat(iVar6 + 0x28,auStack_3c);
            }
            if (*(iVar6 + 0x210) != 0) {
                sym.bcl_read_vbat_tz(*(iVar6 + 0x210),auStack_40);
            }
            if (*(iVar6 + 0x18) != 0) {
                iVar4 = sp_el0;
                iVar4 = iVar4 + 0x7a8;
                ipc_log_string(*(iVar6 + 0x18),"[%s]: %s: LVLbat:%d val:%d\n",iVar4,"bcl_read_lbat",
                               *(param_1 + 0x4c),*(param_1 + 0x10));
                iVar3 = iVar4;
            }
            iVar1 = 0;
        }
    }
code_r0x08002508:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return iVar1;
    }
    piVar2 = __stack_chk_fail();
    *extraout_x18 = sym.bcl_set_lbat;
    if (*(piVar2 + 0x49) == '\0') {
        mutex_lock(piVar2 + 6);
        if (iVar3 == 0x7fffffff) {
            if ((*piVar2 != 0) && (piVar2[0x12] != '\0')) {
                disable_irq_nosync();
                irq_set_irq_wake(*piVar2,0);
                *(piVar2 + 0x12) = 0;
            }
        }
        else if ((*piVar2 != 0) && (piVar2[0x12] == '\0')) {
            enable_irq();
            irq_set_irq_wake(*piVar2,1);
            *(piVar2 + 0x12) = 1;
        }
        mutex_unlock(piVar2 + 6);
    }
    return 0;
}


// ===== sym.bcl_set_ibat.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001290 (size 8) =====

int sym.bcl_set_ibat.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int *param_1,ulong param_2,int param_3)

{
    int iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    ulong *in_x18;
    int iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(param_1 + 6);
    if (*(param_1 + 2) != param_3) {
        if ((*param_1 != 0) && (param_1[0x12] != '\0')) {
            disable_irq_nosync();
            *(param_1 + 0x12) = 0;
        }
        if (param_3 == 0x7fffffff) {
            iVar1 = 0;
            param_1[2] = 0x7fffffff;
            param_1[3] = 0;
            goto code_r0x08002074;
        }
        iVar2 = *(param_1 + 0x28);
        if (*(iVar2 + 0x20) == '\0') {
            iVar1 = *(iVar2 + 0x24);
            if (*(iVar2 + 0x12) < 4) {
                uVar5 = 0x312f;
            }
            else {
                uVar5 = 0x6e39;
            }
            uVar5 = uVar5 | 0x10000;
        }
        else {
            iVar1 = *(iVar2 + 0x24);
            uVar5 = 0x3d09;
        }
        if (obj.ibat_use_qg_adc == 0x0) {
            if (obj.no_bit_shift == 0x0) {
                iVar6 = 20000;
            }
            else {
                iVar6 = 10000;
            }
            uVar4 = param_3 * iVar6;
        }
        else {
            uVar4 = param_3 * 4000;
        }
        uVar3 = 0;
        if (iVar1 * uVar5 != 0) {
            uVar3 = uVar4 / (iVar1 * uVar5);
        }
        if (param_1[0x13] == 0) {
            iVar6 = 0x4b;
        }
        else {
            if (param_1[0x13] != 1) goto code_r0x08001f00;
            iVar6 = 0x4c;
            if ((3 < *(iVar2 + 0x12)) && (iVar6 = 0x4c, (*(iVar2 + 0x14) & 4) != 0)) {
                iVar6 = 0x4d;
            }
            if ((*(iVar2 + 0x20) != '\0') && (uVar3 = (param_3 + -800) / 100, 0xe000000 < uVar3 * 0x1000000)) {
                _printk(0x800050e,"bcl_pmic5","convert_ibat_to_ccm_val",param_3);
                iVar2 = *(param_1 + 0x28);
                uVar3 = 0xe;
            }
        }
        if (iVar2 == 0) {
            _printk(0x8000383,"bcl_pmic5","bcl_write_register");
            iVar1 = -0x16;
            goto code_r0x08002074;
        }
        iVar6 = *(iVar2 + 0x10) + iVar6;
        iVar1 = regmap_write(*(iVar2 + 8),iVar6,uVar3 & 0xff);
        if (iVar1 < 0) {
            _printk(0x80002cd,"bcl_pmic5","bcl_write_register",iVar6,uVar3 & 0xff,iVar1);
            goto code_r0x08002074;
        }
        if (iVar1 != 0) goto code_r0x08002074;
        *(param_1 + 2) = param_3;
        if ((*param_1 != 0) && (param_1[0x12] == '\0')) {
            enable_irq();
            iVar1 = 0;
            *(param_1 + 0x12) = 1;
            goto code_r0x08002074;
        }
    }
code_r0x08001f00:
    iVar1 = 0;
code_r0x08002074:
    mutex_unlock(param_1 + 6);
    return iVar1;
}


// ===== sym.bcl_set_lbat.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001298 (size 8) =====

ulong sym.bcl_set_lbat.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int *param_1,ulong param_2,int param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x49) == '\0') {
        mutex_lock(param_1 + 6);
        if (param_3 == 0x7fffffff) {
            if ((*param_1 != 0) && (param_1[0x12] != '\0')) {
                disable_irq_nosync();
                irq_set_irq_wake(*param_1,0);
                *(param_1 + 0x12) = 0;
            }
        }
        else if ((*param_1 != 0) && (param_1[0x12] == '\0')) {
            enable_irq();
            irq_set_irq_wake(*param_1,1);
            *(param_1 + 0x12) = 1;
        }
        mutex_unlock(param_1 + 6);
    }
    return 0;
}


// ===== sym.bcl_get_trend.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080012a0 (size 8) =====

ulong sym.bcl_get_trend.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2,uint *param_3)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(param_1 + 0x18);
    uVar1 = 1;
    if (*(param_1 + 0x10) == 0) {
        uVar1 = 2;
    }
    *param_3 = uVar1;
    mutex_unlock(param_1 + 0x18);
    return 0;
}


// ===== sym.bcl_probe @ 0x080012a8 (size 1724) =====

uint64_t sym.bcl_probe(int64_t arg1)

{
    uint16_t uVar1;
    code *pcVar2;
    int iVar3;
    uint32_t uVar4;
    int64_t *arg4;
    ulong uVar5;
    int64_t iVar6;
    uint *puVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    int64_t iVar10;
    char *pcVar11;
    uchar uVar12;
    uint uVar13;
    ulong *in_x18;
    ulong unaff_x30;
    uint32_t uStack_84;
    uint64_t uStack_80;
    uint64_t uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_48 = *(iVar10 + 0x5e0);
    iVar10 = arg1 + 0x10;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_70 = 0;
    if (_segment.ehdr < 2) {
        arg4 = devm_kmalloc(iVar10,0x568,0xdc0);
        if (1 < _segment.ehdr) goto code_r0x08001960;
        *(reloc.bcl_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt + _segment.ehdr * 8) = arg4;
        if (arg4 == NULL) {
            uVar9 = 0xfffffff4;
        }
        else {
            uVar5 = *(arg1 + 0x70);
            *arg4 = iVar10;
            iVar6 = dev_get_regmap(uVar5,0);
            arg4[1] = iVar6;
            if (iVar6 == 0) {
                pcVar11 = "Couldn\'t get parent\'s regmap\n";
                goto code_r0x0800179c;
            }
            uVar5 = *(arg1 + 0x300);
            _segment.ehdr = _segment.ehdr + 1;
            puVar7 = __of_get_address(uVar5,0,0xffffffff,0,0);
            if (puVar7 == NULL) {
                _dev_err(iVar10,"No fg_bcl registers found\n");
                uVar9 = 0xffffffed;
            }
            else {
                *(arg4 + 2) = *puVar7 >> 0x18 | *puVar7 >> 8 & 0xff00;
                iVar6 = of_find_property(uVar5,"qcom,ibat-use-qg-adc-5a",0);
                obj.ibat_use_qg_adc = iVar6 != 0;
                iVar6 = of_find_property(uVar5,"qcom,pmic7-threshold",0);
                obj.no_bit_shift = iVar6 != 0;
                iVar6 = of_find_property(uVar5,"qcom,ibat-ccm-hw-support",0);
                uVar5 = *(arg1 + 0x300);
                uStack_80 = 0;
                uStack_78 = 0;
                *(arg4 + 4) = iVar6 != 0;
                uStack_84 = 0;
                iVar3 = of_property_read_string(uVar5,"nvmem-cell-names",&uStack_78);
                if (iVar3 == 0) {
                    uVar8 = nvmem_cell_get(iVar10,uStack_78);
                    if (uVar8 < 0xfffffffffffff001) {
                        uVar9 = nvmem_cell_read(uVar8,&uStack_80);
                        nvmem_cell_put(uVar8);
                        if ((uVar9 != 0) && (uVar9 < 0xfffffffffffff001)) {
                            if (uStack_80 - 5 < 0xfffffffffffffffc) {
                                _dev_err(iVar10,"nvmem cell length out of range %d\n");
                                kfree(uVar9);
                            }
                            else {
                                uVar8 = uStack_80;
                                if (3 < uStack_80) {
                                    uVar8 = 4;
                                }
                                memcpy(&uStack_84,uVar9,uVar8);
                                kfree(uVar9);
                                if (uStack_84 < 3) {
                                    uVar13 = *(obj.bcl_ibat_ext_ranges + uStack_84 * 4);
                                    goto code_r0x08001494;
                                }
                                _dev_err(iVar10,"invalid BCL ibat scaling factor %d\n");
                            }
                            uVar9 = 0xffffffea;
                            goto code_r0x08001918;
                        }
                        _dev_err(iVar10,"failed to read nvmem cell %s\n",uStack_78);
                        iVar3 = uVar9;
                    }
                    else {
                        _dev_err(iVar10,"failed to get nvmem cell %s\n",uStack_78);
                        iVar3 = uVar8;
                        uVar9 = uVar8;
                    }
                    if (iVar3 != 0) goto code_r0x08001918;
                }
                else {
                    uVar13 = 10;
code_r0x08001494:
                    *(arg4 + 0x24) = uVar13;
                }
                uStack_78 = uStack_78 & 0xffffffff00000000;
                uVar4 = regmap_read(arg4[1],*(arg4 + 2) + 1,&uStack_78);
                if (-1 < uVar4) {
                    *(arg4 + 0x12) = uStack_78;
                    iVar3 = regmap_read(arg4[1],arg4[2],&uStack_78);
                    if (iVar3 < 0) {
                        _printk(0x80005ce,"bcl_pmic5","bcl_read_register",arg4[2],iVar3);
                    }
                    else {
                        *(arg4 + 0x13) = uStack_78;
                    }
                    if (*(arg4 + 0x12) < 4) {
                        uVar12 = 0;
                        *(arg4 + 0x14) = 0;
                    }
                    else {
                        uVar4 = regmap_read(arg4[1],*(arg4 + 2) + 0xe,&uStack_78);
                        uVar9 = uStack_78;
                        if (uVar4 < 0) {
                            iVar3 = 0xe;
                            goto code_r0x0800182c;
                        }
                        uStack_78 = uStack_78 & 0xffffffff00000000;
                        *(arg4 + 0x14) = uVar9;
                        iVar3 = regmap_read(arg4[1],*(arg4 + 2) + 0xf,&uStack_78);
                        if (iVar3 < 0) {
                            _printk(0x80005ce,"bcl_pmic5","bcl_read_register",*(arg4 + 2) + 0xf,iVar3);
                        }
                        uVar12 = uStack_78;
                    }
                    *(arg4 + 0x15) = uVar12;
                    uStack_78 = uStack_78 & 0xffffffff00000000;
                    __mutex_init(arg4 + 0x32,"&vbat->state_trans_lock",obj.bcl_vbat_init.__key);
                    arg4[0x43] = arg4;
                    *(arg4 + 0x2f) = 0;
                    *(arg4 + 0x38) = 0;
                    arg4[0x42] = 0;
                    if (*(arg4 + 0x12) < 4) {
                        iVar3 = regmap_read(arg4[1],*(arg4 + 2) + 0x72,&uStack_78);
                        if (iVar3 < 0) {
                            _printk(0x80005ce,"bcl_pmic5","bcl_read_register",*(arg4 + 2) + 0x72);
                        }
                        else if ((iVar3 == 0) && (uStack_78 != 0)) goto code_r0x080015a0;
                    }
                    else if ((*(arg4 + 0x14) & 1) != 0) {
code_r0x080015a0:
                        uVar9 = thermal_zone_device_register
                                          ("vbat",3,0,arg4 + 0x2f,obj.vbat_tzd_ops,"step_wise",0,0);
                        arg4[0x42] = uVar9;
                        if (uVar9 < 0xfffffffffffff001) {
                            iVar3 = thermal_zone_device_enable();
                            if (iVar3 == 0) goto code_r0x080015f0;
                            thermal_zone_device_unregister(arg4[0x42]);
                        }
                        arg4[0x42] = 0;
                    }
code_r0x080015f0:
                    __mutex_init(arg4 + 8,"&ibat->state_trans_lock",obj.bcl_vbat_init.__key);
                    *(arg4 + 0x74) = 0;
                    arg4[0x19] = arg4;
                    *(arg4 + 0xe) = 0;
                    *(arg4 + 5) = 0;
                    arg4[0xf] = sym.bcl_read_ibat.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                    arg4[0x11] = sym.bcl_set_ibat.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                    uVar9 = thermal_zone_of_sensor_register(iVar10,0);
                    arg4[0x18] = uVar9;
                    if (uVar9 < 0xfffffffffffff001) {
                        thermal_zone_device_update(uVar9,5);
                    }
                    else {
                        arg4[0x18] = 0;
                    }
                    __mutex_init(arg4 + 0x1d,"&ibat->state_trans_lock",obj.bcl_vbat_init.__key);
                    arg4[0x2e] = arg4;
                    *(arg4 + 0x23) = 0;
                    *(arg4 + 0x11c) = 1;
                    *(arg4 + 0x1a) = 0;
                    arg4[0x24] = sym.bcl_read_ibat.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                    arg4[0x26] = sym.bcl_set_ibat.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                    uVar9 = thermal_zone_of_sensor_register(iVar10,1,arg4 + 0x1a,arg4 + 0x24);
                    arg4[0x2d] = uVar9;
                    if (uVar9 < 0xfffffffffffff001) {
                        thermal_zone_device_update(uVar9,5);
                    }
                    else {
                        arg4[0x2d] = 0;
                    }
                    sym.bcl_lvl_init(arg1,5,1,arg4);
                    sym.bcl_lvl_init(arg1,6,2,arg4);
                    sym.bcl_lvl_init(arg1,7,4,arg4);
                    uVar1 = *(arg4 + 2);
                    iVar3 = regmap_write(arg4[1],uVar1 + 0x46,0x80);
                    if (iVar3 < 0) {
                        _printk(0x80002cd,"bcl_pmic5","bcl_write_register",uVar1 + 0x46,0x80,iVar3);
                    }
                    iVar10 = arg4[2];
                    iVar3 = _segment.ehdr - 1;
                    *(arg1 + 0xa8) = arg4;
                    snprintf(&uStack_70,0x28,"bcl_0x%04x_%d",iVar10,iVar3);
                    iVar10 = ipc_log_context_create(2,&uStack_70,0);
                    uVar9 = 0;
                    arg4[3] = iVar10;
                    if (iVar10 == 0) {
                        _printk(0x80003f1,"bcl_pmic5","bcl_probe","bcl_probe",&uStack_70);
                        uVar9 = 0;
                    }
                    goto code_r0x08001924;
                }
                iVar3 = 1;
code_r0x0800182c:
                uVar9 = uVar4;
                _printk(0x80005ce,"bcl_pmic5","bcl_read_register",iVar3 + *(arg4 + 2),uVar9);
            }
code_r0x08001918:
            _segment.ehdr = _segment.ehdr - 1;
        }
    }
    else {
        pcVar11 = "Max bcl peripheral supported already.\n";
code_r0x0800179c:
        _dev_err(iVar10,pcVar11);
        uVar9 = 0xffffffea;
    }
code_r0x08001924:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_48) {
        return uVar9 & 0xffffffff;
    }
    __stack_chk_fail();
code_r0x08001960:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8001964);
    (*pcVar2)();
}


// ===== sym.bcl_remove @ 0x08001964 (size 180) =====

ulong sym.bcl_remove(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0xa8);
    arg1 = arg1 + 0x10;
    if (*(iVar1 + 0xc0) != 0) {
        thermal_zone_of_sensor_unregister(arg1);
    }
    if (*(iVar1 + 0x168) != 0) {
        thermal_zone_of_sensor_unregister(arg1);
    }
    if (*(iVar1 + 0x210) != 0) {
        thermal_zone_of_sensor_unregister(arg1);
    }
    if (*(iVar1 + 0x2b8) != 0) {
        thermal_zone_of_sensor_unregister(arg1);
    }
    if (*(iVar1 + 0x360) != 0) {
        thermal_zone_of_sensor_unregister(arg1);
    }
    if (*(iVar1 + 0x408) != 0) {
        thermal_zone_of_sensor_unregister(arg1);
    }
    if (*(iVar1 + 0x4b0) != 0) {
        thermal_zone_of_sensor_unregister(arg1);
    }
    if (*(iVar1 + 0x558) != 0) {
        thermal_zone_of_sensor_unregister(arg1);
    }
    return 0;
}


// ===== sym.bcl_read_vbat_tz @ 0x08001a18 (size 360) =====

int sym.bcl_read_vbat_tz(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    char *pcVar3;
    ulong *in_x18;
    int64_t iVar4;
    int64_t iVar5;
    ulong unaff_x30;
    int iStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    iVar4 = *(arg1 + 0x3f0);
    *arg2 = 0;
    iStack_3c = 0;
    iVar5 = *(iVar4 + 0xa0);
    if (iVar5 == 0) {
        pcVar3 = "bcl_read_register";
        _printk(0x8000383,"bcl_pmic5");
        iVar2 = -0x16;
    }
    else {
        pcVar3 = &iStack_3c;
        iVar2 = regmap_read(*(iVar5 + 8),*(iVar5 + 0x10) + 0x76);
        if (iVar2 < 0) {
            pcVar3 = "bcl_read_register";
            _printk(0x80005ce,"bcl_pmic5","bcl_read_register",*(iVar5 + 0x10) + 0x76,iVar2);
        }
        else if (iVar2 == 0) {
            *arg2 = iStack_3c;
            if (iStack_3c == 0x7f) {
                *arg2 = *(iVar4 + 0x10);
                iVar5 = *(iVar4 + 0xa0);
            }
            else {
                iVar2 = (iStack_3c * 0xc2a3) / 1000;
                *arg2 = iVar2;
                *(iVar4 + 0x10) = iVar2;
                iVar5 = *(iVar4 + 0xa0);
            }
            if ((iVar5 != 0) && (*(iVar5 + 0x18) != 0)) {
                iVar1 = sp_el0;
                pcVar3 = iVar1 + 0x7a8;
                ipc_log_string(*(iVar5 + 0x18),"[%s]: %s: vbat:%d mv ADC:0x%02x\n",pcVar3,"bcl_read_vbat_tz",
                               *(iVar4 + 0x10));
            }
            iVar2 = 0;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return iVar2;
    }
    __stack_chk_fail();
    *pcVar3 = 1;
    return 0;
}


// ===== sym.bcl_read_vbat_type @ 0x08001b80 (size 24) =====

ulong sym.bcl_read_vbat_type(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    *arg2 = 1;
    return 0;
}


// ===== sym.bcl_get_vbat_trip @ 0x08001b98 (size 392) =====

uint64_t sym.bcl_get_vbat_trip(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int *piVar5;
    int64_t iVar6;
    ulong in_x6;
    ulong in_x7;
    int iVar7;
    int64_t iVar8;
    int iVar9;
    uint32_t uVar10;
    int iVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong unaff_x21;
    uint64_t uVar12;
    ulong unaff_x22;
    ulong unaff_x30;
    uchar auVar13 [16];
    uchar **ppuVar14;
    code *pcVar15;
    int iStack_8c;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    ulong uStack_70;
    ulong uStack_68;
    uint64_t uStack_60;
    int64_t iStack_58;
    int iStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_48 = *(iVar8 + 0x5e0);
    iVar8 = *(arg1 + 0x3f0);
    iStack_4c = 0;
    *arg3 = 0;
    if (arg2 == 0) {
        unaff_x22 = 0x48;
        unaff_x21 = 1;
        iVar8 = *(iVar8 + 0xa0);
        if (iVar8 == 0) goto code_r0x08001c6c;
code_r0x08001c0c:
        uVar2 = regmap_read(*(iVar8 + 8),unaff_x22 + *(iVar8 + 0x10),&iStack_4c);
        uStack_60 = uVar2;
        if (uVar2 < 0) {
            _printk(0x80005ce,"bcl_pmic5","bcl_read_register",unaff_x22 + *(iVar8 + 0x10),uStack_60);
        }
        else if (uVar2 == 0) {
            if (unaff_x21 == 0) {
                iVar7 = iStack_4c * 0x19 + 0x8ca;
                if (0xe0f < iVar7) {
                    iVar7 = 0xe10;
                }
            }
            else {
                iVar9 = 2000;
                if (obj.no_bit_shift != 0x0) {
                    iVar9 = 1000;
                }
                iVar7 = 0;
                if (iVar9 != 0) {
                    iVar7 = (iStack_4c * 0xc2a3) / iVar9;
                }
            }
            uStack_60 = 0;
            *arg3 = iVar7;
        }
    }
    else if (arg2 == 2) {
        unaff_x22 = 0x4a;
        iVar8 = *(iVar8 + 0xa0);
joined_r0x08001c68:
        unaff_x21 = 0;
        if (iVar8 != 0) goto code_r0x08001c0c;
code_r0x08001c6c:
        _printk(0x8000383,"bcl_pmic5","bcl_read_register");
        uStack_60 = 0xffffffea;
    }
    else {
        if (arg2 == 1) {
            unaff_x22 = 0x49;
            iVar8 = *(iVar8 + 0xa0);
            goto joined_r0x08001c68;
        }
        uStack_60 = 0xffffffed;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_48) {
        return uStack_60;
    }
    auVar13 = __stack_chk_fail();
    piVar5 = auVar13._8_8_;
    iVar3 = auVar13._0_8_;
    *extraout_x18 = sym.bcl_read_ibat;
    pcStack_78 = sym.bcl_read_ibat;
    ppuVar14 = &puStack_80;
    iVar8 = sp_el0;
    iStack_88 = *(iVar8 + 0x5e0);
    *piVar5 = 0;
    iVar8 = *(iVar3 + 0xa0);
    iStack_8c = 0;
    puStack_80 = &stack0xffffffffffffffc0;
    uStack_70 = unaff_x22;
    uStack_68 = unaff_x21;
    iStack_58 = arg3;
    if (iVar8 == 0) {
        iVar7 = 0x80003a7;
        _printk(0x8000383,"bcl_pmic5");
        uVar12 = 0xffffffea;
    }
    else {
        iVar7 = &iStack_8c;
        uVar4 = regmap_read(*(iVar8 + 8),*(iVar8 + 0x10) + 0x86);
        uVar12 = uVar4 & 0xffffffff;
        if (uVar4 < 0) {
            iVar7 = 0x80003a7;
            _printk(0x80005ce,"bcl_pmic5","bcl_read_register",*(iVar8 + 0x10) + 0x86,uVar12);
        }
        else if (uVar4 == 0) {
            *piVar5 = iStack_8c;
            if (iStack_8c == 0) {
                *piVar5 = *(iVar3 + 0x10);
                iVar8 = *(iVar3 + 0xa0);
            }
            else {
                iVar8 = *(iVar3 + 0xa0);
                if (*(iVar8 + 0x20) == '\0') {
                    iVar9 = 0x16e39;
                    if (*(iVar8 + 0x12) < 4) {
                        iVar9 = 0x1312f;
                    }
                }
                else {
                    iVar9 = 0x3d09;
                }
                iVar11 = 10000;
                if (obj.ibat_use_qg_adc != 0x0) {
                    iVar11 = 2000;
                }
                iVar1 = 0;
                if (iVar11 != 0) {
                    iVar1 = (iVar9 * iStack_8c * *(iVar8 + 0x24)) / iVar11;
                }
                *piVar5 = iVar1;
                *(iVar3 + 0x10) = iVar1;
                iVar8 = *(iVar3 + 0xa0);
            }
            if ((iVar8 != 0) && (*(iVar8 + 0x18) != 0)) {
                iVar6 = sp_el0;
                iVar6 = iVar6 + 0x7a8;
                ipc_log_string(*(iVar8 + 0x18),"[%s]: %s: ibat:%d mA ADC:0x%02x\n",iVar6,"bcl_read_ibat",
                               *(iVar3 + 0x10));
                iVar7 = iVar6;
            }
            uVar12 = 0;
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_88) {
        return uVar12;
    }
    piVar5 = __stack_chk_fail();
    *extraout_x18_00 = sym.bcl_set_ibat;
    pcVar15 = sym.bcl_set_ibat;
    mutex_lock(piVar5 + 6);
    if (*(piVar5 + 2) != iVar7) {
        if ((*piVar5 != 0) && (piVar5[0x12] != '\0')) {
            disable_irq_nosync();
            *(piVar5 + 0x12) = 0;
        }
        if (iVar7 == 0x7fffffff) {
            uVar2 = 0;
            piVar5[2] = 0x7fffffff;
            piVar5[3] = 0;
            goto code_r0x08002074;
        }
        iVar8 = *(piVar5 + 0x28);
        if (*(iVar8 + 0x20) == '\0') {
            iVar9 = *(iVar8 + 0x24);
            if (*(iVar8 + 0x12) < 4) {
                uVar2 = 0x312f;
            }
            else {
                uVar2 = 0x6e39;
            }
            uVar2 = uVar2 | 0x10000;
        }
        else {
            iVar9 = *(iVar8 + 0x24);
            uVar2 = 0x3d09;
        }
        if (obj.ibat_use_qg_adc == 0x0) {
            if (obj.no_bit_shift == 0x0) {
                iVar11 = 20000;
            }
            else {
                iVar11 = 10000;
            }
            uVar12 = iVar7 * iVar11;
        }
        else {
            uVar12 = iVar7 * 4000;
        }
        uVar10 = 0;
        if (iVar9 * uVar2 != 0) {
            uVar10 = uVar12 / (iVar9 * uVar2);
        }
        if (piVar5[0x13] == 0) {
            iVar9 = 0x4b;
        }
        else {
            if (piVar5[0x13] != 1) goto code_r0x08001f00;
            iVar9 = 0x4c;
            if ((3 < *(iVar8 + 0x12)) && (iVar9 = 0x4c, (*(iVar8 + 0x14) & 4) != 0)) {
                iVar9 = 0x4d;
            }
            if ((*(iVar8 + 0x20) != '\0') && (uVar10 = (iVar7 + -800) / 100, 0xe000000 < uVar10 * 0x1000000)) {
                _printk(0x800050e,"bcl_pmic5","convert_ibat_to_ccm_val",iVar7);
                iVar8 = *(piVar5 + 0x28);
                uVar10 = 0xe;
            }
        }
        if (iVar8 == 0) {
            _printk(0x8000383,"bcl_pmic5","bcl_write_register");
            uVar2 = 0xffffffea;
            goto code_r0x08002074;
        }
        iVar9 = *(iVar8 + 0x10) + iVar9;
        uVar2 = regmap_write(*(iVar8 + 8),iVar9,uVar10 & 0xff);
        if (uVar2 < 0) {
            _printk(0x80002cd,"bcl_pmic5","bcl_write_register",iVar9,uVar10 & 0xff,uVar2,in_x6,in_x7,ppuVar14,
                    pcVar15);
            goto code_r0x08002074;
        }
        if (uVar2 != 0) goto code_r0x08002074;
        *(piVar5 + 2) = iVar7;
        if ((*piVar5 != 0) && (piVar5[0x12] == '\0')) {
            enable_irq();
            uVar2 = 0;
            *(piVar5 + 0x12) = 1;
            goto code_r0x08002074;
        }
    }
code_r0x08001f00:
    uVar2 = 0;
code_r0x08002074:
    mutex_unlock(piVar5 + 6);
    return uVar2;
}


// ===== sym.bcl_read_ibat @ 0x08001d20 (size 416) =====

int sym.bcl_read_ibat(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int iVar2;
    int *piVar3;
    int iVar4;
    int64_t iVar5;
    ulong in_x6;
    ulong in_x7;
    uint32_t uVar6;
    int iVar7;
    uint64_t uVar8;
    uint32_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar10;
    ulong unaff_x30;
    uchar *puVar11;
    code *pcVar12;
    int iStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    puVar11 = &stack0xffffffffffffffd0;
    iVar10 = sp_el0;
    iStack_38 = *(iVar10 + 0x5e0);
    *arg2 = 0;
    iVar10 = *(arg1 + 0xa0);
    iStack_3c = 0;
    if (iVar10 == 0) {
        iVar4 = 0x80003a7;
        _printk(0x8000383,"bcl_pmic5");
        iVar2 = -0x16;
    }
    else {
        iVar4 = &iStack_3c;
        iVar2 = regmap_read(*(iVar10 + 8),*(iVar10 + 0x10) + 0x86);
        if (iVar2 < 0) {
            iVar4 = 0x80003a7;
            _printk(0x80005ce,"bcl_pmic5","bcl_read_register",*(iVar10 + 0x10) + 0x86,iVar2);
        }
        else if (iVar2 == 0) {
            *arg2 = iStack_3c;
            if (iStack_3c == 0) {
                *arg2 = *(arg1 + 0x10);
                iVar10 = *(arg1 + 0xa0);
            }
            else {
                iVar10 = *(arg1 + 0xa0);
                if (*(iVar10 + 0x20) == '\0') {
                    iVar2 = 0x16e39;
                    if (*(iVar10 + 0x12) < 4) {
                        iVar2 = 0x1312f;
                    }
                }
                else {
                    iVar2 = 0x3d09;
                }
                iVar7 = 10000;
                if (obj.ibat_use_qg_adc != 0x0) {
                    iVar7 = 2000;
                }
                iVar1 = 0;
                if (iVar7 != 0) {
                    iVar1 = (iVar2 * iStack_3c * *(iVar10 + 0x24)) / iVar7;
                }
                *arg2 = iVar1;
                *(arg1 + 0x10) = iVar1;
                iVar10 = *(arg1 + 0xa0);
            }
            if ((iVar10 != 0) && (*(iVar10 + 0x18) != 0)) {
                iVar5 = sp_el0;
                iVar5 = iVar5 + 0x7a8;
                ipc_log_string(*(iVar10 + 0x18),"[%s]: %s: ibat:%d mA ADC:0x%02x\n",iVar5,"bcl_read_ibat",
                               *(arg1 + 0x10));
                iVar4 = iVar5;
            }
            iVar2 = 0;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_38) {
        return iVar2;
    }
    piVar3 = __stack_chk_fail();
    *extraout_x18 = sym.bcl_set_ibat;
    pcVar12 = sym.bcl_set_ibat;
    mutex_lock(piVar3 + 6);
    if (*(piVar3 + 2) != iVar4) {
        if ((*piVar3 != 0) && (piVar3[0x12] != '\0')) {
            disable_irq_nosync();
            *(piVar3 + 0x12) = 0;
        }
        if (iVar4 == 0x7fffffff) {
            iVar2 = 0;
            piVar3[2] = 0x7fffffff;
            piVar3[3] = 0;
            goto code_r0x08002074;
        }
        iVar10 = *(piVar3 + 0x28);
        if (*(iVar10 + 0x20) == '\0') {
            iVar2 = *(iVar10 + 0x24);
            if (*(iVar10 + 0x12) < 4) {
                uVar9 = 0x312f;
            }
            else {
                uVar9 = 0x6e39;
            }
            uVar9 = uVar9 | 0x10000;
        }
        else {
            iVar2 = *(iVar10 + 0x24);
            uVar9 = 0x3d09;
        }
        if (obj.ibat_use_qg_adc == 0x0) {
            if (obj.no_bit_shift == 0x0) {
                iVar7 = 20000;
            }
            else {
                iVar7 = 10000;
            }
            uVar8 = iVar4 * iVar7;
        }
        else {
            uVar8 = iVar4 * 4000;
        }
        uVar6 = 0;
        if (iVar2 * uVar9 != 0) {
            uVar6 = uVar8 / (iVar2 * uVar9);
        }
        if (piVar3[0x13] == 0) {
            iVar7 = 0x4b;
        }
        else {
            if (piVar3[0x13] != 1) goto code_r0x08001f00;
            iVar7 = 0x4c;
            if ((3 < *(iVar10 + 0x12)) && (iVar7 = 0x4c, (*(iVar10 + 0x14) & 4) != 0)) {
                iVar7 = 0x4d;
            }
            if ((*(iVar10 + 0x20) != '\0') && (uVar6 = (iVar4 + -800) / 100, 0xe000000 < uVar6 * 0x1000000)) {
                _printk(0x800050e,"bcl_pmic5","convert_ibat_to_ccm_val",iVar4);
                iVar10 = *(piVar3 + 0x28);
                uVar6 = 0xe;
            }
        }
        if (iVar10 == 0) {
            _printk(0x8000383,"bcl_pmic5","bcl_write_register");
            iVar2 = -0x16;
            goto code_r0x08002074;
        }
        iVar7 = *(iVar10 + 0x10) + iVar7;
        iVar2 = regmap_write(*(iVar10 + 8),iVar7,uVar6 & 0xff);
        if (iVar2 < 0) {
            _printk(0x80002cd,"bcl_pmic5","bcl_write_register",iVar7,uVar6 & 0xff,iVar2,in_x6,in_x7,puVar11,
                    pcVar12);
            goto code_r0x08002074;
        }
        if (iVar2 != 0) goto code_r0x08002074;
        *(piVar3 + 2) = iVar4;
        if ((*piVar3 != 0) && (piVar3[0x12] == '\0')) {
            enable_irq();
            iVar2 = 0;
            *(piVar3 + 0x12) = 1;
            goto code_r0x08002074;
        }
    }
code_r0x08001f00:
    iVar2 = 0;
code_r0x08002074:
    mutex_unlock(piVar3 + 6);
    return iVar2;
}


// ===== sym.bcl_set_ibat @ 0x08001ec0 (size 596) =====

int sym.bcl_set_ibat(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int iVar2;
    int64_t iVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    ulong *in_x18;
    int iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg2;
    mutex_lock(arg1 + 0x18);
    if (*(arg1 + 8) != iVar1) {
        if ((*arg1 != 0) && (*(arg1 + 0x48) != '\0')) {
            disable_irq_nosync();
            *(arg1 + 0x48) = 0;
        }
        if (iVar1 == 0x7fffffff) {
            iVar2 = 0;
            *(arg1 + 8) = 0x7fffffff;
            goto code_r0x08002074;
        }
        iVar3 = *(arg1 + 0xa0);
        if (*(iVar3 + 0x20) == '\0') {
            iVar2 = *(iVar3 + 0x24);
            if (*(iVar3 + 0x12) < 4) {
                uVar6 = 0x312f;
            }
            else {
                uVar6 = 0x6e39;
            }
            uVar6 = uVar6 | 0x10000;
        }
        else {
            iVar2 = *(iVar3 + 0x24);
            uVar6 = 0x3d09;
        }
        if (obj.ibat_use_qg_adc == 0x0) {
            if (obj.no_bit_shift == 0x0) {
                iVar7 = 20000;
            }
            else {
                iVar7 = 10000;
            }
            uVar5 = iVar1 * iVar7;
        }
        else {
            uVar5 = iVar1 * 4000;
        }
        uVar4 = 0;
        if (iVar2 * uVar6 != 0) {
            uVar4 = uVar5 / (iVar2 * uVar6);
        }
        if (*(arg1 + 0x4c) == 0) {
            iVar7 = 0x4b;
        }
        else {
            if (*(arg1 + 0x4c) != 1) goto code_r0x08001f00;
            iVar7 = 0x4c;
            if ((3 < *(iVar3 + 0x12)) && (iVar7 = 0x4c, (*(iVar3 + 0x14) & 4) != 0)) {
                iVar7 = 0x4d;
            }
            if ((*(iVar3 + 0x20) != '\0') && (uVar4 = (iVar1 + -800) / 100, 0xe000000 < uVar4 * 0x1000000)) {
                _printk(0x800050e,"bcl_pmic5","convert_ibat_to_ccm_val",arg2 & 0xffffffff);
                iVar3 = *(arg1 + 0xa0);
                uVar4 = 0xe;
            }
        }
        if (iVar3 == 0) {
            _printk(0x8000383,"bcl_pmic5","bcl_write_register");
            iVar2 = -0x16;
            goto code_r0x08002074;
        }
        iVar7 = *(iVar3 + 0x10) + iVar7;
        iVar2 = regmap_write(*(iVar3 + 8),iVar7,uVar4 & 0xff);
        if (iVar2 < 0) {
            _printk(0x80002cd,"bcl_pmic5","bcl_write_register",iVar7,uVar4 & 0xff,iVar2);
            goto code_r0x08002074;
        }
        if (iVar2 != 0) goto code_r0x08002074;
        *(arg1 + 8) = iVar1;
        if ((*arg1 != 0) && (*(arg1 + 0x48) == '\0')) {
            enable_irq();
            iVar2 = 0;
            *(arg1 + 0x48) = 1;
            goto code_r0x08002074;
        }
    }
code_r0x08001f00:
    iVar2 = 0;
code_r0x08002074:
    mutex_unlock(arg1 + 0x18);
    return iVar2;
}


// ===== sym.bcl_lvl_init @ 0x08002114 (size 388) =====

void sym.bcl_lvl_init(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    int64_t iVar5;
    int *piVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = arg4 + (arg2 & 0xffffffffU) * 0xa8;
    iVar1 = iVar5 + 0x40;
    __mutex_init(iVar1,"&lbat->state_trans_lock",obj.bcl_vbat_init.__key);
    *(iVar5 + 0x74) = arg2;
    *(iVar5 + 200) = arg4;
    *(iVar5 + 0x2c) = arg3;
    mutex_lock(iVar1);
    piVar6 = iVar5 + 0x28;
    *piVar6 = 0;
    *(iVar5 + 0x70) = 0;
    iVar2 = platform_get_irq_byname(arg1,"bcl-ibat-lvl0" + (arg2 & 0xffffffffU) * 0x19);
    if (0 < iVar2) {
        iVar3 = devm_request_threaded_irq
                          (arg1 + 0x10,iVar2,0,sym.bcl_handle_irq.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,0x2001,
                           "bcl-ibat-lvl0" + (arg2 & 0xffffffffU) * 0x19,piVar6);
        if (iVar3 == 0) {
            disable_irq_nosync(iVar2);
            *piVar6 = iVar2;
        }
        else {
            _dev_err(arg1 + 0x10,"Error requesting trip irq. err:%d\n",iVar3);
        }
    }
    mutex_unlock(iVar1);
    if (0 < *piVar6) {
        arg4 = arg4 + (arg2 & 0xffffffffU) * 0xa8;
        *(arg4 + 0x80) = sym.bcl_get_trend.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        *(arg4 + 0x88) = sym.bcl_set_lbat.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        *(arg4 + 0x78) = sym.bcl_read_lbat.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        *(arg4 + 0xa0) = sym.bcl_tz_change_mode.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        uVar4 = thermal_zone_of_sensor_register(arg1 + 0x10,arg2 & 0xffffffff,piVar6);
        *(arg4 + 0xc0) = uVar4;
        if (uVar4 < 0xfffffffffffff001) {
            thermal_zone_device_update(uVar4,5);
        }
        else {
            *(arg4 + 0xc0) = 0;
        }
    }
    return;
}


// ===== sym.bcl_handle_irq @ 0x08002298 (size 376) =====

ulong sym.bcl_handle_irq(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    uint uStack_44;
    uint uStack_40;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_3c = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    if (*(arg2 + 0x98) != 0) {
        iVar4 = *(arg2 + 0xa0);
        if (iVar4 == 0) {
            _printk(0x8000383,"bcl_pmic5","bcl_read_register");
        }
        else {
            iVar3 = regmap_read(*(iVar4 + 8),*(iVar4 + 0x10) + 8,&uStack_3c);
            if (iVar3 < 0) {
                _printk(0x80005ce,"bcl_pmic5","bcl_read_register",*(iVar4 + 0x10) + 8,iVar3);
            }
        }
        if (*(iVar4 + 0xc0) != 0) {
            sym.bcl_read_ibat(iVar4 + 0x28,&uStack_40);
        }
        if (*(iVar4 + 0x210) != 0) {
            sym.bcl_read_vbat_tz(*(iVar4 + 0x210),&uStack_44);
        }
        if ((*(arg2 + 4) & uStack_3c) != 0) {
            if ((iVar4 != 0) && (*(iVar4 + 0x18) != 0)) {
                if (8 < *(arg2 + 0x4c)) goto code_r0x0800240c;
                iVar1 = sp_el0;
                ipc_log_string(*(iVar4 + 0x18),
                               "[%s]: %s: Irq:%d triggered for bcl type:%s. status:%u ibat=%d vbat=%d\n",iVar1 + 0x7a8
                               ,"bcl_handle_irq",arg1 & 0xffffffff,"bcl-ibat-lvl0" + *(arg2 + 0x4c) * 0x19,uStack_3c
                               ,uStack_40,uStack_44);
            }
            thermal_zone_device_update(*(arg2 + 0x98),2);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return 1;
    }
    __stack_chk_fail();
code_r0x0800240c:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8002410);
    (*pcVar2)();
}


// ===== sym.bcl_read_lbat @ 0x08002410 (size 420) =====

int sym.bcl_read_lbat(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int *piVar2;
    int iVar3;
    int64_t iVar4;
    uint32_t uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar6;
    ulong unaff_x30;
    uint32_t uStack_44;
    uchar auStack_40 [4];
    uchar auStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    iVar6 = *(arg1 + 0xa0);
    uStack_44 = 0;
    *arg2 = 0;
    if (iVar6 == 0) {
        iVar3 = 0x80003a7;
        _printk(0x8000383,"bcl_pmic5");
        iVar1 = -0x16;
    }
    else {
        iVar3 = &uStack_44;
        iVar1 = regmap_read(*(iVar6 + 8),*(iVar6 + 0x10) + 8);
        if (iVar1 < 0) {
            iVar3 = 0x80003a7;
            _printk(0x80005ce,"bcl_pmic5","bcl_read_register",*(iVar6 + 0x10) + 8,iVar1);
        }
        else if (iVar1 == 0) {
            iVar1 = *(arg1 + 0x4c);
            if (iVar1 == 7) {
                uVar5 = uStack_44 & 4;
            }
            else if (iVar1 == 6) {
                uVar5 = uStack_44 & 2;
            }
            else {
                if (iVar1 != 5) {
                    iVar3 = 0x800032f;
                    _printk(0x80003b9,"bcl_pmic5");
                    iVar1 = -0x13;
                    goto code_r0x08002508;
                }
                uVar5 = uStack_44 & 1;
            }
            *arg2 = uVar5;
            *(arg1 + 0x10) = uVar5;
            if (*(iVar6 + 0xc0) != 0) {
                sym.bcl_read_ibat(iVar6 + 0x28,auStack_3c);
            }
            if (*(iVar6 + 0x210) != 0) {
                sym.bcl_read_vbat_tz(*(iVar6 + 0x210),auStack_40);
            }
            if (*(iVar6 + 0x18) != 0) {
                iVar4 = sp_el0;
                iVar4 = iVar4 + 0x7a8;
                ipc_log_string(*(iVar6 + 0x18),"[%s]: %s: LVLbat:%d val:%d\n",iVar4,"bcl_read_lbat",*(arg1 + 0x4c),
                               *(arg1 + 0x10));
                iVar3 = iVar4;
            }
            iVar1 = 0;
        }
    }
code_r0x08002508:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return iVar1;
    }
    piVar2 = __stack_chk_fail();
    *extraout_x18 = sym.bcl_set_lbat;
    if (*(piVar2 + 0x49) == '\0') {
        mutex_lock(piVar2 + 6);
        if (iVar3 == 0x7fffffff) {
            if ((*piVar2 != 0) && (piVar2[0x12] != '\0')) {
                disable_irq_nosync();
                irq_set_irq_wake(*piVar2,0);
                *(piVar2 + 0x12) = 0;
            }
        }
        else if ((*piVar2 != 0) && (piVar2[0x12] == '\0')) {
            enable_irq();
            irq_set_irq_wake(*piVar2,1);
            *(piVar2 + 0x12) = 1;
        }
        mutex_unlock(piVar2 + 6);
    }
    return 0;
}


// ===== sym.bcl_set_lbat @ 0x080025b4 (size 176) =====

ulong sym.bcl_set_lbat(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x49) == '\0') {
        mutex_lock(arg1 + 0x18);
        if (arg2 == 0x7fffffff) {
            if ((*arg1 != 0) && (*(arg1 + 0x48) != '\0')) {
                disable_irq_nosync();
                irq_set_irq_wake(*arg1,0);
                *(arg1 + 0x48) = 0;
            }
        }
        else if ((*arg1 != 0) && (*(arg1 + 0x48) == '\0')) {
            enable_irq();
            irq_set_irq_wake(*arg1,1);
            *(arg1 + 0x48) = 1;
        }
        mutex_unlock(arg1 + 0x18);
    }
    return 0;
}


// ===== sym.bcl_get_trend @ 0x08002664 (size 100) =====

ulong sym.bcl_get_trend(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(arg1 + 0x18);
    uVar1 = 1;
    if (*(arg1 + 0x10) == 0) {
        uVar1 = 2;
    }
    *arg2 = uVar1;
    mutex_unlock(arg1 + 0x18);
    return 0;
}


// ===== sym.bcl_tz_change_mode @ 0x080026c8 (size 168) =====

ulong sym.bcl_tz_change_mode(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x98);
    if (iVar1 != 0) {
        piVar2 = *(iVar1 + 0x458);
        *(iVar1 + 0x424) = 0x8000000100000000;
        *(iVar1 + 0x418) = 0xfffbd1b0;
        *(iVar1 + 0x42c) = 0x7fffffff;
        if (iVar1 + 0x458 != piVar2) {
            do {
                *(piVar2 + -0x8c) = 0;
                if (arg2 == 0) {
                    piVar2[-0xf] = -1;
                    *(piVar2[-0x13] + 0x3c0) = 0;
                    thermal_cdev_update(piVar2[-0x13]);
                }
                piVar2 = *piVar2;
            } while (iVar1 + 0x458 != piVar2);
        }
    }
    return 0;
}


// ===== sym.bcl_freeze @ 0x08002770 (size 172) =====

ulong sym.bcl_freeze(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    int64_t iVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = 0;
    iVar4 = *(arg1 + 0x98);
    do {
        iVar1 = iVar4 + iVar3;
        mutex_lock(iVar1 + 0x40);
        iVar2 = *(iVar1 + 0x28);
        if ((0 < iVar2) && (*(iVar1 + 0x70) != '\0')) {
            disable_irq(iVar2);
            iVar2 = *(iVar1 + 0x28);
            *(iVar1 + 0x70) = 0;
        }
        devm_free_irq(arg1,iVar2,iVar1 + 0x28);
        *(iVar1 + 0x71) = 1;
        mutex_unlock(iVar1 + 0x40);
        iVar3 = iVar3 + 0xa8;
    } while (iVar3 != 0x540);
    return 0;
}


// ===== sym.bcl_restore @ 0x0800281c (size 372) =====

ulong sym.bcl_restore(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int iVar3;
    int iVar4;
    ulong *in_x18;
    char *pcVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = 0;
    iVar6 = *(arg1 + 0x98);
    pcVar5 = "bcl-ibat-lvl0";
    do {
        iVar1 = iVar6 + iVar7;
        mutex_lock(iVar1 + 0x40);
        if ((0 < *(iVar1 + 0x28)) && (*(iVar1 + 0x70) == '\0')) {
            iVar2 = iVar6 + iVar7;
            iVar3 = devm_request_threaded_irq
                              (arg1,*(iVar1 + 0x28),0,sym.bcl_handle_irq.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,
                               0x2001,pcVar5,iVar2 + 0x28);
            if (iVar3 != 0) {
                _dev_err(arg1,"Error requesting trip irq. err:%d\n",iVar3);
                mutex_unlock(iVar2 + 0x40);
                return 0xffffffea;
            }
            disable_irq_nosync(*(iVar1 + 0x28));
            *(iVar2 + 0x71) = 0;
        }
        mutex_unlock(iVar1 + 0x40);
        if (*(iVar1 + 0xc0) != 0) {
            thermal_zone_device_update(*(iVar1 + 0xc0),5);
        }
        iVar7 = iVar7 + 0xa8;
        pcVar5 = pcVar5 + 0x19;
    } while (iVar7 != 0x540);
    if (iVar6 == 0) {
        _printk(0x8000383,"bcl_pmic5","bcl_write_register");
    }
    else {
        iVar3 = *(iVar6 + 0x10) + 0x46;
        iVar4 = regmap_write(*(iVar6 + 8),iVar3,0x80);
        if (iVar4 < 0) {
            _printk(0x80002cd,"bcl_pmic5","bcl_write_register",iVar3,0x80,iVar4);
        }
    }
    return 0;
}


// ===== sym.__cfi_check_fail @ 0x08002990 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080029d4

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
    //switch table (4 cases) at 0x80002c8
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80029e8);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080029f4 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.bcl_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08002a28 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.bcl_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}

