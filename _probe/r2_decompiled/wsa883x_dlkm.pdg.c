// decompiled from wsa883x_dlkm by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08007000 (size 956) =====

//WARNING: Switch with 1 destination removed at 0x0800a7ec

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x6be91529ddea3c2) {
        if (-0x3987c0e26ee2972a < arg1) {
            if (arg1 < -0xf2d15659b6de7a9) {
                if (arg1 == -0x3987c0e26ee29729) {
                    if ((pcVar1 + -0x8007468 >> 3 | pcVar1 << 0x3d) < 10) {
                        return;
                    }
                    goto code_r0x0800a7ac;
                }
                if (arg1 != -0x13528428f8f6b8aa) goto code_r0x0800a7ac;
                pcVar2 = sym.wsa883x_set_channel_map.cfi_jt;
            }
            else {
                if (arg1 == -0xf2d15659b6de7a9) {
                    if ((pcVar1 + -0x80074d8 >> 3 | pcVar1 << 0x3d) < 4) {
                        return;
                    }
                    goto code_r0x0800a7ac;
                }
                if (arg1 == -0x8dc801903aca538) {
                    pcVar2 = sym.codec_debug_open.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt;
                }
                else {
                    if (arg1 != 0x2b3a43e29242445) goto code_r0x0800a7ac;
                    pcVar2 = sym.init_module.cfi_jt;
                }
            }
            goto code_r0x08007390;
        }
        if (arg1 < -0x49739d0000a0fe53) {
            if (arg1 == -0x749213c658cf941a) {
                pcVar2 = sym.snd_soc_info_enum_double.cfi_jt;
            }
            else {
                if (arg1 != -0x57be845bca9148ef) goto code_r0x0800a7ac;
                pcVar2 = sym.wsa883x_swr_resume.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt;
            }
        }
        else if (arg1 == -0x49739d0000a0fe53) {
            pcVar2 = sym.wsa883x_enable_swr_dac_port.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt;
        }
        else {
            if (arg1 != -0x440ca8bece010a7b) goto code_r0x0800a7ac;
            pcVar2 = sym.wsa883x_swr_remove.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt;
        }
    }
    else {
        if (0x516c7c120760246a < arg1) {
            if (arg1 < 0x7d57972cd3914fb1) {
                if (arg1 == 0x516c7c120760246b) {
                    pcVar2 = sym.wsa883x_codec_info_create_codec_entry.cfi_jt;
                }
                else {
                    if (arg1 != 0x641d19c7be126e92) goto code_r0x0800a7ac;
                    pcVar2 = sym.wsa883x_handle_post_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt;
                }
            }
            else if (arg1 == 0x7d57972cd3914fb1) {
                pcVar2 = sym.wsa883x_event_notify.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt;
            }
            else if (arg1 == 0x7e04a0fb7ad8bcd5) {
                pcVar2 = sym.cleanup_module.cfi_jt;
            }
            else {
                if (arg1 != 0x7e6c99e1529760f9) goto code_r0x0800a7ac;
                pcVar2 = sym.wsa883x_codec_remove.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt;
            }
code_r0x08007390:
            if (pcVar1 == pcVar2) {
                return;
            }
            goto code_r0x0800a7ac;
        }
        if (arg1 < 0x1d7ed092cb04d3f1) {
            if (arg1 == 0x6be91529ddea3c2) {
                if ((pcVar1 + -0x8007450 >> 3 | pcVar1 << 0x3d) < 3) {
                    return;
                }
                goto code_r0x0800a7ac;
            }
            if (arg1 != 0x7ff5a213d37b1a6) goto code_r0x0800a7ac;
            pcVar2 = sym.codec_debug_dump.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt;
        }
        else if (arg1 == 0x1d7ed092cb04d3f1) {
            pcVar2 = sym.codec_debug_peek_write.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt;
        }
        else {
            if (arg1 == 0x2882621ee1337d31) {
                if ((pcVar1 + -0x8007500 >> 3 | pcVar1 << 0x3d) < 0x12) {
                    return;
                }
                goto code_r0x0800a7ac;
            }
            if (arg1 != 0x3f37d02e2e91c6d1) goto code_r0x0800a7ac;
            pcVar2 = sym.wsa883x_variant_read.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt;
        }
    }
    if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
        return;
    }
code_r0x0800a7ac:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800a800);
    (*pcVar1)();
}


// ===== sym.init_module.cfi_jt @ 0x080073c8 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    swr_driver_register(reloc.wsa883x_swr_probe.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt);
    return;
}


// ===== sym.wsa883x_codec_remove.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt @ 0x080073d0 (size 8) =====

void sym.wsa883x_codec_remove.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(*(param_1 + 0x18) + 0x98) != 0) {
        snd_soc_component_exit_regmap();
    }
    return;
}


// ===== sym.wsa883x_set_channel_map.cfi_jt @ 0x080073d8 (size 8) =====

ulong sym.wsa883x_set_channel_map.cfi_jt
                (int64_t param_1,uchar *param_2,uint8_t param_3,uint *param_4,uint *param_5,uchar *param_6)

{
    uchar uVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((((param_3 < 5) && (param_2 != NULL)) && (param_4 != NULL)) && (param_5 != NULL)) {
        if (param_3 != 0) {
            iVar3 = *(*(param_1 + 0x18) + 0x98);
            *(iVar3 + 0x24) = *param_2;
            *(iVar3 + 0x25) = *param_4;
            *(iVar3 + 0x28) = *param_5;
            uVar1 = __sw_hweight8(*param_4);
            *(iVar3 + 0x2c) = uVar1;
            if (param_6 != NULL) {
                *(iVar3 + 0x2d) = *param_6;
            }
            if (param_3 != 1) {
                *(iVar3 + 0x30) = param_2[1];
                *(iVar3 + 0x31) = param_4[1];
                *(iVar3 + 0x34) = param_5[1];
                uVar1 = __sw_hweight8(param_4[1]);
                *(iVar3 + 0x38) = uVar1;
                if (param_6 != NULL) {
                    *(iVar3 + 0x39) = param_6[1];
                }
                if (param_3 != 2) {
                    *(iVar3 + 0x3c) = param_2[2];
                    *(iVar3 + 0x3d) = param_4[2];
                    *(iVar3 + 0x40) = param_5[2];
                    uVar1 = __sw_hweight8(param_4[2]);
                    *(iVar3 + 0x44) = uVar1;
                    if (param_6 != NULL) {
                        *(iVar3 + 0x45) = param_6[2];
                    }
                    if (param_3 != 3) {
                        *(iVar3 + 0x48) = param_2[3];
                        *(iVar3 + 0x49) = param_4[3];
                        *(iVar3 + 0x4c) = param_5[3];
                        uVar1 = __sw_hweight8(param_4[3]);
                        *(iVar3 + 0x50) = uVar1;
                        if (param_6 != NULL) {
                            *(iVar3 + 0x51) = param_6[3];
                            return 0;
                        }
                    }
                }
            }
        }
        uVar2 = 0;
    }
    else {
        _dev_err(*(param_1 + 0x18),"%s: Invalid port=%pK, ch_mask=%pK, ch_rate=%pK\n","wsa883x_set_channel_map",
                 param_2,param_4,param_5);
        uVar2 = 0xffffffea;
    }
    return uVar2;
}


// ===== sym.wsa883x_variant_read.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt @ 0x080073e0 (size 8) =====

uint64_t sym.wsa883x_variant_read.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt
                   (int64_t param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,ulong param_6)

{
    int64_t *piVar1;
    uint64_t *puVar2;
    int64_t iVar3;
    int iVar4;
    int iVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    uint64_t *arg1;
    uint64_t uVar8;
    uint64_t uVar9;
    int64_t *piVar10;
    int64_t iVar11;
    char *pcVar12;
    ulong uVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    code *pcVar14;
    int64_t iVar15;
    uint64_t *puVar16;
    uint64_t *puVar17;
    ulong unaff_x30;
    uchar auStack_d4 [4];
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    ulong uStack_40;
    unkbyte7 Stack_38;
    char cStack_31;
    uchar uStack_30;
    ushort uStack_2f;
    unkbyte5 Stack_2d;
    ulong uStack_28;
    ulong uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_18 = *(iVar11 + 0x5e0);
    Stack_38 = 0;
    cStack_31 = '\0';
    uStack_28 = 0;
    uStack_20 = 0;
    uStack_30 = 0;
    uStack_2f = 0;
    Stack_2d = 0;
    uStack_40 = param_6;
    if (*(param_1 + 0x40) == 0) {
        _printk(0x800194e,"wsa883x_variant_read");
        uVar7 = 0xffffffffffffffea;
    }
    else {
        switch(*(*(param_1 + 0x40) + 0xb8)) {
        case 0:
            pcVar12 = "WSA8830\n";
            break;
        case 1:
        case 5:
            pcVar12 = "WSA8835\n";
            break;
        case 2:
            pcVar12 = "WSA8832\n";
            break;
        default:
            uVar13 = 10;
            uStack_30 = 0x44;
            uStack_2f = 10;
            Stack_38 = str.UNDEFINED_n._0_8_;
            cStack_31 = SUB81(str.UNDEFINED_n._0_8_,7);
            goto code_r0x08007ac0;
        }
        uVar13 = 8;
        uStack_30 = 0;
        Stack_38 = *pcVar12;
        cStack_31 = *pcVar12 >> 0x38;
code_r0x08007ac0:
        uVar7 = simple_read_from_buffer(param_4,param_5,&uStack_40,&Stack_38,uVar13);
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_18) {
        return uVar7;
    }
    uVar7 = __stack_chk_fail(uVar7);
    *extraout_x18 = sym.wsa883x_swr_probe;
    pcStack_98 = sym.wsa883x_swr_probe;
    iVar11 = sp_el0;
    piVar1 = uVar7 + 0x48;
    iStack_a8 = *(iVar11 + 0x5e0);
    auStack_d4[0] = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d0 = 0;
    puStack_a0 = &stack0xfffffffffffffff0;
    arg1 = devm_kmalloc(piVar1,0x188,0xdc0);
    if ((arg1 == NULL) || (uVar8 = devm_kmalloc(piVar1,0x88,0xdc0), uVar8 == 0)) {
        uVar9 = 0xfffffff4;
        goto code_r0x08008228;
    }
    memcpy(uVar8,obj.wsa883x_regmap_irq_chip,0x88);
    puVar16 = arg1 + 0x2b;
    puVar2 = arg1 + 0x2c;
    msm_cdc_get_power_supplies(piVar1,puVar16,puVar2);
    if ((arg1[0x2b] == 0) || (*puVar2 < 1)) {
        pcVar12 = "%s: no power supplies defined\n";
code_r0x080080fc:
        _dev_err(piVar1,pcVar12,"wsa883x_enable_supplies");
code_r0x0800810c:
        uVar9 = 0xfffffdfb;
    }
    else {
        iVar4 = msm_cdc_init_supplies(piVar1,arg1 + 0x2d);
        if (arg1[0x2d] == 0) {
            _dev_err(piVar1,"%s: Cannot init wsa supplies\n","wsa883x_enable_supplies");
            if (iVar4 != 0) goto code_r0x0800810c;
        }
        else {
            iVar4 = msm_cdc_enable_static_supplies(piVar1,arg1[0x2d],*puVar16,*puVar2);
            if (iVar4 != 0) {
                pcVar12 = "%s: wsa static supply enable failed!\n";
                goto code_r0x080080fc;
            }
        }
        uVar9 = of_parse_phandle(*(uVar7 + 0x338),"qcom,spkr-sd-n-node",0);
        arg1[0x15] = uVar9;
        if (uVar9 == 0) {
            uVar9 = 0;
        }
        else {
            *(uVar7 + 0xe0) = arg1;
            arg1[1] = piVar1;
            arg1[2] = uVar7;
            iVar4 = msm_cdc_pinctrl_get_state();
            iVar5 = msm_cdc_pinctrl_select_active_state(arg1[0x15]);
            if (iVar5 != 0) {
                _dev_err(arg1[1],"%s: Failed to turn state %d; ret=%d\n","wsa883x_gpio_ctrl",1,iVar5);
            }
            usleep_range_state(5000,0x1392,2);
            iVar5 = swr_get_logical_dev_num(uVar7,*(uVar7 + 0x3d8),auStack_d4);
            if (iVar5 == 0) {
                *(uVar7 + 0x40) = auStack_d4[0];
                uVar9 = __devm_regmap_init_swr(uVar7,obj.wsa883x_regmap_config,0,0);
                *arg1 = uVar9;
                if (uVar9 < 0xfffffffffffff001) {
                    devm_regmap_qti_debugfs_register(piVar1,uVar9);
                    if (0 < *(uVar8 + 0x48)) {
                        iVar5 = 0;
                        do {
                            regmap_write(*arg1,iVar5 + 0x3487,0);
                            iVar5 = iVar5 + 1;
                        } while (iVar5 < *(uVar8 + 0x48));
                    }
                    *(uVar8 + 0x80) = arg1;
                    arg1[0x1e] = piVar1;
                    puVar17 = arg1 + 0x1a;
                    *puVar17 = uVar8;
                    arg1[0x1b] = "WSA883X";
                    arg1[0x1c] = *arg1;
                    uVar6 = wcd_irq_init(puVar17,arg1 + 0x19);
                    if (uVar6 != 0) {
                        uVar9 = uVar6;
                        pcVar12 = "%s: IRQ init failed: %d\n";
                        piVar10 = arg1[1];
                        goto code_r0x08008388;
                    }
                    *(arg1[2] + 1000) = arg1[0x19];
                    wcd_request_irq(puVar17,0,"WSA SAF2WAR",
                                    sym.wsa883x_saf2war_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1);
                    wcd_disable_irq(puVar17,0);
                    wcd_request_irq(puVar17,1,"WSA WAR2SAF",
                                    sym.wsa883x_war2saf_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1);
                    wcd_disable_irq(puVar17,1);
                    wcd_request_irq(puVar17,2,"WSA OTP",
                                    sym.wsa883x_otp_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1);
                    wcd_disable_irq(puVar17,2);
                    wcd_request_irq(puVar17,3,"WSA OCP",
                                    sym.wsa883x_ocp_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1);
                    wcd_disable_irq(puVar17,3);
                    wcd_request_irq(puVar17,4,"WSA CLIP",
                                    sym.wsa883x_clip_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1);
                    wcd_disable_irq(puVar17,4);
                    wcd_request_irq(puVar17,5,"WSA PDM WD",
                                    sym.wsa883x_pdm_wd_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1);
                    wcd_disable_irq(puVar17,5);
                    wcd_request_irq(puVar17,6,"WSA CLK WD",
                                    sym.wsa883x_clk_wd_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1);
                    wcd_disable_irq(puVar17,6);
                    wcd_request_irq(puVar17,7,"WSA EXT INT",
                                    sym.wsa883x_ext_int_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1);
                    wcd_disable_irq(puVar17,7);
                    wcd_request_irq(puVar17,8,"WSA UVLO",
                                    sym.wsa883x_uvlo_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1);
                    wcd_disable_irq(puVar17,8);
                    wcd_request_irq(puVar17,9,"WSA PA ERR",
                                    sym.wsa883x_pa_on_err_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1);
                    wcd_disable_irq(puVar17,9);
                    uVar8 = devm_kmalloc(piVar1,0x160,0xdc0);
                    arg1[0x30] = uVar8;
                    if (uVar8 == 0) {
                        uVar9 = 0xfffffff4;
                    }
                    else {
                        memcpy(uVar8,obj.soc_codec_dev_wsa883x_wsa,0x160);
                        uVar8 = devm_kmalloc(piVar1,0xf0,0xdc0);
                        arg1[0x2f] = uVar8;
                        if (uVar8 == 0) {
                            uVar9 = 0xfffffff4;
                        }
                        else {
                            memcpy(uVar8,obj.wsa_dai,0xf0);
                            uVar6 = *(uVar7 + 0x3d8) & 0xf;
                            iVar5 = of_device_is_compatible(*(uVar7 + 0x338),0x8001af7);
                            if (iVar5 != 0) {
                                uVar6 = uVar6 + 2;
                            }
                            snprintf(&uStack_d0,0x28,"wsa-codec.%d",uVar6);
                            uVar13 = strlen(&uStack_d0);
                            uVar13 = kstrndup(&uStack_d0,uVar13,0xcc0);
                            *arg1[0x30] = uVar13;
                            snprintf(&uStack_d0,0x28,"wsa_rx%d",uVar6);
                            uVar13 = strlen(&uStack_d0);
                            uVar13 = kstrndup(&uStack_d0,uVar13,0xcc0);
                            *arg1[0x2f] = uVar13;
                            snprintf(&uStack_d0,0x28,"WSA883X_AIF%d Playback",uVar6);
                            uVar13 = strlen(&uStack_d0);
                            uVar13 = kstrndup(&uStack_d0,uVar13,0xcc0);
                            *(arg1[0x2f] + 0xb0) = uVar13;
                            snd_soc_register_component(piVar1,arg1[0x30],arg1[0x2f],1);
                            iVar11 = snd_soc_lookup_component(piVar1,*arg1[0x30]);
                            if (iVar11 != 0) {
                                uVar8 = of_parse_phandle(*(uVar7 + 0x338),"qcom,bolero-handle",0);
                                arg1[0x24] = uVar8;
                                if (uVar8 == 0) {
                                    uVar8 = of_parse_phandle(*(uVar7 + 0x338),"qcom,lpass-cdc-handle",0);
                                    arg1[0x24] = uVar8;
                                    if (uVar8 != 0) goto code_r0x08008058;
                                    _dev_info(piVar1,"%s: parent node not found\n","wsa883x_swr_probe");
                                }
                                else {
code_r0x08008058:
                                    uVar8 = of_find_device_by_node();
                                    arg1[0x25] = uVar8;
                                    if (uVar8 == 0) {
                                        pcVar12 = "%s: parent dev not found\n";
                                    }
                                    else {
                                        puVar16 = *(uVar8 + 0xa0);
                                        if (puVar16 != NULL) {
                                            arg1[0x26] = 
                                            sym.wsa883x_event_notify.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt;
                                            pcVar14 = puVar16[2];
                                            if (pcVar14 == NULL) {
                                                uVar8 = 0;
                                            }
                                            else {
                                                __cfi_slowpath_diag(0x3b795baa068bc3a6,pcVar14,0x8001220);
                                                (*pcVar14)(*puVar16,arg1 + 0x26,1);
                                                uVar8 = puVar16[2];
                                            }
                                            arg1[0x2a] = uVar8;
                                            arg1[0x29] = *puVar16;
                                            goto code_r0x0800829c;
                                        }
                                        pcVar12 = "%s: plat data not found\n";
                                    }
                                    _dev_err(piVar1,pcVar12,"wsa883x_swr_probe");
                                }
code_r0x0800829c:
                                __mutex_init(arg1 + 0xc,"&wsa883x->res_lock",obj.wsa883x_swr_probe.__key);
                                if (arg1[0x1f] == 0) {
                                    iVar11 = *(uVar7 + 0xb8);
                                    if (iVar11 == 0) {
                                        iVar11 = *piVar1;
                                    }
                                    uVar8 = debugfs_create_dir(iVar11,0);
                                    arg1[0x1f] = uVar8;
                                    if (uVar8 < 0xfffffffffffff001) {
                                        uVar8 = debugfs_create_file("swrslave_peek",0x8124,uVar8,uVar7,
                                                                    obj.codec_debug_read_ops);
                                        arg1[0x20] = uVar8;
                                        uVar8 = debugfs_create_file("swrslave_poke",0x8124,arg1[0x1f],uVar7,
                                                                    obj.codec_debug_write_ops);
                                        arg1[0x21] = uVar8;
                                        uVar7 = debugfs_create_file("swrslave_reg_dump",0x8124,arg1[0x1f],uVar7,
                                                                    obj.codec_debug_dump_ops);
                                        uVar9 = 0;
                                        arg1[0x22] = uVar7;
                                        goto code_r0x08008228;
                                    }
                                }
                                uVar9 = 0;
                                goto code_r0x08008228;
                            }
                            _dev_err(piVar1,"%s: component is NULL \n","wsa883x_swr_probe");
                            uVar9 = 0xffffffea;
                            if (arg1[0x2f] != NULL) {
                                uVar9 = 0xffffffea;
                                kfree(*arg1[0x2f]);
                                kfree(*(arg1[0x2f] + 0xb0));
                                kfree(arg1[0x2f]);
                            }
                        }
                        if (arg1[0x30] != NULL) {
                            kfree(*arg1[0x30]);
                            kfree(arg1[0x30]);
                        }
                    }
                    wcd_free_irq(puVar17,0,0);
                    wcd_free_irq(puVar17,1,0);
                    wcd_free_irq(puVar17,2,0);
                    wcd_free_irq(puVar17,3,0);
                    wcd_free_irq(puVar17,4,0);
                    wcd_free_irq(puVar17,5,0);
                    wcd_free_irq(puVar17,6,0);
                    wcd_free_irq(puVar17,7,0);
                    wcd_free_irq(puVar17,8,0);
                    wcd_free_irq(puVar17,9,0);
                    wcd_irq_exit(puVar17,arg1[0x19]);
                }
                else {
                    pcVar12 = "%s: regmap_init failed %d\n";
                    piVar10 = piVar1;
code_r0x08008388:
                    _dev_err(piVar10,pcVar12,"wsa883x_swr_probe",uVar9 & 0xffffffff);
                }
                if (iVar4 == 0) {
                    sym.wsa883x_gpio_ctrl(arg1);
                }
                swr_remove_device(uVar7);
            }
            else {
                uVar9 = 0xfffffdfb;
            }
        }
        msm_cdc_release_supplies(piVar1,arg1[0x2d],*puVar16,*puVar2);
    }
    *(uVar7 + 0xe0) = 0;
code_r0x08008228:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) != iStack_a8) {
        iVar11 = __stack_chk_fail();
        *extraout_x18_00 = sym.wsa883x_swr_remove;
        if ((iVar11 == 0) || (iVar15 = *(iVar11 + 0xe0), iVar15 == 0)) {
            _dev_err(iVar11 + 0x48,"%s: wsa883x is NULL\n","wsa883x_swr_remove");
            uVar7 = 0xffffffea;
        }
        else {
            iVar3 = iVar15 + 0xd0;
            wcd_free_irq(iVar3,0,0);
            wcd_free_irq(iVar3,1,0);
            wcd_free_irq(iVar3,2,0);
            wcd_free_irq(iVar3,3,0);
            wcd_free_irq(iVar3,4,0);
            wcd_free_irq(iVar3,5,0);
            wcd_free_irq(iVar3,6,0);
            wcd_free_irq(iVar3,7,0);
            wcd_free_irq(iVar3,8,0);
            wcd_free_irq(iVar3,9,0);
            pcVar14 = *(iVar15 + 0x150);
            if (pcVar14 != NULL) {
                __cfi_slowpath_diag(0x3b795baa068bc3a6,pcVar14,0x8001240);
                (*pcVar14)(*(iVar15 + 0x148),iVar15 + 0x130,0);
            }
            debugfs_remove(*(iVar15 + 0xf8));
            *(iVar15 + 0xf8) = 0;
            snd_soc_unregister_component(iVar11 + 0x48);
            if (*(iVar15 + 0x178) != NULL) {
                kfree(**(iVar15 + 0x178));
                kfree(*(*(iVar15 + 0x178) + 0xb0));
                kfree(*(iVar15 + 0x178));
            }
            if (*(iVar15 + 0x180) != NULL) {
                kfree(**(iVar15 + 0x180));
                kfree(*(iVar15 + 0x180));
            }
            msm_cdc_release_supplies(iVar11 + 0x48,*(iVar15 + 0x168),*(iVar15 + 0x158),*(iVar15 + 0x160));
            uVar7 = 0;
            *(iVar11 + 0xe0) = 0;
        }
        return uVar7;
    }
    return uVar9 & 0xffffffff;
}


// ===== sym.wsa883x_codec_version_read.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt @ 0x080073e8 (size 8) =====

uint64_t sym.wsa883x_codec_version_read.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt
                   (int64_t param_1,ulong param_2,ulong param_3,unkbyte5 *param_4,ulong param_5,ulong param_6)

