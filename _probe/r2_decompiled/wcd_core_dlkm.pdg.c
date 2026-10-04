// decompiled from wcd_core_dlkm by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 1068) =====

//WARNING: Switch with 1 destination removed at 0x08002630

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x93dec9018f10c25) {
        if (arg1 < -0x1f5d31b6d2b1fbe6) {
            if (arg1 < -0x33865da17be37d78) {
                if (arg1 != -0x68e06357d3edcb86) {
                    if (arg1 != -0x3557318fb8d07b71) goto code_r0x080025f0;
                    pcVar2 = sym.msm_cdc_pinctrl_probe.4ddd1c312763c93ea939a86987b9c24d.cfi_jt;
                    goto code_r0x080023e8;
                }
                pcVar2 = sym.handle_simple_irq.cfi_jt;
            }
            else if (arg1 == -0x33865da17be37d78) {
                pcVar2 = sym.msm_cdc_get_power_supplies.cfi_jt;
            }
            else if (arg1 == -0x30c7f6a5d51944be) {
                pcVar2 = sym.wcd_irq_chip_map.b6b19dba861096840b8a43621a179741.cfi_jt;
            }
            else {
                if (arg1 != -0x2f4106f2c4aaea70) goto code_r0x080025f0;
                pcVar2 = sym.msm_cdc_pinctrl_set_wakeup_capable.cfi_jt;
            }
        }
        else if (arg1 < -0x9c839d334874faa) {
            if (arg1 == -0x1f5d31b6d2b1fbe6) {
                pcVar2 = sym.msm_cdc_is_ondemand_supply.cfi_jt;
            }
            else if (arg1 == -0x16a7f671ee136914) {
                pcVar2 = sym.msm_cdc_init_wcd_supply.cfi_jt;
            }
            else {
                if (arg1 != -0x12086aa7f04ce491) goto code_r0x080025f0;
                pcVar2 = sym.wcd_request_irq.cfi_jt;
            }
        }
        else if (arg1 == -0x9c839d334874faa) {
            pcVar2 = sym.msm_cdc_set_supplies_lpm_mode.cfi_jt;
        }
        else {
            if (arg1 == -0x673e814da374af2) {
                pcVar2 = sym.wcd_disable_irq.cfi_jt;
                goto code_r0x080023e8;
            }
            if (arg1 != 0x2b3a43e29242445) goto code_r0x080025f0;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else if (arg1 < 0x3f803672a7b87bd2) {
        if (arg1 < 0x1e96c39d8361bb00) {
            if (arg1 == 0x93dec9018f10c25) {
                pcVar2 = sym.msm_cdc_enable_wcd_supply.cfi_jt;
            }
            else {
                if (arg1 != 0x107d154b663e01e3) {
                    if (arg1 != 0x12432ee19d152236) goto code_r0x080025f0;
                    pcVar2 = sym.wcd_irq_chip_disable.b6b19dba861096840b8a43621a179741.cfi_jt;
                    goto code_r0x080023e8;
                }
                pcVar2 = sym.wcd_irq_exit.cfi_jt;
            }
        }
        else {
            if (arg1 != 0x1e96c39d8361bb00) {
                if (arg1 == 0x27c448aaf1f6d9c8) {
                    if ((pcVar1 + -0x8002508 >> 3 | pcVar1 << 0x3d) < 5) {
                        return;
                    }
                }
                else if ((arg1 == 0x3be7de170e61b94b) && ((pcVar1 + -0x80024d8 >> 3 | pcVar1 << 0x3d) < 3)) {
                    return;
                }
                goto code_r0x080025f0;
            }
            pcVar2 = sym.msm_cdc_set_supply_min_voltage.cfi_jt;
        }
    }
    else if (arg1 < 0x5127778d5dae0635) {
        if (arg1 == 0x3f803672a7b87bd2) {
            pcVar2 = sym.msm_cdc_disable_ondemand_supply.cfi_jt;
code_r0x080023e8:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x080025f0;
        }
        if (arg1 == 0x48ad4a21347d4858) {
            pcVar2 = sym.msm_cdc_init_supplies.cfi_jt;
        }
        else {
            if (arg1 != 0x4adae29ebf1ec82a) goto code_r0x080025f0;
            pcVar2 = sym.wcd_free_irq.cfi_jt;
        }
    }
    else if (arg1 == 0x5127778d5dae0635) {
        pcVar2 = sym.wcd_irq_init.cfi_jt;
    }
    else if (arg1 == 0x686d4cd941dc0e83) {
        pcVar2 = sym.msm_cdc_init_supplies_v2.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080025f0;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080025f0:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002644);
    (*pcVar1)();
}


// ===== sym.msm_cdc_is_ondemand_supply.cfi_jt @ 0x08002438 (size 8) =====

ulong sym.msm_cdc_is_ondemand_supply.cfi_jt
                (int64_t param_1,int64_t param_2,ulong *param_3,uint32_t param_4,int64_t param_5)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    uint64_t uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_2 == 0) || (param_5 == 0)) {
        uVar2 = ___ratelimit(obj.msm_cdc_is_ondemand_supply._rs,"msm_cdc_is_ondemand_supply");
        if (uVar2 == 0) {
            return uVar2;
        }
        _printk(0x800089f,"msm_cdc_is_ondemand_supply");
    }
    else if (param_1 == 0) {
        uVar2 = ___ratelimit(obj.msm_cdc_check_supply_param._rs,"msm_cdc_check_supply_param");
        if (uVar2 == 0) {
            return uVar2;
        }
        _printk(0x80008ec,"msm_cdc_check_supply_param");
    }
    else {
        uVar3 = param_4;
        if ((param_3 == NULL) || (param_4 < 1)) {
            uVar2 = ___ratelimit(obj.msm_cdc_check_supply_param._rs.38,"msm_cdc_check_supply_param");
            if (uVar2 == 0) {
                return uVar2;
            }
            _dev_err(param_1,"%s: supply check failed: vreg: %pK, num_supplies: %d\n","msm_cdc_check_supply_param",
                     param_3,uVar3);
        }
        else {
            do {
                if ((*(param_3 + 0x14) != '\0') && (iVar1 = strcmp(*param_3,param_5), iVar1 == 0)) {
                    return 1;
                }
                uVar3 = uVar3 - 1;
                param_3 = param_3 + 4;
            } while (uVar3 != 0);
        }
    }
    return 0;
}


// ===== sym.msm_cdc_init_supplies.cfi_jt @ 0x08002440 (size 8) =====

void sym.msm_cdc_init_supplies.cfi_jt(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.msm_cdc_init_supplies_v2(param_1,param_2,param_3,param_4);
    return;
}


// ===== sym.msm_cdc_enable_wcd_supply.cfi_jt @ 0x08002448 (size 8) =====

int sym.msm_cdc_enable_wcd_supply.cfi_jt(ulong *param_1,uint64_t param_2)

{
    char *pcVar1;
    int iVar2;
    int iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = param_1[2];
    if (iVar4 == 0) {
        iVar2 = ___ratelimit(obj.msm_cdc_enable_wcd_supply._rs,"msm_cdc_enable_wcd_supply");
        if (iVar2 == 0) {
            iVar2 = -0x16;
        }
        else {
            _printk(0x8000b9b,"msm_cdc_enable_wcd_supply");
            iVar2 = -0x16;
        }
    }
    else {
        if ((param_2 & 1) == 0) {
            iVar2 = snd_soc_dapm_disable_pin(iVar4 + 0xd0,*param_1);
        }
        else {
            iVar2 = snd_soc_dapm_force_enable_pin();
        }
        if (iVar2 == 0) {
            snd_soc_dapm_sync(iVar4 + 0xd0);
        }
        else {
            iVar3 = ___ratelimit(obj.msm_cdc_enable_wcd_supply._rs.33,"msm_cdc_enable_wcd_supply");
            if (iVar3 != 0) {
                pcVar1 = "enable";
                if ((param_2 & 1) == 0) {
                    pcVar1 = "disable";
                }
                _dev_err(*(iVar4 + 0x18),"%s: micbias %s force %s pin failed\n","msm_cdc_enable_wcd_supply",*param_1
                         ,pcVar1);
            }
        }
    }
    return iVar2;
}


// ===== sym.msm_cdc_init_supplies_v2.cfi_jt @ 0x08002450 (size 8) =====

int sym.msm_cdc_init_supplies_v2.cfi_jt
              (int64_t param_1,int64_t *param_2,int64_t *param_3,uint32_t param_4,int param_5)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    char *pcVar4;
    ulong uVar5;
    int64_t iVar6;
    int64_t *piVar7;
    ulong *in_x18;
    uint *puVar8;
    uint64_t uVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == 0) || (param_3 == NULL)) {
        _printk(0x8000f57,"msm_cdc_init_supplies_v2");
        iVar2 = -0x16;
    }
    else {
        uVar9 = param_4;
        if (param_4 < 1) {
            iVar2 = ___ratelimit(obj.msm_cdc_check_supply_param._rs.38,"msm_cdc_check_supply_param");
            if (iVar2 == 0) {
                iVar2 = -0x16;
            }
            else {
                _dev_err(param_1,"%s: supply check failed: vreg: %pK, num_supplies: %d\n","msm_cdc_check_supply_param"
                         ,param_3,uVar9);
                iVar2 = -0x16;
            }
        }
        else {
            iVar3 = devm_kmalloc(param_1,uVar9 * 0x18,0xdc0);
            if (iVar3 == 0) {
                iVar2 = -0xc;
            }
            else {
                iVar6 = 0;
                piVar7 = param_3;
                do {
                    if (*piVar7 == 0) {
                        _dev_err(param_1,"%s: supply name not defined\n","msm_cdc_init_supplies_v2");
                        return -0x16;
                    }
                    *(iVar3 + iVar6) = *piVar7;
                    iVar6 = iVar6 + 0x18;
                    piVar7 = piVar7 + 4;
                } while (uVar9 * 0x18 - iVar6 != 0);
                iVar2 = devm_regulator_bulk_get(param_1,uVar9,iVar3);
                if (iVar2 == 0) {
                    iVar6 = 0;
                    puVar8 = param_3 + 0xc;
                    do {
                        iVar1 = iVar3 + iVar6;
                        iVar2 = regulator_count_voltages(*(iVar1 + 8));
                        if ((-1 < iVar2) && ((param_5 == 0 || (*(puVar8 + 2) == '\0')))) {
                            iVar2 = regulator_set_voltage(*(iVar1 + 8),puVar8[-1],*puVar8);
                            if (iVar2 != 0) {
                                uVar5 = *(iVar3 + iVar6);
                                pcVar4 = "%s: set regulator voltage failed for %s, err:%d\n";
code_r0x08003ec4:
                                _dev_err(param_1,pcVar4,"msm_cdc_init_supplies_v2",uVar5,iVar2);
                                return iVar2;
                            }
                            iVar2 = regulator_set_load(*(iVar1 + 8),puVar8[1]);
                            if (iVar2 < 0) {
                                uVar5 = *(iVar3 + iVar6);
                                pcVar4 = "%s: set regulator optimum mode failed for %s, err:%d\n";
                                goto code_r0x08003ec4;
                            }
                        }
                        iVar6 = iVar6 + 0x18;
                        puVar8 = puVar8 + 8;
                    } while (uVar9 * 0x18 - iVar6 != 0);
                    iVar2 = 0;
                    *param_2 = iVar3;
                }
                else {
                    _dev_err(param_1,"%s: failed to get supplies (%d)\n","msm_cdc_init_supplies_v2",iVar2);
                }
            }
        }
    }
    return iVar2;
}


// ===== sym.msm_cdc_set_supplies_lpm_mode.cfi_jt @ 0x08002458 (size 8) =====

int sym.msm_cdc_set_supplies_lpm_mode.cfi_jt
              (int64_t param_1,int64_t param_2,int64_t param_3,uint32_t param_4,uint64_t param_5)

{
    ulong uVar1;
    int iVar2;
    int iVar3;
    uint uVar4;
    ulong *in_x18;
    uint64_t uVar5;
    ulong *puVar6;
    uint *puVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 == 0) {
        iVar2 = ___ratelimit(obj.msm_cdc_set_supplies_lpm_mode._rs,"msm_cdc_set_supplies_lpm_mode");
        if (iVar2 != 0) {
            _printk(0x8000fd5,"msm_cdc_set_supplies_lpm_mode");
        }
    }
    else {
        if (param_1 == 0) {
            iVar2 = ___ratelimit(obj.msm_cdc_check_supply_param._rs,"msm_cdc_check_supply_param");
            if (iVar2 == 0) {
                return -0x13;
            }
            _printk(0x80008ec,"msm_cdc_check_supply_param");
            return -0x13;
        }
        uVar5 = param_4;
        if ((param_3 != 0) && (0 < param_4)) {
            puVar7 = param_3 + 0x10;
            iVar2 = 0;
            uVar1 = 0x800104c;
            if ((param_5 & 1) == 0) {
                uVar1 = 0x8000afa;
            }
            puVar6 = param_2 + 8;
            do {
                if (*(puVar7 + 5) != '\0') {
                    if ((param_5 & 1) == 0) {
                        uVar4 = *puVar7;
                    }
                    else {
                        uVar4 = 0;
                    }
                    iVar2 = regulator_set_load(*puVar6,uVar4);
                    if ((iVar2 != 0) &&
                       (iVar3 = ___ratelimit(obj.msm_cdc_set_supplies_lpm_mode._rs.9,"msm_cdc_set_supplies_lpm_mode"),
                       iVar3 != 0)) {
                        _dev_err(param_1,"%s: failed to set supply %s to %s, err:%d\n","msm_cdc_set_supplies_lpm_mode"
                                 ,puVar6[-1],uVar1,iVar2);
                    }
                }
                uVar5 = uVar5 - 1;
                puVar6 = puVar6 + 3;
                puVar7 = puVar7 + 8;
            } while (uVar5 != 0);
            return iVar2;
        }
        iVar2 = ___ratelimit(obj.msm_cdc_check_supply_param._rs.38,"msm_cdc_check_supply_param");
        if (iVar2 != 0) {
            _dev_err(param_1,"%s: supply check failed: vreg: %pK, num_supplies: %d\n","msm_cdc_check_supply_param",
                     param_3,uVar5);
        }
    }
    return -0x16;
}


