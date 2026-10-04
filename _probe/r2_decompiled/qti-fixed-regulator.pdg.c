// decompiled from qti-fixed-regulator by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 244) =====

//WARNING: Switch with 1 destination removed at 0x080016e4

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x1bf4c7c0f319a435) {
        if (arg1 == -0x3557318fb8d07b71) {
            pcVar2 = sym.reg_fixed_voltage_probe.b89b460bd936f884b5e172b202300527.cfi_jt;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) goto code_r0x080016a4;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else {
        if (arg1 == 0x1bf4c7c0f319a435) {
            if ((pcVar1 + -0x8001120 >> 3 | pcVar1 << 0x3d) < 5) {
                return;
            }
            goto code_r0x080016a4;
        }
        if (arg1 == 0x5b83a3fd302a5421) {
            pcVar2 = sym.regulator_proxy_consumer_sync_state.cfi_jt;
        }
        else {
            if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080016a4;
            pcVar2 = sym.cleanup_module.cfi_jt;
        }
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080016a4:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80016f8);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001100 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.reg_fixed_voltage_probe.b89b460bd936f884b5e172b202300527.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001108 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.reg_fixed_voltage_probe.b89b460bd936f884b5e172b202300527.cfi_jt,obj.__this_module)
    ;
    return;
}


// ===== sym.reg_fixed_voltage_probe.b89b460bd936f884b5e172b202300527.cfi_jt @ 0x08001110 (size 8) =====

uint64_t sym.reg_fixed_voltage_probe.b89b460bd936f884b5e172b202300527.cfi_jt(int64_t param_1)

