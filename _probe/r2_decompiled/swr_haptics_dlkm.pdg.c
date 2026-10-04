// decompiled from swr_haptics_dlkm by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 540) =====

//WARNING: Switch with 1 destination removed at 0x08003394

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 < -0x49739d0000a0fe53) {
            if (arg1 != -0x749213c658cf941a) {
                if ((arg1 == -0x57be845bca9148ef) && ((pcVar1 + -0x8002290 >> 3 | pcVar1 << 0x3d) < 2)) {
                    return;
                }
                goto code_r0x08003354;
            }
            pcVar2 = sym.snd_soc_info_volsw.cfi_jt;
        }
        else if (arg1 == -0x49739d0000a0fe53) {
            pcVar2 = sym.hap_enable_swr_dac_port.1979f192ba4a223d303c434a5991f2aa.cfi_jt;
        }
        else {
            if (arg1 == -0x440ca8bece010a7b) {
                pcVar2 = sym.swr_haptics_probe.1979f192ba4a223d303c434a5991f2aa.cfi_jt;
                goto code_r0x080021d8;
            }
            if (arg1 != -0xf2d15659b6de7a9) goto code_r0x08003354;
            pcVar2 = sym.haptics_comp_probe.1979f192ba4a223d303c434a5991f2aa.cfi_jt;
        }
    }
    else if (arg1 < 0x7d57972cd3914fb1) {
        if (arg1 != 0x2b3a43e29242445) {
            if (arg1 == 0x6be91529ddea3c2) {
                if ((pcVar1 + -0x8002248 >> 3 | pcVar1 << 0x3d) < 3) {
                    return;
                }
                goto code_r0x08003354;
            }
            if (arg1 != 0x2882621ee1337d31) goto code_r0x08003354;
            pcVar2 = sym.haptics_vmax_put.1979f192ba4a223d303c434a5991f2aa.cfi_jt;
code_r0x080021d8:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 4) {
                return;
            }
            goto code_r0x08003354;
        }
        pcVar2 = sym.init_module.cfi_jt;
    }
    else if (arg1 == 0x7d57972cd3914fb1) {
        pcVar2 = sym.hboost_notifier.1979f192ba4a223d303c434a5991f2aa.cfi_jt;
    }
    else if (arg1 == 0x7e04a0fb7ad8bcd5) {
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    else {
        if (arg1 != 0x7e6c99e1529760f9) goto code_r0x08003354;
        pcVar2 = sym.haptics_comp_remove.1979f192ba4a223d303c434a5991f2aa.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08003354:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80033a8);
    (*pcVar1)();
}


// ===== sym.haptics_comp_probe.1979f192ba4a223d303c434a5991f2aa.cfi_jt @ 0x08002228 (size 8) =====