{
    int64_t *piVar1;
    uint64_t *puVar2;
    int64_t iVar3;
    int iVar4;
    int iVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    uint64_t *arg1;
    uint64_t uVar9;
    uint64_t uVar10;
    int64_t *piVar11;
    int64_t iVar12;
    unkbyte5 *pVar13;
    ulong uVar14;
    char *pcVar15;
    ulong uVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    code *pcVar17;
    uint64_t *puVar18;
    uint64_t *puVar19;
    ulong unaff_x30;
    uchar auStack_114 [4];
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    int64_t iStack_e8;
    uchar **ppuStack_e0;
    code *pcStack_d8;
    ulong uStack_80;
    unkbyte7 Stack_78;
    char cStack_71;
    uchar uStack_70;
    ushort uStack_6f;
    unkbyte5 Stack_6d;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    ulong uStack_40;
    unkbyte5 Stack_38;
    ushort uStack_33;
    char cStack_31;
    unkbyte5 Stack_30;
    ushort uStack_2b;
    uchar uStack_29;
    ulong uStack_28;
    ulong uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_18 = *(iVar12 + 0x5e0);
    Stack_38 = 0;
    uStack_33 = 0;
    cStack_31 = '\0';
    uStack_28 = 0;
    uStack_20 = 0;
    Stack_30 = 0;
    uStack_2b = 0;
    uStack_29 = 0;
    uStack_40 = param_6;
    if (*(param_1 + 0x40) == 0) {
        _printk(0x800194e,"wsa883x_codec_version_read");
        uVar7 = 0xffffffffffffffea;
    }
    else {
        iVar4 = *(*(param_1 + 0x40) + 0xbc);
        if (iVar4 == 1) {
            pcVar15 = "WSA883X_1_1\n";
code_r0x0800796c:
            uVar16 = *(pcVar15 + 5);
            uVar14 = 0xc;
            Stack_38 = *pcVar15;
            uStack_33 = uVar16;
            cStack_31 = uVar16 >> 0x10;
            Stack_30 = uVar16 >> 0x18;
        }
        else {
            if (iVar4 == 0) {
                pcVar15 = "WSA883X_1_0\n";
                goto code_r0x0800796c;
            }
            uVar14 = 0xe;
            Stack_38 = str.VER_UNDEFINED_n._0_7_;
            uStack_33 = SUB72(str.VER_UNDEFINED_n._0_7_,5);
            cStack_31 = str.VER_UNDEFINED_n[7];
            Stack_30 = str.VER_UNDEFINED_n._8_7_;
            uStack_2b = SUB72(str.VER_UNDEFINED_n._8_7_,5);
        }
        pVar13 = &Stack_38;
        uVar7 = simple_read_from_buffer(param_4,param_5,&uStack_40,pVar13,uVar14);
        param_4 = pVar13;
        param_5 = uVar14;
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_18) {
        return uVar7;
    }
    iVar8 = __stack_chk_fail(uVar7);
    *extraout_x18 = sym.wsa883x_variant_read;
    pcStack_48 = sym.wsa883x_variant_read;
    iVar12 = sp_el0;
    iStack_58 = *(iVar12 + 0x5e0);
    Stack_78 = 0;
    cStack_71 = '\0';
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_70 = 0;
    uStack_6f = 0;
    Stack_6d = 0;
    uStack_80 = param_6;
    puStack_50 = &stack0xfffffffffffffff0;
    if (*(iVar8 + 0x40) == 0) {
        _printk(0x800194e,"wsa883x_variant_read");
        uVar7 = 0xffffffffffffffea;
    }
    else {
        switch(*(*(iVar8 + 0x40) + 0xb8)) {
        case 0:
            pcVar15 = "WSA8830\n";
            break;
        case 1:
        case 5:
            pcVar15 = "WSA8835\n";
            break;
        case 2:
            pcVar15 = "WSA8832\n";
            break;
        default:
            uVar14 = 10;
            uStack_70 = 0x44;
            uStack_6f = 10;
            Stack_78 = str.UNDEFINED_n._0_8_;
            cStack_71 = SUB81(str.UNDEFINED_n._0_8_,7);
            goto code_r0x08007ac0;
        }
        uVar14 = 8;
        uStack_70 = 0;
        Stack_78 = *pcVar15;
        cStack_71 = *pcVar15 >> 0x38;
code_r0x08007ac0:
        uVar7 = simple_read_from_buffer(param_4,param_5,&uStack_80,&Stack_78,uVar14);
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_58) {
        return uVar7;
    }
    uVar7 = __stack_chk_fail(uVar7);
    *extraout_x18_00 = sym.wsa883x_swr_probe;
    pcStack_d8 = sym.wsa883x_swr_probe;
    iVar12 = sp_el0;
    piVar1 = uVar7 + 0x48;
    iStack_e8 = *(iVar12 + 0x5e0);
    auStack_114[0] = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_110 = 0;
    ppuStack_e0 = &puStack_50;
    arg1 = devm_kmalloc(piVar1,0x188,0xdc0);
    if ((arg1 == NULL) || (uVar9 = devm_kmalloc(piVar1,0x88,0xdc0), uVar9 == 0)) {
        uVar10 = 0xfffffff4;
        goto code_r0x08008228;
    }
    memcpy(uVar9,obj.wsa883x_regmap_irq_chip,0x88);
    puVar18 = arg1 + 0x2b;
    puVar2 = arg1 + 0x2c;
    msm_cdc_get_power_supplies(piVar1,puVar18,puVar2);
    if ((arg1[0x2b] == 0) || (*puVar2 < 1)) {
        pcVar15 = "%s: no power supplies defined\n";
code_r0x080080fc:
        _dev_err(piVar1,pcVar15,"wsa883x_enable_supplies");
code_r0x0800810c:
        uVar10 = 0xfffffdfb;
    }
    else {
        iVar4 = msm_cdc_init_supplies(piVar1,arg1 + 0x2d);
        if (arg1[0x2d] == 0) {
            _dev_err(piVar1,"%s: Cannot init wsa supplies\n","wsa883x_enable_supplies");
            if (iVar4 != 0) goto code_r0x0800810c;
        }
        else {
            iVar4 = msm_cdc_enable_static_supplies(piVar1,arg1[0x2d],*puVar18,*puVar2);
            if (iVar4 != 0) {
                pcVar15 = "%s: wsa static supply enable failed!\n";
                goto code_r0x080080fc;
            }
        }
        uVar10 = of_parse_phandle(*(uVar7 + 0x338),"qcom,spkr-sd-n-node",0);
        arg1[0x15] = uVar10;
        if (uVar10 == 0) {
            uVar10 = 0;
        }
        else {
            *(uVar7 + 0xe0) = arg1;
            arg1[1] = piVar1;
            arg1[2] = uVar7;
            iVar4 = msm_cdc_pinctrl_get_state();
            iVar5 = msm_cdc_pinctrl_select_active_state(arg1[0x15]);
            if (iVar5 != 0) {
                _dev_err(arg1[1],"%s: Failed to turn state %d; ret=%d\n","wsa883x_gpio_ctrl",1,iVar5);
            }
            usleep_range_state(5000,0x1392,2);
            iVar5 = swr_get_logical_dev_num(uVar7,*(uVar7 + 0x3d8),auStack_114);
            if (iVar5 == 0) {
                *(uVar7 + 0x40) = auStack_114[0];
                uVar10 = __devm_regmap_init_swr(uVar7,obj.wsa883x_regmap_config,0,0);
                *arg1 = uVar10;
                if (uVar10 < 0xfffffffffffff001) {
                    devm_regmap_qti_debugfs_register(piVar1,uVar10);
                    if (0 < *(uVar9 + 0x48)) {
                        iVar5 = 0;
                        do {
                            regmap_write(*arg1,iVar5 + 0x3487,0);
                            iVar5 = iVar5 + 1;
                        } while (iVar5 < *(uVar9 + 0x48));
                    }
                    *(uVar9 + 0x80) = arg1;
                    arg1[0x1e] = piVar1;
                    puVar19 = arg1 + 0x1a;
                    *puVar19 = uVar9;
                    arg1[0x1b] = "WSA883X";
                    arg1[0x1c] = *arg1;
                    uVar6 = wcd_irq_init(puVar19,arg1 + 0x19);
                    if (uVar6 != 0) {
                        uVar10 = uVar6;
                        pcVar15 = "%s: IRQ init failed: %d\n";
                        piVar11 = arg1[1];
                        goto code_r0x08008388;
                    }
                    *(arg1[2] + 1000) = arg1[0x19];
                    wcd_request_irq(puVar19,0,"WSA SAF2WAR",
                                    sym.wsa883x_saf2war_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1);
                    wcd_disable_irq(puVar19,0);
                    wcd_request_irq(puVar19,1,"WSA WAR2SAF",
                                    sym.wsa883x_war2saf_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1);
                    wcd_disable_irq(puVar19,1);
                    wcd_request_irq(puVar19,2,"WSA OTP",
                                    sym.wsa883x_otp_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1);
                    wcd_disable_irq(puVar19,2);
                    wcd_request_irq(puVar19,3,"WSA OCP",
                                    sym.wsa883x_ocp_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1);
                    wcd_disable_irq(puVar19,3);
                    wcd_request_irq(puVar19,4,"WSA CLIP",
                                    sym.wsa883x_clip_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1);
                    wcd_disable_irq(puVar19,4);
                    wcd_request_irq(puVar19,5,"WSA PDM WD",
                                    sym.wsa883x_pdm_wd_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1);
                    wcd_disable_irq(puVar19,5);
                    wcd_request_irq(puVar19,6,"WSA CLK WD",
                                    sym.wsa883x_clk_wd_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1);
                    wcd_disable_irq(puVar19,6);
                    wcd_request_irq(puVar19,7,"WSA EXT INT",
                                    sym.wsa883x_ext_int_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1);
                    wcd_disable_irq(puVar19,7);
                    wcd_request_irq(puVar19,8,"WSA UVLO",
                                    sym.wsa883x_uvlo_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1);
                    wcd_disable_irq(puVar19,8);
                    wcd_request_irq(puVar19,9,"WSA PA ERR",
                                    sym.wsa883x_pa_on_err_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1);
                    wcd_disable_irq(puVar19,9);
                    uVar9 = devm_kmalloc(piVar1,0x160,0xdc0);
                    arg1[0x30] = uVar9;
                    if (uVar9 == 0) {
                        uVar10 = 0xfffffff4;
                    }
                    else {
                        memcpy(uVar9,obj.soc_codec_dev_wsa883x_wsa,0x160);
                        uVar9 = devm_kmalloc(piVar1,0xf0,0xdc0);
                        arg1[0x2f] = uVar9;
                        if (uVar9 == 0) {
                            uVar10 = 0xfffffff4;
                        }
                        else {
                            memcpy(uVar9,obj.wsa_dai,0xf0);
                            uVar6 = *(uVar7 + 0x3d8) & 0xf;
                            iVar5 = of_device_is_compatible(*(uVar7 + 0x338),0x8001af7);
                            if (iVar5 != 0) {
                                uVar6 = uVar6 + 2;
                            }
                            snprintf(&uStack_110,0x28,"wsa-codec.%d",uVar6);
                            uVar14 = strlen(&uStack_110);
                            uVar14 = kstrndup(&uStack_110,uVar14,0xcc0);
                            *arg1[0x30] = uVar14;
                            snprintf(&uStack_110,0x28,"wsa_rx%d",uVar6);
                            uVar14 = strlen(&uStack_110);
                            uVar14 = kstrndup(&uStack_110,uVar14,0xcc0);
                            *arg1[0x2f] = uVar14;
                            snprintf(&uStack_110,0x28,"WSA883X_AIF%d Playback",uVar6);
                            uVar14 = strlen(&uStack_110);
                            uVar14 = kstrndup(&uStack_110,uVar14,0xcc0);
                            *(arg1[0x2f] + 0xb0) = uVar14;
                            snd_soc_register_component(piVar1,arg1[0x30],arg1[0x2f],1);
                            iVar12 = snd_soc_lookup_component(piVar1,*arg1[0x30]);
                            if (iVar12 != 0) {
                                uVar9 = of_parse_phandle(*(uVar7 + 0x338),"qcom,bolero-handle",0);
                                arg1[0x24] = uVar9;
                                if (uVar9 == 0) {
                                    uVar9 = of_parse_phandle(*(uVar7 + 0x338),"qcom,lpass-cdc-handle",0);
                                    arg1[0x24] = uVar9;
                                    if (uVar9 != 0) goto code_r0x08008058;
                                    _dev_info(piVar1,"%s: parent node not found\n","wsa883x_swr_probe");
                                }
                                else {
code_r0x08008058:
                                    uVar9 = of_find_device_by_node();
                                    arg1[0x25] = uVar9;
                                    if (uVar9 == 0) {
                                        pcVar15 = "%s: parent dev not found\n";
                                    }
                                    else {
                                        puVar18 = *(uVar9 + 0xa0);
                                        if (puVar18 != NULL) {
                                            arg1[0x26] = 
                                            sym.wsa883x_event_notify.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt;
                                            pcVar17 = puVar18[2];
                                            if (pcVar17 == NULL) {
                                                uVar9 = 0;
                                            }
                                            else {
                                                __cfi_slowpath_diag(0x3b795baa068bc3a6,pcVar17,0x8001220);
                                                (*pcVar17)(*puVar18,arg1 + 0x26,1);
                                                uVar9 = puVar18[2];
                                            }
                                            arg1[0x2a] = uVar9;
                                            arg1[0x29] = *puVar18;
                                            goto code_r0x0800829c;
                                        }
                                        pcVar15 = "%s: plat data not found\n";
                                    }
                                    _dev_err(piVar1,pcVar15,"wsa883x_swr_probe");
                                }
code_r0x0800829c:
                                __mutex_init(arg1 + 0xc,"&wsa883x->res_lock",obj.wsa883x_swr_probe.__key);
                                if (arg1[0x1f] == 0) {
                                    iVar12 = *(uVar7 + 0xb8);
                                    if (iVar12 == 0) {
                                        iVar12 = *piVar1;
                                    }
                                    uVar9 = debugfs_create_dir(iVar12,0);
                                    arg1[0x1f] = uVar9;
                                    if (uVar9 < 0xfffffffffffff001) {
                                        uVar9 = debugfs_create_file("swrslave_peek",0x8124,uVar9,uVar7,
                                                                    obj.codec_debug_read_ops);
                                        arg1[0x20] = uVar9;
                                        uVar9 = debugfs_create_file("swrslave_poke",0x8124,arg1[0x1f],uVar7,
                                                                    obj.codec_debug_write_ops);
                                        arg1[0x21] = uVar9;
                                        uVar7 = debugfs_create_file("swrslave_reg_dump",0x8124,arg1[0x1f],uVar7,
                                                                    obj.codec_debug_dump_ops);
                                        uVar10 = 0;
                                        arg1[0x22] = uVar7;
                                        goto code_r0x08008228;
                                    }
                                }
                                uVar10 = 0;
                                goto code_r0x08008228;
                            }
                            _dev_err(piVar1,"%s: component is NULL \n","wsa883x_swr_probe");
                            uVar10 = 0xffffffea;
                            if (arg1[0x2f] != NULL) {
                                uVar10 = 0xffffffea;
                                kfree(*arg1[0x2f]);
                                kfree(*(arg1[0x2f] + 0xb0));
                                kfree(arg1[0x2f]);
                            }
                        }
                        if (arg1[0x30] != NULL) {
                            kfree(*arg1[0x30]);
                            kfree(arg1[0x30]);
                        }
                    }
                    wcd_free_irq(puVar19,0,0);
                    wcd_free_irq(puVar19,1,0);
                    wcd_free_irq(puVar19,2,0);
                    wcd_free_irq(puVar19,3,0);
                    wcd_free_irq(puVar19,4,0);
                    wcd_free_irq(puVar19,5,0);
                    wcd_free_irq(puVar19,6,0);
                    wcd_free_irq(puVar19,7,0);
                    wcd_free_irq(puVar19,8,0);
                    wcd_free_irq(puVar19,9,0);
                    wcd_irq_exit(puVar19,arg1[0x19]);
                }
                else {
                    pcVar15 = "%s: regmap_init failed %d\n";
                    piVar11 = piVar1;
code_r0x08008388:
                    _dev_err(piVar11,pcVar15,"wsa883x_swr_probe",uVar10 & 0xffffffff);
                }
                if (iVar4 == 0) {
                    sym.wsa883x_gpio_ctrl(arg1);
                }
                swr_remove_device(uVar7);
            }
            else {
                uVar10 = 0xfffffdfb;
            }
        }
        msm_cdc_release_supplies(piVar1,arg1[0x2d],*puVar18,*puVar2);
    }
    *(uVar7 + 0xe0) = 0;
code_r0x08008228:
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) != iStack_e8) {
        iVar12 = __stack_chk_fail();
        *extraout_x18_01 = sym.wsa883x_swr_remove;
        if ((iVar12 == 0) || (iVar8 = *(iVar12 + 0xe0), iVar8 == 0)) {
            _dev_err(iVar12 + 0x48,"%s: wsa883x is NULL\n","wsa883x_swr_remove");
            uVar7 = 0xffffffea;
        }
        else {
            iVar3 = iVar8 + 0xd0;
            wcd_free_irq(iVar3,0,0);
            wcd_free_irq(iVar3,1,0);
            wcd_free_irq(iVar3,2,0);
            wcd_free_irq(iVar3,3,0);
            wcd_free_irq(iVar3,4,0);
            wcd_free_irq(iVar3,5,0);
            wcd_free_irq(iVar3,6,0);
            wcd_free_irq(iVar3,7,0);
            wcd_free_irq(iVar3,8,0);
            wcd_free_irq(iVar3,9,0);
            pcVar17 = *(iVar8 + 0x150);
            if (pcVar17 != NULL) {
                __cfi_slowpath_diag(0x3b795baa068bc3a6,pcVar17,0x8001240);
                (*pcVar17)(*(iVar8 + 0x148),iVar8 + 0x130,0);
            }
            debugfs_remove(*(iVar8 + 0xf8));
            *(iVar8 + 0xf8) = 0;
            snd_soc_unregister_component(iVar12 + 0x48);
            if (*(iVar8 + 0x178) != NULL) {
                kfree(**(iVar8 + 0x178));
                kfree(*(*(iVar8 + 0x178) + 0xb0));
                kfree(*(iVar8 + 0x178));
            }
            if (*(iVar8 + 0x180) != NULL) {
                kfree(**(iVar8 + 0x180));
                kfree(*(iVar8 + 0x180));
            }
            msm_cdc_release_supplies(iVar12 + 0x48,*(iVar8 + 0x168),*(iVar8 + 0x158),*(iVar8 + 0x160));
            uVar7 = 0;
            *(iVar12 + 0xe0) = 0;
        }
        return uVar7;
    }
    return uVar10 & 0xffffffff;
}


// ===== sym.wsa883x_handle_post_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt @ 0x080073f0 (size 8) =====

int64_t sym.wsa883x_handle_post_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt(ulong *param_1)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *puVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong unaff_x30;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_30 = 0;
    regmap_read(*param_1,0x3483,&uStack_30 + 4);
    regmap_read(*param_1,0x3484,&uStack_30);
    *(param_1[2] + 0x3f0) = uStack_30._4_4_ != 0 || uStack_30 != 0;
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return 1;
    }
    iVar2 = __stack_chk_fail();
    *extraout_x18 = sym.wsa883x_codec_probe;
    pcStack_68 = sym.wsa883x_codec_probe;
    iVar3 = sp_el0;
    iStack_78 = *(iVar3 + 0x5e0);
    puVar4 = *(*(iVar2 + 0x18) + 0x98);
    puStack_70 = &stack0xffffffffffffffe0;
    if ((puVar4 == NULL) || (*(iVar2 + 0x10) == 0)) {
        iVar3 = 0xffffffea;
    }
    else {
        iVar3 = iVar2 + 0xd0;
        snd_soc_component_init_regmap(iVar2,*puVar4);
        puVar4[3] = iVar2;
        uVar1 = snd_soc_component_read(iVar2,0x3580);
        *(puVar4 + 0x17) = uVar1 & 0xf;
        uVar1 = snd_soc_component_read(iVar2,0x3401);
        *(puVar4 + 0x5c) = 2;
        *(puVar4 + 0xbc) = uVar1 & 0xff;
        iVar5 = *(*(iVar2 + 0x18) + 0x98);
        if (iVar5 != 0) {
            iVar6 = 0;
            do {
                snd_soc_component_update_bits
                          (iVar2,*(obj.reg_init + iVar6),*(iVar6 + 0x8002fc2),*(iVar6 + 0x8002fc3));
                iVar6 = iVar6 + 4;
            } while (iVar6 != 200);
            if ((*(iVar5 + 0xb8) | 2) == 2) {
                snd_soc_component_update_bits(iVar2,0x346c,7,3);
                *(iVar5 + 0x5c) = 3;
            }
        }
        *(puVar4 + 0x54) = 0;
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_88 = 0;
        uStack_80 = 0;
        strlcpy(&uStack_a0,*(puVar4[0x2f] + 0xb0),0x28);
        snd_soc_dapm_ignore_suspend(iVar3,&uStack_a0);
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_88 = 0;
        uStack_80 = 0;
        strlcpy(&uStack_a0,0x80017fe,0x28);
        snd_soc_dapm_ignore_suspend(iVar3,&uStack_a0);
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_88 = 0;
        uStack_80 = 0;
        strlcpy(&uStack_a0,"SWR DAC_Port",0x28);
        snd_soc_dapm_ignore_suspend(iVar3,&uStack_a0);
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_88 = 0;
        uStack_80 = 0;
        strlcpy(&uStack_a0,"SPKR",0x28);
        snd_soc_dapm_ignore_suspend(iVar3,&uStack_a0);
        snd_soc_dapm_sync(iVar3);
        iVar3 = 0;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_78) {
        return iVar3;
    }
    iVar3 = __stack_chk_fail(iVar3);
    *extraout_x18_00 = sym.wsa883x_codec_remove;
    if (*(*(iVar3 + 0x18) + 0x98) != 0) {
        iVar3 = snd_soc_component_exit_regmap();
    }
    return iVar3;
}


// ===== sym.codec_debug_dump.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt @ 0x080073f8 (size 8) =====

char * sym.codec_debug_dump.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt
                 (int64_t param_1,int64_t param_2,char *param_3,int64_t *param_4)

{
    ulong *puVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    bool bVar4;
    uint32_t uVar5;
    int64_t iVar6;
    ulong uVar7;
    uint64_t uVar8;
    int iVar9;
    uint64_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar11;
    char *pcVar12;
    char *pcVar13;
    uint32_t uVar14;
    char *arg2;
    char *pcVar15;
    ulong unaff_x30;
    uchar noname_1 [16];
    uint uStack_84;
    ulong uStack_80;
    ulong uStack_78;
    uint uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    pcVar12 = 0xffffffffffffffea;
    iStack_68 = *(iVar11 + 0x5e0);
    if ((((param_2 != 0) && (param_1 != 0)) && (param_3 != NULL)) && (param_4 != NULL)) {
        iVar11 = *(param_1 + 0xd8);
        if ((iVar11 == 0) || (*param_4 < 0)) {
            pcVar12 = 0xffffffffffffffea;
        }
        else {
            uStack_84 = 0;
            iVar9 = *param_4;
            uStack_70 = 0;
            uStack_80 = 0;
            uStack_78 = 0;
            pcVar12 = NULL;
            if (iVar9 < 0x17d78) {
                pcVar15 = param_3 + -1;
                pcVar12 = NULL;
                uVar14 = iVar9 / 0xc + 0x40;
                do {
                    pcVar13 = pcVar12;
                    if (((((((0x864 < uVar14 - 0xf36 >> 1) && (9 < uVar14 - 0xf26)) &&
                           ((0x19 < uVar14 - 0xf06 &&
                            (((0xaf9 < uVar14 - 0x406 && (0xcb < uVar14 - 0x339)) && (0xcb < uVar14 - 0x239)))))) &&
                          ((0xcb < uVar14 - 0x139 && (6 < uVar14 - 0x429)))) &&
                         ((6 < (uVar14 & 0xfffffeff) - 0x229 &&
                          (((6 < uVar14 - 0x129 && (0x19 < uVar14 - 0x406)) &&
                           ((0x19 < (uVar14 & 0xfffffeff) - 0x206 &&
                            (((0x19 < uVar14 - 0x106 && (0xe < uVar14 - 0xf1)) && (0xe < uVar14 - 0xe1)))))))))) &&
                        (((0xe < uVar14 - 0xd1 && (0x79 < uVar14 - 0x56)) && (2 < uVar14 - 0x47)))) &&
                       (4 < uVar14 - 0x4b)) {
                        swr_read(iVar11,*(iVar11 + 0x40),uVar14,&uStack_84,1);
                        param_3 = "0x%.3x: 0x%.2x\n";
                        uVar5 = snprintf(&uStack_80,0x14,"0x%.3x: 0x%.2x\n",uVar14,uStack_84);
                        if (uVar5 < 0) {
                            uVar7 = 0x80013e9;
                        }
                        else {
                            arg2 = uVar5;
                            pcVar13 = pcVar12 + arg2;
                            if (pcVar15 <= pcVar13) break;
                            noname_1 = __check_object_size(&uStack_80,arg2,1);
                            param_3 = arg2;
                            iVar6 = sym._copy_to_user(pcVar12 + param_2,noname_1,arg2);
                            if (iVar6 == 0) {
                                *param_4 = arg2 + *param_4;
                                goto code_r0x0800a2f0;
                            }
                            uVar7 = 0x800178b;
                        }
                        _printk(uVar7,"swr_slave_reg_show");
                        pcVar12 = 0xfffffffffffffff2;
                        break;
                    }
code_r0x0800a2f0:
                    bVar4 = uVar14 < 0x2009;
                    pcVar12 = pcVar13;
                    uVar14 = uVar14 + 1;
                } while (bVar4);
            }
            *param_4 = 0x1806c;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_68) {
        return pcVar12;
    }
    uVar8 = __stack_chk_fail();
    *extraout_x18 = sym._copy_to_user;
    puVar1 = sp_el0;
    uVar3 = (uVar8 << 8) >> 8;
    if (((*(puVar1 + 0x3e) >> 5 & 1) != 0) || (uVar10 = uVar8, (*puVar1 >> 0x1a & 1) != 0)) {
        uVar10 = uVar8 & uVar3;
    }
    bVar4 = CARRY8(uVar10,param_3);
    pcVar12 = param_3 + uVar10;
    uVar10 = 0;
    if (!bVar4 || pcVar12 == NULL) {
        uVar10 = 0x7fffffffff;
    }
    if (bVar4) {
        pcVar12 = 0xffffffffffffffff;
    }
    if (!CARRY8(pcVar12,~uVar10) && !CARRY8(pcVar12 + ~uVar10,bVar4) || pcVar12 == uVar10 + !bVar4) {
        if ((_snd_soc_info_enum_double >> 0x18 & 1) == 0) {
            uVar10 = daif;
            if ((uVar10 & 0x80) == 0) {
                uVar2 = daif;
                daif = uVar2 | 0xc0;
            }
            uVar2 = ttbr1_el1;
            ttbr1_el1 = puVar1[1] & 0xffff000000000000 | uVar2 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar1[1];
            InstructionSynchronizationBarrier();
            daif = uVar10;
        }
        if ((uVar8 & uVar3 & 0xffffff8000000000) != 0) {
            uVar8 = 0;
        }
        param_3 = __arch_copy_to_user(uVar8);
        if ((_snd_soc_info_enum_double >> 0x18 & 1) == 0) {
            uVar3 = daif;
            if ((uVar3 & 0x80) == 0) {
                uVar8 = daif;
                daif = uVar8 | 0xc0;
            }
            uVar8 = ttbr1_el1;
            ttbr0_el1 = (uVar8 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar8 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar3;
        }
    }
    return param_3;
}


// ===== sym.codec_debug_read.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt @ 0x08007400 (size 8) =====

int64_t * sym.codec_debug_read.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt
                    (int64_t param_1,int64_t param_2,int64_t *param_3,int64_t *param_4)

{
    int iVar1;
    int64_t *piVar2;
    ulong uVar3;
    int64_t *piVar4;
    int64_t iVar5;
    uint uVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    int64_t *piStack_c8;
    uint64_t auStack_c0 [2];
    uint uStack_b0;
    int64_t aiStack_a8 [5];
    uchar *puStack_80;
    code *pcStack_78;
    int64_t iStack_40;
    int64_t iStack_38;
    
    piVar4 = &iStack_40;
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    piVar2 = 0xffffffffffffffea;
    iStack_40 = 0;
    if ((((param_2 != 0) && (param_1 != 0)) && (param_3 != NULL)) && (param_4 != NULL)) {
        if (((*(param_1 + 0xd8) == 0) || (iVar7 = *(*(param_1 + 0xd8) + 0xe0), iVar7 == 0)) || (*param_4 < 0)) {
            piVar2 = 0xffffffffffffffea;
        }
        else {
            snprintf(&iStack_40,8,"0x%x\n",*(iVar7 + 0x118));
            uVar3 = strnlen(&iStack_40,7);
            piVar2 = simple_read_from_buffer(param_2,param_3,param_4,&iStack_40,uVar3);
            param_3 = param_4;
            param_4 = piVar4;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_38) {
        return piVar2;
    }
    auVar9 = __stack_chk_fail(piVar2);
    *extraout_x18 = sym.codec_debug_peek_write;
    pcStack_78 = sym.codec_debug_peek_write;
    iVar7 = sp_el0;
    aiStack_a8[4] = *(iVar7 + 0x5e0);
    piVar4 = 0xffffffffffffffea;
    aiStack_a8[2] = 0;
    aiStack_a8[3] = 0;
    aiStack_a8[0] = 0;
    aiStack_a8[1] = 0;
    uStack_b0 = 0;
    auStack_c0[0] = 0;
    auStack_c0[1] = 0;
    puStack_80 = &stack0xffffffffffffffd0;
    if (((auVar9._8_8_ == 0) || (auVar9._0_8_ == 0)) || ((param_3 == NULL || (param_4 == NULL)))) goto code_r0x08009e90;
    iVar7 = *(auVar9._0_8_ + 0xd8);
    if ((iVar7 != 0) && (iVar8 = *(iVar7 + 0xe0), iVar8 != 0)) {
        piVar4 = 0xffffffffffffffea;
        if ((0x1f < param_3) || (*param_4 < 0)) goto code_r0x08009e90;
        __check_object_size(aiStack_a8,param_3,0);
        iVar1 = sym._copy_from_user(aiStack_a8,auVar9._8_8_,param_3);
        if (iVar1 != 0) {
            piVar4 = 0xfffffffffffffff2;
            goto code_r0x08009e90;
        }
        *(aiStack_a8 + param_3) = 0;
        piStack_c8 = aiStack_a8;
        iVar5 = strsep(&piStack_c8,0x800139f);
        if (iVar5 != 0) {
            uVar6 = 0x10;
            if ((*(iVar5 + 1) & 0xdf) != 0x58) {
                uVar6 = 10;
            }
            iVar1 = kstrtouint(iVar5,uVar6,auStack_c0);
            if (iVar1 == 0) {
                strsep(&piStack_c8,0x800139f);
                if (auStack_c0[0] < 0x200a) {
                    swr_read(iVar7,*(iVar7 + 0x40),auStack_c0[0] & 0xffffffff,iVar8 + 0x118,1);
                    piVar4 = param_3;
                    goto code_r0x08009e90;
                }
            }
        }
    }
    piVar4 = 0xffffffffffffffea;
code_r0x08009e90:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == aiStack_a8[4]) {
        return piVar4;
    }
    auVar9 = __stack_chk_fail(piVar4);
    *(auVar9._8_8_ + 0xd8) = *(auVar9._0_8_ + 0x2d8);
    return NULL;
}


// ===== sym.wsa883x_swr_resume.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt @ 0x08007408 (size 8) =====

ulong sym.wsa883x_swr_resume.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt(int64_t param_1)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    ulong uVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((param_1 == 0) || (param_1 == 0x48)) || (iVar5 = *(param_1 + 0x98), iVar5 == 0)) {
        _dev_err(param_1,"%s: wsa883x private data is NULL\n","wsa883x_swr_resume");
        uVar4 = 0xffffffea;
    }
    else {
        if ((*(iVar5 + 0x170) >> 1 & 1) != 0) {
            puVar1 = iVar5 + 0x170;
            msm_cdc_set_supplies_lpm_mode(param_1,*(iVar5 + 0x168),*(iVar5 + 0x158),*(iVar5 + 0x160),0);
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                    *puVar1 = *puVar1 & 0xfffffffffffffffd;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
        }
        uVar4 = 0;
    }
    return uVar4;
}


// ===== sym.wsa883x_swr_suspend.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt @ 0x08007410 (size 8) =====

ulong sym.wsa883x_swr_suspend.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt(int64_t param_1)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    ulong uVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((param_1 == 0) || (param_1 == 0x48)) || (iVar5 = *(param_1 + 0x98), iVar5 == 0)) {
        _dev_err(param_1,"%s: wsa883x private data is NULL\n","wsa883x_swr_suspend");
        uVar4 = 0xffffffea;
    }
    else {
        if (*(iVar5 + 0x23) != '\0') {
            msm_cdc_set_supplies_lpm_mode(param_1,*(iVar5 + 0x168),*(iVar5 + 0x158),*(iVar5 + 0x160),1);
            puVar1 = iVar5 + 0x170;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                    *puVar1 = *puVar1 | 2;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
        }
        uVar4 = 0;
    }
    return uVar4;
}


// ===== sym.codec_debug_open.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt @ 0x08007418 (size 8) =====

ulong sym.codec_debug_open.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt(int64_t param_1,int64_t param_2)

{
    *(param_2 + 0xd8) = *(param_1 + 0x2d8);
    return 0;
}


// ===== sym.wsa883x_codec_info_create_codec_entry.cfi_jt @ 0x08007420 (size 8) =====

uint64_t sym.wsa883x_codec_info_create_codec_entry.cfi_jt(int64_t param_1,int64_t param_2)

{
    int iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar4;
    int64_t iVar5;
    ulong unaff_x30;
    ulong uStack_88;
    ulong uStack_80;
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
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    uVar2 = 0xffffffea;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    if ((param_1 != 0) && (param_2 != 0)) {
        iVar5 = *(*(param_2 + 0x18) + 0x98);
        if (*(iVar5 + 0x90) == 0) {
            iVar4 = *(param_2 + 0x20);
            snprintf(&uStack_88,0x50,"%s.%llx",0x8001994,*(*(iVar5 + 0x10) + 0x3d8));
            iVar3 = snd_info_create_module_entry(*(param_1 + 0x38),&uStack_88,param_1);
            *(iVar5 + 0x90) = iVar3;
            if (iVar3 != 0) {
                *(iVar3 + 8) = 0x416d;
                iVar1 = snd_info_register(*(iVar5 + 0x90));
                if ((-1 < iVar1) &&
                   (iVar3 = snd_info_create_card_entry(*(iVar4 + 0x48),"version",*(iVar5 + 0x90)), iVar3 != 0)) {
                    *(iVar3 + 0x40) = iVar5;
                    *(iVar3 + 0x10) = 0x20;
                    *(iVar3 + 0x18) = 1;
                    *(iVar3 + 0x20) = obj.wsa883x_codec_info_ops;
                    iVar1 = snd_info_register();
                    if (-1 < iVar1) {
                        *(iVar5 + 0x98) = iVar3;
                        iVar4 = snd_info_create_card_entry(*(iVar4 + 0x48),"variant",*(iVar5 + 0x90));
                        if (iVar4 != 0) {
                            *(iVar4 + 0x40) = iVar5;
                            *(iVar4 + 0x10) = 0x20;
                            *(iVar4 + 0x18) = 1;
                            *(iVar4 + 0x20) = obj.wsa883x_variant_ops;
                            iVar1 = snd_info_register();
                            if (-1 < iVar1) {
                                uVar2 = 0;
                                *(iVar5 + 0xa0) = iVar4;
                                goto code_r0x080076fc;
                            }
                            snd_info_free_entry(iVar4);
                        }
                    }
                    snd_info_free_entry(iVar3);
                }
                snd_info_free_entry(*(iVar5 + 0x90));
            }
            uVar2 = 0xfffffff4;
        }
        else {
            uVar2 = 0;
        }
    }
code_r0x080076fc:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return uVar2;
    }
    iVar5 = __stack_chk_fail(uVar2);
    *extraout_x18 = sym.wsa883x_codec_get_dev_num;
    if (iVar5 != 0) {
        iVar5 = *(*(iVar5 + 0x18) + 0x98);
        if (iVar5 != 0) {
            return *(*(iVar5 + 0x10) + 0x40);
        }
        _printk(0x800135e,"wsa883x_codec_get_dev_num");
    }
    return 0xffffffea;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08007428 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    swr_driver_unregister(reloc.wsa883x_swr_probe.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt);
    return;
}


// ===== sym.snd_soc_info_enum_double.cfi_jt @ 0x08007430 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_info_enum_double.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.snd_soc_info_volsw.cfi_jt @ 0x08007438 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_info_volsw.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.codec_debug_peek_write.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt @ 0x08007440 (size 8) =====

uint64_t sym.codec_debug_peek_write.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt
                   (int64_t param_1,int64_t param_2,uint64_t param_3,int64_t *param_4)

