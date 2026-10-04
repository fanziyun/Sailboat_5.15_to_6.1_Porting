// decompiled from lpass_cdc_va_macro_dlkm by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08008000 (size 848) =====

//WARNING: Switch with 1 destination removed at 0x0800c350

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x65013fe89c46b56) {
        if (arg1 < -0x3557318fb8d07b71) {
            if (-0x550b9e52359ac615 < arg1) {
                if (arg1 != -0x550b9e52359ac614) {
                    if ((arg1 == -0x49739d0000a0fe53) && ((pcVar1 + -0x80083e0 >> 3 | pcVar1 << 0x3d) < 7)) {
                        return;
                    }
                    goto code_r0x0800c310;
                }
                pcVar2 = sym.lpass_cdc_va_macro_tx_hpf_corner_freq_callback.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
code_r0x08008324:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 3) {
                    return;
                }
                goto code_r0x0800c310;
            }
            if (arg1 != -0x749213c658cf941a) {
                if ((arg1 == -0x57be845bca9148ef) && ((pcVar1 + -0x80083b8 >> 3 | pcVar1 << 0x3d) < 4)) {
                    return;
                }
                goto code_r0x0800c310;
            }
            pcVar2 = sym.snd_soc_info_enum_double.cfi_jt;
code_r0x080082dc:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x0800c310;
        }
        if (arg1 < -0xf2d15659b6de7a9) {
            if (arg1 == -0x3557318fb8d07b71) {
                pcVar2 = sym.lpass_cdc_va_macro_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                goto code_r0x080082dc;
            }
            if (arg1 != -0x2ee0710dce68437c) goto code_r0x0800c310;
            pcVar2 = sym.delayed_work_timer_fn.cfi_jt;
        }
        else {
            if (arg1 == -0xf2d15659b6de7a9) {
                pcVar2 = sym.lpass_cdc_va_macro_clk_div_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                goto code_r0x08008324;
            }
            if (arg1 != 0x2b3a43e29242445) goto code_r0x0800c310;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else if (arg1 < 0x3a2d6f9b27d89e39) {
        if (arg1 < 0x297acb8b67047b9e) {
            if (arg1 != 0x65013fe89c46b56) {
                if ((arg1 == 0x2882621ee1337d31) && ((pcVar1 + -0x8008438 >> 3 | pcVar1 << 0x3d) < 0xd)) {
                    return;
                }
                goto code_r0x0800c310;
            }
            pcVar2 = sym.lpass_cdc_va_macro_set_port_map.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else {
            if (arg1 != 0x297acb8b67047b9e) {
                if (arg1 != 0x2b17460ce4bf82db) goto code_r0x0800c310;
                pcVar2 = sym.lpass_cdc_va_macro_swrm_clock.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                goto code_r0x080082dc;
            }
            pcVar2 = sym.lpass_cdc_va_macro_reg_wake_irq.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
    }
    else if (arg1 < 0x74f0ccf11b57c4f0) {
        if (arg1 == 0x3a2d6f9b27d89e39) {
            pcVar2 = sym.lpass_cdc_va_macro_get_channel_map.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else {
            if (arg1 != 0x6b84145aa65a8cf9) goto code_r0x0800c310;
            pcVar2 = sym.lpass_cdc_va_macro_event_handler.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
    }
    else if (arg1 == 0x74f0ccf11b57c4f0) {
        pcVar2 = sym.lpass_cdc_va_macro_hw_params.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x0800c310;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x0800c310:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800c364);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08008358 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.lpass_cdc_va_macro_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08008360 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register
              (reloc.lpass_cdc_va_macro_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.delayed_work_timer_fn.cfi_jt @ 0x08008368 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.delayed_work_timer_fn.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.lpass_cdc_va_macro_set_port_map.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08008370 (size 8) =====

uint64_t sym.lpass_cdc_va_macro_set_port_map.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                   (int64_t param_1,uint param_2,uint param_3,ulong param_4)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    char *pcVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong unaff_x30;
    uchar auVar7 [12];
    uint uStack_7c;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    int64_t iStack_60;
    uint uStack_48;
    uint uStack_44;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iVar3 = lpass_cdc_get_device_ptr(*(param_1 + 0x18),3);
    if (iVar3 == 0) {
        iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs,"lpass_cdc_va_macro_get_data");
        if (iVar2 != 0) {
            pcVar6 = "%s: null device for macro!\n";
code_r0x08009ea0:
            _dev_err(*(param_1 + 0x18),pcVar6,"lpass_cdc_va_macro_set_port_map");
        }
code_r0x08009e5c:
        uVar4 = 0xffffffea;
    }
    else {
        iVar3 = *(iVar3 + 0x98);
        if ((iVar3 == 0) || (*(iVar3 + 0xa8) == 0)) {
            iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs.65,"lpass_cdc_va_macro_get_data");
            if (iVar2 != 0) {
                pcVar6 = "%s: priv is null for macro!\n";
                goto code_r0x08009ea0;
            }
            goto code_r0x08009e5c;
        }
        uStack_48 = param_3;
        uStack_44 = param_2;
        uStack_40 = param_4;
        if (*(iVar3 + 0x5c8) == NULL) {
            uVar4 = 0;
        }
        else {
            uVar4 = swrm_wcd_notify(**(iVar3 + 0x5c8),9,&uStack_48);
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return uVar4;
    }
    auVar7 = __stack_chk_fail(uVar4);
    uStack_7c = auVar7._8_4_;
    *extraout_x18 = sym.lpass_cdc_va_macro_reg_wake_irq;
    pcStack_68 = sym.lpass_cdc_va_macro_reg_wake_irq;
    iVar3 = sp_el0;
    iStack_78 = *(iVar3 + 0x5e0);
    puStack_70 = &stack0xffffffffffffffd0;
    iStack_60 = param_1;
    iVar3 = lpass_cdc_get_device_ptr(*(auVar7._0_8_ + 0x18),3);
    if (iVar3 == 0) {
        iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs,"lpass_cdc_va_macro_get_data");
        if (iVar2 != 0) {
            pcVar6 = "%s: null device for macro!\n";
code_r0x08009f9c:
            _dev_err(*(auVar7._0_8_ + 0x18),pcVar6,"lpass_cdc_va_macro_reg_wake_irq");
        }
    }
    else {
        iVar3 = *(iVar3 + 0x98);
        if ((iVar3 != 0) && (*(iVar3 + 0xa8) != 0)) {
            if (*(iVar3 + 0x5c8) == NULL) {
                uVar4 = 0;
            }
            else {
                uVar4 = swrm_wcd_notify(**(iVar3 + 0x5c8),8,&uStack_7c);
            }
            goto code_r0x08009f60;
        }
        iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs.65,"lpass_cdc_va_macro_get_data");
        if (iVar2 != 0) {
            pcVar6 = "%s: priv is null for macro!\n";
            goto code_r0x08009f9c;
        }
    }
    uVar4 = 0xffffffea;
code_r0x08009f60:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_78) {
        return uVar4;
    }
    iVar3 = __stack_chk_fail(uVar4);
    *extraout_x18_00 = sym.lpass_cdc_va_macro_clk_div_get;
    iVar5 = lpass_cdc_get_device_ptr(*(iVar3 + 0x18),3);
    if (iVar5 == 0) {
        iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs,"lpass_cdc_va_macro_get_data");
        if (iVar2 == 0) {
            return 0xffffffea;
        }
        pcVar6 = "%s: null device for macro!\n";
    }
    else {
        iVar5 = *(iVar5 + 0x98);
        if ((iVar5 != 0) && (*(iVar5 + 0xa8) != 0)) {
            uVar1 = 2;
            if (*(iVar5 + 0x5b0) != 5 || *(iVar5 + 0x699) == '\0') {
                uVar1 = *(iVar5 + 0x5b0);
            }
            return uVar1;
        }
        iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs.65,"lpass_cdc_va_macro_get_data");
        if (iVar2 == 0) {
            return 0xffffffea;
        }
        pcVar6 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar3 + 0x18),pcVar6,"lpass_cdc_va_macro_clk_div_get");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_va_macro_tx_hpf_corner_freq_callback.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08008378 (size 8) =====

void sym.lpass_cdc_va_macro_tx_hpf_corner_freq_callback.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int iVar1;
    uint8_t uVar2;
    int iVar3;
    code *pcVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    ulong uVar7;
    ulong uVar8;
    ulong *in_x18;
    int64_t arg1;
    ulong *puVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar9 = *(param_1 + -0x10);
    uVar2 = *(param_1 + -7);
    arg1 = puVar9[0x15];
    iVar3 = *(param_1 + -8) * 0x80;
    iVar1 = iVar3 + 0x3404;
    iVar3 = iVar3 + 0x3418;
    uVar6 = sym.is_amic_enabled(arg1,*(param_1 + -8));
    if ((uVar6 & 1) == 0) {
        snd_soc_component_update_bits(arg1,iVar1,0x60,uVar2 << 5);
        snd_soc_component_update_bits(arg1,iVar3,2,2);
        usleep_range_state(1000,0x3f2,2);
        uVar7 = 2;
        uVar8 = 0;
    }
    else {
        uVar5 = snd_soc_component_read(arg1,*(param_1 + -8) * 8 + 0x3100);
        lpass_cdc_clear_amic_tx_hold(*(arg1 + 0x18),uVar5 & 0xf);
        snd_soc_component_update_bits(arg1,iVar1,0x60,uVar2 << 5);
        snd_soc_component_update_bits(arg1,iVar3,3,2);
        if (3 < *(param_1 + -8)) {
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x5512,0x800a61c);
            (*pcVar4)();
        }
        switch(*(puVar9 + *(param_1 + -8) * 4 + 0x6ac)) {
        default:
            uVar7 = 0x7d;
            uVar8 = 0x82;
            break;
        case 1:
            uVar7 = 0x3e;
            uVar8 = 0x41;
            break;
        case 3:
            uVar7 = 0x1f;
            uVar8 = 0x20;
            break;
        case 4:
            uVar7 = 0x14;
            uVar8 = 0x15;
            break;
        case 5:
            uVar7 = 10;
            uVar8 = 0xb;
            break;
        case 6:
            uVar7 = 5;
            uVar8 = 6;
        }
        usleep_range_state(uVar7,uVar8,2);
        uVar7 = 3;
        uVar8 = 1;
    }
    snd_soc_component_update_bits(arg1,iVar3,uVar7,uVar8);
    mutex_lock(puVar9 + 0xf);
    iVar1 = *(puVar9 + 0xd9) + -1;
    *(puVar9 + 0xd9) = iVar1;
    if (iVar1 == 0) {
        pm_relax(*puVar9);
        iVar1 = *(puVar9 + 0xd9);
    }
    if (iVar1 < 0) {
        *(puVar9 + 0xd9) = 0;
    }
    mutex_unlock(puVar9 + 0xf);
    return;
}


// ===== sym.lpass_cdc_va_macro_add_child_devices.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08008380 (size 8) =====

uint64_t sym.lpass_cdc_va_macro_add_child_devices.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    int iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    ulong *puVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    int64_t *piVar9;
    ulong uVar10;
    char *pcVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar12;
    uint64_t uVar13;
    uint16_t uVar14;
    ulong unaff_x30;
    uchar auVar15 [16];
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_68 = *(iVar4 + 0x5e0);
    piVar9 = param_1 + -0x608;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    if (piVar9 == NULL) {
        uVar10 = 0x800150a;
code_r0x08008d08:
        uVar8 = _printk(uVar10,"lpass_cdc_va_macro_add_child_devices");
    }
    else {
        iVar4 = *piVar9;
        if (iVar4 == 0) {
            uVar10 = 0x8001484;
            goto code_r0x08008d08;
        }
        if (*(iVar4 + 0x2f0) == 0) {
            pcVar11 = "%s: DT node for va_priv does not exist\n";
code_r0x08008d20:
            uVar8 = _dev_err(iVar4,pcVar11,"lpass_cdc_va_macro_add_child_devices");
        }
        else {
            *(param_1 + 0x30) = 0;
            puVar5 = of_get_next_available_child(*(iVar4 + 0x2f0),0);
            uVar8 = 0;
            if (puVar5 != NULL) {
                iVar12 = 0;
                uVar14 = 0;
                do {
                    iVar6 = strnstr(*puVar5,"va_swr_master",0xd);
                    pcVar11 = "va_swr_ctrl";
                    if (iVar6 == 0) {
                        pcVar11 = *puVar5;
                    }
                    strlcpy(&uStack_b8,pcVar11,0x4f);
                    iVar7 = platform_device_alloc(&uStack_b8,0xffffffff);
                    iVar4 = *piVar9;
                    if (iVar7 == 0) {
                        pcVar11 = "%s: pdev memory alloc failed\n";
                        goto code_r0x08008d20;
                    }
                    *(iVar7 + 0x70) = iVar4;
                    *(iVar7 + 0x300) = puVar5;
                    if (iVar6 != 0) {
                        iVar2 = platform_device_add_data(iVar7,param_1 + -0x38,0x38);
                        if (iVar2 == 0) {
                            uVar13 = uVar14;
                            iVar12 = krealloc(iVar12,uVar13 * 8 + 8,0xcc0);
                            uVar8 = 0;
                            if (iVar12 != 0) {
                                uVar14 = uVar14 + 1;
                                *(iVar12 + uVar13 * 8) = iVar7;
                                *(param_1 + -0x40) = iVar12;
                                goto code_r0x08008cac;
                            }
                        }
                        else {
                            uVar8 = _dev_err(iVar7 + 0x10,"%s: cannot add plat data ctrl:%d\n",
                                             "lpass_cdc_va_macro_add_child_devices",uVar14);
                        }
code_r0x08008d74:
                        if ((((0 < *(param_1 + 0x30)) &&
                             (uVar8 = platform_device_put(*(param_1 + 0x48)), 1 < *(param_1 + 0x30))) &&
                            (uVar8 = platform_device_put(*(param_1 + 0x50)), 2 < *(param_1 + 0x30))) &&
                           (uVar8 = platform_device_put(*(param_1 + 0x58)), 3 < *(param_1 + 0x30))) {
code_r0x08008df8:
    //WARNING: Does not return
                            pcVar1 = SoftwareBreakpoint(0x5512,0x8008dfc);
                            (*pcVar1)();
                        }
                        goto code_r0x08008dbc;
                    }
code_r0x08008cac:
                    uVar8 = platform_device_add(iVar7);
                    if (uVar8 != 0) {
                        uVar8 = _dev_err(iVar7 + 0x10,"%s: Cannot add platform device\n",
                                         "lpass_cdc_va_macro_add_child_devices");
                        goto code_r0x08008d74;
                    }
                    uVar3 = *(param_1 + 0x30);
                    if (2 < uVar3) goto code_r0x08008dbc;
                    *(param_1 + 0x30) = uVar3 + 1;
                    if (2 < uVar3) goto code_r0x08008df8;
                    iVar4 = *piVar9;
                    *(param_1 + 0x48 + uVar3 * 8) = iVar7;
                    puVar5 = of_get_next_available_child(*(iVar4 + 0x2f0),puVar5);
                } while (puVar5 != NULL);
                uVar8 = 0;
            }
        }
    }
code_r0x08008dbc:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_68) {
        return uVar8;
    }
    auVar15 = __stack_chk_fail();
    piVar9 = auVar15._0_8_;
    *extraout_x18 = sym.lpass_cdc_va_macro_swrm_clock;
    iVar4 = dev_get_regmap(*(*piVar9 + 0x60),0);
    if (iVar4 == 0) {
        iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_swrm_clock._rs,"lpass_cdc_va_macro_swrm_clock");
        if (iVar2 == 0) {
            return 0xffffffea;
        }
        _dev_err(*piVar9,"%s: regmap is NULL\n","lpass_cdc_va_macro_swrm_clock");
        return 0xffffffea;
    }
    mutex_lock(piVar9 + 9);
    if ((auVar15._8_8_ & 1) == 0) {
        if (piVar9[0xd2] == 0) {
            if (*(piVar9 + 0x694) == 0) goto code_r0x08008f84;
        }
        else if ((*(piVar9 + 0x694) == 0) || ((*(piVar9 + 0x68c) == 0 && (piVar9[0xd1] != 0)))) {
            uVar3 = sym.lpass_cdc_va_macro_tx_va_mclk_enable(piVar9,iVar4,1);
            uVar8 = uVar3;
            if (uVar3 == 0) {
                *(piVar9 + 0xd2) = piVar9[0xd2] + -1;
            }
            goto code_r0x08008f88;
        }
        uVar3 = sym.lpass_cdc_va_macro_tx_va_mclk_enable(piVar9,iVar4,0);
        uVar8 = uVar3;
        if (uVar3 == 0) {
            *(piVar9 + 0x694) = *(piVar9 + 0x694) + -1;
        }
    }
    else {
        __pm_runtime_resume(*piVar9,4);
        if ((*(piVar9 + 0x68c) == 0) || (piVar9[0xd1] != 0)) {
            uVar3 = sym.lpass_cdc_va_macro_tx_va_mclk_enable(piVar9,iVar4,0);
            if (uVar3 != 0) goto code_r0x08008f40;
            *(piVar9 + 0x694) = *(piVar9 + 0x694) + 1;
        }
        else {
            uVar3 = sym.lpass_cdc_va_macro_tx_va_mclk_enable(piVar9,iVar4,1);
            if (uVar3 != 0) {
code_r0x08008f40:
                iVar4 = *piVar9;
                uVar8 = uVar3;
                uVar10 = ktime_get_mono_fast_ns();
                *(iVar4 + 0x218) = uVar10;
                __pm_runtime_suspend(*piVar9,0xd);
                goto code_r0x08008f88;
            }
            *(piVar9 + 0xd2) = piVar9[0xd2] + 1;
        }
        iVar4 = *piVar9;
        uVar10 = ktime_get_mono_fast_ns();
        *(iVar4 + 0x218) = uVar10;
        __pm_runtime_suspend(*piVar9,0xd);
code_r0x08008f84:
        uVar8 = 0;
    }
code_r0x08008f88:
    mutex_unlock(piVar9 + 9);
    return uVar8;
}


// ===== sym.lpass_cdc_va_macro_mute_update_callback.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08008388 (size 8) =====

void sym.lpass_cdc_va_macro_mute_update_callback.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    ulong *puVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = *(param_1 + -0x10);
    snd_soc_component_update_bits(puVar2[0x15],*(param_1 + -8) * 0x80 + 0x3400U & 0xff80,0x10,0);
    mutex_lock(puVar2 + 0xf);
    iVar1 = *(puVar2 + 0xd9) + -1;
    *(puVar2 + 0xd9) = iVar1;
    if (iVar1 == 0) {
        pm_relax(*puVar2);
        iVar1 = *(puVar2 + 0xd9);
    }
    if (iVar1 < 0) {
        *(puVar2 + 0xd9) = 0;
    }
    mutex_unlock(puVar2 + 0xf);
    return;
}


// ===== sym.snd_soc_info_enum_double.cfi_jt @ 0x08008390 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_info_enum_double.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.snd_soc_info_volsw.cfi_jt @ 0x08008398 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_info_volsw.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.lpass_cdc_va_macro_clk_div_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080083a0 (size 8) =====

