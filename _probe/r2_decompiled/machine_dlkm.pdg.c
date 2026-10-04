// decompiled from machine_dlkm by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x0800a000 (size 868) =====

//WARNING: Switch with 1 destination removed at 0x0800c8e8

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0xf2d15659b6de7a9) {
        if (arg1 < -0x48ef54602b463a27) {
            if (arg1 < -0x57492a0ce9051635) {
                if (arg1 != -0x749213c658cf941a) {
                    if ((arg1 == -0x5b1335a4184ab6c7) && ((pcVar1 + -0x800a440 >> 3 | pcVar1 << 0x3d) < 5)) {
                        return;
                    }
                    goto code_r0x0800c8a8;
                }
                pcVar2 = sym.snd_soc_info_enum_double.cfi_jt;
                goto code_r0x0800a2e0;
            }
            if (arg1 == -0x57492a0ce9051635) {
                pcVar2 = sym.msm_common_snd_hw_params.cfi_jt;
                goto code_r0x0800a350;
            }
            if (arg1 != -0x49739d0000a0fe53) goto code_r0x0800c8a8;
            pcVar2 = sym.msm_dmic_event.52853753f8636579aaf6d6a2c764b9d3.cfi_jt;
        }
        else if (arg1 < -0x2d1ef4d8549a89e5) {
            if (arg1 != -0x48ef54602b463a27) {
                if (arg1 != -0x3557318fb8d07b71) goto code_r0x0800c8a8;
                pcVar2 = sym.msm_asoc_machine_probe.52853753f8636579aaf6d6a2c764b9d3.cfi_jt;
code_r0x0800a350:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x0800c8a8;
            }
            pcVar2 = sym.kalama_ssr_disable.52853753f8636579aaf6d6a2c764b9d3.cfi_jt;
        }
        else {
            if (arg1 == -0x2d1ef4d8549a89e5) {
                pcVar2 = sym.kalama_ssr_enable.52853753f8636579aaf6d6a2c764b9d3.cfi_jt;
                goto code_r0x0800a350;
            }
            if (arg1 != -0x176c6fd2909fff3b) goto code_r0x0800c8a8;
            pcVar2 = sym.msm_common_snd_startup.cfi_jt;
        }
    }
    else if (arg1 < 0x2882621ee1337d31) {
        if (arg1 < 0x2b3a43e29242445) {
            if (arg1 != -0xf2d15659b6de7a9) {
                if (arg1 != -0x558484723f05168) goto code_r0x0800c8a8;
                pcVar2 = sym.snd_card_sysfs_store.9b343f2a3ce35e977719d88add93e782.cfi_jt;
                goto code_r0x0800a350;
            }
            pcVar2 = sym.__typeid__ZTSFiP17snd_soc_componentE_global_addr;
code_r0x0800a2e0:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 3) {
                return;
            }
            goto code_r0x0800c8a8;
        }
        if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else {
            if (arg1 != 0x4f24eb3c8950dab) goto code_r0x0800c8a8;
            pcVar2 = sym.msm_common_snd_shutdown.cfi_jt;
        }
    }
    else if (arg1 < 0x75ef21adc6f2463b) {
        if (arg1 == 0x2882621ee1337d31) {
            if ((pcVar1 + -0x800a3d0 >> 3 | pcVar1 << 0x3d) < 8) {
                return;
            }
            goto code_r0x0800c8a8;
        }
        if (arg1 != 0x2c1d832160b5d123) goto code_r0x0800c8a8;
        pcVar2 = sym.snd_card_sysfs_show.9b343f2a3ce35e977719d88add93e782.cfi_jt;
    }
    else if (arg1 == 0x75ef21adc6f2463b) {
        pcVar2 = sym.msm_usbc_swap_gnd_mic.52853753f8636579aaf6d6a2c764b9d3.cfi_jt;
    }
    else if (arg1 == 0x7e04a0fb7ad8bcd5) {
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    else {
        if (arg1 != 0x7e46a25b2c0735fc) goto code_r0x0800c8a8;
        pcVar2 = sym.msm_snd_card_late_probe.52853753f8636579aaf6d6a2c764b9d3.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x0800c8a8:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800c8fc);
    (*pcVar1)();
}


// ===== sym.init_module.cfi_jt @ 0x0800a370 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.snd_card_sysfs_init();
    __platform_driver_register(reloc.msm_asoc_machine_probe.52853753f8636579aaf6d6a2c764b9d3.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.msm_snd_card_late_probe.52853753f8636579aaf6d6a2c764b9d3.cfi_jt @ 0x0800a378 (size 8) =====

int sym.msm_snd_card_late_probe.52853753f8636579aaf6d6a2c764b9d3.cfi_jt(int64_t param_1)

{
    int iVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar6;
    int64_t iVar7;
    int64_t *piVar8;
    int64_t iVar9;
    ulong unaff_x30;
    uchar auStack_110 [216];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    if (*(param_1 + 0x310) == 0) {
        iVar1 = -0x16;
    }
    else if (*(*(param_1 + 0x310) + 0x60) == 0) {
        iVar3 = snd_soc_get_pcm_runtime(param_1,*(param_1 + 0x150));
        if (iVar3 == 0) {
            uVar6 = *(param_1 + 0x40);
            memcpy(auStack_110,*(param_1 + 0x150),0xd8);
            _dev_err(uVar6,"","msm_snd_card_late_probe",auStack_110);
            iVar1 = -0x16;
        }
        else {
            iVar3 = snd_soc_rtdcom_lookup(iVar3,"");
            if (iVar3 == 0) {
                _printk(0x8004169,"msm_snd_card_late_probe");
                iVar1 = -0x16;
            }
            else {
                iVar4 = kmem_cache_alloc_trace(_snd_soc_info_enum_double,0xdc0,0x9a);
                if (iVar4 == 0) {
                    iVar1 = -0xc;
                }
                else {
                    *(iVar4 + 0x30) = 0x6a4;
                    *(iVar4 + 0x41) = 8;
                    *(iVar4 + 0x60) = 0x1f401f40104004b;
                    *(iVar4 + 0x68) = 0x1f401f401f401f4;
                    *0x80006b0 = iVar4;
                    iVar1 = wcd938x_mbhc_hs_detect(iVar3);
                    if (iVar1 != 0) {
                        _dev_err(*(iVar3 + 0x18),"","msm_snd_card_late_probe",iVar1);
                        kfree(iVar4);
                    }
                }
            }
        }
    }
    else {
        iVar1 = 0;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return iVar1;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.msm_rx_tx_codec_init;
    piVar8 = *(*(iVar3 + 8) + 0x310);
    iVar4 = snd_soc_rtdcom_lookup(iVar3,"lpass-cdc");
    if (iVar4 == 0) {
        _printk(0x800350d,"");
        return 0;
    }
    iVar1 = snd_soc_add_component_controls(iVar4,obj.msm_common_snd_controls,1);
    if (iVar1 < 0) {
        _printk(0x800433f,"",iVar1);
        return iVar1;
    }
    iVar7 = iVar4 + 0xd0;
    snd_soc_dapm_new_controls(iVar7,obj.msm_int_dapm_widgets,0xd);
    snd_soc_dapm_ignore_suspend(iVar7,"");
    snd_soc_dapm_ignore_suspend(iVar7,"");
    snd_soc_dapm_ignore_suspend(iVar7,"Digital Mic2");
    snd_soc_dapm_ignore_suspend(iVar7,"");
    snd_soc_dapm_ignore_suspend(iVar7,"");
    snd_soc_dapm_ignore_suspend(iVar7,"Digital Mic5");
    snd_soc_dapm_ignore_suspend(iVar7,"");
    snd_soc_dapm_ignore_suspend(iVar7,"");
    snd_soc_dapm_ignore_suspend(iVar7,"");
    snd_soc_dapm_ignore_suspend(iVar7,"");
    snd_soc_dapm_ignore_suspend(iVar7,"");
    snd_soc_dapm_ignore_suspend(iVar7,"");
    snd_soc_dapm_ignore_suspend(iVar7,"");
    lpass_cdc_set_port_map(iVar4,7,obj.sm_port_map);
    iVar7 = *piVar8;
    if (iVar7 != 0) {
code_r0x0800db38:
        lpass_cdc_info_create_codec_entry(iVar7,iVar4);
        lpass_cdc_register_wake_irq(iVar4,0);
        if (piVar8[0xc] == 0) {
            iVar7 = snd_soc_rtdcom_lookup(iVar3,"");
            if (iVar7 == 0) {
                _printk(0x8003aa1,"","");
                return -0x16;
            }
            iVar5 = iVar7 + 0xd0;
            iVar9 = *(*(iVar7 + 0x20) + 0x48);
            snd_soc_dapm_ignore_suspend(iVar5,0x80044b2);
            snd_soc_dapm_ignore_suspend(iVar5,0x8003ac7);
            snd_soc_dapm_ignore_suspend(iVar5,"");
            snd_soc_dapm_ignore_suspend(iVar5,"HPHR");
            snd_soc_dapm_ignore_suspend(iVar5,"");
            snd_soc_dapm_ignore_suspend(iVar5,"");
            snd_soc_dapm_ignore_suspend(iVar5,"");
            snd_soc_dapm_ignore_suspend(iVar5,"");
            snd_soc_dapm_sync(iVar5);
            piVar8 = *(*(iVar7 + 0x20) + 0x310);
            iVar5 = *piVar8;
            if (iVar5 == 0) {
                iVar5 = sym.msm_snd_info_create_subdir(*(iVar7 + 0x20),*(iVar9 + 0x5e8));
                if (iVar5 == 0) {
                    _dev_printk(0x80045f2,*(iVar7 + 0x18),"","");
                    return 0;
                }
                *piVar8 = iVar5;
            }
            wcd938x_info_create_codec_entry(iVar5,iVar7);
            iVar1 = wcd938x_get_codec_variant(iVar7);
            _dev_printk(0x80045f2,*(iVar7 + 0x18),"","",iVar1);
            iVar1 = lpass_cdc_rx_set_fir_capability(iVar4,iVar1 == 5);
            if (iVar1 < 0) {
                iVar2 = ___ratelimit(obj.msm_rx_tx_codec_init._rs,"");
                if (iVar2 == 0) {
                    return iVar1;
                }
                _dev_err(*(iVar7 + 0x18),"","",iVar1);
                return iVar1;
            }
        }
        obj.codec_reg_done = 0x1;
        sym.msm_common_dai_link_init(iVar3);
        return iVar1;
    }
    iVar7 = *(*(iVar3 + 8) + 0x48);
    iVar7 = snd_info_create_module_entry(*(iVar7 + 0x188),"",*(iVar7 + 0x5e8));
    if (iVar7 != 0) {
        *(iVar7 + 8) = 0x416d;
        iVar2 = snd_info_register();
        if (-1 < iVar2) {
            *piVar8 = iVar7;
            goto code_r0x0800db38;
        }
        snd_info_free_entry(iVar7);
    }
    _printk(0x8002ced,"");
    return iVar1;
}


// ===== sym.cleanup_module.cfi_jt @ 0x0800a380 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.msm_asoc_machine_probe.52853753f8636579aaf6d6a2c764b9d3.cfi_jt);
    return;
}


// ===== sym.msm_usbc_swap_gnd_mic.52853753f8636579aaf6d6a2c764b9d3.cfi_jt @ 0x0800a388 (size 8) =====

bool sym.msm_usbc_swap_gnd_mic.52853753f8636579aaf6d6a2c764b9d3.cfi_jt(int64_t param_1)

{
    bool bVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(param_1 + 0x20) + 0x310);
    if (*(iVar3 + 0x48) == 0) {
        bVar1 = false;
    }
    else {
        *0x8000718 = 1;
        iVar2 = fsa4480_switch_event(*(iVar3 + 0x48),0);
        bVar1 = iVar2 != 0;
    }
    return bVar1;
}


// ===== sym.kalama_ssr_enable.52853753f8636579aaf6d6a2c764b9d3.cfi_jt @ 0x0800a390 (size 8) =====

void sym.kalama_ssr_enable.52853753f8636579aaf6d6a2c764b9d3.cfi_jt(uint64_t param_1)

{
    uint16_t uVar1;
    int iVar2;
    uint32_t uVar3;
    ulong uVar4;
    char *pcVar5;
    uint32_t uVar6;
    ulong *in_x18;
    code *pcVar7;
    code *unaff_x21;
    code *unaff_x22;
    code *pcVar8;
    int64_t iVar9;
    int64_t iVar10;
    ulong unaff_x30;
    uchar auStack_130 [216];
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_58 = *(iVar10 + 0x5e0);
    pcVar7 = *(param_1 + 0x98);
    if (pcVar7 == NULL) {
        iVar2 = ___ratelimit(obj.kalama_ssr_enable._rs,"");
        if (iVar2 != 0) {
            _dev_err(param_1,"","");
        }
        uVar4 = 0xffffffea;
        goto code_r0x0800e5f8;
    }
    iVar2 = strcmp(*pcVar7,"kalama-stub-snd-card");
    if (iVar2 == 0) {
        _dev_printk(0x80045f2,param_1,"","");
    }
    sym.snd_card_notify_user(1);
    _dev_printk(0x80045f2,param_1,"","");
    iVar10 = *(pcVar7 + 0x310);
    if (iVar10 == 0) {
        pcVar5 = "%s: pdata is NULL \n";
        goto code_r0x0800e8cc;
    }
    unaff_x22 = snd_soc_get_pcm_runtime(pcVar7,*(pcVar7 + 0x150));
    if (unaff_x22 == NULL) {
        memcpy(auStack_130,*(pcVar7 + 0x150),0xd8);
        _dev_printk(0x80045f2,param_1,"","",auStack_130);
        if (*(iVar10 + 0x5c) != 0) goto code_r0x0800e6b0;
code_r0x0800e770:
        unaff_x21 = NULL;
    }
    else {
        if (*(iVar10 + 0x5c) == 0) goto code_r0x0800e770;
code_r0x0800e6b0:
        unaff_x21 = snd_soc_get_pcm_runtime(pcVar7,*(pcVar7 + 0x150) + 0x5e8);
        if (unaff_x21 == NULL) {
            memcpy(auStack_130,*(pcVar7 + 0x150) + 0x5e8,0xd8);
            _dev_printk(0x80045f2,param_1,"","",auStack_130);
        }
    }
    iVar9 = *(iVar10 + 0x88);
    if (iVar9 == 0) {
        pcVar5 = "%s: upd- backend_used is NULL\n";
code_r0x0800e8cc:
        _dev_printk(0x80045f2,param_1,pcVar5,"");
        goto code_r0x0800e8dc;
    }
    iVar2 = strcmp(iVar9,0x800406c);
    if (iVar2 == 0) {
        if (unaff_x21 == NULL) goto code_r0x0800e8dc;
code_r0x0800e7e8:
        pcVar8 = *(*(unaff_x21 + 8) + 0x310);
        unaff_x22 = pcVar8;
        if (pcVar8 == NULL) {
            uVar4 = ___ratelimit(obj.msm_set_upd_config._rs.254,"");
            if (uVar4 != 0) {
                uVar4 = 0x800473c;
                unaff_x22 = unaff_x21;
                goto code_r0x0800ea28;
            }
        }
        else {
            pcVar7 = pcVar8 + 0x74;
            if (((*pcVar7 != 0) && (*(pcVar8 + 0x78) != 0)) && (*(pcVar8 + 0x84) != 0)) {
                iVar2 = strcmp(*(pcVar8 + 0x88),0x800406c);
                if (iVar2 == 0) {
                    if (*(pcVar8 + 0x5c) == 0) {
                        uVar4 = 0x80045d6;
                        unaff_x22 = unaff_x21;
                        goto code_r0x0800ea28;
                    }
                    param_1 = snd_soc_rtdcom_lookup(unaff_x21,"wsa-codec.1");
                    if (param_1 == 0) {
                        _printk(0x8002a7e,"","wsa-codec.1");
                        goto code_r0x0800e8dc;
                    }
                }
                else {
                    param_1 = snd_soc_rtdcom_lookup(unaff_x21,"");
                    if (param_1 == 0) {
                        uVar4 = 0x8004169;
                        unaff_x22 = unaff_x21;
                        goto code_r0x0800ea28;
                    }
                }
                iVar2 = strcmp(*(pcVar8 + 0x88),0x800406c);
                if (iVar2 == 0) {
                    iVar10 = strstr(**(unaff_x21 + 8),"wsa883x");
                    if (iVar10 == 0) {
                        unaff_x21 = sym.__typeid__ZTSFiP17snd_soc_componentE_global_addr;
                    }
                    else {
                        unaff_x21 = sym.wsa883x_codec_get_dev_num.cfi_jt;
                    }
                }
                else {
                    unaff_x21 = sym.wcd938x_codec_get_dev_num.cfi_jt;
                }
                *(pcVar8 + 0x68) = unaff_x21;
                if (2 < unaff_x21 + -0x800a478 >> 3) goto code_r0x0800ea5c;
                goto code_r0x0800e96c;
            }
            uVar4 = ___ratelimit(obj.msm_set_upd_config._rs.256,"");
            if (uVar4 != 0) {
                uVar4 = 0x8002c7d;
                unaff_x22 = unaff_x21;
                goto code_r0x0800ea28;
            }
        }
    }
    else {
        iVar2 = strcmp(iVar9,0x8003356);
        if (iVar2 == 0) {
            unaff_x21 = unaff_x22;
            if (unaff_x22 != NULL) goto code_r0x0800e7e8;
            if (*(iVar10 + 0x60) == 0) goto code_r0x0800e8dc;
            uVar4 = ___ratelimit(obj.msm_set_upd_config._rs,"");
            if (uVar4 != 0) {
                uVar4 = 0x80039fe;
                pcVar8 = unaff_x22;
                goto code_r0x0800ea28;
            }
        }
        else {
            uVar4 = ___ratelimit(obj.kalama_ssr_enable._rs.251,"");
            if (uVar4 != 0) {
                _dev_err(*(pcVar7 + 0x40),"","");
                goto code_r0x0800e8dc;
            }
        }
    }
code_r0x0800e5f8:
    while( true ) {
        iVar10 = sp_el0;
        if (*(iVar10 + 0x5e0) == iStack_58) {
            return;
        }
        __stack_chk_fail(uVar4);
        pcVar8 = unaff_x22;
code_r0x0800ea5c:
        __cfi_slowpath_diag(0xf0d2ea9a64921857,unaff_x21,0x8002430);
code_r0x0800e96c:
        uVar3 = (*unaff_x21)(param_1);
        uVar3 = uVar3 & 0xff;
        param_1 = uVar3;
        unaff_x22 = pcVar8;
        if (6 < uVar3) goto code_r0x0800e980;
        uVar1 = *(pcVar8 + 0x84);
        *(pcVar8 + 0x7c) = uVar1;
        *(pcVar8 + 0x80) = uVar1;
        iVar2 = strcmp(*(pcVar8 + 0x88),0x800406c);
        uVar3 = uVar1 | uVar3 << 0x14;
        unaff_x21 = uVar3;
        uVar6 = 0x1010000;
        if (iVar2 != 0) {
            uVar6 = 0x80010000;
        }
        *(pcVar8 + 0x7c) = uVar6 | uVar3;
        *(pcVar8 + 0x80) = uVar3 | 0x10000;
        iVar2 = audio_prm_set_cdc_earpa_duty_cycling_req(pcVar7,1);
        if (-1 < iVar2) break;
        uVar4 = ___ratelimit(obj.msm_set_upd_config._rs.263,"");
        if (uVar4 != 0) {
            uVar4 = 0x8003e43;
            unaff_x22 = unaff_x21;
code_r0x0800ea28:
            _printk(uVar4,"");
            unaff_x21 = unaff_x22;
            unaff_x22 = pcVar8;
            break;
        }
    }
code_r0x0800e8dc:
    uVar4 = 0;
    goto code_r0x0800e5f8;
code_r0x0800e980:
    uVar4 = ___ratelimit(obj.msm_set_upd_config._rs.261,"");
    if (uVar4 == 0) goto code_r0x0800e5f8;
    _printk(0x800261a,"",param_1);
    goto code_r0x0800e8dc;
}


// ===== sym.msm_audio_ssr_compare.52853753f8636579aaf6d6a2c764b9d3.cfi_jt @ 0x0800a398 (size 8) =====

bool sym.msm_audio_ssr_compare.52853753f8636579aaf6d6a2c764b9d3.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _dev_printk(0x80045f2,param_1,"","",*(param_1 + 0x2f0),param_2);
    return *(param_1 + 0x2f0) != 0 && *(param_1 + 0x2f0) == param_2;
}


// ===== sym.msm_dmic_event.52853753f8636579aaf6d6a2c764b9d3.cfi_jt @ 0x0800a3a0 (size 8) =====

uint64_t sym.msm_dmic_event.52853753f8636579aaf6d6a2c764b9d3.cfi_jt(int64_t param_1,ulong param_2,int param_3)

{
    int iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    int64_t arg1;
    ulong *puVar5;
    char *pcVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar7;
    int64_t iVar8;
    ulong *puVar9;
    int *unaff_x21;
    ulong *puVar10;
    ulong unaff_x30;
    ulong uStack_108;
    ulong uStack_100;
    int64_t iStack_f8;
    uchar **ppuStack_f0;
    code *pcStack_e8;
    ulong *puStack_e0;
    int64_t iStack_d8;
    uint uStack_c8;
    ushort uStack_c4;
    uint uStack_c0;
    ushort uStack_bc;
    uint uStack_b8;
    ushort uStack_b4;
    uint uStack_b0;
    ushort uStack_ac;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    int *piStack_60;
    int64_t iStack_50;
    uint64_t uStack_48;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iVar8 = *(param_1 + 0x28);
    uStack_3c = 0;
    iVar3 = strpbrk(*(param_1 + 8),"");
    if (iVar3 == 0) {
        iVar1 = ___ratelimit(obj.msm_dmic_event._rs,"msm_dmic_event");
        if (iVar1 != 0) {
            uVar4 = *(iVar8 + -0xb8);
            pcVar6 = "%s: widget not found\n";
code_r0x0800dee0:
            _dev_err(uVar4,pcVar6,"msm_dmic_event");
        }
code_r0x0800deec:
        uVar7 = 0xffffffea;
    }
    else {
        iVar1 = kstrtouint(iVar3,10,&uStack_3c);
        if (iVar1 < 0) {
            iVar1 = ___ratelimit(obj.msm_dmic_event._rs.90,"msm_dmic_event");
            if (iVar1 != 0) {
                uVar4 = *(iVar8 + -0xb8);
                pcVar6 = "%s: Invalid DMIC line on the codec\n";
                goto code_r0x0800dee0;
            }
            goto code_r0x0800deec;
        }
        if (7 < uStack_3c) {
            iVar1 = ___ratelimit(obj.msm_dmic_event._rs.92,"msm_dmic_event");
            if (iVar1 != 0) {
                uVar4 = *(iVar8 + -0xb8);
                pcVar6 = "%s: Invalid DMIC Selection\n";
                goto code_r0x0800dee0;
            }
            goto code_r0x0800deec;
        }
        iVar3 = uStack_3c * 8;
        puVar9 = iVar8 + -0xb8;
        unaff_x21 = *(iVar3 + 0x80094c8);
        iVar8 = *(*(*(iVar8 + -0xb0) + 0x310) + *(iVar3 + 0x8009488));
        _dev_printk(0x80045f2,*puVar9,"","msm_dmic_event",param_3,uStack_3c,*unaff_x21);
        if (param_3 == 8) {
            iVar1 = *unaff_x21;
            *unaff_x21 = iVar1 + -1;
            if ((iVar1 + -1 == 0) && (uVar2 = msm_cdc_pinctrl_select_sleep_state(iVar8), uVar2 < 0)) {
                uVar7 = uVar2;
                iVar1 = ___ratelimit(obj.msm_dmic_event._rs.98,"msm_dmic_event");
                if (iVar1 != 0) {
                    uVar4 = 0x8002e4a;
code_r0x0800e040:
                    _printk(uVar4,"msm_dmic_event","");
                }
            }
            else {
code_r0x0800dfe0:
                uVar7 = 0;
            }
        }
        else {
            if (param_3 != 1) {
                iVar1 = ___ratelimit(obj.msm_dmic_event._rs.100,"msm_dmic_event");
                if (iVar1 != 0) {
                    _printk(0x8002e74,"msm_dmic_event",param_3);
                }
                goto code_r0x0800deec;
            }
            iVar1 = *unaff_x21;
            *unaff_x21 = iVar1 + 1;
            if ((iVar1 != 0) || (uVar2 = msm_cdc_pinctrl_select_active_state(iVar8), -1 < uVar2))
            goto code_r0x0800dfe0;
            uVar7 = uVar2;
            iVar1 = ___ratelimit(obj.msm_dmic_event._rs.95,"msm_dmic_event");
            if (iVar1 != 0) {
                uVar4 = 0x80028dc;
                goto code_r0x0800e040;
            }
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return uVar7;
    }
    arg1 = __stack_chk_fail();
    *extraout_x18 = sym.msm_int_wsa_init;
    pcStack_68 = sym.msm_int_wsa_init;
    iVar3 = sp_el0;
    iStack_78 = *(iVar3 + 0x5e0);
    puVar9 = *(arg1 + 8);
    puStack_70 = &stack0xffffffffffffffd0;
    piStack_60 = unaff_x21;
    iStack_50 = iVar8;
    uStack_48 = uVar7;
    iVar3 = strstr(*puVar9,"wsa883x");
    if (iVar3 == 0) {
        uStack_ac = 0x504;
        uStack_b0 = 0x3020100;
        uStack_b4 = 0x504;
        uStack_b8 = 0x3020100;
        uStack_bc = 0xd0a;
        puVar10 = puVar9[0x62];
        uStack_c8 = 0x7060504;
        uStack_c0 = 0x7030201;
        uStack_c4 = 0xd0b;
        uStack_90 = *0x8009428;
        uStack_88 = *0x8009430;
        uStack_80 = *0x8009438;
        uStack_a8 = *0x8009440;
        uStack_a0 = *0x8009448;
        uStack_98 = *0x8009450;
        if (*(puVar10 + 0x5c) != 0) {
            puVar5 = snd_soc_rtdcom_lookup(arg1,"wsa-codec.1");
            if (puVar5 == NULL) {
                uVar4 = 0x8003320;
                pcVar6 = "";
code_r0x0800e44c:
                _printk(uVar4,pcVar6);
                uVar7 = 0xffffffea;
                goto code_r0x0800e3ac;
            }
            wsa884x_set_channel_map(puVar5,&uStack_b0,6,&uStack_a8,&uStack_90,&uStack_c0);
            wsa884x_codec_info_create_codec_entry(*puVar10,puVar5);
            puVar9 = puVar5;
            if (1 < *(puVar10 + 0x5c)) {
                puVar9 = snd_soc_rtdcom_lookup(arg1,"wsa-codec.2");
                if (puVar9 == NULL) {
                    uVar4 = 0x80046e4;
                    pcVar6 = "";
                    puVar9 = puVar5;
                    goto code_r0x0800e44c;
                }
                wsa884x_set_channel_map(puVar9,&uStack_b8,6,&uStack_a8,&uStack_90,&uStack_c8);
                wsa884x_codec_info_create_codec_entry(*puVar10,puVar9);
                if (2 < *(puVar10 + 0x5c)) {
                    puVar5 = snd_soc_rtdcom_lookup(arg1,"");
                    if (puVar5 == NULL) {
                        uVar4 = 0x8003987;
                        pcVar6 = "";
                        goto code_r0x0800e44c;
                    }
                    wsa884x_set_channel_map(puVar5,&uStack_b0,6,&uStack_a8,&uStack_90,&uStack_c0);
                    wsa884x_codec_info_create_codec_entry(*puVar10,puVar5);
                    puVar9 = puVar5;
                    if (3 < *(puVar10 + 0x5c)) {
                        puVar9 = snd_soc_rtdcom_lookup(arg1,"");
                        if (puVar9 == NULL) {
                            uVar4 = 0x8003fa4;
                            pcVar6 = "";
                            puVar9 = puVar5;
                            goto code_r0x0800e44c;
                        }
                        wsa884x_set_channel_map(puVar9,&uStack_b8,6,&uStack_a8,&uStack_90,&uStack_c8);
                        wsa884x_codec_info_create_codec_entry(*puVar10,puVar9);
                    }
                }
            }
        }
    }
    else {
        puVar10 = puVar9[0x62];
        uStack_b0 = 0x3020100;
        uStack_b8 = 0x3020100;
        uStack_c0 = 0xa030201;
        uStack_c8 = 0xb060504;
        uStack_90 = *0x8006760;
        uStack_88 = *0x8006768;
        uStack_a8 = *0x8006770;
        uStack_a0 = *0x8006778;
        if (*(puVar10 + 0x5c) != 0) {
            puVar5 = snd_soc_rtdcom_lookup(arg1,"wsa-codec.1");
            if (puVar5 == NULL) {
                uVar4 = 0x8003320;
code_r0x0800e444:
                pcVar6 = "msm_int_wsa883x_init";
                goto code_r0x0800e44c;
            }
            wsa883x_set_channel_map(puVar5,&uStack_b0,4,&uStack_a8,&uStack_90,&uStack_c0);
            wsa883x_codec_info_create_codec_entry(*puVar10,puVar5);
            puVar9 = puVar5;
            if (1 < *(puVar10 + 0x5c)) {
                puVar9 = snd_soc_rtdcom_lookup(arg1,"wsa-codec.2");
                if (puVar9 == NULL) {
                    uVar4 = 0x80046e4;
                    puVar9 = puVar5;
                    goto code_r0x0800e444;
                }
                wsa883x_set_channel_map(puVar9,&uStack_b8,4,&uStack_a8,&uStack_90,&uStack_c8);
                wsa883x_codec_info_create_codec_entry(*puVar10,puVar9);
                if (2 < *(puVar10 + 0x5c)) {
                    puVar5 = snd_soc_rtdcom_lookup(arg1,"");
                    if (puVar5 == NULL) {
                        uVar4 = 0x8003987;
                        goto code_r0x0800e444;
                    }
                    wsa883x_set_channel_map(puVar5,&uStack_b0,4,&uStack_a8,&uStack_90,&uStack_c0);
                    wsa883x_codec_info_create_codec_entry(*puVar10,puVar5);
                    puVar9 = puVar5;
                    if (3 < *(puVar10 + 0x5c)) {
                        puVar9 = snd_soc_rtdcom_lookup(arg1,"");
                        if (puVar9 == NULL) {
                            uVar4 = 0x8003fa4;
                            puVar9 = puVar5;
                            goto code_r0x0800e444;
                        }
                        wsa883x_set_channel_map(puVar9,&uStack_b8,4,&uStack_a8,&uStack_90,&uStack_c8);
                        wsa883x_codec_info_create_codec_entry(*puVar10,puVar9);
                    }
                }
            }
        }
    }
    sym.msm_common_dai_link_init(arg1);
    uVar7 = 0;
code_r0x0800e3ac:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_78) {
        return uVar7;
    }
    iVar8 = __stack_chk_fail(uVar7);
    *extraout_x18_00 = sym.msm_wcn_init;
    pcStack_e8 = sym.msm_wcn_init;
    iVar3 = sp_el0;
    iStack_f8 = *(iVar3 + 0x5e0);
    uStack_108 = 0xa00000009f;
    uStack_100 = 0x9e0000009d;
    ppuStack_f0 = &puStack_70;
    puStack_e0 = puVar9;
    iStack_d8 = arg1;
    uVar7 = snd_soc_dai_set_channel_map(*(*(iVar8 + 0x600) + *(iVar8 + 0x60c) * 8),2,&uStack_108,2,&uStack_100);
    if (uVar7 == 0) {
        sym.msm_common_dai_link_init(iVar8);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_f8) {
        return uVar7 & 0xffffffff;
    }
    __stack_chk_fail();
    return 0;
}


