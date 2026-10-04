// decompiled from pinctrl-spmi-gpio by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08004000 (size 1268) =====

//WARNING: Switch with 1 destination removed at 0x08005f88

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x15d75c9cb8be166) {
        if (arg1 < -0x43677211936b66e5) {
            if (arg1 < -0x587ffabaca612230) {
                if (arg1 == -0x77b69042ae34e22a) {
                    pcVar2 = sym.pmic_gpio_dbg_show.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt;
                }
                else if (arg1 == -0x77a0775a4580c3cb) {
                    pcVar2 = sym.gpiochip_generic_free.cfi_jt;
                }
                else {
                    if (arg1 != -0x68e06357d3edcb86) goto code_r0x08005f48;
                    pcVar2 = sym.handle_level_irq.cfi_jt;
                }
            }
            else if (arg1 == -0x587ffabaca612230) {
                pcVar2 = sym.pmic_gpio_set.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt;
            }
            else if (arg1 == -0x57be845bca9148ef) {
                pcVar2 = sym.pmic_gpio_restore.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt;
            }
            else {
                if (arg1 != -0x49d1ecfad83ab2e1) goto code_r0x08005f48;
                pcVar2 = sym.pmic_gpio_child_offset_to_irq.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt;
            }
        }
        else if (arg1 < -0x1cd02ce2833ba7b2) {
            if (arg1 == -0x43677211936b66e5) {
                pcVar2 = sym.pmic_gpio_domain_translate.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt;
            }
            else {
                if (arg1 == -0x3557318fb8d07b71) {
                    pcVar2 = sym.pmic_gpio_probe.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt;
                    goto code_r0x08004480;
                }
                if (arg1 != -0x2996fdcb0852b944) goto code_r0x08005f48;
                pcVar2 = sym.pmic_gpio_config_dbg_show.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt;
            }
        }
        else if (arg1 < -0x180cff1a9f8f2532) {
            if (arg1 != -0x1cd02ce2833ba7b2) {
                if (arg1 != -0x1cb09a6eed38ba56) goto code_r0x08005f48;
                pcVar2 = sym.pmic_gpio_get_groups_count.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt;
                goto code_r0x08004480;
            }
            pcVar2 = sym.pmic_gpio_config_get.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt;
        }
        else if (arg1 == -0x180cff1a9f8f2532) {
            pcVar2 = sym.pmic_gpio_get_group_pins.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt;
        }
        else {
            if (arg1 != 0xf0e53c515545f2) goto code_r0x08005f48;
            pcVar2 = sym.pmic_gpio_config_set.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt;
        }
    }
    else if (arg1 < 0x377e9528983fbb7e) {
        if (arg1 < 0x3b314f7e6c3546b) {
            if (arg1 == 0x15d75c9cb8be166) {
                pcVar2 = sym.pmic_gpio_get_function_groups.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt;
            }
            else if (arg1 == 0x266bc786d100c37) {
                pcVar2 = sym.pmic_gpio_child_to_parent_hwirq.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt;
            }
            else {
                if (arg1 != 0x2b3a43e29242445) goto code_r0x08005f48;
                pcVar2 = sym.init_module.cfi_jt;
            }
        }
        else {
            if (arg1 < 0x2ac5eccd0f9cd2c2) {
                if (arg1 == 0x3b314f7e6c3546b) {
                    pcVar2 = sym.pmic_gpio_get.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt;
                }
                else {
                    if (arg1 != 0x12432ee19d152236) goto code_r0x08005f48;
                    pcVar2 = sym.irq_chip_mask_parent.cfi_jt;
                }
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 3) {
                    return;
                }
                goto code_r0x08005f48;
            }
            if (arg1 == 0x2ac5eccd0f9cd2c2) {
                pcVar2 = sym.pmic_gpio_populate_parent_fwspec.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt;
            }
            else {
                if (arg1 != 0x365d4a3aad0aad08) goto code_r0x08005f48;
                pcVar2 = sym.pmic_gpio_direction_output.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt;
            }
        }
    }
    else if (arg1 < 0x4dbf1e18d22acd6a) {
        if (arg1 == 0x377e9528983fbb7e) {
            pcVar2 = sym.pinctrl_utils_free_map.cfi_jt;
        }
        else {
            if (arg1 != 0x3a5b8105ef6fba43) {
                if (arg1 != 0x4bc94621579436b9) goto code_r0x08005f48;
                pcVar2 = sym.pmic_gpio_get_function_name.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt;
                goto code_r0x08004480;
            }
            pcVar2 = sym.pinconf_generic_dt_node_to_map_group.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt;
        }
    }
    else if (arg1 < 0x59900d2c5a310a08) {
        if (arg1 != 0x4dbf1e18d22acd6a) {
            if (arg1 != 0x566cdc1d6ec224d9) goto code_r0x08005f48;
            pcVar2 = sym.irq_chip_set_wake_parent.cfi_jt;
code_r0x08004480:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08005f48;
        }
        pcVar2 = sym.pmic_gpio_of_xlate.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt;
    }
    else if (arg1 == 0x59900d2c5a310a08) {
        pcVar2 = sym.pmic_gpio_set_mux.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08005f48;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08005f48:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8005f9c);
    (*pcVar1)();
}


// ===== sym.pmic_gpio_config_set.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt @ 0x08004500 (size 8) =====

int sym.pmic_gpio_config_set.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt
              (int64_t param_1,uint64_t param_2,int64_t param_3,int param_4)

{
    char cVar1;
    uint32_t uVar2;
    uchar uVar3;
    int iVar4;
    ulong *puVar5;
    uint64_t uVar6;
    int iVar7;
    uint32_t uVar8;
    ulong uVar9;
    ulong *in_x18;
    uint16_t *puVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar5 = pinctrl_dev_get_drvdata();
    puVar10 = *(*(*(param_1 + 0x10) + 8) + (param_2 & 0xffffffff) * 0x18 + 0x10);
    puVar10[1] = 0x101;
    if (param_4 != 0) {
        iVar7 = 0;
        do {
            uVar9 = *(param_3 + iVar7 * 8);
            iVar4 = -0x16;
            uVar8 = uVar9;
            if (0x83 < (uVar8 & 0xff) - 1) {
                return -0x16;
            }
            uVar2 = uVar9 >> 8 & 0xffffff;
            switch(uVar8 & 0xff) {
            case 1:
code_r0x08005534:
                puVar10[0xc] = 5;
                puVar10[0xd] = 0;
                break;
            case 2:
                *(puVar10 + 1) = 0;
                break;
            case 3:
                if (uVar8 < 0x100) goto code_r0x08005534;
                puVar10[0xc] = 4;
                puVar10[0xd] = 0;
                break;
            default:
                goto code_r0x0800587c;
            case 5:
                puVar10[0xc] = 0;
                puVar10[0xd] = 0;
                break;
            case 6:
                if (*(puVar10 + 5) == '\0') {
                    return -0x16;
                }
                puVar10[10] = 1;
                puVar10[0xb] = 0;
                break;
            case 7:
                if (*(puVar10 + 5) == '\0') {
                    return -0x16;
                }
                puVar10[10] = 2;
                puVar10[0xb] = 0;
                break;
            case 8:
                puVar10[10] = 0;
                puVar10[0xb] = 0;
                break;
            case 0xc:
                *(puVar10 + 7) = 0xff < uVar8;
                break;
            case 0x11:
                *(puVar10 + 3) = 1;
                *(puVar10 + 2) = 0xff < uVar8;
                break;
            case 0x12:
                *(puVar10 + 3) = 0xff < uVar8;
                break;
            case 0x14:
                if (*(puVar10 + 6) <= uVar2) {
                    return -0x16;
                }
                *(puVar10 + 8) = uVar2;
                break;
            case 0x80:
                if (0x3ff < uVar8) {
                    return -0x16;
                }
                *(puVar10 + 0xc) = uVar2;
                break;
            case 0x81:
                if (0x3ff < uVar8) {
                    return -0x16;
                }
                *(puVar10 + 0xe) = uVar2;
                break;
            case 0x82:
                if (*(puVar10 + 9) == '\0') {
                    return -0x16;
                }
                if (0x4ff < uVar8) {
                    return -0x16;
                }
                *(puVar10 + 0x12) = uVar2;
                break;
            case 0x83:
                if (*(puVar10 + 9) == '\0') {
                    return -0x16;
                }
                *(puVar10 + 4) = 1;
                break;
            case 0x84:
                if (0x4ff < uVar8) {
                    return -0x16;
                }
                *(puVar10 + 0x14) = uVar2;
            }
            iVar7 = iVar7 + 1;
        } while (param_4 != iVar7);
    }
    iVar4 = regmap_write(puVar5[1],*puVar10 + 0x41,*(puVar10 + 8));
    if (iVar4 < 0) {
        uVar9 = 0x41;
        goto code_r0x08005868;
    }
    iVar4 = regmap_write(puVar5[1],*puVar10 + 0x42,*(puVar10 + 0xc));
    if (iVar4 < 0) {
        uVar9 = 0x42;
        goto code_r0x08005868;
    }
    iVar4 = regmap_write(puVar5[1],*puVar10 + 0x45,*(puVar10 + 0xe) | *(puVar10 + 10) << 4);
    if (iVar4 < 0) {
        uVar9 = 0x45;
        goto code_r0x08005868;
    }
    if (*(puVar10 + 0x14) == 0) {
        uVar6 = 0;
    }
    else {
        uVar8 = *(puVar10 + 0x14) - 1;
        if (*(puVar10 + 9) == '\0') {
            uVar6 = 1L << (uVar8 & 0x3f);
        }
        else {
            uVar6 = uVar8 | 0x80;
        }
    }
    iVar4 = regmap_write(puVar5[1],*puVar10 + 0x43,uVar6);
    if (iVar4 < 0) {
        uVar9 = 0x43;
        goto code_r0x08005868;
    }
    if (puVar10[4] == '\0') {
        if ((puVar10[3] == '\0') || (*(puVar10 + 7) == '\0')) {
            uVar3 = puVar10[3] != '\0';
            uVar8 = uVar3;
            cVar1 = *(puVar10 + 9);
            goto joined_r0x080057d0;
        }
        uVar3 = 2;
        uVar8 = 2;
        if (*(puVar10 + 9) != '\0') goto code_r0x08005744;
code_r0x080057d4:
        iVar4 = regmap_write(puVar5[1],*puVar10 + 0x40,*(puVar10 + 0x10) << 1 | uVar8 << 4 | puVar10[2]);
        if (iVar4 < 0) {
code_r0x08005854:
            uVar9 = 0x40;
            goto code_r0x08005868;
        }
    }
    else {
        uVar3 = 3;
        uVar8 = 3;
        cVar1 = *(puVar10 + 9);
joined_r0x080057d0:
        if (cVar1 == '\0') goto code_r0x080057d4;
code_r0x08005744:
        iVar4 = regmap_write(puVar5[1],*puVar10 + 0x40,uVar3);
        if (iVar4 < 0) goto code_r0x08005854;
        iVar4 = regmap_write(puVar5[1],*puVar10 + 0x4a,*(puVar10 + 0x12) + -1);
        if (iVar4 < 0) {
            uVar9 = 0x4a;
            goto code_r0x08005868;
        }
        iVar4 = regmap_write(puVar5[1],*puVar10 + 0x44,*(puVar10 + 0x10) & 0xf | puVar10[2] << 7);
        if (iVar4 < 0) {
            uVar9 = 0x44;
            goto code_r0x08005868;
        }
    }
    iVar4 = regmap_write(puVar5[1],*puVar10 + 0x46,puVar10[1] << 7);
    if (-1 < iVar4) {
        return iVar4;
    }
    uVar9 = 0x46;
code_r0x08005868:
    _dev_err(*puVar5,"write 0x%x failed\n",uVar9);
code_r0x0800587c:
    return iVar4;
}


// ===== sym.handle_level_irq.cfi_jt @ 0x08004508 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.handle_level_irq.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.pmic_gpio_populate_parent_fwspec.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt @ 0x08004510 (size 8) =====

void sym.pmic_gpio_populate_parent_fwspec.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt
               (int64_t param_1,uint param_2,uint param_3)

{
    uint8_t uVar1;
    int64_t iVar2;
    ulong *puVar3;
    int64_t iVar4;
    ulong uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = gpiochip_get_data();
    puVar3 = kmem_cache_alloc_trace(_handle_level_irq,0xdc0,0x50);
    if (puVar3 != NULL) {
        iVar4 = *(param_1 + 0x128);
        uVar1 = *(iVar2 + 0x3a8);
        *(puVar3 + 3) = param_3;
        uVar5 = *(iVar4 + 0x30);
        *(puVar3 + 1) = 4;
        *(puVar3 + 0xc) = uVar1;
        *(puVar3 + 2) = param_2;
        *puVar3 = uVar5;
    }
    return;
}


// ===== sym.pinctrl_utils_free_map.cfi_jt @ 0x08004518 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.pinctrl_utils_free_map.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.pinconf_generic_dt_node_to_map_group.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt @ 0x08004520 (size 8) =====