uint32_t sym.lpass_cdc_va_macro_clk_div_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int iVar1;
    int64_t iVar2;
    char *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = lpass_cdc_get_device_ptr(*(param_1 + 0x18),3);
    if (iVar2 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs,"lpass_cdc_va_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: null device for macro!\n";
    }
    else {
        iVar2 = *(iVar2 + 0x98);
        if ((iVar2 != 0) && (*(iVar2 + 0xa8) != 0)) {
            if (*(iVar2 + 0x5b0) != 5 || *(iVar2 + 0x699) == '\0') {
                return *(iVar2 + 0x5b0);
            }
            return 2;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs.65,"lpass_cdc_va_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(param_1 + 0x18),pcVar3,"lpass_cdc_va_macro_clk_div_get");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_va_macro_deinit.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080083a8 (size 8) =====

ulong sym.lpass_cdc_va_macro_deinit.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int iVar1;
    int64_t iVar2;
    char *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = lpass_cdc_get_device_ptr(*(param_1 + 0x18),3);
    if (iVar2 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs,"lpass_cdc_va_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: null device for macro!\n";
    }
    else {
        iVar2 = *(iVar2 + 0x98);
        if ((iVar2 != 0) && (*(iVar2 + 0xa8) != 0)) {
            *(iVar2 + 0xa8) = 0;
            return 0;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs.65,"lpass_cdc_va_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(param_1 + 0x18),pcVar3,"lpass_cdc_va_macro_deinit");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_va_macro_init.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080083b0 (size 8) =====

int sym.lpass_cdc_va_macro_init.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    uint uVar2;
    int iVar3;
    int64_t iVar4;
    ulong uVar5;
    char *pcVar6;
    ulong *in_x18;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = lpass_cdc_get_device_ptr(*(param_1 + 0x18),3);
    if (iVar4 == 0) {
        uVar5 = *(param_1 + 0x18);
        pcVar6 = "%s: null device for macro!\n";
    }
    else {
        iVar7 = *(iVar4 + 0x98);
        if (iVar7 != 0) {
            iVar1 = param_1 + 0xd0;
            *(iVar7 + 0x698) = 0;
            *(iVar7 + 0x6c4) = 0;
            uVar2 = lpass_cdc_get_version(iVar4);
            *(iVar7 + 0x678) = uVar2;
            iVar3 = snd_soc_dapm_new_controls(iVar1,obj.lpass_cdc_va_macro_dapm_widgets,0x20);
            if (iVar3 < 0) {
                pcVar6 = "%s: Failed to add controls\n";
            }
            else {
                iVar3 = snd_soc_dapm_add_routes(iVar1,obj.va_audio_map,0x6c);
                if (iVar3 < 0) {
                    pcVar6 = "%s: Failed to add routes\n";
                }
                else {
                    iVar3 = snd_soc_dapm_new_widgets(*(param_1 + 0xe8));
                    if (iVar3 < 0) {
                        pcVar6 = "%s: Failed to add widgets\n";
                    }
                    else {
                        iVar3 = snd_soc_add_component_controls(param_1,obj.lpass_cdc_va_macro_snd_controls,10);
                        if (-1 < iVar3) {
                            snd_soc_dapm_ignore_suspend(iVar1,"VA_AIF1 Capture");
                            snd_soc_dapm_ignore_suspend(iVar1,"VA_AIF2 Capture");
                            snd_soc_dapm_ignore_suspend(iVar1,"VA_AIF3 Capture");
                            snd_soc_dapm_ignore_suspend(iVar1,"VA SWR_INPUT");
                            snd_soc_dapm_sync(iVar1);
                            *(iVar7 + 0xb0) = iVar7;
                            *(iVar7 + 0xb8) = 0;
                            *(iVar7 + 0x6c2) = 1;
                            *(iVar7 + 0xc0) = 0xfffffffe0;
                            *(iVar7 + 200) = iVar7 + 200;
                            *(iVar7 + 0xd0) = iVar7 + 200;
                            *(iVar7 + 0xd8) =
                                 sym.lpass_cdc_va_macro_tx_hpf_corner_freq_callback.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                            ;
                            init_timer_key(iVar7 + 0xf0,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                            *(iVar7 + 0x148) = iVar7;
                            *(iVar7 + 0x150) = 1;
                            *(iVar7 + 0x158) = 0xfffffffe0;
                            *(iVar7 + 0x160) = iVar7 + 0x160;
                            *(iVar7 + 0x168) = iVar7 + 0x160;
                            *(iVar7 + 0x170) =
                                 sym.lpass_cdc_va_macro_tx_hpf_corner_freq_callback.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                            ;
                            init_timer_key(iVar7 + 0x188,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                            *(iVar7 + 0x1e0) = iVar7;
                            *(iVar7 + 0x1f0) = 0xfffffffe0;
                            *(iVar7 + 0x1e8) = 2;
                            *(iVar7 + 0x1f8) = iVar7 + 0x1f8;
                            *(iVar7 + 0x200) = iVar7 + 0x1f8;
                            *(iVar7 + 0x208) =
                                 sym.lpass_cdc_va_macro_tx_hpf_corner_freq_callback.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                            ;
                            init_timer_key(iVar7 + 0x220,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                            *(iVar7 + 0x278) = iVar7;
                            *(iVar7 + 0x288) = 0xfffffffe0;
                            *(iVar7 + 0x280) = 3;
                            *(iVar7 + 0x290) = iVar7 + 0x290;
                            *(iVar7 + 0x298) = iVar7 + 0x290;
                            *(iVar7 + 0x2a0) =
                                 sym.lpass_cdc_va_macro_tx_hpf_corner_freq_callback.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                            ;
                            init_timer_key(iVar7 + 0x2b8,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                            *(iVar7 + 0x310) = iVar7;
                            *(iVar7 + 0x318) = 0;
                            *(iVar7 + 800) = 0xfffffffe0;
                            *(iVar7 + 0x328) = iVar7 + 0x328;
                            *(iVar7 + 0x330) = iVar7 + 0x328;
                            *(iVar7 + 0x338) =
                                 sym.lpass_cdc_va_macro_mute_update_callback.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                            init_timer_key(iVar7 + 0x350,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                            *(iVar7 + 0x3a8) = iVar7;
                            *(iVar7 + 0x3b0) = 1;
                            *(iVar7 + 0x3b8) = 0xfffffffe0;
                            *(iVar7 + 0x3c0) = iVar7 + 0x3c0;
                            *(iVar7 + 0x3c8) = iVar7 + 0x3c0;
                            *(iVar7 + 0x3d0) =
                                 sym.lpass_cdc_va_macro_mute_update_callback.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                            init_timer_key(iVar7 + 1000,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                            *(iVar7 + 0x440) = iVar7;
                            *(iVar7 + 0x448) = 2;
                            *(iVar7 + 0x450) = 0xfffffffe0;
                            *(iVar7 + 0x458) = iVar7 + 0x458;
                            *(iVar7 + 0x460) = iVar7 + 0x458;
                            *(iVar7 + 0x468) =
                                 sym.lpass_cdc_va_macro_mute_update_callback.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                            init_timer_key(iVar7 + 0x480,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                            *(iVar7 + 0x4d8) = iVar7;
                            *(iVar7 + 0x4e0) = 3;
                            *(iVar7 + 0x4e8) = 0xfffffffe0;
                            *(iVar7 + 0x4f0) = iVar7 + 0x4f0;
                            *(iVar7 + 0x4f8) = iVar7 + 0x4f0;
                            *(iVar7 + 0x500) =
                                 sym.lpass_cdc_va_macro_mute_update_callback.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                            init_timer_key(iVar7 + 0x518,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                            *(iVar7 + 0xa8) = param_1;
                            snd_soc_component_update_bits(param_1,0x30d0,0xee,0xcc);
                            snd_soc_component_update_bits(param_1,0x30d4,0xee,0xcc);
                            snd_soc_component_update_bits(param_1,0x30d8,0xee,0xcc);
                            return 0;
                        }
                        pcVar6 = "%s: Failed to add snd_ctls\n";
                    }
                }
            }
            _dev_err(iVar4,pcVar6,"lpass_cdc_va_macro_init");
            return iVar3;
        }
        uVar5 = *(param_1 + 0x18);
        pcVar6 = "%s: priv is null for macro!\n";
    }
    _dev_err(uVar5,pcVar6,"lpass_cdc_va_macro_init");
    return -0x16;
}


// ===== sym.pm_runtime_force_resume.cfi_jt @ 0x080083b8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.pm_runtime_force_resume.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.pm_runtime_force_suspend.cfi_jt @ 0x080083c0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.pm_runtime_force_suspend.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.lpass_cdc_runtime_suspend.cfi_jt @ 0x080083c8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.lpass_cdc_runtime_suspend.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.lpass_cdc_runtime_resume.cfi_jt @ 0x080083d0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.lpass_cdc_runtime_resume.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.lpass_cdc_va_macro_reg_wake_irq.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080083d8 (size 8) =====

uint64_t sym.lpass_cdc_va_macro_reg_wake_irq.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,uint param_2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    char *pcVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_2c = param_2;
    iVar3 = lpass_cdc_get_device_ptr(*(param_1 + 0x18),3);
    if (iVar3 == 0) {
        iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs,"lpass_cdc_va_macro_get_data");
        if (iVar2 != 0) {
            pcVar6 = "%s: null device for macro!\n";
code_r0x08009f9c:
            _dev_err(*(param_1 + 0x18),pcVar6,"lpass_cdc_va_macro_reg_wake_irq");
        }
    }
    else {
        iVar3 = *(iVar3 + 0x98);
        if ((iVar3 != 0) && (*(iVar3 + 0xa8) != 0)) {
            if (*(iVar3 + 0x5c8) == NULL) {
                uVar4 = 0;
            }
            else {
                uVar4 = swrm_wcd_notify(**(iVar3 + 0x5c8),8,&uStack_2c);
            }
            goto code_r0x08009f60;
        }
        iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs.65,"lpass_cdc_va_macro_get_data");
        if (iVar2 != 0) {
            pcVar6 = "%s: priv is null for macro!\n";
            goto code_r0x08009f9c;
        }
    }
    uVar4 = 0xffffffea;
code_r0x08009f60:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return uVar4;
    }
    iVar3 = __stack_chk_fail(uVar4);
    *extraout_x18 = sym.lpass_cdc_va_macro_clk_div_get;
    iVar5 = lpass_cdc_get_device_ptr(*(iVar3 + 0x18),3);
    if (iVar5 == 0) {
        iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs,"lpass_cdc_va_macro_get_data");
        if (iVar2 == 0) {
            return 0xffffffea;
        }
        pcVar6 = "%s: null device for macro!\n";
    }
    else {
        iVar5 = *(iVar5 + 0x98);
        if ((iVar5 != 0) && (*(iVar5 + 0xa8) != 0)) {
            uVar1 = 2;
            if (*(iVar5 + 0x5b0) != 5 || *(iVar5 + 0x699) == '\0') {
                uVar1 = *(iVar5 + 0x5b0);
            }
            return uVar1;
        }
        iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs.65,"lpass_cdc_va_macro_get_data");
        if (iVar2 == 0) {
            return 0xffffffea;
        }
        pcVar6 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar3 + 0x18),pcVar6,"lpass_cdc_va_macro_clk_div_get");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_va_macro_mclk_event.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080083e0 (size 8) =====

ulong sym.lpass_cdc_va_macro_mclk_event.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                (int64_t param_1,ulong param_2,int param_3)

{
    int iVar1;
    int64_t iVar2;
    ulong uVar3;
    char *pcVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong *arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(param_1 + 0x28);
    iVar2 = lpass_cdc_get_device_ptr(*(iVar5 + -0xb8),3);
    if (iVar2 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs,"lpass_cdc_va_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar4 = "%s: null device for macro!\n";
    }
    else {
        arg1 = *(iVar2 + 0x98);
        if ((arg1 != NULL) && (arg1[0x15] != 0)) {
            if (param_3 == 8) {
                if ((*(arg1 + 0x6c5) == '\0') || (*(arg1 + 0xd3) != '\0')) {
                    sym.lpass_cdc_va_macro_mclk_enable(arg1,0);
                }
                else {
                    lpass_cdc_tx_mclk_enable(iVar5 + -0xd0,0);
                }
                if (*(arg1 + 0x6bc) < 1) {
                    return 0;
                }
                lpass_cdc_clk_rsc_request_clock(*arg1,*(arg1 + 0x684),0,0);
                *(arg1 + 0x6bc) = *(arg1 + 0x6bc) + -1;
                return 0;
            }
            if (param_3 != 1) {
                iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_mclk_event._rs,"lpass_cdc_va_macro_mclk_event");
                if (iVar1 == 0) {
                    return 0xffffffea;
                }
                _dev_err(*arg1,"%s: invalid DAPM event %d\n","lpass_cdc_va_macro_mclk_event",param_3);
                return 0xffffffea;
            }
            iVar1 = lpass_cdc_clk_rsc_request_clock(*arg1,*(arg1 + 0x684),0,1);
            if (iVar1 == 0) {
                *(arg1 + 0x6bc) = *(arg1 + 0x6bc) + 1;
            }
            if ((*(arg1 + 0x6c5) != '\0') && (*(arg1 + 0xd3) == '\0')) {
                uVar3 = lpass_cdc_tx_mclk_enable(iVar5 + -0xd0,1);
                return uVar3;
            }
            uVar3 = sym.lpass_cdc_va_macro_mclk_enable(arg1,1);
            return uVar3;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs.65,"lpass_cdc_va_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar4 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar5 + -0xb8),pcVar4,"lpass_cdc_va_macro_mclk_event");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_va_macro_enable_micbias.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080083e8 (size 8) =====

int sym.lpass_cdc_va_macro_enable_micbias.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
              (int64_t param_1,ulong param_2,int param_3)

{
    int iVar1;
    int iVar2;
    int64_t iVar3;
    char *pcVar4;
    ulong *in_x18;
    int64_t iVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(param_1 + 0x28);
    iVar3 = lpass_cdc_get_device_ptr(*(iVar6 + -0xb8),3);
    if (iVar3 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs,"lpass_cdc_va_macro_get_data");
        if (iVar1 == 0) {
            return -0x16;
        }
        pcVar4 = "%s: null device for macro!\n";
    }
    else {
        iVar5 = *(iVar3 + 0x98);
        if ((iVar5 != 0) && (*(iVar5 + 0xa8) != 0)) {
            if (*(iVar5 + 0x668) != 0) {
                if (param_3 == 8) {
                    iVar1 = *(iVar5 + 0x680) + -1;
                    *(iVar5 + 0x680) = iVar1;
                    if (iVar1 < 1) {
                        if (iVar1 < 0) {
                            *(iVar5 + 0x680) = 0;
                            return 0;
                        }
                        iVar1 = regulator_disable();
                        if (iVar1 == 0) {
                            regulator_set_voltage(*(iVar5 + 0x668),0,*(iVar5 + 0x670));
                            regulator_set_load(*(iVar5 + 0x668),0);
                            return 0;
                        }
                        iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_enable_micbias._rs.166,
                                             "lpass_cdc_va_macro_enable_micbias");
                        if (iVar2 == 0) {
                            return iVar1;
                        }
                        pcVar4 = "%s: regulator disable failed, err = %d\n";
                        goto code_r0x0800aa38;
                    }
                }
                else if ((param_3 == 1) && (iVar1 = *(iVar5 + 0x680), *(iVar5 + 0x680) = iVar1 + 1, iVar1 < 1)) {
                    iVar1 = regulator_set_voltage(*(iVar5 + 0x668),*(iVar5 + 0x670),*(iVar5 + 0x670));
                    if (iVar1 == 0) {
                        iVar1 = regulator_set_load(*(iVar5 + 0x668),*(iVar5 + 0x674));
                        if (iVar1 == 0) {
                            iVar1 = regulator_enable(*(iVar5 + 0x668));
                            if (iVar1 == 0) {
                                return 0;
                            }
                            iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_enable_micbias._rs.164,
                                                 "lpass_cdc_va_macro_enable_micbias");
                            if (iVar2 == 0) {
                                return iVar1;
                            }
                            pcVar4 = "%s: regulator enable failed, err = %d\n";
                        }
                        else {
                            iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_enable_micbias._rs.162,
                                                 "lpass_cdc_va_macro_enable_micbias");
                            if (iVar2 == 0) {
                                return iVar1;
                            }
                            pcVar4 = "%s: Setting current failed, err = %d\n";
                        }
                    }
                    else {
                        iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_enable_micbias._rs.160,
                                             "lpass_cdc_va_macro_enable_micbias");
                        if (iVar2 == 0) {
                            return iVar1;
                        }
                        pcVar4 = "%s: Setting voltage failed, err = %d\n";
                    }
code_r0x0800aa38:
                    _dev_err(iVar3,pcVar4,"lpass_cdc_va_macro_enable_micbias",iVar1);
                    return iVar1;
                }
                return 0;
            }
            iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_enable_micbias._rs,"lpass_cdc_va_macro_enable_micbias");
            if (iVar1 == 0) {
                return -0x16;
            }
            pcVar4 = "%s:regulator not provided in dtsi\n";
            goto code_r0x0800a968;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs.65,"lpass_cdc_va_macro_get_data");
        if (iVar1 == 0) {
            return -0x16;
        }
        pcVar4 = "%s: priv is null for macro!\n";
    }
    iVar3 = *(iVar6 + -0xb8);
code_r0x0800a968:
    _dev_err(iVar3,pcVar4,"lpass_cdc_va_macro_enable_micbias");
    return -0x16;
}


// ===== sym.lpass_cdc_va_macro_swr_clk_event.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080083f0 (size 8) =====

ulong sym.lpass_cdc_va_macro_swr_clk_event.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                (int64_t param_1,ulong param_2,int param_3)

{
    int iVar1;
    int64_t iVar2;
    char *pcVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(param_1 + 0x28);
    iVar2 = lpass_cdc_get_device_ptr(*(iVar4 + -0xb8),3);
    if (iVar2 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs,"lpass_cdc_va_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: null device for macro!\n";
    }
    else {
        iVar2 = *(iVar2 + 0x98);
        if ((iVar2 != 0) && (*(iVar2 + 0xa8) != 0)) {
            if (param_3 == 8) {
                iVar1 = *(iVar2 + 0x68c) + -1;
            }
            else {
                if (param_3 != 1) {
                    return 0;
                }
                iVar1 = *(iVar2 + 0x68c) + 1;
            }
            *(iVar2 + 0x68c) = iVar1;
            return 0;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs.65,"lpass_cdc_va_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar4 + -0xb8),pcVar3,"lpass_cdc_va_macro_swr_clk_event");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_va_macro_enable_dec.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080083f8 (size 8) =====

ulong sym.lpass_cdc_va_macro_enable_dec.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                (int64_t param_1,ulong param_2,uint param_3)

{
    ulong *puVar1;
    int iVar2;
    int iVar3;
    uint8_t uVar4;
    uint8_t uVar5;
    int iVar6;
    code *pcVar7;
    uint32_t uVar8;
    int iVar9;
    uint uVar10;
    int64_t iVar11;
    uint64_t uVar12;
    ulong uVar13;
    ulong uVar14;
    int64_t iVar15;
    ulong *in_x18;
    int64_t arg1;
    uint64_t arg2;
    char *pcVar16;
    ulong *puVar17;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar15 = *(param_1 + 0x28);
    arg1 = iVar15 + -0xd0;
    iVar11 = lpass_cdc_get_device_ptr(*(iVar15 + -0xb8),3);
    if (iVar11 == 0) {
        iVar9 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs,"lpass_cdc_va_macro_get_data");
        if (iVar9 == 0) {
            return 0xffffffea;
        }
        pcVar16 = "%s: null device for macro!\n";
    }
    else {
        puVar17 = *(iVar11 + 0x98);
        if ((puVar17 != NULL) && (puVar17[0x15] != 0)) {
            uVar4 = *(param_1 + 0x4c);
            arg2 = uVar4;
            iVar6 = uVar4 * 0x80;
            iVar9 = iVar6 + 0x3400;
            uVar8 = snd_soc_component_read(arg1,iVar9);
            if (3 < arg2) {
    //WARNING: Does not return
                pcVar7 = SoftwareBreakpoint(0x5512,0x800afa4);
                (*pcVar7)();
            }
            iVar2 = iVar6 + 0x3418;
            iVar3 = iVar6 + 0x3404;
            *(puVar17 + arg2 * 4 + 0x6ac) = uVar8 & 0xf;
            uVar12 = sym.is_amic_enabled(arg1,uVar4);
            if ((uVar12 & 1) == 0) {
                iVar11 = *(param_1 + 0x28) + -0xd0;
                uVar12 = snd_soc_component_read(iVar11,uVar4 * 8 + 0x3100);
                uVar13 = 0;
                uVar14 = 1;
                switch(param_3) {
                case 2:
                    goto code_r0x0800ac00;
                default:
                    goto code_r0x0800af5c;
                case 4:
                    goto code_r0x0800adec;
                case 8:
                    uVar14 = 0;
                case 1:
                    lpass_cdc_dmic_clk_enable(iVar11,((uVar12 & 0xffffffff) >> 4) + -1,1,uVar14);
                }
            }
            uVar13 = 0;
            switch(param_3) {
            case 1:
                snd_soc_component_update_bits(arg1,iVar3,6,*(puVar17 + arg2 * 4 + 0x69c) << 1);
                uVar13 = 0x10;
                break;
            case 2:
code_r0x0800ac00:
                snd_soc_component_update_bits(arg1,iVar9,0x20,0x20);
                uVar12 = sym.is_amic_enabled(arg1,arg2);
                if ((uVar12 & 1) == 0) {
                    snd_soc_component_update_bits(arg1,iVar2,1,0);
                    usleep_range_state(1000,0x3f2,2);
                }
                uVar8 = snd_soc_component_read(arg1,iVar3);
                uVar8 = uVar8 >> 5 & 3;
                pcVar16 = puVar17 + arg2 * 0x98 + 0xb9;
                *pcVar16 = uVar8;
                if (uVar8 != 2) {
                    snd_soc_component_update_bits(arg1,iVar3,0x60,0x40);
                }
                uVar12 = sym.is_amic_enabled(arg1,uVar4);
                if (((uVar12 & 1) != 0) && (_segment.ehdr < 100)) {
                    _segment.ehdr = 100;
                }
                snd_soc_component_update_bits(arg1,iVar2,3,2);
                uVar12 = sym.is_amic_enabled(arg1,uVar4);
                if ((uVar12 & 1) == 0) {
                    snd_soc_component_update_bits(arg1,iVar2,3,0);
                }
                usleep_range_state(1000,0x3f2,2);
                snd_soc_component_update_bits(arg1,iVar2,3,1);
                usleep_range_state(6000,0x177a,2);
                puVar1 = puVar17 + 0xf;
                mutex_lock(puVar1);
                iVar9 = *(puVar17 + 0xd9);
                *(puVar17 + 0xd9) = iVar9 + 1;
                if (iVar9 == 0) {
                    pm_stay_awake(*puVar17);
                }
                mutex_unlock(puVar1);
                uVar13 = _snd_soc_info_volsw;
                uVar14 = __msecs_to_jiffies(_segment.ehdr);
                queue_delayed_work_on(0x20,uVar13,puVar17 + arg2 * 0x13 + 100,uVar14);
                if (*pcVar16 != '\x02') {
                    mutex_lock(puVar1);
                    iVar9 = *(puVar17 + 0xd9);
                    *(puVar17 + 0xd9) = iVar9 + 1;
                    if (iVar9 == 0) {
                        pm_stay_awake(*puVar17);
                    }
                    mutex_unlock(puVar1);
                    queue_delayed_work_on(0x20,_snd_soc_info_volsw,puVar17 + arg2 * 0x13 + 0x18,0x4b);
                }
                uVar10 = snd_soc_component_read(arg1,iVar6 + 0x340c);
                snd_soc_component_write(arg1,iVar6 + 0x340c,uVar10);
                return 0;
            default:
                goto code_r0x0800af5c;
            case 4:
code_r0x0800adec:
                uVar5 = *(puVar17 + arg2 * 0x98 + 0xb9);
                snd_soc_component_update_bits(arg1,iVar9,0x10,0x10);
                uVar12 = cancel_delayed_work_sync(puVar17 + arg2 * 0x13 + 0x18);
                if (((uVar12 & 1) != 0) && (uVar5 != 2)) {
                    snd_soc_component_update_bits(arg1,iVar3,0x60,uVar5 << 5);
                    uVar12 = sym.is_amic_enabled(arg1,uVar4);
                    uVar10 = 2;
                    if ((uVar12 & 1) == 0) {
                        uVar10 = 3;
                    }
                    snd_soc_component_update_bits(arg1,iVar2,3,uVar10);
                    usleep_range_state(1000,0x3f2,2);
                    snd_soc_component_update_bits(arg1,iVar2,3,1);
                }
                puVar1 = puVar17 + 0xf;
                mutex_lock(puVar1);
                iVar9 = *(puVar17 + 0xd9) + -1;
                *(puVar17 + 0xd9) = iVar9;
                if (iVar9 == 0) {
                    pm_relax(*puVar17);
                    iVar9 = *(puVar17 + 0xd9);
                }
                if (iVar9 < 0) {
                    *(puVar17 + 0xd9) = 0;
                }
                mutex_unlock(puVar1);
                cancel_delayed_work_sync(puVar17 + arg2 * 0x13 + 100);
                mutex_lock(puVar1);
                iVar9 = *(puVar17 + 0xd9) + -1;
                *(puVar17 + 0xd9) = iVar9;
                if (iVar9 == 0) {
                    pm_relax(*puVar17);
                    iVar9 = *(puVar17 + 0xd9);
                }
                if (iVar9 < 0) {
                    *(puVar17 + 0xd9) = 0;
                }
                mutex_unlock(puVar1);
                return 0;
            case 8:
                snd_soc_component_update_bits(arg1,iVar9,0x20,0);
                snd_soc_component_update_bits(arg1,iVar9,0x40,0x40);
                snd_soc_component_update_bits(arg1,iVar9,0x40,0);
                uVar13 = 0;
            }
            snd_soc_component_update_bits(arg1,iVar9,0x10,uVar13);
            return 0;
        }
        iVar9 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs.65,"lpass_cdc_va_macro_get_data");
        if (iVar9 == 0) {
            return 0xffffffea;
        }
        pcVar16 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar15 + -0xb8),pcVar16,"lpass_cdc_va_macro_enable_dec");
    uVar13 = 0xffffffea;
code_r0x0800af5c:
    return uVar13;
}


// ===== sym.lpass_cdc_va_macro_tx_swr_clk_event.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08008400 (size 8) =====

ulong sym.lpass_cdc_va_macro_tx_swr_clk_event.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                (int64_t param_1,ulong param_2,uint64_t param_3)

{
    int iVar1;
    int64_t iVar2;
    char *pcVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(param_1 + 0x28);
    iVar2 = lpass_cdc_get_device_ptr(*(iVar4 + -0xb8),3);
    if (iVar2 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs,"lpass_cdc_va_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: null device for macro!\n";
    }
    else {
        iVar2 = *(iVar2 + 0x98);
        if ((iVar2 != 0) && (*(iVar2 + 0xa8) != 0)) {
            if ((param_3 & 3) != 0) {
                *(iVar2 + 0x688) = *(iVar2 + 0x688) + 1;
            }
            if ((param_3 & 0xc) == 0) {
                return 0;
            }
            *(iVar2 + 0x688) = *(iVar2 + 0x688) + -1;
            return 0;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs.65,"lpass_cdc_va_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar4 + -0xb8),pcVar3,"lpass_cdc_va_macro_tx_swr_clk_event");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_va_macro_enable_tx.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08008408 (size 8) =====

ulong sym.lpass_cdc_va_macro_enable_tx.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                (int64_t param_1,ulong param_2,int param_3)

{
    int iVar1;
    int64_t iVar2;
    ulong uVar3;
    char *pcVar4;
    ulong *in_x18;
    ulong *puVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(param_1 + 0x28);
    iVar2 = lpass_cdc_get_device_ptr(*(iVar6 + -0xb8),3);
    if (iVar2 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs,"lpass_cdc_va_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar4 = "%s: null device for macro!\n";
    }
    else {
        puVar5 = *(iVar2 + 0x98);
        if ((puVar5 != NULL) && (puVar5[0x15] != 0)) {
            if (param_3 == 4) {
                uVar3 = lpass_cdc_clk_rsc_request_clock(*puVar5,*(puVar5 + 0x684),0,1);
                if (uVar3 == 0) {
                    *(puVar5 + 0x6bc) = *(puVar5 + 0x6bc) + 1;
                    return uVar3;
                }
                return uVar3;
            }
            if (param_3 != 2) {
                iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_enable_tx._rs,"lpass_cdc_va_macro_enable_tx");
                if (iVar1 == 0) {
                    return 0xffffffea;
                }
                _dev_err(*puVar5,"%s: invalid DAPM event %d\n","lpass_cdc_va_macro_enable_tx",param_3);
                return 0xffffffea;
            }
            if (*(puVar5 + 0x6bc) < 1) {
                return 0;
            }
            uVar3 = lpass_cdc_clk_rsc_request_clock(*puVar5,*(puVar5 + 0x684),0,0);
            *(puVar5 + 0x6bc) = *(puVar5 + 0x6bc) + -1;
            return uVar3;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs.65,"lpass_cdc_va_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar4 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar6 + -0xb8),pcVar4,"lpass_cdc_va_macro_enable_tx");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_va_macro_swr_pwr_event.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08008410 (size 8) =====

int sym.lpass_cdc_va_macro_swr_pwr_event.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
              (int64_t param_1,ulong param_2,int param_3)

{
    char cVar1;
    int iVar2;
    int iVar3;
    int64_t iVar4;
    ulong uVar5;
    char *pcVar6;
    ulong uVar7;
    ulong *in_x18;
    ulong *arg1;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = *(param_1 + 0x28);
    iVar4 = lpass_cdc_get_device_ptr(*(iVar8 + -0xb8),3);
    if (iVar4 == 0) {
        iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs,"lpass_cdc_va_macro_get_data");
        if (iVar2 == 0) {
            return -0x16;
        }
        pcVar6 = "%s: null device for macro!\n";
    }
    else {
        arg1 = *(iVar4 + 0x98);
        if ((arg1 != NULL) && (arg1[0x15] != 0)) {
            if (param_3 == 8) {
                if (*(arg1 + 0xd8) != 3) {
                    return 0;
                }
                iVar2 = lpass_cdc_clk_rsc_request_clock(*arg1,*(arg1 + 0x684),0,1);
                if (iVar2 != 0) {
                    iVar3 = ___ratelimit(obj.lpass_cdc_va_macro_swr_pwr_event._rs.174,
                                         "lpass_cdc_va_macro_swr_pwr_event");
                    if (iVar3 == 0) {
                        cVar1 = *(arg1 + 0x6c2);
                    }
                    else {
                        _dev_err(*(iVar8 + -0xb8),"%s: request clock TX_CLK enable failed\n",
                                 "lpass_cdc_va_macro_swr_pwr_event");
                        cVar1 = *(arg1 + 0x6c2);
                    }
                    if (cVar1 != '\0') {
                        return iVar2;
                    }
                }
                iVar2 = sym.lpass_cdc_va_macro_core_vote(arg1,1);
                if (iVar2 < 0) {
                    iVar3 = ___ratelimit(obj.lpass_cdc_va_macro_swr_pwr_event._rs.176,
                                         "lpass_cdc_va_macro_swr_pwr_event");
                    if (iVar3 == 0) {
                        cVar1 = *(arg1 + 0x6c2);
                    }
                    else {
                        _dev_err(*arg1,"%s: va request core vote failed\n","lpass_cdc_va_macro_swr_pwr_event");
                        cVar1 = *(arg1 + 0x6c2);
                    }
                    if (cVar1 != '\0') {
                        return iVar2;
                    }
                    iVar2 = lpass_cdc_clk_rsc_request_clock(*arg1,*(arg1 + 0x684),3,0);
                }
                else {
                    iVar2 = lpass_cdc_clk_rsc_request_clock(*arg1,*(arg1 + 0x684),3,0);
                    sym.lpass_cdc_va_macro_core_vote(arg1,0);
                }
                if (iVar2 == 0) {
                    *(arg1 + 0xd8) = 0;
                    return 0;
                }
                iVar3 = ___ratelimit(obj.lpass_cdc_va_macro_swr_pwr_event._rs.177,"lpass_cdc_va_macro_swr_pwr_event");
                if (iVar3 == 0) {
                    cVar1 = *(arg1 + 0x6c2);
                }
                else {
                    _dev_err(*(iVar8 + -0xb8),"%s: request clock VA_CLK disable failed\n",
                             "lpass_cdc_va_macro_swr_pwr_event");
                    cVar1 = *(arg1 + 0x6c2);
                }
                if (cVar1 == '\0') {
                    return iVar2;
                }
                uVar5 = *arg1;
                uVar7 = 0;
            }
            else {
                if (param_3 != 1) {
                    iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_swr_pwr_event._rs.179,
                                         "lpass_cdc_va_macro_swr_pwr_event");
                    if (iVar2 == 0) {
                        return -0x16;
                    }
                    _dev_err(*arg1,"%s: invalid DAPM event %d\n","lpass_cdc_va_macro_swr_pwr_event",param_3);
                    return -0x16;
                }
                if (*(arg1 + 0xd8) == 3) {
                    return 0;
                }
                if (*(arg1 + 0x68c) == 0) {
                    return 0;
                }
                if (*(arg1 + 0x694) == 0) {
                    return 0;
                }
                iVar2 = sym.lpass_cdc_va_macro_core_vote(arg1,1);
                if (iVar2 < 0) {
                    iVar3 = ___ratelimit(obj.lpass_cdc_va_macro_swr_pwr_event._rs,"lpass_cdc_va_macro_swr_pwr_event");
                    if (iVar3 != 0) {
                        _dev_err(*arg1,"%s: va request core vote failed\n","lpass_cdc_va_macro_swr_pwr_event");
                        return iVar2;
                    }
                    return iVar2;
                }
                iVar2 = lpass_cdc_clk_rsc_request_clock(*arg1,*(arg1 + 0x684),3,1);
                sym.lpass_cdc_va_macro_core_vote(arg1,0);
                if (iVar2 != 0) {
                    return iVar2;
                }
                iVar2 = lpass_cdc_clk_rsc_request_clock(*arg1,*(arg1 + 0x684),0,0);
                if (iVar2 == 0) {
                    *(arg1 + 0xd8) = 3;
                    return 0;
                }
                uVar5 = *arg1;
                uVar7 = 3;
            }
            lpass_cdc_clk_rsc_request_clock(uVar5,*(arg1 + 0x684),uVar7,0);
            return iVar2;
        }
        iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs.65,"lpass_cdc_va_macro_get_data");
        if (iVar2 == 0) {
            return -0x16;
        }
        pcVar6 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar8 + -0xb8),pcVar6,"lpass_cdc_va_macro_swr_pwr_event");
    return -0x16;
}


// ===== sym.lpass_cdc_va_macro_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08008418 (size 8) =====

ulong sym.lpass_cdc_va_macro_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0xa8);
    if (iVar2 == 0) {
        uVar1 = 0xffffffea;
    }
    else {
        param_1 = param_1 + 0x10;
        if (*(iVar2 + 0x67c) != 0) {
            if (*(iVar2 + 0x5c8) != 0) {
                kfree();
            }
            if (0 < *(iVar2 + 0x638)) {
                platform_device_unregister(*(iVar2 + 0x650));
                if (1 < *(iVar2 + 0x638)) {
                    platform_device_unregister(*(iVar2 + 0x658));
                    if (2 < *(iVar2 + 0x638)) {
                        platform_device_unregister(*(iVar2 + 0x660));
                    }
                }
            }
        }
        __pm_runtime_disable(param_1,1);
        __pm_runtime_set_status(param_1,2);
        lpass_cdc_unregister_macro(param_1,3);
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.lpass_cdc_va_macro_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08008420 (size 8) =====

uint64_t sym.lpass_cdc_va_macro_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t *piVar3;
    ulong uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    char *pcVar8;
    ushort uVar9;
    uint32_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar11;
    uint uVar12;
    uint64_t uVar13;
    ulong unaff_x30;
    int iStack_cc;
    uint uStack_c8;
    uint uStack_c4;
    ulong uStack_c0;
    code *pcStack_b8;
    code *pcStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    code *pcStack_98;
    ulong uStack_90;
    code *pcStack_88;
    code *pcStack_80;
    code *pcStack_78;
    code *pcStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iVar7 = param_1 + 0x10;
    iStack_48 = *(iVar11 + 0x5e0);
    iStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    pcStack_78 = NULL;
    pcStack_70 = NULL;
    pcStack_88 = NULL;
    pcStack_80 = NULL;
    pcStack_98 = NULL;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    pcStack_b8 = NULL;
    pcStack_b0 = NULL;
    uStack_c0 = 0;
    uStack_c4 = 0;
    iStack_cc = 0;
    piVar3 = devm_kmalloc(iVar7,0x6d0,0xdc0);
    if (piVar3 == NULL) {
        uVar13 = 0xfffffff4;
        goto code_r0x080085b4;
    }
    uVar4 = *(param_1 + 0x300);
    *piVar3 = iVar7;
    uVar1 = of_property_read_variable_u32_array(uVar4,0x8001610,&uStack_c0 + 4,1,0);
    if (uVar1 < 0) {
        uVar13 = uVar1;
        _dev_err(iVar7,"%s: could not find %s entry in dt\n","lpass_cdc_va_macro_probe",0x8001610);
        goto code_r0x080085b4;
    }
    iVar2 = of_property_read_variable_u32_array(*(param_1 + 0x300),"qcom,va-dmic-sample-rate",&uStack_c0,1,0);
    if (-1 < iVar2) {
        if (uStack_c0 != 0) {
            uVar1 = 0;
            if (uStack_c0 != 0) {
                uVar1 = 9600000 / uStack_c0;
            }
            if (uVar1 * uStack_c0 == 9600000) {
                uVar10 = uVar1 - 2;
                if ((uVar10 < 0xf) && ((0x4057U >> (uVar10 & 0x1f) & 1) != 0)) {
                    uVar9 = *((uVar1 - 2) * 2 + 0x8007e58);
                    goto code_r0x08008640;
                }
            }
        }
        uVar13 = 0xffffffea;
        goto code_r0x080085b4;
    }
    _dev_err(iVar7,"%s: could not find %d entry in dt\n","lpass_cdc_va_macro_probe");
    uVar9 = 0;
code_r0x08008640:
    uVar4 = *(param_1 + 0x300);
    *(piVar3 + 0xb6) = uVar9;
    iVar11 = of_find_property(uVar4,"qcom,is-used-swr-gpio",0);
    if ((iVar11 != 0) &&
       (iVar2 = of_property_read_variable_u32_array(*(param_1 + 0x300),"qcom,is-used-swr-gpio",&iStack_cc,1,0),
       iVar2 < 0)) {
        _dev_err(iVar7,"%s: error reading %s in dt\n","lpass_cdc_va_macro_probe","qcom,is-used-swr-gpio");
        iStack_cc = 0;
    }
    iVar11 = of_parse_phandle(*(param_1 + 0x300),"qcom,va-swr-gpios",0);
    piVar3[0xb8] = iVar11;
    if ((iVar11 == 0) && (iStack_cc != 0)) {
        pcVar8 = "%s: swr_gpios handle not provided!\n";
    }
    else {
        iVar2 = msm_cdc_pinctrl_get_state();
        if ((iVar2 < 0) && (iStack_cc != 0)) {
            _dev_err(iVar7,"%s: failed to get swr pin state\n","lpass_cdc_va_macro_probe");
            uVar13 = 0xfffffdfb;
            goto code_r0x080085b4;
        }
        iVar11 = devm_ioremap(iVar7,uStack_c0._4_4_,0x1000);
        if (iVar11 != 0) {
            piVar3[200] = iVar11;
            uVar5 = devm_clk_get(iVar7,"lpass_audio_hw_vote");
            uVar13 = 0;
            if (uVar5 < 0xfffffffffffff001) {
                uVar13 = uVar5;
            }
            uVar4 = *(param_1 + 0x300);
            piVar3[2] = uVar13;
            iVar6 = of_parse_phandle(uVar4,"va-vdd-micb-supply",0);
            if (iVar6 == 0) {
code_r0x08008760:
                uStack_c8 = 3;
                iVar6 = of_find_property(*(param_1 + 0x300),"qcom,use-clk-id",0);
                uVar12 = 3;
                if ((iVar6 != 0) &&
                   (iVar2 = of_property_read_variable_u32_array(*(param_1 + 0x300),"qcom,use-clk-id",&uStack_c8,1,0)
                   , uVar12 = uStack_c8, iVar2 < 0)) {
                    uStack_c8 = 3;
                    uVar12 = 3;
                }
                uVar4 = *(param_1 + 0x300);
                *(piVar3 + 0x686) = uVar12;
                iVar2 = of_property_read_variable_u32_array(uVar4,"qcom,default-clk-id",&uStack_c4,1,0);
                if (iVar2 < 0) {
                    _dev_err(iVar7,"%s: could not find %s entry in dt\n","lpass_cdc_va_macro_probe",
                             "qcom,default-clk-id");
                    uStack_c4 = uStack_c8;
                }
                uVar4 = *(param_1 + 0x300);
                *(piVar3 + 0x684) = uStack_c4;
                *(piVar3 + 0xd8) = 0;
                *(piVar3 + 0xd9) = 0;
                *(piVar3 + 0x6c5) = 0;
                iVar6 = of_find_property(uVar4,"use-lpi-control",0);
                if (iVar6 != 0) {
                    *(piVar3 + 0x6c5) = 1;
                }
                if (iStack_cc != 0) {
                    *(piVar3 + 0xb7) = 1;
                    piVar3[0xc1] = 0xfffffffe0;
                    piVar3[0xc2] = piVar3 + 0xc2;
                    piVar3[0xc3] = piVar3 + 0xc2;
                    piVar3[0xc4] = sym.lpass_cdc_va_macro_add_child_devices.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                    piVar3[0xba] = piVar3;
                    piVar3[0xbb] = 0;
                    piVar3[0xbc] = 0;
                    piVar3[0xbe] = sym.lpass_cdc_va_macro_swrm_clock.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                    piVar3[0xbd] = 0;
                    piVar3[0xc0] = 0;
                    piVar3[0xbf] = sym.lpass_cdc_va_macro_core_vote.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                    __mutex_init(piVar3 + 9,"&va_priv->swr_clk_lock",obj.lpass_cdc_va_macro_probe.__key);
                }
                *(piVar3 + 0x67c) = iStack_cc;
                *(piVar3 + 0x6c3) = 1;
                __mutex_init(piVar3 + 3,"&va_priv->mclk_lock",obj.lpass_cdc_va_macro_probe.__key);
                __mutex_init(piVar3 + 0xf,"&va_priv->wlock",obj.lpass_cdc_va_macro_probe.__key);
                uStack_a0 = 0;
                uStack_a8 = 3;
                pcStack_98 = obj.lpass_cdc_va_macro_dai;
                uStack_90 = 0;
                pcStack_b8 = sym.lpass_cdc_va_macro_init.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                pcStack_b0 = sym.lpass_cdc_va_macro_deinit.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                *(param_1 + 0xa8) = piVar3;
                pcStack_88 = sym.lpass_cdc_va_macro_event_handler.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                pcStack_80 = sym.lpass_cdc_va_macro_reg_wake_irq.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                uStack_68 = 0;
                uStack_60 = 0;
                pcStack_78 = sym.lpass_cdc_va_macro_set_port_map.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                pcStack_70 = sym.lpass_cdc_va_macro_clk_div_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                uStack_50 = CONCAT22(*(piVar3 + 0x684),*(piVar3 + 0x684));
                iStack_58 = iVar11;
                uVar5 = lpass_cdc_register_macro(iVar7,3,&pcStack_b8);
                uVar13 = uVar5 & 0xffffffff;
                if (uVar5 < 0) {
                    _dev_err(iVar7,"%s: register macro failed\n","lpass_cdc_va_macro_probe");
                }
                else {
                    pm_runtime_set_autosuspend_delay(iVar7,100);
                    __pm_runtime_use_autosuspend(iVar7,1);
                    __pm_runtime_set_status(iVar7,2);
                    *(param_1 + 0x210) = *(param_1 + 0x210) | 0x100;
                    pm_runtime_enable(iVar7);
                    if (iStack_cc != 0) {
                        queue_work_on(0x20,_delayed_work_timer_fn,piVar3 + 0xc1);
                    }
                }
            }
            else {
                uVar13 = devm_regulator_get(iVar7,"va-vdd-micb");
                piVar3[0xcd] = uVar13;
                if (0xfffffffffffff000 < uVar13) {
                    _dev_err(iVar7,"%s:Failed to get micbias supply for VA Mic %d\n","lpass_cdc_va_macro_probe",
                             uVar13 & 0xffffffff);
                    goto code_r0x080085b4;
                }
                uVar5 = of_property_read_variable_u32_array
                                  (*(param_1 + 0x300),"qcom,va-vdd-micb-voltage",piVar3 + 0xce,1,0);
                uVar13 = uVar5 & 0xffffffff;
                if (uVar5 < 0) {
                    uVar4 = *(*(param_1 + 0x300) + 0x10);
                    pcVar8 = "qcom,va-vdd-micb-voltage";
                }
                else {
                    uVar1 = of_property_read_variable_u32_array
                                      (*(param_1 + 0x300),"qcom,va-vdd-micb-current",piVar3 + 0x674,1,0);
                    if (-1 < uVar1) goto code_r0x08008760;
                    uVar13 = uVar1;
                    uVar4 = *(*(param_1 + 0x300) + 0x10);
                    pcVar8 = "qcom,va-vdd-micb-current";
                }
                _dev_err(param_1 + 0x10,"%s:Looking up %s property in node %s failed\n","lpass_cdc_va_macro_probe",
                         pcVar8,uVar4);
            }
            goto code_r0x080085b4;
        }
        pcVar8 = "%s: ioremap failed\n";
    }
    _dev_err(iVar7,pcVar8,"lpass_cdc_va_macro_probe");
    uVar13 = 0xffffffea;
code_r0x080085b4:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_48) {
        iVar7 = __stack_chk_fail();
        *extraout_x18 = sym.lpass_cdc_va_macro_remove;
        iVar11 = *(iVar7 + 0xa8);
        if (iVar11 == 0) {
            uVar13 = 0xffffffea;
        }
        else {
            iVar7 = iVar7 + 0x10;
            if (*(iVar11 + 0x67c) != 0) {
                if (*(iVar11 + 0x5c8) != 0) {
                    kfree();
                }
                if (((0 < *(iVar11 + 0x638)) && (platform_device_unregister(*(iVar11 + 0x650)), 1 < *(iVar11 + 0x638)))
                   && (platform_device_unregister(*(iVar11 + 0x658)), 2 < *(iVar11 + 0x638))) {
                    platform_device_unregister(*(iVar11 + 0x660));
                }
            }
            __pm_runtime_disable(iVar7,1);
            __pm_runtime_set_status(iVar7,2);
            lpass_cdc_unregister_macro(iVar7,3);
            uVar13 = 0;
        }
        return uVar13;
    }
    return uVar13 & 0xffffffff;
}