// ===== sym.msm_common_snd_startup.cfi_jt @ 0x0800a3a8 (size 8) =====

int sym.msm_common_snd_startup.cfi_jt(int64_t param_1)

{
    int *piVar1;
    char cVar2;
    bool bVar3;
    code *pcVar4;
    uint32_t uVar5;
    int iVar6;
    int64_t iVar7;
    int64_t *piVar8;
    ulong *in_x18;
    uint64_t uVar9;
    int64_t iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar10 = *(param_1 + 0x10);
    iVar7 = sym.msm_common_get_pdata(*(iVar10 + 8));
    uVar5 = sym.get_mi2s_tdm_auxpcm_intf_index(*(*(iVar10 + 0x10) + 8));
    uVar9 = uVar5;
    _dev_printk(0x80045f2,*(*(iVar10 + 8) + 0x40),"%s: substream = %s  stream = %d\n","",param_1 + 0x1c,
                *(param_1 + 0x3c));
    if (iVar7 == 0) {
        _dev_err(*(*(iVar10 + 8) + 0x40),"%s: pdata is NULL\n","");
        return -0x16;
    }
    if (uVar5 < 0) {
        return 0;
    }
    if (7 < uVar5) {
code_r0x0800af44:
    //WARNING: Does not return
        pcVar4 = SoftwareBreakpoint(0x5512,0x800af48);
        (*pcVar4)();
    }
    iVar10 = iVar7 + uVar9 * 0x30 + 0xd8;
    mutex_lock(iVar10);
    if (uVar5 == 7) goto code_r0x0800af44;
    piVar8 = iVar7 + uVar9 * 8 + 0xa0;
    if (*piVar8 != 0) {
        piVar1 = iVar7 + uVar9 * 4 + 0x22c;
        if ((*piVar1 == 0) && (iVar6 = msm_cdc_pinctrl_select_active_state(*piVar8), iVar6 != 0)) {
            _printk(0x80029ac,"",iVar6);
            goto code_r0x0800aed4;
        }
        Hint_Prefetch(piVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
                *piVar1 = *piVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
    }
    iVar6 = 0;
code_r0x0800aed4:
    mutex_unlock(iVar10);
    return iVar6;
}


// ===== sym.snd_soc_info_enum_double.cfi_jt @ 0x0800a3b0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_info_enum_double.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.msm_channel_map_info.cfi_jt @ 0x0800a3b8 (size 8) =====

ulong sym.msm_channel_map_info.cfi_jt(ulong param_1,int64_t param_2)

{
    *(param_2 + 0x40) = 4;
    *(param_2 + 0x48) = 0x50;
    return 0;
}


// ===== sym.snd_soc_info_volsw.cfi_jt @ 0x0800a3c0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_info_volsw.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.kalama_ssr_disable.52853753f8636579aaf6d6a2c764b9d3.cfi_jt @ 0x0800a3c8 (size 8) =====

void sym.kalama_ssr_disable.52853753f8636579aaf6d6a2c764b9d3.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    ulong *puVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = *(param_1 + 0x98);
    if (puVar2 == NULL) {
        iVar1 = ___ratelimit(obj.kalama_ssr_disable._rs,"");
        if (iVar1 != 0) {
            _dev_err(param_1,"","");
        }
    }
    else {
        _dev_printk(0x80045f2,param_1,"%s: setting snd_card to OFFLINE\n","");
        sym.snd_card_notify_user(0);
        iVar1 = strcmp(*puVar2,"kalama-stub-snd-card");
        if (iVar1 == 0) {
            _dev_printk(0x80045f2,param_1,"","");
        }
    }
    return;
}


// ===== sym.msm_qos_ctl_get.9b343f2a3ce35e977719d88add93e782.cfi_jt @ 0x0800a3d0 (size 8) =====

ulong sym.msm_qos_ctl_get.9b343f2a3ce35e977719d88add93e782.cfi_jt(ulong param_1,int64_t param_2)

{
    *(param_2 + 0x48) = _segment.ehdr;
    return 0;
}


// ===== sym.msm_lpi_logging_enable_put.9b343f2a3ce35e977719d88add93e782.cfi_jt @ 0x0800a3d8 (size 8) =====

ulong sym.msm_lpi_logging_enable_put.9b343f2a3ce35e977719d88add93e782.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    obj.lpi_pcm_logging_enable = *(param_2 + 0x48) != 0;
    _printk(0x8004597,"msm_lpi_logging_enable_put");
    audio_prm_set_lpi_logging_status(obj.lpi_pcm_logging_enable);
    return 0;
}


// ===== sym.msm_channel_map_get.cfi_jt @ 0x0800a3e0 (size 8) =====

uint64_t sym.msm_channel_map_get.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    code *pcVar3;
    uint32_t uVar4;
    int iVar5;
    uint32_t uVar6;
    uint32_t *puVar7;
    int64_t iVar8;
    uint64_t uVar9;
    int64_t iVar10;
    int64_t iVar11;
    uint *puVar12;
    int64_t *piVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    int64_t iVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t unaff_x19;
    uint32_t *puVar17;
    ulong uVar18;
    int64_t iVar19;
    uint64_t unaff_x22;
    ulong uVar20;
    uint64_t unaff_x23;
    uint64_t unaff_x24;
    uint64_t unaff_x25;
    int64_t iVar21;
    uint64_t unaff_x26;
    ulong unaff_x30;
    uchar auVar22 [16];
    ulong uStack_2a0;
    ulong uStack_298;
    int64_t iStack_290;
    ulong uStack_288;
    ulong uStack_280;
    ulong uStack_278;
    ulong uStack_270;
    ulong uStack_268;
    ulong uStack_260;
    ulong uStack_258;
    ulong uStack_250;
    ulong uStack_248;
    ulong uStack_240;
    ulong uStack_238;
    ulong uStack_230;
    ulong uStack_228;
    unkbyte5 Stack_220;
    unkbyte3 Stack_21b;
    unkbyte5 Stack_218;
    ulong uStack_210;
    unkbyte5 Stack_208;
    unkbyte3 Stack_203;
    unkbyte5 Stack_200;
    int64_t iStack_1f8;
    uchar **ppuStack_1f0;
    code *pcStack_1e8;
    uint64_t uStack_1e0;
    uint64_t uStack_1d8;
    uint64_t uStack_1d0;
    uint64_t uStack_1c8;
    uint64_t uStack_1c0;
    uint32_t *puStack_1b8;
    uint64_t uStack_1b0;
    int64_t *piStack_1a8;
    ulong uStack_1a0;
    ulong uStack_198;
    ulong uStack_190;
    ulong uStack_188;
    ulong uStack_180;
    ulong uStack_178;
    unkbyte5 Stack_170;
    unkbyte3 Stack_16b;
    unkbyte5 Stack_168;
    ulong uStack_160;
    unkbyte5 Stack_158;
    unkbyte3 Stack_153;
    unkbyte5 Stack_150;
    int64_t iStack_148;
    uchar *puStack_140;
    code *pcStack_138;
    int64_t iStack_130;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    uint32_t auStack_108 [20];
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
    iVar8 = sp_el0;
    iStack_68 = *(iVar8 + 0x5e0);
    puVar17 = *(param_1 + 0x80);
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
    auStack_108[0x10] = 0;
    auStack_108[0x11] = 0;
    auStack_108[0x12] = 0;
    auStack_108[0x13] = 0;
    auStack_108[0xc] = 0;
    auStack_108[0xd] = 0;
    auStack_108[0xe] = 0;
    auStack_108[0xf] = 0;
    auStack_108[8] = 0;
    auStack_108[9] = 0;
    auStack_108[10] = 0;
    auStack_108[0xb] = 0;
    auStack_108[4] = 0;
    auStack_108[5] = 0;
    auStack_108[6] = 0;
    auStack_108[7] = 0;
    auStack_108[0] = 0;
    auStack_108[1] = 0;
    auStack_108[2] = 0;
    auStack_108[3] = 0;
    uStack_110 = 0;
    if (puVar17 == NULL) {
        _printk(0x800454b,"");
code_r0x0800beac:
        uVar15 = 0xffffffea;
        param_2 = unaff_x19;
    }
    else if (*puVar17 == 1) {
        uVar4 = snd_soc_dai_get_channel_map(*(puVar17 + 2),&uStack_110,auStack_108,&uStack_110 + 4,&uStack_b8);
        uVar15 = uVar4;
        if (uVar4 == 0) {
            uVar4 = uStack_110._4_4_;
            unaff_x23 = uStack_110._4_4_;
            if (uStack_110 != 0 || uStack_110._4_4_ != 0) {
                uVar6 = uStack_110;
                if (uStack_110._4_4_ != 0) {
                    uVar6 = uStack_110._4_4_;
                }
                unaff_x22 = uVar6;
                if (2 < uVar6) {
                    _printk(0x8002be7,"",uVar6);
                    unaff_x19 = param_2;
                    goto code_r0x0800beac;
                }
                iVar5 = uVar6 * 4 + 4;
                puVar7 = __kmalloc(iVar5,0xdc0);
                if (puVar7 == NULL) goto code_r0x0800be10;
                *puVar7 = uVar6;
                if (uVar6 != 0) {
                    puVar17 = auStack_108;
                    if (uVar4 != 0) {
                        puVar17 = &uStack_b8;
                    }
                    puVar7[1] = *puVar17;
                    if (uVar6 != 1) {
                        puVar17 = auStack_108;
                        if (uVar4 != 0) {
                            puVar17 = &uStack_b8;
                        }
                        puVar7[2] = *(puVar17 | 4);
                    }
                }
                memcpy(param_2 + 0x48,puVar7,iVar5);
                uVar15 = 0;
                goto code_r0x0800be04;
            }
        }
        _printk(0x8003b32,"",1);
    }
    else if (*puVar17 == 2) {
        uVar15 = puVar17[1];
        unaff_x22 = 0;
        unaff_x23 = 0;
        unaff_x24 = 0;
        unaff_x25 = 0;
        uStack_120 = 0;
        uStack_118 = 0;
        if (puVar17[1] != 0) {
            unaff_x26 = 0;
            do {
                if (unaff_x26 == 8) {
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(0x5512,0x800bef4);
                    (*pcVar3)();
                }
                if (*(puVar17 + unaff_x26 * 2 + 2) != 0) {
                    uStack_120 = 0;
                    uStack_118 = 0;
                    uVar4 = snd_soc_dai_get_channel_map
                                      (*(puVar17 + unaff_x26 * 2 + 2),&uStack_120,&uStack_118,&uStack_120 + 4,
                                       &uStack_118 + 4);
                    if ((uVar4 != 0xfffffdf4) && (uVar15 = uVar4, uVar4 != 0)) {
                        _printk(0x8002ca8,"",2,uVar15);
                        goto code_r0x0800beb0;
                    }
                    uVar4 = uStack_120._4_4_ + unaff_x25;
                    unaff_x25 = uVar4;
                    uVar6 = uStack_120 + unaff_x24;
                    unaff_x24 = uVar6;
                    uVar1 = uStack_118._4_4_ | unaff_x23;
                    unaff_x23 = uVar1;
                    uVar2 = uStack_118 | unaff_x22;
                    unaff_x22 = uVar2;
                    uVar15 = puVar17[1];
                    uStack_110 = CONCAT44(uVar4,uVar6);
                    uStack_b8 = CONCAT44(uStack_b8._4_4_,uVar1);
                    auStack_108[0] = uVar2;
                }
                unaff_x26 = unaff_x26 + 1;
            } while (unaff_x26 < uVar15);
        }
        uVar6 = unaff_x25;
        uVar4 = unaff_x22;
        if (uVar6 == 0 && unaff_x24 == 0) {
            _printk(0x800372f,"",2,0,0);
            uVar15 = 0;
        }
        else {
            iVar8 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar8 = 0x30;
            }
            puVar7 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar8),0xdc0,8);
            if (puVar7 != NULL) {
                uVar1 = unaff_x24;
                if (uVar6 != 0) {
                    uVar4 = unaff_x23;
                    uVar1 = uVar6;
                }
                uVar15 = 0;
                *puVar7 = uVar1;
                puVar7[1] = uVar4;
                *(param_2 + 0x48) = *puVar7;
                goto code_r0x0800be04;
            }
code_r0x0800be10:
            uVar15 = 0xfffffff4;
        }
    }
    else {
        _printk(0x8003b65,"");
        puVar7 = NULL;
        uVar15 = 0xffffffea;
code_r0x0800be04:
        kfree(puVar7);
        puVar17 = puVar7;
    }
code_r0x0800beb0:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_68) {
        return uVar15;
    }
    auVar22 = __stack_chk_fail();
    piVar13 = auVar22._8_8_;
    *extraout_x18 = sym.msm_common_get_backend_name;
    pcStack_138 = sym.msm_common_get_backend_name;
    iVar8 = sp_el0;
    iStack_148 = *(iVar8 + 0x5e0);
    Stack_150 = 0;
    uStack_160 = 0;
    Stack_158 = 0;
    Stack_153 = 0;
    Stack_168 = 0;
    uStack_178 = 0;
    Stack_170 = 0;
    Stack_16b = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_1a0 = 0;
    puStack_140 = &stack0xffffffffffffffa0;
    iStack_130 = param_2;
    sscanf(auVar22._0_8_,"",&uStack_160,&uStack_1a0);
    uVar14 = 0x15;
    iVar8 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar8 = 0x30;
    }
    iVar8 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar8),0xdc0,0x15);
    *piVar13 = iVar8;
    uVar9 = 0;
    if (iVar8 != 0) {
        uVar14 = 0x15;
        uVar9 = strlcpy(iVar8,&uStack_160,0x15);
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_148) {
        return uVar9;
    }
    iVar10 = __stack_chk_fail();
    *extraout_x18_00 = sym.msm_common_dai_link_init;
    pcStack_1e8 = sym.msm_common_dai_link_init;
    iVar8 = sp_el0;
    iStack_1f8 = *(iVar8 + 0x5e0);
    iVar8 = *(iVar10 + 0x10);
    iVar21 = *(*(iVar10 + 0x600) + *(iVar10 + 0x60c) * 8);
    uStack_270 = _reloc.msm_channel_map_get.cfi_jt;
    uStack_268 = *0x80093b8;
    uVar18 = *(*(iVar10 + 8) + 0x40);
    uStack_260 = *0x80093c0;
    uStack_258 = *0x80093c8;
    iStack_290 = *0x8009390;
    uStack_288 = *0x8009398;
    uStack_280 = *0x80093a0;
    uStack_278 = _reloc.msm_channel_map_info.cfi_jt;
    uStack_2a0 = *0x8009380;
    uStack_298 = *0x8009388;
    ppuStack_1f0 = &puStack_140;
    uStack_1e0 = unaff_x26;
    uStack_1d8 = unaff_x25;
    uStack_1d0 = unaff_x24;
    uStack_1c8 = unaff_x23;
    uStack_1c0 = unaff_x22;
    puStack_1b8 = puVar17;
    uStack_1b0 = uVar15;
    piStack_1a8 = piVar13;
    if (iVar21 == 0) {
        uVar18 = 0x80041ff;
    }
    else {
        uVar20 = *(iVar21 + 0x58);
        Stack_200 = 0;
        uStack_210 = 0;
        Stack_208 = 0;
        Stack_203 = 0;
        Stack_218 = 0;
        uStack_228 = 0;
        Stack_220 = 0;
        Stack_21b = 0;
        uStack_238 = 0;
        uStack_230 = 0;
        uStack_248 = 0;
        uStack_240 = 0;
        uStack_250 = 0;
        sscanf(*(iVar8 + 8),"",&uStack_210,&uStack_250);
        uVar14 = 0x15;
        iVar11 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar11 = 0x30;
        }
        iVar11 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar11),0xdc0,0x15);
        if (iVar11 != 0) {
            strlcpy(iVar11,&uStack_210,0x15);
            uVar14 = 0xdc0;
            puVar12 = devm_kmalloc(uVar18,0x48,0xdc0);
            if (puVar12 == NULL) {
code_r0x0800c178:
                uVar4 = 0xfffffff4;
            }
            else {
                uVar14 = 4;
                iVar5 = strncmp(iVar11,"",4);
                if (iVar5 == 0) {
code_r0x0800c15c:
                    iVar5 = strlen(*(iVar8 + 8));
                    iVar19 = __kmalloc(iVar5 + 0xd,0xdc0);
                    if (iVar19 == 0) goto code_r0x0800c178;
                    snprintf(iVar19,iVar5 + 0xd,"",*(iVar8 + 8),"Channel Map");
                    uStack_258 = 0;
                    iStack_290 = iVar19;
                    _printk(0x80032a1,iVar19);
                    uVar14 = 1;
                    uVar4 = snd_soc_add_component_controls(uVar20,&uStack_2a0,1);
                    iVar8 = snd_soc_card_get_kcontrol(*(iVar10 + 8),iVar19);
                    if (iVar8 != 0) {
                        uVar14 = 4;
                        *(puVar12 + 2) = iVar21;
                        puVar12[1] = 1;
                        iVar5 = strncmp(iVar11,"",4);
                        if (iVar5 == 0) {
                            *puVar12 = 1;
                        }
                        else {
                            uVar6 = *(iVar10 + 0x608);
                            *puVar12 = 2;
                            if ((uVar6 < 9) && (puVar12[1] = uVar6, uVar6 != 0)) {
                                uVar1 = *(iVar10 + 0x60c);
                                iVar21 = *(iVar10 + 0x600);
                                iVar16 = *(iVar21 + uVar1 * 8);
                                if ((((iVar16 != 0) &&
                                     (((*(puVar12 + 2) = iVar16, uVar6 != 1 &&
                                       (iVar16 = *(iVar21 + (uVar1 + 1) * 8), iVar16 != 0)) &&
                                      (*(puVar12 + 4) = iVar16, uVar6 != 2)))) &&
                                    ((((iVar16 = *(iVar21 + (uVar1 + 2) * 8), iVar16 != 0 &&
                                       (*(puVar12 + 6) = iVar16, uVar6 != 3)) &&
                                      (iVar16 = *(iVar21 + (uVar1 + 3) * 8), iVar16 != 0)) &&
                                     ((*(puVar12 + 8) = iVar16, uVar6 != 4 &&
                                      (iVar16 = *(iVar21 + (uVar1 + 4) * 8), iVar16 != 0)))))) &&
                                   ((*(puVar12 + 10) = iVar16, uVar6 != 5 &&
                                    ((((iVar16 = *(iVar21 + (uVar1 + 5) * 8), iVar16 != 0 &&
                                       (*(puVar12 + 0xc) = iVar16, uVar6 != 6)) &&
                                      (iVar16 = *(iVar21 + (uVar1 + 6) * 8), iVar16 != 0)) &&
                                     ((*(puVar12 + 0xe) = iVar16, uVar6 != 7 &&
                                      (iVar21 = *(iVar21 + (uVar1 + 7) * 8), iVar21 != 0)))))))) {
                                    *(puVar12 + 0x10) = iVar21;
                                }
                            }
                        }
                        *(iVar8 + 0x80) = puVar12;
                        goto code_r0x0800c110;
                    }
                    _printk(0x8003f35,iVar19);
                    uVar4 = 0xffffffea;
                }
                else {
                    uVar14 = 9;
                    iVar5 = strncmp(iVar11,"",9);
                    if (iVar5 == 0) goto code_r0x0800c15c;
                    uVar4 = 0;
                    iVar19 = 0;
code_r0x0800c110:
                    if ((obj.msm_common_snd_init.__key & 1) == 0) {
                        iVar8 = snd_soc_rtdcom_lookup(iVar10,"lpass-cdc");
                        if (iVar8 == 0) {
                            _printk(0x800350d,"");
                        }
                        else {
                            uVar14 = 3;
                            uVar6 = snd_soc_add_component_controls(iVar8,obj.card_mixer_controls,3);
                            if (uVar6 < 0) {
                                uVar14 = uVar6;
                                _printk(0x800433f,"",uVar14);
                            }
                            else {
                                obj.msm_common_snd_init.__key = 0x1;
                            }
                        }
                    }
                }
                if (iVar19 != 0) {
                    kfree(iVar19);
                }
            }
            kfree(iVar11);
            goto code_r0x0800c184;
        }
        uVar18 = 0x80036c2;
    }
    _printk(uVar18,"");
    uVar4 = 0xffffffea;
code_r0x0800c184:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_1f8) {
        __stack_chk_fail();
        *extraout_x18_01 = sym.snd_card_sysfs_show;
        iVar5 = snprintf(uVar14,0x20,0x8002491,*(_segment.ehdr + 0x60));
        return iVar5;
    }
    return uVar4;
}


// ===== sym.usbhs_direction_get.52853753f8636579aaf6d6a2c764b9d3.cfi_jt @ 0x0800a3e8 (size 8) =====

ulong sym.usbhs_direction_get.52853753f8636579aaf6d6a2c764b9d3.cfi_jt(ulong param_1,int64_t param_2)

{
    *(param_2 + 0x48) = *0x8000718;
    return 0;
}


// ===== sym.msm_vote_against_sleep_ctl_put.9b343f2a3ce35e977719d88add93e782.cfi_jt @ 0x0800a3f0 (size 8) =====

int sym.msm_vote_against_sleep_ctl_put.9b343f2a3ce35e977719d88add93e782.cfi_jt(ulong param_1,int64_t param_2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    obj.vote_against_sleep_enable = *(param_2 + 0x48) != 0;
    _printk(0x8004070,"",obj.vote_against_sleep_enable,_segment.ehdr);
    if (obj.vote_against_sleep_enable == 0x0) {
        if (_segment.ehdr == 1) {
            iVar1 = audio_prm_set_vote_against_sleep(0);
        }
        else {
            iVar1 = 0;
        }
        if (_segment.ehdr != 0) {
            _segment.ehdr = _segment.ehdr + -1;
        }
    }
    else if (_segment.ehdr == 0) {
        _segment.ehdr = _segment.ehdr + 1;
        iVar1 = audio_prm_set_vote_against_sleep(1);
        if (iVar1 < 0) {
            _segment.ehdr = _segment.ehdr + -1;
            _printk(0x8002d95,"",iVar1);
        }
    }
    else {
        iVar1 = 0;
        _segment.ehdr = _segment.ehdr + 1;
    }
    _printk(0x8002fe1,"",iVar1);
    return iVar1;
}


// ===== sym.msm_lpi_logging_enable_get.9b343f2a3ce35e977719d88add93e782.cfi_jt @ 0x0800a3f8 (size 8) =====

ulong sym.msm_lpi_logging_enable_get.9b343f2a3ce35e977719d88add93e782.cfi_jt(ulong param_1,int64_t param_2)

{
    *(param_2 + 0x48) = obj.lpi_pcm_logging_enable;
    return 0;
}


// ===== sym.msm_vote_against_sleep_ctl_get.9b343f2a3ce35e977719d88add93e782.cfi_jt @ 0x0800a400 (size 8) =====

ulong sym.msm_vote_against_sleep_ctl_get.9b343f2a3ce35e977719d88add93e782.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(param_2 + 0x48) = obj.vote_against_sleep_enable;
    _printk(0x8003a3a,"");
    return 0;
}


// ===== sym.msm_qos_ctl_put.9b343f2a3ce35e977719d88add93e782.cfi_jt @ 0x0800a408 (size 8) =====

//WARNING: Removing unreachable block (ram,0x0800c5f4)

ulong sym.msm_qos_ctl_put.9b343f2a3ce35e977719d88add93e782.cfi_jt(ulong param_1,int64_t param_2)

{
    int iVar1;
    uint32_t uVar2;
    int iVar3;
    ulong uVar4;
    ulong *in_x7;
    ulong extraout_x8;
    ulong extraout_x8_00;
    ulong *in_x18;
    int iVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = *(param_2 + 0x48);
    if (_segment.ehdr == 0) {
        iVar5 = 2000000000;
        _segment.ehdr = 0;
    }
    else {
        if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
            dev_pm_qos_remove_request(obj.latency_pm_qos_req);
        }
        if (_segment.ehdr != 0) {
            _segment.ehdr = _segment.ehdr + 1;
            return 0;
        }
        iVar5 = 300;
        _segment.ehdr = 1;
    }
    iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
    if (iVar6 != 0) {
        uVar2 = cpumask_next(0xffffffff,obj.audio_cpu_map);
        *in_x7 = extraout_x8;
        if (uVar2 < extraout_x8) {
            while( true ) {
                iVar3 = dev_pm_qos_update_request(iVar6 + uVar2 * 0x58,iVar5);
                iVar1 = iVar5;
                if (iVar3 == 0) {
                    uVar4 = 0x8003d45;
                }
                else {
                    uVar4 = 0x80027e6;
                    if (iVar3 != 1) {
                        uVar4 = 0x800264f;
                        iVar1 = iVar3;
                    }
                }
                _printk(uVar4,"",uVar2,iVar1);
                uVar2 = cpumask_next(uVar2,obj.audio_cpu_map);
                *in_x7 = extraout_x8_00;
                if (extraout_x8_00 <= uVar2) break;
                iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
            }
        }
    }
    return 0;
}


// ===== sym.msm_asoc_machine_probe.52853753f8636579aaf6d6a2c764b9d3.cfi_jt @ 0x0800a410 (size 8) =====

int sym.msm_asoc_machine_probe.52853753f8636579aaf6d6a2c764b9d3.cfi_jt(int64_t param_1)