// ===== sym.handle_simple_irq.cfi_jt @ 0x08002460 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.handle_simple_irq.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.msm_cdc_get_power_supplies.cfi_jt @ 0x08002468 (size 8) =====

uint64_t sym.msm_cdc_get_power_supplies.cfi_jt(int64_t param_1,int64_t *param_2,uint32_t *param_3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    int64_t arg2;
    char *pcVar6;
    ulong *in_x18;
    uint64_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        iVar5 = ___ratelimit(obj.msm_cdc_get_power_supplies._rs,"msm_cdc_get_power_supplies");
        if (iVar5 != 0) {
            _printk(0x800084b,"msm_cdc_get_power_supplies");
            return 0xffffffea;
        }
code_r0x0800408c:
        uVar7 = 0xffffffea;
    }
    else {
        uVar2 = of_property_read_string_helper(*(param_1 + 0x2f0),"qcom,cdc-static-supplies",0,0,0);
        uVar7 = uVar2;
        if (uVar2 < 0) {
            iVar5 = ___ratelimit(obj.msm_cdc_get_power_supplies._rs.22,"msm_cdc_get_power_supplies");
            if (iVar5 == 0) {
                return uVar7;
            }
            pcVar6 = "%s: Failed to get static supplies(%d)\n";
        }
        else {
            uVar3 = of_property_read_string_helper(*(param_1 + 0x2f0),"qcom,cdc-on-demand-supplies",0,0,0);
            uVar3 = uVar3 & (uVar3 >> 0x1f ^ 0xffffffffU);
            uVar4 = of_property_read_string_helper(*(param_1 + 0x2f0),"qcom,cdc-cp-supplies",0,0,0);
            iVar5 = uVar3 + uVar2;
            uVar4 = uVar4 & (uVar4 >> 0x1f ^ 0xffffffffU);
            uVar1 = uVar4 + iVar5;
            if (uVar1 < 1) {
                iVar5 = ___ratelimit(obj.msm_cdc_get_power_supplies._rs.24,"msm_cdc_get_power_supplies");
                if (iVar5 != 0) {
                    _dev_err(param_1,"%s: supply count is 0 or negative\n","msm_cdc_get_power_supplies");
                    return 0xffffffea;
                }
                goto code_r0x0800408c;
            }
            arg2 = devm_kmalloc(param_1,uVar1 << 5,0xdc0);
            if (arg2 == 0) {
                return 0xfffffff4;
            }
            uVar2 = sym.msm_cdc_parse_supplies(param_1,arg2,0x8000acc,uVar2);
            if (uVar2 != 0) {
                uVar7 = uVar2;
                iVar5 = ___ratelimit(obj.msm_cdc_get_power_supplies._rs.26,"msm_cdc_get_power_supplies");
                if (iVar5 == 0) {
                    return uVar7;
                }
                _dev_err(param_1,"%s: failed to parse static supplies(%d)\n","msm_cdc_get_power_supplies",uVar7);
                return uVar7;
            }
            uVar2 = sym.msm_cdc_parse_supplies(param_1,arg2 + uVar7 * 0x20,0x8000d05,uVar3);
            if (uVar2 == 0) {
                uVar2 = sym.msm_cdc_parse_supplies(param_1,arg2 + iVar5 * 0x20,0x8000ae5,uVar4);
                uVar7 = uVar2;
                if (uVar2 == 0) {
                    *param_2 = arg2;
                    *param_3 = uVar1;
                    return 0;
                }
                iVar5 = ___ratelimit(obj.msm_cdc_get_power_supplies._rs.30,"msm_cdc_get_power_supplies");
                if (iVar5 == 0) {
                    return uVar7;
                }
                pcVar6 = "%s: failed to parse cp supplies(%d)\n";
            }
            else {
                uVar7 = uVar2;
                iVar5 = ___ratelimit(obj.msm_cdc_get_power_supplies._rs.28,"msm_cdc_get_power_supplies");
                if (iVar5 == 0) {
                    return uVar7;
                }
                pcVar6 = "%s: failed to parse demand supplies(%d)\n";
            }
        }
        _dev_err(param_1,pcVar6,"msm_cdc_get_power_supplies",uVar7);
    }
    return uVar7;
}


// ===== sym.msm_cdc_init_wcd_supply.cfi_jt @ 0x08002470 (size 8) =====

ulong sym.msm_cdc_init_wcd_supply.cfi_jt(int64_t param_1,ulong param_2,ulong *param_3)

{
    ulong uVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = 0xffffffea;
    if ((param_1 != 0) && (param_3 != NULL)) {
        iVar2 = of_find_device_by_node(param_1);
        if (iVar2 == 0) {
            uVar1 = 0xffffffea;
        }
        else {
            *param_3 = param_2;
            param_3[1] = iVar2 + 0x10;
            uVar3 = snd_soc_lookup_component(iVar2 + 0x10,0);
            uVar1 = 0;
            param_3[2] = uVar3;
        }
    }
    return uVar1;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08002478 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.msm_cdc_pinctrl_probe.4ddd1c312763c93ea939a86987b9c24d.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08002480 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = __platform_driver_register
                      (reloc.msm_cdc_pinctrl_probe.4ddd1c312763c93ea939a86987b9c24d.cfi_jt,obj.__this_module);
    if (iVar1 != 0) {
        _printk(0x8001201,"wcd9xxx_core_init",iVar1);
    }
    return iVar1;
}


// ===== sym.msm_cdc_set_supply_min_voltage.cfi_jt @ 0x08002488 (size 8) =====

ulong sym.msm_cdc_set_supply_min_voltage.cfi_jt
                (int64_t param_1,int64_t param_2,int64_t param_3,uint32_t param_4,int64_t param_5,uint param_6,
                uint32_t param_7)

{
    uint uVar1;
    int iVar2;
    ulong *in_x18;
    uint *puVar3;
    uint64_t uVar4;
    ulong *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_2 == 0) || (param_5 == 0)) {
        iVar2 = ___ratelimit(obj.msm_cdc_set_supply_min_voltage._rs,"msm_cdc_set_supply_min_voltage");
        if (iVar2 != 0) {
            _printk(0x800089f,"msm_cdc_set_supply_min_voltage");
            return 0xffffffea;
        }
    }
    else {
        if (param_1 == 0) {
            iVar2 = ___ratelimit(obj.msm_cdc_check_supply_param._rs,"msm_cdc_check_supply_param");
            if (iVar2 != 0) {
                _printk(0x80008ec,"msm_cdc_check_supply_param");
                return 0xffffffed;
            }
            return 0xffffffed;
        }
        uVar4 = param_4;
        if ((param_3 != 0) && (0 < param_4)) {
            puVar3 = param_3 + 0xc;
            puVar5 = param_2 + 8;
            do {
                iVar2 = strcmp(*(puVar3 + -3),param_5);
                if (iVar2 == 0) {
                    if ((param_7 & 1) == 0) {
                        param_6 = puVar3[-1];
                        uVar1 = *puVar3;
                    }
                    else {
                        uVar1 = *puVar3;
                    }
                    regulator_set_voltage(*puVar5,param_6,uVar1);
                    return 0;
                }
                puVar3 = puVar3 + 8;
                puVar5 = puVar5 + 3;
                uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
            return 0;
        }
        iVar2 = ___ratelimit(obj.msm_cdc_check_supply_param._rs.38,"msm_cdc_check_supply_param");
        if (iVar2 != 0) {
            _dev_err(param_1,"%s: supply check failed: vreg: %pK, num_supplies: %d\n","msm_cdc_check_supply_param",
                     param_3,uVar4);
            return 0xffffffea;
        }
    }
    return 0xffffffea;
}


// ===== sym.wcd_free_irq.cfi_jt @ 0x08002490 (size 8) =====

void sym.wcd_free_irq.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        _printk(0x8000e06,"wcd_free_irq");
    }
    else {
        uVar1 = regmap_irq_get_virq(*(param_1 + 0x18));
        if (-1 < uVar1) {
            free_irq(uVar1,param_3);
        }
    }
    return;
}


// ===== sym.wcd_irq_chip_disable.b6b19dba861096840b8a43621a179741.cfi_jt @ 0x08002498 (size 8) =====

void sym.wcd_irq_chip_disable.b6b19dba861096840b8a43621a179741.cfi_jt(void)

{
    return;
}


// ===== sym.wcd_irq_chip_enable.b6b19dba861096840b8a43621a179741.cfi_jt @ 0x080024a0 (size 8) =====

void sym.wcd_irq_chip_enable.b6b19dba861096840b8a43621a179741.cfi_jt(void)

{
    return;
}


// ===== sym.wcd_disable_irq.cfi_jt @ 0x080024a8 (size 8) =====

void sym.wcd_disable_irq.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        _printk(0x8000e06,"wcd_disable_irq");
    }
    else {
        regmap_irq_get_virq(*(param_1 + 0x18));
        disable_irq_nosync();
    }
    return;
}


// ===== sym.wcd_enable_irq.cfi_jt @ 0x080024b0 (size 8) =====

void sym.wcd_enable_irq.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        _printk(0x8000e06,"wcd_enable_irq");
    }
    else {
        regmap_irq_get_virq(*(param_1 + 0x18));
        enable_irq();
    }
    return;
}


// ===== sym.wcd_irq_exit.cfi_jt @ 0x080024b8 (size 8) =====

void sym.wcd_irq_exit.cfi_jt(int64_t param_1,ulong param_2)

{
    uint uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong uVar3;
    ulong unaff_x30;
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    if (param_1 == 0) {
        _printk(0x8000cea,"wcd_irq_exit");
        uVar3 = 0xffffffea;
    }
    else {
        uVar3 = *(param_1 + 0x20);
        uStack_2c = 0;
        iVar2 = __irq_resolve_mapping(param_2,0,&uStack_2c);
        uVar1 = 0;
        if (iVar2 != 0) {
            uVar1 = uStack_2c;
        }
        devm_regmap_del_irq_chip(uVar3,uVar1,*(param_1 + 0x18));
        uVar3 = 0;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return;
    }
    __stack_chk_fail(uVar3);
    return;
}


// ===== sym.wcd_irq_chip_map.b6b19dba861096840b8a43621a179741.cfi_jt @ 0x080024c0 (size 8) =====

ulong sym.wcd_irq_chip_map.b6b19dba861096840b8a43621a179741.cfi_jt(ulong param_1,uint param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    irq_set_chip_and_handler_name(param_2,obj.wcd_irq_chip,sym.handle_simple_irq.cfi_jt,0);
    irq_modify_status(param_2,0,0x8000);
    irq_modify_status(param_2,0,0x400);
    return 0;
}


// ===== sym.msm_cdc_disable_ondemand_supply.cfi_jt @ 0x080024c8 (size 8) =====

int sym.msm_cdc_disable_ondemand_supply.cfi_jt
              (int64_t param_1,int64_t param_2,ulong *param_3,uint32_t param_4,int64_t param_5)

{
    int iVar1;
    int iVar2;
    ulong *in_x18;
    uint64_t uVar3;
    ulong *puVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_2 == 0) || (param_5 == 0)) {
        iVar1 = ___ratelimit(obj.msm_cdc_disable_ondemand_supply._rs,"msm_cdc_disable_ondemand_supply");
        if (iVar1 != 0) {
            _printk(0x800089f,"msm_cdc_disable_ondemand_supply");
        }
    }
    else {
        if (param_1 == 0) {
            iVar1 = ___ratelimit(obj.msm_cdc_check_supply_param._rs,"msm_cdc_check_supply_param");
            if (iVar1 == 0) {
                return -0x13;
            }
            _printk(0x80008ec,"msm_cdc_check_supply_param");
            return -0x13;
        }
        uVar3 = param_4;
        if ((param_3 == NULL) || (param_4 < 1)) {
            iVar1 = ___ratelimit(obj.msm_cdc_check_supply_param._rs.38,"msm_cdc_check_supply_param");
            if (iVar1 != 0) {
                _dev_err(param_1,"%s: supply check failed: vreg: %pK, num_supplies: %d\n","msm_cdc_check_supply_param"
                         ,param_3,uVar3);
            }
        }
        else {
            puVar4 = param_2 + 8;
            do {
                if ((*(param_3 + 0x14) != '\0') && (iVar1 = strcmp(*param_3,param_5), iVar1 == 0)) {
                    iVar1 = regulator_disable(*puVar4);
                    if ((iVar1 != 0) &&
                       (iVar2 = ___ratelimit(obj.msm_cdc_disable_ondemand_supply._rs.1,
                                             "msm_cdc_disable_ondemand_supply"), iVar2 != 0)) {
                        _dev_err(param_1,"%s: failed to disable supply %s, err:%d\n","msm_cdc_disable_ondemand_supply"
                                 ,puVar4[-1],iVar1);
                    }
                    if (uVar3 != 0) {
                        return iVar1;
                    }
                    break;
                }
                puVar4 = puVar4 + 3;
                uVar3 = uVar3 - 1;
                param_3 = param_3 + 4;
            } while (uVar3 != 0);
            iVar1 = ___ratelimit(obj.msm_cdc_disable_ondemand_supply._rs.3,"msm_cdc_disable_ondemand_supply");
            if (iVar1 != 0) {
                _dev_err(param_1,"%s: not able to find supply %s\n","msm_cdc_disable_ondemand_supply",param_5);
            }
        }
    }
    return -0x16;
}


// ===== sym.msm_cdc_enable_ondemand_supply.cfi_jt @ 0x080024d0 (size 8) =====

