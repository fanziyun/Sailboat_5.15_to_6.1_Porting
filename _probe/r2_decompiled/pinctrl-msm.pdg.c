// decompiled from pinctrl-msm by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 1744) =====

//WARNING: Switch with 1 destination removed at 0x08005644

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x266bc786d100c37) {
        if (arg1 < -0x3557318fb8d07b71) {
            if (arg1 < -0x587ffabaca612230) {
                if (arg1 < -0x68e06357d3edcb86) {
                    if (arg1 == -0x77b69042ae34e22a) {
                        pcVar2 = sym.msm_gpio_dbg_show.ed672156799e8aae44ccfb4ca27872b0.cfi_jt;
                    }
                    else {
                        if (arg1 != -0x77a0775a4580c3cb) goto code_r0x08005604;
                        pcVar2 = sym.gpiochip_generic_free.cfi_jt;
                    }
                }
                else {
                    if (arg1 == -0x68e06357d3edcb86) {
                        if ((pcVar1 + -0x8001858 >> 3 | pcVar1 << 0x3d) < 6) {
                            return;
                        }
                        goto code_r0x08005604;
                    }
                    if (arg1 != -0x60cb512353a42fef) goto code_r0x08005604;
                    pcVar2 = sym.msm_gpio_irq_set_vcpu_affinity.ed672156799e8aae44ccfb4ca27872b0.cfi_jt;
                }
            }
            else if (arg1 < -0x53c887a672ae5243) {
                if (arg1 != -0x587ffabaca612230) {
                    if (arg1 != -0x57be845bca9148ef) goto code_r0x08005604;
                    pcVar2 = sym.msm_pinctrl_suspend.ed672156799e8aae44ccfb4ca27872b0.cfi_jt;
                    goto code_r0x08001668;
                }
                pcVar2 = sym.msm_gpio_set.ed672156799e8aae44ccfb4ca27872b0.cfi_jt;
            }
            else if (arg1 == -0x53c887a672ae5243) {
                pcVar2 = sym.msm_qup_read.cfi_jt;
            }
            else if (arg1 == -0x52854d4eeca6205f) {
                pcVar2 = sym.msm_spare_write.cfi_jt;
            }
            else {
                if (arg1 != -0x4cb00eb12b4d5ca5) goto code_r0x08005604;
                pcVar2 = sym.msm_gpio_irq_reqres.ed672156799e8aae44ccfb4ca27872b0.cfi_jt;
            }
        }
        else if (arg1 < -0x1cb09a6eed38ba56) {
            if (arg1 < -0x315ce073b0edafc3) {
                if (arg1 == -0x3557318fb8d07b71) {
                    pcVar2 = sym.msm_pinctrl_remove.cfi_jt;
                }
                else {
                    if (arg1 != -0x34c48c0359fcc4fb) goto code_r0x08005604;
                    pcVar2 = sym.msm_gpio_init_valid_mask.ed672156799e8aae44ccfb4ca27872b0.cfi_jt;
                }
            }
            else if (arg1 == -0x315ce073b0edafc3) {
                pcVar2 = sym.msm_qup_write.cfi_jt;
            }
            else {
                if (arg1 != -0x1cd02ce2833ba7b2) goto code_r0x08005604;
                pcVar2 = sym.msm_config_group_get.ed672156799e8aae44ccfb4ca27872b0.cfi_jt;
            }
        }
        else if (arg1 < -0x14a8e51db18cc4d) {
            if (arg1 == -0x1cb09a6eed38ba56) {
                pcVar2 = sym.msm_get_functions_count.ed672156799e8aae44ccfb4ca27872b0.cfi_jt;
                goto code_r0x08001668;
            }
            if (arg1 != -0x180cff1a9f8f2532) goto code_r0x08005604;
            pcVar2 = sym.msm_get_group_pins.ed672156799e8aae44ccfb4ca27872b0.cfi_jt;
        }
        else if (arg1 == -0x14a8e51db18cc4d) {
            pcVar2 = sym.msm_pinmux_request.ed672156799e8aae44ccfb4ca27872b0.cfi_jt;
        }
        else if (arg1 == 0xf0e53c515545f2) {
            pcVar2 = sym.msm_config_group_set.ed672156799e8aae44ccfb4ca27872b0.cfi_jt;
        }
        else {
            if (arg1 != 0x15d75c9cb8be166) goto code_r0x08005604;
            pcVar2 = sym.msm_get_function_groups.ed672156799e8aae44ccfb4ca27872b0.cfi_jt;
        }
    }
    else if (arg1 < 0x47ce015a85343a42) {
        if (arg1 < 0x61045947d4ad58f) {
            if (arg1 < 0x3236203519f56f4) {
                if (arg1 == 0x266bc786d100c37) {
                    pcVar2 = sym.msm_gpio_wakeirq.ed672156799e8aae44ccfb4ca27872b0.cfi_jt;
                }
                else {
                    if (arg1 != 0x2b3a43e29242445) goto code_r0x08005604;
                    pcVar2 = sym.msm_pinctrl_hibernation_suspend.ed672156799e8aae44ccfb4ca27872b0.cfi_jt;
                }
            }
            else {
                if (arg1 != 0x3236203519f56f4) {
                    if ((arg1 == 0x3b314f7e6c3546b) && ((pcVar1 + -0x80017a0 >> 3 | pcVar1 << 0x3d) < 4)) {
                        return;
                    }
                    goto code_r0x08005604;
                }
                pcVar2 = sym.msm_gpio_mpm_wake_set.cfi_jt;
            }
        }
        else if (arg1 < 0x365d4a3aad0aad08) {
            if (arg1 != 0x61045947d4ad58f) {
                if ((arg1 == 0x12432ee19d152236) && ((pcVar1 + -0x80017d0 >> 3 | pcVar1 << 0x3d) < 7)) {
                    return;
                }
                goto code_r0x08005604;
            }
            pcVar2 = sym.msm_pinctrl_probe.cfi_jt;
        }
        else if (arg1 == 0x365d4a3aad0aad08) {
            pcVar2 = sym.msm_gpio_direction_output.ed672156799e8aae44ccfb4ca27872b0.cfi_jt;
        }
        else if (arg1 == 0x377e9528983fbb7e) {
            pcVar2 = sym.pinctrl_utils_free_map.cfi_jt;
        }
        else {
            if (arg1 != 0x3a5b8105ef6fba43) goto code_r0x08005604;
            pcVar2 = sym.pinconf_generic_dt_node_to_map_group.ed672156799e8aae44ccfb4ca27872b0.cfi_jt;
        }
    }
    else {
        if (0x566cdc1d6ec224d8 < arg1) {
            if (arg1 < 0x7d57972cd3914fb1) {
                if (arg1 != 0x566cdc1d6ec224d9) {
                    if (arg1 != 0x59900d2c5a310a08) goto code_r0x08005604;
                    pcVar2 = sym.msm_pinmux_set_mux.ed672156799e8aae44ccfb4ca27872b0.cfi_jt;
                    goto code_r0x080016c0;
                }
                pcVar2 = sym.msm_gpio_irq_set_type.ed672156799e8aae44ccfb4ca27872b0.cfi_jt;
            }
            else if (arg1 == 0x7d57972cd3914fb1) {
                pcVar2 = sym.msm_ps_hold_restart.ed672156799e8aae44ccfb4ca27872b0.cfi_jt;
            }
            else {
                if (arg1 != 0x7e04a0fb7ad8bcd5) {
                    if (arg1 != 0x7ee7e57e27669cb4) goto code_r0x08005604;
                    pcVar2 = sym.msm_pinmux_request_gpio.ed672156799e8aae44ccfb4ca27872b0.cfi_jt;
                    goto code_r0x080016c0;
                }
                pcVar2 = sym.msm_ps_hold_poweroff.ed672156799e8aae44ccfb4ca27872b0.cfi_jt;
            }
code_r0x08001668:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08005604;
        }
        if (arg1 < 0x4e17b8192f3ba4d5) {
            if (arg1 != 0x47ce015a85343a42) {
                if (arg1 != 0x4bc94621579436b9) goto code_r0x08005604;
                pcVar2 = sym.msm_get_function_name.ed672156799e8aae44ccfb4ca27872b0.cfi_jt;
                goto code_r0x08001668;
            }
            pcVar2 = sym.msm_spare_read.cfi_jt;
        }
        else if (arg1 == 0x4e17b8192f3ba4d5) {
            pcVar2 = sym.msm_gpio_irq_set_affinity.ed672156799e8aae44ccfb4ca27872b0.cfi_jt;
        }
        else {
            if (arg1 != 0x55b4441a95471405) goto code_r0x08005604;
            pcVar2 = sym.msm_gpio_get_pin_address.cfi_jt;
        }
    }
code_r0x080016c0:
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08005604:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8005658);
    (*pcVar1)();
}


// ===== sym.msm_gpio_dbg_show.ed672156799e8aae44ccfb4ca27872b0.cfi_jt @ 0x080016d8 (size 8) =====

void sym.msm_gpio_dbg_show.ed672156799e8aae44ccfb4ca27872b0.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *puVar1;
    uint32_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    char *pcVar5;
    code *pcVar6;
    bool bVar7;
    int64_t iVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    ulong *in_x18;
    uint64_t uVar12;
    int64_t iVar13;
    uint32_t uVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_2 + 0x94) != 0) {
        iVar13 = 0;
        uVar12 = 0;
        do {
            iVar8 = gpiochip_get_data(param_2);
            uVar9 = gpiochip_line_is_valid(param_2,uVar12 & 0xffffffff);
            if ((uVar9 & 1) != 0) {
                puVar1 = *(*(iVar8 + 0x4c0) + 0x20) + iVar13;
                uVar9 = sym.readl(*(iVar8 + 0x4c8 + (puVar1[7] >> 5 & 3) * 8) + *(puVar1 + 0x24));
                uVar10 = sym.readl(*(iVar8 + 0x4c8 + (puVar1[7] >> 5 & 3) * 8) + *(puVar1 + 5));
                uVar11 = puVar1[7];
                uVar14 = uVar9;
                bVar7 = (1L << (uVar11 >> 0x25 & 0x1f) & uVar9 & 0xffffffff) != 0;
                iVar3 = 0x2a;
                if (bVar7) {
                    iVar3 = 0x2f;
                }
                uVar2 = uVar14 >> (uVar11 >> 0xc & 0x1f) & 3;
                uVar4 = 0x80006bf;
                if (bVar7) {
                    uVar4 = 0x80003bb;
                }
                seq_printf(param_1," %-8s: %-3s",*puVar1,uVar4);
                pcVar5 = 0x80004cb;
                if (((uVar10 & 0xffffffff) >> (uVar11 >> iVar3 & 0x1f) & 1) != 0) {
                    pcVar5 = "high";
                }
                seq_printf(param_1," %-4s func%d",pcVar5,uVar14 >> (uVar11 >> 7 & 0x1f) & 7);
                seq_printf(param_1," %dmA",(uVar14 >> (uVar11 >> 0x11 & 0x1f) & 7) * 2 + 2);
                if (*(*(iVar8 + 0x4c0) + 0x30) == '\0') {
                    iVar8 = -0x20;
                    pcVar6 = obj.msm_gpio_dbg_show_one.pulls_keeper;
                }
                else {
                    if (uVar2 == 3) {
    //WARNING: Does not return
                        pcVar6 = SoftwareBreakpoint(0x5512,0x8002a78);
                        (*pcVar6)();
                    }
                    iVar8 = -0x18;
                    pcVar6 = obj.msm_gpio_dbg_show_one.pulls_no_keeper;
                }
                if (iVar8 + uVar2 * 8 == 0) {
    //WARNING: Does not return
                    pcVar6 = SoftwareBreakpoint(1,0x8002a74);
                    (*pcVar6)();
                }
                seq_printf(param_1,0x80003f3,*(pcVar6 + uVar2 * 8));
                seq_puts(param_1,0x8000619);
            }
            uVar12 = uVar12 + 1;
            iVar13 = iVar13 + 0x50;
        } while (uVar12 < *(param_2 + 0x94));
    }
    return;
}


// ===== sym.msm_gpio_mpm_wake_set.cfi_jt @ 0x080016e0 (size 8) =====

ulong sym.msm_gpio_mpm_wake_set.cfi_jt(uint64_t param_1,uint64_t param_2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    ulong uVar3;
    uint32_t uVar4;
    ulong *in_x18;
    uint32_t *puVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(*(_segment.ehdr + 0x4c0) + 0x20);
    puVar5 = iVar6 + (param_1 & 0xffffffff) * 0x50 + 0x48;
    if (*puVar5 == 0xffffffff) {
        uVar3 = 0xfffffffe;
    }
    else {
        uVar3 = _raw_spin_lock_irqsave(_segment.ehdr + 0x418);
        iVar6 = iVar6 + (param_1 & 0xffffffff) * 0x50;
        uVar2 = sym.readl_relaxed(*(_segment.ehdr + (*(iVar6 + 0x38) >> 5 & 3) * 8 + 0x4c8) + *(iVar6 + 0x44));
        uVar4 = 1L << (*puVar5 & 0x3f);
        uVar1 = uVar2 | uVar4;
        if ((param_2 & 1) == 0) {
            uVar1 = uVar2 & (uVar4 ^ 0xffffffff);
        }
        sym.writel_relaxed(uVar1,*(_segment.ehdr + (*(iVar6 + 0x38) >> 5 & 3) * 8 + 0x4c8) + *(iVar6 + 0x44));
        _raw_spin_unlock_irqrestore(_segment.ehdr + 0x418,uVar3);
        uVar3 = 0;
    }
    return uVar3;
}


// ===== sym.msm_pinctrl_probe.cfi_jt @ 0x080016e8 (size 8) =====

uint64_t sym.msm_pinctrl_probe.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t *piVar1;
    code *pcVar2;
    int iVar3;
    int iVar4;
    int64_t *arg1;
    ulong uVar5;
    uint64_t uVar6;
    ulong *puVar7;
    ulong *in_x18;
    int iVar8;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = param_1 + 0x10;
    arg1 = devm_kmalloc(piVar1,0x510,0xdc0);
    if (arg1 == NULL) {
        _segment.ehdr = arg1;
        return 0xfffffff4;
    }
    _segment.ehdr = arg1;
    *(arg1 + 0xa1) = 0;
    *arg1 = piVar1;
    arg1[0x98] = param_2;
    memcpy(arg1 + 2,obj.msm_gpio_template,0x270);
    iVar3 = of_device_is_compatible(*(param_1 + 0x300),"qcom,ipq8064-pinctrl");
    puVar7 = *(param_2 + 0x38);
    *(arg1 + 0x83) = 0;
    *(arg1 + 0x414) = iVar3 != 0;
    if (puVar7 == NULL) {
        puVar7 = platform_get_resource(param_1,0x200,0);
        if (puVar7 == NULL) {
            return 0xfffffffe;
        }
        uVar6 = devm_ioremap_resource(piVar1,puVar7);
        arg1[0x99] = uVar6;
        if (0xfffffffffffff000 < uVar6) {
            return uVar6;
        }
        *(arg1 + 0x9d) = *puVar7;
    }
    else if (*(param_2 + 0x40) != 0) {
        uVar5 = platform_get_resource_byname(param_1,0x200,*puVar7);
        uVar6 = devm_ioremap_resource(piVar1,uVar5);
        arg1[0x99] = uVar6;
        if (0xfffffffffffff000 < uVar6) {
            return uVar6;
        }
        if (1 < *(param_2 + 0x40)) {
            uVar5 = platform_get_resource_byname(param_1,0x200,*(*(param_2 + 0x38) + 8));
            uVar6 = devm_ioremap_resource(piVar1,uVar5);
            arg1[0x9a] = uVar6;
            if (0xfffffffffffff000 < uVar6) {
                return uVar6;
            }
            if (2 < *(param_2 + 0x40)) {
                uVar5 = platform_get_resource_byname(param_1,0x200,*(*(param_2 + 0x38) + 0x10));
                uVar6 = devm_ioremap_resource(piVar1,uVar5);
                arg1[0x9b] = uVar6;
                if (0xfffffffffffff000 < uVar6) {
                    return uVar6;
                }
                if (3 < *(param_2 + 0x40)) {
                    uVar5 = platform_get_resource_byname(param_1,0x200,*(*(param_2 + 0x38) + 0x18));
                    uVar6 = devm_ioremap_resource(piVar1,uVar5);
                    arg1[0x9c] = uVar6;
                    if (0xfffffffffffff000 < uVar6) {
                        return uVar6;
                    }
                    if (4 < *(param_2 + 0x40)) {
                        uVar5 = platform_get_resource_byname(param_1,0x200,*(*(param_2 + 0x38) + 0x20));
                        devm_ioremap_resource(piVar1,uVar5);
    //WARNING: Does not return
                        pcVar2 = SoftwareBreakpoint(0x5512,0x8001f38);
                        (*pcVar2)();
                    }
                }
            }
        }
    }
    iVar3 = *(arg1[0x98] + 0x18);
    if (iVar3 != 0) {
        iVar9 = *(arg1[0x98] + 0x10);
        iVar8 = 0;
        do {
            iVar4 = strcmp(*(iVar9 + iVar8 * 0x18),"ps_hold");
            if (iVar4 == 0) {
                arg1[0x5b] = sym.msm_ps_hold_restart.ed672156799e8aae44ccfb4ca27872b0.cfi_jt;
                *(arg1 + 0x5d) = 0x80;
                iVar3 = register_restart_handler(arg1 + 0x5b);
                if (iVar3 != 0) {
                    _dev_err(*arg1,"failed to setup restart handler.\n");
                }
                _gpiochip_generic_free = sym.msm_ps_hold_poweroff.ed672156799e8aae44ccfb4ca27872b0.cfi_jt;
                _segment.ehdr = arg1;
                break;
            }
            iVar8 = iVar8 + 1;
        } while (iVar3 != iVar8);
    }
    uVar6 = platform_get_irq(param_1,0);
    *(arg1 + 0x82) = uVar6;
    if (-1 < uVar6) {
        arg1[0x56] = obj.__this_module;
        arg1[0x54] = reloc.msm_pinmux_request.ed672156799e8aae44ccfb4ca27872b0.cfi_jt;
        arg1[0x53] = reloc.msm_get_groups_count.ed672156799e8aae44ccfb4ca27872b0.cfi_jt;
        iVar9 = *(param_1 + 0x80);
        arg1[0x55] = obj.msm_pinconf_ops;
        if (iVar9 == 0) {
            iVar9 = *piVar1;
        }
        arg1[0x50] = iVar9;
        arg1[0x51] = *arg1[0x98];
        iVar9 = arg1[0x98][1];
        *(arg1 + 0x57) = 3;
        *(arg1 + 0x52) = iVar9;
        arg1[0x58] = obj.msm_gpio_bindings;
        uVar6 = devm_pinctrl_register(piVar1,arg1 + 0x50,arg1);
        arg1[1] = uVar6;
        if (uVar6 < 0xfffffffffffff001) {
            uVar6 = sym.msm_gpio_init(arg1);
            if (uVar6 == 0) {
                *(param_1 + 0xa8) = arg1;
                register_syscore_ops(obj.msm_pinctrl_data);
                uVar6 = register_pm_notifier(reloc.pinctrl_hibernation_notifier.ed672156799e8aae44ccfb4ca27872b0.cfi_jt)
                ;
            }
        }
        else {
            _dev_err(piVar1,"Couldn\'t register pinctrl driver\n");
            uVar6 = *(arg1 + 1);
        }
    }
    return uVar6;
}


// ===== sym.msm_gpio_wakeirq.ed672156799e8aae44ccfb4ca27872b0.cfi_jt @ 0x080016f0 (size 8) =====

ulong sym.msm_gpio_wakeirq.ed672156799e8aae44ccfb4ca27872b0.cfi_jt
                (ulong param_1,int param_2,ulong param_3,uint *param_4,uint *param_5)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = gpiochip_get_data();
    *param_4 = 0xffffffff;
    *param_5 = 1;
    uVar2 = *(*(iVar3 + 0x4c0) + 0x58);
    if (uVar2 != 0) {
        iVar3 = *(*(iVar3 + 0x4c0) + 0x50);
        uVar4 = 0;
        do {
            if (*(iVar3 + (-(uVar4 >> 0x1f) & 0xfffffff800000000 | uVar4 << 3)) == param_2) {
                *param_4 = *(iVar3 + uVar4 * 8 + 4);
                return 0;
            }
            uVar1 = uVar4 + 1;
            uVar4 = uVar1;
        } while (uVar2 != uVar1);
    }
    return 0;
}


// ===== sym.gpiochip_generic_free.cfi_jt @ 0x080016f8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.gpiochip_generic_free.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.msm_gpio_get_pin_address.cfi_jt @ 0x08001700 (size 8) =====

ulong sym.msm_gpio_get_pin_address.cfi_jt(int param_1,int64_t *param_2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    ulong uVar4;
    int64_t iVar5;
    int64_t *piVar6;
    int64_t iVar7;
    ulong *in_x18;
    int64_t iVar8;
    uint64_t uVar9;
    int64_t iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == NULL) {
        _printk(0x800064e);
        uVar4 = 0;
    }
    else {
        iVar8 = *_segment.ehdr;
        uVar9 = param_1 - _segment.ehdr[0x14];
        uVar3 = gpiochip_line_is_valid(_segment.ehdr + 2,uVar9);
        uVar4 = 0;
        if ((param_2 != NULL) && ((uVar3 & 1) != 0)) {
            iVar5 = iVar8 + -0x10;
            iVar7 = *(_segment.ehdr[0x98] + 0x38);
            iVar10 = *(_segment.ehdr[0x98] + 0x20);
            if (iVar7 == 0) {
                piVar6 = platform_get_resource(iVar5,0x200,0);
            }
            else {
                piVar6 = platform_get_resource_byname
                                   (iVar5,0x200,*(iVar7 + (*(iVar10 + uVar9 * 0x50 + 0x38) >> 5 & 3) * 8));
            }
            if (piVar6 == NULL) {
                _dev_err(iVar8,"failed to get resource\n");
                uVar4 = 0;
            }
            else {
                uVar4 = 1;
                iVar10 = iVar10 + uVar9 * 0x50;
                iVar8 = *piVar6 + *(iVar10 + 0x24);
                *param_2 = iVar8;
                uVar1 = *(iVar10 + 0x38) & 0x1f;
                uVar2 = 0x1000;
                if (uVar1 != 0) {
                    uVar2 = uVar1 << 0xc;
                }
                param_2[1] = iVar8 + uVar2 + -1;
            }
        }
    }
    return uVar4;
}


// ===== sym.msm_gpio_init_valid_mask.ed672156799e8aae44ccfb4ca27872b0.cfi_jt @ 0x08001708 (size 8) =====

uint32_t *
sym.msm_gpio_init_valid_mask.ed672156799e8aae44ccfb4ca27872b0.cfi_jt(ulong param_1,int64_t param_2,uint32_t param_3)