{
    int *piVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    int64_t iVar9;
    ulong uVar10;
    char *pcVar11;
    ulong uVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar13;
    code *arg1;
    ulong unaff_x30;
    ulong uStack_70;
    ulong uStack_68;
    int iStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iVar9 = param_1 + 0x10;
    iStack_58 = *(iVar5 + 0x5e0);
    uStack_70 = 0;
    uStack_68 = 0;
    if (*(param_1 + 0x300) == 0) {
        _dev_err(iVar9,"%s: No platform supplied from device tree\n","msm_asoc_machine_probe");
        iVar2 = -0x16;
        goto code_r0x0800c994;
    }
    iVar5 = devm_kmalloc(iVar9,0x90,0xdc0);
    if (iVar5 == 0) {
        iVar2 = -0xc;
        goto code_r0x0800c994;
    }
    of_property_read_variable_u32_array(*(param_1 + 0x300),"",iVar5 + 0x60,1,0);
    piVar1 = iVar5 + 0x5c;
    iVar2 = of_property_read_variable_u32_array(*(param_1 + 0x300),"",piVar1,1,0);
    if (iVar2 < 0) {
        _dev_info(param_1 + 0x10,"","msm_asoc_machine_probe",*(*(param_1 + 0x300) + 0x10),iVar2);
        iVar2 = 0;
        *piVar1 = 0;
    }
    else {
        iVar2 = *piVar1;
    }
    iStack_5c = 0;
    iVar6 = of_match_node(obj.kalama_asoc_machine_of_match,*(param_1 + 0x300));
    if (iVar6 == 0) {
        iVar2 = ___ratelimit(obj.populate_snd_card_dailinks._rs,"");
        if (iVar2 != 0) {
            _dev_err(iVar9,"","");
        }
code_r0x0800cb58:
        pcVar11 = "";
code_r0x0800ce00:
        _dev_err(iVar9,pcVar11,"msm_asoc_machine_probe");
        iVar2 = -0x16;
    }
    else {
        uVar10 = *(iVar6 + 0xc0);
        iVar3 = strcmp(uVar10,"");
        if (iVar3 == 0) {
            memcpy(obj.msm_kalama_dai_links,obj.msm_rx_tx_cdc_dma_be_dai_links,0x5e8);
            if (iVar2 - 1U < 2) {
                memcpy(obj.msm_dmic_event._rs.92,obj.msm_wsa_cdc_dma_be_dai_links,0x510);
                iVar3 = 0xd;
            }
            else if (iVar2 == 4) {
                memcpy(obj.msm_dmic_event._rs.92,obj.msm_wsa2_cdc_dma_be_dai_links,0x438);
                memcpy(0x8000f98,obj.msm_wsa_wsa2_cdc_dma_be_dai_links,0x438);
                iVar3 = 0x11;
            }
            else {
                _dev_printk(0x80045f2,iVar9,"%s: Unexpected number of WSAs, wsa_max_devs: %d\n","",iVar2);
                iVar3 = 7;
            }
            memcpy(iVar3 * 0xd8 + 0x8000578,obj.msm_va_cdc_dma_be_dai_links,0x288);
            memcpy(iVar3 * 0xd8 + 0x8000800,obj.msm_common_be_dai_links,0x438);
            iVar2 = iVar3 + 8;
            iVar4 = of_property_read_variable_u32_array(*(param_1 + 0x300),"",&iStack_5c,1,0);
            if ((-1 < iVar4) && (iStack_5c != 0)) {
                memcpy(iVar2 * 0xd8 + 0x8000578,obj.msm_mi2s_dai_links,0xbd0);
                iVar2 = iVar3 + 0x16;
            }
            iVar3 = of_property_read_variable_u32_array(*(param_1 + 0x300),"",&iStack_5c,1,0);
            if ((-1 < iVar3) && (iStack_5c != 0)) {
                memcpy(iVar2 * 0xd8 + 0x8000578,obj.msm_tdm_dai_links,0xbd0);
                iVar2 = iVar2 + 0xe;
            }
            iVar3 = of_property_read_variable_u32_array(*(param_1 + 0x300),"qcom,ext-disp-audio-rx",&iStack_5c,1,0);
            if ((-1 < iVar3) && (iStack_5c != 0)) {
                _dev_printk(0x80045f2,iVar9,"","");
                memcpy(iVar2 * 0xd8 + 0x8000578,obj.ext_disp_be_dai_link,0xd8);
                iVar2 = iVar2 + 1;
            }
            iVar3 = of_property_read_variable_u32_array(*(param_1 + 0x300),"",&iStack_5c,1,0);
            if ((-1 < iVar3) && (iStack_5c != 0)) {
                _dev_printk(0x80045f2,iVar9,"","");
                memcpy(iVar2 * 0xd8 + 0x8000578,obj.msm_wcn_be_dai_links,0x1b0);
                iVar2 = iVar2 + 2;
            }
            iVar7 = of_find_property(*(param_1 + 0x300),"",0);
            if (iVar7 == 0) {
                memcpy(iVar2 * 0xd8 + 0x8000578,obj.msm_swr_haptics_be_dai_links,0xd8);
                iVar2 = iVar2 + 1;
            }
            else {
                _dev_printk(0x80045f2,iVar9,"%s(): swr haptics support not present\n","");
            }
            pcVar13 = obj.msm_kalama_dai_links;
            arg1 = obj.snd_soc_card_kalama_msm;
        }
        else {
            iVar2 = strcmp(uVar10,"");
            if (iVar2 != 0) goto code_r0x0800cb58;
            pcVar13 = obj.msm_stub_dai_links;
            memcpy(obj.msm_stub_dai_links,obj.msm_stub_be_dai_links,0x1b0);
            iVar2 = 2;
            arg1 = obj.snd_soc_card_stub_msm;
        }
        *(arg1 + 0x150) = pcVar13;
        *(arg1 + 0x158) = iVar2;
        iVar2 = strcmp(*(iVar6 + 0xc0),"");
        if (iVar2 == 0) {
            *(arg1 + 0xf8) = sym.msm_snd_card_late_probe.52853753f8636579aaf6d6a2c764b9d3.cfi_jt;
        }
        iVar6 = of_match_node(obj.kalama_asoc_machine_of_match,*(param_1 + 0x300));
        if (iVar6 == 0) {
            pcVar11 = "";
            goto code_r0x0800ce00;
        }
        *(arg1 + 0x40) = iVar9;
        *(param_1 + 0xa8) = arg1;
        *(arg1 + 0x310) = iVar5;
        iVar2 = snd_soc_of_parse_card_name(arg1,"");
        if (iVar2 == 0) {
            iVar2 = strcmp(*(iVar6 + 0xc0),"");
            if ((iVar2 == 0) && (iVar2 = snd_soc_of_parse_audio_routing(arg1,""), iVar2 != 0)) {
                pcVar11 = "";
                goto code_r0x0800d180;
            }
            iVar2 = sym.msm_populate_dai_link_component_of_node(arg1);
            if (iVar2 == 0) {
                sym.msm_parse_upd_configuration(param_1,iVar5);
                iVar2 = devm_snd_soc_register_card(iVar9,arg1);
                if (iVar2 == 0) {
                    _dev_info(iVar9,"%s: Sound card %s registered\n","msm_asoc_machine_probe",*arg1);
                    _dev_info(iVar9,"","msm_asoc_machine_probe");
                    if (_segment.ehdr != 0) {
                        _segment.ehdr = sym.msm_usbc_swap_gnd_mic.52853753f8636579aaf6d6a2c764b9d3.cfi_jt;
                    }
                    iVar6 = of_parse_phandle(*(param_1 + 0x300),"",0);
                    *(iVar5 + 0x48) = iVar6;
                    if (iVar6 == 0) {
                        _dev_printk(0x80045f2,iVar9,"","",*(*(param_1 + 0x300) + 0x10));
                    }
                    uVar10 = of_parse_phandle(*(param_1 + 0x300),"",0);
                    uVar12 = *(param_1 + 0x300);
                    *(iVar5 + 0x18) = uVar10;
                    uVar10 = of_parse_phandle(uVar12,"",0);
                    uVar12 = *(param_1 + 0x300);
                    *(iVar5 + 0x20) = uVar10;
                    uVar10 = of_parse_phandle(uVar12,"qcom,cdc-dmic45-gpios",0);
                    uVar12 = *(param_1 + 0x300);
                    *(iVar5 + 0x28) = uVar10;
                    uVar10 = of_parse_phandle(uVar12,"",0);
                    *(iVar5 + 0x30) = uVar10;
                    if (*(iVar5 + 0x18) == 0) {
                        iVar6 = *(iVar5 + 0x20);
                        if (iVar6 == 0) goto code_r0x0800d0a8;
code_r0x0800d1a8:
                        msm_cdc_pinctrl_set_wakeup_capable(iVar6,0);
                        iVar6 = *(iVar5 + 0x28);
                        if (iVar6 != 0) goto code_r0x0800d1b8;
code_r0x0800d0b0:
                        iVar6 = *(iVar5 + 0x30);
                    }
                    else {
                        msm_cdc_pinctrl_set_wakeup_capable(*(iVar5 + 0x18),0);
                        iVar6 = *(iVar5 + 0x20);
                        if (iVar6 != 0) goto code_r0x0800d1a8;
code_r0x0800d0a8:
                        iVar6 = *(iVar5 + 0x28);
                        if (iVar6 == 0) goto code_r0x0800d0b0;
code_r0x0800d1b8:
                        msm_cdc_pinctrl_set_wakeup_capable(iVar6,0);
                        iVar6 = *(iVar5 + 0x30);
                    }
                    if (iVar6 != 0) {
                        msm_cdc_pinctrl_set_wakeup_capable(iVar6,0);
                    }
                    sym.msm_common_snd_init(param_1,arg1);
                    uVar8 = devm_clk_get(iVar9,"");
                    if (0xfffffffffffff000 < uVar8) {
                        _dev_printk(0x80045f2,iVar9,"","msm_asoc_machine_probe","");
                        uVar8 = 0;
                    }
                    *(iVar5 + 0x50) = uVar8;
                    *(iVar5 + 0x58) = 0;
                    iVar2 = sym.msm_audio_ssr_register(iVar9);
                    if (iVar2 != 0) {
                        _printk(0x800319c,"msm_asoc_machine_probe",iVar2);
                    }
                    _dev_printk(0x80045f2,iVar9,"","msm_asoc_machine_probe");
                    iVar2 = 0;
                    *(_segment.ehdr + 0x60) = 1;
                    goto code_r0x0800c994;
                }
                if (iVar2 != -0x205) {
                    pcVar11 = "";
                    goto code_r0x0800d180;
                }
                iVar2 = -0x16;
                if (obj.codec_reg_done == 0x0) {
                    iVar2 = -0x205;
                }
            }
            else {
                _printk("","msm_asoc_machine_probe",0x7f1);
                iVar2 = -0x205;
            }
        }
        else {
            pcVar11 = "";
code_r0x0800d180:
            _dev_err(iVar9,pcVar11,"msm_asoc_machine_probe",iVar2);
        }
    }
    devm_kfree(iVar9,iVar5);
    _printk("<%s><%d>: X, failed.\n","msm_asoc_machine_probe",0x844);
    if (iVar2 != -0x205) {
        _dev_printk(0x80045f2,iVar9,"<%s><%d>: X, failed.non-DEFER skip sound card registration.\n",
                    "msm_asoc_machine_probe",0x847);
        ktime_get_real_ts64(&uStack_70);
        uVar10 = cdev_tevent_alloc(0x36007a69);
        cdev_tevent_add_int(uVar10,"",uStack_70);
        cdev_tevent_add_str(uVar10,"","sound_card_not_registered");
        cdev_tevent_write(uVar10);
        cdev_tevent_destroy(uVar10);
    }
code_r0x0800c994:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_58) {
        return iVar2;
    }
    iVar9 = __stack_chk_fail();
    *extraout_x18 = sym.msm_asoc_machine_remove;
    iVar5 = *(iVar9 + 0xa8);
    if ((iVar5 == 0) || (*(iVar5 + 0x310) == 0)) {
        uVar10 = 0;
    }
    else {
        uVar10 = *(*(iVar5 + 0x310) + 8);
    }
    sym.msm_common_snd_deinit(uVar10);
    snd_event_master_deregister(iVar9 + 0x10);
    snd_soc_unregister_card(iVar5);
    return 0;
}


// ===== sym.msm_asoc_machine_remove.52853753f8636579aaf6d6a2c764b9d3.cfi_jt @ 0x0800a418 (size 8) =====

ulong sym.msm_asoc_machine_remove.52853753f8636579aaf6d6a2c764b9d3.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0xa8);
    if ((iVar2 == 0) || (*(iVar2 + 0x310) == 0)) {
        uVar1 = 0;
    }
    else {
        uVar1 = *(*(iVar2 + 0x310) + 8);
    }
    sym.msm_common_snd_deinit(uVar1);
    snd_event_master_deregister(param_1 + 0x10);
    snd_soc_unregister_card(iVar2);
    return 0;
}


// ===== sym.snd_card_sysfs_show.9b343f2a3ce35e977719d88add93e782.cfi_jt @ 0x0800a420 (size 8) =====

int64_t sym.snd_card_sysfs_show.9b343f2a3ce35e977719d88add93e782.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(param_3,0x20,0x8002491,*(_segment.ehdr + 0x60));
    return iVar1;
}


// ===== sym.msm_common_snd_hw_params.cfi_jt @ 0x0800a428 (size 8) =====

int sym.msm_common_snd_hw_params.cfi_jt(int64_t param_1,int64_t param_2)

{
    int *piVar1;
    uint uVar2;
    char cVar3;
    bool bVar4;
    code *pcVar5;
    uint32_t uVar6;
    int iVar7;
    int64_t iVar8;
    ulong uVar9;
    int64_t iVar10;
    int iVar11;
    uint32_t uVar12;
    ulong *in_x18;
    char *pcVar13;
    int iVar14;
    uint64_t uVar15;
    int64_t iVar16;
    int64_t iVar17;
    ulong unaff_x30;
    ulong uStack_68;
    uint64_t uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_58 = *(iVar8 + 0x5e0);
    iVar17 = *(param_1 + 0x10);
    iVar16 = *(*(iVar17 + 0x10) + 8);
    iVar8 = sym.msm_common_get_pdata(*(iVar17 + 8));
    uVar6 = sym.get_mi2s_tdm_auxpcm_intf_index(iVar16);
    uStack_68 = 0;
    uStack_60 = 0;
    uVar15 = uVar6;
    _dev_printk(0x80045f2,*(*(iVar17 + 8) + 0x40),"%s: substream = %s  stream = %d\n","",param_1 + 0x1c,
                *(param_1 + 0x3c));
    if (iVar8 == 0) {
        _dev_err(*(*(iVar17 + 8) + 0x40),"%s: pdata is NULL\n","");
        iVar7 = -0x16;
    }
    else if (uVar6 < 0) {
        iVar7 = 0;
    }
    else {
        if (7 < uVar6) goto code_r0x0800abe0;
        iVar17 = iVar8 + uVar15 * 0x30 + 0xd8;
        mutex_lock(iVar17);
        piVar1 = iVar8 + uVar15 * 4 + 0x248;
        if (*piVar1 == 0) {
            uVar9 = strlen(iVar16);
            iVar10 = strnstr(iVar16,0x8003ced,uVar9);
            if (iVar10 == 0) {
                uVar9 = strlen(iVar16);
                iVar10 = strnstr(iVar16,"",uVar9);
                if (iVar10 != 0) {
                    if (6 < uVar6) {
                        pcVar13 = "get_mi2s_clk_id";
                        goto code_r0x0800aa20;
                    }
                    uVar2 = *(uVar6 * 4 + 0x80093f8);
                    _printk(0x80034fb,"get_mi2s_clk_id",uVar2);
                    uVar6 = *(param_2 + 0x24);
                    uStack_68 = CONCAT44(uStack_68._4_4_,uVar2);
                    iVar7 = *(param_2 + 0x128);
                    if (uVar6 == 0) {
                        uVar6 = *(param_2 + 0x28);
                        if (uVar6 != 0) {
                            uVar12 = 0x20;
                            goto code_r0x0800aab8;
                        }
code_r0x0800aaec:
                        iVar14 = 0x10;
                        _printk(0x80044f9,"",0x10);
                    }
                    else {
                        uVar12 = 0;
code_r0x0800aab8:
                        uVar6 = (uVar6 & 0xaaaaaaaa) >> 1 | (uVar6 & 0x55555555) << 1;
                        uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
                        uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
                        uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
                        uVar12 = LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10) | uVar12;
                        if ((0x20 < uVar12) || ((1L << uVar12 & 0x100000440U) == 0)) goto code_r0x0800aaec;
                        iVar14 = 0x20;
                    }
                    iVar14 = iVar7 * iVar14 * 2;
                    iVar16 = iVar8 + uVar15 * 4;
                    uStack_68 = CONCAT44(iVar14,uStack_68);
                    uStack_60 = *(iVar16 + 0x2a8);
                    if (*(iVar16 + 0x270) != 0) {
                        if (iVar7 < 0x2b110) {
                            if (iVar7 != 0xac44) {
                                iVar11 = 0x15888;
code_r0x0800ab68:
                                if (iVar7 != iVar11) goto code_r0x0800aba0;
                            }
                        }
                        else if (iVar7 != 0x56220) {
                            iVar11 = 0x2b110;
                            goto code_r0x0800ab68;
                        }
                        iVar7 = sym.mi2s_tdm_hw_vote_req(iVar8,1);
                        if (iVar7 < 0) {
code_r0x0800ab80:
                            uVar9 = 0x80043fb;
                            goto code_r0x0800ab8c;
                        }
                    }
code_r0x0800aba0:
                    _printk(0x80030fa,"",uVar2,iVar14);
                    iVar7 = audio_prm_set_lpass_clk_cfg(&uStack_68,1);
                    if (iVar7 < 0) {
                        uVar9 = 0x80041cf;
                        goto code_r0x0800ab8c;
                    }
                    goto code_r0x0800a854;
                }
                _printk(0x8002f0b,"",iVar16);
                iVar7 = 0;
            }
            else {
                if (6 < uVar6) {
                    pcVar13 = "";
code_r0x0800aa20:
                    _printk(0x80026dd,pcVar13,uVar6);
                    iVar7 = -0x16;
                    _printk(0x80034fb,pcVar13,0xffffffea);
                    goto code_r0x0800a864;
                }
                iVar7 = *(param_2 + 0x128);
                uVar2 = *(uVar6 * 4 + 0x80093dc);
                iVar14 = *(iVar8 + 0x228);
                _printk(0x80034fb,"",uVar2);
                iVar14 = iVar14 * iVar7 * 0x20;
                iVar16 = iVar8 + uVar15 * 4;
                uStack_68 = CONCAT44(iVar14,uVar2);
                uStack_60 = *(iVar16 + 0x28c);
                if (*(iVar16 + 0x270) != 0) {
                    if (iVar7 < 0x2b110) {
                        if (iVar7 != 0xac44) {
                            iVar11 = 0x15888;
code_r0x0800aa60:
                            if (iVar7 != iVar11) goto code_r0x0800aa78;
                        }
                    }
                    else if (iVar7 != 0x56220) {
                        iVar11 = 0x2b110;
                        goto code_r0x0800aa60;
                    }
                    iVar7 = sym.mi2s_tdm_hw_vote_req(iVar8,1);
                    if (iVar7 < 0) goto code_r0x0800ab80;
                }
code_r0x0800aa78:
                _printk(0x8002eed,"",uVar2,iVar14);
                iVar7 = audio_prm_set_lpass_clk_cfg(&uStack_68,1);
                if (-1 < iVar7) goto code_r0x0800a854;
                uVar9 = 0x8003693;
code_r0x0800ab8c:
                _printk(uVar9,"",iVar7);
            }
        }
        else {
            iVar7 = 0;
code_r0x0800a854:
            Hint_Prefetch(piVar1,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                    *piVar1 = *piVar1 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
        }
code_r0x0800a864:
        mutex_unlock(iVar17);
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_58) {
        return iVar7;
    }
    __stack_chk_fail();
code_r0x0800abe0:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x800abe4);
    (*pcVar5)();
}


// ===== sym.msm_snd_stub_hw_params.52853753f8636579aaf6d6a2c764b9d3.cfi_jt @ 0x0800a430 (size 8) =====

ulong sym.msm_snd_stub_hw_params.52853753f8636579aaf6d6a2c764b9d3.cfi_jt(void)

{
    return 0;
}


// ===== sym.msm_common_snd_shutdown.cfi_jt @ 0x0800a438 (size 8) =====

void sym.msm_common_snd_shutdown.cfi_jt(int64_t *param_1)

{
    int iVar1;
    char cVar2;
    bool bVar3;
    code *pcVar4;
    uint32_t uVar5;
    int iVar6;
    int64_t *arg1;
    ulong uVar7;
    uint64_t uVar8;
    uint *extraout_x8;
    int *piVar9;
    char *pcVar10;
    uint *puVar11;
    uint extraout_x9;
    ulong *in_x18;
    int64_t iVar12;
    uint64_t uVar13;
    int64_t arg1_00;
    int64_t iVar14;
    uint64_t uVar15;
    ulong unaff_x30;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_58 = *(iVar12 + 0x5e0);
    uVar15 = param_1[2];
    iVar12 = *(uVar15 + 8);
    arg1 = sym.msm_common_get_pdata(iVar12);
    iVar14 = param_1[0x17];
    arg1_00 = *(*(uVar15 + 0x10) + 8);
    uVar5 = sym.get_mi2s_tdm_auxpcm_intf_index(arg1_00);
    uVar13 = uVar5;
    iVar1 = *(iVar14 + 100);
    uStack_68 = 0;
    uStack_60 = 0;
    _printk(0x80027b7,"",param_1 + 0x1c,*(param_1 + 0x3c));
    if (arg1 == NULL) {
        _dev_err(*(iVar12 + 0x40),"%s: pdata is NULL\n","");
    }
    else {
        _dev_info(*(*(uVar15 + 8) + 0x40),"%s: pcm_id %d state %d\n","",*(uVar15 + 0x6b8),
                  *(*arg1 + *(uVar15 + 0x6b8)));
        param_1 = arg1 + 0xd;
        mutex_lock(param_1);
        if (*(*arg1 + *(uVar15 + 0x6b8)) == '\x01') {
            _dev_info(*(*(uVar15 + 8) + 0x40),"","");
            *(*arg1 + *(uVar15 + 0x6b8)) = 0;
            uVar8 = *(arg1 + 0x13);
            if (*(arg1 + 0x13) != 0) {
                pcVar10 = *arg1;
                do {
                    if (*pcVar10 == '\x01') goto code_r0x0800b05c;
                    uVar8 = uVar8 - 1;
                    pcVar10 = pcVar10 + 1;
                } while (uVar8 != 0);
            }
            spf_core_apm_close_all();
            msm_audio_ion_crash_handler();
        }
code_r0x0800b05c:
        mutex_unlock(param_1);
        if (-1 < uVar5) {
            if (uVar5 < 8) {
                param_1 = arg1 + uVar13 * 6 + 0x1b;
                mutex_lock(param_1);
                piVar9 = arg1 + uVar13 * 4 + 0x248;
                puVar11 = 0x1;
                uVar15 = uVar13;
                goto code_r0x0800b3b4;
            }
code_r0x0800b300:
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x5512,0x800b304);
            (*pcVar4)();
        }
    }
    do {
        iVar14 = sp_el0;
        if (*(iVar14 + 0x5e0) == iStack_58) {
            return;
        }
        __stack_chk_fail();
        puVar11 = CONCAT44(extraout_x9,*extraout_x8);
        piVar9 = CONCAT44(extraout_x8 >> 0x20,*puVar11);
code_r0x0800b3b4:
        Hint_Prefetch(piVar9,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar9,0x10);
            if (bVar3) {
                *piVar9 = *piVar9 - puVar11;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        uVar5 = uVar13;
        if (*piVar9 == 0) {
            uVar7 = strlen(arg1_00);
            iVar14 = strnstr(arg1_00,0x8003ced,uVar7);
            if (iVar14 == 0) {
                uVar7 = strlen(arg1_00);
                iVar14 = strnstr(arg1_00,"",uVar7);
                if (iVar14 == 0) {
                    _printk(0x8002f0b,"",arg1_00);
                    if (6 < uVar5) goto code_r0x0800b300;
                }
                else {
                    if (6 < uVar5) {
                        pcVar10 = "get_mi2s_clk_id";
                        goto code_r0x0800b2d8;
                    }
                    uVar5 = *(uVar5 * 4 + 0x80093f8);
                    uVar13 = uVar5;
                    _printk(0x80034fb,"get_mi2s_clk_id",uVar13);
                    uStack_68 = CONCAT44(uStack_68._4_4_,uVar5);
                    iVar6 = audio_prm_set_lpass_clk_cfg(&uStack_68,0);
                    if (iVar6 < 0) {
                        uVar7 = 0x800451d;
                        goto code_r0x0800b310;
                    }
                }
            }
            else {
                if (6 < uVar5) {
                    pcVar10 = "";
code_r0x0800b2d8:
                    _printk(0x80026dd,pcVar10,uVar13);
                    _printk(0x80034fb,pcVar10,0xffffffea);
                    goto code_r0x0800b300;
                }
                uVar5 = *(uVar5 * 4 + 0x80093dc);
                uVar13 = uVar5;
                _printk(0x80034fb,"",uVar13);
                uStack_68 = CONCAT44(uStack_68._4_4_,uVar5);
                iVar6 = audio_prm_set_lpass_clk_cfg(&uStack_68,0);
                if (iVar6 < 0) {
                    uVar7 = 0x8003a11;
code_r0x0800b310:
                    _printk(uVar7,"",iVar6);
                }
            }
            if (*(arg1 + uVar15 * 4 + 0x270) != 0) {
                if (iVar1 < 0x2b110) {
                    if (iVar1 != 0xac44) {
                        iVar6 = 0x15888;
code_r0x0800b2b8:
                        if (iVar1 != iVar6) goto code_r0x0800b0c0;
                    }
                }
                else if (iVar1 != 0x56220) {
                    iVar6 = 0x2b110;
                    goto code_r0x0800b2b8;
                }
                sym.mi2s_tdm_hw_vote_req(arg1,0);
            }
        }
        else {
            if (*piVar9 < 0) {
                *piVar9 = 0;
            }
            if (6 < uVar5) goto code_r0x0800b300;
        }
code_r0x0800b0c0:
        if (arg1[uVar15 + 0x14] != 0) {
            piVar9 = arg1 + uVar15 * 4 + 0x22c;
            Hint_Prefetch(piVar9,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(piVar9,0x10);
                if (bVar3) {
                    *piVar9 = *piVar9 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            if (*piVar9 == 0) {
                iVar6 = msm_cdc_pinctrl_select_sleep_state(arg1[uVar15 + 0x14]);
                if (iVar6 != 0) {
                    _dev_err(*(iVar12 + 0x40),"","",iVar6);
                }
            }
            else if (*piVar9 < 0) {
                *piVar9 = 0;
            }
        }
        mutex_unlock(param_1);
    } while( true );
}


// ===== sym.msm_rx_tx_codec_init.52853753f8636579aaf6d6a2c764b9d3.cfi_jt @ 0x0800a440 (size 8) =====

int sym.msm_rx_tx_codec_init.52853753f8636579aaf6d6a2c764b9d3.cfi_jt(int64_t param_1)

{
    int iVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t iVar5;
    int64_t *piVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar6 = *(*(param_1 + 8) + 0x310);
    iVar3 = snd_soc_rtdcom_lookup(param_1,"lpass-cdc");
    if (iVar3 == 0) {
        _printk(0x800350d,"");
        return 0;
    }
    iVar1 = snd_soc_add_component_controls(iVar3,obj.msm_common_snd_controls,1);
    if (iVar1 < 0) {
        _printk(0x800433f,"",iVar1);
        return iVar1;
    }
    iVar5 = iVar3 + 0xd0;
    snd_soc_dapm_new_controls(iVar5,obj.msm_int_dapm_widgets,0xd);
    snd_soc_dapm_ignore_suspend(iVar5,"");
    snd_soc_dapm_ignore_suspend(iVar5,"");
    snd_soc_dapm_ignore_suspend(iVar5,"Digital Mic2");
    snd_soc_dapm_ignore_suspend(iVar5,"");
    snd_soc_dapm_ignore_suspend(iVar5,"");
    snd_soc_dapm_ignore_suspend(iVar5,"Digital Mic5");
    snd_soc_dapm_ignore_suspend(iVar5,"");
    snd_soc_dapm_ignore_suspend(iVar5,"");
    snd_soc_dapm_ignore_suspend(iVar5,"");
    snd_soc_dapm_ignore_suspend(iVar5,"");
    snd_soc_dapm_ignore_suspend(iVar5,"");
    snd_soc_dapm_ignore_suspend(iVar5,"");
    snd_soc_dapm_ignore_suspend(iVar5,"");
    lpass_cdc_set_port_map(iVar3,7,obj.sm_port_map);
    iVar5 = *piVar6;
    if (iVar5 != 0) {
code_r0x0800db38:
        lpass_cdc_info_create_codec_entry(iVar5,iVar3);
        lpass_cdc_register_wake_irq(iVar3,0);
        if (piVar6[0xc] == 0) {
            iVar5 = snd_soc_rtdcom_lookup(param_1,"");
            if (iVar5 == 0) {
                _printk(0x8003aa1,"","");
                return -0x16;
            }
            iVar4 = iVar5 + 0xd0;
            iVar7 = *(*(iVar5 + 0x20) + 0x48);
            snd_soc_dapm_ignore_suspend(iVar4,0x80044b2);
            snd_soc_dapm_ignore_suspend(iVar4,0x8003ac7);
            snd_soc_dapm_ignore_suspend(iVar4,"");
            snd_soc_dapm_ignore_suspend(iVar4,"HPHR");
            snd_soc_dapm_ignore_suspend(iVar4,"");
            snd_soc_dapm_ignore_suspend(iVar4,"");
            snd_soc_dapm_ignore_suspend(iVar4,"");
            snd_soc_dapm_ignore_suspend(iVar4,"");
            snd_soc_dapm_sync(iVar4);
            piVar6 = *(*(iVar5 + 0x20) + 0x310);
            iVar4 = *piVar6;
            if (iVar4 == 0) {
                iVar4 = sym.msm_snd_info_create_subdir(*(iVar5 + 0x20),*(iVar7 + 0x5e8));
                if (iVar4 == 0) {
                    _dev_printk(0x80045f2,*(iVar5 + 0x18),"","");
                    return 0;
                }
                *piVar6 = iVar4;
            }
            wcd938x_info_create_codec_entry(iVar4,iVar5);
            iVar1 = wcd938x_get_codec_variant(iVar5);
            _dev_printk(0x80045f2,*(iVar5 + 0x18),"","",iVar1);
            iVar1 = lpass_cdc_rx_set_fir_capability(iVar3,iVar1 == 5);
            if (iVar1 < 0) {
                iVar2 = ___ratelimit(obj.msm_rx_tx_codec_init._rs,"");
                if (iVar2 == 0) {
                    return iVar1;
                }
                _dev_err(*(iVar5 + 0x18),"","",iVar1);
                return iVar1;
            }
        }
        obj.codec_reg_done = 0x1;
        sym.msm_common_dai_link_init(param_1);
        return iVar1;
    }
    iVar5 = *(*(param_1 + 8) + 0x48);
    iVar5 = snd_info_create_module_entry(*(iVar5 + 0x188),"",*(iVar5 + 0x5e8));
    if (iVar5 != 0) {
        *(iVar5 + 8) = 0x416d;
        iVar2 = snd_info_register();
        if (-1 < iVar2) {
            *piVar6 = iVar5;
            goto code_r0x0800db38;
        }
        snd_info_free_entry(iVar5);
    }
    _printk(0x8002ced,"");
    return iVar1;
}


// ===== sym.msm_common_dai_link_init.cfi_jt @ 0x0800a448 (size 8) =====

uint64_t sym.msm_common_dai_link_init.cfi_jt(int64_t param_1,ulong param_2,uint64_t param_3)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    uint *puVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar9;
    int64_t iVar10;
    ulong uVar11;
    int64_t iVar12;
    ulong unaff_x30;
    ulong uStack_100;
    ulong uStack_f8;
    int64_t iStack_f0;
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
    unkbyte5 Stack_80;
    unkbyte3 Stack_7b;
    unkbyte5 Stack_78;
    ulong uStack_70;
    unkbyte5 Stack_68;
    unkbyte3 Stack_63;
    unkbyte5 Stack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_58 = *(iVar7 + 0x5e0);
    iVar7 = *(param_1 + 0x10);
    iVar12 = *(*(param_1 + 0x600) + *(param_1 + 0x60c) * 8);
    uStack_d0 = _reloc.msm_channel_map_get.cfi_jt;
    uStack_c8 = *0x80093b8;
    uVar9 = *(*(param_1 + 8) + 0x40);
    uStack_c0 = *0x80093c0;
    uStack_b8 = *0x80093c8;
    iStack_f0 = *0x8009390;
    uStack_e8 = *0x8009398;
    uStack_e0 = *0x80093a0;
    uStack_d8 = _reloc.msm_channel_map_info.cfi_jt;
    uStack_100 = *0x8009380;
    uStack_f8 = *0x8009388;
    if (iVar12 == 0) {
        uVar9 = 0x80041ff;
    }
    else {
        uVar11 = *(iVar12 + 0x58);
        Stack_60 = 0;
        uStack_70 = 0;
        Stack_68 = 0;
        Stack_63 = 0;
        Stack_78 = 0;
        uStack_88 = 0;
        Stack_80 = 0;
        Stack_7b = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_b0 = 0;
        sscanf(*(iVar7 + 8),"",&uStack_70,&uStack_b0);
        param_3 = 0x15;
        iVar5 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar5 = 0x30;
        }
        iVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar5),0xdc0,0x15);
        if (iVar5 != 0) {
            strlcpy(iVar5,&uStack_70,0x15);
            param_3 = 0xdc0;
            puVar6 = devm_kmalloc(uVar9,0x48,0xdc0);
            if (puVar6 == NULL) {
code_r0x0800c178:
                uVar4 = 0xfffffff4;
            }
            else {
                param_3 = 4;
                iVar2 = strncmp(iVar5,"",4);
                if (iVar2 == 0) {
code_r0x0800c15c:
                    iVar2 = strlen(*(iVar7 + 8));
                    iVar10 = __kmalloc(iVar2 + 0xd,0xdc0);
                    if (iVar10 == 0) goto code_r0x0800c178;
                    snprintf(iVar10,iVar2 + 0xd,"",*(iVar7 + 8),"Channel Map");
                    uStack_b8 = 0;
                    iStack_f0 = iVar10;
                    _printk(0x80032a1,iVar10);
                    param_3 = 1;
                    uVar4 = snd_soc_add_component_controls(uVar11,&uStack_100,1);
                    iVar7 = snd_soc_card_get_kcontrol(*(param_1 + 8),iVar10);
                    if (iVar7 != 0) {
                        param_3 = 4;
                        *(puVar6 + 2) = iVar12;
                        puVar6[1] = 1;
                        iVar2 = strncmp(iVar5,"",4);
                        if (iVar2 == 0) {
                            *puVar6 = 1;
                        }
                        else {
                            uVar3 = *(param_1 + 0x608);
                            *puVar6 = 2;
                            if ((uVar3 < 9) && (puVar6[1] = uVar3, uVar3 != 0)) {
                                uVar1 = *(param_1 + 0x60c);
                                iVar12 = *(param_1 + 0x600);
                                iVar8 = *(iVar12 + uVar1 * 8);
                                if ((((iVar8 != 0) &&
                                     (((*(puVar6 + 2) = iVar8, uVar3 != 1 &&
                                       (iVar8 = *(iVar12 + (uVar1 + 1) * 8), iVar8 != 0)) &&
                                      (*(puVar6 + 4) = iVar8, uVar3 != 2)))) &&
                                    ((((iVar8 = *(iVar12 + (uVar1 + 2) * 8), iVar8 != 0 &&
                                       (*(puVar6 + 6) = iVar8, uVar3 != 3)) &&
                                      (iVar8 = *(iVar12 + (uVar1 + 3) * 8), iVar8 != 0)) &&
                                     ((*(puVar6 + 8) = iVar8, uVar3 != 4 &&
                                      (iVar8 = *(iVar12 + (uVar1 + 4) * 8), iVar8 != 0)))))) &&
                                   ((*(puVar6 + 10) = iVar8, uVar3 != 5 &&
                                    ((((iVar8 = *(iVar12 + (uVar1 + 5) * 8), iVar8 != 0 &&
                                       (*(puVar6 + 0xc) = iVar8, uVar3 != 6)) &&
                                      (iVar8 = *(iVar12 + (uVar1 + 6) * 8), iVar8 != 0)) &&
                                     ((*(puVar6 + 0xe) = iVar8, uVar3 != 7 &&
                                      (iVar12 = *(iVar12 + (uVar1 + 7) * 8), iVar12 != 0)))))))) {
                                    *(puVar6 + 0x10) = iVar12;
                                }
                            }
                        }
                        *(iVar7 + 0x80) = puVar6;
                        goto code_r0x0800c110;
                    }
                    _printk(0x8003f35,iVar10);
                    uVar4 = 0xffffffea;
                }
                else {
                    param_3 = 9;
                    iVar2 = strncmp(iVar5,"",9);
                    if (iVar2 == 0) goto code_r0x0800c15c;
                    uVar4 = 0;
                    iVar10 = 0;
code_r0x0800c110:
                    if ((obj.msm_common_snd_init.__key & 1) == 0) {
                        iVar7 = snd_soc_rtdcom_lookup(param_1,"lpass-cdc");
                        if (iVar7 == 0) {
                            _printk(0x800350d,"");
                        }
                        else {
                            param_3 = 3;
                            uVar3 = snd_soc_add_component_controls(iVar7,obj.card_mixer_controls,3);
                            if (uVar3 < 0) {
                                param_3 = uVar3;
                                _printk(0x800433f,"",param_3);
                            }
                            else {
                                obj.msm_common_snd_init.__key = 0x1;
                            }
                        }
                    }
                }
                if (iVar10 != 0) {
                    kfree(iVar10);
                }
            }
            kfree(iVar5);
            goto code_r0x0800c184;
        }
        uVar9 = 0x80036c2;
    }
    _printk(uVar9,"");
    uVar4 = 0xffffffea;