// ===== sym.lpass_cdc_va_macro_swrm_clock.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08008428 (size 8) =====

int sym.lpass_cdc_va_macro_swrm_clock.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t *param_1,uint64_t param_2)

{
    int iVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = dev_get_regmap(*(*param_1 + 0x60),0);
    if (iVar2 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_swrm_clock._rs,"lpass_cdc_va_macro_swrm_clock");
        if (iVar1 == 0) {
            return -0x16;
        }
        _dev_err(*param_1,"%s: regmap is NULL\n","lpass_cdc_va_macro_swrm_clock");
        return -0x16;
    }
    mutex_lock(param_1 + 9);
    if ((param_2 & 1) == 0) {
        if (param_1[0xd2] == 0) {
            if (*(param_1 + 0x694) == 0) goto code_r0x08008f84;
        }
        else if ((*(param_1 + 0x694) == 0) || ((*(param_1 + 0x68c) == 0 && (param_1[0xd1] != 0)))) {
            iVar1 = sym.lpass_cdc_va_macro_tx_va_mclk_enable(param_1,iVar2,1);
            if (iVar1 == 0) {
                *(param_1 + 0xd2) = param_1[0xd2] + -1;
            }
            goto code_r0x08008f88;
        }
        iVar1 = sym.lpass_cdc_va_macro_tx_va_mclk_enable(param_1,iVar2,0);
        if (iVar1 == 0) {
            *(param_1 + 0x694) = *(param_1 + 0x694) + -1;
        }
    }
    else {
        __pm_runtime_resume(*param_1,4);
        if ((*(param_1 + 0x68c) == 0) || (param_1[0xd1] != 0)) {
            iVar1 = sym.lpass_cdc_va_macro_tx_va_mclk_enable(param_1,iVar2,0);
            if (iVar1 != 0) goto code_r0x08008f40;
            *(param_1 + 0x694) = *(param_1 + 0x694) + 1;
        }
        else {
            iVar1 = sym.lpass_cdc_va_macro_tx_va_mclk_enable(param_1,iVar2,1);
            if (iVar1 != 0) {
code_r0x08008f40:
                iVar2 = *param_1;
                uVar3 = ktime_get_mono_fast_ns();
                *(iVar2 + 0x218) = uVar3;
                __pm_runtime_suspend(*param_1,0xd);
                goto code_r0x08008f88;
            }
            *(param_1 + 0xd2) = param_1[0xd2] + 1;
        }
        iVar2 = *param_1;
        uVar3 = ktime_get_mono_fast_ns();
        *(iVar2 + 0x218) = uVar3;
        __pm_runtime_suspend(*param_1,0xd);
code_r0x08008f84:
        iVar1 = 0;
    }
code_r0x08008f88:
    mutex_unlock(param_1 + 9);
    return iVar1;
}


// ===== sym.lpass_cdc_va_macro_core_vote.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08008430 (size 8) =====

uint sym.lpass_cdc_va_macro_core_vote.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t *param_1,uint32_t param_2)

{
    int iVar1;
    uint64_t uVar2;
    ulong uVar3;
    uint uVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == NULL) {
        iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_core_vote._rs,"lpass_cdc_va_macro_core_vote");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        uVar3 = 0x8000ec4;
    }
    else {
        if ((*(param_1 + 0x6c3) != '\0') || ((param_2 & 1) == 0)) {
            __trace_bprintk(0x8008ff8,*0x800c000,"lpass_cdc_va_macro_core_vote",param_2 & 1);
            if ((param_2 & 1) == 0) {
                __pm_runtime_suspend(*param_1,0xd);
                iVar5 = *param_1;
                uVar3 = ktime_get_mono_fast_ns();
                uVar4 = 0;
                *(iVar5 + 0x218) = uVar3;
            }
            else {
                __pm_runtime_resume(*param_1,4);
                uVar2 = lpass_cdc_check_core_votes(*param_1);
                uVar4 = 0;
                if ((uVar2 & 1) == 0) {
                    uVar4 = 0xfffffdf6;
                }
            }
            __trace_bprintk(0x800907c,*0x800c000,"lpass_cdc_va_macro_core_vote");
            return uVar4;
        }
        uVar3 = 0x80016fe;
    }
    _printk(uVar3,"lpass_cdc_va_macro_core_vote");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_va_macro_lpi_put.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08008438 (size 8) =====

ulong sym.lpass_cdc_va_macro_lpi_put.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    int iVar1;
    int64_t iVar2;
    char *pcVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(param_1 + 0x80);
    iVar2 = lpass_cdc_get_device_ptr(*(iVar4 + 0x18),3);
    if (iVar2 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs,"lpass_cdc_va_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: null device for macro!\n";
    }
    else {
        iVar2 = *(iVar2 + 0x98);
        if ((iVar2 != 0) && (*(iVar2 + 0xa8) != 0)) {
            *(iVar2 + 0x698) = *(param_2 + 0x48) != 0;
            return 0;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs.65,"lpass_cdc_va_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar4 + 0x18),pcVar3,"lpass_cdc_va_macro_lpi_put");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_va_macro_tx_mixer_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08008440 (size 8) =====

ulong sym.lpass_cdc_va_macro_tx_mixer_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint32_t uVar1;
    uint8_t uVar2;
    code *pcVar3;
    int iVar4;
    int64_t iVar5;
    char *pcVar6;
    ulong *in_x18;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = snd_soc_dapm_kcontrol_widget();
    iVar7 = *(iVar5 + 0x28);
    uVar2 = *(iVar5 + 0x4c);
    uVar1 = *(*(param_1 + 0x78) + 0x18);
    iVar5 = lpass_cdc_get_device_ptr(*(iVar7 + -0xb8),3);
    if (iVar5 == 0) {
        iVar4 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs,"lpass_cdc_va_macro_get_data");
        if (iVar4 == 0) {
            return 0xffffffea;
        }
        pcVar6 = "%s: null device for macro!\n";
    }
    else {
        iVar5 = *(iVar5 + 0x98);
        if ((iVar5 != 0) && (*(iVar5 + 0xa8) != 0)) {
            if (4 < uVar2) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x5512,0x800b768);
                (*pcVar3)();
            }
            if ((*(iVar5 + uVar2 * 8 + (uVar1 >> 3 & 0x1ffffff8) + 0x570) >> (uVar1 & 0x3f) & 1) == 0) {
                *(param_2 + 0x48) = 0;
                return 0;
            }
            *(param_2 + 0x48) = 1;
            return 0;
        }
        iVar4 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs.65,"lpass_cdc_va_macro_get_data");
        if (iVar4 == 0) {
            return 0xffffffea;
        }
        pcVar6 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar7 + -0xb8),pcVar6,"lpass_cdc_va_macro_tx_mixer_get");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_va_macro_tx_mixer_put.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08008448 (size 8) =====

ulong sym.lpass_cdc_va_macro_tx_mixer_put.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t *puVar3;
    uint32_t uVar4;
    uint8_t uVar5;
    char cVar6;
    bool bVar7;
    code *pcVar8;
    int iVar9;
    int iVar10;
    int64_t iVar11;
    int64_t iVar12;
    ulong uVar13;
    char *pcVar14;
    uint64_t uVar15;
    ulong *in_x18;
    uint64_t uVar16;
    uint64_t uVar17;
    int64_t iVar18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar11 = snd_soc_dapm_kcontrol_widget();
    iVar18 = *(iVar11 + 0x28);
    uVar5 = *(iVar11 + 0x4c);
    uVar16 = uVar5;
    uVar4 = *(*(param_1 + 0x78) + 0x18);
    uVar17 = uVar4;
    iVar10 = *(param_2 + 0x48);
    iVar12 = lpass_cdc_get_device_ptr(*(iVar18 + -0xb8),3);
    if (iVar12 == 0) {
        iVar10 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs,"lpass_cdc_va_macro_get_data");
        if (iVar10 == 0) {
            return 0xffffffea;
        }
        pcVar14 = "%s: null device for macro!\n";
code_r0x0800b928:
        _dev_err(*(iVar18 + -0xb8),pcVar14,"lpass_cdc_va_macro_tx_mixer_put");
        return 0xffffffea;
    }
    iVar12 = *(iVar12 + 0x98);
    if ((iVar12 == 0) || (*(iVar12 + 0xa8) == 0)) {
        iVar10 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs.65,"lpass_cdc_va_macro_get_data");
        if (iVar10 == 0) {
            return 0xffffffea;
        }
        pcVar14 = "%s: priv is null for macro!\n";
        goto code_r0x0800b928;
    }
    if (iVar10 == 0) {
        if (4 < uVar5) goto code_r0x0800b964;
        uVar15 = uVar4 >> 3 & 0x1ffffff8;
        piVar2 = iVar12 + uVar16 * 8 + 0x570;
        if ((*(piVar2 + uVar15) >> (uVar17 & 0x3f) & 1) != 0) {
            puVar3 = piVar2 + uVar15;
            *piVar2 = *piVar2 + -1;
            Hint_Prefetch(puVar3,2,0,1);
            do {
                cVar6 = '\x01';
                bVar7 = ExclusiveMonitorPass(puVar3,0x10);
                if (bVar7) {
                    *puVar3 = *puVar3 & (1L << (uVar17 & 0x3f) ^ 0xffffffffffffffffU);
                    cVar6 = ExclusiveMonitorsStatus();
                }
            } while (cVar6 != '\0');
            goto code_r0x0800b8ec;
        }
        iVar9 = ___ratelimit(obj.lpass_cdc_va_macro_tx_mixer_put._rs.117,"lpass_cdc_va_macro_tx_mixer_put");
        if (iVar9 == 0) goto code_r0x0800b8ec;
        uVar13 = *(iVar18 + -0xb8);
        pcVar14 = "%s: channel is already disabled, dec_id = %d, dai_id = %d\n";
    }
    else {
        if (4 < uVar5) {
code_r0x0800b964:
    //WARNING: Does not return
            pcVar8 = SoftwareBreakpoint(0x5512,0x800b968);
            (*pcVar8)();
        }
        uVar15 = uVar4 >> 3 & 0x1ffffff8;
        iVar1 = iVar12 + uVar16 * 8 + 0x570;
        if ((*(iVar1 + uVar15) >> (uVar17 & 0x3f) & 1) == 0) {
            puVar3 = iVar1 + uVar15;
            Hint_Prefetch(puVar3,2,0,1);
            do {
                cVar6 = '\x01';
                bVar7 = ExclusiveMonitorPass(puVar3,0x10);
                if (bVar7) {
                    *puVar3 = *puVar3 | 1L << (uVar17 & 0x3f);
                    cVar6 = ExclusiveMonitorsStatus();
                }
            } while (cVar6 != '\0');
            iVar12 = iVar12 + uVar16 * 8;
            *(iVar12 + 0x590) = *(iVar12 + 0x590) + 1;
            goto code_r0x0800b8ec;
        }
        iVar9 = ___ratelimit(obj.lpass_cdc_va_macro_tx_mixer_put._rs,"lpass_cdc_va_macro_tx_mixer_put");
        if (iVar9 == 0) goto code_r0x0800b8ec;
        uVar13 = *(iVar18 + -0xb8);
        pcVar14 = "%s: channel is already enabled, dec_id = %d, dai_id = %d\n";
    }
    _dev_err(uVar13,pcVar14,"lpass_cdc_va_macro_tx_mixer_put",uVar17,uVar16);