{
    uint16_t uVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    int64_t *piVar7;
    ulong uVar8;
    int64_t iVar9;
    int64_t extraout_x8;
    uint64_t *extraout_x9;
    uint64_t *puVar10;
    uint64_t extraout_x10;
    ulong *in_x18;
    uint64_t uVar11;
    uint32_t *puVar12;
    ulong unaff_x30;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    uVar11 = param_3;
    iStack_48 = *(iVar9 + 0x5e0);
    piVar7 = gpiochip_get_data();
    uStack_4c = 0;
    puVar12 = *(piVar7[0x98] + 0x48);
    if (puVar12 != NULL) {
        memset(param_2,0xff,uVar11 + 0x3f >> 3 & 0x3ffffff8);
        uStack_4c = 0;
        uVar5 = *puVar12;
        if (uVar5 < 0) goto code_r0x08003b50;
        iVar9 = 1;
        goto code_r0x08003a10;
    }
    iVar4 = of_property_count_elems_of_size(*(*piVar7 + 0x2f0),"qcom,gpios-reserved",4);
    if (0 < iVar4) {
        memset(param_2,0xff,uVar11 + 0x3f >> 3 & 0x3ffffff8);
        uVar8 = of_find_property(*(*piVar7 + 0x2f0),"qcom,gpios-reserved",0);
        for (iVar9 = of_prop_next_u32(uVar8,0,&uStack_4c); iVar9 != 0;
            iVar9 = of_prop_next_u32(uVar8,iVar9,&uStack_4c)) {
            if (param_3 <= uStack_4c) goto code_r0x08003c3c;
            puVar10 = param_2 + (uStack_4c >> 3 & 0x1ffffff8);
            Hint_Prefetch(puVar10,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar10,0x10);
                if (bVar3) {
                    *puVar10 = *puVar10 & (1L << (uStack_4c & 0x3f) ^ 0xffffffffffffffffU);
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
        }
    }
    uVar5 = device_property_read_u16_array(*piVar7,"gpios",0,0);
    if (uVar5 < 0) goto code_r0x08003b50;
    if (param_3 < uVar5) {
        puVar12 = 0xffffffea;
    }
    else {
        iVar9 = __kmalloc(uVar5 << 1,0xcc0);
        if (iVar9 == 0) {
            puVar12 = 0xfffffff4;
        }
        else {
            uVar6 = device_property_read_u16_array(*piVar7,"gpios",iVar9,uVar5);
            puVar12 = uVar6;
            if (uVar6 < 0) {
                _dev_err(*piVar7,"could not read list of GPIOs\n");
            }
            else {
                memset(param_2,0,uVar11 + 0x3f >> 3 & 0x3ffffff8);
                uStack_4c = 0;
                if (uVar5 != 0) {
                    do {
                        uVar1 = *(iVar9 + uStack_4c * 2);
                        puVar10 = param_2 + (uVar1 >> 3 & 0x1ff8);
                        Hint_Prefetch(puVar10,2,0,1);
                        do {
                            cVar2 = '\x01';
                            bVar3 = ExclusiveMonitorPass(puVar10,0x10);
                            if (bVar3) {
                                *puVar10 = *puVar10 | 1L << (uVar1 & 0x3f);
                                cVar2 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar2 != '\0');
                        uStack_4c = uStack_4c + 1;
                    } while (uStack_4c < uVar5);
                }
            }
            kfree(iVar9);
        }
    }
code_r0x08003b54:
    do {
        iVar9 = sp_el0;
        if (*(iVar9 + 0x5e0) == iStack_48) {
            return puVar12;
        }
        __stack_chk_fail();
        iVar9 = extraout_x8;
        puVar10 = extraout_x9;
        uVar11 = extraout_x10;
        while( true ) {
            Hint_Prefetch(puVar10,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar10,0x10);
                if (bVar3) {
                    *puVar10 = *puVar10 & (uVar11 ^ 0xffffffffffffffff);
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            uStack_4c = uStack_4c + 1;
            uVar5 = puVar12[uStack_4c];
            if (uVar5 < 0) goto code_r0x08003b50;
code_r0x08003a10:
            if ((param_3 <= uStack_4c) || (param_3 <= uVar5)) break;
            puVar10 = param_2 + (uVar5 >> 3 & 0x1ffffff8);
            uVar11 = iVar9 << (uVar5 & 0x3f);
        }
code_r0x08003c3c:
        _dev_err(*piVar7,"invalid list of reserved GPIOs\n");
        puVar12 = 0xffffffea;
    } while( true );
code_r0x08003b50:
    puVar12 = NULL;
    goto code_r0x08003b54;
}


// ===== sym.msm_pinmux_request.ed672156799e8aae44ccfb4ca27872b0.cfi_jt @ 0x08001710 (size 8) =====

uint sym.msm_pinmux_request.ed672156799e8aae44ccfb4ca27872b0.cfi_jt(ulong param_1,uint param_2)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = pinctrl_dev_get_drvdata();
    uVar2 = gpiochip_line_is_valid(iVar1 + 0x10,param_2);
    uVar3 = 0;
    if ((uVar2 & 1) == 0) {
        uVar3 = 0xffffffea;
    }
    return uVar3;
}


// ===== sym.msm_get_group_pins.ed672156799e8aae44ccfb4ca27872b0.cfi_jt @ 0x08001718 (size 8) =====

ulong sym.msm_get_group_pins.ed672156799e8aae44ccfb4ca27872b0.cfi_jt
                (ulong param_1,uint32_t param_2,ulong *param_3,uint *param_4)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = pinctrl_dev_get_drvdata();
    *param_3 = *(*(*(iVar1 + 0x4c0) + 0x20) + param_2 * 0x50 + 8);
    *param_4 = *(*(*(iVar1 + 0x4c0) + 0x20) + param_2 * 0x50 + 0x10);
    return 0;
}


// ===== sym.msm_gpio_irq_set_vcpu_affinity.ed672156799e8aae44ccfb4ca27872b0.cfi_jt @ 0x08001720 (size 8) =====

ulong sym.msm_gpio_irq_set_vcpu_affinity.ed672156799e8aae44ccfb4ca27872b0.cfi_jt(int64_t param_1,ulong param_2)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = gpiochip_get_data(*(param_1 + 0x30));
    if ((*(param_1 + 0x28) != 0) &&
       ((*(iVar1 + (*(param_1 + 8) >> 6 & 0x3ffffff) * 8 + 0x470) >> (*(param_1 + 8) & 0x3f) & 1) != 0)) {
        uVar2 = irq_chip_set_vcpu_affinity_parent(param_1,param_2);
        return uVar2;
    }
    return 0;
}


// ===== sym.msm_pinctrl_suspend.ed672156799e8aae44ccfb4ca27872b0.cfi_jt @ 0x08001728 (size 8) =====

void sym.msm_pinctrl_suspend.ed672156799e8aae44ccfb4ca27872b0.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pinctrl_force_sleep(*(*(param_1 + 0x98) + 8));
    return;
}


// ===== sym.msm_pinctrl_resume.ed672156799e8aae44ccfb4ca27872b0.cfi_jt @ 0x08001730 (size 8) =====

void sym.msm_pinctrl_resume.ed672156799e8aae44ccfb4ca27872b0.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pinctrl_force_default(*(*(param_1 + 0x98) + 8));
    return;
}


// ===== sym.msm_config_group_set.ed672156799e8aae44ccfb4ca27872b0.cfi_jt @ 0x08001738 (size 8) =====

//WARNING: Removing unreachable block (ram,0x0800367c)

ulong sym.msm_config_group_set.ed672156799e8aae44ccfb4ca27872b0.cfi_jt
                (ulong param_1,uint64_t param_2,int64_t param_3,int param_4)

{
    ulong *puVar1;
    uint64_t *puVar2;
    uint32_t *puVar3;
    uint32_t uVar4;
    bool bVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    ulong *puVar8;
    ulong uVar9;
    int64_t iVar10;
    ulong *in_x18;
    uint64_t uVar11;
    uint64_t uVar12;
    uint32_t uVar13;
    uint64_t uVar14;
    int iVar15;
    ulong unaff_x30;
    int iStack_80;
    
    *in_x18 = unaff_x30;
    puVar8 = pinctrl_dev_get_drvdata();
    if (param_4 != 0) {
        iVar15 = 0;
        iVar10 = *(puVar8[0x98] + 0x20) + (param_2 & 0xffffffff) * 0x50;
        puVar1 = puVar8 + 0x83;
        puVar2 = iVar10 + 0x38;
        puVar3 = iVar10 + 0x24;
        iStack_80 = 0;
        bVar5 = false;
        do {
            uVar9 = 0xfffffdf4;
            uVar14 = *(param_3 + iVar15 * 8);
            uVar12 = uVar14 >> 8 & 0xffffff;
            uVar6 = uVar14;
            uVar7 = uVar12;
            switch(uVar14 & 0xff) {
            case 0:
            case 1:
            case 3:
            case 5:
                uVar13 = 3;
                uVar11 = *puVar2 >> 0xc & 0x1f;
                break;
            case 2:
            case 4:
            case 7:
            case 8:
            case 10:
            case 0xb:
            case 0xd:
            case 0xe:
            case 0xf:
            case 0x10:
                goto code_r0x0800388c;
            case 6:
                uVar11 = *puVar2 >> 0x16 & 0x1f;
code_r0x08003670:
                uVar13 = 1;
                uVar7 = 1;
                goto code_r0x08003778;
            case 9:
                uVar11 = *puVar2 >> 0x11 & 0x1f;
                if (((uVar6 >> 8 & 1) != 0) || (0xe < uVar7 - 2)) {
                    uVar12 = 0xffffffff;
                    goto code_r0x080037f8;
                }
                uVar13 = 7;
                uVar7 = (uVar6 >> 9) - 1;
                uVar12 = uVar7;
                uVar4 = uVar7 & 0xfffffff8;
                goto joined_r0x080036b0;
            case 0xc:
            case 0x11:
                uVar13 = 1;
                uVar11 = *puVar2 >> 0x25 & 0x1f;
                break;
            default:
                uVar13 = 1;
                if (1 < (uVar6 & 0xff) - 0x80) {
                    if ((uVar6 & 0xff) != 0x82) {
                        return 0xfffffdf4;
                    }
                    uVar11 = 0xd;
                    goto code_r0x08003670;
                }
                uVar11 = 0xc;
            }
            uVar4 = uVar6 & 0xff;
            if (uVar4 < 0x12) {
    //WARNING: Jumptable with 0 entries at 0x08003610
    //WARNING: Treating indirect jump as call
                uVar9 = (*(*((uVar14 & 0xff) + 0x800074b) * 4 + 0x8003614))(0xfffffdf4);
                return uVar9;
            }
            if (uVar4 == 0x80) {
                iStack_80 = 1;
            }
            else {
                if (uVar4 != 0x81) {
                    _dev_err(*puVar8,"Unsupported config parameter: %x\n",uVar6 & 0xff);
                    return 0xffffffea;
                }
                iStack_80 = 0;
            }
            bVar5 = true;
            uVar4 = uVar7 & (uVar13 ^ 0xffffffff);
joined_r0x080036b0:
            if (uVar4 != 0) {
code_r0x080037f8:
                _dev_err(*puVar8,"config %x: %x is invalid\n",uVar6 & 0xff,uVar12);
                return 0xffffffea;
            }
code_r0x08003778:
            if ((uVar6 & 0xfe) != 0x80) {
                uVar9 = _raw_spin_lock_irqsave(puVar1);
                uVar6 = sym.readl(puVar8[(*puVar2 >> 5 & 3) + 0x99] + *puVar3);
                sym.writel(uVar6 & (uVar13 << uVar11 ^ 0xffffffff) | uVar7 << uVar11,
                           puVar8[(*puVar2 >> 5 & 3) + 0x99] + *puVar3);
                _raw_spin_unlock_irqrestore(puVar1,uVar9);
            }
            iVar15 = iVar15 + 1;
        } while (param_4 != iVar15);
        if (bVar5) {
            uVar9 = _raw_spin_lock_irqsave(puVar1);
            uVar7 = sym.readl(puVar8[(*puVar2 >> 5 & 3) + 0x99] + *puVar3);
            if ((uVar7 >> 0xb & 1) != 0) {
                sym.writel(uVar7 & 0xffffefff | iStack_80 << 0xc,puVar8[(*puVar2 >> 5 & 3) + 0x99] + *puVar3);
            }
            _raw_spin_unlock_irqrestore(puVar1,uVar9);
        }
    }
    uVar9 = 0;
code_r0x0800388c:
    return uVar9;
}


// ===== sym.msm_spare_read.cfi_jt @ 0x08001740 (size 8) =====

uint32_t sym.msm_spare_read.cfi_jt(int param_1)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(_segment.ehdr + 0x4c0) + 0x70);
    if (((iVar2 == 0) || (*(*(_segment.ehdr + 0x4c0) + 0x78) <= param_1)) ||
       (uVar1 = *(iVar2 + param_1 * 8 + 4), uVar1 == 0)) {
        uVar1 = 0xfffffffe;
    }
    else {
        uVar1 = sym.readl_relaxed(*(_segment.ehdr + 0x4c8) + uVar1);
        uVar1 = uVar1 & 0xff00;
    }
    return uVar1;
}


// ===== sym.msm_pinctrl_remove.cfi_jt @ 0x08001748 (size 8) =====

ulong sym.msm_pinctrl_remove.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0xa8);
    gpiochip_remove(iVar1 + 0x10);
    unregister_restart_handler(iVar1 + 0x2d8);
    return 0;
}


// ===== sym.msm_gpio_set.ed672156799e8aae44ccfb4ca27872b0.cfi_jt @ 0x08001750 (size 8) =====

void sym.msm_gpio_set.ed672156799e8aae44ccfb4ca27872b0.cfi_jt(ulong param_1,uint64_t param_2,int param_3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    ulong uVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = gpiochip_get_data();
    iVar6 = *(*(iVar4 + 0x4c0) + 0x20);
    uVar5 = _raw_spin_lock_irqsave(iVar4 + 0x418);
    iVar6 = iVar6 + (param_2 & 0xffffffff) * 0x50;
    uVar3 = sym.readl(*(iVar4 + 0x4c8 + (*(iVar6 + 0x38) >> 5 & 3) * 8) + *(iVar6 + 0x28));
    uVar2 = 1 << (*(iVar6 + 0x38) >> 0x2f & 0x1f);
    uVar1 = uVar3 & (uVar2 ^ 0xffffffff);
    if (param_3 != 0) {
        uVar1 = uVar3 | uVar2;
    }
    sym.writel(uVar1,*(iVar4 + 0x4c8 + (*(iVar6 + 0x38) >> 5 & 3) * 8) + *(iVar6 + 0x28));
    _raw_spin_unlock_irqrestore(iVar4 + 0x418,uVar5);
    return;
}


// ===== sym.msm_spare_write.cfi_jt @ 0x08001758 (size 8) =====

ulong sym.msm_spare_write.cfi_jt(int param_1,uint32_t param_2)

{
    uint32_t uVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(_segment.ehdr + 0x4c0) + 0x70);
    if (((iVar3 == 0) || (*(*(_segment.ehdr + 0x4c0) + 0x78) <= param_1)) ||
       (uVar1 = *(iVar3 + param_1 * 8 + 4), uVar1 == 0)) {
        uVar2 = 0xfffffffe;
    }
    else {
        sym.writel_relaxed(param_2 & 0xff00,*(_segment.ehdr + 0x4c8) + uVar1);
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.msm_get_functions_count.ed672156799e8aae44ccfb4ca27872b0.cfi_jt @ 0x08001760 (size 8) =====

uint sym.msm_get_functions_count.ed672156799e8aae44ccfb4ca27872b0.cfi_jt(void)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = pinctrl_dev_get_drvdata();
    return *(*(iVar1 + 0x4c0) + 0x18);
}


// ===== sym.msm_get_groups_count.ed672156799e8aae44ccfb4ca27872b0.cfi_jt @ 0x08001768 (size 8) =====

uint sym.msm_get_groups_count.ed672156799e8aae44ccfb4ca27872b0.cfi_jt(void)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = pinctrl_dev_get_drvdata();
    return *(*(iVar1 + 0x4c0) + 0x28);
}


// ===== sym.pinctrl_utils_free_map.cfi_jt @ 0x08001770 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.pinctrl_utils_free_map.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.msm_ps_hold_restart.ed672156799e8aae44ccfb4ca27872b0.cfi_jt @ 0x08001778 (size 8) =====

ulong sym.msm_ps_hold_restart.ed672156799e8aae44ccfb4ca27872b0.cfi_jt(int64_t param_1)

{
    bool bVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.writel(0,*(param_1 + 0x1f0) + 0x820);
    iVar2 = -1000;
    do {
        __const_udelay(0x418958);
        bVar1 = iVar2 != -1;
        iVar2 = iVar2 + 1;
    } while (bVar1);
    return 0;
}


// ===== sym.pinctrl_hibernation_notifier.ed672156799e8aae44ccfb4ca27872b0.cfi_jt @ 0x08001780 (size 8) =====

ulong sym.pinctrl_hibernation_notifier.ed672156799e8aae44ccfb4ca27872b0.cfi_jt(ulong param_1,int64_t param_2)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = _segment.ehdr;
    if (3 < param_2 - 1U) {
        return 1;
    }
    iVar5 = *(_segment.ehdr + 0x4c0);
    switch(param_2) {
    case 3:
        if ((pm_suspend_global_flags & 1) == 0) {
            return 1;
        }
        break;
    case 4:
        if ((pm_suspend_global_flags & 1) == 0) {
            return 1;
        }
    case 2:
        kfree(*(_segment.ehdr + 0x4f8));
        kfree(*(iVar2 + 0x500));
        *(iVar2 + 0x508) = 0;
        *(iVar2 + 0x500) = 0;
        *(iVar2 + 0x4f8) = 0;
        return 1;
    }
    iVar3 = __kmalloc(*(iVar5 + 0x28) << 4,0xdc0);
    *(iVar2 + 0x4f8) = iVar3;
    if (iVar3 == 0) {
code_r0x080055e8:
        uVar4 = 0xfffffff4;
    }
    else {
        uVar1 = *(iVar5 + 0x40);
        if (uVar1 != 0) {
            iVar5 = __kmalloc(uVar1 << 5,0xdc0);
            *(iVar2 + 0x500) = iVar5;
            if (iVar5 == 0) {
                kfree(*(iVar2 + 0x4f8));
                goto code_r0x080055e8;
            }
        }
        uVar4 = 1;
        *(iVar2 + 0x508) = 1;
    }
    return uVar4;
}


// ===== sym.msm_pinmux_set_mux.ed672156799e8aae44ccfb4ca27872b0.cfi_jt @ 0x08001788 (size 8) =====

void sym.msm_pinmux_set_mux.ed672156799e8aae44ccfb4ca27872b0.cfi_jt(ulong param_1,int param_2,uint64_t param_3)

