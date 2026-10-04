// decompiled from gdsc-regulator by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 680) =====

//WARNING: Switch with 1 destination removed at 0x080043a4

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x1b4c1f9ae2484bc1) {
        if (arg1 < -0x3557318fb8d07b71) {
            if (arg1 == -0x78ef6e655139cb7b) {
                pcVar2 = sym.gdsc_get_mode.29badac91dd5595ca811e10faabbdec0.cfi_jt;
            }
            else {
                if (arg1 == -0x57be845bca9148ef) {
                    if ((pcVar1 + -0x8002330 >> 3 | pcVar1 << 0x3d) < 2) {
                        return;
                    }
                    goto code_r0x08004364;
                }
                if (arg1 != -0x46e2d629c3d924cf) goto code_r0x08004364;
                pcVar2 = sym.gdsc_set_mode.29badac91dd5595ca811e10faabbdec0.cfi_jt;
            }
        }
        else if (arg1 < -0x3295144be4b3db) {
            if (arg1 == -0x3557318fb8d07b71) {
                pcVar2 = sym.gdsc_probe.29badac91dd5595ca811e10faabbdec0.cfi_jt;
            }
            else {
                if (arg1 != -0x218c0108fde83420) goto code_r0x08004364;
                pcVar2 = sym.trace_event_raw_init.cfi_jt;
            }
        }
        else if (arg1 == -0x3295144be4b3db) {
            pcVar2 = sym.__traceiter_gdsc_time.cfi_jt;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) goto code_r0x08004364;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else {
        if (arg1 < 0x34d36de71a8e457a) {
            if (arg1 == 0x1b4c1f9ae2484bc1) {
                pcVar2 = sym.perf_trace_gdsc_time.29badac91dd5595ca811e10faabbdec0.cfi_jt;
            }
            else {
                if (arg1 != 0x1bf4c7c0f319a435) {
                    if (arg1 != 0x1c2b0952efa24c7a) goto code_r0x08004364;
                    pcVar2 = sym.trace_event_reg.cfi_jt;
                    goto code_r0x08002298;
                }
                pcVar2 = sym.gdsc_enable.29badac91dd5595ca811e10faabbdec0.cfi_jt;
            }
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 3) {
                return;
            }
            goto code_r0x08004364;
        }
        if (arg1 < 0x5b83a3fd302a5421) {
            if (arg1 == 0x34d36de71a8e457a) {
                pcVar2 = sym.gdsc_debug_print_regs.cfi_jt;
            }
            else {
                if (arg1 != 0x3dd1a39e589289fe) goto code_r0x08004364;
                pcVar2 = sym.trace_raw_output_gdsc_time.29badac91dd5595ca811e10faabbdec0.cfi_jt;
            }
        }
        else if (arg1 == 0x5b83a3fd302a5421) {
            pcVar2 = sym.regulator_proxy_consumer_sync_state.cfi_jt;
        }
        else {
            if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08004364;
            pcVar2 = sym.cleanup_module.cfi_jt;
        }
    }
code_r0x08002298:
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08004364:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80043b8);
    (*pcVar1)();
}


// ===== sym.__traceiter_gdsc_time.cfi_jt @ 0x080022b0 (size 8) =====

ulong sym.__traceiter_gdsc_time.cfi_jt(ulong param_1,ulong param_2,uint param_3,uint param_4,uint param_5)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8004490;
    piVar1 = *0x8004490;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3,param_4,param_5);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.gdsc_get_mode.29badac91dd5595ca811e10faabbdec0.cfi_jt @ 0x080022b8 (size 8) =====

uint sym.gdsc_get_mode.29badac91dd5595ca811e10faabbdec0.cfi_jt(void)

{
    uint uVar1;
    int64_t iVar2;
    bool bVar3;
    int64_t iVar4;
    uint uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = rdev_get_drvdata();
    bVar3 = *(iVar4 + 0x1f9) != '\0';
    iVar2 = 0x1d7;
    if (bVar3) {
        iVar2 = 0x1fa;
    }
    uVar5 = 4;
    if (!bVar3) {
        uVar5 = 1;
    }
    uVar1 = 2;
    if (*(iVar4 + iVar2) != '\0') {
        uVar1 = uVar5;
    }
    return uVar1;
}


// ===== sym.trace_event_raw_init.cfi_jt @ 0x080022c0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.trace_event_raw_init.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.cleanup_module.cfi_jt @ 0x080022c8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.gdsc_probe.29badac91dd5595ca811e10faabbdec0.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080022d0 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.gdsc_probe.29badac91dd5595ca811e10faabbdec0.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.gdsc_probe.29badac91dd5595ca811e10faabbdec0.cfi_jt @ 0x080022d8 (size 8) =====

uint64_t sym.gdsc_probe.29badac91dd5595ca811e10faabbdec0.cfi_jt(int64_t param_1)

{
    uint64_t uVar1;
    char cVar2;
    bool bVar3;
    uint8_t uVar4;
    int iVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint64_t *arg1;
    ulong *puVar8;
    int64_t iVar9;
    uint64_t uVar10;
    ulong uVar11;
    int64_t *piVar12;
    char *pcVar13;
    int extraout_w8;
    ulong *in_x18;
    uint64_t *unaff_x19;
    uint64_t *unaff_x22;
    ulong *unaff_x23;
    uint64_t uVar14;
    uint64_t uVar15;
    ulong *unaff_x28;
    ulong unaff_x30;
    uint32_t uStack_a8;
    uint32_t uStack_a4;
    uint64_t uStack_a0;
    ulong *puStack_98;
    uint64_t *puStack_90;
    ulong uStack_88;
    uint64_t uStack_80;
    ulong uStack_78;
    uint64_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    uVar1 = param_1 + 0x10;
    iStack_68 = *(iVar9 + 0x5e0);
    uStack_80 = 0;
    uStack_78 = 0;
    puStack_90 = NULL;
    uStack_88 = 0;
    uStack_a0 = 0;
    puStack_98 = NULL;
    uStack_a8 = 0;
    uStack_a4 = 0;
    arg1 = devm_kmalloc(uVar1,0x200,0xdc0);
    if (arg1 == NULL) goto code_r0x08002ea4;
    unaff_x22 = arg1 + 1;
    puVar8 = of_get_regulator_init_data(uVar1,*(param_1 + 0x300),unaff_x22);
    unaff_x19 = arg1;
    if (puVar8 == NULL) goto code_r0x08002ea4;
    unaff_x28 = param_1 + 0x300;
    iVar9 = of_get_property(*unaff_x28,"parent-supply",0);
    if (iVar9 != 0) {
        *puVar8 = "parent";
    }
    uVar10 = of_property_read_string(*unaff_x28,"regulator-name",unaff_x22);
    uVar14 = uVar10 & 0xffffffff;
    if (uVar10 == 0) {
        iVar9 = of_find_property(*unaff_x28,"domain-addr",0);
        unaff_x23 = puVar8;
        if (iVar9 == 0) {
code_r0x08002990:
            iVar9 = of_find_property(*unaff_x28,"sw-reset",0);
            if (iVar9 != 0) {
                uVar14 = of_count_phandle_with_args(*unaff_x28,"sw-reset",0);
                *(arg1 + 0x3d) = uVar14;
                if (uVar14 >> 0x3d != 0) {
                    uVar14 = 0xfffffff4;
                    arg1[0x2c] = 0;
                    goto code_r0x08002ea8;
                }
                uVar14 = devm_kmalloc(uVar1,-(uVar14 >> 0x1f & 1) & 0xfffffff800000000 | (uVar14 & 0xffffffff) << 3,
                                      0xcc0);
                arg1[0x2c] = uVar14;
                if (uVar14 == 0) goto code_r0x08002ea4;
                if (0 < arg1[0x3d]) {
                    uVar10 = 0;
                    do {
                        iVar9 = of_parse_phandle(*unaff_x28,"sw-reset",uVar10 & 0xffffffff);
                        if (iVar9 == 0) {
                            uVar14 = 0xffffffed;
                            goto code_r0x08002ea8;
                        }
                        uVar11 = syscon_node_to_regmap();
                        *(arg1[0x2c] + uVar10 * 8) = uVar11;
                        uVar14 = *(arg1[0x2c] + uVar10 * 8);
                        if (0xfffffffffffff000 < uVar14) {
                            uVar14 = uVar14 & 0xffffffff;
                            goto code_r0x08002c3c;
                        }
                        uVar10 = uVar10 + 1;
                    } while (uVar10 < arg1[0x3d]);
                }
            }
            iVar9 = of_find_property(*unaff_x28,"hw-ctrl-addr",0);
            if (iVar9 != 0) {
                uVar14 = syscon_regmap_lookup_by_phandle(*unaff_x28,"hw-ctrl-addr");
                arg1[0x2b] = uVar14;
                if (0xfffffffffffff000 < uVar14) goto code_r0x08002c38;
            }
            uVar11 = *unaff_x28;
            *(arg1 + 500) = 500;
            of_property_read_variable_u32_array(uVar11,"qcom,gds-timeout",arg1 + 500,1,0);
            iVar5 = of_property_read_string_helper(*unaff_x28,"clock-names",0,0,0);
            *(arg1 + 0x1dc) = iVar5;
            if (iVar5 != -0x16) {
                if (-1 < iVar5) goto code_r0x08002ad0;
                _dev_err(uVar1,"Failed to get clock names, ret=%d\n");
                uVar14 = *(arg1 + 0x1dc);
                goto code_r0x08002c3c;
            }
            *(arg1 + 0x1dc) = 0;
code_r0x08002ad0:
            iVar5 = of_property_read_string_helper(*unaff_x28,"interconnect-names",0,0,0);
            *(arg1 + 0x1ec) = iVar5;
            if (iVar5 == -0x16) {
                *(arg1 + 0x1ec) = 0;
            }
            else if (iVar5 < 0) {
                _dev_err(uVar1,"Failed to get interconnect names, ret=%d\n");
                uVar14 = *(arg1 + 0x1ec);
                goto code_r0x08002c3c;
            }
            iVar9 = of_find_property(*unaff_x28,"qcom,enable-root-clk",0);
            uVar11 = *unaff_x28;
            *(arg1 + 0x1d3) = iVar9 != 0;
            iVar9 = of_find_property(uVar11,"qcom,force-enable-root-clk",0);
            uVar11 = *unaff_x28;
            *(arg1 + 0x1d4) = iVar9 != 0;
            iVar9 = of_find_property(uVar11,"qcom,reset-aon-logic",0);
            uVar11 = *unaff_x28;
            *(arg1 + 0x1d9) = iVar9 != 0;
            iVar9 = of_find_property(uVar11,"qcom,no-status-check-on-disable",0);
            uVar11 = *unaff_x28;
            *(arg1 + 0x1d5) = iVar9 != 0;
            iVar9 = of_find_property(uVar11,"qcom,retain-regs",0);
            uVar11 = *unaff_x28;
            *(arg1 + 0x1d1) = iVar9 != 0;
            iVar9 = of_find_property(uVar11,"qcom,skip-disable-before-sw-enable",0);
            uVar11 = *unaff_x28;
            *(arg1 + 0x3f) = iVar9 != 0;
            iVar9 = of_find_property(uVar11,"qcom,support-cfg-gdscr",0);
            uVar11 = *unaff_x28;
            *(arg1 + 0x1fb) = iVar9 != 0;
            iVar9 = of_find_property(uVar11,"qcom,collapse-vote",0);
            if (iVar9 == 0) {
code_r0x08002c74:
                iVar9 = of_find_property(*unaff_x28,"qcom,skip-disable",0);
                *(arg1 + 0x1f9) = iVar9 != 0;
                if (iVar9 != 0) {
                    *(puVar8 + 0x3c) = 6;
                    *(puVar8 + 8) = *(puVar8 + 8) | 4;
                }
                iVar9 = of_find_property(*unaff_x28,"qcom,skip-logic-collapse",0);
                *(arg1 + 0x3a) = iVar9 == 0;
                if (iVar9 != 0) {
                    iVar5 = of_property_read_string_helper(*unaff_x28,"reset-names",0,0,0);
                    *(arg1 + 0x3c) = iVar5;
                    if (iVar5 == -0x16) {
                        *(arg1 + 0x3c) = 0;
                    }
                    else if (iVar5 < 0) {
                        _dev_err(uVar1,"Failed to get reset clock names\n");
                        uVar14 = arg1[0x3c];
                        goto code_r0x08002c3c;
                    }
                }
                iVar9 = of_find_property(*unaff_x28,"qcom,support-hw-trigger",0);
                if (iVar9 != 0) {
                    *(puVar8 + 0x3c) = *(puVar8 + 0x3c) | 3;
                    *(puVar8 + 8) = *(puVar8 + 8) | 4;
                    *(arg1 + 0x1da) = 1;
                }
                goto code_r0x08002d40;
            }
            iVar5 = of_property_count_elems_of_size(*unaff_x28,"qcom,collapse-vote",4);
            if (iVar5 == 2) {
                uVar14 = syscon_regmap_lookup_by_phandle(*unaff_x28,"qcom,collapse-vote");
                arg1[0x2d] = uVar14;
                if (0xfffffffffffff000 < uVar14) goto code_r0x08002c38;
                uVar10 = of_property_read_u32_index(*unaff_x28,"qcom,collapse-vote",1,arg1 + 0x2e);
                uVar14 = uVar10 & 0xffffffff;
                if ((uVar10 != 0) || (0x1f < arg1[0x2e])) {
                    _dev_err(uVar1,"qcom,collapse-vote vote_bit error\n");
                    goto code_r0x08002c3c;
                }
                goto code_r0x08002c74;
            }
            pcVar13 = "qcom,collapse-vote needs two values\n";
        }
        else {
            uVar14 = syscon_regmap_lookup_by_phandle(*unaff_x28,"domain-addr");
            arg1[0x2a] = uVar14;
            if (uVar14 < 0xfffffffffffff001) goto code_r0x08002990;
code_r0x08002c38:
            uVar14 = uVar14 & 0xffffffff;
code_r0x08002c3c:
            if (uVar14 != 0) goto code_r0x08002ea8;
code_r0x08002d40:
            piVar12 = platform_get_resource(param_1,0x200,0);
            if (piVar12 == NULL) {
                pcVar13 = "Failed to get address resource\n";
            }
            else {
                uVar14 = devm_ioremap(uVar1,*piVar12,(piVar12[1] - *piVar12) + 1);
                arg1[0x28] = uVar14;
                if (uVar14 == 0) goto code_r0x08002ea4;
                iVar9 = of_find_property(*unaff_x28,"qcom,no-config-gdscr",0);
                if (iVar9 != 0) {
                    _segment.ehdr = 0;
                }
                uVar14 = __devm_regmap_init_mmio_clk(uVar1,0,arg1[0x28],obj.gdsc_regmap_config,0,0);
                arg1[0x29] = uVar14;
                if (uVar14 == 0) {
                    pcVar13 = "Couldn\'t get regmap\n";
                }
                else {
                    iVar5 = *(arg1 + 0x1dc);
                    if (iVar5 >> 0x3d == 0) {
                        uVar14 = devm_kmalloc(uVar1,iVar5 << 3,0xdc0);
                        iVar5 = *(arg1 + 0x1dc);
                        arg1[0x2f] = uVar14;
                    }
                    else {
                        uVar14 = 0;
                        arg1[0x2f] = 0;
                    }
                    if ((iVar5 != 0) && (uVar14 == 0)) goto code_r0x08002ea4;
                    *(arg1 + 0x1e4) = 0xffffffff;
                    if (0 < iVar5) {
                        uVar10 = 0;
                        do {
                            uStack_70 = 0;
                            of_property_read_string_helper
                                      (*unaff_x28,"clock-names",&uStack_70,1,uVar10 & 0xffffffff);
                            uVar11 = devm_clk_get(uVar1,uStack_70);
                            *(arg1[0x2f] + uVar10 * 8) = uVar11;
                            uVar14 = *(arg1[0x2f] + uVar10 * 8);
                            if (0xfffffffffffff000 < uVar14) {
                                if (uVar14 == -0x205) goto code_r0x0800311c;
                                goto code_r0x08002ef0;
                            }
                            iVar5 = strcmp(uStack_70,"core_root_clk");
                            if (iVar5 == 0) {
                                *(arg1 + 0x1e4) = uVar10;
                            }
                            uVar10 = uVar10 + 1;
                        } while (uVar10 < *(arg1 + 0x1dc));
                    }
                    iVar5 = *(arg1 + 0x1ec);
                    if (iVar5 >> 0x3d == 0) {
                        uVar14 = devm_kmalloc(uVar1,iVar5 << 3,0xdc0);
                        iVar5 = *(arg1 + 0x1ec);
                        arg1[0x39] = uVar14;
                    }
                    else {
                        uVar14 = 0;
                        arg1[0x39] = 0;
                    }
                    if ((iVar5 != 0) && (uVar14 == 0)) goto code_r0x08002ea4;
                    if (0 < iVar5) {
                        uVar14 = 0;
                        do {
                            uStack_70 = 0;
                            of_property_read_string_helper
                                      (*unaff_x28,"interconnect-names",&uStack_70,1,uVar14 & 0xffffffff);
                            uVar11 = of_icc_get(uVar1,uStack_70);
                            *(arg1[0x39] + uVar14 * 8) = uVar11;
                            uVar10 = *(arg1[0x39] + uVar14 * 8);
                            if (0xfffffffffffff000 < uVar10) {
                                uVar14 = uVar10 & 0xffffffff;
                                if (uVar10 == -0x205) goto code_r0x0800311c;
                                pcVar13 = "Failed to get path %s, ret=%d\n";
                                goto code_r0x08003100;
                            }
                            uVar14 = uVar14 + 1;
                        } while (uVar14 < *(arg1 + 0x1ec));
                    }
                    if (((*(arg1 + 0x1d3) == '\0') && (*(arg1 + 0x1d4) == '\0')) || (*(arg1 + 0x1e4) != -1)) {
                        if (arg1[0x3a] != '\0') goto code_r0x08003120;
                        iVar5 = arg1[0x3c];
                        if (iVar5 >> 0x3d != 0) goto code_r0x08003428;
                        uVar14 = devm_kmalloc(uVar1,iVar5 << 3,0xdc0);
                        iVar5 = arg1[0x3c];
                        arg1[0x38] = uVar14;
                        if (iVar5 == 0) goto code_r0x0800306c;
                        goto code_r0x08003068;
                    }
                    pcVar13 = "Failed to get root clock name\n";
                }
            }
        }
        _dev_err(uVar1,pcVar13);
        uVar14 = 0xffffffea;
    }
code_r0x08002ea8:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_68) {
        return uVar14 & 0xffffffff;
    }
    __stack_chk_fail();
    iVar5 = extraout_w8;
code_r0x08003428:
    uVar14 = 0;
    arg1[0x38] = 0;
    unaff_x19 = arg1;
    if (iVar5 != 0) {
code_r0x08003068:
        arg1 = unaff_x19;
        unaff_x23 = puVar8;
        if (uVar14 != 0) goto code_r0x0800306c;
code_r0x08002ea4:
        puVar8 = unaff_x23;
        uVar14 = 0xfffffff4;
        arg1 = unaff_x19;
        goto code_r0x08002ea8;
    }
code_r0x0800306c:
    if (0 < iVar5) {
        uVar14 = 0;
code_r0x08003080:
        uStack_70 = 0;
        of_property_read_string_helper(*unaff_x28,"reset-names",&uStack_70,1,uVar14 & 0xffffffff);
        uVar11 = __devm_reset_control_get(uVar1,uStack_70,0,0,0,1);
        *(arg1[0x38] + uVar14 * 8) = uVar11;
        uVar10 = *(arg1[0x38] + uVar14 * 8);
        if (uVar10 < 0xfffffffffffff001) goto code_r0x080030d4;
        uVar14 = uVar10 & 0xffffffff;
        if (uVar10 != -0x205) {
code_r0x08002ef0:
            pcVar13 = "Failed to get %s, ret=%d\n";
code_r0x08003100:
            _dev_err(uVar1,pcVar13,uStack_70,uVar14 & 0xffffffff);
        }
code_r0x0800311c:
        if (uVar14 == 0) goto code_r0x08003120;
        goto code_r0x08002ea8;
    }
