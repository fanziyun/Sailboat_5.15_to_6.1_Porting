// decompiled from pinctrl-spmi-mpp by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 908) =====

//WARNING: Switch with 1 destination removed at 0x080037ac

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x15d75c9cb8be166) {
        if (arg1 < -0x2996fdcb0852b944) {
            if (arg1 < -0x587ffabaca612230) {
                if (arg1 == -0x77b69042ae34e22a) {
                    pcVar2 = sym.pmic_mpp_dbg_show.35368ce36b52c58f12637531da9f01c5.cfi_jt;
                }
                else {
                    if (arg1 != -0x77a0775a4580c3cb) goto code_r0x0800376c;
                    pcVar2 = sym.gpiochip_generic_free.cfi_jt;
                }
            }
            else {
                if (arg1 != -0x587ffabaca612230) {
                    if (arg1 != -0x3557318fb8d07b71) goto code_r0x0800376c;
                    pcVar2 = sym.pmic_mpp_probe.35368ce36b52c58f12637531da9f01c5.cfi_jt;
                    goto code_r0x0800230c;
                }
                pcVar2 = sym.pmic_mpp_set.35368ce36b52c58f12637531da9f01c5.cfi_jt;
            }
        }
        else if (arg1 < -0x1cb09a6eed38ba56) {
            if (arg1 == -0x2996fdcb0852b944) {
                pcVar2 = sym.pmic_mpp_config_dbg_show.35368ce36b52c58f12637531da9f01c5.cfi_jt;
            }
            else {
                if (arg1 != -0x1cd02ce2833ba7b2) goto code_r0x0800376c;
                pcVar2 = sym.pmic_mpp_config_get.35368ce36b52c58f12637531da9f01c5.cfi_jt;
            }
        }
        else {
            if (arg1 == -0x1cb09a6eed38ba56) {
                pcVar2 = sym.pmic_mpp_get_functions_count.35368ce36b52c58f12637531da9f01c5.cfi_jt;
code_r0x0800230c:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x0800376c;
            }
            if (arg1 == -0x180cff1a9f8f2532) {
                pcVar2 = sym.pmic_mpp_get_group_pins.35368ce36b52c58f12637531da9f01c5.cfi_jt;
            }
            else {
                if (arg1 != 0xf0e53c515545f2) goto code_r0x0800376c;
                pcVar2 = sym.pmic_mpp_config_set.35368ce36b52c58f12637531da9f01c5.cfi_jt;
            }
        }
    }
    else if (arg1 < 0x3a5b8105ef6fba43) {
        if (arg1 < 0x3b314f7e6c3546b) {
            if (arg1 == 0x15d75c9cb8be166) {
                pcVar2 = sym.pmic_mpp_get_function_groups.35368ce36b52c58f12637531da9f01c5.cfi_jt;
            }
            else {
                if (arg1 != 0x2b3a43e29242445) goto code_r0x0800376c;
                pcVar2 = sym.init_module.cfi_jt;
            }
        }
        else {
            if (arg1 == 0x3b314f7e6c3546b) {
                if ((pcVar1 + -0x8002400 >> 3 | pcVar1 << 0x3d) < 4) {
                    return;
                }
                goto code_r0x0800376c;
            }
            if (arg1 == 0x365d4a3aad0aad08) {
                pcVar2 = sym.pmic_mpp_direction_output.35368ce36b52c58f12637531da9f01c5.cfi_jt;
            }
            else {
                if (arg1 != 0x377e9528983fbb7e) goto code_r0x0800376c;
                pcVar2 = sym.pinctrl_utils_free_map.cfi_jt;
            }
        }
    }
    else if (arg1 < 0x4dbf1e18d22acd6a) {
        if (arg1 != 0x3a5b8105ef6fba43) {
            if (arg1 != 0x4bc94621579436b9) goto code_r0x0800376c;
            pcVar2 = sym.pmic_mpp_get_group_name.35368ce36b52c58f12637531da9f01c5.cfi_jt;
            goto code_r0x0800230c;
        }
        pcVar2 = sym.pinconf_generic_dt_node_to_map_group.35368ce36b52c58f12637531da9f01c5.cfi_jt;
    }
    else if (arg1 == 0x4dbf1e18d22acd6a) {
        pcVar2 = sym.pmic_mpp_of_xlate.35368ce36b52c58f12637531da9f01c5.cfi_jt;
    }
    else if (arg1 == 0x59900d2c5a310a08) {
        pcVar2 = sym.pmic_mpp_set_mux.35368ce36b52c58f12637531da9f01c5.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x0800376c;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x0800376c:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80037c0);
    (*pcVar1)();
}


// ===== sym.pmic_mpp_config_set.35368ce36b52c58f12637531da9f01c5.cfi_jt @ 0x08002398 (size 8) =====

int sym.pmic_mpp_config_set.35368ce36b52c58f12637531da9f01c5.cfi_jt
              (int64_t param_1,uint64_t param_2,int64_t param_3,int param_4)

{
    uint32_t uVar1;
    int iVar2;
    int iVar3;
    ulong *arg1;
    uint32_t uVar4;
    ulong uVar5;
    ulong *in_x18;
    uint16_t *arg2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = pinctrl_dev_get_drvdata();
    arg2 = *(*(*(param_1 + 0x10) + 8) + (param_2 & 0xffffffff) * 0x18 + 0x10);
    *(arg2 + 4) = 1;
    if (param_4 != 0) {
        iVar3 = 0;
        iVar2 = -0x16;
        do {
            uVar5 = *(param_3 + iVar3 * 8);
            uVar4 = uVar5;
            uVar1 = uVar5 >> 8 & 0xffffff;
            switch(uVar4 & 0xff) {
            case 1:
                arg2[0x10] = 3;
                arg2[0x11] = 0;
                break;
            case 2:
                *(arg2 + 4) = 0;
                break;
            case 3:
            case 4:
            case 6:
            case 7:
            case 8:
            case 10:
            case 0xb:
            case 0xd:
            case 0xe:
            case 0xf:
            case 0x10:
            case 0x12:
            case 0x13:
                goto code_r0x080031e0;
            case 5:
                if (uVar1 == 30000) {
                    arg2[0x10] = 2;
                    arg2[0x11] = 0;
                }
                else if (uVar1 == 10000) {
                    arg2[0x10] = 1;
                    arg2[0x11] = 0;
                }
                else {
                    if (uVar1 != 600) {
                        return -0x16;
                    }
                    arg2[0x10] = 0;
                    arg2[0x11] = 0;
                }
                break;
            case 9:
                *(arg2 + 0x14) = uVar1;
                break;
            case 0xc:
                *(arg2 + 0xb) = 0xff < uVar4;
                break;
            case 0x11:
                *(arg2 + 5) = 1;
                *(arg2 + 9) = 0xff < uVar4;
                break;
            case 0x14:
                if (*(arg2 + 8) <= uVar1) {
                    return -0x16;
                }
                *(arg2 + 10) = uVar1;
                break;
            default:
                switch(uVar4 & 0xff) {
                case 0x80:
                    if (0x6ff < uVar4) {
                        return -0x16;
                    }
                    *(arg2 + 0xc) = uVar1;
                    break;
                case 0x81:
                    *(arg2 + 0xe) = uVar1;
                    break;
                case 0x82:
                    *(arg2 + 0x16) = uVar1;
                    break;
                case 0x83:
                    *(arg2 + 6) = 0xff < uVar4;
                    break;
                default:
                    goto code_r0x080031e0;
                }
            }
            iVar3 = iVar3 + 1;
        } while (param_4 != iVar3);
    }
    iVar2 = regmap_write(arg1[1],*arg2 + 0x41,*(arg2 + 10));
    if (iVar2 < 0) {
        uVar5 = 0x41;
    }
    else if ((*(arg2 + 0xd) == '\0') || (iVar2 = regmap_write(arg1[1],*arg2 + 0x42,*(arg2 + 0x10)), -1 < iVar2)) {
        iVar2 = regmap_write(arg1[1],*arg2 + 0x4a,*(arg2 + 0xc) & 7);
        if (iVar2 < 0) {
            uVar5 = 0x4a;
        }
        else {
            iVar2 = regmap_write(arg1[1],*arg2 + 0x48,*(arg2 + 0xe));
            if (iVar2 < 0) {
                uVar5 = 0x48;
            }
            else {
                iVar3 = sym.pmic_mpp_write_mode_ctl(arg1,arg2);
                if (iVar3 < 0) {
                    return iVar3;
                }
                iVar2 = regmap_write(arg1[1],*arg2 + 0x4c,*(arg2 + 0x14));
                if (iVar2 < 0) {
                    uVar5 = 0x4c;
                }
                else {
                    iVar2 = regmap_write(arg1[1],*arg2 + 0x46,arg2[4] << 7);
                    if (-1 < iVar2) {
                        return iVar2;
                    }
                    uVar5 = 0x46;
                }
            }
        }
    }
    else {
        uVar5 = 0x42;
    }
    _dev_err(*arg1,"write 0x%x failed\n",uVar5);
code_r0x080031e0:
    return iVar2;
}


// ===== sym.pmic_mpp_get_function_groups.35368ce36b52c58f12637531da9f01c5.cfi_jt @ 0x080023a0 (size 8) =====

ulong sym.pmic_mpp_get_function_groups.35368ce36b52c58f12637531da9f01c5.cfi_jt
                (int64_t param_1,ulong param_2,ulong *param_3,uint *param_4)

{
    *param_3 = obj.pmic_mpp_groups;
    *param_4 = *(*(param_1 + 0x10) + 0x10);
    return 0;
}


// ===== sym.pmic_mpp_of_xlate.35368ce36b52c58f12637531da9f01c5.cfi_jt @ 0x080023a8 (size 8) =====

int sym.pmic_mpp_of_xlate.35368ce36b52c58f12637531da9f01c5.cfi_jt(int64_t param_1,int64_t param_2,uint *param_3)

{
    if (*(param_1 + 0x250) < 2) {
        return -0x16;
    }
    if (param_3 != NULL) {
        *param_3 = *(param_2 + 0x10);
    }
    return *(param_2 + 0xc) + -1;
}


// ===== sym.pinctrl_utils_free_map.cfi_jt @ 0x080023b0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.pinctrl_utils_free_map.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.pmic_mpp_config_get.35368ce36b52c58f12637531da9f01c5.cfi_jt @ 0x080023b8 (size 8) =====