ulong sym.haptics_comp_probe.1979f192ba4a223d303c434a5991f2aa.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(param_1 + 0x18) + 0x98);
    if (iVar2 == 0) {
        _printk(0x8000ad6,"haptics_comp_probe");
        uVar1 = 0xffffffea;
    }
    else {
        snd_soc_component_init_regmap(param_1,*(iVar2 + 0x18));
        iVar2 = param_1 + 0xd0;
        if ((iVar2 != 0) && (*(param_1 + 0xe0) != 0)) {
            snd_soc_dapm_ignore_suspend(iVar2,"HAP_IN");
            snd_soc_dapm_ignore_suspend(iVar2,"HAP_OUT");
        }
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08002230 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    swr_driver_unregister(reloc.swr_haptics_probe.1979f192ba4a223d303c434a5991f2aa.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08002238 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    swr_driver_register(reloc.swr_haptics_probe.1979f192ba4a223d303c434a5991f2aa.cfi_jt);
    return;
}


// ===== sym.hap_enable_swr_dac_port.1979f192ba4a223d303c434a5991f2aa.cfi_jt @ 0x08002240 (size 8) =====

int sym.hap_enable_swr_dac_port.1979f192ba4a223d303c434a5991f2aa.cfi_jt(int64_t param_1,ulong param_2,uint param_3)

{
    char cVar1;
    uint8_t uVar2;
    int64_t iVar3;
    int iVar4;
    int iVar5;
    ulong uVar6;
    char *pcVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar8;
    ulong unaff_x30;
    uint uStack_40;
    uint uStack_3c;
    uchar auStack_38 [4];
    uchar auStack_34 [4];
    uchar auStack_30 [4];
    uchar auStack_2c [4];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    auStack_2c[0] = 0;
    auStack_30[0] = 0;
    auStack_38[0] = 0;
    uStack_40 = 0;
    if (*(param_1 + 0x28) == 0xd0) {
        _printk(0x8000959,"hap_enable_swr_dac_port");
        iVar4 = -0x16;
        goto code_r0x08003090;
    }
    puVar8 = *(*(*(param_1 + 0x28) + -0xb8) + 0x98);
    if (puVar8 == NULL) {
        _printk(0x8000ad6,"hap_enable_swr_dac_port");
        iVar4 = -0x13;
        goto code_r0x08003090;
    }
    auStack_2c[0] = *(puVar8 + 4);
    iVar4 = 0;
    auStack_30[0] = *(puVar8 + 0x21);
    uStack_3c = *(puVar8 + 0x24);
    auStack_34[0] = *(puVar8 + 5);
    auStack_38[0] = *(puVar8 + 0x29);
    switch(param_3) {
    case 1:
        if (((*(puVar8 + 0x61) & 1) != 0) && (*(puVar8 + 0x5e) != '\0')) {
            if (*(puVar8 + 0x5c) == '\0') {
code_r0x08002d44:
                iVar4 = regulator_enable(puVar8[6]);
                if (iVar4 < 0) {
                    iVar5 = ___ratelimit(obj.swr_haptics_slave_enable._rs,"swr_haptics_slave_enable");
                    if (iVar5 != 0) {
                        _dev_err(*puVar8,"%s: enable swr-slave-vdd failed, rc=%d\n","swr_haptics_slave_enable",iVar4)
                        ;
                    }
                }
                else {
                    *(puVar8 + 0x5c) = 1;
                }
            }
            else {
                iVar4 = regulator_disable(puVar8[6]);
                if (-1 < iVar4) {
                    *(puVar8 + 0x5c) = 0;
                    goto code_r0x08002d44;
                }
                iVar5 = ___ratelimit(obj.swr_haptics_slave_disable._rs,"swr_haptics_slave_disable");
                if (iVar5 == 0) {
                    cVar1 = *(puVar8 + 0x5c);
                }
                else {
                    _dev_err(*puVar8,"%s: disable swr-slave-vdd failed, rc=%d\n","swr_haptics_slave_disable",iVar4);
                    cVar1 = *(puVar8 + 0x5c);
                }
                if (cVar1 == '\0') goto code_r0x08002d44;
            }
            *(puVar8 + 0x5e) = 0;
        }
        uVar2 = *(puVar8 + 0xc);
        if (*(puVar8 + 0x5f) <= uVar2 || uVar2 == 0) {
            uVar2 = *(puVar8 + 0x5f);
        }
        iVar4 = regmap_write(puVar8[3],0x3082,uVar2);
        if (iVar4 == 0) {
            regmap_read(puVar8[3],0x3082,&uStack_40);
            regmap_read(puVar8[3],0x3080,&uStack_40);
            swr_device_wakeup_vote(puVar8[1]);
            swr_connect_port(puVar8[1],auStack_2c,1,auStack_30,&uStack_3c,auStack_34,auStack_38);
            goto code_r0x08003090;
        }
        iVar5 = ___ratelimit(obj.hap_enable_swr_dac_port._rs,"hap_enable_swr_dac_port");
        if (iVar5 == 0) goto code_r0x08003090;
        uVar6 = *puVar8;
        pcVar7 = "%s: SWR_VMAX update failed, rc=%d\n";
        break;
    case 2:
        if ((puVar8[7] == 0) || (*(puVar8 + 0x5d) != '\0')) {
code_r0x08002d70:
            swr_slvdev_datapath_control(puVar8[1],*(puVar8[1] + 0x40),1);
            uStack_40 = 0x84;
            iVar4 = regmap_write(puVar8[3],0x3081,0x84);
            if (iVar4 != 0) {
                iVar5 = ___ratelimit(obj.hap_enable_swr_dac_port._rs.27,"hap_enable_swr_dac_port");
                if (iVar5 != 0) {
                    _dev_err(*puVar8,"%s: Enable SWR_PLAY failed, rc=%d\n","hap_enable_swr_dac_port",iVar4);
                }
                swr_slvdev_datapath_control(puVar8[1],*(puVar8[1] + 0x40),0);
                sym.swr_hap_disable_hpwr_vreg(puVar8);
            }
            goto code_r0x08003090;
        }
        iVar4 = regulator_set_voltage(puVar8[7],*(puVar8 + 0xb) * 1000,0x7fffffff);
        if (iVar4 < 0) {
            iVar5 = ___ratelimit(obj.swr_hap_enable_hpwr_vreg._rs,"swr_hap_enable_hpwr_vreg");
            if (iVar5 != 0) {
                _dev_err(*puVar8,"%s: Set hpwr voltage failed, rc=%d\n","swr_hap_enable_hpwr_vreg",iVar4);
            }
        }
        else {
            iVar4 = regulator_enable(puVar8[7]);
            if (-1 < iVar4) {
                *(puVar8 + 0x5d) = 1;
                goto code_r0x08002d70;
            }
            iVar5 = ___ratelimit(obj.swr_hap_enable_hpwr_vreg._rs.33,"swr_hap_enable_hpwr_vreg");
            if (iVar5 != 0) {
                _dev_err(*puVar8,"%s: Enable hpwr failed, rc=%d\n","swr_hap_enable_hpwr_vreg",iVar4);
            }
            regulator_set_voltage(puVar8[7],0,0x7fffffff);
        }
        iVar5 = ___ratelimit(obj.hap_enable_swr_dac_port._rs.25,"hap_enable_swr_dac_port");
        if (iVar5 == 0) goto code_r0x08003090;
        uVar6 = *puVar8;
        pcVar7 = "%s: Enable hpwr_vreg failed, rc=%d\n";
        break;
    default:
        goto code_r0x08003090;
    case 4:
        uStack_40 = 4;
        iVar4 = regmap_write(puVar8[3],0x3081,4);
        if (iVar4 == 0) {
            iVar4 = sym.swr_hap_disable_hpwr_vreg(puVar8);
            if (-1 < iVar4) goto code_r0x08002e54;
            iVar5 = ___ratelimit(obj.hap_enable_swr_dac_port._rs.30,"hap_enable_swr_dac_port");
            if (iVar5 == 0) goto code_r0x08003090;
            uVar6 = *puVar8;
            pcVar7 = "%s: Disable hpwr_vreg failed, rc=%d\n";
        }
        else {
            iVar5 = ___ratelimit(obj.hap_enable_swr_dac_port._rs.29,"hap_enable_swr_dac_port");
            if (iVar5 == 0) goto code_r0x08003090;
            uVar6 = *puVar8;
            pcVar7 = "%s: Enable SWR_PLAY failed, rc=%d\n";
        }
        break;
    case 8:
        swr_disconnect_port(puVar8[1],auStack_2c,1,auStack_30,auStack_38);
        swr_slvdev_datapath_control(puVar8[1],*(puVar8[1] + 0x40),0);
        swr_device_wakeup_unvote(puVar8[1]);
code_r0x08002e54:
        iVar4 = 0;
        goto code_r0x08003090;
    }
    _dev_err(uVar6,pcVar7,"hap_enable_swr_dac_port",iVar4);
code_r0x08003090:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return iVar4;
    }
    puVar8 = __stack_chk_fail();
    *extraout_x18 = sym.swr_hap_disable_hpwr_vreg;
    if ((puVar8[7] == 0) || (*(puVar8 + 0x5d) == '\0')) {
        return 0;
    }
    iVar4 = regulator_disable();
    if (iVar4 < 0) {
        iVar5 = ___ratelimit(obj.swr_hap_disable_hpwr_vreg._rs,"swr_hap_disable_hpwr_vreg");
        if (iVar5 == 0) {
            return iVar4;
        }
        uVar6 = *puVar8;
        pcVar7 = "%s: Disable hpwr failed, rc=%d\n";
    }
    else {
        iVar4 = regulator_set_voltage(puVar8[7],0,0x7fffffff);
        if (-1 < iVar4) {
            *(puVar8 + 0x5d) = 0;
            return 0;
        }
        iVar5 = ___ratelimit(obj.swr_hap_disable_hpwr_vreg._rs.36,"swr_hap_disable_hpwr_vreg");
        if (iVar5 == 0) {
            return iVar4;
        }
        uVar6 = *puVar8;
        pcVar7 = "%s: Set hpwr voltage failed, rc=%d\n";
    }
    _dev_err(uVar6,pcVar7,"swr_hap_disable_hpwr_vreg",iVar4);
    return iVar4;
}


// ===== sym.swr_hap_volatile_register.1979f192ba4a223d303c434a5991f2aa.cfi_jt @ 0x08002248 (size 8) =====

bool sym.swr_hap_volatile_register.1979f192ba4a223d303c434a5991f2aa.cfi_jt(ulong param_1,int param_2)

{
    return param_2 - 0x3080U < 3;
}


// ===== sym.swr_hap_writeable_register.1979f192ba4a223d303c434a5991f2aa.cfi_jt @ 0x08002250 (size 8) =====

ulong sym.swr_hap_writeable_register.1979f192ba4a223d303c434a5991f2aa.cfi_jt(ulong param_1,uint32_t param_2)

{
    if (param_2 < 0x3001) {
        return 0;
    }
    if ((5 < param_2 - 0x3008) && (param_2 != 0x3080)) {
        return 1;
    }
    return 0;
}


// ===== sym.swr_hap_readable_register.1979f192ba4a223d303c434a5991f2aa.cfi_jt @ 0x08002258 (size 8) =====

bool sym.swr_hap_readable_register.1979f192ba4a223d303c434a5991f2aa.cfi_jt(ulong param_1,uint32_t param_2)

{
    return 0x3000 < param_2;
}


// ===== sym.snd_soc_info_volsw.cfi_jt @ 0x08002260 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_info_volsw.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.haptics_comp_remove.1979f192ba4a223d303c434a5991f2aa.cfi_jt @ 0x08002268 (size 8) =====

void sym.haptics_comp_remove.1979f192ba4a223d303c434a5991f2aa.cfi_jt(void)

{
    return;
}


// ===== sym.swr_haptics_probe.1979f192ba4a223d303c434a5991f2aa.cfi_jt @ 0x08002270 (size 8) =====

uint64_t sym.swr_haptics_probe.1979f192ba4a223d303c434a5991f2aa.cfi_jt(int64_t param_1)