code_r0x0800b8ec:
    snd_soc_dapm_mixer_update_power(*(iVar11 + 0x28),param_1,iVar10,0);
    return 0;
}


// ===== sym.lpass_cdc_va_macro_lpi_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08008450 (size 8) =====

ulong sym.lpass_cdc_va_macro_lpi_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    int iVar1;
    int64_t iVar2;
    char *pcVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(param_1 + 0x80);
    iVar2 = lpass_cdc_get_device_ptr(*(iVar4 + 0x18),3);
    if (iVar2 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs,"lpass_cdc_va_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: null device for macro!\n";
    }
    else {
        iVar2 = *(iVar2 + 0x98);
        if ((iVar2 != 0) && (*(iVar2 + 0xa8) != 0)) {
            *(param_2 + 0x48) = *(iVar2 + 0x698);
            return 0;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs.65,"lpass_cdc_va_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar4 + 0x18),pcVar3,"lpass_cdc_va_macro_lpi_get");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_va_macro_swr_dmic_put.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08008458 (size 8) =====

ulong sym.lpass_cdc_va_macro_swr_dmic_put.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    int iVar1;
    int64_t iVar2;
    char *pcVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(param_1 + 0x80);
    iVar2 = lpass_cdc_get_device_ptr(*(iVar4 + 0x18),3);
    if (iVar2 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs,"lpass_cdc_va_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: null device for macro!\n";
    }
    else {
        iVar2 = *(iVar2 + 0x98);
        if ((iVar2 != 0) && (*(iVar2 + 0xa8) != 0)) {
            *(iVar2 + 0x6c4) = *(param_2 + 0x48) != 0;
            return 0;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs.65,"lpass_cdc_va_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar4 + 0x18),pcVar3,"lpass_cdc_va_macro_swr_dmic_put");
    return 0xffffffea;
}


// ===== sym.snd_soc_put_volsw.cfi_jt @ 0x08008460 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_put_volsw.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.snd_soc_dapm_put_enum_double.cfi_jt @ 0x08008468 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_dapm_put_enum_double.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.snd_soc_get_volsw.cfi_jt @ 0x08008470 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_get_volsw.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.lpass_cdc_va_macro_dec_mode_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08008478 (size 8) =====

void sym.lpass_cdc_va_macro_dec_mode_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    char *pcVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iVar6 = *(param_1 + 0x80);
    uStack_3c = 0;
    iVar3 = lpass_cdc_get_device_ptr(*(iVar6 + 0x18),3);
    if (iVar3 == 0) {
        iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs,"lpass_cdc_va_macro_get_data");
        if (iVar2 != 0) {
            pcVar5 = "%s: null device for macro!\n";
code_r0x0800c080:
            _dev_err(*(iVar6 + 0x18),pcVar5,"lpass_cdc_va_macro_dec_mode_get");
        }
code_r0x0800c044:
        uVar4 = 0xffffffea;
    }
    else {
        iVar3 = *(iVar3 + 0x98);
        if ((iVar3 == 0) || (*(iVar3 + 0xa8) == 0)) {
            iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs.65,"lpass_cdc_va_macro_get_data");
            if (iVar2 != 0) {
                pcVar5 = "%s: priv is null for macro!\n";
                goto code_r0x0800c080;
            }
            goto code_r0x0800c044;
        }
        uVar4 = sym.lpass_cdc_va_macro_path_get(*(iVar3 + 0xa8),&uStack_3c);
        if (uVar4 == 0) {
            if (3 < uStack_3c) goto code_r0x0800c098;
            uVar4 = 0;
            *(param_2 + 0x48) = *(iVar3 + uStack_3c * 4 + 0x69c);
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(uVar4);
code_r0x0800c098:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x800c09c);
    (*pcVar1)();
}


// ===== sym.lpass_cdc_va_macro_put_dec_enum.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08008480 (size 8) =====

ulong sym.lpass_cdc_va_macro_put_dec_enum.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong uVar5;
    uint32_t uVar6;
    char *pcVar7;
    int64_t iVar8;
    ulong *in_x18;
    int64_t iVar9;
    ulong uVar10;
    int *piVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = snd_soc_dapm_kcontrol_widget();
    iVar8 = *(iVar3 + 0x28);
    piVar11 = *(param_1 + 0x78);
    iVar9 = iVar8 + -0xd0;
    iVar4 = lpass_cdc_get_device_ptr(*(iVar8 + -0xb8),3);
    if (iVar4 == 0) {
        iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs,"lpass_cdc_va_macro_get_data");
        if (iVar2 == 0) {
            return 0xffffffea;
        }
        pcVar7 = "%s: null device for macro!\n";
code_r0x0800bb70:
        _dev_err(*(iVar8 + -0xb8),pcVar7,"lpass_cdc_va_macro_put_dec_enum");
        return 0xffffffea;
    }
    iVar4 = *(iVar4 + 0x98);
    if ((iVar4 == 0) || (*(iVar4 + 0xa8) == 0)) {
        iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs.65,"lpass_cdc_va_macro_get_data");
        if (iVar2 == 0) {
            return 0xffffffea;
        }
        pcVar7 = "%s: priv is null for macro!\n";
        goto code_r0x0800bb70;
    }
    uVar1 = *(param_2 + 0x48);
    if (piVar11[2] - 1U < uVar1) {
        return 0xffffffea;
    }
    uVar6 = *piVar11 - 0x3100U >> 3;
    if (3 < (uVar6 | *piVar11 << 0x1d)) {
        iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_put_dec_enum._rs,"lpass_cdc_va_macro_put_dec_enum");
        if (iVar2 == 0) {
            return 0xffffffea;
        }
        _dev_err(*(iVar8 + -0xb8),"%s: e->reg: 0x%x not expected\n","lpass_cdc_va_macro_put_dec_enum",*piVar11);
        return 0xffffffea;
    }
    uVar10 = *(iVar3 + 8);
    uVar6 = uVar6 * 0x80 + 0x3404;
    uVar5 = strlen(uVar10);
    iVar3 = strnstr(uVar10,"SMIC",uVar5);
    if (iVar3 == 0) {
        if (uVar1 == 0) goto code_r0x0800bb98;
        uVar5 = 0x80;
        iVar3 = 0x80;
    }
    else {
        if (uVar1 == 0) goto code_r0x0800bb98;
        if (*(iVar4 + 0x6c4) == '\0') {
            uVar5 = 0x80;
            iVar3 = 0;
        }
        else {
            snd_soc_component_update_bits(iVar9,uVar6,0x80,0x80);
            snd_soc_component_update_bits(iVar9,0x3094,0x80,0);
            uVar6 = uVar1 * 2 + 0x30c6 & 0xfffc;
            uVar5 = 0xe;
            iVar3 = *(iVar4 + 0x5b0) << 1;
        }
    }
    snd_soc_component_update_bits(iVar9,uVar6,uVar5,iVar3);
code_r0x0800bb98:
    uVar5 = snd_soc_dapm_put_enum_double(param_1,param_2);
    return uVar5;
}


// ===== sym.snd_soc_dapm_get_enum_double.cfi_jt @ 0x08008488 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_dapm_get_enum_double.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.lpass_cdc_va_macro_dec_mode_put.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08008490 (size 8) =====

void sym.lpass_cdc_va_macro_dec_mode_put.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint uVar1;
    code *pcVar2;
    int iVar3;
    int64_t iVar4;
    ulong uVar5;
    char *pcVar6;
    ulong *in_x18;
    int64_t iVar7;
    ulong unaff_x30;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    iVar7 = *(param_1 + 0x80);
    uStack_3c = 0;
    uVar1 = *(param_2 + 0x48);
    iVar4 = lpass_cdc_get_device_ptr(*(iVar7 + 0x18),3);
    if (iVar4 == 0) {
        iVar3 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs,"lpass_cdc_va_macro_get_data");
        if (iVar3 != 0) {
            pcVar6 = "%s: null device for macro!\n";
code_r0x0800c198:
            _dev_err(*(iVar7 + 0x18),pcVar6,"lpass_cdc_va_macro_dec_mode_put");
        }
code_r0x0800c15c:
        uVar5 = 0xffffffea;
    }
    else {
        iVar4 = *(iVar4 + 0x98);
        if ((iVar4 == 0) || (*(iVar4 + 0xa8) == 0)) {
            iVar3 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs.65,"lpass_cdc_va_macro_get_data");
            if (iVar3 != 0) {
                pcVar6 = "%s: priv is null for macro!\n";
                goto code_r0x0800c198;
            }
            goto code_r0x0800c15c;
        }
        uVar5 = sym.lpass_cdc_va_macro_path_get(*(iVar4 + 0xa8),&uStack_3c);
        if (uVar5 == 0) {
            if (3 < uStack_3c) goto code_r0x0800c1b0;
            uVar5 = 0;
            *(iVar4 + uStack_3c * 4 + 0x69c) = uVar1;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(uVar5);
code_r0x0800c1b0:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x800c1b4);
    (*pcVar2)();
}


// ===== sym.lpass_cdc_va_macro_swr_dmic_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08008498 (size 8) =====

ulong sym.lpass_cdc_va_macro_swr_dmic_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    int iVar1;
    int64_t iVar2;
    char *pcVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(param_1 + 0x80);
    iVar2 = lpass_cdc_get_device_ptr(*(iVar4 + 0x18),3);
    if (iVar2 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs,"lpass_cdc_va_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: null device for macro!\n";
    }
    else {
        iVar2 = *(iVar2 + 0x98);
        if ((iVar2 != 0) && (*(iVar2 + 0xa8) != 0)) {
            *(param_2 + 0x48) = *(iVar2 + 0x6c4);
            return 0;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs.65,"lpass_cdc_va_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar4 + 0x18),pcVar3,"lpass_cdc_va_macro_swr_dmic_get");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_va_macro_get_channel_map.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080084a0 (size 8) =====

ulong sym.lpass_cdc_va_macro_get_channel_map.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                (int64_t param_1,uint *param_2,uint *param_3)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    char *pcVar5;
    int64_t iVar6;
    ulong *in_x18;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = *(param_1 + 0x58);
    iVar3 = lpass_cdc_get_device_ptr(*(iVar7 + 0x18),3);
    if (iVar3 == 0) {
        iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs,"lpass_cdc_va_macro_get_data");
        if (iVar2 == 0) {
            return 0xffffffea;
        }
        pcVar5 = "%s: null device for macro!\n";
    }
    else {
        iVar6 = *(iVar3 + 0x98);
        if ((iVar6 != 0) && (*(iVar6 + 0xa8) != 0)) {
            if (2 < *(param_1 + 8) - 1) {
                uVar4 = ___ratelimit(obj.lpass_cdc_va_macro_get_channel_map._rs,"lpass_cdc_va_macro_get_channel_map");
                if (uVar4 != 0) {
                    _dev_err(iVar3,"%s: Invalid AIF\n","lpass_cdc_va_macro_get_channel_map");
                    return 0;
                }
                return uVar4;
            }
            *param_3 = *(iVar6 + *(param_1 + 8) * 8 + 0x570);
            if (3 < *(param_1 + 8)) {
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x5512,0x800a1b8);
                (*pcVar1)();
            }
            *param_2 = *(iVar6 + *(param_1 + 8) * 8 + 0x590);
            return 0;
        }
        iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs.65,"lpass_cdc_va_macro_get_data");
        if (iVar2 == 0) {
            return 0xffffffea;
        }
        pcVar5 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar7 + 0x18),pcVar5,"lpass_cdc_va_macro_get_channel_map");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_va_macro_hw_params.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080084a8 (size 8) =====

ulong sym.lpass_cdc_va_macro_hw_params.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                (ulong param_1,int64_t param_2,int64_t param_3)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    code *pcVar4;
    int iVar5;
    int64_t iVar6;
    char *pcVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t iVar9;
    uint uVar10;
    int64_t iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar9 = *(param_3 + 0x58);
    iVar6 = lpass_cdc_get_device_ptr(*(iVar9 + 0x18),3);
    if (iVar6 == 0) {
        iVar5 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs,"lpass_cdc_va_macro_get_data");
        if (iVar5 != 0) {
            pcVar7 = "%s: null device for macro!\n";
code_r0x0800a40c:
            _dev_err(*(iVar9 + 0x18),pcVar7,"lpass_cdc_va_macro_hw_params");
            return 0xffffffea;
        }
    }
    else {
        iVar11 = *(iVar6 + 0x98);
        if ((iVar11 == 0) || (*(iVar11 + 0xa8) == 0)) {
            iVar5 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs.65,"lpass_cdc_va_macro_get_data");
            if (iVar5 != 0) {
                pcVar7 = "%s: priv is null for macro!\n";
                goto code_r0x0800a40c;
            }
        }
        else {
            uVar1 = *(param_2 + 0x128);
            *(iVar11 + 0x699) = 16000 < uVar1;
            if (uVar1 < 48000) {
                if (uVar1 == 8000) {
                    uVar10 = 0;
code_r0x0800a310:
                    if (*(param_3 + 8) < 5) {
                        uVar8 = *(iVar11 + *(param_3 + 8) * 8 + 0x570);
                        uVar2 = (uVar8 & 10) >> 1 | (uVar8 & 5) << 1;
                        uVar3 = 4;
                        if ((uVar8 & 0xf) != 0) {
                            uVar3 = LZCOUNT((uVar2 >> 2 | (uVar2 & 0x3333333333333333) << 2) << 0x3c);
                        }
                        while( true ) {
                            if ((uVar3 & 0x3c) != 0) {
                                return 0;
                            }
                            snd_soc_component_update_bits(iVar9,uVar3 * 0x80 + 0x3400,0xf,uVar10);
                            if (4 < *(param_3 + 8)) break;
                            if (2 < uVar3) {
                                return 0;
                            }
                            uVar1 = -1L << (uVar3 + 1 & 0x3f) & *(iVar11 + *(param_3 + 8) * 8 + 0x570);
                            uVar2 = (uVar1 & 10) >> 1 | (uVar1 & 5) << 1;
                            uVar3 = 4;
                            if ((uVar1 & 0xf) != 0) {
                                uVar3 = LZCOUNT((uVar2 >> 2 | (uVar2 & 0x3333333333333333) << 2) << 0x3c);
                            }
                        }
                    }
    //WARNING: Does not return
                    pcVar4 = SoftwareBreakpoint(0x5512,0x800a428);
                    (*pcVar4)();
                }
                if (uVar1 == 16000) {
                    uVar10 = 1;
                    goto code_r0x0800a310;
                }
                if (uVar1 == 32000) {
                    uVar10 = 3;
                    goto code_r0x0800a310;
                }
            }
            else if (uVar1 < 0x2ee00) {
                if (uVar1 == 48000) {
                    uVar10 = 4;
                    goto code_r0x0800a310;
                }
                if (uVar1 == 96000) {
                    uVar10 = 5;
                    goto code_r0x0800a310;
                }
            }
            else {
                if (uVar1 == 0x2ee00) {
                    uVar10 = 6;
                    goto code_r0x0800a310;
                }
                if (uVar1 == 0x5dc00) {
                    uVar10 = 7;
                    goto code_r0x0800a310;
                }
            }
            iVar5 = ___ratelimit(obj.lpass_cdc_va_macro_hw_params._rs,"lpass_cdc_va_macro_hw_params");
            if (iVar5 != 0) {
                _dev_err(iVar6,"%s: Invalid TX sample rate: %d\n","lpass_cdc_va_macro_hw_params",*(param_2 + 0x128));
                return 0xffffffea;
            }
        }
    }
    return 0xffffffea;
}


// ===== sym.lpass_cdc_va_macro_event_handler.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080084b0 (size 8) =====

ulong sym.lpass_cdc_va_macro_event_handler.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ushort param_2)