ulong sym.pmic_mpp_config_get.35368ce36b52c58f12637531da9f01c5.cfi_jt
                (int64_t param_1,uint32_t param_2,uint64_t *param_3)

{
    uint8_t uVar1;
    char cVar2;
    ulong uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    
    uVar3 = 0xffffffea;
    uVar1 = *param_3;
    iVar5 = *(*(*(param_1 + 0x10) + 8) + param_2 * 0x18 + 0x10);
    switch(uVar1) {
    case 1:
        if (*(iVar5 + 0x20) != 3) {
            return 0xffffffea;
        }
        goto code_r0x08002f04;
    case 2:
        if (*(iVar5 + 8) != '\0') {
            return 0xffffffea;
        }
        goto code_r0x08002f04;
    case 3:
    case 4:
    case 6:
    case 7:
    case 8:
    case 10:
    case 0xb:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x12:
    case 0x13:
        goto code_r0x08002f1c;
    case 5:
        if (2 < *(iVar5 + 0x20)) {
            return 0xffffffea;
        }
        uVar4 = *(*(iVar5 + 0x20) * 4 + 0x80010d0);
        break;
    case 9:
        uVar4 = *(iVar5 + 0x28);
        break;
    case 0xc:
        cVar2 = *(iVar5 + 0xb);
joined_r0x08002f00:
        if (cVar2 == '\0') {
            return 0xffffffea;
        }
code_r0x08002f04:
        uVar4 = 1;
        break;
    case 0x11:
        uVar4 = *(iVar5 + 9);
        break;
    case 0x14:
        uVar4 = *(iVar5 + 0x14);
        break;
    default:
        switch(uVar1) {
        case 0x80:
            uVar4 = *(iVar5 + 0x18);
            break;
        case 0x81:
            uVar4 = *(iVar5 + 0x1c);
            break;
        case 0x82:
            uVar4 = *(iVar5 + 0x2c);
            break;
        case 0x83:
            cVar2 = *(iVar5 + 0xc);
            goto joined_r0x08002f00;
        default:
            goto code_r0x08002f1c;
        }
    }
    uVar3 = 0;
    *param_3 = uVar1 | uVar4 << 8;
code_r0x08002f1c:
    return uVar3;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080023c0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.pmic_mpp_probe.35368ce36b52c58f12637531da9f01c5.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080023c8 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.pmic_mpp_probe.35368ce36b52c58f12637531da9f01c5.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.pinconf_generic_dt_node_to_map_group.35368ce36b52c58f12637531da9f01c5.cfi_jt @ 0x080023d0 (size 8) =====

void sym.pinconf_generic_dt_node_to_map_group.35368ce36b52c58f12637531da9f01c5.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pinconf_generic_dt_node_to_map();
    return;
}


// ===== sym.pmic_mpp_set_mux.35368ce36b52c58f12637531da9f01c5.cfi_jt @ 0x080023d8 (size 8) =====

int sym.pmic_mpp_set_mux.35368ce36b52c58f12637531da9f01c5.cfi_jt(int64_t param_1,uint param_2,uint64_t param_3)

{
    int iVar1;
    ulong *arg1;
    ulong *in_x18;
    uint16_t *arg2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = pinctrl_dev_get_drvdata();
    arg2 = *(*(*(param_1 + 0x10) + 8) + (param_3 & 0xffffffff) * 0x18 + 0x10);
    *(arg2 + 0x12) = param_2;
    iVar1 = sym.pmic_mpp_write_mode_ctl(arg1,arg2);
    if ((-1 < iVar1) && (iVar1 = regmap_write(arg1[1],*arg2 + 0x46,arg2[4] << 7), iVar1 < 0)) {
        _dev_err(*arg1,"write 0x%x failed\n",0x46);
    }
    return iVar1;
}


// ===== sym.pmic_mpp_config_dbg_show.35368ce36b52c58f12637531da9f01c5.cfi_jt @ 0x080023e0 (size 8) =====

void sym.pmic_mpp_config_dbg_show.35368ce36b52c58f12637531da9f01c5.cfi_jt
               (int64_t param_1,ulong param_2,uint32_t param_3)

{
    ulong uVar1;
    int64_t iVar2;
    code *pcVar3;
    int iVar4;
    ulong *puVar5;
    char *pcVar6;
    ulong *in_x18;
    uint16_t *puVar7;
    ulong unaff_x30;
    int iStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    puVar5 = pinctrl_dev_get_drvdata();
    puVar7 = *(*(*(param_1 + 0x10) + 8) + param_3 * 0x18 + 0x10);
    seq_printf(param_2," mpp%-2d:",param_3 + 1);
    if (puVar7[4] == '\0') {
        pcVar6 = " ---";
code_r0x080033ac:
        seq_puts(param_2,pcVar6);
    }
    else if (*(puVar7 + 0xb) == '\0') {
code_r0x080032a0:
        uVar1 = 0x8000325;
        if (puVar7[5] != '\0') {
            uVar1 = 0x800014d;
        }
        seq_printf(param_2," %-4s",uVar1);
        if (2 < *(puVar7 + 0x12)) goto code_r0x08003400;
        seq_printf(param_2," %-7s",*(obj.pmic_mpp_functions + *(puVar7 + 0x12) * 8));
        seq_printf(param_2," vin-%d",*(puVar7 + 10));
        seq_printf(param_2,0x800021f,*(puVar7 + 0xe));
        if (*(puVar7 + 0xd) != '\0') {
            if (3 < *(puVar7 + 0x10)) goto code_r0x08003400;
            seq_printf(param_2," %-8s",*(obj.pmic_mpp_config_dbg_show.biases + *(puVar7 + 0x10) * 8));
        }
        pcVar6 = 0x8000223;
        if (*(puVar7 + 9) != '\0') {
            pcVar6 = "high";
        }
        seq_printf(param_2," %-4s",pcVar6);
        if (*(puVar7 + 0x16) != 0) {
            seq_printf(param_2," dtest%d");
        }
        if (puVar7[6] != '\0') {
            pcVar6 = " paired";
            goto code_r0x080033ac;
        }
    }
    else {
        iStack_3c = 0;
        iVar4 = regmap_read(puVar5[1],*puVar7 + 0x10,&iStack_3c);
        if (iVar4 < 0) {
            _dev_err(*puVar5,"read 0x%x failed\n",0x10);
        }
        else if (-1 < iStack_3c) {
            *(puVar7 + 9) = iStack_3c & 1;
            goto code_r0x080032a0;
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail();
code_r0x08003400:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x8003404);
    (*pcVar3)();
}


// ===== sym.gpiochip_generic_free.cfi_jt @ 0x080023e8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.gpiochip_generic_free.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.pmic_mpp_get_group_name.35368ce36b52c58f12637531da9f01c5.cfi_jt @ 0x080023f0 (size 8) =====

ulong sym.pmic_mpp_get_group_name.35368ce36b52c58f12637531da9f01c5.cfi_jt(int64_t param_1,uint32_t param_2)

{
    return *(*(*(param_1 + 0x10) + 8) + param_2 * 0x18 + 8);
}


// ===== sym.pmic_mpp_get_function_name.35368ce36b52c58f12637531da9f01c5.cfi_jt @ 0x080023f8 (size 8) =====

ulong sym.pmic_mpp_get_function_name.35368ce36b52c58f12637531da9f01c5.cfi_jt(ulong param_1,uint32_t param_2)

{
    code *pcVar1;
    
    if (param_2 < 3) {
        return *(obj.pmic_mpp_functions + param_2 * 8);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8002c14);
    (*pcVar1)();
}


// ===== sym.pmic_mpp_direction_input.35368ce36b52c58f12637531da9f01c5.cfi_jt @ 0x08002400 (size 8) =====

uint64_t sym.pmic_mpp_direction_input.35368ce36b52c58f12637531da9f01c5.cfi_jt(ulong param_1,uint64_t param_2)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong *puVar4;
    uint64_t extraout_x1;
    uint64_t extraout_x1_00;
    uint64_t extraout_x1_01;
    uint64_t extraout_x1_02;
    int iVar5;
    int iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *puVar7;
    uint16_t *puVar8;
    ulong unaff_x30;
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
    
    iVar5 = &uStack_30;
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    iVar2 = gpiochip_get_data();
    uStack_30 = 0x10c;
    uVar3 = sym.pmic_mpp_config_set(*(iVar2 + 0x10),param_2 & 0xffffffff,&uStack_30,1);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return uVar3;
    }
    __stack_chk_fail();
    iVar6 = &uStack_60;
    *extraout_x18 = sym.pmic_mpp_direction_output;
    pcStack_48 = sym.pmic_mpp_direction_output;
    iVar2 = sp_el0;
    iStack_58 = *(iVar2 + 0x5e0);
    puVar7 = extraout_x1 & 0xffffffff;
    puStack_50 = &stack0xffffffffffffffe0;
    iVar2 = gpiochip_get_data();
    uStack_60 = iVar5 << 8 | 0x11;
    uVar3 = sym.pmic_mpp_config_set(*(iVar2 + 0x10),puVar7,&uStack_60,1);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_58) {
        return uVar3;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.pmic_mpp_get;
    pcStack_88 = sym.pmic_mpp_get;
    iVar2 = sp_el0;
    iStack_98 = *(iVar2 + 0x5e0);
    ppuStack_90 = &puStack_50;
    puVar4 = gpiochip_get_data();
    puVar8 = *(*(*(puVar4[2] + 0x10) + 8) + (extraout_x1_00 & 0xffffffff) * 0x18 + 0x10);
    if (*(puVar8 + 0xb) == '\0') {
        uVar3 = *(puVar8 + 9);
    }
    else {
        uStack_9c = 0;
        iVar6 = &uStack_9c;
        uVar1 = regmap_read(puVar4[1],*puVar8 + 0x10);
        puVar7 = puVar4;
        if (uVar1 < 0) {
            uVar3 = uVar1;
            iVar6 = 0x10;
            _dev_err(*puVar4,"read 0x%x failed\n");
        }
        else {
            uVar3 = uStack_9c;
            if (-1 < uStack_9c) {
                uVar3 = uStack_9c & 1;
                *(puVar8 + 9) = uStack_9c & 1;
            }
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_98) {
        return uVar3;
    }
    __stack_chk_fail();
    *extraout_x18_01 = sym.pmic_mpp_set;
    pcStack_b8 = sym.pmic_mpp_set;
    iVar2 = sp_el0;
    iStack_c8 = *(iVar2 + 0x5e0);
    ppuStack_c0 = &ppuStack_90;
    puStack_b0 = puVar7;
    uStack_a8 = uVar3;
    iVar2 = gpiochip_get_data();
    uStack_d0 = iVar6 << 8 | 0x11;
    uVar3 = sym.pmic_mpp_config_set(*(iVar2 + 0x10),extraout_x1_01 & 0xffffffff,&uStack_d0,1);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_c8) {
        return uVar3;
    }
    __stack_chk_fail();
    *extraout_x18_02 = sym.pmic_mpp_to_irq;
    iVar2 = gpiochip_get_data();
    return *(*(*(*(*(iVar2 + 0x10) + 0x10) + 8) + (extraout_x1_02 & 0xffffffff) * 0x18 + 0x10) + 4);
}


