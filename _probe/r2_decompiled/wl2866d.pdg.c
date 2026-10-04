// decompiled from wl2866d by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 356) =====

//WARNING: Switch with 1 destination removed at 0x08001df4

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x18aafba39062885f) {
        if (arg1 == -0x607809f436f9dcb0) {
            pcVar2 = sym.wl2866d_regulator_set_voltage.50a425c2433f2d85c6f6e42f9935191b.cfi_jt;
        }
        else {
            if (arg1 == -0x57be845bca9148ef) {
                if ((pcVar1 + -0x8001198 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x08001db4;
            }
            if (arg1 != 0x2b3a43e29242445) goto code_r0x08001db4;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else if (arg1 < 0x7e04a0fb7ad8bcd5) {
        if (arg1 != 0x18aafba39062885f) {
            if ((arg1 == 0x1bf4c7c0f319a435) && ((pcVar1 + -0x80011a8 >> 3 | pcVar1 << 0x3d) < 4)) {
                return;
            }
            goto code_r0x08001db4;
        }
        pcVar2 = sym.wl2866d_pmic_probe.50a425c2433f2d85c6f6e42f9935191b.cfi_jt;
    }
    else if (arg1 == 0x7e04a0fb7ad8bcd5) {
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    else {
        if (arg1 != 0x7ea68a074636b5b8) goto code_r0x08001db4;
        pcVar2 = sym.wl2866d_pmic_remove.50a425c2433f2d85c6f6e42f9935191b.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001db4:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001e08);
    (*pcVar1)();
}


// ===== sym.wl2866d_pmic_remove.50a425c2433f2d85c6f6e42f9935191b.cfi_jt @ 0x08001170 (size 8) =====

ulong sym.wl2866d_pmic_remove.50a425c2433f2d85c6f6e42f9935191b.cfi_jt(int64_t param_1)

{
    *(param_1 + 0xb8) = 0;
    return 0;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001178 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    i2c_del_driver(obj.wl2866d_pmic_driver);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001180 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    i2c_register_driver(obj.__this_module,obj.wl2866d_pmic_driver);
    return;
}


// ===== sym.wl2866d_pmic_probe.50a425c2433f2d85c6f6e42f9935191b.cfi_jt @ 0x08001188 (size 8) =====

uint64_t sym.wl2866d_pmic_probe.50a425c2433f2d85c6f6e42f9935191b.cfi_jt(int64_t param_1)

{
    ulong *puVar1;
    int iVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint uVar12;
    ulong uVar13;
    ulong *in_x18;
    ulong uVar14;
    ulong uVar15;
    int64_t iVar16;
    ulong unaff_x30;
    uchar auVar17 [16];
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    int64_t iStack_90;
    int64_t iStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iVar8 = param_1 + 0x20;
    iStack_68 = *(iVar6 + 0x5e0);
    uStack_a8 = 0;
    iVar6 = devm_kmalloc(iVar8,0x38,0xdc0);
    if (iVar6 == 0) {
code_r0x08001520:
        uVar10 = 0xfffffff4;
    }
    else {
        *(iVar6 + 8) = iVar8;
        iVar7 = __devm_regmap_init_i2c(param_1,obj.wl2866d_regulator_regmap_config,0,0);
        *(iVar6 + 0x10) = iVar7;
        if (iVar7 != 0) {
            iVar8 = devm_pinctrl_get(iVar8);
            *(iVar6 + 0x18) = iVar8;
            if (iVar8 != 0) {
                auVar17 = pinctrl_lookup_state(iVar8,"wl2866d_enable");
                uVar10 = auVar17._8_8_;
                uVar11 = auVar17._0_8_;
                *(iVar6 + 0x28) = uVar11;
                if ((uVar11 == 0) || (0xfffffffffffff000 < uVar11)) {
                    uVar13 = 0x800052e;
                }
                else {
                    auVar17 = pinctrl_lookup_state(*(iVar6 + 0x18),"wl2866d_disable");
                    uVar11 = auVar17._0_8_;
                    *(iVar6 + 0x30) = uVar11;
                    uVar10 = auVar17._8_8_;
                    if ((uVar11 != 0) && (uVar10 = uVar11, uVar11 < 0xfffffffffffff001)) {
                        iVar4 = pinctrl_select_state(*(iVar6 + 0x18));
                        if (iVar4 != 0) {
                            _printk(0x80006d8,iVar4);
                        }
                        iVar8 = *(iVar6 + 8);
                        *(param_1 + 0xb8) = iVar6;
                        for (iVar8 = of_get_next_available_child(*(iVar8 + 0x2f0),0); iVar8 != 0;
                            iVar8 = of_get_next_available_child(*(*(iVar6 + 8) + 0x2f0),iVar8)) {
                            iVar7 = devm_kmalloc(*(iVar6 + 8),0x178,0xdc0);
                            if (iVar7 == 0) goto code_r0x08001520;
                            uVar13 = *(iVar6 + 8);
                            uVar14 = *(iVar6 + 0x10);
                            *(iVar7 + 8) = iVar6;
                            *(iVar7 + 0x18) = uVar13;
                            *(iVar7 + 0x20) = uVar14;
                            *(iVar7 + 0x28) = iVar8;
                            uVar5 = of_property_read_string(iVar8,"regulator-name",&uStack_a8);
                            uVar13 = uStack_a8;
                            if (uVar5 < 0) {
                                uVar14 = *(iVar7 + 0x38);
                                uVar10 = uVar5;
                                uVar13 = 0x80002c5;
code_r0x080016f4:
                                _printk(uVar13,uVar14,uVar10 & 0xffffffff);
                                goto code_r0x08001554;
                            }
                            uVar15 = *(iVar7 + 0x28);
                            uVar14 = *(iVar7 + 0x18);
                            uStack_78 = 0;
                            uStack_70 = 0;
                            uStack_a0 = 0;
                            iVar9 = strstr(uStack_a8,"dvdd1");
                            iVar16 = 0;
                            if (iVar9 == 0) {
                                iVar16 = strstr(uVar13,"dvdd2");
                                if (iVar16 != 0) {
                                    iVar16 = 1;
                                    goto code_r0x080013bc;
                                }
                                iVar16 = strstr(uVar13,"avdd1");
                                if (iVar16 != 0) {
                                    iVar16 = 2;
                                    goto code_r0x080013bc;
                                }
                                iVar16 = strstr(uVar13,"avdd2");
                                if (iVar16 != 0) {
                                    iVar16 = 3;
                                    goto code_r0x080013bc;
                                }
                                uVar14 = 0x80005c1;
code_r0x080016c8:
                                _printk(uVar14,uVar13);
code_r0x080016e4:
                                uVar10 = 0xffffffea;
                                goto code_r0x080016e8;
                            }
code_r0x080013bc:
                            uVar5 = of_property_read_variable_u32_array(uVar15,"cell-index",iVar7 + 0x174,1,0);
                            if (uVar5 < 0) {
                                uVar10 = uVar5;
                                uVar14 = *(iVar7 + 0x38);
                                uVar13 = 0x80007f5;
code_r0x08001698:
                                _printk(uVar13,uVar14,uVar10);
code_r0x080016e8:
                                uVar14 = *(iVar7 + 0x38);
                                uVar13 = 0x8000716;
                                goto code_r0x080016f4;
                            }
                            uVar5 = of_property_read_variable_u8_array(uVar15,0x8000624,iVar7,1,0);
                            if (uVar5 < 0) {
                                uVar14 = *(iVar7 + 0x38);
                                uVar10 = uVar5;
                                uVar13 = 0x8000362;
                                goto code_r0x08001698;
                            }
                            uVar5 = of_property_read_string(uVar15,"type",&uStack_a0);
                            uVar13 = uStack_a0;
                            if (uVar5 < 0) {
                                uVar14 = *(iVar7 + 0x38);
                                uVar10 = uVar5;
                                uVar13 = 0x80003ef;
                                goto code_r0x08001698;
                            }
                            iVar4 = strcmp(uStack_a0,"dvdd");
                            if (iVar4 != 0) {
                                iVar4 = strcmp(uVar13,"avdd");
                                if (iVar4 == 0) {
                                    uVar12 = 1;
                                    goto code_r0x0800144c;
                                }
                                _printk(0x8000489,*(iVar7 + 0x38),*(iVar7 + 0x170));
                                goto code_r0x080016e4;
                            }
                            uVar12 = 0;
code_r0x0800144c:
                            puVar1 = iVar7 + 0x38;
                            *(iVar7 + 0x170) = uVar12;
                            iVar9 = of_get_regulator_init_data(uVar14,uVar15,puVar1);
                            if (iVar9 == 0) {
                                _printk(0x80007d1,*puVar1);
                                uVar10 = 0xffffffc3;
                                goto code_r0x080016e8;
                            }
                            if (*(iVar9 + 8) == 0) {
                                uVar13 = *puVar1;
                                uVar14 = 0x8000655;
                                goto code_r0x080016c8;
                            }
                            iVar16 = iVar16 * 0x18;
                            iVar2 = *(iVar16 + 0x8000ad0);
                            *(iVar9 + 0x40) = *(iVar9 + 0x40) | 9;
                            *(iVar9 + 0x44) = *(iVar9 + 0x14);
                            iVar4 = *(iVar16 + 0x8000ad4);
                            uVar5 = *(iVar16 + 0x8000ad8);
                            *(iVar7 + 0x10) = 0;
                            *(iVar7 + 4) = iVar2;
                            *(iVar7 + 0x84) = 0;
                            *(iVar7 + 0x78) = obj.wl2866d_regulator_ops;
                            uVar3 = 0;
                            if (uVar5 != 0) {
                                uVar3 = (iVar4 - iVar2) / uVar5;
                            }
                            uVar13 = *(iVar9 + 8);
                            *(iVar7 + 0x90) = iVar2;
                            *(iVar7 + 0x94) = uVar5;
                            *(iVar7 + 0x38) = uVar13;
                            *(iVar7 + 0x70) = uVar3 + 1;
                            uStack_98 = uVar14;
                            iStack_90 = iVar9;
                            iStack_88 = iVar7;
                            uStack_80 = uVar15;
                            uVar10 = devm_regulator_register(uVar14,puVar1,&uStack_98);
                            *(iVar7 + 0x30) = uVar10;
                            if (uVar10 < 0xfffffffffffff001) {
                                iVar4 = devm_regulator_debug_register(uVar14,uVar10);
                                if (iVar4 != 0) {
                                    _printk(0x8000716,*puVar1,iVar4);
                                }
                            }
                            else {
                                _printk(0x8000716,*puVar1,uVar10 & 0xffffffff);
                                if (uVar10 < 0) goto code_r0x080016e8;
                            }
                        }
                        uVar13 = *(iVar6 + 0x10);
                        uVar10 = uStack_98 >> 8;
                        uStack_98 = CONCAT71(uVar10,0xff);
                        uVar11 = regmap_bulk_write(uVar13,2,&uStack_98,1);
                        uVar10 = uVar11 & 0xffffffff;
                        if (uVar11 < 0) {
                            _printk(0x80002f1,2);
                            usleep_range_state(500000,0x7a184,2);
                            iVar4 = regmap_bulk_write(uVar13,2,&uStack_98,1);
                            uVar13 = 0x8000392;
                            if (-1 < iVar4) {
                                iVar4 = -0x16;
                                uVar13 = 0x8000448;
                            }
                            _printk(uVar13,2);
                            _printk(0x80006a9,iVar4);
                            uVar10 = 0;
                        }
                        *(param_1 + 0xb8) = iVar6;
                        goto code_r0x08001554;
                    }
                    uVar13 = 0x80005ec;
                }
                _printk(uVar13,uVar10);
                uVar10 = 0xffffffea;
                goto code_r0x08001554;
            }
        }
        uVar10 = 0xffffffed;
    }
code_r0x08001554:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_68) {
        iVar8 = __stack_chk_fail();
        *(iVar8 + 0xb8) = 0;
        return 0;
    }
    return uVar10 & 0xffffffff;
}


// ===== sym.wl2866d_regulator_set_voltage.50a425c2433f2d85c6f6e42f9935191b.cfi_jt @ 0x08001190 (size 8) =====

uint64_t sym.wl2866d_regulator_set_voltage.50a425c2433f2d85c6f6e42f9935191b.cfi_jt
                   (ulong param_1,uint32_t param_2,int param_3)

{
    int iVar1;
    uchar uVar2;
    int iVar3;
    uint32_t uVar4;
    uchar *puVar5;
    ulong uVar6;
    int64_t iVar7;
    ulong uVar8;
    int iVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar10;
    uint64_t uVar11;
    ulong unaff_x30;
    uint8_t auStack_7c [4];
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    uint64_t uStack_60;
    uint64_t uStack_50;
    uchar *puStack_48;
    uchar auStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    uVar11 = param_2;
    puVar5 = rdev_get_drvdata();
    if (**(puVar5 + 8) == '\0') {
        iVar3 = 6000;
        if (*(puVar5 + 0x170) != 0) {
            iVar3 = 0x30d4;
        }
        iVar9 = 0;
        if (iVar3 != 0) {
            iVar9 = (param_2 + iVar3 + -1) / iVar3;
        }
        iVar9 = iVar9 * iVar3;
        if (param_3 < iVar9) {
            _printk(0x800041b,*(puVar5 + 0x38));
            uVar10 = 0xffffffea;
        }
        else {
            uVar11 = *(puVar5 + 0x20);
            iVar1 = -600000;
            if (*(puVar5 + 0x170) != 0) {
                iVar1 = -1200000;
            }
            auStack_3c[0] = 0;
            if (iVar3 != 0) {
                auStack_3c[0] = (iVar9 + iVar1) / iVar3;
            }
            uVar2 = *puVar5;
            iVar3 = regmap_bulk_write(uVar11,uVar2,auStack_3c,1);
            if (iVar3 < 0) {
                _printk(0x80002f1,uVar2);
                usleep_range_state(500000,0x7a184,2);
                uVar4 = regmap_bulk_write(uVar11,uVar2,auStack_3c,1);
                uVar6 = 0x8000392;
                if (-1 < uVar4) {
                    uVar4 = 0xffffffea;
                    uVar6 = 0x8000448;
                }
                uVar10 = uVar4;
                _printk(uVar6,uVar2);
                _printk(0x800062e,*(puVar5 + 0x38),uVar10);
            }
            else {
                uVar10 = 0;
                *(puVar5 + 4) = iVar9;
            }
        }
    }
    else {
        uVar10 = -(*(puVar5 + 4) < param_2 || param_3 < *(puVar5 + 4));
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_38) {
        return uVar10;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.wl2866d_regulator_get_voltage;
    pcStack_68 = sym.wl2866d_regulator_get_voltage;
    iVar7 = sp_el0;
    iStack_78 = *(iVar7 + 0x5e0);
    puStack_70 = &stack0xffffffffffffffd0;
    uStack_60 = uVar11;
    uStack_50 = uVar10;
    puStack_48 = puVar5;
    puVar5 = rdev_get_drvdata();
    auStack_7c[0] = 0;
    if (**(puVar5 + 8) == '\0') {
        uVar6 = *(puVar5 + 0x20);
        uVar2 = *puVar5;
        iVar3 = regmap_bulk_read(uVar6,uVar2,auStack_7c,1);
        if (iVar3 < 0) {
            _printk(0x8000822,uVar2);
            usleep_range_state(500000,0x7a184,2);
            uVar4 = regmap_bulk_read(uVar6,uVar2,auStack_7c,1);
            uVar6 = 0x800031a;
            if (-1 < uVar4) {
                uVar4 = 0xffffffea;
                uVar6 = 0x8000792;
            }
            uVar11 = uVar4;
            _printk(uVar6,uVar2);
            _printk(0x8000679,*(puVar5 + 0x38),uVar11);
        }
        else {
            if (*(puVar5 + 0x170) == 0) {
                iVar9 = 6000;
                iVar3 = 600000;
            }
            else {
                iVar9 = 0x30d4;
                iVar3 = 1200000;
            }
            uVar11 = iVar3 + auStack_7c[0] * iVar9;
        }
    }
    else {
        uVar11 = *(puVar5 + 4);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_78) {
        return uVar11;
    }
    uVar6 = __stack_chk_fail();
    *extraout_x18_00 = sym.wl2866d_regulator_enable;
    iVar7 = rdev_get_drvdata();
    if (**(iVar7 + 8) == '\0') {
        uVar4 = sym.wl2866d_regulator_get_voltage(uVar6);
        if (uVar4 < 0) {
            uVar8 = *(iVar7 + 0x38);
            uVar6 = 0x8000849;
        }
        else {
            uVar11 = 1 << (*(iVar7 + 0x174) & 0x1f);
            uVar4 = sym.wl2866d_masked_write(*(iVar7 + 0x20),uVar11,uVar11);
            if (-1 < uVar4) {
                *(iVar7 + 0x10) = 1;
                goto code_r0x08001a98;
            }
            uVar8 = *(iVar7 + 0x38);
            uVar6 = 0x80004db;
        }
        _printk(uVar6,uVar8,uVar4);
    }
    else {
        uVar4 = *(iVar7 + 0x10) - 1;
    }
code_r0x08001a98:
    return uVar4;
}


// ===== sym.wl2866d_pmic_suspend.50a425c2433f2d85c6f6e42f9935191b.cfi_jt @ 0x08001198 (size 8) =====

ulong sym.wl2866d_pmic_suspend.50a425c2433f2d85c6f6e42f9935191b.cfi_jt(int64_t param_1)

{
    **(param_1 + 0x98) = 1;
    return 0;
}


// ===== sym.wl2866d_pmic_resume.50a425c2433f2d85c6f6e42f9935191b.cfi_jt @ 0x080011a0 (size 8) =====

ulong sym.wl2866d_pmic_resume.50a425c2433f2d85c6f6e42f9935191b.cfi_jt(int64_t param_1)

{
    **(param_1 + 0x98) = 0;
    return 0;
}


// ===== sym.wl2866d_regulator_is_enabled.50a425c2433f2d85c6f6e42f9935191b.cfi_jt @ 0x080011a8 (size 8) =====

uint64_t sym.wl2866d_regulator_is_enabled.50a425c2433f2d85c6f6e42f9935191b.cfi_jt
                   (ulong param_1,ulong param_2,uint32_t param_3)

{
    uchar uVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int iVar4;
    uchar *puVar5;
    uint64_t uVar6;
    uint8_t *puVar7;
    ulong in_x7;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar8;
    ulong uVar9;
    ulong unaff_x30;
    uchar auVar10 [12];
    uchar *puVar11;
    code *pcVar12;
    uint8_t auStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    puVar11 = &stack0xffffffffffffffd0;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    puVar5 = rdev_get_drvdata();
    auStack_3c[0] = 0;
    if (**(puVar5 + 8) == '\0') {
        uVar9 = *(puVar5 + 0x20);
        puVar7 = auStack_3c;
        uVar1 = *puVar5;
        iVar4 = regmap_bulk_read(uVar9,uVar1,puVar7,1);
        param_3 = puVar7;
        if (iVar4 < 0) {
            _printk(0x8000822,uVar1);
            usleep_range_state(500000,0x7a184,2);
            uVar3 = regmap_bulk_read(uVar9,uVar1,auStack_3c,1);
            uVar9 = 0x800031a;
            if (-1 < uVar3) {
                uVar3 = 0xffffffea;
                uVar9 = 0x8000792;
            }
            uVar8 = uVar3;
            _printk(uVar9,uVar1);
            uVar6 = uVar8;
            _printk(0x8000505,*(puVar5 + 0x38),uVar8);
            param_3 = uVar6;
        }
        else {
            uVar8 = auStack_3c[0] >> (*(puVar5 + 0x174) & 0x1f) & 1;
        }
    }
    else {
        uVar8 = puVar5[0x10];
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_38) {
        auVar10 = __stack_chk_fail();
        *extraout_x18 = sym.wl2866d_masked_write;
        pcVar12 = sym.wl2866d_masked_write;
        uVar3 = auVar10._8_4_ & 0xff;
        param_3 = param_3 & 0xff;
        uVar6 = regmap_update_bits_base
                          (auVar10._0_8_,0xe,uVar3,param_3,0,0,0,in_x7,puVar11,sym.wl2866d_masked_write);
        if (uVar6 < 0) {
            _printk(0x8000742,param_3,0xe,uVar3);
            usleep_range_state(500000,0x7a184,2);
            iVar4 = regmap_update_bits_base(auVar10._0_8_,0xe,uVar3,param_3,0,0,0,in_x7,puVar11,pcVar12);
            uVar9 = 0x8000742;
            if (-1 < iVar4) {
                uVar9 = 0x8000565;
            }
            _printk(uVar9,param_3,0xe,uVar3);
            uVar6 = 0xffffffea;
        }
        return uVar6;
    }
    return uVar8;
}


// ===== sym.wl2866d_regulator_enable.50a425c2433f2d85c6f6e42f9935191b.cfi_jt @ 0x080011b0 (size 8) =====

int sym.wl2866d_regulator_enable.50a425c2433f2d85c6f6e42f9935191b.cfi_jt(ulong param_1)

{
    int iVar1;
    int64_t iVar2;
    ulong uVar3;
    uint64_t arg2;
    ulong uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = rdev_get_drvdata();
    if (**(iVar2 + 8) == '\0') {
        iVar1 = sym.wl2866d_regulator_get_voltage(param_1);
        if (iVar1 < 0) {
            uVar4 = *(iVar2 + 0x38);
            uVar3 = 0x8000849;
        }
        else {
            arg2 = 1 << (*(iVar2 + 0x174) & 0x1f);
            iVar1 = sym.wl2866d_masked_write(*(iVar2 + 0x20),arg2,arg2);
            if (-1 < iVar1) {
                *(iVar2 + 0x10) = 1;
                return iVar1;
            }
            uVar4 = *(iVar2 + 0x38);
            uVar3 = 0x80004db;
        }
        _printk(uVar3,uVar4,iVar1);
    }
    else {
        iVar1 = *(iVar2 + 0x10) + -1;
    }
    return iVar1;
}


// ===== sym.wl2866d_regulator_disable.50a425c2433f2d85c6f6e42f9935191b.cfi_jt @ 0x080011b8 (size 8) =====

int sym.wl2866d_regulator_disable.50a425c2433f2d85c6f6e42f9935191b.cfi_jt(void)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = rdev_get_drvdata();
    if (**(iVar2 + 8) == '\0') {
        iVar1 = sym.wl2866d_masked_write(*(iVar2 + 0x20),1 << (*(iVar2 + 0x174) & 0x1f),0);
        if (iVar1 < 0) {
            _printk(0x80004b0,*(iVar2 + 0x38),iVar1);
        }
        else {
            *(iVar2 + 0x10) = 0;
        }
    }
    else {
        iVar1 = -*(iVar2 + 0x10);
    }
    return iVar1;
}


// ===== sym.wl2866d_regulator_get_voltage.50a425c2433f2d85c6f6e42f9935191b.cfi_jt @ 0x080011c0 (size 8) =====

int sym.wl2866d_regulator_get_voltage.50a425c2433f2d85c6f6e42f9935191b.cfi_jt(void)

{
    uchar uVar1;
    int iVar2;
    uchar *puVar3;
    ulong uVar4;
    int64_t iVar5;
    uint64_t arg2;
    ulong uVar6;
    int iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint8_t auStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    puVar3 = rdev_get_drvdata();
    auStack_3c[0] = 0;
    if (**(puVar3 + 8) == '\0') {
        uVar4 = *(puVar3 + 0x20);
        uVar1 = *puVar3;
        iVar2 = regmap_bulk_read(uVar4,uVar1,auStack_3c,1);
        if (iVar2 < 0) {
            _printk(0x8000822,uVar1);
            usleep_range_state(500000,0x7a184,2);
            iVar2 = regmap_bulk_read(uVar4,uVar1,auStack_3c,1);
            uVar4 = 0x800031a;
            if (-1 < iVar2) {
                iVar2 = -0x16;
                uVar4 = 0x8000792;
            }
            _printk(uVar4,uVar1);
            _printk(0x8000679,*(puVar3 + 0x38),iVar2);
        }
        else {
            if (*(puVar3 + 0x170) == 0) {
                iVar7 = 6000;
                iVar2 = 600000;
            }
            else {
                iVar7 = 0x30d4;
                iVar2 = 1200000;
            }
            iVar2 = iVar2 + auStack_3c[0] * iVar7;
        }
    }
    else {
        iVar2 = *(puVar3 + 4);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_38) {
        uVar4 = __stack_chk_fail();
        *extraout_x18 = sym.wl2866d_regulator_enable;
        iVar5 = rdev_get_drvdata();
        if (**(iVar5 + 8) == '\0') {
            iVar2 = sym.wl2866d_regulator_get_voltage(uVar4);
            if (iVar2 < 0) {
                uVar6 = *(iVar5 + 0x38);
                uVar4 = 0x8000849;
            }
            else {
                arg2 = 1 << (*(iVar5 + 0x174) & 0x1f);
                iVar2 = sym.wl2866d_masked_write(*(iVar5 + 0x20),arg2,arg2);
                if (-1 < iVar2) {
                    *(iVar5 + 0x10) = 1;
                    return iVar2;
                }
                uVar6 = *(iVar5 + 0x38);
                uVar4 = 0x80004db;
            }
            _printk(uVar4,uVar6,iVar2);
        }
        else {
            iVar2 = *(iVar5 + 0x10) + -1;
        }
        return iVar2;
    }
    return iVar2;
}


// ===== sym.wl2866d_pmic_probe @ 0x080011c8 (size 1356) =====

uint64_t sym.wl2866d_pmic_probe(int64_t arg1)

{
    ulong *puVar1;
    int iVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint uVar12;
    ulong uVar13;
    ulong *in_x18;
    ulong uVar14;
    ulong uVar15;
    int64_t iVar16;
    ulong unaff_x30;
    uchar auVar17 [16];
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    int64_t iStack_90;
    int64_t iStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iVar8 = arg1 + 0x20;
    iStack_68 = *(iVar6 + 0x5e0);
    uStack_a8 = 0;
    iVar6 = devm_kmalloc(iVar8,0x38,0xdc0);
    if (iVar6 == 0) {
code_r0x08001520:
        uVar10 = 0xfffffff4;
    }
    else {
        *(iVar6 + 8) = iVar8;
        iVar7 = __devm_regmap_init_i2c(arg1,obj.wl2866d_regulator_regmap_config,0,0);
        *(iVar6 + 0x10) = iVar7;
        if (iVar7 != 0) {
            iVar8 = devm_pinctrl_get(iVar8);
            *(iVar6 + 0x18) = iVar8;
            if (iVar8 != 0) {
                auVar17 = pinctrl_lookup_state(iVar8,"wl2866d_enable");
                uVar10 = auVar17._8_8_;
                uVar11 = auVar17._0_8_;
                *(iVar6 + 0x28) = uVar11;
                if ((uVar11 == 0) || (0xfffffffffffff000 < uVar11)) {
                    uVar13 = 0x800052e;
                }
                else {
                    auVar17 = pinctrl_lookup_state(*(iVar6 + 0x18),"wl2866d_disable");
                    uVar11 = auVar17._0_8_;
                    *(iVar6 + 0x30) = uVar11;
                    uVar10 = auVar17._8_8_;
                    if ((uVar11 != 0) && (uVar10 = uVar11, uVar11 < 0xfffffffffffff001)) {
                        iVar4 = pinctrl_select_state(*(iVar6 + 0x18));
                        if (iVar4 != 0) {
                            _printk(0x80006d8,iVar4);
                        }
                        iVar8 = *(iVar6 + 8);
                        *(arg1 + 0xb8) = iVar6;
                        for (iVar8 = of_get_next_available_child(*(iVar8 + 0x2f0),0); iVar8 != 0;
                            iVar8 = of_get_next_available_child(*(*(iVar6 + 8) + 0x2f0),iVar8)) {
                            iVar7 = devm_kmalloc(*(iVar6 + 8),0x178,0xdc0);
                            if (iVar7 == 0) goto code_r0x08001520;
                            uVar13 = *(iVar6 + 8);
                            uVar14 = *(iVar6 + 0x10);
                            *(iVar7 + 8) = iVar6;
                            *(iVar7 + 0x18) = uVar13;
                            *(iVar7 + 0x20) = uVar14;
                            *(iVar7 + 0x28) = iVar8;
                            uVar5 = of_property_read_string(iVar8,"regulator-name",&uStack_a8);
                            uVar13 = uStack_a8;
                            if (uVar5 < 0) {
                                uVar14 = *(iVar7 + 0x38);
                                uVar10 = uVar5;
                                uVar13 = 0x80002c5;
code_r0x080016f4:
                                _printk(uVar13,uVar14,uVar10 & 0xffffffff);
                                goto code_r0x08001554;
                            }
                            uVar15 = *(iVar7 + 0x28);
                            uVar14 = *(iVar7 + 0x18);
                            uStack_78 = 0;
                            uStack_70 = 0;
                            uStack_a0 = 0;
                            iVar9 = strstr(uStack_a8,"dvdd1");
                            iVar16 = 0;
                            if (iVar9 == 0) {
                                iVar16 = strstr(uVar13,"dvdd2");
                                if (iVar16 != 0) {
                                    iVar16 = 1;
                                    goto code_r0x080013bc;
                                }
                                iVar16 = strstr(uVar13,"avdd1");
                                if (iVar16 != 0) {
                                    iVar16 = 2;
                                    goto code_r0x080013bc;
                                }
                                iVar16 = strstr(uVar13,"avdd2");
                                if (iVar16 != 0) {
                                    iVar16 = 3;
                                    goto code_r0x080013bc;
                                }
                                uVar14 = 0x80005c1;
code_r0x080016c8:
                                _printk(uVar14,uVar13);
code_r0x080016e4:
                                uVar10 = 0xffffffea;
                                goto code_r0x080016e8;
                            }
code_r0x080013bc:
                            uVar5 = of_property_read_variable_u32_array(uVar15,"cell-index",iVar7 + 0x174,1,0);
                            if (uVar5 < 0) {
                                uVar10 = uVar5;
                                uVar14 = *(iVar7 + 0x38);
                                uVar13 = 0x80007f5;
code_r0x08001698:
                                _printk(uVar13,uVar14,uVar10);
code_r0x080016e8:
                                uVar14 = *(iVar7 + 0x38);
                                uVar13 = 0x8000716;
                                goto code_r0x080016f4;
                            }
                            uVar5 = of_property_read_variable_u8_array(uVar15,0x8000624,iVar7,1,0);
                            if (uVar5 < 0) {
                                uVar14 = *(iVar7 + 0x38);
                                uVar10 = uVar5;
                                uVar13 = 0x8000362;
                                goto code_r0x08001698;
                            }
                            uVar5 = of_property_read_string(uVar15,"type",&uStack_a0);
                            uVar13 = uStack_a0;
                            if (uVar5 < 0) {
                                uVar14 = *(iVar7 + 0x38);
                                uVar10 = uVar5;
                                uVar13 = 0x80003ef;
                                goto code_r0x08001698;
                            }
                            iVar4 = strcmp(uStack_a0,"dvdd");
                            if (iVar4 != 0) {
                                iVar4 = strcmp(uVar13,"avdd");
                                if (iVar4 == 0) {
                                    uVar12 = 1;
                                    goto code_r0x0800144c;
                                }
                                _printk(0x8000489,*(iVar7 + 0x38),*(iVar7 + 0x170));
                                goto code_r0x080016e4;
                            }
                            uVar12 = 0;
code_r0x0800144c:
                            puVar1 = iVar7 + 0x38;
                            *(iVar7 + 0x170) = uVar12;
                            iVar9 = of_get_regulator_init_data(uVar14,uVar15,puVar1);
                            if (iVar9 == 0) {
                                _printk(0x80007d1,*puVar1);
                                uVar10 = 0xffffffc3;
                                goto code_r0x080016e8;
                            }
                            if (*(iVar9 + 8) == 0) {
                                uVar13 = *puVar1;
                                uVar14 = 0x8000655;
                                goto code_r0x080016c8;
                            }
                            iVar16 = iVar16 * 0x18;
                            iVar2 = *(iVar16 + 0x8000ad0);
                            *(iVar9 + 0x40) = *(iVar9 + 0x40) | 9;
                            *(iVar9 + 0x44) = *(iVar9 + 0x14);
                            iVar4 = *(iVar16 + 0x8000ad4);
                            uVar5 = *(iVar16 + 0x8000ad8);
                            *(iVar7 + 0x10) = 0;
                            *(iVar7 + 4) = iVar2;
                            *(iVar7 + 0x84) = 0;
                            *(iVar7 + 0x78) = obj.wl2866d_regulator_ops;
                            uVar3 = 0;
                            if (uVar5 != 0) {
                                uVar3 = (iVar4 - iVar2) / uVar5;
                            }
                            uVar13 = *(iVar9 + 8);
                            *(iVar7 + 0x90) = iVar2;
                            *(iVar7 + 0x94) = uVar5;
                            *(iVar7 + 0x38) = uVar13;
                            *(iVar7 + 0x70) = uVar3 + 1;
                            uStack_98 = uVar14;
                            iStack_90 = iVar9;
                            iStack_88 = iVar7;
                            uStack_80 = uVar15;
                            uVar10 = devm_regulator_register(uVar14,puVar1,&uStack_98);
                            *(iVar7 + 0x30) = uVar10;
                            if (uVar10 < 0xfffffffffffff001) {
                                iVar4 = devm_regulator_debug_register(uVar14,uVar10);
                                if (iVar4 != 0) {
                                    _printk(0x8000716,*puVar1,iVar4);
                                }
                            }
                            else {
                                _printk(0x8000716,*puVar1,uVar10 & 0xffffffff);
                                if (uVar10 < 0) goto code_r0x080016e8;
                            }
                        }
                        uVar13 = *(iVar6 + 0x10);
                        uVar10 = uStack_98 >> 8;
                        uStack_98 = CONCAT71(uVar10,0xff);
                        uVar11 = regmap_bulk_write(uVar13,2,&uStack_98,1);
                        uVar10 = uVar11 & 0xffffffff;
                        if (uVar11 < 0) {
                            _printk(0x80002f1,2);
                            usleep_range_state(500000,0x7a184,2);
                            iVar4 = regmap_bulk_write(uVar13,2,&uStack_98,1);
                            uVar13 = 0x8000392;
                            if (-1 < iVar4) {
                                iVar4 = -0x16;
                                uVar13 = 0x8000448;
                            }
                            _printk(uVar13,2);
                            _printk(0x80006a9,iVar4);
                            uVar10 = 0;
                        }
                        *(arg1 + 0xb8) = iVar6;
                        goto code_r0x08001554;
                    }
                    uVar13 = 0x80005ec;
                }
                _printk(uVar13,uVar10);
                uVar10 = 0xffffffea;
                goto code_r0x08001554;
            }
        }
        uVar10 = 0xffffffed;
    }
code_r0x08001554:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_68) {
        iVar8 = __stack_chk_fail();
        *(iVar8 + 0xb8) = 0;
        return 0;
    }
    return uVar10 & 0xffffffff;
}


// ===== sym.wl2866d_pmic_remove @ 0x08001714 (size 24) =====

ulong sym.wl2866d_pmic_remove(int64_t arg1)

{
    *(arg1 + 0xb8) = 0;
    return 0;
}


// ===== sym.wl2866d_regulator_set_voltage @ 0x0800172c (size 432) =====

uint64_t sym.wl2866d_regulator_set_voltage(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int iVar1;
    uchar uVar2;
    int iVar3;
    uint32_t uVar4;
    uchar *puVar5;
    ulong uVar6;
    int64_t iVar7;
    ulong uVar8;
    int iVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar10;
    uint64_t uVar11;
    ulong unaff_x30;
    uint8_t auStack_7c [4];
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    uint64_t uStack_60;
    uint64_t uStack_50;
    uchar *puStack_48;
    uchar auStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    uVar11 = arg1 & 0xffffffff;
    puVar5 = rdev_get_drvdata();
    if (**(puVar5 + 8) == '\0') {
        iVar3 = 6000;
        if (*(puVar5 + 0x170) != 0) {
            iVar3 = 0x30d4;
        }
        iVar9 = 0;
        if (iVar3 != 0) {
            iVar9 = (arg1 + iVar3 + -1) / iVar3;
        }
        iVar9 = iVar9 * iVar3;
        if (arg2 < iVar9) {
            _printk(0x800041b,*(puVar5 + 0x38));
            uVar10 = 0xffffffea;
        }
        else {
            uVar11 = *(puVar5 + 0x20);
            iVar1 = -600000;
            if (*(puVar5 + 0x170) != 0) {
                iVar1 = -1200000;
            }
            auStack_3c[0] = 0;
            if (iVar3 != 0) {
                auStack_3c[0] = (iVar9 + iVar1) / iVar3;
            }
            uVar2 = *puVar5;
            iVar3 = regmap_bulk_write(uVar11,uVar2,auStack_3c,1);
            if (iVar3 < 0) {
                _printk(0x80002f1,uVar2);
                usleep_range_state(500000,0x7a184,2);
                uVar4 = regmap_bulk_write(uVar11,uVar2,auStack_3c,1);
                uVar6 = 0x8000392;
                if (-1 < uVar4) {
                    uVar4 = 0xffffffea;
                    uVar6 = 0x8000448;
                }
                uVar10 = uVar4;
                _printk(uVar6,uVar2);
                _printk(0x800062e,*(puVar5 + 0x38),uVar10);
            }
            else {
                uVar10 = 0;
                *(puVar5 + 4) = iVar9;
            }
        }
    }
    else {
        uVar10 = -(*(puVar5 + 4) < arg1 || arg2 < *(puVar5 + 4));
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_38) {
        return uVar10;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.wl2866d_regulator_get_voltage;
    pcStack_68 = sym.wl2866d_regulator_get_voltage;
    iVar7 = sp_el0;
    iStack_78 = *(iVar7 + 0x5e0);
    puStack_70 = &stack0xffffffffffffffd0;
    uStack_60 = uVar11;
    uStack_50 = uVar10;
    puStack_48 = puVar5;
    puVar5 = rdev_get_drvdata();
    auStack_7c[0] = 0;
    if (**(puVar5 + 8) == '\0') {
        uVar6 = *(puVar5 + 0x20);
        uVar2 = *puVar5;
        iVar3 = regmap_bulk_read(uVar6,uVar2,auStack_7c,1);
        if (iVar3 < 0) {
            _printk(0x8000822,uVar2);
            usleep_range_state(500000,0x7a184,2);
            uVar4 = regmap_bulk_read(uVar6,uVar2,auStack_7c,1);
            uVar6 = 0x800031a;
            if (-1 < uVar4) {
                uVar4 = 0xffffffea;
                uVar6 = 0x8000792;
            }
            uVar11 = uVar4;
            _printk(uVar6,uVar2);
            _printk(0x8000679,*(puVar5 + 0x38),uVar11);
        }
        else {
            if (*(puVar5 + 0x170) == 0) {
                iVar9 = 6000;
                iVar3 = 600000;
            }
            else {
                iVar9 = 0x30d4;
                iVar3 = 1200000;
            }
            uVar11 = iVar3 + auStack_7c[0] * iVar9;
        }
    }
    else {
        uVar11 = *(puVar5 + 4);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_78) {
        return uVar11;
    }
    uVar6 = __stack_chk_fail();
    *extraout_x18_00 = sym.wl2866d_regulator_enable;
    iVar7 = rdev_get_drvdata();
    if (**(iVar7 + 8) == '\0') {
        uVar4 = sym.wl2866d_regulator_get_voltage(uVar6);
        if (uVar4 < 0) {
            uVar8 = *(iVar7 + 0x38);
            uVar6 = 0x8000849;
        }
        else {
            uVar11 = 1 << (*(iVar7 + 0x174) & 0x1f);
            uVar4 = sym.wl2866d_masked_write(*(iVar7 + 0x20),uVar11,uVar11);
            if (-1 < uVar4) {
                *(iVar7 + 0x10) = 1;
                goto code_r0x08001a98;
            }
            uVar8 = *(iVar7 + 0x38);
            uVar6 = 0x80004db;
        }
        _printk(uVar6,uVar8,uVar4);
    }
    else {
        uVar4 = *(iVar7 + 0x10) - 1;
    }
code_r0x08001a98:
    return uVar4;
}


// ===== sym.wl2866d_regulator_get_voltage @ 0x080018dc (size 336) =====

int sym.wl2866d_regulator_get_voltage(void)

{
    uchar uVar1;
    int iVar2;
    uchar *puVar3;
    ulong uVar4;
    int64_t iVar5;
    uint64_t arg2;
    ulong uVar6;
    int iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint8_t auStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    puVar3 = rdev_get_drvdata();
    auStack_3c[0] = 0;
    if (**(puVar3 + 8) == '\0') {
        uVar4 = *(puVar3 + 0x20);
        uVar1 = *puVar3;
        iVar2 = regmap_bulk_read(uVar4,uVar1,auStack_3c,1);
        if (iVar2 < 0) {
            _printk(0x8000822,uVar1);
            usleep_range_state(500000,0x7a184,2);
            iVar2 = regmap_bulk_read(uVar4,uVar1,auStack_3c,1);
            uVar4 = 0x800031a;
            if (-1 < iVar2) {
                iVar2 = -0x16;
                uVar4 = 0x8000792;
            }
            _printk(uVar4,uVar1);
            _printk(0x8000679,*(puVar3 + 0x38),iVar2);
        }
        else {
            if (*(puVar3 + 0x170) == 0) {
                iVar7 = 6000;
                iVar2 = 600000;
            }
            else {
                iVar7 = 0x30d4;
                iVar2 = 1200000;
            }
            iVar2 = iVar2 + auStack_3c[0] * iVar7;
        }
    }
    else {
        iVar2 = *(puVar3 + 4);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_38) {
        uVar4 = __stack_chk_fail();
        *extraout_x18 = sym.wl2866d_regulator_enable;
        iVar5 = rdev_get_drvdata();
        if (**(iVar5 + 8) == '\0') {
            iVar2 = sym.wl2866d_regulator_get_voltage(uVar4);
            if (iVar2 < 0) {
                uVar6 = *(iVar5 + 0x38);
                uVar4 = 0x8000849;
            }
            else {
                arg2 = 1 << (*(iVar5 + 0x174) & 0x1f);
                iVar2 = sym.wl2866d_masked_write(*(iVar5 + 0x20),arg2,arg2);
                if (-1 < iVar2) {
                    *(iVar5 + 0x10) = 1;
                    return iVar2;
                }
                uVar6 = *(iVar5 + 0x38);
                uVar4 = 0x80004db;
            }
            _printk(uVar4,uVar6,iVar2);
        }
        else {
            iVar2 = *(iVar5 + 0x10) + -1;
        }
        return iVar2;
    }
    return iVar2;
}


// ===== sym.wl2866d_regulator_enable @ 0x08001a2c (size 180) =====

int sym.wl2866d_regulator_enable(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    ulong uVar3;
    uint64_t arg2;
    ulong uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = rdev_get_drvdata();
    if (**(iVar2 + 8) == '\0') {
        iVar1 = sym.wl2866d_regulator_get_voltage(arg1);
        if (iVar1 < 0) {
            uVar4 = *(iVar2 + 0x38);
            uVar3 = 0x8000849;
        }
        else {
            arg2 = 1 << (*(iVar2 + 0x174) & 0x1f);
            iVar1 = sym.wl2866d_masked_write(*(iVar2 + 0x20),arg2,arg2);
            if (-1 < iVar1) {
                *(iVar2 + 0x10) = 1;
                return iVar1;
            }
            uVar4 = *(iVar2 + 0x38);
            uVar3 = 0x80004db;
        }
        _printk(uVar3,uVar4,iVar1);
    }
    else {
        iVar1 = *(iVar2 + 0x10) + -1;
    }
    return iVar1;
}


// ===== sym.wl2866d_regulator_disable @ 0x08001ae0 (size 136) =====

int sym.wl2866d_regulator_disable(void)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = rdev_get_drvdata();
    if (**(iVar2 + 8) == '\0') {
        iVar1 = sym.wl2866d_masked_write(*(iVar2 + 0x20),1 << (*(iVar2 + 0x174) & 0x1f),0);
        if (iVar1 < 0) {
            _printk(0x80004b0,*(iVar2 + 0x38),iVar1);
        }
        else {
            *(iVar2 + 0x10) = 0;
        }
    }
    else {
        iVar1 = -*(iVar2 + 0x10);
    }
    return iVar1;
}


// ===== sym.wl2866d_regulator_is_enabled @ 0x08001b68 (size 308) =====

uint64_t sym.wl2866d_regulator_is_enabled(ulong param_1,ulong param_2,uint32_t param_3)

{
    uchar uVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int iVar4;
    uchar *puVar5;
    uint64_t uVar6;
    uint8_t *puVar7;
    ulong in_x7;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar8;
    ulong uVar9;
    ulong unaff_x30;
    uchar auVar10 [12];
    uchar *puVar11;
    code *pcVar12;
    uint8_t auStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    puVar11 = &stack0xffffffffffffffd0;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    puVar5 = rdev_get_drvdata();
    auStack_3c[0] = 0;
    if (**(puVar5 + 8) == '\0') {
        uVar9 = *(puVar5 + 0x20);
        puVar7 = auStack_3c;
        uVar1 = *puVar5;
        iVar4 = regmap_bulk_read(uVar9,uVar1,puVar7,1);
        param_3 = puVar7;
        if (iVar4 < 0) {
            _printk(0x8000822,uVar1);
            usleep_range_state(500000,0x7a184,2);
            uVar3 = regmap_bulk_read(uVar9,uVar1,auStack_3c,1);
            uVar9 = 0x800031a;
            if (-1 < uVar3) {
                uVar3 = 0xffffffea;
                uVar9 = 0x8000792;
            }
            uVar8 = uVar3;
            _printk(uVar9,uVar1);
            uVar6 = uVar8;
            _printk(0x8000505,*(puVar5 + 0x38),uVar8);
            param_3 = uVar6;
        }
        else {
            uVar8 = auStack_3c[0] >> (*(puVar5 + 0x174) & 0x1f) & 1;
        }
    }
    else {
        uVar8 = puVar5[0x10];
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_38) {
        auVar10 = __stack_chk_fail();
        *extraout_x18 = sym.wl2866d_masked_write;
        pcVar12 = sym.wl2866d_masked_write;
        uVar3 = auVar10._8_4_ & 0xff;
        param_3 = param_3 & 0xff;
        uVar6 = regmap_update_bits_base
                          (auVar10._0_8_,0xe,uVar3,param_3,0,0,0,in_x7,puVar11,sym.wl2866d_masked_write);
        if (uVar6 < 0) {
            _printk(0x8000742,param_3,0xe,uVar3);
            usleep_range_state(500000,0x7a184,2);
            iVar4 = regmap_update_bits_base(auVar10._0_8_,0xe,uVar3,param_3,0,0,0,in_x7,puVar11,pcVar12);
            uVar9 = 0x8000742;
            if (-1 < iVar4) {
                uVar9 = 0x8000565;
            }
            _printk(uVar9,param_3,0xe,uVar3);
            uVar6 = 0xffffffea;
        }
        return uVar6;
    }
    return uVar8;
}


// ===== sym.wl2866d_masked_write @ 0x08001c9c (size 220) =====

ulong sym.wl2866d_masked_write(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = arg2 & 0xff;
    uVar2 = arg3 & 0xff;
    uVar4 = regmap_update_bits_base(arg1,0xe,uVar1,uVar2,0,0,0);
    if (uVar4 < 0) {
        _printk(0x8000742,uVar2,0xe,uVar1);
        usleep_range_state(500000,0x7a184,2);
        iVar3 = regmap_update_bits_base(arg1,0xe,uVar1,uVar2,0,0,0);
        uVar4 = 0x8000742;
        if (-1 < iVar3) {
            uVar4 = 0x8000565;
        }
        _printk(uVar4,uVar2,0xe,uVar1);
        uVar4 = 0xffffffea;
    }
    return uVar4;
}


// ===== sym.wl2866d_pmic_suspend @ 0x08001d78 (size 28) =====

ulong sym.wl2866d_pmic_suspend(int64_t arg1)

{
    **(arg1 + 0x98) = 1;
    return 0;
}


// ===== sym.wl2866d_pmic_resume @ 0x08001d94 (size 28) =====

ulong sym.wl2866d_pmic_resume(int64_t arg1)

{
    **(arg1 + 0x98) = 0;
    return 0;
}


// ===== sym.__cfi_check_fail @ 0x08001db0 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001df4

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
    //switch table (4 cases) at 0x8000270
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001e08);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001e14 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    i2c_register_driver(obj.__this_module,obj.wl2866d_pmic_driver);
    return;
}


// ===== sym.cleanup_module @ 0x08001e48 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    i2c_del_driver(obj.wl2866d_pmic_driver);
    return;
}