code_r0x08003120:
    regmap_read(arg1[0x29],0,&uStack_a4);
    uStack_a4 = uStack_a4 & 0xfffffff9;
    iVar9 = of_find_property(*unaff_x28,"mboxes",0);
    if (iVar9 == 0) {
code_r0x08003184:
        iVar5 = of_property_read_variable_u32_array(*unaff_x28,"qcom,clk-dis-wait-val",&uStack_a8,1,0);
        if (-1 < iVar5) {
            *(arg1 + 0x1da) = 1;
            uStack_a8 = uStack_a8 << 0xc;
            uStack_a4 = uStack_a4 & 0xffff0fff | uStack_a8;
            *(arg1 + 0x3e) = uStack_a8;
        }
        regmap_write(arg1[0x29],0,uStack_a4);
        if (arg1[0x3a] == '\0') {
            uStack_a4 = uStack_a4 & 0xfffffffe;
            regmap_write(arg1[0x29],0);
            uVar7 = sym.poll_gdsc_status(arg1,1);
            if (uVar7 == 0) {
                uStack_70 = uStack_70 & 0xffffffff00000000;
                if (arg1[0x3a] != '\0') goto code_r0x0800321c;
                uVar4 = *(arg1 + 0x1d2) ^ 1;
                goto code_r0x08003258;
            }
            uVar14 = uVar7;
            uVar10 = *unaff_x22;
            pcVar13 = "%s enable timed out: 0x%x\n";
            uVar15 = uStack_a4;
        }
        else {
            uStack_70 = uStack_70 & 0xffffffff00000000;
code_r0x0800321c:
            uVar14 = arg1[0x2d];
            if (uVar14 == 0) {
                uVar14 = arg1[0x29];
                uVar7 = 1;
            }
            else {
                uVar7 = 1L << (arg1[0x2e] & 0x3f);
            }
            uVar6 = regmap_read(uVar14,0,&uStack_70);
            if (uVar6 < 0) {
                uVar10 = *unaff_x22;
                pcVar13 = "%s failed to get initial enable state, ret=%d\n";
            }
            else {
                uVar4 = (uStack_70 & uVar7) == 0;
code_r0x08003258:
                *(arg1 + 0x1d6) = uVar4;
                uStack_70 = uStack_70 & 0xffffffff00000000;
                uVar6 = regmap_read(arg1[0x29],0,&uStack_70);
                if (-1 < uVar6) {
                    *(arg1 + 0x1d7) = uStack_70 >> 1 & 1;
                    if (*(arg1 + 0x1da) != '\0') {
                        *(*(param_1 + 0x98) + 0x78) = obj.gdsc_pm_ops;
                    }
                    Hint_Prefetch(0x8000530,2,0,1);
                    do {
                        iVar5 = _obj.gdsc_probe.gdsc_count + 1;
                        cVar2 = '\x01';
                        bVar3 = ExclusiveMonitorPass(0x8000530,0x10);
                        if (bVar3) {
                            cVar2 = ExclusiveMonitorsStatus();
                            _obj.gdsc_probe.gdsc_count = iVar5;
                        }
                    } while (cVar2 != '\0');
                    DataMemoryBarrier(2,3);
                    *(arg1 + 7) = iVar5;
                    uStack_80 = arg1[0x29];
                    *(arg1 + 0x54) = 0;
                    arg1[9] = obj.gdsc_ops;
                    arg1[0xb] = obj.__this_module;
                    uStack_88 = *unaff_x28;
                    uStack_a0 = uVar1;
                    puStack_98 = puVar8;
                    puStack_90 = arg1;
                    uVar14 = devm_regulator_register(uVar1,unaff_x22,&uStack_a0);
                    *arg1 = uVar14;
                    if (0xfffffffffffff000 < uVar14) {
                        _dev_err(uVar1,"regulator_register(\"%s\") failed, ret=%d\n",*unaff_x22,uVar14 & 0xffffffff);
                        goto code_r0x080033ec;
                    }
                    uVar7 = devm_regulator_proxy_consumer_register(uVar1,*unaff_x28);
                    if (uVar7 == 0) {
                        iVar5 = devm_regulator_debug_register(uVar1,*arg1);
                        if (iVar5 != 0) {
                            _dev_err(uVar1,"failed to register debug regulator, ret=%d\n",iVar5);
                        }
                        uVar14 = 0;
                        *(param_1 + 0xa8) = arg1;
                        goto code_r0x08002ea8;
                    }
                    uVar14 = uVar7;
                    _dev_err(uVar1,"failed to register proxy consumer, ret=%d\n",uVar14);
                    goto code_r0x080033ec;
                }
                uVar10 = *unaff_x22;
                pcVar13 = "%s failed to get initial hw_ctrl state, ret=%d\n";
            }
            uVar15 = uVar6;
            uVar14 = uVar15;
        }
        _dev_err(uVar1,pcVar13,uVar10,uVar15);
    }
    else {
        arg1[0x30] = uVar1;
        *(arg1 + 0x31) = 1;
        arg1[0x32] = 500;
        *(arg1 + 0x33) = 0;
        uVar14 = mbox_request_channel(arg1 + 0x30,0);
        arg1[0x37] = uVar14;
        if (uVar14 < 0xfffffffffffff001) goto code_r0x08003184;
        _dev_err(uVar1,"mailbox channel request failed, ret=%d\n",uVar14 & 0xffffffff);
        uVar7 = 0xfffffdfb;
        if (uVar14 != 0xfffffff5) {
            uVar7 = uVar14;
        }
        uVar14 = uVar7;
        arg1[0x37] = 0;
    }
code_r0x080033ec:
    if (arg1[0x37] != 0) {
        mbox_free_channel();
    }
    goto code_r0x08002ea8;
code_r0x080030d4:
    uVar14 = uVar14 + 1;
    if (arg1[0x3c] <= uVar14) goto code_r0x08003120;
    goto code_r0x08003080;
}


// ===== sym.gdsc_set_mode.29badac91dd5595ca811e10faabbdec0.cfi_jt @ 0x080022e0 (size 8) =====

int sym.gdsc_set_mode.29badac91dd5595ca811e10faabbdec0.cfi_jt(int64_t param_1,int param_2)

{
    int iVar1;
    bool bVar2;
    int iVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_50;
    uint uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    iVar4 = rdev_get_drvdata();
    uStack_50 = 0;
    if (*(iVar4 + 0x1f9) != '\0') {
        if (param_2 == 2) {
            iVar3 = 0;
            *(iVar4 + 0x1fa) = 0;
        }
        else if (param_2 == 4) {
            iVar3 = 0;
            *(iVar4 + 0x1fa) = 1;
        }
        else {
            iVar3 = -0x16;
        }
        goto code_r0x080042b4;
    }
    if (*(param_1 + 0x480) == 0) {
        iVar5 = 0;
code_r0x080041b4:
        iVar3 = regmap_read(*(iVar4 + 0x148),0,&uStack_50);
        if (iVar3 < 0) {
            iVar4 = *(param_1 + 0x480);
        }
        else {
            if (param_2 == 2) {
                uStack_50 = uStack_50 & 0xfffffffd;
                iVar3 = regmap_write(*(iVar4 + 0x148),0);
                if (-1 < iVar3) {
                    uStack_4c = 0;
                    regmap_read(*(iVar4 + 0x148),0,&uStack_4c);
                    __const_udelay(0x10c7);
                    if ((*(iVar4 + 0x1d6) == '\0') || (iVar3 = sym.poll_gdsc_status(iVar4,1), iVar3 == 0)) {
                        *(iVar4 + 0x1d7) = 0;
                        iVar4 = *(param_1 + 0x480);
                    }
                    else {
                        _dev_err(param_1 + 0xe8,"%s enable timed out\n",*(iVar4 + 8));
                        iVar4 = *(param_1 + 0x480);
                    }
                    goto joined_r0x08004304;
                }
            }
            else if (param_2 == 1) {
                uStack_50 = uStack_50 | 2;
                iVar3 = regmap_write(*(iVar4 + 0x148),0);
                if (-1 < iVar3) {
                    uStack_4c = 0;
                    regmap_read(*(iVar4 + 0x148),0,&uStack_4c);
                    __const_udelay(0x10c7);
                    *(iVar4 + 0x1d7) = 1;
                    iVar4 = *(param_1 + 0x480);
                    goto joined_r0x08004304;
                }
            }
            else {
                iVar3 = -0x16;
            }
            iVar4 = *(param_1 + 0x480);
        }
    }
    else {
        iVar5 = *(*(param_1 + 0x480) + 0x78);
        ww_mutex_lock(iVar5 + 0x98,0);
        if (*(iVar5 + 0xc) != 0) goto code_r0x080041b4;
        _dev_err(param_1 + 0xe8,"%s cannot change GDSC HW/SW control mode while parent is disabled\n",*(iVar4 + 8));
        iVar3 = -5;
        iVar4 = *(param_1 + 0x480);
    }
joined_r0x08004304:
    if (iVar4 != 0) {
        ww_mutex_unlock(iVar5 + 0x98);
    }
code_r0x080042b4:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_48) {
        __stack_chk_fail();
        *extraout_x18 = sym.gdsc_get_mode;
        iVar5 = rdev_get_drvdata();
        bVar2 = *(iVar5 + 0x1f9) != '\0';
        iVar4 = 0x1d7;
        if (bVar2) {
            iVar4 = 0x1fa;
        }
        iVar3 = 4;
        if (!bVar2) {
            iVar3 = 1;
        }
        iVar1 = 2;
        if (*(iVar5 + iVar4) != '\0') {
            iVar1 = iVar3;
        }
        return iVar1;
    }
    return iVar3;
}


// ===== sym.gdsc_debug_print_regs.cfi_jt @ 0x080022e8 (size 8) =====

void sym.gdsc_debug_print_regs.cfi_jt(int64_t param_1,ulong param_2,uint64_t *param_3)