int sym.msm_cdc_enable_ondemand_supply.cfi_jt
              (int64_t param_1,int64_t param_2,ulong *param_3,uint32_t param_4,int64_t param_5)

{
    int iVar1;
    int iVar2;
    ulong *in_x18;
    uint64_t uVar3;
    ulong *puVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_2 == 0) || (param_5 == 0)) {
        iVar1 = ___ratelimit(obj.msm_cdc_enable_ondemand_supply._rs,"msm_cdc_enable_ondemand_supply");
        if (iVar1 != 0) {
            _printk(0x800089f,"msm_cdc_enable_ondemand_supply");
        }
    }
    else {
        if (param_1 == 0) {
            iVar1 = ___ratelimit(obj.msm_cdc_check_supply_param._rs,"msm_cdc_check_supply_param");
            if (iVar1 == 0) {
                return -0x13;
            }
            _printk(0x80008ec,"msm_cdc_check_supply_param");
            return -0x13;
        }
        uVar3 = param_4;
        if ((param_3 == NULL) || (param_4 < 1)) {
            iVar1 = ___ratelimit(obj.msm_cdc_check_supply_param._rs.38,"msm_cdc_check_supply_param");
            if (iVar1 != 0) {
                _dev_err(param_1,"%s: supply check failed: vreg: %pK, num_supplies: %d\n","msm_cdc_check_supply_param"
                         ,param_3,uVar3);
            }
        }
        else {
            puVar4 = param_2 + 8;
            do {
                if ((*(param_3 + 0x14) != '\0') && (iVar1 = strcmp(*param_3,param_5), iVar1 == 0)) {
                    iVar1 = regulator_enable(*puVar4);
                    if ((iVar1 != 0) &&
                       (iVar2 = ___ratelimit(obj.msm_cdc_enable_ondemand_supply._rs.5,"msm_cdc_enable_ondemand_supply")
                       , iVar2 != 0)) {
                        _dev_err(param_1,"%s: failed to enable supply %s, rc: %d\n","msm_cdc_enable_ondemand_supply",
                                 puVar4[-1],iVar1);
                    }
                    if (uVar3 != 0) {
                        return iVar1;
                    }
                    break;
                }
                puVar4 = puVar4 + 3;
                uVar3 = uVar3 - 1;
                param_3 = param_3 + 4;
            } while (uVar3 != 0);
            iVar1 = ___ratelimit(obj.msm_cdc_enable_ondemand_supply._rs.7,"msm_cdc_enable_ondemand_supply");
            if (iVar1 != 0) {
                _dev_err(param_1,"%s: not able to find supply %s\n","msm_cdc_enable_ondemand_supply",param_5);
            }
        }
    }
    return -0x16;
}


// ===== sym.msm_cdc_disable_static_supplies.cfi_jt @ 0x080024d8 (size 8) =====

int sym.msm_cdc_disable_static_supplies.cfi_jt(int64_t param_1,int64_t param_2,int64_t param_3,uint32_t param_4)

{
    int iVar1;
    ulong *in_x18;
    uint64_t uVar2;
    ulong *puVar3;
    char *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
        _printk(0x800089f,"msm_cdc_disable_static_supplies");
    }
    else {
        uVar2 = param_4;
        if (0 < param_4) {
            pcVar4 = param_3 + 0x14;
            iVar1 = 0;
            puVar3 = param_2 + 8;
            do {
                if ((*pcVar4 == '\0') && (iVar1 = regulator_disable(*puVar3), iVar1 != 0)) {
                    _dev_err(param_1,"%s: failed to disable supply %s, err:%d\n","msm_cdc_disable_static_supplies",
                             puVar3[-1],iVar1);
                }
                uVar2 = uVar2 - 1;
                puVar3 = puVar3 + 3;
                pcVar4 = pcVar4 + 0x20;
            } while (uVar2 != 0);
            return iVar1;
        }
        iVar1 = ___ratelimit(obj.msm_cdc_check_supply_param._rs.38,"msm_cdc_check_supply_param");
        if (iVar1 != 0) {
            _dev_err(param_1,"%s: supply check failed: vreg: %pK, num_supplies: %d\n","msm_cdc_check_supply_param",
                     param_3,uVar2);
        }
    }
    return -0x16;
}


// ===== sym.msm_cdc_enable_static_supplies.cfi_jt @ 0x080024e0 (size 8) =====

int sym.msm_cdc_enable_static_supplies.cfi_jt(int64_t param_1,int64_t param_2,int64_t param_3,uint32_t param_4)

{
    ulong *puVar1;
    int iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong *puVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
        _printk(0x800089f,"msm_cdc_enable_static_supplies");
    }
    else {
        if (0 < param_4) {
            iVar5 = 0;
            iVar3 = 0;
            do {
                if (*(param_3 + 0x14 + iVar3) == '\0') {
                    puVar1 = param_2 + iVar5;
                    iVar2 = regulator_enable(puVar1[1]);
                    if (iVar2 != 0) {
                        puVar4 = puVar1 + -2;
                        _dev_err(param_1,"%s: failed to enable supply %s, rc: %d\n","msm_cdc_enable_static_supplies",
                                 *puVar1,iVar2);
                        if (iVar5 == 0) {
                            return iVar2;
                        }
                        do {
                            if (*(param_3 + -0xc + iVar3) == '\0') {
                                regulator_disable(*puVar4);
                            }
                            puVar4 = puVar4 + -3;
                            iVar3 = iVar3 + -0x20;
                        } while (iVar3 != 0);
                        return iVar2;
                    }
                }
                iVar3 = iVar3 + 0x20;
                iVar5 = iVar5 + 0x18;
            } while (param_4 * 0x18 - iVar5 != 0);
            return 0;
        }
        iVar2 = ___ratelimit(obj.msm_cdc_check_supply_param._rs.38,"msm_cdc_check_supply_param");
        if (iVar2 != 0) {
            _dev_err(param_1,"%s: supply check failed: vreg: %pK, num_supplies: %d\n","msm_cdc_check_supply_param",
                     param_3,param_4);
        }
    }
    return -0x16;
}


// ===== sym.msm_cdc_release_supplies.cfi_jt @ 0x080024e8 (size 8) =====

ulong sym.msm_cdc_release_supplies.cfi_jt(int64_t param_1,int64_t param_2,int64_t param_3,uint32_t param_4)

{
    int iVar1;
    ulong *in_x18;
    uint *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    char *pcVar5;
    uint64_t uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
        _printk(0x800089f,"msm_cdc_release_supplies");
    }
    else {
        uVar4 = param_4;
        if (0 < param_4) {
            puVar3 = param_2 + 8;
            pcVar5 = param_3 + 0x14;
            uVar6 = uVar4;
            do {
                if ((*pcVar5 == '\0') && (iVar1 = regulator_disable(*puVar3), iVar1 != 0)) {
                    _dev_err(param_1,"%s: failed to disable supply %s, err:%d\n","msm_cdc_disable_static_supplies",
                             puVar3[-1],iVar1);
                }
                uVar6 = uVar6 - 1;
                puVar3 = puVar3 + 3;
                pcVar5 = pcVar5 + 0x20;
            } while (uVar6 != 0);
            puVar2 = param_3 + 0xc;
            puVar3 = param_2 + 8;
            do {
                iVar1 = regulator_count_voltages(*puVar3);
                if (-1 < iVar1) {
                    regulator_set_voltage(*puVar3,0,*puVar2);
                    regulator_set_load(*puVar3,0);
                }
                uVar4 = uVar4 - 1;
                puVar2 = puVar2 + 8;
                puVar3 = puVar3 + 3;
            } while (uVar4 != 0);
            return 0;
        }
        iVar1 = ___ratelimit(obj.msm_cdc_check_supply_param._rs.38,"msm_cdc_check_supply_param");
        if (iVar1 != 0) {
            _dev_err(param_1,"%s: supply check failed: vreg: %pK, num_supplies: %d\n","msm_cdc_check_supply_param",
                     param_3,uVar4);
        }
    }
    return 0xffffffea;
}


// ===== sym.wcd_request_irq.cfi_jt @ 0x080024f0 (size 8) =====

ulong sym.wcd_request_irq.cfi_jt(int64_t param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        _printk(0x8000e06,"wcd_request_irq");
        uVar1 = 0xffffffea;
    }
    else {
        uVar1 = regmap_irq_get_virq(*(param_1 + 0x18));
        if (-1 < uVar1) {
            uVar1 = request_threaded_irq(uVar1,0,param_4,0x2001,param_3,param_5);
        }
    }
    return uVar1;
}


// ===== sym.wcd_irq_init.cfi_jt @ 0x080024f8 (size 8) =====

int sym.wcd_irq_init.cfi_jt(ulong *param_1,int64_t *param_2)

{
    uint uVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong uVar4;
    ulong uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == NULL) {
        uVar4 = 0x8000e06;
    }
    else {
        _segment.ehdr = param_1[1];
        iVar3 = __irq_domain_add(0,1,1,0,obj.wcd_domain_ops,0);
        *param_2 = iVar3;
        if (iVar3 != 0) {
            uVar4 = param_1[4];
            uVar5 = param_1[2];
            uVar1 = irq_create_mapping_affinity(iVar3,0,0);
            iVar2 = devm_regmap_add_irq_chip(uVar4,uVar5,uVar1,0x2000,0,*param_1,param_1 + 3);
            if (iVar2 == 0) {
                return 0;
            }
            _printk(0x8001006,"wcd_irq_init",iVar2);
            return iVar2;
        }
        uVar4 = 0x8000cca;
    }
    _printk(uVar4,"wcd_irq_init");
    return -0x16;
}


// ===== sym.msm_cdc_pinctrl_set_wakeup_capable.cfi_jt @ 0x08002500 (size 8) =====

int sym.msm_cdc_pinctrl_set_wakeup_capable.cfi_jt(ulong param_1,uint32_t param_2)

{
    int64_t iVar1;
    uint32_t uVar2;
    char cVar3;
    uint32_t uVar4;
    code *pcVar5;
    int iVar6;
    uint32_t uVar7;
    int64_t iVar8;
    ulong *in_x18;
    uint64_t uVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = sym.msm_cdc_pinctrl_get_gpiodata();
    if (iVar8 == 0) {
        iVar6 = -0x16;
    }
    else {
        if ((*(iVar8 + 0x130) == '\0') || (*(iVar8 + 0x128) == 0)) {
            iVar6 = 0;
            cVar3 = *(iVar8 + 0x131);
        }
        else {
            uVar9 = 0;
            do {
                if (uVar9 == 0x10) goto code_r0x08002a0c;
                iVar6 = msm_gpio_mpm_wake_set(*(iVar8 + 0x28 + uVar9 * 4),param_2 & 1);
                if (iVar6 < 0) {
                    return iVar6;
                }
                uVar9 = uVar9 + 1;
            } while (uVar9 < *(iVar8 + 0x128));
            cVar3 = *(iVar8 + 0x131);
        }
        if ((cVar3 != '\0') && (*(iVar8 + 300) != 0)) {
            uVar9 = 0;
            do {
                if (uVar9 == 0x10) {
code_r0x08002a0c:
    //WARNING: Does not return
                    pcVar5 = SoftwareBreakpoint(0x5512,0x8002a10);
                    (*pcVar5)();
                }
                iVar1 = iVar8 + 0xe8 + uVar9 * 8;
                uVar7 = sym.readl(*(iVar1 + -0x80));
                uVar4 = 1 << (*(iVar8 + 0xe8 + uVar9 * 4) & 0x1f);
                uVar2 = uVar4 | uVar7;
                if ((param_2 & 1) == 0) {
                    uVar2 = uVar7 & (uVar4 ^ 0xffffffff);
                }
                sym.writel(uVar2,*(iVar1 + -0x80));
                uVar9 = uVar9 + 1;
            } while (uVar9 < *(iVar8 + 300));
        }
    }
    return iVar6;
}


// ===== sym.msm_cdc_pinctrl_select_alt_active_state.cfi_jt @ 0x08002508 (size 8) =====

ulong sym.msm_cdc_pinctrl_select_alt_active_state.cfi_jt(void)

{
    int iVar1;
    ulong *puVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = sym.msm_cdc_pinctrl_get_gpiodata();
    if (puVar2 != NULL) {
        if (puVar2[3] != 0) {
            *(puVar2 + 0x24) = 1;
            uVar3 = pinctrl_select_state(*puVar2);
            return uVar3;
        }
        iVar1 = ___ratelimit(obj.msm_cdc_pinctrl_select_alt_active_state._rs,"msm_cdc_pinctrl_select_alt_active_state")
        ;
        if (iVar1 != 0) {
            _printk(0x8001024,"msm_cdc_pinctrl_select_alt_active_state");
        }
    }
    return 0xffffffea;
}


// ===== sym.msm_cdc_pinctrl_get_state.cfi_jt @ 0x08002510 (size 8) =====

uint64_t sym.msm_cdc_pinctrl_get_state.cfi_jt(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sym.msm_cdc_pinctrl_get_gpiodata();
    if (iVar1 == 0) {
        uVar2 = 0xffffffea;
    }
    else {
        uVar2 = *(iVar1 + 0x24);
    }
    return uVar2;
}


// ===== sym.msm_cdc_pinctrl_select_sleep_state.cfi_jt @ 0x08002518 (size 8) =====

ulong sym.msm_cdc_pinctrl_select_sleep_state.cfi_jt(void)

{
    int iVar1;
    ulong *puVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = sym.msm_cdc_pinctrl_get_gpiodata();
    if (puVar2 != NULL) {
        if (puVar2[2] != 0) {
            *(puVar2 + 0x24) = 0;
            uVar3 = pinctrl_select_state(*puVar2);
            return uVar3;
        }
        iVar1 = ___ratelimit(obj.msm_cdc_pinctrl_select_sleep_state._rs,"msm_cdc_pinctrl_select_sleep_state");
        if (iVar1 != 0) {
            _printk(0x8000ef5,"msm_cdc_pinctrl_select_sleep_state");
        }
    }
    return 0xffffffea;
}