{
    uint32_t uVar1;
    char cVar2;
    bool bVar3;
    code *pcVar4;
    uint32_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    uint64_t extraout_x8;
    uint64_t *extraout_x9;
    uint64_t *puVar9;
    uint64_t uVar10;
    int64_t iVar11;
    ulong *in_x18;
    uint32_t uVar12;
    uint64_t uVar13;
    uint32_t uVar14;
    uint32_t uVar15;
    uint64_t uVar16;
    int64_t iVar17;
    uint64_t *puVar18;
    uint64_t uVar19;
    uint32_t uVar20;
    ulong unaff_x30;
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    param_3 = param_3 & 0xffffffff;
    iStack_68 = *(iVar6 + 0x5e0);
    iVar6 = pinctrl_dev_get_drvdata();
    uStack_6c = 0;
    iVar7 = __irq_resolve_mapping(*(iVar6 + 0x120),param_3,&uStack_6c);
    uVar12 = 0;
    if (iVar7 != 0) {
        uVar12 = uStack_6c;
    }
    uVar13 = uVar12;
    iVar7 = irq_get_irq_data(uVar13);
    iVar11 = *(*(iVar6 + 0x4c0) + 0x20);
    iVar17 = iVar11 + param_3 * 0x50;
    uVar15 = *(*(iVar6 + 0x4c0) + 0x6c);
    uVar16 = uVar15;
    puVar18 = iVar17 + 0x38;
    uVar20 = *puVar18 >> 7 & 0x1f;
    uVar5 = *(iVar17 + 0x20);
    uVar14 = -1L << uVar20;
    if (uVar5 < 2) {
        uVar14 = 0xffffffffffffffff >> (-uVar20 & 0x3f) & uVar14;
        if (uVar5 == 0) {
            uVar20 = 0;
code_r0x08002f54:
            if (uVar20 != uVar5) {
                uVar19 = param_3;
                if (iVar7 == 0) goto code_r0x08002fa4;
                if (uVar20 == uVar15) goto code_r0x08002fa4;
                uVar8 = 1L << (*(iVar7 + 8) & 0x3f);
                puVar9 = iVar6 + (*(iVar7 + 8) >> 6 & 0x3ffffff) * 8 + 0x498;
                while( true ) {
                    uVar15 = uVar16;
                    uVar12 = uVar13;
                    Hint_Prefetch(puVar9,2,0,1);
                    do {
                        uVar16 = *puVar9;
                        cVar2 = '\x01';
                        bVar3 = ExclusiveMonitorPass(puVar9,0x10);
                        if (bVar3) {
                            *puVar9 = uVar16 | uVar8;
                            cVar2 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar2 != '\0');
                    DataMemoryBarrier(2,3);
                    uVar19 = param_3;
                    if ((uVar16 & uVar8) == 0) {
                        disable_irq(uVar13 & 0xffffffff);
                    }
code_r0x08002fa4:
                    uVar16 = _raw_spin_lock_irqsave(iVar6 + 0x418);
                    uVar13 = iVar6 + 0x4c8;
                    param_3 = iVar11 + uVar19 * 0x50;
                    uVar5 = sym.readl(*(uVar13 + (*puVar18 >> 5 & 3) * 8) + *(param_3 + 0x24));
                    uVar8 = *puVar18;
                    uVar1 = uVar20 << (uVar8 >> 7 & 0x1f) | uVar5 & (uVar14 ^ 0xffffffff);
                    uVar5 = 0;
                    if ((uVar1 >> (uVar8 >> 0x20 & 0x1f) & 1) != 0) {
                        uVar5 = 1 << (uVar8 >> 0x1b & 0x1f);
                    }
                    sym.writel(uVar5 | uVar1,*(uVar13 + (uVar8 >> 5 & 3) * 8) + *(param_3 + 0x24));
                    _raw_spin_unlock_irqrestore(iVar6 + 0x418,uVar16);
                    if ((iVar7 != 0) && (uVar20 == uVar15)) {
                        uVar8 = 1L << (*(iVar7 + 8) & 0x3f);
                        puVar9 = iVar6 + (*(iVar7 + 8) >> 6 & 0x3ffffff) * 8 + 0x498;
                        Hint_Prefetch(puVar9,2,0,1);
                        do {
                            uVar10 = *puVar9;
                            cVar2 = '\x01';
                            bVar3 = ExclusiveMonitorPass(puVar9,0x10);
                            if (bVar3) {
                                *puVar9 = uVar10 & (uVar8 ^ 0xffffffffffffffff);
                                cVar2 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar2 != '\0');
                        DataMemoryBarrier(2,3);
                        uVar13 = uVar12;
                        if ((uVar10 & uVar8) != 0) {
                            if ((*(iVar7 + 0x28) == 0) ||
                               ((*(iVar6 + (*(iVar7 + 8) >> 6 & 0x3ffffff) * 8 + 0x470) >> (*(iVar7 + 8) & 0x3f) & 1) ==
                                0)) {
                                uVar8 = *puVar18;
                                uVar12 = 0;
                                if ((uVar8 & 0x4000000000000000) != 0) {
                                    uVar12 = 1 << (uVar8 >> 0x39 & 0x1f);
                                }
                                sym.writel(uVar12,*(iVar6 + (uVar8 >> 5 & 3) * 8 + 0x4c8) +
                                                   *(iVar11 + uVar19 * 0x50 + 0x30));
                            }
                            else {
                                irq_chip_set_parent_state(iVar7,0,0);
                            }
                            enable_irq(uVar13);
                        }
                    }
                    iVar17 = sp_el0;
                    if (*(iVar17 + 0x5e0) == iStack_68) break;
                    __stack_chk_fail(0);
                    uVar8 = extraout_x8;
                    puVar9 = extraout_x9;
                }
                return;
            }
            goto code_r0x08002f44;
        }
    }
    else {
        uVar14 = 0xffffffffffffffff >> (LZCOUNT(uVar5 - 1) - uVar20 & 0x3f) & uVar14;
    }
    uVar20 = 0;
    do {
        if (*(*(iVar11 + param_3 * 0x50 + 0x18) + uVar20 * 4) == param_2) goto code_r0x08002f54;
        uVar20 = uVar20 + 1;
    } while (uVar5 != uVar20);
code_r0x08002f44:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x800,0x8002f4c);
    (*pcVar4)();
}


// ===== sym.msm_ps_hold_poweroff.ed672156799e8aae44ccfb4ca27872b0.cfi_jt @ 0x08001790 (size 8) =====

void sym.msm_ps_hold_poweroff.ed672156799e8aae44ccfb4ca27872b0.cfi_jt(void)

{
    bool bVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.writel(0,*(_segment.ehdr + 0x4c8) + 0x820);
    iVar2 = -1000;
    do {
        __const_udelay(0x418958);
        bVar1 = iVar2 != -1;
        iVar2 = iVar2 + 1;
    } while (bVar1);
    return;
}


// ===== sym.msm_pinctrl_hibernation_resume.ed672156799e8aae44ccfb4ca27872b0.cfi_jt @ 0x08001798 (size 8) =====

void sym.msm_pinctrl_hibernation_resume.ed672156799e8aae44ccfb4ca27872b0.cfi_jt(void)

{
    int64_t iVar1;
    uint32_t *puVar2;
    int64_t arg1;
    code *pcVar3;
    uint64_t uVar4;
    ulong *in_x18;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = _segment.ehdr;
    if ((*(_segment.ehdr + 0x508) != '\0') && (*(_segment.ehdr + 0x4f8) != 0)) {
        iVar5 = *(_segment.ehdr + 0x4c0);
        if (*(iVar5 + 0x40) != 0) {
            iVar6 = 0;
            uVar8 = 0;
            iVar7 = _segment.ehdr + 0x4c8;
            do {
                if (iVar6 == 0x20) {
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(0x5512,0x8005508);
                    (*pcVar3)();
                }
                iVar1 = *(iVar7 + iVar6) + *(*(iVar5 + 0x80) + uVar8 * 4);
                _printk(0x8000431,iVar1);
                iVar9 = iVar6 * 4;
                sym.writel_relaxed(*(*(arg1 + 0x500) + iVar9),iVar1);
                sym.writel_relaxed(*(*(arg1 + 0x500) + iVar9 + 4),iVar1 + 4);
                sym.writel_relaxed(*(*(arg1 + 0x500) + iVar9 + 8),iVar1 + 8);
                sym.writel_relaxed(*(*(arg1 + 0x500) + iVar9 + 0xc),iVar1 + 0xc);
                sym.writel_relaxed(*(*(arg1 + 0x500) + iVar9 + 0x10),iVar1 + 0x10);
                sym.writel_relaxed(*(*(arg1 + 0x500) + iVar9 + 0x14),iVar1 + 0x14);
                sym.writel_relaxed(*(*(arg1 + 0x500) + iVar9 + 0x18),iVar1 + 0x18);
                sym.writel_relaxed(*(*(arg1 + 0x500) + iVar9 + 0x1c),iVar1 + 0x1c);
                uVar8 = uVar8 + 1;
                iVar6 = iVar6 + 8;
            } while (uVar8 < *(iVar5 + 0x40));
        }
        if (*(iVar5 + 0x2c) == 0) {
            uVar8 = 0;
        }
        else {
            iVar6 = 0;
            uVar8 = 0;
            iVar7 = 0x24;
            do {
                uVar4 = sym.msm_gpio_needs_valid_mask(arg1);
                if (((uVar4 & 1) == 0) ||
                   ((*(*(arg1 + 0x250) + (uVar8 >> 6 & 0x3ffffff) * 8) >> (uVar8 & 0x3f) & 1) != 0)) {
                    iVar1 = arg1 + 0x4c8;
                    puVar2 = *(iVar5 + 0x20) + iVar7;
                    sym.writel(*(*(arg1 + 0x4f8) + iVar6),*(iVar1 + (*(puVar2 + 5) >> 5 & 3) * 8) + *puVar2);
                    sym.writel(*(*(arg1 + 0x4f8) + iVar6 + 4),*(iVar1 + (*(puVar2 + 5) >> 5 & 3) * 8) + puVar2[1]);
                    sym.writel(*(*(arg1 + 0x4f8) + iVar6 + 8),*(iVar1 + (*(puVar2 + 5) >> 5 & 3) * 8) + puVar2[2]);
                    sym.writel(*(*(arg1 + 0x4f8) + iVar6 + 0xc),*(iVar1 + (*(puVar2 + 5) >> 5 & 3) * 8) + puVar2[3]);
                }
                uVar8 = uVar8 + 1;
                iVar7 = iVar7 + 0x50;
                iVar6 = iVar6 + 0x10;
            } while (uVar8 < *(iVar5 + 0x2c));
        }
        if (uVar8 < *(iVar5 + 0x28)) {
            uVar4 = uVar8 & 0xffffffff;
            iVar6 = uVar4 << 4;
            iVar7 = (uVar4 + (uVar8 & 0xffffffff) * 4) * 0x10;
            do {
                iVar9 = *(iVar5 + 0x20);
                iVar1 = iVar9 + iVar7;
                if (*(iVar1 + 0x24) != 0) {
                    sym.writel(*(*(arg1 + 0x4f8) + iVar6),
                               *(arg1 + (*(iVar1 + 0x38) >> 5 & 3) * 8 + 0x4c8) + *(iVar1 + 0x24));
                }
                if (*(iVar1 + 0x28) != 0) {
                    sym.writel(*(*(arg1 + 0x4f8) + iVar6 + 4),
                               *(arg1 + (*(iVar9 + iVar7 + 0x38) >> 5 & 3) * 8 + 0x4c8) + *(iVar1 + 0x28));
                }
                uVar4 = uVar4 + 1;
                iVar7 = iVar7 + 0x50;
                iVar6 = iVar6 + 0x10;
            } while (uVar4 < *(iVar5 + 0x28));
        }
    }
    return;
}


// ===== sym.msm_gpio_get_direction.ed672156799e8aae44ccfb4ca27872b0.cfi_jt @ 0x080017a0 (size 8) =====

bool sym.msm_gpio_get_direction.ed672156799e8aae44ccfb4ca27872b0.cfi_jt(ulong param_1,uint32_t param_2)

{
    int64_t iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = gpiochip_get_data();
    iVar3 = *(*(iVar1 + 0x4c0) + 0x20) + param_2 * 0x50;
    uVar2 = sym.readl(*(iVar1 + (*(iVar3 + 0x38) >> 5 & 3) * 8 + 0x4c8) + *(iVar3 + 0x24));
    return ((uVar2 & 0xffffffff) >> (*(iVar3 + 0x38) >> 0x25 & 0x1f) & 1) == 0;
}


// ===== sym.gpiochip_generic_request.cfi_jt @ 0x080017a8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.gpiochip_generic_request.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.msm_gpio_direction_input.ed672156799e8aae44ccfb4ca27872b0.cfi_jt @ 0x080017b0 (size 8) =====

ulong sym.msm_gpio_direction_input.ed672156799e8aae44ccfb4ca27872b0.cfi_jt(ulong param_1,uint64_t param_2)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = gpiochip_get_data();
    iVar4 = *(*(iVar2 + 0x4c0) + 0x20);
    uVar3 = _raw_spin_lock_irqsave(iVar2 + 0x418);
    iVar4 = iVar4 + (param_2 & 0xffffffff) * 0x50;
    uVar1 = sym.readl(*(iVar2 + 0x4c8 + (*(iVar4 + 0x38) >> 5 & 3) * 8) + *(iVar4 + 0x24));
    sym.writel(uVar1 & (1 << (*(iVar4 + 0x38) >> 0x25 & 0x1f) ^ 0xffffffffU),
               *(iVar2 + 0x4c8 + (*(iVar4 + 0x38) >> 5 & 3) * 8) + *(iVar4 + 0x24));
    _raw_spin_unlock_irqrestore(iVar2 + 0x418,uVar3);
    return 0;
}


// ===== sym.msm_gpio_get.ed672156799e8aae44ccfb4ca27872b0.cfi_jt @ 0x080017b8 (size 8) =====

uint32_t sym.msm_gpio_get.ed672156799e8aae44ccfb4ca27872b0.cfi_jt(ulong param_1,uint32_t param_2)

{
    int64_t iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = gpiochip_get_data();
    iVar3 = *(*(iVar1 + 0x4c0) + 0x20) + param_2 * 0x50;
    uVar2 = sym.readl(*(iVar1 + (*(iVar3 + 0x38) >> 5 & 3) * 8 + 0x4c8) + *(iVar3 + 0x28));
    return (uVar2 & 0xffffffff) >> (*(iVar3 + 0x38) >> 0x2a & 0x1f) & 1;
}


// ===== sym.msm_get_function_groups.ed672156799e8aae44ccfb4ca27872b0.cfi_jt @ 0x080017c0 (size 8) =====

ulong sym.msm_get_function_groups.ed672156799e8aae44ccfb4ca27872b0.cfi_jt
                (ulong param_1,uint32_t param_2,ulong *param_3,uint *param_4)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = pinctrl_dev_get_drvdata();
    *param_3 = *(*(*(iVar1 + 0x4c0) + 0x10) + param_2 * 0x18 + 8);
    *param_4 = *(*(*(iVar1 + 0x4c0) + 0x10) + param_2 * 0x18 + 0x10);
    return 0;
}


// ===== sym.msm_gpio_irq_set_affinity.ed672156799e8aae44ccfb4ca27872b0.cfi_jt @ 0x080017c8 (size 8) =====

ulong sym.msm_gpio_irq_set_affinity.ed672156799e8aae44ccfb4ca27872b0.cfi_jt
                (int64_t param_1,ulong param_2,uint32_t param_3)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = gpiochip_get_data(*(param_1 + 0x30));
    if ((*(param_1 + 0x28) != 0) &&
       ((*(iVar1 + (*(param_1 + 8) >> 6 & 0x3ffffff) * 8 + 0x470) >> (*(param_1 + 8) & 0x3f) & 1) != 0)) {
        uVar2 = irq_chip_set_affinity_parent(param_1,param_2,param_3 & 1);
        return uVar2;
    }
    return 0;
}


// ===== sym.__typeid__ZTSFvP8irq_dataE_global_addr @ 0x080017d0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.__typeid__ZTSFvP8irq_dataE_global_addr(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.msm_gpio_irq_ack.ed672156799e8aae44ccfb4ca27872b0.cfi_jt @ 0x080017d8 (size 8) =====

void sym.msm_gpio_irq_ack.ed672156799e8aae44ccfb4ca27872b0.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    int64_t arg1;
    ulong uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    uint64_t uVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = gpiochip_get_data(*(param_1 + 0x30));
    uVar5 = *(param_1 + 8);
    uVar4 = 1L << (uVar5 & 0x3f);
    iVar3 = arg1 + (uVar5 >> 6 & 0x3ffffff) * 8;
    if ((uVar4 & *(iVar3 + 0x470)) == 0) {
        iVar6 = *(*(arg1 + 0x4c0) + 0x20);
        uVar2 = _raw_spin_lock_irqsave(arg1 + 0x418);
        iVar3 = iVar6 + uVar5 * 0x50;
        uVar4 = *(iVar3 + 0x38);
        uVar1 = 0;
        if ((uVar4 & 0x4000000000000000) != 0) {
            uVar1 = 1 << (uVar4 >> 0x39 & 0x1f);
        }
        sym.writel(uVar1,*(arg1 + (uVar4 >> 5 & 3) * 8 + 0x4c8) + *(iVar3 + 0x30));
        if ((*(arg1 + (*(param_1 + 8) >> 6 & 0x3ffffff) * 8 + 0x420) >> (*(param_1 + 8) & 0x3f) & 1) != 0) {
            sym.msm_gpio_update_dual_edge_pos(arg1,iVar6 + uVar5 * 0x50);
        }
        _raw_spin_unlock_irqrestore(arg1 + 0x418,uVar2);
    }
    else if ((*(iVar3 + 0x420) & uVar4) != 0) {
        sym.msm_gpio_update_dual_edge_parent(param_1);
    }
    return;
}


// ===== sym.msm_gpio_irq_mask.ed672156799e8aae44ccfb4ca27872b0.cfi_jt @ 0x080017e0 (size 8) =====

void sym.msm_gpio_irq_mask.ed672156799e8aae44ccfb4ca27872b0.cfi_jt(int64_t param_1)

{
    char cVar1;
    bool bVar2;
    uint32_t uVar3;
    int64_t iVar4;
    ulong uVar5;
    ulong *in_x18;
    int64_t iVar6;
    uint32_t *puVar7;
    uint64_t uVar8;
    uint64_t *puVar9;
    int64_t iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = gpiochip_get_data(*(param_1 + 0x30));
    if (*(param_1 + 0x28) != 0) {
        irq_chip_mask_parent(param_1);
    }
    uVar8 = *(param_1 + 8);
    if ((*(iVar4 + (uVar8 >> 6 & 0x3ffffff) * 8 + 0x470) >> (uVar8 & 0x3f) & 1) == 0) {
        iVar10 = *(*(iVar4 + 0x4c0) + 0x20);
        uVar5 = _raw_spin_lock_irqsave(iVar4 + 0x418);
        iVar6 = iVar10 + uVar8 * 0x50;
        puVar7 = iVar6 + 0x2c;
        puVar9 = iVar6 + 0x38;
        uVar3 = sym.readl(*(iVar4 + (*puVar9 >> 5 & 3) * 8 + 0x4c8) + *puVar7);
        if ((**(param_1 + 0x10) & 0xc) != 0) {
            uVar3 = uVar3 & (1 << (*(iVar10 + uVar8 * 0x50 + 0x40) >> 10 & 0x1f) ^ 0xffffffffU);
        }
        uVar8 = *puVar9;
        sym.writel(uVar3 & (1 << (uVar8 >> 0x34 & 0x1f) ^ 0xffffffffU),
                   *(iVar4 + (uVar8 >> 5 & 3) * 8 + 0x4c8) + *puVar7);
        uVar8 = *(param_1 + 8);
        puVar9 = iVar4 + (uVar8 >> 6 & 0x3ffffff) * 8 + 0x448;
        Hint_Prefetch(puVar9,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(puVar9,0x10);
            if (bVar2) {
                *puVar9 = *puVar9 & (1L << (uVar8 & 0x3f) ^ 0xffffffffffffffffU);
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        _raw_spin_unlock_irqrestore(iVar4 + 0x418,uVar5);
    }
    return;
}


// ===== sym.msm_gpio_irq_disable.ed672156799e8aae44ccfb4ca27872b0.cfi_jt @ 0x080017e8 (size 8) =====

void sym.msm_gpio_irq_disable.ed672156799e8aae44ccfb4ca27872b0.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = gpiochip_get_data(*(param_1 + 0x30));
    if (*(param_1 + 0x28) != 0) {
        irq_chip_disable_parent(param_1);
    }
    if ((*(iVar1 + (*(param_1 + 8) >> 6 & 0x3ffffff) * 8 + 0x470) >> (*(param_1 + 8) & 0x3f) & 1) == 0) {
        sym.msm_gpio_irq_mask(param_1);
    }
    return;
}


// ===== sym.msm_gpio_irq_unmask.ed672156799e8aae44ccfb4ca27872b0.cfi_jt @ 0x080017f0 (size 8) =====

void sym.msm_gpio_irq_unmask.ed672156799e8aae44ccfb4ca27872b0.cfi_jt(int64_t param_1)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    uint32_t uVar4;
    int64_t iVar5;
    ulong uVar6;
    ulong *in_x18;
    uint64_t uVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = gpiochip_get_data(*(param_1 + 0x30));
    if (*(param_1 + 0x28) != 0) {
        irq_chip_unmask_parent(param_1);
    }
    uVar7 = *(param_1 + 8);
    if ((*(iVar5 + (uVar7 >> 6 & 0x3ffffff) * 8 + 0x470) >> (uVar7 & 0x3f) & 1) == 0) {
        iVar8 = *(*(iVar5 + 0x4c0) + 0x20);
        uVar6 = _raw_spin_lock_irqsave(iVar5 + 0x418);
        iVar8 = iVar8 + uVar7 * 0x50;
        uVar4 = sym.readl(*(iVar5 + 0x4c8 + (*(iVar8 + 0x38) >> 5 & 3) * 8) + *(iVar8 + 0x2c));
        sym.writel(1 << (*(iVar8 + 0x40) >> 10 & 0x1f) | uVar4 | 1 << (*(iVar8 + 0x38) >> 0x34 & 0x1f),
                   *(iVar5 + 0x4c8 + (*(iVar8 + 0x38) >> 5 & 3) * 8) + *(iVar8 + 0x2c));
        uVar7 = *(param_1 + 8);
        puVar1 = iVar5 + (uVar7 >> 6 & 0x3ffffff) * 8 + 0x448;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = *puVar1 | 1L << (uVar7 & 0x3f);
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        _raw_spin_unlock_irqrestore(iVar5 + 0x418,uVar6);
    }
    return;
}


// ===== sym.msm_gpio_irq_relres.ed672156799e8aae44ccfb4ca27872b0.cfi_jt @ 0x080017f8 (size 8) =====

void sym.msm_gpio_irq_relres.ed672156799e8aae44ccfb4ca27872b0.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x30);
    gpiochip_unlock_as_irq(iVar1,*(param_1 + 8));
    module_put(*(iVar1 + 0x18));
    return;
}


// ===== sym.msm_gpio_irq_enable.ed672156799e8aae44ccfb4ca27872b0.cfi_jt @ 0x08001800 (size 8) =====

void sym.msm_gpio_irq_enable.ed672156799e8aae44ccfb4ca27872b0.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = gpiochip_get_data(*(param_1 + 0x30));
    if (*(param_1 + 0x28) != 0) {
        irq_chip_enable_parent(param_1);
    }
    if ((*(iVar1 + (*(param_1 + 8) >> 6 & 0x3ffffff) * 8 + 0x470) >> (*(param_1 + 8) & 0x3f) & 1) == 0) {
        sym.msm_gpio_irq_unmask(param_1);
    }
    return;
}


// ===== sym.msm_gpio_irq_set_type.ed672156799e8aae44ccfb4ca27872b0.cfi_jt @ 0x08001808 (size 8) =====

ulong sym.msm_gpio_irq_set_type.ed672156799e8aae44ccfb4ca27872b0.cfi_jt(int64_t param_1,uint32_t param_2)