{
    int iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint uVar4;
    ulong *in_x18;
    int64_t iVar5;
    int64_t iVar6;
    ulong unaff_x30;
    uchar auVar7 [16];
    int64_t *piStack_88;
    uint64_t auStack_80 [2];
    uint uStack_70;
    int64_t aiStack_68 [5];
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    aiStack_68[4] = *(iVar5 + 0x5e0);
    uVar2 = 0xffffffffffffffea;
    aiStack_68[2] = 0;
    aiStack_68[3] = 0;
    aiStack_68[0] = 0;
    aiStack_68[1] = 0;
    uStack_70 = 0;
    auStack_80[0] = 0;
    auStack_80[1] = 0;
    if ((((param_2 == 0) || (param_1 == 0)) || (param_3 == 0)) || (param_4 == NULL)) goto code_r0x08009e90;
    iVar5 = *(param_1 + 0xd8);
    if ((iVar5 != 0) && (iVar6 = *(iVar5 + 0xe0), iVar6 != 0)) {
        uVar2 = 0xffffffffffffffea;
        if ((0x1f < param_3) || (*param_4 < 0)) goto code_r0x08009e90;
        __check_object_size(aiStack_68,param_3,0);
        iVar1 = sym._copy_from_user(aiStack_68,param_2,param_3);
        if (iVar1 != 0) {
            uVar2 = 0xfffffffffffffff2;
            goto code_r0x08009e90;
        }
        *(aiStack_68 + param_3) = 0;
        piStack_88 = aiStack_68;
        iVar3 = strsep(&piStack_88,0x800139f);
        if (iVar3 != 0) {
            uVar4 = 0x10;
            if ((*(iVar3 + 1) & 0xdf) != 0x58) {
                uVar4 = 10;
            }
            iVar1 = kstrtouint(iVar3,uVar4,auStack_80);
            if (iVar1 == 0) {
                strsep(&piStack_88,0x800139f);
                if (auStack_80[0] < 0x200a) {
                    swr_read(iVar5,*(iVar5 + 0x40),auStack_80[0] & 0xffffffff,iVar6 + 0x118,1);
                    uVar2 = param_3;
                    goto code_r0x08009e90;
                }
            }
        }
    }
    uVar2 = 0xffffffffffffffea;
code_r0x08009e90:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == aiStack_68[4]) {
        return uVar2;
    }
    auVar7 = __stack_chk_fail(uVar2);
    *(auVar7._8_8_ + 0xd8) = *(auVar7._0_8_ + 0x2d8);
    return 0;
}


// ===== sym.codec_debug_write.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt @ 0x08007448 (size 8) =====

int64_t * sym.codec_debug_write.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt
                    (int64_t param_1,int64_t param_2,int64_t *param_3,int64_t *param_4)

{
    char *pcVar1;
    ulong *puVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    bool bVar5;
    int iVar6;
    uint32_t uVar7;
    int64_t *piVar8;
    int64_t iVar9;
    ulong uVar10;
    uint64_t uVar11;
    int64_t *piVar12;
    uint uVar13;
    uint64_t uVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar15;
    int64_t *piVar16;
    uint32_t uVar17;
    int64_t *arg2;
    int64_t *piVar18;
    ulong unaff_x30;
    uchar noname_1 [16];
    uchar auVar19 [16];
    uint uStack_104;
    ulong uStack_100;
    ulong uStack_f8;
    uint uStack_f0;
    int64_t iStack_e8;
    uchar *puStack_e0;
    code *pcStack_d8;
    int64_t *piStack_78;
    ulong uStack_70;
    ulong uStack_68;
    uint uStack_60;
    int64_t aiStack_58 [5];
    
    *in_x18 = unaff_x30;
    iVar15 = sp_el0;
    aiStack_58[4] = *(iVar15 + 0x5e0);
    piVar8 = 0xffffffffffffffea;
    aiStack_58[2] = 0;
    aiStack_58[3] = 0;
    aiStack_58[0] = 0;
    aiStack_58[1] = 0;
    uStack_60 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    piVar12 = param_3;
    if ((((param_2 != 0) && (param_1 != 0)) && (param_4 != NULL)) &&
       ((piVar8 = 0xffffffffffffffea, param_3 < 0x20 && (iVar15 = *(param_1 + 0xd8), iVar15 != 0)))) {
        __check_object_size(aiStack_58,param_3,0);
        iVar6 = sym._copy_from_user(aiStack_58,param_2,param_3);
        if (iVar6 == 0) {
            *(aiStack_58 + param_3) = '\0';
            piStack_78 = aiStack_58;
            iVar9 = strsep(&piStack_78,0x800139f);
            if (iVar9 != 0) {
                piVar12 = &uStack_70;
                uVar13 = 0x10;
                if ((*(iVar9 + 1) & 0xdf) != 0x58) {
                    uVar13 = 10;
                }
                iVar6 = kstrtouint(iVar9,uVar13);
                if ((iVar6 == 0) && (iVar9 = strsep(&piStack_78,0x800139f), iVar9 != 0)) {
                    piVar18 = &uStack_70 | 4;
                    uVar13 = 0x10;
                    if ((*(iVar9 + 1) & 0xdf) != 0x58) {
                        uVar13 = 10;
                    }
                    piVar12 = piVar18;
                    iVar6 = kstrtouint(iVar9,uVar13);
                    if (iVar6 == 0) {
                        strsep(&piStack_78,0x800139f);
                        piVar12 = uStack_70 & 0xffffffff;
                        piVar8 = 0xffffffffffffffea;
                        if ((uStack_70 < 0x200a) && (uStack_70._4_4_ < 0x100)) {
                            swr_write(iVar15,*(iVar15 + 0x40));
                            piVar8 = param_3;
                            param_4 = piVar18;
                        }
                        goto code_r0x0800a170;
                    }
                }
            }
            piVar8 = 0xffffffffffffffea;
        }
        else {
            piVar8 = 0xfffffffffffffff2;
        }
    }
code_r0x0800a170:
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == aiStack_58[4]) {
        return piVar8;
    }
    auVar19 = __stack_chk_fail(piVar8);
    *extraout_x18 = sym.codec_debug_dump;
    pcStack_d8 = sym.codec_debug_dump;
    iVar15 = sp_el0;
    piVar8 = 0xffffffffffffffea;
    iStack_e8 = *(iVar15 + 0x5e0);
    puStack_e0 = &stack0xffffffffffffffd0;
    if ((((auVar19._8_8_ != 0) && (auVar19._0_8_ != 0)) && (piVar12 != NULL)) && (param_4 != NULL)) {
        iVar15 = *(auVar19._0_8_ + 0xd8);
        if ((iVar15 == 0) || (*param_4 < 0)) {
            piVar8 = 0xffffffffffffffea;
        }
        else {
            uStack_104 = 0;
            iVar6 = *param_4;
            uStack_f0 = 0;
            uStack_100 = 0;
            uStack_f8 = 0;
            piVar8 = NULL;
            if (iVar6 < 0x17d78) {
                piVar18 = piVar12 + -1;
                piVar8 = NULL;
                uVar17 = iVar6 / 0xc + 0x40;
                do {
                    piVar16 = piVar8;
                    if (((((0x864 < uVar17 - 0xf36 >> 1) && (9 < uVar17 - 0xf26)) &&
                         ((0x19 < uVar17 - 0xf06 &&
                          (((0xaf9 < uVar17 - 0x406 && (0xcb < uVar17 - 0x339)) && (0xcb < uVar17 - 0x239)))))) &&
                        (((0xcb < uVar17 - 0x139 && (6 < uVar17 - 0x429)) &&
                         ((6 < (uVar17 & 0xfffffeff) - 0x229 &&
                          ((((6 < uVar17 - 0x129 && (0x19 < uVar17 - 0x406)) &&
                            ((0x19 < (uVar17 & 0xfffffeff) - 0x206 &&
                             ((((0x19 < uVar17 - 0x106 && (0xe < uVar17 - 0xf1)) && (0xe < uVar17 - 0xe1)) &&
                              ((0xe < uVar17 - 0xd1 && (0x79 < uVar17 - 0x56)))))))) && (2 < uVar17 - 0x47)))))))) &&
                       (4 < uVar17 - 0x4b)) {
                        swr_read(iVar15,*(iVar15 + 0x40),uVar17,&uStack_104,1);
                        piVar12 = "0x%.3x: 0x%.2x\n";
                        uVar7 = snprintf(&uStack_100,0x14,"0x%.3x: 0x%.2x\n",uVar17,uStack_104);
                        if (uVar7 < 0) {
                            uVar10 = 0x80013e9;
                        }
                        else {
                            arg2 = uVar7;
                            piVar16 = piVar8 + arg2;
                            if (piVar18 <= piVar16) break;
                            noname_1 = __check_object_size(&uStack_100,arg2,1);
                            piVar12 = arg2;
                            iVar9 = sym._copy_to_user(auVar19._8_8_ + piVar8,noname_1,arg2);
                            if (iVar9 == 0) {
                                *param_4 = *param_4 + arg2;
                                goto code_r0x0800a2f0;
                            }
                            uVar10 = 0x800178b;
                        }
                        _printk(uVar10,"swr_slave_reg_show");
                        piVar8 = 0xfffffffffffffff2;
                        break;
                    }
code_r0x0800a2f0:
                    bVar5 = uVar17 < 0x2009;
                    piVar8 = piVar16;
                    uVar17 = uVar17 + 1;
                } while (bVar5);
            }
            *param_4 = 0x1806c;
        }
    }
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_e8) {
        return piVar8;
    }
    uVar11 = __stack_chk_fail();
    *extraout_x18_00 = sym._copy_to_user;
    puVar2 = sp_el0;
    uVar4 = (uVar11 << 8) >> 8;
    if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar14 = uVar11, (*puVar2 >> 0x1a & 1) != 0)) {
        uVar14 = uVar11 & uVar4;
    }
    bVar5 = CARRY8(uVar14,piVar12);
    pcVar1 = uVar14 + piVar12;
    uVar14 = 0;
    if (!bVar5 || pcVar1 == NULL) {
        uVar14 = 0x7fffffffff;
    }
    if (bVar5) {
        pcVar1 = 0xffffffffffffffff;
    }
    if (!CARRY8(pcVar1,~uVar14) && !CARRY8(pcVar1 + ~uVar14,bVar5) || pcVar1 == uVar14 + !bVar5) {
        if ((_snd_soc_info_enum_double >> 0x18 & 1) == 0) {
            uVar14 = daif;
            if ((uVar14 & 0x80) == 0) {
                uVar3 = daif;
                daif = uVar3 | 0xc0;
            }
            uVar3 = ttbr1_el1;
            ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar3 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar2[1];
            InstructionSynchronizationBarrier();
            daif = uVar14;
        }
        if ((uVar11 & uVar4 & 0xffffff8000000000) != 0) {
            uVar11 = 0;
        }
        piVar12 = __arch_copy_to_user(uVar11);
        if ((_snd_soc_info_enum_double >> 0x18 & 1) == 0) {
            uVar4 = daif;
            if ((uVar4 & 0x80) == 0) {
                uVar11 = daif;
                daif = uVar11 | 0xc0;
            }
            uVar11 = ttbr1_el1;
            ttbr0_el1 = (uVar11 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar11 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar4;
        }
    }
    return piVar12;
}


// ===== sym.wsa883x_volatile_register.28b5da852a0ef1a8d69b3baee50c9b18.cfi_jt @ 0x08007450 (size 8) =====

bool sym.wsa883x_volatile_register.28b5da852a0ef1a8d69b3baee50c9b18.cfi_jt(ulong param_1,uint32_t param_2)

{
    uint32_t uVar1;
    code *pcVar2;
    
    uVar1 = param_2 - 0x3000;
    if (param_2 < 0x3000 || uVar1 == 0) {
        return false;
    }
    if (uVar1 >> 9 < 0x1b) {
        return (obj.wsa883x_reg_access[uVar1] & 3) == 1;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x800a8c8);
    (*pcVar2)();
}


// ===== sym.wsa883x_readable_register.28b5da852a0ef1a8d69b3baee50c9b18.cfi_jt @ 0x08007458 (size 8) =====

uint8_t sym.wsa883x_readable_register.28b5da852a0ef1a8d69b3baee50c9b18.cfi_jt(ulong param_1,uint32_t param_2)

{
    uint32_t uVar1;
    code *pcVar2;
    
    uVar1 = param_2 - 0x3000;
    if (param_2 < 0x3000 || uVar1 == 0) {
        return 0;
    }
    if (uVar1 >> 9 < 0x1b) {
        return obj.wsa883x_reg_access[uVar1] & 1;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x800a880);
    (*pcVar2)();
}


// ===== sym.wsa883x_writeable_register.28b5da852a0ef1a8d69b3baee50c9b18.cfi_jt @ 0x08007460 (size 8) =====

uint8_t sym.wsa883x_writeable_register.28b5da852a0ef1a8d69b3baee50c9b18.cfi_jt(ulong param_1,uint32_t param_2)

{
    uint32_t uVar1;
    code *pcVar2;
    
    uVar1 = param_2 - 0x3000;
    if (param_2 < 0x3000 || uVar1 == 0) {
        return 0;
    }
    if (uVar1 >> 9 < 0x1b) {
        return obj.wsa883x_reg_access[uVar1] >> 1 & 1;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x800a840);
    (*pcVar2)();
}


// ===== sym.wsa883x_pdm_wd_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt @ 0x08007468 (size 8) =====

ulong sym.wsa883x_pdm_wd_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt(uint param_1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = ___ratelimit(obj.wsa883x_pdm_wd_handle_irq._rs,"wsa883x_pdm_wd_handle_irq");
    if (iVar1 != 0) {
        _printk(0x80018e5,"wsa883x_pdm_wd_handle_irq",param_1);
    }
    return 1;
}


// ===== sym.wsa883x_otp_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt @ 0x08007470 (size 8) =====

ulong sym.wsa883x_otp_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt(uint param_1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = ___ratelimit(obj.wsa883x_otp_handle_irq._rs,"wsa883x_otp_handle_irq");
    if (iVar1 != 0) {
        _printk(0x80018e5,"wsa883x_otp_handle_irq",param_1);
    }
    return 1;
}


// ===== sym.wsa883x_pa_on_err_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt @ 0x08007478 (size 8) =====

ulong sym.wsa883x_pa_on_err_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt(uint param_1,int64_t param_2)

{
    int iVar1;
    uint64_t uVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_2 == 0) || (iVar4 = *(param_2 + 0x18), iVar4 == 0)) {
        uVar3 = 0;
    }
    else {
        uVar2 = snd_soc_component_read(iVar4,0x3413);
        if ((uVar2 & 0x70) != 0) {
            snd_soc_component_read(iVar4,0x3414);
        }
        iVar1 = ___ratelimit(obj.wsa883x_pa_on_err_handle_irq._rs,"wsa883x_pa_on_err_handle_irq");
        if (iVar1 != 0) {
            _printk(0x80018e5,"wsa883x_pa_on_err_handle_irq",param_1);
        }
        snd_soc_component_update_bits(iVar4,0x3410,0x10,0);
        snd_soc_component_update_bits(iVar4,0x3410,0x10,0x10);
        snd_soc_component_update_bits(iVar4,0x3410,0x10,0);
        uVar3 = 1;
    }
    return uVar3;
}


// ===== sym.wsa883x_clip_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt @ 0x08007480 (size 8) =====

ulong sym.wsa883x_clip_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt(uint param_1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = ___ratelimit(obj.wsa883x_clip_handle_irq._rs,"wsa883x_clip_handle_irq");
    if (iVar1 != 0) {
        _printk(0x80018e5,"wsa883x_clip_handle_irq",param_1);
    }
    return 1;
}


// ===== sym.wsa883x_uvlo_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt @ 0x08007488 (size 8) =====

ulong sym.wsa883x_uvlo_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt(uint param_1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = ___ratelimit(obj.wsa883x_uvlo_handle_irq._rs,"wsa883x_uvlo_handle_irq");
    if (iVar1 != 0) {
        _printk(0x80018e5,"wsa883x_uvlo_handle_irq",param_1);
    }
    return 1;
}


// ===== sym.wsa883x_ocp_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt @ 0x08007490 (size 8) =====

ulong sym.wsa883x_ocp_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt(uint param_1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = ___ratelimit(obj.wsa883x_ocp_handle_irq._rs,"wsa883x_ocp_handle_irq");
    if (iVar1 != 0) {
        _printk(0x80018e5,"wsa883x_ocp_handle_irq",param_1);
    }
    return 1;
}


// ===== sym.wsa883x_ext_int_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt @ 0x08007498 (size 8) =====

ulong sym.wsa883x_ext_int_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt(uint param_1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = ___ratelimit(obj.wsa883x_ext_int_handle_irq._rs,"wsa883x_ext_int_handle_irq");
    if (iVar1 != 0) {
        _printk(0x80018e5,"wsa883x_ext_int_handle_irq",param_1);
    }
    return 1;
}


// ===== sym.wsa883x_saf2war_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt @ 0x080074a0 (size 8) =====

ulong sym.wsa883x_saf2war_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt(uint param_1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = ___ratelimit(obj.wsa883x_saf2war_handle_irq._rs,"wsa883x_saf2war_handle_irq");
    if (iVar1 != 0) {
        _printk(0x80018e5,"wsa883x_saf2war_handle_irq",param_1);
    }
    return 1;
}


// ===== sym.wsa883x_war2saf_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt @ 0x080074a8 (size 8) =====

ulong sym.wsa883x_war2saf_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt(uint param_1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = ___ratelimit(obj.wsa883x_war2saf_handle_irq._rs,"wsa883x_war2saf_handle_irq");
    if (iVar1 != 0) {
        _printk(0x80018e5,"wsa883x_war2saf_handle_irq",param_1);
    }
    return 1;
}


// ===== sym.wsa883x_clk_wd_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt @ 0x080074b0 (size 8) =====

ulong sym.wsa883x_clk_wd_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt(uint param_1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = ___ratelimit(obj.wsa883x_clk_wd_handle_irq._rs,"wsa883x_clk_wd_handle_irq");
    if (iVar1 != 0) {
        _printk(0x80018e5,"wsa883x_clk_wd_handle_irq",param_1);
    }
    return 1;
}


// ===== sym.wsa883x_swr_remove.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt @ 0x080074b8 (size 8) =====

ulong sym.wsa883x_swr_remove.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    code *pcVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == 0) || (iVar4 = *(param_1 + 0xe0), iVar4 == 0)) {
        _dev_err(param_1 + 0x48,"%s: wsa883x is NULL\n","wsa883x_swr_remove");
        uVar2 = 0xffffffea;
    }
    else {
        iVar1 = iVar4 + 0xd0;
        wcd_free_irq(iVar1,0,0);
        wcd_free_irq(iVar1,1,0);
        wcd_free_irq(iVar1,2,0);
        wcd_free_irq(iVar1,3,0);
        wcd_free_irq(iVar1,4,0);
        wcd_free_irq(iVar1,5,0);
        wcd_free_irq(iVar1,6,0);
        wcd_free_irq(iVar1,7,0);
        wcd_free_irq(iVar1,8,0);
        wcd_free_irq(iVar1,9,0);
        pcVar3 = *(iVar4 + 0x150);
        if (pcVar3 != NULL) {
            __cfi_slowpath_diag(0x3b795baa068bc3a6,pcVar3,0x8001240);
            (*pcVar3)(*(iVar4 + 0x148),iVar4 + 0x130,0);
        }
        debugfs_remove(*(iVar4 + 0xf8));
        *(iVar4 + 0xf8) = 0;
        snd_soc_unregister_component(param_1 + 0x48);
        if (*(iVar4 + 0x178) != NULL) {
            kfree(**(iVar4 + 0x178));
            kfree(*(*(iVar4 + 0x178) + 0xb0));
            kfree(*(iVar4 + 0x178));
        }
        if (*(iVar4 + 0x180) != NULL) {
            kfree(**(iVar4 + 0x180));
            kfree(*(iVar4 + 0x180));
        }
        msm_cdc_release_supplies(param_1 + 0x48,*(iVar4 + 0x168),*(iVar4 + 0x158),*(iVar4 + 0x160));
        uVar2 = 0;
        *(param_1 + 0xe0) = 0;
    }
    return uVar2;
}


// ===== sym.wsa883x_swr_probe.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt @ 0x080074c0 (size 8) =====

uint64_t sym.wsa883x_swr_probe.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt(uint64_t param_1)

{
    int64_t *piVar1;
    uint64_t *puVar2;
    int64_t iVar3;
    int iVar4;
    int iVar5;
    uint32_t uVar6;
    uint64_t *arg1;
    uint64_t uVar7;
    uint64_t uVar8;
    ulong uVar9;
    int64_t *piVar10;
    int64_t iVar11;
    char *pcVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar13;
    int64_t iVar14;
    uint64_t *puVar15;
    uint64_t *puVar16;
    ulong unaff_x30;
    uchar auStack_94 [4];
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    piVar1 = param_1 + 0x48;
    iStack_68 = *(iVar11 + 0x5e0);
    auStack_94[0] = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_90 = 0;
    arg1 = devm_kmalloc(piVar1,0x188,0xdc0);
    if ((arg1 == NULL) || (uVar7 = devm_kmalloc(piVar1,0x88,0xdc0), uVar7 == 0)) {
        uVar8 = 0xfffffff4;
        goto code_r0x08008228;
    }
    memcpy(uVar7,obj.wsa883x_regmap_irq_chip,0x88);
    puVar15 = arg1 + 0x2b;
    puVar2 = arg1 + 0x2c;
    msm_cdc_get_power_supplies(piVar1,puVar15,puVar2);
    if ((arg1[0x2b] == 0) || (*puVar2 < 1)) {
        pcVar12 = "%s: no power supplies defined\n";
code_r0x080080fc:
        _dev_err(piVar1,pcVar12,"wsa883x_enable_supplies");
code_r0x0800810c:
        uVar8 = 0xfffffdfb;
    }
    else {
        iVar4 = msm_cdc_init_supplies(piVar1,arg1 + 0x2d);
        if (arg1[0x2d] == 0) {
            _dev_err(piVar1,"%s: Cannot init wsa supplies\n","wsa883x_enable_supplies");
            if (iVar4 != 0) goto code_r0x0800810c;
        }
        else {
            iVar4 = msm_cdc_enable_static_supplies(piVar1,arg1[0x2d],*puVar15,*puVar2);
            if (iVar4 != 0) {
                pcVar12 = "%s: wsa static supply enable failed!\n";
                goto code_r0x080080fc;
            }
        }
        uVar8 = of_parse_phandle(*(param_1 + 0x338),"qcom,spkr-sd-n-node",0);
        arg1[0x15] = uVar8;
        if (uVar8 == 0) {
            uVar8 = 0;
        }
        else {
            *(param_1 + 0xe0) = arg1;
            arg1[1] = piVar1;
            arg1[2] = param_1;
            iVar4 = msm_cdc_pinctrl_get_state();
            iVar5 = msm_cdc_pinctrl_select_active_state(arg1[0x15]);
            if (iVar5 != 0) {
                _dev_err(arg1[1],"%s: Failed to turn state %d; ret=%d\n","wsa883x_gpio_ctrl",1,iVar5);
            }
            usleep_range_state(5000,0x1392,2);
            iVar5 = swr_get_logical_dev_num(param_1,*(param_1 + 0x3d8),auStack_94);
            if (iVar5 == 0) {
                *(param_1 + 0x40) = auStack_94[0];
                uVar8 = __devm_regmap_init_swr(param_1,obj.wsa883x_regmap_config,0,0);
                *arg1 = uVar8;
                if (uVar8 < 0xfffffffffffff001) {
                    devm_regmap_qti_debugfs_register(piVar1,uVar8);
                    if (0 < *(uVar7 + 0x48)) {
                        iVar5 = 0;
                        do {
                            regmap_write(*arg1,iVar5 + 0x3487,0);
                            iVar5 = iVar5 + 1;
                        } while (iVar5 < *(uVar7 + 0x48));
                    }
                    *(uVar7 + 0x80) = arg1;
                    arg1[0x1e] = piVar1;
                    puVar16 = arg1 + 0x1a;
                    *puVar16 = uVar7;
                    arg1[0x1b] = "WSA883X";
                    arg1[0x1c] = *arg1;
                    uVar6 = wcd_irq_init(puVar16,arg1 + 0x19);
                    if (uVar6 != 0) {
                        uVar8 = uVar6;
                        pcVar12 = "%s: IRQ init failed: %d\n";
                        piVar10 = arg1[1];
                        goto code_r0x08008388;
                    }
                    *(arg1[2] + 1000) = arg1[0x19];
                    wcd_request_irq(puVar16,0,"WSA SAF2WAR",
                                    sym.wsa883x_saf2war_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1);
                    wcd_disable_irq(puVar16,0);
                    wcd_request_irq(puVar16,1,"WSA WAR2SAF",
                                    sym.wsa883x_war2saf_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1);
                    wcd_disable_irq(puVar16,1);
                    wcd_request_irq(puVar16,2,"WSA OTP",
                                    sym.wsa883x_otp_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1);
                    wcd_disable_irq(puVar16,2);
                    wcd_request_irq(puVar16,3,"WSA OCP",
                                    sym.wsa883x_ocp_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1);
                    wcd_disable_irq(puVar16,3);
                    wcd_request_irq(puVar16,4,"WSA CLIP",
                                    sym.wsa883x_clip_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1);
                    wcd_disable_irq(puVar16,4);
                    wcd_request_irq(puVar16,5,"WSA PDM WD",
                                    sym.wsa883x_pdm_wd_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1);
                    wcd_disable_irq(puVar16,5);
                    wcd_request_irq(puVar16,6,"WSA CLK WD",
                                    sym.wsa883x_clk_wd_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1);
                    wcd_disable_irq(puVar16,6);
                    wcd_request_irq(puVar16,7,"WSA EXT INT",
                                    sym.wsa883x_ext_int_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1);
                    wcd_disable_irq(puVar16,7);
                    wcd_request_irq(puVar16,8,"WSA UVLO",
                                    sym.wsa883x_uvlo_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1);
                    wcd_disable_irq(puVar16,8);
                    wcd_request_irq(puVar16,9,"WSA PA ERR",
                                    sym.wsa883x_pa_on_err_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1);
                    wcd_disable_irq(puVar16,9);
                    uVar7 = devm_kmalloc(piVar1,0x160,0xdc0);
                    arg1[0x30] = uVar7;
                    if (uVar7 == 0) {
                        uVar8 = 0xfffffff4;
                    }
                    else {
                        memcpy(uVar7,obj.soc_codec_dev_wsa883x_wsa,0x160);
                        uVar7 = devm_kmalloc(piVar1,0xf0,0xdc0);
                        arg1[0x2f] = uVar7;
                        if (uVar7 == 0) {
                            uVar8 = 0xfffffff4;
                        }
                        else {
                            memcpy(uVar7,obj.wsa_dai,0xf0);
                            uVar6 = *(param_1 + 0x3d8) & 0xf;
                            iVar5 = of_device_is_compatible(*(param_1 + 0x338),0x8001af7);
                            if (iVar5 != 0) {
                                uVar6 = uVar6 + 2;
                            }
                            snprintf(&uStack_90,0x28,"wsa-codec.%d",uVar6);
                            uVar9 = strlen(&uStack_90);
                            uVar9 = kstrndup(&uStack_90,uVar9,0xcc0);
                            *arg1[0x30] = uVar9;
                            snprintf(&uStack_90,0x28,"wsa_rx%d",uVar6);
                            uVar9 = strlen(&uStack_90);
                            uVar9 = kstrndup(&uStack_90,uVar9,0xcc0);
                            *arg1[0x2f] = uVar9;
                            snprintf(&uStack_90,0x28,"WSA883X_AIF%d Playback",uVar6);
                            uVar9 = strlen(&uStack_90);
                            uVar9 = kstrndup(&uStack_90,uVar9,0xcc0);
                            *(arg1[0x2f] + 0xb0) = uVar9;
                            snd_soc_register_component(piVar1,arg1[0x30],arg1[0x2f],1);
                            iVar11 = snd_soc_lookup_component(piVar1,*arg1[0x30]);
                            if (iVar11 != 0) {
                                uVar7 = of_parse_phandle(*(param_1 + 0x338),"qcom,bolero-handle",0);
                                arg1[0x24] = uVar7;
                                if (uVar7 == 0) {
                                    uVar7 = of_parse_phandle(*(param_1 + 0x338),"qcom,lpass-cdc-handle",0);
                                    arg1[0x24] = uVar7;
                                    if (uVar7 != 0) goto code_r0x08008058;
                                    _dev_info(piVar1,"%s: parent node not found\n","wsa883x_swr_probe");
                                }
                                else {
code_r0x08008058:
                                    uVar7 = of_find_device_by_node();
                                    arg1[0x25] = uVar7;
                                    if (uVar7 == 0) {
                                        pcVar12 = "%s: parent dev not found\n";
                                    }
                                    else {
                                        puVar15 = *(uVar7 + 0xa0);
                                        if (puVar15 != NULL) {
                                            arg1[0x26] = 
                                            sym.wsa883x_event_notify.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt;
                                            pcVar13 = puVar15[2];
                                            if (pcVar13 == NULL) {
                                                uVar7 = 0;
                                            }
                                            else {
                                                __cfi_slowpath_diag(0x3b795baa068bc3a6,pcVar13,0x8001220);
                                                (*pcVar13)(*puVar15,arg1 + 0x26,1);
                                                uVar7 = puVar15[2];
                                            }
                                            arg1[0x2a] = uVar7;
                                            arg1[0x29] = *puVar15;
                                            goto code_r0x0800829c;
                                        }
                                        pcVar12 = "%s: plat data not found\n";
                                    }
                                    _dev_err(piVar1,pcVar12,"wsa883x_swr_probe");
                                }
code_r0x0800829c:
                                __mutex_init(arg1 + 0xc,"&wsa883x->res_lock",obj.wsa883x_swr_probe.__key);
                                if (arg1[0x1f] == 0) {
                                    iVar11 = *(param_1 + 0xb8);
                                    if (iVar11 == 0) {
                                        iVar11 = *piVar1;
                                    }
                                    uVar7 = debugfs_create_dir(iVar11,0);
                                    arg1[0x1f] = uVar7;
                                    if (uVar7 < 0xfffffffffffff001) {
                                        uVar7 = debugfs_create_file("swrslave_peek",0x8124,uVar7,param_1,
                                                                    obj.codec_debug_read_ops);
                                        arg1[0x20] = uVar7;
                                        uVar7 = debugfs_create_file("swrslave_poke",0x8124,arg1[0x1f],param_1,
                                                                    obj.codec_debug_write_ops);
                                        arg1[0x21] = uVar7;
                                        uVar7 = debugfs_create_file("swrslave_reg_dump",0x8124,arg1[0x1f],param_1,
                                                                    obj.codec_debug_dump_ops);
                                        uVar8 = 0;
                                        arg1[0x22] = uVar7;
                                        goto code_r0x08008228;
                                    }
                                }
                                uVar8 = 0;
                                goto code_r0x08008228;
                            }
                            _dev_err(piVar1,"%s: component is NULL \n","wsa883x_swr_probe");
                            uVar8 = 0xffffffea;
                            if (arg1[0x2f] != NULL) {
                                uVar8 = 0xffffffea;
                                kfree(*arg1[0x2f]);
                                kfree(*(arg1[0x2f] + 0xb0));
                                kfree(arg1[0x2f]);
                            }
                        }
                        if (arg1[0x30] != NULL) {
                            kfree(*arg1[0x30]);
                            kfree(arg1[0x30]);
                        }
                    }
                    wcd_free_irq(puVar16,0,0);
                    wcd_free_irq(puVar16,1,0);
                    wcd_free_irq(puVar16,2,0);
                    wcd_free_irq(puVar16,3,0);
                    wcd_free_irq(puVar16,4,0);
                    wcd_free_irq(puVar16,5,0);
                    wcd_free_irq(puVar16,6,0);
                    wcd_free_irq(puVar16,7,0);
                    wcd_free_irq(puVar16,8,0);
                    wcd_free_irq(puVar16,9,0);
                    wcd_irq_exit(puVar16,arg1[0x19]);
                }
                else {
                    pcVar12 = "%s: regmap_init failed %d\n";
                    piVar10 = piVar1;
code_r0x08008388:
                    _dev_err(piVar10,pcVar12,"wsa883x_swr_probe",uVar8 & 0xffffffff);
                }
                if (iVar4 == 0) {
                    sym.wsa883x_gpio_ctrl(arg1);
                }
                swr_remove_device(param_1);
            }
            else {
                uVar8 = 0xfffffdfb;
            }
        }
        msm_cdc_release_supplies(piVar1,arg1[0x2d],*puVar15,*puVar2);
    }
    *(param_1 + 0xe0) = 0;
code_r0x08008228:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) != iStack_68) {
        iVar11 = __stack_chk_fail();
        *extraout_x18 = sym.wsa883x_swr_remove;
        if ((iVar11 == 0) || (iVar14 = *(iVar11 + 0xe0), iVar14 == 0)) {
            _dev_err(iVar11 + 0x48,"%s: wsa883x is NULL\n","wsa883x_swr_remove");
            uVar7 = 0xffffffea;
        }
        else {
            iVar3 = iVar14 + 0xd0;
            wcd_free_irq(iVar3,0,0);
            wcd_free_irq(iVar3,1,0);
            wcd_free_irq(iVar3,2,0);
            wcd_free_irq(iVar3,3,0);
            wcd_free_irq(iVar3,4,0);
            wcd_free_irq(iVar3,5,0);
            wcd_free_irq(iVar3,6,0);
            wcd_free_irq(iVar3,7,0);
            wcd_free_irq(iVar3,8,0);
            wcd_free_irq(iVar3,9,0);
            pcVar13 = *(iVar14 + 0x150);
            if (pcVar13 != NULL) {
                __cfi_slowpath_diag(0x3b795baa068bc3a6,pcVar13,0x8001240);
                (*pcVar13)(*(iVar14 + 0x148),iVar14 + 0x130,0);
            }
            debugfs_remove(*(iVar14 + 0xf8));
            *(iVar14 + 0xf8) = 0;
            snd_soc_unregister_component(iVar11 + 0x48);
            if (*(iVar14 + 0x178) != NULL) {
                kfree(**(iVar14 + 0x178));
                kfree(*(*(iVar14 + 0x178) + 0xb0));
                kfree(*(iVar14 + 0x178));
            }
            if (*(iVar14 + 0x180) != NULL) {
                kfree(**(iVar14 + 0x180));
                kfree(*(iVar14 + 0x180));
            }
            msm_cdc_release_supplies(iVar11 + 0x48,*(iVar14 + 0x168),*(iVar14 + 0x158),*(iVar14 + 0x160));
            uVar7 = 0;
            *(iVar11 + 0xe0) = 0;
        }
        return uVar7;
    }
    return uVar8 & 0xffffffff;
}