// ===== sym.msm_cdc_get_gpio_state.cfi_jt @ 0x08002520 (size 8) =====

ulong sym.msm_cdc_get_gpio_state.cfi_jt(void)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sym.msm_cdc_pinctrl_get_gpiodata();
    if ((iVar1 == 0) || (0x1ff < *(iVar1 + 0x20))) {
        uVar2 = 0xffffffea;
    }
    else {
        gpio_to_desc();
        uVar2 = gpiod_get_raw_value_cansleep();
    }
    return uVar2;
}


// ===== sym.msm_cdc_pinctrl_select_active_state.cfi_jt @ 0x08002528 (size 8) =====

ulong sym.msm_cdc_pinctrl_select_active_state.cfi_jt(void)

{
    int iVar1;
    ulong *puVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = sym.msm_cdc_pinctrl_get_gpiodata();
    if (puVar2 != NULL) {
        if (puVar2[1] != 0) {
            *(puVar2 + 0x24) = 1;
            uVar3 = pinctrl_select_state(*puVar2);
            return uVar3;
        }
        iVar1 = ___ratelimit(obj.msm_cdc_pinctrl_select_active_state._rs,"msm_cdc_pinctrl_select_active_state");
        if (iVar1 != 0) {
            _printk(0x8001191,"msm_cdc_pinctrl_select_active_state");
        }
    }
    return 0xffffffea;
}


// ===== sym.msm_cdc_pinctrl_probe.4ddd1c312763c93ea939a86987b9c24d.cfi_jt @ 0x08002530 (size 8) =====

int sym.msm_cdc_pinctrl_probe.4ddd1c312763c93ea939a86987b9c24d.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    code *pcVar4;
    int iVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    int iVar8;
    uint64_t *puVar9;
    uint64_t uVar10;
    int64_t iVar11;
    uint64_t uVar12;
    int64_t iVar13;
    ulong uVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar15;
    uint64_t *puVar16;
    uint64_t uVar17;
    ulong unaff_x30;
    int aiStack_130 [16];
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
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iVar13 = param_1 + 0x10;
    iStack_70 = *(iVar11 + 0x5e0);
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
    aiStack_130[0xc] = 0;
    aiStack_130[0xd] = 0;
    aiStack_130[0xe] = 0;
    aiStack_130[0xf] = 0;
    aiStack_130[8] = 0;
    aiStack_130[9] = 0;
    aiStack_130[10] = 0;
    aiStack_130[0xb] = 0;
    aiStack_130[4] = 0;
    aiStack_130[5] = 0;
    aiStack_130[6] = 0;
    aiStack_130[7] = 0;
    aiStack_130[0] = 0;
    aiStack_130[1] = 0;
    aiStack_130[2] = 0;
    aiStack_130[3] = 0;
    puVar9 = devm_kmalloc(iVar13,0x138,0xdc0);
    if (puVar9 == NULL) {
        iVar5 = -0xc;
        goto code_r0x08002fdc;
    }
    uVar10 = devm_pinctrl_get(iVar13);
    *puVar9 = uVar10;
    if ((uVar10 == 0) || (0xfffffffffffff000 < uVar10)) {
        _dev_err(iVar13,"%s: Cannot get cdc gpio pinctrl:%ld\n","msm_cdc_pinctrl_probe");
        iVar5 = *puVar9;
    }
    else {
        uVar10 = pinctrl_lookup_state(uVar10,"aud_active");
        puVar9[1] = uVar10;
        if ((uVar10 == 0) || (0xfffffffffffff000 < uVar10)) {
            _dev_err(iVar13,"%s: Cannot get aud_active pinctrl state:%ld\n","msm_cdc_pinctrl_probe");
            iVar5 = puVar9[1];
        }
        else {
            uVar10 = pinctrl_lookup_state(*puVar9,"aud_sleep");
            puVar9[2] = uVar10;
            if ((uVar10 != 0) && (uVar10 < 0xfffffffffffff001)) {
                uVar10 = pinctrl_lookup_state(*puVar9,"aud_alt_active");
                uVar14 = *(param_1 + 0x300);
                puVar9[3] = uVar10;
                iVar11 = of_find_property(uVar14,"qcom,lpi-gpios",0);
                if ((iVar11 == 0) && (iVar5 = pinctrl_select_state(*puVar9,puVar9[2]), iVar5 != 0)) {
                    _dev_err(iVar13,"%s: set cdc gpio sleep state fail: %d\n","msm_cdc_pinctrl_probe",iVar5);
                }
                uVar6 = of_property_count_elems_of_size(*(param_1 + 0x300),"qcom,chip-wakeup-reg",4);
                if (0 < uVar6) {
                    uVar10 = uVar6;
                    iVar5 = of_property_read_variable_u32_array
                                      (*(param_1 + 0x300),"qcom,chip-wakeup-reg",&uStack_f0,uVar10,0);
                    if (-1 < iVar5) {
                        iVar5 = of_property_read_variable_u32_array
                                          (*(param_1 + 0x300),"qcom,chip-wakeup-maskbit",puVar9 + 0x1d,uVar10,0);
                        if (iVar5 < 0) {
                            _dev_err(iVar13,"chip-wakeup-maskbit needed if chip-wakeup-reg is defined!\n");
                        }
                        else {
                            uVar17 = 0;
                            *(puVar9 + 0x131) = 1;
                            do {
                                if (uVar17 == 0x10) goto code_r0x08003050;
                                uVar12 = devm_ioremap(iVar13,*(&uStack_f0 + uVar17 * 4),4);
                                (puVar9 + 0xd)[uVar17] = uVar12;
                                uVar17 = uVar17 + 1;
                            } while (uVar10 != uVar17);
                            iVar5 = of_property_read_variable_u32_array
                                              (*(param_1 + 0x300),"qcom,chip-wakeup-default-val",aiStack_130,uVar10,
                                               0);
                            if (-1 < iVar5) {
                                iVar11 = 0;
                                uVar2 = uVar6;
                                if (uVar6 < 2) {
                                    uVar2 = 1;
                                }
                                puVar16 = puVar9 + 0xd;
                                do {
                                    if (iVar11 == 0x40) goto code_r0x08003050;
                                    uVar7 = sym.readl(*puVar16);
                                    uVar3 = 1 << (*(puVar9 + 0x1d + iVar11) & 0x1f);
                                    uVar1 = uVar7 & (uVar3 ^ 0xffffffff);
                                    if (*(aiStack_130 + iVar11) != 0) {
                                        uVar1 = uVar3 | uVar7;
                                    }
                                    sym.writel(uVar1,*puVar16);
                                    iVar11 = iVar11 + 4;
                                    puVar16 = puVar16 + 1;
                                } while (uVar2 * 4 - iVar11 != 0);
                            }
                            *(puVar9 + 300) = uVar6;
                        }
                    }
                }
                iVar5 = of_property_count_elems_of_size(*(param_1 + 0x300),"qcom,tlmm-pins",4);
                if ((0 < iVar5) &&
                   (iVar8 = of_property_read_variable_u32_array
                                      (*(param_1 + 0x300),"qcom,tlmm-pins",&uStack_b0,iVar5,0), -1 < iVar8)) {
                    *(puVar9 + 0x26) = 1;
                    *(puVar9 + 5) = uStack_b0;
                    if (((iVar5 != 1) &&
                        (((*(puVar9 + 0x2c) = uStack_b0._4_4_, iVar5 != 2 && (*(puVar9 + 6) = uStack_a8, iVar5 != 3))
                         && (*(puVar9 + 0x34) = uStack_a8._4_4_, iVar5 != 4)))) &&
                       ((((*(puVar9 + 7) = uStack_a0, iVar5 != 5 && (*(puVar9 + 0x3c) = uStack_a0._4_4_, iVar5 != 6))
                         && (*(puVar9 + 8) = uStack_98, iVar5 != 7)) &&
                        (((*(puVar9 + 0x44) = uStack_98._4_4_, iVar5 != 8 && (*(puVar9 + 9) = uStack_90, iVar5 != 9))
                         && (((*(puVar9 + 0x4c) = uStack_90._4_4_, iVar5 != 10 &&
                              ((((*(puVar9 + 10) = uStack_88, iVar5 != 0xb &&
                                 (*(puVar9 + 0x54) = uStack_88._4_4_, iVar5 != 0xc)) &&
                                (*(puVar9 + 0xb) = uStack_80, iVar5 != 0xd)) &&
                               ((*(puVar9 + 0x5c) = uStack_80._4_4_, iVar5 != 0xe &&
                                (*(puVar9 + 0xc) = uStack_78, iVar5 != 0xf)))))) &&
                             (*(puVar9 + 100) = uStack_78._4_4_, iVar5 != 0x10)))))))) {
code_r0x08003050:
    //WARNING: Does not return
                        pcVar4 = SoftwareBreakpoint(0x5512,0x8003054);
                        (*pcVar4)();
                    }
                    *(puVar9 + 0x25) = iVar5;
                }
                uVar14 = of_get_named_gpio_flags(*(param_1 + 0x300),"qcom,cdc-rst-n-gpio",0,0);
                *(puVar9 + 4) = uVar14;
                if (uVar14 < 0x200) {
                    iVar5 = gpio_request(uVar14,"MSM_CDC_RESET");
                    if (iVar5 != 0) {
                        _dev_err(iVar13,"%s: Failed to request gpio %d\n","msm_cdc_pinctrl_probe",puVar9[4]);
                        goto code_r0x08002fc8;
                    }
                }
                iVar5 = 0;
                *(param_1 + 0xa8) = puVar9;
                goto code_r0x08002fdc;
            }
            _dev_err(iVar13,"%s: Cannot get aud_sleep pinctrl state:%ld\n","msm_cdc_pinctrl_probe");
            iVar5 = puVar9[2];
        }
code_r0x08002fc8:
        devm_pinctrl_put(*puVar9);
    }
    devm_kfree(iVar13,puVar9);
code_r0x08002fdc:
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_70) {
        return iVar5;
    }
    iVar13 = __stack_chk_fail();
    *extraout_x18 = sym.msm_cdc_pinctrl_remove;
    piVar15 = *(iVar13 + 0xa8);
    if (piVar15 != NULL) {
        if (*(piVar15 + 4) < 0x200) {
            gpio_free();
        }
        if (*piVar15 != 0) {
            devm_pinctrl_put();
        }
    }
    devm_kfree(iVar13 + 0x10,piVar15);
    return 0;
}


// ===== sym.msm_cdc_pinctrl_remove.4ddd1c312763c93ea939a86987b9c24d.cfi_jt @ 0x08002538 (size 8) =====

ulong sym.msm_cdc_pinctrl_remove.4ddd1c312763c93ea939a86987b9c24d.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = *(param_1 + 0xa8);
    if (piVar1 != NULL) {
        if (*(piVar1 + 4) < 0x200) {
            gpio_free();
        }
        if (*piVar1 != 0) {
            devm_pinctrl_put();
        }
    }
    devm_kfree(param_1 + 0x10,piVar1);
    return 0;
}


// ===== sym.wcd9xxx_lock_sleep @ 0x08002540 (size 16) =====

ulong sym.wcd9xxx_lock_sleep(int64_t arg1)

{
    return 0;
}


// ===== sym.wcd9xxx_unlock_sleep @ 0x08002550 (size 12) =====

void sym.wcd9xxx_unlock_sleep(void)

{
    return;
}


// ===== sym.wcd9xxx_nested_irq_lock @ 0x0800255c (size 12) =====

void sym.wcd9xxx_nested_irq_lock(void)

{
    return;
}


// ===== sym.wcd9xxx_nested_irq_unlock @ 0x08002568 (size 12) =====

void sym.wcd9xxx_nested_irq_unlock(void)

{
    return;
}


// ===== sym.wcd9xxx_request_irq @ 0x08002574 (size 16) =====

ulong sym.wcd9xxx_request_irq(int64_t arg1)

{
    return 0;
}


// ===== sym.wcd9xxx_free_irq @ 0x08002584 (size 12) =====

void sym.wcd9xxx_free_irq(void)

{
    return;
}


// ===== sym.wcd9xxx_enable_irq @ 0x08002590 (size 12) =====

void sym.wcd9xxx_enable_irq(void)

{
    return;
}


// ===== sym.wcd9xxx_disable_irq @ 0x0800259c (size 12) =====

void sym.wcd9xxx_disable_irq(void)

{
    return;
}


// ===== sym.wcd9xxx_disable_irq_sync @ 0x080025a8 (size 12) =====

void sym.wcd9xxx_disable_irq_sync(void)

{
    return;
}


// ===== sym.wcd9xxx_irq_init @ 0x080025b4 (size 16) =====

ulong sym.wcd9xxx_irq_init(int64_t arg1)

{
    return 0;
}


// ===== sym.wcd9xxx_irq_exit @ 0x080025c4 (size 12) =====

void sym.wcd9xxx_irq_exit(void)

{
    return;
}


// ===== sym.wcd9xxx_irq_drv_init @ 0x080025d0 (size 16) =====

ulong sym.wcd9xxx_irq_drv_init(int64_t arg1)

{
    return 0;
}


// ===== sym.wcd9xxx_irq_drv_exit @ 0x080025e0 (size 12) =====

void sym.wcd9xxx_irq_drv_exit(void)

{
    return;
}


// ===== sym.__cfi_check_fail @ 0x080025ec (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08002630

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
    //switch table (4 cases) at 0x8000800
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002644);
    (*pcVar1)();
}


// ===== sym.msm_cdc_get_gpio_state @ 0x08002644 (size 68) =====