{
    bool bVar1;
    int iVar2;
    int iVar3;
    uint32_t uVar4;
    int64_t *piVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    char *pcVar9;
    uint64_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar11;
    ulong uVar12;
    ulong unaff_x30;
    uchar auStack_64 [4];
    ulong uStack_60;
    ulong uStack_58;
    uint uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iVar7 = param_1 + 0x48;
    iStack_48 = *(iVar8 + 0x5e0);
    uVar12 = *(param_1 + 0x338);
    auStack_64[0] = 0;
    piVar5 = devm_kmalloc(iVar7,0x68,0xdc0);
    if (piVar5 == NULL) {
        uVar6 = 0xfffffff4;
        goto code_r0x0800279c;
    }
    *piVar5 = iVar7;
    piVar5[1] = param_1;
    *(piVar5 + 0x5f) = 0x78;
    iVar2 = of_device_get_match_data(iVar7);
    if (iVar2 == 1) {
        *(piVar5 + 0x61) = *(piVar5 + 0x61) | 1;
    }
    *(param_1 + 0xe0) = piVar5;
    if (param_1 == 0) {
        _dev_err(0x48,"%s: get swr_haptics_dev failed\n","swr_haptics_parse_port_mapping");
code_r0x08002658:
        iVar7 = *piVar5;
        pcVar9 = "%s: failed to parse swr port mapping, rc=%d\n";
        uVar10 = 0xffffffea;
        uVar6 = 0xffffffea;
code_r0x08002794:
        _dev_err(iVar7,pcVar9,"swr_haptics_probe",uVar10);
    }
    else {
        uStack_50 = 0;
        uStack_60 = 0;
        uStack_58 = 0;
        iVar2 = of_property_read_variable_u32_array(*(param_1 + 0x338),"qcom,rx_swr_ch_map",&uStack_60,5,0);
        if (iVar2 < 0) {
            _dev_err(*piVar5,"%s: Get qcom,rx_swr_ch_map failed, rc=%d\n","swr_haptics_parse_port_mapping",iVar2);
            goto code_r0x08002658;
        }
        *(piVar5 + 4) = uStack_60;
        *(piVar5 + 5) = uStack_60 >> 0x20;
        *(piVar5 + 0x21) = uStack_58;
        *(piVar5 + 0x24) = uStack_58._4_4_;
        *(piVar5 + 0x29) = uStack_50;
        uVar6 = devm_regulator_get(*piVar5,"swr-slave");
        piVar5[6] = uVar6;
        if (uVar6 < 0xfffffffffffff001) {
            iVar8 = of_find_property(uVar12,"qcom,hpwr-supply",0);
            if (iVar8 == 0) {
code_r0x080024b4:
                if (*(piVar5 + 0x5c) == '\0') {
                    uVar4 = regulator_enable(piVar5[6]);
                    if (uVar4 < 0) {
                        uVar6 = uVar4;
                        iVar2 = ___ratelimit(obj.swr_haptics_slave_enable._rs,"swr_haptics_slave_enable");
                        if (iVar2 != 0) {
                            _dev_err(*piVar5,"%s: enable swr-slave-vdd failed, rc=%d\n","swr_haptics_slave_enable",
                                     uVar6);
                        }
                        iVar7 = *piVar5;
                        pcVar9 = "%s: enable swr-slave-vdd failed, rc=%d\n";
                        goto code_r0x08002788;
                    }
                    *(piVar5 + 0x5c) = 1;
                }
                usleep_range_state(500,0x1fe,2);
                iVar2 = swr_get_logical_dev_num(param_1,*(param_1 + 0x3d8),auStack_64);
                bVar1 = iVar2 == 0;
                if (iVar2 == 0) {
code_r0x080025b0:
                    iVar2 = 0;
                }
                else {
                    usleep_range_state(500,0x1fe,2);
                    iVar2 = swr_get_logical_dev_num(param_1,*(param_1 + 0x3d8),auStack_64);
                    bVar1 = iVar2 == 0;
                    if (iVar2 == 0) goto code_r0x080025b0;
                    usleep_range_state(500,0x1fe,2);
                    iVar2 = swr_get_logical_dev_num(param_1,*(param_1 + 0x3d8),auStack_64);
                    bVar1 = iVar2 == 0;
                    if (iVar2 == 0) goto code_r0x080025b0;
                    usleep_range_state(500,0x1fe,2);
                    iVar2 = swr_get_logical_dev_num(param_1,*(param_1 + 0x3d8),auStack_64);
                    bVar1 = iVar2 == 0;
                    if (iVar2 == 0) goto code_r0x080025b0;
                    usleep_range_state(500,0x1fe,2);
                    iVar2 = swr_get_logical_dev_num(param_1,*(param_1 + 0x3d8),auStack_64);
                    bVar1 = iVar2 == 0;
                }
                if (bVar1) {
                    *(param_1 + 0x40) = auStack_64[0];
                    uVar6 = __devm_regmap_init_swr(param_1,obj.swr_hap_regmap_config,0,0);
                    piVar5[3] = uVar6;
                    if (uVar6 < 0xfffffffffffff001) {
                        uVar10 = snd_soc_register_component(iVar7,obj.swr_haptics_component,obj.haptics_dai,1);
                        uVar6 = uVar10 & 0xffffffff;
                        if (uVar10 == 0) {
                            piVar5[8] = sym.hboost_notifier.1979f192ba4a223d303c434a5991f2aa.cfi_jt;
                            register_hboost_event_notifier(piVar5 + 8);
                            goto code_r0x0800279c;
                        }
                        _dev_err(*piVar5,"%s: register swr_haptics component failed, rc=%d\n","swr_haptics_probe",
                                 uVar6);
                    }
                    else {
                        _dev_err(*piVar5,"%s: init regmap failed, rc=%d\n","swr_haptics_probe",uVar6 & 0xffffffff);
                    }
                }
                else {
                    _dev_err(*piVar5,"%s: failed to get devnum for swr-haptics, rc=%d\n","swr_haptics_probe",iVar2);
                    uVar6 = 0xfffffdfb;
                }
                if (*(piVar5 + 0x5c) != '\0') {
                    iVar2 = regulator_disable(piVar5[6]);
                    if (iVar2 < 0) {
                        iVar3 = ___ratelimit(obj.swr_haptics_slave_disable._rs,"swr_haptics_slave_disable");
                        if (iVar3 != 0) {
                            _dev_err(*piVar5,"%s: disable swr-slave-vdd failed, rc=%d\n","swr_haptics_slave_disable",
                                     iVar2);
                        }
                    }
                    else {
                        *(piVar5 + 0x5c) = 0;
                    }
                }
                swr_remove_device(param_1);
                goto code_r0x08002798;
            }
            uVar6 = devm_regulator_get(*piVar5,"qcom,hpwr");
            piVar5[7] = uVar6;
            if (uVar6 < 0xfffffffffffff001) {
                uVar4 = of_property_read_variable_u32_array(uVar12,"qcom,hpwr-voltage-mv",piVar5 + 0xb,1,0);
                if (-1 < uVar4) goto code_r0x080024b4;
                uVar6 = uVar4;
                iVar7 = *piVar5;
                pcVar9 = "%s: Failed to read qcom,hpwr-voltage-mv, rc=%d\n";
            }
            else {
                if (uVar6 == -0x205) goto code_r0x0800248c;
                uVar6 = uVar6 & 0xffffffff;
                iVar7 = *piVar5;
                pcVar9 = "%s: Get qcom,hpwr-supply failed, rc=%d\n";
            }
code_r0x08002788:
            uVar10 = uVar6 & 0xffffffff;
            goto code_r0x08002794;
        }
        if (uVar6 != -0x205) {
            iVar7 = *piVar5;
            pcVar9 = "%s: get swr-slave-supply failed, rc=%d\n";
            goto code_r0x08002788;
        }
code_r0x0800248c:
        uVar6 = 0xfffffdfb;
    }
code_r0x08002798:
    *(param_1 + 0xe0) = 0;
code_r0x0800279c:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_48) {
        return uVar6 & 0xffffffff;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18 = sym.swr_haptics_remove;
    if ((iVar7 == 0) || (puVar11 = *(iVar7 + 0xe0), puVar11 == NULL)) {
        _dev_err(iVar7 + 0x48,"%s: no data for swr_hap\n","swr_haptics_remove");
        uVar4 = 0xffffffed;
    }
    else {
        unregister_hboost_event_notifier(puVar11 + 8);
        if (*(puVar11 + 0x5c) == '\0') {
            uVar4 = 0;
        }
        else {
            uVar4 = regulator_disable(puVar11[6]);
            if (uVar4 < 0) {
                iVar2 = ___ratelimit(obj.swr_haptics_slave_disable._rs,"swr_haptics_slave_disable");
                if (iVar2 != 0) {
                    _dev_err(*puVar11,"%s: disable swr-slave-vdd failed, rc=%d\n","swr_haptics_slave_disable",uVar4);
                }
                _dev_err(*puVar11,"%s: disable swr-slave failed, rc=%d\n","swr_haptics_remove",uVar4);
            }
            else {
                uVar4 = 0;
                *(puVar11 + 0x5c) = 0;
            }
        }
    }
    snd_soc_unregister_component(iVar7 + 0x48);
    *(iVar7 + 0xe0) = 0;
    return uVar4;
}