void sym.pinconf_generic_dt_node_to_map_group.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pinconf_generic_dt_node_to_map();
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08004528 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.pmic_gpio_probe.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08004530 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.pmic_gpio_probe.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.pmic_gpio_set.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt @ 0x08004538 (size 8) =====

void sym.pmic_gpio_set.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt(ulong param_1,uint64_t param_2,int param_3)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar3;
    ulong unaff_x30;
    uchar auVar4 [16];
    uint64_t uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    iVar1 = gpiochip_get_data();
    uStack_30 = param_3 << 8 | 0x11;
    sym.pmic_gpio_config_set(*(iVar1 + 0x10),param_2 & 0xffffffff,&uStack_30,1);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return;
    }
    auVar4 = __stack_chk_fail();
    iVar2 = auVar4._8_8_;
    *extraout_x18 = sym.pmic_gpio_dbg_show;
    iVar1 = gpiochip_get_data(iVar2);
    if (*(iVar2 + 0x94) != 0) {
        uVar3 = 0;
        do {
            sym.pmic_gpio_config_dbg_show(*(iVar1 + 0x10),auVar4._0_8_,uVar3);
            seq_puts(auVar4._0_8_,0x8002b63);
            uVar3 = uVar3 + 1;
        } while (uVar3 < *(iVar2 + 0x94));
    }
    return;
}


// ===== sym.pmic_gpio_dbg_show.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt @ 0x08004540 (size 8) =====

void sym.pmic_gpio_dbg_show.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    ulong *in_x18;
    uint32_t uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = gpiochip_get_data(param_2);
    if (*(param_2 + 0x94) != 0) {
        uVar2 = 0;
        do {
            sym.pmic_gpio_config_dbg_show(*(iVar1 + 0x10),param_1,uVar2);
            seq_puts(param_1,0x8002b63);
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(param_2 + 0x94));
    }
    return;
}


// ===== sym.gpiochip_generic_free.cfi_jt @ 0x08004548 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.gpiochip_generic_free.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.pmic_gpio_restore.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt @ 0x08004550 (size 8) =====

int sym.pmic_gpio_restore.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    uint32_t uVar4;
    int64_t arg1;
    ulong *puVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar5 = *(param_1 + 0x98);
    arg1 = puVar5[2];
    iVar3 = *(arg1 + 0x10);
    uVar1 = *(iVar3 + 0x10);
    if (uVar1 == 0) {
        return 0;
    }
    iVar6 = 0;
    uVar4 = 0;
    iVar2 = 0;
    while ((*(*(*(iVar3 + 8) + iVar6 + 0x10) + 3) == '\0' ||
           (iVar2 = sym.pmic_gpio_config_set(arg1,uVar4,0,0), -1 < iVar2))) {
        if (uVar1 * 0x18 + -0x18 == iVar6) {
            return iVar2;
        }
        iVar3 = *(arg1 + 0x10);
        uVar4 = uVar4 + 1;
        iVar6 = iVar6 + 0x18;
    }
    _dev_err(*puVar5,"Failed to restore pin %s[%d] ret=%d\n",*(*(*(arg1 + 0x10) + 8) + iVar6 + 8),uVar4,iVar2);
    return iVar2;
}


// ===== sym.pmic_gpio_domain_translate.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt @ 0x08004558 (size 8) =====

ulong sym.pmic_gpio_domain_translate.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt
                (int64_t param_1,int64_t param_2,uint64_t *param_3,uint *param_4)

{
    uint32_t uVar1;
    
    if (((*(param_2 + 8) == 2) && (uVar1 = *(param_2 + 0xc), uVar1 != 0)) && (uVar1 <= *(*(param_1 + 0x20) + 0x94))) {
        *param_3 = uVar1 - 1;
        *param_4 = *(param_2 + 0x10);
        return 0;
    }
    return 0xffffffea;
}


// ===== sym.irq_chip_mask_parent.cfi_jt @ 0x08004560 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.irq_chip_mask_parent.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.irq_chip_ack_parent.cfi_jt @ 0x08004568 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.irq_chip_ack_parent.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.irq_chip_unmask_parent.cfi_jt @ 0x08004570 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.irq_chip_unmask_parent.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.irq_chip_set_wake_parent.cfi_jt @ 0x08004578 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.irq_chip_set_wake_parent.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.irq_chip_set_type_parent.cfi_jt @ 0x08004580 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.irq_chip_set_type_parent.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.pmic_gpio_get_groups_count.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt @ 0x08004588 (size 8) =====

uint sym.pmic_gpio_get_groups_count.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt(int64_t param_1)

{
    return *(*(param_1 + 0x10) + 0x10);
}


// ===== sym.pmic_gpio_get_functions_count.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt @ 0x08004590 (size 8) =====

ulong sym.pmic_gpio_get_functions_count.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt(void)

{
    return 10;
}


// ===== sym.pmic_gpio_child_offset_to_irq.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt @ 0x08004598 (size 8) =====

int sym.pmic_gpio_child_offset_to_irq.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt(ulong param_1,int param_2)

{
    return param_2 + 1;
}


// ===== sym.pmic_gpio_child_to_parent_hwirq.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt @ 0x080045a0 (size 8) =====

ulong sym.pmic_gpio_child_to_parent_hwirq.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt
                (ulong param_1,int param_2,uint param_3,int *param_4,uint *param_5)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = gpiochip_get_data();
    *param_4 = *(iVar1 + 0x3a9) + param_2;
    *param_5 = param_3;
    return 0;
}


// ===== sym.pmic_gpio_get_function_groups.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt @ 0x080045a8 (size 8) =====

ulong sym.pmic_gpio_get_function_groups.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt
                (int64_t param_1,ulong param_2,ulong *param_3,uint *param_4)

{
    *param_3 = obj.pmic_gpio_groups;
    *param_4 = *(*(param_1 + 0x10) + 0x10);
    return 0;
}


// ===== sym.pmic_gpio_probe.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt @ 0x080045b0 (size 8) =====

uint64_t sym.pmic_gpio_probe.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    uchar auVar2 [16];
    code *pcVar3;
    uint32_t uVar4;
    int iVar5;
    int64_t *piVar6;
    ulong uVar7;
    int64_t iVar8;
    uint *puVar9;
    uint16_t *puVar10;
    int64_t *piVar11;
    uint64_t uVar12;
    int64_t *piVar13;
    char *pcVar14;
    int64_t iVar15;
    ulong *in_x18;
    uint64_t uVar16;
    ulong unaff_x30;
    uint32_t uStack_bc;
    uint64_t auStack_b8 [11];
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    auStack_b8[10] = *(iVar8 + 0x5e0);
    piVar13 = param_1 + 0x10;
    uStack_bc = 0;
    uVar4 = of_property_read_variable_u32_array(*(param_1 + 0x300),0x8002ba4,&uStack_bc,1,0);
    if (uVar4 < 0) {
        pcVar14 = "missing base address";
code_r0x08004c18:
        uVar16 = uVar4;
        _dev_err(piVar13,pcVar14);
    }
    else {
        iVar5 = device_get_match_data(piVar13);
        piVar6 = devm_kmalloc(piVar13,0x3b0,0xdc0);
        if (piVar6 != NULL) {
            uVar7 = *(param_1 + 0x70);
            *(param_1 + 0xa8) = piVar6;
            *piVar6 = piVar13;
            iVar8 = dev_get_regmap(uVar7,0);
            iVar15 = *(param_1 + 0x70);
            uVar16 = iVar5;
            piVar6[1] = iVar8;
            auVar2._8_8_ = 0;
            auVar2._0_8_ = uVar16;
            *(piVar6 + 0x75) = *(iVar15 + 0x398);
            *(piVar6 + 0x3a9) = uStack_bc >> 8;
            if ((((SUB168(auVar2 * ZEXT816(0x18),8) == 0) &&
                 (puVar9 = devm_kmalloc(piVar13,(uVar16 + iVar5 * 2) * 8,0xdc0), puVar9 != NULL)) &&
                (puVar10 = devm_kmalloc(piVar13,uVar16 * 0x2c,0xdc0), puVar10 != NULL)) &&
               (piVar11 = devm_kmalloc(piVar13,0x58,0xdc0), piVar11 != NULL)) {
                iVar15 = *(param_1 + 0x80);
                piVar11[3] = reloc.pmic_gpio_get_groups_count.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt;
                piVar11[4] = obj.pmic_gpio_pinmux_ops;
                piVar11[5] = obj.pmic_gpio_pinconf_ops;
                piVar11[6] = obj.__this_module;
                iVar8 = iVar15;
                if (iVar15 == 0) {
                    iVar8 = *piVar13;
                }
                *piVar11 = iVar8;
                piVar11[1] = puVar9;
                *(piVar11 + 2) = iVar5;
                *(piVar11 + 7) = 5;
                piVar11[8] = obj.pmic_gpio_bindings;
                piVar11[9] = obj.pmic_conf_items;
                if (0 < iVar5) {
                    *puVar9 = 0;
                    *(puVar9 + 4) = puVar10;
                    uVar7 = _obj.pmic_gpio_groups;
                    iVar8 = piVar6[1];
                    auStack_b8[0] = auStack_b8[0] & 0xffffffff00000000;
                    *puVar10 = uStack_bc;
                    *(puVar9 + 2) = uVar7;
                    uVar16 = regmap_read(iVar8,(uStack_bc & 0xffff) + 4,auStack_b8);
                    if (uVar16 < 0) {
                        uVar16 = uVar16 & 0xffffffff;
                        _dev_err(*piVar6,"read 0x%x failed\n",4);
                    }
                    else {
                        uVar16 = auStack_b8[0] & 0xffffffff;
                        if (-1 < auStack_b8[0]) {
                            if (auStack_b8[0] == 0x10) {
                                auStack_b8[0] = auStack_b8[0] & 0xffffffff00000000;
                                uVar16 = regmap_read(piVar6[1],*puVar10 + 5,auStack_b8);
                                if (uVar16 < 0) {
                                    uVar16 = uVar16 & 0xffffffff;
                                    _dev_err(*piVar6,"read 0x%x failed\n",5);
                                }
                                else {
                                    uVar16 = auStack_b8[0] & 0xffffffff;
                                    if (-1 < auStack_b8[0]) {
                                        if (auStack_b8[0] - 1U < 0x13) {
    //WARNING: Could not recover jumptable at 0x08004860. Too many branches
    //WARNING: Treating indirect jump as call
                                            uVar16 = (*(*((auStack_b8[0] - 1U) * 2 + 0x8000130) * 4 + 0x8004864))();
                                            return uVar16;
                                        }
                                        _dev_err(*piVar6,"unknown GPIO type 0x%x\n",uVar16);
                                        uVar16 = 0xffffffed;
                                    }
                                }
                            }
                            else {
                                _dev_err(*piVar6,"incorrect block type 0x%x at 0x%x\n",uVar16,*puVar10);
                                uVar16 = 0xffffffed;
                            }
                        }
                    }
                    goto code_r0x08004bc8;
                }
                piVar1 = piVar6 + 3;
                memcpy(piVar1,obj.pmic_gpio_gpio_template,0x270);
                piVar6[5] = piVar13;
                *(piVar6 + 0xac) = iVar5;
                *(piVar6 + 0x15) = 0xffffffff;
                if (iVar15 == 0) {
                    iVar15 = *piVar13;
                }
                piVar6[3] = iVar15;
                *(piVar6 + 0x4d) = 2;
                *(piVar6 + 0x17) = 0;
                uVar16 = devm_pinctrl_register(piVar13,piVar11,piVar6);
                piVar6[2] = uVar16;
                if (0xfffffffffffff000 < uVar16) goto code_r0x08004bc8;
                iVar8 = of_irq_find_parent(*(*piVar6 + 0x2f0));
                if (iVar8 == 0) {
code_r0x08004d60:
                    uVar16 = 0xfffffffa;
                    goto code_r0x08004bc8;
                }
                auStack_b8[8] = 0;
                auStack_b8[9] = 0;
                auStack_b8[6] = 0;
                auStack_b8[7] = 0;
                auStack_b8[4] = 0;
                auStack_b8[5] = 0;
                auStack_b8[2] = 0;
                auStack_b8[3] = 0;
                auStack_b8[1] = 0;
                auStack_b8[0] = iVar8 + 0x18U;
                iVar15 = irq_find_matching_fwspec(auStack_b8,1);
                if (iVar15 == 0) {
                    auStack_b8[8] = 0;
                    auStack_b8[9] = 0;
                    auStack_b8[6] = 0;
                    auStack_b8[7] = 0;
                    auStack_b8[4] = 0;
                    auStack_b8[5] = 0;
                    auStack_b8[2] = 0;
                    auStack_b8[3] = 0;
                    auStack_b8[1] = 0;
                    auStack_b8[0] = iVar8 + 0x18U;
                    iVar15 = irq_find_matching_fwspec(auStack_b8,0);
                    if (iVar15 == 0) goto code_r0x08004d60;
                }
                *(piVar6 + 0x37) = 0;
                piVar6[0x24] = piVar6 + 0x51;
                piVar6[0x52] = "spmi-gpio";
                piVar6[0x5f] = sym.irq_chip_set_wake_parent.cfi_jt;
                piVar6[0x57] = sym.irq_chip_ack_parent.cfi_jt;
                piVar6[0x36] = sym.handle_level_irq.cfi_jt;
                piVar6[0x58] = sym.irq_chip_mask_parent.cfi_jt;
                piVar6[0x5a] = sym.irq_chip_unmask_parent.cfi_jt;
                piVar6[0x5e] = sym.irq_chip_set_type_parent.cfi_jt;
                piVar6[0x74] = 4;
                iVar8 = 0;
                if (*(*piVar6 + 0x2f0) != 0) {
                    iVar8 = *(*piVar6 + 0x2f0) + 0x18;
                }
                piVar6[0x27] = iVar8;
                piVar6[0x28] = iVar15;
                piVar6[0x29] = sym.pmic_gpio_child_to_parent_hwirq.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt;
                piVar6[0x2a] = sym.pmic_gpio_populate_parent_fwspec.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt;
                piVar6[0x2b] = sym.pmic_gpio_child_offset_to_irq.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt;
                piVar6[0x35] = sym.pmic_gpio_domain_translate.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt;
                uVar4 = gpiochip_add_data_with_key(piVar1,piVar6,0,0);
                if (uVar4 == 0) {
                    iVar8 = of_find_property(*(param_1 + 0x300),"gpio-ranges",0);
                    if (iVar8 == 0) {
                        iVar8 = *(param_1 + 0x80);
                        if (iVar8 == 0) {
                            iVar8 = *piVar13;
                        }
                        uVar12 = gpiochip_add_pin_range(piVar1,iVar8,0,0,iVar5);
                        uVar16 = 0;
                        if (uVar12 != 0) {
                            uVar16 = uVar12 & 0xffffffff;
                            _dev_err(piVar13,"failed to add pin range\n");
                            gpiochip_remove(piVar1);
                        }
                    }
                    else {
                        uVar16 = 0;
                    }
                    goto code_r0x08004bc8;
                }
                piVar13 = *piVar6;
                pcVar14 = "can\'t add gpio chip\n";
                goto code_r0x08004c18;
            }
        }
        uVar16 = 0xfffffff4;
    }