ulong sym.msm_cdc_get_gpio_state(void)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sym.msm_cdc_pinctrl_get_gpiodata();
    if ((iVar1 == 0) || (0x1ff < *(iVar1 + 0x20))) {
        uVar2 = 0xffffffea;
    }
    else {
        gpio_to_desc();
        uVar2 = gpiod_get_raw_value_cansleep();
    }
    return uVar2;
}


// ===== sym.msm_cdc_pinctrl_get_gpiodata @ 0x08002688 (size 208) =====

int64_t sym.msm_cdc_pinctrl_get_gpiodata(int64_t param_1)

{
    int iVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        iVar1 = ___ratelimit(obj.msm_cdc_pinctrl_get_gpiodata._rs,"msm_cdc_pinctrl_get_gpiodata");
        if (iVar1 == 0) {
            return 0;
        }
        uVar3 = 0x8000de0;
    }
    else {
        iVar2 = of_find_device_by_node();
        if (iVar2 != 0) {
            if (*(iVar2 + 0xa8) != 0) {
                return *(iVar2 + 0xa8);
            }
            iVar1 = ___ratelimit(obj.msm_cdc_pinctrl_get_gpiodata._rs.6,"msm_cdc_pinctrl_get_gpiodata");
            if (iVar1 != 0) {
                _dev_err(iVar2 + 0x10,"%s: cannot find cdc gpio info\n","msm_cdc_pinctrl_get_gpiodata");
                return 0;
            }
            return 0;
        }
        iVar1 = ___ratelimit(obj.msm_cdc_pinctrl_get_gpiodata._rs.4,"msm_cdc_pinctrl_get_gpiodata");
        if (iVar1 == 0) {
            return 0;
        }
        uVar3 = 0x80010ce;
    }
    _printk(uVar3,"msm_cdc_pinctrl_get_gpiodata");
    return 0;
}


// ===== sym.msm_cdc_pinctrl_select_sleep_state @ 0x08002758 (size 120) =====

ulong sym.msm_cdc_pinctrl_select_sleep_state(void)

{
    int iVar1;
    ulong *puVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = sym.msm_cdc_pinctrl_get_gpiodata();
    if (puVar2 != NULL) {
        if (puVar2[2] != 0) {
            *(puVar2 + 0x24) = 0;
            uVar3 = pinctrl_select_state(*puVar2);
            return uVar3;
        }
        iVar1 = ___ratelimit(obj.msm_cdc_pinctrl_select_sleep_state._rs,"msm_cdc_pinctrl_select_sleep_state");
        if (iVar1 != 0) {
            _printk(0x8000ef5,"msm_cdc_pinctrl_select_sleep_state");
        }
    }
    return 0xffffffea;
}


// ===== sym.msm_cdc_pinctrl_select_alt_active_state @ 0x080027d0 (size 124) =====

ulong sym.msm_cdc_pinctrl_select_alt_active_state(void)

{
    int iVar1;
    ulong *puVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = sym.msm_cdc_pinctrl_get_gpiodata();
    if (puVar2 != NULL) {
        if (puVar2[3] != 0) {
            *(puVar2 + 0x24) = 1;
            uVar3 = pinctrl_select_state(*puVar2);
            return uVar3;
        }
        iVar1 = ___ratelimit(obj.msm_cdc_pinctrl_select_alt_active_state._rs,"msm_cdc_pinctrl_select_alt_active_state")
        ;
        if (iVar1 != 0) {
            _printk(0x8001024,"msm_cdc_pinctrl_select_alt_active_state");
        }
    }
    return 0xffffffea;
}


// ===== sym.msm_cdc_pinctrl_select_active_state @ 0x0800284c (size 124) =====

ulong sym.msm_cdc_pinctrl_select_active_state(void)

{
    int iVar1;
    ulong *puVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = sym.msm_cdc_pinctrl_get_gpiodata();
    if (puVar2 != NULL) {
        if (puVar2[1] != 0) {
            *(puVar2 + 0x24) = 1;
            uVar3 = pinctrl_select_state(*puVar2);
            return uVar3;
        }
        iVar1 = ___ratelimit(obj.msm_cdc_pinctrl_select_active_state._rs,"msm_cdc_pinctrl_select_active_state");
        if (iVar1 != 0) {
            _printk(0x8001191,"msm_cdc_pinctrl_select_active_state");
        }
    }
    return 0xffffffea;
}


// ===== sym.msm_cdc_pinctrl_get_state @ 0x080028c8 (size 52) =====

uint64_t sym.msm_cdc_pinctrl_get_state(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sym.msm_cdc_pinctrl_get_gpiodata();
    if (iVar1 == 0) {
        uVar2 = 0xffffffea;
    }
    else {
        uVar2 = *(iVar1 + 0x24);
    }
    return uVar2;
}


// ===== sym.msm_cdc_pinctrl_set_wakeup_capable @ 0x080028fc (size 276) =====

int sym.msm_cdc_pinctrl_set_wakeup_capable(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    char cVar3;
    uint32_t uVar4;
    code *pcVar5;
    int iVar6;
    uint32_t uVar7;
    int64_t iVar8;
    ulong *in_x18;
    uint64_t uVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = sym.msm_cdc_pinctrl_get_gpiodata();
    if (iVar8 == 0) {
        iVar6 = -0x16;
    }
    else {
        if ((*(iVar8 + 0x130) == '\0') || (*(iVar8 + 0x128) == 0)) {
            iVar6 = 0;
            cVar3 = *(iVar8 + 0x131);
        }
        else {
            uVar9 = 0;
            do {
                if (uVar9 == 0x10) goto code_r0x08002a0c;
                iVar6 = msm_gpio_mpm_wake_set(*(iVar8 + 0x28 + uVar9 * 4),arg1 & 1);
                if (iVar6 < 0) {
                    return iVar6;
                }
                uVar9 = uVar9 + 1;
            } while (uVar9 < *(iVar8 + 0x128));
            cVar3 = *(iVar8 + 0x131);
        }
        if ((cVar3 != '\0') && (*(iVar8 + 300) != 0)) {
            uVar9 = 0;
            do {
                if (uVar9 == 0x10) {
code_r0x08002a0c:
    //WARNING: Does not return
                    pcVar5 = SoftwareBreakpoint(0x5512,0x8002a10);
                    (*pcVar5)();
                }
                iVar1 = iVar8 + 0xe8 + uVar9 * 8;
                uVar7 = sym.readl(*(iVar1 + -0x80));
                uVar4 = 1 << (*(iVar8 + 0xe8 + uVar9 * 4) & 0x1f);
                uVar2 = uVar4 | uVar7;
                if ((arg1 & 1U) == 0) {
                    uVar2 = uVar7 & (uVar4 ^ 0xffffffff);
                }
                sym.writel(uVar2,*(iVar1 + -0x80));
                uVar9 = uVar9 + 1;
            } while (uVar9 < *(iVar8 + 300));
        }
    }
    return iVar6;
}


// ===== sym.msm_cdc_pinctrl_drv_init @ 0x08002a10 (size 52) =====

void sym.msm_cdc_pinctrl_drv_init(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.msm_cdc_pinctrl_probe.4ddd1c312763c93ea939a86987b9c24d.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.msm_cdc_pinctrl_drv_exit @ 0x08002a44 (size 44) =====

void sym.msm_cdc_pinctrl_drv_exit(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.msm_cdc_pinctrl_probe.4ddd1c312763c93ea939a86987b9c24d.cfi_jt);
    return;
}


// ===== sym.readl @ 0x08002a70 (size 124) =====

uint sym.readl(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8002a74);
    uVar1 = *arg1;
    DataMemoryBarrier(0,1);
    log_post_read_mmio(uVar1,0x20,arg1,0x8002ab8);
    return uVar1;
}


// ===== sym.writel @ 0x08002af0 (size 124) =====

void sym.writel(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8002b0c);
    DataMemoryBarrier(0,2);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8002b38);
    return;
}


// ===== sym.msm_cdc_pinctrl_probe @ 0x08002b6c (size 1260) =====

int sym.msm_cdc_pinctrl_probe(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    code *pcVar4;
    int iVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    int iVar8;
    uint64_t *puVar9;
    uint64_t uVar10;
    int64_t iVar11;
    uint64_t uVar12;
    int64_t iVar13;
    ulong uVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar15;
    uint64_t *puVar16;
    uint64_t uVar17;
    ulong unaff_x30;
    int aiStack_130 [16];
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
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iVar13 = arg1 + 0x10;
    iStack_70 = *(iVar11 + 0x5e0);
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
    aiStack_130[0xc] = 0;
    aiStack_130[0xd] = 0;
    aiStack_130[0xe] = 0;
    aiStack_130[0xf] = 0;
    aiStack_130[8] = 0;
    aiStack_130[9] = 0;
    aiStack_130[10] = 0;
    aiStack_130[0xb] = 0;
    aiStack_130[4] = 0;
    aiStack_130[5] = 0;
    aiStack_130[6] = 0;
    aiStack_130[7] = 0;
    aiStack_130[0] = 0;
    aiStack_130[1] = 0;
    aiStack_130[2] = 0;
    aiStack_130[3] = 0;
    puVar9 = devm_kmalloc(iVar13,0x138,0xdc0);
    if (puVar9 == NULL) {
        iVar5 = -0xc;
        goto code_r0x08002fdc;
    }
    uVar10 = devm_pinctrl_get(iVar13);
    *puVar9 = uVar10;
    if ((uVar10 == 0) || (0xfffffffffffff000 < uVar10)) {
        _dev_err(iVar13,"%s: Cannot get cdc gpio pinctrl:%ld\n","msm_cdc_pinctrl_probe");
        iVar5 = *puVar9;
    }
    else {
        uVar10 = pinctrl_lookup_state(uVar10,"aud_active");
        puVar9[1] = uVar10;
        if ((uVar10 == 0) || (0xfffffffffffff000 < uVar10)) {
            _dev_err(iVar13,"%s: Cannot get aud_active pinctrl state:%ld\n","msm_cdc_pinctrl_probe");
            iVar5 = puVar9[1];
        }
        else {
            uVar10 = pinctrl_lookup_state(*puVar9,"aud_sleep");
            puVar9[2] = uVar10;
            if ((uVar10 != 0) && (uVar10 < 0xfffffffffffff001)) {
                uVar10 = pinctrl_lookup_state(*puVar9,"aud_alt_active");
                uVar14 = *(arg1 + 0x300);
                puVar9[3] = uVar10;
                iVar11 = of_find_property(uVar14,"qcom,lpi-gpios",0);
                if ((iVar11 == 0) && (iVar5 = pinctrl_select_state(*puVar9,puVar9[2]), iVar5 != 0)) {
                    _dev_err(iVar13,"%s: set cdc gpio sleep state fail: %d\n","msm_cdc_pinctrl_probe",iVar5);
                }
                uVar6 = of_property_count_elems_of_size(*(arg1 + 0x300),"qcom,chip-wakeup-reg",4);
                if (0 < uVar6) {
                    uVar10 = uVar6;
                    iVar5 = of_property_read_variable_u32_array
                                      (*(arg1 + 0x300),"qcom,chip-wakeup-reg",&uStack_f0,uVar10,0);
                    if (-1 < iVar5) {
                        iVar5 = of_property_read_variable_u32_array
                                          (*(arg1 + 0x300),"qcom,chip-wakeup-maskbit",puVar9 + 0x1d,uVar10,0);
                        if (iVar5 < 0) {
                            _dev_err(iVar13,"chip-wakeup-maskbit needed if chip-wakeup-reg is defined!\n");
                        }
                        else {
                            uVar17 = 0;
                            *(puVar9 + 0x131) = 1;
                            do {
                                if (uVar17 == 0x10) goto code_r0x08003050;
                                uVar12 = devm_ioremap(iVar13,*(&uStack_f0 + uVar17 * 4),4);
                                (puVar9 + 0xd)[uVar17] = uVar12;
                                uVar17 = uVar17 + 1;
                            } while (uVar10 != uVar17);
                            iVar5 = of_property_read_variable_u32_array
                                              (*(arg1 + 0x300),"qcom,chip-wakeup-default-val",aiStack_130,uVar10,0);
                            if (-1 < iVar5) {
                                iVar11 = 0;
                                uVar2 = uVar6;
                                if (uVar6 < 2) {
                                    uVar2 = 1;
                                }
                                puVar16 = puVar9 + 0xd;
                                do {
                                    if (iVar11 == 0x40) goto code_r0x08003050;
                                    uVar7 = sym.readl(*puVar16);
                                    uVar3 = 1 << (*(puVar9 + 0x1d + iVar11) & 0x1f);
                                    uVar1 = uVar7 & (uVar3 ^ 0xffffffff);
                                    if (*(aiStack_130 + iVar11) != 0) {
                                        uVar1 = uVar3 | uVar7;
                                    }
                                    sym.writel(uVar1,*puVar16);
                                    iVar11 = iVar11 + 4;
                                    puVar16 = puVar16 + 1;
                                } while (uVar2 * 4 - iVar11 != 0);
                            }
                            *(puVar9 + 300) = uVar6;
                        }
                    }
                }
                iVar5 = of_property_count_elems_of_size(*(arg1 + 0x300),"qcom,tlmm-pins",4);
                if ((0 < iVar5) &&
                   (iVar8 = of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,tlmm-pins",&uStack_b0,iVar5,0)
                   , -1 < iVar8)) {
                    *(puVar9 + 0x26) = 1;
                    *(puVar9 + 5) = uStack_b0;
                    if (((iVar5 != 1) &&
                        (((*(puVar9 + 0x2c) = uStack_b0._4_4_, iVar5 != 2 && (*(puVar9 + 6) = uStack_a8, iVar5 != 3))
                         && (*(puVar9 + 0x34) = uStack_a8._4_4_, iVar5 != 4)))) &&
                       ((((*(puVar9 + 7) = uStack_a0, iVar5 != 5 && (*(puVar9 + 0x3c) = uStack_a0._4_4_, iVar5 != 6))
                         && (*(puVar9 + 8) = uStack_98, iVar5 != 7)) &&
                        (((*(puVar9 + 0x44) = uStack_98._4_4_, iVar5 != 8 && (*(puVar9 + 9) = uStack_90, iVar5 != 9))
                         && (((*(puVar9 + 0x4c) = uStack_90._4_4_, iVar5 != 10 &&
                              ((((*(puVar9 + 10) = uStack_88, iVar5 != 0xb &&
                                 (*(puVar9 + 0x54) = uStack_88._4_4_, iVar5 != 0xc)) &&
                                (*(puVar9 + 0xb) = uStack_80, iVar5 != 0xd)) &&
                               ((*(puVar9 + 0x5c) = uStack_80._4_4_, iVar5 != 0xe &&
                                (*(puVar9 + 0xc) = uStack_78, iVar5 != 0xf)))))) &&
                             (*(puVar9 + 100) = uStack_78._4_4_, iVar5 != 0x10)))))))) {
code_r0x08003050:
    //WARNING: Does not return
                        pcVar4 = SoftwareBreakpoint(0x5512,0x8003054);
                        (*pcVar4)();
                    }
                    *(puVar9 + 0x25) = iVar5;
                }
                uVar14 = of_get_named_gpio_flags(*(arg1 + 0x300),"qcom,cdc-rst-n-gpio",0,0);
                *(puVar9 + 4) = uVar14;
                if (uVar14 < 0x200) {
                    iVar5 = gpio_request(uVar14,"MSM_CDC_RESET");
                    if (iVar5 != 0) {
                        _dev_err(iVar13,"%s: Failed to request gpio %d\n","msm_cdc_pinctrl_probe",puVar9[4]);
                        goto code_r0x08002fc8;
                    }
                }
                iVar5 = 0;
                *(arg1 + 0xa8) = puVar9;
                goto code_r0x08002fdc;
            }
            _dev_err(iVar13,"%s: Cannot get aud_sleep pinctrl state:%ld\n","msm_cdc_pinctrl_probe");
            iVar5 = puVar9[2];
        }
code_r0x08002fc8:
        devm_pinctrl_put(*puVar9);
    }
    devm_kfree(iVar13,puVar9);
code_r0x08002fdc:
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_70) {
        return iVar5;
    }
    iVar13 = __stack_chk_fail();
    *extraout_x18 = sym.msm_cdc_pinctrl_remove;
    piVar15 = *(iVar13 + 0xa8);
    if (piVar15 != NULL) {
        if (*(piVar15 + 4) < 0x200) {
            gpio_free();
        }
        if (*piVar15 != 0) {
            devm_pinctrl_put();
        }
    }
    devm_kfree(iVar13 + 0x10,piVar15);
    return 0;
}