// ===== sym.swr_haptics_device_up.1979f192ba4a223d303c434a5991f2aa.cfi_jt @ 0x08002278 (size 8) =====

int sym.swr_haptics_device_up.1979f192ba4a223d303c434a5991f2aa.cfi_jt(int64_t param_1)

{
    int iVar1;
    int iVar2;
    ulong *in_x18;
    ulong *puVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == 0) || (puVar3 = *(param_1 + 0xe0), puVar3 == NULL)) {
        iVar1 = ___ratelimit(obj.swr_haptics_device_up._rs,"swr_haptics_device_up");
        if (iVar1 != 0) {
            _dev_err(param_1 + 0x48,"%s: no data for swr_hap\n","swr_haptics_device_up");
        }
        iVar1 = -0x13;
    }
    else {
        if ((*(puVar3 + 0x61) & 1) != 0) {
            *(puVar3 + 0x5e) = 1;
        }
        if (*(puVar3 + 0x5c) == '\0') {
            iVar1 = regulator_enable(puVar3[6]);
            if (iVar1 < 0) {
                iVar2 = ___ratelimit(obj.swr_haptics_slave_enable._rs,"swr_haptics_slave_enable");
                if (iVar2 != 0) {
                    _dev_err(*puVar3,"%s: enable swr-slave-vdd failed, rc=%d\n","swr_haptics_slave_enable",iVar1);
                }
            }
            else {
                iVar1 = 0;
                *(puVar3 + 0x5c) = 1;
            }
        }
        else {
            iVar1 = 0;
        }
    }
    return iVar1;
}


// ===== sym.swr_haptics_device_down.1979f192ba4a223d303c434a5991f2aa.cfi_jt @ 0x08002280 (size 8) =====

int sym.swr_haptics_device_down.1979f192ba4a223d303c434a5991f2aa.cfi_jt(int64_t param_1)

{
    int iVar1;
    int iVar2;
    ulong *in_x18;
    ulong *arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == 0) || (arg1 = *(param_1 + 0xe0), arg1 == NULL)) {
        iVar1 = ___ratelimit(obj.swr_haptics_device_down._rs,"swr_haptics_device_down");
        if (iVar1 != 0) {
            _dev_err(param_1 + 0x48,"%s: no data for swr_hap\n","swr_haptics_device_down");
        }
        iVar1 = -0x13;
    }
    else {
        iVar1 = sym.swr_hap_disable_hpwr_vreg(arg1);
        if (iVar1 < 0) {
            iVar2 = ___ratelimit(obj.swr_haptics_device_down._rs.44,"swr_haptics_device_down");
            if (iVar2 != 0) {
                _dev_err(*arg1,"Disable hpwr_vreg failed, rc=%d\n",iVar1);
            }
        }
        else if (*(arg1 + 0x5c) == '\0') {
            iVar1 = 0;
        }
        else {
            iVar1 = regulator_disable(arg1[6]);
            if (iVar1 < 0) {
                iVar2 = ___ratelimit(obj.swr_haptics_slave_disable._rs,"swr_haptics_slave_disable");
                if (iVar2 != 0) {
                    _dev_err(*arg1,"%s: disable swr-slave-vdd failed, rc=%d\n","swr_haptics_slave_disable",iVar1);
                }
            }
            else {
                iVar1 = 0;
                *(arg1 + 0x5c) = 0;
            }
        }
    }
    return iVar1;
}


// ===== sym.swr_haptics_remove.1979f192ba4a223d303c434a5991f2aa.cfi_jt @ 0x08002288 (size 8) =====

int sym.swr_haptics_remove.1979f192ba4a223d303c434a5991f2aa.cfi_jt(int64_t param_1)

{
    int iVar1;
    int iVar2;
    ulong *in_x18;
    ulong *puVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == 0) || (puVar3 = *(param_1 + 0xe0), puVar3 == NULL)) {
        _dev_err(param_1 + 0x48,"%s: no data for swr_hap\n","swr_haptics_remove");
        iVar1 = -0x13;
    }
    else {
        unregister_hboost_event_notifier(puVar3 + 8);
        if (*(puVar3 + 0x5c) == '\0') {
            iVar1 = 0;
        }
        else {
            iVar1 = regulator_disable(puVar3[6]);
            if (iVar1 < 0) {
                iVar2 = ___ratelimit(obj.swr_haptics_slave_disable._rs,"swr_haptics_slave_disable");
                if (iVar2 != 0) {
                    _dev_err(*puVar3,"%s: disable swr-slave-vdd failed, rc=%d\n","swr_haptics_slave_disable",iVar1);
                }
                _dev_err(*puVar3,"%s: disable swr-slave failed, rc=%d\n","swr_haptics_remove",iVar1);
            }
            else {
                iVar1 = 0;
                *(puVar3 + 0x5c) = 0;
            }
        }
    }
    snd_soc_unregister_component(param_1 + 0x48);
    *(param_1 + 0xe0) = 0;
    return iVar1;
}


// ===== sym.swr_haptics_suspend.1979f192ba4a223d303c434a5991f2aa.cfi_jt @ 0x08002290 (size 8) =====

ulong sym.swr_haptics_suspend.1979f192ba4a223d303c434a5991f2aa.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((param_1 == 0) || (param_1 == 0x48)) || (*(param_1 + 0x98) == 0)) {
        iVar1 = ___ratelimit(obj.swr_haptics_suspend._rs,"swr_haptics_suspend");
        if (iVar1 != 0) {
            _dev_err(param_1,"%s: no data for swr_hap\n","swr_haptics_suspend");
        }
        uVar2 = 0xffffffed;
    }
    else {
        __trace_bprintk(0x800323c,*0x8003000,"swr_haptics_suspend");
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.swr_haptics_resume.1979f192ba4a223d303c434a5991f2aa.cfi_jt @ 0x08002298 (size 8) =====

ulong sym.swr_haptics_resume.1979f192ba4a223d303c434a5991f2aa.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((param_1 == 0) || (param_1 == 0x48)) || (*(param_1 + 0x98) == 0)) {
        iVar1 = ___ratelimit(obj.swr_haptics_resume._rs,"swr_haptics_resume");
        if (iVar1 != 0) {
            _dev_err(param_1,"%s: no data for swr_hap\n","swr_haptics_resume");
        }
        uVar2 = 0xffffffed;
    }
    else {
        __trace_bprintk(0x80032dc,*0x8003000,"swr_haptics_resume");
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.hboost_notifier.1979f192ba4a223d303c434a5991f2aa.cfi_jt @ 0x080022a0 (size 8) =====

ulong sym.hboost_notifier.1979f192ba4a223d303c434a5991f2aa.cfi_jt(int64_t param_1,int64_t param_2,uint32_t *param_3)

{
    uint32_t uVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 == 0) {
        uVar1 = *param_3;
        if (uVar1 < 0x2711) {
            uVar3 = 0;
            *(param_1 + 0x20) = (uVar1 >> 1 & 0x7fff) / 0x19;
        }
        else {
            iVar2 = ___ratelimit(obj.hboost_notifier._rs,"hboost_notifier");
            if (iVar2 == 0) {
                uVar3 = 0xffffffea;
            }
            else {
                _dev_err(*(param_1 + -0x40),"%s: voted Vmax (%u mv) is higher than maximum (%u mv)\n",
                         "hboost_notifier",uVar1,10000);
                uVar3 = 0xffffffea;
            }
        }
    }
    else {
        uVar3 = 0;
    }
    return uVar3;
}