code_r0x08004bc8:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == auStack_b8[10]) {
        return uVar16 & 0xffffffff;
    }
    __stack_chk_fail();
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x8004f2c);
    (*pcVar3)();
}


// ===== sym.pmic_gpio_remove.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt @ 0x080045b8 (size 8) =====

ulong sym.pmic_gpio_remove.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    gpiochip_remove(*(param_1 + 0xa8) + 0x18);
    return 0;
}


// ===== sym.pmic_gpio_of_xlate.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt @ 0x080045c0 (size 8) =====

int sym.pmic_gpio_of_xlate.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt(int64_t param_1,int64_t param_2,uint *param_3)

{
    if (*(param_1 + 0x250) < 2) {
        return -0x16;
    }
    if (param_3 != NULL) {
        *param_3 = *(param_2 + 0x10);
    }
    return *(param_2 + 0xc) + -1;
}


// ===== sym.pmic_gpio_get_function_name.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt @ 0x080045c8 (size 8) =====

ulong sym.pmic_gpio_get_function_name.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt(ulong param_1,uint32_t param_2)

{
    code *pcVar1;
    
    if (param_2 < 10) {
        return *(obj.pmic_gpio_functions + param_2 * 8);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8005150);
    (*pcVar1)();
}


// ===== sym.pmic_gpio_get_group_name.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt @ 0x080045d0 (size 8) =====

ulong sym.pmic_gpio_get_group_name.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt(int64_t param_1,uint32_t param_2)

{
    return *(*(*(param_1 + 0x10) + 8) + param_2 * 0x18 + 8);
}


// ===== sym.pmic_gpio_config_dbg_show.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt @ 0x080045d8 (size 8) =====

uint64_t sym.pmic_gpio_config_dbg_show.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt
                   (int64_t param_1,ulong param_2,uint32_t param_3)

{
    ulong uVar1;
    char *pcVar2;
    uint32_t uVar3;
    code *pcVar4;
    int iVar5;
    uint32_t uVar6;
    ulong *puVar7;
    uint64_t uVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint64_t extraout_x1;
    uint64_t extraout_x1_00;
    uint64_t extraout_x1_01;
    uint64_t extraout_x1_02;
    ulong *puVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *puVar12;
    uint16_t *puVar13;
    ulong unaff_x30;
    uchar auVar14 [16];
    uint64_t uStack_110;
    int64_t iStack_108;
    uchar ****ppppuStack_100;
    code *pcStack_f8;
    ulong *puStack_f0;
    uint64_t uStack_e8;
    uint32_t uStack_dc;
    int64_t iStack_d8;
    uchar ***pppuStack_d0;
    code *pcStack_c8;
    uint64_t uStack_c0;
    ulong *puStack_b0;
    uint64_t uStack_a8;
    uint64_t uStack_a0;
    int64_t iStack_98;
    uchar **ppuStack_90;
    code *pcStack_88;
    ulong *puStack_80;
    uint64_t uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    ulong uStack_50;
    int iStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_38 = *(iVar9 + 0x5e0);
    puVar7 = pinctrl_dev_get_drvdata();
    puVar13 = *(*(*(param_1 + 0x10) + 8) + param_3 * 0x18 + 0x10);
    seq_printf(param_2," gpio%-2d:",param_3 + 1);
    iStack_3c = 0;
    iVar5 = regmap_read(puVar7[1],*puVar13 + 0x46,&iStack_3c);
    if (iVar5 < 0) {
        _dev_err(*puVar7,"read 0x%x failed\n",0x46);
    }
    else if (0x7f < iStack_3c) {
        if (*(puVar13 + 7) != '\0') {
            iStack_3c = 0;
            uVar8 = regmap_read(puVar7[1],*puVar13 + 0x10,&iStack_3c);
            if (uVar8 < 0) {
                uVar8 = _dev_err(*puVar7,"read 0x%x failed\n",0x10);
                goto code_r0x08005ad4;
            }
            if (iStack_3c < 0) goto code_r0x08005ad4;
            *(puVar13 + 2) = iStack_3c & 1;
        }
        uVar3 = *(puVar13 + 0x10);
        uVar6 = uVar3 + 2;
        if (uVar3 < 4 || *(puVar13 + 9) != '\0') {
            uVar6 = uVar3;
        }
        puVar7 = uVar6;
        if (puVar13[4] == '\0') {
            uVar1 = 0x8002c3e;
            if (puVar13[3] != '\0') {
                uVar1 = 0x8002930;
            }
            seq_printf(param_2," %-4s",uVar1);
        }
        else {
            seq_puts(param_2," analog-pass");
        }
        pcVar2 = 0x8002ae2;
        if (puVar13[2] != '\0') {
            pcVar2 = "high";
        }
        seq_printf(param_2," %-4s",pcVar2);
        if (9 < uVar6) {
code_r0x08005b34:
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x5512,0x8005b38);
            (*pcVar4)();
        }
        seq_printf(param_2," %-7s",*(obj.pmic_gpio_functions + uVar6 * 8));
        seq_printf(param_2," vin-%d",*(puVar13 + 8));
        if (5 < *(puVar13 + 0xc)) goto code_r0x08005b34;
        seq_printf(param_2," %-27s",*(obj.pmic_gpio_config_dbg_show.biases + *(puVar13 + 0xc) * 8));
        if (2 < *(puVar13 + 10)) goto code_r0x08005b34;
        seq_printf(param_2," %-10s",*(obj.pmic_gpio_config_dbg_show.buffer_types + *(puVar13 + 10) * 8));
        if (3 < *(puVar13 + 0xe)) goto code_r0x08005b34;
        seq_printf(param_2," %-7s",*(obj.pmic_gpio_config_dbg_show.strengths + *(puVar13 + 0xe) * 8));
        seq_printf(param_2," atest-%d",*(puVar13 + 0x12));
        uVar8 = seq_printf(param_2," dtest-%d",*(puVar13 + 0x14));
        goto code_r0x08005ad4;
    }
    uVar8 = seq_puts(param_2," ---");
code_r0x08005ad4:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_38) {
        return uVar8;
    }
    __stack_chk_fail();
    puVar11 = &uStack_70;
    *extraout_x18 = sym.pmic_gpio_direction_input;
    pcStack_58 = sym.pmic_gpio_direction_input;
    iVar9 = sp_el0;
    iStack_68 = *(iVar9 + 0x5e0);
    puStack_60 = &stack0xffffffffffffffd0;
    uStack_50 = param_2;
    iVar9 = gpiochip_get_data();
    uStack_70 = 0x10c;
    uVar8 = sym.pmic_gpio_config_set(*(iVar9 + 0x10),extraout_x1 & 0xffffffff,&uStack_70,1);
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_68) {
        return uVar8;
    }
    __stack_chk_fail();
    iVar5 = &uStack_a0;
    *extraout_x18_00 = sym.pmic_gpio_direction_output;
    pcStack_88 = sym.pmic_gpio_direction_output;
    iVar9 = sp_el0;
    iStack_98 = *(iVar9 + 0x5e0);
    puVar12 = extraout_x1_00 & 0xffffffff;
    ppuStack_90 = &puStack_60;
    puStack_80 = puVar7;
    uStack_78 = extraout_x1 & 0xffffffff;
    iVar9 = gpiochip_get_data();
    uStack_a0 = puVar11 << 8 | 0x11;
    uVar8 = sym.pmic_gpio_config_set(*(iVar9 + 0x10),puVar12,&uStack_a0,1);
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_98) {
        return uVar8;
    }
    __stack_chk_fail();
    *extraout_x18_01 = sym.pmic_gpio_get;
    pcStack_c8 = sym.pmic_gpio_get;
    iVar9 = sp_el0;
    iStack_d8 = *(iVar9 + 0x5e0);
    pppuStack_d0 = &ppuStack_90;
    uStack_c0 = param_3;
    puStack_b0 = puVar12;
    uStack_a8 = puVar11 & 0xffffffff;
    puVar7 = gpiochip_get_data();
    puVar13 = *(*(*(puVar7[2] + 0x10) + 8) + (extraout_x1_01 & 0xffffffff) * 0x18 + 0x10);
    if (puVar13[1] == '\0') {
        uVar8 = 0xffffffea;
    }
    else if (*(puVar13 + 7) == '\0') {
        uVar8 = puVar13[2];
    }
    else {
        uStack_dc = 0;
        iVar5 = &uStack_dc;
        uVar6 = regmap_read(puVar7[1],*puVar13 + 0x10);
        puVar12 = puVar7;
        if (uVar6 < 0) {
            uVar8 = uVar6;
            iVar5 = 0x10;
            _dev_err(*puVar7,"read 0x%x failed\n");
        }
        else {
            uVar8 = uStack_dc;
            if (-1 < uStack_dc) {
                uVar8 = uStack_dc & 1;
                *(puVar13 + 2) = uStack_dc & 1;
            }
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_d8) {
        return uVar8;
    }
    __stack_chk_fail();
    *extraout_x18_02 = sym.pmic_gpio_set;
    pcStack_f8 = sym.pmic_gpio_set;
    iVar9 = sp_el0;
    iStack_108 = *(iVar9 + 0x5e0);
    ppppuStack_100 = &pppuStack_d0;
    puStack_f0 = puVar12;
    uStack_e8 = uVar8;
    iVar9 = gpiochip_get_data();
    uStack_110 = iVar5 << 8 | 0x11;
    uVar8 = sym.pmic_gpio_config_set(*(iVar9 + 0x10),extraout_x1_02 & 0xffffffff,&uStack_110,1);
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_108) {
        return uVar8;
    }
    auVar14 = __stack_chk_fail();
    iVar9 = auVar14._8_8_;
    *extraout_x18_03 = sym.pmic_gpio_dbg_show;
    uVar10 = gpiochip_get_data(iVar9);
    uVar8 = uVar10;
    if (*(iVar9 + 0x94) != 0) {
        uVar6 = 0;
        do {
            sym.pmic_gpio_config_dbg_show(*(uVar10 + 0x10),auVar14._0_8_,uVar6);
            uVar8 = seq_puts(auVar14._0_8_,0x8002b63);
            uVar6 = uVar6 + 1;
        } while (uVar6 < *(iVar9 + 0x94));
    }
    return uVar8;
}


// ===== sym.pmic_gpio_direction_output.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt @ 0x080045e0 (size 8) =====