// ===== sym.gpiochip_generic_request.cfi_jt @ 0x08002408 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.gpiochip_generic_request.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.pmic_mpp_get.35368ce36b52c58f12637531da9f01c5.cfi_jt @ 0x08002410 (size 8) =====

uint64_t sym.pmic_mpp_get.35368ce36b52c58f12637531da9f01c5.cfi_jt(ulong param_1,uint64_t param_2,int param_3)

{
    uint32_t uVar1;
    ulong *puVar2;
    int64_t iVar3;
    uint64_t extraout_x1;
    uint64_t extraout_x1_00;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar4;
    ulong *unaff_x20;
    uint16_t *puVar5;
    ulong unaff_x30;
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
    puVar5 = *(*(*(puVar2[2] + 0x10) + 8) + (param_2 & 0xffffffff) * 0x18 + 0x10);
    if (*(puVar5 + 0xb) == '\0') {
        uVar4 = *(puVar5 + 9);
    }
    else {
        uStack_3c = 0;
        param_3 = &uStack_3c;
        uVar1 = regmap_read(puVar2[1],*puVar5 + 0x10);
        unaff_x20 = puVar2;
        if (uVar1 < 0) {
            uVar4 = uVar1;
            param_3 = 0x10;
            _dev_err(*puVar2,"read 0x%x failed\n");
        }
        else {
            uVar4 = uStack_3c;
            if (-1 < uStack_3c) {
                uVar4 = uStack_3c & 1;
                *(puVar5 + 9) = uStack_3c & 1;
            }
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return uVar4;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.pmic_mpp_set;
    pcStack_58 = sym.pmic_mpp_set;
    iVar3 = sp_el0;
    iStack_68 = *(iVar3 + 0x5e0);
    puStack_60 = &stack0xffffffffffffffd0;
    puStack_50 = unaff_x20;
    uStack_48 = uVar4;
    iVar3 = gpiochip_get_data();
    uStack_70 = param_3 << 8 | 0x11;
    uVar4 = sym.pmic_mpp_config_set(*(iVar3 + 0x10),extraout_x1 & 0xffffffff,&uStack_70,1);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_68) {
        return uVar4;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.pmic_mpp_to_irq;
    iVar3 = gpiochip_get_data();
    return *(*(*(*(*(iVar3 + 0x10) + 0x10) + 8) + (extraout_x1_00 & 0xffffffff) * 0x18 + 0x10) + 4);
}


// ===== sym.pmic_mpp_to_irq.35368ce36b52c58f12637531da9f01c5.cfi_jt @ 0x08002418 (size 8) =====

uint sym.pmic_mpp_to_irq.35368ce36b52c58f12637531da9f01c5.cfi_jt(ulong param_1,uint32_t param_2)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = gpiochip_get_data();
    return *(*(*(*(*(iVar1 + 0x10) + 0x10) + 8) + param_2 * 0x18 + 0x10) + 4);
}


// ===== sym.pmic_mpp_set.35368ce36b52c58f12637531da9f01c5.cfi_jt @ 0x08002420 (size 8) =====

uint64_t sym.pmic_mpp_set.35368ce36b52c58f12637531da9f01c5.cfi_jt(ulong param_1,uint64_t param_2,int param_3)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t extraout_x1;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint64_t uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    iVar1 = gpiochip_get_data();
    uStack_30 = param_3 << 8 | 0x11;
    uVar2 = sym.pmic_mpp_config_set(*(iVar1 + 0x10),param_2 & 0xffffffff,&uStack_30,1);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return uVar2;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.pmic_mpp_to_irq;
    iVar1 = gpiochip_get_data();
    return *(*(*(*(*(iVar1 + 0x10) + 0x10) + 8) + (extraout_x1 & 0xffffffff) * 0x18 + 0x10) + 4);
}


// ===== sym.pmic_mpp_direction_output.35368ce36b52c58f12637531da9f01c5.cfi_jt @ 0x08002428 (size 8) =====

uint64_t sym.pmic_mpp_direction_output.35368ce36b52c58f12637531da9f01c5.cfi_jt
                   (ulong param_1,uint64_t param_2,int param_3)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong *puVar4;
    uint64_t extraout_x1;
    uint64_t extraout_x1_00;
    uint64_t extraout_x1_01;
    int iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *puVar6;
    uint16_t *puVar7;
    ulong unaff_x30;
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
    
    iVar5 = &uStack_30;
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    puVar6 = param_2 & 0xffffffff;
    iVar2 = gpiochip_get_data();
    uStack_30 = param_3 << 8 | 0x11;
    uVar3 = sym.pmic_mpp_config_set(*(iVar2 + 0x10),puVar6,&uStack_30,1);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return uVar3;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.pmic_mpp_get;
    pcStack_58 = sym.pmic_mpp_get;
    iVar2 = sp_el0;
    iStack_68 = *(iVar2 + 0x5e0);
    puStack_60 = &stack0xffffffffffffffe0;
    puVar4 = gpiochip_get_data();
    puVar7 = *(*(*(puVar4[2] + 0x10) + 8) + (extraout_x1 & 0xffffffff) * 0x18 + 0x10);
    if (*(puVar7 + 0xb) == '\0') {
        uVar3 = *(puVar7 + 9);
    }
    else {
        uStack_6c = 0;
        iVar5 = &uStack_6c;
        uVar1 = regmap_read(puVar4[1],*puVar7 + 0x10);
        puVar6 = puVar4;
        if (uVar1 < 0) {
            uVar3 = uVar1;
            iVar5 = 0x10;
            _dev_err(*puVar4,"read 0x%x failed\n");
        }
        else {
            uVar3 = uStack_6c;
            if (-1 < uStack_6c) {
                uVar3 = uStack_6c & 1;
                *(puVar7 + 9) = uStack_6c & 1;
            }
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_68) {
        return uVar3;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.pmic_mpp_set;
    pcStack_88 = sym.pmic_mpp_set;
    iVar2 = sp_el0;
    iStack_98 = *(iVar2 + 0x5e0);
    ppuStack_90 = &puStack_60;
    puStack_80 = puVar6;
    uStack_78 = uVar3;
    iVar2 = gpiochip_get_data();
    uStack_a0 = iVar5 << 8 | 0x11;
    uVar3 = sym.pmic_mpp_config_set(*(iVar2 + 0x10),extraout_x1_00 & 0xffffffff,&uStack_a0,1);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_98) {
        return uVar3;
    }
    __stack_chk_fail();
    *extraout_x18_01 = sym.pmic_mpp_to_irq;
    iVar2 = gpiochip_get_data();
    return *(*(*(*(*(iVar2 + 0x10) + 0x10) + 8) + (extraout_x1_01 & 0xffffffff) * 0x18 + 0x10) + 4);
}


// ===== sym.pmic_mpp_get_functions_count.35368ce36b52c58f12637531da9f01c5.cfi_jt @ 0x08002430 (size 8) =====

ulong sym.pmic_mpp_get_functions_count.35368ce36b52c58f12637531da9f01c5.cfi_jt(void)

{
    return 3;
}


// ===== sym.pmic_mpp_get_groups_count.35368ce36b52c58f12637531da9f01c5.cfi_jt @ 0x08002438 (size 8) =====

uint sym.pmic_mpp_get_groups_count.35368ce36b52c58f12637531da9f01c5.cfi_jt(int64_t param_1)

{
    return *(*(param_1 + 0x10) + 0x10);
}


// ===== sym.pmic_mpp_probe.35368ce36b52c58f12637531da9f01c5.cfi_jt @ 0x08002440 (size 8) =====