{
    int iVar1;
    char *pcVar2;
    int64_t *piVar3;
    ulong *puVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar9;
    uint64_t uVar10;
    int64_t iVar11;
    ulong unaff_x30;
    int64_t iStack_78;
    ulong uStack_70;
    int64_t *piStack_68;
    ulong uStack_60;
    ulong uStack_58;
    uint64_t uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iVar6 = param_1 + 0x10;
    iStack_48 = *(iVar11 + 0x5e0);
    pcVar2 = of_device_get_match_data(iVar6);
    uStack_58 = 0;
    uStack_50 = 0;
    piStack_68 = NULL;
    uStack_60 = 0;
    iStack_78 = 0;
    uStack_70 = 0;
    piVar3 = devm_kmalloc(iVar6,0x150,0xdc0);
    if (piVar3 != NULL) {
        iVar11 = *(param_1 + 0x300);
        if (iVar11 == 0) {
            puVar4 = *(param_1 + 0xa0);
            if (puVar4 == NULL) goto code_r0x08001494;
        }
        else {
            puVar4 = devm_kmalloc(iVar6,0x28,0xdc0);
            if (puVar4 == NULL) {
                puVar4 = 0xfffffffffffffff4;
                goto code_r0x08001498;
            }
            iVar5 = of_get_regulator_init_data(iVar6,*(param_1 + 0x300),piVar3);
            puVar4[4] = iVar5;
            if (iVar5 == 0) {
                puVar4 = 0xffffffffffffffea;
                goto code_r0x08001498;
            }
            *(iVar5 + 0xe0) = *(iVar5 + 0xe0) & 0xfffb;
            *puVar4 = *(iVar5 + 8);
            if (*(iVar5 + 0x10) != *(iVar5 + 0x14)) {
                _dev_err(iVar6,"Fixed regulator specified with variable voltages\n");
                puVar4 = 0xffffffffffffffea;
                goto code_r0x08001498;
            }
            *(puVar4 + 2) = *(iVar5 + 0x10);
            if ((*(iVar5 + 0xe0) >> 1 & 1) != 0) {
                *(puVar4 + 0x1c) = *(puVar4 + 0x1c) | 1;
            }
            of_property_read_variable_u32_array(iVar11,"startup-delay-us",puVar4 + 0x14,1,0);
            of_property_read_variable_u32_array(iVar11,"off-on-delay-us",puVar4 + 3,1,0);
            iVar11 = of_find_property(iVar11,"vin-supply",0);
            if (iVar11 != 0) {
                puVar4[1] = 0x800066c;
            }
            if (0xfffffffffffff000 < puVar4) goto code_r0x08001498;
        }
        iVar11 = devm_kstrdup(iVar6,*puVar4,0xcc0);
        *piVar3 = iVar11;
        if (iVar11 != 0) {
            *(piVar3 + 0x4c) = 0;
            piVar3[10] = obj.__this_module;
            if (pcVar2 == NULL) {
code_r0x0800134c:
                piVar3[8] = obj.fixed_voltage_ops;
            }
            else if (*pcVar2 == '\0') {
                if (pcVar2[1] == '\0') goto code_r0x0800134c;
                uVar9 = *(param_1 + 0x300);
                piVar3[8] = obj.fixed_voltage_domain_ops;
                iVar1 = of_get_required_opp_performance_state(uVar9,0);
                *(piVar3 + 0x14c) = iVar1;
                if (iVar1 < 0) {
                    _dev_err(iVar6,"Can\'t get performance state from devicetree\n");
                    puVar4 = *(piVar3 + 0x14c);
                    goto code_r0x08001498;
                }
            }
            else {
                piVar3[8] = obj.fixed_voltage_clkenabled_ops;
                uVar7 = devm_clk_get(iVar6,0);
                piVar3[0x28] = uVar7;
                if (0xfffffffffffff000 < uVar7) {
                    _dev_err(iVar6,"Can\'t get enable-clock from devicetree\n");
                    puVar4 = 0xfffffffe;
                    goto code_r0x08001498;
                }
            }
            *(piVar3 + 0x11c) = *(puVar4 + 0x14);
            *(piVar3 + 0x24) = *(puVar4 + 3);
            if (puVar4[1] != 0) {
                iVar11 = devm_kstrdup(iVar6,puVar4[1],0xcc0);
                piVar3[1] = iVar11;
                if (iVar11 == 0) {
                    pcVar2 = "Failed to allocate input supply\n";
                    goto code_r0x0800148c;
                }
            }
            uVar8 = 0;
            if (*(puVar4 + 2) != 0) {
                *(piVar3 + 7) = 1;
                uVar8 = *(puVar4 + 2);
            }
            *(piVar3 + 100) = uVar8;
            uVar8 = 0x13;
            if ((*(puVar4 + 0x1c) & 1) != 0) {
                uVar8 = 0x17;
            }
            uStack_50 = gpiod_get_optional(iVar6,0,uVar8);
            if (uStack_50 < 0xfffffffffffff001) {
                uStack_70 = puVar4[4];
                uStack_60 = *(param_1 + 0x300);
                iStack_78 = iVar6;
                piStack_68 = piVar3;
                uVar7 = devm_regulator_register(iVar6,piVar3,&iStack_78);
                piVar3[0x27] = uVar7;
                if (uVar7 < 0xfffffffffffff001) {
                    *(param_1 + 0xa8) = piVar3;
                    iVar1 = devm_regulator_proxy_consumer_register(iVar6,*(param_1 + 0x300));
                    if (iVar1 != 0) {
                        _dev_err(iVar6,"failed to register proxy consumer, ret=%d\n",iVar1);
                    }
                    iVar1 = devm_regulator_debug_register(iVar6,uVar7);
                    if (iVar1 != 0) {
                        _dev_err(iVar6,"failed to register debug regulator, ret=%d\n",iVar1);
                    }
                    puVar4 = NULL;
                }
                else {
                    uVar7 = dev_err_probe(iVar6,uVar7 & 0xffffffff,"Failed to register regulator: %ld\n",uVar7);
                    puVar4 = uVar7 & 0xffffffff;
                }
            }
            else {
                uVar7 = dev_err_probe(iVar6,uStack_50,"can\'t get GPIO\n");
                puVar4 = uVar7 & 0xffffffff;
            }
            goto code_r0x08001498;
        }
        pcVar2 = "Failed to allocate supply name\n";
code_r0x0800148c:
        _dev_err(iVar6,pcVar2);
    }
code_r0x08001494:
    puVar4 = 0xfffffff4;
code_r0x08001498:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_48) {
        __stack_chk_fail();
        *extraout_x18 = sym.reg_clock_enable;
        iVar6 = rdev_get_drvdata();
        uVar9 = *(iVar6 + 0x140);
        uVar7 = clk_prepare(uVar9);
        uVar10 = uVar7 & 0xffffffff;
        if (uVar7 == 0) {
            uVar7 = clk_enable(uVar9);
            uVar10 = uVar7 & 0xffffffff;
            if (uVar7 == 0) {
                *(iVar6 + 0x148) = *(iVar6 + 0x148) + 1;
            }
            else {
                clk_unprepare(uVar9);
            }
        }
        return uVar10;
    }
    return puVar4 & 0xffffffff;
}