uint64_t sym.pmic_gpio_direction_output.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt
                   (ulong param_1,uint64_t param_2,int param_3)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong *puVar4;
    uint64_t uVar5;
    uint64_t extraout_x1;
    uint64_t extraout_x1_00;
    int iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *puVar7;
    uint16_t *puVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    uint64_t uStack_a0;
    int64_t iStack_98;
    uchar **ppuStack_90;
    code *pcStack_88;
    ulong *puStack_80;
    uint64_t uStack_78;
    uint32_t uStack_6c;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    uint64_t uStack_30;
    int64_t iStack_28;
    
    iVar6 = &uStack_30;
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    puVar7 = param_2 & 0xffffffff;
    iVar2 = gpiochip_get_data();
    uStack_30 = param_3 << 8 | 0x11;
    uVar3 = sym.pmic_gpio_config_set(*(iVar2 + 0x10),puVar7,&uStack_30,1);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return uVar3;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.pmic_gpio_get;
    pcStack_58 = sym.pmic_gpio_get;
    iVar2 = sp_el0;
    iStack_68 = *(iVar2 + 0x5e0);
    puStack_60 = &stack0xffffffffffffffe0;
    puVar4 = gpiochip_get_data();
    puVar8 = *(*(*(puVar4[2] + 0x10) + 8) + (extraout_x1 & 0xffffffff) * 0x18 + 0x10);
    if (puVar8[1] == '\0') {
        uVar3 = 0xffffffea;
    }
    else if (*(puVar8 + 7) == '\0') {
        uVar3 = puVar8[2];
    }
    else {
        uStack_6c = 0;
        iVar6 = &uStack_6c;
        uVar1 = regmap_read(puVar4[1],*puVar8 + 0x10);
        puVar7 = puVar4;
        if (uVar1 < 0) {
            uVar3 = uVar1;
            iVar6 = 0x10;
            _dev_err(*puVar4,"read 0x%x failed\n");
        }
        else {
            uVar3 = uStack_6c;
            if (-1 < uStack_6c) {
                uVar3 = uStack_6c & 1;
                *(puVar8 + 2) = uStack_6c & 1;
            }
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_68) {
        return uVar3;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.pmic_gpio_set;
    pcStack_88 = sym.pmic_gpio_set;
    iVar2 = sp_el0;
    iStack_98 = *(iVar2 + 0x5e0);
    ppuStack_90 = &puStack_60;
    puStack_80 = puVar7;
    uStack_78 = uVar3;
    iVar2 = gpiochip_get_data();
    uStack_a0 = iVar6 << 8 | 0x11;
    uVar3 = sym.pmic_gpio_config_set(*(iVar2 + 0x10),extraout_x1_00 & 0xffffffff,&uStack_a0,1);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_98) {
        return uVar3;
    }
    auVar9 = __stack_chk_fail();
    iVar2 = auVar9._8_8_;
    *extraout_x18_01 = sym.pmic_gpio_dbg_show;
    uVar5 = gpiochip_get_data(iVar2);
    uVar3 = uVar5;
    if (*(iVar2 + 0x94) != 0) {
        uVar1 = 0;
        do {
            sym.pmic_gpio_config_dbg_show(*(uVar5 + 0x10),auVar9._0_8_,uVar1);
            uVar3 = seq_puts(auVar9._0_8_,0x8002b63);
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(iVar2 + 0x94));
    }
    return uVar3;
}


// ===== sym.pmic_gpio_get_group_pins.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt @ 0x080045e8 (size 8) =====

ulong sym.pmic_gpio_get_group_pins.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt
                (int64_t param_1,uint32_t param_2,int64_t *param_3,uint *param_4)

{
    *param_3 = *(*(param_1 + 0x10) + 8) + param_2 * 0x18;
    *param_4 = 1;
    return 0;
}


// ===== sym.pmic_gpio_get.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt @ 0x080045f0 (size 8) =====

uint64_t sym.pmic_gpio_get.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt(ulong param_1,uint64_t param_2,int param_3)

{
    uint32_t uVar1;
    ulong *puVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t extraout_x1;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar5;
    ulong *unaff_x20;
    uint16_t *puVar6;
    ulong unaff_x30;
    uchar auVar7 [16];
    uint64_t uStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    ulong *puStack_50;
    uint64_t uStack_48;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    puVar2 = gpiochip_get_data();
    puVar6 = *(*(*(puVar2[2] + 0x10) + 8) + (param_2 & 0xffffffff) * 0x18 + 0x10);
    if (puVar6[1] == '\0') {
        uVar5 = 0xffffffea;
    }
    else if (*(puVar6 + 7) == '\0') {
        uVar5 = puVar6[2];
    }
    else {
        uStack_3c = 0;
        param_3 = &uStack_3c;
        uVar1 = regmap_read(puVar2[1],*puVar6 + 0x10);
        unaff_x20 = puVar2;
        if (uVar1 < 0) {
            uVar5 = uVar1;
            param_3 = 0x10;
            _dev_err(*puVar2,"read 0x%x failed\n");
        }
        else {
            uVar5 = uStack_3c;
            if (-1 < uStack_3c) {
                uVar5 = uStack_3c & 1;
                *(puVar6 + 2) = uStack_3c & 1;
            }
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return uVar5;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.pmic_gpio_set;
    pcStack_58 = sym.pmic_gpio_set;
    iVar3 = sp_el0;
    iStack_68 = *(iVar3 + 0x5e0);
    puStack_60 = &stack0xffffffffffffffd0;
    puStack_50 = unaff_x20;
    uStack_48 = uVar5;
    iVar3 = gpiochip_get_data();
    uStack_70 = param_3 << 8 | 0x11;
    uVar5 = sym.pmic_gpio_config_set(*(iVar3 + 0x10),extraout_x1 & 0xffffffff,&uStack_70,1);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_68) {
        return uVar5;
    }
    auVar7 = __stack_chk_fail();
    iVar3 = auVar7._8_8_;
    *extraout_x18_00 = sym.pmic_gpio_dbg_show;
    uVar4 = gpiochip_get_data(iVar3);
    uVar5 = uVar4;
    if (*(iVar3 + 0x94) != 0) {
        uVar1 = 0;
        do {
            sym.pmic_gpio_config_dbg_show(*(uVar4 + 0x10),auVar7._0_8_,uVar1);
            uVar5 = seq_puts(auVar7._0_8_,0x8002b63);
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(iVar3 + 0x94));
    }
    return uVar5;
}


// ===== sym.gpiochip_generic_request.cfi_jt @ 0x080045f8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.gpiochip_generic_request.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.pmic_gpio_direction_input.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt @ 0x08004600 (size 8) =====

uint64_t sym.pmic_gpio_direction_input.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt(ulong param_1,uint64_t param_2)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong *puVar4;
    uint64_t uVar5;
    uint64_t extraout_x1;
    uint64_t extraout_x1_00;
    uint64_t extraout_x1_01;
    int iVar6;
    int iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *puVar8;
    uint16_t *puVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    uint64_t uStack_d0;
    int64_t iStack_c8;
    ulong **ppuStack_c0;
    code *pcStack_b8;
    ulong *puStack_b0;
    uint64_t uStack_a8;
    uint32_t uStack_9c;
    int64_t iStack_98;
    uchar **ppuStack_90;
    code *pcStack_88;
    uint64_t uStack_60;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    ulong uStack_30;
    int64_t iStack_28;
    
    iVar6 = &uStack_30;
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    iVar2 = gpiochip_get_data();
    uStack_30 = 0x10c;
    uVar3 = sym.pmic_gpio_config_set(*(iVar2 + 0x10),param_2 & 0xffffffff,&uStack_30,1);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return uVar3;
    }
    __stack_chk_fail();
    iVar7 = &uStack_60;
    *extraout_x18 = sym.pmic_gpio_direction_output;
    pcStack_48 = sym.pmic_gpio_direction_output;
    iVar2 = sp_el0;
    iStack_58 = *(iVar2 + 0x5e0);
    puVar8 = extraout_x1 & 0xffffffff;
    puStack_50 = &stack0xffffffffffffffe0;
    iVar2 = gpiochip_get_data();
    uStack_60 = iVar6 << 8 | 0x11;
    uVar3 = sym.pmic_gpio_config_set(*(iVar2 + 0x10),puVar8,&uStack_60,1);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_58) {
        return uVar3;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.pmic_gpio_get;
    pcStack_88 = sym.pmic_gpio_get;
    iVar2 = sp_el0;
    iStack_98 = *(iVar2 + 0x5e0);
    ppuStack_90 = &puStack_50;
    puVar4 = gpiochip_get_data();
    puVar9 = *(*(*(puVar4[2] + 0x10) + 8) + (extraout_x1_00 & 0xffffffff) * 0x18 + 0x10);
    if (puVar9[1] == '\0') {
        uVar3 = 0xffffffea;
    }
    else if (*(puVar9 + 7) == '\0') {
        uVar3 = puVar9[2];
    }
    else {
        uStack_9c = 0;
        iVar7 = &uStack_9c;
        uVar1 = regmap_read(puVar4[1],*puVar9 + 0x10);
        puVar8 = puVar4;
        if (uVar1 < 0) {
            uVar3 = uVar1;
            iVar7 = 0x10;
            _dev_err(*puVar4,"read 0x%x failed\n");
        }
        else {
            uVar3 = uStack_9c;
            if (-1 < uStack_9c) {
                uVar3 = uStack_9c & 1;
                *(puVar9 + 2) = uStack_9c & 1;
            }
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_98) {
        return uVar3;
    }
    __stack_chk_fail();
    *extraout_x18_01 = sym.pmic_gpio_set;
    pcStack_b8 = sym.pmic_gpio_set;
    iVar2 = sp_el0;
    iStack_c8 = *(iVar2 + 0x5e0);
    ppuStack_c0 = &ppuStack_90;
    puStack_b0 = puVar8;
    uStack_a8 = uVar3;
    iVar2 = gpiochip_get_data();
    uStack_d0 = iVar7 << 8 | 0x11;
    uVar3 = sym.pmic_gpio_config_set(*(iVar2 + 0x10),extraout_x1_01 & 0xffffffff,&uStack_d0,1);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_c8) {
        return uVar3;
    }
    auVar10 = __stack_chk_fail();
    iVar2 = auVar10._8_8_;
    *extraout_x18_02 = sym.pmic_gpio_dbg_show;
    uVar5 = gpiochip_get_data(iVar2);
    uVar3 = uVar5;
    if (*(iVar2 + 0x94) != 0) {
        uVar1 = 0;
        do {
            sym.pmic_gpio_config_dbg_show(*(uVar5 + 0x10),auVar10._0_8_,uVar1);
            uVar3 = seq_puts(auVar10._0_8_,0x8002b63);
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(iVar2 + 0x94));
    }
    return uVar3;
}


// ===== sym.pmic_gpio_config_get.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt @ 0x08004608 (size 8) =====

ulong sym.pmic_gpio_config_get.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt
                (int64_t param_1,uint32_t param_2,uint64_t *param_3)

{
    int iVar1;
    ulong uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint32_t uVar5;
    
    uVar2 = 0xffffffea;
    uVar5 = *param_3;
    if (0x83 < uVar5 - 1) {
        return 0xffffffea;
    }
    iVar4 = *(*(*(param_1 + 0x10) + 8) + param_2 * 0x18 + 0x10);
    switch(uVar5) {
    case 1:
        if (*(iVar4 + 0x18) != 5) {
            return 0xffffffea;
        }
        goto code_r0x08005440;
    case 2:
        if (*(iVar4 + 2) != '\0') {
            return 0xffffffea;
        }
        goto code_r0x08005440;
    case 3:
        if (*(iVar4 + 0x18) != 4) {
            return 0xffffffea;
        }
        goto code_r0x08005440;
    default:
        goto code_r0x080054b8;
    case 5:
        iVar1 = *(iVar4 + 0x18);
        goto joined_r0x08005424;
    case 6:
        if (*(iVar4 + 0x14) != 1) {
            return 0xffffffea;
        }
        uVar3 = 1;
        break;
    case 7:
        if (*(iVar4 + 0x14) != 2) {
            return 0xffffffea;
        }
        goto code_r0x08005440;
    case 8:
        iVar1 = *(iVar4 + 0x14);
joined_r0x08005424:
        if (iVar1 != 0) {
            return 0xffffffea;
        }
        goto code_r0x08005440;
    case 0xc:
        if (*(iVar4 + 7) == '\0') {
            return 0xffffffea;
        }
code_r0x08005440:
        uVar3 = 1;
        break;
    case 0x11:
        uVar3 = *(iVar4 + 4);
        break;
    case 0x12:
        uVar3 = *(iVar4 + 6);
        break;
    case 0x14:
        uVar3 = *(iVar4 + 0x10);
        break;
    case 0x80:
        uVar3 = *(iVar4 + 0x18);
        break;
    case 0x81:
        uVar3 = *(iVar4 + 0x1c);
        break;
    case 0x82:
        uVar3 = *(iVar4 + 0x24);
        break;
    case 0x83:
        uVar3 = *(iVar4 + 8);
        break;
    case 0x84:
        uVar3 = *(iVar4 + 0x28);
    }
    uVar2 = 0;
    *param_3 = uVar5 | uVar3 << 8;
code_r0x080054b8:
    return uVar2;
}