uint64_t sym.pmic_mpp_probe.35368ce36b52c58f12637531da9f01c5.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    uint uVar2;
    ushort uVar3;
    uint32_t uVar4;
    code *pcVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    int64_t *piVar8;
    ulong uVar9;
    int64_t iVar10;
    int64_t iVar11;
    int64_t *piVar12;
    char *pcVar13;
    int64_t iVar14;
    int iVar15;
    ulong *in_x18;
    uint64_t uVar16;
    int iVar17;
    uint64_t uVar18;
    int64_t *piVar19;
    uint64_t uVar20;
    ulong unaff_x30;
    int iStack_70;
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_68 = *(iVar10 + 0x5e0);
    piVar1 = param_1 + 0x10;
    iStack_70 = 0;
    uVar6 = of_property_read_variable_u32_array(*(param_1 + 0x300),0x8000309,&iStack_70,1,0);
    if (uVar6 < 0) {
        uVar16 = uVar6;
        _dev_err(piVar1,"missing base address");
    }
    else {
        uVar7 = platform_irq_count(param_1);
        uVar6 = uVar7;
        if (uVar6 == 0) {
            uVar16 = 0xffffffea;
        }
        else {
            uVar16 = uVar7 & 0xffffffff;
            if (-1 < uVar6) {
                if (8 < uVar6) {
    //WARNING: Does not return
                    pcVar5 = SoftwareBreakpoint(0x800,0x8002b24);
                    (*pcVar5)();
                }
                piVar8 = devm_kmalloc(piVar1,0x288,0xdc0);
                if (piVar8 != NULL) {
                    uVar9 = *(param_1 + 0x70);
                    uVar18 = uVar7 & 0xffffffff;
                    *(param_1 + 0xa8) = piVar8;
                    *piVar8 = piVar1;
                    iVar10 = dev_get_regmap(uVar9,0);
                    piVar8[1] = iVar10;
                    iVar10 = devm_kmalloc(piVar1,uVar18 * 0x18,0xdc0);
                    if (((iVar10 != 0) && (iVar11 = devm_kmalloc(piVar1,uVar18 * 0x30,0xdc0), iVar11 != 0)) &&
                       (piVar12 = devm_kmalloc(piVar1,0x58,0xdc0), piVar12 != NULL)) {
                        piVar12[3] = reloc.pmic_mpp_get_groups_count.35368ce36b52c58f12637531da9f01c5.cfi_jt;
                        piVar12[4] = obj.pmic_mpp_pinmux_ops;
                        iVar14 = *(param_1 + 0x80);
                        piVar12[5] = obj.pmic_mpp_pinconf_ops;
                        piVar12[6] = obj.__this_module;
                        if (iVar14 == 0) {
                            iVar14 = *piVar1;
                        }
                        *piVar12 = iVar14;
                        piVar12[1] = iVar10;
                        iVar17 = 0;
                        *(piVar12 + 7) = 4;
                        iVar14 = 0;
                        uVar20 = 0;
                        *(piVar12 + 2) = uVar6;
                        piVar12[8] = obj.pmic_mpp_bindings;
                        piVar12[9] = obj.pmic_conf_items;
                        piVar19 = iVar10 + 0x10;
                        do {
                            *(piVar19 + -2) = uVar20;
                            *piVar19 = iVar11 + iVar14;
                            if (iVar14 == 0x180) goto code_r0x08002b1c;
                            piVar19[-1] = *(obj.pmic_mpp_groups + uVar20 * 8);
                            uVar16 = platform_get_irq(param_1,uVar20 & 0xffffffff);
                            *(iVar11 + iVar14 + 4) = uVar16;
                            if (uVar16 < 0) {
                                uVar16 = uVar16 & 0xffffffff;
                                goto code_r0x080028f8;
                            }
                            iVar10 = piVar8[1];
                            uStack_6c = 0;
                            *(iVar11 + iVar14) = iVar17 + iStack_70;
                            uVar16 = regmap_read(iVar10,(iVar17 + iStack_70 & 0xffffU) + 4,&uStack_6c);
                            if (uVar16 < 0) {
                                uVar16 = uVar16 & 0xffffffff;
                                iVar10 = *piVar8;
                                uVar9 = 4;
                                goto code_r0x08002af0;
                            }
                            if (uStack_6c < 0) {
                                uVar16 = uStack_6c;
                                goto code_r0x080028f8;
                            }
                            if (uStack_6c != 0x11) {
                                uVar3 = *(iVar11 + iVar14);
                                iVar10 = *piVar8;
                                pcVar13 = "incorrect block type 0x%x at 0x%x\n";
code_r0x08002a1c:
                                _dev_err(iVar10,pcVar13,uStack_6c,uVar3);
                                uVar16 = 0xffffffed;
                                goto code_r0x080028f8;
                            }
                            uStack_6c = 0;
                            uVar16 = regmap_read(piVar8[1],*(iVar11 + iVar14) + 5,&uStack_6c);
                            uVar6 = uStack_6c;
                            if (uVar16 < 0) {
                                uVar16 = uVar16 & 0xffffffff;
                                iVar10 = *piVar8;
                                uVar9 = 5;
                                goto code_r0x08002af0;
                            }
                            if (uStack_6c < 0) {
                                uVar16 = uStack_6c;
                                goto code_r0x080028f8;
                            }
                            uVar4 = uStack_6c - 3;
                            if ((0xc < uVar4) || ((0x101fU >> (uVar4 & 0x1f) & 1) == 0)) {
                                uVar3 = *(iVar11 + iVar14);
                                iVar10 = *piVar8;
                                pcVar13 = "unknown MPP type 0x%x at 0x%x\n";
                                goto code_r0x08002a1c;
                            }
                            iVar10 = piVar8[1];
                            uStack_6c = 0;
                            *(iVar11 + iVar14 + 8) = *(uVar4 * 4 + 0x8001080);
                            uVar16 = regmap_read(iVar10,*(iVar11 + iVar14) + 0x40,&uStack_6c);
                            if (uVar16 < 0) {
                                iVar10 = *piVar8;
                                uVar9 = 0x40;
code_r0x08002a80:
                                uVar16 = uVar16 & 0xffffffff;
                                _dev_err(iVar10,"read 0x%x failed\n",uVar9);
                                goto code_r0x080028f8;
                            }
                            if (uStack_6c < 0) {
                                uVar16 = uStack_6c;
                                goto code_r0x080028f8;
                            }
                            iVar10 = iVar11 + iVar14;
                            uVar16 = uStack_6c >> 4 & 7;
                            iVar15 = uVar16;
                            *(iVar10 + 9) = uStack_6c & 1;
                            if (iVar15 == 7) {
                                _dev_err(*piVar8,"unknown MPP direction\n");
                                uVar16 = 0xffffffed;
                                goto code_r0x080028f8;
                            }
                            iVar15 = iVar15 << 3;
                            uVar4 = uStack_6c >> 1 & 7;
                            uVar2 = *(uVar16 * 4 + 0x80010b4);
                            *(iVar10 + 0xb) = 0x101010001 >> iVar15;
                            *(iVar10 + 0x24) = uVar2;
                            *(iVar10 + 10) = 0x1010001010100 >> iVar15;
                            if (uVar4 < 4) {
                                if (uVar4 == 1) {
                                    *(iVar11 + iVar14 + 0xc) = 1;
                                }
                            }
                            else {
                                *(iVar11 + iVar14 + 0x2c) = uVar4 + 1;
                            }
                            uStack_6c = 0;
                            uVar16 = regmap_read(piVar8[1],*(iVar11 + iVar14) + 0x41,&uStack_6c);
                            if (uVar16 < 0) {
                                iVar10 = *piVar8;
                                uVar9 = 0x41;
                                goto code_r0x08002a80;
                            }
                            uVar16 = uStack_6c;
                            if (uStack_6c < 0) goto code_r0x080028f8;
                            *(iVar11 + iVar14 + 0x14) = uStack_6c & 7;
                            if ((uVar6 & 0xfffffffd) != 4) {
                                uStack_6c = 0;
                                uVar16 = regmap_read(piVar8[1],*(iVar11 + iVar14) + 0x42,&uStack_6c);
                                if (uVar16 < 0) {
                                    uVar16 = uVar16 & 0xffffffff;
                                    iVar10 = *piVar8;
                                    uVar9 = 0x42;
                                    goto code_r0x08002af0;
                                }
                                uVar16 = uStack_6c;
                                if (uStack_6c < 0) goto code_r0x080028f8;
                                *(iVar11 + iVar14 + 0x20) = uStack_6c & 7;
                                *(iVar11 + iVar14 + 0xd) = 1;
                            }
                            uStack_6c = 0;
                            uVar16 = regmap_read(piVar8[1],*(iVar11 + iVar14) + 0x4a,&uStack_6c);
                            if (uVar16 < 0) {
                                uVar16 = uVar16 & 0xffffffff;
                                iVar10 = *piVar8;
                                uVar9 = 0x4a;
code_r0x08002af0:
                                _dev_err(iVar10,"read 0x%x failed\n",uVar9);
                                goto code_r0x080028f8;
                            }
                            uVar16 = uStack_6c;
                            if (uStack_6c < 0) goto code_r0x080028f8;
                            uVar6 = uStack_6c & 7;
                            iVar10 = piVar8[1];
                            uStack_6c = 0;
                            *(iVar11 + iVar14 + 0xc) = uVar6;
                            uVar16 = regmap_read(iVar10,*(iVar11 + iVar14) + 0x4c,&uStack_6c);
                            uVar6 = uStack_6c;
                            if (uVar16 < 0) {
                                uVar16 = uVar16 & 0xffffffff;
                                iVar10 = *piVar8;
                                uVar9 = 0x4c;
                                goto code_r0x08002af0;
                            }
                            uVar16 = uStack_6c;
                            if (uStack_6c < 0) goto code_r0x080028f8;
                            iVar10 = piVar8[1];
                            uStack_6c = 0;
                            *(iVar11 + iVar14 + 0x14) = uVar6;
                            uVar16 = regmap_read(iVar10,*(iVar11 + iVar14) + 0x48,&uStack_6c);
                            uVar6 = uStack_6c;
                            if (uVar16 < 0) {
                                uVar16 = uVar16 & 0xffffffff;
                                iVar10 = *piVar8;
                                uVar9 = 0x48;
                                goto code_r0x08002af0;
                            }
                            uVar16 = uStack_6c;
                            if (uStack_6c < 0) goto code_r0x080028f8;
                            iVar10 = piVar8[1];
                            uStack_6c = 0;
                            *(iVar11 + iVar14 + 0xe) = uVar6;
                            uVar16 = regmap_read(iVar10,*(iVar11 + iVar14) + 0x46,&uStack_6c);
                            if (uVar16 < 0) {
                                uVar16 = uVar16 & 0xffffffff;
                                iVar10 = *piVar8;
                                uVar9 = 0x46;
                                goto code_r0x08002af0;
                            }
                            uVar16 = uStack_6c;
                            if (uStack_6c < 0) goto code_r0x080028f8;
                            iVar10 = iVar11 + iVar14;
                            uVar20 = uVar20 + 1;
                            piVar19 = piVar19 + 3;
                            iVar14 = iVar14 + 0x30;
                            iVar17 = iVar17 + 0x100;
                            *(iVar10 + 8) = uStack_6c != 0;
                        } while (uVar18 * 0x30 != iVar14);
                        piVar19 = piVar8 + 3;
                        iVar10 = *(param_1 + 0x80);
                        memcpy(piVar19,obj.pmic_mpp_gpio_template,0x270);
                        *(piVar8 + 0xac) = uVar7;
                        piVar8[5] = piVar1;
                        *(piVar8 + 0x15) = 0xffffffff;
                        if (iVar10 == 0) {
                            iVar10 = *piVar1;
                        }
                        piVar8[3] = iVar10;
                        *(piVar8 + 0x4d) = 2;
                        *(piVar8 + 0x17) = 0;
                        uVar16 = devm_pinctrl_register(piVar1,piVar12,piVar8);
                        piVar8[2] = uVar16;
                        if (uVar16 < 0xfffffffffffff001) {
                            uVar6 = gpiochip_add_data_with_key(piVar19,piVar8,0,0);
                            if (uVar6 == 0) {
                                iVar10 = *(param_1 + 0x80);
                                if (iVar10 == 0) {
                                    iVar10 = *piVar1;
                                }
                                uVar7 = gpiochip_add_pin_range(piVar19,iVar10,0,0,uVar7 & 0xffffffff);
                                uVar16 = 0;
                                if (uVar7 != 0) {
                                    uVar16 = uVar7 & 0xffffffff;
                                    _dev_err(piVar1,"failed to add pin range\n");
                                    gpiochip_remove(piVar19);
                                }
                            }
                            else {
                                uVar16 = uVar6;
                                _dev_err(*piVar8,"can\'t add gpio chip\n");
                            }
                        }
                        else {
                            uVar16 = uVar16 & 0xffffffff;
                        }
                        goto code_r0x080028f8;
                    }
                }
                uVar16 = 0xfffffff4;
            }
        }
    }