// ===== sym.regulator_proxy_consumer_sync_state.cfi_jt @ 0x08001118 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.regulator_proxy_consumer_sync_state.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.reg_is_enabled.b89b460bd936f884b5e172b202300527.cfi_jt @ 0x08001120 (size 8) =====

bool sym.reg_is_enabled.b89b460bd936f884b5e172b202300527.cfi_jt(void)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = rdev_get_drvdata();
    return *(iVar1 + 0x148) != 0;
}


// ===== sym.reg_domain_disable.b89b460bd936f884b5e172b202300527.cfi_jt @ 0x08001128 (size 8) =====

void sym.reg_domain_disable.b89b460bd936f884b5e172b202300527.cfi_jt(int64_t param_1)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = rdev_get_drvdata();
    iVar1 = dev_pm_genpd_set_performance_state(*(param_1 + 0x148),0);
    if (iVar1 == 0) {
        *(iVar2 + 0x148) = *(iVar2 + 0x148) + -1;
    }
    return;
}


// ===== sym.reg_clock_enable.b89b460bd936f884b5e172b202300527.cfi_jt @ 0x08001130 (size 8) =====

int sym.reg_clock_enable.b89b460bd936f884b5e172b202300527.cfi_jt(void)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = rdev_get_drvdata();
    uVar3 = *(iVar2 + 0x140);
    iVar1 = clk_prepare(uVar3);
    if (iVar1 == 0) {
        iVar1 = clk_enable(uVar3);
        if (iVar1 == 0) {
            *(iVar2 + 0x148) = *(iVar2 + 0x148) + 1;
        }
        else {
            clk_unprepare(uVar3);
        }
    }
    return iVar1;
}


// ===== sym.reg_domain_enable.b89b460bd936f884b5e172b202300527.cfi_jt @ 0x08001138 (size 8) =====

void sym.reg_domain_enable.b89b460bd936f884b5e172b202300527.cfi_jt(int64_t param_1)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = rdev_get_drvdata();
    iVar1 = dev_pm_genpd_set_performance_state(*(param_1 + 0x148),*(iVar2 + 0x14c));
    if (iVar1 == 0) {
        *(iVar2 + 0x148) = *(iVar2 + 0x148) + 1;
    }
    return;
}


// ===== sym.reg_clock_disable.b89b460bd936f884b5e172b202300527.cfi_jt @ 0x08001140 (size 8) =====

ulong sym.reg_clock_disable.b89b460bd936f884b5e172b202300527.cfi_jt(void)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = rdev_get_drvdata();
    uVar2 = *(iVar1 + 0x140);
    clk_disable(uVar2);
    clk_unprepare(uVar2);
    *(iVar1 + 0x148) = *(iVar1 + 0x148) + -1;
    return 0;
}


// ===== sym.reg_fixed_voltage_probe @ 0x08001148 (size 956) =====

uint64_t sym.reg_fixed_voltage_probe(int64_t arg1)