// ===== sym.pmic_gpio_set_mux.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt @ 0x08004610 (size 8) =====

int sym.pmic_gpio_set_mux.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt(int64_t param_1,uint32_t param_2,uint64_t param_3)

{
    char cVar1;
    uchar uVar2;
    int iVar3;
    ulong *puVar4;
    ulong uVar5;
    uint32_t uVar6;
    ulong uVar7;
    ulong *in_x18;
    uint32_t uVar8;
    uint16_t *puVar9;
    ulong *puVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar4 = pinctrl_dev_get_drvdata();
    if (9 < param_2) {
        _printk(0x8002b7e,param_2);
        return -0x16;
    }
    puVar9 = *(*(*(param_1 + 0x10) + 8) + (param_3 & 0xffffffff) * 0x18 + 0x10);
    cVar1 = *(puVar9 + 9);
    uVar8 = param_2;
    if (cVar1 == '\0') {
        if ((param_2 & 0xfffffffe) == 4) {
            _printk(0x80029ac);
            return -0x16;
        }
        uVar8 = param_2 - 2;
        if (param_2 < 6) {
            uVar8 = param_2;
        }
    }
    *(puVar9 + 0x10) = uVar8;
    *(puVar9 + 3) = 1;
    if (puVar9[4] == '\0') {
        if ((puVar9[3] == '\0') || (*(puVar9 + 7) == '\0')) {
            uVar2 = puVar9[3] != '\0';
            uVar6 = uVar2;
            goto joined_r0x0800528c;
        }
        uVar2 = 2;
        uVar6 = 2;
        if (cVar1 == '\0') goto code_r0x08005290;
code_r0x080051fc:
        puVar10 = puVar4 + 1;
        iVar3 = regmap_write(*puVar10,*puVar9 + 0x40,uVar2);
        if (iVar3 < 0) {
code_r0x0800530c:
            uVar5 = *puVar4;
            uVar7 = 0x40;
            goto code_r0x08005348;
        }
        iVar3 = regmap_write(*puVar10,*puVar9 + 0x4a,*(puVar9 + 0x12) + -1);
        if (iVar3 < 0) {
            uVar5 = *puVar4;
            uVar7 = 0x4a;
            goto code_r0x08005348;
        }
        iVar3 = regmap_write(*puVar10,*puVar9 + 0x44,*(puVar9 + 0x10) & 0xf | puVar9[2] << 7);
        if (iVar3 < 0) {
            uVar5 = *puVar4;
            uVar7 = 0x44;
            goto code_r0x08005348;
        }
    }
    else {
        uVar2 = 3;
        uVar6 = 3;
joined_r0x0800528c:
        if (cVar1 != '\0') goto code_r0x080051fc;
code_r0x08005290:
        iVar3 = regmap_write(puVar4[1],*puVar9 + 0x40,uVar6 << 4 | uVar8 << 1 | puVar9[2]);
        if (iVar3 < 0) goto code_r0x0800530c;
    }
    iVar3 = regmap_write(puVar4[1],*puVar9 + 0x46,puVar9[1] << 7);
    if (-1 < iVar3) {
        return iVar3;
    }
    uVar5 = *puVar4;
    uVar7 = 0x46;
code_r0x08005348:
    _dev_err(uVar5,"write 0x%x failed\n",uVar7);
    return iVar3;
}


// ===== sym.pmic_gpio_probe @ 0x08004618 (size 2324) =====

uint64_t sym.pmic_gpio_probe(int64_t arg1)

{
    int64_t *piVar1;
    uchar auVar2 [16];
    code *pcVar3;
    uint32_t uVar4;
    int iVar5;
    int64_t *piVar6;
    ulong uVar7;
    int64_t iVar8;
    uint *puVar9;
    uint16_t *puVar10;
    int64_t *piVar11;
    uint64_t uVar12;
    int64_t *piVar13;
    char *pcVar14;
    int64_t iVar15;
    ulong *in_x18;
    uint64_t uVar16;
    ulong unaff_x30;
    uint32_t uStack_bc;
    uint64_t auStack_b8 [11];
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    auStack_b8[10] = *(iVar8 + 0x5e0);
    piVar13 = arg1 + 0x10;
    uStack_bc = 0;
    uVar4 = of_property_read_variable_u32_array(*(arg1 + 0x300),0x8002ba4,&stack0xffffffffffffff44,1,0);
    if (uVar4 < 0) {
        pcVar14 = "missing base address";
code_r0x08004c18:
        uVar16 = uVar4;
        _dev_err(piVar13,pcVar14);
    }
    else {
        iVar5 = device_get_match_data(piVar13);
        piVar6 = devm_kmalloc(piVar13,0x3b0,0xdc0);
        if (piVar6 != NULL) {
            uVar7 = *(arg1 + 0x70);
            *(arg1 + 0xa8) = piVar6;
            *piVar6 = piVar13;
            iVar8 = dev_get_regmap(uVar7,0);
            iVar15 = *(arg1 + 0x70);
            uVar16 = iVar5;
            piVar6[1] = iVar8;
            auVar2._8_8_ = 0;
            auVar2._0_8_ = uVar16;
            *(piVar6 + 0x75) = *(iVar15 + 0x398);
            *(piVar6 + 0x3a9) = uStack_bc >> 8;
            if ((((SUB168(auVar2 * ZEXT816(0x18),8) == 0) &&
                 (puVar9 = devm_kmalloc(piVar13,(uVar16 + iVar5 * 2) * 8,0xdc0), puVar9 != NULL)) &&
                (puVar10 = devm_kmalloc(piVar13,uVar16 * 0x2c,0xdc0), puVar10 != NULL)) &&
               (piVar11 = devm_kmalloc(piVar13,0x58,0xdc0), piVar11 != NULL)) {
                iVar15 = *(arg1 + 0x80);
                piVar11[3] = reloc.pmic_gpio_get_groups_count.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt;
                piVar11[4] = obj.pmic_gpio_pinmux_ops;
                piVar11[5] = obj.pmic_gpio_pinconf_ops;
                piVar11[6] = obj.__this_module;
                iVar8 = iVar15;
                if (iVar15 == 0) {
                    iVar8 = *piVar13;
                }
                *piVar11 = iVar8;
                piVar11[1] = puVar9;
                *(piVar11 + 2) = iVar5;
                *(piVar11 + 7) = 5;
                piVar11[8] = obj.pmic_gpio_bindings;
                piVar11[9] = obj.pmic_conf_items;
                if (0 < iVar5) {
                    *puVar9 = 0;
                    *(puVar9 + 4) = puVar10;
                    uVar7 = _obj.pmic_gpio_groups;
                    iVar8 = piVar6[1];
                    auStack_b8[0] = auStack_b8[0] & 0xffffffff00000000;
                    *puVar10 = uStack_bc;
                    *(puVar9 + 2) = uVar7;
                    uVar16 = regmap_read(iVar8,(uStack_bc & 0xffff) + 4,&stack0xffffffffffffff48);
                    if (uVar16 < 0) {
                        uVar16 = uVar16 & 0xffffffff;
                        _dev_err(*piVar6,"read 0x%x failed\n",4);
                    }
                    else {
                        uVar16 = auStack_b8[0] & 0xffffffff;
                        if (-1 < auStack_b8[0]) {
                            if (auStack_b8[0] == 0x10) {
                                auStack_b8[0] = auStack_b8[0] & 0xffffffff00000000;
                                uVar16 = regmap_read(piVar6[1],*puVar10 + 5,&stack0xffffffffffffff48);
                                if (uVar16 < 0) {
                                    uVar16 = uVar16 & 0xffffffff;
                                    _dev_err(*piVar6,"read 0x%x failed\n",5);
                                }
                                else {
                                    uVar16 = auStack_b8[0] & 0xffffffff;
                                    if (-1 < auStack_b8[0]) {
                                        if (auStack_b8[0] - 1U < 0x13) {
    //switch table (18 cases) at 0x8000130
    //WARNING: Could not recover jumptable at 0x08004860. Too many branches
    //WARNING: Treating indirect jump as call
                                            uVar16 = (*(*((auStack_b8[0] - 1U) * 2 + 0x8000130) * 4 + 0x8004864))();
                                            return uVar16;
                                        }
                                        _dev_err(*piVar6,"unknown GPIO type 0x%x\n",uVar16);
                                        uVar16 = 0xffffffed;
                                    }
                                }
                            }
                            else {
                                _dev_err(*piVar6,"incorrect block type 0x%x at 0x%x\n",uVar16,*puVar10);
                                uVar16 = 0xffffffed;
                            }
                        }
                    }
                    goto code_r0x08004bc8;
                }
                piVar1 = piVar6 + 3;
                memcpy(piVar1,obj.pmic_gpio_gpio_template,0x270);
                piVar6[5] = piVar13;
                *(piVar6 + 0xac) = iVar5;
                *(piVar6 + 0x15) = 0xffffffff;
                if (iVar15 == 0) {
                    iVar15 = *piVar13;
                }
                piVar6[3] = iVar15;
                *(piVar6 + 0x4d) = 2;
                *(piVar6 + 0x17) = 0;
                uVar16 = devm_pinctrl_register(piVar13,piVar11,piVar6);
                piVar6[2] = uVar16;
                if (0xfffffffffffff000 < uVar16) goto code_r0x08004bc8;
                iVar8 = of_irq_find_parent(*(*piVar6 + 0x2f0));
                if (iVar8 == 0) {
code_r0x08004d60:
                    uVar16 = 0xfffffffa;
                    goto code_r0x08004bc8;
                }
                auStack_b8[8] = 0;
                auStack_b8[9] = 0;
                auStack_b8[6] = 0;
                auStack_b8[7] = 0;
                auStack_b8[4] = 0;
                auStack_b8[5] = 0;
                auStack_b8[2] = 0;
                auStack_b8[3] = 0;
                auStack_b8[1] = 0;
                auStack_b8[0] = iVar8 + 0x18U;
                iVar15 = irq_find_matching_fwspec(&stack0xffffffffffffff48,1);
                if (iVar15 == 0) {
                    auStack_b8[8] = 0;
                    auStack_b8[9] = 0;
                    auStack_b8[6] = 0;
                    auStack_b8[7] = 0;
                    auStack_b8[4] = 0;
                    auStack_b8[5] = 0;
                    auStack_b8[2] = 0;
                    auStack_b8[3] = 0;
                    auStack_b8[1] = 0;
                    auStack_b8[0] = iVar8 + 0x18U;
                    iVar15 = irq_find_matching_fwspec(&stack0xffffffffffffff48,0);
                    if (iVar15 == 0) goto code_r0x08004d60;
                }
                *(piVar6 + 0x37) = 0;
                piVar6[0x24] = piVar6 + 0x51;
                piVar6[0x52] = "spmi-gpio";
                piVar6[0x5f] = sym.irq_chip_set_wake_parent.cfi_jt;
                piVar6[0x57] = sym.irq_chip_ack_parent.cfi_jt;
                piVar6[0x36] = sym.handle_level_irq.cfi_jt;
                piVar6[0x58] = sym.irq_chip_mask_parent.cfi_jt;
                piVar6[0x5a] = sym.irq_chip_unmask_parent.cfi_jt;
                piVar6[0x5e] = sym.irq_chip_set_type_parent.cfi_jt;
                piVar6[0x74] = 4;
                iVar8 = 0;
                if (*(*piVar6 + 0x2f0) != 0) {
                    iVar8 = *(*piVar6 + 0x2f0) + 0x18;
                }
                piVar6[0x27] = iVar8;
                piVar6[0x28] = iVar15;
                piVar6[0x29] = sym.pmic_gpio_child_to_parent_hwirq.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt;
                piVar6[0x2a] = sym.pmic_gpio_populate_parent_fwspec.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt;
                piVar6[0x2b] = sym.pmic_gpio_child_offset_to_irq.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt;
                piVar6[0x35] = sym.pmic_gpio_domain_translate.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt;
                uVar4 = gpiochip_add_data_with_key(piVar1,piVar6,0,0);
                if (uVar4 == 0) {
                    iVar8 = of_find_property(*(arg1 + 0x300),"gpio-ranges",0);
                    if (iVar8 == 0) {
                        iVar8 = *(arg1 + 0x80);
                        if (iVar8 == 0) {
                            iVar8 = *piVar13;
                        }
                        uVar12 = gpiochip_add_pin_range(piVar1,iVar8,0,0,iVar5);
                        uVar16 = 0;
                        if (uVar12 != 0) {
                            uVar16 = uVar12 & 0xffffffff;
                            _dev_err(piVar13,"failed to add pin range\n");
                            gpiochip_remove(piVar1);
                        }
                    }
                    else {
                        uVar16 = 0;
                    }
                    goto code_r0x08004bc8;
                }
                piVar13 = *piVar6;
                pcVar14 = "can\'t add gpio chip\n";
                goto code_r0x08004c18;
            }
        }
        uVar16 = 0xfffffff4;
    }
code_r0x08004bc8:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == auStack_b8[10]) {
        return uVar16 & 0xffffffff;
    }
    __stack_chk_fail();
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x8004f2c);
    (*pcVar3)();
}