code_r0x0800c184:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_58) {
        return uVar4;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.snd_card_sysfs_show;
    iVar2 = snprintf(param_3,0x20,0x8002491,*(_segment.ehdr + 0x60));
    return iVar2;
}


// ===== sym.msm_wcn_init.52853753f8636579aaf6d6a2c764b9d3.cfi_jt @ 0x0800a450 (size 8) =====

int sym.msm_wcn_init.52853753f8636579aaf6d6a2c764b9d3.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_38 = 0xa00000009f;
    uStack_30 = 0x9e0000009d;
    iVar2 = snd_soc_dai_set_channel_map(*(*(param_1 + 0x600) + *(param_1 + 0x60c) * 8),2,&uStack_38,2,&uStack_30);
    if (iVar2 == 0) {
        sym.msm_common_dai_link_init(param_1);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return iVar2;
    }
    __stack_chk_fail();
    return 0;
}


// ===== sym.msm_audrx_stub_init.52853753f8636579aaf6d6a2c764b9d3.cfi_jt @ 0x0800a458 (size 8) =====

ulong sym.msm_audrx_stub_init.52853753f8636579aaf6d6a2c764b9d3.cfi_jt(void)

{
    return 0;
}


// ===== sym.msm_int_wsa_init.52853753f8636579aaf6d6a2c764b9d3.cfi_jt @ 0x0800a460 (size 8) =====

int sym.msm_int_wsa_init.52853753f8636579aaf6d6a2c764b9d3.cfi_jt(int64_t param_1)

{
    int iVar1;
    int64_t iVar2;
    ulong *puVar3;
    ulong uVar4;
    int64_t arg1;
    char *pcVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar6;
    ulong *puVar7;
    ulong unaff_x30;
    ulong uStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    ulong *puStack_a0;
    int64_t iStack_98;
    uint uStack_88;
    ushort uStack_84;
    uint uStack_80;
    ushort uStack_7c;
    uint uStack_78;
    ushort uStack_74;
    uint uStack_70;
    ushort uStack_6c;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    puVar6 = *(param_1 + 8);
    iVar2 = strstr(*puVar6,"wsa883x");
    if (iVar2 == 0) {
        uStack_6c = 0x504;
        uStack_70 = 0x3020100;
        uStack_74 = 0x504;
        uStack_78 = 0x3020100;
        uStack_7c = 0xd0a;
        puVar7 = puVar6[0x62];
        uStack_88 = 0x7060504;
        uStack_80 = 0x7030201;
        uStack_84 = 0xd0b;
        uStack_50 = *0x8009428;
        uStack_48 = *0x8009430;
        uStack_40 = *0x8009438;
        uStack_68 = *0x8009440;
        uStack_60 = *0x8009448;
        uStack_58 = *0x8009450;
        if (*(puVar7 + 0x5c) != 0) {
            puVar3 = snd_soc_rtdcom_lookup(param_1,"wsa-codec.1");
            if (puVar3 == NULL) {
                uVar4 = 0x8003320;
                pcVar5 = "";
code_r0x0800e44c:
                _printk(uVar4,pcVar5);
                iVar1 = -0x16;
                goto code_r0x0800e3ac;
            }
            wsa884x_set_channel_map(puVar3,&uStack_70,6,&uStack_68,&uStack_50,&uStack_80);
            wsa884x_codec_info_create_codec_entry(*puVar7,puVar3);
            puVar6 = puVar3;
            if (1 < *(puVar7 + 0x5c)) {
                puVar6 = snd_soc_rtdcom_lookup(param_1,"wsa-codec.2");
                if (puVar6 == NULL) {
                    uVar4 = 0x80046e4;
                    pcVar5 = "";
                    puVar6 = puVar3;
                    goto code_r0x0800e44c;
                }
                wsa884x_set_channel_map(puVar6,&uStack_78,6,&uStack_68,&uStack_50,&uStack_88);
                wsa884x_codec_info_create_codec_entry(*puVar7,puVar6);
                if (2 < *(puVar7 + 0x5c)) {
                    puVar3 = snd_soc_rtdcom_lookup(param_1,"");
                    if (puVar3 == NULL) {
                        uVar4 = 0x8003987;
                        pcVar5 = "";
                        goto code_r0x0800e44c;
                    }
                    wsa884x_set_channel_map(puVar3,&uStack_70,6,&uStack_68,&uStack_50,&uStack_80);
                    wsa884x_codec_info_create_codec_entry(*puVar7,puVar3);
                    puVar6 = puVar3;
                    if (3 < *(puVar7 + 0x5c)) {
                        puVar6 = snd_soc_rtdcom_lookup(param_1,"");
                        if (puVar6 == NULL) {
                            uVar4 = 0x8003fa4;
                            pcVar5 = "";
                            puVar6 = puVar3;
                            goto code_r0x0800e44c;
                        }
                        wsa884x_set_channel_map(puVar6,&uStack_78,6,&uStack_68,&uStack_50,&uStack_88);
                        wsa884x_codec_info_create_codec_entry(*puVar7,puVar6);
                    }
                }
            }
        }
    }
    else {
        puVar7 = puVar6[0x62];
        uStack_70 = 0x3020100;
        uStack_78 = 0x3020100;
        uStack_80 = 0xa030201;
        uStack_88 = 0xb060504;
        uStack_50 = *0x8006760;
        uStack_48 = *0x8006768;
        uStack_68 = *0x8006770;
        uStack_60 = *0x8006778;
        if (*(puVar7 + 0x5c) != 0) {
            puVar3 = snd_soc_rtdcom_lookup(param_1,"wsa-codec.1");
            if (puVar3 == NULL) {
                uVar4 = 0x8003320;
code_r0x0800e444:
                pcVar5 = "msm_int_wsa883x_init";
                goto code_r0x0800e44c;
            }
            wsa883x_set_channel_map(puVar3,&uStack_70,4,&uStack_68,&uStack_50,&uStack_80);
            wsa883x_codec_info_create_codec_entry(*puVar7,puVar3);
            puVar6 = puVar3;
            if (1 < *(puVar7 + 0x5c)) {
                puVar6 = snd_soc_rtdcom_lookup(param_1,"wsa-codec.2");
                if (puVar6 == NULL) {
                    uVar4 = 0x80046e4;
                    puVar6 = puVar3;
                    goto code_r0x0800e444;
                }
                wsa883x_set_channel_map(puVar6,&uStack_78,4,&uStack_68,&uStack_50,&uStack_88);
                wsa883x_codec_info_create_codec_entry(*puVar7,puVar6);
                if (2 < *(puVar7 + 0x5c)) {
                    puVar3 = snd_soc_rtdcom_lookup(param_1,"");
                    if (puVar3 == NULL) {
                        uVar4 = 0x8003987;
                        goto code_r0x0800e444;
                    }
                    wsa883x_set_channel_map(puVar3,&uStack_70,4,&uStack_68,&uStack_50,&uStack_80);
                    wsa883x_codec_info_create_codec_entry(*puVar7,puVar3);
                    puVar6 = puVar3;
                    if (3 < *(puVar7 + 0x5c)) {
                        puVar6 = snd_soc_rtdcom_lookup(param_1,"");
                        if (puVar6 == NULL) {
                            uVar4 = 0x8003fa4;
                            puVar6 = puVar3;
                            goto code_r0x0800e444;
                        }
                        wsa883x_set_channel_map(puVar6,&uStack_78,4,&uStack_68,&uStack_50,&uStack_88);
                        wsa883x_codec_info_create_codec_entry(*puVar7,puVar6);
                    }
                }
            }
        }
    }
    sym.msm_common_dai_link_init(param_1);
    iVar1 = 0;
code_r0x0800e3ac:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return iVar1;
    }
    arg1 = __stack_chk_fail(iVar1);
    *extraout_x18 = sym.msm_wcn_init;
    pcStack_a8 = sym.msm_wcn_init;
    iVar2 = sp_el0;
    iStack_b8 = *(iVar2 + 0x5e0);
    uStack_c8 = 0xa00000009f;
    uStack_c0 = 0x9e0000009d;
    puStack_b0 = &stack0xffffffffffffffd0;
    puStack_a0 = puVar6;
    iStack_98 = param_1;
    iVar1 = snd_soc_dai_set_channel_map(*(*(arg1 + 0x600) + *(arg1 + 0x60c) * 8),2,&uStack_c8,2,&uStack_c0);
    if (iVar1 == 0) {
        sym.msm_common_dai_link_init(arg1);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_b8) {
        return iVar1;
    }
    __stack_chk_fail();
    return 0;
}


// ===== sym.snd_card_sysfs_store.9b343f2a3ce35e977719d88add93e782.cfi_jt @ 0x0800a468 (size 8) =====

ulong sym.snd_card_sysfs_store.9b343f2a3ce35e977719d88add93e782.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sscanf(param_3,0x8002491,_segment.ehdr + 0x60);
    sysfs_notify(_segment.ehdr,0,"");
    return 0;
}


// ===== sym.aud_dev_sysfs_store.9b343f2a3ce35e977719d88add93e782.cfi_jt @ 0x0800a470 (size 8) =====

uint64_t sym.aud_dev_sysfs_store.9b343f2a3ce35e977719d88add93e782.cfi_jt
                   (int64_t param_1,ulong param_2,ulong param_3,uint64_t param_4)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t extraout_x1;
    uint32_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_30 = 0;
    if (param_4 < 0xb) {
        sscanf(param_3,"",&uStack_30 + 4,&uStack_30);
        if (*(param_1 + 0x90) < uStack_30._4_4_) {
            uVar2 = 0x8002adf;
            uVar3 = uStack_30._4_4_;
        }
        else {
            if (uStack_30 < 2) {
                _printk(0x800342d,"aud_dev_sysfs_store");
                *(*(param_1 + -8) + (uStack_30 >> 0x20)) = uStack_30;
                goto code_r0x0800c528;
            }
            uVar2 = 0x80035e3;
            uVar3 = uStack_30;
        }
        _printk(uVar2,"aud_dev_sysfs_store",uVar3);
        param_4 = 0xffffffffffffffea;
    }
    else {
        _printk(0x8003153,"aud_dev_sysfs_store");
        param_4 = 0xffffffffffffffea;
    }
code_r0x0800c528:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return param_4;
    }
    __stack_chk_fail();
    *(extraout_x1 + 0x48) = _segment.ehdr;
    return 0;
}


// ===== sym.__typeid__ZTSFiP17snd_soc_componentE_global_addr @ 0x0800a478 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.__typeid__ZTSFiP17snd_soc_componentE_global_addr(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.wcd938x_codec_get_dev_num.cfi_jt @ 0x0800a480 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.wcd938x_codec_get_dev_num.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.wsa883x_codec_get_dev_num.cfi_jt @ 0x0800a488 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.wsa883x_codec_get_dev_num.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.snd_card_notify_user @ 0x0800a490 (size 88) =====

ulong sym.snd_card_notify_user(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
    *(iVar1 + 0x60) = arg1;
    sysfs_notify(iVar1,0,"");
    if (arg1 == 0) {
        _segment.ehdr = 0;
    }
    return 0;
}


// ===== sym.snd_card_set_card_status @ 0x0800a4e8 (size 32) =====

ulong sym.snd_card_set_card_status(int64_t arg1)

{
    *(_segment.ehdr + 0x60) = arg1;
    return 0;
}


// ===== sym.snd_card_sysfs_init @ 0x0800a508 (size 264) =====

int sym.snd_card_sysfs_init(void)