{
    int iVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    char *pcVar5;
    ulong *in_x18;
    ulong *arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = lpass_cdc_get_device_ptr(*(param_1 + 0x18),3);
    if (iVar3 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs,"lpass_cdc_va_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar5 = "%s: null device for macro!\n";
    }
    else {
        arg1 = *(iVar3 + 0x98);
        if ((arg1 != NULL) && (arg1[0x15] != 0)) {
            switch(param_2) {
            case 4:
                *(arg1 + 0x6c2) = 0;
                if (arg1[0xb9] != NULL) {
                    swrm_wcd_notify(*arg1[0xb9],6,0);
                }
                if ((((*(iVar3 + 0x200) & 7) != 0) || (*(iVar3 + 0x20c) != 2)) &&
                   (iVar1 = lpass_cdc_runtime_suspend(iVar3), iVar1 == 0)) {
                    __pm_runtime_disable(iVar3,1);
                    __pm_runtime_set_status(iVar3,2);
                    pm_runtime_enable(iVar3);
                }
                break;
            case 5:
                __trace_bprintk(0x8009be0,*0x800c000,"lpass_cdc_va_macro_event_handler");
                *(arg1 + 0xb7) = 1;
                *(arg1 + 0x6c2) = 1;
                if (arg1[0xb9] != NULL) {
                    swrm_wcd_notify(*arg1[0xb9],7,0);
                }
                break;
            case 6:
                if (*(arg1 + 0x5b2) != 0) {
                    iVar1 = 500;
                    do {
                        msleep(0x14);
                        iVar1 = iVar1 + -1;
                        if (*(arg1 + 0x5b2) == 0) break;
                    } while (iVar1 != 0);
                    if (iVar1 == 0) {
                        uVar4 = ___ratelimit(obj.lpass_cdc_va_macro_event_handler._rs,
                                             "lpass_cdc_va_macro_event_handler");
                        if (uVar4 == 0) {
                            return uVar4;
                        }
                        _dev_err(iVar3,"%s: va_mclk_users non-zero, SSR fail!!\n","lpass_cdc_va_macro_event_handler");
                    }
                }
                break;
            case 7:
                lpass_cdc_rsc_clk_reset(iVar3,3);
                break;
            default:
                return 0;
            case 0xc:
                *(arg1 + 0x6c3) = 1;
                iVar1 = sym.lpass_cdc_va_macro_core_vote(arg1,1);
                if (iVar1 < 0) {
                    uVar4 = ___ratelimit(obj.lpass_cdc_va_macro_event_handler._rs.208,
                                         "lpass_cdc_va_macro_event_handler");
                    if (uVar4 == 0) {
                        return uVar4;
                    }
                    _dev_err(*arg1,"%s: va request core vote failed\n","lpass_cdc_va_macro_event_handler");
                }
                else {
                    iVar1 = lpass_cdc_clk_rsc_request_clock(*arg1,*(arg1 + 0x684),*(arg1 + 0x686),1);
                    if (iVar1 < 0) {
                        iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_event_handler._rs.209,
                                             "lpass_cdc_va_macro_event_handler");
                        if (iVar2 != 0) {
                            _dev_err(*arg1,"%s, failed to enable clk, ret:%d\n","lpass_cdc_va_macro_event_handler",
                                     iVar1);
                        }
                    }
                    else {
                        lpass_cdc_clk_rsc_request_clock(*arg1,*(arg1 + 0x684),*(arg1 + 0x686),0);
                    }
                    sym.lpass_cdc_va_macro_core_vote(arg1,0);
                }
            }
            return 0;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs.65,"lpass_cdc_va_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar5 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(param_1 + 0x18),pcVar5,"lpass_cdc_va_macro_event_handler");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_va_macro_probe @ 0x080084b8 (size 1560) =====

uint64_t sym.lpass_cdc_va_macro_probe(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t *piVar3;
    ulong uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    char *pcVar8;
    ushort uVar9;
    uint32_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar11;
    uint uVar12;
    uint64_t uVar13;
    ulong unaff_x30;
    int iStack_cc;
    uint uStack_c8;
    uint uStack_c4;
    ulong uStack_c0;
    code *pcStack_b8;
    code *pcStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    code *pcStack_98;
    ulong uStack_90;
    code *pcStack_88;
    code *pcStack_80;
    code *pcStack_78;
    code *pcStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iVar7 = arg1 + 0x10;
    iStack_48 = *(iVar11 + 0x5e0);
    iStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    pcStack_78 = NULL;
    pcStack_70 = NULL;
    pcStack_88 = NULL;
    pcStack_80 = NULL;
    pcStack_98 = NULL;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    pcStack_b8 = NULL;
    pcStack_b0 = NULL;
    uStack_c0 = 0;
    uStack_c4 = 0;
    iStack_cc = 0;
    piVar3 = devm_kmalloc(iVar7,0x6d0,0xdc0);
    if (piVar3 == NULL) {
        uVar13 = 0xfffffff4;
        goto code_r0x080085b4;
    }
    uVar4 = *(arg1 + 0x300);
    *piVar3 = iVar7;
    uVar1 = of_property_read_variable_u32_array(uVar4,0x8001610,&uStack_c0 + 4,1,0);
    if (uVar1 < 0) {
        uVar13 = uVar1;
        _dev_err(iVar7,"%s: could not find %s entry in dt\n","lpass_cdc_va_macro_probe",0x8001610);
        goto code_r0x080085b4;
    }
    iVar2 = of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,va-dmic-sample-rate",&uStack_c0,1,0);
    if (-1 < iVar2) {
        if (uStack_c0 != 0) {
            uVar1 = 0;
            if (uStack_c0 != 0) {
                uVar1 = 9600000 / uStack_c0;
            }
            if (uVar1 * uStack_c0 == 9600000) {
                uVar10 = uVar1 - 2;
                if ((uVar10 < 0xf) && ((0x4057U >> (uVar10 & 0x1f) & 1) != 0)) {
                    uVar9 = *((uVar1 - 2) * 2 + 0x8007e58);
                    goto code_r0x08008640;
                }
            }
        }
        uVar13 = 0xffffffea;
        goto code_r0x080085b4;
    }
    _dev_err(iVar7,"%s: could not find %d entry in dt\n","lpass_cdc_va_macro_probe");
    uVar9 = 0;
code_r0x08008640:
    uVar4 = *(arg1 + 0x300);
    *(piVar3 + 0xb6) = uVar9;
    iVar11 = of_find_property(uVar4,"qcom,is-used-swr-gpio",0);
    if ((iVar11 != 0) &&
       (iVar2 = of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,is-used-swr-gpio",&iStack_cc,1,0),
       iVar2 < 0)) {
        _dev_err(iVar7,"%s: error reading %s in dt\n","lpass_cdc_va_macro_probe","qcom,is-used-swr-gpio");
        iStack_cc = 0;
    }
    iVar11 = of_parse_phandle(*(arg1 + 0x300),"qcom,va-swr-gpios",0);
    piVar3[0xb8] = iVar11;
    if ((iVar11 == 0) && (iStack_cc != 0)) {
        pcVar8 = "%s: swr_gpios handle not provided!\n";
    }
    else {
        iVar2 = msm_cdc_pinctrl_get_state();
        if ((iVar2 < 0) && (iStack_cc != 0)) {
            _dev_err(iVar7,"%s: failed to get swr pin state\n","lpass_cdc_va_macro_probe");
            uVar13 = 0xfffffdfb;
            goto code_r0x080085b4;
        }
        iVar11 = devm_ioremap(iVar7,uStack_c0._4_4_,0x1000);
        if (iVar11 != 0) {
            piVar3[200] = iVar11;
            uVar5 = devm_clk_get(iVar7,"lpass_audio_hw_vote");
            uVar13 = 0;
            if (uVar5 < 0xfffffffffffff001) {
                uVar13 = uVar5;
            }
            uVar4 = *(arg1 + 0x300);
            piVar3[2] = uVar13;
            iVar6 = of_parse_phandle(uVar4,"va-vdd-micb-supply",0);
            if (iVar6 == 0) {
code_r0x08008760:
                uStack_c8 = 3;
                iVar6 = of_find_property(*(arg1 + 0x300),"qcom,use-clk-id",0);
                uVar12 = 3;
                if ((iVar6 != 0) &&
                   (iVar2 = of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,use-clk-id",&uStack_c8,1,0),
                   uVar12 = uStack_c8, iVar2 < 0)) {
                    uStack_c8 = 3;
                    uVar12 = 3;
                }
                uVar4 = *(arg1 + 0x300);
                *(piVar3 + 0x686) = uVar12;
                iVar2 = of_property_read_variable_u32_array(uVar4,"qcom,default-clk-id",&uStack_c4,1,0);
                if (iVar2 < 0) {
                    _dev_err(iVar7,"%s: could not find %s entry in dt\n","lpass_cdc_va_macro_probe",
                             "qcom,default-clk-id");
                    uStack_c4 = uStack_c8;
                }
                uVar4 = *(arg1 + 0x300);
                *(piVar3 + 0x684) = uStack_c4;
                *(piVar3 + 0xd8) = 0;
                *(piVar3 + 0xd9) = 0;
                *(piVar3 + 0x6c5) = 0;
                iVar6 = of_find_property(uVar4,"use-lpi-control",0);
                if (iVar6 != 0) {
                    *(piVar3 + 0x6c5) = 1;
                }
                if (iStack_cc != 0) {
                    *(piVar3 + 0xb7) = 1;
                    piVar3[0xc1] = 0xfffffffe0;
                    piVar3[0xc2] = piVar3 + 0xc2;
                    piVar3[0xc3] = piVar3 + 0xc2;
                    piVar3[0xc4] = sym.lpass_cdc_va_macro_add_child_devices.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                    piVar3[0xba] = piVar3;
                    piVar3[0xbb] = 0;
                    piVar3[0xbc] = 0;
                    piVar3[0xbe] = sym.lpass_cdc_va_macro_swrm_clock.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                    piVar3[0xbd] = 0;
                    piVar3[0xc0] = 0;
                    piVar3[0xbf] = sym.lpass_cdc_va_macro_core_vote.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                    __mutex_init(piVar3 + 9,"&va_priv->swr_clk_lock",obj.lpass_cdc_va_macro_probe.__key);
                }
                *(piVar3 + 0x67c) = iStack_cc;
                *(piVar3 + 0x6c3) = 1;
                __mutex_init(piVar3 + 3,"&va_priv->mclk_lock",obj.lpass_cdc_va_macro_probe.__key);
                __mutex_init(piVar3 + 0xf,"&va_priv->wlock",obj.lpass_cdc_va_macro_probe.__key);
                uStack_a0 = 0;
                uStack_a8 = 3;
                pcStack_98 = obj.lpass_cdc_va_macro_dai;
                uStack_90 = 0;
                pcStack_b8 = sym.lpass_cdc_va_macro_init.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                pcStack_b0 = sym.lpass_cdc_va_macro_deinit.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                *(arg1 + 0xa8) = piVar3;
                pcStack_88 = sym.lpass_cdc_va_macro_event_handler.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                pcStack_80 = sym.lpass_cdc_va_macro_reg_wake_irq.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                uStack_68 = 0;
                uStack_60 = 0;
                pcStack_78 = sym.lpass_cdc_va_macro_set_port_map.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                pcStack_70 = sym.lpass_cdc_va_macro_clk_div_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                uStack_50 = CONCAT22(*(piVar3 + 0x684),*(piVar3 + 0x684));
                iStack_58 = iVar11;
                uVar5 = lpass_cdc_register_macro(iVar7,3,&pcStack_b8);
                uVar13 = uVar5 & 0xffffffff;
                if (uVar5 < 0) {
                    _dev_err(iVar7,"%s: register macro failed\n","lpass_cdc_va_macro_probe");
                }
                else {
                    pm_runtime_set_autosuspend_delay(iVar7,100);
                    __pm_runtime_use_autosuspend(iVar7,1);
                    __pm_runtime_set_status(iVar7,2);
                    *(arg1 + 0x210) = *(arg1 + 0x210) | 0x100;
                    pm_runtime_enable(iVar7);
                    if (iStack_cc != 0) {
                        queue_work_on(0x20,_delayed_work_timer_fn,piVar3 + 0xc1);
                    }
                }
            }
            else {
                uVar13 = devm_regulator_get(iVar7,"va-vdd-micb");
                piVar3[0xcd] = uVar13;
                if (0xfffffffffffff000 < uVar13) {
                    _dev_err(iVar7,"%s:Failed to get micbias supply for VA Mic %d\n","lpass_cdc_va_macro_probe",
                             uVar13 & 0xffffffff);
                    goto code_r0x080085b4;
                }
                uVar5 = of_property_read_variable_u32_array
                                  (*(arg1 + 0x300),"qcom,va-vdd-micb-voltage",piVar3 + 0xce,1,0);
                uVar13 = uVar5 & 0xffffffff;
                if (uVar5 < 0) {
                    uVar4 = *(*(arg1 + 0x300) + 0x10);
                    pcVar8 = "qcom,va-vdd-micb-voltage";
                }
                else {
                    uVar1 = of_property_read_variable_u32_array
                                      (*(arg1 + 0x300),"qcom,va-vdd-micb-current",piVar3 + 0x674,1,0);
                    if (-1 < uVar1) goto code_r0x08008760;
                    uVar13 = uVar1;
                    uVar4 = *(*(arg1 + 0x300) + 0x10);
                    pcVar8 = "qcom,va-vdd-micb-current";
                }
                _dev_err(arg1 + 0x10,"%s:Looking up %s property in node %s failed\n","lpass_cdc_va_macro_probe",
                         pcVar8,uVar4);
            }
            goto code_r0x080085b4;
        }
        pcVar8 = "%s: ioremap failed\n";
    }
    _dev_err(iVar7,pcVar8,"lpass_cdc_va_macro_probe");
    uVar13 = 0xffffffea;
code_r0x080085b4:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_48) {
        iVar7 = __stack_chk_fail();
        *extraout_x18 = sym.lpass_cdc_va_macro_remove;
        iVar11 = *(iVar7 + 0xa8);
        if (iVar11 == 0) {
            uVar13 = 0xffffffea;
        }
        else {
            iVar7 = iVar7 + 0x10;
            if (*(iVar11 + 0x67c) != 0) {
                if (*(iVar11 + 0x5c8) != 0) {
                    kfree();
                }
                if (((0 < *(iVar11 + 0x638)) && (platform_device_unregister(*(iVar11 + 0x650)), 1 < *(iVar11 + 0x638)))
                   && (platform_device_unregister(*(iVar11 + 0x658)), 2 < *(iVar11 + 0x638))) {
                    platform_device_unregister(*(iVar11 + 0x660));
                }
            }
            __pm_runtime_disable(iVar7,1);
            __pm_runtime_set_status(iVar7,2);
            lpass_cdc_unregister_macro(iVar7,3);
            uVar13 = 0;
        }
        return uVar13;
    }
    return uVar13 & 0xffffffff;
}


// ===== sym.lpass_cdc_va_macro_remove @ 0x08008ad0 (size 180) =====

ulong sym.lpass_cdc_va_macro_remove(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0xa8);
    if (iVar2 == 0) {
        uVar1 = 0xffffffea;
    }
    else {
        arg1 = arg1 + 0x10;
        if (*(iVar2 + 0x67c) != 0) {
            if (*(iVar2 + 0x5c8) != 0) {
                kfree();
            }
            if (0 < *(iVar2 + 0x638)) {
                platform_device_unregister(*(iVar2 + 0x650));
                if (1 < *(iVar2 + 0x638)) {
                    platform_device_unregister(*(iVar2 + 0x658));
                    if (2 < *(iVar2 + 0x638)) {
                        platform_device_unregister(*(iVar2 + 0x660));
                    }
                }
            }
        }
        __pm_runtime_disable(arg1,1);
        __pm_runtime_set_status(arg1,2);
        lpass_cdc_unregister_macro(arg1,3);
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.lpass_cdc_va_macro_add_child_devices @ 0x08008b84 (size 636) =====

uint64_t sym.lpass_cdc_va_macro_add_child_devices(int64_t arg1)

{
    code *pcVar1;
    int iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    ulong *puVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    int64_t *piVar9;
    ulong uVar10;
    char *pcVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar12;
    uint64_t uVar13;
    uint16_t uVar14;
    ulong unaff_x30;
    uchar auVar15 [16];
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_68 = *(iVar4 + 0x5e0);
    piVar9 = arg1 + -0x608;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    if (piVar9 == NULL) {
        uVar10 = 0x800150a;
code_r0x08008d08:
        uVar8 = _printk(uVar10,"lpass_cdc_va_macro_add_child_devices");
    }
    else {
        iVar4 = *piVar9;
        if (iVar4 == 0) {
            uVar10 = 0x8001484;
            goto code_r0x08008d08;
        }
        if (*(iVar4 + 0x2f0) == 0) {
            pcVar11 = "%s: DT node for va_priv does not exist\n";
code_r0x08008d20:
            uVar8 = _dev_err(iVar4,pcVar11,"lpass_cdc_va_macro_add_child_devices");
        }
        else {
            *(arg1 + 0x30) = 0;
            puVar5 = of_get_next_available_child(*(iVar4 + 0x2f0),0);
            uVar8 = 0;
            if (puVar5 != NULL) {
                iVar12 = 0;
                uVar14 = 0;
                do {
                    iVar6 = strnstr(*puVar5,"va_swr_master",0xd);
                    pcVar11 = "va_swr_ctrl";
                    if (iVar6 == 0) {
                        pcVar11 = *puVar5;
                    }
                    strlcpy(&uStack_b8,pcVar11,0x4f);
                    iVar7 = platform_device_alloc(&uStack_b8,0xffffffff);
                    iVar4 = *piVar9;
                    if (iVar7 == 0) {
                        pcVar11 = "%s: pdev memory alloc failed\n";
                        goto code_r0x08008d20;
                    }
                    *(iVar7 + 0x70) = iVar4;
                    *(iVar7 + 0x300) = puVar5;
                    if (iVar6 != 0) {
                        iVar2 = platform_device_add_data(iVar7,arg1 + -0x38,0x38);
                        if (iVar2 == 0) {
                            uVar13 = uVar14;
                            iVar12 = krealloc(iVar12,uVar13 * 8 + 8,0xcc0);
                            uVar8 = 0;
                            if (iVar12 != 0) {
                                uVar14 = uVar14 + 1;
                                *(iVar12 + uVar13 * 8) = iVar7;
                                *(arg1 + -0x40) = iVar12;
                                goto code_r0x08008cac;
                            }
                        }
                        else {
                            uVar8 = _dev_err(iVar7 + 0x10,"%s: cannot add plat data ctrl:%d\n",
                                             "lpass_cdc_va_macro_add_child_devices",uVar14);
                        }
code_r0x08008d74:
                        if ((((0 < *(arg1 + 0x30)) && (uVar8 = platform_device_put(*(arg1 + 0x48)), 1 < *(arg1 + 0x30))
                             ) && (uVar8 = platform_device_put(*(arg1 + 0x50)), 2 < *(arg1 + 0x30))) &&
                           (uVar8 = platform_device_put(*(arg1 + 0x58)), 3 < *(arg1 + 0x30))) {
code_r0x08008df8:
    //WARNING: Does not return
                            pcVar1 = SoftwareBreakpoint(0x5512,0x8008dfc);
                            (*pcVar1)();
                        }
                        goto code_r0x08008dbc;
                    }
code_r0x08008cac:
                    uVar8 = platform_device_add(iVar7);
                    if (uVar8 != 0) {
                        uVar8 = _dev_err(iVar7 + 0x10,"%s: Cannot add platform device\n",
                                         "lpass_cdc_va_macro_add_child_devices");
                        goto code_r0x08008d74;
                    }
                    uVar3 = *(arg1 + 0x30);
                    if (2 < uVar3) goto code_r0x08008dbc;
                    *(arg1 + 0x30) = uVar3 + 1;
                    if (2 < uVar3) goto code_r0x08008df8;
                    iVar4 = *piVar9;
                    *(arg1 + 0x48 + uVar3 * 8) = iVar7;
                    puVar5 = of_get_next_available_child(*(iVar4 + 0x2f0),puVar5);
                } while (puVar5 != NULL);
                uVar8 = 0;
            }
        }
    }
code_r0x08008dbc:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_68) {
        return uVar8;
    }
    auVar15 = __stack_chk_fail();
    piVar9 = auVar15._0_8_;
    *extraout_x18 = sym.lpass_cdc_va_macro_swrm_clock;
    iVar4 = dev_get_regmap(*(*piVar9 + 0x60),0);
    if (iVar4 == 0) {
        iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_swrm_clock._rs,"lpass_cdc_va_macro_swrm_clock");
        if (iVar2 == 0) {
            return 0xffffffea;
        }
        _dev_err(*piVar9,"%s: regmap is NULL\n","lpass_cdc_va_macro_swrm_clock");
        return 0xffffffea;
    }
    mutex_lock(piVar9 + 9);
    if ((auVar15._8_8_ & 1) == 0) {
        if (piVar9[0xd2] == 0) {
            if (*(piVar9 + 0x694) == 0) goto code_r0x08008f84;
        }
        else if ((*(piVar9 + 0x694) == 0) || ((*(piVar9 + 0x68c) == 0 && (piVar9[0xd1] != 0)))) {
            uVar3 = sym.lpass_cdc_va_macro_tx_va_mclk_enable(piVar9,iVar4,1);
            uVar8 = uVar3;
            if (uVar3 == 0) {
                *(piVar9 + 0xd2) = piVar9[0xd2] + -1;
            }
            goto code_r0x08008f88;
        }
        uVar3 = sym.lpass_cdc_va_macro_tx_va_mclk_enable(piVar9,iVar4,0);
        uVar8 = uVar3;
        if (uVar3 == 0) {
            *(piVar9 + 0x694) = *(piVar9 + 0x694) + -1;
        }
    }
    else {
        __pm_runtime_resume(*piVar9,4);
        if ((*(piVar9 + 0x68c) == 0) || (piVar9[0xd1] != 0)) {
            uVar3 = sym.lpass_cdc_va_macro_tx_va_mclk_enable(piVar9,iVar4,0);
            if (uVar3 != 0) goto code_r0x08008f40;
            *(piVar9 + 0x694) = *(piVar9 + 0x694) + 1;
        }
        else {
            uVar3 = sym.lpass_cdc_va_macro_tx_va_mclk_enable(piVar9,iVar4,1);
            if (uVar3 != 0) {
code_r0x08008f40:
                iVar4 = *piVar9;
                uVar8 = uVar3;
                uVar10 = ktime_get_mono_fast_ns();
                *(iVar4 + 0x218) = uVar10;
                __pm_runtime_suspend(*piVar9,0xd);
                goto code_r0x08008f88;
            }
            *(piVar9 + 0xd2) = piVar9[0xd2] + 1;
        }
        iVar4 = *piVar9;
        uVar10 = ktime_get_mono_fast_ns();
        *(iVar4 + 0x218) = uVar10;
        __pm_runtime_suspend(*piVar9,0xd);
code_r0x08008f84:
        uVar8 = 0;
    }
code_r0x08008f88:
    mutex_unlock(piVar9 + 9);
    return uVar8;
}


// ===== sym.lpass_cdc_va_macro_swrm_clock @ 0x08008e00 (size 460) =====

int sym.lpass_cdc_va_macro_swrm_clock(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = dev_get_regmap(*(*arg1 + 0x60),0);
    if (iVar2 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_swrm_clock._rs,"lpass_cdc_va_macro_swrm_clock");
        if (iVar1 == 0) {
            return -0x16;
        }
        _dev_err(*arg1,"%s: regmap is NULL\n","lpass_cdc_va_macro_swrm_clock");
        return -0x16;
    }
    mutex_lock(arg1 + 0x48);
    if ((arg2 & 1U) == 0) {
        if (*(arg1 + 0x690) == 0) {
            if (*(arg1 + 0x694) == 0) goto code_r0x08008f84;
        }
        else if ((*(arg1 + 0x694) == 0) || ((*(arg1 + 0x68c) == 0 && (*(arg1 + 0x688) != 0)))) {
            iVar1 = sym.lpass_cdc_va_macro_tx_va_mclk_enable(arg1,iVar2,1);
            if (iVar1 == 0) {
                *(arg1 + 0x690) = *(arg1 + 0x690) + -1;
            }
            goto code_r0x08008f88;
        }
        iVar1 = sym.lpass_cdc_va_macro_tx_va_mclk_enable(arg1,iVar2,0);
        if (iVar1 == 0) {
            *(arg1 + 0x694) = *(arg1 + 0x694) + -1;
        }
    }
    else {
        __pm_runtime_resume(*arg1,4);
        if ((*(arg1 + 0x68c) == 0) || (*(arg1 + 0x688) != 0)) {
            iVar1 = sym.lpass_cdc_va_macro_tx_va_mclk_enable(arg1,iVar2,0);
            if (iVar1 != 0) goto code_r0x08008f40;
            *(arg1 + 0x694) = *(arg1 + 0x694) + 1;
        }
        else {
            iVar1 = sym.lpass_cdc_va_macro_tx_va_mclk_enable(arg1,iVar2,1);
            if (iVar1 != 0) {
code_r0x08008f40:
                iVar2 = *arg1;
                uVar3 = ktime_get_mono_fast_ns();
                *(iVar2 + 0x218) = uVar3;
                __pm_runtime_suspend(*arg1,0xd);
                goto code_r0x08008f88;
            }
            *(arg1 + 0x690) = *(arg1 + 0x690) + 1;
        }
        iVar2 = *arg1;
        uVar3 = ktime_get_mono_fast_ns();
        *(iVar2 + 0x218) = uVar3;
        __pm_runtime_suspend(*arg1,0xd);
code_r0x08008f84:
        iVar1 = 0;
    }
code_r0x08008f88:
    mutex_unlock(arg1 + 0x48);
    return iVar1;
}


// ===== sym.lpass_cdc_va_macro_core_vote @ 0x08008fcc (size 272) =====

uint sym.lpass_cdc_va_macro_core_vote(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint64_t uVar2;
    ulong uVar3;
    uint uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_core_vote._rs,"lpass_cdc_va_macro_core_vote");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        uVar3 = 0x8000ec4;
    }
    else {
        if ((*(arg1 + 0x6c3) != '\0') || ((arg2 & 1U) == 0)) {
            __trace_bprintk(0x8008ff8,*0x800c000,"lpass_cdc_va_macro_core_vote",arg2 & 1);
            if ((arg2 & 1U) == 0) {
                __pm_runtime_suspend(*arg1,0xd);
                arg1 = *arg1;
                uVar3 = ktime_get_mono_fast_ns();
                uVar4 = 0;
                *(arg1 + 0x218) = uVar3;
            }
            else {
                __pm_runtime_resume(*arg1,4);
                uVar2 = lpass_cdc_check_core_votes(*arg1);
                uVar4 = 0;
                if ((uVar2 & 1) == 0) {
                    uVar4 = 0xfffffdf6;
                }
            }
            __trace_bprintk(0x800907c,*0x800c000,"lpass_cdc_va_macro_core_vote");
            return uVar4;
        }
        uVar3 = 0x80016fe;
    }
    _printk(uVar3,"lpass_cdc_va_macro_core_vote");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_va_macro_tx_va_mclk_enable @ 0x080090dc (size 832) =====

int sym.lpass_cdc_va_macro_tx_va_mclk_enable(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int iVar2;
    int iVar3;
    code *pcVar4;
    char *pcVar5;
    uint64_t in_x3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = arg3;
    if ((in_x3 & 1) == 0) {
        if (*(arg1 + 0x5b4) < 1) {
            iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_tx_va_mclk_enable._rs.39,"lpass_cdc_va_macro_tx_va_mclk_enable"
                                );
            if (iVar2 != 0) {
                _dev_err(*arg1,"va swrm clock users already 0\n");
            }
            *(arg1 + 0x5b4) = 0;
            return 0;
        }
        iVar1 = lpass_cdc_clk_rsc_request_clock(*arg1,0,0,1);
        iVar3 = *(arg1 + 0x5b4) + -1;
        *(arg1 + 0x5b4) = iVar3;
        if (iVar3 == 0) {
            regmap_update_bits_base(arg2,0x3008,1,0,0,0,0);
        }
        if (iVar2 != 0) {
            if (iVar2 == 1) {
                sym.lpass_cdc_va_macro_mclk_enable(arg1,0);
            }
code_r0x080092e4:
            if (iVar1 == 0) {
                lpass_cdc_clk_rsc_request_clock(*arg1,0,0,0);
                iVar2 = *(arg1 + 0x5b4);
            }
            else {
                iVar2 = *(arg1 + 0x5b4);
            }
            if (iVar2 == 0) {
                msm_cdc_pinctrl_select_sleep_state(*(arg1 + 0x5c0));
                msm_cdc_pinctrl_set_wakeup_capable(*(arg1 + 0x5c0),1);
            }
            return 0;
        }
        lpass_cdc_clk_rsc_fs_gen_request(*arg1,0);
        iVar2 = lpass_cdc_clk_rsc_request_clock(*arg1,0,0,0);
        if (-1 < iVar2) goto code_r0x080092e4;
        if (*(arg1 + 0x5b4) == 0) {
            msm_cdc_pinctrl_select_sleep_state(*(arg1 + 0x5c0));
        }
        pcVar4 = obj.lpass_cdc_va_macro_tx_va_mclk_enable._rs.41;
code_r0x080093a4:
        iVar3 = ___ratelimit(pcVar4,"lpass_cdc_va_macro_tx_va_mclk_enable");
        if (iVar3 == 0) goto joined_r0x080093b4;
        pcVar5 = "%s: swr request clk failed\n";
    }
    else {
        if (*(arg1 + 0x5b4) == 0) {
            msm_cdc_pinctrl_select_active_state(*(arg1 + 0x5c0));
            msm_cdc_pinctrl_set_wakeup_capable(*(arg1 + 0x5c0),0);
        }
        iVar1 = lpass_cdc_clk_rsc_request_clock(*arg1,0,0,1);
        if (iVar2 != 1) {
            if (iVar2 != 0) {
code_r0x080091ec:
                if (*(arg1 + 0x5b4) == 0) {
                    if (*(arg1 + 0x5b8) != '\0') {
                        regmap_update_bits_base(arg2,0x3008,2,2,0,0,0);
                    }
                    regmap_update_bits_base(arg2,0x3008,1,1,0,0,0);
                    if (*(arg1 + 0x5b8) != '\0') {
                        regmap_update_bits_base(arg2,0x3008,2,0,0,0,0);
                    }
                    *(arg1 + 0x5b8) = 0;
                }
                if (iVar1 == 0) {
                    lpass_cdc_clk_rsc_request_clock(*arg1,0,0,0);
                }
                *(arg1 + 0x5b4) = *(arg1 + 0x5b4) + 1;
                return 0;
            }
            iVar2 = lpass_cdc_clk_rsc_request_clock(*arg1,0,0,1);
            if (-1 < iVar2) {
                lpass_cdc_clk_rsc_fs_gen_request(*arg1,1);
                goto code_r0x080091ec;
            }
            if (*(arg1 + 0x5b4) == 0) {
                msm_cdc_pinctrl_select_sleep_state(*(arg1 + 0x5c0));
            }
            pcVar4 = obj.lpass_cdc_va_macro_tx_va_mclk_enable._rs;
            goto code_r0x080093a4;
        }
        iVar2 = sym.lpass_cdc_va_macro_mclk_enable(arg1,1);
        if (-1 < iVar2) goto code_r0x080091ec;
        if (*(arg1 + 0x5b4) == 0) {
            msm_cdc_pinctrl_select_sleep_state(*(arg1 + 0x5c0));
        }
        iVar3 = ___ratelimit(obj.lpass_cdc_va_macro_tx_va_mclk_enable._rs.37,"lpass_cdc_va_macro_tx_va_mclk_enable");
        if (iVar3 == 0) goto joined_r0x080093b4;
        pcVar5 = "%s: request clock enable failed\n";
    }
    _dev_err(*arg1,pcVar5,"lpass_cdc_va_macro_tx_va_mclk_enable");
joined_r0x080093b4:
    if (iVar1 != 0) {
        return iVar2;
    }
    lpass_cdc_clk_rsc_request_clock(*arg1,0,0,0);
    return iVar2;
}


// ===== sym.lpass_cdc_va_macro_mclk_enable @ 0x0800941c (size 588) =====