// ===== sym.pmic_gpio_remove @ 0x08004f2c (size 48) =====

ulong sym.pmic_gpio_remove(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    gpiochip_remove(*(arg1 + 0xa8) + 0x18);
    return 0;
}


// ===== sym.pmic_gpio_child_to_parent_hwirq @ 0x08004f5c (size 88) =====

ulong sym.pmic_gpio_child_to_parent_hwirq(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint *in_x4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = gpiochip_get_data();
    *arg3 = *(iVar1 + 0x3a9) + arg1;
    *in_x4 = arg2;
    return 0;
}


// ===== sym.pmic_gpio_populate_parent_fwspec @ 0x08004fb4 (size 124) =====

void sym.pmic_gpio_populate_parent_fwspec(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    int64_t iVar2;
    ulong *puVar3;
    int64_t iVar4;
    ulong uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = gpiochip_get_data();
    puVar3 = kmem_cache_alloc_trace(_handle_level_irq,0xdc0,0x50);
    if (puVar3 != NULL) {
        iVar4 = *(arg1 + 0x128);
        uVar1 = *(iVar2 + 0x3a8);
        *(puVar3 + 3) = arg3;
        uVar5 = *(iVar4 + 0x30);
        *(puVar3 + 1) = 4;
        *(puVar3 + 0xc) = uVar1;
        *(puVar3 + 2) = arg2;
        *puVar3 = uVar5;
    }
    return;
}


// ===== sym.pmic_gpio_child_offset_to_irq @ 0x08005030 (size 16) =====

int sym.pmic_gpio_child_offset_to_irq(ulong noname_0,int64_t arg1)

{
    return arg1 + 1;
}


// ===== sym.pmic_gpio_domain_translate @ 0x08005040 (size 80) =====

ulong sym.pmic_gpio_domain_translate(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    
    if (((*(arg2 + 8) == 2) && (uVar1 = *(arg2 + 0xc), uVar1 != 0)) && (uVar1 <= *(*(arg1 + 0x20) + 0x94))) {
        *arg3 = uVar1 - 1;
        *arg4 = *(arg2 + 0x10);
        return 0;
    }
    return 0xffffffea;
}


// ===== sym.pmic_gpio_get_groups_count @ 0x08005090 (size 20) =====

uint sym.pmic_gpio_get_groups_count(int64_t arg1)

{
    return *(*(arg1 + 0x10) + 0x10);
}


// ===== sym.pmic_gpio_get_group_name @ 0x080050a4 (size 32) =====

ulong sym.pmic_gpio_get_group_name(int64_t arg1,int64_t arg2)

{
    return *(*(*(arg1 + 0x10) + 8) + (arg2 & 0xffffffffU) * 0x18 + 8);
}


// ===== sym.pmic_gpio_get_group_pins @ 0x080050c4 (size 44) =====

ulong sym.pmic_gpio_get_group_pins(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    *arg3 = *(*(arg1 + 0x10) + 8) + (arg2 & 0xffffffffU) * 0x18;
    *arg4 = 1;
    return 0;
}


// ===== sym.pinconf_generic_dt_node_to_map_group @ 0x080050f0 (size 40) =====

void sym.pinconf_generic_dt_node_to_map_group(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pinconf_generic_dt_node_to_map();
    return;
}


// ===== sym.pmic_gpio_get_functions_count @ 0x08005118 (size 16) =====

ulong sym.pmic_gpio_get_functions_count(void)

{
    return 10;
}


// ===== sym.pmic_gpio_get_function_name @ 0x08005128 (size 40) =====

ulong sym.pmic_gpio_get_function_name(ulong noname_0,uint32_t arg1)

{
    code *pcVar1;
    
    if (arg1 < 10) {
        return *(obj.pmic_gpio_functions + arg1 * 8);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8005150);
    (*pcVar1)();
}


// ===== sym.pmic_gpio_get_function_groups @ 0x08005150 (size 40) =====

ulong sym.pmic_gpio_get_function_groups(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    *arg2 = obj.pmic_gpio_groups;
    *arg3 = *(*(arg1 + 0x10) + 0x10);
    return 0;
}


// ===== sym.pmic_gpio_set_mux @ 0x08005178 (size 492) =====

int sym.pmic_gpio_set_mux(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uchar uVar2;
    int iVar3;
    ulong *puVar4;
    ulong uVar5;
    ulong uVar6;
    ulong *in_x18;
    uint32_t uVar7;
    uint32_t uVar8;
    uint16_t *puVar9;
    ulong *puVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar7 = arg2;
    puVar4 = pinctrl_dev_get_drvdata();
    if (9 < uVar7) {
        _printk(0x8002b7e,arg2 & 0xffffffff);
        return -0x16;
    }
    puVar9 = *(*(*(arg1 + 0x10) + 8) + (arg3 & 0xffffffffU) * 0x18 + 0x10);
    cVar1 = *(puVar9 + 9);
    uVar8 = uVar7;
    if (cVar1 == '\0') {
        if ((uVar7 & 0xfffffffe) == 4) {
            _printk(0x80029ac);
            return -0x16;
        }
        uVar8 = uVar7 - 2;
        if (uVar7 < 6) {
            uVar8 = uVar7;
        }
    }
    *(puVar9 + 0x10) = uVar8;
    *(puVar9 + 3) = 1;
    if (puVar9[4] == '\0') {
        if ((puVar9[3] == '\0') || (*(puVar9 + 7) == '\0')) {
            uVar2 = puVar9[3] != '\0';
            uVar7 = uVar2;
            goto joined_r0x0800528c;
        }
        uVar2 = 2;
        uVar7 = 2;
        if (cVar1 == '\0') goto code_r0x08005290;
code_r0x080051fc:
        puVar10 = puVar4 + 1;
        iVar3 = regmap_write(*puVar10,*puVar9 + 0x40,uVar2);
        if (iVar3 < 0) {
code_r0x0800530c:
            uVar5 = *puVar4;
            uVar6 = 0x40;
            goto code_r0x08005348;
        }
        iVar3 = regmap_write(*puVar10,*puVar9 + 0x4a,*(puVar9 + 0x12) + -1);
        if (iVar3 < 0) {
            uVar5 = *puVar4;
            uVar6 = 0x4a;
            goto code_r0x08005348;
        }
        iVar3 = regmap_write(*puVar10,*puVar9 + 0x44,*(puVar9 + 0x10) & 0xf | puVar9[2] << 7);
        if (iVar3 < 0) {
            uVar5 = *puVar4;
            uVar6 = 0x44;
            goto code_r0x08005348;
        }
    }
    else {
        uVar2 = 3;
        uVar7 = 3;
joined_r0x0800528c:
        if (cVar1 != '\0') goto code_r0x080051fc;
code_r0x08005290:
        iVar3 = regmap_write(puVar4[1],*puVar9 + 0x40,uVar7 << 4 | uVar8 << 1 | puVar9[2]);
        if (iVar3 < 0) goto code_r0x0800530c;
    }
    iVar3 = regmap_write(puVar4[1],*puVar9 + 0x46,puVar9[1] << 7);
    if (-1 < iVar3) {
        return iVar3;
    }
    uVar5 = *puVar4;
    uVar6 = 0x46;
code_r0x08005348:
    _dev_err(uVar5,"write 0x%x failed\n",uVar6);
    return iVar3;
}


// ===== sym.pmic_gpio_config_get @ 0x08005364 (size 344) =====

ulong sym.pmic_gpio_config_get(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    
    uVar2 = 0xffffffea;
    uVar3 = *arg3 - 1;
    if (0x83 < uVar3) {
        return 0xffffffea;
    }
    iVar4 = *(*(*(arg1 + 0x10) + 8) + (arg2 & 0xffffffffU) * 0x18 + 0x10);
    //switch table (132 cases) at 0x800015a
    switch(*(uVar3 + 0x800015a) * 4 + 0x80053ac) {
    case 0x80053b0:
        if (*(iVar4 + 0x18) != 5) {
            return 0xffffffea;
        }
        goto code_r0x08005440;
    case 0x80053c4:
        if (*(iVar4 + 2) != '\0') {
            return 0xffffffea;
        }
        goto code_r0x08005440;
    case 0x80053d4:
        if (*(iVar4 + 0x18) != 4) {
            return 0xffffffea;
        }
        goto code_r0x08005440;
    case 0x80053e8:
        iVar1 = *(iVar4 + 0x18);
        goto joined_r0x08005424;
    case 0x80053f8:
        if (*(iVar4 + 0x14) != 1) {
            return 0xffffffea;
        }
        uVar3 = 1;
        break;
    case 0x800540c:
        if (*(iVar4 + 0x14) != 2) {
            return 0xffffffea;
        }
        goto code_r0x08005440;
    case 0x8005420:
        iVar1 = *(iVar4 + 0x14);
joined_r0x08005424:
        if (iVar1 != 0) {
            return 0xffffffea;
        }
        goto code_r0x08005440;
    case 0x8005438:
        if (*(iVar4 + 7) == '\0') {
            return 0xffffffea;
        }
code_r0x08005440:
        uVar3 = 1;
        break;
    case 0x800544c:
        uVar3 = *(iVar4 + 4);
        break;
    case 0x8005458:
        uVar3 = *(iVar4 + 6);
        break;
    case 0x8005464:
        uVar3 = *(iVar4 + 0x10);
        break;
    case 0x8005470:
        uVar3 = *(iVar4 + 0x18);
        break;
    case 0x800547c:
        uVar3 = *(iVar4 + 0x1c);
        break;
    case 0x8005488:
        uVar3 = *(iVar4 + 0x24);
        break;
    case 0x8005494:
        uVar3 = *(iVar4 + 8);
        break;
    case 0x80054a0:
        uVar3 = *(iVar4 + 0x28);
        break;
    case 0x80054b8:
        goto code_r0x080054b8;
    }
    uVar2 = 0;
    *arg3 = *arg3 | uVar3 << 8;
code_r0x080054b8:
    return uVar2;
}


// ===== sym.pmic_gpio_config_set @ 0x080054bc (size 1060) =====