code_r0x080028f8:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_68) {
        return uVar16;
    }
    __stack_chk_fail();
code_r0x08002b1c:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x8002b20);
    (*pcVar5)();
}


// ===== sym.pmic_mpp_remove.35368ce36b52c58f12637531da9f01c5.cfi_jt @ 0x08002448 (size 8) =====

ulong sym.pmic_mpp_remove.35368ce36b52c58f12637531da9f01c5.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    gpiochip_remove(*(param_1 + 0xa8) + 0x18);
    return 0;
}


// ===== sym.pmic_mpp_get_group_pins.35368ce36b52c58f12637531da9f01c5.cfi_jt @ 0x08002450 (size 8) =====

ulong sym.pmic_mpp_get_group_pins.35368ce36b52c58f12637531da9f01c5.cfi_jt
                (int64_t param_1,uint32_t param_2,int64_t *param_3,uint *param_4)

{
    *param_3 = *(*(param_1 + 0x10) + 8) + param_2 * 0x18;
    *param_4 = 1;
    return 0;
}


// ===== sym.pmic_mpp_dbg_show.35368ce36b52c58f12637531da9f01c5.cfi_jt @ 0x08002458 (size 8) =====

void sym.pmic_mpp_dbg_show.35368ce36b52c58f12637531da9f01c5.cfi_jt(int64_t param_1,int64_t param_2)

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
            sym.pmic_mpp_config_dbg_show(*(iVar1 + 0x10),param_1,uVar2);
            seq_puts(param_1,0x80002e7);
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(param_2 + 0x94));
    }
    return;
}


// ===== sym.pmic_mpp_probe @ 0x08002460 (size 1732) =====

uint64_t sym.pmic_mpp_probe(int64_t arg1)

{
    int64_t *piVar1;
    uint uVar2;
    ushort uVar3;
    uint32_t uVar4;
    code *pcVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    int64_t *piVar8;
    ulong uVar9;
    int64_t iVar10;
    int64_t iVar11;
    int64_t *piVar12;
    char *pcVar13;
    int64_t iVar14;
    int iVar15;
    ulong *in_x18;
    uint64_t uVar16;
    int iVar17;
    uint64_t uVar18;
    int64_t *piVar19;
    uint64_t uVar20;
    ulong unaff_x30;
    int iStack_70;
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_68 = *(iVar10 + 0x5e0);
    piVar1 = arg1 + 0x10;
    iStack_70 = 0;
    uVar6 = of_property_read_variable_u32_array(*(arg1 + 0x300),0x8000309,&iStack_70,1,0);
    if (uVar6 < 0) {
        uVar16 = uVar6;
        _dev_err(piVar1,"missing base address");
    }
    else {
        uVar7 = platform_irq_count(arg1);
        uVar6 = uVar7;
        if (uVar6 == 0) {
            uVar16 = 0xffffffea;
        }
        else {
            uVar16 = uVar7 & 0xffffffff;
            if (-1 < uVar6) {
                if (8 < uVar6) {
    //WARNING: Does not return
                    pcVar5 = SoftwareBreakpoint(0x800,0x8002b24);
                    (*pcVar5)();
                }
                piVar8 = devm_kmalloc(piVar1,0x288,0xdc0);
                if (piVar8 != NULL) {
                    uVar9 = *(arg1 + 0x70);
                    uVar18 = uVar7 & 0xffffffff;
                    *(arg1 + 0xa8) = piVar8;
                    *piVar8 = piVar1;
                    iVar10 = dev_get_regmap(uVar9,0);
                    piVar8[1] = iVar10;
                    iVar10 = devm_kmalloc(piVar1,uVar18 * 0x18,0xdc0);
                    if (((iVar10 != 0) && (iVar11 = devm_kmalloc(piVar1,uVar18 * 0x30,0xdc0), iVar11 != 0)) &&
                       (piVar12 = devm_kmalloc(piVar1,0x58,0xdc0), piVar12 != NULL)) {
                        piVar12[3] = reloc.pmic_mpp_get_groups_count.35368ce36b52c58f12637531da9f01c5.cfi_jt;
                        piVar12[4] = obj.pmic_mpp_pinmux_ops;
                        iVar14 = *(arg1 + 0x80);
                        piVar12[5] = obj.pmic_mpp_pinconf_ops;
                        piVar12[6] = obj.__this_module;
                        if (iVar14 == 0) {
                            iVar14 = *piVar1;
                        }
                        *piVar12 = iVar14;
                        piVar12[1] = iVar10;
                        iVar17 = 0;
                        *(piVar12 + 7) = 4;
                        iVar14 = 0;
                        uVar20 = 0;
                        *(piVar12 + 2) = uVar6;
                        piVar12[8] = obj.pmic_mpp_bindings;
                        piVar12[9] = obj.pmic_conf_items;
                        piVar19 = iVar10 + 0x10;
                        do {
                            *(piVar19 + -2) = uVar20;
                            *piVar19 = iVar11 + iVar14;
                            if (iVar14 == 0x180) goto code_r0x08002b1c;
                            piVar19[-1] = *(obj.pmic_mpp_groups + uVar20 * 8);
                            uVar16 = platform_get_irq(arg1,uVar20 & 0xffffffff);
                            *(iVar11 + iVar14 + 4) = uVar16;
                            if (uVar16 < 0) {
                                uVar16 = uVar16 & 0xffffffff;
                                goto code_r0x080028f8;
                            }
                            iVar10 = piVar8[1];
                            uStack_6c = 0;
                            *(iVar11 + iVar14) = iVar17 + iStack_70;
                            uVar16 = regmap_read(iVar10,(iVar17 + iStack_70 & 0xffffU) + 4,&uStack_6c);
                            if (uVar16 < 0) {
                                uVar16 = uVar16 & 0xffffffff;
                                iVar10 = *piVar8;
                                uVar9 = 4;
                                goto code_r0x08002af0;
                            }
                            if (uStack_6c < 0) {
                                uVar16 = uStack_6c;
                                goto code_r0x080028f8;
                            }
                            if (uStack_6c != 0x11) {
                                uVar3 = *(iVar11 + iVar14);
                                iVar10 = *piVar8;
                                pcVar13 = "incorrect block type 0x%x at 0x%x\n";
code_r0x08002a1c:
                                _dev_err(iVar10,pcVar13,uStack_6c,uVar3);
                                uVar16 = 0xffffffed;
                                goto code_r0x080028f8;
                            }
                            uStack_6c = 0;
                            uVar16 = regmap_read(piVar8[1],*(iVar11 + iVar14) + 5,&uStack_6c);
                            uVar6 = uStack_6c;
                            if (uVar16 < 0) {
                                uVar16 = uVar16 & 0xffffffff;
                                iVar10 = *piVar8;
                                uVar9 = 5;
                                goto code_r0x08002af0;
                            }
                            if (uStack_6c < 0) {
                                uVar16 = uStack_6c;
                                goto code_r0x080028f8;
                            }
                            uVar4 = uStack_6c - 3;
                            if ((0xc < uVar4) || ((0x101fU >> (uVar4 & 0x1f) & 1) == 0)) {
                                uVar3 = *(iVar11 + iVar14);
                                iVar10 = *piVar8;
                                pcVar13 = "unknown MPP type 0x%x at 0x%x\n";
                                goto code_r0x08002a1c;
                            }
                            iVar10 = piVar8[1];
                            uStack_6c = 0;
                            *(iVar11 + iVar14 + 8) = *(uVar4 * 4 + 0x8001080);
                            uVar16 = regmap_read(iVar10,*(iVar11 + iVar14) + 0x40,&uStack_6c);
                            if (uVar16 < 0) {
                                iVar10 = *piVar8;
                                uVar9 = 0x40;
code_r0x08002a80:
                                uVar16 = uVar16 & 0xffffffff;
                                _dev_err(iVar10,"read 0x%x failed\n",uVar9);
                                goto code_r0x080028f8;
                            }
                            if (uStack_6c < 0) {
                                uVar16 = uStack_6c;
                                goto code_r0x080028f8;
                            }
                            iVar10 = iVar11 + iVar14;
                            uVar16 = uStack_6c >> 4 & 7;
                            iVar15 = uVar16;
                            *(iVar10 + 9) = uStack_6c & 1;
                            if (iVar15 == 7) {
                                _dev_err(*piVar8,"unknown MPP direction\n");
                                uVar16 = 0xffffffed;
                                goto code_r0x080028f8;
                            }
                            iVar15 = iVar15 << 3;
                            uVar4 = uStack_6c >> 1 & 7;
                            uVar2 = *(uVar16 * 4 + 0x80010b4);
                            *(iVar10 + 0xb) = 0x101010001 >> iVar15;
                            *(iVar10 + 0x24) = uVar2;
                            *(iVar10 + 10) = 0x1010001010100 >> iVar15;
                            if (uVar4 < 4) {
                                if (uVar4 == 1) {
                                    *(iVar11 + iVar14 + 0xc) = 1;
                                }
                            }
                            else {
                                *(iVar11 + iVar14 + 0x2c) = uVar4 + 1;
                            }
                            uStack_6c = 0;
                            uVar16 = regmap_read(piVar8[1],*(iVar11 + iVar14) + 0x41,&uStack_6c);
                            if (uVar16 < 0) {
                                iVar10 = *piVar8;
                                uVar9 = 0x41;
                                goto code_r0x08002a80;
                            }
                            uVar16 = uStack_6c;
                            if (uStack_6c < 0) goto code_r0x080028f8;
                            *(iVar11 + iVar14 + 0x14) = uStack_6c & 7;
                            if ((uVar6 & 0xfffffffd) != 4) {
                                uStack_6c = 0;
                                uVar16 = regmap_read(piVar8[1],*(iVar11 + iVar14) + 0x42,&uStack_6c);
                                if (uVar16 < 0) {
                                    uVar16 = uVar16 & 0xffffffff;
                                    iVar10 = *piVar8;
                                    uVar9 = 0x42;
                                    goto code_r0x08002af0;
                                }
                                uVar16 = uStack_6c;
                                if (uStack_6c < 0) goto code_r0x080028f8;
                                *(iVar11 + iVar14 + 0x20) = uStack_6c & 7;
                                *(iVar11 + iVar14 + 0xd) = 1;
                            }
                            uStack_6c = 0;
                            uVar16 = regmap_read(piVar8[1],*(iVar11 + iVar14) + 0x4a,&uStack_6c);
                            if (uVar16 < 0) {
                                uVar16 = uVar16 & 0xffffffff;
                                iVar10 = *piVar8;
                                uVar9 = 0x4a;
code_r0x08002af0:
                                _dev_err(iVar10,"read 0x%x failed\n",uVar9);
                                goto code_r0x080028f8;
                            }
                            uVar16 = uStack_6c;
                            if (uStack_6c < 0) goto code_r0x080028f8;
                            uVar6 = uStack_6c & 7;
                            iVar10 = piVar8[1];
                            uStack_6c = 0;
                            *(iVar11 + iVar14 + 0xc) = uVar6;
                            uVar16 = regmap_read(iVar10,*(iVar11 + iVar14) + 0x4c,&uStack_6c);
                            uVar6 = uStack_6c;
                            if (uVar16 < 0) {
                                uVar16 = uVar16 & 0xffffffff;
                                iVar10 = *piVar8;
                                uVar9 = 0x4c;
                                goto code_r0x08002af0;
                            }
                            uVar16 = uStack_6c;
                            if (uStack_6c < 0) goto code_r0x080028f8;
                            iVar10 = piVar8[1];
                            uStack_6c = 0;
                            *(iVar11 + iVar14 + 0x14) = uVar6;
                            uVar16 = regmap_read(iVar10,*(iVar11 + iVar14) + 0x48,&uStack_6c);
                            uVar6 = uStack_6c;
                            if (uVar16 < 0) {
                                uVar16 = uVar16 & 0xffffffff;
                                iVar10 = *piVar8;
                                uVar9 = 0x48;
                                goto code_r0x08002af0;
                            }
                            uVar16 = uStack_6c;
                            if (uStack_6c < 0) goto code_r0x080028f8;
                            iVar10 = piVar8[1];
                            uStack_6c = 0;
                            *(iVar11 + iVar14 + 0xe) = uVar6;
                            uVar16 = regmap_read(iVar10,*(iVar11 + iVar14) + 0x46,&uStack_6c);
                            if (uVar16 < 0) {
                                uVar16 = uVar16 & 0xffffffff;
                                iVar10 = *piVar8;
                                uVar9 = 0x46;
                                goto code_r0x08002af0;
                            }
                            uVar16 = uStack_6c;
                            if (uStack_6c < 0) goto code_r0x080028f8;
                            iVar10 = iVar11 + iVar14;
                            uVar20 = uVar20 + 1;
                            piVar19 = piVar19 + 3;
                            iVar14 = iVar14 + 0x30;
                            iVar17 = iVar17 + 0x100;
                            *(iVar10 + 8) = uStack_6c != 0;
                        } while (uVar18 * 0x30 != iVar14);
                        piVar19 = piVar8 + 3;
                        iVar10 = *(arg1 + 0x80);
                        memcpy(piVar19,obj.pmic_mpp_gpio_template,0x270);
                        *(piVar8 + 0xac) = uVar7;
                        piVar8[5] = piVar1;
                        *(piVar8 + 0x15) = 0xffffffff;
                        if (iVar10 == 0) {
                            iVar10 = *piVar1;
                        }
                        piVar8[3] = iVar10;
                        *(piVar8 + 0x4d) = 2;
                        *(piVar8 + 0x17) = 0;
                        uVar16 = devm_pinctrl_register(piVar1,piVar12,piVar8);
                        piVar8[2] = uVar16;
                        if (uVar16 < 0xfffffffffffff001) {
                            uVar6 = gpiochip_add_data_with_key(piVar19,piVar8,0,0);
                            if (uVar6 == 0) {
                                iVar10 = *(arg1 + 0x80);
                                if (iVar10 == 0) {
                                    iVar10 = *piVar1;
                                }
                                uVar7 = gpiochip_add_pin_range(piVar19,iVar10,0,0,uVar7 & 0xffffffff);
                                uVar16 = 0;
                                if (uVar7 != 0) {
                                    uVar16 = uVar7 & 0xffffffff;
                                    _dev_err(piVar1,"failed to add pin range\n");
                                    gpiochip_remove(piVar19);
                                }
                            }
                            else {
                                uVar16 = uVar6;
                                _dev_err(*piVar8,"can\'t add gpio chip\n");
                            }
                        }
                        else {
                            uVar16 = uVar16 & 0xffffffff;
                        }
                        goto code_r0x080028f8;
                    }
                }
                uVar16 = 0xfffffff4;
            }
        }
    }
code_r0x080028f8:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_68) {
        return uVar16;
    }
    __stack_chk_fail();