int sym.lpass_cdc_va_macro_mclk_enable(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    char *pcVar5;
    int16_t iVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = dev_get_regmap(*(*arg1 + 0x60),0);
    if (iVar3 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_mclk_enable._rs,"lpass_cdc_va_macro_mclk_enable");
        if (iVar1 == 0) {
            return -0x16;
        }
        _dev_err(*arg1,"%s: regmap is NULL\n","lpass_cdc_va_macro_mclk_enable");
        return -0x16;
    }
    mutex_lock(arg1 + 0x18);
    if ((arg2 & 1U) == 0) {
        if (*(arg1 + 0x5b2) == 0) {
            iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_mclk_enable._rs.46,"lpass_cdc_va_macro_mclk_enable");
            if (iVar1 != 0) {
                _dev_err(*arg1,"%s: clock already disabled\n","lpass_cdc_va_macro_mclk_enable");
            }
            iVar1 = 0;
            *(arg1 + 0x5b2) = 0;
        }
        else {
            *(arg1 + 0x5b2) = *(arg1 + 0x5b2) + -1;
            lpass_cdc_clk_rsc_fs_gen_request(*arg1,0);
            iVar1 = sym.lpass_cdc_va_macro_core_vote(arg1,1);
            if ((iVar1 < 0) &&
               (iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_mclk_enable._rs.48,"lpass_cdc_va_macro_mclk_enable"),
               iVar2 != 0)) {
                _dev_err(*arg1,"%s: va request core vote failed\n","lpass_cdc_va_macro_mclk_enable");
            }
            lpass_cdc_clk_rsc_request_clock(*arg1,*(arg1 + 0x684),*(arg1 + 0x686),0);
            if (iVar1 == 0) {
                sym.lpass_cdc_va_macro_core_vote(arg1,0);
            }
        }
        goto code_r0x080095d0;
    }
    iVar1 = sym.lpass_cdc_va_macro_core_vote(arg1,1);
    if (iVar1 < 0) {
        iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_mclk_enable._rs.42,"lpass_cdc_va_macro_mclk_enable");
        if (iVar2 == 0) goto code_r0x080095d0;
        uVar4 = *arg1;
        pcVar5 = "%s: va request core vote failed\n";
    }
    else {
        iVar1 = lpass_cdc_clk_rsc_request_clock(*arg1,*(arg1 + 0x684),*(arg1 + 0x686),1);
        sym.lpass_cdc_va_macro_core_vote(arg1,0);
        if (-1 < iVar1) {
            lpass_cdc_clk_rsc_fs_gen_request(*arg1,1);
            iVar6 = *(arg1 + 0x5b2);
            if (iVar6 == 0) {
                regcache_mark_dirty(iVar3);
                regcache_sync_region(iVar3,0x3000,0x35a8);
                iVar6 = *(arg1 + 0x5b2);
            }
            *(arg1 + 0x5b2) = iVar6 + 1;
            goto code_r0x080095d0;
        }
        iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_mclk_enable._rs.44,"lpass_cdc_va_macro_mclk_enable");
        if (iVar2 == 0) goto code_r0x080095d0;
        uVar4 = *arg1;
        pcVar5 = "%s: va request clock en failed\n";
    }
    _dev_err(uVar4,pcVar5,"lpass_cdc_va_macro_mclk_enable");
code_r0x080095d0:
    mutex_unlock(arg1 + 0x18);
    return iVar1;
}


// ===== sym.lpass_cdc_va_macro_init @ 0x08009668 (size 936) =====

int sym.lpass_cdc_va_macro_init(int64_t arg1)

{
    int64_t iVar1;
    uint uVar2;
    int iVar3;
    int64_t iVar4;
    ulong uVar5;
    char *pcVar6;
    ulong *in_x18;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = lpass_cdc_get_device_ptr(*(arg1 + 0x18),3);
    if (iVar4 == 0) {
        uVar5 = *(arg1 + 0x18);
        pcVar6 = "%s: null device for macro!\n";
    }
    else {
        iVar7 = *(iVar4 + 0x98);
        if (iVar7 != 0) {
            iVar1 = arg1 + 0xd0;
            *(iVar7 + 0x698) = 0;
            *(iVar7 + 0x6c4) = 0;
            uVar2 = lpass_cdc_get_version(iVar4);
            *(iVar7 + 0x678) = uVar2;
            iVar3 = snd_soc_dapm_new_controls(iVar1,obj.lpass_cdc_va_macro_dapm_widgets,0x20);
            if (iVar3 < 0) {
                pcVar6 = "%s: Failed to add controls\n";
            }
            else {
                iVar3 = snd_soc_dapm_add_routes(iVar1,obj.va_audio_map,0x6c);
                if (iVar3 < 0) {
                    pcVar6 = "%s: Failed to add routes\n";
                }
                else {
                    iVar3 = snd_soc_dapm_new_widgets(*(arg1 + 0xe8));
                    if (iVar3 < 0) {
                        pcVar6 = "%s: Failed to add widgets\n";
                    }
                    else {
                        iVar3 = snd_soc_add_component_controls(arg1,obj.lpass_cdc_va_macro_snd_controls,10);
                        if (-1 < iVar3) {
                            snd_soc_dapm_ignore_suspend(iVar1,"VA_AIF1 Capture");
                            snd_soc_dapm_ignore_suspend(iVar1,"VA_AIF2 Capture");
                            snd_soc_dapm_ignore_suspend(iVar1,"VA_AIF3 Capture");
                            snd_soc_dapm_ignore_suspend(iVar1,"VA SWR_INPUT");
                            snd_soc_dapm_sync(iVar1);
                            *(iVar7 + 0xb0) = iVar7;
                            *(iVar7 + 0xb8) = 0;
                            *(iVar7 + 0x6c2) = 1;
                            *(iVar7 + 0xc0) = 0xfffffffe0;
                            *(iVar7 + 200) = iVar7 + 200;
                            *(iVar7 + 0xd0) = iVar7 + 200;
                            *(iVar7 + 0xd8) =
                                 sym.lpass_cdc_va_macro_tx_hpf_corner_freq_callback.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                            ;
                            init_timer_key(iVar7 + 0xf0,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                            *(iVar7 + 0x148) = iVar7;
                            *(iVar7 + 0x150) = 1;
                            *(iVar7 + 0x158) = 0xfffffffe0;
                            *(iVar7 + 0x160) = iVar7 + 0x160;
                            *(iVar7 + 0x168) = iVar7 + 0x160;
                            *(iVar7 + 0x170) =
                                 sym.lpass_cdc_va_macro_tx_hpf_corner_freq_callback.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                            ;
                            init_timer_key(iVar7 + 0x188,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                            *(iVar7 + 0x1e0) = iVar7;
                            *(iVar7 + 0x1f0) = 0xfffffffe0;
                            *(iVar7 + 0x1e8) = 2;
                            *(iVar7 + 0x1f8) = iVar7 + 0x1f8;
                            *(iVar7 + 0x200) = iVar7 + 0x1f8;
                            *(iVar7 + 0x208) =
                                 sym.lpass_cdc_va_macro_tx_hpf_corner_freq_callback.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                            ;
                            init_timer_key(iVar7 + 0x220,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                            *(iVar7 + 0x278) = iVar7;
                            *(iVar7 + 0x288) = 0xfffffffe0;
                            *(iVar7 + 0x280) = 3;
                            *(iVar7 + 0x290) = iVar7 + 0x290;
                            *(iVar7 + 0x298) = iVar7 + 0x290;
                            *(iVar7 + 0x2a0) =
                                 sym.lpass_cdc_va_macro_tx_hpf_corner_freq_callback.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                            ;
                            init_timer_key(iVar7 + 0x2b8,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                            *(iVar7 + 0x310) = iVar7;
                            *(iVar7 + 0x318) = 0;
                            *(iVar7 + 800) = 0xfffffffe0;
                            *(iVar7 + 0x328) = iVar7 + 0x328;
                            *(iVar7 + 0x330) = iVar7 + 0x328;
                            *(iVar7 + 0x338) =
                                 sym.lpass_cdc_va_macro_mute_update_callback.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                            init_timer_key(iVar7 + 0x350,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                            *(iVar7 + 0x3a8) = iVar7;
                            *(iVar7 + 0x3b0) = 1;
                            *(iVar7 + 0x3b8) = 0xfffffffe0;
                            *(iVar7 + 0x3c0) = iVar7 + 0x3c0;
                            *(iVar7 + 0x3c8) = iVar7 + 0x3c0;
                            *(iVar7 + 0x3d0) =
                                 sym.lpass_cdc_va_macro_mute_update_callback.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                            init_timer_key(iVar7 + 1000,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                            *(iVar7 + 0x440) = iVar7;
                            *(iVar7 + 0x448) = 2;
                            *(iVar7 + 0x450) = 0xfffffffe0;
                            *(iVar7 + 0x458) = iVar7 + 0x458;
                            *(iVar7 + 0x460) = iVar7 + 0x458;
                            *(iVar7 + 0x468) =
                                 sym.lpass_cdc_va_macro_mute_update_callback.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                            init_timer_key(iVar7 + 0x480,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                            *(iVar7 + 0x4d8) = iVar7;
                            *(iVar7 + 0x4e0) = 3;
                            *(iVar7 + 0x4e8) = 0xfffffffe0;
                            *(iVar7 + 0x4f0) = iVar7 + 0x4f0;
                            *(iVar7 + 0x4f8) = iVar7 + 0x4f0;
                            *(iVar7 + 0x500) =
                                 sym.lpass_cdc_va_macro_mute_update_callback.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                            init_timer_key(iVar7 + 0x518,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                            *(iVar7 + 0xa8) = arg1;
                            snd_soc_component_update_bits(arg1,0x30d0,0xee,0xcc);
                            snd_soc_component_update_bits(arg1,0x30d4,0xee,0xcc);
                            snd_soc_component_update_bits(arg1,0x30d8,0xee,0xcc);
                            return 0;
                        }
                        pcVar6 = "%s: Failed to add snd_ctls\n";
                    }
                }
            }
            _dev_err(iVar4,pcVar6,"lpass_cdc_va_macro_init");
            return iVar3;
        }
        uVar5 = *(arg1 + 0x18);
        pcVar6 = "%s: priv is null for macro!\n";
    }
    _dev_err(uVar5,pcVar6,"lpass_cdc_va_macro_init");
    return -0x16;
}


// ===== sym.lpass_cdc_va_macro_deinit @ 0x08009a10 (size 180) =====

ulong sym.lpass_cdc_va_macro_deinit(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    char *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = lpass_cdc_get_device_ptr(*(arg1 + 0x18),3);
    if (iVar2 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs,"lpass_cdc_va_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: null device for macro!\n";
    }
    else {
        iVar2 = *(iVar2 + 0x98);
        if ((iVar2 != 0) && (*(iVar2 + 0xa8) != 0)) {
            *(iVar2 + 0xa8) = 0;
            return 0;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs.65,"lpass_cdc_va_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(arg1 + 0x18),pcVar3,"lpass_cdc_va_macro_deinit");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_va_macro_event_handler @ 0x08009ac4 (size 1052) =====

ulong sym.lpass_cdc_va_macro_event_handler(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int iVar3;
    int64_t iVar4;
    ulong uVar5;
    char *pcVar6;
    ulong *in_x18;
    ulong *arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = lpass_cdc_get_device_ptr(*(arg1 + 0x18),3);
    if (iVar4 == 0) {
        iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs,"lpass_cdc_va_macro_get_data");
        if (iVar2 == 0) {
            return 0xffffffea;
        }
        pcVar6 = "%s: null device for macro!\n";
    }
    else {
        arg1_00 = *(iVar4 + 0x98);
        if ((arg1_00 != NULL) && (arg1_00[0x15] != 0)) {
            uVar1 = (arg2 & 0xffff) - 4;
            if (8 < uVar1) {
                return 0;
            }
    //switch table (8 cases) at 0x8000aa0
            switch(*(uVar1 + 0x8000aa0) * 4 + 0x8009b34) {
            case 0x8009b38:
                *(arg1_00 + 0x6c2) = 0;
                if (arg1_00[0xb9] != NULL) {
                    swrm_wcd_notify(*arg1_00[0xb9],6,0);
                }
                if ((((*(iVar4 + 0x200) & 7) != 0) || (*(iVar4 + 0x20c) != 2)) &&
                   (iVar2 = lpass_cdc_runtime_suspend(iVar4), iVar2 == 0)) {
                    __pm_runtime_disable(iVar4,1);
                    __pm_runtime_set_status(iVar4,2);
                    pm_runtime_enable(iVar4);
                }
                break;
            case 0x8009be4:
                __trace_bprintk(0x8009be0,*0x800c000,"lpass_cdc_va_macro_event_handler");
                *(arg1_00 + 0xb7) = 1;
                *(arg1_00 + 0x6c2) = 1;
                if (arg1_00[0xb9] != NULL) {
                    swrm_wcd_notify(*arg1_00[0xb9],7,0);
                }
                break;
            case 0x8009c2c:
                if (*(arg1_00 + 0x5b2) != 0) {
                    iVar2 = 500;
                    do {
                        msleep(0x14);
                        iVar2 = iVar2 + -1;
                        if (*(arg1_00 + 0x5b2) == 0) break;
                    } while (iVar2 != 0);
                    if (iVar2 == 0) {
                        uVar5 = ___ratelimit(obj.lpass_cdc_va_macro_event_handler._rs,
                                             "lpass_cdc_va_macro_event_handler");
                        if (uVar5 == 0) {
                            return uVar5;
                        }
                        _dev_err(iVar4,"%s: va_mclk_users non-zero, SSR fail!!\n","lpass_cdc_va_macro_event_handler");
                    }
                }
                break;
            case 0x8009c8c:
                lpass_cdc_rsc_clk_reset(iVar4,3);
                break;
            case 0x8009ca0:
                *(arg1_00 + 0x6c3) = 1;
                iVar2 = sym.lpass_cdc_va_macro_core_vote(arg1_00,1);
                if (iVar2 < 0) {
                    uVar5 = ___ratelimit(obj.lpass_cdc_va_macro_event_handler._rs.208,
                                         "lpass_cdc_va_macro_event_handler");
                    if (uVar5 == 0) {
                        return uVar5;
                    }
                    _dev_err(*arg1_00,"%s: va request core vote failed\n","lpass_cdc_va_macro_event_handler");
                }
                else {
                    iVar2 = lpass_cdc_clk_rsc_request_clock(*arg1_00,*(arg1_00 + 0x684),*(arg1_00 + 0x686),1);
                    if (iVar2 < 0) {
                        iVar3 = ___ratelimit(obj.lpass_cdc_va_macro_event_handler._rs.209,
                                             "lpass_cdc_va_macro_event_handler");
                        if (iVar3 != 0) {
                            _dev_err(*arg1_00,"%s, failed to enable clk, ret:%d\n","lpass_cdc_va_macro_event_handler"
                                     ,iVar2);
                        }
                    }
                    else {
                        lpass_cdc_clk_rsc_request_clock(*arg1_00,*(arg1_00 + 0x684),*(arg1_00 + 0x686),0);
                    }
                    sym.lpass_cdc_va_macro_core_vote(arg1_00,0);
                }
                break;
            case 0x8009d6c:
                return 0;
            }
            return 0;
        }
        iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs.65,"lpass_cdc_va_macro_get_data");
        if (iVar2 == 0) {
            return 0xffffffea;
        }
        pcVar6 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(arg1 + 0x18),pcVar6,"lpass_cdc_va_macro_event_handler");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_va_macro_set_port_map @ 0x08009da4 (size 276) =====

uint64_t sym.lpass_cdc_va_macro_set_port_map(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    char *pcVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong unaff_x30;
    uchar auVar7 [12];
    uint uStack_7c;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    int64_t iStack_60;
    uint uStack_48;
    uint uStack_44;
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iVar3 = lpass_cdc_get_device_ptr(*(arg1 + 0x18),3);
    if (iVar3 == 0) {
        iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs,"lpass_cdc_va_macro_get_data");
        if (iVar2 != 0) {
            pcVar6 = "%s: null device for macro!\n";
code_r0x08009ea0:
            _dev_err(*(arg1 + 0x18),pcVar6,"lpass_cdc_va_macro_set_port_map");
        }
code_r0x08009e5c:
        uVar4 = 0xffffffea;
    }
    else {
        iVar3 = *(iVar3 + 0x98);
        if ((iVar3 == 0) || (*(iVar3 + 0xa8) == 0)) {
            iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs.65,"lpass_cdc_va_macro_get_data");
            if (iVar2 != 0) {
                pcVar6 = "%s: priv is null for macro!\n";
                goto code_r0x08009ea0;
            }
            goto code_r0x08009e5c;
        }
        uStack_48 = arg3;
        uStack_44 = arg2;
        iStack_40 = arg4;
        if (*(iVar3 + 0x5c8) == NULL) {
            uVar4 = 0;
        }
        else {
            uVar4 = swrm_wcd_notify(**(iVar3 + 0x5c8),9,&uStack_48);
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return uVar4;
    }
    auVar7 = __stack_chk_fail(uVar4);
    uStack_7c = auVar7._8_4_;
    *extraout_x18 = sym.lpass_cdc_va_macro_reg_wake_irq;
    pcStack_68 = sym.lpass_cdc_va_macro_reg_wake_irq;
    iVar3 = sp_el0;
    iStack_78 = *(iVar3 + 0x5e0);
    puStack_70 = &stack0xffffffffffffffd0;
    iStack_60 = arg1;
    iVar3 = lpass_cdc_get_device_ptr(*(auVar7._0_8_ + 0x18),3);
    if (iVar3 == 0) {
        iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs,"lpass_cdc_va_macro_get_data");
        if (iVar2 != 0) {
            pcVar6 = "%s: null device for macro!\n";
code_r0x08009f9c:
            _dev_err(*(auVar7._0_8_ + 0x18),pcVar6,"lpass_cdc_va_macro_reg_wake_irq");
        }
    }
    else {
        iVar3 = *(iVar3 + 0x98);
        if ((iVar3 != 0) && (*(iVar3 + 0xa8) != 0)) {
            if (*(iVar3 + 0x5c8) == NULL) {
                uVar4 = 0;
            }
            else {
                uVar4 = swrm_wcd_notify(**(iVar3 + 0x5c8),8,&uStack_7c);
            }
            goto code_r0x08009f60;
        }
        iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs.65,"lpass_cdc_va_macro_get_data");
        if (iVar2 != 0) {
            pcVar6 = "%s: priv is null for macro!\n";
            goto code_r0x08009f9c;
        }
    }
    uVar4 = 0xffffffea;
code_r0x08009f60:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_78) {
        return uVar4;
    }
    iVar3 = __stack_chk_fail(uVar4);
    *extraout_x18_00 = sym.lpass_cdc_va_macro_clk_div_get;
    iVar5 = lpass_cdc_get_device_ptr(*(iVar3 + 0x18),3);
    if (iVar5 == 0) {
        iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs,"lpass_cdc_va_macro_get_data");
        if (iVar2 == 0) {
            return 0xffffffea;
        }
        pcVar6 = "%s: null device for macro!\n";
    }
    else {
        iVar5 = *(iVar5 + 0x98);
        if ((iVar5 != 0) && (*(iVar5 + 0xa8) != 0)) {
            uVar1 = 2;
            if (*(iVar5 + 0x5b0) != 5 || *(iVar5 + 0x699) == '\0') {
                uVar1 = *(iVar5 + 0x5b0);
            }
            return uVar1;
        }
        iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs.65,"lpass_cdc_va_macro_get_data");
        if (iVar2 == 0) {
            return 0xffffffea;
        }
        pcVar6 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar3 + 0x18),pcVar6,"lpass_cdc_va_macro_clk_div_get");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_va_macro_reg_wake_irq @ 0x08009eb8 (size 252) =====

uint64_t sym.lpass_cdc_va_macro_reg_wake_irq(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    char *pcVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_2c = arg2;
    iVar3 = lpass_cdc_get_device_ptr(*(arg1 + 0x18),3);
    if (iVar3 == 0) {
        iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs,"lpass_cdc_va_macro_get_data");
        if (iVar2 != 0) {
            pcVar6 = "%s: null device for macro!\n";
code_r0x08009f9c:
            _dev_err(*(arg1 + 0x18),pcVar6,"lpass_cdc_va_macro_reg_wake_irq");
        }
    }
    else {
        iVar3 = *(iVar3 + 0x98);
        if ((iVar3 != 0) && (*(iVar3 + 0xa8) != 0)) {
            if (*(iVar3 + 0x5c8) == NULL) {
                uVar4 = 0;
            }
            else {
                uVar4 = swrm_wcd_notify(**(iVar3 + 0x5c8),8,&uStack_2c);
            }
            goto code_r0x08009f60;
        }
        iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs.65,"lpass_cdc_va_macro_get_data");
        if (iVar2 != 0) {
            pcVar6 = "%s: priv is null for macro!\n";
            goto code_r0x08009f9c;
        }
    }
    uVar4 = 0xffffffea;
code_r0x08009f60:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return uVar4;
    }
    iVar3 = __stack_chk_fail(uVar4);
    *extraout_x18 = sym.lpass_cdc_va_macro_clk_div_get;
    iVar5 = lpass_cdc_get_device_ptr(*(iVar3 + 0x18),3);
    if (iVar5 == 0) {
        iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs,"lpass_cdc_va_macro_get_data");
        if (iVar2 == 0) {
            return 0xffffffea;
        }
        pcVar6 = "%s: null device for macro!\n";
    }
    else {
        iVar5 = *(iVar5 + 0x98);
        if ((iVar5 != 0) && (*(iVar5 + 0xa8) != 0)) {
            uVar1 = 2;
            if (*(iVar5 + 0x5b0) != 5 || *(iVar5 + 0x699) == '\0') {
                uVar1 = *(iVar5 + 0x5b0);
            }
            return uVar1;
        }
        iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs.65,"lpass_cdc_va_macro_get_data");
        if (iVar2 == 0) {
            return 0xffffffea;
        }
        pcVar6 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar3 + 0x18),pcVar6,"lpass_cdc_va_macro_clk_div_get");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_va_macro_clk_div_get @ 0x08009fb4 (size 196) =====

uint32_t sym.lpass_cdc_va_macro_clk_div_get(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    char *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = lpass_cdc_get_device_ptr(*(arg1 + 0x18),3);
    if (iVar2 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs,"lpass_cdc_va_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: null device for macro!\n";
    }
    else {
        iVar2 = *(iVar2 + 0x98);
        if ((iVar2 != 0) && (*(iVar2 + 0xa8) != 0)) {
            if (*(iVar2 + 0x5b0) != 5 || *(iVar2 + 0x699) == '\0') {
                return *(iVar2 + 0x5b0);
            }
            return 2;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs.65,"lpass_cdc_va_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(arg1 + 0x18),pcVar3,"lpass_cdc_va_macro_clk_div_get");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_va_macro_get_channel_map @ 0x0800a078 (size 320) =====

ulong sym.lpass_cdc_va_macro_get_channel_map(int64_t arg1,int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    char *pcVar5;
    int64_t iVar6;
    ulong *in_x18;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = *(arg1 + 0x58);
    iVar3 = lpass_cdc_get_device_ptr(*(iVar7 + 0x18),3);
    if (iVar3 == 0) {
        iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs,"lpass_cdc_va_macro_get_data");
        if (iVar2 == 0) {
            return 0xffffffea;
        }
        pcVar5 = "%s: null device for macro!\n";
    }
    else {
        iVar6 = *(iVar3 + 0x98);
        if ((iVar6 != 0) && (*(iVar6 + 0xa8) != 0)) {
            if (2 < *(arg1 + 8) - 1) {
                uVar4 = ___ratelimit(obj.lpass_cdc_va_macro_get_channel_map._rs,"lpass_cdc_va_macro_get_channel_map");
                if (uVar4 != 0) {
                    _dev_err(iVar3,"%s: Invalid AIF\n","lpass_cdc_va_macro_get_channel_map");
                    return 0;
                }
                return uVar4;
            }
            *arg3 = *(iVar6 + *(arg1 + 8) * 8 + 0x570);
            if (3 < *(arg1 + 8)) {
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x5512,0x800a1b8);
                (*pcVar1)();
            }
            *arg2 = *(iVar6 + *(arg1 + 8) * 8 + 0x590);
            return 0;
        }
        iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs.65,"lpass_cdc_va_macro_get_data");
        if (iVar2 == 0) {
            return 0xffffffea;
        }
        pcVar5 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar7 + 0x18),pcVar5,"lpass_cdc_va_macro_get_channel_map");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_va_macro_hw_params @ 0x0800a1b8 (size 624) =====