// ===== sym.haptics_vmax_put.1979f192ba4a223d303c434a5991f2aa.cfi_jt @ 0x080022a8 (size 8) =====

ulong sym.haptics_vmax_put.1979f192ba4a223d303c434a5991f2aa.cfi_jt(int64_t param_1,int64_t param_2)

{
    *(*(*(*(param_1 + 0x80) + 0x18) + 0x98) + 0x5f) = *(param_2 + 0x48);
    return 0;
}


// ===== sym.haptics_vmax_get.1979f192ba4a223d303c434a5991f2aa.cfi_jt @ 0x080022b0 (size 8) =====

ulong sym.haptics_vmax_get.1979f192ba4a223d303c434a5991f2aa.cfi_jt(int64_t param_1,int64_t param_2)

{
    *(param_2 + 0x48) = *(*(*(*(param_1 + 0x80) + 0x18) + 0x98) + 0x5f);
    return 0;
}


// ===== sym.snd_soc_dapm_put_volsw.cfi_jt @ 0x080022b8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_dapm_put_volsw.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.snd_soc_dapm_get_volsw.cfi_jt @ 0x080022c0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_dapm_get_volsw.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.swr_hap_writeable_register @ 0x080022c8 (size 76) =====

ulong sym.swr_hap_writeable_register(int64_t arg1,uint32_t arg2)

{
    if (arg2 < 0x3001) {
        return 0;
    }
    if ((5 < arg2 - 0x3008) && (arg2 != 0x3080)) {
        return 1;
    }
    return 0;
}


// ===== sym.swr_hap_readable_register @ 0x08002314 (size 20) =====

bool sym.swr_hap_readable_register(ulong noname_0,uint32_t arg1)

{
    return 0x3000 < arg1;
}


// ===== sym.swr_hap_volatile_register @ 0x08002328 (size 28) =====

bool sym.swr_hap_volatile_register(ulong noname_0,int64_t arg1)

{
    return arg1 - 0x3080U < 3;
}


// ===== sym.swr_haptics_probe @ 0x08002344 (size 1204) =====

uint64_t sym.swr_haptics_probe(int64_t arg1)

{
    bool bVar1;
    int iVar2;
    int iVar3;
    uint32_t uVar4;
    int64_t *piVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    char *pcVar9;
    uint64_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar11;
    ulong uVar12;
    ulong unaff_x30;
    uchar auStack_64 [4];
    ulong uStack_60;
    ulong uStack_58;
    uint uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iVar7 = arg1 + 0x48;
    iStack_48 = *(iVar8 + 0x5e0);
    uVar12 = *(arg1 + 0x338);
    auStack_64[0] = 0;
    piVar5 = devm_kmalloc(iVar7,0x68,0xdc0);
    if (piVar5 == NULL) {
        uVar6 = 0xfffffff4;
        goto code_r0x0800279c;
    }
    *piVar5 = iVar7;
    piVar5[1] = arg1;
    *(piVar5 + 0x5f) = 0x78;
    iVar2 = of_device_get_match_data(iVar7);
    if (iVar2 == 1) {
        *(piVar5 + 0x61) = *(piVar5 + 0x61) | 1;
    }
    *(arg1 + 0xe0) = piVar5;
    if (arg1 == 0) {
        _dev_err(0x48,"%s: get swr_haptics_dev failed\n","swr_haptics_parse_port_mapping");
code_r0x08002658:
        iVar7 = *piVar5;
        pcVar9 = "%s: failed to parse swr port mapping, rc=%d\n";
        uVar10 = 0xffffffea;
        uVar6 = 0xffffffea;
code_r0x08002794:
        _dev_err(iVar7,pcVar9,"swr_haptics_probe",uVar10);
    }
    else {
        uStack_50 = 0;
        uStack_60 = 0;
        uStack_58 = 0;
        iVar2 = of_property_read_variable_u32_array(*(arg1 + 0x338),"qcom,rx_swr_ch_map",&uStack_60,5,0);
        if (iVar2 < 0) {
            _dev_err(*piVar5,"%s: Get qcom,rx_swr_ch_map failed, rc=%d\n","swr_haptics_parse_port_mapping",iVar2);
            goto code_r0x08002658;
        }
        *(piVar5 + 4) = uStack_60;
        *(piVar5 + 5) = uStack_60 >> 0x20;
        *(piVar5 + 0x21) = uStack_58;
        *(piVar5 + 0x24) = uStack_58._4_4_;
        *(piVar5 + 0x29) = uStack_50;
        uVar6 = devm_regulator_get(*piVar5,"swr-slave");
        piVar5[6] = uVar6;
        if (uVar6 < 0xfffffffffffff001) {
            iVar8 = of_find_property(uVar12,"qcom,hpwr-supply",0);
            if (iVar8 == 0) {
code_r0x080024b4:
                if (*(piVar5 + 0x5c) == '\0') {
                    uVar4 = regulator_enable(piVar5[6]);
                    if (uVar4 < 0) {
                        uVar6 = uVar4;
                        iVar2 = ___ratelimit(obj.swr_haptics_slave_enable._rs,"swr_haptics_slave_enable");
                        if (iVar2 != 0) {
                            _dev_err(*piVar5,"%s: enable swr-slave-vdd failed, rc=%d\n","swr_haptics_slave_enable",
                                     uVar6);
                        }
                        iVar7 = *piVar5;
                        pcVar9 = "%s: enable swr-slave-vdd failed, rc=%d\n";
                        goto code_r0x08002788;
                    }
                    *(piVar5 + 0x5c) = 1;
                }
                usleep_range_state(500,0x1fe,2);
                iVar2 = swr_get_logical_dev_num(arg1,*(arg1 + 0x3d8),auStack_64);
                bVar1 = iVar2 == 0;
                if (iVar2 == 0) {
code_r0x080025b0:
                    iVar2 = 0;
                }
                else {
                    usleep_range_state(500,0x1fe,2);
                    iVar2 = swr_get_logical_dev_num(arg1,*(arg1 + 0x3d8),auStack_64);
                    bVar1 = iVar2 == 0;
                    if (iVar2 == 0) goto code_r0x080025b0;
                    usleep_range_state(500,0x1fe,2);
                    iVar2 = swr_get_logical_dev_num(arg1,*(arg1 + 0x3d8),auStack_64);
                    bVar1 = iVar2 == 0;
                    if (iVar2 == 0) goto code_r0x080025b0;
                    usleep_range_state(500,0x1fe,2);
                    iVar2 = swr_get_logical_dev_num(arg1,*(arg1 + 0x3d8),auStack_64);
                    bVar1 = iVar2 == 0;
                    if (iVar2 == 0) goto code_r0x080025b0;
                    usleep_range_state(500,0x1fe,2);
                    iVar2 = swr_get_logical_dev_num(arg1,*(arg1 + 0x3d8),auStack_64);
                    bVar1 = iVar2 == 0;
                }
                if (bVar1) {
                    *(arg1 + 0x40) = auStack_64[0];
                    uVar6 = __devm_regmap_init_swr(arg1,obj.swr_hap_regmap_config,0,0);
                    piVar5[3] = uVar6;
                    if (uVar6 < 0xfffffffffffff001) {
                        uVar10 = snd_soc_register_component(iVar7,obj.swr_haptics_component,obj.haptics_dai,1);
                        uVar6 = uVar10 & 0xffffffff;
                        if (uVar10 == 0) {
                            piVar5[8] = sym.hboost_notifier.1979f192ba4a223d303c434a5991f2aa.cfi_jt;
                            register_hboost_event_notifier(piVar5 + 8);
                            goto code_r0x0800279c;
                        }
                        _dev_err(*piVar5,"%s: register swr_haptics component failed, rc=%d\n","swr_haptics_probe",
                                 uVar6);
                    }
                    else {
                        _dev_err(*piVar5,"%s: init regmap failed, rc=%d\n","swr_haptics_probe",uVar6 & 0xffffffff);
                    }
                }
                else {
                    _dev_err(*piVar5,"%s: failed to get devnum for swr-haptics, rc=%d\n","swr_haptics_probe",iVar2);
                    uVar6 = 0xfffffdfb;
                }
                if (*(piVar5 + 0x5c) != '\0') {
                    iVar2 = regulator_disable(piVar5[6]);
                    if (iVar2 < 0) {
                        iVar3 = ___ratelimit(obj.swr_haptics_slave_disable._rs,"swr_haptics_slave_disable");
                        if (iVar3 != 0) {
                            _dev_err(*piVar5,"%s: disable swr-slave-vdd failed, rc=%d\n","swr_haptics_slave_disable",
                                     iVar2);
                        }
                    }
                    else {
                        *(piVar5 + 0x5c) = 0;
                    }
                }
                swr_remove_device(arg1);
                goto code_r0x08002798;
            }
            uVar6 = devm_regulator_get(*piVar5,"qcom,hpwr");
            piVar5[7] = uVar6;
            if (uVar6 < 0xfffffffffffff001) {
                uVar4 = of_property_read_variable_u32_array(uVar12,"qcom,hpwr-voltage-mv",piVar5 + 0xb,1,0);
                if (-1 < uVar4) goto code_r0x080024b4;
                uVar6 = uVar4;
                iVar7 = *piVar5;
                pcVar9 = "%s: Failed to read qcom,hpwr-voltage-mv, rc=%d\n";
            }
            else {
                if (uVar6 == -0x205) goto code_r0x0800248c;
                uVar6 = uVar6 & 0xffffffff;
                iVar7 = *piVar5;
                pcVar9 = "%s: Get qcom,hpwr-supply failed, rc=%d\n";
            }
code_r0x08002788:
            uVar10 = uVar6 & 0xffffffff;
            goto code_r0x08002794;
        }
        if (uVar6 != -0x205) {
            iVar7 = *piVar5;
            pcVar9 = "%s: get swr-slave-supply failed, rc=%d\n";
            goto code_r0x08002788;
        }
code_r0x0800248c:
        uVar6 = 0xfffffdfb;
    }
code_r0x08002798:
    *(arg1 + 0xe0) = 0;
code_r0x0800279c:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_48) {
        return uVar6 & 0xffffffff;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18 = sym.swr_haptics_remove;
    if ((iVar7 == 0) || (puVar11 = *(iVar7 + 0xe0), puVar11 == NULL)) {
        _dev_err(iVar7 + 0x48,"%s: no data for swr_hap\n","swr_haptics_remove");
        uVar4 = 0xffffffed;
    }
    else {
        unregister_hboost_event_notifier(puVar11 + 8);
        if (*(puVar11 + 0x5c) == '\0') {
            uVar4 = 0;
        }
        else {
            uVar4 = regulator_disable(puVar11[6]);
            if (uVar4 < 0) {
                iVar2 = ___ratelimit(obj.swr_haptics_slave_disable._rs,"swr_haptics_slave_disable");
                if (iVar2 != 0) {
                    _dev_err(*puVar11,"%s: disable swr-slave-vdd failed, rc=%d\n","swr_haptics_slave_disable",uVar4);
                }
                _dev_err(*puVar11,"%s: disable swr-slave failed, rc=%d\n","swr_haptics_remove",uVar4);
            }
            else {
                uVar4 = 0;
                *(puVar11 + 0x5c) = 0;
            }
        }
    }
    snd_soc_unregister_component(iVar7 + 0x48);
    *(iVar7 + 0xe0) = 0;
    return uVar4;
}