// ===== sym.msm_cdc_pinctrl_remove @ 0x08003058 (size 96) =====

ulong sym.msm_cdc_pinctrl_remove(int64_t arg1)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = *(arg1 + 0xa8);
    if (piVar1 != NULL) {
        if (*(piVar1 + 4) < 0x200) {
            gpio_free();
        }
        if (*piVar1 != 0) {
            devm_pinctrl_put();
        }
    }
    devm_kfree(arg1 + 0x10,piVar1);
    return 0;
}


// ===== sym.msm_cdc_is_ondemand_supply @ 0x080030b8 (size 296) =====

ulong sym.msm_cdc_is_ondemand_supply(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong uVar2;
    int64_t in_x1;
    int64_t in_x4;
    ulong *in_x18;
    uint64_t uVar3;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    
    *in_x18 = unaff_x30;
    if ((in_x1 == 0) || (in_x4 == 0)) {
        uVar2 = ___ratelimit(obj.msm_cdc_is_ondemand_supply._rs,"msm_cdc_is_ondemand_supply");
        if (uVar2 == 0) {
            return uVar2;
        }
        _printk(0x800089f,"msm_cdc_is_ondemand_supply");
    }
    else if (arg1 == 0) {
        uVar2 = ___ratelimit(obj.msm_cdc_check_supply_param._rs,"msm_cdc_check_supply_param");
        if (uVar2 == 0) {
            return uVar2;
        }
        _printk(0x80008ec,"msm_cdc_check_supply_param");
    }
    else {
        uVar3 = arg3 & 0xffffffff;
        if ((arg2 == 0) || (arg3 < 1)) {
            uVar2 = ___ratelimit(obj.msm_cdc_check_supply_param._rs.38,"msm_cdc_check_supply_param");
            if (uVar2 == 0) {
                return uVar2;
            }
            _dev_err(arg1,"%s: supply check failed: vreg: %pK, num_supplies: %d\n","msm_cdc_check_supply_param",arg2
                     ,uVar3);
        }
        else {
            do {
                if ((*(arg2 + 0x14) != '\0') && (iVar1 = strcmp(noname_1,*arg2), noname_1 = extraout_q0, iVar1 == 0))
                {
                    return 1;
                }
                uVar3 = uVar3 - 1;
                arg2 = arg2 + 0x20;
            } while (uVar3 != 0);
        }
    }
    return 0;
}


// ===== sym.msm_cdc_set_supply_min_voltage @ 0x080031e0 (size 368) =====

ulong sym.msm_cdc_set_supply_min_voltage(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint uVar1;
    int iVar2;
    int64_t in_x4;
    uint in_w5;
    uint32_t in_w6;
    ulong *in_x18;
    uint *puVar3;
    uint64_t uVar4;
    ulong *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg2 == 0) || (in_x4 == 0)) {
        iVar2 = ___ratelimit(obj.msm_cdc_set_supply_min_voltage._rs,"msm_cdc_set_supply_min_voltage");
        if (iVar2 != 0) {
            _printk(0x800089f,"msm_cdc_set_supply_min_voltage");
            return 0xffffffea;
        }
    }
    else {
        if (arg1 == 0) {
            iVar2 = ___ratelimit(obj.msm_cdc_check_supply_param._rs,"msm_cdc_check_supply_param");
            if (iVar2 != 0) {
                _printk(0x80008ec,"msm_cdc_check_supply_param");
                return 0xffffffed;
            }
            return 0xffffffed;
        }
        uVar4 = arg4 & 0xffffffff;
        if ((arg3 != 0) && (0 < arg4)) {
            puVar3 = arg3 + 0xc;
            puVar5 = arg2 + 8;
            do {
                iVar2 = strcmp(*(puVar3 + -3));
                if (iVar2 == 0) {
                    if ((in_w6 & 1) == 0) {
                        in_w5 = puVar3[-1];
                        uVar1 = *puVar3;
                    }
                    else {
                        uVar1 = *puVar3;
                    }
                    regulator_set_voltage(*puVar5,in_w5,uVar1);
                    return 0;
                }
                puVar3 = puVar3 + 8;
                puVar5 = puVar5 + 3;
                uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
            return 0;
        }
        iVar2 = ___ratelimit(obj.msm_cdc_check_supply_param._rs.38,"msm_cdc_check_supply_param");
        if (iVar2 != 0) {
            _dev_err(arg1,"%s: supply check failed: vreg: %pK, num_supplies: %d\n","msm_cdc_check_supply_param",arg3
                     ,uVar4);
            return 0xffffffea;
        }
    }
    return 0xffffffea;
}


// ===== sym.msm_cdc_disable_ondemand_supply @ 0x08003350 (size 464) =====

int sym.msm_cdc_disable_ondemand_supply(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    int iVar2;
    int64_t in_x4;
    ulong *in_x18;
    uint64_t uVar3;
    ulong *puVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg2 == 0) || (in_x4 == 0)) {
        iVar1 = ___ratelimit(obj.msm_cdc_disable_ondemand_supply._rs,"msm_cdc_disable_ondemand_supply");
        if (iVar1 != 0) {
            _printk(0x800089f,"msm_cdc_disable_ondemand_supply");
        }
    }
    else {
        if (arg1 == 0) {
            iVar1 = ___ratelimit(obj.msm_cdc_check_supply_param._rs,"msm_cdc_check_supply_param");
            if (iVar1 == 0) {
                return -0x13;
            }
            _printk(0x80008ec,"msm_cdc_check_supply_param");
            return -0x13;
        }
        uVar3 = arg4 & 0xffffffff;
        if ((arg3 == 0) || (arg4 < 1)) {
            iVar1 = ___ratelimit(obj.msm_cdc_check_supply_param._rs.38,"msm_cdc_check_supply_param");
            if (iVar1 != 0) {
                _dev_err(arg1,"%s: supply check failed: vreg: %pK, num_supplies: %d\n","msm_cdc_check_supply_param",
                         arg3,uVar3);
            }
        }
        else {
            puVar4 = arg2 + 8;
            do {
                if ((*(arg3 + 0x14) != '\0') && (iVar1 = strcmp(*arg3), iVar1 == 0)) {
                    iVar1 = regulator_disable(*puVar4);
                    if ((iVar1 != 0) &&
                       (iVar2 = ___ratelimit(obj.msm_cdc_disable_ondemand_supply._rs.1,
                                             "msm_cdc_disable_ondemand_supply"), iVar2 != 0)) {
                        _dev_err(arg1,"%s: failed to disable supply %s, err:%d\n","msm_cdc_disable_ondemand_supply",
                                 puVar4[-1],iVar1);
                    }
                    if (uVar3 != 0) {
                        return iVar1;
                    }
                    break;
                }
                puVar4 = puVar4 + 3;
                uVar3 = uVar3 - 1;
                arg3 = arg3 + 0x20;
            } while (uVar3 != 0);
            iVar1 = ___ratelimit(obj.msm_cdc_disable_ondemand_supply._rs.3,"msm_cdc_disable_ondemand_supply");
            if (iVar1 != 0) {
                _dev_err(arg1,"%s: not able to find supply %s\n","msm_cdc_disable_ondemand_supply");
            }
        }
    }
    return -0x16;
}


// ===== sym.msm_cdc_enable_ondemand_supply @ 0x08003520 (size 464) =====

int sym.msm_cdc_enable_ondemand_supply(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    int iVar2;
    int64_t in_x4;
    ulong *in_x18;
    uint64_t uVar3;
    ulong *puVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg2 == 0) || (in_x4 == 0)) {
        iVar1 = ___ratelimit(obj.msm_cdc_enable_ondemand_supply._rs,"msm_cdc_enable_ondemand_supply");
        if (iVar1 != 0) {
            _printk(0x800089f,"msm_cdc_enable_ondemand_supply");
        }
    }
    else {
        if (arg1 == 0) {
            iVar1 = ___ratelimit(obj.msm_cdc_check_supply_param._rs,"msm_cdc_check_supply_param");
            if (iVar1 == 0) {
                return -0x13;
            }
            _printk(0x80008ec,"msm_cdc_check_supply_param");
            return -0x13;
        }
        uVar3 = arg4 & 0xffffffff;
        if ((arg3 == 0) || (arg4 < 1)) {
            iVar1 = ___ratelimit(obj.msm_cdc_check_supply_param._rs.38,"msm_cdc_check_supply_param");
            if (iVar1 != 0) {
                _dev_err(arg1,"%s: supply check failed: vreg: %pK, num_supplies: %d\n","msm_cdc_check_supply_param",
                         arg3,uVar3);
            }
        }
        else {
            puVar4 = arg2 + 8;
            do {
                if ((*(arg3 + 0x14) != '\0') && (iVar1 = strcmp(*arg3), iVar1 == 0)) {
                    iVar1 = regulator_enable(*puVar4);
                    if ((iVar1 != 0) &&
                       (iVar2 = ___ratelimit(obj.msm_cdc_enable_ondemand_supply._rs.5,"msm_cdc_enable_ondemand_supply")
                       , iVar2 != 0)) {
                        _dev_err(arg1,"%s: failed to enable supply %s, rc: %d\n","msm_cdc_enable_ondemand_supply",
                                 puVar4[-1],iVar1);
                    }
                    if (uVar3 != 0) {
                        return iVar1;
                    }
                    break;
                }
                puVar4 = puVar4 + 3;
                uVar3 = uVar3 - 1;
                arg3 = arg3 + 0x20;
            } while (uVar3 != 0);
            iVar1 = ___ratelimit(obj.msm_cdc_enable_ondemand_supply._rs.7,"msm_cdc_enable_ondemand_supply");
            if (iVar1 != 0) {
                _dev_err(arg1,"%s: not able to find supply %s\n","msm_cdc_enable_ondemand_supply");
            }
        }
    }
    return -0x16;
}


// ===== sym.msm_cdc_set_supplies_lpm_mode @ 0x080036f0 (size 456) =====

int sym.msm_cdc_set_supplies_lpm_mode(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    int iVar2;
    int iVar3;
    uint uVar4;
    uint64_t in_x4;
    ulong *in_x18;
    uint64_t uVar5;
    ulong *puVar6;
    uint *puVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 0) {
        iVar2 = ___ratelimit(obj.msm_cdc_set_supplies_lpm_mode._rs,"msm_cdc_set_supplies_lpm_mode");
        if (iVar2 != 0) {
            _printk(0x8000fd5,"msm_cdc_set_supplies_lpm_mode");
        }
    }
    else {
        if (arg1 == 0) {
            iVar2 = ___ratelimit(obj.msm_cdc_check_supply_param._rs,"msm_cdc_check_supply_param");
            if (iVar2 == 0) {
                return -0x13;
            }
            _printk(0x80008ec,"msm_cdc_check_supply_param");
            return -0x13;
        }
        uVar5 = arg4 & 0xffffffff;
        if ((arg3 != 0) && (0 < arg4)) {
            puVar7 = arg3 + 0x10;
            iVar2 = 0;
            uVar1 = 0x800104c;
            if ((in_x4 & 1) == 0) {
                uVar1 = 0x8000afa;
            }
            puVar6 = arg2 + 8;
            do {
                if (*(puVar7 + 5) != '\0') {
                    if ((in_x4 & 1) == 0) {
                        uVar4 = *puVar7;
                    }
                    else {
                        uVar4 = 0;
                    }
                    iVar2 = regulator_set_load(*puVar6,uVar4);
                    if ((iVar2 != 0) &&
                       (iVar3 = ___ratelimit(obj.msm_cdc_set_supplies_lpm_mode._rs.9,"msm_cdc_set_supplies_lpm_mode"),
                       iVar3 != 0)) {
                        _dev_err(arg1,"%s: failed to set supply %s to %s, err:%d\n","msm_cdc_set_supplies_lpm_mode",
                                 puVar6[-1],uVar1,iVar2);
                    }
                }
                uVar5 = uVar5 - 1;
                puVar6 = puVar6 + 3;
                puVar7 = puVar7 + 8;
            } while (uVar5 != 0);
            return iVar2;
        }
        iVar2 = ___ratelimit(obj.msm_cdc_check_supply_param._rs.38,"msm_cdc_check_supply_param");
        if (iVar2 != 0) {
            _dev_err(arg1,"%s: supply check failed: vreg: %pK, num_supplies: %d\n","msm_cdc_check_supply_param",arg3
                     ,uVar5);
        }
    }
    return -0x16;
}