{
    char cVar1;
    bool bVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    ulong *arg1;
    int64_t iVar7;
    ulong uVar8;
    uint64_t uVar9;
    uint64_t extraout_x8;
    uint64_t uVar10;
    code *pcVar11;
    uint64_t *extraout_x9;
    ulong *in_x18;
    uint32_t *puVar12;
    uint32_t *puVar13;
    int64_t iVar14;
    uint64_t *puVar15;
    uint64_t uVar16;
    int64_t iVar17;
    ulong unaff_x30;
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    arg1 = gpiochip_get_data(*(param_1 + 0x30));
    uStack_6c = 0;
    iVar7 = gpiochip_get_data(*(param_1 + 0x30));
    if (((param_2 == 3) && (*(*(iVar7 + 0x4c0) + 0x5c) != '\0')) && (*(param_1 + 0x28) != 0)) {
        uVar10 = *(param_1 + 8) >> 6 & 0x3ffffff;
        uVar9 = 1L << (*(param_1 + 8) & 0x3f);
        if ((uVar9 & *(iVar7 + uVar10 * 8 + 0x470)) != 0) {
            puVar15 = arg1 + uVar10 + 0x84;
            Hint_Prefetch(puVar15,2,0,1);
            do {
                cVar1 = '\x01';
                bVar2 = ExclusiveMonitorPass(puVar15,0x10);
                if (bVar2) {
                    *puVar15 = *puVar15 | uVar9;
                    cVar1 = ExclusiveMonitorsStatus();
                }
            } while (cVar1 != '\0');
            *(*(param_1 + 0x10) + 0x70) = sym.handle_fasteoi_ack_irq.cfi_jt;
            sym.msm_gpio_update_dual_edge_parent(param_1);
            goto code_r0x080045c0;
        }
    }
    if (*(param_1 + 0x28) != 0) {
        irq_chip_set_type_parent(param_1,param_2);
    }
    uVar16 = *(param_1 + 8);
    uVar10 = uVar16 >> 6 & 0x3ffffff;
    uVar9 = 1L << (uVar16 & 0x3f);
    if ((uVar9 & arg1[uVar10 + 0x8e]) != 0) {
        puVar15 = arg1 + uVar10 + 0x84;
        goto code_r0x08004608;
    }
    iVar17 = *(arg1[0x98] + 0x20);
    iVar7 = iVar17 + uVar16 * 0x50;
    uVar8 = _raw_spin_lock_irqsave(arg1 + 0x83);
    puVar12 = iVar7 + 0x40;
    uVar9 = 1L << (*(param_1 + 8) & 0x3f);
    puVar15 = arg1 + (*(param_1 + 8) >> 6 & 0x3ffffff) + 0x84;
    if ((param_2 == 3) && ((*puVar12 & 0x3e000000) == 0x2000000)) {
        Hint_Prefetch(puVar15,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(puVar15,0x10);
            if (bVar2) {
                *puVar15 = *puVar15 | uVar9;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
    }
    else {
        Hint_Prefetch(puVar15,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(puVar15,0x10);
            if (bVar2) {
                *puVar15 = *puVar15 & (uVar9 ^ 0xffffffffffffffff);
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
    }
    if (*(arg1 + 0x414) == '\0') {
        iVar14 = iVar17 + uVar16 * 0x50;
        uVar5 = sym.readl(arg1[(*(iVar14 + 0x38) >> 5 & 3) + 0x99] + *(iVar14 + 0x34));
        uStack_6c = (*puVar12 >> 5 & 0x1f) << (*puVar12 & 0x1f) | uVar5 & (7 << (*puVar12 & 0x1f) ^ 0xffffffffU);
        sym.writel(uStack_6c,arg1[(*(iVar14 + 0x38) >> 5 & 3) + 0x99] + *(iVar14 + 0x34));
    }
    else {
        iVar4 = *(iVar17 + uVar16 * 0x50 + 0x34) + *(arg1 + 0x9d);
        qcom_scm_io_readl(iVar4,&uStack_6c);
        uStack_6c = (*puVar12 >> 5 & 0x1f) << (*puVar12 & 0x1f) | uStack_6c & (7 << (*puVar12 & 0x1f) ^ 0xffffffffU);
        iVar4 = qcom_scm_io_writel(iVar4);
        if (iVar4 != 0) {
            _dev_err(*arg1,"Failed routing %lu interrupt to Apps proc",*(param_1 + 8));
        }
    }
    iVar14 = iVar17 + uVar16 * 0x50;
    puVar15 = iVar14 + 0x38;
    puVar13 = iVar14 + 0x2c;
    uVar6 = sym.readl(arg1[(*puVar15 >> 5 & 3) + 0x99] + *puVar13);
    uVar9 = 1L << (*puVar12 >> 10 & 0x1f);
    uStack_6c = uVar6 | uVar9;
    uVar5 = *puVar12;
    uVar3 = uVar5 >> 0x19 & 0x1f;
    if (uVar3 != 1) {
        if (uVar3 != 2) {
    //WARNING: Does not return
            pcVar11 = SoftwareBreakpoint(0x800,0x8004638);
            (*pcVar11)();
        }
        uStack_6c = uStack_6c & (3 << (uVar5 >> 0x14 & 0x1f) ^ 0xffffffffU) &
                    (1 << (*puVar12 >> 0xf & 0x1f) ^ 0xffffffffU);
        switch(param_2) {
        case 1:
            goto code_r0x08004494;
        case 2:
            uVar5 = *puVar12;
            iVar4 = 2;
            break;
        case 3:
            uVar5 = *puVar12;
            iVar4 = 3;
            break;
        case 4:
            goto code_r0x080044e8;
        default:
            goto code_r0x08004500;
        }
        uStack_6c = iVar4 << (uVar5 >> 0x14 & 0x1f) | uStack_6c;
code_r0x080044e8:
        uVar5 = *puVar12 >> 0xf;
        goto code_r0x080044f4;
    }
    uStack_6c = uStack_6c & (1 << (uVar5 >> 0x14 & 0x1f) ^ 0xffffffffU) & (1 << (*puVar12 >> 0xf & 0x1f) ^ 0xffffffffU);
    switch(param_2) {
    case 1:
    case 3:
code_r0x08004494:
        uStack_6c = 1 << (*puVar12 >> 0x14 & 0x1f) | uStack_6c;
        uVar5 = *puVar12 >> 0xf;
        break;
    case 2:
        uVar5 = *puVar12 >> 0x14;
        break;
    case 4:
        goto code_r0x080044e8;
    default:
        goto code_r0x08004500;
    }
code_r0x080044f4:
    uStack_6c = 1 << (uVar5 & 0x1f) | uStack_6c;
code_r0x08004500:
    sym.writel(uStack_6c,arg1[(*puVar15 >> 5 & 3) + 0x99] + *puVar13);
    if ((uVar9 & uVar6) == 0) {
        uVar9 = *puVar15;
        uVar5 = 0;
        if ((uVar9 & 0x4000000000000000) != 0) {
            uVar5 = 1 << (uVar9 >> 0x39 & 0x1f);
        }
        sym.writel(uVar5,arg1[(uVar9 >> 5 & 3) + 0x99] + *(iVar17 + uVar16 * 0x50 + 0x30));
    }
    if ((arg1[(*(param_1 + 8) >> 6 & 0x3ffffff) + 0x84] >> (*(param_1 + 8) & 0x3f) & 1) != 0) {
        sym.msm_gpio_update_dual_edge_pos(arg1,iVar7);
    }
    _raw_spin_unlock_irqrestore(arg1 + 0x83,uVar8);
    if ((param_2 & 0xc) != 0) {
        iVar7 = *(param_1 + 0x10);
        pcVar11 = sym.handle_level_irq.cfi_jt;
        goto code_r0x080045bc;
    }
    if ((param_2 & 3) != 0) {
        iVar7 = *(param_1 + 0x10);
        pcVar11 = sym.handle_edge_irq.cfi_jt;
        goto code_r0x080045bc;
    }
code_r0x080045c0:
    while (iVar7 = sp_el0, *(iVar7 + 0x5e0) != iStack_68) {
        __stack_chk_fail();
        uVar9 = extraout_x8;
        puVar15 = extraout_x9;
code_r0x08004608:
        Hint_Prefetch(puVar15,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(puVar15,0x10);
            if (bVar2) {
                *puVar15 = *puVar15 & (uVar9 ^ 0xffffffffffffffff);
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        iVar7 = *(param_1 + 0x10);
        pcVar11 = sym.handle_fasteoi_irq.cfi_jt;
code_r0x080045bc:
        *(iVar7 + 0x70) = pcVar11;
    }
    return 0;
}


// ===== sym.msm_gpio_irq_set_wake.ed672156799e8aae44ccfb4ca27872b0.cfi_jt @ 0x08001810 (size 8) =====

void sym.msm_gpio_irq_set_wake.ed672156799e8aae44ccfb4ca27872b0.cfi_jt(int64_t param_1,uint param_2)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = gpiochip_get_data(*(param_1 + 0x30));
    if ((*(param_1 + 0x28) != 0) &&
       ((*(iVar1 + (*(param_1 + 8) >> 6 & 0x3ffffff) * 8 + 0x470) >> (*(param_1 + 8) & 0x3f) & 1) != 0)) {
        irq_chip_set_wake_parent(param_1,param_2);
        return;
    }
    irq_set_irq_wake(*(iVar1 + 0x410),param_2);
    return;
}


// ===== sym.msm_config_group_get.ed672156799e8aae44ccfb4ca27872b0.cfi_jt @ 0x08001818 (size 8) =====

ulong sym.msm_config_group_get.ed672156799e8aae44ccfb4ca27872b0.cfi_jt
                (ulong param_1,uint32_t param_2,uint64_t *param_3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    ulong uVar6;
    int iVar7;
    ulong *in_x18;
    uint64_t uVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = pinctrl_dev_get_drvdata();
    uVar10 = *param_3;
    uVar8 = param_2;
    uVar6 = 0xfffffdf4;
    uVar1 = uVar10 & 0xff;
    iVar9 = *(*(iVar5 + 0x4c0) + 0x20);
    switch(uVar10 & 0xff) {
    case 0:
    case 1:
    case 3:
    case 5:
        uVar4 = 3;
        uVar11 = *(iVar9 + uVar8 * 0x50 + 0x38) >> 0xc & 0x1f;
        goto code_r0x080032cc;
    case 2:
    case 4:
    case 7:
    case 8:
    case 10:
    case 0xb:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
        goto code_r0x080034c4;
    case 6:
        iVar9 = iVar9 + uVar8 * 0x50;
        uVar8 = *(iVar9 + 0x38);
        uVar4 = sym.readl(*(iVar5 + (uVar8 >> 5 & 3) * 8 + 0x4c8) + *(iVar9 + 0x24));
        if ((uVar4 >> (uVar8 >> 0x16 & 0x1f) & 1) == 0) {
            return 0xffffffea;
        }
        break;
    case 9:
        iVar9 = iVar9 + uVar8 * 0x50;
        uVar8 = *(iVar9 + 0x38);
        uVar4 = sym.readl(*(iVar5 + (uVar8 >> 5 & 3) * 8 + 0x4c8) + *(iVar9 + 0x24));
        iVar7 = (uVar4 >> (uVar8 >> 0x11 & 0x1f) & 7) * 2 + 2;
        goto code_r0x080034ac;
    case 0xc:
    case 0x11:
        uVar4 = 1;
        uVar11 = *(iVar9 + uVar8 * 0x50 + 0x38) >> 0x25 & 0x1f;
code_r0x080032cc:
        iVar9 = iVar9 + uVar8 * 0x50;
        uVar3 = sym.readl(*(iVar5 + (*(iVar9 + 0x38) >> 5 & 3) * 8 + 0x4c8) + *(iVar9 + 0x24));
        uVar2 = uVar10 & 0xff;
        uVar4 = uVar3 >> uVar11 & uVar4;
        if (uVar2 < 0x12) {
    //WARNING: Jumptable with 0 entries at 0x08003324
    //WARNING: Treating indirect jump as call
            uVar6 = (*(*((uVar10 & 0xff) + 0x8000727) * 4 + 0x8003328))(0xfffffdf4);
            return uVar6;
        }
        if (uVar2 == 0x80) {
            if ((uVar3 >> 0xb & 1) == 0) {
                return 0xffffffea;
            }
            if (uVar4 == 0) {
                return 0xffffffea;
            }
        }
        else {
            if (uVar2 != 0x81) {
                return 0xfffffdf4;
            }
            if ((uVar3 >> 0xb & 1) == 0) {
                return 0xffffffea;
            }
            if (uVar4 != 0) {
                return 0xffffffea;
            }
        }
        break;
    default:
        if (uVar1 - 0x80 < 2) {
            uVar4 = 1;
            uVar11 = 0xc;
            goto code_r0x080032cc;
        }
        if (uVar1 != 0x82) {
            return 0xfffffdf4;
        }
        iVar9 = iVar9 + uVar8 * 0x50;
        sym.readl(*(iVar5 + (*(iVar9 + 0x38) >> 5 & 3) * 8 + 0x4c8) + *(iVar9 + 0x24));
    }
    iVar7 = 1;
code_r0x080034ac:
    uVar6 = 0;
    *param_3 = uVar1 | iVar7 << 8;
code_r0x080034c4:
    return uVar6;
}


// ===== sym.msm_pinctrl_hibernation_suspend.ed672156799e8aae44ccfb4ca27872b0.cfi_jt @ 0x08001820 (size 8) =====

ulong sym.msm_pinctrl_hibernation_suspend.ed672156799e8aae44ccfb4ca27872b0.cfi_jt(void)

{
    int64_t iVar1;
    uint32_t *puVar2;
    int64_t arg1;
    code *pcVar3;
    uint uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    int64_t iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = _segment.ehdr;
    if (*(_segment.ehdr + 0x508) != '\0') {
        iVar7 = *(_segment.ehdr + 0x4c0);
        if (*(iVar7 + 0x40) != 0) {
            iVar8 = 0;
            uVar9 = 0;
            iVar6 = _segment.ehdr + 0x4c8;
            do {
                if (iVar8 == 0x20) {
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(0x5512,0x8005228);
                    (*pcVar3)();
                }
                iVar1 = *(iVar6 + iVar8) + *(*(iVar7 + 0x80) + uVar9 * 4);
                _printk(0x8000431,iVar1);
                uVar4 = sym.readl_relaxed(iVar1);
                iVar10 = iVar8 * 4;
                *(*(arg1 + 0x500) + iVar10) = uVar4;
                uVar4 = sym.readl_relaxed(iVar1 + 4);
                *(*(arg1 + 0x500) + iVar10 + 4) = uVar4;
                uVar4 = sym.readl_relaxed(iVar1 + 8);
                *(*(arg1 + 0x500) + iVar10 + 8) = uVar4;
                uVar4 = sym.readl_relaxed(iVar1 + 0xc);
                *(*(arg1 + 0x500) + iVar10 + 0xc) = uVar4;
                uVar4 = sym.readl_relaxed(iVar1 + 0x10);
                *(*(arg1 + 0x500) + iVar10 + 0x10) = uVar4;
                uVar4 = sym.readl_relaxed(iVar1 + 0x14);
                *(*(arg1 + 0x500) + iVar10 + 0x14) = uVar4;
                uVar4 = sym.readl_relaxed(iVar1 + 0x18);
                *(*(arg1 + 0x500) + iVar10 + 0x18) = uVar4;
                uVar4 = sym.readl_relaxed(iVar1 + 0x1c);
                uVar9 = uVar9 + 1;
                iVar8 = iVar8 + 8;
                *(*(arg1 + 0x500) + iVar10 + 0x1c) = uVar4;
            } while (uVar9 < *(iVar7 + 0x40));
        }
        if (*(iVar7 + 0x2c) == 0) {
            uVar9 = 0;
        }
        else {
            iVar6 = 0;
            uVar9 = 0;
            iVar8 = 0x24;
            do {
                uVar5 = sym.msm_gpio_needs_valid_mask(arg1);
                if (((uVar5 & 1) == 0) ||
                   ((*(*(arg1 + 0x250) + (uVar9 >> 6 & 0x3ffffff) * 8) >> (uVar9 & 0x3f) & 1) != 0)) {
                    iVar1 = arg1 + 0x4c8;
                    puVar2 = *(iVar7 + 0x20) + iVar8;
                    uVar4 = sym.readl(*(iVar1 + (*(puVar2 + 5) >> 5 & 3) * 8) + *puVar2);
                    *(*(arg1 + 0x4f8) + iVar6) = uVar4;
                    uVar4 = sym.readl(*(iVar1 + (*(puVar2 + 5) >> 5 & 3) * 8) + puVar2[1]);
                    *(*(arg1 + 0x4f8) + iVar6 + 4) = uVar4;
                    uVar4 = sym.readl(*(iVar1 + (*(puVar2 + 5) >> 5 & 3) * 8) + puVar2[2]);
                    *(*(arg1 + 0x4f8) + iVar6 + 8) = uVar4;
                    uVar4 = sym.readl(*(iVar1 + (*(puVar2 + 5) >> 5 & 3) * 8) + puVar2[3]);
                    *(*(arg1 + 0x4f8) + iVar6 + 0xc) = uVar4;
                }
                uVar9 = uVar9 + 1;
                iVar6 = iVar6 + 0x10;
                iVar8 = iVar8 + 0x50;
            } while (uVar9 < *(iVar7 + 0x2c));
        }
        if (uVar9 < *(iVar7 + 0x28)) {
            uVar5 = uVar9 & 0xffffffff;
            iVar6 = uVar5 << 4;
            iVar8 = (uVar5 + (uVar9 & 0xffffffff) * 4) * 0x10;
            do {
                iVar10 = *(iVar7 + 0x20);
                iVar1 = iVar10 + iVar8;
                if (*(iVar1 + 0x24) != 0) {
                    uVar4 = sym.readl(*(arg1 + (*(iVar1 + 0x38) >> 5 & 3) * 8 + 0x4c8) + *(iVar1 + 0x24));
                    *(*(arg1 + 0x4f8) + iVar6) = uVar4;
                }
                if (*(iVar1 + 0x28) != 0) {
                    uVar4 = sym.readl(*(arg1 + (*(iVar10 + iVar8 + 0x38) >> 5 & 3) * 8 + 0x4c8) + *(iVar1 + 0x28));
                    *(*(arg1 + 0x4f8) + iVar6 + 4) = uVar4;
                }
                uVar5 = uVar5 + 1;
                iVar6 = iVar6 + 0x10;
                iVar8 = iVar8 + 0x50;
            } while (uVar5 < *(iVar7 + 0x28));
        }
    }
    return 0;
}


// ===== sym.msm_get_function_name.ed672156799e8aae44ccfb4ca27872b0.cfi_jt @ 0x08001828 (size 8) =====

ulong sym.msm_get_function_name.ed672156799e8aae44ccfb4ca27872b0.cfi_jt(ulong param_1,uint32_t param_2)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = pinctrl_dev_get_drvdata();
    return *(*(*(iVar1 + 0x4c0) + 0x10) + param_2 * 0x18);
}


// ===== sym.msm_get_group_name.ed672156799e8aae44ccfb4ca27872b0.cfi_jt @ 0x08001830 (size 8) =====

ulong sym.msm_get_group_name.ed672156799e8aae44ccfb4ca27872b0.cfi_jt(ulong param_1,uint32_t param_2)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = pinctrl_dev_get_drvdata();
    return *(*(*(iVar1 + 0x4c0) + 0x20) + param_2 * 0x50);
}


// ===== sym.msm_pinmux_request_gpio.ed672156799e8aae44ccfb4ca27872b0.cfi_jt @ 0x08001838 (size 8) =====

ulong sym.msm_pinmux_request_gpio.ed672156799e8aae44ccfb4ca27872b0.cfi_jt
                (ulong param_1,ulong param_2,uint64_t param_3)

{
    int64_t iVar1;
    ulong uVar2;
    uint64_t noname_0;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    param_3 = param_3 & 0xffffffff;
    iVar1 = pinctrl_dev_get_drvdata();
    iVar3 = *(*(iVar1 + 0x4c0) + 0x20);
    if (*(iVar3 + param_3 * 0x50 + 0x20) == 0) {
        uVar2 = 0;
    }
    else {
        noname_0 = *(*(iVar1 + 0x4c0) + 0x6c);
        uVar2 = sym.msm_pinmux_set_mux(noname_0,*(*(iVar3 + param_3 * 0x50 + 0x18) + noname_0 * 4),param_3);
    }
    return uVar2;
}


// ===== sym.msm_qup_write.cfi_jt @ 0x08001840 (size 8) =====

ulong sym.msm_qup_write.cfi_jt(uint32_t param_1,uint32_t param_2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint32_t *puVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(*(_segment.ehdr + 0x4c0) + 0x68);
    uVar2 = uVar1;
    if (0 < uVar1) {
        puVar3 = *(*(_segment.ehdr + 0x4c0) + 0x60) + 4;
        do {
            if (puVar3[-1] == param_1) {
                sym.writel_relaxed(param_2 & 0x3f,*(_segment.ehdr + 0x4c8) + *puVar3);
                return 0;
            }
            puVar3 = puVar3 + 2;
            uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
    }
    return 0xfffffffe;
}


// ===== sym.msm_qup_read.cfi_jt @ 0x08001848 (size 8) =====

uint32_t sym.msm_qup_read.cfi_jt(uint32_t param_1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint32_t *puVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(*(_segment.ehdr + 0x4c0) + 0x68);
    uVar2 = uVar1;
    if (0 < uVar1) {
        puVar3 = *(*(_segment.ehdr + 0x4c0) + 0x60) + 4;
        do {
            if (puVar3[-1] == param_1) {
                uVar1 = sym.readl_relaxed(*(_segment.ehdr + 0x4c8) + *puVar3);
                return uVar1 & 0x3f;
            }
            puVar3 = puVar3 + 2;
            uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
    }
    return 0xfffffffe;
}


// ===== sym.pinconf_generic_dt_node_to_map_group.ed672156799e8aae44ccfb4ca27872b0.cfi_jt @ 0x08001850 (size 8) =====

void sym.pinconf_generic_dt_node_to_map_group.ed672156799e8aae44ccfb4ca27872b0.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pinconf_generic_dt_node_to_map();
    return;
}


// ===== sym.handle_level_irq.cfi_jt @ 0x08001858 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.handle_level_irq.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.msm_gpio_irq_handler.ed672156799e8aae44ccfb4ca27872b0.cfi_jt @ 0x08001860 (size 8) =====

void sym.msm_gpio_irq_handler.ed672156799e8aae44ccfb4ca27872b0.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong uVar4;
    ulong *in_x18;
    int64_t iVar5;
    code *pcVar6;
    int64_t iVar7;
    int iVar8;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(param_1 + 8);
    iVar2 = gpiochip_get_data(iVar5);
    iVar7 = *(param_1 + 0x48);
    if (*(iVar7 + 0x50) == 0) {
        pcVar6 = *(iVar7 + 0x40);
        if (pcVar6 == NULL) {
            pcVar6 = *(iVar7 + 0x38);
            if (6 < (pcVar6 + -0x80017d0 >> 3 | pcVar6 << 0x3d)) {
                __cfi_slowpath_diag(0x12432ee19d152236,pcVar6,0x80002f0);
            }
            (*pcVar6)(param_1 + 0x30);
            pcVar6 = *(iVar7 + 0x30);
            if (pcVar6 != NULL) {
                if (6 < (pcVar6 + -0x80017d0 >> 3 | pcVar6 << 0x3d)) {
                    __cfi_slowpath_diag(0x12432ee19d152236,pcVar6,0x8000310);
                }
                (*pcVar6)(param_1 + 0x30);
            }
        }
        else {
            if (6 < (pcVar6 + -0x80017d0 >> 3 | pcVar6 << 0x3d)) {
                __cfi_slowpath_diag(0x12432ee19d152236,pcVar6,0x80002d0);
            }
            (*pcVar6)(param_1 + 0x30);
        }
    }
    uVar1 = _find_first_bit(iVar2 + 0x448,*(iVar2 + 0xa4));
    if (uVar1 < *(iVar2 + 0xa4)) {
        iVar8 = 0;
        do {
            iVar9 = *(*(iVar2 + 0x4c0) + 0x20) + uVar1 * 0x50;
            uVar3 = sym.readl(*(iVar2 + (*(iVar9 + 0x38) >> 5 & 3) * 8 + 0x4c8) + *(iVar9 + 0x30));
            if (((uVar3 & 0xffffffff) >> (*(iVar9 + 0x38) >> 0x39 & 0x1f) & 1) != 0) {
                generic_handle_domain_irq(*(iVar5 + 0x110),uVar1);
                iVar8 = iVar8 + 1;
            }
            uVar1 = _find_next_bit(iVar2 + 0x448,0,*(iVar2 + 0xa4),(uVar1 << 0x20) + 0x100000000 >> 0x20,0,0);
        } while (uVar1 < *(iVar2 + 0xa4));
        if (iVar8 == 0) goto code_r0x08004bf0;
        pcVar6 = *(iVar7 + 0x50);
        if (pcVar6 == NULL) goto code_r0x08004c00;
code_r0x08004bcc:
        if ((pcVar6 + -0x80017d0 >> 3 | pcVar6 << 0x3d) < 7) goto code_r0x08004c1c;
        uVar4 = 0x8000330;
    }
    else {
code_r0x08004bf0:
        handle_bad_irq(param_1);
        pcVar6 = *(iVar7 + 0x50);
        if (pcVar6 != NULL) goto code_r0x08004bcc;
code_r0x08004c00:
        pcVar6 = *(iVar7 + 0x48);
        if ((pcVar6 + -0x80017d0 >> 3 | pcVar6 << 0x3d) < 7) goto code_r0x08004c1c;
        uVar4 = 0x8000350;
    }
    __cfi_slowpath_diag(0x12432ee19d152236,pcVar6,uVar4);
code_r0x08004c1c:
    (*pcVar6)(param_1 + 0x30);
    return;
}


// ===== sym.handle_fasteoi_ack_irq.cfi_jt @ 0x08001868 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.handle_fasteoi_ack_irq.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.handle_fasteoi_irq.cfi_jt @ 0x08001870 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.handle_fasteoi_irq.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.handle_bad_irq.cfi_jt @ 0x08001878 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.handle_bad_irq.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.handle_edge_irq.cfi_jt @ 0x08001880 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.handle_edge_irq.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.msm_gpio_direction_output.ed672156799e8aae44ccfb4ca27872b0.cfi_jt @ 0x08001888 (size 8) =====

ulong sym.msm_gpio_direction_output.ed672156799e8aae44ccfb4ca27872b0.cfi_jt
                (ulong param_1,uint64_t param_2,int param_3)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    ulong uVar6;
    ulong *in_x18;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = gpiochip_get_data();
    iVar7 = *(*(iVar5 + 0x4c0) + 0x20);
    uVar6 = _raw_spin_lock_irqsave(iVar5 + 0x418);
    iVar1 = iVar5 + 0x4c8;
    iVar7 = iVar7 + (param_2 & 0xffffffff) * 0x50;
    uVar3 = sym.readl(*(iVar1 + (*(iVar7 + 0x38) >> 5 & 3) * 8) + *(iVar7 + 0x28));
    uVar2 = 1 << (*(iVar7 + 0x38) >> 0x2f & 0x1f);
    uVar4 = uVar3 & (uVar2 ^ 0xffffffff);
    if (param_3 != 0) {
        uVar4 = uVar3 | uVar2;
    }
    sym.writel(uVar4,*(iVar1 + (*(iVar7 + 0x38) >> 5 & 3) * 8) + *(iVar7 + 0x28));
    uVar4 = sym.readl(*(iVar1 + (*(iVar7 + 0x38) >> 5 & 3) * 8) + *(iVar7 + 0x24));
    sym.writel(uVar4 | 1 << (*(iVar7 + 0x38) >> 0x25 & 0x1f),
               *(iVar1 + (*(iVar7 + 0x38) >> 5 & 3) * 8) + *(iVar7 + 0x24));
    _raw_spin_unlock_irqrestore(iVar5 + 0x418,uVar6);
    return 0;
}


// ===== sym.msm_gpio_irq_reqres.ed672156799e8aae44ccfb4ca27872b0.cfi_jt @ 0x08001890 (size 8) =====

int sym.msm_gpio_irq_reqres.ed672156799e8aae44ccfb4ca27872b0.cfi_jt(int64_t param_1)

{
    int iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    ulong uVar5;
    uint64_t noname_0;
    int64_t iVar6;
    ulong *in_x18;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = *(param_1 + 0x30);
    iVar3 = gpiochip_get_data(iVar7);
    uVar4 = try_module_get(*(iVar7 + 0x18));
    if ((uVar4 & 1) == 0) {
        return -0x13;
    }
    uVar4 = *(param_1 + 8);
    iVar3 = pinctrl_dev_get_drvdata(*(iVar3 + 8));
    iVar6 = *(*(iVar3 + 0x4c0) + 0x20);
    if (*(iVar6 + uVar4 * 0x50 + 0x20) != 0) {
        noname_0 = *(*(iVar3 + 0x4c0) + 0x6c);
        iVar1 = sym.msm_pinmux_set_mux(noname_0,*(*(iVar6 + uVar4 * 0x50 + 0x18) + noname_0 * 4),uVar4);
        if (iVar1 != 0) goto code_r0x0800479c;
    }
    uVar2 = *(param_1 + 8);
    iVar3 = gpiochip_get_data(iVar7);
    iVar6 = *(*(iVar3 + 0x4c0) + 0x20);
    uVar5 = _raw_spin_lock_irqsave(iVar3 + 0x418);
    iVar6 = iVar6 + uVar2 * 0x50;
    uVar2 = sym.readl(*(iVar3 + 0x4c8 + (*(iVar6 + 0x38) >> 5 & 3) * 8) + *(iVar6 + 0x24));
    sym.writel(uVar2 & (1 << (*(iVar6 + 0x38) >> 0x25 & 0x1f) ^ 0xffffffffU),
               *(iVar3 + 0x4c8 + (*(iVar6 + 0x38) >> 5 & 3) * 8) + *(iVar6 + 0x24));
    _raw_spin_unlock_irqrestore(iVar3 + 0x418,uVar5);
    iVar1 = gpiochip_lock_as_irq(iVar7,*(param_1 + 8));
    if (iVar1 == 0) {
        irq_modify_status(*(param_1 + 4),0,0x80000);
        return 0;
    }
    _dev_err(*(iVar7 + 0x10),"unable to lock HW IRQ %lu for IRQ\n",*(param_1 + 8));
    iVar1 = -0x16;
code_r0x0800479c:
    module_put(*(iVar7 + 0x18));
    return iVar1;
}


// ===== sym.msm_pinctrl_suspend @ 0x08001898 (size 44) =====

void sym.msm_pinctrl_suspend(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pinctrl_force_sleep(*(*(arg1 + 0x98) + 8));
    return;
}


// ===== sym.msm_pinctrl_resume @ 0x080018c4 (size 44) =====

void sym.msm_pinctrl_resume(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pinctrl_force_default(*(*(arg1 + 0x98) + 8));
    return;
}


// ===== sym.msm_gpio_mpm_wake_set @ 0x080018f0 (size 240) =====

ulong sym.msm_gpio_mpm_wake_set(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    ulong uVar3;
    uint32_t uVar4;
    ulong *in_x18;
    uint32_t *puVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(*(_segment.ehdr + 0x4c0) + 0x20);
    puVar5 = iVar6 + (arg1 & 0xffffffffU) * 0x50 + 0x48;
    if (*puVar5 == 0xffffffff) {
        uVar3 = 0xfffffffe;
    }
    else {
        uVar3 = _raw_spin_lock_irqsave(_segment.ehdr + 0x418);
        iVar6 = iVar6 + (arg1 & 0xffffffffU) * 0x50;
        uVar2 = sym.readl_relaxed(*(_segment.ehdr + (*(iVar6 + 0x38) >> 5 & 3) * 8 + 0x4c8) + *(iVar6 + 0x44));
        uVar4 = 1L << (*puVar5 & 0x3f);
        uVar1 = uVar2 | uVar4;
        if ((arg2 & 1U) == 0) {
            uVar1 = uVar2 & (uVar4 ^ 0xffffffff);
        }
        sym.writel_relaxed(uVar1,*(_segment.ehdr + (*(iVar6 + 0x38) >> 5 & 3) * 8 + 0x4c8) + *(iVar6 + 0x44));
        _raw_spin_unlock_irqrestore(_segment.ehdr + 0x418,uVar3);
        uVar3 = 0;
    }
    return uVar3;
}


// ===== sym.readl_relaxed @ 0x080019e0 (size 108) =====

uint sym.readl_relaxed(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x80019e4);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x8001a18);
    return uVar1;
}