{
    int *piVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar6 [16];
    char acStack_38 [8];
    ushort uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    uStack_30 = 0;
    acStack_38[0] = str.snd_card[0];
    acStack_38[1] = str.snd_card[1];
    acStack_38[2] = str.snd_card[2];
    acStack_38[3] = str.snd_card[3];
    acStack_38[4] = str.snd_card[4];
    acStack_38[5] = str.snd_card[5];
    acStack_38[6] = str.snd_card[6];
    acStack_38[7] = str.snd_card[7];
    _segment.ehdr = kmem_cache_alloc_trace(_snd_soc_info_enum_double,0xdc0,0x68);
    iVar4 = kobject_init_and_add(_segment.ehdr,obj.snd_card_ktype,_wsa884x_codec_get_dev_num,acStack_38);
    if (iVar4 < 0) {
        _printk(0x80042cf,"",acStack_38,iVar4);
    }
    else {
        iVar4 = sysfs_create_file_ns(_segment.ehdr,obj.card_state_attr,0);
        if (iVar4 < 0) {
            _printk(0x800335a,"",acStack_38);
            kobject_put(_segment.ehdr);
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_28) {
        auVar6 = __stack_chk_fail();
        iVar5 = auVar6._0_8_;
        *extraout_x18 = sym.mi2s_tdm_hw_vote_req;
        if ((iVar5 == 0) || (*(iVar5 + 0x268) == 0)) {
            _printk(0x8004181,"");
            iVar4 = -0x16;
        }
        else {
            _printk(0x8003243,"",auVar6._8_8_ & 0xffffffff);
            piVar1 = iVar5 + 0x264;
            if (auVar6._8_4_ == 0) {
                Hint_Prefetch(piVar1,2,0,1);
                do {
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar3) {
                        *piVar1 = *piVar1 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
                if (*piVar1 == 0) {
                    digital_cdc_rsc_mgr_hw_vote_disable(*(iVar5 + 0x268),0);
                    iVar4 = 0;
                }
                else if (*piVar1 < 0) {
                    iVar4 = 0;
                    *piVar1 = 0;
                }
                else {
                    iVar4 = 0;
                }
            }
            else {
                if (*piVar1 == 0) {
                    iVar4 = digital_cdc_rsc_mgr_hw_vote_enable(*(iVar5 + 0x268),0);
                    if (iVar4 < 0) {
                        _printk(0x80043fb,"",iVar4);
                        return iVar4;
                    }
                }
                else {
                    iVar4 = 0;
                }
                Hint_Prefetch(piVar1,2,0,1);
                do {
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar3) {
                        *piVar1 = *piVar1 + 1;
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
            }
        }
        return iVar4;
    }
    return iVar4;
}


// ===== sym.mi2s_tdm_hw_vote_req @ 0x0800a610 (size 380) =====

int sym.mi2s_tdm_hw_vote_req(int64_t arg1,int64_t arg2)

{
    int *piVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (*(arg1 + 0x268) == 0)) {
        _printk(0x8004181,"");
        iVar4 = -0x16;
    }
    else {
        _printk(0x8003243,"",arg2 & 0xffffffff);
        piVar1 = arg1 + 0x264;
        if (arg2 == 0) {
            Hint_Prefetch(piVar1,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                    *piVar1 = *piVar1 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            if (*piVar1 == 0) {
                digital_cdc_rsc_mgr_hw_vote_disable(*(arg1 + 0x268),0);
                iVar4 = 0;
            }
            else if (*piVar1 < 0) {
                iVar4 = 0;
                *piVar1 = 0;
            }
            else {
                iVar4 = 0;
            }
        }
        else {
            if (*piVar1 == 0) {
                iVar4 = digital_cdc_rsc_mgr_hw_vote_enable(*(arg1 + 0x268),0);
                if (iVar4 < 0) {
                    _printk(0x80043fb,"",iVar4);
                    return iVar4;
                }
            }
            else {
                iVar4 = 0;
            }
            Hint_Prefetch(piVar1,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                    *piVar1 = *piVar1 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
        }
    }
    return iVar4;
}


// ===== sym.msm_common_snd_hw_params @ 0x0800a790 (size 1148) =====

int sym.msm_common_snd_hw_params(int64_t arg1,int64_t arg2)

{
    int *piVar1;
    uint uVar2;
    char cVar3;
    bool bVar4;
    code *pcVar5;
    uint32_t uVar6;
    int iVar7;
    int64_t iVar8;
    ulong uVar9;
    int64_t iVar10;
    int iVar11;
    uint32_t uVar12;
    ulong *in_x18;
    char *pcVar13;
    int iVar14;
    uint64_t uVar15;
    int64_t iVar16;
    int64_t iVar17;
    ulong unaff_x30;
    ulong uStack_68;
    uint64_t uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_58 = *(iVar8 + 0x5e0);
    iVar17 = *(arg1 + 0x10);
    iVar16 = *(*(iVar17 + 0x10) + 8);
    iVar8 = sym.msm_common_get_pdata(*(iVar17 + 8));
    uVar6 = sym.get_mi2s_tdm_auxpcm_intf_index(iVar16);
    uStack_68 = 0;
    uStack_60 = 0;
    uVar15 = uVar6;
    _dev_printk(0x80045f2,*(*(iVar17 + 8) + 0x40),"%s: substream = %s  stream = %d\n","",arg1 + 0x1c,*(arg1 + 0x3c)
               );
    if (iVar8 == 0) {
        _dev_err(*(*(iVar17 + 8) + 0x40),"%s: pdata is NULL\n","");
        iVar7 = -0x16;
    }
    else if (uVar6 < 0) {
        iVar7 = 0;
    }
    else {
        if (7 < uVar6) goto code_r0x0800abe0;
        iVar17 = iVar8 + uVar15 * 0x30 + 0xd8;
        mutex_lock(iVar17);
        piVar1 = iVar8 + uVar15 * 4 + 0x248;
        if (*piVar1 == 0) {
            uVar9 = strlen(iVar16);
            iVar10 = strnstr(iVar16,0x8003ced,uVar9);
            if (iVar10 == 0) {
                uVar9 = strlen(iVar16);
                iVar10 = strnstr(iVar16,"",uVar9);
                if (iVar10 != 0) {
                    if (6 < uVar6) {
                        pcVar13 = "get_mi2s_clk_id";
                        goto code_r0x0800aa20;
                    }
                    uVar2 = *(uVar6 * 4 + 0x80093f8);
                    _printk(0x80034fb,"get_mi2s_clk_id",uVar2);
                    uVar6 = *(arg2 + 0x24);
                    uStack_68 = CONCAT44(uStack_68._4_4_,uVar2);
                    iVar7 = *(arg2 + 0x128);
                    if (uVar6 == 0) {
                        uVar6 = *(arg2 + 0x28);
                        if (uVar6 != 0) {
                            uVar12 = 0x20;
                            goto code_r0x0800aab8;
                        }
code_r0x0800aaec:
                        iVar14 = 0x10;
                        _printk(0x80044f9,"",0x10);
                    }
                    else {
                        uVar12 = 0;
code_r0x0800aab8:
                        uVar6 = (uVar6 & 0xaaaaaaaa) >> 1 | (uVar6 & 0x55555555) << 1;
                        uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
                        uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
                        uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
                        uVar12 = LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10) | uVar12;
                        if ((0x20 < uVar12) || ((1L << uVar12 & 0x100000440U) == 0)) goto code_r0x0800aaec;
                        iVar14 = 0x20;
                    }
                    iVar14 = iVar7 * iVar14 * 2;
                    iVar16 = iVar8 + uVar15 * 4;
                    uStack_68 = CONCAT44(iVar14,uStack_68);
                    uStack_60 = *(iVar16 + 0x2a8);
                    if (*(iVar16 + 0x270) != 0) {
                        if (iVar7 < 0x2b110) {
                            if (iVar7 != 0xac44) {
                                iVar11 = 0x15888;
code_r0x0800ab68:
                                if (iVar7 != iVar11) goto code_r0x0800aba0;
                            }
                        }
                        else if (iVar7 != 0x56220) {
                            iVar11 = 0x2b110;
                            goto code_r0x0800ab68;
                        }
                        iVar7 = sym.mi2s_tdm_hw_vote_req(iVar8,1);
                        if (iVar7 < 0) {
code_r0x0800ab80:
                            uVar9 = 0x80043fb;
                            goto code_r0x0800ab8c;
                        }
                    }
code_r0x0800aba0:
                    _printk(0x80030fa,"",uVar2,iVar14);
                    iVar7 = audio_prm_set_lpass_clk_cfg(&uStack_68,1);
                    if (iVar7 < 0) {
                        uVar9 = 0x80041cf;
                        goto code_r0x0800ab8c;
                    }
                    goto code_r0x0800a854;
                }
                _printk(0x8002f0b,"",iVar16);
                iVar7 = 0;
            }
            else {
                if (6 < uVar6) {
                    pcVar13 = "";
code_r0x0800aa20:
                    _printk(0x80026dd,pcVar13,uVar6);
                    iVar7 = -0x16;
                    _printk(0x80034fb,pcVar13,0xffffffea);
                    goto code_r0x0800a864;
                }
                iVar7 = *(arg2 + 0x128);
                uVar2 = *(uVar6 * 4 + 0x80093dc);
                iVar14 = *(iVar8 + 0x228);
                _printk(0x80034fb,"",uVar2);
                iVar14 = iVar14 * iVar7 * 0x20;
                iVar16 = iVar8 + uVar15 * 4;
                uStack_68 = CONCAT44(iVar14,uVar2);
                uStack_60 = *(iVar16 + 0x28c);
                if (*(iVar16 + 0x270) != 0) {
                    if (iVar7 < 0x2b110) {
                        if (iVar7 != 0xac44) {
                            iVar11 = 0x15888;
code_r0x0800aa60:
                            if (iVar7 != iVar11) goto code_r0x0800aa78;
                        }
                    }
                    else if (iVar7 != 0x56220) {
                        iVar11 = 0x2b110;
                        goto code_r0x0800aa60;
                    }
                    iVar7 = sym.mi2s_tdm_hw_vote_req(iVar8,1);
                    if (iVar7 < 0) goto code_r0x0800ab80;
                }
code_r0x0800aa78:
                _printk(0x8002eed,"",uVar2,iVar14);
                iVar7 = audio_prm_set_lpass_clk_cfg(&uStack_68,1);
                if (-1 < iVar7) goto code_r0x0800a854;
                uVar9 = 0x8003693;
code_r0x0800ab8c:
                _printk(uVar9,"",iVar7);
            }
        }
        else {
            iVar7 = 0;
code_r0x0800a854:
            Hint_Prefetch(piVar1,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                    *piVar1 = *piVar1 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
        }
code_r0x0800a864:
        mutex_unlock(iVar17);
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_58) {
        return iVar7;
    }
    __stack_chk_fail();
code_r0x0800abe0:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x800abe4);
    (*pcVar5)();
}


// ===== sym.get_mi2s_tdm_auxpcm_intf_index @ 0x0800ac0c (size 500) =====

ulong sym.get_mi2s_tdm_auxpcm_intf_index(int64_t arg1)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = strlen();
    iVar2 = strnstr(arg1,0x8003ced,uVar1);
    if (iVar2 == 0) {
        uVar1 = strlen(arg1);
        iVar2 = strnstr(arg1,"",uVar1);
        if (iVar2 == 0) {
            uVar1 = strlen(arg1);
            iVar2 = strnstr(arg1,"",uVar1);
            if (iVar2 == 0) {
                return 0xffffffea;
            }
        }
    }
    uVar1 = strlen(arg1);
    iVar2 = strnstr(arg1,"",uVar1);
    if (iVar2 != 0) {
        return 3;
    }
    uVar1 = strlen(arg1);
    iVar2 = strnstr(arg1,"LPAIF_WSA",uVar1);
    if (iVar2 != 0) {
        return 5;
    }
    uVar1 = strlen(arg1);
    iVar2 = strnstr(arg1,"",uVar1);
    if (iVar2 == 0) {
        uVar1 = strlen(arg1);
        iVar2 = strnstr(arg1,"",uVar1);
        uVar1 = strlen(arg1);
        if (iVar2 == 0) {
            iVar2 = strnstr(arg1,"LPAIF",uVar1);
            if (iVar2 != 0) {
                uVar1 = strlen(arg1);
                iVar2 = strnstr(arg1,"PRIMARY",uVar1);
                if (iVar2 != 0) {
                    return 0;
                }
                uVar1 = strlen(arg1);
                iVar2 = strnstr(arg1,"",uVar1);
                if (iVar2 != 0) {
                    return 1;
                }
            }
        }
        else {
            iVar2 = strnstr(arg1,"PRIMARY",uVar1);
            if (iVar2 != 0) {
                return 6;
            }
            uVar1 = strlen(arg1);
            iVar2 = strnstr(arg1,"",uVar1);
            if (iVar2 != 0) {
                return 2;
            }
        }
        _printk(0x8004601,"",arg1);
        return 0xffffffea;
    }
    return 4;
}


// ===== sym.msm_common_snd_startup @ 0x0800ae00 (size 368) =====

int sym.msm_common_snd_startup(int64_t arg1)

{
    int *piVar1;
    char cVar2;
    bool bVar3;
    code *pcVar4;
    uint32_t uVar5;
    int iVar6;
    int64_t iVar7;
    int64_t *piVar8;
    ulong *in_x18;
    uint64_t uVar9;
    int64_t iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar10 = *(arg1 + 0x10);
    iVar7 = sym.msm_common_get_pdata(*(iVar10 + 8));
    uVar5 = sym.get_mi2s_tdm_auxpcm_intf_index(*(*(iVar10 + 0x10) + 8));
    uVar9 = uVar5;
    _dev_printk(0x80045f2,*(*(iVar10 + 8) + 0x40),"%s: substream = %s  stream = %d\n","",arg1 + 0x1c,*(arg1 + 0x3c)
               );
    if (iVar7 == 0) {
        _dev_err(*(*(iVar10 + 8) + 0x40),"%s: pdata is NULL\n","");
        return -0x16;
    }
    if (uVar5 < 0) {
        return 0;
    }
    if (7 < uVar5) {
code_r0x0800af44:
    //WARNING: Does not return
        pcVar4 = SoftwareBreakpoint(0x5512,0x800af48);
        (*pcVar4)();
    }
    iVar10 = iVar7 + uVar9 * 0x30 + 0xd8;
    mutex_lock(iVar10);
    if (uVar5 == 7) goto code_r0x0800af44;
    piVar8 = iVar7 + uVar9 * 8 + 0xa0;
    if (*piVar8 != 0) {
        piVar1 = iVar7 + uVar9 * 4 + 0x22c;
        if ((*piVar1 == 0) && (iVar6 = msm_cdc_pinctrl_select_active_state(*piVar8), iVar6 != 0)) {
            _printk(0x80029ac,"",iVar6);
            goto code_r0x0800aed4;
        }
        Hint_Prefetch(piVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
                *piVar1 = *piVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
    }
    iVar6 = 0;
code_r0x0800aed4:
    mutex_unlock(iVar10);
    return iVar6;
}


// ===== sym.msm_common_snd_shutdown @ 0x0800af70 (size 1144) =====

void sym.msm_common_snd_shutdown(int64_t arg1)

{
    int iVar1;
    char cVar2;
    bool bVar3;
    code *pcVar4;
    uint32_t uVar5;
    int iVar6;
    int64_t *arg1_00;
    ulong uVar7;
    uint64_t uVar8;
    uint *extraout_x8;
    int *piVar9;
    char *pcVar10;
    uint *puVar11;
    uint extraout_x9;
    ulong *in_x18;
    int64_t iVar12;
    uint64_t uVar13;
    int64_t arg1_01;
    int64_t iVar14;
    uint64_t uVar15;
    ulong unaff_x30;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_58 = *(iVar12 + 0x5e0);
    uVar15 = *(arg1 + 0x10);
    iVar12 = *(uVar15 + 8);
    arg1_00 = sym.msm_common_get_pdata(iVar12);
    iVar14 = *(arg1 + 0xb8);
    arg1_01 = *(*(uVar15 + 0x10) + 8);
    uVar5 = sym.get_mi2s_tdm_auxpcm_intf_index(arg1_01);
    uVar13 = uVar5;
    iVar1 = *(iVar14 + 100);
    uStack_68 = 0;
    uStack_60 = 0;
    _printk(0x80027b7,"",arg1 + 0x1c,*(arg1 + 0x3c));
    if (arg1_00 == NULL) {
        _dev_err(*(iVar12 + 0x40),"%s: pdata is NULL\n","");
    }
    else {
        _dev_info(*(*(uVar15 + 8) + 0x40),"%s: pcm_id %d state %d\n","",*(uVar15 + 0x6b8),
                  *(*arg1_00 + *(uVar15 + 0x6b8)));
        arg1 = arg1_00 + 0xd;
        mutex_lock(arg1);
        if (*(*arg1_00 + *(uVar15 + 0x6b8)) == '\x01') {
            _dev_info(*(*(uVar15 + 8) + 0x40),"","");
            *(*arg1_00 + *(uVar15 + 0x6b8)) = 0;
            uVar8 = *(arg1_00 + 0x13);
            if (*(arg1_00 + 0x13) != 0) {
                pcVar10 = *arg1_00;
                do {
                    if (*pcVar10 == '\x01') goto code_r0x0800b05c;
                    uVar8 = uVar8 - 1;
                    pcVar10 = pcVar10 + 1;
                } while (uVar8 != 0);
            }
            spf_core_apm_close_all();
            msm_audio_ion_crash_handler();
        }
code_r0x0800b05c:
        mutex_unlock(arg1);
        if (-1 < uVar5) {
            if (uVar5 < 8) {
                arg1 = arg1_00 + uVar13 * 6 + 0x1b;
                mutex_lock(arg1);
                piVar9 = arg1_00 + uVar13 * 4 + 0x248;
                puVar11 = 0x1;
                uVar15 = uVar13;
                goto code_r0x0800b3b4;
            }
code_r0x0800b300:
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x5512,0x800b304);
            (*pcVar4)();
        }
    }
    do {
        iVar14 = sp_el0;
        if (*(iVar14 + 0x5e0) == iStack_58) {
            return;
        }
        __stack_chk_fail();
        puVar11 = CONCAT44(extraout_x9,*extraout_x8);
        piVar9 = CONCAT44(extraout_x8 >> 0x20,*puVar11);
code_r0x0800b3b4:
        Hint_Prefetch(piVar9,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar9,0x10);
            if (bVar3) {
                *piVar9 = *piVar9 - puVar11;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        uVar5 = uVar13;
        if (*piVar9 == 0) {
            uVar7 = strlen(arg1_01);
            iVar14 = strnstr(arg1_01,0x8003ced,uVar7);
            if (iVar14 == 0) {
                uVar7 = strlen(arg1_01);
                iVar14 = strnstr(arg1_01,"",uVar7);
                if (iVar14 == 0) {
                    _printk(0x8002f0b,"",arg1_01);
                    if (6 < uVar5) goto code_r0x0800b300;
                }
                else {
                    if (6 < uVar5) {
                        pcVar10 = "get_mi2s_clk_id";
                        goto code_r0x0800b2d8;
                    }
                    uVar5 = *(uVar5 * 4 + 0x80093f8);
                    uVar13 = uVar5;
                    _printk(0x80034fb,"get_mi2s_clk_id",uVar13);
                    uStack_68 = CONCAT44(uStack_68._4_4_,uVar5);
                    iVar6 = audio_prm_set_lpass_clk_cfg(&uStack_68,0);
                    if (iVar6 < 0) {
                        uVar7 = 0x800451d;
                        goto code_r0x0800b310;
                    }
                }
            }
            else {
                if (6 < uVar5) {
                    pcVar10 = "";
code_r0x0800b2d8:
                    _printk(0x80026dd,pcVar10,uVar13);
                    _printk(0x80034fb,pcVar10,0xffffffea);
                    goto code_r0x0800b300;
                }
                uVar5 = *(uVar5 * 4 + 0x80093dc);
                uVar13 = uVar5;
                _printk(0x80034fb,"",uVar13);
                uStack_68 = CONCAT44(uStack_68._4_4_,uVar5);
                iVar6 = audio_prm_set_lpass_clk_cfg(&uStack_68,0);
                if (iVar6 < 0) {
                    uVar7 = 0x8003a11;
code_r0x0800b310:
                    _printk(uVar7,"",iVar6);
                }
            }
            if (*(arg1_00 + uVar15 * 4 + 0x270) != 0) {
                if (iVar1 < 0x2b110) {
                    if (iVar1 != 0xac44) {
                        iVar6 = 0x15888;
code_r0x0800b2b8:
                        if (iVar1 != iVar6) goto code_r0x0800b0c0;
                    }
                }
                else if (iVar1 != 0x56220) {
                    iVar6 = 0x2b110;
                    goto code_r0x0800b2b8;
                }
                sym.mi2s_tdm_hw_vote_req(arg1_00,0);
            }
        }
        else {
            if (*piVar9 < 0) {
                *piVar9 = 0;
            }
            if (6 < uVar5) goto code_r0x0800b300;
        }
code_r0x0800b0c0:
        if (arg1_00[uVar15 + 0x14] != 0) {
            piVar9 = arg1_00 + uVar15 * 4 + 0x22c;
            Hint_Prefetch(piVar9,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(piVar9,0x10);
                if (bVar3) {
                    *piVar9 = *piVar9 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            if (*piVar9 == 0) {
                iVar6 = msm_cdc_pinctrl_select_sleep_state(arg1_00[uVar15 + 0x14]);
                if (iVar6 != 0) {
                    _dev_err(*(iVar12 + 0x40),"","",iVar6);
                }
            }
            else if (*piVar9 < 0) {
                *piVar9 = 0;
            }
        }
        mutex_unlock(arg1);
    } while( true );
}


// ===== sym.msm_common_snd_init @ 0x0800b3ec (size 1272) =====

void sym.msm_common_snd_init(int64_t arg1,int64_t arg2)

{
    int *piVar1;
    ulong *puVar2;
    char cVar3;
    bool bVar4;
    uint uVar5;
    uint32_t uVar6;
    int iVar7;
    ulong *arg2_00;
    ulong uVar8;
    uint64_t uVar9;
    int64_t iVar10;
    ulong uVar11;
    uint *extraout_x8;
    code *extraout_x8_00;
    code *pcVar12;
    code *extraout_x8_01;
    uint32_t *extraout_x8_02;
    uint32_t *extraout_x8_03;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar13;
    ulong unaff_x30;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    uint uStack_60;
    char acStack_58 [8];
    ushort uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_48 = *(iVar10 + 0x5e0);
    uStack_60 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_78 = 0;
    arg2_00 = kmem_cache_alloc_trace(_snd_soc_info_enum_double,0xdc0,0x2c8);
    if (arg2_00 == NULL) {
        uVar8 = 0xfffffff4;
    }
    else {
        __mutex_init(arg2_00 + 0x1b,"",obj.msm_common_snd_init.__key);
        *(arg2_00 + 0x22c) = 0;
        __mutex_init(arg2_00 + 0x21,"",obj.msm_common_snd_init.__key);
        *(arg2_00 + 0x46) = 0;
        __mutex_init(arg2_00 + 0x27,"",obj.msm_common_snd_init.__key);
        *(arg2_00 + 0x234) = 0;
        __mutex_init(arg2_00 + 0x2d,"",obj.msm_common_snd_init.__key);
        *(arg2_00 + 0x47) = 0;
        __mutex_init(arg2_00 + 0x33,"",obj.msm_common_snd_init.__key);
        *(arg2_00 + 0x23c) = 0;
        __mutex_init(arg2_00 + 0x39,"",obj.msm_common_snd_init.__key);
        *(arg2_00 + 0x48) = 0;
        __mutex_init(arg2_00 + 0x3f,"",obj.msm_common_snd_init.__key);
        *(arg2_00 + 0x244) = 0;
        piVar1 = arg2_00 + 0x45;
        iVar10 = arg1 + 0x10;
        iVar7 = of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,tdm-max-slots",piVar1,1,0);
        if (iVar7 < 0) {
            _dev_info(iVar10,"","");
        }
        if (*piVar1 - 9U < 0xfffffff8) {
            *piVar1 = 8;
            _dev_info(iVar10,"%s: Using default tdm max slot: %d\n","",8);
        }
        uVar9 = devm_clk_get(iVar10,"");
        if (0xfffffffffffff000 < uVar9) {
            _dev_printk(0x80045f2,iVar10,"","","");
            uVar9 = 0;
        }
        uVar8 = *(arg1 + 0x300);
        arg2_00[0x4d] = uVar9;
        iVar7 = of_property_read_variable_u32_array(uVar8,"qcom,mi2s-tdm-is-hw-vote-needed",&uStack_78,7,0);
        if (iVar7 < 0) {
            _dev_printk(0x80045f2,iVar10,"%s:no qcom,mi2s-tdm-is-hw-vote-needed in DT node\n","");
        }
        else {
            arg2_00[0x4e] = uStack_78;
            arg2_00[0x4f] = uStack_70;
            arg2_00[0x50] = uStack_68;
            *(arg2_00 + 0x51) = uStack_60;
        }
        iVar7 = of_property_read_variable_u32_array(*(arg1 + 0x300),"",&uStack_78,7,0);
        if (iVar7 < 0) {
            _dev_info(iVar10,"","");
            *(arg2_00 + 0x28c) = 0x100000001;
            *(arg2_00 + 0x294) = 0x100000001;
            *(arg2_00 + 0x29c) = 0x100000001;
            *(arg2_00 + 0x2a4) = 1;
        }
        else {
            *(arg2_00 + 0x28c) = uStack_78;
            *(arg2_00 + 0x294) = uStack_70;
            *(arg2_00 + 0x29c) = uStack_68;
            *(arg2_00 + 0x2a4) = uStack_60;
        }
        iVar7 = of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,mi2s-clk-attribute",&uStack_78,7,0);
        if (iVar7 < 0) {
            _dev_info(iVar10,"","");
            arg2_00[0x55] = 0x100000001;
            arg2_00[0x56] = 0x100000001;
            arg2_00[0x57] = 0x100000001;
            *(arg2_00 + 0x58) = 1;
        }
        else {
            arg2_00[0x55] = uStack_78;
            arg2_00[0x56] = uStack_70;
            arg2_00[0x57] = uStack_68;
            *(arg2_00 + 0x58) = uStack_60;
        }
        uVar8 = of_parse_phandle(*(arg1 + 0x300),"",0);
        uVar11 = *(arg1 + 0x300);
        arg2_00[0x14] = uVar8;
        uVar8 = of_parse_phandle(uVar11,"qcom,sec-mi2s-gpios",0);
        uVar11 = *(arg1 + 0x300);
        arg2_00[0x15] = uVar8;
        uVar8 = of_parse_phandle(uVar11,"",0);
        uVar11 = *(arg1 + 0x300);
        arg2_00[0x16] = uVar8;
        uVar8 = of_parse_phandle(uVar11,"",0);
        uVar11 = *(arg1 + 0x300);
        arg2_00[0x17] = uVar8;
        uVar8 = of_parse_phandle(uVar11,"",0);
        uVar11 = *(arg1 + 0x300);
        arg2_00[0x18] = uVar8;
        uVar8 = of_parse_phandle(uVar11,"qcom,sen-mi2s-gpios",0);
        uVar11 = *(arg1 + 0x300);
        arg2_00[0x19] = uVar8;
        uVar8 = of_parse_phandle(uVar11,"qcom,sep-mi2s-gpios",0);
        iVar7 = *(arg2 + 0x158);
        arg2_00[0x1a] = uVar8;
        uVar8 = devm_kmalloc(iVar10,iVar7,0xdc0);
        uVar5 = *(arg2 + 0x158);
        *arg2_00 = uVar8;
        _dev_info(arg1 + 0x10,"",uVar5);
        *(arg2_00 + 0x13) = *(arg2 + 0x158);
        __mutex_init(arg2_00 + 0xd,"",obj.msm_common_snd_init.__key);
        puVar2 = arg2_00 + 1;
        uStack_50 = 0;
        acStack_58[0] = str.aud_dev[0];
        acStack_58[1] = str.aud_dev[1];
        acStack_58[2] = str.aud_dev[2];
        acStack_58[3] = str.aud_dev[3];
        acStack_58[4] = str.aud_dev[4];
        acStack_58[5] = str.aud_dev[5];
        acStack_58[6] = str.aud_dev[6];
        acStack_58[7] = str.aud_dev[7];
        iVar7 = kobject_init_and_add(puVar2,obj.aud_dev_ktype,_wsa884x_codec_get_dev_num,acStack_58);
        if (iVar7 < 0) {
            _printk(0x80042cf,"",acStack_58,iVar7);
        }
        else {
            iVar7 = sysfs_create_file_ns(puVar2,obj.device_state_attr,0);
            if (iVar7 < 0) {
                _printk(0x80036e3,"",acStack_58);
                kobject_put(puVar2);
            }
        }
        sym.msm_common_set_pdata(arg2,arg2_00);
        sym.msm_audio_add_qos_request();
        uVar8 = 0;
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) != iStack_48) {
        uVar5 = __stack_chk_fail(uVar8);
        *extraout_x18 = sym.msm_audio_add_qos_request;
        *extraout_x8 = uVar5;
        uVar9 = __sw_hweight64();
        iVar10 = __kmalloc((uVar9 & 0xffffffff) * 0x58,0xdc0);
        _segment.ehdr = iVar10;
        if (iVar10 != 0) {
            iVar13 = 0;
            pcVar12 = extraout_x8_00;
            do {
                uVar6 = *(obj.audio_core_list + iVar13);
                *pcVar12 = iVar10;
                iVar10 = __sw_hweight64();
                if (uVar6 < iVar10) {
                    pcVar12 = obj.audio_cpu_map + (uVar6 >> 3 & 0x1ffffff8);
                    Hint_Prefetch(pcVar12,2,0,1);
                    do {
                        cVar3 = '\x01';
                        bVar4 = ExclusiveMonitorPass(pcVar12,0x10);
                        if (bVar4) {
                            *pcVar12 = *pcVar12 | 1L << (uVar6 & 0x3f);
                            cVar3 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar3 != '\0');
                }
                else {
                    iVar10 = _printk(0x8003845,"",uVar6);
                    pcVar12 = extraout_x8_01;
                }
                iVar13 = iVar13 + 4;
            } while (iVar13 != 0x18);
            uVar6 = cpumask_next(0xffffffff,obj.audio_cpu_map);
            *extraout_x8_02 = extraout_x8_02;
            if (uVar6 < extraout_x8_02) {
                do {
                    uVar8 = get_cpu_device(uVar6);
                    iVar7 = dev_pm_qos_add_request(uVar8,_segment.ehdr + uVar6 * 0x58,1,2000000000);
                    if (iVar7 < 0) {
                        _printk(0x800253e,"",iVar7,uVar6);
                    }
                    _printk(0x800463e,"",uVar6);
                    uVar6 = cpumask_next(uVar6,obj.audio_cpu_map);
                    *extraout_x8_03 = extraout_x8_03;
                } while (uVar6 < extraout_x8_03);
            }
        }
        return;
    }
    return;
}


// ===== sym.msm_audio_add_qos_request @ 0x0800b8e4 (size 448) =====

void sym.msm_audio_add_qos_request(uint *param_1,uint param_2)

{
    char cVar1;
    bool bVar2;
    uint32_t uVar3;
    int iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong uVar7;
    code *extraout_x8;
    code *pcVar8;
    code *extraout_x8_00;
    uint32_t *extraout_x8_01;
    uint32_t *extraout_x8_02;
    ulong *in_x18;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *param_1 = param_2;
    uVar5 = __sw_hweight64();
    iVar6 = __kmalloc((uVar5 & 0xffffffff) * 0x58,0xdc0);
    _segment.ehdr = iVar6;
    if (iVar6 != 0) {
        iVar9 = 0;
        pcVar8 = extraout_x8;
        do {
            uVar3 = *(obj.audio_core_list + iVar9);
            *pcVar8 = iVar6;
            iVar6 = __sw_hweight64();
            if (uVar3 < iVar6) {
                pcVar8 = obj.audio_cpu_map + (uVar3 >> 3 & 0x1ffffff8);
                Hint_Prefetch(pcVar8,2,0,1);
                do {
                    cVar1 = '\x01';
                    bVar2 = ExclusiveMonitorPass(pcVar8,0x10);
                    if (bVar2) {
                        *pcVar8 = *pcVar8 | 1L << (uVar3 & 0x3f);
                        cVar1 = ExclusiveMonitorsStatus();
                    }
                } while (cVar1 != '\0');
            }
            else {
                iVar6 = _printk(0x8003845,"",uVar3);
                pcVar8 = extraout_x8_00;
            }
            iVar9 = iVar9 + 4;
        } while (iVar9 != 0x18);
        uVar3 = cpumask_next(0xffffffff,obj.audio_cpu_map);
        *extraout_x8_01 = extraout_x8_01;
        if (uVar3 < extraout_x8_01) {
            do {
                uVar7 = get_cpu_device(uVar3);
                iVar4 = dev_pm_qos_add_request(uVar7,_segment.ehdr + uVar3 * 0x58,1,2000000000);
                if (iVar4 < 0) {
                    _printk(0x800253e,"",iVar4,uVar3);
                }
                _printk(0x800463e,"",uVar3);
                uVar3 = cpumask_next(uVar3,obj.audio_cpu_map);
                *extraout_x8_02 = extraout_x8_02;
            } while (uVar3 < extraout_x8_02);
        }
    }
    return;
}


// ===== sym.msm_common_snd_deinit @ 0x0800baa4 (size 256) =====

void sym.msm_common_snd_deinit(int64_t param_1)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t extraout_w8;
    uint32_t extraout_w8_00;
    uint extraout_x8;
    uint extraout_x8_00;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = _segment.ehdr;
    if ((param_1 != 0) && (_segment.ehdr != 0)) {
        uVar1 = cpumask_next(0xffffffff,obj.audio_cpu_map);
        *CONCAT44(extraout_x8,extraout_w8) = extraout_w8;
        if (uVar1 < extraout_w8) {
            do {
                iVar2 = dev_pm_qos_remove_request(iVar3 + uVar1 * 0x58);
                if (iVar2 < 0) {
                    _printk(0x8003b7f,"",iVar2,uVar1);
                }
                _printk(0x8004571,"",uVar1);
                uVar1 = cpumask_next(uVar1,obj.audio_cpu_map);
                *CONCAT44(extraout_x8_00,extraout_w8_00) = extraout_w8_00;
                iVar3 = _segment.ehdr;
            } while (uVar1 < extraout_w8_00);
        }
        kfree(iVar3);
    }
    return;
}


// ===== sym.msm_channel_map_info @ 0x0800bba4 (size 32) =====

ulong sym.msm_channel_map_info(int64_t arg1,int64_t arg2)

{
    *(arg2 + 0x40) = 4;
    *(arg2 + 0x48) = 0x50;
    return 0;
}


// ===== sym.msm_channel_map_get @ 0x0800bbc4 (size 820) =====

uint64_t sym.msm_channel_map_get(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    code *pcVar3;
    uint32_t uVar4;
    int iVar5;
    uint32_t uVar6;
    uint32_t *puVar7;
    int64_t iVar8;
    uint64_t uVar9;
    int64_t iVar10;
    int64_t iVar11;
    uint *puVar12;
    int64_t *piVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    int64_t iVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t unaff_x19;
    uint32_t *puVar17;
    ulong uVar18;
    int64_t iVar19;
    uint64_t unaff_x22;
    ulong uVar20;
    uint64_t unaff_x23;
    uint64_t unaff_x24;
    uint64_t unaff_x25;
    int64_t iVar21;
    uint64_t unaff_x26;
    ulong unaff_x30;
    uchar auVar22 [16];
    ulong uStack_2a0;
    ulong uStack_298;
    int64_t iStack_290;
    ulong uStack_288;
    ulong uStack_280;
    ulong uStack_278;
    ulong uStack_270;
    ulong uStack_268;
    ulong uStack_260;
    ulong uStack_258;
    ulong uStack_250;
    ulong uStack_248;
    ulong uStack_240;
    ulong uStack_238;
    ulong uStack_230;
    ulong uStack_228;
    unkbyte5 Stack_220;
    unkbyte3 Stack_21b;
    unkbyte5 Stack_218;
    ulong uStack_210;
    unkbyte5 Stack_208;
    unkbyte3 Stack_203;
    unkbyte5 Stack_200;
    int64_t iStack_1f8;
    uchar **ppuStack_1f0;
    code *pcStack_1e8;
    uint64_t uStack_1e0;
    uint64_t uStack_1d8;
    uint64_t uStack_1d0;
    uint64_t uStack_1c8;
    uint64_t uStack_1c0;
    uint32_t *puStack_1b8;
    uint64_t uStack_1b0;
    int64_t *piStack_1a8;
    ulong uStack_1a0;
    ulong uStack_198;
    ulong uStack_190;
    ulong uStack_188;
    ulong uStack_180;
    ulong uStack_178;
    unkbyte5 Stack_170;
    unkbyte3 Stack_16b;
    unkbyte5 Stack_168;
    ulong uStack_160;
    unkbyte5 Stack_158;
    unkbyte3 Stack_153;
    unkbyte5 Stack_150;
    int64_t iStack_148;
    uchar *puStack_140;
    code *pcStack_138;
    int64_t iStack_130;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    uint32_t auStack_108 [20];
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
    iVar8 = sp_el0;
    iStack_68 = *(iVar8 + 0x5e0);
    puVar17 = *(arg1 + 0x80);
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
    auStack_108[0x10] = 0;
    auStack_108[0x11] = 0;
    auStack_108[0x12] = 0;
    auStack_108[0x13] = 0;
    auStack_108[0xc] = 0;
    auStack_108[0xd] = 0;
    auStack_108[0xe] = 0;
    auStack_108[0xf] = 0;
    auStack_108[8] = 0;
    auStack_108[9] = 0;
    auStack_108[10] = 0;
    auStack_108[0xb] = 0;
    auStack_108[4] = 0;
    auStack_108[5] = 0;
    auStack_108[6] = 0;
    auStack_108[7] = 0;
    auStack_108[0] = 0;
    auStack_108[1] = 0;
    auStack_108[2] = 0;
    auStack_108[3] = 0;
    uStack_110 = 0;
    if (puVar17 == NULL) {
        _printk(0x800454b,"");
code_r0x0800beac:
        uVar15 = 0xffffffea;
        arg2 = unaff_x19;
    }
    else if (*puVar17 == 1) {
        uVar4 = snd_soc_dai_get_channel_map(*(puVar17 + 2),&uStack_110,auStack_108,&uStack_110 + 4,&uStack_b8);
        uVar15 = uVar4;
        if (uVar4 == 0) {
            uVar4 = uStack_110._4_4_;
            unaff_x23 = uStack_110._4_4_;
            if (uStack_110 != 0 || uStack_110._4_4_ != 0) {
                uVar6 = uStack_110;
                if (uStack_110._4_4_ != 0) {
                    uVar6 = uStack_110._4_4_;
                }
                unaff_x22 = uVar6;
                if (2 < uVar6) {
                    _printk(0x8002be7,"",uVar6);
                    unaff_x19 = arg2;
                    goto code_r0x0800beac;
                }
                iVar5 = uVar6 * 4 + 4;
                puVar7 = __kmalloc(iVar5,0xdc0);
                if (puVar7 == NULL) goto code_r0x0800be10;
                *puVar7 = uVar6;
                if (uVar6 != 0) {
                    puVar17 = auStack_108;
                    if (uVar4 != 0) {
                        puVar17 = &uStack_b8;
                    }
                    puVar7[1] = *puVar17;
                    if (uVar6 != 1) {
                        puVar17 = auStack_108;
                        if (uVar4 != 0) {
                            puVar17 = &uStack_b8;
                        }
                        puVar7[2] = *(puVar17 | 4);
                    }
                }
                memcpy(arg2 + 0x48,puVar7,iVar5);
                uVar15 = 0;
                goto code_r0x0800be04;
            }
        }
        _printk(0x8003b32,"",1);
    }
    else if (*puVar17 == 2) {
        uVar15 = puVar17[1];
        unaff_x22 = 0;
        unaff_x23 = 0;
        unaff_x24 = 0;
        unaff_x25 = 0;
        uStack_120 = 0;
        uStack_118 = 0;
        if (puVar17[1] != 0) {
            unaff_x26 = 0;
            do {
                if (unaff_x26 == 8) {
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(0x5512,0x800bef4);
                    (*pcVar3)();
                }
                if (*(puVar17 + unaff_x26 * 2 + 2) != 0) {
                    uStack_120 = 0;
                    uStack_118 = 0;
                    uVar4 = snd_soc_dai_get_channel_map
                                      (*(puVar17 + unaff_x26 * 2 + 2),&uStack_120,&uStack_118,&uStack_120 + 4,
                                       &uStack_118 + 4);
                    if ((uVar4 != 0xfffffdf4) && (uVar15 = uVar4, uVar4 != 0)) {
                        _printk(0x8002ca8,"",2,uVar15);
                        goto code_r0x0800beb0;
                    }
                    uVar4 = uStack_120._4_4_ + unaff_x25;
                    unaff_x25 = uVar4;
                    uVar6 = uStack_120 + unaff_x24;
                    unaff_x24 = uVar6;
                    uVar1 = uStack_118._4_4_ | unaff_x23;
                    unaff_x23 = uVar1;
                    uVar2 = uStack_118 | unaff_x22;
                    unaff_x22 = uVar2;
                    uVar15 = puVar17[1];
                    uStack_110 = CONCAT44(uVar4,uVar6);
                    uStack_b8 = CONCAT44(uStack_b8._4_4_,uVar1);
                    auStack_108[0] = uVar2;
                }
                unaff_x26 = unaff_x26 + 1;
            } while (unaff_x26 < uVar15);
        }
        uVar6 = unaff_x25;
        uVar4 = unaff_x22;
        if (uVar6 == 0 && unaff_x24 == 0) {
            _printk(0x800372f,"",2,0,0);
            uVar15 = 0;
        }
        else {
            iVar8 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar8 = 0x30;
            }
            puVar7 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar8),0xdc0,8);
            if (puVar7 != NULL) {
                uVar1 = unaff_x24;
                if (uVar6 != 0) {
                    uVar4 = unaff_x23;
                    uVar1 = uVar6;
                }
                uVar15 = 0;
                *puVar7 = uVar1;
                puVar7[1] = uVar4;
                *(arg2 + 0x48) = *puVar7;
                goto code_r0x0800be04;
            }
code_r0x0800be10:
            uVar15 = 0xfffffff4;
        }
    }
    else {
        _printk(0x8003b65,"");
        puVar7 = NULL;
        uVar15 = 0xffffffea;
code_r0x0800be04:
        kfree(puVar7);
        puVar17 = puVar7;
    }
code_r0x0800beb0:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_68) {
        return uVar15;
    }
    auVar22 = __stack_chk_fail();
    piVar13 = auVar22._8_8_;
    *extraout_x18 = sym.msm_common_get_backend_name;
    pcStack_138 = sym.msm_common_get_backend_name;
    iVar8 = sp_el0;
    iStack_148 = *(iVar8 + 0x5e0);
    Stack_150 = 0;
    uStack_160 = 0;
    Stack_158 = 0;
    Stack_153 = 0;
    Stack_168 = 0;
    uStack_178 = 0;
    Stack_170 = 0;
    Stack_16b = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_1a0 = 0;
    puStack_140 = &stack0xffffffffffffffa0;
    iStack_130 = arg2;
    sscanf(auVar22._0_8_,"",&uStack_160,&uStack_1a0);
    uVar14 = 0x15;
    iVar8 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar8 = 0x30;
    }
    iVar8 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar8),0xdc0,0x15);
    *piVar13 = iVar8;
    uVar9 = 0;
    if (iVar8 != 0) {
        uVar14 = 0x15;
        uVar9 = strlcpy(iVar8,&uStack_160,0x15);
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_148) {
        return uVar9;
    }
    iVar10 = __stack_chk_fail();
    *extraout_x18_00 = sym.msm_common_dai_link_init;
    pcStack_1e8 = sym.msm_common_dai_link_init;
    iVar8 = sp_el0;
    iStack_1f8 = *(iVar8 + 0x5e0);
    iVar8 = *(iVar10 + 0x10);
    iVar21 = *(*(iVar10 + 0x600) + *(iVar10 + 0x60c) * 8);
    uStack_270 = _reloc.msm_channel_map_get.cfi_jt;
    uStack_268 = *0x80093b8;
    uVar18 = *(*(iVar10 + 8) + 0x40);
    uStack_260 = *0x80093c0;
    uStack_258 = *0x80093c8;
    iStack_290 = *0x8009390;
    uStack_288 = *0x8009398;
    uStack_280 = *0x80093a0;
    uStack_278 = _reloc.msm_channel_map_info.cfi_jt;
    uStack_2a0 = *0x8009380;
    uStack_298 = *0x8009388;
    ppuStack_1f0 = &puStack_140;
    uStack_1e0 = unaff_x26;
    uStack_1d8 = unaff_x25;
    uStack_1d0 = unaff_x24;
    uStack_1c8 = unaff_x23;
    uStack_1c0 = unaff_x22;
    puStack_1b8 = puVar17;
    uStack_1b0 = uVar15;
    piStack_1a8 = piVar13;
    if (iVar21 == 0) {
        uVar18 = 0x80041ff;
    }
    else {
        uVar20 = *(iVar21 + 0x58);
        Stack_200 = 0;
        uStack_210 = 0;
        Stack_208 = 0;
        Stack_203 = 0;
        Stack_218 = 0;
        uStack_228 = 0;
        Stack_220 = 0;
        Stack_21b = 0;
        uStack_238 = 0;
        uStack_230 = 0;
        uStack_248 = 0;
        uStack_240 = 0;
        uStack_250 = 0;
        sscanf(*(iVar8 + 8),"",&uStack_210,&uStack_250);
        uVar14 = 0x15;
        iVar11 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar11 = 0x30;
        }
        iVar11 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar11),0xdc0,0x15);
        if (iVar11 != 0) {
            strlcpy(iVar11,&uStack_210,0x15);
            uVar14 = 0xdc0;
            puVar12 = devm_kmalloc(uVar18,0x48,0xdc0);
            if (puVar12 == NULL) {
code_r0x0800c178:
                uVar4 = 0xfffffff4;
            }
            else {
                uVar14 = 4;
                iVar5 = strncmp(iVar11,"",4);
                if (iVar5 == 0) {
code_r0x0800c15c:
                    iVar5 = strlen(*(iVar8 + 8));
                    iVar19 = __kmalloc(iVar5 + 0xd,0xdc0);
                    if (iVar19 == 0) goto code_r0x0800c178;
                    snprintf(iVar19,iVar5 + 0xd,"",*(iVar8 + 8),"Channel Map");
                    uStack_258 = 0;
                    iStack_290 = iVar19;
                    _printk(0x80032a1,iVar19);
                    uVar14 = 1;
                    uVar4 = snd_soc_add_component_controls(uVar20,&uStack_2a0,1);
                    iVar8 = snd_soc_card_get_kcontrol(*(iVar10 + 8),iVar19);
                    if (iVar8 != 0) {
                        uVar14 = 4;
                        *(puVar12 + 2) = iVar21;
                        puVar12[1] = 1;
                        iVar5 = strncmp(iVar11,"",4);
                        if (iVar5 == 0) {
                            *puVar12 = 1;
                        }
                        else {
                            uVar6 = *(iVar10 + 0x608);
                            *puVar12 = 2;
                            if ((uVar6 < 9) && (puVar12[1] = uVar6, uVar6 != 0)) {
                                uVar1 = *(iVar10 + 0x60c);
                                iVar21 = *(iVar10 + 0x600);
                                iVar16 = *(iVar21 + uVar1 * 8);
                                if ((((iVar16 != 0) &&
                                     (((*(puVar12 + 2) = iVar16, uVar6 != 1 &&
                                       (iVar16 = *(iVar21 + (uVar1 + 1) * 8), iVar16 != 0)) &&
                                      (*(puVar12 + 4) = iVar16, uVar6 != 2)))) &&
                                    ((((iVar16 = *(iVar21 + (uVar1 + 2) * 8), iVar16 != 0 &&
                                       (*(puVar12 + 6) = iVar16, uVar6 != 3)) &&
                                      (iVar16 = *(iVar21 + (uVar1 + 3) * 8), iVar16 != 0)) &&
                                     ((*(puVar12 + 8) = iVar16, uVar6 != 4 &&
                                      (iVar16 = *(iVar21 + (uVar1 + 4) * 8), iVar16 != 0)))))) &&
                                   ((*(puVar12 + 10) = iVar16, uVar6 != 5 &&
                                    ((((iVar16 = *(iVar21 + (uVar1 + 5) * 8), iVar16 != 0 &&
                                       (*(puVar12 + 0xc) = iVar16, uVar6 != 6)) &&
                                      (iVar16 = *(iVar21 + (uVar1 + 6) * 8), iVar16 != 0)) &&
                                     ((*(puVar12 + 0xe) = iVar16, uVar6 != 7 &&
                                      (iVar21 = *(iVar21 + (uVar1 + 7) * 8), iVar21 != 0)))))))) {
                                    *(puVar12 + 0x10) = iVar21;
                                }
                            }
                        }
                        *(iVar8 + 0x80) = puVar12;
                        goto code_r0x0800c110;
                    }
                    _printk(0x8003f35,iVar19);
                    uVar4 = 0xffffffea;
                }
                else {
                    uVar14 = 9;
                    iVar5 = strncmp(iVar11,"",9);
                    if (iVar5 == 0) goto code_r0x0800c15c;
                    uVar4 = 0;
                    iVar19 = 0;
code_r0x0800c110:
                    if ((obj.msm_common_snd_init.__key & 1) == 0) {
                        iVar8 = snd_soc_rtdcom_lookup(iVar10,"lpass-cdc");
                        if (iVar8 == 0) {
                            _printk(0x800350d,"");
                        }
                        else {
                            uVar14 = 3;
                            uVar6 = snd_soc_add_component_controls(iVar8,obj.card_mixer_controls,3);
                            if (uVar6 < 0) {
                                uVar14 = uVar6;
                                _printk(0x800433f,"",uVar14);
                            }
                            else {
                                obj.msm_common_snd_init.__key = 0x1;
                            }
                        }
                    }
                }
                if (iVar19 != 0) {
                    kfree(iVar19);
                }
            }
            kfree(iVar11);
            goto code_r0x0800c184;
        }
        uVar18 = 0x80036c2;
    }
    _printk(uVar18,"");
    uVar4 = 0xffffffea;