ulong sym.lpass_cdc_va_macro_hw_params(ulong noname_0,int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    code *pcVar4;
    int iVar5;
    int64_t iVar6;
    char *pcVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t iVar9;
    uint uVar10;
    int64_t iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar9 = *(arg2 + 0x58);
    iVar6 = lpass_cdc_get_device_ptr(*(iVar9 + 0x18),3);
    if (iVar6 == 0) {
        iVar5 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs,"lpass_cdc_va_macro_get_data");
        if (iVar5 != 0) {
            pcVar7 = "%s: null device for macro!\n";
code_r0x0800a40c:
            _dev_err(*(iVar9 + 0x18),pcVar7,"lpass_cdc_va_macro_hw_params");
            return 0xffffffea;
        }
    }
    else {
        iVar11 = *(iVar6 + 0x98);
        if ((iVar11 == 0) || (*(iVar11 + 0xa8) == 0)) {
            iVar5 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs.65,"lpass_cdc_va_macro_get_data");
            if (iVar5 != 0) {
                pcVar7 = "%s: priv is null for macro!\n";
                goto code_r0x0800a40c;
            }
        }
        else {
            uVar1 = *(arg1 + 0x128);
            *(iVar11 + 0x699) = 16000 < uVar1;
            if (uVar1 < 48000) {
                if (uVar1 == 8000) {
                    uVar10 = 0;
code_r0x0800a310:
                    if (*(arg2 + 8) < 5) {
                        uVar8 = *(iVar11 + *(arg2 + 8) * 8 + 0x570);
                        uVar2 = (uVar8 & 10) >> 1 | (uVar8 & 5) << 1;
                        uVar3 = 4;
                        if ((uVar8 & 0xf) != 0) {
                            uVar3 = LZCOUNT((uVar2 >> 2 | (uVar2 & 0x3333333333333333) << 2) << 0x3c);
                        }
                        while( true ) {
                            if ((uVar3 & 0x3c) != 0) {
                                return 0;
                            }
                            snd_soc_component_update_bits(iVar9,uVar3 * 0x80 + 0x3400,0xf,uVar10);
                            if (4 < *(arg2 + 8)) break;
                            if (2 < uVar3) {
                                return 0;
                            }
                            uVar1 = -1L << (uVar3 + 1 & 0x3f) & *(iVar11 + *(arg2 + 8) * 8 + 0x570);
                            uVar2 = (uVar1 & 10) >> 1 | (uVar1 & 5) << 1;
                            uVar3 = 4;
                            if ((uVar1 & 0xf) != 0) {
                                uVar3 = LZCOUNT((uVar2 >> 2 | (uVar2 & 0x3333333333333333) << 2) << 0x3c);
                            }
                        }
                    }
    //WARNING: Does not return
                    pcVar4 = SoftwareBreakpoint(0x5512,0x800a428);
                    (*pcVar4)();
                }
                if (uVar1 == 16000) {
                    uVar10 = 1;
                    goto code_r0x0800a310;
                }
                if (uVar1 == 32000) {
                    uVar10 = 3;
                    goto code_r0x0800a310;
                }
            }
            else if (uVar1 < 0x2ee00) {
                if (uVar1 == 48000) {
                    uVar10 = 4;
                    goto code_r0x0800a310;
                }
                if (uVar1 == 96000) {
                    uVar10 = 5;
                    goto code_r0x0800a310;
                }
            }
            else {
                if (uVar1 == 0x2ee00) {
                    uVar10 = 6;
                    goto code_r0x0800a310;
                }
                if (uVar1 == 0x5dc00) {
                    uVar10 = 7;
                    goto code_r0x0800a310;
                }
            }
            iVar5 = ___ratelimit(obj.lpass_cdc_va_macro_hw_params._rs,"lpass_cdc_va_macro_hw_params");
            if (iVar5 != 0) {
                _dev_err(iVar6,"%s: Invalid TX sample rate: %d\n","lpass_cdc_va_macro_hw_params",*(arg1 + 0x128));
                return 0xffffffea;
            }
        }
    }
    return 0xffffffea;
}


// ===== sym.lpass_cdc_va_macro_tx_hpf_corner_freq_callback @ 0x0800a428 (size 500) =====

void sym.lpass_cdc_va_macro_tx_hpf_corner_freq_callback(int64_t arg1)

{
    int iVar1;
    uint8_t uVar2;
    int iVar3;
    code *pcVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    ulong uVar7;
    ulong uVar8;
    ulong *in_x18;
    int64_t arg1_00;
    ulong *puVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar9 = *(arg1 + -0x10);
    uVar2 = *(arg1 + -7);
    arg1_00 = puVar9[0x15];
    iVar3 = *(arg1 + -8) * 0x80;
    iVar1 = iVar3 + 0x3404;
    iVar3 = iVar3 + 0x3418;
    uVar6 = sym.is_amic_enabled(arg1_00,*(arg1 + -8));
    if ((uVar6 & 1) == 0) {
        snd_soc_component_update_bits(arg1_00,iVar1,0x60,uVar2 << 5);
        snd_soc_component_update_bits(arg1_00,iVar3,2,2);
        usleep_range_state(1000,0x3f2,2);
        uVar7 = 2;
        uVar8 = 0;
        goto code_r0x0800a5b8;
    }
    uVar5 = snd_soc_component_read(arg1_00,*(arg1 + -8) * 8 + 0x3100);
    lpass_cdc_clear_amic_tx_hold(*(arg1_00 + 0x18),uVar5 & 0xf);
    snd_soc_component_update_bits(arg1_00,iVar1,0x60,uVar2 << 5);
    snd_soc_component_update_bits(arg1_00,iVar3,3,2);
    if (3 < *(arg1 + -8)) {
    //WARNING: Does not return
        pcVar4 = SoftwareBreakpoint(0x5512,0x800a61c);
        (*pcVar4)();
    }
    uVar5 = *(puVar9 + *(arg1 + -8) * 4 + 0x6ac);
    if (uVar5 < 7) {
    //switch table (6 cases) at 0x8000aa9
        switch(*(uVar5 + 0x8000aa9) * 4 + 0x800a4f8) {
        case 0x800a4fc:
            goto code_r0x0800a4fc;
        case 0x800a558:
            uVar7 = 0x3e;
            uVar8 = 0x41;
            break;
        case 0x800a568:
            uVar7 = 0x1f;
            uVar8 = 0x20;
            break;
        case 0x800a578:
            uVar7 = 0x14;
            uVar8 = 0x15;
            break;
        case 0x800a588:
            uVar7 = 10;
            uVar8 = 0xb;
            break;
        case 0x800a598:
            uVar7 = 5;
            uVar8 = 6;
        }
    }
    else {
code_r0x0800a4fc:
        uVar7 = 0x7d;
        uVar8 = 0x82;
    }
    usleep_range_state(uVar7,uVar8,2);
    uVar7 = 3;
    uVar8 = 1;
code_r0x0800a5b8:
    snd_soc_component_update_bits(arg1_00,iVar3,uVar7,uVar8);
    mutex_lock(puVar9 + 0xf);
    iVar1 = *(puVar9 + 0xd9) + -1;
    *(puVar9 + 0xd9) = iVar1;
    if (iVar1 == 0) {
        pm_relax(*puVar9);
        iVar1 = *(puVar9 + 0xd9);
    }
    if (iVar1 < 0) {
        *(puVar9 + 0xd9) = 0;
    }
    mutex_unlock(puVar9 + 0xf);
    return;
}


// ===== sym.lpass_cdc_va_macro_mute_update_callback @ 0x0800a61c (size 140) =====

void sym.lpass_cdc_va_macro_mute_update_callback(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong *puVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = *(arg1 + -0x10);
    snd_soc_component_update_bits(puVar2[0x15],*(arg1 + -8) * 0x80 + 0x3400U & 0xff80,0x10,0);
    mutex_lock(puVar2 + 0xf);
    iVar1 = *(puVar2 + 0xd9) + -1;
    *(puVar2 + 0xd9) = iVar1;
    if (iVar1 == 0) {
        pm_relax(*puVar2);
        iVar1 = *(puVar2 + 0xd9);
    }
    if (iVar1 < 0) {
        *(puVar2 + 0xd9) = 0;
    }
    mutex_unlock(puVar2 + 0xf);
    return;
}


// ===== sym.lpass_cdc_va_macro_enable_tx @ 0x0800a6a8 (size 348) =====

ulong sym.lpass_cdc_va_macro_enable_tx(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong uVar3;
    char *pcVar4;
    ulong *in_x18;
    ulong *puVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(arg1 + 0x28);
    iVar2 = lpass_cdc_get_device_ptr(*(iVar6 + -0xb8),3);
    if (iVar2 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs,"lpass_cdc_va_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar4 = "%s: null device for macro!\n";
    }
    else {
        puVar5 = *(iVar2 + 0x98);
        if ((puVar5 != NULL) && (puVar5[0x15] != 0)) {
            if (arg2 == 4) {
                uVar3 = lpass_cdc_clk_rsc_request_clock(*puVar5,*(puVar5 + 0x684),0,1);
                if (uVar3 == 0) {
                    *(puVar5 + 0x6bc) = *(puVar5 + 0x6bc) + 1;
                    return uVar3;
                }
                return uVar3;
            }
            if (arg2 != 2) {
                iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_enable_tx._rs,"lpass_cdc_va_macro_enable_tx");
                if (iVar1 == 0) {
                    return 0xffffffea;
                }
                _dev_err(*puVar5,"%s: invalid DAPM event %d\n","lpass_cdc_va_macro_enable_tx",arg2 & 0xffffffff);
                return 0xffffffea;
            }
            if (*(puVar5 + 0x6bc) < 1) {
                return 0;
            }
            uVar3 = lpass_cdc_clk_rsc_request_clock(*puVar5,*(puVar5 + 0x684),0,0);
            *(puVar5 + 0x6bc) = *(puVar5 + 0x6bc) + -1;
            return uVar3;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs.65,"lpass_cdc_va_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar4 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar6 + -0xb8),pcVar4,"lpass_cdc_va_macro_enable_tx");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_va_macro_enable_micbias @ 0x0800a804 (size 588) =====

int sym.lpass_cdc_va_macro_enable_micbias(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int iVar2;
    int64_t iVar3;
    char *pcVar4;
    ulong *in_x18;
    int64_t iVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(arg1 + 0x28);
    iVar3 = lpass_cdc_get_device_ptr(*(iVar6 + -0xb8),3);
    if (iVar3 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs,"lpass_cdc_va_macro_get_data");
        if (iVar1 == 0) {
            return -0x16;
        }
        pcVar4 = "%s: null device for macro!\n";
    }
    else {
        iVar5 = *(iVar3 + 0x98);
        if ((iVar5 != 0) && (*(iVar5 + 0xa8) != 0)) {
            if (*(iVar5 + 0x668) != 0) {
                if (arg2 == 8) {
                    iVar1 = *(iVar5 + 0x680) + -1;
                    *(iVar5 + 0x680) = iVar1;
                    if (iVar1 < 1) {
                        if (iVar1 < 0) {
                            *(iVar5 + 0x680) = 0;
                            return 0;
                        }
                        iVar1 = regulator_disable();
                        if (iVar1 == 0) {
                            regulator_set_voltage(*(iVar5 + 0x668),0,*(iVar5 + 0x670));
                            regulator_set_load(*(iVar5 + 0x668),0);
                            return 0;
                        }
                        iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_enable_micbias._rs.166,
                                             "lpass_cdc_va_macro_enable_micbias");
                        if (iVar2 == 0) {
                            return iVar1;
                        }
                        pcVar4 = "%s: regulator disable failed, err = %d\n";
                        goto code_r0x0800aa38;
                    }
                }
                else if ((arg2 == 1) && (iVar1 = *(iVar5 + 0x680), *(iVar5 + 0x680) = iVar1 + 1, iVar1 < 1)) {
                    iVar1 = regulator_set_voltage(*(iVar5 + 0x668),*(iVar5 + 0x670),*(iVar5 + 0x670));
                    if (iVar1 == 0) {
                        iVar1 = regulator_set_load(*(iVar5 + 0x668),*(iVar5 + 0x674));
                        if (iVar1 == 0) {
                            iVar1 = regulator_enable(*(iVar5 + 0x668));
                            if (iVar1 == 0) {
                                return 0;
                            }
                            iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_enable_micbias._rs.164,
                                                 "lpass_cdc_va_macro_enable_micbias");
                            if (iVar2 == 0) {
                                return iVar1;
                            }
                            pcVar4 = "%s: regulator enable failed, err = %d\n";
                        }
                        else {
                            iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_enable_micbias._rs.162,
                                                 "lpass_cdc_va_macro_enable_micbias");
                            if (iVar2 == 0) {
                                return iVar1;
                            }
                            pcVar4 = "%s: Setting current failed, err = %d\n";
                        }
                    }
                    else {
                        iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_enable_micbias._rs.160,
                                             "lpass_cdc_va_macro_enable_micbias");
                        if (iVar2 == 0) {
                            return iVar1;
                        }
                        pcVar4 = "%s: Setting voltage failed, err = %d\n";
                    }
code_r0x0800aa38:
                    _dev_err(iVar3,pcVar4,"lpass_cdc_va_macro_enable_micbias",iVar1);
                    return iVar1;
                }
                return 0;
            }
            iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_enable_micbias._rs,"lpass_cdc_va_macro_enable_micbias");
            if (iVar1 == 0) {
                return -0x16;
            }
            pcVar4 = "%s:regulator not provided in dtsi\n";
            goto code_r0x0800a968;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs.65,"lpass_cdc_va_macro_get_data");
        if (iVar1 == 0) {
            return -0x16;
        }
        pcVar4 = "%s: priv is null for macro!\n";
    }
    iVar3 = *(iVar6 + -0xb8);
code_r0x0800a968:
    _dev_err(iVar3,pcVar4,"lpass_cdc_va_macro_enable_micbias");
    return -0x16;
}


// ===== sym.lpass_cdc_va_macro_enable_dec @ 0x0800aa50 (size 1468) =====

ulong sym.lpass_cdc_va_macro_enable_dec(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    ulong *puVar1;
    int iVar2;
    int iVar3;
    uint8_t uVar4;
    uint8_t uVar5;
    int iVar6;
    code *pcVar7;
    uint32_t uVar8;
    int iVar9;
    uint uVar10;
    int64_t iVar11;
    uint64_t uVar12;
    ulong uVar13;
    ulong uVar14;
    int64_t iVar15;
    ulong *in_x18;
    int64_t arg1_00;
    uint64_t arg2_00;
    char *pcVar16;
    ulong *puVar17;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar15 = *(arg1 + 0x28);
    arg1_00 = iVar15 + -0xd0;
    iVar11 = lpass_cdc_get_device_ptr(*(iVar15 + -0xb8),3);
    if (iVar11 == 0) {
        iVar9 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs,"lpass_cdc_va_macro_get_data");
        if (iVar9 == 0) {
            return 0xffffffea;
        }
        pcVar16 = "%s: null device for macro!\n";
    }
    else {
        puVar17 = *(iVar11 + 0x98);
        if ((puVar17 != NULL) && (puVar17[0x15] != 0)) {
            uVar4 = *(arg1 + 0x4c);
            arg2_00 = uVar4;
            iVar6 = uVar4 * 0x80;
            iVar9 = iVar6 + 0x3400;
            uVar8 = snd_soc_component_read(arg1_00,iVar9);
            if (3 < arg2_00) {
    //WARNING: Does not return
                pcVar7 = SoftwareBreakpoint(0x5512,0x800afa4);
                (*pcVar7)();
            }
            iVar2 = iVar6 + 0x3418;
            iVar3 = iVar6 + 0x3404;
            *(puVar17 + arg2_00 * 4 + 0x6ac) = uVar8 & 0xf;
            uVar12 = sym.is_amic_enabled(arg1_00,uVar4);
            if ((uVar12 & 1) == 0) {
                iVar11 = *(arg1 + 0x28) + -0xd0;
                uVar12 = snd_soc_component_read(iVar11,uVar4 * 8 + 0x3100);
                uVar13 = 0;
                uVar8 = arg2 - 1;
                if (7 < uVar8) {
                    return 0;
                }
                uVar14 = 1;
    //switch table (7 cases) at 0x8000ab0
                switch(*(uVar8 * 2 + 0x8000ab0) * 4 + 0x800ab3c) {
                case 0x800ab40:
                    uVar14 = 0;
                case 0x800ab48:
                    lpass_cdc_dmic_clk_enable(iVar11,((uVar12 & 0xffffffff) >> 4) + -1,1,uVar14);
                    goto code_r0x0800ab5c;
                case 0x800adec:
                    goto code_r0x0800adec;
                case 0x800af5c:
                    goto code_r0x0800af5c;
                }
code_r0x0800ac00:
                snd_soc_component_update_bits(arg1_00,iVar9,0x20,0x20);
                uVar12 = sym.is_amic_enabled(arg1_00,arg2_00);
                if ((uVar12 & 1) == 0) {
                    snd_soc_component_update_bits(arg1_00,iVar2,1,0);
                    usleep_range_state(1000,0x3f2,2);
                }
                uVar8 = snd_soc_component_read(arg1_00,iVar3);
                uVar8 = uVar8 >> 5 & 3;
                pcVar16 = puVar17 + arg2_00 * 0x98 + 0xb9;
                *pcVar16 = uVar8;
                if (uVar8 != 2) {
                    snd_soc_component_update_bits(arg1_00,iVar3,0x60,0x40);
                }
                uVar12 = sym.is_amic_enabled(arg1_00,uVar4);
                if (((uVar12 & 1) != 0) && (_segment.ehdr < 100)) {
                    _segment.ehdr = 100;
                }
                snd_soc_component_update_bits(arg1_00,iVar2,3,2);
                uVar12 = sym.is_amic_enabled(arg1_00,uVar4);
                if ((uVar12 & 1) == 0) {
                    snd_soc_component_update_bits(arg1_00,iVar2,3,0);
                }
                usleep_range_state(1000,0x3f2,2);
                snd_soc_component_update_bits(arg1_00,iVar2,3,1);
                usleep_range_state(6000,0x177a,2);
                puVar1 = puVar17 + 0xf;
                mutex_lock(puVar1);
                iVar9 = *(puVar17 + 0xd9);
                *(puVar17 + 0xd9) = iVar9 + 1;
                if (iVar9 == 0) {
                    pm_stay_awake(*puVar17);
                }
                mutex_unlock(puVar1);
                uVar13 = _snd_soc_info_volsw;
                uVar14 = __msecs_to_jiffies(_segment.ehdr);
                queue_delayed_work_on(0x20,uVar13,puVar17 + arg2_00 * 0x13 + 100,uVar14);
                if (*pcVar16 != '\x02') {
                    mutex_lock(puVar1);
                    iVar9 = *(puVar17 + 0xd9);
                    *(puVar17 + 0xd9) = iVar9 + 1;
                    if (iVar9 == 0) {
                        pm_stay_awake(*puVar17);
                    }
                    mutex_unlock(puVar1);
                    queue_delayed_work_on(0x20,_snd_soc_info_volsw,puVar17 + arg2_00 * 0x13 + 0x18,0x4b);
                }
                uVar10 = snd_soc_component_read(arg1_00,iVar6 + 0x340c);
                snd_soc_component_write(arg1_00,iVar6 + 0x340c,uVar10);
            }
            else {
code_r0x0800ab5c:
                uVar13 = 0;
                uVar8 = arg2 - 1;
                if (7 < uVar8) {
                    return 0;
                }
    //switch table (7 cases) at 0x8000ac0
                switch(*(uVar8 + 0x8000ac0) * 4 + 0x800ab84) {
                case 0x800ab88:
                    snd_soc_component_update_bits(arg1_00,iVar3,6,*(puVar17 + arg2_00 * 4 + 0x69c) << 1);
                    uVar13 = 0x10;
                    break;
                case 0x800ac00:
                    goto code_r0x0800ac00;
                case 0x800adec:
code_r0x0800adec:
                    uVar5 = *(puVar17 + arg2_00 * 0x98 + 0xb9);
                    snd_soc_component_update_bits(arg1_00,iVar9,0x10,0x10);
                    uVar12 = cancel_delayed_work_sync(puVar17 + arg2_00 * 0x13 + 0x18);
                    if (((uVar12 & 1) != 0) && (uVar5 != 2)) {
                        snd_soc_component_update_bits(arg1_00,iVar3,0x60,uVar5 << 5);
                        uVar12 = sym.is_amic_enabled(arg1_00,uVar4);
                        uVar10 = 2;
                        if ((uVar12 & 1) == 0) {
                            uVar10 = 3;
                        }
                        snd_soc_component_update_bits(arg1_00,iVar2,3,uVar10);
                        usleep_range_state(1000,0x3f2,2);
                        snd_soc_component_update_bits(arg1_00,iVar2,3,1);
                    }
                    puVar1 = puVar17 + 0xf;
                    mutex_lock(puVar1);
                    iVar9 = *(puVar17 + 0xd9) + -1;
                    *(puVar17 + 0xd9) = iVar9;
                    if (iVar9 == 0) {
                        pm_relax(*puVar17);
                        iVar9 = *(puVar17 + 0xd9);
                    }
                    if (iVar9 < 0) {
                        *(puVar17 + 0xd9) = 0;
                    }
                    mutex_unlock(puVar1);
                    cancel_delayed_work_sync(puVar17 + arg2_00 * 0x13 + 100);
                    mutex_lock(puVar1);
                    iVar9 = *(puVar17 + 0xd9) + -1;
                    *(puVar17 + 0xd9) = iVar9;
                    if (iVar9 == 0) {
                        pm_relax(*puVar17);
                        iVar9 = *(puVar17 + 0xd9);
                    }
                    if (iVar9 < 0) {
                        *(puVar17 + 0xd9) = 0;
                    }
                    mutex_unlock(puVar1);
                    return 0;
                case 0x800af04:
                    snd_soc_component_update_bits(arg1_00,iVar9,0x20,0);
                    snd_soc_component_update_bits(arg1_00,iVar9,0x40,0x40);
                    snd_soc_component_update_bits(arg1_00,iVar9,0x40,0);
                    uVar13 = 0;
                    break;
                case 0x800af5c:
                    goto code_r0x0800af5c;
                }
                snd_soc_component_update_bits(arg1_00,iVar9,0x10,uVar13);
            }
            return 0;
        }
        iVar9 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs.65,"lpass_cdc_va_macro_get_data");
        if (iVar9 == 0) {
            return 0xffffffea;
        }
        pcVar16 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar15 + -0xb8),pcVar16,"lpass_cdc_va_macro_enable_dec");
    uVar13 = 0xffffffea;
code_r0x0800af5c:
    return uVar13;
}


// ===== sym.lpass_cdc_va_macro_mclk_event @ 0x0800afa4 (size 444) =====

ulong sym.lpass_cdc_va_macro_mclk_event(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong uVar3;
    char *pcVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong *arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(arg1 + 0x28);
    iVar2 = lpass_cdc_get_device_ptr(*(iVar5 + -0xb8),3);
    if (iVar2 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs,"lpass_cdc_va_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar4 = "%s: null device for macro!\n";
    }
    else {
        arg1_00 = *(iVar2 + 0x98);
        if ((arg1_00 != NULL) && (arg1_00[0x15] != 0)) {
            if (arg2 == 8) {
                if ((*(arg1_00 + 0x6c5) == '\0') || (*(arg1_00 + 0xd3) != '\0')) {
                    sym.lpass_cdc_va_macro_mclk_enable(arg1_00,0);
                }
                else {
                    lpass_cdc_tx_mclk_enable(iVar5 + -0xd0,0);
                }
                if (*(arg1_00 + 0x6bc) < 1) {
                    return 0;
                }
                lpass_cdc_clk_rsc_request_clock(*arg1_00,*(arg1_00 + 0x684),0,0);
                *(arg1_00 + 0x6bc) = *(arg1_00 + 0x6bc) + -1;
                return 0;
            }
            if (arg2 != 1) {
                iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_mclk_event._rs,"lpass_cdc_va_macro_mclk_event");
                if (iVar1 == 0) {
                    return 0xffffffea;
                }
                _dev_err(*arg1_00,"%s: invalid DAPM event %d\n","lpass_cdc_va_macro_mclk_event",arg2 & 0xffffffff);
                return 0xffffffea;
            }
            iVar1 = lpass_cdc_clk_rsc_request_clock(*arg1_00,*(arg1_00 + 0x684),0,1);
            if (iVar1 == 0) {
                *(arg1_00 + 0x6bc) = *(arg1_00 + 0x6bc) + 1;
            }
            if ((*(arg1_00 + 0x6c5) != '\0') && (*(arg1_00 + 0xd3) == '\0')) {
                uVar3 = lpass_cdc_tx_mclk_enable(iVar5 + -0xd0,1);
                return uVar3;
            }
            uVar3 = sym.lpass_cdc_va_macro_mclk_enable(arg1_00,1);
            return uVar3;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs.65,"lpass_cdc_va_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar4 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar5 + -0xb8),pcVar4,"lpass_cdc_va_macro_mclk_event");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_va_macro_swr_pwr_event @ 0x0800b160 (size 820) =====

int sym.lpass_cdc_va_macro_swr_pwr_event(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    char cVar1;
    int iVar2;
    int iVar3;
    int64_t iVar4;
    ulong uVar5;
    char *pcVar6;
    ulong uVar7;
    ulong *in_x18;
    ulong *arg1_00;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = *(arg1 + 0x28);
    iVar4 = lpass_cdc_get_device_ptr(*(iVar8 + -0xb8),3);
    if (iVar4 == 0) {
        iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs,"lpass_cdc_va_macro_get_data");
        if (iVar2 == 0) {
            return -0x16;
        }
        pcVar6 = "%s: null device for macro!\n";
    }
    else {
        arg1_00 = *(iVar4 + 0x98);
        if ((arg1_00 != NULL) && (arg1_00[0x15] != 0)) {
            if (arg2 == 8) {
                if (*(arg1_00 + 0xd8) != 3) {
                    return 0;
                }
                iVar2 = lpass_cdc_clk_rsc_request_clock(*arg1_00,*(arg1_00 + 0x684),0,1);
                if (iVar2 != 0) {
                    iVar3 = ___ratelimit(obj.lpass_cdc_va_macro_swr_pwr_event._rs.174,
                                         "lpass_cdc_va_macro_swr_pwr_event");
                    if (iVar3 == 0) {
                        cVar1 = *(arg1_00 + 0x6c2);
                    }
                    else {
                        _dev_err(*(iVar8 + -0xb8),"%s: request clock TX_CLK enable failed\n",
                                 "lpass_cdc_va_macro_swr_pwr_event");
                        cVar1 = *(arg1_00 + 0x6c2);
                    }
                    if (cVar1 != '\0') {
                        return iVar2;
                    }
                }
                iVar2 = sym.lpass_cdc_va_macro_core_vote(arg1_00,1);
                if (iVar2 < 0) {
                    iVar3 = ___ratelimit(obj.lpass_cdc_va_macro_swr_pwr_event._rs.176,
                                         "lpass_cdc_va_macro_swr_pwr_event");
                    if (iVar3 == 0) {
                        cVar1 = *(arg1_00 + 0x6c2);
                    }
                    else {
                        _dev_err(*arg1_00,"%s: va request core vote failed\n","lpass_cdc_va_macro_swr_pwr_event");
                        cVar1 = *(arg1_00 + 0x6c2);
                    }
                    if (cVar1 != '\0') {
                        return iVar2;
                    }
                    iVar2 = lpass_cdc_clk_rsc_request_clock(*arg1_00,*(arg1_00 + 0x684),3,0);
                }
                else {
                    iVar2 = lpass_cdc_clk_rsc_request_clock(*arg1_00,*(arg1_00 + 0x684),3,0);
                    sym.lpass_cdc_va_macro_core_vote(arg1_00,0);
                }
                if (iVar2 == 0) {
                    *(arg1_00 + 0xd8) = 0;
                    return 0;
                }
                iVar3 = ___ratelimit(obj.lpass_cdc_va_macro_swr_pwr_event._rs.177,"lpass_cdc_va_macro_swr_pwr_event");
                if (iVar3 == 0) {
                    cVar1 = *(arg1_00 + 0x6c2);
                }
                else {
                    _dev_err(*(iVar8 + -0xb8),"%s: request clock VA_CLK disable failed\n",
                             "lpass_cdc_va_macro_swr_pwr_event");
                    cVar1 = *(arg1_00 + 0x6c2);
                }
                if (cVar1 == '\0') {
                    return iVar2;
                }
                uVar5 = *arg1_00;
                uVar7 = 0;
            }
            else {
                if (arg2 != 1) {
                    iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_swr_pwr_event._rs.179,
                                         "lpass_cdc_va_macro_swr_pwr_event");
                    if (iVar2 == 0) {
                        return -0x16;
                    }
                    _dev_err(*arg1_00,"%s: invalid DAPM event %d\n","lpass_cdc_va_macro_swr_pwr_event",
                             arg2 & 0xffffffff);
                    return -0x16;
                }
                if (*(arg1_00 + 0xd8) == 3) {
                    return 0;
                }
                if (*(arg1_00 + 0x68c) == 0) {
                    return 0;
                }
                if (*(arg1_00 + 0x694) == 0) {
                    return 0;
                }
                iVar2 = sym.lpass_cdc_va_macro_core_vote(arg1_00,1);
                if (iVar2 < 0) {
                    iVar3 = ___ratelimit(obj.lpass_cdc_va_macro_swr_pwr_event._rs,"lpass_cdc_va_macro_swr_pwr_event");
                    if (iVar3 != 0) {
                        _dev_err(*arg1_00,"%s: va request core vote failed\n","lpass_cdc_va_macro_swr_pwr_event");
                        return iVar2;
                    }
                    return iVar2;
                }
                iVar2 = lpass_cdc_clk_rsc_request_clock(*arg1_00,*(arg1_00 + 0x684),3,1);
                sym.lpass_cdc_va_macro_core_vote(arg1_00,0);
                if (iVar2 != 0) {
                    return iVar2;
                }
                iVar2 = lpass_cdc_clk_rsc_request_clock(*arg1_00,*(arg1_00 + 0x684),0,0);
                if (iVar2 == 0) {
                    *(arg1_00 + 0xd8) = 3;
                    return 0;
                }
                uVar5 = *arg1_00;
                uVar7 = 3;
            }
            lpass_cdc_clk_rsc_request_clock(uVar5,*(arg1_00 + 0x684),uVar7,0);
            return iVar2;
        }
        iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs.65,"lpass_cdc_va_macro_get_data");
        if (iVar2 == 0) {
            return -0x16;
        }
        pcVar6 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar8 + -0xb8),pcVar6,"lpass_cdc_va_macro_swr_pwr_event");
    return -0x16;
}