{
    char *pcVar1;
    ulong uVar2;
    int iVar3;
    int64_t iVar4;
    ulong in_x6;
    ulong in_x7;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar5;
    int64_t *piVar6;
    int64_t unaff_x21;
    int64_t *piVar7;
    uint uVar8;
    ulong unaff_x30;
    uchar *puVar9;
    code *pcVar10;
    uint64_t uStack_68;
    uint uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    puVar9 = &stack0xffffffffffffffb0;
    iVar4 = sp_el0;
    iStack_58 = *(iVar4 + 0x5e0);
    iVar5 = *(param_1 + 0x78);
    iVar4 = rdev_get_drvdata(iVar5);
    uStack_60 = 0;
    uStack_68 = 0;
    if (iVar4 == 0) {
        _printk(0x8000a17);
    }
    else {
        unaff_x21 = iVar5 + 0x98;
        ww_mutex_lock(unaff_x21,0);
        if (*(iVar5 + 0x10) != 0) {
            _printk(0x8000b3f,"Device-Supply");
        }
        piVar6 = iVar5 + 0x28;
        piVar7 = *piVar6;
        if (piVar6 != piVar7) {
            do {
                pcVar1 = "(null)-(null)";
                if (piVar7[9] != NULL) {
                    pcVar1 = piVar7[9];
                }
                uVar8 = 0x4e;
                if (piVar7[3] != 0) {
                    uVar8 = 0x59;
                }
                _printk(0x8000b04,pcVar1,uVar8);
                piVar7 = *piVar7;
            } while (piVar6 != piVar7);
        }
        ww_mutex_unlock(unaff_x21);
        param_3 = &uStack_68;
        uVar2 = 3;
        if (_segment.ehdr == 0) {
            uVar2 = 1;
        }
        iVar3 = regmap_bulk_read(*(iVar4 + 0x148),0,param_3,uVar2);
        if (iVar3 == 0) {
            _printk(0x8000915,*(iVar4 + 8));
            param_3 = uStack_68 >> 0x20;
            _printk(0x8000b4b,uStack_68 & 0xffffffff,param_3,uStack_60);
        }
        else {
            _printk(0x8000bc7,*(iVar4 + 8));
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_58) {
        return;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.trace_raw_output_gdsc_time;
    pcVar10 = sym.trace_raw_output_gdsc_time;
    iVar5 = *(iVar4 + 0x20e8);
    iVar3 = trace_raw_output_prep(iVar4,param_3);
    if (iVar3 == 1) {
        trace_event_printf(iVar4,"%s enabling:%d time_us:%d timed_out:%d\n",iVar5 + *(iVar5 + 8),*(iVar5 + 0xc),
                           *(iVar5 + 0x10),*(iVar5 + 0x14),in_x6,in_x7,puVar9,pcVar10,unaff_x21);
        trace_handle_return(iVar4 + 0x10c0);
    }
    return;
}


// ===== sym.regulator_proxy_consumer_sync_state.cfi_jt @ 0x080022f0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.regulator_proxy_consumer_sync_state.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.trace_event_reg.cfi_jt @ 0x080022f8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.trace_event_reg.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.gdsc_enable.29badac91dd5595ca811e10faabbdec0.cfi_jt @ 0x08002300 (size 8) =====

uint32_t sym.gdsc_enable.29badac91dd5595ca811e10faabbdec0.cfi_jt(int64_t param_1)

{
    char cVar1;
    bool bVar2;
    int iVar3;
    uint32_t uVar4;
    int64_t *arg1;
    int64_t iVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    int64_t iVar10;
    ulong unaff_x30;
    uint32_t uStack_110;
    uint uStack_10c;
    int64_t iStack_108;
    uchar *puStack_100;
    code *pcStack_f8;
    uint uStack_b4;
    uint32_t uStack_b0;
    uint32_t uStack_ac;
    ulong uStack_a8;
    uint64_t *puStack_a0;
    uint64_t uStack_98;
    char acStack_90 [8];
    char acStack_88 [8];
    char acStack_80 [8];
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_38 = *(iVar8 + 0x5e0);
    arg1 = rdev_get_drvdata();
    uVar4 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    if (arg1[0x3f] == '\0') {
        if ((*(arg1 + 0x1d3) != '\0') || (*(arg1 + 0x1d4) != '\0')) {
            uVar7 = *(arg1[0x2f] + *(arg1 + 0x1e4) * 8);
            iVar3 = clk_prepare(uVar7);
            if ((iVar3 == 0) && (iVar3 = clk_enable(uVar7), iVar3 != 0)) {
                clk_unprepare(uVar7);
            }
            *(arg1 + 0x3b) = 1;
        }
        regmap_read(arg1[0x29],0,&uStack_b0);
        if ((uStack_b0 >> 1 & 1) == 0) {
            if (arg1[0x3a] == '\0') {
                if (0 < arg1[0x3c]) {
                    iVar8 = 0;
                    do {
                        reset_control_deassert(*(arg1[0x38] + iVar8 * 8));
                        iVar8 = iVar8 + 1;
                    } while (iVar8 < arg1[0x3c]);
                }
                *(arg1 + 0x1d2) = 0;
            }
            else {
                if (0 < *(arg1 + 0x1ec)) {
                    uVar9 = 0;
                    do {
                        uVar4 = icc_set_bw(*(arg1[0x39] + uVar9 * 8),1,1);
                        if (uVar4 != 0) {
                            _dev_err(param_1 + 0xe8,"Failed to vote BW for %d, ret=%d\n",uVar9 & 0xffffffff,uVar4);
                            goto code_r0x08003c0c;
                        }
                        uVar9 = uVar9 + 1;
                    } while (uVar9 < *(arg1 + 0x1ec));
                }
                if (arg1[0x3d] != 0) {
                    if (0 < arg1[0x3d]) {
                        iVar8 = 0;
                        do {
                            regmap_update_bits_base(*(arg1[0x2c] + iVar8 * 8),0,1,1,0,0,0);
                            iVar8 = iVar8 + 1;
                        } while (iVar8 < arg1[0x3d]);
                    }
                    uStack_98 = uStack_98 & 0xffffffff00000000;
                    regmap_read(arg1[0x29],0,&uStack_98);
                    __const_udelay(0x10c7);
                    if (0 < arg1[0x3d]) {
                        iVar8 = 0;
                        do {
                            regmap_update_bits_base(*(arg1[0x2c] + iVar8 * 8),0,1,0,0,0,0);
                            iVar8 = iVar8 + 1;
                        } while (iVar8 < arg1[0x3d]);
                    }
                    uStack_98 = uStack_98 & 0xffffffff00000000;
                    regmap_read(arg1[0x29],0,&uStack_98);
                }
                iVar8 = arg1[0x2a];
                if (iVar8 != 0) {
                    if (*(arg1 + 0x1d9) != '\0') {
                        regmap_read(iVar8,0,&uStack_b0);
                        uStack_b0 = uStack_b0 | 0x10;
                        regmap_write(arg1[0x2a],0);
                        uStack_98 = uStack_98 & 0xffffffff00000000;
                        regmap_read(arg1[0x29],0,&uStack_98);
                        __const_udelay(0x10c7);
                        uStack_b0 = uStack_b0 & 0xffffffef;
                        regmap_write(arg1[0x2a],0);
                        uStack_98 = uStack_98 & 0xffffffff00000000;
                        regmap_read(arg1[0x29],0,&uStack_98);
                        iVar8 = arg1[0x2a];
                    }
                    regmap_read(iVar8,0,&uStack_b0);
                    uStack_b0 = uStack_b0 & 0xfffffffe;
                    regmap_write(arg1[0x2a],0);
                    uStack_98 = uStack_98 & 0xffffffff00000000;
                    regmap_read(arg1[0x29],0,&uStack_98);
                }
                if (arg1[0x37] == 0) {
                    if (arg1[0x2d] == 0) {
                        regmap_read(arg1[0x29],0,&uStack_b0);
                        uStack_b0 = uStack_b0 & 0xfffffffe;
                        regmap_write(arg1[0x29],0);
                    }
                    else {
                        iVar8 = 1L << (*(arg1 + 0x2e) & 0x3f);
                        regmap_update_bits_base(arg1[0x2d],0,iVar8,~iVar8,0,0,0);
                    }
                }
                else {
                    uStack_48 = 0;
                    uStack_40 = 0;
                    uStack_58 = 0;
                    uStack_50 = 0;
                    uStack_68 = 0;
                    uStack_60 = 0;
                    uStack_78 = 0;
                    uStack_70 = 0;
                    uStack_ac = 0;
                    uStack_98._0_1_ = str.class:_clock__res:_gpu_noc_wa[0];
                    uStack_98._1_1_ = str.class:_clock__res:_gpu_noc_wa[1];
                    uStack_98._2_1_ = str.class:_clock__res:_gpu_noc_wa[2];
                    uStack_98._3_1_ = str.class:_clock__res:_gpu_noc_wa[3];
                    uStack_98._4_1_ = str.class:_clock__res:_gpu_noc_wa[4];
                    uStack_98._5_1_ = str.class:_clock__res:_gpu_noc_wa[5];
                    uStack_98._6_1_ = str.class:_clock__res:_gpu_noc_wa[6];
                    uStack_98._7_1_ = str.class:_clock__res:_gpu_noc_wa[7];
                    acStack_90[0] = str.class:_clock__res:_gpu_noc_wa[8];
                    acStack_90[1] = str.class:_clock__res:_gpu_noc_wa[9];
                    acStack_90[2] = str.class:_clock__res:_gpu_noc_wa[10];
                    acStack_90[3] = str.class:_clock__res:_gpu_noc_wa[0xb];
                    acStack_90[4] = str.class:_clock__res:_gpu_noc_wa[0xc];
                    acStack_90[5] = str.class:_clock__res:_gpu_noc_wa[0xd];
                    acStack_90[6] = str.class:_clock__res:_gpu_noc_wa[0xe];
                    acStack_90[7] = str.class:_clock__res:_gpu_noc_wa[0xf];
                    acStack_88[0] = str.class:_clock__res:_gpu_noc_wa[0x10];
                    acStack_88[1] = str.class:_clock__res:_gpu_noc_wa[0x11];
                    acStack_88[2] = str.class:_clock__res:_gpu_noc_wa[0x12];
                    acStack_88[3] = str.class:_clock__res:_gpu_noc_wa[0x13];
                    acStack_88[4] = str.class:_clock__res:_gpu_noc_wa[0x14];
                    acStack_88[5] = str.class:_clock__res:_gpu_noc_wa[0x15];
                    acStack_88[6] = str.class:_clock__res:_gpu_noc_wa[0x16];
                    acStack_88[7] = str.class:_clock__res:_gpu_noc_wa[0x17];
                    acStack_80[0] = str.class:_clock__res:_gpu_noc_wa[0x18];
                    acStack_80[1] = str.class:_clock__res:_gpu_noc_wa[0x19];
                    acStack_80[2] = str.class:_clock__res:_gpu_noc_wa[0x1a];
                    acStack_80[3] = str.class:_clock__res:_gpu_noc_wa[0x1b];
                    acStack_80[4] = str.class:_clock__res:_gpu_noc_wa[0x1c];
                    acStack_80[5] = str.class:_clock__res:_gpu_noc_wa[0x1d];
                    acStack_80[6] = str.class:_clock__res:_gpu_noc_wa[0x1e];
                    acStack_80[7] = str.class:_clock__res:_gpu_noc_wa[0x1f];
                    uStack_a8 = 0x60;
                    regmap_read(arg1[0x29],0,&uStack_ac);
                    if ((uStack_ac & 1) != 0) {
                        puStack_a0 = &uStack_98;
                        uVar4 = mbox_send_message(arg1[0x37],&uStack_a8);
                        if (uVar4 < 0) {
                            _dev_err(*arg1 + 0xe8,"qmp message send failed, ret=%d\n",uVar4);
                            goto code_r0x08003c0c;
                        }
                    }
                }
                uStack_98 = uStack_98 & 0xffffffff00000000;
                regmap_read(arg1[0x29],0,&uStack_98);
                __const_udelay(0x10c7);
                uVar4 = sym.poll_gdsc_status(arg1,1);
                if (uVar4 != 0) {
                    regmap_read(arg1[0x29],0,&uStack_b0);
                    if (arg1[0x2b] == 0) {
                        _dev_err(param_1 + 0xe8,"%s enable timed out: 0x%x\n",arg1[1],uStack_b0);
                        __udelay(*(arg1 + 500));
                        regmap_read(arg1[0x29],0,&uStack_b0);
                        _dev_err(param_1 + 0xe8,"%s final state: 0x%x (%d us after timeout)\n",arg1[1],uStack_b0,
                                 *(arg1 + 500));
                    }
                    else {
                        regmap_read(arg1[0x2b],0,&uStack_b4);
                        _dev_warn(param_1 + 0xe8,
                                  "%s state (after %d us timeout): 0x%x, GDS_HW_CTRL: 0x%x. Re-polling.\n",arg1[1],
                                  *(arg1 + 500),uStack_b0,uStack_b4);
                        uVar4 = sym.poll_gdsc_status(arg1,1);
                        if (uVar4 == 0) goto code_r0x08003ba4;
                        regmap_read(arg1[0x29],0,&uStack_b0);
                        regmap_read(arg1[0x2b],0,&uStack_b4);
                        _dev_err(param_1 + 0xe8,
                                 "%s final state (after additional %d us timeout): 0x%x, GDS_HW_CTRL: 0x%x\n",arg1[1],
                                 *(arg1 + 500),uStack_b0,uStack_b4);
                    }
                    goto code_r0x08003c0c;
                }
code_r0x08003ba4:
                if ((*(arg1 + 0x1d1) != '\0') && ((uStack_b0 >> 0xb & 1) == 0)) {
                    uStack_b0 = uStack_b0 | 0x800;
                    regmap_write(arg1[0x29],0);
                }
            }
            __const_udelay(0x10c7);
            __const_udelay(0x10c7);
            if (*(arg1 + 0x1d4) != '\0') {
                uVar7 = *(arg1[0x2f] + *(arg1 + 0x1e4) * 8);
                clk_disable(uVar7);
                clk_unprepare(uVar7);
                *(arg1 + 0x3b) = 0;
            }
            uVar4 = 0;
            *(arg1 + 0x1d6) = 1;
        }
        else {
            _dev_warn(param_1 + 0xe8,"Invalid enable while %s is under HW control\n",arg1[1]);
            uVar4 = 0xfffffff0;
        }
    }
code_r0x08003c0c:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_38) {
        return uVar4;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18 = sym.gdsc_disable;
    pcStack_f8 = sym.gdsc_disable;
    iVar8 = sp_el0;
    iStack_108 = *(iVar8 + 0x5e0);
    puStack_100 = &stack0xffffffffffffffd0;
    iVar8 = rdev_get_drvdata();
    uStack_110 = 0;
    if (*(iVar5 + 0x480) == 0) {
        iVar10 = 0;
        bVar2 = false;
        cVar1 = *(iVar8 + 0x1d4);
    }
    else {
        iVar10 = *(*(iVar5 + 0x480) + 0x78);
        iVar3 = mutex_trylock(iVar10 + 0x98);
        bVar2 = iVar3 != 0;
        if (*(iVar10 + 0xc) == 0) {
            _dev_err(iVar5 + 0xe8,"%s cannot disable GDSC while parent is disabled\n",*(iVar8 + 8));
            uVar4 = 0xfffffffb;
            iVar8 = *(iVar5 + 0x480);
            goto joined_r0x08003fcc;
        }
        cVar1 = *(iVar8 + 0x1d4);
    }
    if (cVar1 != '\0') {
        uVar7 = *(*(iVar8 + 0x178) + *(iVar8 + 0x1e4) * 8);
        iVar3 = clk_prepare(uVar7);
        if ((iVar3 == 0) && (iVar3 = clk_enable(uVar7), iVar3 != 0)) {
            clk_unprepare(uVar7);
        }
        *(iVar8 + 0x1d8) = 1;
    }
    __const_udelay(0x10c7);
    if ((*(iVar8 + 0x1f9) == '\0') || (*(iVar8 + 0x1fa) != '\0')) {
        if (*(iVar8 + 0x1d0) == '\0') {
            uVar4 = *(iVar8 + 0x1e0) - 1;
            if (-1 < uVar4) {
                iVar6 = uVar4 << 3;
                do {
                    reset_control_assert(*(*(iVar8 + 0x1c0) + iVar6));
                    iVar6 = iVar6 + -8;
                } while (iVar6 != -8);
            }
            uVar4 = 0;
            *(iVar8 + 0x1d2) = 1;
        }
        else {
            if (*(iVar8 + 0x168) == 0) {
                regmap_read(*(iVar8 + 0x148),0,&uStack_110);
                uStack_110 = uStack_110 | 1;
                regmap_write(*(iVar8 + 0x148),0);
            }
            else {
                uVar9 = 1L << (*(iVar8 + 0x170) & 0x3f);
                regmap_update_bits_base(*(iVar8 + 0x168),0,uVar9,uVar9 & 0xffffffff,0,0,0);
            }
            uStack_10c = 0;
            regmap_read(*(iVar8 + 0x148),0,&uStack_10c);
            __const_udelay(0x10c7);
            if (*(iVar8 + 0x1d5) == '\0') {
                uVar4 = sym.poll_gdsc_status(iVar8,0);
                if (uVar4 == 0) {
                    iVar6 = *(iVar8 + 0x150);
                    uVar4 = 0;
                }
                else {
                    regmap_read(*(iVar8 + 0x148),0,&uStack_110);
                    _dev_err(iVar5 + 0xe8,"%s disable timed out: 0x%x\n",*(iVar8 + 8),uStack_110);
                    iVar6 = *(iVar8 + 0x150);
                }
            }
            else {
                __const_udelay(0x68dbc);
                uVar4 = 0;
                iVar6 = *(iVar8 + 0x150);
            }
            if (iVar6 != 0) {
                regmap_read(iVar6,0,&uStack_110);
                uStack_110 = uStack_110 | 1;
                regmap_write(*(iVar8 + 0x150),0);
            }
            if (0 < *(iVar8 + 0x1ec)) {
                uVar9 = 0;
                do {
                    uVar4 = icc_set_bw(*(*(iVar8 + 0x1c8) + uVar9 * 8),0,0);
                    if (uVar4 != 0) {
                        _dev_err(iVar5 + 0xe8,"Failed to unvote BW for %d: %d\n",uVar9 & 0xffffffff,uVar4);
                        goto code_r0x08003fdc;
                    }
                    uVar9 = uVar9 + 1;
                } while (uVar9 < *(iVar8 + 0x1ec));
                goto code_r0x08003f88;
            }
        }
    }
    else {
code_r0x08003f88:
        uVar4 = 0;
    }
    if (((*(iVar8 + 0x1d8) != '\0') && (*(iVar8 + 0x1d3) != '\0')) || (*(iVar8 + 0x1d4) != '\0')) {
        uVar7 = *(*(iVar8 + 0x178) + *(iVar8 + 0x1e4) * 8);
        clk_disable(uVar7);
        clk_unprepare(uVar7);
        *(iVar8 + 0x1d8) = 0;
    }
    *(iVar8 + 0x1d6) = 0;
    iVar8 = *(iVar5 + 0x480);
joined_r0x08003fcc:
    if ((iVar8 != 0) && (bVar2)) {
        ww_mutex_unlock(iVar10 + 0x98);
    }
code_r0x08003fdc:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_108) {
        return uVar4;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.gdsc_is_enabled;
    iVar8 = rdev_get_drvdata();
    if (*(iVar8 + 0x1f9) == '\0') {
        if (*(iVar8 + 0x1d0) == '\0') {
            return *(iVar8 + 0x1d2) ^ 1;
        }
        if (*(iVar8 + 0x1f8) != '\0') {
            return 0;
        }
    }
    return *(iVar8 + 0x1d6);
}


// ===== sym.gdsc_disable.29badac91dd5595ca811e10faabbdec0.cfi_jt @ 0x08002308 (size 8) =====

uint32_t sym.gdsc_disable.29badac91dd5595ca811e10faabbdec0.cfi_jt(int64_t param_1)

{
    char cVar1;
    bool bVar2;
    int iVar3;
    uint32_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar8;
    int64_t iVar9;
    ulong unaff_x30;
    uint32_t uStack_50;
    uint uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    iVar5 = rdev_get_drvdata();
    uStack_50 = 0;
    if (*(param_1 + 0x480) == 0) {
        iVar9 = 0;
        bVar2 = false;
        cVar1 = *(iVar5 + 0x1d4);
    }
    else {
        iVar9 = *(*(param_1 + 0x480) + 0x78);
        iVar3 = mutex_trylock(iVar9 + 0x98);
        bVar2 = iVar3 != 0;
        if (*(iVar9 + 0xc) == 0) {
            _dev_err(param_1 + 0xe8,"%s cannot disable GDSC while parent is disabled\n",*(iVar5 + 8));
            uVar4 = 0xfffffffb;
            iVar5 = *(param_1 + 0x480);
            goto joined_r0x08003fcc;
        }
        cVar1 = *(iVar5 + 0x1d4);
    }
    if (cVar1 != '\0') {
        uVar8 = *(*(iVar5 + 0x178) + *(iVar5 + 0x1e4) * 8);
        iVar3 = clk_prepare(uVar8);
        if ((iVar3 == 0) && (iVar3 = clk_enable(uVar8), iVar3 != 0)) {
            clk_unprepare(uVar8);
        }
        *(iVar5 + 0x1d8) = 1;
    }
    __const_udelay(0x10c7);
    if ((*(iVar5 + 0x1f9) == '\0') || (*(iVar5 + 0x1fa) != '\0')) {
        if (*(iVar5 + 0x1d0) == '\0') {
            uVar4 = *(iVar5 + 0x1e0) - 1;
            if (-1 < uVar4) {
                iVar6 = uVar4 << 3;
                do {
                    reset_control_assert(*(*(iVar5 + 0x1c0) + iVar6));
                    iVar6 = iVar6 + -8;
                } while (iVar6 != -8);
            }
            uVar4 = 0;
            *(iVar5 + 0x1d2) = 1;
        }
        else {
            if (*(iVar5 + 0x168) == 0) {
                regmap_read(*(iVar5 + 0x148),0,&uStack_50);
                uStack_50 = uStack_50 | 1;
                regmap_write(*(iVar5 + 0x148),0);
            }
            else {
                uVar7 = 1L << (*(iVar5 + 0x170) & 0x3f);
                regmap_update_bits_base(*(iVar5 + 0x168),0,uVar7,uVar7 & 0xffffffff,0,0,0);
            }
            uStack_4c = 0;
            regmap_read(*(iVar5 + 0x148),0,&uStack_4c);
            __const_udelay(0x10c7);
            if (*(iVar5 + 0x1d5) == '\0') {
                uVar4 = sym.poll_gdsc_status(iVar5,0);
                if (uVar4 == 0) {
                    iVar6 = *(iVar5 + 0x150);
                    uVar4 = 0;
                }
                else {
                    regmap_read(*(iVar5 + 0x148),0,&uStack_50);
                    _dev_err(param_1 + 0xe8,"%s disable timed out: 0x%x\n",*(iVar5 + 8),uStack_50);
                    iVar6 = *(iVar5 + 0x150);
                }
            }
            else {
                __const_udelay(0x68dbc);
                uVar4 = 0;
                iVar6 = *(iVar5 + 0x150);
            }
            if (iVar6 != 0) {
                regmap_read(iVar6,0,&uStack_50);
                uStack_50 = uStack_50 | 1;
                regmap_write(*(iVar5 + 0x150),0);
            }
            if (0 < *(iVar5 + 0x1ec)) {
                uVar7 = 0;
                do {
                    uVar4 = icc_set_bw(*(*(iVar5 + 0x1c8) + uVar7 * 8),0,0);
                    if (uVar4 != 0) {
                        _dev_err(param_1 + 0xe8,"Failed to unvote BW for %d: %d\n",uVar7 & 0xffffffff,uVar4);
                        goto code_r0x08003fdc;
                    }
                    uVar7 = uVar7 + 1;
                } while (uVar7 < *(iVar5 + 0x1ec));
                goto code_r0x08003f88;
            }
        }
    }
    else {
code_r0x08003f88:
        uVar4 = 0;
    }
    if (((*(iVar5 + 0x1d8) != '\0') && (*(iVar5 + 0x1d3) != '\0')) || (*(iVar5 + 0x1d4) != '\0')) {
        uVar8 = *(*(iVar5 + 0x178) + *(iVar5 + 0x1e4) * 8);
        clk_disable(uVar8);
        clk_unprepare(uVar8);
        *(iVar5 + 0x1d8) = 0;
    }
    *(iVar5 + 0x1d6) = 0;
    iVar5 = *(param_1 + 0x480);
joined_r0x08003fcc:
    if ((iVar5 != 0) && (bVar2)) {
        ww_mutex_unlock(iVar9 + 0x98);
    }
code_r0x08003fdc:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return uVar4;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.gdsc_is_enabled;
    iVar5 = rdev_get_drvdata();
    if (*(iVar5 + 0x1f9) == '\0') {
        if (*(iVar5 + 0x1d0) == '\0') {
            return *(iVar5 + 0x1d2) ^ 1;
        }
        if (*(iVar5 + 0x1f8) != '\0') {
            return 0;
        }
    }
    return *(iVar5 + 0x1d6);
}


// ===== sym.gdsc_is_enabled.29badac91dd5595ca811e10faabbdec0.cfi_jt @ 0x08002310 (size 8) =====

uint8_t sym.gdsc_is_enabled.29badac91dd5595ca811e10faabbdec0.cfi_jt(void)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = rdev_get_drvdata();
    if (*(iVar1 + 0x1f9) == '\0') {
        if (*(iVar1 + 0x1d0) == '\0') {
            return *(iVar1 + 0x1d2) ^ 1;
        }
        if (*(iVar1 + 0x1f8) != '\0') {
            return 0;
        }
    }
    return *(iVar1 + 0x1d6);
}


// ===== sym.perf_trace_gdsc_time.29badac91dd5595ca811e10faabbdec0.cfi_jt @ 0x08002318 (size 8) =====

void sym.perf_trace_gdsc_time.29badac91dd5595ca811e10faabbdec0.cfi_jt
               (uint64_t param_1,char *param_2,uint32_t *param_3,uint64_t param_4,uint64_t param_5)

{
    int64_t *piVar1;
    char *pcVar2;
    uint64_t uVar3;
    int iVar4;
    ulong uVar5;
    uint uVar6;
    uint uVar7;
    uint uVar8;
    ulong in_tmp_ldXn;
    int iVar9;
    int64_t iVar10;
    uint64_t uVar11;
    uint64_t *in_x18;
    ulong *extraout_x18;
    uint64_t unaff_x30;
    uchar auVar12 [16];
    uchar auStack_80 [12];
    uint32_t uStack_74;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    pcVar2 = "(null)";
    if (param_2 != NULL) {
        pcVar2 = param_2;
    }
    iStack_68 = *(iVar10 + 0x5e0);
    uVar8 = param_5;
    uVar6 = param_4;
    uVar7 = SUB84(param_3,0);
    iStack_70 = 0;
    uStack_74 = 0;
    iVar9 = strlen(pcVar2);
    iVar10 = tpidr_el1;
    piVar1 = iVar10 + *(param_1 + 0x78);
    if ((*(param_1 + 0x80) != 0) || (*piVar1 != 0)) {
        param_3 = &uStack_74;
        iVar4 = (iVar9 + 0x24U & 0xfffffff8) - 4;
        iVar10 = perf_trace_buf_alloc(iVar4,&iStack_70,param_3);
        if (iVar10 != 0) {
            uVar11 = -1L << (_trace_event_raw_init & 0x3f);
            *(iStack_70 + 0xe8) = &stack0xffffffffffffffa0;
            *(iStack_70 + 0xf8) = auStack_80;
            uVar3 = (~uVar11 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar3 = uVar11 | unaff_x30;
            }
            *(iStack_70 + 0x100) = uVar3;
            *(iStack_70 + 0x108) = 5;
            *(iVar10 + 8) = iVar9 * 0x10000 + 0x10018;
            strcpy(iVar10 + 0x18,pcVar2);
            param_3 = uStack_74;
            param_5 = 1;
            *(iVar10 + 0xc) = uVar7;
            *(iVar10 + 0x10) = uVar6;
            *(iVar10 + 0x14) = uVar8;
            perf_trace_run_bpf_submit(iVar10,iVar4,param_3,param_1,1,iStack_70,piVar1,0);
            param_4 = param_1;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_68) {
        return;
    }
    auVar12 = __stack_chk_fail();
    uVar5 = tpidr_el2;
    *extraout_x18 = 0x8002668;
    bpf_trace_run4(in_tmp_ldXn,auVar12._0_8_,auVar12._8_8_,param_3 & 0xffffffff,param_4 & 0xffffffff,
                   param_5 & 0xffffffff);
    return;
}


// ===== sym.trace_event_raw_event_gdsc_time.29badac91dd5595ca811e10faabbdec0.cfi_jt @ 0x08002320 (size 8) =====

//WARNING: Removing unreachable block (ram,0x080025e0)

void sym.trace_event_raw_event_gdsc_time.29badac91dd5595ca811e10faabbdec0.cfi_jt
               (int64_t param_1,char *param_2,uint32_t *param_3,uint64_t param_4,uint64_t param_5)

{
    int64_t *piVar1;
    char *pcVar2;
    int iVar3;
    ulong uVar4;
    uint uVar5;
    uint uVar6;
    uint uVar7;
    ulong in_tmp_ldXn;
    int iVar8;
    uint64_t uVar9;
    int64_t iVar10;
    uint32_t *puVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t uVar14;
    ulong unaff_x30;
    uchar auVar15 [16];
    uchar auStack_100 [12];
    uint32_t uStack_f4;
    int64_t iStack_f0;
    int64_t iStack_e8;
    uchar *puStack_e0;
    code *pcStack_d8;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_48 = *(iVar10 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar14 = *(param_1 + 0x48);
    uVar12 = param_4;
    uVar13 = param_5;
    if ((uVar14 >> 8 & 1) == 0) {
        puVar11 = param_3;
        if ((uVar14 >> 7 & 1) != 0) {
            puVar11 = NULL;
            uVar12 = 0;
            event_triggers_call(param_1,0);
        }
        if (((uVar14 >> 6 & 1) != 0) ||
           (((uVar14 >> 9 & 1) != 0 && (uVar9 = trace_event_ignore_this_pid(param_1), (uVar9 & 1) != 0))))
        goto code_r0x080024b0;
    }
    pcVar2 = "(null)";
    if (param_2 != NULL) {
        pcVar2 = param_2;
    }
    iVar8 = strlen(pcVar2);
    puVar11 = iVar8 + 1 + 0x18;
    iVar10 = trace_event_buffer_reserve(&uStack_78,param_1);
    if (iVar10 != 0) {
        *(iVar10 + 8) = (iVar8 + 1) * 0x10000 | 0x18;
        strcpy(iVar10 + 0x18,pcVar2);
        *(iVar10 + 0xc) = param_3;
        *(iVar10 + 0x10) = param_4;
        *(iVar10 + 0x14) = param_5;
        trace_event_buffer_commit(&uStack_78);
    }
code_r0x080024b0:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_48) {
        return;
    }
    auVar15 = __stack_chk_fail();
    uVar9 = auVar15._0_8_;
    *extraout_x18 = sym.perf_trace_gdsc_time;
    pcStack_d8 = sym.perf_trace_gdsc_time;
    iVar10 = sp_el0;
    pcVar2 = "(null)";
    if (auVar15._8_8_ != NULL) {
        pcVar2 = auVar15._8_8_;
    }
    iStack_e8 = *(iVar10 + 0x5e0);
    uVar7 = uVar13;
    uVar5 = uVar12;
    uVar6 = SUB84(puVar11,0);
    iStack_f0 = 0;
    uStack_f4 = 0;
    puStack_e0 = &stack0xffffffffffffffc0;
    iVar8 = strlen(pcVar2);
    iVar10 = tpidr_el1;
    piVar1 = iVar10 + *(uVar9 + 0x78);
    if ((*(uVar9 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar11 = &uStack_f4;
        iVar3 = (iVar8 + 0x24U & 0xfffffff8) - 4;
        iVar10 = perf_trace_buf_alloc(iVar3,&iStack_f0,puVar11);
        if (iVar10 != 0) {
            uVar12 = _trace_event_raw_init & 0x3f;
            *(iStack_f0 + 0xe8) = &puStack_e0;
            *(iStack_f0 + 0xf8) = auStack_100;
            *(iStack_f0 + 0x100) = ~(-1L << uVar12) & 0x80024e8;
            *(iStack_f0 + 0x108) = 5;
            *(iVar10 + 8) = iVar8 * 0x10000 + 0x10018;
            strcpy(iVar10 + 0x18,pcVar2);
            puVar11 = uStack_f4;
            uVar13 = 1;
            *(iVar10 + 0xc) = uVar6;
            *(iVar10 + 0x10) = uVar5;
            *(iVar10 + 0x14) = uVar7;
            perf_trace_run_bpf_submit(iVar10,iVar3,puVar11,uVar9,1,iStack_f0,piVar1,0);
            uVar12 = uVar9;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) != iStack_e8) {
        auVar15 = __stack_chk_fail();
        uVar4 = tpidr_el2;
        *extraout_x18_00 = 0x8002668;
        bpf_trace_run4(in_tmp_ldXn,auVar15._0_8_,auVar15._8_8_,puVar11 & 0xffffffff,uVar12 & 0xffffffff,
                       uVar13 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.__bpf_trace_gdsc_time.29badac91dd5595ca811e10faabbdec0.cfi_jt @ 0x08002328 (size 8) =====

void sym.__bpf_trace_gdsc_time.29badac91dd5595ca811e10faabbdec0.cfi_jt
               (ulong param_1,ulong param_2,uint param_3,uint param_4,uint param_5)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run4(param_1,param_2,param_3,param_4,param_5);
    return;
}


// ===== sym.gdsc_pm_restore_early.29badac91dd5595ca811e10faabbdec0.cfi_jt @ 0x08002330 (size 8) =====

uint64_t sym.gdsc_pm_restore_early.29badac91dd5595ca811e10faabbdec0.cfi_jt(int64_t param_1)

{
    char cVar1;
    bool bVar2;
    int iVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t *arg1;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t iVar8;
    ulong uVar9;
    uint64_t uVar10;
    int64_t iVar11;
    ulong unaff_x30;
    uint32_t uStack_140;
    uint uStack_13c;
    int64_t iStack_138;
    uchar **ppuStack_130;
    code *pcStack_128;
    uint uStack_e4;
    uint32_t uStack_e0;
    uint32_t uStack_dc;
    ulong uStack_d8;
    uint64_t *puStack_d0;
    uint64_t uStack_c8;
    char acStack_c0 [8];
    char acStack_b8 [8];
    char acStack_b0 [8];
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_28 = *(iVar8 + 0x5e0);
    iVar8 = *(param_1 + 0x98);
    uStack_2c = 0;
    regmap_read(*(iVar8 + 0x148),0,&uStack_2c);
    if (*(iVar8 + 0x1d7) != '\0') {
        uStack_2c = uStack_2c | 2;
    }
    if (*(iVar8 + 0x1f0) != 0) {
        uStack_2c = uStack_2c & 0xffff0fff | *(iVar8 + 0x1f0);
    }
    uVar5 = regmap_write(*(iVar8 + 0x148),0);
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_28) {
        return uVar5;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18 = sym.gdsc_enable;
    pcStack_58 = sym.gdsc_enable;
    iVar8 = sp_el0;
    iStack_68 = *(iVar8 + 0x5e0);
    puStack_60 = &stack0xffffffffffffffe0;
    arg1 = rdev_get_drvdata();
    uVar5 = 0;
    uStack_e4 = 0;
    uStack_e0 = 0;
    if (arg1[0x3f] == '\0') {
        if ((*(arg1 + 0x1d3) != '\0') || (*(arg1 + 0x1d4) != '\0')) {
            uVar9 = *(arg1[0x2f] + *(arg1 + 0x1e4) * 8);
            iVar3 = clk_prepare(uVar9);
            if ((iVar3 == 0) && (iVar3 = clk_enable(uVar9), iVar3 != 0)) {
                clk_unprepare(uVar9);
            }
            *(arg1 + 0x3b) = 1;
        }
        regmap_read(arg1[0x29],0,&uStack_e0);
        if ((uStack_e0 >> 1 & 1) == 0) {
            if (arg1[0x3a] == '\0') {
                if (0 < arg1[0x3c]) {
                    iVar8 = 0;
                    do {
                        reset_control_deassert(*(arg1[0x38] + iVar8 * 8));
                        iVar8 = iVar8 + 1;
                    } while (iVar8 < arg1[0x3c]);
                }
                *(arg1 + 0x1d2) = 0;
            }
            else {
                if (0 < *(arg1 + 0x1ec)) {
                    uVar10 = 0;
                    do {
                        uVar4 = icc_set_bw(*(arg1[0x39] + uVar10 * 8),1,1);
                        if (uVar4 != 0) {
                            uVar5 = uVar4;
                            _dev_err(iVar6 + 0xe8,"Failed to vote BW for %d, ret=%d\n",uVar10 & 0xffffffff,uVar5);
                            goto code_r0x08003c0c;
                        }
                        uVar10 = uVar10 + 1;
                    } while (uVar10 < *(arg1 + 0x1ec));
                }
                if (arg1[0x3d] != 0) {
                    if (0 < arg1[0x3d]) {
                        iVar8 = 0;
                        do {
                            regmap_update_bits_base(*(arg1[0x2c] + iVar8 * 8),0,1,1,0,0,0);
                            iVar8 = iVar8 + 1;
                        } while (iVar8 < arg1[0x3d]);
                    }
                    uStack_c8 = uStack_c8 & 0xffffffff00000000;
                    regmap_read(arg1[0x29],0,&uStack_c8);
                    __const_udelay(0x10c7);
                    if (0 < arg1[0x3d]) {
                        iVar8 = 0;
                        do {
                            regmap_update_bits_base(*(arg1[0x2c] + iVar8 * 8),0,1,0,0,0,0);
                            iVar8 = iVar8 + 1;
                        } while (iVar8 < arg1[0x3d]);
                    }
                    uStack_c8 = uStack_c8 & 0xffffffff00000000;
                    regmap_read(arg1[0x29],0,&uStack_c8);
                }
                iVar8 = arg1[0x2a];
                if (iVar8 != 0) {
                    if (*(arg1 + 0x1d9) != '\0') {
                        regmap_read(iVar8,0,&uStack_e0);
                        uStack_e0 = uStack_e0 | 0x10;
                        regmap_write(arg1[0x2a],0);
                        uStack_c8 = uStack_c8 & 0xffffffff00000000;
                        regmap_read(arg1[0x29],0,&uStack_c8);
                        __const_udelay(0x10c7);
                        uStack_e0 = uStack_e0 & 0xffffffef;
                        regmap_write(arg1[0x2a],0);
                        uStack_c8 = uStack_c8 & 0xffffffff00000000;
                        regmap_read(arg1[0x29],0,&uStack_c8);
                        iVar8 = arg1[0x2a];
                    }
                    regmap_read(iVar8,0,&uStack_e0);
                    uStack_e0 = uStack_e0 & 0xfffffffe;
                    regmap_write(arg1[0x2a],0);
                    uStack_c8 = uStack_c8 & 0xffffffff00000000;
                    regmap_read(arg1[0x29],0,&uStack_c8);
                }
                if (arg1[0x37] == 0) {
                    if (arg1[0x2d] == 0) {
                        regmap_read(arg1[0x29],0,&uStack_e0);
                        uStack_e0 = uStack_e0 & 0xfffffffe;
                        regmap_write(arg1[0x29],0);
                    }
                    else {
                        iVar8 = 1L << (*(arg1 + 0x2e) & 0x3f);
                        regmap_update_bits_base(arg1[0x2d],0,iVar8,~iVar8,0,0,0);
                    }
                }
                else {
                    uStack_78 = 0;
                    uStack_70 = 0;
                    uStack_88 = 0;
                    uStack_80 = 0;
                    uStack_98 = 0;
                    uStack_90 = 0;
                    uStack_a8 = 0;
                    uStack_a0 = 0;
                    uStack_dc = 0;
                    uStack_c8._0_1_ = str.class:_clock__res:_gpu_noc_wa[0];
                    uStack_c8._1_1_ = str.class:_clock__res:_gpu_noc_wa[1];
                    uStack_c8._2_1_ = str.class:_clock__res:_gpu_noc_wa[2];
                    uStack_c8._3_1_ = str.class:_clock__res:_gpu_noc_wa[3];
                    uStack_c8._4_1_ = str.class:_clock__res:_gpu_noc_wa[4];
                    uStack_c8._5_1_ = str.class:_clock__res:_gpu_noc_wa[5];
                    uStack_c8._6_1_ = str.class:_clock__res:_gpu_noc_wa[6];
                    uStack_c8._7_1_ = str.class:_clock__res:_gpu_noc_wa[7];
                    acStack_c0[0] = str.class:_clock__res:_gpu_noc_wa[8];
                    acStack_c0[1] = str.class:_clock__res:_gpu_noc_wa[9];
                    acStack_c0[2] = str.class:_clock__res:_gpu_noc_wa[10];
                    acStack_c0[3] = str.class:_clock__res:_gpu_noc_wa[0xb];
                    acStack_c0[4] = str.class:_clock__res:_gpu_noc_wa[0xc];
                    acStack_c0[5] = str.class:_clock__res:_gpu_noc_wa[0xd];
                    acStack_c0[6] = str.class:_clock__res:_gpu_noc_wa[0xe];
                    acStack_c0[7] = str.class:_clock__res:_gpu_noc_wa[0xf];
                    acStack_b8[0] = str.class:_clock__res:_gpu_noc_wa[0x10];
                    acStack_b8[1] = str.class:_clock__res:_gpu_noc_wa[0x11];
                    acStack_b8[2] = str.class:_clock__res:_gpu_noc_wa[0x12];
                    acStack_b8[3] = str.class:_clock__res:_gpu_noc_wa[0x13];
                    acStack_b8[4] = str.class:_clock__res:_gpu_noc_wa[0x14];
                    acStack_b8[5] = str.class:_clock__res:_gpu_noc_wa[0x15];
                    acStack_b8[6] = str.class:_clock__res:_gpu_noc_wa[0x16];
                    acStack_b8[7] = str.class:_clock__res:_gpu_noc_wa[0x17];
                    acStack_b0[0] = str.class:_clock__res:_gpu_noc_wa[0x18];
                    acStack_b0[1] = str.class:_clock__res:_gpu_noc_wa[0x19];
                    acStack_b0[2] = str.class:_clock__res:_gpu_noc_wa[0x1a];
                    acStack_b0[3] = str.class:_clock__res:_gpu_noc_wa[0x1b];
                    acStack_b0[4] = str.class:_clock__res:_gpu_noc_wa[0x1c];
                    acStack_b0[5] = str.class:_clock__res:_gpu_noc_wa[0x1d];
                    acStack_b0[6] = str.class:_clock__res:_gpu_noc_wa[0x1e];
                    acStack_b0[7] = str.class:_clock__res:_gpu_noc_wa[0x1f];
                    uStack_d8 = 0x60;
                    regmap_read(arg1[0x29],0,&uStack_dc);
                    if ((uStack_dc & 1) != 0) {
                        puStack_d0 = &uStack_c8;
                        uVar4 = mbox_send_message(arg1[0x37],&uStack_d8);
                        if (uVar4 < 0) {
                            uVar5 = uVar4;
                            _dev_err(*arg1 + 0xe8,"qmp message send failed, ret=%d\n",uVar5);
                            goto code_r0x08003c0c;
                        }
                    }
                }
                uStack_c8 = uStack_c8 & 0xffffffff00000000;
                regmap_read(arg1[0x29],0,&uStack_c8);
                __const_udelay(0x10c7);
                uVar4 = sym.poll_gdsc_status(arg1,1);
                if (uVar4 != 0) {
                    uVar5 = uVar4;
                    regmap_read(arg1[0x29],0,&uStack_e0);
                    if (arg1[0x2b] == 0) {
                        _dev_err(iVar6 + 0xe8,"%s enable timed out: 0x%x\n",arg1[1],uStack_e0);
                        __udelay(*(arg1 + 500));
                        regmap_read(arg1[0x29],0,&uStack_e0);
                        _dev_err(iVar6 + 0xe8,"%s final state: 0x%x (%d us after timeout)\n",arg1[1],uStack_e0,
                                 *(arg1 + 500));
                    }
                    else {
                        regmap_read(arg1[0x2b],0,&uStack_e4);
                        _dev_warn(iVar6 + 0xe8,"%s state (after %d us timeout): 0x%x, GDS_HW_CTRL: 0x%x. Re-polling.\n"
                                  ,arg1[1],*(arg1 + 500),uStack_e0,uStack_e4);
                        uVar4 = sym.poll_gdsc_status(arg1,1);
                        if (uVar4 == 0) goto code_r0x08003ba4;
                        uVar5 = uVar4;
                        regmap_read(arg1[0x29],0,&uStack_e0);
                        regmap_read(arg1[0x2b],0,&uStack_e4);
                        _dev_err(iVar6 + 0xe8,
                                 "%s final state (after additional %d us timeout): 0x%x, GDS_HW_CTRL: 0x%x\n",arg1[1],
                                 *(arg1 + 500),uStack_e0,uStack_e4);
                    }
                    goto code_r0x08003c0c;
                }
code_r0x08003ba4:
                if ((*(arg1 + 0x1d1) != '\0') && ((uStack_e0 >> 0xb & 1) == 0)) {
                    uStack_e0 = uStack_e0 | 0x800;
                    regmap_write(arg1[0x29],0);
                }
            }
            __const_udelay(0x10c7);
            __const_udelay(0x10c7);
            if (*(arg1 + 0x1d4) != '\0') {
                uVar9 = *(arg1[0x2f] + *(arg1 + 0x1e4) * 8);
                clk_disable(uVar9);
                clk_unprepare(uVar9);
                *(arg1 + 0x3b) = 0;
            }
            uVar5 = 0;
            *(arg1 + 0x1d6) = 1;
        }
        else {
            _dev_warn(iVar6 + 0xe8,"Invalid enable while %s is under HW control\n",arg1[1]);
            uVar5 = 0xfffffff0;
        }
    }
code_r0x08003c0c:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_68) {
        return uVar5;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18_00 = sym.gdsc_disable;
    pcStack_128 = sym.gdsc_disable;
    iVar8 = sp_el0;
    iStack_138 = *(iVar8 + 0x5e0);
    ppuStack_130 = &puStack_60;
    iVar8 = rdev_get_drvdata();
    uStack_140 = 0;
    if (*(iVar6 + 0x480) == 0) {
        iVar11 = 0;
        bVar2 = false;
        cVar1 = *(iVar8 + 0x1d4);
    }
    else {
        iVar11 = *(*(iVar6 + 0x480) + 0x78);
        iVar3 = mutex_trylock(iVar11 + 0x98);
        bVar2 = iVar3 != 0;
        if (*(iVar11 + 0xc) == 0) {
            _dev_err(iVar6 + 0xe8,"%s cannot disable GDSC while parent is disabled\n",*(iVar8 + 8));
            uVar4 = 0xfffffffb;
            iVar8 = *(iVar6 + 0x480);
            goto joined_r0x08003fcc;
        }
        cVar1 = *(iVar8 + 0x1d4);
    }
    if (cVar1 != '\0') {
        uVar9 = *(*(iVar8 + 0x178) + *(iVar8 + 0x1e4) * 8);
        iVar3 = clk_prepare(uVar9);
        if ((iVar3 == 0) && (iVar3 = clk_enable(uVar9), iVar3 != 0)) {
            clk_unprepare(uVar9);
        }
        *(iVar8 + 0x1d8) = 1;
    }
    __const_udelay(0x10c7);
    if ((*(iVar8 + 0x1f9) == '\0') || (*(iVar8 + 0x1fa) != '\0')) {
        if (*(iVar8 + 0x1d0) == '\0') {
            uVar4 = *(iVar8 + 0x1e0) - 1;
            if (-1 < uVar4) {
                iVar7 = uVar4 << 3;
                do {
                    reset_control_assert(*(*(iVar8 + 0x1c0) + iVar7));
                    iVar7 = iVar7 + -8;
                } while (iVar7 != -8);
            }
            uVar4 = 0;
            *(iVar8 + 0x1d2) = 1;
        }
        else {
            if (*(iVar8 + 0x168) == 0) {
                regmap_read(*(iVar8 + 0x148),0,&uStack_140);
                uStack_140 = uStack_140 | 1;
                regmap_write(*(iVar8 + 0x148),0);
            }
            else {
                uVar5 = 1L << (*(iVar8 + 0x170) & 0x3f);
                regmap_update_bits_base(*(iVar8 + 0x168),0,uVar5,uVar5 & 0xffffffff,0,0,0);
            }
            uStack_13c = 0;
            regmap_read(*(iVar8 + 0x148),0,&uStack_13c);
            __const_udelay(0x10c7);
            if (*(iVar8 + 0x1d5) == '\0') {
                uVar4 = sym.poll_gdsc_status(iVar8,0);
                if (uVar4 == 0) {
                    iVar7 = *(iVar8 + 0x150);
                    uVar4 = 0;
                }
                else {
                    regmap_read(*(iVar8 + 0x148),0,&uStack_140);
                    _dev_err(iVar6 + 0xe8,"%s disable timed out: 0x%x\n",*(iVar8 + 8),uStack_140);
                    iVar7 = *(iVar8 + 0x150);
                }
            }
            else {
                __const_udelay(0x68dbc);
                uVar4 = 0;
                iVar7 = *(iVar8 + 0x150);
            }
            if (iVar7 != 0) {
                regmap_read(iVar7,0,&uStack_140);
                uStack_140 = uStack_140 | 1;
                regmap_write(*(iVar8 + 0x150),0);
            }
            if (0 < *(iVar8 + 0x1ec)) {
                uVar5 = 0;
                do {
                    uVar4 = icc_set_bw(*(*(iVar8 + 0x1c8) + uVar5 * 8),0,0);
                    if (uVar4 != 0) {
                        _dev_err(iVar6 + 0xe8,"Failed to unvote BW for %d: %d\n",uVar5 & 0xffffffff,uVar4);
                        goto code_r0x08003fdc;
                    }
                    uVar5 = uVar5 + 1;
                } while (uVar5 < *(iVar8 + 0x1ec));
                goto code_r0x08003f88;
            }
        }
    }
    else {
code_r0x08003f88:
        uVar4 = 0;
    }
    if (((*(iVar8 + 0x1d8) != '\0') && (*(iVar8 + 0x1d3) != '\0')) || (*(iVar8 + 0x1d4) != '\0')) {
        uVar9 = *(*(iVar8 + 0x178) + *(iVar8 + 0x1e4) * 8);
        clk_disable(uVar9);
        clk_unprepare(uVar9);
        *(iVar8 + 0x1d8) = 0;
    }
    *(iVar8 + 0x1d6) = 0;
    iVar8 = *(iVar6 + 0x480);
joined_r0x08003fcc:
    if ((iVar8 != 0) && (bVar2)) {
        ww_mutex_unlock(iVar11 + 0x98);
    }
code_r0x08003fdc:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_138) {
        return uVar4;
    }
    __stack_chk_fail();
    *extraout_x18_01 = sym.gdsc_is_enabled;
    iVar8 = rdev_get_drvdata();
    if (*(iVar8 + 0x1f9) == '\0') {
        if (*(iVar8 + 0x1d0) == '\0') {
            return *(iVar8 + 0x1d2) ^ 1;
        }
        if (*(iVar8 + 0x1f8) != '\0') {
            return 0;
        }
    }
    return *(iVar8 + 0x1d6);
}


// ===== sym.gdsc_pm_resume_early.29badac91dd5595ca811e10faabbdec0.cfi_jt @ 0x08002338 (size 8) =====

ulong sym.gdsc_pm_resume_early.29badac91dd5595ca811e10faabbdec0.cfi_jt(void)

{
    return 0;
}


// ===== sym.trace_raw_output_gdsc_time.29badac91dd5595ca811e10faabbdec0.cfi_jt @ 0x08002340 (size 8) =====

void sym.trace_raw_output_gdsc_time.29badac91dd5595ca811e10faabbdec0.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x20e8);
    iVar1 = trace_raw_output_prep(param_1,param_3);
    if (iVar1 == 1) {
        trace_event_printf(param_1,"%s enabling:%d time_us:%d timed_out:%d\n",iVar2 + *(iVar2 + 8),*(iVar2 + 0xc),
                           *(iVar2 + 0x10),*(iVar2 + 0x14));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.__traceiter_gdsc_time @ 0x08002348 (size 128) =====

ulong sym.__traceiter_gdsc_time(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint in_w4;
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8004490 != NULL) {
        piVar1 = *0x8004490;
        do {
            (**piVar1)(piVar1[1],arg2,arg3 & 0xffffffff,arg4 & 0xffffffff,in_w4);
            piVar1 = piVar1 + 3;
        } while (*piVar1 != 0);
    }
    return 0;
}


// ===== sym.trace_event_raw_event_gdsc_time @ 0x080023d0 (size 280) =====

//WARNING: Removing unreachable block (ram,0x080025e0)

void sym.trace_event_raw_event_gdsc_time(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char *pcVar1;
    int64_t *piVar2;
    int iVar3;
    ulong uVar4;
    uint uVar5;
    uint uVar6;
    uint uVar7;
    ulong in_tmp_ldXn;
    int iVar8;
    uint64_t uVar9;
    int64_t iVar10;
    uint32_t *puVar11;
    uint64_t uVar12;
    uint64_t in_x4;
    uint64_t uVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t uVar14;
    ulong unaff_x30;
    uchar auVar15 [16];
    uchar auStack_100 [12];
    uint32_t uStack_f4;
    int64_t iStack_f0;
    int64_t iStack_e8;
    uchar *puStack_e0;
    code *pcStack_d8;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_48 = *(iVar10 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar14 = *(arg1 + 0x48);
    uVar12 = arg4;
    uVar13 = in_x4;
    if ((uVar14 >> 8 & 1) == 0) {
        puVar11 = arg3;
        if ((uVar14 >> 7 & 1) != 0) {
            puVar11 = NULL;
            uVar12 = 0;
            event_triggers_call(arg1,0);
        }
        if (((uVar14 >> 6 & 1) != 0) ||
           (((uVar14 >> 9 & 1) != 0 && (uVar9 = trace_event_ignore_this_pid(arg1), (uVar9 & 1) != 0))))
        goto code_r0x080024b0;
    }
    pcVar1 = "(null)";
    if (arg2 != 0) {
        pcVar1 = arg2;
    }
    iVar8 = strlen(pcVar1);
    puVar11 = iVar8 + 1 + 0x18;
    iVar10 = trace_event_buffer_reserve(&uStack_78,arg1);
    if (iVar10 != 0) {
        *(iVar10 + 8) = (iVar8 + 1) * 0x10000 | 0x18;
        strcpy(iVar10 + 0x18,pcVar1);
        *(iVar10 + 0xc) = arg3;
        *(iVar10 + 0x10) = arg4;
        *(iVar10 + 0x14) = in_x4;
        trace_event_buffer_commit(&uStack_78);
    }
code_r0x080024b0:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_48) {
        return;
    }
    auVar15 = __stack_chk_fail();
    uVar9 = auVar15._0_8_;
    *extraout_x18 = sym.perf_trace_gdsc_time;
    pcStack_d8 = sym.perf_trace_gdsc_time;
    iVar10 = sp_el0;
    pcVar1 = "(null)";
    if (auVar15._8_8_ != NULL) {
        pcVar1 = auVar15._8_8_;
    }
    iStack_e8 = *(iVar10 + 0x5e0);
    uVar7 = uVar13;
    uVar5 = uVar12;
    uVar6 = SUB84(puVar11,0);
    iStack_f0 = 0;
    uStack_f4 = 0;
    puStack_e0 = &stack0xffffffffffffffc0;
    iVar8 = strlen(pcVar1);
    iVar10 = tpidr_el1;
    piVar2 = iVar10 + *(uVar9 + 0x78);
    if ((*(uVar9 + 0x80) != 0) || (*piVar2 != 0)) {
        puVar11 = &uStack_f4;
        iVar3 = (iVar8 + 0x24U & 0xfffffff8) - 4;
        iVar10 = perf_trace_buf_alloc(iVar3,&iStack_f0,puVar11);
        if (iVar10 != 0) {
            uVar12 = _trace_event_raw_init & 0x3f;
            *(iStack_f0 + 0xe8) = &puStack_e0;
            *(iStack_f0 + 0xf8) = auStack_100;
            *(iStack_f0 + 0x100) = ~(-1L << uVar12) & 0x80024e8;
            *(iStack_f0 + 0x108) = 5;
            *(iVar10 + 8) = iVar8 * 0x10000 + 0x10018;
            strcpy(iVar10 + 0x18,pcVar1);
            puVar11 = uStack_f4;
            uVar13 = 1;
            *(iVar10 + 0xc) = uVar6;
            *(iVar10 + 0x10) = uVar5;
            *(iVar10 + 0x14) = uVar7;
            perf_trace_run_bpf_submit(iVar10,iVar3,puVar11,uVar9,1,iStack_f0,piVar2,0);
            uVar12 = uVar9;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) != iStack_e8) {
        auVar15 = __stack_chk_fail();
        uVar4 = tpidr_el2;
        *extraout_x18_00 = 0x8002668;
        bpf_trace_run4(in_tmp_ldXn,auVar15._0_8_,auVar15._8_8_,puVar11 & 0xffffffff,uVar12 & 0xffffffff,
                       uVar13 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_gdsc_time @ 0x080024e8 (size 396) =====

void sym.perf_trace_gdsc_time(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int iVar4;
    ulong uVar5;
    uint uVar6;
    uint uVar7;
    uint uVar8;
    ulong in_tmp_ldXn;
    int iVar9;
    int64_t iVar10;
    uint64_t in_x4;
    uint64_t uVar11;
    uint64_t *in_x18;
    ulong *extraout_x18;
    uint64_t unaff_x30;
    uchar auVar12 [16];
    uchar auStack_80 [12];
    uint32_t uStack_74;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    uVar2 = 0x8000a8d;
    if (arg2 != 0) {
        uVar2 = arg2;
    }
    iStack_68 = *(iVar10 + 0x5e0);
    uVar8 = in_x4;
    uVar6 = arg4;
    uVar7 = arg3;
    iStack_70 = 0;
    uStack_74 = 0;
    iVar9 = strlen(uVar2);
    iVar10 = tpidr_el1;
    piVar1 = iVar10 + *(arg1 + 0x78);
    if ((*(arg1 + 0x80) != 0) || (*piVar1 != 0)) {
        arg3 = &stack0xffffffffffffff8c;
        iVar4 = (iVar9 + 0x24U & 0xfffffff8) - 4;
        iVar10 = perf_trace_buf_alloc(iVar4,&stack0xffffffffffffff90,arg3);
        if (iVar10 != 0) {
            uVar11 = -1L << (_trace_event_raw_init & 0x3f);
            *(iStack_70 + 0xe8) = &stack0xffffffffffffffa0;
            *(iStack_70 + 0xf8) = &stack0xffffffffffffff80;
            uVar3 = (~uVar11 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar3 = uVar11 | unaff_x30;
            }
            *(iStack_70 + 0x100) = uVar3;
            *(iStack_70 + 0x108) = 5;
            *(iVar10 + 8) = iVar9 * 0x10000 + 0x10018;
            strcpy(iVar10 + 0x18,uVar2);
            arg3 = uStack_74;
            in_x4 = 1;
            *(iVar10 + 0xc) = uVar7;
            *(iVar10 + 0x10) = uVar6;
            *(iVar10 + 0x14) = uVar8;
            perf_trace_run_bpf_submit(iVar10,iVar4,arg3,arg1,1,iStack_70,piVar1,0);
            arg4 = arg1;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_68) {
        return;
    }
    auVar12 = __stack_chk_fail();
    uVar5 = tpidr_el2;
    *extraout_x18 = 0x8002668;
    bpf_trace_run4(in_tmp_ldXn,auVar12._0_8_,auVar12._8_8_,arg3 & 0xffffffff,arg4 & 0xffffffff,in_x4 & 0xffffffff);
    return;
}


// ===== sym.__bpf_trace_gdsc_time @ 0x08002674 (size 48) =====

void sym.__bpf_trace_gdsc_time(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    ulong in_x0;
    ulong in_x1;
    uint in_w4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run4(in_x0,in_x1,arg1 & 0xffffffff,arg2 & 0xffffffff,in_w4);
    return;
}


// ===== sym.gdsc_debug_print_regs @ 0x080026a4 (size 380) =====

void sym.gdsc_debug_print_regs(int64_t arg1)

{
    char *pcVar1;
    ulong uVar2;
    int iVar3;
    int64_t iVar4;
    uint64_t *in_x2;
    ulong in_x6;
    ulong in_x7;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar5;
    int64_t *piVar6;
    int64_t unaff_x21;
    int64_t *piVar7;
    uint uVar8;
    ulong unaff_x30;
    uchar *puVar9;
    code *pcVar10;
    uint64_t uStack_68;
    uint uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    puVar9 = &stack0xffffffffffffffb0;
    iVar4 = sp_el0;
    iStack_58 = *(iVar4 + 0x5e0);
    iVar5 = *(arg1 + 0x78);
    iVar4 = rdev_get_drvdata(iVar5);
    uStack_60 = 0;
    uStack_68 = 0;
    if (iVar4 == 0) {
        _printk(0x8000a17);
    }
    else {
        unaff_x21 = iVar5 + 0x98;
        ww_mutex_lock(unaff_x21,0);
        if (*(iVar5 + 0x10) != 0) {
            _printk(0x8000b3f,"Device-Supply");
        }
        piVar6 = iVar5 + 0x28;
        piVar7 = *piVar6;
        if (piVar6 != piVar7) {
            do {
                pcVar1 = "(null)-(null)";
                if (piVar7[9] != NULL) {
                    pcVar1 = piVar7[9];
                }
                uVar8 = 0x4e;
                if (piVar7[3] != 0) {
                    uVar8 = 0x59;
                }
                _printk(0x8000b04,pcVar1,uVar8);
                piVar7 = *piVar7;
            } while (piVar6 != piVar7);
        }
        ww_mutex_unlock(unaff_x21);
        in_x2 = &uStack_68;
        uVar2 = 3;
        if (_segment.ehdr == 0) {
            uVar2 = 1;
        }
        iVar3 = regmap_bulk_read(*(iVar4 + 0x148),0,in_x2,uVar2);
        if (iVar3 == 0) {
            _printk(0x8000915,*(iVar4 + 8));
            in_x2 = uStack_68 >> 0x20;
            _printk(0x8000b4b,uStack_68 & 0xffffffff,in_x2,uStack_60);
        }
        else {
            _printk(0x8000bc7,*(iVar4 + 8));
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_58) {
        return;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.trace_raw_output_gdsc_time;
    pcVar10 = sym.trace_raw_output_gdsc_time;
    iVar5 = *(iVar4 + 0x20e8);
    iVar3 = trace_raw_output_prep(iVar4,in_x2);
    if (iVar3 == 1) {
        trace_event_printf(iVar4,"%s enabling:%d time_us:%d timed_out:%d\n",iVar5 + *(iVar5 + 8),*(iVar5 + 0xc),
                           *(iVar5 + 0x10),*(iVar5 + 0x14),in_x6,in_x7,puVar9,pcVar10,unaff_x21);
        trace_handle_return(iVar4 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_gdsc_time @ 0x08002820 (size 120) =====

void sym.trace_raw_output_gdsc_time(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20e8);
    iVar1 = trace_raw_output_prep(arg1,arg2);
    if (iVar1 == 1) {
        trace_event_printf(arg1,"%s enabling:%d time_us:%d timed_out:%d\n",iVar2 + *(iVar2 + 8),*(iVar2 + 0xc),
                           *(iVar2 + 0x10),*(iVar2 + 0x14));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.gdsc_probe @ 0x08002898 (size 3024) =====

uint64_t sym.gdsc_probe(int64_t arg1)

{
    uint64_t uVar1;
    char cVar2;
    bool bVar3;
    uint8_t uVar4;
    int iVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint64_t *arg1_00;
    ulong *puVar8;
    int64_t iVar9;
    uint64_t uVar10;
    ulong uVar11;
    int64_t *piVar12;
    char *pcVar13;
    int extraout_w8;
    ulong *in_x18;
    uint64_t *unaff_x19;
    uint64_t *unaff_x22;
    ulong *unaff_x23;
    uint64_t uVar14;
    uint64_t uVar15;
    ulong *unaff_x28;
    ulong unaff_x30;
    uint32_t uStack_a8;
    uint32_t uStack_a4;
    uint64_t uStack_a0;
    ulong *puStack_98;
    uint64_t *puStack_90;
    ulong uStack_88;
    uint64_t uStack_80;
    ulong uStack_78;
    uint64_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    uVar1 = arg1 + 0x10;
    iStack_68 = *(iVar9 + 0x5e0);
    uStack_80 = 0;
    uStack_78 = 0;
    puStack_90 = NULL;
    uStack_88 = 0;
    uStack_a0 = 0;
    puStack_98 = NULL;
    uStack_a8 = 0;
    uStack_a4 = 0;
    arg1_00 = devm_kmalloc(uVar1,0x200,0xdc0);
    if (arg1_00 == NULL) goto code_r0x08002ea4;
    unaff_x22 = arg1_00 + 1;
    puVar8 = of_get_regulator_init_data(uVar1,*(arg1 + 0x300),unaff_x22);
    unaff_x19 = arg1_00;
    if (puVar8 == NULL) goto code_r0x08002ea4;
    unaff_x28 = arg1 + 0x300;
    iVar9 = of_get_property(*unaff_x28,"parent-supply",0);
    if (iVar9 != 0) {
        *puVar8 = "parent";
    }
    uVar10 = of_property_read_string(*unaff_x28,"regulator-name",unaff_x22);
    uVar14 = uVar10 & 0xffffffff;
    if (uVar10 == 0) {
        iVar9 = of_find_property(*unaff_x28,"domain-addr",0);
        unaff_x23 = puVar8;
        if (iVar9 == 0) {
code_r0x08002990:
            iVar9 = of_find_property(*unaff_x28,"sw-reset",0);
            if (iVar9 != 0) {
                uVar14 = of_count_phandle_with_args(*unaff_x28,"sw-reset",0);
                *(arg1_00 + 0x3d) = uVar14;
                if (uVar14 >> 0x3d != 0) {
                    uVar14 = 0xfffffff4;
                    arg1_00[0x2c] = 0;
                    goto code_r0x08002ea8;
                }
                uVar14 = devm_kmalloc(uVar1,-(uVar14 >> 0x1f & 1) & 0xfffffff800000000 | (uVar14 & 0xffffffff) << 3,
                                      0xcc0);
                arg1_00[0x2c] = uVar14;
                if (uVar14 == 0) goto code_r0x08002ea4;
                if (0 < arg1_00[0x3d]) {
                    uVar10 = 0;
                    do {
                        iVar9 = of_parse_phandle(*unaff_x28,"sw-reset",uVar10 & 0xffffffff);
                        if (iVar9 == 0) {
                            uVar14 = 0xffffffed;
                            goto code_r0x08002ea8;
                        }
                        uVar11 = syscon_node_to_regmap();
                        *(arg1_00[0x2c] + uVar10 * 8) = uVar11;
                        uVar14 = *(arg1_00[0x2c] + uVar10 * 8);
                        if (0xfffffffffffff000 < uVar14) {
                            uVar14 = uVar14 & 0xffffffff;
                            goto code_r0x08002c3c;
                        }
                        uVar10 = uVar10 + 1;
                    } while (uVar10 < arg1_00[0x3d]);
                }
            }
            iVar9 = of_find_property(*unaff_x28,"hw-ctrl-addr",0);
            if (iVar9 != 0) {
                uVar14 = syscon_regmap_lookup_by_phandle(*unaff_x28,"hw-ctrl-addr");
                arg1_00[0x2b] = uVar14;
                if (0xfffffffffffff000 < uVar14) goto code_r0x08002c38;
            }
            uVar11 = *unaff_x28;
            *(arg1_00 + 500) = 500;
            of_property_read_variable_u32_array(uVar11,"qcom,gds-timeout",arg1_00 + 500,1,0);
            iVar5 = of_property_read_string_helper(*unaff_x28,"clock-names",0,0,0);
            *(arg1_00 + 0x1dc) = iVar5;
            if (iVar5 != -0x16) {
                if (-1 < iVar5) goto code_r0x08002ad0;
                _dev_err(uVar1,"Failed to get clock names, ret=%d\n");
                uVar14 = *(arg1_00 + 0x1dc);
                goto code_r0x08002c3c;
            }
            *(arg1_00 + 0x1dc) = 0;
code_r0x08002ad0:
            iVar5 = of_property_read_string_helper(*unaff_x28,"interconnect-names",0,0,0);
            *(arg1_00 + 0x1ec) = iVar5;
            if (iVar5 == -0x16) {
                *(arg1_00 + 0x1ec) = 0;
            }
            else if (iVar5 < 0) {
                _dev_err(uVar1,"Failed to get interconnect names, ret=%d\n");
                uVar14 = *(arg1_00 + 0x1ec);
                goto code_r0x08002c3c;
            }
            iVar9 = of_find_property(*unaff_x28,"qcom,enable-root-clk",0);
            uVar11 = *unaff_x28;
            *(arg1_00 + 0x1d3) = iVar9 != 0;
            iVar9 = of_find_property(uVar11,"qcom,force-enable-root-clk",0);
            uVar11 = *unaff_x28;
            *(arg1_00 + 0x1d4) = iVar9 != 0;
            iVar9 = of_find_property(uVar11,"qcom,reset-aon-logic",0);
            uVar11 = *unaff_x28;
            *(arg1_00 + 0x1d9) = iVar9 != 0;
            iVar9 = of_find_property(uVar11,"qcom,no-status-check-on-disable",0);
            uVar11 = *unaff_x28;
            *(arg1_00 + 0x1d5) = iVar9 != 0;
            iVar9 = of_find_property(uVar11,"qcom,retain-regs",0);
            uVar11 = *unaff_x28;
            *(arg1_00 + 0x1d1) = iVar9 != 0;
            iVar9 = of_find_property(uVar11,"qcom,skip-disable-before-sw-enable",0);
            uVar11 = *unaff_x28;
            *(arg1_00 + 0x3f) = iVar9 != 0;
            iVar9 = of_find_property(uVar11,"qcom,support-cfg-gdscr",0);
            uVar11 = *unaff_x28;
            *(arg1_00 + 0x1fb) = iVar9 != 0;
            iVar9 = of_find_property(uVar11,"qcom,collapse-vote",0);
            if (iVar9 == 0) {
code_r0x08002c74:
                iVar9 = of_find_property(*unaff_x28,"qcom,skip-disable",0);
                *(arg1_00 + 0x1f9) = iVar9 != 0;
                if (iVar9 != 0) {
                    *(puVar8 + 0x3c) = 6;
                    *(puVar8 + 8) = *(puVar8 + 8) | 4;
                }
                iVar9 = of_find_property(*unaff_x28,"qcom,skip-logic-collapse",0);
                *(arg1_00 + 0x3a) = iVar9 == 0;
                if (iVar9 != 0) {
                    iVar5 = of_property_read_string_helper(*unaff_x28,"reset-names",0,0,0);
                    *(arg1_00 + 0x3c) = iVar5;
                    if (iVar5 == -0x16) {
                        *(arg1_00 + 0x3c) = 0;
                    }
                    else if (iVar5 < 0) {
                        _dev_err(uVar1,"Failed to get reset clock names\n");
                        uVar14 = arg1_00[0x3c];
                        goto code_r0x08002c3c;
                    }
                }
                iVar9 = of_find_property(*unaff_x28,"qcom,support-hw-trigger",0);
                if (iVar9 != 0) {
                    *(puVar8 + 0x3c) = *(puVar8 + 0x3c) | 3;
                    *(puVar8 + 8) = *(puVar8 + 8) | 4;
                    *(arg1_00 + 0x1da) = 1;
                }
                goto code_r0x08002d40;
            }
            iVar5 = of_property_count_elems_of_size(*unaff_x28,"qcom,collapse-vote",4);
            if (iVar5 == 2) {
                uVar14 = syscon_regmap_lookup_by_phandle(*unaff_x28,"qcom,collapse-vote");
                arg1_00[0x2d] = uVar14;
                if (0xfffffffffffff000 < uVar14) goto code_r0x08002c38;
                uVar10 = of_property_read_u32_index(*unaff_x28,"qcom,collapse-vote",1,arg1_00 + 0x2e);
                uVar14 = uVar10 & 0xffffffff;
                if ((uVar10 != 0) || (0x1f < arg1_00[0x2e])) {
                    _dev_err(uVar1,"qcom,collapse-vote vote_bit error\n");
                    goto code_r0x08002c3c;
                }
                goto code_r0x08002c74;
            }
            pcVar13 = "qcom,collapse-vote needs two values\n";
        }
        else {
            uVar14 = syscon_regmap_lookup_by_phandle(*unaff_x28,"domain-addr");
            arg1_00[0x2a] = uVar14;
            if (uVar14 < 0xfffffffffffff001) goto code_r0x08002990;
code_r0x08002c38:
            uVar14 = uVar14 & 0xffffffff;
code_r0x08002c3c:
            if (uVar14 != 0) goto code_r0x08002ea8;
code_r0x08002d40:
            piVar12 = platform_get_resource(arg1,0x200,0);
            if (piVar12 == NULL) {
                pcVar13 = "Failed to get address resource\n";
            }
            else {
                uVar14 = devm_ioremap(uVar1,*piVar12,(piVar12[1] - *piVar12) + 1);
                arg1_00[0x28] = uVar14;
                if (uVar14 == 0) goto code_r0x08002ea4;
                iVar9 = of_find_property(*unaff_x28,"qcom,no-config-gdscr",0);
                if (iVar9 != 0) {
                    _segment.ehdr = 0;
                }
                uVar14 = __devm_regmap_init_mmio_clk(uVar1,0,arg1_00[0x28],obj.gdsc_regmap_config,0,0);
                arg1_00[0x29] = uVar14;
                if (uVar14 == 0) {
                    pcVar13 = "Couldn\'t get regmap\n";
                }
                else {
                    iVar5 = *(arg1_00 + 0x1dc);
                    if (iVar5 >> 0x3d == 0) {
                        uVar14 = devm_kmalloc(uVar1,iVar5 << 3,0xdc0);
                        iVar5 = *(arg1_00 + 0x1dc);
                        arg1_00[0x2f] = uVar14;
                    }
                    else {
                        uVar14 = 0;
                        arg1_00[0x2f] = 0;
                    }
                    if ((iVar5 != 0) && (uVar14 == 0)) goto code_r0x08002ea4;
                    *(arg1_00 + 0x1e4) = 0xffffffff;
                    if (0 < iVar5) {
                        uVar10 = 0;
                        do {
                            uStack_70 = 0;
                            of_property_read_string_helper
                                      (*unaff_x28,"clock-names",&uStack_70,1,uVar10 & 0xffffffff);
                            uVar11 = devm_clk_get(uVar1,uStack_70);
                            *(arg1_00[0x2f] + uVar10 * 8) = uVar11;
                            uVar14 = *(arg1_00[0x2f] + uVar10 * 8);
                            if (0xfffffffffffff000 < uVar14) {
                                if (uVar14 == -0x205) goto code_r0x0800311c;
                                goto code_r0x08002ef0;
                            }
                            iVar5 = strcmp(uStack_70,"core_root_clk");
                            if (iVar5 == 0) {
                                *(arg1_00 + 0x1e4) = uVar10;
                            }
                            uVar10 = uVar10 + 1;
                        } while (uVar10 < *(arg1_00 + 0x1dc));
                    }
                    iVar5 = *(arg1_00 + 0x1ec);
                    if (iVar5 >> 0x3d == 0) {
                        uVar14 = devm_kmalloc(uVar1,iVar5 << 3,0xdc0);
                        iVar5 = *(arg1_00 + 0x1ec);
                        arg1_00[0x39] = uVar14;
                    }
                    else {
                        uVar14 = 0;
                        arg1_00[0x39] = 0;
                    }
                    if ((iVar5 != 0) && (uVar14 == 0)) goto code_r0x08002ea4;
                    if (0 < iVar5) {
                        uVar14 = 0;
                        do {
                            uStack_70 = 0;
                            of_property_read_string_helper
                                      (*unaff_x28,"interconnect-names",&uStack_70,1,uVar14 & 0xffffffff);
                            uVar11 = of_icc_get(uVar1,uStack_70);
                            *(arg1_00[0x39] + uVar14 * 8) = uVar11;
                            uVar10 = *(arg1_00[0x39] + uVar14 * 8);
                            if (0xfffffffffffff000 < uVar10) {
                                uVar14 = uVar10 & 0xffffffff;
                                if (uVar10 == -0x205) goto code_r0x0800311c;
                                pcVar13 = "Failed to get path %s, ret=%d\n";
                                goto code_r0x08003100;
                            }
                            uVar14 = uVar14 + 1;
                        } while (uVar14 < *(arg1_00 + 0x1ec));
                    }
                    if (((*(arg1_00 + 0x1d3) == '\0') && (*(arg1_00 + 0x1d4) == '\0')) || (*(arg1_00 + 0x1e4) != -1)) {
                        if (arg1_00[0x3a] != '\0') goto code_r0x08003120;
                        iVar5 = arg1_00[0x3c];
                        if (iVar5 >> 0x3d != 0) goto code_r0x08003428;
                        uVar14 = devm_kmalloc(uVar1,iVar5 << 3,0xdc0);
                        iVar5 = arg1_00[0x3c];
                        arg1_00[0x38] = uVar14;
                        if (iVar5 == 0) goto code_r0x0800306c;
                        goto code_r0x08003068;
                    }
                    pcVar13 = "Failed to get root clock name\n";
                }
            }
        }
        _dev_err(uVar1,pcVar13);
        uVar14 = 0xffffffea;
    }
code_r0x08002ea8:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_68) {
        return uVar14 & 0xffffffff;
    }
    __stack_chk_fail();
    iVar5 = extraout_w8;
code_r0x08003428:
    uVar14 = 0;
    arg1_00[0x38] = 0;
    unaff_x19 = arg1_00;
    if (iVar5 != 0) {
code_r0x08003068:
        arg1_00 = unaff_x19;
        unaff_x23 = puVar8;
        if (uVar14 != 0) goto code_r0x0800306c;
code_r0x08002ea4:
        puVar8 = unaff_x23;
        uVar14 = 0xfffffff4;
        arg1_00 = unaff_x19;
        goto code_r0x08002ea8;
    }
code_r0x0800306c:
    if (0 < iVar5) {
        uVar14 = 0;
code_r0x08003080:
        uStack_70 = 0;
        of_property_read_string_helper(*unaff_x28,"reset-names",&uStack_70,1,uVar14 & 0xffffffff);
        uVar11 = __devm_reset_control_get(uVar1,uStack_70,0,0,0,1);
        *(arg1_00[0x38] + uVar14 * 8) = uVar11;
        uVar10 = *(arg1_00[0x38] + uVar14 * 8);
        if (uVar10 < 0xfffffffffffff001) goto code_r0x080030d4;
        uVar14 = uVar10 & 0xffffffff;
        if (uVar10 != -0x205) {
code_r0x08002ef0:
            pcVar13 = "Failed to get %s, ret=%d\n";
code_r0x08003100:
            _dev_err(uVar1,pcVar13,uStack_70,uVar14 & 0xffffffff);
        }
code_r0x0800311c:
        if (uVar14 == 0) goto code_r0x08003120;
        goto code_r0x08002ea8;
    }
code_r0x08003120:
    regmap_read(arg1_00[0x29],0,&uStack_a4);
    uStack_a4 = uStack_a4 & 0xfffffff9;
    iVar9 = of_find_property(*unaff_x28,"mboxes",0);
    if (iVar9 == 0) {
code_r0x08003184:
        iVar5 = of_property_read_variable_u32_array(*unaff_x28,"qcom,clk-dis-wait-val",&uStack_a8,1,0);
        if (-1 < iVar5) {
            *(arg1_00 + 0x1da) = 1;
            uStack_a8 = uStack_a8 << 0xc;
            uStack_a4 = uStack_a4 & 0xffff0fff | uStack_a8;
            *(arg1_00 + 0x3e) = uStack_a8;
        }
        regmap_write(arg1_00[0x29],0,uStack_a4);
        if (arg1_00[0x3a] == '\0') {
            uStack_a4 = uStack_a4 & 0xfffffffe;
            regmap_write(arg1_00[0x29],0);
            uVar7 = sym.poll_gdsc_status(arg1_00,1);
            if (uVar7 == 0) {
                uStack_70 = uStack_70 & 0xffffffff00000000;
                if (arg1_00[0x3a] != '\0') goto code_r0x0800321c;
                uVar4 = *(arg1_00 + 0x1d2) ^ 1;
                goto code_r0x08003258;
            }
            uVar14 = uVar7;
            uVar10 = *unaff_x22;
            pcVar13 = "%s enable timed out: 0x%x\n";
            uVar15 = uStack_a4;
        }
        else {
            uStack_70 = uStack_70 & 0xffffffff00000000;
code_r0x0800321c:
            uVar14 = arg1_00[0x2d];
            if (uVar14 == 0) {
                uVar14 = arg1_00[0x29];
                uVar7 = 1;
            }
            else {
                uVar7 = 1L << (arg1_00[0x2e] & 0x3f);
            }
            uVar6 = regmap_read(uVar14,0,&uStack_70);
            if (uVar6 < 0) {
                uVar10 = *unaff_x22;
                pcVar13 = "%s failed to get initial enable state, ret=%d\n";
            }
            else {
                uVar4 = (uStack_70 & uVar7) == 0;
code_r0x08003258:
                *(arg1_00 + 0x1d6) = uVar4;
                uStack_70 = uStack_70 & 0xffffffff00000000;
                uVar6 = regmap_read(arg1_00[0x29],0,&uStack_70);
                if (-1 < uVar6) {
                    *(arg1_00 + 0x1d7) = uStack_70 >> 1 & 1;
                    if (*(arg1_00 + 0x1da) != '\0') {
                        *(*(arg1 + 0x98) + 0x78) = obj.gdsc_pm_ops;
                    }
                    Hint_Prefetch(0x8000530,2,0,1);
                    do {
                        iVar5 = _obj.gdsc_probe.gdsc_count + 1;
                        cVar2 = '\x01';
                        bVar3 = ExclusiveMonitorPass(0x8000530,0x10);
                        if (bVar3) {
                            cVar2 = ExclusiveMonitorsStatus();
                            _obj.gdsc_probe.gdsc_count = iVar5;
                        }
                    } while (cVar2 != '\0');
                    DataMemoryBarrier(2,3);
                    *(arg1_00 + 7) = iVar5;
                    uStack_80 = arg1_00[0x29];
                    *(arg1_00 + 0x54) = 0;
                    arg1_00[9] = obj.gdsc_ops;
                    arg1_00[0xb] = obj.__this_module;
                    uStack_88 = *unaff_x28;
                    uStack_a0 = uVar1;
                    puStack_98 = puVar8;
                    puStack_90 = arg1_00;
                    uVar14 = devm_regulator_register(uVar1,unaff_x22,&uStack_a0);
                    *arg1_00 = uVar14;
                    if (0xfffffffffffff000 < uVar14) {
                        _dev_err(uVar1,"regulator_register(\"%s\") failed, ret=%d\n",*unaff_x22,uVar14 & 0xffffffff);
                        goto code_r0x080033ec;
                    }
                    uVar7 = devm_regulator_proxy_consumer_register(uVar1,*unaff_x28);
                    if (uVar7 == 0) {
                        iVar5 = devm_regulator_debug_register(uVar1,*arg1_00);
                        if (iVar5 != 0) {
                            _dev_err(uVar1,"failed to register debug regulator, ret=%d\n",iVar5);
                        }
                        uVar14 = 0;
                        *(arg1 + 0xa8) = arg1_00;
                        goto code_r0x08002ea8;
                    }
                    uVar14 = uVar7;
                    _dev_err(uVar1,"failed to register proxy consumer, ret=%d\n",uVar14);
                    goto code_r0x080033ec;
                }
                uVar10 = *unaff_x22;
                pcVar13 = "%s failed to get initial hw_ctrl state, ret=%d\n";
            }
            uVar15 = uVar6;
            uVar14 = uVar15;
        }
        _dev_err(uVar1,pcVar13,uVar10,uVar15);
    }
    else {
        arg1_00[0x30] = uVar1;
        *(arg1_00 + 0x31) = 1;
        arg1_00[0x32] = 500;
        *(arg1_00 + 0x33) = 0;
        uVar14 = mbox_request_channel(arg1_00 + 0x30,0);
        arg1_00[0x37] = uVar14;
        if (uVar14 < 0xfffffffffffff001) goto code_r0x08003184;
        _dev_err(uVar1,"mailbox channel request failed, ret=%d\n",uVar14 & 0xffffffff);
        uVar7 = 0xfffffdfb;
        if (uVar14 != 0xfffffff5) {
            uVar7 = uVar14;
        }
        uVar14 = uVar7;
        arg1_00[0x37] = 0;
    }
code_r0x080033ec:
    if (arg1_00[0x37] != 0) {
        mbox_free_channel();
    }
    goto code_r0x08002ea8;
code_r0x080030d4:
    uVar14 = uVar14 + 1;
    if (arg1_00[0x3c] <= uVar14) goto code_r0x08003120;
    goto code_r0x08003080;
}


// ===== sym.poll_gdsc_status @ 0x08003468 (size 708) =====

uint sym.poll_gdsc_status(int64_t arg1,int64_t arg2)

{
    bool bVar1;
    int64_t iVar2;
    int iVar3;
    int64_t *piVar4;
    ulong *in_x18;
    ulong uVar5;
    int64_t iVar6;
    uint uVar7;
    int iVar8;
    int64_t *piVar9;
    ulong unaff_x30;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_48 = *(iVar6 + 0x5e0);
    iVar8 = *(arg1 + 500);
    uStack_4c = 0;
    iVar6 = *(arg1 + 0x158);
    if (iVar6 == 0) {
        iVar6 = *(arg1 + 0x148);
        if (*(arg1 + 0x1fb) == '\0') goto code_r0x080034d4;
    }
    else {
        if (*(arg1 + 0x1fb) == '\0') {
code_r0x080034d4:
            uVar7 = 0;
            goto joined_r0x080034cc;
        }
        iVar6 = *(arg1 + 0x148);
    }
    uVar7 = 4;
joined_r0x080034cc:
    iVar3 = iVar8;
    if (0 < iVar8) {
        do {
            regmap_read(iVar6,uVar7,&uStack_4c);
            if (arg2 == 0) {
                if (*(arg1 + 0x1fb) == '\0') {
                    uStack_4c = -(~uStack_4c >> 0x1f);
                }
                else {
                    uStack_4c = uStack_4c & 0x8000;
                }
            }
            else if (arg2 == 1) {
                if (*(arg1 + 0x1fb) == '\0') {
                    uStack_4c = uStack_4c & 0x80000000;
                }
                else {
                    uStack_4c = uStack_4c & 0x10000;
                }
            }
            if (uStack_4c != 0) {
                uVar5 = *(arg1 + 8);
                iVar8 = *(arg1 + 500) - iVar8;
                uVar7 = 0;
                goto code_r0x080035a4;
            }
            __const_udelay(0x10c7);
            iVar3 = iVar8 + -1;
            bVar1 = 0 < iVar8;
            iVar8 = iVar3;
        } while (iVar3 != 0 && bVar1);
        iVar8 = *(arg1 + 500);
        iVar3 = 0;
    }
    uVar5 = *(arg1 + 8);
    iVar8 = iVar8 - iVar3;
    do {
        uVar7 = 0xffffff92;
code_r0x080035a4:
        while( true ) {
            iVar6 = sp_el0;
            if (*(iVar6 + 0x5e0) == iStack_48) {
                return uVar7;
            }
            __stack_chk_fail();
            iVar6 = tpidr_el1;
            if ((*(__cpu_online_mask + (*(cpu_number + iVar6) >> 3 & 0x1ffffff8)) >> (*(cpu_number + iVar6) & 0x3f) & 1)
                == 0) break;
            iVar6 = sp_el0;
            *(iVar6 + 0x10) = *(iVar6 + 0x10) + 1;
            piVar9 = *0x8004490;
            piVar4 = *0x8004490;
            while (piVar4 != NULL) {
                (**piVar9)(piVar9[1],uVar5,uVar7,iVar8,1);
                piVar9 = piVar9 + 3;
                piVar4 = *piVar9;
            }
            iVar2 = *(iVar6 + 0x10) + -1;
            *(iVar6 + 0x10) = iVar2;
            if ((iVar2 == 0) || (uVar7 = 0xffffff92, *(iVar6 + 0x10) == 0)) {
                uVar7 = 0xffffff92;
                preempt_schedule_notrace();
            }
        }
    } while( true );
}


// ===== sym.gdsc_pm_resume_early @ 0x0800375c (size 16) =====

ulong sym.gdsc_pm_resume_early(int64_t arg1)

{
    return 0;
}


// ===== sym.gdsc_pm_restore_early @ 0x0800376c (size 160) =====

uint64_t sym.gdsc_pm_restore_early(int64_t arg1)

{
    char cVar1;
    bool bVar2;
    int iVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t *arg1_00;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t iVar8;
    ulong uVar9;
    uint64_t uVar10;
    int64_t iVar11;
    ulong unaff_x30;
    uint32_t uStack_140;
    uint uStack_13c;
    int64_t iStack_138;
    uchar **ppuStack_130;
    code *pcStack_128;
    uint uStack_e4;
    uint32_t uStack_e0;
    uint32_t uStack_dc;
    ulong uStack_d8;
    uint64_t *puStack_d0;
    uint64_t uStack_c8;
    char acStack_c0 [8];
    char acStack_b8 [8];
    char acStack_b0 [8];
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_28 = *(iVar8 + 0x5e0);
    iVar8 = *(arg1 + 0x98);
    uStack_2c = 0;
    regmap_read(*(iVar8 + 0x148),0,&uStack_2c);
    if (*(iVar8 + 0x1d7) != '\0') {
        uStack_2c = uStack_2c | 2;
    }
    if (*(iVar8 + 0x1f0) != 0) {
        uStack_2c = uStack_2c & 0xffff0fff | *(iVar8 + 0x1f0);
    }
    uVar5 = regmap_write(*(iVar8 + 0x148),0);
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_28) {
        return uVar5;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18 = sym.gdsc_enable;
    pcStack_58 = sym.gdsc_enable;
    iVar8 = sp_el0;
    iStack_68 = *(iVar8 + 0x5e0);
    puStack_60 = &stack0xffffffffffffffe0;
    arg1_00 = rdev_get_drvdata();
    uVar5 = 0;
    uStack_e4 = 0;
    uStack_e0 = 0;
    if (arg1_00[0x3f] == '\0') {
        if ((*(arg1_00 + 0x1d3) != '\0') || (*(arg1_00 + 0x1d4) != '\0')) {
            uVar9 = *(arg1_00[0x2f] + *(arg1_00 + 0x1e4) * 8);
            iVar3 = clk_prepare(uVar9);
            if ((iVar3 == 0) && (iVar3 = clk_enable(uVar9), iVar3 != 0)) {
                clk_unprepare(uVar9);
            }
            *(arg1_00 + 0x3b) = 1;
        }
        regmap_read(arg1_00[0x29],0,&uStack_e0);
        if ((uStack_e0 >> 1 & 1) == 0) {
            if (arg1_00[0x3a] == '\0') {
                if (0 < arg1_00[0x3c]) {
                    iVar8 = 0;
                    do {
                        reset_control_deassert(*(arg1_00[0x38] + iVar8 * 8));
                        iVar8 = iVar8 + 1;
                    } while (iVar8 < arg1_00[0x3c]);
                }
                *(arg1_00 + 0x1d2) = 0;
            }
            else {
                if (0 < *(arg1_00 + 0x1ec)) {
                    uVar10 = 0;
                    do {
                        uVar4 = icc_set_bw(*(arg1_00[0x39] + uVar10 * 8),1,1);
                        if (uVar4 != 0) {
                            uVar5 = uVar4;
                            _dev_err(iVar6 + 0xe8,"Failed to vote BW for %d, ret=%d\n",uVar10 & 0xffffffff,uVar5);
                            goto code_r0x08003c0c;
                        }
                        uVar10 = uVar10 + 1;
                    } while (uVar10 < *(arg1_00 + 0x1ec));
                }
                if (arg1_00[0x3d] != 0) {
                    if (0 < arg1_00[0x3d]) {
                        iVar8 = 0;
                        do {
                            regmap_update_bits_base(*(arg1_00[0x2c] + iVar8 * 8),0,1,1,0,0,0);
                            iVar8 = iVar8 + 1;
                        } while (iVar8 < arg1_00[0x3d]);
                    }
                    uStack_c8 = uStack_c8 & 0xffffffff00000000;
                    regmap_read(arg1_00[0x29],0,&uStack_c8);
                    __const_udelay(0x10c7);
                    if (0 < arg1_00[0x3d]) {
                        iVar8 = 0;
                        do {
                            regmap_update_bits_base(*(arg1_00[0x2c] + iVar8 * 8),0,1,0,0,0,0);
                            iVar8 = iVar8 + 1;
                        } while (iVar8 < arg1_00[0x3d]);
                    }
                    uStack_c8 = uStack_c8 & 0xffffffff00000000;
                    regmap_read(arg1_00[0x29],0,&uStack_c8);
                }
                iVar8 = arg1_00[0x2a];
                if (iVar8 != 0) {
                    if (*(arg1_00 + 0x1d9) != '\0') {
                        regmap_read(iVar8,0,&uStack_e0);
                        uStack_e0 = uStack_e0 | 0x10;
                        regmap_write(arg1_00[0x2a],0);
                        uStack_c8 = uStack_c8 & 0xffffffff00000000;
                        regmap_read(arg1_00[0x29],0,&uStack_c8);
                        __const_udelay(0x10c7);
                        uStack_e0 = uStack_e0 & 0xffffffef;
                        regmap_write(arg1_00[0x2a],0);
                        uStack_c8 = uStack_c8 & 0xffffffff00000000;
                        regmap_read(arg1_00[0x29],0,&uStack_c8);
                        iVar8 = arg1_00[0x2a];
                    }
                    regmap_read(iVar8,0,&uStack_e0);
                    uStack_e0 = uStack_e0 & 0xfffffffe;
                    regmap_write(arg1_00[0x2a],0);
                    uStack_c8 = uStack_c8 & 0xffffffff00000000;
                    regmap_read(arg1_00[0x29],0,&uStack_c8);
                }
                if (arg1_00[0x37] == 0) {
                    if (arg1_00[0x2d] == 0) {
                        regmap_read(arg1_00[0x29],0,&uStack_e0);
                        uStack_e0 = uStack_e0 & 0xfffffffe;
                        regmap_write(arg1_00[0x29],0);
                    }
                    else {
                        iVar8 = 1L << (*(arg1_00 + 0x2e) & 0x3f);
                        regmap_update_bits_base(arg1_00[0x2d],0,iVar8,~iVar8,0,0,0);
                    }
                }
                else {
                    uStack_78 = 0;
                    uStack_70 = 0;
                    uStack_88 = 0;
                    uStack_80 = 0;
                    uStack_98 = 0;
                    uStack_90 = 0;
                    uStack_a8 = 0;
                    uStack_a0 = 0;
                    uStack_dc = 0;
                    uStack_c8._0_1_ = str.class:_clock__res:_gpu_noc_wa[0];
                    uStack_c8._1_1_ = str.class:_clock__res:_gpu_noc_wa[1];
                    uStack_c8._2_1_ = str.class:_clock__res:_gpu_noc_wa[2];
                    uStack_c8._3_1_ = str.class:_clock__res:_gpu_noc_wa[3];
                    uStack_c8._4_1_ = str.class:_clock__res:_gpu_noc_wa[4];
                    uStack_c8._5_1_ = str.class:_clock__res:_gpu_noc_wa[5];
                    uStack_c8._6_1_ = str.class:_clock__res:_gpu_noc_wa[6];
                    uStack_c8._7_1_ = str.class:_clock__res:_gpu_noc_wa[7];
                    acStack_c0[0] = str.class:_clock__res:_gpu_noc_wa[8];
                    acStack_c0[1] = str.class:_clock__res:_gpu_noc_wa[9];
                    acStack_c0[2] = str.class:_clock__res:_gpu_noc_wa[10];
                    acStack_c0[3] = str.class:_clock__res:_gpu_noc_wa[0xb];
                    acStack_c0[4] = str.class:_clock__res:_gpu_noc_wa[0xc];
                    acStack_c0[5] = str.class:_clock__res:_gpu_noc_wa[0xd];
                    acStack_c0[6] = str.class:_clock__res:_gpu_noc_wa[0xe];
                    acStack_c0[7] = str.class:_clock__res:_gpu_noc_wa[0xf];
                    acStack_b8[0] = str.class:_clock__res:_gpu_noc_wa[0x10];
                    acStack_b8[1] = str.class:_clock__res:_gpu_noc_wa[0x11];
                    acStack_b8[2] = str.class:_clock__res:_gpu_noc_wa[0x12];
                    acStack_b8[3] = str.class:_clock__res:_gpu_noc_wa[0x13];
                    acStack_b8[4] = str.class:_clock__res:_gpu_noc_wa[0x14];
                    acStack_b8[5] = str.class:_clock__res:_gpu_noc_wa[0x15];
                    acStack_b8[6] = str.class:_clock__res:_gpu_noc_wa[0x16];
                    acStack_b8[7] = str.class:_clock__res:_gpu_noc_wa[0x17];
                    acStack_b0[0] = str.class:_clock__res:_gpu_noc_wa[0x18];
                    acStack_b0[1] = str.class:_clock__res:_gpu_noc_wa[0x19];
                    acStack_b0[2] = str.class:_clock__res:_gpu_noc_wa[0x1a];
                    acStack_b0[3] = str.class:_clock__res:_gpu_noc_wa[0x1b];
                    acStack_b0[4] = str.class:_clock__res:_gpu_noc_wa[0x1c];
                    acStack_b0[5] = str.class:_clock__res:_gpu_noc_wa[0x1d];
                    acStack_b0[6] = str.class:_clock__res:_gpu_noc_wa[0x1e];
                    acStack_b0[7] = str.class:_clock__res:_gpu_noc_wa[0x1f];
                    uStack_d8 = 0x60;
                    regmap_read(arg1_00[0x29],0,&uStack_dc);
                    if ((uStack_dc & 1) != 0) {
                        puStack_d0 = &uStack_c8;
                        uVar4 = mbox_send_message(arg1_00[0x37],&uStack_d8);
                        if (uVar4 < 0) {
                            uVar5 = uVar4;
                            _dev_err(*arg1_00 + 0xe8,"qmp message send failed, ret=%d\n",uVar5);
                            goto code_r0x08003c0c;
                        }
                    }
                }
                uStack_c8 = uStack_c8 & 0xffffffff00000000;
                regmap_read(arg1_00[0x29],0,&uStack_c8);
                __const_udelay(0x10c7);
                uVar4 = sym.poll_gdsc_status(arg1_00,1);
                if (uVar4 != 0) {
                    uVar5 = uVar4;
                    regmap_read(arg1_00[0x29],0,&uStack_e0);
                    if (arg1_00[0x2b] == 0) {
                        _dev_err(iVar6 + 0xe8,"%s enable timed out: 0x%x\n",arg1_00[1],uStack_e0);
                        __udelay(*(arg1_00 + 500));
                        regmap_read(arg1_00[0x29],0,&uStack_e0);
                        _dev_err(iVar6 + 0xe8,"%s final state: 0x%x (%d us after timeout)\n",arg1_00[1],uStack_e0,
                                 *(arg1_00 + 500));
                    }
                    else {
                        regmap_read(arg1_00[0x2b],0,&uStack_e4);
                        _dev_warn(iVar6 + 0xe8,"%s state (after %d us timeout): 0x%x, GDS_HW_CTRL: 0x%x. Re-polling.\n"
                                  ,arg1_00[1],*(arg1_00 + 500),uStack_e0,uStack_e4);
                        uVar4 = sym.poll_gdsc_status(arg1_00,1);
                        if (uVar4 == 0) goto code_r0x08003ba4;
                        uVar5 = uVar4;
                        regmap_read(arg1_00[0x29],0,&uStack_e0);
                        regmap_read(arg1_00[0x2b],0,&uStack_e4);
                        _dev_err(iVar6 + 0xe8,
                                 "%s final state (after additional %d us timeout): 0x%x, GDS_HW_CTRL: 0x%x\n",
                                 arg1_00[1],*(arg1_00 + 500),uStack_e0,uStack_e4);
                    }
                    goto code_r0x08003c0c;
                }
code_r0x08003ba4:
                if ((*(arg1_00 + 0x1d1) != '\0') && ((uStack_e0 >> 0xb & 1) == 0)) {
                    uStack_e0 = uStack_e0 | 0x800;
                    regmap_write(arg1_00[0x29],0);
                }
            }
            __const_udelay(0x10c7);
            __const_udelay(0x10c7);
            if (*(arg1_00 + 0x1d4) != '\0') {
                uVar9 = *(arg1_00[0x2f] + *(arg1_00 + 0x1e4) * 8);
                clk_disable(uVar9);
                clk_unprepare(uVar9);
                *(arg1_00 + 0x3b) = 0;
            }
            uVar5 = 0;
            *(arg1_00 + 0x1d6) = 1;
        }
        else {
            _dev_warn(iVar6 + 0xe8,"Invalid enable while %s is under HW control\n",arg1_00[1]);
            uVar5 = 0xfffffff0;
        }
    }
code_r0x08003c0c:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_68) {
        return uVar5;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18_00 = sym.gdsc_disable;
    pcStack_128 = sym.gdsc_disable;
    iVar8 = sp_el0;
    iStack_138 = *(iVar8 + 0x5e0);
    ppuStack_130 = &puStack_60;
    iVar8 = rdev_get_drvdata();
    uStack_140 = 0;
    if (*(iVar6 + 0x480) == 0) {
        iVar11 = 0;
        bVar2 = false;
        cVar1 = *(iVar8 + 0x1d4);
    }
    else {
        iVar11 = *(*(iVar6 + 0x480) + 0x78);
        iVar3 = mutex_trylock(iVar11 + 0x98);
        bVar2 = iVar3 != 0;
        if (*(iVar11 + 0xc) == 0) {
            _dev_err(iVar6 + 0xe8,"%s cannot disable GDSC while parent is disabled\n",*(iVar8 + 8));
            uVar4 = 0xfffffffb;
            iVar8 = *(iVar6 + 0x480);
            goto joined_r0x08003fcc;
        }
        cVar1 = *(iVar8 + 0x1d4);
    }
    if (cVar1 != '\0') {
        uVar9 = *(*(iVar8 + 0x178) + *(iVar8 + 0x1e4) * 8);
        iVar3 = clk_prepare(uVar9);
        if ((iVar3 == 0) && (iVar3 = clk_enable(uVar9), iVar3 != 0)) {
            clk_unprepare(uVar9);
        }
        *(iVar8 + 0x1d8) = 1;
    }
    __const_udelay(0x10c7);
    if ((*(iVar8 + 0x1f9) == '\0') || (*(iVar8 + 0x1fa) != '\0')) {
        if (*(iVar8 + 0x1d0) == '\0') {
            uVar4 = *(iVar8 + 0x1e0) - 1;
            if (-1 < uVar4) {
                iVar7 = uVar4 << 3;
                do {
                    reset_control_assert(*(*(iVar8 + 0x1c0) + iVar7));
                    iVar7 = iVar7 + -8;
                } while (iVar7 != -8);
            }
            uVar4 = 0;
            *(iVar8 + 0x1d2) = 1;
        }
        else {
            if (*(iVar8 + 0x168) == 0) {
                regmap_read(*(iVar8 + 0x148),0,&uStack_140);
                uStack_140 = uStack_140 | 1;
                regmap_write(*(iVar8 + 0x148),0);
            }
            else {
                uVar5 = 1L << (*(iVar8 + 0x170) & 0x3f);
                regmap_update_bits_base(*(iVar8 + 0x168),0,uVar5,uVar5 & 0xffffffff,0,0,0);
            }
            uStack_13c = 0;
            regmap_read(*(iVar8 + 0x148),0,&uStack_13c);
            __const_udelay(0x10c7);
            if (*(iVar8 + 0x1d5) == '\0') {
                uVar4 = sym.poll_gdsc_status(iVar8,0);
                if (uVar4 == 0) {
                    iVar7 = *(iVar8 + 0x150);
                    uVar4 = 0;
                }
                else {
                    regmap_read(*(iVar8 + 0x148),0,&uStack_140);
                    _dev_err(iVar6 + 0xe8,"%s disable timed out: 0x%x\n",*(iVar8 + 8),uStack_140);
                    iVar7 = *(iVar8 + 0x150);
                }
            }
            else {
                __const_udelay(0x68dbc);
                uVar4 = 0;
                iVar7 = *(iVar8 + 0x150);
            }
            if (iVar7 != 0) {
                regmap_read(iVar7,0,&uStack_140);
                uStack_140 = uStack_140 | 1;
                regmap_write(*(iVar8 + 0x150),0);
            }
            if (0 < *(iVar8 + 0x1ec)) {
                uVar5 = 0;
                do {
                    uVar4 = icc_set_bw(*(*(iVar8 + 0x1c8) + uVar5 * 8),0,0);
                    if (uVar4 != 0) {
                        _dev_err(iVar6 + 0xe8,"Failed to unvote BW for %d: %d\n",uVar5 & 0xffffffff,uVar4);
                        goto code_r0x08003fdc;
                    }
                    uVar5 = uVar5 + 1;
                } while (uVar5 < *(iVar8 + 0x1ec));
                goto code_r0x08003f88;
            }
        }
    }
    else {
code_r0x08003f88:
        uVar4 = 0;
    }
    if (((*(iVar8 + 0x1d8) != '\0') && (*(iVar8 + 0x1d3) != '\0')) || (*(iVar8 + 0x1d4) != '\0')) {
        uVar9 = *(*(iVar8 + 0x178) + *(iVar8 + 0x1e4) * 8);
        clk_disable(uVar9);
        clk_unprepare(uVar9);
        *(iVar8 + 0x1d8) = 0;
    }
    *(iVar8 + 0x1d6) = 0;
    iVar8 = *(iVar6 + 0x480);
joined_r0x08003fcc:
    if ((iVar8 != 0) && (bVar2)) {
        ww_mutex_unlock(iVar11 + 0x98);
    }
code_r0x08003fdc:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_138) {
        return uVar4;
    }
    __stack_chk_fail();
    *extraout_x18_01 = sym.gdsc_is_enabled;
    iVar8 = rdev_get_drvdata();
    if (*(iVar8 + 0x1f9) == '\0') {
        if (*(iVar8 + 0x1d0) == '\0') {
            return *(iVar8 + 0x1d2) ^ 1;
        }
        if (*(iVar8 + 0x1f8) != '\0') {
            return 0;
        }
    }
    return *(iVar8 + 0x1d6);
}


// ===== sym.gdsc_enable @ 0x0800380c (size 1380) =====

uint32_t sym.gdsc_enable(int64_t arg1)

{
    char cVar1;
    bool bVar2;
    int iVar3;
    uint32_t uVar4;
    int64_t *arg1_00;
    int64_t iVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    int64_t iVar10;
    ulong unaff_x30;
    uint32_t uStack_110;
    uint uStack_10c;
    int64_t iStack_108;
    uchar *puStack_100;
    code *pcStack_f8;
    uint uStack_b4;
    uint32_t uStack_b0;
    uint32_t uStack_ac;
    ulong uStack_a8;
    uint64_t *puStack_a0;
    uint64_t uStack_98;
    char acStack_90 [8];
    char acStack_88 [8];
    char acStack_80 [8];
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_38 = *(iVar8 + 0x5e0);
    arg1_00 = rdev_get_drvdata();
    uVar4 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    if (arg1_00[0x3f] == '\0') {
        if ((*(arg1_00 + 0x1d3) != '\0') || (*(arg1_00 + 0x1d4) != '\0')) {
            uVar7 = *(arg1_00[0x2f] + *(arg1_00 + 0x1e4) * 8);
            iVar3 = clk_prepare(uVar7);
            if ((iVar3 == 0) && (iVar3 = clk_enable(uVar7), iVar3 != 0)) {
                clk_unprepare(uVar7);
            }
            *(arg1_00 + 0x3b) = 1;
        }
        regmap_read(arg1_00[0x29],0,&uStack_b0);
        if ((uStack_b0 >> 1 & 1) == 0) {
            if (arg1_00[0x3a] == '\0') {
                if (0 < arg1_00[0x3c]) {
                    iVar8 = 0;
                    do {
                        reset_control_deassert(*(arg1_00[0x38] + iVar8 * 8));
                        iVar8 = iVar8 + 1;
                    } while (iVar8 < arg1_00[0x3c]);
                }
                *(arg1_00 + 0x1d2) = 0;
            }
            else {
                if (0 < *(arg1_00 + 0x1ec)) {
                    uVar9 = 0;
                    do {
                        uVar4 = icc_set_bw(*(arg1_00[0x39] + uVar9 * 8),1,1);
                        if (uVar4 != 0) {
                            _dev_err(arg1 + 0xe8,"Failed to vote BW for %d, ret=%d\n",uVar9 & 0xffffffff,uVar4);
                            goto code_r0x08003c0c;
                        }
                        uVar9 = uVar9 + 1;
                    } while (uVar9 < *(arg1_00 + 0x1ec));
                }
                if (arg1_00[0x3d] != 0) {
                    if (0 < arg1_00[0x3d]) {
                        iVar8 = 0;
                        do {
                            regmap_update_bits_base(*(arg1_00[0x2c] + iVar8 * 8),0,1,1,0,0,0);
                            iVar8 = iVar8 + 1;
                        } while (iVar8 < arg1_00[0x3d]);
                    }
                    uStack_98 = uStack_98 & 0xffffffff00000000;
                    regmap_read(arg1_00[0x29],0,&uStack_98);
                    __const_udelay(0x10c7);
                    if (0 < arg1_00[0x3d]) {
                        iVar8 = 0;
                        do {
                            regmap_update_bits_base(*(arg1_00[0x2c] + iVar8 * 8),0,1,0,0,0,0);
                            iVar8 = iVar8 + 1;
                        } while (iVar8 < arg1_00[0x3d]);
                    }
                    uStack_98 = uStack_98 & 0xffffffff00000000;
                    regmap_read(arg1_00[0x29],0,&uStack_98);
                }
                iVar8 = arg1_00[0x2a];
                if (iVar8 != 0) {
                    if (*(arg1_00 + 0x1d9) != '\0') {
                        regmap_read(iVar8,0,&uStack_b0);
                        uStack_b0 = uStack_b0 | 0x10;
                        regmap_write(arg1_00[0x2a],0);
                        uStack_98 = uStack_98 & 0xffffffff00000000;
                        regmap_read(arg1_00[0x29],0,&uStack_98);
                        __const_udelay(0x10c7);
                        uStack_b0 = uStack_b0 & 0xffffffef;
                        regmap_write(arg1_00[0x2a],0);
                        uStack_98 = uStack_98 & 0xffffffff00000000;
                        regmap_read(arg1_00[0x29],0,&uStack_98);
                        iVar8 = arg1_00[0x2a];
                    }
                    regmap_read(iVar8,0,&uStack_b0);
                    uStack_b0 = uStack_b0 & 0xfffffffe;
                    regmap_write(arg1_00[0x2a],0);
                    uStack_98 = uStack_98 & 0xffffffff00000000;
                    regmap_read(arg1_00[0x29],0,&uStack_98);
                }
                if (arg1_00[0x37] == 0) {
                    if (arg1_00[0x2d] == 0) {
                        regmap_read(arg1_00[0x29],0,&uStack_b0);
                        uStack_b0 = uStack_b0 & 0xfffffffe;
                        regmap_write(arg1_00[0x29],0);
                    }
                    else {
                        iVar8 = 1L << (*(arg1_00 + 0x2e) & 0x3f);
                        regmap_update_bits_base(arg1_00[0x2d],0,iVar8,~iVar8,0,0,0);
                    }
                }
                else {
                    uStack_48 = 0;
                    uStack_40 = 0;
                    uStack_58 = 0;
                    uStack_50 = 0;
                    uStack_68 = 0;
                    uStack_60 = 0;
                    uStack_78 = 0;
                    uStack_70 = 0;
                    uStack_ac = 0;
                    uStack_98._0_1_ = str.class:_clock__res:_gpu_noc_wa[0];
                    uStack_98._1_1_ = str.class:_clock__res:_gpu_noc_wa[1];
                    uStack_98._2_1_ = str.class:_clock__res:_gpu_noc_wa[2];
                    uStack_98._3_1_ = str.class:_clock__res:_gpu_noc_wa[3];
                    uStack_98._4_1_ = str.class:_clock__res:_gpu_noc_wa[4];
                    uStack_98._5_1_ = str.class:_clock__res:_gpu_noc_wa[5];
                    uStack_98._6_1_ = str.class:_clock__res:_gpu_noc_wa[6];
                    uStack_98._7_1_ = str.class:_clock__res:_gpu_noc_wa[7];
                    acStack_90[0] = str.class:_clock__res:_gpu_noc_wa[8];
                    acStack_90[1] = str.class:_clock__res:_gpu_noc_wa[9];
                    acStack_90[2] = str.class:_clock__res:_gpu_noc_wa[10];
                    acStack_90[3] = str.class:_clock__res:_gpu_noc_wa[0xb];
                    acStack_90[4] = str.class:_clock__res:_gpu_noc_wa[0xc];
                    acStack_90[5] = str.class:_clock__res:_gpu_noc_wa[0xd];
                    acStack_90[6] = str.class:_clock__res:_gpu_noc_wa[0xe];
                    acStack_90[7] = str.class:_clock__res:_gpu_noc_wa[0xf];
                    acStack_88[0] = str.class:_clock__res:_gpu_noc_wa[0x10];
                    acStack_88[1] = str.class:_clock__res:_gpu_noc_wa[0x11];
                    acStack_88[2] = str.class:_clock__res:_gpu_noc_wa[0x12];
                    acStack_88[3] = str.class:_clock__res:_gpu_noc_wa[0x13];
                    acStack_88[4] = str.class:_clock__res:_gpu_noc_wa[0x14];
                    acStack_88[5] = str.class:_clock__res:_gpu_noc_wa[0x15];
                    acStack_88[6] = str.class:_clock__res:_gpu_noc_wa[0x16];
                    acStack_88[7] = str.class:_clock__res:_gpu_noc_wa[0x17];
                    acStack_80[0] = str.class:_clock__res:_gpu_noc_wa[0x18];
                    acStack_80[1] = str.class:_clock__res:_gpu_noc_wa[0x19];
                    acStack_80[2] = str.class:_clock__res:_gpu_noc_wa[0x1a];
                    acStack_80[3] = str.class:_clock__res:_gpu_noc_wa[0x1b];
                    acStack_80[4] = str.class:_clock__res:_gpu_noc_wa[0x1c];
                    acStack_80[5] = str.class:_clock__res:_gpu_noc_wa[0x1d];
                    acStack_80[6] = str.class:_clock__res:_gpu_noc_wa[0x1e];
                    acStack_80[7] = str.class:_clock__res:_gpu_noc_wa[0x1f];
                    uStack_a8 = 0x60;
                    regmap_read(arg1_00[0x29],0,&uStack_ac);
                    if ((uStack_ac & 1) != 0) {
                        puStack_a0 = &uStack_98;
                        uVar4 = mbox_send_message(arg1_00[0x37],&uStack_a8);
                        if (uVar4 < 0) {
                            _dev_err(*arg1_00 + 0xe8,"qmp message send failed, ret=%d\n",uVar4);
                            goto code_r0x08003c0c;
                        }
                    }
                }
                uStack_98 = uStack_98 & 0xffffffff00000000;
                regmap_read(arg1_00[0x29],0,&uStack_98);
                __const_udelay(0x10c7);
                uVar4 = sym.poll_gdsc_status(arg1_00,1);
                if (uVar4 != 0) {
                    regmap_read(arg1_00[0x29],0,&uStack_b0);
                    if (arg1_00[0x2b] == 0) {
                        _dev_err(arg1 + 0xe8,"%s enable timed out: 0x%x\n",arg1_00[1],uStack_b0);
                        __udelay(*(arg1_00 + 500));
                        regmap_read(arg1_00[0x29],0,&uStack_b0);
                        _dev_err(arg1 + 0xe8,"%s final state: 0x%x (%d us after timeout)\n",arg1_00[1],uStack_b0,
                                 *(arg1_00 + 500));
                    }
                    else {
                        regmap_read(arg1_00[0x2b],0,&uStack_b4);
                        _dev_warn(arg1 + 0xe8,"%s state (after %d us timeout): 0x%x, GDS_HW_CTRL: 0x%x. Re-polling.\n"
                                  ,arg1_00[1],*(arg1_00 + 500),uStack_b0,uStack_b4);
                        uVar4 = sym.poll_gdsc_status(arg1_00,1);
                        if (uVar4 == 0) goto code_r0x08003ba4;
                        regmap_read(arg1_00[0x29],0,&uStack_b0);
                        regmap_read(arg1_00[0x2b],0,&uStack_b4);
                        _dev_err(arg1 + 0xe8,
                                 "%s final state (after additional %d us timeout): 0x%x, GDS_HW_CTRL: 0x%x\n",
                                 arg1_00[1],*(arg1_00 + 500),uStack_b0,uStack_b4);
                    }
                    goto code_r0x08003c0c;
                }
code_r0x08003ba4:
                if ((*(arg1_00 + 0x1d1) != '\0') && ((uStack_b0 >> 0xb & 1) == 0)) {
                    uStack_b0 = uStack_b0 | 0x800;
                    regmap_write(arg1_00[0x29],0);
                }
            }
            __const_udelay(0x10c7);
            __const_udelay(0x10c7);
            if (*(arg1_00 + 0x1d4) != '\0') {
                uVar7 = *(arg1_00[0x2f] + *(arg1_00 + 0x1e4) * 8);
                clk_disable(uVar7);
                clk_unprepare(uVar7);
                *(arg1_00 + 0x3b) = 0;
            }
            uVar4 = 0;
            *(arg1_00 + 0x1d6) = 1;
        }
        else {
            _dev_warn(arg1 + 0xe8,"Invalid enable while %s is under HW control\n",arg1_00[1]);
            uVar4 = 0xfffffff0;
        }
    }
code_r0x08003c0c:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_38) {
        return uVar4;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18 = sym.gdsc_disable;
    pcStack_f8 = sym.gdsc_disable;
    iVar8 = sp_el0;
    iStack_108 = *(iVar8 + 0x5e0);
    puStack_100 = &stack0xffffffffffffffd0;
    iVar8 = rdev_get_drvdata();
    uStack_110 = 0;
    if (*(iVar5 + 0x480) == 0) {
        iVar10 = 0;
        bVar2 = false;
        cVar1 = *(iVar8 + 0x1d4);
    }
    else {
        iVar10 = *(*(iVar5 + 0x480) + 0x78);
        iVar3 = mutex_trylock(iVar10 + 0x98);
        bVar2 = iVar3 != 0;
        if (*(iVar10 + 0xc) == 0) {
            _dev_err(iVar5 + 0xe8,"%s cannot disable GDSC while parent is disabled\n",*(iVar8 + 8));
            uVar4 = 0xfffffffb;
            iVar8 = *(iVar5 + 0x480);
            goto joined_r0x08003fcc;
        }
        cVar1 = *(iVar8 + 0x1d4);
    }
    if (cVar1 != '\0') {
        uVar7 = *(*(iVar8 + 0x178) + *(iVar8 + 0x1e4) * 8);
        iVar3 = clk_prepare(uVar7);
        if ((iVar3 == 0) && (iVar3 = clk_enable(uVar7), iVar3 != 0)) {
            clk_unprepare(uVar7);
        }
        *(iVar8 + 0x1d8) = 1;
    }
    __const_udelay(0x10c7);
    if ((*(iVar8 + 0x1f9) == '\0') || (*(iVar8 + 0x1fa) != '\0')) {
        if (*(iVar8 + 0x1d0) == '\0') {
            uVar4 = *(iVar8 + 0x1e0) - 1;
            if (-1 < uVar4) {
                iVar6 = uVar4 << 3;
                do {
                    reset_control_assert(*(*(iVar8 + 0x1c0) + iVar6));
                    iVar6 = iVar6 + -8;
                } while (iVar6 != -8);
            }
            uVar4 = 0;
            *(iVar8 + 0x1d2) = 1;
        }
        else {
            if (*(iVar8 + 0x168) == 0) {
                regmap_read(*(iVar8 + 0x148),0,&uStack_110);
                uStack_110 = uStack_110 | 1;
                regmap_write(*(iVar8 + 0x148),0);
            }
            else {
                uVar9 = 1L << (*(iVar8 + 0x170) & 0x3f);
                regmap_update_bits_base(*(iVar8 + 0x168),0,uVar9,uVar9 & 0xffffffff,0,0,0);
            }
            uStack_10c = 0;
            regmap_read(*(iVar8 + 0x148),0,&uStack_10c);
            __const_udelay(0x10c7);
            if (*(iVar8 + 0x1d5) == '\0') {
                uVar4 = sym.poll_gdsc_status(iVar8,0);
                if (uVar4 == 0) {
                    iVar6 = *(iVar8 + 0x150);
                    uVar4 = 0;
                }
                else {
                    regmap_read(*(iVar8 + 0x148),0,&uStack_110);
                    _dev_err(iVar5 + 0xe8,"%s disable timed out: 0x%x\n",*(iVar8 + 8),uStack_110);
                    iVar6 = *(iVar8 + 0x150);
                }
            }
            else {
                __const_udelay(0x68dbc);
                uVar4 = 0;
                iVar6 = *(iVar8 + 0x150);
            }
            if (iVar6 != 0) {
                regmap_read(iVar6,0,&uStack_110);
                uStack_110 = uStack_110 | 1;
                regmap_write(*(iVar8 + 0x150),0);
            }
            if (0 < *(iVar8 + 0x1ec)) {
                uVar9 = 0;
                do {
                    uVar4 = icc_set_bw(*(*(iVar8 + 0x1c8) + uVar9 * 8),0,0);
                    if (uVar4 != 0) {
                        _dev_err(iVar5 + 0xe8,"Failed to unvote BW for %d: %d\n",uVar9 & 0xffffffff,uVar4);
                        goto code_r0x08003fdc;
                    }
                    uVar9 = uVar9 + 1;
                } while (uVar9 < *(iVar8 + 0x1ec));
                goto code_r0x08003f88;
            }
        }
    }
    else {
code_r0x08003f88:
        uVar4 = 0;
    }
    if (((*(iVar8 + 0x1d8) != '\0') && (*(iVar8 + 0x1d3) != '\0')) || (*(iVar8 + 0x1d4) != '\0')) {
        uVar7 = *(*(iVar8 + 0x178) + *(iVar8 + 0x1e4) * 8);
        clk_disable(uVar7);
        clk_unprepare(uVar7);
        *(iVar8 + 0x1d8) = 0;
    }
    *(iVar8 + 0x1d6) = 0;
    iVar8 = *(iVar5 + 0x480);
joined_r0x08003fcc:
    if ((iVar8 != 0) && (bVar2)) {
        ww_mutex_unlock(iVar10 + 0x98);
    }
code_r0x08003fdc:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_108) {
        return uVar4;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.gdsc_is_enabled;
    iVar8 = rdev_get_drvdata();
    if (*(iVar8 + 0x1f9) == '\0') {
        if (*(iVar8 + 0x1d0) == '\0') {
            return *(iVar8 + 0x1d2) ^ 1;
        }
        if (*(iVar8 + 0x1f8) != '\0') {
            return 0;
        }
    }
    return *(iVar8 + 0x1d6);
}


// ===== sym.gdsc_disable @ 0x08003d70 (size 808) =====

uint32_t sym.gdsc_disable(int64_t arg1)

{
    char cVar1;
    bool bVar2;
    int iVar3;
    uint32_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar8;
    int64_t iVar9;
    ulong unaff_x30;
    uint32_t uStack_50;
    uint uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    iVar5 = rdev_get_drvdata();
    uStack_50 = 0;
    if (*(arg1 + 0x480) == 0) {
        iVar9 = 0;
        bVar2 = false;
        cVar1 = *(iVar5 + 0x1d4);
    }
    else {
        iVar9 = *(*(arg1 + 0x480) + 0x78);
        iVar3 = mutex_trylock(iVar9 + 0x98);
        bVar2 = iVar3 != 0;
        if (*(iVar9 + 0xc) == 0) {
            _dev_err(arg1 + 0xe8,"%s cannot disable GDSC while parent is disabled\n",*(iVar5 + 8));
            uVar4 = 0xfffffffb;
            iVar5 = *(arg1 + 0x480);
            goto joined_r0x08003fcc;
        }
        cVar1 = *(iVar5 + 0x1d4);
    }
    if (cVar1 != '\0') {
        uVar8 = *(*(iVar5 + 0x178) + *(iVar5 + 0x1e4) * 8);
        iVar3 = clk_prepare(uVar8);
        if ((iVar3 == 0) && (iVar3 = clk_enable(uVar8), iVar3 != 0)) {
            clk_unprepare(uVar8);
        }
        *(iVar5 + 0x1d8) = 1;
    }
    __const_udelay(0x10c7);
    if ((*(iVar5 + 0x1f9) == '\0') || (*(iVar5 + 0x1fa) != '\0')) {
        if (*(iVar5 + 0x1d0) == '\0') {
            uVar4 = *(iVar5 + 0x1e0) - 1;
            if (-1 < uVar4) {
                iVar6 = uVar4 << 3;
                do {
                    reset_control_assert(*(*(iVar5 + 0x1c0) + iVar6));
                    iVar6 = iVar6 + -8;
                } while (iVar6 != -8);
            }
            uVar4 = 0;
            *(iVar5 + 0x1d2) = 1;
        }
        else {
            if (*(iVar5 + 0x168) == 0) {
                regmap_read(*(iVar5 + 0x148),0,&uStack_50);
                uStack_50 = uStack_50 | 1;
                regmap_write(*(iVar5 + 0x148),0);
            }
            else {
                uVar7 = 1L << (*(iVar5 + 0x170) & 0x3f);
                regmap_update_bits_base(*(iVar5 + 0x168),0,uVar7,uVar7 & 0xffffffff,0,0,0);
            }
            uStack_4c = 0;
            regmap_read(*(iVar5 + 0x148),0,&uStack_4c);
            __const_udelay(0x10c7);
            if (*(iVar5 + 0x1d5) == '\0') {
                uVar4 = sym.poll_gdsc_status(iVar5,0);
                if (uVar4 == 0) {
                    iVar6 = *(iVar5 + 0x150);
                    uVar4 = 0;
                }
                else {
                    regmap_read(*(iVar5 + 0x148),0,&uStack_50);
                    _dev_err(arg1 + 0xe8,"%s disable timed out: 0x%x\n",*(iVar5 + 8),uStack_50);
                    iVar6 = *(iVar5 + 0x150);
                }
            }
            else {
                __const_udelay(0x68dbc);
                uVar4 = 0;
                iVar6 = *(iVar5 + 0x150);
            }
            if (iVar6 != 0) {
                regmap_read(iVar6,0,&uStack_50);
                uStack_50 = uStack_50 | 1;
                regmap_write(*(iVar5 + 0x150),0);
            }
            if (0 < *(iVar5 + 0x1ec)) {
                uVar7 = 0;
                do {
                    uVar4 = icc_set_bw(*(*(iVar5 + 0x1c8) + uVar7 * 8),0,0);
                    if (uVar4 != 0) {
                        _dev_err(arg1 + 0xe8,"Failed to unvote BW for %d: %d\n",uVar7 & 0xffffffff,uVar4);
                        goto code_r0x08003fdc;
                    }
                    uVar7 = uVar7 + 1;
                } while (uVar7 < *(iVar5 + 0x1ec));
                goto code_r0x08003f88;
            }
        }
    }
    else {
code_r0x08003f88:
        uVar4 = 0;
    }
    if (((*(iVar5 + 0x1d8) != '\0') && (*(iVar5 + 0x1d3) != '\0')) || (*(iVar5 + 0x1d4) != '\0')) {
        uVar8 = *(*(iVar5 + 0x178) + *(iVar5 + 0x1e4) * 8);
        clk_disable(uVar8);
        clk_unprepare(uVar8);
        *(iVar5 + 0x1d8) = 0;
    }
    *(iVar5 + 0x1d6) = 0;
    iVar5 = *(arg1 + 0x480);
joined_r0x08003fcc:
    if ((iVar5 != 0) && (bVar2)) {
        ww_mutex_unlock(iVar9 + 0x98);
    }
code_r0x08003fdc:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return uVar4;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.gdsc_is_enabled;
    iVar5 = rdev_get_drvdata();
    if (*(iVar5 + 0x1f9) == '\0') {
        if (*(iVar5 + 0x1d0) == '\0') {
            return *(iVar5 + 0x1d2) ^ 1;
        }
        if (*(iVar5 + 0x1f8) != '\0') {
            return 0;
        }
    }
    return *(iVar5 + 0x1d6);
}


// ===== sym.gdsc_is_enabled @ 0x08004098 (size 88) =====

uint8_t sym.gdsc_is_enabled(void)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = rdev_get_drvdata();
    if (*(iVar1 + 0x1f9) == '\0') {
        if (*(iVar1 + 0x1d0) == '\0') {
            return *(iVar1 + 0x1d2) ^ 1;
        }
        if (*(iVar1 + 0x1f8) != '\0') {
            return 0;
        }
    }
    return *(iVar1 + 0x1d6);
}


// ===== sym.gdsc_set_mode @ 0x080040f0 (size 544) =====

int sym.gdsc_set_mode(int64_t arg1,int64_t arg2)

{
    bool bVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    int iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_50;
    uint uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iVar5 = arg2;
    iStack_48 = *(iVar3 + 0x5e0);
    iVar3 = rdev_get_drvdata();
    uStack_50 = 0;
    if (*(iVar3 + 0x1f9) != '\0') {
        if (iVar5 == 2) {
            iVar2 = 0;
            *(iVar3 + 0x1fa) = 0;
        }
        else if (iVar5 == 4) {
            iVar2 = 0;
            *(iVar3 + 0x1fa) = 1;
        }
        else {
            iVar2 = -0x16;
        }
        goto code_r0x080042b4;
    }
    if (*(arg1 + 0x480) == 0) {
        iVar4 = 0;
code_r0x080041b4:
        iVar2 = regmap_read(*(iVar3 + 0x148),0,&uStack_50);
        if (iVar2 < 0) {
            iVar3 = *(arg1 + 0x480);
        }
        else {
            if (iVar5 == 2) {
                uStack_50 = uStack_50 & 0xfffffffd;
                iVar2 = regmap_write(*(iVar3 + 0x148),0);
                if (-1 < iVar2) {
                    uStack_4c = 0;
                    regmap_read(*(iVar3 + 0x148),0,&uStack_4c);
                    __const_udelay(0x10c7);
                    if ((*(iVar3 + 0x1d6) == '\0') || (iVar2 = sym.poll_gdsc_status(iVar3,1), iVar2 == 0)) {
                        *(iVar3 + 0x1d7) = 0;
                        iVar3 = *(arg1 + 0x480);
                    }
                    else {
                        _dev_err(arg1 + 0xe8,"%s enable timed out\n",*(iVar3 + 8));
                        iVar3 = *(arg1 + 0x480);
                    }
                    goto joined_r0x08004304;
                }
            }
            else if (iVar5 == 1) {
                uStack_50 = uStack_50 | 2;
                iVar2 = regmap_write(*(iVar3 + 0x148),0);
                if (-1 < iVar2) {
                    uStack_4c = 0;
                    regmap_read(*(iVar3 + 0x148),0,&uStack_4c);
                    __const_udelay(0x10c7);
                    *(iVar3 + 0x1d7) = 1;
                    iVar3 = *(arg1 + 0x480);
                    goto joined_r0x08004304;
                }
            }
            else {
                iVar2 = -0x16;
            }
            iVar3 = *(arg1 + 0x480);
        }
    }
    else {
        iVar4 = *(*(arg1 + 0x480) + 0x78);
        ww_mutex_lock(iVar4 + 0x98,0);
        if (*(iVar4 + 0xc) != 0) goto code_r0x080041b4;
        _dev_err(arg1 + 0xe8,"%s cannot change GDSC HW/SW control mode while parent is disabled\n",*(iVar3 + 8));
        iVar2 = -5;
        iVar3 = *(arg1 + 0x480);
    }
joined_r0x08004304:
    if (iVar3 != 0) {
        ww_mutex_unlock(iVar4 + 0x98);
    }
code_r0x080042b4:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_48) {
        __stack_chk_fail();
        *extraout_x18 = sym.gdsc_get_mode;
        iVar4 = rdev_get_drvdata();
        bVar1 = *(iVar4 + 0x1f9) != '\0';
        iVar3 = 0x1d7;
        if (bVar1) {
            iVar3 = 0x1fa;
        }
        iVar5 = 4;
        if (!bVar1) {
            iVar5 = 1;
        }
        iVar2 = 2;
        if (*(iVar4 + iVar3) != '\0') {
            iVar2 = iVar5;
        }
        return iVar2;
    }
    return iVar2;
}


// ===== sym.gdsc_get_mode @ 0x08004310 (size 80) =====

uint sym.gdsc_get_mode(void)

{
    uint uVar1;
    int64_t iVar2;
    bool bVar3;
    int64_t iVar4;
    uint uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = rdev_get_drvdata();
    bVar3 = *(iVar4 + 0x1f9) != '\0';
    iVar2 = 0x1d7;
    if (bVar3) {
        iVar2 = 0x1fa;
    }
    uVar5 = 4;
    if (!bVar3) {
        uVar5 = 1;
    }
    uVar1 = 2;
    if (*(iVar4 + iVar2) != '\0') {
        uVar1 = uVar5;
    }
    return uVar1;
}


// ===== sym.__cfi_check_fail @ 0x08004360 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080043a4

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
    //switch table (4 cases) at 0x8000538
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80043b8);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080043e0 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.gdsc_probe.29badac91dd5595ca811e10faabbdec0.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08004414 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.gdsc_probe.29badac91dd5595ca811e10faabbdec0.cfi_jt);
    return;
}