code_r0x0800c184:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_1f8) {
        __stack_chk_fail();
        *extraout_x18_01 = sym.snd_card_sysfs_show;
        iVar5 = snprintf(uVar14,0x20,0x8002491,*(_segment.ehdr + 0x60));
        return iVar5;
    }
    return uVar4;
}


// ===== sym.msm_common_get_backend_name @ 0x0800bef8 (size 204) =====

uint64_t sym.msm_common_get_backend_name(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    ulong in_x0;
    int64_t iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint *puVar9;
    uint64_t uVar10;
    int64_t iVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong uVar12;
    int64_t iVar13;
    ulong uVar14;
    int64_t iVar15;
    ulong unaff_x30;
    ulong uStack_180;
    ulong uStack_178;
    int64_t iStack_170;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    unkbyte5 Stack_100;
    unkbyte3 Stack_fb;
    unkbyte5 Stack_f8;
    ulong uStack_f0;
    unkbyte5 Stack_e8;
    unkbyte3 Stack_e3;
    unkbyte5 Stack_e0;
    int64_t iStack_d8;
    uchar *puStack_d0;
    code *pcStack_c8;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    unkbyte5 Stack_50;
    unkbyte3 Stack_4b;
    unkbyte5 Stack_48;
    ulong uStack_40;
    unkbyte5 Stack_38;
    unkbyte3 Stack_33;
    unkbyte5 Stack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    Stack_30 = 0;
    uStack_40 = 0;
    Stack_38 = 0;
    Stack_33 = 0;
    Stack_48 = 0;
    uStack_58 = 0;
    Stack_50 = 0;
    Stack_4b = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_80 = 0;
    sscanf(in_x0,"",&uStack_40,&uStack_80);
    uVar10 = 0x15;
    iVar5 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar5 = 0x30;
    }
    iVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar5),0xdc0,0x15);
    *arg1 = iVar5;
    uVar6 = 0;
    if (iVar5 != 0) {
        uVar10 = 0x15;
        uVar6 = strlcpy(iVar5,&uStack_40,0x15);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_28) {
        return uVar6;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18 = sym.msm_common_dai_link_init;
    pcStack_c8 = sym.msm_common_dai_link_init;
    iVar5 = sp_el0;
    iStack_d8 = *(iVar5 + 0x5e0);
    iVar5 = *(iVar7 + 0x10);
    iVar15 = *(*(iVar7 + 0x600) + *(iVar7 + 0x60c) * 8);
    uStack_150 = _reloc.msm_channel_map_get.cfi_jt;
    uStack_148 = *0x80093b8;
    uVar12 = *(*(iVar7 + 8) + 0x40);
    uStack_140 = *0x80093c0;
    uStack_138 = *0x80093c8;
    iStack_170 = *0x8009390;
    uStack_168 = *0x8009398;
    uStack_160 = *0x80093a0;
    uStack_158 = _reloc.msm_channel_map_info.cfi_jt;
    uStack_180 = *0x8009380;
    uStack_178 = *0x8009388;
    puStack_d0 = &stack0xffffffffffffffe0;
    if (iVar15 == 0) {
        uVar12 = 0x80041ff;
    }
    else {
        uVar14 = *(iVar15 + 0x58);
        Stack_e0 = 0;
        uStack_f0 = 0;
        Stack_e8 = 0;
        Stack_e3 = 0;
        Stack_f8 = 0;
        uStack_108 = 0;
        Stack_100 = 0;
        Stack_fb = 0;
        uStack_118 = 0;
        uStack_110 = 0;
        uStack_128 = 0;
        uStack_120 = 0;
        uStack_130 = 0;
        sscanf(*(iVar5 + 8),"",&uStack_f0,&uStack_130);
        uVar10 = 0x15;
        iVar8 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar8 = 0x30;
        }
        iVar8 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar8),0xdc0,0x15);
        if (iVar8 != 0) {
            strlcpy(iVar8,&uStack_f0,0x15);
            uVar10 = 0xdc0;
            puVar9 = devm_kmalloc(uVar12,0x48,0xdc0);
            if (puVar9 == NULL) {
code_r0x0800c178:
                uVar4 = 0xfffffff4;
            }
            else {
                uVar10 = 4;
                iVar2 = strncmp(iVar8,"",4);
                if (iVar2 == 0) {
code_r0x0800c15c:
                    iVar2 = strlen(*(iVar5 + 8));
                    iVar13 = __kmalloc(iVar2 + 0xd,0xdc0);
                    if (iVar13 == 0) goto code_r0x0800c178;
                    snprintf(iVar13,iVar2 + 0xd,"",*(iVar5 + 8),"Channel Map");
                    uStack_138 = 0;
                    iStack_170 = iVar13;
                    _printk(0x80032a1,iVar13);
                    uVar10 = 1;
                    uVar4 = snd_soc_add_component_controls(uVar14,&uStack_180,1);
                    iVar5 = snd_soc_card_get_kcontrol(*(iVar7 + 8),iVar13);
                    if (iVar5 != 0) {
                        uVar10 = 4;
                        *(puVar9 + 2) = iVar15;
                        puVar9[1] = 1;
                        iVar2 = strncmp(iVar8,"",4);
                        if (iVar2 == 0) {
                            *puVar9 = 1;
                        }
                        else {
                            uVar3 = *(iVar7 + 0x608);
                            *puVar9 = 2;
                            if ((uVar3 < 9) && (puVar9[1] = uVar3, uVar3 != 0)) {
                                uVar1 = *(iVar7 + 0x60c);
                                iVar15 = *(iVar7 + 0x600);
                                iVar11 = *(iVar15 + uVar1 * 8);
                                if ((((iVar11 != 0) &&
                                     (((*(puVar9 + 2) = iVar11, uVar3 != 1 &&
                                       (iVar11 = *(iVar15 + (uVar1 + 1) * 8), iVar11 != 0)) &&
                                      (*(puVar9 + 4) = iVar11, uVar3 != 2)))) &&
                                    ((((iVar11 = *(iVar15 + (uVar1 + 2) * 8), iVar11 != 0 &&
                                       (*(puVar9 + 6) = iVar11, uVar3 != 3)) &&
                                      (iVar11 = *(iVar15 + (uVar1 + 3) * 8), iVar11 != 0)) &&
                                     ((*(puVar9 + 8) = iVar11, uVar3 != 4 &&
                                      (iVar11 = *(iVar15 + (uVar1 + 4) * 8), iVar11 != 0)))))) &&
                                   ((*(puVar9 + 10) = iVar11, uVar3 != 5 &&
                                    ((((iVar11 = *(iVar15 + (uVar1 + 5) * 8), iVar11 != 0 &&
                                       (*(puVar9 + 0xc) = iVar11, uVar3 != 6)) &&
                                      (iVar11 = *(iVar15 + (uVar1 + 6) * 8), iVar11 != 0)) &&
                                     ((*(puVar9 + 0xe) = iVar11, uVar3 != 7 &&
                                      (iVar15 = *(iVar15 + (uVar1 + 7) * 8), iVar15 != 0)))))))) {
                                    *(puVar9 + 0x10) = iVar15;
                                }
                            }
                        }
                        *(iVar5 + 0x80) = puVar9;
                        goto code_r0x0800c110;
                    }
                    _printk(0x8003f35,iVar13);
                    uVar4 = 0xffffffea;
                }
                else {
                    uVar10 = 9;
                    iVar2 = strncmp(iVar8,"",9);
                    if (iVar2 == 0) goto code_r0x0800c15c;
                    uVar4 = 0;
                    iVar13 = 0;
code_r0x0800c110:
                    if ((obj.msm_common_snd_init.__key & 1) == 0) {
                        iVar5 = snd_soc_rtdcom_lookup(iVar7,"lpass-cdc");
                        if (iVar5 == 0) {
                            _printk(0x800350d,"");
                        }
                        else {
                            uVar10 = 3;
                            uVar3 = snd_soc_add_component_controls(iVar5,obj.card_mixer_controls,3);
                            if (uVar3 < 0) {
                                uVar10 = uVar3;
                                _printk(0x800433f,"",uVar10);
                            }
                            else {
                                obj.msm_common_snd_init.__key = 0x1;
                            }
                        }
                    }
                }
                if (iVar13 != 0) {
                    kfree(iVar13);
                }
            }
            kfree(iVar8);
            goto code_r0x0800c184;
        }
        uVar12 = 0x80036c2;
    }
    _printk(uVar12,"");
    uVar4 = 0xffffffea;
code_r0x0800c184:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_d8) {
        return uVar4;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.snd_card_sysfs_show;
    iVar2 = snprintf(uVar10,0x20,0x8002491,*(_segment.ehdr + 0x60));
    return iVar2;
}


// ===== sym.msm_common_dai_link_init @ 0x0800bfc4 (size 996) =====

uint64_t sym.msm_common_dai_link_init(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    uint *puVar6;
    int64_t iVar7;
    uint64_t in_x2;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar9;
    int64_t iVar10;
    ulong uVar11;
    int64_t iVar12;
    ulong unaff_x30;
    ulong uStack_100;
    ulong uStack_f8;
    int64_t iStack_f0;
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
    unkbyte5 Stack_80;
    unkbyte3 Stack_7b;
    unkbyte5 Stack_78;
    ulong uStack_70;
    unkbyte5 Stack_68;
    unkbyte3 Stack_63;
    unkbyte5 Stack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_58 = *(iVar7 + 0x5e0);
    iVar7 = *(arg1 + 0x10);
    iVar12 = *(*(arg1 + 0x600) + *(arg1 + 0x60c) * 8);
    uStack_d0 = _reloc.msm_channel_map_get.cfi_jt;
    uStack_c8 = *0x80093b8;
    uVar9 = *(*(arg1 + 8) + 0x40);
    uStack_c0 = *0x80093c0;
    uStack_b8 = *0x80093c8;
    iStack_f0 = *0x8009390;
    uStack_e8 = *0x8009398;
    uStack_e0 = *0x80093a0;
    uStack_d8 = _reloc.msm_channel_map_info.cfi_jt;
    uStack_100 = *0x8009380;
    uStack_f8 = *0x8009388;
    if (iVar12 == 0) {
        uVar9 = 0x80041ff;
    }
    else {
        uVar11 = *(iVar12 + 0x58);
        Stack_60 = 0;
        uStack_70 = 0;
        Stack_68 = 0;
        Stack_63 = 0;
        Stack_78 = 0;
        uStack_88 = 0;
        Stack_80 = 0;
        Stack_7b = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_b0 = 0;
        sscanf(*(iVar7 + 8),"",&uStack_70,&uStack_b0);
        in_x2 = 0x15;
        iVar5 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar5 = 0x30;
        }
        iVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar5),0xdc0,0x15);
        if (iVar5 != 0) {
            strlcpy(iVar5,&uStack_70,0x15);
            in_x2 = 0xdc0;
            puVar6 = devm_kmalloc(uVar9,0x48,0xdc0);
            if (puVar6 == NULL) {
code_r0x0800c178:
                uVar4 = 0xfffffff4;
            }
            else {
                in_x2 = 4;
                iVar2 = strncmp(iVar5,"",4);
                if (iVar2 == 0) {
code_r0x0800c15c:
                    iVar2 = strlen(*(iVar7 + 8));
                    iVar10 = __kmalloc(iVar2 + 0xd,0xdc0);
                    if (iVar10 == 0) goto code_r0x0800c178;
                    snprintf(iVar10,iVar2 + 0xd,"",*(iVar7 + 8),"Channel Map");
                    uStack_b8 = 0;
                    iStack_f0 = iVar10;
                    _printk(0x80032a1,iVar10);
                    in_x2 = 1;
                    uVar4 = snd_soc_add_component_controls(uVar11,&uStack_100,1);
                    iVar7 = snd_soc_card_get_kcontrol(*(arg1 + 8),iVar10);
                    if (iVar7 != 0) {
                        in_x2 = 4;
                        *(puVar6 + 2) = iVar12;
                        puVar6[1] = 1;
                        iVar2 = strncmp(iVar5,"",4);
                        if (iVar2 == 0) {
                            *puVar6 = 1;
                        }
                        else {
                            uVar3 = *(arg1 + 0x608);
                            *puVar6 = 2;
                            if ((uVar3 < 9) && (puVar6[1] = uVar3, uVar3 != 0)) {
                                uVar1 = *(arg1 + 0x60c);
                                iVar12 = *(arg1 + 0x600);
                                iVar8 = *(iVar12 + uVar1 * 8);
                                if ((((iVar8 != 0) &&
                                     (((*(puVar6 + 2) = iVar8, uVar3 != 1 &&
                                       (iVar8 = *(iVar12 + (uVar1 + 1) * 8), iVar8 != 0)) &&
                                      (*(puVar6 + 4) = iVar8, uVar3 != 2)))) &&
                                    ((((iVar8 = *(iVar12 + (uVar1 + 2) * 8), iVar8 != 0 &&
                                       (*(puVar6 + 6) = iVar8, uVar3 != 3)) &&
                                      (iVar8 = *(iVar12 + (uVar1 + 3) * 8), iVar8 != 0)) &&
                                     ((*(puVar6 + 8) = iVar8, uVar3 != 4 &&
                                      (iVar8 = *(iVar12 + (uVar1 + 4) * 8), iVar8 != 0)))))) &&
                                   ((*(puVar6 + 10) = iVar8, uVar3 != 5 &&
                                    ((((iVar8 = *(iVar12 + (uVar1 + 5) * 8), iVar8 != 0 &&
                                       (*(puVar6 + 0xc) = iVar8, uVar3 != 6)) &&
                                      (iVar8 = *(iVar12 + (uVar1 + 6) * 8), iVar8 != 0)) &&
                                     ((*(puVar6 + 0xe) = iVar8, uVar3 != 7 &&
                                      (iVar12 = *(iVar12 + (uVar1 + 7) * 8), iVar12 != 0)))))))) {
                                    *(puVar6 + 0x10) = iVar12;
                                }
                            }
                        }
                        *(iVar7 + 0x80) = puVar6;
                        goto code_r0x0800c110;
                    }
                    _printk(0x8003f35,iVar10);
                    uVar4 = 0xffffffea;
                }
                else {
                    in_x2 = 9;
                    iVar2 = strncmp(iVar5,"",9);
                    if (iVar2 == 0) goto code_r0x0800c15c;
                    uVar4 = 0;
                    iVar10 = 0;
code_r0x0800c110:
                    if ((obj.msm_common_snd_init.__key & 1) == 0) {
                        iVar7 = snd_soc_rtdcom_lookup(arg1,"lpass-cdc");
                        if (iVar7 == 0) {
                            _printk(0x800350d,"");
                        }
                        else {
                            in_x2 = 3;
                            uVar3 = snd_soc_add_component_controls(iVar7,obj.card_mixer_controls,3);
                            if (uVar3 < 0) {
                                in_x2 = uVar3;
                                _printk(0x800433f,"",in_x2);
                            }
                            else {
                                obj.msm_common_snd_init.__key = 0x1;
                            }
                        }
                    }
                }
                if (iVar10 != 0) {
                    kfree(iVar10);
                }
            }
            kfree(iVar5);
            goto code_r0x0800c184;
        }
        uVar9 = 0x80036c2;
    }
    _printk(uVar9,"");
    uVar4 = 0xffffffea;
code_r0x0800c184:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_58) {
        return uVar4;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.snd_card_sysfs_show;
    iVar2 = snprintf(in_x2,0x20,0x8002491,*(_segment.ehdr + 0x60));
    return iVar2;
}


// ===== sym.snd_card_sysfs_show @ 0x0800c3a8 (size 68) =====

int64_t sym.snd_card_sysfs_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(arg1,0x20,0x8002491,*(_segment.ehdr + 0x60));
    return iVar1;
}


// ===== sym.snd_card_sysfs_store @ 0x0800c3ec (size 92) =====

ulong sym.snd_card_sysfs_store(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sscanf(arg1,0x8002491,_segment.ehdr + 0x60);
    sysfs_notify(_segment.ehdr,0,"");
    return 0;
}


// ===== sym.aud_dev_sysfs_store @ 0x0800c448 (size 276) =====

uint64_t sym.aud_dev_sysfs_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,uint32_t arg3)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t extraout_x1;
    uint32_t uVar3;
    ulong *in_x18;
    uint64_t uVar4;
    ulong unaff_x30;
    ulong uStack_30;
    int64_t iStack_28;
    
    uVar4 = arg3;
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_30 = 0;
    if (uVar4 < 0xb) {
        sscanf(arg2,"",&uStack_30 + 4,&uStack_30);
        if (*(arg1 + 0x90) < uStack_30._4_4_) {
            uVar2 = 0x8002adf;
            uVar3 = uStack_30._4_4_;
        }
        else {
            if (uStack_30 < 2) {
                _printk(0x800342d,"aud_dev_sysfs_store");
                *(*(arg1 + -8) + (uStack_30 >> 0x20)) = uStack_30;
                goto code_r0x0800c528;
            }
            uVar2 = 0x80035e3;
            uVar3 = uStack_30;
        }
        _printk(uVar2,"aud_dev_sysfs_store",uVar3);
        uVar4 = 0xffffffffffffffea;
    }
    else {
        _printk(0x8003153,"aud_dev_sysfs_store");
        uVar4 = 0xffffffffffffffea;
    }
code_r0x0800c528:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return uVar4;
    }
    __stack_chk_fail();
    *(extraout_x1 + 0x48) = _segment.ehdr;
    return 0;
}


// ===== sym.msm_qos_ctl_get @ 0x0800c55c (size 28) =====

ulong sym.msm_qos_ctl_get(int64_t arg1,int64_t arg2)

{
    *(arg2 + 0x48) = _segment.ehdr;
    return 0;
}


// ===== sym.msm_qos_ctl_put @ 0x0800c578 (size 372) =====

//WARNING: Removing unreachable block (ram,0x0800c5f4)

ulong sym.msm_qos_ctl_put(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint32_t uVar2;
    int iVar3;
    ulong uVar4;
    ulong *in_x7;
    ulong extraout_x8;
    ulong extraout_x8_00;
    ulong *in_x18;
    int iVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = *(arg2 + 0x48);
    if (_segment.ehdr == 0) {
        iVar5 = 2000000000;
        _segment.ehdr = 0;
    }
    else {
        if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
            dev_pm_qos_remove_request(obj.latency_pm_qos_req);
        }
        if (_segment.ehdr != 0) {
            _segment.ehdr = _segment.ehdr + 1;
            return 0;
        }
        iVar5 = 300;
        _segment.ehdr = 1;
    }
    iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
    if (iVar6 != 0) {
        uVar2 = cpumask_next(0xffffffff,obj.audio_cpu_map);
        *in_x7 = extraout_x8;
        if (uVar2 < extraout_x8) {
            while( true ) {
                iVar3 = dev_pm_qos_update_request(iVar6 + uVar2 * 0x58,iVar5);
                iVar1 = iVar5;
                if (iVar3 == 0) {
                    uVar4 = 0x8003d45;
                }
                else {
                    uVar4 = 0x80027e6;
                    if (iVar3 != 1) {
                        uVar4 = 0x800264f;
                        iVar1 = iVar3;
                    }
                }
                _printk(uVar4,"",uVar2,iVar1);
                uVar2 = cpumask_next(uVar2,obj.audio_cpu_map);
                *in_x7 = extraout_x8_00;
                if (extraout_x8_00 <= uVar2) break;
                iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
            }
        }
    }
    return 0;
}


// ===== sym.msm_lpi_logging_enable_get @ 0x0800c6ec (size 28) =====

ulong sym.msm_lpi_logging_enable_get(int64_t arg1,int64_t arg2)

{
    *(arg2 + 0x48) = obj.lpi_pcm_logging_enable;
    return 0;
}


// ===== sym.msm_lpi_logging_enable_put @ 0x0800c708 (size 92) =====

ulong sym.msm_lpi_logging_enable_put(ulong noname_0,int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    obj.lpi_pcm_logging_enable = *(arg1 + 0x48) != 0;
    _printk(0x8004597,"msm_lpi_logging_enable_put");
    audio_prm_set_lpi_logging_status(obj.lpi_pcm_logging_enable);
    return 0;
}


// ===== sym.msm_vote_against_sleep_ctl_get @ 0x0800c764 (size 68) =====

ulong sym.msm_vote_against_sleep_ctl_get(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0x48) = obj.vote_against_sleep_enable;
    _printk(0x8003a3a,"");
    return 0;
}


// ===== sym.msm_vote_against_sleep_ctl_put @ 0x0800c7a8 (size 252) =====

int sym.msm_vote_against_sleep_ctl_put(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    obj.vote_against_sleep_enable = *(arg1 + 0x48) != 0;
    _printk(0x8004070,"",obj.vote_against_sleep_enable,_segment.ehdr);
    if (obj.vote_against_sleep_enable == 0x0) {
        if (_segment.ehdr == 1) {
            iVar1 = audio_prm_set_vote_against_sleep(0);
        }
        else {
            iVar1 = 0;
        }
        if (_segment.ehdr != 0) {
            _segment.ehdr = _segment.ehdr + -1;
        }
    }
    else if (_segment.ehdr == 0) {
        _segment.ehdr = _segment.ehdr + 1;
        iVar1 = audio_prm_set_vote_against_sleep(1);
        if (iVar1 < 0) {
            _segment.ehdr = _segment.ehdr + -1;
            _printk(0x8002d95,"",iVar1);
        }
    }
    else {
        iVar1 = 0;
        _segment.ehdr = _segment.ehdr + 1;
    }
    _printk(0x8002fe1,"",iVar1);
    return iVar1;
}


// ===== sym.__cfi_check_fail @ 0x0800c8a4 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800c8e8

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
    //switch table (4 cases) at 0x8002450
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800c8fc);
    (*pcVar1)();
}


// ===== sym.msm_common_get_pdata @ 0x0800c8fc (size 36) =====

ulong sym.msm_common_get_pdata(int64_t arg1)

{
    if (*(arg1 + 0x310) != 0) {
        return *(*(arg1 + 0x310) + 8);
    }
    return 0;
}


// ===== sym.msm_common_set_pdata @ 0x0800c920 (size 24) =====

void sym.msm_common_set_pdata(int64_t arg1,int64_t arg2)

{
    if (*(arg1 + 0x310) != 0) {
        *(*(arg1 + 0x310) + 8) = arg2;
    }
    return;
}


// ===== sym.msm_asoc_machine_probe @ 0x0800c938 (size 2200) =====

int sym.msm_asoc_machine_probe(int64_t arg1)

{
    int *piVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    int64_t iVar9;
    ulong uVar10;
    char *pcVar11;
    ulong uVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar13;
    code *arg1_00;
    ulong unaff_x30;
    ulong uStack_70;
    ulong uStack_68;
    int iStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iVar9 = arg1 + 0x10;
    iStack_58 = *(iVar5 + 0x5e0);
    uStack_70 = 0;
    uStack_68 = 0;
    if (*(arg1 + 0x300) == 0) {
        _dev_err(iVar9,"%s: No platform supplied from device tree\n","msm_asoc_machine_probe");
        iVar2 = -0x16;
        goto code_r0x0800c994;
    }
    iVar5 = devm_kmalloc(iVar9,0x90,0xdc0);
    if (iVar5 == 0) {
        iVar2 = -0xc;
        goto code_r0x0800c994;
    }
    of_property_read_variable_u32_array(*(arg1 + 0x300),"",iVar5 + 0x60,1,0);
    piVar1 = iVar5 + 0x5c;
    iVar2 = of_property_read_variable_u32_array(*(arg1 + 0x300),"",piVar1,1,0);
    if (iVar2 < 0) {
        _dev_info(arg1 + 0x10,"","msm_asoc_machine_probe",*(*(arg1 + 0x300) + 0x10),iVar2);
        iVar2 = 0;
        *piVar1 = 0;
    }
    else {
        iVar2 = *piVar1;
    }
    iStack_5c = 0;
    iVar6 = of_match_node(obj.kalama_asoc_machine_of_match,*(arg1 + 0x300));
    if (iVar6 == 0) {
        iVar2 = ___ratelimit(obj.populate_snd_card_dailinks._rs,"");
        if (iVar2 != 0) {
            _dev_err(iVar9,"","");
        }
code_r0x0800cb58:
        pcVar11 = "";
code_r0x0800ce00:
        _dev_err(iVar9,pcVar11,"msm_asoc_machine_probe");
        iVar2 = -0x16;
    }
    else {
        uVar10 = *(iVar6 + 0xc0);
        iVar3 = strcmp(uVar10,"");
        if (iVar3 == 0) {
            memcpy(obj.msm_kalama_dai_links,obj.msm_rx_tx_cdc_dma_be_dai_links,0x5e8);
            if (iVar2 - 1U < 2) {
                memcpy(obj.msm_dmic_event._rs.92,obj.msm_wsa_cdc_dma_be_dai_links,0x510);
                iVar3 = 0xd;
            }
            else if (iVar2 == 4) {
                memcpy(obj.msm_dmic_event._rs.92,obj.msm_wsa2_cdc_dma_be_dai_links,0x438);
                memcpy(0x8000f98,obj.msm_wsa_wsa2_cdc_dma_be_dai_links,0x438);
                iVar3 = 0x11;
            }
            else {
                _dev_printk(0x80045f2,iVar9,"%s: Unexpected number of WSAs, wsa_max_devs: %d\n","",iVar2);
                iVar3 = 7;
            }
            memcpy(iVar3 * 0xd8 + 0x8000578,obj.msm_va_cdc_dma_be_dai_links,0x288);
            memcpy(iVar3 * 0xd8 + 0x8000800,obj.msm_common_be_dai_links,0x438);
            iVar2 = iVar3 + 8;
            iVar4 = of_property_read_variable_u32_array(*(arg1 + 0x300),"",&iStack_5c,1,0);
            if ((-1 < iVar4) && (iStack_5c != 0)) {
                memcpy(iVar2 * 0xd8 + 0x8000578,obj.msm_mi2s_dai_links,0xbd0);
                iVar2 = iVar3 + 0x16;
            }
            iVar3 = of_property_read_variable_u32_array(*(arg1 + 0x300),"",&iStack_5c,1,0);
            if ((-1 < iVar3) && (iStack_5c != 0)) {
                memcpy(iVar2 * 0xd8 + 0x8000578,obj.msm_tdm_dai_links,0xbd0);
                iVar2 = iVar2 + 0xe;
            }
            iVar3 = of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,ext-disp-audio-rx",&iStack_5c,1,0);
            if ((-1 < iVar3) && (iStack_5c != 0)) {
                _dev_printk(0x80045f2,iVar9,"","");
                memcpy(iVar2 * 0xd8 + 0x8000578,obj.ext_disp_be_dai_link,0xd8);
                iVar2 = iVar2 + 1;
            }
            iVar3 = of_property_read_variable_u32_array(*(arg1 + 0x300),"",&iStack_5c,1,0);
            if ((-1 < iVar3) && (iStack_5c != 0)) {
                _dev_printk(0x80045f2,iVar9,"","");
                memcpy(iVar2 * 0xd8 + 0x8000578,obj.msm_wcn_be_dai_links,0x1b0);
                iVar2 = iVar2 + 2;
            }
            iVar7 = of_find_property(*(arg1 + 0x300),"",0);
            if (iVar7 == 0) {
                memcpy(iVar2 * 0xd8 + 0x8000578,obj.msm_swr_haptics_be_dai_links,0xd8);
                iVar2 = iVar2 + 1;
            }
            else {
                _dev_printk(0x80045f2,iVar9,"%s(): swr haptics support not present\n","");
            }
            pcVar13 = obj.msm_kalama_dai_links;
            arg1_00 = obj.snd_soc_card_kalama_msm;
        }
        else {
            iVar2 = strcmp(uVar10,"");
            if (iVar2 != 0) goto code_r0x0800cb58;
            pcVar13 = obj.msm_stub_dai_links;
            memcpy(obj.msm_stub_dai_links,obj.msm_stub_be_dai_links,0x1b0);
            iVar2 = 2;
            arg1_00 = obj.snd_soc_card_stub_msm;
        }
        *(arg1_00 + 0x150) = pcVar13;
        *(arg1_00 + 0x158) = iVar2;
        iVar2 = strcmp(*(iVar6 + 0xc0),"");
        if (iVar2 == 0) {
            *(arg1_00 + 0xf8) = sym.msm_snd_card_late_probe.52853753f8636579aaf6d6a2c764b9d3.cfi_jt;
        }
        iVar6 = of_match_node(obj.kalama_asoc_machine_of_match,*(arg1 + 0x300));
        if (iVar6 == 0) {
            pcVar11 = "";
            goto code_r0x0800ce00;
        }
        *(arg1_00 + 0x40) = iVar9;
        *(arg1 + 0xa8) = arg1_00;
        *(arg1_00 + 0x310) = iVar5;
        iVar2 = snd_soc_of_parse_card_name(arg1_00,"");
        if (iVar2 == 0) {
            iVar2 = strcmp(*(iVar6 + 0xc0),"");
            if ((iVar2 == 0) && (iVar2 = snd_soc_of_parse_audio_routing(arg1_00,""), iVar2 != 0)) {
                pcVar11 = "";
                goto code_r0x0800d180;
            }
            iVar2 = sym.msm_populate_dai_link_component_of_node(arg1_00);
            if (iVar2 == 0) {
                sym.msm_parse_upd_configuration(arg1,iVar5);
                iVar2 = devm_snd_soc_register_card(iVar9,arg1_00);
                if (iVar2 == 0) {
                    _dev_info(iVar9,"%s: Sound card %s registered\n","msm_asoc_machine_probe",*arg1_00);
                    _dev_info(iVar9,"","msm_asoc_machine_probe");
                    if (_segment.ehdr != 0) {
                        _segment.ehdr = sym.msm_usbc_swap_gnd_mic.52853753f8636579aaf6d6a2c764b9d3.cfi_jt;
                    }
                    iVar6 = of_parse_phandle(*(arg1 + 0x300),"",0);
                    *(iVar5 + 0x48) = iVar6;
                    if (iVar6 == 0) {
                        _dev_printk(0x80045f2,iVar9,"","",*(*(arg1 + 0x300) + 0x10));
                    }
                    uVar10 = of_parse_phandle(*(arg1 + 0x300),"",0);
                    uVar12 = *(arg1 + 0x300);
                    *(iVar5 + 0x18) = uVar10;
                    uVar10 = of_parse_phandle(uVar12,"",0);
                    uVar12 = *(arg1 + 0x300);
                    *(iVar5 + 0x20) = uVar10;
                    uVar10 = of_parse_phandle(uVar12,"qcom,cdc-dmic45-gpios",0);
                    uVar12 = *(arg1 + 0x300);
                    *(iVar5 + 0x28) = uVar10;
                    uVar10 = of_parse_phandle(uVar12,"",0);
                    *(iVar5 + 0x30) = uVar10;
                    if (*(iVar5 + 0x18) == 0) {
                        iVar6 = *(iVar5 + 0x20);
                        if (iVar6 == 0) goto code_r0x0800d0a8;
code_r0x0800d1a8:
                        msm_cdc_pinctrl_set_wakeup_capable(iVar6,0);
                        iVar6 = *(iVar5 + 0x28);
                        if (iVar6 != 0) goto code_r0x0800d1b8;
code_r0x0800d0b0:
                        iVar6 = *(iVar5 + 0x30);
                    }
                    else {
                        msm_cdc_pinctrl_set_wakeup_capable(*(iVar5 + 0x18),0);
                        iVar6 = *(iVar5 + 0x20);
                        if (iVar6 != 0) goto code_r0x0800d1a8;
code_r0x0800d0a8:
                        iVar6 = *(iVar5 + 0x28);
                        if (iVar6 == 0) goto code_r0x0800d0b0;
code_r0x0800d1b8:
                        msm_cdc_pinctrl_set_wakeup_capable(iVar6,0);
                        iVar6 = *(iVar5 + 0x30);
                    }
                    if (iVar6 != 0) {
                        msm_cdc_pinctrl_set_wakeup_capable(iVar6,0);
                    }
                    sym.msm_common_snd_init(arg1,arg1_00);
                    uVar8 = devm_clk_get(iVar9,"");
                    if (0xfffffffffffff000 < uVar8) {
                        _dev_printk(0x80045f2,iVar9,"","msm_asoc_machine_probe","");
                        uVar8 = 0;
                    }
                    *(iVar5 + 0x50) = uVar8;
                    *(iVar5 + 0x58) = 0;
                    iVar2 = sym.msm_audio_ssr_register(iVar9);
                    if (iVar2 != 0) {
                        _printk(0x800319c,"msm_asoc_machine_probe",iVar2);
                    }
                    _dev_printk(0x80045f2,iVar9,"","msm_asoc_machine_probe");
                    iVar2 = 0;
                    *(_segment.ehdr + 0x60) = 1;
                    goto code_r0x0800c994;
                }
                if (iVar2 != -0x205) {
                    pcVar11 = "";
                    goto code_r0x0800d180;
                }
                iVar2 = -0x16;
                if (obj.codec_reg_done == 0x0) {
                    iVar2 = -0x205;
                }
            }
            else {
                _printk("","msm_asoc_machine_probe",0x7f1);
                iVar2 = -0x205;
            }
        }
        else {
            pcVar11 = "";
code_r0x0800d180:
            _dev_err(iVar9,pcVar11,"msm_asoc_machine_probe",iVar2);
        }
    }
    devm_kfree(iVar9,iVar5);
    _printk("<%s><%d>: X, failed.\n","msm_asoc_machine_probe",0x844);
    if (iVar2 != -0x205) {
        _dev_printk(0x80045f2,iVar9,"<%s><%d>: X, failed.non-DEFER skip sound card registration.\n",
                    "msm_asoc_machine_probe",0x847);
        ktime_get_real_ts64(&uStack_70);
        uVar10 = cdev_tevent_alloc(0x36007a69);
        cdev_tevent_add_int(uVar10,"",uStack_70);
        cdev_tevent_add_str(uVar10,"","sound_card_not_registered");
        cdev_tevent_write(uVar10);
        cdev_tevent_destroy(uVar10);
    }
code_r0x0800c994:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_58) {
        return iVar2;
    }
    iVar9 = __stack_chk_fail();
    *extraout_x18 = sym.msm_asoc_machine_remove;
    iVar5 = *(iVar9 + 0xa8);
    if ((iVar5 == 0) || (*(iVar5 + 0x310) == 0)) {
        uVar10 = 0;
    }
    else {
        uVar10 = *(*(iVar5 + 0x310) + 8);
    }
    sym.msm_common_snd_deinit(uVar10);
    snd_event_master_deregister(iVar9 + 0x10);
    snd_soc_unregister_card(iVar5);
    return 0;
}