{
    int iVar1;
    char *pcVar2;
    int64_t *piVar3;
    ulong *puVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar9;
    uint64_t uVar10;
    int64_t iVar11;
    ulong unaff_x30;
    int64_t iStack_78;
    ulong uStack_70;
    int64_t *piStack_68;
    ulong uStack_60;
    ulong uStack_58;
    uint64_t uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iVar6 = arg1 + 0x10;
    iStack_48 = *(iVar11 + 0x5e0);
    pcVar2 = of_device_get_match_data(iVar6);
    uStack_58 = 0;
    uStack_50 = 0;
    piStack_68 = NULL;
    uStack_60 = 0;
    iStack_78 = 0;
    uStack_70 = 0;
    piVar3 = devm_kmalloc(iVar6,0x150,0xdc0);
    if (piVar3 != NULL) {
        iVar11 = *(arg1 + 0x300);
        if (iVar11 == 0) {
            puVar4 = *(arg1 + 0xa0);
            if (puVar4 == NULL) goto code_r0x08001494;
        }
        else {
            puVar4 = devm_kmalloc(iVar6,0x28,0xdc0);
            if (puVar4 == NULL) {
                puVar4 = 0xfffffffffffffff4;
                goto code_r0x08001498;
            }
            iVar5 = of_get_regulator_init_data(iVar6,*(arg1 + 0x300),piVar3);
            puVar4[4] = iVar5;
            if (iVar5 == 0) {
                puVar4 = 0xffffffffffffffea;
                goto code_r0x08001498;
            }
            *(iVar5 + 0xe0) = *(iVar5 + 0xe0) & 0xfffb;
            *puVar4 = *(iVar5 + 8);
            if (*(iVar5 + 0x10) != *(iVar5 + 0x14)) {
                _dev_err(iVar6,"Fixed regulator specified with variable voltages\n");
                puVar4 = 0xffffffffffffffea;
                goto code_r0x08001498;
            }
            *(puVar4 + 2) = *(iVar5 + 0x10);
            if ((*(iVar5 + 0xe0) >> 1 & 1) != 0) {
                *(puVar4 + 0x1c) = *(puVar4 + 0x1c) | 1;
            }
            of_property_read_variable_u32_array(iVar11,"startup-delay-us",puVar4 + 0x14,1,0);
            of_property_read_variable_u32_array(iVar11,"off-on-delay-us",puVar4 + 3,1,0);
            iVar11 = of_find_property(iVar11,"vin-supply",0);
            if (iVar11 != 0) {
                puVar4[1] = 0x800066c;
            }
            if (0xfffffffffffff000 < puVar4) goto code_r0x08001498;
        }
        iVar11 = devm_kstrdup(iVar6,*puVar4,0xcc0);
        *piVar3 = iVar11;
        if (iVar11 != 0) {
            *(piVar3 + 0x4c) = 0;
            piVar3[10] = obj.__this_module;
            if (pcVar2 == NULL) {
code_r0x0800134c:
                piVar3[8] = obj.fixed_voltage_ops;
            }
            else if (*pcVar2 == '\0') {
                if (pcVar2[1] == '\0') goto code_r0x0800134c;
                uVar9 = *(arg1 + 0x300);
                piVar3[8] = obj.fixed_voltage_domain_ops;
                iVar1 = of_get_required_opp_performance_state(uVar9,0);
                *(piVar3 + 0x14c) = iVar1;
                if (iVar1 < 0) {
                    _dev_err(iVar6,"Can\'t get performance state from devicetree\n");
                    puVar4 = *(piVar3 + 0x14c);
                    goto code_r0x08001498;
                }
            }
            else {
                piVar3[8] = obj.fixed_voltage_clkenabled_ops;
                uVar7 = devm_clk_get(iVar6,0);
                piVar3[0x28] = uVar7;
                if (0xfffffffffffff000 < uVar7) {
                    _dev_err(iVar6,"Can\'t get enable-clock from devicetree\n");
                    puVar4 = 0xfffffffe;
                    goto code_r0x08001498;
                }
            }
            *(piVar3 + 0x11c) = *(puVar4 + 0x14);
            *(piVar3 + 0x24) = *(puVar4 + 3);
            if (puVar4[1] != 0) {
                iVar11 = devm_kstrdup(iVar6,puVar4[1],0xcc0);
                piVar3[1] = iVar11;
                if (iVar11 == 0) {
                    pcVar2 = "Failed to allocate input supply\n";
                    goto code_r0x0800148c;
                }
            }
            uVar8 = 0;
            if (*(puVar4 + 2) != 0) {
                *(piVar3 + 7) = 1;
                uVar8 = *(puVar4 + 2);
            }
            *(piVar3 + 100) = uVar8;
            uVar8 = 0x13;
            if ((*(puVar4 + 0x1c) & 1) != 0) {
                uVar8 = 0x17;
            }
            uStack_50 = gpiod_get_optional(iVar6,0,uVar8);
            if (uStack_50 < 0xfffffffffffff001) {
                uStack_70 = puVar4[4];
                uStack_60 = *(arg1 + 0x300);
                iStack_78 = iVar6;
                piStack_68 = piVar3;
                uVar7 = devm_regulator_register(iVar6,piVar3,&iStack_78);
                piVar3[0x27] = uVar7;
                if (uVar7 < 0xfffffffffffff001) {
                    *(arg1 + 0xa8) = piVar3;
                    iVar1 = devm_regulator_proxy_consumer_register(iVar6,*(arg1 + 0x300));
                    if (iVar1 != 0) {
                        _dev_err(iVar6,"failed to register proxy consumer, ret=%d\n",iVar1);
                    }
                    iVar1 = devm_regulator_debug_register(iVar6,uVar7);
                    if (iVar1 != 0) {
                        _dev_err(iVar6,"failed to register debug regulator, ret=%d\n",iVar1);
                    }
                    puVar4 = NULL;
                }
                else {
                    uVar7 = dev_err_probe(iVar6,uVar7 & 0xffffffff,"Failed to register regulator: %ld\n",uVar7);
                    puVar4 = uVar7 & 0xffffffff;
                }
            }
            else {
                uVar7 = dev_err_probe(iVar6,uStack_50,"can\'t get GPIO\n");
                puVar4 = uVar7 & 0xffffffff;
            }
            goto code_r0x08001498;
        }
        pcVar2 = "Failed to allocate supply name\n";
code_r0x0800148c:
        _dev_err(iVar6,pcVar2);
    }
code_r0x08001494:
    puVar4 = 0xfffffff4;
code_r0x08001498:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_48) {
        __stack_chk_fail();
        *extraout_x18 = sym.reg_clock_enable;
        iVar6 = rdev_get_drvdata();
        uVar9 = *(iVar6 + 0x140);
        uVar7 = clk_prepare(uVar9);
        uVar10 = uVar7 & 0xffffffff;
        if (uVar7 == 0) {
            uVar7 = clk_enable(uVar9);
            uVar10 = uVar7 & 0xffffffff;
            if (uVar7 == 0) {
                *(iVar6 + 0x148) = *(iVar6 + 0x148) + 1;
            }
            else {
                clk_unprepare(uVar9);
            }
        }
        return uVar10;
    }
    return puVar4 & 0xffffffff;
}