int sym.pmic_gpio_config_set(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    uint32_t uVar2;
    uchar uVar3;
    int iVar4;
    ulong *puVar5;
    uint64_t uVar6;
    int iVar7;
    uint32_t uVar8;
    ulong uVar9;
    ulong *in_x18;
    uint16_t *puVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar5 = pinctrl_dev_get_drvdata();
    puVar10 = *(*(*(arg1 + 0x10) + 8) + (arg2 & 0xffffffffU) * 0x18 + 0x10);
    puVar10[1] = 0x101;
    if (arg4 != 0) {
        iVar7 = 0;
        do {
            uVar9 = *(arg3 + iVar7 * 8);
            iVar4 = -0x16;
            uVar8 = uVar9;
            if (0x83 < (uVar8 & 0xff) - 1) {
                return -0x16;
            }
    //switch table (131 cases) at 0x80001de
            uVar2 = uVar9 >> 8 & 0xffffff;
            switch(uVar8 & 0xff) {
            case 1:
code_r0x08005534:
                puVar10[0xc] = 5;
                puVar10[0xd] = 0;
                break;
            case 2:
                *(puVar10 + 1) = 0;
                break;
            case 3:
                if (uVar8 < 0x100) goto code_r0x08005534;
                puVar10[0xc] = 4;
                puVar10[0xd] = 0;
                break;
            default:
                goto code_r0x0800587c;
            case 5:
                puVar10[0xc] = 0;
                puVar10[0xd] = 0;
                break;
            case 6:
                if (*(puVar10 + 5) == '\0') {
                    return -0x16;
                }
                puVar10[10] = 1;
                puVar10[0xb] = 0;
                break;
            case 7:
                if (*(puVar10 + 5) == '\0') {
                    return -0x16;
                }
                puVar10[10] = 2;
                puVar10[0xb] = 0;
                break;
            case 8:
                puVar10[10] = 0;
                puVar10[0xb] = 0;
                break;
            case 0xc:
                *(puVar10 + 7) = 0xff < uVar8;
                break;
            case 0x11:
                *(puVar10 + 3) = 1;
                *(puVar10 + 2) = 0xff < uVar8;
                break;
            case 0x12:
                *(puVar10 + 3) = 0xff < uVar8;
                break;
            case 0x14:
                if (*(puVar10 + 6) <= uVar2) {
                    return -0x16;
                }
                *(puVar10 + 8) = uVar2;
                break;
            case 0x80:
                if (0x3ff < uVar8) {
                    return -0x16;
                }
                *(puVar10 + 0xc) = uVar2;
                break;
            case 0x81:
                if (0x3ff < uVar8) {
                    return -0x16;
                }
                *(puVar10 + 0xe) = uVar2;
                break;
            case 0x82:
                if (*(puVar10 + 9) == '\0') {
                    return -0x16;
                }
                if (0x4ff < uVar8) {
                    return -0x16;
                }
                *(puVar10 + 0x12) = uVar2;
                break;
            case 0x83:
                if (*(puVar10 + 9) == '\0') {
                    return -0x16;
                }
                *(puVar10 + 4) = 1;
                break;
            case 0x84:
                if (0x4ff < uVar8) {
                    return -0x16;
                }
                *(puVar10 + 0x14) = uVar2;
            }
            iVar7 = iVar7 + 1;
        } while (arg4 != iVar7);
    }
    iVar4 = regmap_write(puVar5[1],*puVar10 + 0x41,*(puVar10 + 8));
    if (iVar4 < 0) {
        uVar9 = 0x41;
        goto code_r0x08005868;
    }
    iVar4 = regmap_write(puVar5[1],*puVar10 + 0x42,*(puVar10 + 0xc));
    if (iVar4 < 0) {
        uVar9 = 0x42;
        goto code_r0x08005868;
    }
    iVar4 = regmap_write(puVar5[1],*puVar10 + 0x45,*(puVar10 + 0xe) | *(puVar10 + 10) << 4);
    if (iVar4 < 0) {
        uVar9 = 0x45;
        goto code_r0x08005868;
    }
    if (*(puVar10 + 0x14) == 0) {
        uVar6 = 0;
    }
    else {
        uVar8 = *(puVar10 + 0x14) - 1;
        if (*(puVar10 + 9) == '\0') {
            uVar6 = 1L << (uVar8 & 0x3f);
        }
        else {
            uVar6 = uVar8 | 0x80;
        }
    }
    iVar4 = regmap_write(puVar5[1],*puVar10 + 0x43,uVar6);
    if (iVar4 < 0) {
        uVar9 = 0x43;
        goto code_r0x08005868;
    }
    if (puVar10[4] == '\0') {
        if ((puVar10[3] == '\0') || (*(puVar10 + 7) == '\0')) {
            uVar3 = puVar10[3] != '\0';
            uVar8 = uVar3;
            cVar1 = *(puVar10 + 9);
            goto joined_r0x080057d0;
        }
        uVar3 = 2;
        uVar8 = 2;
        if (*(puVar10 + 9) != '\0') goto code_r0x08005744;
code_r0x080057d4:
        iVar4 = regmap_write(puVar5[1],*puVar10 + 0x40,*(puVar10 + 0x10) << 1 | uVar8 << 4 | puVar10[2]);
        if (iVar4 < 0) {
code_r0x08005854:
            uVar9 = 0x40;
            goto code_r0x08005868;
        }
    }
    else {
        uVar3 = 3;
        uVar8 = 3;
        cVar1 = *(puVar10 + 9);
joined_r0x080057d0:
        if (cVar1 == '\0') goto code_r0x080057d4;
code_r0x08005744:
        iVar4 = regmap_write(puVar5[1],*puVar10 + 0x40,uVar3);
        if (iVar4 < 0) goto code_r0x08005854;
        iVar4 = regmap_write(puVar5[1],*puVar10 + 0x4a,*(puVar10 + 0x12) + -1);
        if (iVar4 < 0) {
            uVar9 = 0x4a;
            goto code_r0x08005868;
        }
        iVar4 = regmap_write(puVar5[1],*puVar10 + 0x44,*(puVar10 + 0x10) & 0xf | puVar10[2] << 7);
        if (iVar4 < 0) {
            uVar9 = 0x44;
            goto code_r0x08005868;
        }
    }
    iVar4 = regmap_write(puVar5[1],*puVar10 + 0x46,puVar10[1] << 7);
    if (-1 < iVar4) {
        return iVar4;
    }
    uVar9 = 0x46;
code_r0x08005868:
    _dev_err(*puVar5,"write 0x%x failed\n",uVar9);
code_r0x0800587c:
    return iVar4;
}


// ===== sym.pmic_gpio_config_dbg_show @ 0x0800589c (size 672) =====

uint64_t sym.pmic_gpio_config_dbg_show(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    char *pcVar2;
    uint32_t uVar3;
    code *pcVar4;
    int iVar5;
    uint32_t uVar6;
    ulong *puVar7;
    uint64_t uVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint64_t extraout_x1;
    uint64_t extraout_x1_00;
    uint64_t extraout_x1_01;
    uint64_t extraout_x1_02;
    ulong *puVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *puVar12;
    uint16_t *puVar13;
    ulong unaff_x30;
    uchar auVar14 [16];
    uint64_t uStack_110;
    int64_t iStack_108;
    uchar ****ppppuStack_100;
    code *pcStack_f8;
    ulong *puStack_f0;
    uint64_t uStack_e8;
    uint32_t uStack_dc;
    int64_t iStack_d8;
    uchar ***pppuStack_d0;
    code *pcStack_c8;
    uint64_t uStack_c0;
    ulong *puStack_b0;
    uint64_t uStack_a8;
    uint64_t uStack_a0;
    int64_t iStack_98;
    uchar **ppuStack_90;
    code *pcStack_88;
    ulong *puStack_80;
    uint64_t uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    int64_t iStack_50;
    int iStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_38 = *(iVar9 + 0x5e0);
    puVar7 = pinctrl_dev_get_drvdata();
    puVar13 = *(*(*(arg1 + 0x10) + 8) + (arg3 & 0xffffffffU) * 0x18 + 0x10);
    seq_printf(arg2," gpio%-2d:",arg3 + 1);
    iStack_3c = 0;
    iVar5 = regmap_read(puVar7[1],*puVar13 + 0x46,&iStack_3c);
    if (iVar5 < 0) {
        _dev_err(*puVar7,"read 0x%x failed\n",0x46);
    }
    else if (0x7f < iStack_3c) {
        if (*(puVar13 + 7) != '\0') {
            iStack_3c = 0;
            uVar8 = regmap_read(puVar7[1],*puVar13 + 0x10,&iStack_3c);
            if (uVar8 < 0) {
                uVar8 = _dev_err(*puVar7,"read 0x%x failed\n",0x10);
                goto code_r0x08005ad4;
            }
            if (iStack_3c < 0) goto code_r0x08005ad4;
            *(puVar13 + 2) = iStack_3c & 1;
        }
        uVar3 = *(puVar13 + 0x10);
        uVar6 = uVar3 + 2;
        if (uVar3 < 4 || *(puVar13 + 9) != '\0') {
            uVar6 = uVar3;
        }
        puVar7 = uVar6;
        if (puVar13[4] == '\0') {
            uVar1 = 0x8002c3e;
            if (puVar13[3] != '\0') {
                uVar1 = 0x8002930;
            }
            seq_printf(arg2," %-4s",uVar1);
        }
        else {
            seq_puts(arg2," analog-pass");
        }
        pcVar2 = 0x8002ae2;
        if (puVar13[2] != '\0') {
            pcVar2 = "high";
        }
        seq_printf(arg2," %-4s",pcVar2);
        if (9 < uVar6) {
code_r0x08005b34:
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x5512,0x8005b38);
            (*pcVar4)();
        }
        seq_printf(arg2," %-7s",*(obj.pmic_gpio_functions + uVar6 * 8));
        seq_printf(arg2," vin-%d",*(puVar13 + 8));
        if (5 < *(puVar13 + 0xc)) goto code_r0x08005b34;
        seq_printf(arg2," %-27s",*(obj.pmic_gpio_config_dbg_show.biases + *(puVar13 + 0xc) * 8));
        if (2 < *(puVar13 + 10)) goto code_r0x08005b34;
        seq_printf(arg2," %-10s",*(obj.pmic_gpio_config_dbg_show.buffer_types + *(puVar13 + 10) * 8));
        if (3 < *(puVar13 + 0xe)) goto code_r0x08005b34;
        seq_printf(arg2," %-7s",*(obj.pmic_gpio_config_dbg_show.strengths + *(puVar13 + 0xe) * 8));
        seq_printf(arg2," atest-%d",*(puVar13 + 0x12));
        uVar8 = seq_printf(arg2," dtest-%d",*(puVar13 + 0x14));
        goto code_r0x08005ad4;
    }
    uVar8 = seq_puts(arg2," ---");
code_r0x08005ad4:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_38) {
        return uVar8;
    }
    __stack_chk_fail();
    puVar11 = &uStack_70;
    *extraout_x18 = sym.pmic_gpio_direction_input;
    pcStack_58 = sym.pmic_gpio_direction_input;
    iVar9 = sp_el0;
    iStack_68 = *(iVar9 + 0x5e0);
    puStack_60 = &stack0xffffffffffffffd0;
    iStack_50 = arg2;
    iVar9 = gpiochip_get_data();
    uStack_70 = 0x10c;
    uVar8 = sym.pmic_gpio_config_set(*(iVar9 + 0x10),extraout_x1 & 0xffffffff,&uStack_70,1);
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_68) {
        return uVar8;
    }
    __stack_chk_fail();
    iVar5 = &uStack_a0;
    *extraout_x18_00 = sym.pmic_gpio_direction_output;
    pcStack_88 = sym.pmic_gpio_direction_output;
    iVar9 = sp_el0;
    iStack_98 = *(iVar9 + 0x5e0);
    puVar12 = extraout_x1_00 & 0xffffffff;
    ppuStack_90 = &puStack_60;
    puStack_80 = puVar7;
    uStack_78 = extraout_x1 & 0xffffffff;
    iVar9 = gpiochip_get_data();
    uStack_a0 = puVar11 << 8 | 0x11;
    uVar8 = sym.pmic_gpio_config_set(*(iVar9 + 0x10),puVar12,&uStack_a0,1);
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_98) {
        return uVar8;
    }
    __stack_chk_fail();
    *extraout_x18_01 = sym.pmic_gpio_get;
    pcStack_c8 = sym.pmic_gpio_get;
    iVar9 = sp_el0;
    iStack_d8 = *(iVar9 + 0x5e0);
    pppuStack_d0 = &ppuStack_90;
    uStack_c0 = arg3 & 0xffffffff;
    puStack_b0 = puVar12;
    uStack_a8 = puVar11 & 0xffffffff;
    puVar7 = gpiochip_get_data();
    puVar13 = *(*(*(puVar7[2] + 0x10) + 8) + (extraout_x1_01 & 0xffffffff) * 0x18 + 0x10);
    if (puVar13[1] == '\0') {
        uVar8 = 0xffffffea;
    }
    else if (*(puVar13 + 7) == '\0') {
        uVar8 = puVar13[2];
    }
    else {
        uStack_dc = 0;
        iVar5 = &uStack_dc;
        uVar6 = regmap_read(puVar7[1],*puVar13 + 0x10);
        puVar12 = puVar7;
        if (uVar6 < 0) {
            uVar8 = uVar6;
            iVar5 = 0x10;
            _dev_err(*puVar7,"read 0x%x failed\n");
        }
        else {
            uVar8 = uStack_dc;
            if (-1 < uStack_dc) {
                uVar8 = uStack_dc & 1;
                *(puVar13 + 2) = uStack_dc & 1;
            }
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_d8) {
        return uVar8;
    }
    __stack_chk_fail();
    *extraout_x18_02 = sym.pmic_gpio_set;
    pcStack_f8 = sym.pmic_gpio_set;
    iVar9 = sp_el0;
    iStack_108 = *(iVar9 + 0x5e0);
    ppppuStack_100 = &pppuStack_d0;
    puStack_f0 = puVar12;
    uStack_e8 = uVar8;
    iVar9 = gpiochip_get_data();
    uStack_110 = iVar5 << 8 | 0x11;
    uVar8 = sym.pmic_gpio_config_set(*(iVar9 + 0x10),extraout_x1_02 & 0xffffffff,&uStack_110,1);
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_108) {
        return uVar8;
    }
    auVar14 = __stack_chk_fail();
    iVar9 = auVar14._8_8_;
    *extraout_x18_03 = sym.pmic_gpio_dbg_show;
    uVar10 = gpiochip_get_data(iVar9);
    uVar8 = uVar10;
    if (*(iVar9 + 0x94) != 0) {
        uVar6 = 0;
        do {
            sym.pmic_gpio_config_dbg_show(*(uVar10 + 0x10),auVar14._0_8_,uVar6);
            uVar8 = seq_puts(auVar14._0_8_,0x8002b63);
            uVar6 = uVar6 + 1;
        } while (uVar6 < *(iVar9 + 0x94));
    }
    return uVar8;
}


// ===== sym.pmic_gpio_direction_input @ 0x08005b3c (size 120) =====