// ===== sym.msm_asoc_machine_remove @ 0x0800d1d0 (size 96) =====

ulong sym.msm_asoc_machine_remove(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0xa8);
    if ((iVar2 == 0) || (*(iVar2 + 0x310) == 0)) {
        uVar1 = 0;
    }
    else {
        uVar1 = *(*(iVar2 + 0x310) + 8);
    }
    sym.msm_common_snd_deinit(uVar1);
    snd_event_master_deregister(arg1 + 0x10);
    snd_soc_unregister_card(iVar2);
    return 0;
}


// ===== sym.msm_populate_dai_link_component_of_node @ 0x0800d230 (size 888) =====

ulong sym.msm_populate_dai_link_component_of_node(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint32_t uVar4;
    int64_t *piVar5;
    uint32_t uVar6;
    ulong *puVar7;
    uint32_t uVar8;
    ulong uVar9;
    ulong *in_x18;
    int64_t iVar10;
    int64_t iVar11;
    int64_t iVar12;
    uint32_t *puVar13;
    int64_t iVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar10 = *(arg1 + 0x40);
    if (iVar10 == 0) {
        iVar1 = ___ratelimit(obj.msm_populate_dai_link_component_of_node._rs,"");
        if (iVar1 == 0) {
code_r0x0800d3a4:
            uVar9 = 0xffffffed;
        }
        else {
            _dev_err(0,"","");
            uVar9 = 0xffffffed;
        }
    }
    else {
        if (0 < *(arg1 + 0x158)) {
            iVar12 = 0;
            iVar14 = *(arg1 + 0x150);
            do {
                piVar5 = iVar14 + iVar12 * 0xd8 + 0x58;
                if (*piVar5 == 0) {
                    *piVar5 = sym.msm_common_dai_link_init.cfi_jt;
                }
                puVar13 = iVar14 + iVar12 * 0xd8 + 0x28;
                if (*puVar13 != 0) {
                    uVar4 = 0;
                    piVar5 = iVar14 + iVar12 * 0xd8 + 0x20;
                    do {
                        iVar11 = uVar4;
                        if (((*(*piVar5 + uVar4 * 0x18 + 8) == 0) && (*(*piVar5 + iVar11 * 0x18) != 0)) &&
                           (iVar1 = of_property_match_string(*(iVar10 + 0x2f0),""), -1 < iVar1)) {
                            iVar2 = of_parse_phandle(*(iVar10 + 0x2f0),"",iVar1);
                            if (iVar2 == 0) {
                                iVar1 = ___ratelimit(obj.msm_populate_dai_link_component_of_node._rs.232,"");
                                if (iVar1 != 0) {
                                    _dev_err(iVar10,"","",*(*piVar5 + iVar11 * 0x18));
                                    return 0xffffffed;
                                }
                                goto code_r0x0800d3a4;
                            }
                            *(*piVar5 + iVar11 * 0x18 + 8) = iVar2;
                            *(*piVar5 + iVar11 * 0x18) = 0;
                        }
                        uVar4 = uVar4 + 1;
                    } while (uVar4 < *puVar13);
                }
                iVar12 = iVar12 + 1;
            } while (iVar12 < *(arg1 + 0x158));
            if (0 < *(arg1 + 0x158)) {
                iVar12 = 0;
                do {
                    puVar13 = iVar14 + iVar12 * 0xd8 + 0x28;
                    if (1 < *puVar13) {
                        uVar4 = 0;
                        uVar6 = 0;
                        piVar5 = iVar14 + iVar12 * 0xd8 + 0x20;
                        do {
                            iVar11 = *(*piVar5 + uVar6 * 0x18 + 8);
                            if (iVar11 != 0) {
                                uVar3 = of_device_is_available(iVar11);
                                if ((uVar3 & 1) == 0) {
                                    iVar1 = ___ratelimit(obj.msm_populate_dai_link_component_of_node._rs.234,"");
                                    if (iVar1 != 0) {
                                        _dev_err(iVar10,"","",*(iVar11 + 0x10));
                                    }
                                    *(*piVar5 + uVar6 * 0x18 + 8) = 0;
                                }
                                else {
                                    uVar4 = uVar4 + 1;
                                }
                            }
                            uVar6 = uVar6 + 1;
                        } while (uVar6 < *puVar13);
                        if ((0 < uVar4) && (uVar4 < *puVar13)) {
                            iVar11 = devm_kmalloc(iVar10,uVar4 * 0x18,0xdc0);
                            if (iVar11 == 0) {
                                iVar1 = ___ratelimit(obj.msm_populate_dai_link_component_of_node._rs.236,"");
                                if (iVar1 != 0) {
                                    _dev_err(iVar10,"%s: %s dailink codec component alloc failed\n","",
                                             *(iVar14 + iVar12 * 0xd8));
                                }
                                return 0xfffffff4;
                            }
                            uVar6 = *puVar13;
                            if (uVar6 != 0) {
                                iVar1 = 0;
                                uVar8 = 0;
                                do {
                                    iVar2 = *(*piVar5 + uVar8 * 0x18 + 8);
                                    if (iVar2 != 0) {
                                        puVar7 = iVar11 + iVar1 * 0x18;
                                        iVar1 = iVar1 + 1;
                                        puVar7[1] = iVar2;
                                        uVar9 = *(*piVar5 + uVar8 * 0x18 + 0x10);
                                        *puVar7 = 0;
                                        puVar7[2] = uVar9;
                                        uVar6 = *puVar13;
                                    }
                                    uVar8 = uVar8 + 1;
                                } while (uVar8 < uVar6);
                            }
                            *piVar5 = iVar11;
                            *puVar13 = uVar4;
                        }
                    }
                    iVar12 = iVar12 + 1;
                } while (iVar12 < *(arg1 + 0x158));
            }
        }
        uVar9 = 0;
    }
    return uVar9;
}


// ===== sym.msm_parse_upd_configuration @ 0x0800d5a8 (size 288) =====

int64_t sym.msm_parse_upd_configuration(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    char *pcVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_30 = 0;
    if ((arg1 != 0) && (arg2 != 0)) {
        iVar1 = of_property_read_string(*(arg1 + 0x300),"",arg2 + 0x88);
        if (iVar1 == 0) {
            iVar1 = of_property_read_variable_u32_array(*(arg1 + 0x300),"",&uStack_30,2,0);
            if (iVar1 < 0) {
                uVar2 = 0x8002c45;
                pcVar5 = "";
            }
            else {
                *(arg2 + 0x74) = uStack_30;
                *(arg2 + 0x78) = uStack_30._4_4_;
                arg1 = of_property_read_variable_u32_array(*(arg1 + 0x300),"",arg2 + 0x84,1,0);
                if (-1 < arg1) goto code_r0x0800d640;
                uVar2 = 0x8002c45;
                pcVar5 = "";
            }
        }
        else {
            uVar2 = 0x8002b6e;
            pcVar5 = "";
        }
        arg1 = _printk(uVar2,"msm_parse_upd_configuration",pcVar5);
    }
code_r0x0800d640:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return arg1;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.msm_usbc_swap_gnd_mic;
    iVar3 = *(*(iVar3 + 0x20) + 0x310);
    if (*(iVar3 + 0x48) == 0) {
        uVar4 = 0;
    }
    else {
        *0x8000718 = 1;
        iVar1 = fsa4480_switch_event(*(iVar3 + 0x48),0);
        uVar4 = iVar1 != 0;
    }
    return uVar4;
}


// ===== sym.msm_usbc_swap_gnd_mic @ 0x0800d6c8 (size 88) =====

bool sym.msm_usbc_swap_gnd_mic(int64_t arg1)

{
    bool bVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(arg1 + 0x20) + 0x310);
    if (*(iVar3 + 0x48) == 0) {
        bVar1 = false;
    }
    else {
        *0x8000718 = 1;
        iVar2 = fsa4480_switch_event(*(iVar3 + 0x48),0);
        bVar1 = iVar2 != 0;
    }
    return bVar1;
}


// ===== sym.msm_audio_ssr_register @ 0x0800d720 (size 248) =====

int sym.msm_audio_ssr_register(int64_t arg1)