// ===== sym.msm_cdc_disable_static_supplies @ 0x080038b8 (size 292) =====

int sym.msm_cdc_disable_static_supplies(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    ulong *in_x18;
    uint64_t uVar2;
    ulong *puVar3;
    char *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((arg1 == 0) || (arg2 == 0)) || (arg3 == 0)) {
        _printk(0x800089f,"msm_cdc_disable_static_supplies");
    }
    else {
        uVar2 = arg4 & 0xffffffff;
        if (0 < arg4) {
            pcVar4 = arg3 + 0x14;
            iVar1 = 0;
            puVar3 = arg2 + 8;
            do {
                if ((*pcVar4 == '\0') && (iVar1 = regulator_disable(*puVar3), iVar1 != 0)) {
                    _dev_err(arg1,"%s: failed to disable supply %s, err:%d\n","msm_cdc_disable_static_supplies",
                             puVar3[-1],iVar1);
                }
                uVar2 = uVar2 - 1;
                puVar3 = puVar3 + 3;
                pcVar4 = pcVar4 + 0x20;
            } while (uVar2 != 0);
            return iVar1;
        }
        iVar1 = ___ratelimit(obj.msm_cdc_check_supply_param._rs.38,"msm_cdc_check_supply_param");
        if (iVar1 != 0) {
            _dev_err(arg1,"%s: supply check failed: vreg: %pK, num_supplies: %d\n","msm_cdc_check_supply_param",arg3
                     ,uVar2);
        }
    }
    return -0x16;
}


// ===== sym.msm_cdc_release_supplies @ 0x080039dc (size 376) =====

ulong sym.msm_cdc_release_supplies(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    ulong *in_x18;
    uint *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    char *pcVar5;
    uint64_t uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((arg1 == 0) || (arg2 == 0)) || (arg3 == 0)) {
        _printk(0x800089f,"msm_cdc_release_supplies");
    }
    else {
        uVar4 = arg4 & 0xffffffff;
        if (0 < arg4) {
            puVar3 = arg2 + 8;
            pcVar5 = arg3 + 0x14;
            uVar6 = uVar4;
            do {
                if ((*pcVar5 == '\0') && (iVar1 = regulator_disable(*puVar3), iVar1 != 0)) {
                    _dev_err(arg1,"%s: failed to disable supply %s, err:%d\n","msm_cdc_disable_static_supplies",
                             puVar3[-1],iVar1);
                }
                uVar6 = uVar6 - 1;
                puVar3 = puVar3 + 3;
                pcVar5 = pcVar5 + 0x20;
            } while (uVar6 != 0);
            puVar2 = arg3 + 0xc;
            puVar3 = arg2 + 8;
            do {
                iVar1 = regulator_count_voltages(*puVar3);
                if (-1 < iVar1) {
                    regulator_set_voltage(*puVar3,0,*puVar2);
                    regulator_set_load(*puVar3,0);
                }
                uVar4 = uVar4 - 1;
                puVar2 = puVar2 + 8;
                puVar3 = puVar3 + 3;
            } while (uVar4 != 0);
            return 0;
        }
        iVar1 = ___ratelimit(obj.msm_cdc_check_supply_param._rs.38,"msm_cdc_check_supply_param");
        if (iVar1 != 0) {
            _dev_err(arg1,"%s: supply check failed: vreg: %pK, num_supplies: %d\n","msm_cdc_check_supply_param",arg3
                     ,uVar4);
        }
    }
    return 0xffffffea;
}


// ===== sym.msm_cdc_enable_static_supplies @ 0x08003b54 (size 352) =====

int sym.msm_cdc_enable_static_supplies(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *puVar1;
    int iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong *puVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((arg1 == 0) || (arg2 == 0)) || (arg3 == 0)) {
        _printk(0x800089f,"msm_cdc_enable_static_supplies");
    }
    else {
        if (0 < arg4) {
            iVar5 = 0;
            iVar3 = 0;
            do {
                if (*(arg3 + 0x14 + iVar3) == '\0') {
                    puVar1 = arg2 + iVar5;
                    iVar2 = regulator_enable(puVar1[1]);
                    if (iVar2 != 0) {
                        puVar4 = puVar1 + -2;
                        _dev_err(arg1,"%s: failed to enable supply %s, rc: %d\n","msm_cdc_enable_static_supplies",
                                 *puVar1,iVar2);
                        if (iVar5 == 0) {
                            return iVar2;
                        }
                        do {
                            if (*(arg3 + -0xc + iVar3) == '\0') {
                                regulator_disable(*puVar4);
                            }
                            puVar4 = puVar4 + -3;
                            iVar3 = iVar3 + -0x20;
                        } while (iVar3 != 0);
                        return iVar2;
                    }
                }
                iVar3 = iVar3 + 0x20;
                iVar5 = iVar5 + 0x18;
            } while ((arg4 & 0xffffffffU) * 0x18 - iVar5 != 0);
            return 0;
        }
        iVar2 = ___ratelimit(obj.msm_cdc_check_supply_param._rs.38,"msm_cdc_check_supply_param");
        if (iVar2 != 0) {
            _dev_err(arg1,"%s: supply check failed: vreg: %pK, num_supplies: %d\n","msm_cdc_check_supply_param",arg3
                     ,arg4 & 0xffffffffU);
        }
    }
    return -0x16;
}


// ===== sym.msm_cdc_init_supplies @ 0x08003cb4 (size 40) =====

void sym.msm_cdc_init_supplies(int64_t arg1,int64_t arg2,uchar noname_2 [16],int64_t arg3)

{
    int64_t in_x2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.msm_cdc_init_supplies_v2(arg1,arg2,in_x2,arg3);
    return;
}


// ===== sym.msm_cdc_init_supplies_v2 @ 0x08003cdc (size 548) =====

int sym.msm_cdc_init_supplies_v2(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    char *pcVar4;
    ulong uVar5;
    int in_w4;
    int64_t iVar6;
    int64_t *piVar7;
    ulong *in_x18;
    uint *puVar8;
    uint64_t uVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (arg3 == 0)) {
        _printk(0x8000f57,"msm_cdc_init_supplies_v2");
        iVar2 = -0x16;
    }
    else {
        uVar9 = arg4 & 0xffffffff;
        if (arg4 < 1) {
            iVar2 = ___ratelimit(obj.msm_cdc_check_supply_param._rs.38,"msm_cdc_check_supply_param");
            if (iVar2 == 0) {
                iVar2 = -0x16;
            }
            else {
                _dev_err(arg1,"%s: supply check failed: vreg: %pK, num_supplies: %d\n","msm_cdc_check_supply_param",
                         arg3,uVar9);
                iVar2 = -0x16;
            }
        }
        else {
            iVar3 = devm_kmalloc(arg1,uVar9 * 0x18,0xdc0);
            if (iVar3 == 0) {
                iVar2 = -0xc;
            }
            else {
                iVar6 = 0;
                piVar7 = arg3;
                do {
                    if (*piVar7 == 0) {
                        _dev_err(arg1,"%s: supply name not defined\n","msm_cdc_init_supplies_v2");
                        return -0x16;
                    }
                    *(iVar3 + iVar6) = *piVar7;
                    iVar6 = iVar6 + 0x18;
                    piVar7 = piVar7 + 4;
                } while (uVar9 * 0x18 - iVar6 != 0);
                iVar2 = devm_regulator_bulk_get(arg1,uVar9,iVar3);
                if (iVar2 == 0) {
                    iVar6 = 0;
                    puVar8 = arg3 + 0xc;
                    do {
                        iVar1 = iVar3 + iVar6;
                        iVar2 = regulator_count_voltages(*(iVar1 + 8));
                        if ((-1 < iVar2) && ((in_w4 == 0 || (*(puVar8 + 2) == '\0')))) {
                            iVar2 = regulator_set_voltage(*(iVar1 + 8),puVar8[-1],*puVar8);
                            if (iVar2 != 0) {
                                uVar5 = *(iVar3 + iVar6);
                                pcVar4 = "%s: set regulator voltage failed for %s, err:%d\n";
code_r0x08003ec4:
                                _dev_err(arg1,pcVar4,"msm_cdc_init_supplies_v2",uVar5,iVar2);
                                return iVar2;
                            }
                            iVar2 = regulator_set_load(*(iVar1 + 8),puVar8[1]);
                            if (iVar2 < 0) {
                                uVar5 = *(iVar3 + iVar6);
                                pcVar4 = "%s: set regulator optimum mode failed for %s, err:%d\n";
                                goto code_r0x08003ec4;
                            }
                        }
                        iVar6 = iVar6 + 0x18;
                        puVar8 = puVar8 + 8;
                    } while (uVar9 * 0x18 - iVar6 != 0);
                    iVar2 = 0;
                    *arg2 = iVar3;
                }
                else {
                    _dev_err(arg1,"%s: failed to get supplies (%d)\n","msm_cdc_init_supplies_v2",iVar2);
                }
            }
        }
    }
    return iVar2;
}


// ===== sym.msm_cdc_get_power_supplies @ 0x08003f00 (size 676) =====

uint64_t sym.msm_cdc_get_power_supplies(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    int64_t arg2_00;
    char *pcVar6;
    ulong *in_x18;
    uint64_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        iVar5 = ___ratelimit(obj.msm_cdc_get_power_supplies._rs,"msm_cdc_get_power_supplies");
        if (iVar5 != 0) {
            _printk(0x800084b,"msm_cdc_get_power_supplies");
            return 0xffffffea;
        }
code_r0x0800408c:
        uVar7 = 0xffffffea;
    }
    else {
        uVar2 = of_property_read_string_helper(*(arg1 + 0x2f0),"qcom,cdc-static-supplies",0,0,0);
        uVar7 = uVar2;
        if (uVar2 < 0) {
            iVar5 = ___ratelimit(obj.msm_cdc_get_power_supplies._rs.22,"msm_cdc_get_power_supplies");
            if (iVar5 == 0) {
                return uVar7;
            }
            pcVar6 = "%s: Failed to get static supplies(%d)\n";
        }
        else {
            uVar3 = of_property_read_string_helper(*(arg1 + 0x2f0),"qcom,cdc-on-demand-supplies",0,0,0);
            uVar3 = uVar3 & (uVar3 >> 0x1f ^ 0xffffffffU);
            uVar4 = of_property_read_string_helper(*(arg1 + 0x2f0),"qcom,cdc-cp-supplies",0,0,0);
            iVar5 = uVar3 + uVar2;
            uVar4 = uVar4 & (uVar4 >> 0x1f ^ 0xffffffffU);
            uVar1 = uVar4 + iVar5;
            if (uVar1 < 1) {
                iVar5 = ___ratelimit(obj.msm_cdc_get_power_supplies._rs.24,"msm_cdc_get_power_supplies");
                if (iVar5 != 0) {
                    _dev_err(arg1,"%s: supply count is 0 or negative\n","msm_cdc_get_power_supplies");
                    return 0xffffffea;
                }
                goto code_r0x0800408c;
            }
            arg2_00 = devm_kmalloc(arg1,uVar1 << 5,0xdc0);
            if (arg2_00 == 0) {
                return 0xfffffff4;
            }
            uVar2 = sym.msm_cdc_parse_supplies(arg1,arg2_00,0x8000acc,uVar2);
            if (uVar2 != 0) {
                uVar7 = uVar2;
                iVar5 = ___ratelimit(obj.msm_cdc_get_power_supplies._rs.26,"msm_cdc_get_power_supplies");
                if (iVar5 == 0) {
                    return uVar7;
                }
                _dev_err(arg1,"%s: failed to parse static supplies(%d)\n","msm_cdc_get_power_supplies",uVar7);
                return uVar7;
            }
            uVar2 = sym.msm_cdc_parse_supplies(arg1,arg2_00 + uVar7 * 0x20,0x8000d05,uVar3);
            if (uVar2 == 0) {
                uVar2 = sym.msm_cdc_parse_supplies(arg1,arg2_00 + iVar5 * 0x20,0x8000ae5,uVar4);
                uVar7 = uVar2;
                if (uVar2 == 0) {
                    *arg2 = arg2_00;
                    *arg3 = uVar1;
                    return 0;
                }
                iVar5 = ___ratelimit(obj.msm_cdc_get_power_supplies._rs.30,"msm_cdc_get_power_supplies");
                if (iVar5 == 0) {
                    return uVar7;
                }
                pcVar6 = "%s: failed to parse cp supplies(%d)\n";
            }
            else {
                uVar7 = uVar2;
                iVar5 = ___ratelimit(obj.msm_cdc_get_power_supplies._rs.28,"msm_cdc_get_power_supplies");
                if (iVar5 == 0) {
                    return uVar7;
                }
                pcVar6 = "%s: failed to parse demand supplies(%d)\n";
            }
        }
        _dev_err(arg1,pcVar6,"msm_cdc_get_power_supplies",uVar7);
    }
    return uVar7;
}