// ===== sym.swr_haptics_remove @ 0x080027f8 (size 244) =====

int sym.swr_haptics_remove(int64_t arg1)

{
    int iVar1;
    int iVar2;
    ulong *in_x18;
    ulong *puVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (puVar3 = *(arg1 + 0xe0), puVar3 == NULL)) {
        _dev_err(arg1 + 0x48,"%s: no data for swr_hap\n","swr_haptics_remove");
        iVar1 = -0x13;
    }
    else {
        unregister_hboost_event_notifier(puVar3 + 8);
        if (*(puVar3 + 0x5c) == '\0') {
            iVar1 = 0;
        }
        else {
            iVar1 = regulator_disable(puVar3[6]);
            if (iVar1 < 0) {
                iVar2 = ___ratelimit(obj.swr_haptics_slave_disable._rs,"swr_haptics_slave_disable");
                if (iVar2 != 0) {
                    _dev_err(*puVar3,"%s: disable swr-slave-vdd failed, rc=%d\n","swr_haptics_slave_disable",iVar1);
                }
                _dev_err(*puVar3,"%s: disable swr-slave failed, rc=%d\n","swr_haptics_remove",iVar1);
            }
            else {
                iVar1 = 0;
                *(puVar3 + 0x5c) = 0;
            }
        }
    }
    snd_soc_unregister_component(arg1 + 0x48);
    *(arg1 + 0xe0) = 0;
    return iVar1;
}


// ===== sym.swr_haptics_device_up @ 0x080028ec (size 236) =====

int sym.swr_haptics_device_up(int64_t arg1)

{
    int iVar1;
    int iVar2;
    ulong *in_x18;
    ulong *puVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (puVar3 = *(arg1 + 0xe0), puVar3 == NULL)) {
        iVar1 = ___ratelimit(obj.swr_haptics_device_up._rs,"swr_haptics_device_up");
        if (iVar1 != 0) {
            _dev_err(arg1 + 0x48,"%s: no data for swr_hap\n","swr_haptics_device_up");
        }
        iVar1 = -0x13;
    }
    else {
        if ((*(puVar3 + 0x61) & 1) != 0) {
            *(puVar3 + 0x5e) = 1;
        }
        if (*(puVar3 + 0x5c) == '\0') {
            iVar1 = regulator_enable(puVar3[6]);
            if (iVar1 < 0) {
                iVar2 = ___ratelimit(obj.swr_haptics_slave_enable._rs,"swr_haptics_slave_enable");
                if (iVar2 != 0) {
                    _dev_err(*puVar3,"%s: enable swr-slave-vdd failed, rc=%d\n","swr_haptics_slave_enable",iVar1);
                }
            }
            else {
                iVar1 = 0;
                *(puVar3 + 0x5c) = 1;
            }
        }
        else {
            iVar1 = 0;
        }
    }
    return iVar1;
}


// ===== sym.swr_haptics_device_down @ 0x080029d8 (size 280) =====

int sym.swr_haptics_device_down(int64_t arg1)

{
    int iVar1;
    int iVar2;
    ulong *in_x18;
    ulong *arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (arg1_00 = *(arg1 + 0xe0), arg1_00 == NULL)) {
        iVar1 = ___ratelimit(obj.swr_haptics_device_down._rs,"swr_haptics_device_down");
        if (iVar1 != 0) {
            _dev_err(arg1 + 0x48,"%s: no data for swr_hap\n","swr_haptics_device_down");
        }
        iVar1 = -0x13;
    }
    else {
        iVar1 = sym.swr_hap_disable_hpwr_vreg(arg1_00);
        if (iVar1 < 0) {
            iVar2 = ___ratelimit(obj.swr_haptics_device_down._rs.44,"swr_haptics_device_down");
            if (iVar2 != 0) {
                _dev_err(*arg1_00,"Disable hpwr_vreg failed, rc=%d\n",iVar1);
            }
        }
        else if (*(arg1_00 + 0x5c) == '\0') {
            iVar1 = 0;
        }
        else {
            iVar1 = regulator_disable(arg1_00[6]);
            if (iVar1 < 0) {
                iVar2 = ___ratelimit(obj.swr_haptics_slave_disable._rs,"swr_haptics_slave_disable");
                if (iVar2 != 0) {
                    _dev_err(*arg1_00,"%s: disable swr-slave-vdd failed, rc=%d\n","swr_haptics_slave_disable",iVar1);
                }
            }
            else {
                iVar1 = 0;
                *(arg1_00 + 0x5c) = 0;
            }
        }
    }
    return iVar1;
}