uint64_t sym.pmic_gpio_direction_input(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong *puVar4;
    uint64_t uVar5;
    uint64_t extraout_x1;
    uint64_t extraout_x1_00;
    uint64_t extraout_x1_01;
    int iVar6;
    int iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *puVar8;
    uint16_t *puVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    uint64_t uStack_d0;
    int64_t iStack_c8;
    ulong **ppuStack_c0;
    code *pcStack_b8;
    ulong *puStack_b0;
    uint64_t uStack_a8;
    uint32_t uStack_9c;
    int64_t iStack_98;
    uchar **ppuStack_90;
    code *pcStack_88;
    uint64_t uStack_60;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    ulong uStack_30;
    int64_t iStack_28;
    
    iVar6 = &uStack_30;
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    iVar2 = gpiochip_get_data();
    uStack_30 = 0x10c;
    uVar3 = sym.pmic_gpio_config_set(*(iVar2 + 0x10),arg1 & 0xffffffff,&uStack_30,1);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return uVar3;
    }
    __stack_chk_fail();
    iVar7 = &uStack_60;
    *extraout_x18 = sym.pmic_gpio_direction_output;
    pcStack_48 = sym.pmic_gpio_direction_output;
    iVar2 = sp_el0;
    iStack_58 = *(iVar2 + 0x5e0);
    puVar8 = extraout_x1 & 0xffffffff;
    puStack_50 = &stack0xffffffffffffffe0;
    iVar2 = gpiochip_get_data();
    uStack_60 = iVar6 << 8 | 0x11;
    uVar3 = sym.pmic_gpio_config_set(*(iVar2 + 0x10),puVar8,&uStack_60,1);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_58) {
        return uVar3;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.pmic_gpio_get;
    pcStack_88 = sym.pmic_gpio_get;
    iVar2 = sp_el0;
    iStack_98 = *(iVar2 + 0x5e0);
    ppuStack_90 = &puStack_50;
    puVar4 = gpiochip_get_data();
    puVar9 = *(*(*(puVar4[2] + 0x10) + 8) + (extraout_x1_00 & 0xffffffff) * 0x18 + 0x10);
    if (puVar9[1] == '\0') {
        uVar3 = 0xffffffea;
    }
    else if (*(puVar9 + 7) == '\0') {
        uVar3 = puVar9[2];
    }
    else {
        uStack_9c = 0;
        iVar7 = &uStack_9c;
        uVar1 = regmap_read(puVar4[1],*puVar9 + 0x10);
        puVar8 = puVar4;
        if (uVar1 < 0) {
            uVar3 = uVar1;
            iVar7 = 0x10;
            _dev_err(*puVar4,"read 0x%x failed\n");
        }
        else {
            uVar3 = uStack_9c;
            if (-1 < uStack_9c) {
                uVar3 = uStack_9c & 1;
                *(puVar9 + 2) = uStack_9c & 1;
            }
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_98) {
        return uVar3;
    }
    __stack_chk_fail();
    *extraout_x18_01 = sym.pmic_gpio_set;
    pcStack_b8 = sym.pmic_gpio_set;
    iVar2 = sp_el0;
    iStack_c8 = *(iVar2 + 0x5e0);
    ppuStack_c0 = &ppuStack_90;
    puStack_b0 = puVar8;
    uStack_a8 = uVar3;
    iVar2 = gpiochip_get_data();
    uStack_d0 = iVar7 << 8 | 0x11;
    uVar3 = sym.pmic_gpio_config_set(*(iVar2 + 0x10),extraout_x1_01 & 0xffffffff,&uStack_d0,1);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_c8) {
        return uVar3;
    }
    auVar10 = __stack_chk_fail();
    iVar2 = auVar10._8_8_;
    *extraout_x18_02 = sym.pmic_gpio_dbg_show;
    uVar5 = gpiochip_get_data(iVar2);
    uVar3 = uVar5;
    if (*(iVar2 + 0x94) != 0) {
        uVar1 = 0;
        do {
            sym.pmic_gpio_config_dbg_show(*(uVar5 + 0x10),auVar10._0_8_,uVar1);
            uVar3 = seq_puts(auVar10._0_8_,0x8002b63);
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(iVar2 + 0x94));
    }
    return uVar3;
}


// ===== sym.pmic_gpio_direction_output @ 0x08005bb4 (size 128) =====

uint64_t sym.pmic_gpio_direction_output(ulong noname_0,int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong *puVar4;
    uint64_t uVar5;
    uint64_t extraout_x1;
    uint64_t extraout_x1_00;
    int iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *puVar7;
    uint16_t *puVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    uint64_t uStack_a0;
    int64_t iStack_98;
    uchar **ppuStack_90;
    code *pcStack_88;
    ulong *puStack_80;
    uint64_t uStack_78;
    uint32_t uStack_6c;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    uint64_t uStack_30;
    int64_t iStack_28;
    
    iVar6 = &uStack_30;
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    puVar7 = arg1 & 0xffffffff;
    iVar2 = gpiochip_get_data();
    uStack_30 = arg2 << 8 | 0x11;
    uVar3 = sym.pmic_gpio_config_set(*(iVar2 + 0x10),puVar7,&uStack_30,1);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return uVar3;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.pmic_gpio_get;
    pcStack_58 = sym.pmic_gpio_get;
    iVar2 = sp_el0;
    iStack_68 = *(iVar2 + 0x5e0);
    puStack_60 = &stack0xffffffffffffffe0;
    puVar4 = gpiochip_get_data();
    puVar8 = *(*(*(puVar4[2] + 0x10) + 8) + (extraout_x1 & 0xffffffff) * 0x18 + 0x10);
    if (puVar8[1] == '\0') {
        uVar3 = 0xffffffea;
    }
    else if (*(puVar8 + 7) == '\0') {
        uVar3 = puVar8[2];
    }
    else {
        uStack_6c = 0;
        iVar6 = &uStack_6c;
        uVar1 = regmap_read(puVar4[1],*puVar8 + 0x10);
        puVar7 = puVar4;
        if (uVar1 < 0) {
            uVar3 = uVar1;
            iVar6 = 0x10;
            _dev_err(*puVar4,"read 0x%x failed\n");
        }
        else {
            uVar3 = uStack_6c;
            if (-1 < uStack_6c) {
                uVar3 = uStack_6c & 1;
                *(puVar8 + 2) = uStack_6c & 1;
            }
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_68) {
        return uVar3;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.pmic_gpio_set;
    pcStack_88 = sym.pmic_gpio_set;
    iVar2 = sp_el0;
    iStack_98 = *(iVar2 + 0x5e0);
    ppuStack_90 = &puStack_60;
    puStack_80 = puVar7;
    uStack_78 = uVar3;
    iVar2 = gpiochip_get_data();
    uStack_a0 = iVar6 << 8 | 0x11;
    uVar3 = sym.pmic_gpio_config_set(*(iVar2 + 0x10),extraout_x1_00 & 0xffffffff,&uStack_a0,1);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_98) {
        return uVar3;
    }
    auVar9 = __stack_chk_fail();
    iVar2 = auVar9._8_8_;
    *extraout_x18_01 = sym.pmic_gpio_dbg_show;
    uVar5 = gpiochip_get_data(iVar2);
    uVar3 = uVar5;
    if (*(iVar2 + 0x94) != 0) {
        uVar1 = 0;
        do {
            sym.pmic_gpio_config_dbg_show(*(uVar5 + 0x10),auVar9._0_8_,uVar1);
            uVar3 = seq_puts(auVar9._0_8_,0x8002b63);
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(iVar2 + 0x94));
    }
    return uVar3;
}


// ===== sym.pmic_gpio_get @ 0x08005c34 (size 236) =====

uint64_t sym.pmic_gpio_get(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    ulong *puVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t extraout_x1;
    int in_w2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar5;
    ulong *unaff_x20;
    uint16_t *puVar6;
    ulong unaff_x30;
    uchar auVar7 [16];
    uint64_t uStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    ulong *puStack_50;
    uint64_t uStack_48;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    puVar2 = gpiochip_get_data();
    puVar6 = *(*(*(puVar2[2] + 0x10) + 8) + (arg1 & 0xffffffffU) * 0x18 + 0x10);
    if (puVar6[1] == '\0') {
        uVar5 = 0xffffffea;
    }
    else if (*(puVar6 + 7) == '\0') {
        uVar5 = puVar6[2];
    }
    else {
        uStack_3c = 0;
        in_w2 = &uStack_3c;
        uVar1 = regmap_read(puVar2[1],*puVar6 + 0x10);
        unaff_x20 = puVar2;
        if (uVar1 < 0) {
            uVar5 = uVar1;
            in_w2 = 0x10;
            _dev_err(*puVar2,"read 0x%x failed\n");
        }
        else {
            uVar5 = uStack_3c;
            if (-1 < uStack_3c) {
                uVar5 = uStack_3c & 1;
                *(puVar6 + 2) = uStack_3c & 1;
            }
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return uVar5;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.pmic_gpio_set;
    pcStack_58 = sym.pmic_gpio_set;
    iVar3 = sp_el0;
    iStack_68 = *(iVar3 + 0x5e0);
    puStack_60 = &stack0xffffffffffffffd0;
    puStack_50 = unaff_x20;
    uStack_48 = uVar5;
    iVar3 = gpiochip_get_data();
    uStack_70 = in_w2 << 8 | 0x11;
    uVar5 = sym.pmic_gpio_config_set(*(iVar3 + 0x10),extraout_x1 & 0xffffffff,&uStack_70,1);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_68) {
        return uVar5;
    }
    auVar7 = __stack_chk_fail();
    iVar3 = auVar7._8_8_;
    *extraout_x18_00 = sym.pmic_gpio_dbg_show;
    uVar4 = gpiochip_get_data(iVar3);
    uVar5 = uVar4;
    if (*(iVar3 + 0x94) != 0) {
        uVar1 = 0;
        do {
            sym.pmic_gpio_config_dbg_show(*(uVar4 + 0x10),auVar7._0_8_,uVar1);
            uVar5 = seq_puts(auVar7._0_8_,0x8002b63);
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(iVar3 + 0x94));
    }
    return uVar5;
}


// ===== sym.pmic_gpio_set @ 0x08005d20 (size 128) =====

void sym.pmic_gpio_set(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar3;
    ulong unaff_x30;
    uchar auVar4 [16];
    uint64_t uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    iVar1 = gpiochip_get_data();
    uStack_30 = arg2 << 8 | 0x11;
    sym.pmic_gpio_config_set(*(iVar1 + 0x10),arg1 & 0xffffffff,&uStack_30,1);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return;
    }
    auVar4 = __stack_chk_fail();
    iVar2 = auVar4._8_8_;
    *extraout_x18 = sym.pmic_gpio_dbg_show;
    iVar1 = gpiochip_get_data(iVar2);
    if (*(iVar2 + 0x94) != 0) {
        uVar3 = 0;
        do {
            sym.pmic_gpio_config_dbg_show(*(iVar1 + 0x10),auVar4._0_8_,uVar3);
            seq_puts(auVar4._0_8_,0x8002b63);
            uVar3 = uVar3 + 1;
        } while (uVar3 < *(iVar2 + 0x94));
    }
    return;
}


// ===== sym.pmic_gpio_dbg_show @ 0x08005da0 (size 140) =====

void sym.pmic_gpio_dbg_show(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong *in_x18;
    uint32_t uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = gpiochip_get_data(arg2);
    if (*(arg2 + 0x94) != 0) {
        uVar2 = 0;
        do {
            sym.pmic_gpio_config_dbg_show(*(iVar1 + 0x10),arg1,uVar2);
            seq_puts(arg1,0x8002b63);
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(arg2 + 0x94));
    }
    return;
}


// ===== sym.pmic_gpio_of_xlate @ 0x08005e2c (size 56) =====

int sym.pmic_gpio_of_xlate(int64_t arg1,int64_t arg2,int64_t arg3)

{
    if (*(arg1 + 0x250) < 2) {
        return -0x16;
    }
    if (arg3 != 0) {
        *arg3 = *(arg2 + 0x10);
    }
    return *(arg2 + 0xc) + -1;
}


// ===== sym.pmic_gpio_restore @ 0x08005e64 (size 224) =====

int sym.pmic_gpio_restore(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    uint32_t uVar4;
    int64_t arg1_00;
    ulong *puVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar5 = *(arg1 + 0x98);
    arg1_00 = puVar5[2];
    iVar3 = *(arg1_00 + 0x10);
    uVar1 = *(iVar3 + 0x10);
    if (uVar1 == 0) {
        return 0;
    }
    iVar6 = 0;
    uVar4 = 0;
    iVar2 = 0;
    while ((*(*(*(iVar3 + 8) + iVar6 + 0x10) + 3) == '\0' ||
           (iVar2 = sym.pmic_gpio_config_set(arg1_00,uVar4,0,0), -1 < iVar2))) {
        if (uVar1 * 0x18 + -0x18 == iVar6) {
            return iVar2;
        }
        iVar3 = *(arg1_00 + 0x10);
        uVar4 = uVar4 + 1;
        iVar6 = iVar6 + 0x18;
    }
    _dev_err(*puVar5,"Failed to restore pin %s[%d] ret=%d\n",*(*(*(arg1_00 + 0x10) + 8) + iVar6 + 8),uVar4,iVar2);
    return iVar2;
}


// ===== sym.__cfi_check_fail @ 0x08005f44 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08005f88

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
    //switch table (4 cases) at 0x8000262
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8005f9c);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08005fa4 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.pmic_gpio_probe.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08005fd8 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.pmic_gpio_probe.70141013a70e587e8e0d8595dfd2d0e7.cfi_jt);
    return;
}