// ===== sym.writel_relaxed @ 0x08001a50 (size 120) =====

void sym.writel_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8001a6c);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8001a94);
    return;
}


// ===== sym.msm_gpio_get_pin_address @ 0x08001ac8 (size 284) =====

ulong sym.msm_gpio_get_pin_address(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    ulong uVar4;
    int64_t iVar5;
    int64_t *piVar6;
    int64_t iVar7;
    ulong *in_x18;
    int64_t iVar8;
    uint64_t uVar9;
    int64_t iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == NULL) {
        _printk(0x800064e);
        uVar4 = 0;
    }
    else {
        iVar8 = *_segment.ehdr;
        uVar9 = arg1 - _segment.ehdr[0x14];
        uVar3 = gpiochip_line_is_valid(_segment.ehdr + 2,uVar9);
        uVar4 = 0;
        if ((arg2 != 0) && ((uVar3 & 1) != 0)) {
            iVar5 = iVar8 + -0x10;
            iVar7 = *(_segment.ehdr[0x98] + 0x38);
            iVar10 = *(_segment.ehdr[0x98] + 0x20);
            if (iVar7 == 0) {
                piVar6 = platform_get_resource(iVar5,0x200,0);
            }
            else {
                piVar6 = platform_get_resource_byname
                                   (iVar5,0x200,*(iVar7 + (*(iVar10 + uVar9 * 0x50 + 0x38) >> 5 & 3) * 8));
            }
            if (piVar6 == NULL) {
                _dev_err(iVar8,"failed to get resource\n");
                uVar4 = 0;
            }
            else {
                uVar4 = 1;
                iVar10 = iVar10 + uVar9 * 0x50;
                iVar8 = *piVar6 + *(iVar10 + 0x24);
                *arg2 = iVar8;
                uVar1 = *(iVar10 + 0x38) & 0x1f;
                uVar2 = 0x1000;
                if (uVar1 != 0) {
                    uVar2 = uVar1 << 0xc;
                }
                *(arg2 + 8) = iVar8 + uVar2 + -1;
            }
        }
    }
    return uVar4;
}


// ===== sym.msm_qup_write @ 0x08001be4 (size 120) =====

ulong sym.msm_qup_write(uint32_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint32_t *puVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(*(_segment.ehdr + 0x4c0) + 0x68);
    uVar2 = uVar1;
    if (0 < uVar1) {
        puVar3 = *(*(_segment.ehdr + 0x4c0) + 0x60) + 4;
        do {
            if (puVar3[-1] == arg1) {
                sym.writel_relaxed(arg2 & 0x3f,*(_segment.ehdr + 0x4c8) + *puVar3);
                return 0;
            }
            puVar3 = puVar3 + 2;
            uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
    }
    return 0xfffffffe;
}


// ===== sym.msm_qup_read @ 0x08001c5c (size 116) =====

uint32_t sym.msm_qup_read(uint32_t arg1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint32_t *puVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(*(_segment.ehdr + 0x4c0) + 0x68);
    uVar2 = uVar1;
    if (0 < uVar1) {
        puVar3 = *(*(_segment.ehdr + 0x4c0) + 0x60) + 4;
        do {
            if (puVar3[-1] == arg1) {
                uVar1 = sym.readl_relaxed(*(_segment.ehdr + 0x4c8) + *puVar3);
                return uVar1 & 0x3f;
            }
            puVar3 = puVar3 + 2;
            uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
    }
    return 0xfffffffe;
}


// ===== sym.msm_spare_write @ 0x08001cd0 (size 104) =====

ulong sym.msm_spare_write(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(_segment.ehdr + 0x4c0) + 0x70);
    if (((iVar3 == 0) || (*(*(_segment.ehdr + 0x4c0) + 0x78) <= arg1)) || (uVar1 = *(iVar3 + arg1 * 8 + 4), uVar1 == 0)
       ) {
        uVar2 = 0xfffffffe;
    }
    else {
        sym.writel_relaxed(arg2 & 0xff00,*(_segment.ehdr + 0x4c8) + uVar1);
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.msm_spare_read @ 0x08001d38 (size 100) =====

uint32_t sym.msm_spare_read(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(_segment.ehdr + 0x4c0) + 0x70);
    if (((iVar2 == 0) || (*(*(_segment.ehdr + 0x4c0) + 0x78) <= arg1)) || (uVar1 = *(iVar2 + arg1 * 8 + 4), uVar1 == 0)
       ) {
        uVar1 = 0xfffffffe;
    }
    else {
        uVar1 = sym.readl_relaxed(*(_segment.ehdr + 0x4c8) + uVar1);
        uVar1 = uVar1 & 0xff00;
    }
    return uVar1;
}


// ===== sym.msm_pinctrl_probe @ 0x08001d9c (size 880) =====

uint64_t sym.msm_pinctrl_probe(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    code *pcVar2;
    int iVar3;
    int iVar4;
    int64_t *arg1_00;
    ulong uVar5;
    uint64_t uVar6;
    ulong *puVar7;
    ulong *in_x18;
    int iVar8;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = arg1 + 0x10;
    arg1_00 = devm_kmalloc(piVar1,0x510,0xdc0);
    if (arg1_00 == NULL) {
        _segment.ehdr = arg1_00;
        return 0xfffffff4;
    }
    _segment.ehdr = arg1_00;
    *(arg1_00 + 0xa1) = 0;
    *arg1_00 = piVar1;
    arg1_00[0x98] = arg2;
    memcpy(arg1_00 + 2,obj.msm_gpio_template,0x270);
    iVar3 = of_device_is_compatible(*(arg1 + 0x300),"qcom,ipq8064-pinctrl");
    puVar7 = *(arg2 + 0x38);
    *(arg1_00 + 0x83) = 0;
    *(arg1_00 + 0x414) = iVar3 != 0;
    if (puVar7 == NULL) {
        puVar7 = platform_get_resource(arg1,0x200,0);
        if (puVar7 == NULL) {
            return 0xfffffffe;
        }
        uVar6 = devm_ioremap_resource(piVar1,puVar7);
        arg1_00[0x99] = uVar6;
        if (0xfffffffffffff000 < uVar6) {
            return uVar6;
        }
        *(arg1_00 + 0x9d) = *puVar7;
    }
    else if (*(arg2 + 0x40) != 0) {
        uVar5 = platform_get_resource_byname(arg1,0x200,*puVar7);
        uVar6 = devm_ioremap_resource(piVar1,uVar5);
        arg1_00[0x99] = uVar6;
        if (0xfffffffffffff000 < uVar6) {
            return uVar6;
        }
        if (1 < *(arg2 + 0x40)) {
            uVar5 = platform_get_resource_byname(arg1,0x200,*(*(arg2 + 0x38) + 8));
            uVar6 = devm_ioremap_resource(piVar1,uVar5);
            arg1_00[0x9a] = uVar6;
            if (0xfffffffffffff000 < uVar6) {
                return uVar6;
            }
            if (2 < *(arg2 + 0x40)) {
                uVar5 = platform_get_resource_byname(arg1,0x200,*(*(arg2 + 0x38) + 0x10));
                uVar6 = devm_ioremap_resource(piVar1,uVar5);
                arg1_00[0x9b] = uVar6;
                if (0xfffffffffffff000 < uVar6) {
                    return uVar6;
                }
                if (3 < *(arg2 + 0x40)) {
                    uVar5 = platform_get_resource_byname(arg1,0x200,*(*(arg2 + 0x38) + 0x18));
                    uVar6 = devm_ioremap_resource(piVar1,uVar5);
                    arg1_00[0x9c] = uVar6;
                    if (0xfffffffffffff000 < uVar6) {
                        return uVar6;
                    }
                    if (4 < *(arg2 + 0x40)) {
                        uVar5 = platform_get_resource_byname(arg1,0x200,*(*(arg2 + 0x38) + 0x20));
                        devm_ioremap_resource(piVar1,uVar5);
    //WARNING: Does not return
                        pcVar2 = SoftwareBreakpoint(0x5512,0x8001f38);
                        (*pcVar2)();
                    }
                }
            }
        }
    }
    iVar3 = *(arg1_00[0x98] + 0x18);
    if (iVar3 != 0) {
        iVar9 = *(arg1_00[0x98] + 0x10);
        iVar8 = 0;
        do {
            iVar4 = strcmp(*(iVar9 + iVar8 * 0x18),"ps_hold");
            if (iVar4 == 0) {
                arg1_00[0x5b] = sym.msm_ps_hold_restart.ed672156799e8aae44ccfb4ca27872b0.cfi_jt;
                *(arg1_00 + 0x5d) = 0x80;
                iVar3 = register_restart_handler(arg1_00 + 0x5b);
                if (iVar3 != 0) {
                    _dev_err(*arg1_00,"failed to setup restart handler.\n");
                }
                _gpiochip_generic_free = sym.msm_ps_hold_poweroff.ed672156799e8aae44ccfb4ca27872b0.cfi_jt;
                _segment.ehdr = arg1_00;
                break;
            }
            iVar8 = iVar8 + 1;
        } while (iVar3 != iVar8);
    }
    uVar6 = platform_get_irq(arg1,0);
    *(arg1_00 + 0x82) = uVar6;
    if (-1 < uVar6) {
        arg1_00[0x56] = obj.__this_module;
        arg1_00[0x54] = reloc.msm_pinmux_request.ed672156799e8aae44ccfb4ca27872b0.cfi_jt;
        arg1_00[0x53] = reloc.msm_get_groups_count.ed672156799e8aae44ccfb4ca27872b0.cfi_jt;
        iVar9 = *(arg1 + 0x80);
        arg1_00[0x55] = obj.msm_pinconf_ops;
        if (iVar9 == 0) {
            iVar9 = *piVar1;
        }
        arg1_00[0x50] = iVar9;
        arg1_00[0x51] = *arg1_00[0x98];
        iVar9 = arg1_00[0x98][1];
        *(arg1_00 + 0x57) = 3;
        *(arg1_00 + 0x52) = iVar9;
        arg1_00[0x58] = obj.msm_gpio_bindings;
        uVar6 = devm_pinctrl_register(piVar1,arg1_00 + 0x50,arg1_00);
        arg1_00[1] = uVar6;
        if (uVar6 < 0xfffffffffffff001) {
            uVar6 = sym.msm_gpio_init(arg1_00);
            if (uVar6 == 0) {
                *(arg1 + 0xa8) = arg1_00;
                register_syscore_ops(obj.msm_pinctrl_data);
                uVar6 = register_pm_notifier(reloc.pinctrl_hibernation_notifier.ed672156799e8aae44ccfb4ca27872b0.cfi_jt)
                ;
            }
        }
        else {
            _dev_err(piVar1,"Couldn\'t register pinctrl driver\n");
            uVar6 = *(arg1_00 + 1);
        }
    }
    return uVar6;
}


// ===== sym.msm_gpio_init @ 0x0800210c (size 948) =====

int sym.msm_gpio_init(int64_t arg1)

{
    uint32_t uVar1;
    char cVar2;
    bool bVar3;
    code *pcVar4;
    int iVar5;
    int iVar6;
    uint *puVar7;
    uint64_t uVar8;
    ulong uVar9;
    uint64_t extraout_x8;
    int64_t *piVar10;
    int64_t iVar11;
    int64_t extraout_x9;
    int64_t iVar12;
    uint64_t *extraout_x10;
    uint64_t *puVar13;
    uint64_t uVar14;
    uint64_t extraout_x11;
    ulong *in_x18;
    ulong unaff_x30;
    int64_t aiStack_88 [11];
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    aiStack_88[10] = *(iVar12 + 0x5e0);
    uVar1 = *(*(arg1 + 0x4c0) + 0x2c);
    if (300 < uVar1) {
    //WARNING: Does not return
        pcVar4 = SoftwareBreakpoint(0x800,0x80024a0);
        (*pcVar4)();
    }
    piVar10 = *arg1;
    *(arg1 + 0xa4) = uVar1;
    *(arg1 + 0xa0) = 0xffffffff;
    iVar12 = piVar10[0xe];
    if (iVar12 == 0) {
        iVar12 = *piVar10;
    }
    *(arg1 + 0x10) = iVar12;
    *(arg1 + 0x20) = piVar10;
    *(arg1 + 0x28) = obj.__this_module;
    *(arg1 + 600) = piVar10[0x5e];
    if (*(*(arg1 + 0x4c0) + 0x48) == 0) {
        iVar5 = of_property_count_elems_of_size(piVar10[0x5e],"qcom,gpios-reserved",4);
        iVar6 = device_property_read_u16_array(*arg1,"gpios",0,0);
        if ((iVar5 < 1) || (iVar6 < 1)) {
            if ((iVar5 < 1) && (iVar6 < 1)) goto code_r0x08002190;
        }
        else {
            _dev_warn(*arg1,"qcom,gpios-reserved and gpios are both defined. Only one should be used.\n");
        }
    }
    *(arg1 + 0x90) = sym.msm_gpio_init_valid_mask.ed672156799e8aae44ccfb4ca27872b0.cfi_jt;
code_r0x08002190:
    *(arg1 + 0x2f8) = "msmgpio";
    *(arg1 + 0x348) = sym.msm_gpio_irq_set_affinity.ed672156799e8aae44ccfb4ca27872b0.cfi_jt;
    *(arg1 + 0x3e0) = sym.msm_gpio_irq_set_vcpu_affinity.ed672156799e8aae44ccfb4ca27872b0.cfi_jt;
    *(arg1 + 0x310) = sym.msm_gpio_irq_enable.ed672156799e8aae44ccfb4ca27872b0.cfi_jt;
    *(arg1 + 0x318) = sym.msm_gpio_irq_disable.ed672156799e8aae44ccfb4ca27872b0.cfi_jt;
    *(arg1 + 0x328) = sym.msm_gpio_irq_mask.ed672156799e8aae44ccfb4ca27872b0.cfi_jt;
    *(arg1 + 0x338) = sym.msm_gpio_irq_unmask.ed672156799e8aae44ccfb4ca27872b0.cfi_jt;
    *(arg1 + 800) = sym.msm_gpio_irq_ack.ed672156799e8aae44ccfb4ca27872b0.cfi_jt;
    *(arg1 + 0x358) = sym.msm_gpio_irq_set_type.ed672156799e8aae44ccfb4ca27872b0.cfi_jt;
    *(arg1 + 0x360) = sym.msm_gpio_irq_set_wake.ed672156799e8aae44ccfb4ca27872b0.cfi_jt;
    *(arg1 + 0x3b0) = sym.msm_gpio_irq_reqres.ed672156799e8aae44ccfb4ca27872b0.cfi_jt;
    *(arg1 + 0x3b8) = sym.msm_gpio_irq_relres.ed672156799e8aae44ccfb4ca27872b0.cfi_jt;
    *(arg1 + 0x408) = 0x205;
    iVar12 = of_parse_phandle(*(*arg1 + 0x2f0),"wakeup-parent",0);
    if (iVar12 == 0) goto code_r0x080022f4;
    aiStack_88[0] = iVar12 + 0x18;
    aiStack_88[8] = 0;
    aiStack_88[9] = 0;
    aiStack_88[6] = 0;
    aiStack_88[7] = 0;
    aiStack_88[4] = 0;
    aiStack_88[5] = 0;
    aiStack_88[2] = 0;
    aiStack_88[3] = 0;
    aiStack_88[1] = 0;
    iVar12 = irq_find_matching_fwspec(aiStack_88,9);
    *(arg1 + 0x138) = iVar12;
    if (iVar12 == 0) {
        iVar5 = -0x205;
        goto code_r0x0800241c;
    }
    *(arg1 + 0x140) = sym.msm_gpio_wakeirq.ed672156799e8aae44ccfb4ca27872b0.cfi_jt;
    *(arg1 + 0x340) = sym.__typeid__ZTSFvP8irq_dataE_global_addr;
    if ((*(iVar12 + 0x2a) & 1) == 0) goto code_r0x080022f4;
    iVar12 = *(arg1 + 0x4c0);
    if (*(iVar12 + 0x58) == 0) goto code_r0x080022f4;
    uVar8 = 0;
    iVar11 = 1;
    do {
        uVar1 = *(*(iVar12 + 0x50) + (-(uVar8 >> 0x1f) & 0xfffffff800000000 | uVar8 << 3));
        uVar14 = iVar11 << (uVar1 & 0x3f);
        puVar13 = arg1 + (uVar1 >> 3 & 0x1ffffff8) + 0x470;
        while( true ) {
            Hint_Prefetch(puVar13,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar13,0x10);
                if (bVar3) {
                    *puVar13 = *puVar13 | uVar14;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            iVar12 = *(arg1 + 0x4c0);
            uVar1 = uVar8 + 1;
            uVar8 = uVar1;
            if (uVar1 < *(iVar12 + 0x58)) break;
code_r0x080022f4:
            *(arg1 + 0x118) = arg1 + 0x2f0;
            *(arg1 + 0x1c8) = sym.msm_gpio_irq_handler.ed672156799e8aae44ccfb4ca27872b0.cfi_jt;
            uVar9 = *(*arg1 + 0x2f8);
            *(arg1 + 0x1d8) = 1;
            *(arg1 + 0x130) = uVar9;
            puVar7 = devm_kmalloc(*arg1,4,0xdc0);
            *(arg1 + 0x1e0) = puVar7;
            if (puVar7 == NULL) {
                iVar5 = -0xc;
            }
            else {
                iVar12 = arg1 + 0x10;
                *puVar7 = *(arg1 + 0x410);
                *(arg1 + 0x1b0) = 0;
                *(arg1 + 0x1a8) = sym.handle_bad_irq.cfi_jt;
                iVar5 = gpiochip_add_data_with_key(iVar12,arg1,0,0);
                if (iVar5 == 0) {
                    iVar11 = of_find_property(*(*arg1 + 0x2f0),"gpio-ranges",0);
                    if (iVar11 == 0) {
                        iVar11 = (*arg1)[0xe];
                        if (iVar11 == 0) {
                            iVar11 = **arg1;
                        }
                        iVar6 = gpiochip_add_pin_range(iVar12,iVar11,0,0,*(arg1 + 0xa4));
                        iVar5 = 0;
                        if (iVar6 != 0) {
                            _dev_err(*arg1,"Failed to add pin range\n");
                            gpiochip_remove(iVar12);
                            iVar5 = iVar6;
                        }
                    }
                    else {
                        iVar5 = 0;
                    }
                }
                else {
                    _dev_err(*arg1,"Failed register gpiochip\n");
                }
            }
code_r0x0800241c:
            iVar12 = sp_el0;
            if (*(iVar12 + 0x5e0) == aiStack_88[10]) {
                return iVar5;
            }
            __stack_chk_fail();
            uVar8 = extraout_x8;
            iVar11 = extraout_x9;
            puVar13 = extraout_x10;
            uVar14 = extraout_x11;
        }
    } while( true );
}


// ===== sym.msm_pinctrl_remove @ 0x080024c0 (size 64) =====

ulong sym.msm_pinctrl_remove(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0xa8);
    gpiochip_remove(iVar1 + 0x10);
    unregister_restart_handler(iVar1 + 0x2d8);
    return 0;
}


// ===== sym.msm_gpio_get_direction @ 0x08002500 (size 116) =====

bool sym.msm_gpio_get_direction(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = gpiochip_get_data();
    iVar3 = *(*(iVar1 + 0x4c0) + 0x20) + (arg1 & 0xffffffffU) * 0x50;
    uVar2 = sym.readl(*(iVar1 + (*(iVar3 + 0x38) >> 5 & 3) * 8 + 0x4c8) + *(iVar3 + 0x24));
    return ((uVar2 & 0xffffffff) >> (*(iVar3 + 0x38) >> 0x25 & 0x1f) & 1) == 0;
}


// ===== sym.msm_gpio_direction_input @ 0x08002574 (size 184) =====

ulong sym.msm_gpio_direction_input(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = gpiochip_get_data();
    iVar4 = *(*(iVar2 + 0x4c0) + 0x20);
    uVar3 = _raw_spin_lock_irqsave(iVar2 + 0x418);
    iVar4 = iVar4 + (arg1 & 0xffffffffU) * 0x50;
    uVar1 = sym.readl(*(iVar2 + 0x4c8 + (*(iVar4 + 0x38) >> 5 & 3) * 8) + *(iVar4 + 0x24));
    sym.writel(uVar1 & (1 << (*(iVar4 + 0x38) >> 0x25 & 0x1f) ^ 0xffffffffU),
               *(iVar2 + 0x4c8 + (*(iVar4 + 0x38) >> 5 & 3) * 8) + *(iVar4 + 0x24));
    _raw_spin_unlock_irqrestore(iVar2 + 0x418,uVar3);
    return 0;
}


// ===== sym.msm_gpio_direction_output @ 0x0800262c (size 260) =====

ulong sym.msm_gpio_direction_output(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    ulong uVar6;
    ulong *in_x18;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = gpiochip_get_data();
    iVar7 = *(*(iVar5 + 0x4c0) + 0x20);
    uVar6 = _raw_spin_lock_irqsave(iVar5 + 0x418);
    iVar1 = iVar5 + 0x4c8;
    iVar7 = iVar7 + (arg1 & 0xffffffffU) * 0x50;
    uVar3 = sym.readl(*(iVar1 + (*(iVar7 + 0x38) >> 5 & 3) * 8) + *(iVar7 + 0x28));
    uVar2 = 1 << (*(iVar7 + 0x38) >> 0x2f & 0x1f);
    uVar4 = uVar3 & (uVar2 ^ 0xffffffff);
    if (arg2 != 0) {
        uVar4 = uVar3 | uVar2;
    }
    sym.writel(uVar4,*(iVar1 + (*(iVar7 + 0x38) >> 5 & 3) * 8) + *(iVar7 + 0x28));
    uVar4 = sym.readl(*(iVar1 + (*(iVar7 + 0x38) >> 5 & 3) * 8) + *(iVar7 + 0x24));
    sym.writel(uVar4 | 1 << (*(iVar7 + 0x38) >> 0x25 & 0x1f),
               *(iVar1 + (*(iVar7 + 0x38) >> 5 & 3) * 8) + *(iVar7 + 0x24));
    _raw_spin_unlock_irqrestore(iVar5 + 0x418,uVar6);
    return 0;
}


// ===== sym.msm_gpio_get @ 0x08002730 (size 112) =====

uint32_t sym.msm_gpio_get(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = gpiochip_get_data();
    iVar3 = *(*(iVar1 + 0x4c0) + 0x20) + (arg1 & 0xffffffffU) * 0x50;
    uVar2 = sym.readl(*(iVar1 + (*(iVar3 + 0x38) >> 5 & 3) * 8 + 0x4c8) + *(iVar3 + 0x28));
    return (uVar2 & 0xffffffff) >> (*(iVar3 + 0x38) >> 0x2a & 0x1f) & 1;
}


// ===== sym.msm_gpio_set @ 0x080027a0 (size 196) =====

void sym.msm_gpio_set(ulong noname_0,int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    ulong uVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = gpiochip_get_data();
    iVar6 = *(*(iVar4 + 0x4c0) + 0x20);
    uVar5 = _raw_spin_lock_irqsave(iVar4 + 0x418);
    iVar6 = iVar6 + (arg1 & 0xffffffffU) * 0x50;
    uVar3 = sym.readl(*(iVar4 + 0x4c8 + (*(iVar6 + 0x38) >> 5 & 3) * 8) + *(iVar6 + 0x28));
    uVar2 = 1 << (*(iVar6 + 0x38) >> 0x2f & 0x1f);
    uVar1 = uVar3 & (uVar2 ^ 0xffffffff);
    if (arg2 != 0) {
        uVar1 = uVar3 | uVar2;
    }
    sym.writel(uVar1,*(iVar4 + 0x4c8 + (*(iVar6 + 0x38) >> 5 & 3) * 8) + *(iVar6 + 0x28));
    _raw_spin_unlock_irqrestore(iVar4 + 0x418,uVar5);
    return;
}


// ===== sym.msm_gpio_dbg_show @ 0x08002864 (size 532) =====

void sym.msm_gpio_dbg_show(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    uint32_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    char *pcVar5;
    code *pcVar6;
    bool bVar7;
    int64_t iVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    ulong *in_x18;
    uint64_t uVar12;
    int64_t iVar13;
    uint32_t uVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg2 + 0x94) != 0) {
        iVar13 = 0;
        uVar12 = 0;
        do {
            iVar8 = gpiochip_get_data(arg2);
            uVar9 = gpiochip_line_is_valid(arg2,uVar12 & 0xffffffff);
            if ((uVar9 & 1) != 0) {
                puVar1 = *(*(iVar8 + 0x4c0) + 0x20) + iVar13;
                uVar9 = sym.readl(*(iVar8 + 0x4c8 + (puVar1[7] >> 5 & 3) * 8) + *(puVar1 + 0x24));
                uVar10 = sym.readl(*(iVar8 + 0x4c8 + (puVar1[7] >> 5 & 3) * 8) + *(puVar1 + 5));
                uVar11 = puVar1[7];
                uVar14 = uVar9;
                bVar7 = (1L << (uVar11 >> 0x25 & 0x1f) & uVar9 & 0xffffffff) != 0;
                iVar3 = 0x2a;
                if (bVar7) {
                    iVar3 = 0x2f;
                }
                uVar2 = uVar14 >> (uVar11 >> 0xc & 0x1f) & 3;
                uVar4 = 0x80006bf;
                if (bVar7) {
                    uVar4 = 0x80003bb;
                }
                seq_printf(arg1," %-8s: %-3s",*puVar1,uVar4);
                pcVar5 = 0x80004cb;
                if (((uVar10 & 0xffffffff) >> (uVar11 >> iVar3 & 0x1f) & 1) != 0) {
                    pcVar5 = "high";
                }
                seq_printf(arg1," %-4s func%d",pcVar5,uVar14 >> (uVar11 >> 7 & 0x1f) & 7);
                seq_printf(arg1," %dmA",(uVar14 >> (uVar11 >> 0x11 & 0x1f) & 7) * 2 + 2);
                if (*(*(iVar8 + 0x4c0) + 0x30) == '\0') {
                    iVar8 = -0x20;
                    pcVar6 = obj.msm_gpio_dbg_show_one.pulls_keeper;
                }
                else {
                    if (uVar2 == 3) {
    //WARNING: Does not return
                        pcVar6 = SoftwareBreakpoint(0x5512,0x8002a78);
                        (*pcVar6)();
                    }
                    iVar8 = -0x18;
                    pcVar6 = obj.msm_gpio_dbg_show_one.pulls_no_keeper;
                }
                if (iVar8 + uVar2 * 8 == 0) {
    //WARNING: Does not return
                    pcVar6 = SoftwareBreakpoint(1,0x8002a74);
                    (*pcVar6)();
                }
                seq_printf(arg1,0x80003f3,*(pcVar6 + uVar2 * 8));
                seq_puts(arg1,0x8000619);
            }
            uVar12 = uVar12 + 1;
            iVar13 = iVar13 + 0x50;
        } while (uVar12 < *(arg2 + 0x94));
    }
    return;
}