{
    int iVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong uVar6;
    ulong uVar7;
    int64_t iVar8;
    int64_t *piVar9;
    int64_t iVar10;
    ulong unaff_x30;
    uchar auStack_160 [216];
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_48 = *(iVar3 + 0x5e0);
    uVar6 = *(arg1 + 0x2f0);
    uStack_50 = 0;
    iVar3 = of_parse_phandle(uVar6,"",0);
    uVar7 = 0;
    if (iVar3 != 0) {
        iVar1 = 1;
        do {
            snd_event_mstr_add_client
                      (&uStack_50,sym.msm_audio_ssr_compare.52853753f8636579aaf6d6a2c764b9d3.cfi_jt,iVar3);
            iVar3 = of_parse_phandle(uVar6,"",iVar1);
            iVar1 = iVar1 + 1;
            uVar7 = uStack_50;
        } while (iVar3 != 0);
    }
    iVar1 = snd_event_master_register(arg1,reloc.kalama_ssr_enable.52853753f8636579aaf6d6a2c764b9d3.cfi_jt,uVar7,0);
    if (iVar1 == 0) {
        snd_event_notify(arg1,1);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_48) {
        return iVar1;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.msm_snd_card_late_probe;
    pcStack_78 = sym.msm_snd_card_late_probe;
    iVar3 = sp_el0;
    iStack_88 = *(iVar3 + 0x5e0);
    puStack_80 = &stack0xffffffffffffffc0;
    if (*(iVar4 + 0x310) == 0) {
        iVar1 = -0x16;
    }
    else if (*(*(iVar4 + 0x310) + 0x60) == 0) {
        iVar3 = snd_soc_get_pcm_runtime(iVar4,*(iVar4 + 0x150));
        if (iVar3 == 0) {
            uVar7 = *(iVar4 + 0x40);
            memcpy(auStack_160,*(iVar4 + 0x150),0xd8);
            _dev_err(uVar7,"","msm_snd_card_late_probe",auStack_160);
            iVar1 = -0x16;
        }
        else {
            iVar3 = snd_soc_rtdcom_lookup(iVar3,"");
            if (iVar3 == 0) {
                _printk(0x8004169,"msm_snd_card_late_probe");
                iVar1 = -0x16;
            }
            else {
                iVar4 = kmem_cache_alloc_trace(_snd_soc_info_enum_double,0xdc0,0x9a);
                if (iVar4 == 0) {
                    iVar1 = -0xc;
                }
                else {
                    *(iVar4 + 0x30) = 0x6a4;
                    *(iVar4 + 0x41) = 8;
                    *(iVar4 + 0x60) = 0x1f401f40104004b;
                    *(iVar4 + 0x68) = 0x1f401f401f401f4;
                    *0x80006b0 = iVar4;
                    iVar1 = wcd938x_mbhc_hs_detect(iVar3);
                    if (iVar1 != 0) {
                        _dev_err(*(iVar3 + 0x18),"","msm_snd_card_late_probe",iVar1);
                        kfree(iVar4);
                    }
                }
            }
        }
    }
    else {
        iVar1 = 0;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_88) {
        return iVar1;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18_00 = sym.msm_rx_tx_codec_init;
    piVar9 = *(*(iVar3 + 8) + 0x310);
    iVar4 = snd_soc_rtdcom_lookup(iVar3,"lpass-cdc");
    if (iVar4 == 0) {
        _printk(0x800350d,"");
        return 0;
    }
    iVar1 = snd_soc_add_component_controls(iVar4,obj.msm_common_snd_controls,1);
    if (iVar1 < 0) {
        _printk(0x800433f,"",iVar1);
        return iVar1;
    }
    iVar8 = iVar4 + 0xd0;
    snd_soc_dapm_new_controls(iVar8,obj.msm_int_dapm_widgets,0xd);
    snd_soc_dapm_ignore_suspend(iVar8,"");
    snd_soc_dapm_ignore_suspend(iVar8,"");
    snd_soc_dapm_ignore_suspend(iVar8,"Digital Mic2");
    snd_soc_dapm_ignore_suspend(iVar8,"");
    snd_soc_dapm_ignore_suspend(iVar8,"");
    snd_soc_dapm_ignore_suspend(iVar8,"Digital Mic5");
    snd_soc_dapm_ignore_suspend(iVar8,"");
    snd_soc_dapm_ignore_suspend(iVar8,"");
    snd_soc_dapm_ignore_suspend(iVar8,"");
    snd_soc_dapm_ignore_suspend(iVar8,"");
    snd_soc_dapm_ignore_suspend(iVar8,"");
    snd_soc_dapm_ignore_suspend(iVar8,"");
    snd_soc_dapm_ignore_suspend(iVar8,"");
    lpass_cdc_set_port_map(iVar4,7,obj.sm_port_map);
    iVar8 = *piVar9;
    if (iVar8 != 0) {
code_r0x0800db38:
        lpass_cdc_info_create_codec_entry(iVar8,iVar4);
        lpass_cdc_register_wake_irq(iVar4,0);
        if (piVar9[0xc] == 0) {
            iVar8 = snd_soc_rtdcom_lookup(iVar3,"");
            if (iVar8 == 0) {
                _printk(0x8003aa1,"","");
                return -0x16;
            }
            iVar5 = iVar8 + 0xd0;
            iVar10 = *(*(iVar8 + 0x20) + 0x48);
            snd_soc_dapm_ignore_suspend(iVar5,0x80044b2);
            snd_soc_dapm_ignore_suspend(iVar5,0x8003ac7);
            snd_soc_dapm_ignore_suspend(iVar5,"");
            snd_soc_dapm_ignore_suspend(iVar5,"HPHR");
            snd_soc_dapm_ignore_suspend(iVar5,"");
            snd_soc_dapm_ignore_suspend(iVar5,"");
            snd_soc_dapm_ignore_suspend(iVar5,"");
            snd_soc_dapm_ignore_suspend(iVar5,"");
            snd_soc_dapm_sync(iVar5);
            piVar9 = *(*(iVar8 + 0x20) + 0x310);
            iVar5 = *piVar9;
            if (iVar5 == 0) {
                iVar5 = sym.msm_snd_info_create_subdir(*(iVar8 + 0x20),*(iVar10 + 0x5e8));
                if (iVar5 == 0) {
                    _dev_printk(0x80045f2,*(iVar8 + 0x18),"","");
                    return 0;
                }
                *piVar9 = iVar5;
            }
            wcd938x_info_create_codec_entry(iVar5,iVar8);
            iVar1 = wcd938x_get_codec_variant(iVar8);
            _dev_printk(0x80045f2,*(iVar8 + 0x18),"","",iVar1);
            iVar1 = lpass_cdc_rx_set_fir_capability(iVar4,iVar1 == 5);
            if (iVar1 < 0) {
                iVar2 = ___ratelimit(obj.msm_rx_tx_codec_init._rs,"");
                if (iVar2 == 0) {
                    return iVar1;
                }
                _dev_err(*(iVar8 + 0x18),"","",iVar1);
                return iVar1;
            }
        }
        obj.codec_reg_done = 0x1;
        sym.msm_common_dai_link_init(iVar3);
        return iVar1;
    }
    iVar8 = *(*(iVar3 + 8) + 0x48);
    iVar8 = snd_info_create_module_entry(*(iVar8 + 0x188),"",*(iVar8 + 0x5e8));
    if (iVar8 != 0) {
        *(iVar8 + 8) = 0x416d;
        iVar2 = snd_info_register();
        if (-1 < iVar2) {
            *piVar9 = iVar8;
            goto code_r0x0800db38;
        }
        snd_info_free_entry(iVar8);
    }
    _printk(0x8002ced,"");
    return iVar1;
}


// ===== sym.msm_snd_card_late_probe @ 0x0800d818 (size 400) =====

int sym.msm_snd_card_late_probe(int64_t arg1)

{
    int iVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar6;
    int64_t iVar7;
    int64_t *piVar8;
    int64_t iVar9;
    ulong unaff_x30;
    uchar auStack_110 [216];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    if (*(arg1 + 0x310) == 0) {
        iVar1 = -0x16;
    }
    else if (*(*(arg1 + 0x310) + 0x60) == 0) {
        iVar3 = snd_soc_get_pcm_runtime(arg1,*(arg1 + 0x150));
        if (iVar3 == 0) {
            uVar6 = *(arg1 + 0x40);
            memcpy(auStack_110,*(arg1 + 0x150),0xd8);
            _dev_err(uVar6,"","msm_snd_card_late_probe",auStack_110);
            iVar1 = -0x16;
        }
        else {
            iVar3 = snd_soc_rtdcom_lookup(iVar3,"");
            if (iVar3 == 0) {
                _printk(0x8004169,"msm_snd_card_late_probe");
                iVar1 = -0x16;
            }
            else {
                iVar4 = kmem_cache_alloc_trace(_snd_soc_info_enum_double,0xdc0,0x9a);
                if (iVar4 == 0) {
                    iVar1 = -0xc;
                }
                else {
                    *(iVar4 + 0x30) = 0x6a4;
                    *(iVar4 + 0x41) = 8;
                    *(iVar4 + 0x60) = 0x1f401f40104004b;
                    *(iVar4 + 0x68) = 0x1f401f401f401f4;
                    *0x80006b0 = iVar4;
                    iVar1 = wcd938x_mbhc_hs_detect(iVar3);
                    if (iVar1 != 0) {
                        _dev_err(*(iVar3 + 0x18),"","msm_snd_card_late_probe",iVar1);
                        kfree(iVar4);
                    }
                }
            }
        }
    }
    else {
        iVar1 = 0;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return iVar1;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.msm_rx_tx_codec_init;
    piVar8 = *(*(iVar3 + 8) + 0x310);
    iVar4 = snd_soc_rtdcom_lookup(iVar3,"lpass-cdc");
    if (iVar4 == 0) {
        _printk(0x800350d,"");
        return 0;
    }
    iVar1 = snd_soc_add_component_controls(iVar4,obj.msm_common_snd_controls,1);
    if (iVar1 < 0) {
        _printk(0x800433f,"",iVar1);
        return iVar1;
    }
    iVar7 = iVar4 + 0xd0;
    snd_soc_dapm_new_controls(iVar7,obj.msm_int_dapm_widgets,0xd);
    snd_soc_dapm_ignore_suspend(iVar7,"");
    snd_soc_dapm_ignore_suspend(iVar7,"");
    snd_soc_dapm_ignore_suspend(iVar7,"Digital Mic2");
    snd_soc_dapm_ignore_suspend(iVar7,"");
    snd_soc_dapm_ignore_suspend(iVar7,"");
    snd_soc_dapm_ignore_suspend(iVar7,"Digital Mic5");
    snd_soc_dapm_ignore_suspend(iVar7,"");
    snd_soc_dapm_ignore_suspend(iVar7,"");
    snd_soc_dapm_ignore_suspend(iVar7,"");
    snd_soc_dapm_ignore_suspend(iVar7,"");
    snd_soc_dapm_ignore_suspend(iVar7,"");
    snd_soc_dapm_ignore_suspend(iVar7,"");
    snd_soc_dapm_ignore_suspend(iVar7,"");
    lpass_cdc_set_port_map(iVar4,7,obj.sm_port_map);
    iVar7 = *piVar8;
    if (iVar7 != 0) {
code_r0x0800db38:
        lpass_cdc_info_create_codec_entry(iVar7,iVar4);
        lpass_cdc_register_wake_irq(iVar4,0);
        if (piVar8[0xc] == 0) {
            iVar7 = snd_soc_rtdcom_lookup(iVar3,"");
            if (iVar7 == 0) {
                _printk(0x8003aa1,"","");
                return -0x16;
            }
            iVar5 = iVar7 + 0xd0;
            iVar9 = *(*(iVar7 + 0x20) + 0x48);
            snd_soc_dapm_ignore_suspend(iVar5,0x80044b2);
            snd_soc_dapm_ignore_suspend(iVar5,0x8003ac7);
            snd_soc_dapm_ignore_suspend(iVar5,"");
            snd_soc_dapm_ignore_suspend(iVar5,"HPHR");
            snd_soc_dapm_ignore_suspend(iVar5,"");
            snd_soc_dapm_ignore_suspend(iVar5,"");
            snd_soc_dapm_ignore_suspend(iVar5,"");
            snd_soc_dapm_ignore_suspend(iVar5,"");
            snd_soc_dapm_sync(iVar5);
            piVar8 = *(*(iVar7 + 0x20) + 0x310);
            iVar5 = *piVar8;
            if (iVar5 == 0) {
                iVar5 = sym.msm_snd_info_create_subdir(*(iVar7 + 0x20),*(iVar9 + 0x5e8));
                if (iVar5 == 0) {
                    _dev_printk(0x80045f2,*(iVar7 + 0x18),"","");
                    return 0;
                }
                *piVar8 = iVar5;
            }
            wcd938x_info_create_codec_entry(iVar5,iVar7);
            iVar1 = wcd938x_get_codec_variant(iVar7);
            _dev_printk(0x80045f2,*(iVar7 + 0x18),"","",iVar1);
            iVar1 = lpass_cdc_rx_set_fir_capability(iVar4,iVar1 == 5);
            if (iVar1 < 0) {
                iVar2 = ___ratelimit(obj.msm_rx_tx_codec_init._rs,"");
                if (iVar2 == 0) {
                    return iVar1;
                }
                _dev_err(*(iVar7 + 0x18),"","",iVar1);
                return iVar1;
            }
        }
        obj.codec_reg_done = 0x1;
        sym.msm_common_dai_link_init(iVar3);
        return iVar1;
    }
    iVar7 = *(*(iVar3 + 8) + 0x48);
    iVar7 = snd_info_create_module_entry(*(iVar7 + 0x188),"",*(iVar7 + 0x5e8));
    if (iVar7 != 0) {
        *(iVar7 + 8) = 0x416d;
        iVar2 = snd_info_register();
        if (-1 < iVar2) {
            *piVar8 = iVar7;
            goto code_r0x0800db38;
        }
        snd_info_free_entry(iVar7);
    }
    _printk(0x8002ced,"");
    return iVar1;
}


// ===== sym.msm_rx_tx_codec_init @ 0x0800d9a8 (size 992) =====

int sym.msm_rx_tx_codec_init(int64_t arg1)

{
    int iVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t iVar5;
    int64_t *piVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar6 = *(*(arg1 + 8) + 0x310);
    iVar3 = snd_soc_rtdcom_lookup(arg1,"lpass-cdc");
    if (iVar3 == 0) {
        _printk(0x800350d,"");
        return 0;
    }
    iVar1 = snd_soc_add_component_controls(iVar3,obj.msm_common_snd_controls,1);
    if (iVar1 < 0) {
        _printk(0x800433f,"",iVar1);
        return iVar1;
    }
    iVar5 = iVar3 + 0xd0;
    snd_soc_dapm_new_controls(iVar5,obj.msm_int_dapm_widgets,0xd);
    snd_soc_dapm_ignore_suspend(iVar5,"");
    snd_soc_dapm_ignore_suspend(iVar5,"");
    snd_soc_dapm_ignore_suspend(iVar5,"Digital Mic2");
    snd_soc_dapm_ignore_suspend(iVar5,"");
    snd_soc_dapm_ignore_suspend(iVar5,"");
    snd_soc_dapm_ignore_suspend(iVar5,"Digital Mic5");
    snd_soc_dapm_ignore_suspend(iVar5,"");
    snd_soc_dapm_ignore_suspend(iVar5,"");
    snd_soc_dapm_ignore_suspend(iVar5,"");
    snd_soc_dapm_ignore_suspend(iVar5,"");
    snd_soc_dapm_ignore_suspend(iVar5,"");
    snd_soc_dapm_ignore_suspend(iVar5,"");
    snd_soc_dapm_ignore_suspend(iVar5,"");
    lpass_cdc_set_port_map(iVar3,7,obj.sm_port_map);
    iVar5 = *piVar6;
    if (iVar5 != 0) {
code_r0x0800db38:
        lpass_cdc_info_create_codec_entry(iVar5,iVar3);
        lpass_cdc_register_wake_irq(iVar3,0);
        if (piVar6[0xc] == 0) {
            iVar5 = snd_soc_rtdcom_lookup(arg1,"");
            if (iVar5 == 0) {
                _printk(0x8003aa1,"","");
                return -0x16;
            }
            iVar4 = iVar5 + 0xd0;
            iVar7 = *(*(iVar5 + 0x20) + 0x48);
            snd_soc_dapm_ignore_suspend(iVar4,0x80044b2);
            snd_soc_dapm_ignore_suspend(iVar4,0x8003ac7);
            snd_soc_dapm_ignore_suspend(iVar4,"");
            snd_soc_dapm_ignore_suspend(iVar4,"HPHR");
            snd_soc_dapm_ignore_suspend(iVar4,"");
            snd_soc_dapm_ignore_suspend(iVar4,"");
            snd_soc_dapm_ignore_suspend(iVar4,"");
            snd_soc_dapm_ignore_suspend(iVar4,"");
            snd_soc_dapm_sync(iVar4);
            piVar6 = *(*(iVar5 + 0x20) + 0x310);
            iVar4 = *piVar6;
            if (iVar4 == 0) {
                iVar4 = sym.msm_snd_info_create_subdir(*(iVar5 + 0x20),*(iVar7 + 0x5e8));
                if (iVar4 == 0) {
                    _dev_printk(0x80045f2,*(iVar5 + 0x18),"","");
                    return 0;
                }
                *piVar6 = iVar4;
            }
            wcd938x_info_create_codec_entry(iVar4,iVar5);
            iVar1 = wcd938x_get_codec_variant(iVar5);
            _dev_printk(0x80045f2,*(iVar5 + 0x18),"","",iVar1);
            iVar1 = lpass_cdc_rx_set_fir_capability(iVar3,iVar1 == 5);
            if (iVar1 < 0) {
                iVar2 = ___ratelimit(obj.msm_rx_tx_codec_init._rs,"");
                if (iVar2 == 0) {
                    return iVar1;
                }
                _dev_err(*(iVar5 + 0x18),"","",iVar1);
                return iVar1;
            }
        }
        obj.codec_reg_done = 0x1;
        sym.msm_common_dai_link_init(arg1);
        return iVar1;
    }
    iVar5 = *(*(arg1 + 8) + 0x48);
    iVar5 = snd_info_create_module_entry(*(iVar5 + 0x188),"",*(iVar5 + 0x5e8));
    if (iVar5 != 0) {
        *(iVar5 + 8) = 0x416d;
        iVar2 = snd_info_register();
        if (-1 < iVar2) {
            *piVar6 = iVar5;
            goto code_r0x0800db38;
        }
        snd_info_free_entry(iVar5);
    }
    _printk(0x8002ced,"");
    return iVar1;
}


// ===== sym.msm_snd_info_create_subdir @ 0x0800dd88 (size 100) =====

int64_t sym.msm_snd_info_create_subdir(ulong noname_0,int64_t arg1)

{
    int iVar1;
    ulong in_x0;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = snd_info_create_module_entry(in_x0,"",arg1);
    if (iVar2 != 0) {
        *(iVar2 + 8) = 0x416d;
        iVar1 = snd_info_register(iVar2);
        if (iVar1 < 0) {
            snd_info_free_entry(iVar2);
            iVar2 = 0;
        }
    }
    return iVar2;
}


// ===== sym.usbhs_direction_get @ 0x0800ddec (size 28) =====

ulong sym.usbhs_direction_get(int64_t arg1,int64_t arg2)

{
    *(arg2 + 0x48) = *0x8000718;
    return 0;
}


// ===== sym.msm_dmic_event @ 0x0800de08 (size 596) =====

uint64_t sym.msm_dmic_event(int arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    int64_t arg1_00;
    ulong *puVar5;
    char *pcVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar7;
    int64_t iVar8;
    ulong *puVar9;
    int *unaff_x21;
    ulong *puVar10;
    ulong unaff_x30;
    ulong uStack_108;
    ulong uStack_100;
    int64_t iStack_f8;
    uchar **ppuStack_f0;
    code *pcStack_e8;
    ulong *puStack_e0;
    int64_t iStack_d8;
    uint uStack_c8;
    ushort uStack_c4;
    uint uStack_c0;
    ushort uStack_bc;
    uint uStack_b8;
    ushort uStack_b4;
    uint uStack_b0;
    ushort uStack_ac;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    int *piStack_60;
    int64_t iStack_50;
    uint64_t uStack_48;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iVar8 = *(arg1 + 0x28);
    uStack_3c = 0;
    iVar3 = strpbrk(*(arg1 + 8),"");
    if (iVar3 == 0) {
        iVar1 = ___ratelimit(obj.msm_dmic_event._rs,"msm_dmic_event");
        if (iVar1 != 0) {
            uVar4 = *(iVar8 + -0xb8);
            pcVar6 = "%s: widget not found\n";
code_r0x0800dee0:
            _dev_err(uVar4,pcVar6,"msm_dmic_event");
        }
code_r0x0800deec:
        uVar7 = 0xffffffea;
    }
    else {
        iVar1 = kstrtouint(iVar3,10,&uStack_3c);
        if (iVar1 < 0) {
            iVar1 = ___ratelimit(obj.msm_dmic_event._rs.90,"msm_dmic_event");
            if (iVar1 != 0) {
                uVar4 = *(iVar8 + -0xb8);
                pcVar6 = "%s: Invalid DMIC line on the codec\n";
                goto code_r0x0800dee0;
            }
            goto code_r0x0800deec;
        }
        if (7 < uStack_3c) {
            iVar1 = ___ratelimit(obj.msm_dmic_event._rs.92,"msm_dmic_event");
            if (iVar1 != 0) {
                uVar4 = *(iVar8 + -0xb8);
                pcVar6 = "%s: Invalid DMIC Selection\n";
                goto code_r0x0800dee0;
            }
            goto code_r0x0800deec;
        }
        iVar3 = uStack_3c * 8;
        puVar9 = iVar8 + -0xb8;
        unaff_x21 = *(iVar3 + 0x80094c8);
        iVar8 = *(*(*(iVar8 + -0xb0) + 0x310) + *(iVar3 + 0x8009488));
        _dev_printk(0x80045f2,*puVar9,"","msm_dmic_event",arg2 & 0xffffffffU,uStack_3c,*unaff_x21);
        if (arg2 == 8) {
            iVar1 = *unaff_x21;
            *unaff_x21 = iVar1 + -1;
            if ((iVar1 + -1 == 0) && (uVar2 = msm_cdc_pinctrl_select_sleep_state(iVar8), uVar2 < 0)) {
                uVar7 = uVar2;
                iVar1 = ___ratelimit(obj.msm_dmic_event._rs.98,"msm_dmic_event");
                if (iVar1 != 0) {
                    uVar4 = 0x8002e4a;
code_r0x0800e040:
                    _printk(uVar4,"msm_dmic_event","");
                }
            }
            else {
code_r0x0800dfe0:
                uVar7 = 0;
            }
        }
        else {
            if (arg2 != 1) {
                iVar1 = ___ratelimit(obj.msm_dmic_event._rs.100,"msm_dmic_event");
                if (iVar1 != 0) {
                    _printk(0x8002e74,"msm_dmic_event",arg2 & 0xffffffffU);
                }
                goto code_r0x0800deec;
            }
            iVar1 = *unaff_x21;
            *unaff_x21 = iVar1 + 1;
            if ((iVar1 != 0) || (uVar2 = msm_cdc_pinctrl_select_active_state(iVar8), -1 < uVar2))
            goto code_r0x0800dfe0;
            uVar7 = uVar2;
            iVar1 = ___ratelimit(obj.msm_dmic_event._rs.95,"msm_dmic_event");
            if (iVar1 != 0) {
                uVar4 = 0x80028dc;
                goto code_r0x0800e040;
            }
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return uVar7;
    }
    arg1_00 = __stack_chk_fail();
    *extraout_x18 = sym.msm_int_wsa_init;
    pcStack_68 = sym.msm_int_wsa_init;
    iVar3 = sp_el0;
    iStack_78 = *(iVar3 + 0x5e0);
    puVar9 = *(arg1_00 + 8);
    puStack_70 = &stack0xffffffffffffffd0;
    piStack_60 = unaff_x21;
    iStack_50 = iVar8;
    uStack_48 = uVar7;
    iVar3 = strstr(*puVar9,"wsa883x");
    if (iVar3 == 0) {
        uStack_ac = 0x504;
        uStack_b0 = 0x3020100;
        uStack_b4 = 0x504;
        uStack_b8 = 0x3020100;
        uStack_bc = 0xd0a;
        puVar10 = puVar9[0x62];
        uStack_c8 = 0x7060504;
        uStack_c0 = 0x7030201;
        uStack_c4 = 0xd0b;
        uStack_90 = *0x8009428;
        uStack_88 = *0x8009430;
        uStack_80 = *0x8009438;
        uStack_a8 = *0x8009440;
        uStack_a0 = *0x8009448;
        uStack_98 = *0x8009450;
        if (*(puVar10 + 0x5c) != 0) {
            puVar5 = snd_soc_rtdcom_lookup(arg1_00,"wsa-codec.1");
            if (puVar5 == NULL) {
                uVar4 = 0x8003320;
                pcVar6 = "";
code_r0x0800e44c:
                _printk(uVar4,pcVar6);
                uVar7 = 0xffffffea;
                goto code_r0x0800e3ac;
            }
            wsa884x_set_channel_map(puVar5,&uStack_b0,6,&uStack_a8,&uStack_90,&uStack_c0);
            wsa884x_codec_info_create_codec_entry(*puVar10,puVar5);
            puVar9 = puVar5;
            if (1 < *(puVar10 + 0x5c)) {
                puVar9 = snd_soc_rtdcom_lookup(arg1_00,"wsa-codec.2");
                if (puVar9 == NULL) {
                    uVar4 = 0x80046e4;
                    pcVar6 = "";
                    puVar9 = puVar5;
                    goto code_r0x0800e44c;
                }
                wsa884x_set_channel_map(puVar9,&uStack_b8,6,&uStack_a8,&uStack_90,&uStack_c8);
                wsa884x_codec_info_create_codec_entry(*puVar10,puVar9);
                if (2 < *(puVar10 + 0x5c)) {
                    puVar5 = snd_soc_rtdcom_lookup(arg1_00,"");
                    if (puVar5 == NULL) {
                        uVar4 = 0x8003987;
                        pcVar6 = "";
                        goto code_r0x0800e44c;
                    }
                    wsa884x_set_channel_map(puVar5,&uStack_b0,6,&uStack_a8,&uStack_90,&uStack_c0);
                    wsa884x_codec_info_create_codec_entry(*puVar10,puVar5);
                    puVar9 = puVar5;
                    if (3 < *(puVar10 + 0x5c)) {
                        puVar9 = snd_soc_rtdcom_lookup(arg1_00,"");
                        if (puVar9 == NULL) {
                            uVar4 = 0x8003fa4;
                            pcVar6 = "";
                            puVar9 = puVar5;
                            goto code_r0x0800e44c;
                        }
                        wsa884x_set_channel_map(puVar9,&uStack_b8,6,&uStack_a8,&uStack_90,&uStack_c8);
                        wsa884x_codec_info_create_codec_entry(*puVar10,puVar9);
                    }
                }
            }
        }
    }
    else {
        puVar10 = puVar9[0x62];
        uStack_b0 = 0x3020100;
        uStack_b8 = 0x3020100;
        uStack_c0 = 0xa030201;
        uStack_c8 = 0xb060504;
        uStack_90 = *0x8006760;
        uStack_88 = *0x8006768;
        uStack_a8 = *0x8006770;
        uStack_a0 = *0x8006778;
        if (*(puVar10 + 0x5c) != 0) {
            puVar5 = snd_soc_rtdcom_lookup(arg1_00,"wsa-codec.1");
            if (puVar5 == NULL) {
                uVar4 = 0x8003320;
code_r0x0800e444:
                pcVar6 = "msm_int_wsa883x_init";
                goto code_r0x0800e44c;
            }
            wsa883x_set_channel_map(puVar5,&uStack_b0,4,&uStack_a8,&uStack_90,&uStack_c0);
            wsa883x_codec_info_create_codec_entry(*puVar10,puVar5);
            puVar9 = puVar5;
            if (1 < *(puVar10 + 0x5c)) {
                puVar9 = snd_soc_rtdcom_lookup(arg1_00,"wsa-codec.2");
                if (puVar9 == NULL) {
                    uVar4 = 0x80046e4;
                    puVar9 = puVar5;
                    goto code_r0x0800e444;
                }
                wsa883x_set_channel_map(puVar9,&uStack_b8,4,&uStack_a8,&uStack_90,&uStack_c8);
                wsa883x_codec_info_create_codec_entry(*puVar10,puVar9);
                if (2 < *(puVar10 + 0x5c)) {
                    puVar5 = snd_soc_rtdcom_lookup(arg1_00,"");
                    if (puVar5 == NULL) {
                        uVar4 = 0x8003987;
                        goto code_r0x0800e444;
                    }
                    wsa883x_set_channel_map(puVar5,&uStack_b0,4,&uStack_a8,&uStack_90,&uStack_c0);
                    wsa883x_codec_info_create_codec_entry(*puVar10,puVar5);
                    puVar9 = puVar5;
                    if (3 < *(puVar10 + 0x5c)) {
                        puVar9 = snd_soc_rtdcom_lookup(arg1_00,"");
                        if (puVar9 == NULL) {
                            uVar4 = 0x8003fa4;
                            puVar9 = puVar5;
                            goto code_r0x0800e444;
                        }
                        wsa883x_set_channel_map(puVar9,&uStack_b8,4,&uStack_a8,&uStack_90,&uStack_c8);
                        wsa883x_codec_info_create_codec_entry(*puVar10,puVar9);
                    }
                }
            }
        }
    }
    sym.msm_common_dai_link_init(arg1_00);
    uVar7 = 0;
code_r0x0800e3ac:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_78) {
        return uVar7;
    }
    iVar8 = __stack_chk_fail(uVar7);
    *extraout_x18_00 = sym.msm_wcn_init;
    pcStack_e8 = sym.msm_wcn_init;
    iVar3 = sp_el0;
    iStack_f8 = *(iVar3 + 0x5e0);
    uStack_108 = 0xa00000009f;
    uStack_100 = 0x9e0000009d;
    ppuStack_f0 = &puStack_70;
    puStack_e0 = puVar9;
    iStack_d8 = arg1_00;
    uVar7 = snd_soc_dai_set_channel_map(*(*(iVar8 + 0x600) + *(iVar8 + 0x60c) * 8),2,&uStack_108,2,&uStack_100);
    if (uVar7 == 0) {
        sym.msm_common_dai_link_init(iVar8);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_f8) {
        return uVar7 & 0xffffffff;
    }
    __stack_chk_fail();
    return 0;
}


// ===== sym.msm_int_wsa_init @ 0x0800e05c (size 1044) =====

int sym.msm_int_wsa_init(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    ulong *puVar3;
    ulong uVar4;
    int64_t arg1_00;
    char *pcVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar6;
    ulong *puVar7;
    ulong unaff_x30;
    ulong uStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    ulong *puStack_a0;
    int64_t iStack_98;
    uint uStack_88;
    ushort uStack_84;
    uint uStack_80;
    ushort uStack_7c;
    uint uStack_78;
    ushort uStack_74;
    uint uStack_70;
    ushort uStack_6c;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    puVar6 = *(arg1 + 8);
    iVar2 = strstr(*puVar6,"wsa883x");
    if (iVar2 == 0) {
        uStack_6c = 0x504;
        uStack_70 = 0x3020100;
        uStack_74 = 0x504;
        uStack_78 = 0x3020100;
        uStack_7c = 0xd0a;
        puVar7 = puVar6[0x62];
        uStack_88 = 0x7060504;
        uStack_80 = 0x7030201;
        uStack_84 = 0xd0b;
        uStack_50 = *0x8009428;
        uStack_48 = *0x8009430;
        uStack_40 = *0x8009438;
        uStack_68 = *0x8009440;
        uStack_60 = *0x8009448;
        uStack_58 = *0x8009450;
        if (*(puVar7 + 0x5c) != 0) {
            puVar3 = snd_soc_rtdcom_lookup(arg1,"wsa-codec.1");
            if (puVar3 == NULL) {
                uVar4 = 0x8003320;
                pcVar5 = "";
code_r0x0800e44c:
                _printk(uVar4,pcVar5);
                iVar1 = -0x16;
                goto code_r0x0800e3ac;
            }
            wsa884x_set_channel_map(puVar3,&uStack_70,6,&uStack_68,&uStack_50,&uStack_80);
            wsa884x_codec_info_create_codec_entry(*puVar7,puVar3);
            puVar6 = puVar3;
            if (1 < *(puVar7 + 0x5c)) {
                puVar6 = snd_soc_rtdcom_lookup(arg1,"wsa-codec.2");
                if (puVar6 == NULL) {
                    uVar4 = 0x80046e4;
                    pcVar5 = "";
                    puVar6 = puVar3;
                    goto code_r0x0800e44c;
                }
                wsa884x_set_channel_map(puVar6,&uStack_78,6,&uStack_68,&uStack_50,&uStack_88);
                wsa884x_codec_info_create_codec_entry(*puVar7,puVar6);
                if (2 < *(puVar7 + 0x5c)) {
                    puVar3 = snd_soc_rtdcom_lookup(arg1,"");
                    if (puVar3 == NULL) {
                        uVar4 = 0x8003987;
                        pcVar5 = "";
                        goto code_r0x0800e44c;
                    }
                    wsa884x_set_channel_map(puVar3,&uStack_70,6,&uStack_68,&uStack_50,&uStack_80);
                    wsa884x_codec_info_create_codec_entry(*puVar7,puVar3);
                    puVar6 = puVar3;
                    if (3 < *(puVar7 + 0x5c)) {
                        puVar6 = snd_soc_rtdcom_lookup(arg1,"");
                        if (puVar6 == NULL) {
                            uVar4 = 0x8003fa4;
                            pcVar5 = "";
                            puVar6 = puVar3;
                            goto code_r0x0800e44c;
                        }
                        wsa884x_set_channel_map(puVar6,&uStack_78,6,&uStack_68,&uStack_50,&uStack_88);
                        wsa884x_codec_info_create_codec_entry(*puVar7,puVar6);
                    }
                }
            }
        }
    }
    else {
        puVar7 = puVar6[0x62];
        uStack_70 = 0x3020100;
        uStack_78 = 0x3020100;
        uStack_80 = 0xa030201;
        uStack_88 = 0xb060504;
        uStack_50 = *0x8006760;
        uStack_48 = *0x8006768;
        uStack_68 = *0x8006770;
        uStack_60 = *0x8006778;
        if (*(puVar7 + 0x5c) != 0) {
            puVar3 = snd_soc_rtdcom_lookup(arg1,"wsa-codec.1");
            if (puVar3 == NULL) {
                uVar4 = 0x8003320;
code_r0x0800e444:
                pcVar5 = "msm_int_wsa883x_init";
                goto code_r0x0800e44c;
            }
            wsa883x_set_channel_map(puVar3,&uStack_70,4,&uStack_68,&uStack_50,&uStack_80);
            wsa883x_codec_info_create_codec_entry(*puVar7,puVar3);
            puVar6 = puVar3;
            if (1 < *(puVar7 + 0x5c)) {
                puVar6 = snd_soc_rtdcom_lookup(arg1,"wsa-codec.2");
                if (puVar6 == NULL) {
                    uVar4 = 0x80046e4;
                    puVar6 = puVar3;
                    goto code_r0x0800e444;
                }
                wsa883x_set_channel_map(puVar6,&uStack_78,4,&uStack_68,&uStack_50,&uStack_88);
                wsa883x_codec_info_create_codec_entry(*puVar7,puVar6);
                if (2 < *(puVar7 + 0x5c)) {
                    puVar3 = snd_soc_rtdcom_lookup(arg1,"");
                    if (puVar3 == NULL) {
                        uVar4 = 0x8003987;
                        goto code_r0x0800e444;
                    }
                    wsa883x_set_channel_map(puVar3,&uStack_70,4,&uStack_68,&uStack_50,&uStack_80);
                    wsa883x_codec_info_create_codec_entry(*puVar7,puVar3);
                    puVar6 = puVar3;
                    if (3 < *(puVar7 + 0x5c)) {
                        puVar6 = snd_soc_rtdcom_lookup(arg1,"");
                        if (puVar6 == NULL) {
                            uVar4 = 0x8003fa4;
                            puVar6 = puVar3;
                            goto code_r0x0800e444;
                        }
                        wsa883x_set_channel_map(puVar6,&uStack_78,4,&uStack_68,&uStack_50,&uStack_88);
                        wsa883x_codec_info_create_codec_entry(*puVar7,puVar6);
                    }
                }
            }
        }
    }
    sym.msm_common_dai_link_init(arg1);
    iVar1 = 0;
code_r0x0800e3ac:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return iVar1;
    }
    arg1_00 = __stack_chk_fail(iVar1);
    *extraout_x18 = sym.msm_wcn_init;
    pcStack_a8 = sym.msm_wcn_init;
    iVar2 = sp_el0;
    iStack_b8 = *(iVar2 + 0x5e0);
    uStack_c8 = 0xa00000009f;
    uStack_c0 = 0x9e0000009d;
    puStack_b0 = &stack0xffffffffffffffd0;
    puStack_a0 = puVar6;
    iStack_98 = arg1;
    iVar1 = snd_soc_dai_set_channel_map(*(*(arg1_00 + 0x600) + *(arg1_00 + 0x60c) * 8),2,&uStack_c8,2,&uStack_c0);
    if (iVar1 == 0) {
        sym.msm_common_dai_link_init(arg1_00);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_b8) {
        return iVar1;
    }
    __stack_chk_fail();
    return 0;
}


// ===== sym.msm_wcn_init @ 0x0800e470 (size 160) =====

int sym.msm_wcn_init(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_38 = 0xa00000009f;
    uStack_30 = 0x9e0000009d;
    iVar2 = snd_soc_dai_set_channel_map(*(*(arg1 + 0x600) + *(arg1 + 0x60c) * 8),2,&uStack_38,2,&uStack_30);
    if (iVar2 == 0) {
        sym.msm_common_dai_link_init(arg1);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return iVar2;
    }
    __stack_chk_fail();
    return 0;
}


// ===== sym.msm_audrx_stub_init @ 0x0800e510 (size 16) =====

ulong sym.msm_audrx_stub_init(int64_t arg1)

{
    return 0;
}


// ===== sym.msm_snd_stub_hw_params @ 0x0800e520 (size 16) =====

ulong sym.msm_snd_stub_hw_params(int64_t arg1)

{
    return 0;
}


// ===== sym.msm_audio_ssr_compare @ 0x0800e530 (size 112) =====

bool sym.msm_audio_ssr_compare(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _dev_printk(0x80045f2,arg1,"","",*(arg1 + 0x2f0),arg2);
    return *(arg1 + 0x2f0) != 0 && *(arg1 + 0x2f0) == arg2;
}


// ===== sym.kalama_ssr_enable @ 0x0800e5a0 (size 1248) =====

void sym.kalama_ssr_enable(int64_t arg1)

{
    uint16_t uVar1;
    int iVar2;
    uint32_t uVar3;
    ulong uVar4;
    char *pcVar5;
    uint32_t uVar6;
    ulong *in_x18;
    code *pcVar7;
    code *unaff_x21;
    code *unaff_x22;
    code *pcVar8;
    int64_t iVar9;
    int64_t iVar10;
    ulong unaff_x30;
    uchar auStack_130 [216];
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_58 = *(iVar10 + 0x5e0);
    pcVar7 = *(arg1 + 0x98);
    if (pcVar7 == NULL) {
        iVar2 = ___ratelimit(obj.kalama_ssr_enable._rs,"");
        if (iVar2 != 0) {
            _dev_err(arg1,"","");
        }
        uVar4 = 0xffffffea;
        goto code_r0x0800e5f8;
    }
    iVar2 = strcmp(*pcVar7,"kalama-stub-snd-card");
    if (iVar2 == 0) {
        _dev_printk(0x80045f2,arg1,"","");
    }
    sym.snd_card_notify_user(1);
    _dev_printk(0x80045f2,arg1,"","");
    iVar10 = *(pcVar7 + 0x310);
    if (iVar10 == 0) {
        pcVar5 = "%s: pdata is NULL \n";
        goto code_r0x0800e8cc;
    }
    unaff_x22 = snd_soc_get_pcm_runtime(pcVar7,*(pcVar7 + 0x150));
    if (unaff_x22 == NULL) {
        memcpy(auStack_130,*(pcVar7 + 0x150),0xd8);
        _dev_printk(0x80045f2,arg1,"","",auStack_130);
        if (*(iVar10 + 0x5c) != 0) goto code_r0x0800e6b0;
code_r0x0800e770:
        unaff_x21 = NULL;
    }
    else {
        if (*(iVar10 + 0x5c) == 0) goto code_r0x0800e770;
code_r0x0800e6b0:
        unaff_x21 = snd_soc_get_pcm_runtime(pcVar7,*(pcVar7 + 0x150) + 0x5e8);
        if (unaff_x21 == NULL) {
            memcpy(auStack_130,*(pcVar7 + 0x150) + 0x5e8,0xd8);
            _dev_printk(0x80045f2,arg1,"","",auStack_130);
        }
    }
    iVar9 = *(iVar10 + 0x88);
    if (iVar9 == 0) {
        pcVar5 = "%s: upd- backend_used is NULL\n";
code_r0x0800e8cc:
        _dev_printk(0x80045f2,arg1,pcVar5,"");
        goto code_r0x0800e8dc;
    }
    iVar2 = strcmp(iVar9,0x800406c);
    if (iVar2 == 0) {
        if (unaff_x21 == NULL) goto code_r0x0800e8dc;
code_r0x0800e7e8:
        pcVar8 = *(*(unaff_x21 + 8) + 0x310);
        unaff_x22 = pcVar8;
        if (pcVar8 == NULL) {
            uVar4 = ___ratelimit(obj.msm_set_upd_config._rs.254,"");
            if (uVar4 != 0) {
                uVar4 = 0x800473c;
                unaff_x22 = unaff_x21;
                goto code_r0x0800ea28;
            }
        }
        else {
            pcVar7 = pcVar8 + 0x74;
            if (((*pcVar7 != 0) && (*(pcVar8 + 0x78) != 0)) && (*(pcVar8 + 0x84) != 0)) {
                iVar2 = strcmp(*(pcVar8 + 0x88),0x800406c);
                if (iVar2 == 0) {
                    if (*(pcVar8 + 0x5c) == 0) {
                        uVar4 = 0x80045d6;
                        unaff_x22 = unaff_x21;
                        goto code_r0x0800ea28;
                    }
                    arg1 = snd_soc_rtdcom_lookup(unaff_x21,"wsa-codec.1");
                    if (arg1 == 0) {
                        _printk(0x8002a7e,"","wsa-codec.1");
                        goto code_r0x0800e8dc;
                    }
                }
                else {
                    arg1 = snd_soc_rtdcom_lookup(unaff_x21,"");
                    if (arg1 == 0) {
                        uVar4 = 0x8004169;
                        unaff_x22 = unaff_x21;
                        goto code_r0x0800ea28;
                    }
                }
                iVar2 = strcmp(*(pcVar8 + 0x88),0x800406c);
                if (iVar2 == 0) {
                    iVar10 = strstr(**(unaff_x21 + 8),"wsa883x");
                    if (iVar10 == 0) {
                        unaff_x21 = sym.__typeid__ZTSFiP17snd_soc_componentE_global_addr;
                    }
                    else {
                        unaff_x21 = sym.wsa883x_codec_get_dev_num.cfi_jt;
                    }
                }
                else {
                    unaff_x21 = sym.wcd938x_codec_get_dev_num.cfi_jt;
                }
                *(pcVar8 + 0x68) = unaff_x21;
                if (2 < unaff_x21 + -0x800a478 >> 3) goto code_r0x0800ea5c;
                goto code_r0x0800e96c;
            }
            uVar4 = ___ratelimit(obj.msm_set_upd_config._rs.256,"");
            if (uVar4 != 0) {
                uVar4 = 0x8002c7d;
                unaff_x22 = unaff_x21;
                goto code_r0x0800ea28;
            }
        }
    }
    else {
        iVar2 = strcmp(iVar9,0x8003356);
        if (iVar2 == 0) {
            unaff_x21 = unaff_x22;
            if (unaff_x22 != NULL) goto code_r0x0800e7e8;
            if (*(iVar10 + 0x60) == 0) goto code_r0x0800e8dc;
            uVar4 = ___ratelimit(obj.msm_set_upd_config._rs,"");
            if (uVar4 != 0) {
                uVar4 = 0x80039fe;
                pcVar8 = unaff_x22;
                goto code_r0x0800ea28;
            }
        }
        else {
            uVar4 = ___ratelimit(obj.kalama_ssr_enable._rs.251,"");
            if (uVar4 != 0) {
                _dev_err(*(pcVar7 + 0x40),"","");
                goto code_r0x0800e8dc;
            }
        }
    }
code_r0x0800e5f8:
    while( true ) {
        iVar10 = sp_el0;
        if (*(iVar10 + 0x5e0) == iStack_58) {
            return;
        }
        __stack_chk_fail(uVar4);
        pcVar8 = unaff_x22;
code_r0x0800ea5c:
        __cfi_slowpath_diag(0xf0d2ea9a64921857,unaff_x21,0x8002430);
code_r0x0800e96c:
        uVar3 = (*unaff_x21)(arg1);
        uVar3 = uVar3 & 0xff;
        arg1 = uVar3;
        unaff_x22 = pcVar8;
        if (6 < uVar3) goto code_r0x0800e980;
        uVar1 = *(pcVar8 + 0x84);
        *(pcVar8 + 0x7c) = uVar1;
        *(pcVar8 + 0x80) = uVar1;
        iVar2 = strcmp(*(pcVar8 + 0x88),0x800406c);
        uVar3 = uVar1 | uVar3 << 0x14;
        unaff_x21 = uVar3;
        uVar6 = 0x1010000;
        if (iVar2 != 0) {
            uVar6 = 0x80010000;
        }
        *(pcVar8 + 0x7c) = uVar6 | uVar3;
        *(pcVar8 + 0x80) = uVar3 | 0x10000;
        iVar2 = audio_prm_set_cdc_earpa_duty_cycling_req(pcVar7,1);
        if (-1 < iVar2) break;
        uVar4 = ___ratelimit(obj.msm_set_upd_config._rs.263,"");
        if (uVar4 != 0) {
            uVar4 = 0x8003e43;
            unaff_x22 = unaff_x21;
code_r0x0800ea28:
            _printk(uVar4,"");
            unaff_x21 = unaff_x22;
            unaff_x22 = pcVar8;
            break;
        }
    }
code_r0x0800e8dc:
    uVar4 = 0;
    goto code_r0x0800e5f8;
code_r0x0800e980:
    uVar4 = ___ratelimit(obj.msm_set_upd_config._rs.261,"");
    if (uVar4 == 0) goto code_r0x0800e5f8;
    _printk(0x800261a,"",arg1);
    goto code_r0x0800e8dc;
}


// ===== sym.kalama_ssr_disable @ 0x0800ea80 (size 200) =====

void sym.kalama_ssr_disable(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong *puVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = *(arg1 + 0x98);
    if (puVar2 == NULL) {
        iVar1 = ___ratelimit(obj.kalama_ssr_disable._rs,"");
        if (iVar1 != 0) {
            _dev_err(arg1,"","");
        }
    }
    else {
        _dev_printk(0x80045f2,arg1,"%s: setting snd_card to OFFLINE\n","");
        sym.snd_card_notify_user(0);
        iVar1 = strcmp(*puVar2,"kalama-stub-snd-card");
        if (iVar1 == 0) {
            _dev_printk(0x80045f2,arg1,"","");
        }
    }
    return;
}


// ===== sym.init_module @ 0x0800ec38 (size 56) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.snd_card_sysfs_init();
    __platform_driver_register(reloc.msm_asoc_machine_probe.52853753f8636579aaf6d6a2c764b9d3.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x0800ec70 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.msm_asoc_machine_probe.52853753f8636579aaf6d6a2c764b9d3.cfi_jt);
    return;
}