// ===== sym.hboost_notifier @ 0x08002af0 (size 168) =====

ulong sym.hboost_notifier(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    ulong uVar3;
    int64_t in_x1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (in_x1 == 0) {
        uVar1 = *arg2;
        if (uVar1 < 0x2711) {
            uVar3 = 0;
            *(arg1 + 0x20) = (uVar1 >> 1 & 0x7fff) / 0x19;
        }
        else {
            iVar2 = ___ratelimit(obj.hboost_notifier._rs,"hboost_notifier");
            if (iVar2 == 0) {
                uVar3 = 0xffffffea;
            }
            else {
                _dev_err(*(arg1 + -0x40),"%s: voted Vmax (%u mv) is higher than maximum (%u mv)\n","hboost_notifier",
                         uVar1,10000);
                uVar3 = 0xffffffea;
            }
        }
    }
    else {
        uVar3 = 0;
    }
    return uVar3;
}


// ===== sym.haptics_comp_probe @ 0x08002b98 (size 144) =====

ulong sym.haptics_comp_probe(int64_t arg1)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(arg1 + 0x18) + 0x98);
    if (iVar2 == 0) {
        _printk(0x8000ad6,"haptics_comp_probe");
        uVar1 = 0xffffffea;
    }
    else {
        snd_soc_component_init_regmap(arg1,*(iVar2 + 0x18));
        iVar2 = arg1 + 0xd0;
        if ((iVar2 != 0) && (*(arg1 + 0xe0) != 0)) {
            snd_soc_dapm_ignore_suspend(iVar2,"HAP_IN");
            snd_soc_dapm_ignore_suspend(iVar2,"HAP_OUT");
        }
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.haptics_comp_remove @ 0x08002c28 (size 12) =====

void sym.haptics_comp_remove(void)

{
    return;
}


// ===== sym.haptics_vmax_get @ 0x08002c34 (size 36) =====

ulong sym.haptics_vmax_get(int64_t arg1,int64_t arg2)

{
    *(arg2 + 0x48) = *(*(*(*(arg1 + 0x80) + 0x18) + 0x98) + 0x5f);
    return 0;
}


// ===== sym.haptics_vmax_put @ 0x08002c58 (size 36) =====

ulong sym.haptics_vmax_put(int64_t arg1,int64_t arg2)

{
    *(*(*(*(arg1 + 0x80) + 0x18) + 0x98) + 0x5f) = *(arg2 + 0x48);
    return 0;
}


// ===== sym.hap_enable_swr_dac_port @ 0x08002c7c (size 1216) =====

int sym.hap_enable_swr_dac_port(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    char cVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    int iVar5;
    int iVar6;
    ulong uVar7;
    char *pcVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar9;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uint uStack_40;
    uint uStack_3c;
    uchar auStack_38 [4];
    uchar auStack_34 [4];
    uchar auStack_30 [4];
    uchar auStack_2c [4];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    auStack_2c[0] = 0;
    auStack_30[0] = 0;
    auStack_38[0] = 0;
    uStack_40 = 0;
    if (*(arg1 + 0x28) == 0xd0) {
        _printk(0x8000959,"hap_enable_swr_dac_port");
        iVar5 = -0x16;
        goto code_r0x08003090;
    }
    puVar9 = *(*(*(arg1 + 0x28) + -0xb8) + 0x98);
    if (puVar9 == NULL) {
        _printk(0x8000ad6,"hap_enable_swr_dac_port");
        iVar5 = -0x13;
        goto code_r0x08003090;
    }
    auStack_2c[0] = *(puVar9 + 4);
    iVar5 = 0;
    auStack_30[0] = *(puVar9 + 0x21);
    uStack_3c = *(puVar9 + 0x24);
    auStack_34[0] = *(puVar9 + 5);
    auStack_38[0] = *(puVar9 + 0x29);
    uVar3 = arg2 - 1;
    if (7 < uVar3) goto code_r0x08003090;
    //switch table (7 cases) at 0x8000638
    switch(*(uVar3 + 0x8000638) * 4 + 0x8002d18) {
    case 0x8002d1c:
        if (((*(puVar9 + 0x61) & 1) != 0) && (*(puVar9 + 0x5e) != '\0')) {
            if (*(puVar9 + 0x5c) == '\0') {
code_r0x08002d44:
                iVar5 = regulator_enable(puVar9[6]);
                if (iVar5 < 0) {
                    iVar6 = ___ratelimit(obj.swr_haptics_slave_enable._rs,"swr_haptics_slave_enable");
                    if (iVar6 != 0) {
                        _dev_err(*puVar9,"%s: enable swr-slave-vdd failed, rc=%d\n","swr_haptics_slave_enable",iVar5)
                        ;
                    }
                }
                else {
                    *(puVar9 + 0x5c) = 1;
                }
            }
            else {
                iVar5 = regulator_disable(puVar9[6]);
                if (-1 < iVar5) {
                    *(puVar9 + 0x5c) = 0;
                    goto code_r0x08002d44;
                }
                iVar6 = ___ratelimit(obj.swr_haptics_slave_disable._rs,"swr_haptics_slave_disable");
                if (iVar6 == 0) {
                    cVar1 = *(puVar9 + 0x5c);
                }
                else {
                    _dev_err(*puVar9,"%s: disable swr-slave-vdd failed, rc=%d\n","swr_haptics_slave_disable",iVar5);
                    cVar1 = *(puVar9 + 0x5c);
                }
                if (cVar1 == '\0') goto code_r0x08002d44;
            }
            *(puVar9 + 0x5e) = 0;
        }
        uVar2 = *(puVar9 + 0xc);
        if (*(puVar9 + 0x5f) <= uVar2 || uVar2 == 0) {
            uVar2 = *(puVar9 + 0x5f);
        }
        iVar5 = regmap_write(puVar9[3],0x3082,uVar2);
        if (iVar5 == 0) {
            regmap_read(puVar9[3],0x3082,&stack0xffffffffffffffc0);
            regmap_read(puVar9[3],0x3080,&stack0xffffffffffffffc0);
            swr_device_wakeup_vote(puVar9[1]);
            swr_connect_port(puVar9[1],&stack0xffffffffffffffd4,1,&stack0xffffffffffffffd0,&stack0xffffffffffffffc4
                             ,&stack0xffffffffffffffcc,&stack0xffffffffffffffc8);
            goto code_r0x08003090;
        }
        iVar6 = ___ratelimit(obj.hap_enable_swr_dac_port._rs,"hap_enable_swr_dac_port");
        if (iVar6 == 0) goto code_r0x08003090;
        uVar7 = *puVar9;
        pcVar8 = "%s: SWR_VMAX update failed, rc=%d\n";
        break;
    case 0x8002d60:
        if ((puVar9[7] == 0) || (*(puVar9 + 0x5d) != '\0')) {
code_r0x08002d70:
            swr_slvdev_datapath_control(noname_1,puVar9[1],*(puVar9[1] + 0x40),1);
            uStack_40 = 0x84;
            iVar5 = regmap_write(puVar9[3],0x3081,0x84);
            if (iVar5 != 0) {
                iVar6 = ___ratelimit(obj.hap_enable_swr_dac_port._rs.27,"hap_enable_swr_dac_port");
                if (iVar6 != 0) {
                    _dev_err(*puVar9,"%s: Enable SWR_PLAY failed, rc=%d\n","hap_enable_swr_dac_port",iVar5);
                }
                swr_slvdev_datapath_control(puVar9[1],*(puVar9[1] + 0x40),0);
                sym.swr_hap_disable_hpwr_vreg(puVar9);
            }
            goto code_r0x08003090;
        }
        iVar5 = regulator_set_voltage(puVar9[7],*(puVar9 + 0xb) * 1000,0x7fffffff);
        if (iVar5 < 0) {
            iVar6 = ___ratelimit(obj.swr_hap_enable_hpwr_vreg._rs,"swr_hap_enable_hpwr_vreg");
            if (iVar6 != 0) {
                _dev_err(*puVar9,"%s: Set hpwr voltage failed, rc=%d\n","swr_hap_enable_hpwr_vreg",iVar5);
            }
        }
        else {
            iVar5 = regulator_enable(puVar9[7]);
            if (-1 < iVar5) {
                *(puVar9 + 0x5d) = 1;
                noname_1 = extraout_q0;
                goto code_r0x08002d70;
            }
            iVar6 = ___ratelimit(obj.swr_hap_enable_hpwr_vreg._rs.33,"swr_hap_enable_hpwr_vreg");
            if (iVar6 != 0) {
                _dev_err(*puVar9,"%s: Enable hpwr failed, rc=%d\n","swr_hap_enable_hpwr_vreg",iVar5);
            }
            regulator_set_voltage(puVar9[7],0,0x7fffffff);
        }
        iVar6 = ___ratelimit(obj.hap_enable_swr_dac_port._rs.25,"hap_enable_swr_dac_port");
        if (iVar6 == 0) goto code_r0x08003090;
        uVar7 = *puVar9;
        pcVar8 = "%s: Enable hpwr_vreg failed, rc=%d\n";
        break;
    case 0x8002dd8:
        uStack_40 = 4;
        iVar5 = regmap_write(puVar9[3],0x3081,4);
        if (iVar5 == 0) {
            iVar5 = sym.swr_hap_disable_hpwr_vreg(puVar9);
            if (-1 < iVar5) goto code_r0x08002e54;
            iVar6 = ___ratelimit(obj.hap_enable_swr_dac_port._rs.30,"hap_enable_swr_dac_port");
            if (iVar6 == 0) goto code_r0x08003090;
            uVar7 = *puVar9;
            pcVar8 = "%s: Disable hpwr_vreg failed, rc=%d\n";
        }
        else {
            iVar6 = ___ratelimit(obj.hap_enable_swr_dac_port._rs.29,"hap_enable_swr_dac_port");
            if (iVar6 == 0) goto code_r0x08003090;
            uVar7 = *puVar9;
            pcVar8 = "%s: Enable SWR_PLAY failed, rc=%d\n";
        }
        break;
    case 0x8002e24:
        swr_disconnect_port(puVar9[1],&stack0xffffffffffffffd4,1,&stack0xffffffffffffffd0,&stack0xffffffffffffffc8);
        swr_slvdev_datapath_control(puVar9[1],*(puVar9[1] + 0x40),0);
        swr_device_wakeup_unvote(puVar9[1]);
code_r0x08002e54:
        iVar5 = 0;
    case 0x8003090:
        goto code_r0x08003090;
    }
    _dev_err(uVar7,pcVar8,"hap_enable_swr_dac_port",iVar5);
code_r0x08003090:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_28) {
        return iVar5;
    }
    puVar9 = __stack_chk_fail();
    *extraout_x18 = sym.swr_hap_disable_hpwr_vreg;
    if ((puVar9[7] == 0) || (*(puVar9 + 0x5d) == '\0')) {
        return 0;
    }
    iVar5 = regulator_disable();
    if (iVar5 < 0) {
        iVar6 = ___ratelimit(obj.swr_hap_disable_hpwr_vreg._rs,"swr_hap_disable_hpwr_vreg");
        if (iVar6 == 0) {
            return iVar5;
        }
        uVar7 = *puVar9;
        pcVar8 = "%s: Disable hpwr failed, rc=%d\n";
    }
    else {
        iVar5 = regulator_set_voltage(puVar9[7],0,0x7fffffff);
        if (-1 < iVar5) {
            *(puVar9 + 0x5d) = 0;
            return 0;
        }
        iVar6 = ___ratelimit(obj.swr_hap_disable_hpwr_vreg._rs.36,"swr_hap_disable_hpwr_vreg");
        if (iVar6 == 0) {
            return iVar5;
        }
        uVar7 = *puVar9;
        pcVar8 = "%s: Set hpwr voltage failed, rc=%d\n";
    }
    _dev_err(uVar7,pcVar8,"swr_hap_disable_hpwr_vreg",iVar5);
    return iVar5;
}