// ===== sym.msm_cdc_parse_supplies @ 0x080041a4 (size 752) =====

int sym.msm_cdc_parse_supplies(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    uint32_t uVar1;
    bool bVar2;
    int iVar3;
    int64_t iVar4;
    uint32_t *puVar5;
    ulong uVar6;
    char *pcVar7;
    char *pcVar8;
    uint8_t in_w4;
    char *pcVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar10;
    uint32_t *puVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    ulong uStack_a0;
    ulong uStack_98;
    char acStack_90 [40];
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_68 = *(iVar4 + 0x5e0);
    uStack_a0 = 0;
    pcVar8 = arg3;
    if (0 < arg4) {
        uVar10 = 0;
        puVar11 = arg2 + 0xc;
        do {
            iVar3 = of_property_read_string_helper(*(arg1 + 0x2f0),arg3,&uStack_a0,1,uVar10 & 0xffffffff);
            uVar6 = uStack_a0;
            if (iVar3 < 0) {
                pcVar8 = "msm_cdc_parse_supplies";
                _dev_err(arg1,"%s: read string %s[%d] error (%d)\n","msm_cdc_parse_supplies",arg3,
                         uVar10 & 0xffffffff,iVar3);
                goto code_r0x0800437c;
            }
            acStack_90[0x18] = '\0';
            acStack_90[0x19] = '\0';
            acStack_90[0x1a] = '\0';
            acStack_90[0x1b] = '\0';
            acStack_90[0x1c] = '\0';
            acStack_90[0x1d] = '\0';
            acStack_90[0x1e] = '\0';
            acStack_90[0x1f] = '\0';
            acStack_90[0x20] = '\0';
            acStack_90[0x21] = '\0';
            acStack_90[0x22] = '\0';
            acStack_90[0x23] = '\0';
            acStack_90[0x24] = '\0';
            acStack_90[0x25] = '\0';
            acStack_90[0x26] = '\0';
            acStack_90[0x27] = '\0';
            acStack_90[8] = '\0';
            acStack_90[9] = '\0';
            acStack_90[10] = '\0';
            acStack_90[0xb] = '\0';
            acStack_90[0xc] = '\0';
            acStack_90[0xd] = '\0';
            acStack_90[0xe] = '\0';
            acStack_90[0xf] = '\0';
            acStack_90[0x10] = '\0';
            acStack_90[0x11] = '\0';
            acStack_90[0x12] = '\0';
            acStack_90[0x13] = '\0';
            acStack_90[0x14] = '\0';
            acStack_90[0x15] = '\0';
            acStack_90[0x16] = '\0';
            acStack_90[0x17] = '\0';
            uStack_98 = 0;
            acStack_90[0] = '\0';
            acStack_90[1] = '\0';
            acStack_90[2] = '\0';
            acStack_90[3] = '\0';
            acStack_90[4] = '\0';
            acStack_90[5] = '\0';
            acStack_90[6] = '\0';
            acStack_90[7] = '\0';
            snprintf(acStack_90,0x28,"%s-supply",uStack_a0);
            iVar4 = of_parse_phandle(*(arg1 + 0x2f0),acStack_90,0);
            if (iVar4 == 0) {
                pcVar7 = "%s: Looking up %s property in node %s failed";
                pcVar8 = acStack_90;
                pcVar9 = *(*(arg1 + 0x2f0) + 0x10);
code_r0x08004434:
                _dev_err(arg1,pcVar7,"msm_cdc_dt_parse_vreg_info",pcVar8,pcVar9);
                iVar3 = -0x16;
code_r0x0800446c:
                pcVar8 = "msm_cdc_parse_supplies";
                _dev_err(arg1,"%s: parse %s vreg info failed (%d)\n","msm_cdc_parse_supplies",uStack_a0,iVar3);
                goto code_r0x0800437c;
            }
            *(puVar11 + -3) = uVar6;
            *(puVar11 + 2) = in_w4 & 1;
            snprintf(acStack_90,0x28,"qcom,%s-voltage",uVar6);
            puVar5 = of_get_property(*(arg1 + 0x2f0),acStack_90,&uStack_98 + 4);
            if ((puVar5 == NULL) || (uStack_98._4_4_ != 8)) {
                pcVar8 = 0x8000c0b;
                if (puVar5 != NULL) {
                    pcVar8 = "invalid format";
                }
                pcVar7 = "%s: %s %s property\n";
                pcVar9 = acStack_90;
                goto code_r0x08004434;
            }
            uVar1 = (*puVar5 & 0xff00ff00) >> 8 | (*puVar5 & 0xff00ff) << 8;
            puVar11[-1] = uVar1 >> 0x10 | uVar1 << 0x10;
            uVar1 = (puVar5[1] & 0xff00ff00) >> 8 | (puVar5[1] & 0xff00ff) << 8;
            *puVar11 = uVar1 >> 0x10 | uVar1 << 0x10;
            snprintf(acStack_90,0x28,"qcom,%s-current",uVar6);
            iVar3 = of_property_read_variable_u32_array(*(arg1 + 0x2f0),acStack_90,&uStack_98,1,0);
            if (iVar3 < 0) {
                _dev_err(arg1,"%s: Looking up %s property in node %s failed","msm_cdc_dt_parse_vreg_info",acStack_90
                         ,*(*(arg1 + 0x2f0) + 0x10));
                goto code_r0x0800446c;
            }
            puVar11[1] = uStack_98;
            snprintf(acStack_90,0x28,"qcom,%s-lpm-supported",uVar6);
            iVar3 = of_property_read_variable_u32_array(*(arg1 + 0x2f0),acStack_90,&uStack_98,1,0);
            bVar2 = -1 < iVar3 && uStack_98 != 0;
            pcVar8 = "msm_cdc_dt_parse_vreg_info";
            *(puVar11 + 9) = bVar2;
            _dev_info(arg1,"%s: %s: vol=[%d %d]uV, curr=[%d]uA, ond %d lpm %d\n","msm_cdc_dt_parse_vreg_info",
                      *(puVar11 + -3),puVar11[-1],*puVar11,puVar11[1],puVar11[2],bVar2);
            uVar10 = uVar10 + 1;
            puVar11 = puVar11 + 8;
        } while (arg4 != uVar10);
    }
    iVar3 = 0;
code_r0x0800437c:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_68) {
        return iVar3;
    }
    auVar12 = __stack_chk_fail();
    *extraout_x18 = sym.msm_cdc_init_wcd_supply;
    iVar3 = -0x16;
    if ((auVar12._0_8_ != 0) && (pcVar8 != NULL)) {
        iVar4 = of_find_device_by_node(auVar12._0_8_);
        if (iVar4 == 0) {
            iVar3 = -0x16;
        }
        else {
            *pcVar8 = auVar12._8_8_;
            *(pcVar8 + 8) = iVar4 + 0x10;
            uVar6 = snd_soc_lookup_component(iVar4 + 0x10,0);
            iVar3 = 0;
            *(pcVar8 + 0x10) = uVar6;
        }
    }
    return iVar3;
}


// ===== sym.msm_cdc_init_wcd_supply @ 0x08004494 (size 112) =====

ulong sym.msm_cdc_init_wcd_supply(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = 0xffffffea;
    if ((arg1 != 0) && (arg3 != 0)) {
        iVar2 = of_find_device_by_node(arg1);
        if (iVar2 == 0) {
            uVar1 = 0xffffffea;
        }
        else {
            *arg3 = arg2;
            *(arg3 + 8) = iVar2 + 0x10;
            uVar3 = snd_soc_lookup_component(iVar2 + 0x10,0);
            uVar1 = 0;
            *(arg3 + 0x10) = uVar3;
        }
    }
    return uVar1;
}


// ===== sym.msm_cdc_enable_wcd_supply @ 0x08004504 (size 264) =====

int sym.msm_cdc_enable_wcd_supply(int64_t arg1,int64_t arg2)

{
    char *pcVar1;
    int iVar2;
    int iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0x10);
    if (iVar4 == 0) {
        iVar2 = ___ratelimit(obj.msm_cdc_enable_wcd_supply._rs,"msm_cdc_enable_wcd_supply");
        if (iVar2 == 0) {
            iVar2 = -0x16;
        }
        else {
            _printk(0x8000b9b,"msm_cdc_enable_wcd_supply");
            iVar2 = -0x16;
        }
    }
    else {
        if ((arg2 & 1U) == 0) {
            iVar2 = snd_soc_dapm_disable_pin(iVar4 + 0xd0,*arg1);
        }
        else {
            iVar2 = snd_soc_dapm_force_enable_pin();
        }
        if (iVar2 == 0) {
            snd_soc_dapm_sync(iVar4 + 0xd0);
        }
        else {
            iVar3 = ___ratelimit(obj.msm_cdc_enable_wcd_supply._rs.33,"msm_cdc_enable_wcd_supply");
            if (iVar3 != 0) {
                pcVar1 = "enable";
                if ((arg2 & 1U) == 0) {
                    pcVar1 = "disable";
                }
                _dev_err(*(iVar4 + 0x18),"%s: micbias %s force %s pin failed\n","msm_cdc_enable_wcd_supply",*arg1,
                         pcVar1);
            }
        }
    }
    return iVar2;
}


// ===== sym.wcd_request_irq @ 0x0800460c (size 128) =====

ulong sym.wcd_request_irq(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x8000e06,"wcd_request_irq");
        uVar1 = 0xffffffea;
    }
    else {
        uVar1 = regmap_irq_get_virq(*(arg1 + 0x18));
        if (-1 < uVar1) {
            uVar1 = request_threaded_irq(uVar1,0,arg3,0x2001,arg2);
        }
    }
    return uVar1;
}


// ===== sym.wcd_free_irq @ 0x0800468c (size 92) =====

void sym.wcd_free_irq(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x8000e06,"wcd_free_irq");
    }
    else {
        uVar1 = regmap_irq_get_virq(*(arg1 + 0x18));
        if (-1 < uVar1) {
            free_irq(uVar1,arg2);
        }
    }
    return;
}


// ===== sym.wcd_enable_irq @ 0x080046e8 (size 72) =====

void sym.wcd_enable_irq(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x8000e06,"wcd_enable_irq");
    }
    else {
        regmap_irq_get_virq(*(arg1 + 0x18));
        enable_irq();
    }
    return;
}


// ===== sym.wcd_disable_irq @ 0x08004730 (size 72) =====

void sym.wcd_disable_irq(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x8000e06,"wcd_disable_irq");
    }
    else {
        regmap_irq_get_virq(*(arg1 + 0x18));
        disable_irq_nosync();
    }
    return;
}


// ===== sym.wcd_irq_init @ 0x08004778 (size 248) =====

int sym.wcd_irq_init(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong uVar4;
    ulong uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        uVar4 = 0x8000e06;
    }
    else {
        _segment.ehdr = *(arg1 + 8);
        iVar3 = __irq_domain_add(0,1,1,0,obj.wcd_domain_ops,0);
        *arg2 = iVar3;
        if (iVar3 != 0) {
            uVar4 = *(arg1 + 0x20);
            uVar5 = *(arg1 + 0x10);
            uVar1 = irq_create_mapping_affinity(iVar3,0,0);
            iVar2 = devm_regmap_add_irq_chip(uVar4,uVar5,uVar1,0x2000,0,*arg1,arg1 + 0x18);
            if (iVar2 == 0) {
                return 0;
            }
            _printk(0x8001006,"wcd_irq_init",iVar2);
            return iVar2;
        }
        uVar4 = 0x8000cca;
    }
    _printk(uVar4,"wcd_irq_init");
    return -0x16;
}


// ===== sym.wcd_irq_exit @ 0x08004870 (size 172) =====

void sym.wcd_irq_exit(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong uVar3;
    ulong unaff_x30;
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    if (arg1 == 0) {
        _printk(0x8000cea,"wcd_irq_exit");
        uVar3 = 0xffffffea;
    }
    else {
        uVar3 = *(arg1 + 0x20);
        uStack_2c = 0;
        iVar2 = __irq_resolve_mapping(arg2,0,&uStack_2c);
        uVar1 = 0;
        if (iVar2 != 0) {
            uVar1 = uStack_2c;
        }
        devm_regmap_del_irq_chip(uVar3,uVar1,*(arg1 + 0x18));
        uVar3 = 0;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return;
    }
    __stack_chk_fail(uVar3);
    return;
}


// ===== sym.wcd_irq_chip_enable @ 0x0800491c (size 12) =====

void sym.wcd_irq_chip_enable(void)

{
    return;
}


// ===== sym.wcd_irq_chip_disable @ 0x08004928 (size 12) =====

void sym.wcd_irq_chip_disable(void)

{
    return;
}


// ===== sym.wcd_irq_chip_map @ 0x08004934 (size 108) =====

ulong sym.wcd_irq_chip_map(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    uint64_t uVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = arg1 & 0xffffffff;
    irq_set_chip_and_handler_name(uVar1,obj.wcd_irq_chip,sym.handle_simple_irq.cfi_jt,0);
    irq_modify_status(uVar1,0,0x8000);
    irq_modify_status(uVar1,0,0x400);
    return 0;
}


// ===== sym.init_module @ 0x080049a4 (size 100) =====

int sym.init_module(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = __platform_driver_register
                      (reloc.msm_cdc_pinctrl_probe.4ddd1c312763c93ea939a86987b9c24d.cfi_jt,obj.__this_module);
    if (iVar1 != 0) {
        _printk(0x8001201,"wcd9xxx_core_init",iVar1);
    }
    return iVar1;
}


// ===== sym.cleanup_module @ 0x08004a08 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.msm_cdc_pinctrl_probe.4ddd1c312763c93ea939a86987b9c24d.cfi_jt);
    return;
}