code_r0x08002b1c:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x8002b20);
    (*pcVar5)();
}


// ===== sym.pmic_mpp_remove @ 0x08002b24 (size 48) =====

ulong sym.pmic_mpp_remove(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    gpiochip_remove(*(arg1 + 0xa8) + 0x18);
    return 0;
}


// ===== sym.pmic_mpp_get_groups_count @ 0x08002b54 (size 20) =====

uint sym.pmic_mpp_get_groups_count(int64_t arg1)

{
    return *(*(arg1 + 0x10) + 0x10);
}


// ===== sym.pmic_mpp_get_group_name @ 0x08002b68 (size 32) =====

ulong sym.pmic_mpp_get_group_name(int64_t arg1,int64_t arg2)

{
    return *(*(*(arg1 + 0x10) + 8) + (arg2 & 0xffffffffU) * 0x18 + 8);
}


// ===== sym.pmic_mpp_get_group_pins @ 0x08002b88 (size 44) =====

ulong sym.pmic_mpp_get_group_pins(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    *arg3 = *(*(arg1 + 0x10) + 8) + (arg2 & 0xffffffffU) * 0x18;
    *arg4 = 1;
    return 0;
}


// ===== sym.pinconf_generic_dt_node_to_map_group @ 0x08002bb4 (size 40) =====

void sym.pinconf_generic_dt_node_to_map_group(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pinconf_generic_dt_node_to_map();
    return;
}


// ===== sym.pmic_mpp_get_functions_count @ 0x08002bdc (size 16) =====

ulong sym.pmic_mpp_get_functions_count(void)

{
    return 3;
}


// ===== sym.pmic_mpp_get_function_name @ 0x08002bec (size 40) =====

ulong sym.pmic_mpp_get_function_name(ulong noname_0,uint32_t arg1)

{
    code *pcVar1;
    
    if (arg1 < 3) {
        return *(obj.pmic_mpp_functions + arg1 * 8);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8002c14);
    (*pcVar1)();
}


// ===== sym.pmic_mpp_get_function_groups @ 0x08002c14 (size 40) =====

ulong sym.pmic_mpp_get_function_groups(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    *arg2 = obj.pmic_mpp_groups;
    *arg3 = *(*(arg1 + 0x10) + 0x10);
    return 0;
}


// ===== sym.pmic_mpp_set_mux @ 0x08002c3c (size 168) =====

int sym.pmic_mpp_set_mux(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong *arg1_00;
    ulong *in_x18;
    uint16_t *arg2_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = pinctrl_dev_get_drvdata();
    arg2_00 = *(*(*(arg1 + 0x10) + 8) + (arg3 & 0xffffffffU) * 0x18 + 0x10);
    *(arg2_00 + 0x12) = arg2;
    iVar1 = sym.pmic_mpp_write_mode_ctl(arg1_00,arg2_00);
    if ((-1 < iVar1) && (iVar1 = regmap_write(arg1_00[1],*arg2_00 + 0x46,arg2_00[4] << 7), iVar1 < 0)) {
        _dev_err(*arg1_00,"write 0x%x failed\n",0x46);
    }
    return iVar1;
}


// ===== sym.pmic_mpp_write_mode_ctl @ 0x08002ce4 (size 264) =====

int sym.pmic_mpp_write_mode_ctl(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg2 + 0x24) == 0) {
        if (*(arg2 + 0xb) == '\0') {
            uVar2 = 0x10;
        }
        else {
            uVar2 = *(arg2 + 10);
            if (*(arg2 + 10) != 0) {
                uVar2 = 0x20;
                iVar1 = *(arg2 + 0x2c);
                goto joined_r0x08002d44;
            }
        }
        iVar1 = *(arg2 + 0x2c);
    }
    else if (*(arg2 + 0x24) == 1) {
        if (*(arg2 + 0xb) == '\0') {
            uVar2 = 0x50;
            iVar1 = *(arg2 + 0x2c);
        }
        else if (*(arg2 + 10) == '\0') {
            uVar2 = 0x40;
            iVar1 = *(arg2 + 0x2c);
        }
        else {
            uVar2 = 0x30;
            iVar1 = *(arg2 + 0x2c);
        }
    }
    else {
        uVar2 = 0x60;
        iVar1 = *(arg2 + 0x2c);
    }
joined_r0x08002d44:
    if (iVar1 == 0) {
        uVar3 = *(arg2 + 0xc) << 1;
    }
    else {
        uVar3 = iVar1 * 2 + 6;
    }
    iVar1 = regmap_write(*(arg1 + 8),*arg2 + 0x40,uVar3 | uVar2 | *(arg2 + 9));
    if (iVar1 < 0) {
        _dev_err(*arg1,"write 0x%x failed\n",0x40);
    }
    return iVar1;
}