// ===== sym.reg_clock_enable @ 0x08001504 (size 120) =====

int sym.reg_clock_enable(void)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = rdev_get_drvdata();
    uVar3 = *(iVar2 + 0x140);
    iVar1 = clk_prepare(uVar3);
    if (iVar1 == 0) {
        iVar1 = clk_enable(uVar3);
        if (iVar1 == 0) {
            *(iVar2 + 0x148) = *(iVar2 + 0x148) + 1;
        }
        else {
            clk_unprepare(uVar3);
        }
    }
    return iVar1;
}


// ===== sym.reg_clock_disable @ 0x0800157c (size 84) =====

ulong sym.reg_clock_disable(void)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = rdev_get_drvdata();
    uVar2 = *(iVar1 + 0x140);
    clk_disable(uVar2);
    clk_unprepare(uVar2);
    *(iVar1 + 0x148) = *(iVar1 + 0x148) + -1;
    return 0;
}


// ===== sym.reg_is_enabled @ 0x080015d0 (size 48) =====

bool sym.reg_is_enabled(void)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = rdev_get_drvdata();
    return *(iVar1 + 0x148) != 0;
}


// ===== sym.reg_domain_enable @ 0x08001600 (size 80) =====

void sym.reg_domain_enable(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = rdev_get_drvdata();
    iVar1 = dev_pm_genpd_set_performance_state(*(arg1 + 0x148),*(iVar2 + 0x14c));
    if (iVar1 == 0) {
        *(iVar2 + 0x148) = *(iVar2 + 0x148) + 1;
    }
    return;
}


// ===== sym.reg_domain_disable @ 0x08001650 (size 80) =====

void sym.reg_domain_disable(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = rdev_get_drvdata();
    iVar1 = dev_pm_genpd_set_performance_state(*(arg1 + 0x148),0);
    if (iVar1 == 0) {
        *(iVar2 + 0x148) = *(iVar2 + 0x148) + -1;
    }
    return;
}


// ===== sym.__cfi_check_fail @ 0x080016a0 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080016e4

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
    //switch table (4 cases) at 0x8000130
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80016f8);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001704 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.reg_fixed_voltage_probe.b89b460bd936f884b5e172b202300527.cfi_jt,obj.__this_module)
    ;
    return;
}


// ===== sym.cleanup_module @ 0x08001738 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.reg_fixed_voltage_probe.b89b460bd936f884b5e172b202300527.cfi_jt);
    return;
}