// ===== sym.wsa883x_enable_swr_dac_port.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt @ 0x080074c8 (size 8) =====

void sym.wsa883x_enable_swr_dac_port.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt
               (int64_t param_1,ulong param_2,uint param_3)

{
    char cVar1;
    bool bVar2;
    unkuint6 Var3;
    int iVar4;
    ulong uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint64_t *extraout_x8;
    uint64_t *puVar9;
    uchar *puVar10;
    ulong *in_x18;
    int64_t iVar11;
    int64_t iVar12;
    ulong unaff_x30;
    uchar auStack_48 [4];
    uchar uStack_44;
    uchar uStack_43;
    uchar auStack_40 [4];
    uchar uStack_3c;
    uchar uStack_3b;
    uint uStack_38;
    uint64_t uStack_34;
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_28 = *(iVar11 + 0x5e0);
    iVar12 = *(param_1 + 0x28);
    _auStack_48 = 0;
    _auStack_40 = 0;
    uStack_2c = 0;
    uStack_34 = 0;
    iVar11 = *(*(iVar12 + -0xb8) + 0x98);
    if (iVar11 != 0) {
        uVar5 = 0;
        switch(param_3) {
        case 1:
            iVar7 = *(*(iVar12 + -0xb8) + 0x98);
            _auStack_40 = *(iVar7 + 0x24) << 0x20;
            _auStack_40 = CONCAT71(stack0xffffffffffffffc1,*(iVar7 + 0x2c));
            _auStack_48 = *(iVar7 + 0x25) << 0x20;
            uStack_38 = *(iVar7 + 0x28);
            _auStack_48 = CONCAT71(stack0xffffffffffffffb9,*(iVar7 + 0x2d));
            if (*(iVar11 + 0x58) == 1) {
                uStack_38 = 4800000;
            }
            if (*(iVar11 + 0x20) == '\0') {
                uVar6 = 1;
                cVar1 = *(iVar11 + 0x21);
            }
            else {
                uVar6 = 2;
                iVar8 = *(*(iVar12 + -0xb8) + 0x98);
                _auStack_40 = CONCAT15(*(iVar8 + 0x30),_auStack_40);
                Var3 = _auStack_40 >> 0x10;
                auStack_40._0_2_ = CONCAT11(*(iVar8 + 0x38),*(iVar7 + 0x2c));
                _auStack_40 = CONCAT62(Var3,auStack_40._0_2_);
                _auStack_48 = CONCAT15(*(iVar8 + 0x31),_auStack_48);
                uStack_34 = *(iVar8 + 0x34);
                Var3 = _auStack_48 >> 0x10;
                auStack_48._0_2_ = CONCAT11(*(iVar8 + 0x39),*(iVar7 + 0x2d));
                _auStack_48 = CONCAT62(Var3,auStack_48._0_2_);
                cVar1 = *(iVar11 + 0x21);
            }
            if (cVar1 != '\0') {
                iVar12 = *(*(iVar12 + -0xb8) + 0x98);
                *(auStack_40 + 4 | uVar6) = *(iVar12 + 0x48);
                *(auStack_40 | uVar6) = *(iVar12 + 0x50);
                puVar10 = auStack_48 | uVar6;
                *(auStack_48 + 4 | uVar6) = *(iVar12 + 0x49);
                (&uStack_38)[uVar6] = *(iVar12 + 0x4c);
                uVar6 = uVar6 + 1;
                *puVar10 = *(iVar12 + 0x51);
            }
            swr_connect_port(*(iVar11 + 0x10),auStack_40 + 4,uVar6,auStack_48 + 4,&uStack_38,auStack_40,auStack_48
                            );
            break;
        case 2:
            puVar9 = iVar11 + 0x170;
            goto code_r0x08009930;
        default:
            goto code_r0x080098c0;
        case 4:
            iVar7 = *(*(iVar12 + -0xb8) + 0x98);
            _auStack_40 = *(iVar7 + 0x24) << 0x20;
            _auStack_40 = CONCAT71(stack0xffffffffffffffc1,*(iVar7 + 0x2c));
            _auStack_48 = *(iVar7 + 0x25) << 0x20;
            uStack_38 = *(iVar7 + 0x28);
            _auStack_48 = CONCAT71(stack0xffffffffffffffb9,*(iVar7 + 0x2d));
            if (*(iVar11 + 0x20) == '\0') {
                uVar6 = 1;
                cVar1 = *(iVar11 + 0x21);
            }
            else {
                uVar6 = 2;
                iVar8 = *(*(iVar12 + -0xb8) + 0x98);
                _auStack_40 = CONCAT15(*(iVar8 + 0x30),_auStack_40);
                Var3 = _auStack_40 >> 0x10;
                auStack_40._0_2_ = CONCAT11(*(iVar8 + 0x38),*(iVar7 + 0x2c));
                _auStack_40 = CONCAT62(Var3,auStack_40._0_2_);
                _auStack_48 = CONCAT15(*(iVar8 + 0x31),_auStack_48);
                uStack_34 = *(iVar8 + 0x34);
                Var3 = _auStack_48 >> 0x10;
                auStack_48._0_2_ = CONCAT11(*(iVar8 + 0x39),*(iVar7 + 0x2d));
                _auStack_48 = CONCAT62(Var3,auStack_48._0_2_);
                cVar1 = *(iVar11 + 0x21);
            }
            if (cVar1 != '\0') {
                iVar12 = *(*(iVar12 + -0xb8) + 0x98);
                *(auStack_40 + 4 | uVar6) = *(iVar12 + 0x48);
                *(auStack_40 | uVar6) = *(iVar12 + 0x50);
                puVar10 = auStack_48 | uVar6;
                *(auStack_48 + 4 | uVar6) = *(iVar12 + 0x49);
                (&uStack_38)[uVar6] = *(iVar12 + 0x4c);
                uVar6 = uVar6 + 1;
                *puVar10 = *(iVar12 + 0x51);
            }
            swr_disconnect_port(*(iVar11 + 0x10),auStack_40 + 4,uVar6,auStack_48 + 4,auStack_48);
            break;
        case 8:
            iVar4 = swr_set_device_group(*(iVar11 + 0x10),0);
            if (iVar4 != 0) {
                _dev_err(*(iVar12 + -0xb8),"%s: set num ch failed\n","wsa883x_enable_swr_dac_port");
            }
            swr_slvdev_datapath_control(*(iVar11 + 0x10),*(*(iVar11 + 0x10) + 0x40),0);
        }
        while( true ) {
            uVar5 = 0;
code_r0x080098c0:
            iVar11 = sp_el0;
            if (*(iVar11 + 0x5e0) == iStack_28) break;
            __stack_chk_fail(uVar5);
            puVar9 = extraout_x8;
code_r0x08009930:
            Hint_Prefetch(puVar9,2,0,1);
            do {
                cVar1 = '\x01';
                bVar2 = ExclusiveMonitorPass(puVar9,0x10);
                if (bVar2) {
                    *puVar9 = *puVar9 | 1;
                    cVar1 = ExclusiveMonitorsStatus();
                }
            } while (cVar1 != '\0');
        }
        return;
    }
    uVar5 = 0xffffffea;
    goto code_r0x080098c0;
}


// ===== sym.wsa883x_spkr_event.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt @ 0x080074d0 (size 8) =====

ulong sym.wsa883x_spkr_event.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt(int64_t param_1,ulong param_2,int param_3)

{
    uint64_t *puVar1;
    int64_t iVar2;
    char cVar3;
    bool bVar4;
    ulong uVar5;
    ulong *in_x18;
    int64_t iVar6;
    uint uVar7;
    uint uVar8;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(param_1 + 0x28) + -0xd0;
    iVar9 = *(*(*(param_1 + 0x28) + -0xb8) + 0x98);
    if (param_3 == 4) {
        puVar1 = iVar9 + 0x170;
        if ((*(iVar9 + 0x170) >> 2 & 1) == 0) {
            wcd_disable_irq(iVar9 + 0xd0,5);
        }
        snd_soc_component_update_bits(iVar6,0x3426,1,0);
        snd_soc_component_update_bits(iVar6,0x3426,0xe,0);
        snd_soc_component_update_bits(iVar6,0x3410,1,0);
        snd_soc_component_update_bits(iVar6,0x3410,0x10,0);
        snd_soc_component_update_bits(iVar6,0x3410,0x10,0x10);
        snd_soc_component_update_bits(iVar6,0x3410,0x10,0);
        snd_soc_component_update_bits(iVar6,0x344b,1,0);
        iVar9 = iVar9 + 0xd0;
        wcd_disable_irq(iVar9,6);
        wcd_disable_irq(iVar9,3);
        wcd_disable_irq(iVar9,2);
        wcd_disable_irq(iVar9,1);
        wcd_disable_irq(iVar9,0);
        wcd_disable_irq(iVar9,8);
        wcd_disable_irq(iVar9,9);
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
                *puVar1 = *puVar1 & 0xfffffffffffffffe;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
                *puVar1 = *puVar1 & 0xfffffffffffffffb;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        return 0;
    }
    if (param_3 != 2) {
        return 0;
    }
    if (*(iVar9 + 0x58) == 1) {
        uVar7 = 0;
        uVar8 = 8;
        uVar5 = 2;
    }
    else {
        if (*(iVar9 + 0x58) != 0) goto code_r0x08009b0c;
        uVar5 = 0;
        uVar8 = 0;
        uVar7 = 0x90;
    }
    snd_soc_component_update_bits(iVar6,0x3408,2,uVar5);
    snd_soc_component_update_bits(iVar6,0x3039,8,uVar8);
    snd_soc_component_update_bits(iVar6,0x346c,0xf0,uVar7);
code_r0x08009b0c:
    swr_slvdev_datapath_control(*(iVar9 + 0x10),*(*(iVar9 + 0x10) + 0x40),1);
    usleep_range_state(0xfa,300,2);
    snd_soc_component_update_bits(iVar6,0x346d,1,1);
    usleep_range_state(0xfa,300,2);
    swr_remove_from_group(*(iVar9 + 0x10),*(*(iVar9 + 0x10) + 0x40));
    if (*(iVar9 + 0x20) != '\0') {
        snd_soc_component_update_bits(iVar6,0x346c,7,*(iVar9 + 0x5c));
    }
    iVar2 = iVar9 + 0xd0;
    wcd_enable_irq(iVar2,9);
    wcd_enable_irq(iVar2,8);
    wcd_enable_irq(iVar2,0);
    wcd_enable_irq(iVar2,1);
    wcd_enable_irq(iVar2,2);
    wcd_enable_irq(iVar2,3);
    wcd_enable_irq(iVar2,6);
    snd_soc_component_update_bits(iVar6,0x3426,0xe,6);
    snd_soc_component_update_bits(iVar6,0x3426,1,1);
    if ((*(iVar9 + 0x170) >> 2 & 1) != 0) {
        snd_soc_component_update_bits(iVar6,0x3410,1,1);
    }
    return 0;
}


// ===== sym.wsa883x_codec_get_dev_num.cfi_jt @ 0x080074d8 (size 8) =====

uint64_t sym.wsa883x_codec_get_dev_num.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 != 0) {
        iVar1 = *(*(param_1 + 0x18) + 0x98);
        if (iVar1 != 0) {
            return *(*(iVar1 + 0x10) + 0x40);
        }
        _printk(0x800135e,"wsa883x_codec_get_dev_num");
    }
    return 0xffffffea;
}


// ===== sym.wsa883x_codec_probe.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt @ 0x080074e0 (size 8) =====

void sym.wsa883x_codec_probe.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong unaff_x30;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_48 = *(iVar3 + 0x5e0);
    puVar4 = *(*(param_1 + 0x18) + 0x98);
    if ((puVar4 == NULL) || (*(param_1 + 0x10) == 0)) {
        uVar2 = 0xffffffea;
    }
    else {
        iVar3 = param_1 + 0xd0;
        snd_soc_component_init_regmap(param_1,*puVar4);
        puVar4[3] = param_1;
        uVar1 = snd_soc_component_read(param_1,0x3580);
        *(puVar4 + 0x17) = uVar1 & 0xf;
        uVar1 = snd_soc_component_read(param_1,0x3401);
        *(puVar4 + 0x5c) = 2;
        *(puVar4 + 0xbc) = uVar1 & 0xff;
        iVar5 = *(*(param_1 + 0x18) + 0x98);
        if (iVar5 != 0) {
            iVar6 = 0;
            do {
                snd_soc_component_update_bits
                          (param_1,*(obj.reg_init + iVar6),*(iVar6 + 0x8002fc2),*(iVar6 + 0x8002fc3));
                iVar6 = iVar6 + 4;
            } while (iVar6 != 200);
            if ((*(iVar5 + 0xb8) | 2) == 2) {
                snd_soc_component_update_bits(param_1,0x346c,7,3);
                *(iVar5 + 0x5c) = 3;
            }
        }
        *(puVar4 + 0x54) = 0;
        uStack_70 = 0;
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
        strlcpy(&uStack_70,*(puVar4[0x2f] + 0xb0),0x28);
        snd_soc_dapm_ignore_suspend(iVar3,&uStack_70);
        uStack_70 = 0;
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
        strlcpy(&uStack_70,0x80017fe,0x28);
        snd_soc_dapm_ignore_suspend(iVar3,&uStack_70);
        uStack_70 = 0;
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
        strlcpy(&uStack_70,"SWR DAC_Port",0x28);
        snd_soc_dapm_ignore_suspend(iVar3,&uStack_70);
        uStack_70 = 0;
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
        strlcpy(&uStack_70,"SPKR",0x28);
        snd_soc_dapm_ignore_suspend(iVar3,&uStack_70);
        snd_soc_dapm_sync(iVar3);
        uVar2 = 0;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_48) {
        return;
    }
    iVar3 = __stack_chk_fail(uVar2);
    *extraout_x18 = sym.wsa883x_codec_remove;
    if (*(*(iVar3 + 0x18) + 0x98) != 0) {
        snd_soc_component_exit_regmap();
    }
    return;
}


// ===== sym.wsa883x_soc_codec_resume.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt @ 0x080074e8 (size 8) =====

ulong sym.wsa883x_soc_codec_resume.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    
    iVar1 = *(*(param_1 + 0x18) + 0x98);
    if (iVar1 != 0) {
        *(iVar1 + 0x23) = 0;
    }
    return 0;
}


// ===== sym.wsa883x_soc_codec_suspend.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt @ 0x080074f0 (size 8) =====

ulong sym.wsa883x_soc_codec_suspend.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    
    iVar1 = *(*(param_1 + 0x18) + 0x98);
    if (iVar1 != 0) {
        *(iVar1 + 0x23) = 1;
    }
    return 0;
}


// ===== sym.wsa883x_event_notify.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt @ 0x080074f8 (size 8) =====

void sym.wsa883x_event_notify.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt(int64_t param_1,ushort param_2)

{
    char cVar1;
    bool bVar2;
    ulong *puVar3;
    int iVar4;
    uint64_t uVar5;
    uint64_t *extraout_x8;
    uint64_t *puVar6;
    ulong *in_x18;
    int64_t iVar7;
    ulong unaff_x30;
    uchar auStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    puVar3 = param_1 + -0x130;
    if (puVar3 == NULL) {
        uVar5 = 0xffffffea;
        goto code_r0x08008cf8;
    }
    uVar5 = 0;
    switch(param_2) {
    case 2:
        if ((*(param_1 + 0x40) & 1) != 0) {
            snd_soc_component_update_bits(*(param_1 + -0x118),0x3410,1,0);
        }
        uVar5 = msm_cdc_pinctrl_select_sleep_state(*(param_1 + -0x88));
        if (uVar5 == 0) goto code_r0x08008cf8;
        _dev_err(*(param_1 + -0x128),"%s: Failed to turn state %d; ret=%d\n","wsa883x_gpio_ctrl",0,
                 uVar5 & 0xffffffff);
        _dev_err(*(param_1 + -0x128),"%s: Failed to disable gpio\n","wsa883x_swr_down");
        break;
    default:
        goto code_r0x08008cf8;
    case 4:
        iVar4 = msm_cdc_pinctrl_select_active_state(*(param_1 + -0x88));
        if (iVar4 != 0) {
            _dev_err(*(param_1 + -0x128),"%s: Failed to turn state %d; ret=%d\n","wsa883x_gpio_ctrl",1,iVar4);
            _dev_err(*(param_1 + -0x128),"%s: Failed to enable gpio\n","wsa883x_swr_up");
        }
        usleep_range_state(20000,0x4e2a,2);
        iVar7 = *(param_1 + -0x120);
        auStack_3c[0] = 0;
        iVar4 = swr_get_logical_dev_num(iVar7,*(iVar7 + 0x3d8),auStack_3c);
        if (iVar4 != 0) {
            usleep_range_state(1000,0x44c,2);
            iVar4 = swr_get_logical_dev_num(iVar7,*(iVar7 + 0x3d8),auStack_3c);
            if (iVar4 != 0) {
                usleep_range_state(1000,0x44c,2);
                iVar4 = swr_get_logical_dev_num(iVar7,*(iVar7 + 0x3d8),auStack_3c);
                if (iVar4 != 0) {
                    usleep_range_state(1000,0x44c,2);
                    iVar4 = swr_get_logical_dev_num(iVar7,*(iVar7 + 0x3d8),auStack_3c);
                    if (iVar4 != 0) {
                        usleep_range_state(1000,0x44c,2);
                        iVar4 = swr_get_logical_dev_num(iVar7,*(iVar7 + 0x3d8),auStack_3c);
                        if (iVar4 != 0) {
                            usleep_range_state(1000,0x44c,2);
                            swr_get_logical_dev_num(iVar7,*(iVar7 + 0x3d8),auStack_3c);
                        }
                    }
                }
            }
        }
        *(iVar7 + 0x40) = auStack_3c[0];
        mutex_lock(param_1 + -0xd0);
        regcache_mark_dirty(*puVar3);
        regcache_sync(*puVar3);
        mutex_unlock(param_1 + -0xd0);
        break;
    case 5:
        if ((*(param_1 + 0x40) & 1) != 0) {
            snd_soc_component_update_bits(*(param_1 + -0x118),0x344b,1,1);
            snd_soc_component_update_bits(*(param_1 + -0x118),0x3410,1,1);
            wcd_enable_irq(param_1 + -0x60,5);
            usleep_range_state(3000,0xc1c,2);
            if (*(param_1 + -0x110) != '\0') {
                snd_soc_component_update_bits(*(param_1 + -0x118),0x346d,1,0);
                usleep_range_state(5000,0x13ba,2);
            }
        }
        break;
    case 6:
        if ((*(param_1 + 0x40) & 1) != 0) {
            puVar6 = param_1 + 0x40;
            goto code_r0x08008d6c;
        }
    }
    while( true ) {
        uVar5 = 0;
code_r0x08008cf8:
        iVar7 = sp_el0;
        if (*(iVar7 + 0x5e0) == iStack_38) break;
        __stack_chk_fail(uVar5);
        puVar6 = extraout_x8;
code_r0x08008d6c:
        Hint_Prefetch(puVar6,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(puVar6,0x10);
            if (bVar2) {
                *puVar6 = *puVar6 | 4;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
    }
    return;
}


// ===== sym.wsa_dev_mode_get.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt @ 0x08007500 (size 8) =====

ulong sym.wsa_dev_mode_get.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt(int64_t param_1,int64_t param_2)

{
    *(param_2 + 0x48) = *(*(*(*(param_1 + 0x80) + 0x18) + 0x98) + 0x58);
    return 0;
}


// ===== sym.wsa883x_set_mute.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt @ 0x08007508 (size 8) =====

ulong sym.wsa883x_set_mute.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt(int64_t param_1,int64_t param_2)

{
    *(*(*(*(param_1 + 0x80) + 0x18) + 0x98) + 0xb0) = *(param_2 + 0x48);
    return 0;
}


// ===== sym.wsa883x_get_dev_num.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt @ 0x08007510 (size 8) =====

ulong sym.wsa883x_get_dev_num.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x80) != 0) {
        iVar1 = *(*(*(param_1 + 0x80) + 0x18) + 0x98);
        if (iVar1 != 0) {
            *(param_2 + 0x48) = *(*(iVar1 + 0x10) + 0x40);
            return 0;
        }
        _printk(0x800135e,"wsa883x_get_dev_num");
    }
    return 0xffffffea;
}


// ===== sym.wsa_pa_gain_get.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt @ 0x08007518 (size 8) =====

ulong sym.wsa_pa_gain_get.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt(int64_t param_1,int64_t param_2)

{
    *(param_2 + 0x48) = *(*(*(*(param_1 + 0x80) + 0x18) + 0x98) + 0xc0);
    return 0;
}


// ===== sym.wsa883x_get_comp_offset.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt @ 0x08007520 (size 8) =====

ulong sym.wsa883x_get_comp_offset.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt(int64_t param_1,int64_t param_2)

{
    *(param_2 + 0x48) = *(*(*(*(param_1 + 0x80) + 0x18) + 0x98) + 0x5c);
    return 0;
}


// ===== sym.snd_soc_dapm_put_volsw.cfi_jt @ 0x08007528 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_dapm_put_volsw.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.wsa883x_get_visense.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt @ 0x08007530 (size 8) =====

ulong sym.wsa883x_get_visense.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt(int64_t param_1,int64_t param_2)

{
    *(param_2 + 0x48) = *(*(*(*(param_1 + 0x80) + 0x18) + 0x98) + 0x21);
    return 0;
}


// ===== sym.wsa883x_get_mute.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt @ 0x08007538 (size 8) =====

ulong sym.wsa883x_get_mute.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt(int64_t param_1,int64_t param_2)

{
    *(param_2 + 0x48) = *(*(*(*(param_1 + 0x80) + 0x18) + 0x98) + 0xb0);
    return 0;
}


// ===== sym.wsa_get_temp.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt @ 0x08007540 (size 8) =====

ulong sym.wsa_get_temp.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt(int64_t param_1,int64_t param_2)

{
    int iVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    int iVar8;
    int64_t iVar9;
    int64_t iVar10;
    ulong *in_x18;
    int64_t iVar11;
    char cVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar11 = *(param_1 + 0x80);
    iVar10 = *(*(iVar11 + 0x18) + 0x98);
    if ((*(iVar10 + 0x170) & 1) == 0) {
        if (iVar10 == 0) {
            iVar8 = 0;
        }
        else {
            cVar12 = '\x03';
            iVar9 = iVar10;
            do {
                mutex_lock(iVar9 + 0x60);
                snd_soc_component_update_bits(iVar11,0x3416,1,1);
                snd_soc_component_update_bits(iVar11,0x3416,4,4);
                snd_soc_component_update_bits(iVar11,0x3416,2,2);
                snd_soc_component_update_bits(iVar11,0x3416,0x80,0x80);
                snd_soc_component_update_bits(iVar11,0x3416,0x20,0x20);
                snd_soc_component_update_bits(iVar11,0x3416,0x40,0x40);
                snd_soc_component_update_bits(iVar11,0x3420,1,0);
                uVar4 = snd_soc_component_read(iVar11,0x3422);
                uVar5 = snd_soc_component_read(iVar11,0x3423);
                snd_soc_component_update_bits(iVar11,0x3420,1,1);
                uVar2 = snd_soc_component_read(iVar11,0x3581);
                uVar6 = snd_soc_component_read(iVar11,0x3582);
                uVar3 = snd_soc_component_read(iVar11,0x3583);
                uVar7 = snd_soc_component_read(iVar11,0x3584);
                snd_soc_component_update_bits(iVar11,0x3416,0xe7,0);
                mutex_unlock(iVar9 + 0x60);
                if (((((uVar2 - 0x5d < 0xffffffe7) || ((uVar6 & 0x3f) != 0)) || (uVar3 < 0xb9)) ||
                    ((0xda < uVar3 || ((uVar7 & 0x3f) != 0)))) &&
                   (iVar8 = ___ratelimit(obj.wsa883x_get_temperature._rs,"wsa883x_get_temperature"), iVar8 != 0)) {
                    _printk("%s: Temperature registers[%d %d %d %d] are out of range\n","wsa883x_get_temperature",
                            uVar2,uVar6 & 0xff,uVar3,uVar7 & 0xff);
                }
                uVar6 = (uVar6 & 0xc0 | uVar2 << 8) >> 6;
                iVar8 = ((uVar7 & 0xc0 | uVar3 << 8) >> 6) - uVar6;
                if (iVar8 != 0) {
                    iVar1 = 0;
                    if (iVar8 != 0) {
                        iVar1 = ((((uVar5 & 0xc0 | (uVar4 & 0xff) << 8) >> 6) - uVar6) * 0xa0) / iVar8;
                    }
                    iVar8 = iVar1 + -10;
                    if (iVar1 - 0x37U < 0xffffffd9) goto code_r0x08009358;
code_r0x080093ac:
                    *(iVar10 + 0xb4) = iVar8;
                    goto code_r0x080093c0;
                }
                iVar8 = 0xffff;
code_r0x08009358:
                cVar12 = cVar12 + -1;
                msleep(10);
                if (cVar12 == '\0') goto code_r0x080093ac;
                iVar9 = *(*(iVar11 + 0x18) + 0x98);
            } while (iVar9 != 0);
            _dev_err(*(iVar11 + 0x18),"%s: wsa883x is NULL\n","wsa883x_temp_reg_read");
            _printk(0x80014c4,"wsa883x_get_temperature",0xffffffea,*(iVar10 + 0xb4));
            iVar8 = *(iVar10 + 0xb4);
        }
    }
    else {
        iVar8 = *(iVar10 + 0xb4);
    }
code_r0x080093c0:
    *(param_2 + 0x48) = iVar8;
    return 0;
}


// ===== sym.wsa883x_set_comp_offset.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt @ 0x08007548 (size 8) =====

ulong sym.wsa883x_set_comp_offset.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt(int64_t param_1,int64_t param_2)

{
    *(*(*(*(param_1 + 0x80) + 0x18) + 0x98) + 0x5c) = *(param_2 + 0x48);
    return 0;
}


// ===== sym.wsa_dev_mode_put.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt @ 0x08007550 (size 8) =====

ulong sym.wsa_dev_mode_put.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt(int64_t param_1,int64_t param_2)

{
    *(*(*(*(param_1 + 0x80) + 0x18) + 0x98) + 0x58) = *(param_2 + 0x48);
    return 0;
}


// ===== sym.wsa883x_put_ext_vdd_spk.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt @ 0x08007558 (size 8) =====

ulong sym.wsa883x_put_ext_vdd_spk.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt(int64_t param_1,int64_t param_2)

{
    *(*(*(*(param_1 + 0x80) + 0x18) + 0x98) + 0x22) = *(param_2 + 0x48) != 0;
    return 0;
}


// ===== sym.wsa883x_get_compander.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt @ 0x08007560 (size 8) =====

ulong sym.wsa883x_get_compander.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt(int64_t param_1,int64_t param_2)

{
    *(param_2 + 0x48) = *(*(*(*(param_1 + 0x80) + 0x18) + 0x98) + 0x20);
    return 0;
}


// ===== sym.wsa883x_set_visense.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt @ 0x08007568 (size 8) =====

ulong sym.wsa883x_set_visense.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt(int64_t param_1,int64_t param_2)

{
    *(*(*(*(param_1 + 0x80) + 0x18) + 0x98) + 0x21) = *(param_2 + 0x48) != 0;
    return 0;
}


// ===== sym.wsa_pa_gain_put.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt @ 0x08007570 (size 8) =====

ulong sym.wsa_pa_gain_put.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x80);
    iVar3 = *(*(iVar1 + 0x18) + 0x98);
    uVar2 = *(param_2 + 0x48);
    *(iVar3 + 0xc0) = uVar2;
    if (*(iVar3 + 0x20) == '\0') {
        snd_soc_component_update_bits(iVar1,0x346d,0x3e,(uVar2 & 0xff) << 1);
    }
    return 0;
}


// ===== sym.wsa883x_set_compander.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt @ 0x08007578 (size 8) =====

ulong sym.wsa883x_set_compander.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt(int64_t param_1,int64_t param_2)

{
    *(*(*(*(param_1 + 0x80) + 0x18) + 0x98) + 0x20) = *(param_2 + 0x48) != 0;
    return 0;
}


// ===== sym.wsa883x_get_ext_vdd_spk.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt @ 0x08007580 (size 8) =====

ulong sym.wsa883x_get_ext_vdd_spk.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt(int64_t param_1,int64_t param_2)

{
    *(param_2 + 0x48) = *(*(*(*(param_1 + 0x80) + 0x18) + 0x98) + 0x22);
    return 0;
}