// ===== sym.readl @ 0x08002a78 (size 124) =====

uint sym.readl(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8002a7c);
    uVar1 = *arg1;
    DataMemoryBarrier(0,1);
    log_post_read_mmio(uVar1,0x20,arg1,0x8002ac0);
    return uVar1;
}


// ===== sym.writel @ 0x08002af8 (size 124) =====

void sym.writel(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8002b14);
    DataMemoryBarrier(0,2);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8002b40);
    return;
}


// ===== sym.msm_ps_hold_restart @ 0x08002b74 (size 84) =====

ulong sym.msm_ps_hold_restart(int64_t arg1)

{
    bool bVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.writel(0,*(arg1 + 0x1f0) + 0x820);
    iVar2 = -1000;
    do {
        __const_udelay(0x418958);
        bVar1 = iVar2 != -1;
        iVar2 = iVar2 + 1;
    } while (bVar1);
    return 0;
}


// ===== sym.msm_ps_hold_poweroff @ 0x08002bc8 (size 88) =====

void sym.msm_ps_hold_poweroff(int64_t arg1)

{
    bool bVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.writel(0,*(_segment.ehdr + 0x4c8) + 0x820);
    iVar2 = -1000;
    do {
        __const_udelay(0x418958);
        bVar1 = iVar2 != -1;
        iVar2 = iVar2 + 1;
    } while (bVar1);
    return;
}


// ===== sym.msm_get_groups_count @ 0x08002c20 (size 44) =====

uint sym.msm_get_groups_count(void)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = pinctrl_dev_get_drvdata();
    return *(*(iVar1 + 0x4c0) + 0x28);
}


// ===== sym.msm_get_group_name @ 0x08002c4c (size 68) =====

ulong sym.msm_get_group_name(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = pinctrl_dev_get_drvdata();
    return *(*(*(iVar1 + 0x4c0) + 0x20) + (arg1 & 0xffffffffU) * 0x50);
}


// ===== sym.msm_get_group_pins @ 0x08002c90 (size 112) =====

ulong sym.msm_get_group_pins(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = pinctrl_dev_get_drvdata();
    *arg2 = *(*(*(iVar1 + 0x4c0) + 0x20) + (arg1 & 0xffffffffU) * 0x50 + 8);
    *arg3 = *(*(*(iVar1 + 0x4c0) + 0x20) + (arg1 & 0xffffffffU) * 0x50 + 0x10);
    return 0;
}


// ===== sym.pinconf_generic_dt_node_to_map_group @ 0x08002d00 (size 40) =====

void sym.pinconf_generic_dt_node_to_map_group(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pinconf_generic_dt_node_to_map();
    return;
}


// ===== sym.msm_pinmux_request @ 0x08002d28 (size 72) =====

uint sym.msm_pinmux_request(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = pinctrl_dev_get_drvdata();
    uVar2 = gpiochip_line_is_valid(iVar1 + 0x10,arg1 & 0xffffffff);
    uVar3 = 0;
    if ((uVar2 & 1) == 0) {
        uVar3 = 0xffffffea;
    }
    return uVar3;
}


// ===== sym.msm_get_functions_count @ 0x08002d70 (size 44) =====

uint sym.msm_get_functions_count(void)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = pinctrl_dev_get_drvdata();
    return *(*(iVar1 + 0x4c0) + 0x18);
}


// ===== sym.msm_get_function_name @ 0x08002d9c (size 68) =====

ulong sym.msm_get_function_name(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = pinctrl_dev_get_drvdata();
    return *(*(*(iVar1 + 0x4c0) + 0x10) + (arg1 & 0xffffffffU) * 0x18);
}


// ===== sym.msm_get_function_groups @ 0x08002de0 (size 112) =====

ulong sym.msm_get_function_groups(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = pinctrl_dev_get_drvdata();
    *arg2 = *(*(*(iVar1 + 0x4c0) + 0x10) + (arg1 & 0xffffffffU) * 0x18 + 8);
    *arg3 = *(*(*(iVar1 + 0x4c0) + 0x10) + (arg1 & 0xffffffffU) * 0x18 + 0x10);
    return 0;
}


// ===== sym.msm_pinmux_set_mux @ 0x08002e50 (size 840) =====

void sym.msm_pinmux_set_mux(ulong noname_0,int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    char cVar2;
    bool bVar3;
    code *pcVar4;
    uint32_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    uint64_t extraout_x8;
    uint64_t *extraout_x9;
    uint64_t *puVar9;
    uint64_t uVar10;
    int64_t iVar11;
    ulong *in_x18;
    uint32_t uVar12;
    uint64_t uVar13;
    uint32_t uVar14;
    uint32_t uVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    int64_t iVar18;
    uint64_t *puVar19;
    uint64_t uVar20;
    uint32_t uVar21;
    ulong unaff_x30;
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    uVar16 = arg2 & 0xffffffff;
    iStack_68 = *(iVar6 + 0x5e0);
    iVar6 = pinctrl_dev_get_drvdata();
    uStack_6c = 0;
    iVar7 = __irq_resolve_mapping(*(iVar6 + 0x120),uVar16,&uStack_6c);
    uVar12 = 0;
    if (iVar7 != 0) {
        uVar12 = uStack_6c;
    }
    uVar13 = uVar12;
    iVar7 = irq_get_irq_data(uVar13);
    iVar11 = *(*(iVar6 + 0x4c0) + 0x20);
    iVar18 = iVar11 + uVar16 * 0x50;
    uVar15 = *(*(iVar6 + 0x4c0) + 0x6c);
    uVar17 = uVar15;
    puVar19 = iVar18 + 0x38;
    uVar21 = *puVar19 >> 7 & 0x1f;
    uVar5 = *(iVar18 + 0x20);
    uVar14 = -1L << uVar21;
    if (uVar5 < 2) {
        uVar14 = 0xffffffffffffffff >> (-uVar21 & 0x3f) & uVar14;
        if (uVar5 == 0) {
            uVar21 = 0;
code_r0x08002f54:
            if (uVar21 != uVar5) {
                uVar20 = uVar16;
                if (iVar7 == 0) goto code_r0x08002fa4;
                if (uVar21 == uVar15) goto code_r0x08002fa4;
                uVar8 = 1L << (*(iVar7 + 8) & 0x3f);
                puVar9 = iVar6 + (*(iVar7 + 8) >> 6 & 0x3ffffff) * 8 + 0x498;
                while( true ) {
                    uVar15 = uVar17;
                    uVar12 = uVar13;
                    Hint_Prefetch(puVar9,2,0,1);
                    do {
                        uVar17 = *puVar9;
                        cVar2 = '\x01';
                        bVar3 = ExclusiveMonitorPass(puVar9,0x10);
                        if (bVar3) {
                            *puVar9 = uVar17 | uVar8;
                            cVar2 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar2 != '\0');
                    DataMemoryBarrier(2,3);
                    uVar20 = uVar16;
                    if ((uVar17 & uVar8) == 0) {
                        disable_irq(uVar13 & 0xffffffff);
                    }
code_r0x08002fa4:
                    uVar17 = _raw_spin_lock_irqsave(iVar6 + 0x418);
                    uVar13 = iVar6 + 0x4c8;
                    uVar16 = iVar11 + uVar20 * 0x50;
                    uVar5 = sym.readl(*(uVar13 + (*puVar19 >> 5 & 3) * 8) + *(uVar16 + 0x24));
                    uVar8 = *puVar19;
                    uVar1 = uVar21 << (uVar8 >> 7 & 0x1f) | uVar5 & (uVar14 ^ 0xffffffff);
                    uVar5 = 0;
                    if ((uVar1 >> (uVar8 >> 0x20 & 0x1f) & 1) != 0) {
                        uVar5 = 1 << (uVar8 >> 0x1b & 0x1f);
                    }
                    sym.writel(uVar5 | uVar1,*(uVar13 + (uVar8 >> 5 & 3) * 8) + *(uVar16 + 0x24));
                    _raw_spin_unlock_irqrestore(iVar6 + 0x418,uVar17);
                    if ((iVar7 != 0) && (uVar21 == uVar15)) {
                        uVar8 = 1L << (*(iVar7 + 8) & 0x3f);
                        puVar9 = iVar6 + (*(iVar7 + 8) >> 6 & 0x3ffffff) * 8 + 0x498;
                        Hint_Prefetch(puVar9,2,0,1);
                        do {
                            uVar10 = *puVar9;
                            cVar2 = '\x01';
                            bVar3 = ExclusiveMonitorPass(puVar9,0x10);
                            if (bVar3) {
                                *puVar9 = uVar10 & (uVar8 ^ 0xffffffffffffffff);
                                cVar2 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar2 != '\0');
                        DataMemoryBarrier(2,3);
                        uVar13 = uVar12;
                        if ((uVar10 & uVar8) != 0) {
                            if ((*(iVar7 + 0x28) == 0) ||
                               ((*(iVar6 + (*(iVar7 + 8) >> 6 & 0x3ffffff) * 8 + 0x470) >> (*(iVar7 + 8) & 0x3f) & 1) ==
                                0)) {
                                uVar8 = *puVar19;
                                uVar12 = 0;
                                if ((uVar8 & 0x4000000000000000) != 0) {
                                    uVar12 = 1 << (uVar8 >> 0x39 & 0x1f);
                                }
                                sym.writel(uVar12,*(iVar6 + (uVar8 >> 5 & 3) * 8 + 0x4c8) +
                                                   *(iVar11 + uVar20 * 0x50 + 0x30));
                            }
                            else {
                                irq_chip_set_parent_state(iVar7,0,0);
                            }
                            enable_irq(uVar13);
                        }
                    }
                    iVar18 = sp_el0;
                    if (*(iVar18 + 0x5e0) == iStack_68) break;
                    __stack_chk_fail(0);
                    uVar8 = extraout_x8;
                    puVar9 = extraout_x9;
                }
                return;
            }
            goto code_r0x08002f44;
        }
    }
    else {
        uVar14 = 0xffffffffffffffff >> (LZCOUNT(uVar5 - 1) - uVar21 & 0x3f) & uVar14;
    }
    uVar21 = 0;
    do {
        if (*(*(iVar11 + uVar16 * 0x50 + 0x18) + uVar21 * 4) == arg1) goto code_r0x08002f54;
        uVar21 = uVar21 + 1;
    } while (uVar5 != uVar21);
code_r0x08002f44:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x800,0x8002f4c);
    (*pcVar4)();
}


// ===== sym.msm_pinmux_request_gpio @ 0x08003198 (size 120) =====

ulong sym.msm_pinmux_request_gpio(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    uint64_t noname_0;
    int64_t iVar3;
    ulong *in_x18;
    uint64_t arg2_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg2_00 = arg2 & 0xffffffff;
    iVar1 = pinctrl_dev_get_drvdata();
    iVar3 = *(*(iVar1 + 0x4c0) + 0x20);
    if (*(iVar3 + arg2_00 * 0x50 + 0x20) == 0) {
        uVar2 = 0;
    }
    else {
        noname_0 = *(*(iVar1 + 0x4c0) + 0x6c);
        uVar2 = sym.msm_pinmux_set_mux(noname_0,*(*(iVar3 + arg2_00 * 0x50 + 0x18) + noname_0 * 4),arg2_00);
    }
    return uVar2;
}


// ===== sym.msm_config_group_get @ 0x08003210 (size 2076) =====

ulong sym.msm_config_group_get(ulong noname_0,int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    ulong uVar6;
    int iVar7;
    ulong *in_x18;
    uint64_t uVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar8 = arg1 & 0xffffffff;
    iVar5 = pinctrl_dev_get_drvdata();
    uVar10 = *arg2;
    uVar6 = 0xfffffdf4;
    uVar1 = uVar10 & 0xff;
    iVar9 = *(*(iVar5 + 0x4c0) + 0x20);
    if (uVar1 < 0x12) {
    //switch table (18 cases) at 0x8000715
        switch(*((uVar10 & 0xff) + 0x8000715) * 4 + 0x8003280) {
        case 0x8003284:
            uVar4 = 3;
            uVar11 = *(iVar9 + uVar8 * 0x50 + 0x38) >> 0xc & 0x1f;
            break;
        case 0x80032b8:
            uVar4 = 1;
            uVar11 = *(iVar9 + uVar8 * 0x50 + 0x38) >> 0x25 & 0x1f;
            break;
        case 0x8003388:
            iVar9 = iVar9 + uVar8 * 0x50;
            uVar8 = *(iVar9 + 0x38);
            uVar4 = sym.readl(*(iVar5 + (uVar8 >> 5 & 3) * 8 + 0x4c8) + *(iVar9 + 0x24));
            if ((uVar4 >> (uVar8 >> 0x16 & 0x1f) & 1) == 0) {
                return 0xffffffea;
            }
            goto code_r0x080034a8;
        case 0x80033c0:
            iVar9 = iVar9 + uVar8 * 0x50;
            uVar8 = *(iVar9 + 0x38);
            uVar4 = sym.readl(*(iVar5 + (uVar8 >> 5 & 3) * 8 + 0x4c8) + *(iVar9 + 0x24));
            iVar7 = (uVar4 >> (uVar8 >> 0x11 & 0x1f) & 7) * 2 + 2;
            goto code_r0x080034ac;
        case 0x80034c4:
            goto code_r0x080034c4;
        }
code_r0x080032cc:
        iVar9 = iVar9 + uVar8 * 0x50;
        uVar3 = sym.readl(*(iVar5 + (*(iVar9 + 0x38) >> 5 & 3) * 8 + 0x4c8) + *(iVar9 + 0x24));
        uVar2 = uVar10 & 0xff;
        uVar4 = uVar3 >> uVar11 & uVar4;
        if (uVar2 < 0x12) {
    //switch table (129 cases) at 0x8000727
    //WARNING: Jumptable with 0 entries at 0x08003324
    //WARNING: Treating indirect jump as call
            uVar6 = (*(*((uVar10 & 0xff) + 0x8000727) * 4 + 0x8003328))(0xfffffdf4);
            return uVar6;
        }
        if (uVar2 == 0x80) {
            if ((uVar3 >> 0xb & 1) == 0) {
                return 0xffffffea;
            }
            if (uVar4 == 0) {
                return 0xffffffea;
            }
        }
        else {
            if (uVar2 != 0x81) {
                return 0xfffffdf4;
            }
            if ((uVar3 >> 0xb & 1) == 0) {
                return 0xffffffea;
            }
            if (uVar4 != 0) {
                return 0xffffffea;
            }
        }
    }
    else {
        if (uVar1 - 0x80 < 2) {
            uVar4 = 1;
            uVar11 = 0xc;
            goto code_r0x080032cc;
        }
        if (uVar1 != 0x82) {
            return 0xfffffdf4;
        }
        iVar9 = iVar9 + uVar8 * 0x50;
        sym.readl(*(iVar5 + (*(iVar9 + 0x38) >> 5 & 3) * 8 + 0x4c8) + *(iVar9 + 0x24));
    }
code_r0x080034a8:
    iVar7 = 1;
code_r0x080034ac:
    uVar6 = 0;
    *arg2 = uVar1 | iVar7 << 8;
code_r0x080034c4:
    return uVar6;
}


// ===== sym.msm_config_group_set @ 0x080034e8 (size 32) =====

//WARNING: Removing unreachable block (ram,0x0800367c)

ulong sym.msm_config_group_set(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *puVar1;
    uint64_t *puVar2;
    uint32_t *puVar3;
    uint32_t uVar4;
    bool bVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    ulong *puVar8;
    ulong uVar9;
    int64_t iVar10;
    ulong *in_x18;
    uint64_t uVar11;
    uint64_t uVar12;
    uint32_t uVar13;
    uint64_t uVar14;
    int iVar15;
    ulong unaff_x30;
    int iStack_80;
    
    *in_x18 = unaff_x30;
    puVar8 = pinctrl_dev_get_drvdata();
    if (arg3 != 0) {
        iVar15 = 0;
        iVar10 = *(puVar8[0x98] + 0x20) + (arg1 & 0xffffffffU) * 0x50;
        puVar1 = puVar8 + 0x83;
        puVar2 = iVar10 + 0x38;
        puVar3 = iVar10 + 0x24;
        iStack_80 = 0;
        bVar5 = false;
        do {
            uVar9 = 0xfffffdf4;
            uVar14 = *(arg2 + iVar15 * 8);
            uVar12 = uVar14 >> 8 & 0xffffff;
            uVar6 = uVar14;
            uVar7 = uVar12;
            switch(uVar14 & 0xff) {
            case 0:
            case 1:
            case 3:
            case 5:
                uVar13 = 3;
                uVar11 = *puVar2 >> 0xc & 0x1f;
                break;
            case 2:
            case 4:
            case 7:
            case 8:
            case 10:
            case 0xb:
            case 0xd:
            case 0xe:
            case 0xf:
            case 0x10:
                goto code_r0x0800388c;
            case 6:
                uVar11 = *puVar2 >> 0x16 & 0x1f;
code_r0x08003670:
                uVar13 = 1;
                uVar7 = 1;
                goto code_r0x08003778;
            case 9:
                uVar11 = *puVar2 >> 0x11 & 0x1f;
                if (((uVar6 >> 8 & 1) != 0) || (0xe < uVar7 - 2)) {
                    uVar12 = 0xffffffff;
                    goto code_r0x080037f8;
                }
                uVar13 = 7;
                uVar7 = (uVar6 >> 9) - 1;
                uVar12 = uVar7;
                uVar4 = uVar7 & 0xfffffff8;
                goto joined_r0x080036b0;
            case 0xc:
            case 0x11:
                uVar13 = 1;
                uVar11 = *puVar2 >> 0x25 & 0x1f;
                break;
            default:
                uVar13 = 1;
                if (1 < (uVar6 & 0xff) - 0x80) {
                    if ((uVar6 & 0xff) != 0x82) {
                        return 0xfffffdf4;
                    }
                    uVar11 = 0xd;
                    goto code_r0x08003670;
                }
                uVar11 = 0xc;
            }
            uVar4 = uVar6 & 0xff;
            if (uVar4 < 0x12) {
    //WARNING: Jumptable with 0 entries at 0x08003610
    //WARNING: Treating indirect jump as call
                uVar9 = (*(*((uVar14 & 0xff) + 0x800074b) * 4 + 0x8003614))(0xfffffdf4);
                return uVar9;
            }
            if (uVar4 == 0x80) {
                iStack_80 = 1;
            }
            else {
                if (uVar4 != 0x81) {
                    _dev_err(*puVar8,"Unsupported config parameter: %x\n",uVar6 & 0xff);
                    return 0xffffffea;
                }
                iStack_80 = 0;
            }
            bVar5 = true;
            uVar4 = uVar7 & (uVar13 ^ 0xffffffff);
joined_r0x080036b0:
            if (uVar4 != 0) {
code_r0x080037f8:
                _dev_err(*puVar8,"config %x: %x is invalid\n",uVar6 & 0xff,uVar12);
                return 0xffffffea;
            }
code_r0x08003778:
            if ((uVar6 & 0xfe) != 0x80) {
                uVar9 = _raw_spin_lock_irqsave(puVar1);
                uVar6 = sym.readl(puVar8[(*puVar2 >> 5 & 3) + 0x99] + *puVar3);
                sym.writel(uVar6 & (uVar13 << uVar11 ^ 0xffffffff) | uVar7 << uVar11,
                           puVar8[(*puVar2 >> 5 & 3) + 0x99] + *puVar3);
                _raw_spin_unlock_irqrestore(puVar1,uVar9);
            }
            iVar15 = iVar15 + 1;
        } while (arg3 != iVar15);
        if (bVar5) {
            uVar9 = _raw_spin_lock_irqsave(puVar1);
            uVar7 = sym.readl(puVar8[(*puVar2 >> 5 & 3) + 0x99] + *puVar3);
            if ((uVar7 >> 0xb & 1) != 0) {
                sym.writel(uVar7 & 0xffffefff | iStack_80 << 0xc,puVar8[(*puVar2 >> 5 & 3) + 0x99] + *puVar3);
            }
            _raw_spin_unlock_irqrestore(puVar1,uVar9);
        }
    }
    uVar9 = 0;
code_r0x0800388c:
    return uVar9;
}


// ===== sym.msm_gpio_needs_valid_mask @ 0x080038dc (size 184) =====

bool sym.msm_gpio_needs_valid_mask(int64_t arg1)

{
    bool bVar1;
    int iVar2;
    int iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(*(arg1 + 0x4c0) + 0x48) == 0) {
        iVar2 = of_property_count_elems_of_size(*(*arg1 + 0x2f0),"qcom,gpios-reserved",4);
        iVar3 = device_property_read_u16_array(*arg1,"gpios",0,0);
        bVar1 = 0 < iVar2 || 0 < iVar3;
        if (iVar2 < 1) {
            return bVar1;
        }
        if (iVar3 < 1) {
            return bVar1;
        }
        _dev_warn(*arg1,"qcom,gpios-reserved and gpios are both defined. Only one should be used.\n");
    }
    return true;
}