// ===== sym.lpass_cdc_va_macro_tx_swr_clk_event @ 0x0800b494 (size 228) =====

ulong sym.lpass_cdc_va_macro_tx_swr_clk_event(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    char *pcVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0x28);
    iVar2 = lpass_cdc_get_device_ptr(*(iVar4 + -0xb8),3);
    if (iVar2 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs,"lpass_cdc_va_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: null device for macro!\n";
    }
    else {
        iVar2 = *(iVar2 + 0x98);
        if ((iVar2 != 0) && (*(iVar2 + 0xa8) != 0)) {
            if ((arg2 & 3U) != 0) {
                *(iVar2 + 0x688) = *(iVar2 + 0x688) + 1;
            }
            if ((arg2 & 0xcU) == 0) {
                return 0;
            }
            *(iVar2 + 0x688) = *(iVar2 + 0x688) + -1;
            return 0;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs.65,"lpass_cdc_va_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar4 + -0xb8),pcVar3,"lpass_cdc_va_macro_tx_swr_clk_event");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_va_macro_swr_clk_event @ 0x0800b578 (size 228) =====

ulong sym.lpass_cdc_va_macro_swr_clk_event(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    char *pcVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0x28);
    iVar2 = lpass_cdc_get_device_ptr(*(iVar4 + -0xb8),3);
    if (iVar2 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs,"lpass_cdc_va_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: null device for macro!\n";
    }
    else {
        iVar2 = *(iVar2 + 0x98);
        if ((iVar2 != 0) && (*(iVar2 + 0xa8) != 0)) {
            if (arg2 == 8) {
                iVar1 = *(iVar2 + 0x68c) + -1;
            }
            else {
                if (arg2 != 1) {
                    return 0;
                }
                iVar1 = *(iVar2 + 0x68c) + 1;
            }
            *(iVar2 + 0x68c) = iVar1;
            return 0;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs.65,"lpass_cdc_va_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar4 + -0xb8),pcVar3,"lpass_cdc_va_macro_swr_clk_event");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_va_macro_tx_mixer_get @ 0x0800b65c (size 268) =====

ulong sym.lpass_cdc_va_macro_tx_mixer_get(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint8_t uVar2;
    code *pcVar3;
    int iVar4;
    int64_t iVar5;
    char *pcVar6;
    ulong *in_x18;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = snd_soc_dapm_kcontrol_widget();
    iVar7 = *(iVar5 + 0x28);
    uVar2 = *(iVar5 + 0x4c);
    uVar1 = *(*(arg1 + 0x78) + 0x18);
    iVar5 = lpass_cdc_get_device_ptr(*(iVar7 + -0xb8),3);
    if (iVar5 == 0) {
        iVar4 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs,"lpass_cdc_va_macro_get_data");
        if (iVar4 == 0) {
            return 0xffffffea;
        }
        pcVar6 = "%s: null device for macro!\n";
    }
    else {
        iVar5 = *(iVar5 + 0x98);
        if ((iVar5 != 0) && (*(iVar5 + 0xa8) != 0)) {
            if (4 < uVar2) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x5512,0x800b768);
                (*pcVar3)();
            }
            if ((*(iVar5 + uVar2 * 8 + (uVar1 >> 3 & 0x1ffffff8) + 0x570) >> (uVar1 & 0x3f) & 1) == 0) {
                *(arg2 + 0x48) = 0;
                return 0;
            }
            *(arg2 + 0x48) = 1;
            return 0;
        }
        iVar4 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs.65,"lpass_cdc_va_macro_get_data");
        if (iVar4 == 0) {
            return 0xffffffea;
        }
        pcVar6 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar7 + -0xb8),pcVar6,"lpass_cdc_va_macro_tx_mixer_get");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_va_macro_tx_mixer_put @ 0x0800b768 (size 584) =====

ulong sym.lpass_cdc_va_macro_tx_mixer_put(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t *puVar3;
    uint32_t uVar4;
    uint8_t uVar5;
    char cVar6;
    bool bVar7;
    code *pcVar8;
    int iVar9;
    int iVar10;
    int64_t iVar11;
    int64_t iVar12;
    ulong uVar13;
    char *pcVar14;
    uint64_t uVar15;
    ulong *in_x18;
    uint64_t uVar16;
    uint64_t uVar17;
    int64_t iVar18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar11 = snd_soc_dapm_kcontrol_widget();
    iVar18 = *(iVar11 + 0x28);
    uVar5 = *(iVar11 + 0x4c);
    uVar16 = uVar5;
    uVar4 = *(*(arg1 + 0x78) + 0x18);
    uVar17 = uVar4;
    iVar10 = *(arg2 + 0x48);
    iVar12 = lpass_cdc_get_device_ptr(*(iVar18 + -0xb8),3);
    if (iVar12 == 0) {
        iVar10 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs,"lpass_cdc_va_macro_get_data");
        if (iVar10 == 0) {
            return 0xffffffea;
        }
        pcVar14 = "%s: null device for macro!\n";
code_r0x0800b928:
        _dev_err(*(iVar18 + -0xb8),pcVar14,"lpass_cdc_va_macro_tx_mixer_put");
        return 0xffffffea;
    }
    iVar12 = *(iVar12 + 0x98);
    if ((iVar12 == 0) || (*(iVar12 + 0xa8) == 0)) {
        iVar10 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs.65,"lpass_cdc_va_macro_get_data");
        if (iVar10 == 0) {
            return 0xffffffea;
        }
        pcVar14 = "%s: priv is null for macro!\n";
        goto code_r0x0800b928;
    }
    if (iVar10 == 0) {
        if (4 < uVar5) goto code_r0x0800b964;
        uVar15 = uVar4 >> 3 & 0x1ffffff8;
        piVar2 = iVar12 + uVar16 * 8 + 0x570;
        if ((*(piVar2 + uVar15) >> (uVar17 & 0x3f) & 1) != 0) {
            puVar3 = piVar2 + uVar15;
            *piVar2 = *piVar2 + -1;
            Hint_Prefetch(puVar3,2,0,1);
            do {
                cVar6 = '\x01';
                bVar7 = ExclusiveMonitorPass(puVar3,0x10);
                if (bVar7) {
                    *puVar3 = *puVar3 & (1L << (uVar17 & 0x3f) ^ 0xffffffffffffffffU);
                    cVar6 = ExclusiveMonitorsStatus();
                }
            } while (cVar6 != '\0');
            goto code_r0x0800b8ec;
        }
        iVar9 = ___ratelimit(obj.lpass_cdc_va_macro_tx_mixer_put._rs.117,"lpass_cdc_va_macro_tx_mixer_put");
        if (iVar9 == 0) goto code_r0x0800b8ec;
        uVar13 = *(iVar18 + -0xb8);
        pcVar14 = "%s: channel is already disabled, dec_id = %d, dai_id = %d\n";
    }
    else {
        if (4 < uVar5) {
code_r0x0800b964:
    //WARNING: Does not return
            pcVar8 = SoftwareBreakpoint(0x5512,0x800b968);
            (*pcVar8)();
        }
        uVar15 = uVar4 >> 3 & 0x1ffffff8;
        iVar1 = iVar12 + uVar16 * 8 + 0x570;
        if ((*(iVar1 + uVar15) >> (uVar17 & 0x3f) & 1) == 0) {
            puVar3 = iVar1 + uVar15;
            Hint_Prefetch(puVar3,2,0,1);
            do {
                cVar6 = '\x01';
                bVar7 = ExclusiveMonitorPass(puVar3,0x10);
                if (bVar7) {
                    *puVar3 = *puVar3 | 1L << (uVar17 & 0x3f);
                    cVar6 = ExclusiveMonitorsStatus();
                }
            } while (cVar6 != '\0');
            iVar12 = iVar12 + uVar16 * 8;
            *(iVar12 + 0x590) = *(iVar12 + 0x590) + 1;
            goto code_r0x0800b8ec;
        }
        iVar9 = ___ratelimit(obj.lpass_cdc_va_macro_tx_mixer_put._rs,"lpass_cdc_va_macro_tx_mixer_put");
        if (iVar9 == 0) goto code_r0x0800b8ec;
        uVar13 = *(iVar18 + -0xb8);
        pcVar14 = "%s: channel is already enabled, dec_id = %d, dai_id = %d\n";
    }
    _dev_err(uVar13,pcVar14,"lpass_cdc_va_macro_tx_mixer_put",uVar17,uVar16);
code_r0x0800b8ec:
    snd_soc_dapm_mixer_update_power(*(iVar11 + 0x28),arg1,iVar10,0);
    return 0;
}


// ===== sym.lpass_cdc_va_macro_put_dec_enum @ 0x0800b9b0 (size 504) =====

ulong sym.lpass_cdc_va_macro_put_dec_enum(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong uVar5;
    uint32_t uVar6;
    char *pcVar7;
    int64_t iVar8;
    ulong *in_x18;
    int64_t iVar9;
    ulong uVar10;
    int *piVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = snd_soc_dapm_kcontrol_widget();
    iVar8 = *(iVar3 + 0x28);
    piVar11 = *(arg1 + 0x78);
    iVar9 = iVar8 + -0xd0;
    iVar4 = lpass_cdc_get_device_ptr(*(iVar8 + -0xb8),3);
    if (iVar4 == 0) {
        iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs,"lpass_cdc_va_macro_get_data");
        if (iVar2 == 0) {
            return 0xffffffea;
        }
        pcVar7 = "%s: null device for macro!\n";
code_r0x0800bb70:
        _dev_err(*(iVar8 + -0xb8),pcVar7,"lpass_cdc_va_macro_put_dec_enum");
        return 0xffffffea;
    }
    iVar4 = *(iVar4 + 0x98);
    if ((iVar4 == 0) || (*(iVar4 + 0xa8) == 0)) {
        iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs.65,"lpass_cdc_va_macro_get_data");
        if (iVar2 == 0) {
            return 0xffffffea;
        }
        pcVar7 = "%s: priv is null for macro!\n";
        goto code_r0x0800bb70;
    }
    uVar1 = *(arg2 + 0x48);
    if (piVar11[2] - 1U < uVar1) {
        return 0xffffffea;
    }
    uVar6 = *piVar11 - 0x3100U >> 3;
    if (3 < (uVar6 | *piVar11 << 0x1d)) {
        iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_put_dec_enum._rs,"lpass_cdc_va_macro_put_dec_enum");
        if (iVar2 == 0) {
            return 0xffffffea;
        }
        _dev_err(*(iVar8 + -0xb8),"%s: e->reg: 0x%x not expected\n","lpass_cdc_va_macro_put_dec_enum",*piVar11);
        return 0xffffffea;
    }
    uVar10 = *(iVar3 + 8);
    uVar6 = uVar6 * 0x80 + 0x3404;
    uVar5 = strlen(uVar10);
    iVar3 = strnstr(uVar10,"SMIC",uVar5);
    if (iVar3 == 0) {
        if (uVar1 == 0) goto code_r0x0800bb98;
        uVar5 = 0x80;
        iVar3 = 0x80;
    }
    else {
        if (uVar1 == 0) goto code_r0x0800bb98;
        if (*(iVar4 + 0x6c4) == '\0') {
            uVar5 = 0x80;
            iVar3 = 0;
        }
        else {
            snd_soc_component_update_bits(iVar9,uVar6,0x80,0x80);
            snd_soc_component_update_bits(iVar9,0x3094,0x80,0);
            uVar6 = uVar1 * 2 + 0x30c6 & 0xfffc;
            uVar5 = 0xe;
            iVar3 = *(iVar4 + 0x5b0) << 1;
        }
    }
    snd_soc_component_update_bits(iVar9,uVar6,uVar5,iVar3);
code_r0x0800bb98:
    uVar5 = snd_soc_dapm_put_enum_double(arg1,arg2);
    return uVar5;
}


// ===== sym.is_amic_enabled @ 0x0800bba8 (size 216) =====

ulong sym.is_amic_enabled(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    ulong uVar3;
    char *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = lpass_cdc_get_device_ptr(*(arg1 + 0x18),3);
    if (iVar1 == 0) {
        uVar3 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs,"lpass_cdc_va_macro_get_data");
        if (uVar3 == 0) {
            return uVar3;
        }
        pcVar4 = "%s: null device for macro!\n";
    }
    else {
        iVar1 = *(iVar1 + 0x98);
        if ((iVar1 != 0) && (*(iVar1 + 0xa8) != 0)) {
            uVar2 = snd_soc_component_read(arg1,arg2 * 8 + 0x3104U & 0xfffc);
            if ((uVar2 & 1) == 0) {
                return 0;
            }
            if (*(iVar1 + 0x6c4) != '\0') {
                return 0;
            }
            return 1;
        }
        uVar3 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs.65,"lpass_cdc_va_macro_get_data");
        if (uVar3 == 0) {
            return uVar3;
        }
        pcVar4 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(arg1 + 0x18),pcVar4,"is_amic_enabled");
    return 0;
}


// ===== sym.lpass_cdc_va_macro_lpi_get @ 0x0800bc80 (size 188) =====

ulong sym.lpass_cdc_va_macro_lpi_get(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    char *pcVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0x80);
    iVar2 = lpass_cdc_get_device_ptr(*(iVar4 + 0x18),3);
    if (iVar2 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs,"lpass_cdc_va_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: null device for macro!\n";
    }
    else {
        iVar2 = *(iVar2 + 0x98);
        if ((iVar2 != 0) && (*(iVar2 + 0xa8) != 0)) {
            *(arg2 + 0x48) = *(iVar2 + 0x698);
            return 0;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs.65,"lpass_cdc_va_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar4 + 0x18),pcVar3,"lpass_cdc_va_macro_lpi_get");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_va_macro_lpi_put @ 0x0800bd3c (size 196) =====

ulong sym.lpass_cdc_va_macro_lpi_put(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    char *pcVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0x80);
    iVar2 = lpass_cdc_get_device_ptr(*(iVar4 + 0x18),3);
    if (iVar2 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs,"lpass_cdc_va_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: null device for macro!\n";
    }
    else {
        iVar2 = *(iVar2 + 0x98);
        if ((iVar2 != 0) && (*(iVar2 + 0xa8) != 0)) {
            *(iVar2 + 0x698) = *(arg2 + 0x48) != 0;
            return 0;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs.65,"lpass_cdc_va_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar4 + 0x18),pcVar3,"lpass_cdc_va_macro_lpi_put");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_va_macro_swr_dmic_get @ 0x0800be00 (size 188) =====

ulong sym.lpass_cdc_va_macro_swr_dmic_get(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    char *pcVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0x80);
    iVar2 = lpass_cdc_get_device_ptr(*(iVar4 + 0x18),3);
    if (iVar2 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs,"lpass_cdc_va_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: null device for macro!\n";
    }
    else {
        iVar2 = *(iVar2 + 0x98);
        if ((iVar2 != 0) && (*(iVar2 + 0xa8) != 0)) {
            *(arg2 + 0x48) = *(iVar2 + 0x6c4);
            return 0;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs.65,"lpass_cdc_va_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar4 + 0x18),pcVar3,"lpass_cdc_va_macro_swr_dmic_get");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_va_macro_swr_dmic_put @ 0x0800bebc (size 196) =====

ulong sym.lpass_cdc_va_macro_swr_dmic_put(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    char *pcVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0x80);
    iVar2 = lpass_cdc_get_device_ptr(*(iVar4 + 0x18),3);
    if (iVar2 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs,"lpass_cdc_va_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: null device for macro!\n";
    }
    else {
        iVar2 = *(iVar2 + 0x98);
        if ((iVar2 != 0) && (*(iVar2 + 0xa8) != 0)) {
            *(iVar2 + 0x6c4) = *(arg2 + 0x48) != 0;
            return 0;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs.65,"lpass_cdc_va_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar4 + 0x18),pcVar3,"lpass_cdc_va_macro_swr_dmic_put");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_va_macro_dec_mode_get @ 0x0800bf80 (size 284) =====

void sym.lpass_cdc_va_macro_dec_mode_get(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    char *pcVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iVar6 = *(arg1 + 0x80);
    uStack_3c = 0;
    iVar3 = lpass_cdc_get_device_ptr(*(iVar6 + 0x18),3);
    if (iVar3 == 0) {
        iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs,"lpass_cdc_va_macro_get_data");
        if (iVar2 != 0) {
            pcVar5 = "%s: null device for macro!\n";
code_r0x0800c080:
            _dev_err(*(iVar6 + 0x18),pcVar5,"lpass_cdc_va_macro_dec_mode_get");
        }
code_r0x0800c044:
        uVar4 = 0xffffffea;
    }
    else {
        iVar3 = *(iVar3 + 0x98);
        if ((iVar3 == 0) || (*(iVar3 + 0xa8) == 0)) {
            iVar2 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs.65,"lpass_cdc_va_macro_get_data");
            if (iVar2 != 0) {
                pcVar5 = "%s: priv is null for macro!\n";
                goto code_r0x0800c080;
            }
            goto code_r0x0800c044;
        }
        uVar4 = sym.lpass_cdc_va_macro_path_get(*(iVar3 + 0xa8),&uStack_3c);
        if (uVar4 == 0) {
            if (3 < uStack_3c) goto code_r0x0800c098;
            uVar4 = 0;
            *(arg2 + 0x48) = *(iVar3 + uStack_3c * 4 + 0x69c);
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(uVar4);
code_r0x0800c098:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x800c09c);
    (*pcVar1)();
}


// ===== sym.lpass_cdc_va_macro_dec_mode_put @ 0x0800c09c (size 280) =====

void sym.lpass_cdc_va_macro_dec_mode_put(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    code *pcVar2;
    int iVar3;
    int64_t iVar4;
    ulong uVar5;
    char *pcVar6;
    ulong *in_x18;
    int64_t iVar7;
    ulong unaff_x30;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    iVar7 = *(arg1 + 0x80);
    uStack_3c = 0;
    uVar1 = *(arg2 + 0x48);
    iVar4 = lpass_cdc_get_device_ptr(*(iVar7 + 0x18),3);
    if (iVar4 == 0) {
        iVar3 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs,"lpass_cdc_va_macro_get_data");
        if (iVar3 != 0) {
            pcVar6 = "%s: null device for macro!\n";
code_r0x0800c198:
            _dev_err(*(iVar7 + 0x18),pcVar6,"lpass_cdc_va_macro_dec_mode_put");
        }
code_r0x0800c15c:
        uVar5 = 0xffffffea;
    }
    else {
        iVar4 = *(iVar4 + 0x98);
        if ((iVar4 == 0) || (*(iVar4 + 0xa8) == 0)) {
            iVar3 = ___ratelimit(obj.lpass_cdc_va_macro_get_data._rs.65,"lpass_cdc_va_macro_get_data");
            if (iVar3 != 0) {
                pcVar6 = "%s: priv is null for macro!\n";
                goto code_r0x0800c198;
            }
            goto code_r0x0800c15c;
        }
        uVar5 = sym.lpass_cdc_va_macro_path_get(*(iVar4 + 0xa8),&uStack_3c);
        if (uVar5 == 0) {
            if (3 < uStack_3c) goto code_r0x0800c1b0;
            uVar5 = 0;
            *(iVar4 + uStack_3c * 4 + 0x69c) = uVar1;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(uVar5);
code_r0x0800c1b0:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x800c1b4);
    (*pcVar2)();
}


// ===== sym.lpass_cdc_va_macro_path_get @ 0x0800c1b4 (size 344) =====

uchar * sym.lpass_cdc_va_macro_path_get(ulong noname_0,int64_t arg1)

{
    code *pcVar1;
    uint32_t uVar2;
    int iVar3;
    ulong in_x0;
    int64_t iVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    uchar *puVar6;
    ulong unaff_x30;
    uchar auVar7 [16];
    int64_t iStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    iVar4 = kstrndup(in_x0,10,0xcc0);
    iStack_30 = iVar4;
    if (iVar4 == 0) {
        puVar6 = 0xffffffea;
        goto code_r0x0800c2c0;
    }
    iVar5 = strsep(&iStack_30,0x8000c9f);
    if (iVar5 == 0) {
        iVar3 = ___ratelimit(obj.lpass_cdc_va_macro_path_get._rs,"lpass_cdc_va_macro_path_get");
        if (iVar3 != 0) {
            _printk(0x8001292,"lpass_cdc_va_macro_path_get",iStack_30);
        }
code_r0x0800c2b4:
        puVar6 = 0xffffffea;
    }
    else {
        iVar5 = strpbrk(iVar5,"01234567");
        if (iVar5 == 0) {
            iVar3 = ___ratelimit(obj.lpass_cdc_va_macro_path_get._rs.200,"lpass_cdc_va_macro_path_get");
            if (iVar3 != 0) {
                _printk(0x8000b76,"lpass_cdc_va_macro_path_get");
            }
            goto code_r0x0800c2b4;
        }
        uVar2 = kstrtouint(iVar5,10,arg1);
        puVar6 = uVar2;
        if ((uVar2 < 0) &&
           (iVar3 = ___ratelimit(obj.lpass_cdc_va_macro_path_get._rs.202,"lpass_cdc_va_macro_path_get"), iVar3 != 0))
        {
            _printk(0x80013ce,"lpass_cdc_va_macro_path_get",iVar4);
        }
    }
    kfree(iVar4);
code_r0x0800c2c0:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_28) {
        auVar7 = __stack_chk_fail();
        puVar6 = auVar7._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar6 != NULL) {
            switch(*puVar6) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar6,auVar7._8_8_,0);
                break;
            default:
                return puVar6;
            }
        }
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5502,0x800c364);
        (*pcVar1)();
    }
    return puVar6;
}


// ===== sym.__cfi_check_fail @ 0x0800c30c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800c350

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
    //switch table (4 cases) at 0x8000ac8
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800c364);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x0800c374 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register
              (reloc.lpass_cdc_va_macro_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x0800c3a8 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.lpass_cdc_va_macro_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}