// ===== sym.snd_soc_dapm_get_volsw.cfi_jt @ 0x08007588 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_dapm_get_volsw.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.wsa883x_codec_info_create_codec_entry @ 0x08007590 (size 416) =====

uint64_t sym.wsa883x_codec_info_create_codec_entry(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar4;
    int64_t iVar5;
    ulong unaff_x30;
    ulong uStack_88;
    ulong uStack_80;
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
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    uVar2 = 0xffffffea;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    if ((arg1 != 0) && (arg2 != 0)) {
        iVar5 = *(*(arg2 + 0x18) + 0x98);
        if (*(iVar5 + 0x90) == 0) {
            iVar4 = *(arg2 + 0x20);
            snprintf(&uStack_88,0x50,"%s.%llx",0x8001994,*(*(iVar5 + 0x10) + 0x3d8));
            iVar3 = snd_info_create_module_entry(*(arg1 + 0x38),&uStack_88,arg1);
            *(iVar5 + 0x90) = iVar3;
            if (iVar3 != 0) {
                *(iVar3 + 8) = 0x416d;
                iVar1 = snd_info_register(*(iVar5 + 0x90));
                if ((-1 < iVar1) &&
                   (iVar3 = snd_info_create_card_entry(*(iVar4 + 0x48),"version",*(iVar5 + 0x90)), iVar3 != 0)) {
                    *(iVar3 + 0x40) = iVar5;
                    *(iVar3 + 0x10) = 0x20;
                    *(iVar3 + 0x18) = 1;
                    *(iVar3 + 0x20) = obj.wsa883x_codec_info_ops;
                    iVar1 = snd_info_register();
                    if (-1 < iVar1) {
                        *(iVar5 + 0x98) = iVar3;
                        iVar4 = snd_info_create_card_entry(*(iVar4 + 0x48),"variant",*(iVar5 + 0x90));
                        if (iVar4 != 0) {
                            *(iVar4 + 0x40) = iVar5;
                            *(iVar4 + 0x10) = 0x20;
                            *(iVar4 + 0x18) = 1;
                            *(iVar4 + 0x20) = obj.wsa883x_variant_ops;
                            iVar1 = snd_info_register();
                            if (-1 < iVar1) {
                                uVar2 = 0;
                                *(iVar5 + 0xa0) = iVar4;
                                goto code_r0x080076fc;
                            }
                            snd_info_free_entry(iVar4);
                        }
                    }
                    snd_info_free_entry(iVar3);
                }
                snd_info_free_entry(*(iVar5 + 0x90));
            }
            uVar2 = 0xfffffff4;
        }
        else {
            uVar2 = 0;
        }
    }
code_r0x080076fc:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return uVar2;
    }
    iVar5 = __stack_chk_fail(uVar2);
    *extraout_x18 = sym.wsa883x_codec_get_dev_num;
    if (iVar5 != 0) {
        iVar5 = *(*(iVar5 + 0x18) + 0x98);
        if (iVar5 != 0) {
            return *(*(iVar5 + 0x10) + 0x40);
        }
        _printk(0x800135e,"wsa883x_codec_get_dev_num");
    }
    return 0xffffffea;
}


// ===== sym.wsa883x_codec_get_dev_num @ 0x08007730 (size 84) =====

uint64_t sym.wsa883x_codec_get_dev_num(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 != 0) {
        iVar1 = *(*(arg1 + 0x18) + 0x98);
        if (iVar1 != 0) {
            return *(*(iVar1 + 0x10) + 0x40);
        }
        _printk(0x800135e,"wsa883x_codec_get_dev_num");
    }
    return 0xffffffea;
}


// ===== sym.wsa883x_set_channel_map @ 0x08007784 (size 396) =====

ulong sym.wsa883x_set_channel_map(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uchar uVar1;
    ulong uVar2;
    uint32_t uVar3;
    uint *in_x4;
    uchar *in_x5;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = arg3;
    if (((((uVar3 & 0xff) < 5) && (arg2 != 0)) && (arg4 != 0)) && (in_x4 != NULL)) {
        if ((arg3 & 0xffU) != 0) {
            iVar4 = *(*(arg1 + 0x18) + 0x98);
            *(iVar4 + 0x24) = *arg2;
            *(iVar4 + 0x25) = *arg4;
            *(iVar4 + 0x28) = *in_x4;
            uVar1 = __sw_hweight8(*arg4);
            *(iVar4 + 0x2c) = uVar1;
            if (in_x5 != NULL) {
                *(iVar4 + 0x2d) = *in_x5;
            }
            if ((uVar3 & 0xff) != 1) {
                *(iVar4 + 0x30) = *(arg2 + 1);
                *(iVar4 + 0x31) = *(arg4 + 4);
                *(iVar4 + 0x34) = in_x4[1];
                uVar1 = __sw_hweight8(*(arg4 + 4));
                *(iVar4 + 0x38) = uVar1;
                if (in_x5 != NULL) {
                    *(iVar4 + 0x39) = in_x5[1];
                }
                if ((uVar3 & 0xff) != 2) {
                    *(iVar4 + 0x3c) = *(arg2 + 2);
                    *(iVar4 + 0x3d) = *(arg4 + 8);
                    *(iVar4 + 0x40) = in_x4[2];
                    uVar1 = __sw_hweight8(*(arg4 + 8));
                    *(iVar4 + 0x44) = uVar1;
                    if (in_x5 != NULL) {
                        *(iVar4 + 0x45) = in_x5[2];
                    }
                    if ((uVar3 & 0xff) != 3) {
                        *(iVar4 + 0x48) = *(arg2 + 3);
                        *(iVar4 + 0x49) = *(arg4 + 0xc);
                        *(iVar4 + 0x4c) = in_x4[3];
                        uVar1 = __sw_hweight8(*(arg4 + 0xc));
                        *(iVar4 + 0x50) = uVar1;
                        if (in_x5 != NULL) {
                            *(iVar4 + 0x51) = in_x5[3];
                            return 0;
                        }
                    }
                }
            }
        }
        uVar2 = 0;
    }
    else {
        _dev_err(*(arg1 + 0x18),"%s: Invalid port=%pK, ch_mask=%pK, ch_rate=%pK\n","wsa883x_set_channel_map",arg2,
                 arg4);
        uVar2 = 0xffffffea;
    }
    return uVar2;
}


// ===== sym.wsa883x_codec_version_read @ 0x08007910 (size 240) =====

uint64_t sym.wsa883x_codec_version_read(int64_t arg1,uchar noname_1 [16],uchar noname_2 [16],int64_t arg2)

{
    int64_t *piVar1;
    uint64_t *puVar2;
    int64_t iVar3;
    int iVar4;
    int iVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    uint64_t *arg1_00;
    uint64_t uVar9;
    uint64_t uVar10;
    int64_t *piVar11;
    int64_t iVar12;
    unkbyte5 *pVar13;
    ulong in_x4;
    char *pcVar14;
    ulong uVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    code *pcVar16;
    uint64_t *puVar17;
    uint64_t *puVar18;
    ulong unaff_x30;
    uchar auStack_114 [4];
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    int64_t iStack_e8;
    uchar **ppuStack_e0;
    code *pcStack_d8;
    uchar auStack_80 [8];
    unkbyte7 Stack_78;
    char cStack_71;
    uchar uStack_70;
    ushort uStack_6f;
    unkbyte5 Stack_6d;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    unkbyte5 Stack_38;
    ushort uStack_33;
    char cStack_31;
    unkbyte5 Stack_30;
    ushort uStack_2b;
    uchar uStack_29;
    ulong uStack_28;
    ulong uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_18 = *(iVar12 + 0x5e0);
    Stack_38 = 0;
    uStack_33 = 0;
    cStack_31 = '\0';
    uStack_28 = 0;
    uStack_20 = 0;
    Stack_30 = 0;
    uStack_2b = 0;
    uStack_29 = 0;
    if (*(arg1 + 0x40) == 0) {
        _printk(0x800194e,"wsa883x_codec_version_read");
        uVar7 = 0xffffffffffffffea;
    }
    else {
        iVar4 = *(*(arg1 + 0x40) + 0xbc);
        if (iVar4 == 1) {
            pcVar14 = "WSA883X_1_1\n";
code_r0x0800796c:
            uVar15 = *(pcVar14 + 5);
            in_x4 = 0xc;
            Stack_38 = *pcVar14;
            uStack_33 = uVar15;
            cStack_31 = uVar15 >> 0x10;
            Stack_30 = uVar15 >> 0x18;
        }
        else {
            if (iVar4 == 0) {
                pcVar14 = "WSA883X_1_0\n";
                goto code_r0x0800796c;
            }
            in_x4 = 0xe;
            Stack_38 = str.VER_UNDEFINED_n._0_7_;
            uStack_33 = SUB72(str.VER_UNDEFINED_n._0_7_,5);
            cStack_31 = str.VER_UNDEFINED_n[7];
            Stack_30 = str.VER_UNDEFINED_n._8_7_;
            uStack_2b = SUB72(str.VER_UNDEFINED_n._8_7_,5);
        }
        pVar13 = &Stack_38;
        uVar7 = simple_read_from_buffer(arg2);
        arg2 = pVar13;
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_18) {
        return uVar7;
    }
    iVar8 = __stack_chk_fail(uVar7);
    *extraout_x18 = sym.wsa883x_variant_read;
    pcStack_48 = sym.wsa883x_variant_read;
    iVar12 = sp_el0;
    iStack_58 = *(iVar12 + 0x5e0);
    Stack_78 = 0;
    cStack_71 = '\0';
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_70 = 0;
    uStack_6f = 0;
    Stack_6d = 0;
    puStack_50 = &stack0xfffffffffffffff0;
    if (*(iVar8 + 0x40) == 0) {
        _printk(0x800194e,"wsa883x_variant_read");
        uVar7 = 0xffffffffffffffea;
    }
    else {
        switch(*(*(iVar8 + 0x40) + 0xb8)) {
        case 0:
            pcVar14 = "WSA8830\n";
            break;
        case 1:
        case 5:
            pcVar14 = "WSA8835\n";
            break;
        case 2:
            pcVar14 = "WSA8832\n";
            break;
        default:
            uVar15 = 10;
            uStack_70 = 0x44;
            uStack_6f = 10;
            Stack_78 = str.UNDEFINED_n._0_8_;
            cStack_71 = SUB81(str.UNDEFINED_n._0_8_,7);
            goto code_r0x08007ac0;
        }
        uVar15 = 8;
        uStack_70 = 0;
        Stack_78 = *pcVar14;
        cStack_71 = *pcVar14 >> 0x38;
code_r0x08007ac0:
        uVar7 = simple_read_from_buffer(arg2,in_x4,auStack_80,&Stack_78,uVar15);
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_58) {
        return uVar7;
    }
    uVar7 = __stack_chk_fail(uVar7);
    *extraout_x18_00 = sym.wsa883x_swr_probe;
    pcStack_d8 = sym.wsa883x_swr_probe;
    iVar12 = sp_el0;
    piVar1 = uVar7 + 0x48;
    iStack_e8 = *(iVar12 + 0x5e0);
    auStack_114[0] = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_110 = 0;
    ppuStack_e0 = &puStack_50;
    arg1_00 = devm_kmalloc(piVar1,0x188,0xdc0);
    if ((arg1_00 == NULL) || (uVar9 = devm_kmalloc(piVar1,0x88,0xdc0), uVar9 == 0)) {
        uVar10 = 0xfffffff4;
        goto code_r0x08008228;
    }
    memcpy(uVar9,obj.wsa883x_regmap_irq_chip,0x88);
    puVar17 = arg1_00 + 0x2b;
    puVar2 = arg1_00 + 0x2c;
    msm_cdc_get_power_supplies(piVar1,puVar17,puVar2);
    if ((arg1_00[0x2b] == 0) || (*puVar2 < 1)) {
        pcVar14 = "%s: no power supplies defined\n";
code_r0x080080fc:
        _dev_err(piVar1,pcVar14,"wsa883x_enable_supplies");
code_r0x0800810c:
        uVar10 = 0xfffffdfb;
    }
    else {
        iVar4 = msm_cdc_init_supplies(piVar1,arg1_00 + 0x2d);
        if (arg1_00[0x2d] == 0) {
            _dev_err(piVar1,"%s: Cannot init wsa supplies\n","wsa883x_enable_supplies");
            if (iVar4 != 0) goto code_r0x0800810c;
        }
        else {
            iVar4 = msm_cdc_enable_static_supplies(piVar1,arg1_00[0x2d],*puVar17,*puVar2);
            if (iVar4 != 0) {
                pcVar14 = "%s: wsa static supply enable failed!\n";
                goto code_r0x080080fc;
            }
        }
        uVar10 = of_parse_phandle(*(uVar7 + 0x338),"qcom,spkr-sd-n-node",0);
        arg1_00[0x15] = uVar10;
        if (uVar10 == 0) {
            uVar10 = 0;
        }
        else {
            *(uVar7 + 0xe0) = arg1_00;
            arg1_00[1] = piVar1;
            arg1_00[2] = uVar7;
            iVar4 = msm_cdc_pinctrl_get_state();
            iVar5 = msm_cdc_pinctrl_select_active_state(arg1_00[0x15]);
            if (iVar5 != 0) {
                _dev_err(arg1_00[1],"%s: Failed to turn state %d; ret=%d\n","wsa883x_gpio_ctrl",1,iVar5);
            }
            usleep_range_state(5000,0x1392,2);
            iVar5 = swr_get_logical_dev_num(uVar7,*(uVar7 + 0x3d8),auStack_114);
            if (iVar5 == 0) {
                *(uVar7 + 0x40) = auStack_114[0];
                uVar10 = __devm_regmap_init_swr(uVar7,obj.wsa883x_regmap_config,0,0);
                *arg1_00 = uVar10;
                if (uVar10 < 0xfffffffffffff001) {
                    devm_regmap_qti_debugfs_register(piVar1,uVar10);
                    if (0 < *(uVar9 + 0x48)) {
                        iVar5 = 0;
                        do {
                            regmap_write(*arg1_00,iVar5 + 0x3487,0);
                            iVar5 = iVar5 + 1;
                        } while (iVar5 < *(uVar9 + 0x48));
                    }
                    *(uVar9 + 0x80) = arg1_00;
                    arg1_00[0x1e] = piVar1;
                    puVar18 = arg1_00 + 0x1a;
                    *puVar18 = uVar9;
                    arg1_00[0x1b] = "WSA883X";
                    arg1_00[0x1c] = *arg1_00;
                    uVar6 = wcd_irq_init(puVar18,arg1_00 + 0x19);
                    if (uVar6 != 0) {
                        uVar10 = uVar6;
                        pcVar14 = "%s: IRQ init failed: %d\n";
                        piVar11 = arg1_00[1];
                        goto code_r0x08008388;
                    }
                    *(arg1_00[2] + 1000) = arg1_00[0x19];
                    wcd_request_irq(puVar18,0,"WSA SAF2WAR",
                                    sym.wsa883x_saf2war_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1_00);
                    wcd_disable_irq(puVar18,0);
                    wcd_request_irq(puVar18,1,"WSA WAR2SAF",
                                    sym.wsa883x_war2saf_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1_00);
                    wcd_disable_irq(puVar18,1);
                    wcd_request_irq(puVar18,2,"WSA OTP",
                                    sym.wsa883x_otp_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1_00);
                    wcd_disable_irq(puVar18,2);
                    wcd_request_irq(puVar18,3,"WSA OCP",
                                    sym.wsa883x_ocp_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1_00);
                    wcd_disable_irq(puVar18,3);
                    wcd_request_irq(puVar18,4,"WSA CLIP",
                                    sym.wsa883x_clip_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1_00);
                    wcd_disable_irq(puVar18,4);
                    wcd_request_irq(puVar18,5,"WSA PDM WD",
                                    sym.wsa883x_pdm_wd_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1_00);
                    wcd_disable_irq(puVar18,5);
                    wcd_request_irq(puVar18,6,"WSA CLK WD",
                                    sym.wsa883x_clk_wd_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1_00);
                    wcd_disable_irq(puVar18,6);
                    wcd_request_irq(puVar18,7,"WSA EXT INT",
                                    sym.wsa883x_ext_int_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1_00);
                    wcd_disable_irq(puVar18,7);
                    wcd_request_irq(puVar18,8,"WSA UVLO",
                                    sym.wsa883x_uvlo_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1_00);
                    wcd_disable_irq(puVar18,8);
                    wcd_request_irq(puVar18,9,"WSA PA ERR",
                                    sym.wsa883x_pa_on_err_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1_00);
                    wcd_disable_irq(puVar18,9);
                    uVar9 = devm_kmalloc(piVar1,0x160,0xdc0);
                    arg1_00[0x30] = uVar9;
                    if (uVar9 == 0) {
                        uVar10 = 0xfffffff4;
                    }
                    else {
                        memcpy(uVar9,obj.soc_codec_dev_wsa883x_wsa,0x160);
                        uVar9 = devm_kmalloc(piVar1,0xf0,0xdc0);
                        arg1_00[0x2f] = uVar9;
                        if (uVar9 == 0) {
                            uVar10 = 0xfffffff4;
                        }
                        else {
                            memcpy(uVar9,obj.wsa_dai,0xf0);
                            uVar6 = *(uVar7 + 0x3d8) & 0xf;
                            iVar5 = of_device_is_compatible(*(uVar7 + 0x338),0x8001af7);
                            if (iVar5 != 0) {
                                uVar6 = uVar6 + 2;
                            }
                            snprintf(&uStack_110,0x28,"wsa-codec.%d",uVar6);
                            uVar15 = strlen(&uStack_110);
                            uVar15 = kstrndup(&uStack_110,uVar15,0xcc0);
                            *arg1_00[0x30] = uVar15;
                            snprintf(&uStack_110,0x28,"wsa_rx%d",uVar6);
                            uVar15 = strlen(&uStack_110);
                            uVar15 = kstrndup(&uStack_110,uVar15,0xcc0);
                            *arg1_00[0x2f] = uVar15;
                            snprintf(&uStack_110,0x28,"WSA883X_AIF%d Playback",uVar6);
                            uVar15 = strlen(&uStack_110);
                            uVar15 = kstrndup(&uStack_110,uVar15,0xcc0);
                            *(arg1_00[0x2f] + 0xb0) = uVar15;
                            snd_soc_register_component(piVar1,arg1_00[0x30],arg1_00[0x2f],1);
                            iVar12 = snd_soc_lookup_component(piVar1,*arg1_00[0x30]);
                            if (iVar12 != 0) {
                                uVar9 = of_parse_phandle(*(uVar7 + 0x338),"qcom,bolero-handle",0);
                                arg1_00[0x24] = uVar9;
                                if (uVar9 == 0) {
                                    uVar9 = of_parse_phandle(*(uVar7 + 0x338),"qcom,lpass-cdc-handle",0);
                                    arg1_00[0x24] = uVar9;
                                    if (uVar9 != 0) goto code_r0x08008058;
                                    _dev_info(piVar1,"%s: parent node not found\n","wsa883x_swr_probe");
                                }
                                else {
code_r0x08008058:
                                    uVar9 = of_find_device_by_node();
                                    arg1_00[0x25] = uVar9;
                                    if (uVar9 == 0) {
                                        pcVar14 = "%s: parent dev not found\n";
                                    }
                                    else {
                                        puVar17 = *(uVar9 + 0xa0);
                                        if (puVar17 != NULL) {
                                            arg1_00[0x26] =
                                                 sym.wsa883x_event_notify.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt;
                                            pcVar16 = puVar17[2];
                                            if (pcVar16 == NULL) {
                                                uVar9 = 0;
                                            }
                                            else {
                                                __cfi_slowpath_diag(0x3b795baa068bc3a6,pcVar16,0x8001220);
                                                (*pcVar16)(*puVar17,arg1_00 + 0x26,1);
                                                uVar9 = puVar17[2];
                                            }
                                            arg1_00[0x2a] = uVar9;
                                            arg1_00[0x29] = *puVar17;
                                            goto code_r0x0800829c;
                                        }
                                        pcVar14 = "%s: plat data not found\n";
                                    }
                                    _dev_err(piVar1,pcVar14,"wsa883x_swr_probe");
                                }
code_r0x0800829c:
                                __mutex_init(arg1_00 + 0xc,"&wsa883x->res_lock",obj.wsa883x_swr_probe.__key);
                                if (arg1_00[0x1f] == 0) {
                                    iVar12 = *(uVar7 + 0xb8);
                                    if (iVar12 == 0) {
                                        iVar12 = *piVar1;
                                    }
                                    uVar9 = debugfs_create_dir(iVar12,0);
                                    arg1_00[0x1f] = uVar9;
                                    if (uVar9 < 0xfffffffffffff001) {
                                        uVar9 = debugfs_create_file("swrslave_peek",0x8124,uVar9,uVar7,
                                                                    obj.codec_debug_read_ops);
                                        arg1_00[0x20] = uVar9;
                                        uVar9 = debugfs_create_file("swrslave_poke",0x8124,arg1_00[0x1f],uVar7,
                                                                    obj.codec_debug_write_ops);
                                        arg1_00[0x21] = uVar9;
                                        uVar7 = debugfs_create_file("swrslave_reg_dump",0x8124,arg1_00[0x1f],uVar7,
                                                                    obj.codec_debug_dump_ops);
                                        uVar10 = 0;
                                        arg1_00[0x22] = uVar7;
                                        goto code_r0x08008228;
                                    }
                                }
                                uVar10 = 0;
                                goto code_r0x08008228;
                            }
                            _dev_err(piVar1,"%s: component is NULL \n","wsa883x_swr_probe");
                            uVar10 = 0xffffffea;
                            if (arg1_00[0x2f] != NULL) {
                                uVar10 = 0xffffffea;
                                kfree(*arg1_00[0x2f]);
                                kfree(*(arg1_00[0x2f] + 0xb0));
                                kfree(arg1_00[0x2f]);
                            }
                        }
                        if (arg1_00[0x30] != NULL) {
                            kfree(*arg1_00[0x30]);
                            kfree(arg1_00[0x30]);
                        }
                    }
                    wcd_free_irq(puVar18,0,0);
                    wcd_free_irq(puVar18,1,0);
                    wcd_free_irq(puVar18,2,0);
                    wcd_free_irq(puVar18,3,0);
                    wcd_free_irq(puVar18,4,0);
                    wcd_free_irq(puVar18,5,0);
                    wcd_free_irq(puVar18,6,0);
                    wcd_free_irq(puVar18,7,0);
                    wcd_free_irq(puVar18,8,0);
                    wcd_free_irq(puVar18,9,0);
                    wcd_irq_exit(puVar18,arg1_00[0x19]);
                }
                else {
                    pcVar14 = "%s: regmap_init failed %d\n";
                    piVar11 = piVar1;
code_r0x08008388:
                    _dev_err(piVar11,pcVar14,"wsa883x_swr_probe",uVar10 & 0xffffffff);
                }
                if (iVar4 == 0) {
                    sym.wsa883x_gpio_ctrl(arg1_00);
                }
                swr_remove_device(uVar7);
            }
            else {
                uVar10 = 0xfffffdfb;
            }
        }
        msm_cdc_release_supplies(piVar1,arg1_00[0x2d],*puVar17,*puVar2);
    }
    *(uVar7 + 0xe0) = 0;
code_r0x08008228:
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) != iStack_e8) {
        iVar12 = __stack_chk_fail();
        *extraout_x18_01 = sym.wsa883x_swr_remove;
        if ((iVar12 == 0) || (iVar8 = *(iVar12 + 0xe0), iVar8 == 0)) {
            _dev_err(iVar12 + 0x48,"%s: wsa883x is NULL\n","wsa883x_swr_remove");
            uVar7 = 0xffffffea;
        }
        else {
            iVar3 = iVar8 + 0xd0;
            wcd_free_irq(iVar3,0,0);
            wcd_free_irq(iVar3,1,0);
            wcd_free_irq(iVar3,2,0);
            wcd_free_irq(iVar3,3,0);
            wcd_free_irq(iVar3,4,0);
            wcd_free_irq(iVar3,5,0);
            wcd_free_irq(iVar3,6,0);
            wcd_free_irq(iVar3,7,0);
            wcd_free_irq(iVar3,8,0);
            wcd_free_irq(iVar3,9,0);
            pcVar16 = *(iVar8 + 0x150);
            if (pcVar16 != NULL) {
                __cfi_slowpath_diag(0x3b795baa068bc3a6,pcVar16,0x8001240);
                (*pcVar16)(*(iVar8 + 0x148),iVar8 + 0x130,0);
            }
            debugfs_remove(*(iVar8 + 0xf8));
            *(iVar8 + 0xf8) = 0;
            snd_soc_unregister_component(iVar12 + 0x48);
            if (*(iVar8 + 0x178) != NULL) {
                kfree(**(iVar8 + 0x178));
                kfree(*(*(iVar8 + 0x178) + 0xb0));
                kfree(*(iVar8 + 0x178));
            }
            if (*(iVar8 + 0x180) != NULL) {
                kfree(**(iVar8 + 0x180));
                kfree(*(iVar8 + 0x180));
            }
            msm_cdc_release_supplies(iVar12 + 0x48,*(iVar8 + 0x168),*(iVar8 + 0x158),*(iVar8 + 0x160));
            uVar7 = 0;
            *(iVar12 + 0xe0) = 0;
        }
        return uVar7;
    }
    return uVar10 & 0xffffffff;
}


// ===== sym.wsa883x_variant_read @ 0x08007a00 (size 288) =====

uint64_t sym.wsa883x_variant_read(int64_t arg1,uchar noname_1 [16],uchar noname_2 [16],int64_t arg2)