// ===== sym.pmic_mpp_config_get @ 0x08002dec (size 308) =====

ulong sym.pmic_mpp_config_get(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    char cVar2;
    ulong uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    
    uVar3 = 0xffffffea;
    uVar1 = *arg3;
    uVar4 = uVar1 - 1;
    iVar5 = *(*(*(arg1 + 0x10) + 8) + (arg2 & 0xffffffffU) * 0x18 + 0x10);
    if (0x13 < uVar4) {
        uVar4 = uVar1 - 0x80;
        if (3 < uVar4) {
            return 0xffffffea;
        }
    //switch table (4 cases) at 0x8000358
        switch(*(uVar4 + 0x8000358) * 4 + 0x8002e68) {
        case 0x8002e6c:
            uVar4 = *(iVar5 + 0x18);
            break;
        case 0x8002ee4:
            uVar4 = *(iVar5 + 0x1c);
            break;
        case 0x8002ef0:
            uVar4 = *(iVar5 + 0x2c);
            break;
        case 0x8002efc:
            cVar2 = *(iVar5 + 0xc);
            goto joined_r0x08002f00;
        }
        goto code_r0x08002f08;
    }
    //switch table (20 cases) at 0x8000344
    switch(*(uVar4 + 0x8000344) * 4 + 0x8002e30) {
    case 0x8002e34:
        if (*(iVar5 + 0x20) != 3) {
            return 0xffffffea;
        }
        goto code_r0x08002f04;
    case 0x8002e78:
        if (*(iVar5 + 8) != '\0') {
            return 0xffffffea;
        }
        goto code_r0x08002f04;
    case 0x8002e88:
        if (2 < *(iVar5 + 0x20)) {
            return 0xffffffea;
        }
        uVar4 = *(*(iVar5 + 0x20) * 4 + 0x80010d0);
        break;
    case 0x8002ea8:
        uVar4 = *(iVar5 + 0x28);
        break;
    case 0x8002eb4:
        cVar2 = *(iVar5 + 0xb);
joined_r0x08002f00:
        if (cVar2 == '\0') {
            return 0xffffffea;
        }
code_r0x08002f04:
        uVar4 = 1;
        break;
    case 0x8002ecc:
        uVar4 = *(iVar5 + 9);
        break;
    case 0x8002ed8:
        uVar4 = *(iVar5 + 0x14);
        break;
    case 0x8002f1c:
        goto code_r0x08002f1c;
    }
code_r0x08002f08:
    uVar3 = 0;
    *arg3 = uVar1 | uVar4 << 8;
code_r0x08002f1c:
    return uVar3;
}


// ===== sym.pmic_mpp_config_set @ 0x08002f20 (size 1060) =====

int sym.pmic_mpp_config_set(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int iVar2;
    int iVar3;
    ulong *arg1_00;
    uint32_t uVar4;
    ulong uVar5;
    ulong *in_x18;
    uint16_t *arg2_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = pinctrl_dev_get_drvdata();
    arg2_00 = *(*(*(arg1 + 0x10) + 8) + (arg2 & 0xffffffffU) * 0x18 + 0x10);
    *(arg2_00 + 4) = 1;
    if (arg4 != 0) {
        iVar3 = 0;
        iVar2 = -0x16;
        do {
            uVar5 = *(arg3 + iVar3 * 8);
            uVar4 = uVar5;
            uVar1 = uVar5 >> 8 & 0xffffff;
    //switch table (1791 cases) at 0x800035c
            switch(uVar4 & 0xff) {
            case 1:
                arg2_00[0x10] = 3;
                arg2_00[0x11] = 0;
                break;
            case 2:
                *(arg2_00 + 4) = 0;
                break;
            case 3:
            case 4:
            case 6:
            case 7:
            case 8:
            case 10:
            case 0xb:
            case 0xd:
            case 0xe:
            case 0xf:
            case 0x10:
            case 0x12:
            case 0x13:
                goto code_r0x080031e0;
            case 5:
                if (uVar1 == 30000) {
                    arg2_00[0x10] = 2;
                    arg2_00[0x11] = 0;
                }
                else if (uVar1 == 10000) {
                    arg2_00[0x10] = 1;
                    arg2_00[0x11] = 0;
                }
                else {
                    if (uVar1 != 600) {
                        return -0x16;
                    }
                    arg2_00[0x10] = 0;
                    arg2_00[0x11] = 0;
                }
                break;
            case 9:
                *(arg2_00 + 0x14) = uVar1;
                break;
            case 0xc:
                *(arg2_00 + 0xb) = 0xff < uVar4;
                break;
            case 0x11:
                *(arg2_00 + 5) = 1;
                *(arg2_00 + 9) = 0xff < uVar4;
                break;
            case 0x14:
                if (*(arg2_00 + 8) <= uVar1) {
                    return -0x16;
                }
                *(arg2_00 + 10) = uVar1;
                break;
            default:
    //switch table (3 cases) at 0x8000370
                switch(uVar4 & 0xff) {
                case 0x80:
                    if (0x6ff < uVar4) {
                        return -0x16;
                    }
                    *(arg2_00 + 0xc) = uVar1;
                    break;
                case 0x81:
                    *(arg2_00 + 0xe) = uVar1;
                    break;
                case 0x82:
                    *(arg2_00 + 0x16) = uVar1;
                    break;
                case 0x83:
                    *(arg2_00 + 6) = 0xff < uVar4;
                    break;
                default:
                    goto code_r0x080031e0;
                }
            }
            iVar3 = iVar3 + 1;
        } while (arg4 != iVar3);
    }
    iVar2 = regmap_write(arg1_00[1],*arg2_00 + 0x41,*(arg2_00 + 10));
    if (iVar2 < 0) {
        uVar5 = 0x41;
    }
    else if ((*(arg2_00 + 0xd) == '\0') ||
            (iVar2 = regmap_write(arg1_00[1],*arg2_00 + 0x42,*(arg2_00 + 0x10)), -1 < iVar2)) {
        iVar2 = regmap_write(arg1_00[1],*arg2_00 + 0x4a,*(arg2_00 + 0xc) & 7);
        if (iVar2 < 0) {
            uVar5 = 0x4a;
        }
        else {
            iVar2 = regmap_write(arg1_00[1],*arg2_00 + 0x48,*(arg2_00 + 0xe));
            if (iVar2 < 0) {
                uVar5 = 0x48;
            }
            else {
                iVar3 = sym.pmic_mpp_write_mode_ctl(arg1_00,arg2_00);
                if (iVar3 < 0) {
                    return iVar3;
                }
                iVar2 = regmap_write(arg1_00[1],*arg2_00 + 0x4c,*(arg2_00 + 0x14));
                if (iVar2 < 0) {
                    uVar5 = 0x4c;
                }
                else {
                    iVar2 = regmap_write(arg1_00[1],*arg2_00 + 0x46,arg2_00[4] << 7);
                    if (-1 < iVar2) {
                        return iVar2;
                    }
                    uVar5 = 0x46;
                }
            }
        }
    }
    else {
        uVar5 = 0x42;
    }
    _dev_err(*arg1_00,"write 0x%x failed\n",uVar5);
code_r0x080031e0:
    return iVar2;
}


// ===== sym.pmic_mpp_config_dbg_show @ 0x08003200 (size 516) =====

void sym.pmic_mpp_config_dbg_show(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    int64_t iVar2;
    code *pcVar3;
    int iVar4;
    ulong *puVar5;
    char *pcVar6;
    ulong *in_x18;
    uint16_t *puVar7;
    ulong unaff_x30;
    int iStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    puVar5 = pinctrl_dev_get_drvdata();
    puVar7 = *(*(*(arg1 + 0x10) + 8) + (arg3 & 0xffffffffU) * 0x18 + 0x10);
    seq_printf(arg2," mpp%-2d:",arg3 + 1);
    if (puVar7[4] == '\0') {
        pcVar6 = " ---";
    }
    else {
        if (*(puVar7 + 0xb) != '\0') {
            iStack_3c = 0;
            iVar4 = regmap_read(puVar5[1],*puVar7 + 0x10,&iStack_3c);
            if (iVar4 < 0) {
                _dev_err(*puVar5,"read 0x%x failed\n",0x10);
                goto code_r0x080033b4;
            }
            if (iStack_3c < 0) goto code_r0x080033b4;
            *(puVar7 + 9) = iStack_3c & 1;
        }
        uVar1 = 0x8000325;
        if (puVar7[5] != '\0') {
            uVar1 = 0x800014d;
        }
        seq_printf(arg2," %-4s",uVar1);
        if (2 < *(puVar7 + 0x12)) {
code_r0x08003400:
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x5512,0x8003404);
            (*pcVar3)();
        }
        seq_printf(arg2," %-7s",*(obj.pmic_mpp_functions + *(puVar7 + 0x12) * 8));
        seq_printf(arg2," vin-%d",*(puVar7 + 10));
        seq_printf(arg2,0x800021f,*(puVar7 + 0xe));
        if (*(puVar7 + 0xd) != '\0') {
            if (3 < *(puVar7 + 0x10)) goto code_r0x08003400;
            seq_printf(arg2," %-8s",*(obj.pmic_mpp_config_dbg_show.biases + *(puVar7 + 0x10) * 8));
        }
        pcVar6 = 0x8000223;
        if (*(puVar7 + 9) != '\0') {
            pcVar6 = "high";
        }
        seq_printf(arg2," %-4s",pcVar6);
        if (*(puVar7 + 0x16) != 0) {
            seq_printf(arg2," dtest%d");
        }
        if (puVar7[6] == '\0') goto code_r0x080033b4;
        pcVar6 = " paired";
    }
    seq_puts(arg2,pcVar6);
code_r0x080033b4:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail();
    return;
}


// ===== sym.pmic_mpp_direction_input @ 0x08003404 (size 120) =====