// ===== sym.swr_hap_disable_hpwr_vreg @ 0x0800313c (size 212) =====

int sym.swr_hap_disable_hpwr_vreg(int64_t arg1)

{
    int iVar1;
    int iVar2;
    ulong uVar3;
    char *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 0x38) == 0) || (*(arg1 + 0x5d) == '\0')) {
        return 0;
    }
    iVar1 = regulator_disable();
    if (iVar1 < 0) {
        iVar2 = ___ratelimit(obj.swr_hap_disable_hpwr_vreg._rs,"swr_hap_disable_hpwr_vreg");
        if (iVar2 == 0) {
            return iVar1;
        }
        uVar3 = *arg1;
        pcVar4 = "%s: Disable hpwr failed, rc=%d\n";
    }
    else {
        iVar1 = regulator_set_voltage(*(arg1 + 0x38),0,0x7fffffff);
        if (-1 < iVar1) {
            *(arg1 + 0x5d) = 0;
            return 0;
        }
        iVar2 = ___ratelimit(obj.swr_hap_disable_hpwr_vreg._rs.36,"swr_hap_disable_hpwr_vreg");
        if (iVar2 == 0) {
            return iVar1;
        }
        uVar3 = *arg1;
        pcVar4 = "%s: Set hpwr voltage failed, rc=%d\n";
    }
    _dev_err(uVar3,pcVar4,"swr_hap_disable_hpwr_vreg",iVar1);
    return iVar1;
}


// ===== sym.swr_haptics_suspend @ 0x08003210 (size 160) =====

ulong sym.swr_haptics_suspend(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((arg1 == 0) || (arg1 == 0x48)) || (*(arg1 + 0x98) == 0)) {
        iVar1 = ___ratelimit(obj.swr_haptics_suspend._rs,"swr_haptics_suspend");
        if (iVar1 != 0) {
            _dev_err(arg1,"%s: no data for swr_hap\n","swr_haptics_suspend");
        }
        uVar2 = 0xffffffed;
    }
    else {
        __trace_bprintk(0x800323c,*0x8003000,"swr_haptics_suspend");
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.swr_haptics_resume @ 0x080032b0 (size 160) =====

ulong sym.swr_haptics_resume(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((arg1 == 0) || (arg1 == 0x48)) || (*(arg1 + 0x98) == 0)) {
        iVar1 = ___ratelimit(obj.swr_haptics_resume._rs,"swr_haptics_resume");
        if (iVar1 != 0) {
            _dev_err(arg1,"%s: no data for swr_hap\n","swr_haptics_resume");
        }
        uVar2 = 0xffffffed;
    }
    else {
        __trace_bprintk(0x80032dc,*0x8003000,"swr_haptics_resume");
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.__cfi_check_fail @ 0x08003350 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08003394

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
    //switch table (4 cases) at 0x8000640
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80033a8);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080033b4 (size 44) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    swr_driver_register(reloc.swr_haptics_probe.1979f192ba4a223d303c434a5991f2aa.cfi_jt);
    return;
}


// ===== sym.cleanup_module @ 0x080033e0 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    swr_driver_unregister(reloc.swr_haptics_probe.1979f192ba4a223d303c434a5991f2aa.cfi_jt);
    return;
}