{
    int64_t *piVar1;
    uint64_t *puVar2;
    int64_t iVar3;
    int iVar4;
    int iVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    uint64_t *arg1_00;
    uint64_t uVar8;
    uint64_t uVar9;
    ulong uVar10;
    int64_t *piVar11;
    char *pcVar12;
    int64_t iVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    code *pcVar14;
    int64_t iVar15;
    uint64_t *puVar16;
    uint64_t *puVar17;
    ulong unaff_x30;
    uchar auStack_d4 [4];
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iVar13 = *(iVar13 + 0x5e0);
    if (*(arg1 + 0x40) == 0) {
        _printk(0x800194e,"wsa883x_variant_read");
        uVar7 = 0xffffffffffffffea;
    }
    else {
        uVar6 = *(*(arg1 + 0x40) + 0xb8);
        if (uVar6 < 6) {
    //switch table (6 cases) at 0x8001260
            switch(*(uVar6 + 0x8001260) * 4 + 0x8007a5c) {
            case 0x8007a60:
                break;
            case 0x8007a70:
                break;
            case 0x8007a80:
                break;
            case 0x8007aa0:
                goto code_r0x08007aa0;
            }
        }
        else {
code_r0x08007aa0:
        }
        uVar7 = simple_read_from_buffer(arg2);
    }
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iVar13) {
        return uVar7;
    }
    uVar7 = __stack_chk_fail(uVar7);
    *extraout_x18 = sym.wsa883x_swr_probe;
    pcStack_98 = sym.wsa883x_swr_probe;
    iVar13 = sp_el0;
    piVar1 = uVar7 + 0x48;
    iStack_a8 = *(iVar13 + 0x5e0);
    auStack_d4[0] = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d0 = 0;
    puStack_a0 = &stack0xfffffffffffffff0;
    arg1_00 = devm_kmalloc(piVar1,0x188,0xdc0);
    if ((arg1_00 == NULL) || (uVar8 = devm_kmalloc(piVar1,0x88,0xdc0), uVar8 == 0)) {
        uVar9 = 0xfffffff4;
        goto code_r0x08008228;
    }
    memcpy(uVar8,obj.wsa883x_regmap_irq_chip,0x88);
    puVar16 = arg1_00 + 0x2b;
    puVar2 = arg1_00 + 0x2c;
    msm_cdc_get_power_supplies(piVar1,puVar16,puVar2);
    if ((arg1_00[0x2b] == 0) || (*puVar2 < 1)) {
        pcVar12 = "%s: no power supplies defined\n";
code_r0x080080fc:
        _dev_err(piVar1,pcVar12,"wsa883x_enable_supplies");
code_r0x0800810c:
        uVar9 = 0xfffffdfb;
    }
    else {
        iVar4 = msm_cdc_init_supplies(piVar1,arg1_00 + 0x2d);
        if (arg1_00[0x2d] == 0) {
            _dev_err(piVar1,"%s: Cannot init wsa supplies\n","wsa883x_enable_supplies");
            if (iVar4 != 0) goto code_r0x0800810c;
        }
        else {
            iVar4 = msm_cdc_enable_static_supplies(piVar1,arg1_00[0x2d],*puVar16,*puVar2);
            if (iVar4 != 0) {
                pcVar12 = "%s: wsa static supply enable failed!\n";
                goto code_r0x080080fc;
            }
        }
        uVar9 = of_parse_phandle(*(uVar7 + 0x338),"qcom,spkr-sd-n-node",0);
        arg1_00[0x15] = uVar9;
        if (uVar9 == 0) {
            uVar9 = 0;
        }
        else {
            *(uVar7 + 0xe0) = arg1_00;
            arg1_00[1] = piVar1;
            arg1_00[2] = uVar7;
            iVar4 = msm_cdc_pinctrl_get_state();
            iVar5 = msm_cdc_pinctrl_select_active_state(arg1_00[0x15]);
            if (iVar5 != 0) {
                _dev_err(arg1_00[1],"%s: Failed to turn state %d; ret=%d\n","wsa883x_gpio_ctrl",1,iVar5);
            }
            usleep_range_state(5000,0x1392,2);
            iVar5 = swr_get_logical_dev_num(uVar7,*(uVar7 + 0x3d8),&stack0xffffffffffffff2c);
            if (iVar5 == 0) {
                *(uVar7 + 0x40) = auStack_d4[0];
                uVar9 = __devm_regmap_init_swr(uVar7,obj.wsa883x_regmap_config,0,0);
                *arg1_00 = uVar9;
                if (uVar9 < 0xfffffffffffff001) {
                    devm_regmap_qti_debugfs_register(piVar1,uVar9);
                    if (0 < *(uVar8 + 0x48)) {
                        iVar5 = 0;
                        do {
                            regmap_write(*arg1_00,iVar5 + 0x3487,0);
                            iVar5 = iVar5 + 1;
                        } while (iVar5 < *(uVar8 + 0x48));
                    }
                    *(uVar8 + 0x80) = arg1_00;
                    arg1_00[0x1e] = piVar1;
                    puVar17 = arg1_00 + 0x1a;
                    *puVar17 = uVar8;
                    arg1_00[0x1b] = "WSA883X";
                    arg1_00[0x1c] = *arg1_00;
                    uVar6 = wcd_irq_init(puVar17,arg1_00 + 0x19);
                    if (uVar6 != 0) {
                        uVar9 = uVar6;
                        pcVar12 = "%s: IRQ init failed: %d\n";
                        piVar11 = arg1_00[1];
                        goto code_r0x08008388;
                    }
                    *(arg1_00[2] + 1000) = arg1_00[0x19];
                    wcd_request_irq(puVar17,0,"WSA SAF2WAR",
                                    sym.wsa883x_saf2war_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1_00);
                    wcd_disable_irq(puVar17,0);
                    wcd_request_irq(puVar17,1,"WSA WAR2SAF",
                                    sym.wsa883x_war2saf_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1_00);
                    wcd_disable_irq(puVar17,1);
                    wcd_request_irq(puVar17,2,"WSA OTP",
                                    sym.wsa883x_otp_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1_00);
                    wcd_disable_irq(puVar17,2);
                    wcd_request_irq(puVar17,3,"WSA OCP",
                                    sym.wsa883x_ocp_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1_00);
                    wcd_disable_irq(puVar17,3);
                    wcd_request_irq(puVar17,4,"WSA CLIP",
                                    sym.wsa883x_clip_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1_00);
                    wcd_disable_irq(puVar17,4);
                    wcd_request_irq(puVar17,5,"WSA PDM WD",
                                    sym.wsa883x_pdm_wd_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1_00);
                    wcd_disable_irq(puVar17,5);
                    wcd_request_irq(puVar17,6,"WSA CLK WD",
                                    sym.wsa883x_clk_wd_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1_00);
                    wcd_disable_irq(puVar17,6);
                    wcd_request_irq(puVar17,7,"WSA EXT INT",
                                    sym.wsa883x_ext_int_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1_00);
                    wcd_disable_irq(puVar17,7);
                    wcd_request_irq(puVar17,8,"WSA UVLO",
                                    sym.wsa883x_uvlo_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1_00);
                    wcd_disable_irq(puVar17,8);
                    wcd_request_irq(puVar17,9,"WSA PA ERR",
                                    sym.wsa883x_pa_on_err_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1_00);
                    wcd_disable_irq(puVar17,9);
                    uVar8 = devm_kmalloc(piVar1,0x160,0xdc0);
                    arg1_00[0x30] = uVar8;
                    if (uVar8 == 0) {
                        uVar9 = 0xfffffff4;
                    }
                    else {
                        memcpy(uVar8,obj.soc_codec_dev_wsa883x_wsa,0x160);
                        uVar8 = devm_kmalloc(piVar1,0xf0,0xdc0);
                        arg1_00[0x2f] = uVar8;
                        if (uVar8 == 0) {
                            uVar9 = 0xfffffff4;
                        }
                        else {
                            memcpy(uVar8,obj.wsa_dai,0xf0);
                            uVar6 = *(uVar7 + 0x3d8) & 0xf;
                            iVar5 = of_device_is_compatible(*(uVar7 + 0x338),0x8001af7);
                            if (iVar5 != 0) {
                                uVar6 = uVar6 + 2;
                            }
                            snprintf(&stack0xffffffffffffff30,0x28,"wsa-codec.%d",uVar6);
                            uVar10 = strlen(&stack0xffffffffffffff30);
                            uVar10 = kstrndup(&stack0xffffffffffffff30,uVar10,0xcc0);
                            *arg1_00[0x30] = uVar10;
                            snprintf(&stack0xffffffffffffff30,0x28,"wsa_rx%d",uVar6);
                            uVar10 = strlen(&stack0xffffffffffffff30);
                            uVar10 = kstrndup(&stack0xffffffffffffff30,uVar10,0xcc0);
                            *arg1_00[0x2f] = uVar10;
                            snprintf(&stack0xffffffffffffff30,0x28,"WSA883X_AIF%d Playback",uVar6);
                            uVar10 = strlen(&stack0xffffffffffffff30);
                            uVar10 = kstrndup(&stack0xffffffffffffff30,uVar10,0xcc0);
                            *(arg1_00[0x2f] + 0xb0) = uVar10;
                            snd_soc_register_component(piVar1,arg1_00[0x30],arg1_00[0x2f],1);
                            iVar13 = snd_soc_lookup_component(piVar1,*arg1_00[0x30]);
                            if (iVar13 != 0) {
                                uVar8 = of_parse_phandle(*(uVar7 + 0x338),"qcom,bolero-handle",0);
                                arg1_00[0x24] = uVar8;
                                if (uVar8 == 0) {
                                    uVar8 = of_parse_phandle(*(uVar7 + 0x338),"qcom,lpass-cdc-handle",0);
                                    arg1_00[0x24] = uVar8;
                                    if (uVar8 != 0) goto code_r0x08008058;
                                    _dev_info(piVar1,"%s: parent node not found\n","wsa883x_swr_probe");
                                }
                                else {
code_r0x08008058:
                                    uVar8 = of_find_device_by_node();
                                    arg1_00[0x25] = uVar8;
                                    if (uVar8 == 0) {
                                        pcVar12 = "%s: parent dev not found\n";
                                    }
                                    else {
                                        puVar16 = *(uVar8 + 0xa0);
                                        if (puVar16 != NULL) {
                                            arg1_00[0x26] =
                                                 sym.wsa883x_event_notify.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt;
                                            pcVar14 = puVar16[2];
                                            if (pcVar14 == NULL) {
                                                uVar8 = 0;
                                            }
                                            else {
                                                __cfi_slowpath_diag(0x3b795baa068bc3a6,pcVar14,0x8001220);
                                                (*pcVar14)(*puVar16,arg1_00 + 0x26,1);
                                                uVar8 = puVar16[2];
                                            }
                                            arg1_00[0x2a] = uVar8;
                                            arg1_00[0x29] = *puVar16;
                                            goto code_r0x0800829c;
                                        }
                                        pcVar12 = "%s: plat data not found\n";
                                    }
                                    _dev_err(piVar1,pcVar12,"wsa883x_swr_probe");
                                }
code_r0x0800829c:
                                __mutex_init(arg1_00 + 0xc,"&wsa883x->res_lock",obj.wsa883x_swr_probe.__key);
                                if (arg1_00[0x1f] == 0) {
                                    iVar13 = *(uVar7 + 0xb8);
                                    if (iVar13 == 0) {
                                        iVar13 = *piVar1;
                                    }
                                    uVar8 = debugfs_create_dir(iVar13,0);
                                    arg1_00[0x1f] = uVar8;
                                    if (uVar8 < 0xfffffffffffff001) {
                                        uVar8 = debugfs_create_file("swrslave_peek",0x8124,uVar8,uVar7,
                                                                    obj.codec_debug_read_ops);
                                        arg1_00[0x20] = uVar8;
                                        uVar8 = debugfs_create_file("swrslave_poke",0x8124,arg1_00[0x1f],uVar7,
                                                                    obj.codec_debug_write_ops);
                                        arg1_00[0x21] = uVar8;
                                        uVar7 = debugfs_create_file("swrslave_reg_dump",0x8124,arg1_00[0x1f],uVar7,
                                                                    obj.codec_debug_dump_ops);
                                        uVar9 = 0;
                                        arg1_00[0x22] = uVar7;
                                        goto code_r0x08008228;
                                    }
                                }
                                uVar9 = 0;
                                goto code_r0x08008228;
                            }
                            _dev_err(piVar1,"%s: component is NULL \n","wsa883x_swr_probe");
                            uVar9 = 0xffffffea;
                            if (arg1_00[0x2f] != NULL) {
                                uVar9 = 0xffffffea;
                                kfree(*arg1_00[0x2f]);
                                kfree(*(arg1_00[0x2f] + 0xb0));
                                kfree(arg1_00[0x2f]);
                            }
                        }
                        if (arg1_00[0x30] != NULL) {
                            kfree(*arg1_00[0x30]);
                            kfree(arg1_00[0x30]);
                        }
                    }
                    wcd_free_irq(puVar17,0,0);
                    wcd_free_irq(puVar17,1,0);
                    wcd_free_irq(puVar17,2,0);
                    wcd_free_irq(puVar17,3,0);
                    wcd_free_irq(puVar17,4,0);
                    wcd_free_irq(puVar17,5,0);
                    wcd_free_irq(puVar17,6,0);
                    wcd_free_irq(puVar17,7,0);
                    wcd_free_irq(puVar17,8,0);
                    wcd_free_irq(puVar17,9,0);
                    wcd_irq_exit(puVar17,arg1_00[0x19]);
                }
                else {
                    pcVar12 = "%s: regmap_init failed %d\n";
                    piVar11 = piVar1;
code_r0x08008388:
                    _dev_err(piVar11,pcVar12,"wsa883x_swr_probe",uVar9 & 0xffffffff);
                }
                if (iVar4 == 0) {
                    sym.wsa883x_gpio_ctrl(arg1_00);
                }
                swr_remove_device(uVar7);
            }
            else {
                uVar9 = 0xfffffdfb;
            }
        }
        msm_cdc_release_supplies(piVar1,arg1_00[0x2d],*puVar16,*puVar2);
    }
    *(uVar7 + 0xe0) = 0;
code_r0x08008228:
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) != iStack_a8) {
        iVar13 = __stack_chk_fail();
        *extraout_x18_00 = sym.wsa883x_swr_remove;
        if ((iVar13 == 0) || (iVar15 = *(iVar13 + 0xe0), iVar15 == 0)) {
            _dev_err(iVar13 + 0x48,"%s: wsa883x is NULL\n","wsa883x_swr_remove");
            uVar7 = 0xffffffea;
        }
        else {
            iVar3 = iVar15 + 0xd0;
            wcd_free_irq(iVar3,0,0);
            wcd_free_irq(iVar3,1,0);
            wcd_free_irq(iVar3,2,0);
            wcd_free_irq(iVar3,3,0);
            wcd_free_irq(iVar3,4,0);
            wcd_free_irq(iVar3,5,0);
            wcd_free_irq(iVar3,6,0);
            wcd_free_irq(iVar3,7,0);
            wcd_free_irq(iVar3,8,0);
            wcd_free_irq(iVar3,9,0);
            pcVar14 = *(iVar15 + 0x150);
            if (pcVar14 != NULL) {
                __cfi_slowpath_diag(0x3b795baa068bc3a6,pcVar14,0x8001240);
                (*pcVar14)(*(iVar15 + 0x148),iVar15 + 0x130,0);
            }
            debugfs_remove(*(iVar15 + 0xf8));
            *(iVar15 + 0xf8) = 0;
            snd_soc_unregister_component(iVar13 + 0x48);
            if (*(iVar15 + 0x178) != NULL) {
                kfree(**(iVar15 + 0x178));
                kfree(*(*(iVar15 + 0x178) + 0xb0));
                kfree(*(iVar15 + 0x178));
            }
            if (*(iVar15 + 0x180) != NULL) {
                kfree(**(iVar15 + 0x180));
                kfree(*(iVar15 + 0x180));
            }
            msm_cdc_release_supplies(iVar13 + 0x48,*(iVar15 + 0x168),*(iVar15 + 0x158),*(iVar15 + 0x160));
            uVar7 = 0;
            *(iVar13 + 0xe0) = 0;
        }
        return uVar7;
    }
    return uVar9 & 0xffffffff;
}


// ===== sym.wsa883x_swr_probe @ 0x08007b20 (size 2280) =====

uint64_t sym.wsa883x_swr_probe(int64_t arg1)

{
    int64_t *piVar1;
    uint64_t *puVar2;
    int64_t iVar3;
    int iVar4;
    int iVar5;
    uint32_t uVar6;
    uint64_t *arg1_00;
    uint64_t uVar7;
    uint64_t uVar8;
    ulong uVar9;
    int64_t *piVar10;
    int64_t iVar11;
    char *pcVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar13;
    int64_t iVar14;
    uint64_t *puVar15;
    uint64_t *puVar16;
    ulong unaff_x30;
    uchar auStack_94 [4];
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    piVar1 = arg1 + 0x48;
    iStack_68 = *(iVar11 + 0x5e0);
    auStack_94[0] = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_90 = 0;
    arg1_00 = devm_kmalloc(piVar1,0x188,0xdc0);
    if ((arg1_00 == NULL) || (uVar7 = devm_kmalloc(piVar1,0x88,0xdc0), uVar7 == 0)) {
        uVar8 = 0xfffffff4;
        goto code_r0x08008228;
    }
    memcpy(uVar7,obj.wsa883x_regmap_irq_chip,0x88);
    puVar15 = arg1_00 + 0x2b;
    puVar2 = arg1_00 + 0x2c;
    msm_cdc_get_power_supplies(piVar1,puVar15,puVar2);
    if ((arg1_00[0x2b] == 0) || (*puVar2 < 1)) {
        pcVar12 = "%s: no power supplies defined\n";
code_r0x080080fc:
        _dev_err(piVar1,pcVar12,"wsa883x_enable_supplies");
code_r0x0800810c:
        uVar8 = 0xfffffdfb;
    }
    else {
        iVar4 = msm_cdc_init_supplies(piVar1,arg1_00 + 0x2d);
        if (arg1_00[0x2d] == 0) {
            _dev_err(piVar1,"%s: Cannot init wsa supplies\n","wsa883x_enable_supplies");
            if (iVar4 != 0) goto code_r0x0800810c;
        }
        else {
            iVar4 = msm_cdc_enable_static_supplies(piVar1,arg1_00[0x2d],*puVar15,*puVar2);
            if (iVar4 != 0) {
                pcVar12 = "%s: wsa static supply enable failed!\n";
                goto code_r0x080080fc;
            }
        }
        uVar8 = of_parse_phandle(*(arg1 + 0x338),"qcom,spkr-sd-n-node",0);
        arg1_00[0x15] = uVar8;
        if (uVar8 == 0) {
            uVar8 = 0;
        }
        else {
            *(arg1 + 0xe0) = arg1_00;
            arg1_00[1] = piVar1;
            arg1_00[2] = arg1;
            iVar4 = msm_cdc_pinctrl_get_state();
            iVar5 = msm_cdc_pinctrl_select_active_state(arg1_00[0x15]);
            if (iVar5 != 0) {
                _dev_err(arg1_00[1],"%s: Failed to turn state %d; ret=%d\n","wsa883x_gpio_ctrl",1,iVar5);
            }
            usleep_range_state(5000,0x1392,2);
            iVar5 = swr_get_logical_dev_num(arg1,*(arg1 + 0x3d8),auStack_94);
            if (iVar5 == 0) {
                *(arg1 + 0x40) = auStack_94[0];
                uVar8 = __devm_regmap_init_swr(arg1,obj.wsa883x_regmap_config,0,0);
                *arg1_00 = uVar8;
                if (uVar8 < 0xfffffffffffff001) {
                    devm_regmap_qti_debugfs_register(piVar1,uVar8);
                    if (0 < *(uVar7 + 0x48)) {
                        iVar5 = 0;
                        do {
                            regmap_write(*arg1_00,iVar5 + 0x3487,0);
                            iVar5 = iVar5 + 1;
                        } while (iVar5 < *(uVar7 + 0x48));
                    }
                    *(uVar7 + 0x80) = arg1_00;
                    arg1_00[0x1e] = piVar1;
                    puVar16 = arg1_00 + 0x1a;
                    *puVar16 = uVar7;
                    arg1_00[0x1b] = "WSA883X";
                    arg1_00[0x1c] = *arg1_00;
                    uVar6 = wcd_irq_init(puVar16,arg1_00 + 0x19);
                    if (uVar6 != 0) {
                        uVar8 = uVar6;
                        pcVar12 = "%s: IRQ init failed: %d\n";
                        piVar10 = arg1_00[1];
                        goto code_r0x08008388;
                    }
                    *(arg1_00[2] + 1000) = arg1_00[0x19];
                    wcd_request_irq(puVar16,0,"WSA SAF2WAR",
                                    sym.wsa883x_saf2war_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1_00);
                    wcd_disable_irq(puVar16,0);
                    wcd_request_irq(puVar16,1,"WSA WAR2SAF",
                                    sym.wsa883x_war2saf_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1_00);
                    wcd_disable_irq(puVar16,1);
                    wcd_request_irq(puVar16,2,"WSA OTP",
                                    sym.wsa883x_otp_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1_00);
                    wcd_disable_irq(puVar16,2);
                    wcd_request_irq(puVar16,3,"WSA OCP",
                                    sym.wsa883x_ocp_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1_00);
                    wcd_disable_irq(puVar16,3);
                    wcd_request_irq(puVar16,4,"WSA CLIP",
                                    sym.wsa883x_clip_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1_00);
                    wcd_disable_irq(puVar16,4);
                    wcd_request_irq(puVar16,5,"WSA PDM WD",
                                    sym.wsa883x_pdm_wd_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1_00);
                    wcd_disable_irq(puVar16,5);
                    wcd_request_irq(puVar16,6,"WSA CLK WD",
                                    sym.wsa883x_clk_wd_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1_00);
                    wcd_disable_irq(puVar16,6);
                    wcd_request_irq(puVar16,7,"WSA EXT INT",
                                    sym.wsa883x_ext_int_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1_00);
                    wcd_disable_irq(puVar16,7);
                    wcd_request_irq(puVar16,8,"WSA UVLO",
                                    sym.wsa883x_uvlo_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1_00);
                    wcd_disable_irq(puVar16,8);
                    wcd_request_irq(puVar16,9,"WSA PA ERR",
                                    sym.wsa883x_pa_on_err_handle_irq.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt,arg1_00);
                    wcd_disable_irq(puVar16,9);
                    uVar7 = devm_kmalloc(piVar1,0x160,0xdc0);
                    arg1_00[0x30] = uVar7;
                    if (uVar7 == 0) {
                        uVar8 = 0xfffffff4;
                    }
                    else {
                        memcpy(uVar7,obj.soc_codec_dev_wsa883x_wsa,0x160);
                        uVar7 = devm_kmalloc(piVar1,0xf0,0xdc0);
                        arg1_00[0x2f] = uVar7;
                        if (uVar7 == 0) {
                            uVar8 = 0xfffffff4;
                        }
                        else {
                            memcpy(uVar7,obj.wsa_dai,0xf0);
                            uVar6 = *(arg1 + 0x3d8) & 0xf;
                            iVar5 = of_device_is_compatible(*(arg1 + 0x338),0x8001af7);
                            if (iVar5 != 0) {
                                uVar6 = uVar6 + 2;
                            }
                            snprintf(&uStack_90,0x28,"wsa-codec.%d",uVar6);
                            uVar9 = strlen(&uStack_90);
                            uVar9 = kstrndup(&uStack_90,uVar9,0xcc0);
                            *arg1_00[0x30] = uVar9;
                            snprintf(&uStack_90,0x28,"wsa_rx%d",uVar6);
                            uVar9 = strlen(&uStack_90);
                            uVar9 = kstrndup(&uStack_90,uVar9,0xcc0);
                            *arg1_00[0x2f] = uVar9;
                            snprintf(&uStack_90,0x28,"WSA883X_AIF%d Playback",uVar6);
                            uVar9 = strlen(&uStack_90);
                            uVar9 = kstrndup(&uStack_90,uVar9,0xcc0);
                            *(arg1_00[0x2f] + 0xb0) = uVar9;
                            snd_soc_register_component(piVar1,arg1_00[0x30],arg1_00[0x2f],1);
                            iVar11 = snd_soc_lookup_component(piVar1,*arg1_00[0x30]);
                            if (iVar11 != 0) {
                                uVar7 = of_parse_phandle(*(arg1 + 0x338),"qcom,bolero-handle",0);
                                arg1_00[0x24] = uVar7;
                                if (uVar7 == 0) {
                                    uVar7 = of_parse_phandle(*(arg1 + 0x338),"qcom,lpass-cdc-handle",0);
                                    arg1_00[0x24] = uVar7;
                                    if (uVar7 != 0) goto code_r0x08008058;
                                    _dev_info(piVar1,"%s: parent node not found\n","wsa883x_swr_probe");
                                }
                                else {
code_r0x08008058:
                                    uVar7 = of_find_device_by_node();
                                    arg1_00[0x25] = uVar7;
                                    if (uVar7 == 0) {
                                        pcVar12 = "%s: parent dev not found\n";
                                    }
                                    else {
                                        puVar15 = *(uVar7 + 0xa0);
                                        if (puVar15 != NULL) {
                                            arg1_00[0x26] =
                                                 sym.wsa883x_event_notify.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt;
                                            pcVar13 = puVar15[2];
                                            if (pcVar13 == NULL) {
                                                uVar7 = 0;
                                            }
                                            else {
                                                __cfi_slowpath_diag(0x3b795baa068bc3a6,pcVar13,0x8001220);
                                                (*pcVar13)(*puVar15,arg1_00 + 0x26,1);
                                                uVar7 = puVar15[2];
                                            }
                                            arg1_00[0x2a] = uVar7;
                                            arg1_00[0x29] = *puVar15;
                                            goto code_r0x0800829c;
                                        }
                                        pcVar12 = "%s: plat data not found\n";
                                    }
                                    _dev_err(piVar1,pcVar12,"wsa883x_swr_probe");
                                }
code_r0x0800829c:
                                __mutex_init(arg1_00 + 0xc,"&wsa883x->res_lock",obj.wsa883x_swr_probe.__key);
                                if (arg1_00[0x1f] == 0) {
                                    iVar11 = *(arg1 + 0xb8);
                                    if (iVar11 == 0) {
                                        iVar11 = *piVar1;
                                    }
                                    uVar7 = debugfs_create_dir(iVar11,0);
                                    arg1_00[0x1f] = uVar7;
                                    if (uVar7 < 0xfffffffffffff001) {
                                        uVar7 = debugfs_create_file("swrslave_peek",0x8124,uVar7,arg1,
                                                                    obj.codec_debug_read_ops);
                                        arg1_00[0x20] = uVar7;
                                        uVar7 = debugfs_create_file("swrslave_poke",0x8124,arg1_00[0x1f],arg1,
                                                                    obj.codec_debug_write_ops);
                                        arg1_00[0x21] = uVar7;
                                        uVar7 = debugfs_create_file("swrslave_reg_dump",0x8124,arg1_00[0x1f],arg1,
                                                                    obj.codec_debug_dump_ops);
                                        uVar8 = 0;
                                        arg1_00[0x22] = uVar7;
                                        goto code_r0x08008228;
                                    }
                                }
                                uVar8 = 0;
                                goto code_r0x08008228;
                            }
                            _dev_err(piVar1,"%s: component is NULL \n","wsa883x_swr_probe");
                            uVar8 = 0xffffffea;
                            if (arg1_00[0x2f] != NULL) {
                                uVar8 = 0xffffffea;
                                kfree(*arg1_00[0x2f]);
                                kfree(*(arg1_00[0x2f] + 0xb0));
                                kfree(arg1_00[0x2f]);
                            }
                        }
                        if (arg1_00[0x30] != NULL) {
                            kfree(*arg1_00[0x30]);
                            kfree(arg1_00[0x30]);
                        }
                    }
                    wcd_free_irq(puVar16,0,0);
                    wcd_free_irq(puVar16,1,0);
                    wcd_free_irq(puVar16,2,0);
                    wcd_free_irq(puVar16,3,0);
                    wcd_free_irq(puVar16,4,0);
                    wcd_free_irq(puVar16,5,0);
                    wcd_free_irq(puVar16,6,0);
                    wcd_free_irq(puVar16,7,0);
                    wcd_free_irq(puVar16,8,0);
                    wcd_free_irq(puVar16,9,0);
                    wcd_irq_exit(puVar16,arg1_00[0x19]);
                }
                else {
                    pcVar12 = "%s: regmap_init failed %d\n";
                    piVar10 = piVar1;
code_r0x08008388:
                    _dev_err(piVar10,pcVar12,"wsa883x_swr_probe",uVar8 & 0xffffffff);
                }
                if (iVar4 == 0) {
                    sym.wsa883x_gpio_ctrl(arg1_00);
                }
                swr_remove_device(arg1);
            }
            else {
                uVar8 = 0xfffffdfb;
            }
        }
        msm_cdc_release_supplies(piVar1,arg1_00[0x2d],*puVar15,*puVar2);
    }
    *(arg1 + 0xe0) = 0;
code_r0x08008228:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) != iStack_68) {
        iVar11 = __stack_chk_fail();
        *extraout_x18 = sym.wsa883x_swr_remove;
        if ((iVar11 == 0) || (iVar14 = *(iVar11 + 0xe0), iVar14 == 0)) {
            _dev_err(iVar11 + 0x48,"%s: wsa883x is NULL\n","wsa883x_swr_remove");
            uVar7 = 0xffffffea;
        }
        else {
            iVar3 = iVar14 + 0xd0;
            wcd_free_irq(iVar3,0,0);
            wcd_free_irq(iVar3,1,0);
            wcd_free_irq(iVar3,2,0);
            wcd_free_irq(iVar3,3,0);
            wcd_free_irq(iVar3,4,0);
            wcd_free_irq(iVar3,5,0);
            wcd_free_irq(iVar3,6,0);
            wcd_free_irq(iVar3,7,0);
            wcd_free_irq(iVar3,8,0);
            wcd_free_irq(iVar3,9,0);
            pcVar13 = *(iVar14 + 0x150);
            if (pcVar13 != NULL) {
                __cfi_slowpath_diag(0x3b795baa068bc3a6,pcVar13,0x8001240);
                (*pcVar13)(*(iVar14 + 0x148),iVar14 + 0x130,0);
            }
            debugfs_remove(*(iVar14 + 0xf8));
            *(iVar14 + 0xf8) = 0;
            snd_soc_unregister_component(iVar11 + 0x48);
            if (*(iVar14 + 0x178) != NULL) {
                kfree(**(iVar14 + 0x178));
                kfree(*(*(iVar14 + 0x178) + 0xb0));
                kfree(*(iVar14 + 0x178));
            }
            if (*(iVar14 + 0x180) != NULL) {
                kfree(**(iVar14 + 0x180));
                kfree(*(iVar14 + 0x180));
            }
            msm_cdc_release_supplies(iVar11 + 0x48,*(iVar14 + 0x168),*(iVar14 + 0x158),*(iVar14 + 0x160));
            uVar7 = 0;
            *(iVar11 + 0xe0) = 0;
        }
        return uVar7;
    }
    return uVar8 & 0xffffffff;
}


// ===== sym.wsa883x_swr_remove @ 0x08008408 (size 428) =====

ulong sym.wsa883x_swr_remove(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    code *pcVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (iVar4 = *(arg1 + 0xe0), iVar4 == 0)) {
        _dev_err(arg1 + 0x48,"%s: wsa883x is NULL\n","wsa883x_swr_remove");
        uVar2 = 0xffffffea;
    }
    else {
        iVar1 = iVar4 + 0xd0;
        wcd_free_irq(iVar1,0,0);
        wcd_free_irq(iVar1,1,0);
        wcd_free_irq(iVar1,2,0);
        wcd_free_irq(iVar1,3,0);
        wcd_free_irq(iVar1,4,0);
        wcd_free_irq(iVar1,5,0);
        wcd_free_irq(iVar1,6,0);
        wcd_free_irq(iVar1,7,0);
        wcd_free_irq(iVar1,8,0);
        wcd_free_irq(iVar1,9,0);
        pcVar3 = *(iVar4 + 0x150);
        if (pcVar3 != NULL) {
            __cfi_slowpath_diag(0x3b795baa068bc3a6,pcVar3,0x8001240);
            (*pcVar3)(*(iVar4 + 0x148),iVar4 + 0x130,0);
        }
        debugfs_remove(*(iVar4 + 0xf8));
        *(iVar4 + 0xf8) = 0;
        snd_soc_unregister_component(arg1 + 0x48);
        if (*(iVar4 + 0x178) != NULL) {
            kfree(**(iVar4 + 0x178));
            kfree(*(*(iVar4 + 0x178) + 0xb0));
            kfree(*(iVar4 + 0x178));
        }
        if (*(iVar4 + 0x180) != NULL) {
            kfree(**(iVar4 + 0x180));
            kfree(*(iVar4 + 0x180));
        }
        msm_cdc_release_supplies(arg1 + 0x48,*(iVar4 + 0x168),*(iVar4 + 0x158),*(iVar4 + 0x160));
        uVar2 = 0;
        *(arg1 + 0xe0) = 0;
    }
    return uVar2;
}


// ===== sym.wsa883x_gpio_ctrl @ 0x080085b4 (size 92) =====

void sym.wsa883x_gpio_ctrl(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = msm_cdc_pinctrl_select_sleep_state(*(arg1 + 0xa8));
    if (iVar1 != 0) {
        _dev_err(*(arg1 + 8),"%s: Failed to turn state %d; ret=%d\n","wsa883x_gpio_ctrl",0,iVar1);
    }
    return;
}


// ===== sym.wsa883x_saf2war_handle_irq @ 0x08008610 (size 100) =====

ulong sym.wsa883x_saf2war_handle_irq(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = ___ratelimit(obj.wsa883x_saf2war_handle_irq._rs,"wsa883x_saf2war_handle_irq");
    if (iVar1 != 0) {
        _printk(0x80018e5,"wsa883x_saf2war_handle_irq",arg1 & 0xffffffff);
    }
    return 1;
}


// ===== sym.wsa883x_war2saf_handle_irq @ 0x08008674 (size 100) =====

ulong sym.wsa883x_war2saf_handle_irq(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = ___ratelimit(obj.wsa883x_war2saf_handle_irq._rs,"wsa883x_war2saf_handle_irq");
    if (iVar1 != 0) {
        _printk(0x80018e5,"wsa883x_war2saf_handle_irq",arg1 & 0xffffffff);
    }
    return 1;
}


// ===== sym.wsa883x_otp_handle_irq @ 0x080086d8 (size 100) =====

ulong sym.wsa883x_otp_handle_irq(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = ___ratelimit(obj.wsa883x_otp_handle_irq._rs,"wsa883x_otp_handle_irq");
    if (iVar1 != 0) {
        _printk(0x80018e5,"wsa883x_otp_handle_irq",arg1 & 0xffffffff);
    }
    return 1;
}


// ===== sym.wsa883x_ocp_handle_irq @ 0x0800873c (size 100) =====

ulong sym.wsa883x_ocp_handle_irq(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = ___ratelimit(obj.wsa883x_ocp_handle_irq._rs,"wsa883x_ocp_handle_irq");
    if (iVar1 != 0) {
        _printk(0x80018e5,"wsa883x_ocp_handle_irq",arg1 & 0xffffffff);
    }
    return 1;
}


// ===== sym.wsa883x_clip_handle_irq @ 0x080087a0 (size 100) =====

ulong sym.wsa883x_clip_handle_irq(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = ___ratelimit(obj.wsa883x_clip_handle_irq._rs,"wsa883x_clip_handle_irq");
    if (iVar1 != 0) {
        _printk(0x80018e5,"wsa883x_clip_handle_irq",arg1 & 0xffffffff);
    }
    return 1;
}


// ===== sym.wsa883x_pdm_wd_handle_irq @ 0x08008804 (size 100) =====

ulong sym.wsa883x_pdm_wd_handle_irq(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = ___ratelimit(obj.wsa883x_pdm_wd_handle_irq._rs,"wsa883x_pdm_wd_handle_irq");
    if (iVar1 != 0) {
        _printk(0x80018e5,"wsa883x_pdm_wd_handle_irq",arg1 & 0xffffffff);
    }
    return 1;
}


// ===== sym.wsa883x_clk_wd_handle_irq @ 0x08008868 (size 100) =====

ulong sym.wsa883x_clk_wd_handle_irq(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = ___ratelimit(obj.wsa883x_clk_wd_handle_irq._rs,"wsa883x_clk_wd_handle_irq");
    if (iVar1 != 0) {
        _printk(0x80018e5,"wsa883x_clk_wd_handle_irq",arg1 & 0xffffffff);
    }
    return 1;
}