uint64_t sym.pmic_mpp_direction_input(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong *puVar4;
    uint64_t extraout_x1;
    uint64_t extraout_x1_00;
    uint64_t extraout_x1_01;
    uint64_t extraout_x1_02;
    int iVar5;
    int iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *puVar7;
    uint16_t *puVar8;
    ulong unaff_x30;
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
    
    iVar5 = &uStack_30;
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    iVar2 = gpiochip_get_data();
    uStack_30 = 0x10c;
    uVar3 = sym.pmic_mpp_config_set(*(iVar2 + 0x10),arg1 & 0xffffffff,&uStack_30,1);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return uVar3;
    }
    __stack_chk_fail();
    iVar6 = &uStack_60;
    *extraout_x18 = sym.pmic_mpp_direction_output;
    pcStack_48 = sym.pmic_mpp_direction_output;
    iVar2 = sp_el0;
    iStack_58 = *(iVar2 + 0x5e0);
    puVar7 = extraout_x1 & 0xffffffff;
    puStack_50 = &stack0xffffffffffffffe0;
    iVar2 = gpiochip_get_data();
    uStack_60 = iVar5 << 8 | 0x11;
    uVar3 = sym.pmic_mpp_config_set(*(iVar2 + 0x10),puVar7,&uStack_60,1);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_58) {
        return uVar3;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.pmic_mpp_get;
    pcStack_88 = sym.pmic_mpp_get;
    iVar2 = sp_el0;
    iStack_98 = *(iVar2 + 0x5e0);
    ppuStack_90 = &puStack_50;
    puVar4 = gpiochip_get_data();
    puVar8 = *(*(*(puVar4[2] + 0x10) + 8) + (extraout_x1_00 & 0xffffffff) * 0x18 + 0x10);
    if (*(puVar8 + 0xb) == '\0') {
        uVar3 = *(puVar8 + 9);
    }
    else {
        uStack_9c = 0;
        iVar6 = &uStack_9c;
        uVar1 = regmap_read(puVar4[1],*puVar8 + 0x10);
        puVar7 = puVar4;
        if (uVar1 < 0) {
            uVar3 = uVar1;
            iVar6 = 0x10;
            _dev_err(*puVar4,"read 0x%x failed\n");
        }
        else {
            uVar3 = uStack_9c;
            if (-1 < uStack_9c) {
                uVar3 = uStack_9c & 1;
                *(puVar8 + 9) = uStack_9c & 1;
            }
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_98) {
        return uVar3;
    }
    __stack_chk_fail();
    *extraout_x18_01 = sym.pmic_mpp_set;
    pcStack_b8 = sym.pmic_mpp_set;
    iVar2 = sp_el0;
    iStack_c8 = *(iVar2 + 0x5e0);
    ppuStack_c0 = &ppuStack_90;
    puStack_b0 = puVar7;
    uStack_a8 = uVar3;
    iVar2 = gpiochip_get_data();
    uStack_d0 = iVar6 << 8 | 0x11;
    uVar3 = sym.pmic_mpp_config_set(*(iVar2 + 0x10),extraout_x1_01 & 0xffffffff,&uStack_d0,1);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_c8) {
        return uVar3;
    }
    __stack_chk_fail();
    *extraout_x18_02 = sym.pmic_mpp_to_irq;
    iVar2 = gpiochip_get_data();
    return *(*(*(*(*(iVar2 + 0x10) + 0x10) + 8) + (extraout_x1_02 & 0xffffffff) * 0x18 + 0x10) + 4);
}


// ===== sym.pmic_mpp_direction_output @ 0x0800347c (size 128) =====

uint64_t sym.pmic_mpp_direction_output(ulong noname_0,int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong *puVar4;
    uint64_t extraout_x1;
    uint64_t extraout_x1_00;
    uint64_t extraout_x1_01;
    int iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *puVar6;
    uint16_t *puVar7;
    ulong unaff_x30;
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
    
    iVar5 = &uStack_30;
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    puVar6 = arg1 & 0xffffffff;
    iVar2 = gpiochip_get_data();
    uStack_30 = arg2 << 8 | 0x11;
    uVar3 = sym.pmic_mpp_config_set(*(iVar2 + 0x10),puVar6,&uStack_30,1);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return uVar3;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.pmic_mpp_get;
    pcStack_58 = sym.pmic_mpp_get;
    iVar2 = sp_el0;
    iStack_68 = *(iVar2 + 0x5e0);
    puStack_60 = &stack0xffffffffffffffe0;
    puVar4 = gpiochip_get_data();
    puVar7 = *(*(*(puVar4[2] + 0x10) + 8) + (extraout_x1 & 0xffffffff) * 0x18 + 0x10);
    if (*(puVar7 + 0xb) == '\0') {
        uVar3 = *(puVar7 + 9);
    }
    else {
        uStack_6c = 0;
        iVar5 = &uStack_6c;
        uVar1 = regmap_read(puVar4[1],*puVar7 + 0x10);
        puVar6 = puVar4;
        if (uVar1 < 0) {
            uVar3 = uVar1;
            iVar5 = 0x10;
            _dev_err(*puVar4,"read 0x%x failed\n");
        }
        else {
            uVar3 = uStack_6c;
            if (-1 < uStack_6c) {
                uVar3 = uStack_6c & 1;
                *(puVar7 + 9) = uStack_6c & 1;
            }
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_68) {
        return uVar3;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.pmic_mpp_set;
    pcStack_88 = sym.pmic_mpp_set;
    iVar2 = sp_el0;
    iStack_98 = *(iVar2 + 0x5e0);
    ppuStack_90 = &puStack_60;
    puStack_80 = puVar6;
    uStack_78 = uVar3;
    iVar2 = gpiochip_get_data();
    uStack_a0 = iVar5 << 8 | 0x11;
    uVar3 = sym.pmic_mpp_config_set(*(iVar2 + 0x10),extraout_x1_00 & 0xffffffff,&uStack_a0,1);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_98) {
        return uVar3;
    }
    __stack_chk_fail();
    *extraout_x18_01 = sym.pmic_mpp_to_irq;
    iVar2 = gpiochip_get_data();
    return *(*(*(*(*(iVar2 + 0x10) + 0x10) + 8) + (extraout_x1_01 & 0xffffffff) * 0x18 + 0x10) + 4);
}


// ===== sym.pmic_mpp_get @ 0x080034fc (size 220) =====

uint64_t sym.pmic_mpp_get(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    ulong *puVar2;
    int64_t iVar3;
    uint64_t extraout_x1;
    uint64_t extraout_x1_00;
    int in_w2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar4;
    ulong *unaff_x20;
    uint16_t *puVar5;
    ulong unaff_x30;
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
    puVar5 = *(*(*(puVar2[2] + 0x10) + 8) + (arg1 & 0xffffffffU) * 0x18 + 0x10);
    if (*(puVar5 + 0xb) == '\0') {
        uVar4 = *(puVar5 + 9);
    }
    else {
        uStack_3c = 0;
        in_w2 = &uStack_3c;
        uVar1 = regmap_read(puVar2[1],*puVar5 + 0x10);
        unaff_x20 = puVar2;
        if (uVar1 < 0) {
            uVar4 = uVar1;
            in_w2 = 0x10;
            _dev_err(*puVar2,"read 0x%x failed\n");
        }
        else {
            uVar4 = uStack_3c;
            if (-1 < uStack_3c) {
                uVar4 = uStack_3c & 1;
                *(puVar5 + 9) = uStack_3c & 1;
            }
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return uVar4;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.pmic_mpp_set;
    pcStack_58 = sym.pmic_mpp_set;
    iVar3 = sp_el0;
    iStack_68 = *(iVar3 + 0x5e0);
    puStack_60 = &stack0xffffffffffffffd0;
    puStack_50 = unaff_x20;
    uStack_48 = uVar4;
    iVar3 = gpiochip_get_data();
    uStack_70 = in_w2 << 8 | 0x11;
    uVar4 = sym.pmic_mpp_config_set(*(iVar3 + 0x10),extraout_x1 & 0xffffffff,&uStack_70,1);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_68) {
        return uVar4;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.pmic_mpp_to_irq;
    iVar3 = gpiochip_get_data();
    return *(*(*(*(*(iVar3 + 0x10) + 0x10) + 8) + (extraout_x1_00 & 0xffffffff) * 0x18 + 0x10) + 4);
}


// ===== sym.pmic_mpp_set @ 0x080035d8 (size 128) =====

uint64_t sym.pmic_mpp_set(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t extraout_x1;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint64_t uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    iVar1 = gpiochip_get_data();
    uStack_30 = arg2 << 8 | 0x11;
    uVar2 = sym.pmic_mpp_config_set(*(iVar1 + 0x10),arg1 & 0xffffffff,&uStack_30,1);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return uVar2;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.pmic_mpp_to_irq;
    iVar1 = gpiochip_get_data();
    return *(*(*(*(*(iVar1 + 0x10) + 0x10) + 8) + (extraout_x1 & 0xffffffff) * 0x18 + 0x10) + 4);
}


// ===== sym.pmic_mpp_to_irq @ 0x08003658 (size 76) =====

uint sym.pmic_mpp_to_irq(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = gpiochip_get_data();
    return *(*(*(*(*(iVar1 + 0x10) + 0x10) + 8) + (arg1 & 0xffffffffU) * 0x18 + 0x10) + 4);
}


// ===== sym.pmic_mpp_dbg_show @ 0x080036a4 (size 140) =====

void sym.pmic_mpp_dbg_show(int64_t arg1,int64_t arg2)

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
            sym.pmic_mpp_config_dbg_show(*(iVar1 + 0x10),arg1,uVar2);
            seq_puts(arg1,0x80002e7);
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(arg2 + 0x94));
    }
    return;
}


// ===== sym.pmic_mpp_of_xlate @ 0x08003730 (size 56) =====

int sym.pmic_mpp_of_xlate(int64_t arg1,int64_t arg2,int64_t arg3)

{
    if (*(arg1 + 0x250) < 2) {
        return -0x16;
    }
    if (arg3 != 0) {
        *arg3 = *(arg2 + 0x10);
    }
    return *(arg2 + 0xc) + -1;
}


// ===== sym.__cfi_check_fail @ 0x08003768 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080037ac

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
    //switch table (4 cases) at 0x8000374
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80037c0);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080037c4 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.pmic_mpp_probe.35368ce36b52c58f12637531da9f01c5.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x080037f8 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.pmic_mpp_probe.35368ce36b52c58f12637531da9f01c5.cfi_jt);
    return;
}