// ===== sym.msm_gpio_init_valid_mask @ 0x08003994 (size 808) =====

uint32_t * sym.msm_gpio_init_valid_mask(ulong noname_0,int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    int64_t *piVar7;
    ulong uVar8;
    int64_t iVar9;
    int64_t extraout_x8;
    uint64_t *extraout_x9;
    uint64_t *puVar10;
    uint64_t extraout_x10;
    ulong *in_x18;
    uint32_t uVar11;
    uint64_t uVar12;
    uint32_t *puVar13;
    ulong unaff_x30;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    uVar12 = arg2 & 0xffffffff;
    iStack_48 = *(iVar9 + 0x5e0);
    piVar7 = gpiochip_get_data();
    uStack_4c = 0;
    puVar13 = *(piVar7[0x98] + 0x48);
    uVar11 = arg2;
    if (puVar13 != NULL) {
        memset(arg1,0xff,uVar12 + 0x3f >> 3 & 0x3ffffff8);
        uStack_4c = 0;
        uVar5 = *puVar13;
        if (uVar5 < 0) goto code_r0x08003b50;
        iVar9 = 1;
        goto code_r0x08003a10;
    }
    iVar4 = of_property_count_elems_of_size(*(*piVar7 + 0x2f0),"qcom,gpios-reserved",4);
    if (0 < iVar4) {
        memset(arg1,0xff,uVar12 + 0x3f >> 3 & 0x3ffffff8);
        uVar8 = of_find_property(*(*piVar7 + 0x2f0),"qcom,gpios-reserved",0);
        for (iVar9 = of_prop_next_u32(uVar8,0,&uStack_4c); iVar9 != 0;
            iVar9 = of_prop_next_u32(uVar8,iVar9,&uStack_4c)) {
            if (uVar11 <= uStack_4c) goto code_r0x08003c3c;
            puVar10 = arg1 + (uStack_4c >> 3 & 0x1ffffff8);
            Hint_Prefetch(puVar10,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar10,0x10);
                if (bVar3) {
                    *puVar10 = *puVar10 & (1L << (uStack_4c & 0x3f) ^ 0xffffffffffffffffU);
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
        }
    }
    uVar5 = device_property_read_u16_array(*piVar7,"gpios",0,0);
    if (uVar5 < 0) goto code_r0x08003b50;
    if (uVar11 < uVar5) {
        puVar13 = 0xffffffea;
    }
    else {
        iVar9 = __kmalloc(uVar5 << 1,0xcc0);
        if (iVar9 == 0) {
            puVar13 = 0xfffffff4;
        }
        else {
            uVar6 = device_property_read_u16_array(*piVar7,"gpios",iVar9,uVar5);
            puVar13 = uVar6;
            if (uVar6 < 0) {
                _dev_err(*piVar7,"could not read list of GPIOs\n");
            }
            else {
                memset(arg1,0,uVar12 + 0x3f >> 3 & 0x3ffffff8);
                uStack_4c = 0;
                if (uVar5 != 0) {
                    do {
                        uVar1 = *(iVar9 + uStack_4c * 2);
                        puVar10 = arg1 + (uVar1 >> 3 & 0x1ff8);
                        Hint_Prefetch(puVar10,2,0,1);
                        do {
                            cVar2 = '\x01';
                            bVar3 = ExclusiveMonitorPass(puVar10,0x10);
                            if (bVar3) {
                                *puVar10 = *puVar10 | 1L << (uVar1 & 0x3f);
                                cVar2 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar2 != '\0');
                        uStack_4c = uStack_4c + 1;
                    } while (uStack_4c < uVar5);
                }
            }
            kfree(iVar9);
        }
    }
code_r0x08003b54:
    do {
        iVar9 = sp_el0;
        if (*(iVar9 + 0x5e0) == iStack_48) {
            return puVar13;
        }
        __stack_chk_fail();
        iVar9 = extraout_x8;
        puVar10 = extraout_x9;
        uVar12 = extraout_x10;
        while( true ) {
            Hint_Prefetch(puVar10,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar10,0x10);
                if (bVar3) {
                    *puVar10 = *puVar10 & (uVar12 ^ 0xffffffffffffffff);
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            uStack_4c = uStack_4c + 1;
            uVar5 = puVar13[uStack_4c];
            if (uVar5 < 0) goto code_r0x08003b50;
code_r0x08003a10:
            if ((uVar11 <= uStack_4c) || (uVar11 <= uVar5)) break;
            puVar10 = arg1 + (uVar5 >> 3 & 0x1ffffff8);
            uVar12 = iVar9 << (uVar5 & 0x3f);
        }
code_r0x08003c3c:
        _dev_err(*piVar7,"invalid list of reserved GPIOs\n");
        puVar13 = 0xffffffea;
    } while( true );
code_r0x08003b50:
    puVar13 = NULL;
    goto code_r0x08003b54;
}


// ===== sym.msm_gpio_irq_enable @ 0x08003cbc (size 104) =====

void sym.msm_gpio_irq_enable(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = gpiochip_get_data(*(arg1 + 0x30));
    if (*(arg1 + 0x28) != 0) {
        irq_chip_enable_parent(arg1);
    }
    if ((*(iVar1 + (*(arg1 + 8) >> 6 & 0x3ffffff) * 8 + 0x470) >> (*(arg1 + 8) & 0x3f) & 1) == 0) {
        sym.msm_gpio_irq_unmask(arg1);
    }
    return;
}


// ===== sym.msm_gpio_irq_disable @ 0x08003d24 (size 104) =====

void sym.msm_gpio_irq_disable(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = gpiochip_get_data(*(arg1 + 0x30));
    if (*(arg1 + 0x28) != 0) {
        irq_chip_disable_parent(arg1);
    }
    if ((*(iVar1 + (*(arg1 + 8) >> 6 & 0x3ffffff) * 8 + 0x470) >> (*(arg1 + 8) & 0x3f) & 1) == 0) {
        sym.msm_gpio_irq_mask(arg1);
    }
    return;
}


// ===== sym.msm_gpio_irq_mask @ 0x08003d8c (size 352) =====

void sym.msm_gpio_irq_mask(int64_t arg1)

{
    char cVar1;
    bool bVar2;
    uint32_t uVar3;
    int64_t iVar4;
    ulong uVar5;
    ulong *in_x18;
    int64_t iVar6;
    uint32_t *puVar7;
    uint64_t uVar8;
    uint64_t *puVar9;
    int64_t iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = gpiochip_get_data(*(arg1 + 0x30));
    if (*(arg1 + 0x28) != 0) {
        irq_chip_mask_parent(arg1);
    }
    uVar8 = *(arg1 + 8);
    if ((*(iVar4 + (uVar8 >> 6 & 0x3ffffff) * 8 + 0x470) >> (uVar8 & 0x3f) & 1) == 0) {
        iVar10 = *(*(iVar4 + 0x4c0) + 0x20);
        uVar5 = _raw_spin_lock_irqsave(iVar4 + 0x418);
        iVar6 = iVar10 + uVar8 * 0x50;
        puVar7 = iVar6 + 0x2c;
        puVar9 = iVar6 + 0x38;
        uVar3 = sym.readl(*(iVar4 + (*puVar9 >> 5 & 3) * 8 + 0x4c8) + *puVar7);
        if ((**(arg1 + 0x10) & 0xc) != 0) {
            uVar3 = uVar3 & (1 << (*(iVar10 + uVar8 * 0x50 + 0x40) >> 10 & 0x1f) ^ 0xffffffffU);
        }
        uVar8 = *puVar9;
        sym.writel(uVar3 & (1 << (uVar8 >> 0x34 & 0x1f) ^ 0xffffffffU),
                   *(iVar4 + (uVar8 >> 5 & 3) * 8 + 0x4c8) + *puVar7);
        uVar8 = *(arg1 + 8);
        puVar9 = iVar4 + (uVar8 >> 6 & 0x3ffffff) * 8 + 0x448;
        Hint_Prefetch(puVar9,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(puVar9,0x10);
            if (bVar2) {
                *puVar9 = *puVar9 & (1L << (uVar8 & 0x3f) ^ 0xffffffffffffffffU);
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        _raw_spin_unlock_irqrestore(iVar4 + 0x418,uVar5);
    }
    return;
}


// ===== sym.msm_gpio_irq_unmask @ 0x08003eec (size 308) =====

void sym.msm_gpio_irq_unmask(int64_t arg1)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    uint32_t uVar4;
    int64_t iVar5;
    ulong uVar6;
    ulong *in_x18;
    uint64_t uVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = gpiochip_get_data(*(arg1 + 0x30));
    if (*(arg1 + 0x28) != 0) {
        irq_chip_unmask_parent(arg1);
    }
    uVar7 = *(arg1 + 8);
    if ((*(iVar5 + (uVar7 >> 6 & 0x3ffffff) * 8 + 0x470) >> (uVar7 & 0x3f) & 1) == 0) {
        iVar8 = *(*(iVar5 + 0x4c0) + 0x20);
        uVar6 = _raw_spin_lock_irqsave(iVar5 + 0x418);
        iVar8 = iVar8 + uVar7 * 0x50;
        uVar4 = sym.readl(*(iVar5 + 0x4c8 + (*(iVar8 + 0x38) >> 5 & 3) * 8) + *(iVar8 + 0x2c));
        sym.writel(1 << (*(iVar8 + 0x40) >> 10 & 0x1f) | uVar4 | 1 << (*(iVar8 + 0x38) >> 0x34 & 0x1f),
                   *(iVar5 + 0x4c8 + (*(iVar8 + 0x38) >> 5 & 3) * 8) + *(iVar8 + 0x2c));
        uVar7 = *(arg1 + 8);
        puVar1 = iVar5 + (uVar7 >> 6 & 0x3ffffff) * 8 + 0x448;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = *puVar1 | 1L << (uVar7 & 0x3f);
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        _raw_spin_unlock_irqrestore(iVar5 + 0x418,uVar6);
    }
    return;
}


// ===== sym.msm_gpio_irq_ack @ 0x08004020 (size 264) =====

void sym.msm_gpio_irq_ack(int64_t arg1)

{
    uint32_t uVar1;
    int64_t arg1_00;
    ulong uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    uint64_t uVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = gpiochip_get_data(*(arg1 + 0x30));
    uVar5 = *(arg1 + 8);
    uVar4 = 1L << (uVar5 & 0x3f);
    iVar3 = arg1_00 + (uVar5 >> 6 & 0x3ffffff) * 8;
    if ((uVar4 & *(iVar3 + 0x470)) == 0) {
        iVar6 = *(*(arg1_00 + 0x4c0) + 0x20);
        uVar2 = _raw_spin_lock_irqsave(arg1_00 + 0x418);
        iVar3 = iVar6 + uVar5 * 0x50;
        uVar4 = *(iVar3 + 0x38);
        uVar1 = 0;
        if ((uVar4 & 0x4000000000000000) != 0) {
            uVar1 = 1 << (uVar4 >> 0x39 & 0x1f);
        }
        sym.writel(uVar1,*(arg1_00 + (uVar4 >> 5 & 3) * 8 + 0x4c8) + *(iVar3 + 0x30));
        if ((*(arg1_00 + (*(arg1 + 8) >> 6 & 0x3ffffff) * 8 + 0x420) >> (*(arg1 + 8) & 0x3f) & 1) != 0) {
            sym.msm_gpio_update_dual_edge_pos(arg1_00,iVar6 + uVar5 * 0x50);
        }
        _raw_spin_unlock_irqrestore(arg1_00 + 0x418,uVar2);
    }
    else if ((*(iVar3 + 0x420) & uVar4) != 0) {
        sym.msm_gpio_update_dual_edge_parent(arg1);
    }
    return;
}


// ===== sym.msm_gpio_irq_set_type @ 0x08004128 (size 1392) =====

ulong sym.msm_gpio_irq_set_type(int64_t arg1,int64_t arg2)

{
    char cVar1;
    bool bVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    ulong *arg1_00;
    int64_t iVar7;
    ulong uVar8;
    uint64_t uVar9;
    uint64_t extraout_x8;
    uint64_t uVar10;
    code *pcVar11;
    uint64_t *extraout_x9;
    int iVar12;
    ulong *in_x18;
    uint32_t *puVar13;
    uint32_t *puVar14;
    int64_t iVar15;
    uint64_t *puVar16;
    uint64_t uVar17;
    int64_t iVar18;
    ulong unaff_x30;
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    iVar12 = arg2;
    arg1_00 = gpiochip_get_data(*(arg1 + 0x30));
    uStack_6c = 0;
    iVar7 = gpiochip_get_data(*(arg1 + 0x30));
    if (((iVar12 == 3) && (*(*(iVar7 + 0x4c0) + 0x5c) != '\0')) && (*(arg1 + 0x28) != 0)) {
        uVar10 = *(arg1 + 8) >> 6 & 0x3ffffff;
        uVar9 = 1L << (*(arg1 + 8) & 0x3f);
        if ((uVar9 & *(iVar7 + uVar10 * 8 + 0x470)) != 0) {
            puVar16 = arg1_00 + uVar10 + 0x84;
            Hint_Prefetch(puVar16,2,0,1);
            do {
                cVar1 = '\x01';
                bVar2 = ExclusiveMonitorPass(puVar16,0x10);
                if (bVar2) {
                    *puVar16 = *puVar16 | uVar9;
                    cVar1 = ExclusiveMonitorsStatus();
                }
            } while (cVar1 != '\0');
            *(*(arg1 + 0x10) + 0x70) = sym.handle_fasteoi_ack_irq.cfi_jt;
            sym.msm_gpio_update_dual_edge_parent(arg1);
            goto code_r0x080045c0;
        }
    }
    if (*(arg1 + 0x28) != 0) {
        irq_chip_set_type_parent(arg1,arg2 & 0xffffffff);
    }
    uVar17 = *(arg1 + 8);
    uVar10 = uVar17 >> 6 & 0x3ffffff;
    uVar9 = 1L << (uVar17 & 0x3f);
    if ((uVar9 & arg1_00[uVar10 + 0x8e]) != 0) {
        puVar16 = arg1_00 + uVar10 + 0x84;
        goto code_r0x08004608;
    }
    iVar18 = *(arg1_00[0x98] + 0x20);
    iVar7 = iVar18 + uVar17 * 0x50;
    uVar8 = _raw_spin_lock_irqsave(arg1_00 + 0x83);
    puVar13 = iVar7 + 0x40;
    uVar9 = 1L << (*(arg1 + 8) & 0x3f);
    puVar16 = arg1_00 + (*(arg1 + 8) >> 6 & 0x3ffffff) + 0x84;
    if ((iVar12 == 3) && ((*puVar13 & 0x3e000000) == 0x2000000)) {
        Hint_Prefetch(puVar16,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(puVar16,0x10);
            if (bVar2) {
                *puVar16 = *puVar16 | uVar9;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
    }
    else {
        Hint_Prefetch(puVar16,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(puVar16,0x10);
            if (bVar2) {
                *puVar16 = *puVar16 & (uVar9 ^ 0xffffffffffffffff);
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
    }
    if (*(arg1_00 + 0x414) == '\0') {
        iVar15 = iVar18 + uVar17 * 0x50;
        uVar5 = sym.readl(arg1_00[(*(iVar15 + 0x38) >> 5 & 3) + 0x99] + *(iVar15 + 0x34));
        uStack_6c = (*puVar13 >> 5 & 0x1f) << (*puVar13 & 0x1f) | uVar5 & (7 << (*puVar13 & 0x1f) ^ 0xffffffffU);
        sym.writel(uStack_6c,arg1_00[(*(iVar15 + 0x38) >> 5 & 3) + 0x99] + *(iVar15 + 0x34));
    }
    else {
        iVar4 = *(iVar18 + uVar17 * 0x50 + 0x34) + *(arg1_00 + 0x9d);
        qcom_scm_io_readl(iVar4,&stack0xffffffffffffff94);
        uStack_6c = (*puVar13 >> 5 & 0x1f) << (*puVar13 & 0x1f) | uStack_6c & (7 << (*puVar13 & 0x1f) ^ 0xffffffffU);
        iVar4 = qcom_scm_io_writel(iVar4);
        if (iVar4 != 0) {
            _dev_err(*arg1_00,"Failed routing %lu interrupt to Apps proc",*(arg1 + 8));
        }
    }
    iVar15 = iVar18 + uVar17 * 0x50;
    puVar16 = iVar15 + 0x38;
    puVar14 = iVar15 + 0x2c;
    uVar6 = sym.readl(arg1_00[(*puVar16 >> 5 & 3) + 0x99] + *puVar14);
    uVar9 = 1L << (*puVar13 >> 10 & 0x1f);
    uStack_6c = uVar6 | uVar9;
    uVar5 = *puVar13;
    uVar3 = uVar5 >> 0x19 & 0x1f;
    if (uVar3 == 1) {
        uStack_6c = uStack_6c & (1 << (uVar5 >> 0x14 & 0x1f) ^ 0xffffffffU) &
                    (1 << (*puVar13 >> 0xf & 0x1f) ^ 0xffffffffU);
        if (iVar12 - 1U < 4) {
    //switch table (3 cases) at 0x8000760
            switch(*((iVar12 - 1U) * 4 + 0x8000760) + 0x8004418) {
            case 0x800442c:
                uVar5 = *puVar13 >> 0x14;
                break;
            case 0x8004494:
code_r0x08004494:
                uStack_6c = 1 << (*puVar13 >> 0x14 & 0x1f) | uStack_6c;
                uVar5 = *puVar13 >> 0xf;
                break;
            case 0x80044e8:
                goto code_r0x080044e8;
            }
code_r0x080044f4:
            uStack_6c = 1 << (uVar5 & 0x1f) | uStack_6c;
        }
    }
    else {
        if (uVar3 != 2) {
    //WARNING: Does not return
            pcVar11 = SoftwareBreakpoint(0x800,0x8004638);
            (*pcVar11)();
        }
        uStack_6c = uStack_6c & (3 << (uVar5 >> 0x14 & 0x1f) ^ 0xffffffffU) &
                    (1 << (*puVar13 >> 0xf & 0x1f) ^ 0xffffffffU);
        if (iVar12 - 1U < 4) {
    //switch table (4 cases) at 0x8000770
            switch(*((iVar12 - 1U) * 4 + 0x8000770) + 0x8004480) {
            case 0x8004494:
                goto code_r0x08004494;
            case 0x80044bc:
                uVar5 = *puVar13;
                iVar12 = 2;
                break;
            case 0x80044cc:
                uVar5 = *puVar13;
                iVar12 = 3;
                break;
            case 0x80044e8:
                goto code_r0x080044e8;
            }
            uStack_6c = iVar12 << (uVar5 >> 0x14 & 0x1f) | uStack_6c;
code_r0x080044e8:
            uVar5 = *puVar13 >> 0xf;
            goto code_r0x080044f4;
        }
    }
    sym.writel(uStack_6c,arg1_00[(*puVar16 >> 5 & 3) + 0x99] + *puVar14);
    if ((uVar9 & uVar6) == 0) {
        uVar9 = *puVar16;
        uVar5 = 0;
        if ((uVar9 & 0x4000000000000000) != 0) {
            uVar5 = 1 << (uVar9 >> 0x39 & 0x1f);
        }
        sym.writel(uVar5,arg1_00[(uVar9 >> 5 & 3) + 0x99] + *(iVar18 + uVar17 * 0x50 + 0x30));
    }
    if ((arg1_00[(*(arg1 + 8) >> 6 & 0x3ffffff) + 0x84] >> (*(arg1 + 8) & 0x3f) & 1) != 0) {
        sym.msm_gpio_update_dual_edge_pos(arg1_00,iVar7);
    }
    _raw_spin_unlock_irqrestore(arg1_00 + 0x83,uVar8);
    if ((arg2 & 0xcU) != 0) {
        iVar7 = *(arg1 + 0x10);
        pcVar11 = sym.handle_level_irq.cfi_jt;
        goto code_r0x080045bc;
    }
    if ((arg2 & 3U) != 0) {
        iVar7 = *(arg1 + 0x10);
        pcVar11 = sym.handle_edge_irq.cfi_jt;
        goto code_r0x080045bc;
    }
code_r0x080045c0:
    while (iVar7 = sp_el0, *(iVar7 + 0x5e0) != iStack_68) {
        __stack_chk_fail();
        uVar9 = extraout_x8;
        puVar16 = extraout_x9;
code_r0x08004608:
        Hint_Prefetch(puVar16,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(puVar16,0x10);
            if (bVar2) {
                *puVar16 = *puVar16 & (uVar9 ^ 0xffffffffffffffff);
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        iVar7 = *(arg1 + 0x10);
        pcVar11 = sym.handle_fasteoi_irq.cfi_jt;
code_r0x080045bc:
        *(iVar7 + 0x70) = pcVar11;
    }
    return 0;
}


// ===== sym.msm_gpio_irq_set_wake @ 0x08004698 (size 116) =====

void sym.msm_gpio_irq_set_wake(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = gpiochip_get_data(*(arg1 + 0x30));
    if ((*(arg1 + 0x28) != 0) &&
       ((*(iVar1 + (*(arg1 + 8) >> 6 & 0x3ffffff) * 8 + 0x470) >> (*(arg1 + 8) & 0x3f) & 1) != 0)) {
        irq_chip_set_wake_parent(arg1,arg2 & 0xffffffffU);
        return;
    }
    irq_set_irq_wake(*(iVar1 + 0x410),arg2 & 0xffffffffU);
    return;
}


// ===== sym.msm_gpio_irq_reqres @ 0x0800470c (size 392) =====

int sym.msm_gpio_irq_reqres(int64_t arg1)

{
    int iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    ulong uVar5;
    uint64_t noname_0;
    int64_t iVar6;
    ulong *in_x18;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = *(arg1 + 0x30);
    iVar3 = gpiochip_get_data(iVar7);
    uVar4 = try_module_get(*(iVar7 + 0x18));
    if ((uVar4 & 1) == 0) {
        return -0x13;
    }
    uVar4 = *(arg1 + 8);
    iVar3 = pinctrl_dev_get_drvdata(*(iVar3 + 8));
    iVar6 = *(*(iVar3 + 0x4c0) + 0x20);
    if (*(iVar6 + uVar4 * 0x50 + 0x20) != 0) {
        noname_0 = *(*(iVar3 + 0x4c0) + 0x6c);
        iVar1 = sym.msm_pinmux_set_mux(noname_0,*(*(iVar6 + uVar4 * 0x50 + 0x18) + noname_0 * 4),uVar4);
        if (iVar1 != 0) goto code_r0x0800479c;
    }
    uVar2 = *(arg1 + 8);
    iVar3 = gpiochip_get_data(iVar7);
    iVar6 = *(*(iVar3 + 0x4c0) + 0x20);
    uVar5 = _raw_spin_lock_irqsave(iVar3 + 0x418);
    iVar6 = iVar6 + uVar2 * 0x50;
    uVar2 = sym.readl(*(iVar3 + 0x4c8 + (*(iVar6 + 0x38) >> 5 & 3) * 8) + *(iVar6 + 0x24));
    sym.writel(uVar2 & (1 << (*(iVar6 + 0x38) >> 0x25 & 0x1f) ^ 0xffffffffU),
               *(iVar3 + 0x4c8 + (*(iVar6 + 0x38) >> 5 & 3) * 8) + *(iVar6 + 0x24));
    _raw_spin_unlock_irqrestore(iVar3 + 0x418,uVar5);
    iVar1 = gpiochip_lock_as_irq(iVar7,*(arg1 + 8));
    if (iVar1 == 0) {
        irq_modify_status(*(arg1 + 4),0,0x80000);
        return 0;
    }
    _dev_err(*(iVar7 + 0x10),"unable to lock HW IRQ %lu for IRQ\n",*(arg1 + 8));
    iVar1 = -0x16;
code_r0x0800479c:
    module_put(*(iVar7 + 0x18));
    return iVar1;
}


// ===== sym.msm_gpio_irq_relres @ 0x08004894 (size 64) =====

void sym.msm_gpio_irq_relres(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x30);
    gpiochip_unlock_as_irq(iVar1,*(arg1 + 8));
    module_put(*(iVar1 + 0x18));
    return;
}


// ===== sym.msm_gpio_irq_set_affinity @ 0x080048d4 (size 124) =====

ulong sym.msm_gpio_irq_set_affinity(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = gpiochip_get_data(*(arg1 + 0x30));
    if ((*(arg1 + 0x28) != 0) &&
       ((*(iVar1 + (*(arg1 + 8) >> 6 & 0x3ffffff) * 8 + 0x470) >> (*(arg1 + 8) & 0x3f) & 1) != 0)) {
        uVar2 = irq_chip_set_affinity_parent(arg1,arg2,arg3 & 1);
        return uVar2;
    }
    return 0;
}


// ===== sym.msm_gpio_irq_set_vcpu_affinity @ 0x08004950 (size 108) =====

ulong sym.msm_gpio_irq_set_vcpu_affinity(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = gpiochip_get_data(*(arg1 + 0x30));
    if ((*(arg1 + 0x28) != 0) &&
       ((*(iVar1 + (*(arg1 + 8) >> 6 & 0x3ffffff) * 8 + 0x470) >> (*(arg1 + 8) & 0x3f) & 1) != 0)) {
        uVar2 = irq_chip_set_vcpu_affinity_parent(arg1,arg2);
        return uVar2;
    }
    return 0;
}


// ===== sym.msm_gpio_wakeirq @ 0x080049bc (size 152) =====

ulong sym.msm_gpio_wakeirq(ulong noname_0,int64_t arg1,uchar noname_2 [16],int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint *in_x4;
    uint64_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = gpiochip_get_data();
    *arg2 = 0xffffffff;
    *in_x4 = 1;
    uVar2 = *(*(iVar3 + 0x4c0) + 0x58);
    if (uVar2 != 0) {
        iVar3 = *(*(iVar3 + 0x4c0) + 0x50);
        uVar4 = 0;
        do {
            if (*(iVar3 + (-(uVar4 >> 0x1f) & 0xfffffff800000000 | uVar4 << 3)) == arg1) {
                *arg2 = *(iVar3 + uVar4 * 8 + 4);
                return 0;
            }
            uVar1 = uVar4 + 1;
            uVar4 = uVar1;
        } while (uVar2 != uVar1);
    }
    return 0;
}


// ===== sym.msm_gpio_irq_handler @ 0x08004a54 (size 644) =====

void sym.msm_gpio_irq_handler(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong uVar4;
    ulong *in_x18;
    int64_t iVar5;
    code *pcVar6;
    int64_t iVar7;
    int iVar8;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(arg1 + 8);
    iVar2 = gpiochip_get_data(iVar5);
    iVar7 = *(arg1 + 0x48);
    if (*(iVar7 + 0x50) == 0) {
        pcVar6 = *(iVar7 + 0x40);
        if (pcVar6 == NULL) {
            pcVar6 = *(iVar7 + 0x38);
            if (6 < (pcVar6 + -0x80017d0 >> 3 | pcVar6 << 0x3d)) {
                __cfi_slowpath_diag(0x12432ee19d152236,pcVar6,0x80002f0);
            }
            (*pcVar6)(arg1 + 0x30);
            pcVar6 = *(iVar7 + 0x30);
            if (pcVar6 != NULL) {
                if (6 < (pcVar6 + -0x80017d0 >> 3 | pcVar6 << 0x3d)) {
                    __cfi_slowpath_diag(0x12432ee19d152236,pcVar6,0x8000310);
                }
                (*pcVar6)(arg1 + 0x30);
            }
        }
        else {
            if (6 < (pcVar6 + -0x80017d0 >> 3 | pcVar6 << 0x3d)) {
                __cfi_slowpath_diag(0x12432ee19d152236,pcVar6,0x80002d0);
            }
            (*pcVar6)(arg1 + 0x30);
        }
    }
    uVar1 = _find_first_bit(iVar2 + 0x448,*(iVar2 + 0xa4));
    if (uVar1 < *(iVar2 + 0xa4)) {
        iVar8 = 0;
        do {
            iVar9 = *(*(iVar2 + 0x4c0) + 0x20) + uVar1 * 0x50;
            uVar3 = sym.readl(*(iVar2 + (*(iVar9 + 0x38) >> 5 & 3) * 8 + 0x4c8) + *(iVar9 + 0x30));
            if (((uVar3 & 0xffffffff) >> (*(iVar9 + 0x38) >> 0x39 & 0x1f) & 1) != 0) {
                generic_handle_domain_irq(*(iVar5 + 0x110),uVar1);
                iVar8 = iVar8 + 1;
            }
            uVar1 = _find_next_bit(iVar2 + 0x448,0,*(iVar2 + 0xa4),(uVar1 << 0x20) + 0x100000000 >> 0x20,0,0);
        } while (uVar1 < *(iVar2 + 0xa4));
        if (iVar8 == 0) goto code_r0x08004bf0;
        pcVar6 = *(iVar7 + 0x50);
        if (pcVar6 == NULL) goto code_r0x08004c00;
code_r0x08004bcc:
        if ((pcVar6 + -0x80017d0 >> 3 | pcVar6 << 0x3d) < 7) goto code_r0x08004c1c;
        uVar4 = 0x8000330;
    }
    else {
code_r0x08004bf0:
        handle_bad_irq(arg1);
        pcVar6 = *(iVar7 + 0x50);
        if (pcVar6 != NULL) goto code_r0x08004bcc;
code_r0x08004c00:
        pcVar6 = *(iVar7 + 0x48);
        if ((pcVar6 + -0x80017d0 >> 3 | pcVar6 << 0x3d) < 7) goto code_r0x08004c1c;
        uVar4 = 0x8000350;
    }
    __cfi_slowpath_diag(0x12432ee19d152236,pcVar6,uVar4);
code_r0x08004c1c:
    (*pcVar6)(arg1 + 0x30);
    return;
}


// ===== sym.msm_gpio_update_dual_edge_parent @ 0x08004cd8 (size 304) =====

void sym.msm_gpio_update_dual_edge_parent(int64_t arg1)

{
    bool bVar1;
    uint32_t uVar2;
    ulong *puVar3;
    ulong *in_x18;
    int64_t iVar4;
    uint64_t *puVar5;
    uint32_t *puVar6;
    int iVar7;
    int iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar3 = gpiochip_get_data(*(arg1 + 0x30));
    iVar4 = *(puVar3[0x98] + 0x20) + *(arg1 + 8) * 0x50;
    puVar5 = iVar4 + 0x38;
    puVar6 = iVar4 + 0x28;
    uVar2 = sym.readl(puVar3[(*puVar5 >> 5 & 3) + 0x99] + *puVar6);
    iVar8 = -0x65;
    iVar7 = 1;
    if ((uVar2 & 1 << (*puVar5 >> 0x2a & 0x1f)) != 0) {
        iVar7 = 2;
    }
    do {
        irq_chip_set_type_parent(arg1,iVar7);
        uVar2 = sym.readl(puVar3[(*puVar5 >> 5 & 3) + 0x99] + *puVar6);
        uVar2 = uVar2 & 1 << (*puVar5 >> 0x2a & 0x1f);
        if (iVar7 == 2) {
            if (uVar2 != 0) {
                return;
            }
            iVar7 = 1;
        }
        else if (iVar7 == 1) {
            if (uVar2 == 0) {
                return;
            }
            iVar7 = 2;
        }
        bVar1 = iVar8 != -1;
        iVar8 = iVar8 + 1;
    } while (bVar1);
    if ((obj.msm_gpio_update_dual_edge_parent.__print_once & 1) == 0) {
        obj.msm_gpio_update_dual_edge_parent.__print_once = 0x1;
        _dev_warn(*puVar3,"dual-edge irq failed to stabilize\n");
    }
    return;
}


// ===== sym.msm_gpio_update_dual_edge_pos @ 0x08004e08 (size 296) =====

void sym.msm_gpio_update_dual_edge_pos(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    bool bVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    ulong *in_x18;
    int iVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = -0x65;
    while( true ) {
        iVar1 = arg1 + 0x4c8;
        uVar3 = sym.readl(*(iVar1 + (*(arg2 + 0x38) >> 5 & 3) * 8) + *(arg2 + 0x28));
        uVar7 = *(arg2 + 0x38);
        uVar4 = sym.readl(*(iVar1 + (uVar7 >> 5 & 3) * 8) + *(arg2 + 0x2c));
        sym.writel(1 << (*(arg2 + 0x40) >> 0xf & 0x1f) ^ uVar4,
                   *(iVar1 + (*(arg2 + 0x38) >> 5 & 3) * 8) + *(arg2 + 0x2c));
        uVar4 = sym.readl(*(iVar1 + (*(arg2 + 0x38) >> 5 & 3) * 8) + *(arg2 + 0x28));
        uVar8 = *(arg2 + 0x38);
        iVar5 = sym.readl(*(iVar1 + (uVar8 >> 5 & 3) * 8) + *(arg2 + 0x30));
        if (iVar5 != 0) {
            return;
        }
        if ((uVar3 & 1 << (uVar7 >> 0x2a & 0x1f)) == (uVar4 & 1 << (uVar8 >> 0x2a & 0x1f))) break;
        bVar2 = iVar6 == -1;
        iVar6 = iVar6 + 1;
        if (bVar2) {
            _dev_err(*arg1,"dual-edge irq failed to stabilize, %#08x != %#08x\n");
            return;
        }
    }
    return;
}


// ===== sym.msm_pinctrl_hibernation_suspend @ 0x08004f30 (size 760) =====

//WARNING: Removing unreachable block (ram,0x08005224)

ulong sym.msm_pinctrl_hibernation_suspend(int64_t arg1)

{
    uint32_t *puVar1;
    int64_t iVar2;
    int64_t arg1_00;
    uint uVar3;
    ulong uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    int64_t iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = _segment.ehdr;
    if (*(_segment.ehdr + 0x508) != '\0') {
        iVar8 = *(_segment.ehdr + 0x4c0);
        if (*(iVar8 + 0x40) != 0) {
            iVar8 = *(_segment.ehdr + 0x4c8) + **(iVar8 + 0x80);
            _printk(0x8000431,iVar8);
            uVar3 = sym.readl_relaxed(iVar8);
            **(arg1_00 + 0x500) = uVar3;
            uVar3 = sym.readl_relaxed(iVar8 + 4);
            *(*(arg1_00 + 0x500) + 4) = uVar3;
            uVar4 = sym.readl_relaxed(iVar8 + 8);
            return uVar4;
        }
        if (*(iVar8 + 0x2c) == 0) {
            uVar6 = 0;
        }
        else {
            iVar7 = 0;
            uVar6 = 0;
            iVar9 = 0x24;
            do {
                uVar5 = sym.msm_gpio_needs_valid_mask(arg1_00);
                if (((uVar5 & 1) == 0) ||
                   ((*(*(arg1_00 + 0x250) + (uVar6 >> 6 & 0x3ffffff) * 8) >> (uVar6 & 0x3f) & 1) != 0)) {
                    iVar2 = arg1_00 + 0x4c8;
                    puVar1 = *(iVar8 + 0x20) + iVar9;
                    uVar3 = sym.readl(*(iVar2 + (*(puVar1 + 5) >> 5 & 3) * 8) + *puVar1);
                    *(*(arg1_00 + 0x4f8) + iVar7) = uVar3;
                    uVar3 = sym.readl(*(iVar2 + (*(puVar1 + 5) >> 5 & 3) * 8) + puVar1[1]);
                    *(*(arg1_00 + 0x4f8) + iVar7 + 4) = uVar3;
                    uVar3 = sym.readl(*(iVar2 + (*(puVar1 + 5) >> 5 & 3) * 8) + puVar1[2]);
                    *(*(arg1_00 + 0x4f8) + iVar7 + 8) = uVar3;
                    uVar3 = sym.readl(*(iVar2 + (*(puVar1 + 5) >> 5 & 3) * 8) + puVar1[3]);
                    *(*(arg1_00 + 0x4f8) + iVar7 + 0xc) = uVar3;
                }
                uVar6 = uVar6 + 1;
                iVar7 = iVar7 + 0x10;
                iVar9 = iVar9 + 0x50;
            } while (uVar6 < *(iVar8 + 0x2c));
        }
        if (uVar6 < *(iVar8 + 0x28)) {
            uVar5 = uVar6 & 0xffffffff;
            iVar7 = uVar5 << 4;
            iVar9 = (uVar5 + (uVar6 & 0xffffffff) * 4) * 0x10;
            do {
                iVar10 = *(iVar8 + 0x20);
                iVar2 = iVar10 + iVar9;
                if (*(iVar2 + 0x24) != 0) {
                    uVar3 = sym.readl(*(arg1_00 + (*(iVar2 + 0x38) >> 5 & 3) * 8 + 0x4c8) + *(iVar2 + 0x24));
                    *(*(arg1_00 + 0x4f8) + iVar7) = uVar3;
                }
                if (*(iVar2 + 0x28) != 0) {
                    uVar3 = sym.readl(*(arg1_00 + (*(iVar10 + iVar9 + 0x38) >> 5 & 3) * 8 + 0x4c8) + *(iVar2 + 0x28));
                    *(*(arg1_00 + 0x4f8) + iVar7 + 4) = uVar3;
                }
                uVar5 = uVar5 + 1;
                iVar7 = iVar7 + 0x10;
                iVar9 = iVar9 + 0x50;
            } while (uVar5 < *(iVar8 + 0x28));
        }
    }
    return 0;
}


// ===== sym.msm_pinctrl_hibernation_resume @ 0x08005228 (size 736) =====

int64_t sym.msm_pinctrl_hibernation_resume(int64_t arg1)

{
    int64_t iVar1;
    uint32_t *puVar2;
    int64_t arg1_00;
    code *pcVar3;
    ulong *in_x18;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = _segment.ehdr;
    if ((*(_segment.ehdr + 0x508) != '\0') && (*(_segment.ehdr + 0x4f8) != 0)) {
        iVar5 = *(_segment.ehdr + 0x4c0);
        if (*(iVar5 + 0x40) != 0) {
            iVar6 = 0;
            uVar8 = 0;
            iVar7 = _segment.ehdr + 0x4c8;
            do {
                if (iVar6 == 0x20) {
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(0x5512,0x8005508);
                    (*pcVar3)();
                }
                iVar1 = *(iVar7 + iVar6) + *(*(iVar5 + 0x80) + uVar8 * 4);
                _printk(0x8000431,iVar1);
                iVar9 = iVar6 * 4;
                sym.writel_relaxed(*(*(arg1_00 + 0x500) + iVar9),iVar1);
                sym.writel_relaxed(*(*(arg1_00 + 0x500) + iVar9 + 4),iVar1 + 4);
                sym.writel_relaxed(*(*(arg1_00 + 0x500) + iVar9 + 8),iVar1 + 8);
                sym.writel_relaxed(*(*(arg1_00 + 0x500) + iVar9 + 0xc),iVar1 + 0xc);
                sym.writel_relaxed(*(*(arg1_00 + 0x500) + iVar9 + 0x10),iVar1 + 0x10);
                sym.writel_relaxed(*(*(arg1_00 + 0x500) + iVar9 + 0x14),iVar1 + 0x14);
                sym.writel_relaxed(*(*(arg1_00 + 0x500) + iVar9 + 0x18),iVar1 + 0x18);
                arg1 = sym.writel_relaxed(*(*(arg1_00 + 0x500) + iVar9 + 0x1c),iVar1 + 0x1c);
                uVar8 = uVar8 + 1;
                iVar6 = iVar6 + 8;
            } while (uVar8 < *(iVar5 + 0x40));
        }
        if (*(iVar5 + 0x2c) == 0) {
            uVar8 = 0;
        }
        else {
            iVar6 = 0;
            uVar8 = 0;
            iVar7 = 0x24;
            do {
                arg1 = sym.msm_gpio_needs_valid_mask(arg1_00);
                if (((arg1 & 1U) == 0) ||
                   ((*(*(arg1_00 + 0x250) + (uVar8 >> 6 & 0x3ffffff) * 8) >> (uVar8 & 0x3f) & 1) != 0)) {
                    iVar1 = arg1_00 + 0x4c8;
                    puVar2 = *(iVar5 + 0x20) + iVar7;
                    sym.writel(*(*(arg1_00 + 0x4f8) + iVar6),*(iVar1 + (*(puVar2 + 5) >> 5 & 3) * 8) + *puVar2);
                    sym.writel(*(*(arg1_00 + 0x4f8) + iVar6 + 4),*(iVar1 + (*(puVar2 + 5) >> 5 & 3) * 8) + puVar2[1]);
                    sym.writel(*(*(arg1_00 + 0x4f8) + iVar6 + 8),*(iVar1 + (*(puVar2 + 5) >> 5 & 3) * 8) + puVar2[2]);
                    arg1 = sym.writel(*(*(arg1_00 + 0x4f8) + iVar6 + 0xc),
                                      *(iVar1 + (*(puVar2 + 5) >> 5 & 3) * 8) + puVar2[3]);
                }
                uVar8 = uVar8 + 1;
                iVar7 = iVar7 + 0x50;
                iVar6 = iVar6 + 0x10;
            } while (uVar8 < *(iVar5 + 0x2c));
        }
        if (uVar8 < *(iVar5 + 0x28)) {
            uVar4 = uVar8 & 0xffffffff;
            iVar6 = uVar4 << 4;
            iVar7 = (uVar4 + (uVar8 & 0xffffffff) * 4) * 0x10;
            do {
                iVar9 = *(iVar5 + 0x20);
                iVar1 = iVar9 + iVar7;
                if (*(iVar1 + 0x24) != 0) {
                    arg1 = sym.writel(*(*(arg1_00 + 0x4f8) + iVar6),
                                      *(arg1_00 + (*(iVar1 + 0x38) >> 5 & 3) * 8 + 0x4c8) + *(iVar1 + 0x24));
                }
                if (*(iVar1 + 0x28) != 0) {
                    arg1 = sym.writel(*(*(arg1_00 + 0x4f8) + iVar6 + 4),
                                      *(arg1_00 + (*(iVar9 + iVar7 + 0x38) >> 5 & 3) * 8 + 0x4c8) + *(iVar1 + 0x28));
                }
                uVar4 = uVar4 + 1;
                iVar7 = iVar7 + 0x50;
                iVar6 = iVar6 + 0x10;
            } while (uVar4 < *(iVar5 + 0x28));
        }
    }
    return arg1;
}


// ===== sym.pinctrl_hibernation_notifier @ 0x08005508 (size 248) =====

ulong sym.pinctrl_hibernation_notifier(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = _segment.ehdr;
    if (3 < arg1 - 1U) {
        return 1;
    }
    iVar5 = *(_segment.ehdr + 0x4c0);
    //switch table (4 cases) at 0x8000780
    switch(*(arg1 + 0x800077f) * 4 + 0x800554c) {
    case 0x8005550:
        if ((pm_suspend_global_flags & 1) == 0) {
            return 1;
        }
        break;
    case 0x80055a4:
        if ((pm_suspend_global_flags & 1) == 0) {
            return 1;
        }
    case 0x80055bc:
        kfree(*(_segment.ehdr + 0x4f8));
        kfree(*(iVar2 + 0x500));
        *(iVar2 + 0x508) = 0;
        *(iVar2 + 0x500) = 0;
        *(iVar2 + 0x4f8) = 0;
        return 1;
    }
    iVar3 = __kmalloc(*(iVar5 + 0x28) << 4,0xdc0);
    *(iVar2 + 0x4f8) = iVar3;
    if (iVar3 == 0) {
code_r0x080055e8:
        uVar4 = 0xfffffff4;
    }
    else {
        uVar1 = *(iVar5 + 0x40);
        if (uVar1 != 0) {
            iVar5 = __kmalloc(uVar1 << 5,0xdc0);
            *(iVar2 + 0x500) = iVar5;
            if (iVar5 == 0) {
                kfree(*(iVar2 + 0x4f8));
                goto code_r0x080055e8;
            }
        }
        uVar4 = 1;
        *(iVar2 + 0x508) = 1;
    }
    return uVar4;
}


// ===== sym.__cfi_check_fail @ 0x08005600 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08005644

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
    //switch table (4 cases) at 0x8000784
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8005658);
    (*pcVar1)();
}