// ===== sym.wsa883x_ext_int_handle_irq @ 0x080088cc (size 100) =====

ulong sym.wsa883x_ext_int_handle_irq(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = ___ratelimit(obj.wsa883x_ext_int_handle_irq._rs,"wsa883x_ext_int_handle_irq");
    if (iVar1 != 0) {
        _printk(0x80018e5,"wsa883x_ext_int_handle_irq",arg1 & 0xffffffff);
    }
    return 1;
}


// ===== sym.wsa883x_uvlo_handle_irq @ 0x08008930 (size 100) =====

ulong sym.wsa883x_uvlo_handle_irq(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = ___ratelimit(obj.wsa883x_uvlo_handle_irq._rs,"wsa883x_uvlo_handle_irq");
    if (iVar1 != 0) {
        _printk(0x80018e5,"wsa883x_uvlo_handle_irq",arg1 & 0xffffffff);
    }
    return 1;
}


// ===== sym.wsa883x_pa_on_err_handle_irq @ 0x08008994 (size 212) =====

ulong sym.wsa883x_pa_on_err_handle_irq(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint64_t uVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg2 == 0) || (iVar4 = *(arg2 + 0x18), iVar4 == 0)) {
        uVar3 = 0;
    }
    else {
        uVar2 = snd_soc_component_read(iVar4,0x3413);
        if ((uVar2 & 0x70) != 0) {
            snd_soc_component_read(iVar4,0x3414);
        }
        iVar1 = ___ratelimit(obj.wsa883x_pa_on_err_handle_irq._rs,"wsa883x_pa_on_err_handle_irq");
        if (iVar1 != 0) {
            _printk(0x80018e5,"wsa883x_pa_on_err_handle_irq",arg1 & 0xffffffff);
        }
        snd_soc_component_update_bits(iVar4,0x3410,0x10,0);
        snd_soc_component_update_bits(iVar4,0x3410,0x10,0x10);
        snd_soc_component_update_bits(iVar4,0x3410,0x10,0);
        uVar3 = 1;
    }
    return uVar3;
}


// ===== sym.wsa883x_event_notify @ 0x08008a68 (size 804) =====

void sym.wsa883x_event_notify(int64_t arg1,int64_t arg2)

{
    char cVar1;
    bool bVar2;
    uint32_t uVar3;
    ulong *puVar4;
    int iVar5;
    uint64_t uVar6;
    uint64_t *extraout_x8;
    uint64_t *puVar7;
    ulong *in_x18;
    int64_t iVar8;
    ulong unaff_x30;
    uchar auStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_38 = *(iVar8 + 0x5e0);
    puVar4 = arg1 + -0x130;
    if (puVar4 == NULL) {
        uVar6 = 0xffffffea;
        goto code_r0x08008cf8;
    }
    uVar6 = 0;
    uVar3 = (arg2 & 0xffff) - 2;
    if (4 < uVar3) goto code_r0x08008cf8;
    //switch table (4 cases) at 0x8001268
    switch(*(uVar3 * 4 + 0x8001268) + 0x8008ab4) {
    case 0x8008ac8:
        if ((*(arg1 + 0x40) & 1) != 0) {
            snd_soc_component_update_bits(*(arg1 + -0x118),0x3410,1,0);
        }
        uVar6 = msm_cdc_pinctrl_select_sleep_state(*(arg1 + -0x88));
        if (uVar6 == 0) goto code_r0x08008cf8;
        _dev_err(*(arg1 + -0x128),"%s: Failed to turn state %d; ret=%d\n","wsa883x_gpio_ctrl",0,uVar6 & 0xffffffff);
        _dev_err(*(arg1 + -0x128),"%s: Failed to disable gpio\n","wsa883x_swr_down");
        break;
    case 0x8008b38:
        if ((*(arg1 + 0x40) & 1) != 0) {
            snd_soc_component_update_bits(*(arg1 + -0x118),0x344b,1,1);
            snd_soc_component_update_bits(*(arg1 + -0x118),0x3410,1,1);
            wcd_enable_irq(arg1 + -0x60,5);
            usleep_range_state(3000,0xc1c,2);
            if (*(arg1 + -0x110) != '\0') {
                snd_soc_component_update_bits(*(arg1 + -0x118),0x346d,1,0);
                usleep_range_state(5000,0x13ba,2);
            }
        }
        break;
    case 0x8008bb8:
        iVar5 = msm_cdc_pinctrl_select_active_state(*(arg1 + -0x88));
        if (iVar5 != 0) {
            _dev_err(*(arg1 + -0x128),"%s: Failed to turn state %d; ret=%d\n","wsa883x_gpio_ctrl",1,iVar5);
            _dev_err(*(arg1 + -0x128),"%s: Failed to enable gpio\n","wsa883x_swr_up");
        }
        usleep_range_state(20000,0x4e2a,2);
        iVar8 = *(arg1 + -0x120);
        auStack_3c[0] = 0;
        iVar5 = swr_get_logical_dev_num(iVar8,*(iVar8 + 0x3d8),&stack0xffffffffffffffc4);
        if (iVar5 != 0) {
            usleep_range_state(1000,0x44c,2);
            iVar5 = swr_get_logical_dev_num(iVar8,*(iVar8 + 0x3d8),&stack0xffffffffffffffc4);
            if (iVar5 != 0) {
                usleep_range_state(1000,0x44c,2);
                iVar5 = swr_get_logical_dev_num(iVar8,*(iVar8 + 0x3d8),&stack0xffffffffffffffc4);
                if (iVar5 != 0) {
                    usleep_range_state(1000,0x44c,2);
                    iVar5 = swr_get_logical_dev_num(iVar8,*(iVar8 + 0x3d8),&stack0xffffffffffffffc4);
                    if (iVar5 != 0) {
                        usleep_range_state(1000,0x44c,2);
                        iVar5 = swr_get_logical_dev_num(iVar8,*(iVar8 + 0x3d8),&stack0xffffffffffffffc4);
                        if (iVar5 != 0) {
                            usleep_range_state(1000,0x44c,2);
                            swr_get_logical_dev_num(iVar8,*(iVar8 + 0x3d8),&stack0xffffffffffffffc4);
                        }
                    }
                }
            }
        }
        *(iVar8 + 0x40) = auStack_3c[0];
        mutex_lock(arg1 + -0xd0);
        regcache_mark_dirty(*puVar4);
        regcache_sync(*puVar4);
        mutex_unlock(arg1 + -0xd0);
        break;
    case 0x8008cd4:
        if ((*(arg1 + 0x40) & 1) != 0) {
            puVar7 = arg1 + 0x40;
            goto code_r0x08008d6c;
        }
        break;
    case 0x8008cf8:
        goto code_r0x08008cf8;
    }
    while( true ) {
        uVar6 = 0;
code_r0x08008cf8:
        iVar8 = sp_el0;
        if (*(iVar8 + 0x5e0) == iStack_38) break;
        __stack_chk_fail(uVar6);
        puVar7 = extraout_x8;
code_r0x08008d6c:
        Hint_Prefetch(puVar7,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(puVar7,0x10);
            if (bVar2) {
                *puVar7 = *puVar7 | 4;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
    }
    return;
}


// ===== sym.wsa883x_handle_post_irq @ 0x08008d8c (size 152) =====

int64_t sym.wsa883x_handle_post_irq(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *puVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong unaff_x30;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_30 = 0;
    regmap_read(*arg1,0x3483,&uStack_30 + 4);
    regmap_read(*arg1,0x3484,&uStack_30);
    *(*(arg1 + 0x10) + 0x3f0) = uStack_30._4_4_ != 0 || uStack_30 != 0;
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return 1;
    }
    iVar2 = __stack_chk_fail();
    *extraout_x18 = sym.wsa883x_codec_probe;
    pcStack_68 = sym.wsa883x_codec_probe;
    iVar3 = sp_el0;
    iStack_78 = *(iVar3 + 0x5e0);
    puVar4 = *(*(iVar2 + 0x18) + 0x98);
    puStack_70 = &stack0xffffffffffffffe0;
    if ((puVar4 == NULL) || (*(iVar2 + 0x10) == 0)) {
        iVar3 = 0xffffffea;
    }
    else {
        iVar3 = iVar2 + 0xd0;
        snd_soc_component_init_regmap(iVar2,*puVar4);
        puVar4[3] = iVar2;
        uVar1 = snd_soc_component_read(iVar2,0x3580);
        *(puVar4 + 0x17) = uVar1 & 0xf;
        uVar1 = snd_soc_component_read(iVar2,0x3401);
        *(puVar4 + 0x5c) = 2;
        *(puVar4 + 0xbc) = uVar1 & 0xff;
        iVar5 = *(*(iVar2 + 0x18) + 0x98);
        if (iVar5 != 0) {
            iVar6 = 0;
            do {
                snd_soc_component_update_bits
                          (iVar2,*(obj.reg_init + iVar6),*(iVar6 + 0x8002fc2),*(iVar6 + 0x8002fc3));
                iVar6 = iVar6 + 4;
            } while (iVar6 != 200);
            if ((*(iVar5 + 0xb8) | 2) == 2) {
                snd_soc_component_update_bits(iVar2,0x346c,7,3);
                *(iVar5 + 0x5c) = 3;
            }
        }
        *(puVar4 + 0x54) = 0;
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_88 = 0;
        uStack_80 = 0;
        strlcpy(&uStack_a0,*(puVar4[0x2f] + 0xb0),0x28);
        snd_soc_dapm_ignore_suspend(iVar3,&uStack_a0);
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_88 = 0;
        uStack_80 = 0;
        strlcpy(&uStack_a0,0x80017fe,0x28);
        snd_soc_dapm_ignore_suspend(iVar3,&uStack_a0);
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_88 = 0;
        uStack_80 = 0;
        strlcpy(&uStack_a0,"SWR DAC_Port",0x28);
        snd_soc_dapm_ignore_suspend(iVar3,&uStack_a0);
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_88 = 0;
        uStack_80 = 0;
        strlcpy(&uStack_a0,"SPKR",0x28);
        snd_soc_dapm_ignore_suspend(iVar3,&uStack_a0);
        snd_soc_dapm_sync(iVar3);
        iVar3 = 0;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_78) {
        return iVar3;
    }
    iVar3 = __stack_chk_fail(iVar3);
    *extraout_x18_00 = sym.wsa883x_codec_remove;
    if (*(*(iVar3 + 0x18) + 0x98) != 0) {
        iVar3 = snd_soc_component_exit_regmap();
    }
    return iVar3;
}


// ===== sym.wsa883x_codec_probe @ 0x08008e24 (size 496) =====

void sym.wsa883x_codec_probe(int64_t arg1)

{
    uint32_t uVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong unaff_x30;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_48 = *(iVar3 + 0x5e0);
    puVar4 = *(*(arg1 + 0x18) + 0x98);
    if ((puVar4 == NULL) || (*(arg1 + 0x10) == 0)) {
        uVar2 = 0xffffffea;
    }
    else {
        iVar3 = arg1 + 0xd0;
        snd_soc_component_init_regmap(arg1,*puVar4);
        puVar4[3] = arg1;
        uVar1 = snd_soc_component_read(arg1,0x3580);
        *(puVar4 + 0x17) = uVar1 & 0xf;
        uVar1 = snd_soc_component_read(arg1,0x3401);
        *(puVar4 + 0x5c) = 2;
        *(puVar4 + 0xbc) = uVar1 & 0xff;
        iVar5 = *(*(arg1 + 0x18) + 0x98);
        if (iVar5 != 0) {
            iVar6 = 0;
            do {
                snd_soc_component_update_bits(arg1,*(obj.reg_init + iVar6),*(iVar6 + 0x8002fc2),*(iVar6 + 0x8002fc3))
                ;
                iVar6 = iVar6 + 4;
            } while (iVar6 != 200);
            if ((*(iVar5 + 0xb8) | 2) == 2) {
                snd_soc_component_update_bits(arg1,0x346c,7,3);
                *(iVar5 + 0x5c) = 3;
            }
        }
        *(puVar4 + 0x54) = 0;
        uStack_70 = 0;
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
        strlcpy(&uStack_70,*(puVar4[0x2f] + 0xb0),0x28);
        snd_soc_dapm_ignore_suspend(iVar3,&uStack_70);
        uStack_70 = 0;
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
        strlcpy(&uStack_70,0x80017fe,0x28);
        snd_soc_dapm_ignore_suspend(iVar3,&uStack_70);
        uStack_70 = 0;
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
        strlcpy(&uStack_70,"SWR DAC_Port",0x28);
        snd_soc_dapm_ignore_suspend(iVar3,&uStack_70);
        uStack_70 = 0;
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
        strlcpy(&uStack_70,"SPKR",0x28);
        snd_soc_dapm_ignore_suspend(iVar3,&uStack_70);
        snd_soc_dapm_sync(iVar3);
        uVar2 = 0;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_48) {
        return;
    }
    iVar3 = __stack_chk_fail(uVar2);
    *extraout_x18 = sym.wsa883x_codec_remove;
    if (*(*(iVar3 + 0x18) + 0x98) != 0) {
        snd_soc_component_exit_regmap();
    }
    return;
}


// ===== sym.wsa883x_codec_remove @ 0x08009014 (size 48) =====

void sym.wsa883x_codec_remove(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(*(arg1 + 0x18) + 0x98) != 0) {
        snd_soc_component_exit_regmap();
    }
    return;
}


// ===== sym.wsa883x_soc_codec_suspend @ 0x08009044 (size 36) =====

ulong sym.wsa883x_soc_codec_suspend(int64_t arg1)

{
    int64_t iVar1;
    
    iVar1 = *(*(arg1 + 0x18) + 0x98);
    if (iVar1 != 0) {
        *(iVar1 + 0x23) = 1;
    }
    return 0;
}


// ===== sym.wsa883x_soc_codec_resume @ 0x08009068 (size 32) =====

ulong sym.wsa883x_soc_codec_resume(int64_t arg1)

{
    int64_t iVar1;
    
    iVar1 = *(*(arg1 + 0x18) + 0x98);
    if (iVar1 != 0) {
        *(iVar1 + 0x23) = 0;
    }
    return 0;
}


// ===== sym.wsa_pa_gain_get @ 0x08009088 (size 36) =====

ulong sym.wsa_pa_gain_get(int64_t arg1,int64_t arg2)

{
    *(arg2 + 0x48) = *(*(*(*(arg1 + 0x80) + 0x18) + 0x98) + 0xc0);
    return 0;
}


// ===== sym.wsa_pa_gain_put @ 0x080090ac (size 80) =====

ulong sym.wsa_pa_gain_put(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x80);
    iVar3 = *(*(iVar1 + 0x18) + 0x98);
    uVar2 = *(arg2 + 0x48);
    *(iVar3 + 0xc0) = uVar2;
    if (*(iVar3 + 0x20) == '\0') {
        snd_soc_component_update_bits(iVar1,0x346d,0x3e,(uVar2 & 0xff) << 1);
    }
    return 0;
}


// ===== sym.wsa883x_get_mute @ 0x080090fc (size 36) =====

ulong sym.wsa883x_get_mute(int64_t arg1,int64_t arg2)

{
    *(arg2 + 0x48) = *(*(*(*(arg1 + 0x80) + 0x18) + 0x98) + 0xb0);
    return 0;
}


// ===== sym.wsa883x_set_mute @ 0x08009120 (size 36) =====

ulong sym.wsa883x_set_mute(int64_t arg1,int64_t arg2)

{
    *(*(*(*(arg1 + 0x80) + 0x18) + 0x98) + 0xb0) = *(arg2 + 0x48);
    return 0;
}


// ===== sym.wsa_get_temp @ 0x08009144 (size 748) =====

ulong sym.wsa_get_temp(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    int iVar8;
    int64_t iVar9;
    int64_t iVar10;
    ulong *in_x18;
    int64_t iVar11;
    char cVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar11 = *(arg1 + 0x80);
    iVar10 = *(*(iVar11 + 0x18) + 0x98);
    if ((*(iVar10 + 0x170) & 1) == 0) {
        if (iVar10 == 0) {
            iVar8 = 0;
        }
        else {
            cVar12 = '\x03';
            iVar9 = iVar10;
            do {
                mutex_lock(iVar9 + 0x60);
                snd_soc_component_update_bits(iVar11,0x3416,1,1);
                snd_soc_component_update_bits(iVar11,0x3416,4,4);
                snd_soc_component_update_bits(iVar11,0x3416,2,2);
                snd_soc_component_update_bits(iVar11,0x3416,0x80,0x80);
                snd_soc_component_update_bits(iVar11,0x3416,0x20,0x20);
                snd_soc_component_update_bits(iVar11,0x3416,0x40,0x40);
                snd_soc_component_update_bits(iVar11,0x3420,1,0);
                uVar4 = snd_soc_component_read(iVar11,0x3422);
                uVar5 = snd_soc_component_read(iVar11,0x3423);
                snd_soc_component_update_bits(iVar11,0x3420,1,1);
                uVar2 = snd_soc_component_read(iVar11,0x3581);
                uVar6 = snd_soc_component_read(iVar11,0x3582);
                uVar3 = snd_soc_component_read(iVar11,0x3583);
                uVar7 = snd_soc_component_read(iVar11,0x3584);
                snd_soc_component_update_bits(iVar11,0x3416,0xe7,0);
                mutex_unlock(iVar9 + 0x60);
                if (((((uVar2 - 0x5d < 0xffffffe7) || ((uVar6 & 0x3f) != 0)) || (uVar3 < 0xb9)) ||
                    ((0xda < uVar3 || ((uVar7 & 0x3f) != 0)))) &&
                   (iVar8 = ___ratelimit(obj.wsa883x_get_temperature._rs,"wsa883x_get_temperature"), iVar8 != 0)) {
                    _printk("%s: Temperature registers[%d %d %d %d] are out of range\n","wsa883x_get_temperature",
                            uVar2,uVar6 & 0xff,uVar3,uVar7 & 0xff);
                }
                uVar6 = (uVar6 & 0xc0 | uVar2 << 8) >> 6;
                iVar8 = ((uVar7 & 0xc0 | uVar3 << 8) >> 6) - uVar6;
                if (iVar8 != 0) {
                    iVar1 = 0;
                    if (iVar8 != 0) {
                        iVar1 = ((((uVar5 & 0xc0 | (uVar4 & 0xff) << 8) >> 6) - uVar6) * 0xa0) / iVar8;
                    }
                    iVar8 = iVar1 + -10;
                    if (iVar1 - 0x37U < 0xffffffd9) goto code_r0x08009358;
code_r0x080093ac:
                    *(iVar10 + 0xb4) = iVar8;
                    goto code_r0x080093c0;
                }
                iVar8 = 0xffff;
code_r0x08009358:
                cVar12 = cVar12 + -1;
                msleep(10);
                if (cVar12 == '\0') goto code_r0x080093ac;
                iVar9 = *(*(iVar11 + 0x18) + 0x98);
            } while (iVar9 != 0);
            _dev_err(*(iVar11 + 0x18),"%s: wsa883x is NULL\n","wsa883x_temp_reg_read");
            _printk(0x80014c4,"wsa883x_get_temperature",0xffffffea,*(iVar10 + 0xb4));
            iVar8 = *(iVar10 + 0xb4);
        }
    }
    else {
        iVar8 = *(iVar10 + 0xb4);
    }
code_r0x080093c0:
    *(arg2 + 0x48) = iVar8;
    return 0;
}


// ===== sym.wsa883x_get_dev_num @ 0x08009430 (size 96) =====

ulong sym.wsa883x_get_dev_num(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x80) != 0) {
        iVar1 = *(*(*(arg1 + 0x80) + 0x18) + 0x98);
        if (iVar1 != 0) {
            *(arg2 + 0x48) = *(*(iVar1 + 0x10) + 0x40);
            return 0;
        }
        _printk(0x800135e,"wsa883x_get_dev_num");
    }
    return 0xffffffea;
}


// ===== sym.wsa_dev_mode_get @ 0x08009490 (size 36) =====

ulong sym.wsa_dev_mode_get(int64_t arg1,int64_t arg2)

{
    *(arg2 + 0x48) = *(*(*(*(arg1 + 0x80) + 0x18) + 0x98) + 0x58);
    return 0;
}


// ===== sym.wsa_dev_mode_put @ 0x080094b4 (size 36) =====

ulong sym.wsa_dev_mode_put(int64_t arg1,int64_t arg2)

{
    *(*(*(*(arg1 + 0x80) + 0x18) + 0x98) + 0x58) = *(arg2 + 0x48);
    return 0;
}


// ===== sym.wsa883x_get_comp_offset @ 0x080094d8 (size 36) =====

ulong sym.wsa883x_get_comp_offset(int64_t arg1,int64_t arg2)

{
    *(arg2 + 0x48) = *(*(*(*(arg1 + 0x80) + 0x18) + 0x98) + 0x5c);
    return 0;
}


// ===== sym.wsa883x_set_comp_offset @ 0x080094fc (size 36) =====

ulong sym.wsa883x_set_comp_offset(int64_t arg1,int64_t arg2)

{
    *(*(*(*(arg1 + 0x80) + 0x18) + 0x98) + 0x5c) = *(arg2 + 0x48);
    return 0;
}


// ===== sym.wsa883x_get_compander @ 0x08009520 (size 36) =====

ulong sym.wsa883x_get_compander(int64_t arg1,int64_t arg2)

{
    *(arg2 + 0x48) = *(*(*(*(arg1 + 0x80) + 0x18) + 0x98) + 0x20);
    return 0;
}


// ===== sym.wsa883x_set_compander @ 0x08009544 (size 44) =====

ulong sym.wsa883x_set_compander(int64_t arg1,int64_t arg2)

{
    *(*(*(*(arg1 + 0x80) + 0x18) + 0x98) + 0x20) = *(arg2 + 0x48) != 0;
    return 0;
}


// ===== sym.wsa883x_get_visense @ 0x08009570 (size 36) =====

ulong sym.wsa883x_get_visense(int64_t arg1,int64_t arg2)

{
    *(arg2 + 0x48) = *(*(*(*(arg1 + 0x80) + 0x18) + 0x98) + 0x21);
    return 0;
}


// ===== sym.wsa883x_set_visense @ 0x08009594 (size 44) =====

ulong sym.wsa883x_set_visense(int64_t arg1,int64_t arg2)

{
    *(*(*(*(arg1 + 0x80) + 0x18) + 0x98) + 0x21) = *(arg2 + 0x48) != 0;
    return 0;
}


// ===== sym.wsa883x_get_ext_vdd_spk @ 0x080095c0 (size 36) =====

ulong sym.wsa883x_get_ext_vdd_spk(int64_t arg1,int64_t arg2)

{
    *(arg2 + 0x48) = *(*(*(*(arg1 + 0x80) + 0x18) + 0x98) + 0x22);
    return 0;
}


// ===== sym.wsa883x_put_ext_vdd_spk @ 0x080095e4 (size 44) =====

ulong sym.wsa883x_put_ext_vdd_spk(int64_t arg1,int64_t arg2)

{
    *(*(*(*(arg1 + 0x80) + 0x18) + 0x98) + 0x22) = *(arg2 + 0x48) != 0;
    return 0;
}


// ===== sym.wsa883x_enable_swr_dac_port @ 0x08009610 (size 832) =====

void sym.wsa883x_enable_swr_dac_port(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    char cVar1;
    bool bVar2;
    uint32_t uVar3;
    unkuint6 Var4;
    int iVar5;
    ulong uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint64_t *extraout_x8;
    uint64_t *puVar10;
    uchar *puVar11;
    ulong *in_x18;
    int64_t iVar12;
    int64_t iVar13;
    ulong unaff_x30;
    uchar auStack_48 [4];
    uchar uStack_44;
    uchar uStack_43;
    uchar auStack_40 [4];
    uchar uStack_3c;
    uchar uStack_3b;
    uint uStack_38;
    uint64_t uStack_34;
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_28 = *(iVar12 + 0x5e0);
    iVar13 = *(arg1 + 0x28);
    _auStack_48 = 0;
    _auStack_40 = 0;
    uStack_2c = 0;
    uStack_34 = 0;
    iVar12 = *(*(iVar13 + -0xb8) + 0x98);
    if (iVar12 != 0) {
        uVar6 = 0;
        uVar3 = arg2 - 1;
        if (7 < uVar3) goto code_r0x080098c0;
    //switch table (7 cases) at 0x800127c
        switch(*(uVar3 * 4 + 0x800127c) + 0x8009668) {
        case 0x800967c:
            iVar8 = *(*(iVar13 + -0xb8) + 0x98);
            _auStack_40 = *(iVar8 + 0x24) << 0x20;
            _auStack_40 = CONCAT71(stack0xffffffffffffffc1,*(iVar8 + 0x2c));
            _auStack_48 = *(iVar8 + 0x25) << 0x20;
            uStack_38 = *(iVar8 + 0x28);
            _auStack_48 = CONCAT71(stack0xffffffffffffffb9,*(iVar8 + 0x2d));
            if (*(iVar12 + 0x58) == 1) {
                uStack_38 = 4800000;
            }
            if (*(iVar12 + 0x20) == '\0') {
                uVar7 = 1;
                cVar1 = *(iVar12 + 0x21);
            }
            else {
                uVar7 = 2;
                iVar9 = *(*(iVar13 + -0xb8) + 0x98);
                _auStack_40 = CONCAT15(*(iVar9 + 0x30),_auStack_40);
                Var4 = _auStack_40 >> 0x10;
                auStack_40._0_2_ = CONCAT11(*(iVar9 + 0x38),*(iVar8 + 0x2c));
                _auStack_40 = CONCAT62(Var4,auStack_40._0_2_);
                _auStack_48 = CONCAT15(*(iVar9 + 0x31),_auStack_48);
                uStack_34 = *(iVar9 + 0x34);
                Var4 = _auStack_48 >> 0x10;
                auStack_48._0_2_ = CONCAT11(*(iVar9 + 0x39),*(iVar8 + 0x2d));
                _auStack_48 = CONCAT62(Var4,auStack_48._0_2_);
                cVar1 = *(iVar12 + 0x21);
            }
            if (cVar1 != '\0') {
                iVar13 = *(*(iVar13 + -0xb8) + 0x98);
                *(&stack0xffffffffffffffc4 | uVar7) = *(iVar13 + 0x48);
                *(&stack0xffffffffffffffc0 | uVar7) = *(iVar13 + 0x50);
                puVar11 = &stack0xffffffffffffffb8 | uVar7;
                *(&stack0xffffffffffffffbc | uVar7) = *(iVar13 + 0x49);
                *(&stack0xffffffffffffffc8 + uVar7 * 4) = *(iVar13 + 0x4c);
                uVar7 = uVar7 + 1;
                *puVar11 = *(iVar13 + 0x51);
            }
            noname_1 = swr_connect_port(*(iVar12 + 0x10),&stack0xffffffffffffffc4,uVar7,&stack0xffffffffffffffbc,
                                        &stack0xffffffffffffffc8,&stack0xffffffffffffffc0,&stack0xffffffffffffffb8);
            break;
        case 0x8009790:
            iVar8 = *(*(iVar13 + -0xb8) + 0x98);
            _auStack_40 = *(iVar8 + 0x24) << 0x20;
            _auStack_40 = CONCAT71(stack0xffffffffffffffc1,*(iVar8 + 0x2c));
            _auStack_48 = *(iVar8 + 0x25) << 0x20;
            uStack_38 = *(iVar8 + 0x28);
            _auStack_48 = CONCAT71(stack0xffffffffffffffb9,*(iVar8 + 0x2d));
            if (*(iVar12 + 0x20) == '\0') {
                uVar7 = 1;
                cVar1 = *(iVar12 + 0x21);
            }
            else {
                uVar7 = 2;
                iVar9 = *(*(iVar13 + -0xb8) + 0x98);
                _auStack_40 = CONCAT15(*(iVar9 + 0x30),_auStack_40);
                Var4 = _auStack_40 >> 0x10;
                auStack_40._0_2_ = CONCAT11(*(iVar9 + 0x38),*(iVar8 + 0x2c));
                _auStack_40 = CONCAT62(Var4,auStack_40._0_2_);
                _auStack_48 = CONCAT15(*(iVar9 + 0x31),_auStack_48);
                uStack_34 = *(iVar9 + 0x34);
                Var4 = _auStack_48 >> 0x10;
                auStack_48._0_2_ = CONCAT11(*(iVar9 + 0x39),*(iVar8 + 0x2d));
                _auStack_48 = CONCAT62(Var4,auStack_48._0_2_);
                cVar1 = *(iVar12 + 0x21);
            }
            if (cVar1 != '\0') {
                iVar13 = *(*(iVar13 + -0xb8) + 0x98);
                *(&stack0xffffffffffffffc4 | uVar7) = *(iVar13 + 0x48);
                *(&stack0xffffffffffffffc0 | uVar7) = *(iVar13 + 0x50);
                puVar11 = &stack0xffffffffffffffb8 | uVar7;
                *(&stack0xffffffffffffffbc | uVar7) = *(iVar13 + 0x49);
                *(&stack0xffffffffffffffc8 + uVar7 * 4) = *(iVar13 + 0x4c);
                uVar7 = uVar7 + 1;
                *puVar11 = *(iVar13 + 0x51);
            }
            noname_1 = swr_disconnect_port(*(iVar12 + 0x10),&stack0xffffffffffffffc4,uVar7,&stack0xffffffffffffffbc,
                                           &stack0xffffffffffffffb8);
            break;
        case 0x800987c:
            puVar10 = iVar12 + 0x170;
            goto code_r0x08009930;
        case 0x8009898:
            iVar5 = swr_set_device_group(*(iVar12 + 0x10),0);
            if (iVar5 != 0) {
                _dev_err(*(iVar13 + -0xb8),"%s: set num ch failed\n","wsa883x_enable_swr_dac_port");
            }
            noname_1 = swr_slvdev_datapath_control(*(iVar12 + 0x10),*(*(iVar12 + 0x10) + 0x40),0);
            break;
        case 0x80098c0:
            goto code_r0x080098c0;
        }
        while( true ) {
            uVar6 = 0;
code_r0x080098c0:
            iVar12 = sp_el0;
            if (*(iVar12 + 0x5e0) == iStack_28) break;
            noname_1 = __stack_chk_fail(noname_1,uVar6);
            puVar10 = extraout_x8;
code_r0x08009930:
            Hint_Prefetch(puVar10,2,0,1);
            do {
                cVar1 = '\x01';
                bVar2 = ExclusiveMonitorPass(puVar10,0x10);
                if (bVar2) {
                    *puVar10 = *puVar10 | 1;
                    cVar1 = ExclusiveMonitorsStatus();
                }
            } while (cVar1 != '\0');
        }
        return;
    }
    uVar6 = 0xffffffea;
    goto code_r0x080098c0;
}


// ===== sym.wsa883x_spkr_event @ 0x08009950 (size 816) =====

ulong sym.wsa883x_spkr_event(int64_t arg1,uchar noname_1 [16],uint32_t arg2)

{
    uint64_t *puVar1;
    int64_t iVar2;
    char cVar3;
    bool bVar4;
    ulong uVar5;
    ulong *in_x18;
    int64_t iVar6;
    uint uVar7;
    uint uVar8;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(arg1 + 0x28) + -0xd0;
    iVar9 = *(*(*(arg1 + 0x28) + -0xb8) + 0x98);
    if (arg2 == 4) {
        puVar1 = iVar9 + 0x170;
        if ((*(iVar9 + 0x170) >> 2 & 1) == 0) {
            noname_1 = wcd_disable_irq(iVar9 + 0xd0,5);
        }
        snd_soc_component_update_bits(noname_1,iVar6,0x3426,1,0);
        snd_soc_component_update_bits(iVar6,0x3426,0xe,0);
        snd_soc_component_update_bits(iVar6,0x3410,1,0);
        snd_soc_component_update_bits(iVar6,0x3410,0x10,0);
        snd_soc_component_update_bits(iVar6,0x3410,0x10,0x10);
        snd_soc_component_update_bits(iVar6,0x3410,0x10,0);
        snd_soc_component_update_bits(iVar6,0x344b,1,0);
        iVar9 = iVar9 + 0xd0;
        wcd_disable_irq(iVar9,6);
        wcd_disable_irq(iVar9,3);
        wcd_disable_irq(iVar9,2);
        wcd_disable_irq(iVar9,1);
        wcd_disable_irq(iVar9,0);
        wcd_disable_irq(iVar9,8);
        wcd_disable_irq(iVar9,9);
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
                *puVar1 = *puVar1 & 0xfffffffffffffffe;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
                *puVar1 = *puVar1 & 0xfffffffffffffffb;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        return 0;
    }
    if (arg2 != 2) {
        return 0;
    }
    if (*(iVar9 + 0x58) == 1) {
        uVar7 = 0;
        uVar8 = 8;
        uVar5 = 2;
    }
    else {
        if (*(iVar9 + 0x58) != 0) goto code_r0x08009b0c;
        uVar5 = 0;
        uVar8 = 0;
        uVar7 = 0x90;
    }
    snd_soc_component_update_bits(iVar6,0x3408,2,uVar5);
    snd_soc_component_update_bits(iVar6,0x3039,8,uVar8);
    snd_soc_component_update_bits(iVar6,0x346c,0xf0,uVar7);
code_r0x08009b0c:
    swr_slvdev_datapath_control(*(iVar9 + 0x10),*(*(iVar9 + 0x10) + 0x40),1);
    usleep_range_state(0xfa,300,2);
    snd_soc_component_update_bits(iVar6,0x346d,1,1);
    usleep_range_state(0xfa,300,2);
    swr_remove_from_group(*(iVar9 + 0x10),*(*(iVar9 + 0x10) + 0x40));
    if (*(iVar9 + 0x20) != '\0') {
        snd_soc_component_update_bits(iVar6,0x346c,7,*(iVar9 + 0x5c));
    }
    iVar2 = iVar9 + 0xd0;
    wcd_enable_irq(iVar2,9);
    wcd_enable_irq(iVar2,8);
    wcd_enable_irq(iVar2,0);
    wcd_enable_irq(iVar2,1);
    wcd_enable_irq(iVar2,2);
    wcd_enable_irq(iVar2,3);
    wcd_enable_irq(iVar2,6);
    snd_soc_component_update_bits(iVar6,0x3426,0xe,6);
    snd_soc_component_update_bits(iVar6,0x3426,1,1);
    if ((*(iVar9 + 0x170) >> 2 & 1) != 0) {
        snd_soc_component_update_bits(iVar6,0x3410,1,1);
    }
    return 0;
}


// ===== sym.codec_debug_read @ 0x08009c80 (size 224) =====

uint64_t sym.codec_debug_read(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    uint64_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t *piVar5;
    uint uVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    int64_t *piStack_c8;
    uint64_t auStack_c0 [2];
    uint uStack_b0;
    int64_t aiStack_a8 [5];
    uchar *puStack_80;
    code *pcStack_78;
    int64_t iStack_40;
    int64_t iStack_38;
    
    piVar5 = &iStack_40;
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    uVar2 = 0xffffffffffffffea;
    iStack_40 = 0;
    if ((((arg2 != 0) && (arg1 != 0)) && (arg3 != 0)) && (arg4 != 0)) {
        if (((*(arg1 + 0xd8) == 0) || (iVar7 = *(*(arg1 + 0xd8) + 0xe0), iVar7 == 0)) || (*arg4 < 0)) {
            uVar2 = 0xffffffffffffffea;
        }
        else {
            snprintf(&iStack_40,8,"0x%x\n",*(iVar7 + 0x118));
            uVar3 = strnlen(&iStack_40,7);
            uVar2 = simple_read_from_buffer(arg2,arg3,arg4,&iStack_40,uVar3);
            arg3 = arg4;
            arg4 = piVar5;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_38) {
        return uVar2;
    }
    auVar9 = __stack_chk_fail(uVar2);
    *extraout_x18 = sym.codec_debug_peek_write;
    pcStack_78 = sym.codec_debug_peek_write;
    iVar7 = sp_el0;
    aiStack_a8[4] = *(iVar7 + 0x5e0);
    uVar2 = 0xffffffffffffffea;
    aiStack_a8[2] = 0;
    aiStack_a8[3] = 0;
    aiStack_a8[0] = 0;
    aiStack_a8[1] = 0;
    uStack_b0 = 0;
    auStack_c0[0] = 0;
    auStack_c0[1] = 0;
    puStack_80 = &stack0xffffffffffffffd0;
    if (((auVar9._8_8_ == 0) || (auVar9._0_8_ == 0)) || ((arg3 == 0 || (arg4 == NULL)))) goto code_r0x08009e90;
    iVar7 = *(auVar9._0_8_ + 0xd8);
    if ((iVar7 != 0) && (iVar8 = *(iVar7 + 0xe0), iVar8 != 0)) {
        uVar2 = 0xffffffffffffffea;
        if ((0x1f < arg3) || (*arg4 < 0)) goto code_r0x08009e90;
        __check_object_size(aiStack_a8,arg3,0);
        iVar1 = sym._copy_from_user(aiStack_a8,auVar9._8_8_,arg3);
        if (iVar1 != 0) {
            uVar2 = 0xfffffffffffffff2;
            goto code_r0x08009e90;
        }
        *(aiStack_a8 + arg3) = 0;
        piStack_c8 = aiStack_a8;
        iVar4 = strsep(&piStack_c8,0x800139f);
        if (iVar4 != 0) {
            uVar6 = 0x10;
            if ((*(iVar4 + 1) & 0xdf) != 0x58) {
                uVar6 = 10;
            }
            iVar1 = kstrtouint(iVar4,uVar6,auStack_c0);
            if (iVar1 == 0) {
                strsep(&piStack_c8,0x800139f);
                if (auStack_c0[0] < 0x200a) {
                    swr_read(iVar7,*(iVar7 + 0x40),auStack_c0[0] & 0xffffffff,iVar8 + 0x118,1);
                    uVar2 = arg3;
                    goto code_r0x08009e90;
                }
            }
        }
    }
    uVar2 = 0xffffffffffffffea;
code_r0x08009e90:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == aiStack_a8[4]) {
        return uVar2;
    }
    auVar9 = __stack_chk_fail(uVar2);
    *(auVar9._8_8_ + 0xd8) = *(auVar9._0_8_ + 0x2d8);
    return 0;
}


// ===== sym.codec_debug_peek_write @ 0x08009d60 (size 360) =====

int64_t sym.codec_debug_peek_write(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    int64_t iVar2;
    uint uVar3;
    ulong *in_x18;
    int64_t iVar4;
    int64_t iVar5;
    ulong unaff_x30;
    uchar auVar6 [16];
    int64_t *piStack_88;
    uint64_t auStack_80 [2];
    uint uStack_70;
    int64_t aiStack_68 [5];
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    aiStack_68[4] = *(iVar2 + 0x5e0);
    iVar2 = -0x16;
    aiStack_68[2] = 0;
    aiStack_68[3] = 0;
    aiStack_68[0] = 0;
    aiStack_68[1] = 0;
    uStack_70 = 0;
    auStack_80[0] = 0;
    auStack_80[1] = 0;
    if ((((arg2 == 0) || (arg1 == 0)) || (arg3 == 0)) || (arg4 == 0)) goto code_r0x08009e90;
    iVar4 = *(arg1 + 0xd8);
    if ((iVar4 != 0) && (iVar5 = *(iVar4 + 0xe0), iVar5 != 0)) {
        iVar2 = -0x16;
        if ((0x1f < arg3) || (*arg4 < 0)) goto code_r0x08009e90;
        __check_object_size(aiStack_68,arg3,0);
        iVar1 = sym._copy_from_user(aiStack_68,arg2,arg3);
        if (iVar1 != 0) {
            iVar2 = -0xe;
            goto code_r0x08009e90;
        }
        *(aiStack_68 + arg3) = 0;
        piStack_88 = aiStack_68;
        iVar2 = strsep(&piStack_88,0x800139f);
        if (iVar2 != 0) {
            uVar3 = 0x10;
            if ((*(iVar2 + 1) & 0xdf) != 0x58) {
                uVar3 = 10;
            }
            iVar1 = kstrtouint(iVar2,uVar3,auStack_80);
            if (iVar1 == 0) {
                strsep(&piStack_88,0x800139f);
                if (auStack_80[0] < 0x200a) {
                    swr_read(iVar4,*(iVar4 + 0x40),auStack_80[0] & 0xffffffff,iVar5 + 0x118,1);
                    iVar2 = arg3;
                    goto code_r0x08009e90;
                }
            }
        }
    }
    iVar2 = -0x16;
code_r0x08009e90:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == aiStack_68[4]) {
        return iVar2;
    }
    auVar6 = __stack_chk_fail(iVar2);
    *(auVar6._8_8_ + 0xd8) = *(auVar6._0_8_ + 0x2d8);
    return 0;
}


// ===== sym.codec_debug_open @ 0x08009ec8 (size 24) =====

ulong sym.codec_debug_open(int64_t arg1,int64_t arg2)

{
    *(arg2 + 0xd8) = *(arg1 + 0x2d8);
    return 0;
}


// ===== sym._copy_from_user @ 0x08009ee0 (size 376) =====

int64_t sym._copy_from_user(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    uint64_t uVar3;
    bool bVar4;
    int64_t iVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = sp_el0;
    uVar3 = (arg2 << 8) >> 8;
    if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar6 = arg2, (*puVar2 >> 0x1a & 1) != 0)) {
        uVar6 = arg2 & uVar3;
    }
    bVar4 = CARRY8(uVar6,arg3);
    uVar6 = uVar6 + arg3;
    uVar1 = 0;
    if (!bVar4 || uVar6 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar6 = 0xffffffffffffffff;
    }
    iVar5 = arg3;
    if (!CARRY8(uVar6,~uVar1) && !CARRY8(uVar6 + ~uVar1,bVar4) || uVar6 == uVar1 + !bVar4) {
        if ((_snd_soc_info_enum_double >> 0x18 & 1) == 0) {
            uVar6 = daif;
            if ((uVar6 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar2[1];
            InstructionSynchronizationBarrier();
            daif = uVar6;
        }
        if ((arg2 & uVar3 & 0xffffff8000000000) != 0) {
            arg2 = 0;
        }
        iVar5 = __arch_copy_from_user(arg1,arg2,arg3);
        if ((_snd_soc_info_enum_double >> 0x18 & 1) == 0) {
            uVar3 = daif;
            if ((uVar3 & 0x80) == 0) {
                uVar6 = daif;
                daif = uVar6 | 0xc0;
            }
            uVar6 = ttbr1_el1;
            ttbr0_el1 = (uVar6 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar6 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar3;
        }
    }
    if (iVar5 != 0) {
        memset(arg1 + (arg3 - iVar5),0,iVar5);
    }
    return iVar5;
}


// ===== sym.codec_debug_write @ 0x0800a094 (size 408) =====

int64_t * sym.codec_debug_write(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    char *pcVar1;
    ulong *puVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    bool bVar5;
    int iVar6;
    uint32_t uVar7;
    int64_t *piVar8;
    int64_t iVar9;
    ulong uVar10;
    uint64_t uVar11;
    int64_t *piVar12;
    int64_t *in_x3;
    uint uVar13;
    uint64_t uVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar15;
    int64_t *piVar16;
    uint32_t uVar17;
    int64_t *arg2_00;
    int64_t *piVar18;
    ulong unaff_x30;
    uchar noname_1 [16];
    uchar auVar19 [16];
    uint uStack_104;
    ulong uStack_100;
    ulong uStack_f8;
    uint uStack_f0;
    int64_t iStack_e8;
    uchar *puStack_e0;
    code *pcStack_d8;
    int64_t *piStack_78;
    ulong uStack_70;
    ulong uStack_68;
    uint uStack_60;
    int64_t aiStack_58 [5];
    
    piVar18 = arg3;
    *in_x18 = unaff_x30;
    iVar15 = sp_el0;
    aiStack_58[4] = *(iVar15 + 0x5e0);
    piVar8 = 0xffffffffffffffea;
    aiStack_58[2] = 0;
    aiStack_58[3] = 0;
    aiStack_58[0] = 0;
    aiStack_58[1] = 0;
    uStack_60 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    piVar12 = piVar18;
    if ((((arg2 != 0) && (arg1 != 0)) && (in_x3 != NULL)) &&
       ((piVar8 = 0xffffffffffffffea, piVar18 < 0x20 && (iVar15 = *(arg1 + 0xd8), iVar15 != 0)))) {
        __check_object_size(aiStack_58,piVar18,0);
        iVar6 = sym._copy_from_user(aiStack_58,arg2,piVar18);
        if (iVar6 == 0) {
            *(aiStack_58 + piVar18) = '\0';
            piStack_78 = aiStack_58;
            iVar9 = strsep(&piStack_78,0x800139f);
            if (iVar9 != 0) {
                piVar12 = &uStack_70;
                uVar13 = 0x10;
                if ((*(iVar9 + 1) & 0xdf) != 0x58) {
                    uVar13 = 10;
                }
                iVar6 = kstrtouint(iVar9,uVar13);
                if ((iVar6 == 0) && (iVar9 = strsep(&piStack_78,0x800139f), iVar9 != 0)) {
                    piVar16 = &uStack_70 | 4;
                    uVar13 = 0x10;
                    if ((*(iVar9 + 1) & 0xdf) != 0x58) {
                        uVar13 = 10;
                    }
                    piVar12 = piVar16;
                    iVar6 = kstrtouint(iVar9,uVar13);
                    if (iVar6 == 0) {
                        strsep(&piStack_78,0x800139f);
                        piVar12 = uStack_70 & 0xffffffff;
                        piVar8 = 0xffffffffffffffea;
                        if ((uStack_70 < 0x200a) && (uStack_70._4_4_ < 0x100)) {
                            swr_write(iVar15,*(iVar15 + 0x40));
                            piVar8 = piVar18;
                            in_x3 = piVar16;
                        }
                        goto code_r0x0800a170;
                    }
                }
            }
            piVar8 = 0xffffffffffffffea;
        }
        else {
            piVar8 = 0xfffffffffffffff2;
        }
    }
code_r0x0800a170:
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == aiStack_58[4]) {
        return piVar8;
    }
    auVar19 = __stack_chk_fail(piVar8);
    *extraout_x18 = sym.codec_debug_dump;
    pcStack_d8 = sym.codec_debug_dump;
    iVar15 = sp_el0;
    piVar8 = 0xffffffffffffffea;
    iStack_e8 = *(iVar15 + 0x5e0);
    puStack_e0 = &stack0xffffffffffffffd0;
    if ((((auVar19._8_8_ != 0) && (auVar19._0_8_ != 0)) && (piVar12 != NULL)) && (in_x3 != NULL)) {
        iVar15 = *(auVar19._0_8_ + 0xd8);
        if ((iVar15 == 0) || (*in_x3 < 0)) {
            piVar8 = 0xffffffffffffffea;
        }
        else {
            uStack_104 = 0;
            iVar6 = *in_x3;
            uStack_f0 = 0;
            uStack_100 = 0;
            uStack_f8 = 0;
            piVar8 = NULL;
            if (iVar6 < 0x17d78) {
                piVar18 = piVar12 + -1;
                piVar8 = NULL;
                uVar17 = iVar6 / 0xc + 0x40;
                do {
                    piVar16 = piVar8;
                    if (((((0x864 < uVar17 - 0xf36 >> 1) && (9 < uVar17 - 0xf26)) &&
                         ((0x19 < uVar17 - 0xf06 &&
                          (((0xaf9 < uVar17 - 0x406 && (0xcb < uVar17 - 0x339)) && (0xcb < uVar17 - 0x239)))))) &&
                        (((0xcb < uVar17 - 0x139 && (6 < uVar17 - 0x429)) &&
                         ((6 < (uVar17 & 0xfffffeff) - 0x229 &&
                          ((((6 < uVar17 - 0x129 && (0x19 < uVar17 - 0x406)) &&
                            ((0x19 < (uVar17 & 0xfffffeff) - 0x206 &&
                             ((((0x19 < uVar17 - 0x106 && (0xe < uVar17 - 0xf1)) && (0xe < uVar17 - 0xe1)) &&
                              ((0xe < uVar17 - 0xd1 && (0x79 < uVar17 - 0x56)))))))) && (2 < uVar17 - 0x47)))))))) &&
                       (4 < uVar17 - 0x4b)) {
                        swr_read(iVar15,*(iVar15 + 0x40),uVar17,&uStack_104,1);
                        piVar12 = "0x%.3x: 0x%.2x\n";
                        uVar7 = snprintf(&uStack_100,0x14,"0x%.3x: 0x%.2x\n",uVar17,uStack_104);
                        if (uVar7 < 0) {
                            uVar10 = 0x80013e9;
                        }
                        else {
                            arg2_00 = uVar7;
                            piVar16 = piVar8 + arg2_00;
                            if (piVar18 <= piVar16) break;
                            noname_1 = __check_object_size(&uStack_100,arg2_00,1);
                            piVar12 = arg2_00;
                            iVar9 = sym._copy_to_user(auVar19._8_8_ + piVar8,noname_1,arg2_00);
                            if (iVar9 == 0) {
                                *in_x3 = *in_x3 + arg2_00;
                                goto code_r0x0800a2f0;
                            }
                            uVar10 = 0x800178b;
                        }
                        _printk(uVar10,"swr_slave_reg_show");
                        piVar8 = 0xfffffffffffffff2;
                        break;
                    }
code_r0x0800a2f0:
                    bVar5 = uVar17 < 0x2009;
                    piVar8 = piVar16;
                    uVar17 = uVar17 + 1;
                } while (bVar5);
            }
            *in_x3 = 0x1806c;
        }
    }
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_e8) {
        return piVar8;
    }
    uVar11 = __stack_chk_fail();
    *extraout_x18_00 = sym._copy_to_user;
    puVar2 = sp_el0;
    uVar4 = (uVar11 << 8) >> 8;
    if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar14 = uVar11, (*puVar2 >> 0x1a & 1) != 0)) {
        uVar14 = uVar11 & uVar4;
    }
    bVar5 = CARRY8(uVar14,piVar12);
    pcVar1 = uVar14 + piVar12;
    uVar14 = 0;
    if (!bVar5 || pcVar1 == NULL) {
        uVar14 = 0x7fffffffff;
    }
    if (bVar5) {
        pcVar1 = 0xffffffffffffffff;
    }
    if (!CARRY8(pcVar1,~uVar14) && !CARRY8(pcVar1 + ~uVar14,bVar5) || pcVar1 == uVar14 + !bVar5) {
        if ((_snd_soc_info_enum_double >> 0x18 & 1) == 0) {
            uVar14 = daif;
            if ((uVar14 & 0x80) == 0) {
                uVar3 = daif;
                daif = uVar3 | 0xc0;
            }
            uVar3 = ttbr1_el1;
            ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar3 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar2[1];
            InstructionSynchronizationBarrier();
            daif = uVar14;
        }
        if ((uVar11 & uVar4 & 0xffffff8000000000) != 0) {
            uVar11 = 0;
        }
        piVar12 = __arch_copy_to_user(uVar11);
        if ((_snd_soc_info_enum_double >> 0x18 & 1) == 0) {
            uVar4 = daif;
            if ((uVar4 & 0x80) == 0) {
                uVar11 = daif;
                daif = uVar11 | 0xc0;
            }
            uVar11 = ttbr1_el1;
            ttbr0_el1 = (uVar11 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar11 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar4;
        }
    }
    return piVar12;
}


// ===== sym.codec_debug_dump @ 0x0800a22c (size 676) =====

char * sym.codec_debug_dump(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *puVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    bool bVar4;
    uint32_t uVar5;
    int64_t iVar6;
    ulong uVar7;
    uint64_t uVar8;
    int iVar9;
    uint64_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar11;
    char *pcVar12;
    char *pcVar13;
    uint32_t uVar14;
    char *arg2_00;
    char *pcVar15;
    ulong unaff_x30;
    uchar noname_1 [16];
    uint uStack_84;
    ulong uStack_80;
    ulong uStack_78;
    uint uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    pcVar12 = 0xffffffffffffffea;
    iStack_68 = *(iVar11 + 0x5e0);
    if ((((arg2 != 0) && (arg1 != 0)) && (arg3 != 0)) && (arg4 != 0)) {
        iVar11 = *(arg1 + 0xd8);
        if ((iVar11 == 0) || (*arg4 < 0)) {
            pcVar12 = 0xffffffffffffffea;
        }
        else {
            uStack_84 = 0;
            iVar9 = *arg4;
            uStack_70 = 0;
            uStack_80 = 0;
            uStack_78 = 0;
            pcVar12 = NULL;
            if (iVar9 < 0x17d78) {
                pcVar15 = arg3 - 1;
                pcVar12 = NULL;
                uVar14 = iVar9 / 0xc + 0x40;
                do {
                    pcVar13 = pcVar12;
                    if (((((((0x864 < uVar14 - 0xf36 >> 1) && (9 < uVar14 - 0xf26)) &&
                           ((0x19 < uVar14 - 0xf06 &&
                            (((0xaf9 < uVar14 - 0x406 && (0xcb < uVar14 - 0x339)) && (0xcb < uVar14 - 0x239)))))) &&
                          ((0xcb < uVar14 - 0x139 && (6 < uVar14 - 0x429)))) &&
                         ((6 < (uVar14 & 0xfffffeff) - 0x229 &&
                          (((6 < uVar14 - 0x129 && (0x19 < uVar14 - 0x406)) &&
                           ((0x19 < (uVar14 & 0xfffffeff) - 0x206 &&
                            (((0x19 < uVar14 - 0x106 && (0xe < uVar14 - 0xf1)) && (0xe < uVar14 - 0xe1)))))))))) &&
                        (((0xe < uVar14 - 0xd1 && (0x79 < uVar14 - 0x56)) && (2 < uVar14 - 0x47)))) &&
                       (4 < uVar14 - 0x4b)) {
                        swr_read(iVar11,*(iVar11 + 0x40),uVar14,&uStack_84,1);
                        arg3 = "0x%.3x: 0x%.2x\n";
                        uVar5 = snprintf(&uStack_80,0x14,"0x%.3x: 0x%.2x\n",uVar14,uStack_84);
                        if (uVar5 < 0) {
                            uVar7 = 0x80013e9;
                        }
                        else {
                            arg2_00 = uVar5;
                            pcVar13 = pcVar12 + arg2_00;
                            if (pcVar15 <= pcVar13) break;
                            noname_1 = __check_object_size(&uStack_80,arg2_00,1);
                            arg3 = arg2_00;
                            iVar6 = sym._copy_to_user(pcVar12 + arg2,noname_1,arg2_00);
                            if (iVar6 == 0) {
                                *arg4 = arg2_00 + *arg4;
                                goto code_r0x0800a2f0;
                            }
                            uVar7 = 0x800178b;
                        }
                        _printk(uVar7,"swr_slave_reg_show");
                        pcVar12 = 0xfffffffffffffff2;
                        break;
                    }
code_r0x0800a2f0:
                    bVar4 = uVar14 < 0x2009;
                    pcVar12 = pcVar13;
                    uVar14 = uVar14 + 1;
                } while (bVar4);
            }
            *arg4 = 0x1806c;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_68) {
        return pcVar12;
    }
    uVar8 = __stack_chk_fail();
    *extraout_x18 = sym._copy_to_user;
    puVar1 = sp_el0;
    uVar3 = (uVar8 << 8) >> 8;
    if (((*(puVar1 + 0x3e) >> 5 & 1) != 0) || (uVar10 = uVar8, (*puVar1 >> 0x1a & 1) != 0)) {
        uVar10 = uVar8 & uVar3;
    }
    bVar4 = CARRY8(uVar10,arg3);
    pcVar12 = arg3 + uVar10;
    uVar10 = 0;
    if (!bVar4 || pcVar12 == NULL) {
        uVar10 = 0x7fffffffff;
    }
    if (bVar4) {
        pcVar12 = 0xffffffffffffffff;
    }
    if (!CARRY8(pcVar12,~uVar10) && !CARRY8(pcVar12 + ~uVar10,bVar4) || pcVar12 == uVar10 + !bVar4) {
        if ((_snd_soc_info_enum_double >> 0x18 & 1) == 0) {
            uVar10 = daif;
            if ((uVar10 & 0x80) == 0) {
                uVar2 = daif;
                daif = uVar2 | 0xc0;
            }
            uVar2 = ttbr1_el1;
            ttbr1_el1 = puVar1[1] & 0xffff000000000000 | uVar2 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar1[1];
            InstructionSynchronizationBarrier();
            daif = uVar10;
        }
        if ((uVar8 & uVar3 & 0xffffff8000000000) != 0) {
            uVar8 = 0;
        }
        arg3 = __arch_copy_to_user(uVar8);
        if ((_snd_soc_info_enum_double >> 0x18 & 1) == 0) {
            uVar3 = daif;
            if ((uVar3 & 0x80) == 0) {
                uVar8 = daif;
                daif = uVar8 | 0xc0;
            }
            uVar8 = ttbr1_el1;
            ttbr0_el1 = (uVar8 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar8 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar3;
        }
    }
    return arg3;
}


// ===== sym._copy_to_user @ 0x0800a4d0 (size 312) =====

int64_t sym._copy_to_user(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t uVar1;
    ulong *puVar2;
    uint64_t uVar3;
    bool bVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = sp_el0;
    uVar3 = (arg1 << 8) >> 8;
    if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar5 = arg1, (*puVar2 >> 0x1a & 1) != 0)) {
        uVar5 = arg1 & uVar3;
    }
    bVar4 = CARRY8(uVar5,arg2);
    uVar5 = uVar5 + arg2;
    uVar1 = 0;
    if (!bVar4 || uVar5 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar5 = 0xffffffffffffffff;
    }
    if (!CARRY8(uVar5,~uVar1) && !CARRY8(uVar5 + ~uVar1,bVar4) || uVar5 == uVar1 + !bVar4) {
        if ((_snd_soc_info_enum_double >> 0x18 & 1) == 0) {
            uVar5 = daif;
            if ((uVar5 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar2[1];
            InstructionSynchronizationBarrier();
            daif = uVar5;
        }
        if ((arg1 & uVar3 & 0xffffff8000000000) != 0) {
            arg1 = 0;
        }
        arg2 = __arch_copy_to_user(arg1);
        if ((_snd_soc_info_enum_double >> 0x18 & 1) == 0) {
            uVar3 = daif;
            if ((uVar3 & 0x80) == 0) {
                uVar5 = daif;
                daif = uVar5 | 0xc0;
            }
            uVar5 = ttbr1_el1;
            ttbr0_el1 = (uVar5 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar5 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar3;
        }
    }
    return arg2;
}


// ===== sym.wsa883x_swr_suspend @ 0x0800a644 (size 176) =====

ulong sym.wsa883x_swr_suspend(int64_t arg1)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    ulong uVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((arg1 == 0) || (arg1 == 0x48)) || (iVar5 = *(arg1 + 0x98), iVar5 == 0)) {
        _dev_err(arg1,"%s: wsa883x private data is NULL\n","wsa883x_swr_suspend");
        uVar4 = 0xffffffea;
    }
    else {
        if (*(iVar5 + 0x23) != '\0') {
            msm_cdc_set_supplies_lpm_mode(arg1,*(iVar5 + 0x168),*(iVar5 + 0x158),*(iVar5 + 0x160),1);
            puVar1 = iVar5 + 0x170;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                    *puVar1 = *puVar1 | 2;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
        }
        uVar4 = 0;
    }
    return uVar4;
}


// ===== sym.wsa883x_swr_resume @ 0x0800a6f4 (size 180) =====

ulong sym.wsa883x_swr_resume(int64_t arg1)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    ulong uVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((arg1 == 0) || (arg1 == 0x48)) || (iVar5 = *(arg1 + 0x98), iVar5 == 0)) {
        _dev_err(arg1,"%s: wsa883x private data is NULL\n","wsa883x_swr_resume");
        uVar4 = 0xffffffea;
    }
    else {
        if ((*(iVar5 + 0x170) >> 1 & 1) != 0) {
            puVar1 = iVar5 + 0x170;
            msm_cdc_set_supplies_lpm_mode(arg1,*(iVar5 + 0x168),*(iVar5 + 0x158),*(iVar5 + 0x160),0);
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                    *puVar1 = *puVar1 & 0xfffffffffffffffd;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
        }
        uVar4 = 0;
    }
    return uVar4;
}


// ===== sym.__cfi_check_fail @ 0x0800a7a8 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800a7ec

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
    //switch table (4 cases) at 0x800129c
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800a800);
    (*pcVar1)();
}


// ===== sym.wsa883x_writeable_register @ 0x0800a800 (size 64) =====

uint8_t sym.wsa883x_writeable_register(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    code *pcVar2;
    
    uVar1 = arg2 - 0x3000;
    if (arg2 < 0x3000 || uVar1 == 0) {
        return 0;
    }
    if (uVar1 >> 9 < 0x1b) {
        return obj.wsa883x_reg_access[uVar1] >> 1 & 1;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x800a840);
    (*pcVar2)();
}


// ===== sym.wsa883x_readable_register @ 0x0800a840 (size 64) =====

uint8_t sym.wsa883x_readable_register(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    code *pcVar2;
    
    uVar1 = arg2 - 0x3000;
    if (arg2 < 0x3000 || uVar1 == 0) {
        return 0;
    }
    if (uVar1 >> 9 < 0x1b) {
        return obj.wsa883x_reg_access[uVar1] & 1;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x800a880);
    (*pcVar2)();
}


// ===== sym.wsa883x_volatile_register @ 0x0800a880 (size 72) =====

bool sym.wsa883x_volatile_register(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    code *pcVar2;
    
    uVar1 = arg2 - 0x3000;
    if (arg2 < 0x3000 || uVar1 == 0) {
        return false;
    }
    if (uVar1 >> 9 < 0x1b) {
        return (obj.wsa883x_reg_access[uVar1] & 3) == 1;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x800a8c8);
    (*pcVar2)();
}


// ===== sym.init_module @ 0x0800a92c (size 44) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    swr_driver_register(reloc.wsa883x_swr_probe.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt);
    return;
}


// ===== sym.cleanup_module @ 0x0800a958 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    swr_driver_unregister(reloc.wsa883x_swr_probe.14f846fe77b5f6b9361f50eff6a87afa.cfi_jt);
    return;
}

