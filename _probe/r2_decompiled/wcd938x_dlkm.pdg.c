// decompiled from wcd938x_dlkm by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08018000 (size 2100) =====

//WARNING: Switch with 1 destination removed at 0x080246ec

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x129e179694a2de07) {
        if (arg1 < -0x3e7cbd2a45106ba3) {
            if (arg1 < -0x65615f30bf8db75b) {
                if (arg1 < -0x749213c658cf941a) {
                    if (arg1 == -0x7adf8fa02a1aafba) {
                        pcVar2 = sym.wcd938x_mbhc_micb_en_status.228a7220f248aaede76982248f6c4394.cfi_jt;
                    }
                    else {
                        if (arg1 != -0x791d6259949fc7e5) goto code_r0x080246ac;
                        pcVar2 = sym.wcd938x_mbhc_request_irq.228a7220f248aaede76982248f6c4394.cfi_jt;
                    }
                }
                else {
                    if (arg1 == -0x749213c658cf941a) {
                        pcVar2 = sym.snd_soc_info_enum_double.cfi_jt;
code_r0x0801874c:
                        if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                            return;
                        }
                        goto code_r0x080246ac;
                    }
                    if (arg1 == -0x6e790455da51577a) {
                        pcVar2 = sym.wcd938x_mbhc_init.cfi_jt;
                    }
                    else {
                        if (arg1 != -0x6b34ea9ee10d11c7) goto code_r0x080246ac;
                        pcVar2 = sym.wcd938x_mbhc_get_impedance.cfi_jt;
                    }
                }
            }
            else if (arg1 < -0x53c887a672ae5243) {
                if (arg1 == -0x65615f30bf8db75b) {
                    pcVar2 = sym.wcd938x_soc_get_mbhc.cfi_jt;
                }
                else {
                    if (arg1 == -0x57be845bca9148ef) {
                        pcVar2 = sym.wcd938x_resume.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt;
                        goto code_r0x080187f0;
                    }
                    if (arg1 != -0x5487fc466796a8a5) goto code_r0x080246ac;
                    pcVar2 = sym.wcd938x_mbhc_hs_detect.cfi_jt;
                }
            }
            else if (arg1 == -0x53c887a672ae5243) {
                pcVar2 = sym.wcd938x_get_micb_vout_ctl_val.cfi_jt;
            }
            else {
                if (arg1 == -0x49739d0000a0fe53) {
                    if ((pcVar1 + -0x80189d0 >> 3 | pcVar1 << 0x3d) < 0x14) {
                        return;
                    }
                    goto code_r0x080246ac;
                }
                if (arg1 != -0x48ef54602b463a27) goto code_r0x080246ac;
                pcVar2 = sym.wcd938x_release_of.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt;
            }
        }
        else if (arg1 < -0x21c7afcc0008b270) {
            if (arg1 < -0x3557318fb8d07b71) {
                if (arg1 == -0x3e7cbd2a45106ba3) {
                    pcVar2 = sym.wcd938x_mbhc_moisture_config.228a7220f248aaede76982248f6c4394.cfi_jt;
                }
                else {
                    if (arg1 != -0x3987c0e26ee29729) goto code_r0x080246ac;
                    pcVar2 = sym.wcd938x_wd_handle_irq.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt;
                }
            }
            else {
                if (arg1 == -0x3557318fb8d07b71) {
                    pcVar2 = sym.wcd938x_remove.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt;
                    goto code_r0x0801874c;
                }
                if (arg1 == -0x31e5639e0592073b) {
                    pcVar2 = sym.wcd938x_mbhc_lock_sleep.228a7220f248aaede76982248f6c4394.cfi_jt;
                }
                else {
                    if (arg1 != -0x2d1ef4d8549a89e5) goto code_r0x080246ac;
                    pcVar2 = sym.wcd938x_compare_of.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt;
                }
            }
        }
        else if (arg1 < -0xe30a95edbdc14af) {
            if (arg1 == -0x21c7afcc0008b270) {
                pcVar2 = sym.wcd938x_mbhc_register_notifier.228a7220f248aaede76982248f6c4394.cfi_jt;
            }
            else {
                if (arg1 != -0x1e716fec1f1dbb3a) {
                    if ((arg1 == -0xf2d15659b6de7a9) && ((pcVar1 + -0x8018aa0 >> 3 | pcVar1 << 0x3d) < 6)) {
                        return;
                    }
                    goto code_r0x080246ac;
                }
                pcVar2 = sym.wcd938x_swr_dmic_register_notifier.cfi_jt;
            }
        }
        else if (arg1 == -0xe30a95edbdc14af) {
            pcVar2 = sym.wcd938x_mbhc_hph_pa_on_status.228a7220f248aaede76982248f6c4394.cfi_jt;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) {
                if (arg1 != 0x6be91529ddea3c2) goto code_r0x080246ac;
                pcVar2 = sym.wcd938x_readable_register.bfe5409578f5ad48e0ad82856044c7d5.cfi_jt;
                goto code_r0x080187f0;
            }
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else if (arg1 < 0x44b98ff817508543) {
        if (arg1 < 0x2882621ee1337d31) {
            if (arg1 < 0x1be676a8fa3b6db7) {
                if (arg1 == 0x129e179694a2de07) {
                    pcVar2 = sym.wcd938x_mbhc_hph_l_pull_up_control.228a7220f248aaede76982248f6c4394.cfi_jt;
                }
                else {
                    if (arg1 != 0x155f259693f926eb) goto code_r0x080246ac;
                    pcVar2 = sym.wcd938x_mbhc_micb_ctrl_threshold_mic.228a7220f248aaede76982248f6c4394.cfi_jt;
                }
            }
            else {
                if (arg1 == 0x1be676a8fa3b6db7) {
                    if ((pcVar1 + -0x8018a78 >> 3 | pcVar1 << 0x3d) < 5) {
                        return;
                    }
                    goto code_r0x080246ac;
                }
                if (arg1 == 0x1d4dfe77ec242b3c) {
                    pcVar2 = sym.wcd938x_mbhc_request_micbias.228a7220f248aaede76982248f6c4394.cfi_jt;
                    goto code_r0x080187f0;
                }
                if (arg1 != 0x23d049188c4e6e9c) goto code_r0x080246ac;
                pcVar2 = sym.wcd938x_mbhc_irq_control.228a7220f248aaede76982248f6c4394.cfi_jt;
            }
        }
        else if (arg1 < 0x2b7b5c5602187aa9) {
            if (arg1 == 0x2882621ee1337d31) {
                if ((pcVar1 + -0x8018ae0 >> 3 | pcVar1 << 0x3d) < 0x18) {
                    return;
                }
                goto code_r0x080246ac;
            }
            if (arg1 == 0x2ae1a75badba2808) {
                pcVar2 = sym.wcd938x_mbhc_program_btn_thr.228a7220f248aaede76982248f6c4394.cfi_jt;
            }
            else {
                if (arg1 != 0x2b17460ce4bf82db) goto code_r0x080246ac;
                pcVar2 = sym.__typeid__ZTSFiPvbE_global_addr;
            }
        }
        else if (arg1 == 0x2b7b5c5602187aa9) {
            pcVar2 = sym.wcd938x_wcd_mbhc_calc_impedance.228a7220f248aaede76982248f6c4394.cfi_jt;
        }
        else {
            if (arg1 != 0x374739a980183585) {
                if (arg1 != 0x3f37d02e2e91c6d1) goto code_r0x080246ac;
                pcVar2 = sym.wcd938x_version_read.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt;
                goto code_r0x0801874c;
            }
            pcVar2 = sym.wcd938x_mbhc_free_irq.228a7220f248aaede76982248f6c4394.cfi_jt;
        }
    }
    else if (arg1 < 0x7580eeff27e3c667) {
        if (arg1 < 0x641d19c7be126e92) {
            if (arg1 == 0x44b98ff817508543) {
                pcVar2 = sym.wcd938x_micbias_control.cfi_jt;
            }
            else if (arg1 == 0x516c7c120760246b) {
                pcVar2 = sym.wcd938x_info_create_codec_entry.cfi_jt;
            }
            else {
                if (arg1 != 0x5b83a3fd302a5421) goto code_r0x080246ac;
                pcVar2 = sym.wcd938x_unbind.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt;
            }
        }
        else if (arg1 == 0x641d19c7be126e92) {
            pcVar2 = sym.wcd938x_handle_post_irq.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt;
        }
        else if (arg1 == 0x6afae80da6ce59ef) {
            pcVar2 = sym.wcd938x_mbhc_ssr_down.cfi_jt;
        }
        else {
            if (arg1 != 0x743de5d5227cccd4) goto code_r0x080246ac;
            pcVar2 = sym.wcd938x_mbhc_post_ssr_init.cfi_jt;
        }
    }
    else if (arg1 < 0x7e04a0fb7ad8bcd5) {
        if (arg1 == 0x7580eeff27e3c667) {
            pcVar2 = sym.wcd938x_mbhc_moisture_polling_ctrl.228a7220f248aaede76982248f6c4394.cfi_jt;
code_r0x080187f0:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 3) {
                return;
            }
            goto code_r0x080246ac;
        }
        if (arg1 == 0x7bab4b804db7b328) {
            pcVar2 = sym.wcd938x_mbhc_get_moisture_status.228a7220f248aaede76982248f6c4394.cfi_jt;
        }
        else {
            if (arg1 != 0x7d57972cd3914fb1) goto code_r0x080246ac;
            pcVar2 = sym.wcd938x_event_notify.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt;
        }
    }
    else if (arg1 == 0x7e04a0fb7ad8bcd5) {
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    else {
        if (arg1 == 0x7e6c99e1529760f9) {
            pcVar2 = sym.wcd938x_soc_codec_remove.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt;
            goto code_r0x080187f0;
        }
        if (arg1 != 0x7ec14beac6d10d85) goto code_r0x080246ac;
        pcVar2 = sym.wcd938x_get_hwdep_fw_cal.228a7220f248aaede76982248f6c4394.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080246ac:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8024700);
    (*pcVar1)();
}


// ===== sym.wcd938x_mbhc_request_irq.228a7220f248aaede76982248f6c4394.cfi_jt @ 0x08018840 (size 8) =====

void sym.wcd938x_mbhc_request_irq.228a7220f248aaede76982248f6c4394.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    wcd_request_irq(*(*(param_1 + 0x18) + 0x98) + 0x130,param_2,param_4,param_3);
    return;
}


// ===== sym.wcd938x_mbhc_hs_detect.cfi_jt @ 0x08018848 (size 8) =====

ulong sym.wcd938x_mbhc_hs_detect.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        iVar1 = ___ratelimit(obj.wcd938x_mbhc_hs_detect._rs,"wcd938x_mbhc_hs_detect");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        uVar2 = 0x800464a;
    }
    else {
        iVar3 = *(*(param_1 + 0x18) + 0x98);
        if (iVar3 != 0) {
            if (*(iVar3 + 0x100) != 0) {
                uVar2 = wcd_mbhc_start();
                return uVar2;
            }
            iVar1 = ___ratelimit(obj.wcd938x_mbhc_hs_detect._rs.6,"wcd938x_mbhc_hs_detect");
            if (iVar1 == 0) {
                return 0xffffffea;
            }
            _dev_err(*(param_1 + 0x18),"%s: mbhc not initialized!\n","wcd938x_mbhc_hs_detect");
            return 0xffffffea;
        }
        iVar1 = ___ratelimit(obj.wcd938x_mbhc_hs_detect._rs.4,"wcd938x_mbhc_hs_detect");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        uVar2 = 0x8002b6c;
    }
    _printk(uVar2,"wcd938x_mbhc_hs_detect");
    return 0xffffffea;
}


// ===== sym.wcd938x_handle_post_irq.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt @ 0x08018850 (size 8) =====

int sym.wcd938x_handle_post_irq.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt(int64_t param_1)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    uint32_t uVar4;
    int iVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong uVar8;
    char *pcVar9;
    int iVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar11;
    int64_t iVar12;
    ulong unaff_x30;
    int iStack_34;
    int iStack_30;
    int iStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_28 = *(iVar6 + 0x5e0);
    iStack_2c = 0;
    iStack_34 = 0;
    iStack_30 = 0;
    regmap_read(*(param_1 + 0x20),0x346e,&iStack_2c);
    regmap_read(*(param_1 + 0x20),0x346f,&iStack_30);
    regmap_read(*(param_1 + 0x20),0x3470,&iStack_34);
    *(*(param_1 + 0x30) + 0x3f0) = (iStack_2c != 0 || iStack_30 != 0) || iStack_34 != 0;
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_28) {
        return 1;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18 = sym.wcd938x_soc_codec_probe;
    _dev_info(*(iVar6 + 0x18),"%s()\n","wcd938x_soc_codec_probe");
    iVar12 = *(*(iVar6 + 0x18) + 0x98);
    if (iVar12 == 0) {
        return -0x16;
    }
    *(iVar12 + 0x10) = iVar6;
    snd_soc_component_init_regmap(iVar6,*(iVar12 + 0x20));
    devm_regmap_qti_debugfs_register(*(iVar12 + 0x30) + 0x48,*(iVar12 + 0x20));
    uVar4 = snd_soc_component_read(iVar6,0x34b0);
    *(iVar12 + 8) = uVar4 >> 1 & 0xf;
    iVar7 = devm_kmalloc(*(iVar6 + 0x18),0x78,0xdc0);
    *(iVar12 + 0x58) = iVar7;
    if (iVar7 == 0) {
        _dev_err(*(iVar6 + 0x18),"Failed to allocate fw_data\n");
        return -0xc;
    }
    puVar1 = iVar7 + 0x20;
    Hint_Prefetch(puVar1,2,0,1);
    do {
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
            *puVar1 = *puVar1 | 4;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    iVar5 = wcd_cal_create_hwdep(*(iVar12 + 0x58),1000,iVar6);
    if (iVar5 < 0) {
        uVar8 = *(iVar6 + 0x18);
        pcVar9 = "%s hwdep failed %d\n";
        iVar10 = iVar5;
        goto code_r0x0801b56c;
    }
    iVar5 = sym.wcd938x_mbhc_init(iVar12 + 0x100,iVar6,*(iVar12 + 0x58));
    if (iVar5 != 0) {
        _printk(0x8009140,"wcd938x_soc_codec_probe");
        *(iVar12 + 0x58) = 0;
        return iVar5;
    }
    iVar7 = iVar6 + 0xd0;
    snd_soc_dapm_ignore_suspend(iVar7,"WCD938X_AIF Playback");
    snd_soc_dapm_ignore_suspend(iVar7,"WCD938X_AIF Capture");
    snd_soc_dapm_ignore_suspend(iVar7,"AMIC1");
    snd_soc_dapm_ignore_suspend(iVar7,"AMIC2");
    snd_soc_dapm_ignore_suspend(iVar7,"AMIC3");
    snd_soc_dapm_ignore_suspend(iVar7,"AMIC4");
    snd_soc_dapm_ignore_suspend(iVar7,"AMIC5");
    snd_soc_dapm_ignore_suspend(iVar7,"AMIC6");
    snd_soc_dapm_ignore_suspend(iVar7,"AMIC7");
    snd_soc_dapm_ignore_suspend(iVar7,"VA AMIC1");
    snd_soc_dapm_ignore_suspend(iVar7,"VA AMIC2");
    snd_soc_dapm_ignore_suspend(iVar7,"VA AMIC3");
    snd_soc_dapm_ignore_suspend(iVar7,"VA AMIC4");
    snd_soc_dapm_ignore_suspend(iVar7,"VA AMIC5");
    snd_soc_dapm_ignore_suspend(iVar7,"VA AMIC6");
    snd_soc_dapm_ignore_suspend(iVar7,"VA AMIC7");
    snd_soc_dapm_ignore_suspend(iVar7,"WCD_TX_OUTPUT");
    snd_soc_dapm_ignore_suspend(iVar7,"IN1_HPHL");
    snd_soc_dapm_ignore_suspend(iVar7,"IN2_HPHR");
    snd_soc_dapm_ignore_suspend(iVar7,"IN3_AUX");
    snd_soc_dapm_ignore_suspend(iVar7,0x800911a);
    snd_soc_dapm_ignore_suspend(iVar7,0x800703a);
    snd_soc_dapm_ignore_suspend(iVar7,"HPHL");
    snd_soc_dapm_ignore_suspend(iVar7,"HPHR");
    snd_soc_dapm_ignore_suspend(iVar7,"WCD_TX_DUMMY");
    snd_soc_dapm_ignore_suspend(iVar7,"WCD_RX_DUMMY");
    snd_soc_dapm_sync(iVar7);
    wcd_cls_h_init(iVar12 + 0xe0);
    sym.wcd938x_init_reg(iVar6);
    iVar5 = snd_soc_add_component_controls(iVar6,obj.wcd9380_debug_snd_controls,1);
    if (-1 < iVar5) {
        iVar10 = *(iVar12 + 8);
        if (iVar10 == 0) {
            iVar5 = snd_soc_add_component_controls(iVar6,obj.wcd9380_snd_controls,6);
            if (iVar5 < 0) goto code_r0x0801b51c;
            iVar10 = *(iVar12 + 8);
        }
        if ((iVar10 != 5) || (iVar5 = snd_soc_add_component_controls(iVar6,obj.wcd9385_snd_controls,6), -1 < iVar5))
        {
            pcVar11 = *(iVar12 + 0xc40);
            *(iVar12 + 0xc50) = 1;
            *(iVar12 + 0xc18) = sym.wcd938x_event_notify.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt;
            if (pcVar11 == NULL) {
                return iVar5;
            }
            __cfi_slowpath_diag(0x3b795baa068bc3a6,pcVar11,0x8001ad0);
            iVar5 = (*pcVar11)(*(iVar12 + 0xc30),iVar12 + 0xc18,1);
            if (iVar5 == 0) {
                return 0;
            }
            _dev_err(*(iVar6 + 0x18),"%s: Failed to register notifier %d\n","wcd938x_soc_codec_probe",iVar5);
            return iVar5;
        }
    }
code_r0x0801b51c:
    uVar8 = *(iVar6 + 0x18);
    pcVar9 = "%s: Failed to add snd ctrls for variant: %d\n";
    iVar10 = *(iVar12 + 8);
code_r0x0801b56c:
    _dev_err(uVar8,pcVar9,"wcd938x_soc_codec_probe",iVar10);
    *(iVar12 + 0x58) = 0;
    return iVar5;
}


// ===== sym.wcd938x_mbhc_program_btn_thr.228a7220f248aaede76982248f6c4394.cfi_jt @ 0x08018858 (size 8) =====

void sym.wcd938x_mbhc_program_btn_thr.228a7220f248aaede76982248f6c4394.cfi_jt
               (int64_t param_1,ulong param_2,int16_t *param_3,int param_4)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_4 < 9) {
        if (((((0 < param_4) &&
              (snd_soc_component_update_bits
                         (param_1,0x301a,0xfc,
                          (((*param_3 << 1) * 0x51eb851f >> 0x23) - ((*param_3 << 1) >> 0x1f) & 0x3f) << 2),
              param_4 != 1)) &&
             (snd_soc_component_update_bits
                        (param_1,0x301b,0xfc,
                         (((param_3[1] << 1) * 0x51eb851f >> 0x23) - ((param_3[1] << 1) >> 0x1f) & 0x3f) << 2),
             param_4 != 2)) &&
            ((snd_soc_component_update_bits
                        (param_1,0x301c,0xfc,
                         (((param_3[2] << 1) * 0x51eb851f >> 0x23) - ((param_3[2] << 1) >> 0x1f) & 0x3f) << 2),
             param_4 != 3 &&
             (snd_soc_component_update_bits
                        (param_1,0x301d,0xfc,
                         (((param_3[3] << 1) * 0x51eb851f >> 0x23) - ((param_3[3] << 1) >> 0x1f) & 0x3f) << 2),
             param_4 != 4)))) &&
           ((snd_soc_component_update_bits
                       (param_1,0x301e,0xfc,
                        (((param_3[4] << 1) * 0x51eb851f >> 0x23) - ((param_3[4] << 1) >> 0x1f) & 0x3f) << 2),
            param_4 != 5 &&
            ((snd_soc_component_update_bits
                        (param_1,0x301f,0xfc,
                         (((param_3[5] << 1) * 0x51eb851f >> 0x23) - ((param_3[5] << 1) >> 0x1f) & 0x3f) << 2),
             param_4 != 6 &&
             (snd_soc_component_update_bits
                        (param_1,0x3020,0xfc,
                         (((param_3[6] << 1) * 0x51eb851f >> 0x23) - ((param_3[6] << 1) >> 0x1f) & 0x3f) << 2),
             param_4 != 7)))))) {
            snd_soc_component_update_bits
                      (param_1,0x3021,0xfc,
                       (((param_3[7] << 1) * 0x51eb851f >> 0x23) - ((param_3[7] << 1) >> 0x1f) & 0x3f) << 2);
        }
    }
    else {
        iVar1 = ___ratelimit(obj.wcd938x_mbhc_program_btn_thr._rs,"wcd938x_mbhc_program_btn_thr");
        if (iVar1 != 0) {
            _dev_err(*(param_1 + 0x18),"%s: invalid number of buttons: %d\n","wcd938x_mbhc_program_btn_thr",param_4);
        }
    }
    return;
}


// ===== sym.wcd938x_mbhc_irq_control.228a7220f248aaede76982248f6c4394.cfi_jt @ 0x08018860 (size 8) =====

void sym.wcd938x_mbhc_irq_control.228a7220f248aaede76982248f6c4394.cfi_jt
               (int64_t param_1,ulong param_2,uint32_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_3 & 1) == 0) {
        wcd_disable_irq(*(*(param_1 + 0x18) + 0x98) + 0x130);
    }
    else {
        wcd_enable_irq();
    }
    return;
}


// ===== sym.wcd938x_release_of.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt @ 0x08018868 (size 8) =====

void sym.wcd938x_release_of.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt(void)

{
    return;
}


// ===== sym.wcd938x_get_hwdep_fw_cal.228a7220f248aaede76982248f6c4394.cfi_jt @ 0x08018870 (size 8) =====

int64_t sym.wcd938x_get_hwdep_fw_cal.228a7220f248aaede76982248f6c4394.cfi_jt(int64_t param_1,uint param_2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0xf8);
    if (iVar3 == 0) {
        iVar1 = ___ratelimit(obj.wcd938x_get_hwdep_fw_cal._rs,"wcd938x_get_hwdep_fw_cal");
        if (iVar1 != 0) {
            _printk(0x80064db,"wcd938x_get_hwdep_fw_cal");
        }
    }
    else {
        iVar2 = wcdcal_get_fw_cal(*(param_1 + 0x468));
        if (iVar2 != 0) {
            return iVar2;
        }
        iVar1 = ___ratelimit(obj.wcd938x_get_hwdep_fw_cal._rs.17,"wcd938x_get_hwdep_fw_cal");
        if (iVar1 != 0) {
            _dev_err(*(iVar3 + 0x18),"%s: cal not sent by %d\n","wcd938x_get_hwdep_fw_cal",param_2);
        }
    }
    return 0;
}


// ===== sym.wcd938x_mbhc_micb_en_status.228a7220f248aaede76982248f6c4394.cfi_jt @ 0x08018878 (size 8) =====

ulong sym.wcd938x_mbhc_micb_en_status.228a7220f248aaede76982248f6c4394.cfi_jt(int64_t param_1,int param_2)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (param_2 == 2) {
        *in_x18 = unaff_x30;
        uVar1 = snd_soc_component_read(*(param_1 + 0xf8),0x3023);
        if ((uVar1 & 0xc0) == 0x40) {
            return 1;
        }
    }
    return 0;
}


// ===== sym.wcd938x_micbias_control.cfi_jt @ 0x08018880 (size 8) =====

ulong sym.wcd938x_micbias_control.cfi_jt(int64_t param_1,uint32_t param_2,uint param_3,uint32_t param_4)

{
    uint32_t uVar1;
    bool bVar2;
    int iVar3;
    ulong uVar4;
    char *pcVar5;
    int64_t iVar6;
    uint32_t uVar7;
    uint uVar8;
    ulong uVar9;
    ulong *in_x18;
    uint64_t uVar10;
    int64_t iVar11;
    ulong uVar12;
    ulong uVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = param_2 - 1;
    uVar10 = uVar1;
    if (3 < uVar1) {
        iVar3 = ___ratelimit(obj.wcd938x_micbias_control._rs,"wcd938x_micbias_control");
        if (iVar3 == 0) {
            return 0xffffffea;
        }
        uVar4 = *(param_1 + 0x18);
        pcVar5 = "%s: Invalid micbias index, micb_ind:%d\n";
        param_2 = uVar1;
code_r0x08019040:
        _dev_err(uVar4,pcVar5,"wcd938x_micbias_control",param_2);
        return 0xffffffea;
    }
    iVar11 = *(*(param_1 + 0x18) + 0x98);
    if (iVar11 == 0) {
        iVar3 = ___ratelimit(obj.wcd938x_micbias_control._rs.8,"wcd938x_micbias_control");
        if (iVar3 == 0) {
            return 0xffffffea;
        }
        _dev_err(*(param_1 + 0x18),"%s: wcd938x private data is NULL\n","wcd938x_micbias_control");
        return 0xffffffea;
    }
    uVar13 = 0;
    uVar12 = 0;
    uVar7 = 0;
    uVar9 = 0;
    uVar4 = 0;
    bVar2 = true;
    uVar8 = 0x3022;
    switch(uVar10) {
    case 0:
        break;
    case 1:
        bVar2 = false;
        uVar7 = 1;
        uVar8 = 0x3023;
        uVar4 = 8;
        uVar9 = 6;
        uVar12 = 4;
        uVar13 = 2;
        break;
    case 2:
        uVar13 = 0;
        uVar12 = 0;
        uVar7 = 0;
        uVar9 = 0;
        uVar4 = 0;
        bVar2 = true;
        uVar8 = 0x3025;
        break;
    case 3:
        uVar13 = 0;
        uVar12 = 0;
        uVar7 = 0;
        uVar9 = 0;
        uVar4 = 0;
        bVar2 = true;
        uVar8 = 0x3026;
        break;
    default:
        iVar3 = ___ratelimit(obj.wcd938x_micbias_control._rs.10,"wcd938x_micbias_control");
        if (iVar3 == 0) {
            return 0xffffffea;
        }
        uVar4 = *(param_1 + 0x18);
        pcVar5 = "%s: Invalid micbias number: %d\n";
        goto code_r0x08019040;
    }
    mutex_lock();
    switch(param_3) {
    case 0:
        if (*(iVar11 + 0xc78) == '\0') {
            uVar4 = *(param_1 + 0x18);
            uVar9 = 0;
code_r0x08019264:
            _dev_printk(0x800991b,uVar4,"%s: enable req %d wcd device down\n","wcd938x_micbias_control",uVar9);
            uVar4 = 0xffffffed;
            goto code_r0x08019480;
        }
        iVar6 = iVar11 + uVar1 * 4;
        iVar3 = *(iVar6 + 0x48);
        *(iVar6 + 0x48) = iVar3 + 1;
        if ((iVar3 == 0) && (*(iVar11 + uVar10 * 4 + 0x38) == 0)) {
            snd_soc_component_update_bits(param_1,uVar8,0xc0,0x80);
        }
        break;
    case 1:
        iVar3 = *(iVar11 + 0x48 + uVar1 * 4);
        if (0 < iVar3) {
            *(iVar11 + 0x48 + uVar10 * 4) = iVar3 + -1;
            iVar3 = iVar3 + -1;
        }
        if (*(iVar11 + 0xc78) == '\0') {
            uVar4 = *(param_1 + 0x18);
            uVar9 = 1;
            goto code_r0x08019264;
        }
        if ((iVar3 == 0) && (*(iVar11 + uVar10 * 4 + 0x38) == 0)) {
            snd_soc_component_update_bits(param_1,uVar8,0xc0,0);
        }
        break;
    case 2:
        if (*(iVar11 + 0xc78) == '\0') {
            uVar4 = *(param_1 + 0x18);
            uVar9 = 2;
            goto code_r0x08019264;
        }
        iVar6 = iVar11 + uVar1 * 4;
        iVar3 = *(iVar6 + 0x38);
        *(iVar6 + 0x38) = iVar3 + 1;
        if (iVar3 == 0) {
            snd_soc_component_update_bits(param_1,0x3409,0xf0,0xf0);
            snd_soc_component_update_bits(param_1,0x3408,0x10,0x10);
            snd_soc_component_update_bits(param_1,0x3417,1,1);
            snd_soc_component_update_bits(param_1,0x306c,1,1);
            snd_soc_component_update_bits(param_1,0x306f,1,1);
            snd_soc_component_update_bits(param_1,0x3072,1,1);
            snd_soc_component_update_bits(param_1,0x3075,1,1);
            snd_soc_component_update_bits(param_1,uVar8,0xc0,0x40);
            if (!bVar2) {
                blocking_notifier_call_chain(*(iVar11 + 0x100) + 0x420,uVar12);
            }
        }
        if ((uVar7 & param_4) == 1) {
            iVar6 = *(iVar11 + 0x100);
joined_r0x0801943c:
            if (iVar6 != 0) {
                blocking_notifier_call_chain(iVar6 + 0x420,uVar4);
            }
        }
        break;
    case 3:
        iVar3 = *(iVar11 + 0x38 + uVar1 * 4);
        if (0 < iVar3) {
            *(iVar11 + 0x38 + uVar10 * 4) = iVar3 + -1;
            iVar3 = iVar3 + -1;
        }
        if (*(iVar11 + 0xc78) == '\0') {
            uVar4 = *(param_1 + 0x18);
            uVar9 = 3;
            goto code_r0x08019264;
        }
        if (iVar3 == 0) {
            iVar3 = *(iVar11 + uVar10 * 4 + 0x48);
            if (iVar3 < 1) {
                if (iVar3 == 0) {
                    if (bVar2) {
                        uVar4 = 0;
                        goto code_r0x08019424;
                    }
                    if (*(iVar11 + 0x100) != 0) {
                        blocking_notifier_call_chain(*(iVar11 + 0x100) + 0x420,1);
                    }
                    snd_soc_component_update_bits(param_1,uVar8,0xc0,0);
                    if (*(iVar11 + 0x100) != 0) {
                        blocking_notifier_call_chain(*(iVar11 + 0x100) + 0x420,uVar13);
                    }
                }
            }
            else {
                uVar4 = 0x80;
code_r0x08019424:
                snd_soc_component_update_bits(param_1,uVar8,0xc0,uVar4);
            }
        }
        if ((uVar7 & param_4) == 1) {
            iVar6 = *(iVar11 + 0x100);
            uVar4 = uVar9;
            goto joined_r0x0801943c;
        }
    }
    iVar6 = iVar11 + uVar10 * 4;
    _dev_printk(0x800991b,*(param_1 + 0x18),"%s: micb_num:%d, micb_ref: %d, pullup_ref: %d\n",
                "wcd938x_micbias_control",param_2,*(iVar6 + 0x38),*(iVar6 + 0x48));
    uVar4 = 0;
code_r0x08019480:
    mutex_unlock(iVar11 + 0x68);
    return uVar4;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08018888 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.wcd938x_probe.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt);
    return;
}


// ===== sym.wcd938x_mbhc_hph_pa_on_status.228a7220f248aaede76982248f6c4394.cfi_jt @ 0x08018890 (size 8) =====

bool sym.wcd938x_mbhc_hph_pa_on_status.228a7220f248aaede76982248f6c4394.cfi_jt(ulong param_1)

{
    uint64_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = snd_soc_component_read(param_1,0x3009);
    return (uVar1 & 0xc0) != 0;
}


// ===== sym.wcd938x_soc_codec_remove.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt @ 0x08018898 (size 8) =====

void sym.wcd938x_soc_codec_remove.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    code *pcVar1;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(param_1 + 0x18) + 0x98);
    if (iVar2 == 0) {
        _dev_err(*(param_1 + 0x18),"%s: wcd938x is already NULL\n","wcd938x_soc_codec_remove");
    }
    else {
        pcVar1 = *(iVar2 + 0xc40);
        if (pcVar1 != NULL) {
            __cfi_slowpath_diag(0x3b795baa068bc3a6,pcVar1,0x8001af0);
            (*pcVar1)(*(iVar2 + 0xc30),iVar2 + 0xc18,0);
        }
    }
    return;
}


// ===== sym.wcd938x_mbhc_deinit.cfi_jt @ 0x080188a0 (size 8) =====

void sym.wcd938x_mbhc_deinit.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        uVar1 = 0x800464a;
    }
    else {
        iVar2 = *(*(param_1 + 0x18) + 0x98);
        if (iVar2 != 0) {
            iVar2 = *(iVar2 + 0x100);
            if (iVar2 == 0) {
                return;
            }
            wcd_mbhc_deinit(iVar2);
            devm_kfree(*(param_1 + 0x18),iVar2);
            return;
        }
        uVar1 = 0x8002b6c;
    }
    _printk(uVar1,"wcd938x_mbhc_deinit");
    return;
}


// ===== sym.wcd938x_mbhc_hs_detect_exit.cfi_jt @ 0x080188a8 (size 8) =====

void sym.wcd938x_mbhc_hs_detect_exit.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        iVar1 = ___ratelimit(obj.wcd938x_mbhc_hs_detect_exit._rs,"wcd938x_mbhc_hs_detect_exit");
        if (iVar1 == 0) {
            return;
        }
        uVar2 = 0x800464a;
    }
    else {
        iVar3 = *(*(param_1 + 0x18) + 0x98);
        if (iVar3 != 0) {
            if (*(iVar3 + 0x100) != 0) {
                wcd_mbhc_stop();
                return;
            }
            iVar1 = ___ratelimit(obj.wcd938x_mbhc_hs_detect_exit._rs.9,"wcd938x_mbhc_hs_detect_exit");
            if (iVar1 == 0) {
                return;
            }
            _dev_err(*(param_1 + 0x18),"%s: mbhc not initialized!\n","wcd938x_mbhc_hs_detect_exit");
            return;
        }
        iVar1 = ___ratelimit(obj.wcd938x_mbhc_hs_detect_exit._rs.8,"wcd938x_mbhc_hs_detect_exit");
        if (iVar1 == 0) {
            return;
        }
        uVar2 = 0x8002b6c;
    }
    _printk(uVar2,"wcd938x_mbhc_hs_detect_exit");
    return;
}


// ===== sym.wcd938x_mbhc_get_moisture_status.228a7220f248aaede76982248f6c4394.cfi_jt @ 0x080188b0 (size 8) =====

bool sym.wcd938x_mbhc_get_moisture_status.228a7220f248aaede76982248f6c4394.cfi_jt(int64_t param_1)

{
    uint64_t uVar1;
    ulong *in_x18;
    ulong uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *(param_1 + 0xf8);
    if (((*(param_1 + 0xe0) == 0) || (*(*(param_1 + 0x90) + 0x58) != 0)) || (*(param_1 + 0xc3) == '\0')) {
        snd_soc_component_update_bits(uVar2,0x3121,0xc,0);
    }
    else {
        uVar1 = snd_soc_component_read(uVar2,0x3121);
        if ((uVar1 & 0xc) == 0) {
            snd_soc_component_update_bits(*(param_1 + 0xf8),0x3121,0xc,*(param_1 + 0xe0) << 2);
            uVar1 = snd_soc_component_read(uVar2,0x3125);
            return (uVar1 & 0x20) == 0;
        }
    }
    return false;
}


// ===== sym.snd_soc_info_enum_double.cfi_jt @ 0x080188b8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_info_enum_double.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.snd_soc_info_volsw.cfi_jt @ 0x080188c0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_info_volsw.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.wcd938x_remove.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt @ 0x080188c8 (size 8) =====

ulong sym.wcd938x_remove.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    component_master_del(param_1 + 0x10,reloc.wcd938x_bind.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt);
    *(param_1 + 0xa8) = 0;
    return 0;
}


// ===== sym.wcd938x_probe.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt @ 0x080188d0 (size 8) =====

uint32_t sym.wcd938x_probe.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt(int64_t param_1)

{
    uint uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t *piVar5;
    int64_t *piVar6;
    uint *puVar7;
    int64_t iVar8;
    char *pcVar9;
    char *pcVar10;
    int64_t *piVar11;
    int64_t iVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar13;
    int64_t iVar14;
    ulong unaff_x30;
    ulong uStack_58;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iVar8 = param_1 + 0x10;
    iStack_48 = *(iVar12 + 0x5e0);
    uStack_58 = 0;
    piVar5 = devm_kmalloc(iVar8,0xcd0,0xdc0);
    if (piVar5 == NULL) {
        uVar2 = 0xfffffff4;
        goto code_r0x0801a620;
    }
    *(param_1 + 0xa8) = piVar5;
    *piVar5 = iVar8;
    piVar6 = sym.wcd938x_populate_dt_data(iVar8);
    if (piVar6 == NULL) {
        pcVar9 = "%s: Fail to obtain platform data\n";
        goto code_r0x0801a55c;
    }
    *(param_1 + 0xa0) = piVar6;
    piVar5[3] = *piVar6;
    uVar2 = msm_cdc_init_supplies(iVar8,piVar5 + 0x182,piVar6[7],piVar6[8]);
    if (piVar5[0x182] == 0) {
        pcVar9 = "%s: Cannot init wcd supplies\n";
code_r0x0801a580:
        _dev_err(iVar8,pcVar9,"wcd938x_probe");
        goto code_r0x0801a620;
    }
    piVar11 = *(*(param_1 + 0x70) + 0x90);
    if (piVar11 == NULL) {
        pcVar9 = "%s: platform data from parent is NULL\n";
    }
    else {
        iVar12 = *piVar11;
        piVar5[0x186] = iVar12;
        if (iVar12 == 0) {
            pcVar9 = "%s: handle is NULL\n";
        }
        else {
            iVar12 = piVar11[1];
            piVar5[0x187] = iVar12;
            if (iVar12 == 0) {
                pcVar9 = "%s: update_wcd_event api is null!\n";
            }
            else {
                iVar12 = piVar11[2];
                piVar5[0x188] = iVar12;
                if (iVar12 != 0) {
                    uVar2 = msm_cdc_enable_static_supplies(iVar8,piVar5[0x182],piVar6[7],piVar6[8]);
                    if (uVar2 != 0) {
                        pcVar9 = "%s: wcd static supply enable failed!\n";
                        goto code_r0x0801a580;
                    }
                    uVar3 = sym.wcd938x_parse_port_mapping(iVar8,0x8002bf3,1);
                    uVar2 = sym.wcd938x_parse_port_mapping(iVar8,0x8002c06,0);
                    uVar2 = uVar2 | uVar3;
                    if (uVar2 == 0) {
                        iVar14 = *(param_1 + 0xa8);
                        uStack_4c = 0;
                        iVar12 = of_find_property(*(param_1 + 0x300),"qcom,swr-tx-port-params",&uStack_4c);
                        if (iVar12 == 0) {
                            pcVar9 = "missing port mapping prop %s\n";
                            pcVar10 = "qcom,swr-tx-port-params";
code_r0x0801a5c4:
                            _dev_err(iVar8,pcVar9,pcVar10);
                            uVar2 = 0xffffffea;
                        }
                        else {
                            if ((uStack_4c & 0xffffffe0) != 0x80) {
                                pcVar9 = "%s: port params not provided for all usecases\n";
                                pcVar10 = "wcd938x_parse_port_params";
                                goto code_r0x0801a5c4;
                            }
                            puVar7 = __kmalloc(uStack_4c,0xdc0);
                            if (puVar7 == NULL) {
                                uVar2 = 0xfffffff4;
                            }
                            else {
                                uVar2 = of_property_read_variable_u32_array
                                                  (*(param_1 + 0x300),"qcom,swr-tx-port-params",puVar7,0x20,0);
                                if (-1 < uVar2) {
                                    *(iVar14 + 0xb6c) = *puVar7;
                                    *(iVar14 + 0xb70) = puVar7[1];
                                    *(iVar14 + 0xb74) = puVar7[2];
                                    *(iVar14 + 0xb78) = puVar7[3];
                                    *(iVar14 + 0xb7c) = puVar7[4];
                                    *(iVar14 + 0xb80) = puVar7[5];
                                    *(iVar14 + 0xb84) = puVar7[6];
                                    uVar1 = puVar7[7];
                                    *(iVar14 + 0xbf0) = iVar14 + 0xb6c;
                                    *(iVar14 + 0xb88) = uVar1;
                                    *(iVar14 + 0xb8c) = puVar7[8];
                                    *(iVar14 + 0xb90) = puVar7[9];
                                    *(iVar14 + 0xb94) = puVar7[10];
                                    *(iVar14 + 0xb98) = puVar7[0xb];
                                    *(iVar14 + 0xb9c) = puVar7[0xc];
                                    *(iVar14 + 0xba0) = puVar7[0xd];
                                    *(iVar14 + 0xba4) = puVar7[0xe];
                                    uVar1 = puVar7[0xf];
                                    *(iVar14 + 0xbf8) = iVar14 + 0xb8c;
                                    *(iVar14 + 0xba8) = uVar1;
                                    *(iVar14 + 0xbac) = puVar7[0x10];
                                    *(iVar14 + 0xbb0) = puVar7[0x11];
                                    *(iVar14 + 0xbb4) = puVar7[0x12];
                                    *(iVar14 + 3000) = puVar7[0x13];
                                    *(iVar14 + 0xbbc) = puVar7[0x14];
                                    *(iVar14 + 0xbc0) = puVar7[0x15];
                                    *(iVar14 + 0xbc4) = puVar7[0x16];
                                    uVar1 = puVar7[0x17];
                                    *(iVar14 + 0xc00) = iVar14 + 0xbac;
                                    *(iVar14 + 0xbc8) = uVar1;
                                    *(iVar14 + 0xbcc) = puVar7[0x18];
                                    *(iVar14 + 0xbd0) = puVar7[0x19];
                                    *(iVar14 + 0xbd4) = puVar7[0x1a];
                                    *(iVar14 + 0xbd8) = puVar7[0x1b];
                                    *(iVar14 + 0xbdc) = puVar7[0x1c];
                                    *(iVar14 + 0xbe0) = puVar7[0x1d];
                                    *(iVar14 + 0xbe4) = puVar7[0x1e];
                                    uVar1 = puVar7[0x1f];
                                    *(iVar14 + 0xc08) = iVar14 + 0xbcc;
                                    *(iVar14 + 0xbe8) = uVar1;
                                    kfree(puVar7);
                                    __mutex_init(piVar5 + 0x13,"&wcd938x->wakeup_lock",obj.wcd938x_soc_get_mbhc._rs);
                                    __mutex_init(piVar5 + 0xd,"&wcd938x->micb_lock",obj.wcd938x_soc_get_mbhc._rs);
                                    uVar13 = *(param_1 + 0x300);
                                    iVar12 = of_parse_phandle(uVar13,"qcom,rx-slave",0);
                                    if (iVar12 == 0) {
                                        iVar4 = ___ratelimit(obj.wcd938x_add_slave_components._rs,
                                                             "wcd938x_add_slave_components");
                                        if (iVar4 != 0) {
                                            pcVar9 = "%s: Rx-slave node not defined\n";
code_r0x0801a660:
                                            _dev_err(iVar8,pcVar9,"wcd938x_add_slave_components");
                                            uVar2 = 0xffffffed;
                                            goto code_r0x0801a620;
                                        }
                                    }
                                    else {
                                        component_match_add_release
                                                  (iVar8,&uStack_58,
                                                   sym.wcd938x_release_of.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt,
                                                   sym.wcd938x_compare_of.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt,
                                                   iVar12);
                                        iVar12 = of_parse_phandle(uVar13,"qcom,tx-slave",0);
                                        if (iVar12 != 0) {
                                            component_match_add_release
                                                      (iVar8,&uStack_58,
                                                       sym.wcd938x_release_of.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt,
                                                       sym.wcd938x_compare_of.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt,
                                                       iVar12);
                                            sym.wcd938x_reset(iVar8);
                                            piVar5[0x189] = sym.__typeid__ZTSFiPvbE_global_addr;
                                            uVar2 = component_master_add_with_match
                                                              (iVar8,
                                                            reloc.wcd938x_bind.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt,
                                                            uStack_58);
                                            goto code_r0x0801a620;
                                        }
                                        iVar4 = ___ratelimit(obj.wcd938x_add_slave_components._rs.91,
                                                             "wcd938x_add_slave_components");
                                        if (iVar4 != 0) {
                                            pcVar9 = "%s: Tx-slave node not defined\n";
                                            goto code_r0x0801a660;
                                        }
                                    }
                                    uVar2 = 0xffffffed;
                                    goto code_r0x0801a620;
                                }
                                _dev_err(iVar8,"%s: Failed to read  port mapping from prop %s\n",
                                         "wcd938x_parse_port_params","qcom,swr-tx-port-params");
                                kfree(puVar7);
                            }
                        }
                        pcVar9 = "Failed to read port params\n";
                    }
                    else {
                        pcVar9 = "Failed to read port mapping\n";
                    }
                    _dev_err(iVar8,pcVar9);
                    goto code_r0x0801a620;
                }
                pcVar9 = "%s: register_notifier api is null!\n";
            }
        }
    }
code_r0x0801a55c:
    _dev_err(iVar8,pcVar9,"wcd938x_probe");
    uVar2 = 0xffffffea;
code_r0x0801a620:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_48) {
        return uVar2;
    }
    iVar8 = __stack_chk_fail();
    *extraout_x18 = sym.wcd938x_remove;
    component_master_del(iVar8 + 0x10,reloc.wcd938x_bind.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt);
    *(iVar8 + 0xa8) = 0;
    return 0;
}


// ===== sym.wcd938x_unbind.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt @ 0x080188d8 (size 8) =====

void sym.wcd938x_unbind.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x98);
    iVar1 = iVar2 + 0x130;
    wcd_free_irq(iVar1,0xe,0);
    wcd_free_irq(iVar1,0xd,0);
    wcd_free_irq(iVar1,0xf,0);
    wcd_irq_exit(iVar1,*(iVar2 + 0x128));
    snd_soc_unregister_component(param_1);
    component_unbind_all(param_1,iVar2);
    return;
}


// ===== sym.wcd938x_mbhc_ssr_down.cfi_jt @ 0x080188e0 (size 8) =====

void sym.wcd938x_mbhc_ssr_down.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    if ((param_1 != 0) && (param_2 != 0)) {
        *in_x18 = unaff_x30;
        sym.wcd938x_mbhc_hs_detect_exit(param_2);
        wcd_mbhc_deinit(param_1);
    }
    return;
}


// ===== sym.wcd938x_event_notify.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt @ 0x080188e8 (size 8) =====

ulong sym.wcd938x_event_notify.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt(ulong param_1,uint64_t param_2,int64_t param_3)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    uint32_t uVar5;
    char *pcVar6;
    uchar uVar7;
    ulong *in_x18;
    int64_t iVar8;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(param_3 + 0x98);
    iVar8 = piVar9[2];
    switch(param_2 & 0xffff) {
    case 1:
        puVar1 = piVar9 + 0x2c;
        if ((piVar9[0x2c] & 1U) == 0) {
            if ((*puVar1 >> 1 & 1) != 0) goto code_r0x0801f9c8;
code_r0x0801f7dc:
            if ((*puVar1 >> 2 & 1) != 0) goto code_r0x0801fa04;
code_r0x0801f7e4:
            uVar5 = *puVar1;
        }
        else {
            snd_soc_component_update_bits(iVar8,0x300f,0x40,0);
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                    *puVar1 = *puVar1 | 0x200;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                    *puVar1 = *puVar1 & 0xfffffffffffffffe;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            if ((*puVar1 >> 1 & 1) == 0) goto code_r0x0801f7dc;
code_r0x0801f9c8:
            snd_soc_component_update_bits(iVar8,0x300f,0x20,0);
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                    *puVar1 = *puVar1 | 0x400;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                    *puVar1 = *puVar1 & 0xfffffffffffffffd;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            if ((*puVar1 >> 2 & 1) == 0) goto code_r0x0801f7e4;
code_r0x0801fa04:
            snd_soc_component_update_bits(iVar8,0x3011,0x40,0);
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                    *puVar1 = *puVar1 | 0x800;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                    *puVar1 = *puVar1 & 0xfffffffffffffffb;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            uVar5 = *puVar1;
        }
        if ((uVar5 >> 3 & 1) != 0) {
            snd_soc_component_update_bits(iVar8,0x3011,0x20,0);
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                    *puVar1 = *puVar1 | 0x1000;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                    *puVar1 = *puVar1 & 0xfffffffffffffff7;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
        }
        break;
    case 2:
        snd_soc_component_update_bits(iVar8,0x3009,0xc0,0);
        snd_soc_component_update_bits(iVar8,0x300a,0x80,0);
        snd_soc_component_update_bits(iVar8,0x3128,0x80,0);
        break;
    case 3:
        *(piVar9 + 399) = 0;
        if (*(piVar9 + 0xc87) != '\0') {
            blocking_notifier_call_chain(piVar9 + 0x191,0,0);
        }
        *(piVar9[0x20] + 0x3d0) = 1;
        if ((*(*(piVar9[0x20] + 0x90) + 0x58) == 0) ||
           (uVar5 = snd_soc_component_read(iVar8,0x3014), (uVar5 >> 5 & 1) != 0)) {
            uVar7 = 0;
        }
        else {
            uVar7 = 1;
        }
        *(piVar9 + 0xc86) = uVar7;
        sym.wcd938x_mbhc_ssr_down(piVar9[0x20],iVar8);
        iVar8 = *piVar9;
        if ((iVar8 != 0) && (*(iVar8 + 0x98) != 0)) {
            if (*(*(iVar8 + 0x98) + 0x18) == 0) {
                iVar4 = ___ratelimit(obj.wcd938x_reset_low._rs,"wcd938x_reset_low");
                if (iVar4 == 0) {
                    return 0;
                }
                pcVar6 = "%s: reset gpio device node not specified\n";
            }
            else {
                iVar4 = msm_cdc_pinctrl_select_sleep_state();
                if (iVar4 == 0) {
                    usleep_range_state(0x14,0x1e,2);
                    return 0;
                }
                iVar4 = ___ratelimit(obj.wcd938x_reset_low._rs.854,"wcd938x_reset_low");
                if (iVar4 == 0) {
                    return 0;
                }
                pcVar6 = "%s: wcd sleep state request fail!\n";
            }
            _dev_err(iVar8,pcVar6,"wcd938x_reset_low");
        }
        break;
    case 4:
        sym.wcd938x_reset(*piVar9);
        usleep_range_state(10000,0x271a,2);
        sym.wcd938x_get_logical_addr(piVar9[6]);
        sym.wcd938x_get_logical_addr(piVar9[5]);
        sym.wcd938x_init_reg(iVar8);
        regcache_mark_dirty(piVar9[4]);
        regcache_sync(piVar9[4]);
        iVar4 = sym.wcd938x_mbhc_post_ssr_init(piVar9[0x20],iVar8);
        if (iVar4 == 0) {
            sym.wcd938x_mbhc_hs_detect(iVar8);
        }
        else {
            iVar4 = ___ratelimit(obj.wcd938x_event_notify._rs,"wcd938x_event_notify");
            if (iVar4 != 0) {
                _dev_err(*(iVar8 + 0x18),"%s: mbhc initialization failed\n","wcd938x_event_notify");
            }
        }
        *(piVar9[0x20] + 0x3d0) = 0;
        *(piVar9 + 399) = 1;
        if (*(piVar9 + 0xc87) != '\0') {
            blocking_notifier_call_chain(piVar9 + 0x191,1,0);
        }
        if (*(piVar9 + 0xc86) != '\0') {
            iVar8 = -500;
            do {
                __const_udelay(0x418958);
                bVar3 = iVar8 != -1;
                iVar8 = iVar8 + 1;
            } while (bVar3);
        }
        break;
    default:
        _dev_printk(0x800991b,*(iVar8 + 0x18),"%s: invalid event %d\n","wcd938x_event_notify",param_2 & 0xffff);
        break;
    case 7:
        snd_soc_component_update_bits(iVar8,0x3407,6,param_2 >> 0xf & 0xfffffffe);
    }
    return 0;
}


// ===== sym.wcd938x_mbhc_register_notifier.228a7220f248aaede76982248f6c4394.cfi_jt @ 0x080188f0 (size 8) =====

void sym.wcd938x_mbhc_register_notifier.228a7220f248aaede76982248f6c4394.cfi_jt
               (int64_t param_1,ulong param_2,uint32_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_3 & 1) == 0) {
        blocking_notifier_chain_unregister(param_1 + 0x420);
    }
    else {
        blocking_notifier_chain_register();
    }
    return;
}


// ===== sym.__typeid__ZTSFiPvbE_global_addr @ 0x080188f8 (size 8) =====

uint sym.__typeid__ZTSFiPvbE_global_addr(int64_t param_1,uint64_t param_2)

{
    uint uVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        iVar2 = ___ratelimit(obj.wcd938x_wakeup._rs,"wcd938x_wakeup");
        if (iVar2 != 0) {
            uVar3 = 0x80080d3;
            goto code_r0x080197a8;
        }
    }
    else {
        if (*(param_1 + 0x30) != 0) {
            mutex_lock(param_1 + 0x98);
            if ((param_2 & 1) == 0) {
                uVar1 = swr_device_wakeup_unvote(*(param_1 + 0x30));
            }
            else {
                uVar1 = swr_device_wakeup_vote();
            }
            mutex_unlock(param_1 + 0x98);
            return uVar1;
        }
        iVar2 = ___ratelimit(obj.wcd938x_wakeup._rs.49,"wcd938x_wakeup");
        if (iVar2 != 0) {
            uVar3 = 0x80094fe;
code_r0x080197a8:
            _printk(uVar3,"wcd938x_wakeup");
            return 0xffffffea;
        }
    }
    return 0xffffffea;
}


// ===== sym.init_module.cfi_jt @ 0x08018900 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.wcd938x_probe.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.wcd938x_wcd_mbhc_calc_impedance.228a7220f248aaede76982248f6c4394.cfi_jt @ 0x08018908 (size 8) =====

int64_t sym.wcd938x_wcd_mbhc_calc_impedance.228a7220f248aaede76982248f6c4394.cfi_jt
                  (int64_t param_1,uint32_t *param_2,uint32_t *param_3)

{
    int64_t iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int iVar4;
    code *pcVar5;
    int16_t iVar6;
    int16_t iVar7;
    int16_t iVar8;
    int16_t iVar9;
    int16_t iVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    int iVar13;
    uint64_t uVar14;
    ulong *arg2;
    uint uVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar16;
    ulong *arg2_00;
    int64_t iVar17;
    ulong unaff_x30;
    uchar auVar18 [16];
    uint32_t uStack_c4;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    uchar auStack_90 [8];
    ulong uStack_88;
    ulong uStack_80;
    uchar auStack_78 [8];
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar16 = sp_el0;
    iStack_68 = *(iVar16 + 0x5e0);
    uStack_c4 = 0;
    iVar16 = *(param_1 + 0xf8);
    uStack_88 = *0x8017a58;
    uStack_80 = *0x8017a60;
    auStack_78 = *0x8017a68;
    uStack_70 = *0x8017a70;
    uStack_98 = *0x8017a48;
    auStack_90 = *0x8017a50;
    iVar17 = *(*(iVar16 + 0x18) + 0x98);
    uStack_c0 = 0;
    uStack_b8 = *0x8017900;
    uStack_b0 = *0x8017908;
    uStack_a8 = *0x8017910;
    uStack_a0 = *0x8017918;
    uVar14 = mutex_is_locked(param_1 + 0x328);
    if (((uVar14 & 1) == 0) && ((obj.wcd938x_wcd_mbhc_calc_impedance.__already_done & 1) == 0)) {
        obj.wcd938x_wcd_mbhc_calc_impedance.__already_done = 0x1;
        __warn_printk("%s: BCL should have acquired\n","wcd938x_wcd_mbhc_calc_impedance");
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x802542c);
        (*pcVar5)();
    }
    iVar6 = snd_soc_component_read(iVar16,0x301f);
    iVar7 = snd_soc_component_read(iVar16,0x3020);
    iVar8 = snd_soc_component_read(iVar16,0x3021);
    iVar9 = snd_soc_component_read(iVar16,0x3056);
    iVar10 = snd_soc_component_read(iVar16,0x3123);
    uVar11 = snd_soc_component_read(iVar16,0x3015);
    if ((uVar11 >> 7 & 1) != 0) {
        regmap_update_bits_base(*(iVar17 + 0x20),0x3015,0x80,0,0,0,0);
    }
    if (*(param_1 + 0xc3) != '\0') {
        regmap_update_bits_base(*(iVar17 + 0x20),0x3014,0x80,0,0,0,0);
    }
    regmap_update_bits_base(*(iVar17 + 0x20),0x3014,1,0,0,0,0);
    regmap_update_bits_base(*(iVar17 + 0x20),0x30e2,0xc0,0,0,0,0);
    usleep_range_state(1000,0x3f2,2);
    arg2 = auStack_90 + 4;
    sym.wcd938x_mbhc_zdet_ramp(iVar16,arg2,&uStack_c0 + 4,0);
    arg2_00 = arg2;
    if (uStack_c0._4_4_ - 0x61a81U < 0xfffa627f) {
        iVar1 = 2;
        if (0xc34 < uStack_c0._4_4_ - 0x61a81U >> 8) {
            iVar1 = 3;
        }
        iVar2 = 0;
        if (31999 < uStack_c0._4_4_) {
            iVar2 = iVar1;
        }
        arg2_00 = &uStack_98 + iVar2 * 0xc;
        sym.wcd938x_mbhc_zdet_ramp(iVar16,arg2_00,&uStack_c0 + 4,0);
        if (uStack_c0._4_4_ < 0x5f5e101) goto code_r0x08024f58;
        uVar12 = 0xffffffe;
        arg2_00 = arg2;
code_r0x08024fd0:
        *param_2 = uVar12;
    }
    else {
code_r0x08024f58:
        uVar15 = 0x34c7;
        if (399999 < uStack_c0._4_4_) {
            uVar15 = 0x34c8;
        }
        *param_2 = uStack_c0._4_4_ / 1000;
        uVar12 = snd_soc_component_read(iVar16,uVar15);
        if ((uVar12 >> 7 & 1) != 0) {
            iVar13 = (uVar12 & 0x7f) * -0x19;
code_r0x08024fbc:
            uVar12 = 0;
            if (iVar13 + 10000 != 0) {
                uVar12 = (*param_2 * 10000) / (iVar13 + 10000);
            }
            goto code_r0x08024fd0;
        }
        iVar13 = uVar12 * 0x19;
        if (-10000 < iVar13) goto code_r0x08024fbc;
    }
    sym.wcd938x_mbhc_zdet_ramp(iVar16,arg2_00,0,&uStack_c0);
    iVar13 = uStack_c0;
    if (uStack_c0 - 0x61a81U < 0xfffa627f) {
        if (((uStack_c0 < 0x124f81) || (*(arg2_00 + 2) != 6)) && (*param_2 == 0xffffffe)) {
            if (uStack_c0 < 32000) {
                arg2_00 = &uStack_98;
            }
            else if (uStack_c0 - 0x61a81U >> 8 < 0xc35) {
                arg2_00 = &uStack_80;
            }
            else if (1200000 < uStack_c0) {
                arg2_00 = auStack_78 + 4;
            }
            sym.wcd938x_mbhc_zdet_ramp(iVar16,arg2_00,0,&uStack_c0);
        }
        iVar13 = uStack_c0;
        if (uStack_c0 < 0x5f5e101) goto code_r0x080250cc;
        uVar12 = 0xffffffe;
code_r0x08025140:
        *param_3 = uVar12;
    }
    else {
code_r0x080250cc:
        uVar15 = 0x34c9;
        if (399999 < iVar13) {
            uVar15 = 0x34ca;
        }
        *param_3 = iVar13 / 1000;
        uVar12 = snd_soc_component_read(iVar16,uVar15);
        if ((uVar12 >> 7 & 1) != 0) {
            iVar13 = (uVar12 & 0x7f) * -0x19;
code_r0x0802512c:
            uVar12 = 0;
            if (iVar13 + 10000 != 0) {
                uVar12 = (*param_3 * 10000) / (iVar13 + 10000);
            }
            goto code_r0x08025140;
        }
        iVar13 = uVar12 * 0x19;
        if (-10000 < iVar13) goto code_r0x0802512c;
        uVar12 = *param_3;
    }
    uVar3 = *param_2;
    if (uVar3 == 0xffffffe) {
        if (uVar12 == 0xffffffe) goto code_r0x08025190;
    }
    else if (((uVar12 != 0xffffffe) && ((1 < uVar3 || (uVar12 < 3)))) && ((uVar3 < 3 || (1 < uVar12)))) {
        snd_soc_component_update_bits(iVar16,0x30d8,2,2);
        snd_soc_component_update_bits(iVar16,0x30d2,0x40,1);
        if (*param_2 < 0x20) {
            arg2 = &uStack_98;
        }
        sym.wcd938x_mbhc_zdet_ramp(iVar16,arg2,&uStack_c4,0);
        snd_soc_component_update_bits(iVar16,0x30d2,0x40,0);
        snd_soc_component_update_bits(iVar16,0x30d8,2,0);
        uVar15 = 0x34c7;
        if (399999 < uStack_c4) {
            uVar15 = 0x34c8;
        }
        uStack_c4 = uStack_c4 / 1000;
        uVar12 = snd_soc_component_read(iVar16,uVar15);
        if ((uVar12 >> 7 & 1) == 0) {
            iVar13 = uVar12 * 0x19;
            if (-10000 < iVar13) goto code_r0x08025388;
        }
        else {
            iVar13 = (uVar12 & 0x7f) * -0x19;
code_r0x08025388:
            iVar4 = uStack_c4 * 10000;
            uStack_c4 = 0;
            if (iVar13 + 10000 != 0) {
                uStack_c4 = iVar4 / (iVar13 + 10000);
            }
        }
        uVar12 = *param_2;
        uVar3 = 0;
        if (uVar12 + 9 != 0) {
            uVar3 = (uVar12 * 9) / (uVar12 + 9);
        }
        iVar13 = uStack_c4 - uVar3;
        if (uStack_c4 - uVar3 == 0 || uStack_c4 < uVar3) {
            iVar13 = uVar3 - uStack_c4;
        }
        iVar4 = uVar12 - uStack_c4;
        if (uVar12 < uStack_c4 || uVar12 - uStack_c4 == 0) {
            iVar4 = uStack_c4 - uVar12;
        }
        uVar15 = 1;
        if (iVar4 * (uVar3 + uStack_c4) < iVar13 * (uVar12 + uStack_c4)) {
            uVar15 = 2;
        }
        *(param_1 + 0x1c4) = uVar15;
        regmap_update_bits_base(*(iVar17 + 0x20),0x30e2,0xc0,0xc0,0,0,0);
        goto code_r0x08025190;
    }
    *(param_1 + 0x1c4) = 1;
code_r0x08025190:
    snd_soc_component_write(iVar16,0x301f,iVar6);
    snd_soc_component_write(iVar16,0x3020,iVar7);
    snd_soc_component_write(iVar16,0x3021,iVar8);
    regmap_update_bits_base(*(iVar17 + 0x20),0x3014,1,1,0,0,0);
    if (*(param_1 + 0xc3) != '\0') {
        regmap_update_bits_base(*(iVar17 + 0x20),0x3014,0x80,0x80,0,0,0);
    }
    snd_soc_component_write(iVar16,0x3123,iVar10);
    iVar16 = snd_soc_component_write(iVar16,0x3056,iVar9);
    if ((uVar11 >> 7 & 1) != 0) {
        iVar16 = regmap_update_bits_base(*(iVar17 + 0x20),0x3015,0x80,0x80,0,0,0);
    }
    iVar17 = sp_el0;
    if (*(iVar17 + 0x5e0) != iStack_68) {
        auVar18 = __stack_chk_fail();
        *extraout_x18 = sym.wcd938x_get_hwdep_fw_cal;
        iVar16 = *(auVar18._0_8_ + 0xf8);
        if (iVar16 == 0) {
            iVar13 = ___ratelimit(obj.wcd938x_get_hwdep_fw_cal._rs,"wcd938x_get_hwdep_fw_cal");
            if (iVar13 != 0) {
                _printk(0x80064db,"wcd938x_get_hwdep_fw_cal");
            }
        }
        else {
            iVar17 = wcdcal_get_fw_cal(*(auVar18._0_8_ + 0x468));
            if (iVar17 != 0) {
                return iVar17;
            }
            iVar13 = ___ratelimit(obj.wcd938x_get_hwdep_fw_cal._rs.17,"wcd938x_get_hwdep_fw_cal");
            if (iVar13 != 0) {
                _dev_err(*(iVar16 + 0x18),"%s: cal not sent by %d\n","wcd938x_get_hwdep_fw_cal",
                         auVar18._8_8_ & 0xffffffff);
            }
        }
        return 0;
    }
    return iVar16;
}


// ===== sym.wcd938x_resume.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt @ 0x08018910 (size 8) =====

ulong sym.wcd938x_resume.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt(int64_t param_1)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    ulong uVar5;
    int64_t *piVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        uVar5 = 0xffffffed;
    }
    else {
        piVar6 = *(param_1 + 0x98);
        if (piVar6 != NULL) {
            iVar7 = *(*piVar6 + 0x90);
            if (iVar7 != 0) {
                if ((piVar6[0x2c] >> 8 & 1) != 0) {
                    puVar1 = piVar6 + 0x2c;
                    msm_cdc_set_supplies_lpm_mode(*piVar6,piVar6[0x182],*(iVar7 + 0x38),*(iVar7 + 0x40),0);
                    Hint_Prefetch(puVar1,2,0,1);
                    do {
                        cVar2 = '\x01';
                        bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar3) {
                            *puVar1 = *puVar1 & 0xfffffffffffffeff;
                            cVar2 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar2 != '\0');
                }
                return 0;
            }
            iVar4 = ___ratelimit(obj.wcd938x_resume._rs,"wcd938x_resume");
            if (iVar4 != 0) {
                _dev_err(param_1,"%s: pdata is NULL\n","wcd938x_resume");
            }
        }
        uVar5 = 0xffffffea;
    }
    return uVar5;
}


// ===== sym.wcd938x_bind.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt @ 0x08018918 (size 8) =====

int sym.wcd938x_bind.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt(int64_t param_1)

{
    ulong *puVar1;
    int64_t iVar2;
    ulong *puVar3;
    int iVar4;
    int iVar5;
    int64_t iVar6;
    char *pcVar7;
    ulong *in_x18;
    uint32_t uVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x90);
    puVar3 = *(param_1 + 0x98);
    usleep_range_state(5000,0x1392,2);
    iVar4 = component_bind_all(param_1,puVar3);
    if (iVar4 != 0) {
        iVar5 = ___ratelimit(obj.wcd938x_bind._rs,"wcd938x_bind");
        if (iVar5 == 0) {
            return iVar4;
        }
        _dev_err(param_1,"%s: Slave bind failed, ret = %d\n","wcd938x_bind",iVar4);
        return iVar4;
    }
    iVar6 = get_matching_swr_slave_device(*(iVar2 + 8));
    puVar3[5] = iVar6;
    if (iVar6 == 0) {
        iVar4 = ___ratelimit(obj.wcd938x_bind._rs.99,"wcd938x_bind");
        if (iVar4 != 0) {
            pcVar7 = "%s: Could not find RX swr slave device\n";
code_r0x0801aef0:
            _dev_err(param_1,pcVar7,"wcd938x_bind");
            iVar4 = -0x13;
            goto code_r0x0801ac04;
        }
    }
    else {
        iVar6 = get_matching_swr_slave_device(*(iVar2 + 0x10));
        puVar3[6] = iVar6;
        if (iVar6 != 0) {
            swr_init_port_params(iVar6,4,puVar3 + 0x17e);
            iVar6 = __devm_regmap_init_swr(puVar3[6],obj.wcd938x_regmap_config,0,0);
            puVar3[4] = iVar6;
            if (iVar6 == 0) {
                iVar4 = ___ratelimit(obj.wcd938x_bind._rs.103,"wcd938x_bind");
                if (iVar4 == 0) {
                    iVar4 = 0;
                }
                else {
                    _dev_err(param_1,"%s: Regmap init failed\n","wcd938x_bind");
                    iVar4 = 0;
                }
                goto code_r0x0801ac04;
            }
            if ((0 < _segment.ehdr) && (regmap_write(iVar6,0x3474,0), 1 < _segment.ehdr)) {
                iVar4 = 0;
                do {
                    regmap_write(puVar3[4],iVar4 + 0x3475,0);
                    iVar5 = iVar4 + 2;
                    iVar4 = iVar4 + 1;
                } while (iVar5 < _segment.ehdr);
            }
            puVar1 = puVar3 + 0x26;
            *0x8000f60 = puVar3;
            puVar3[0x26] = obj.wcd938x_regmap_irq_chip;
            puVar3[0x27] = "WCD938X";
            puVar3[0x2a] = param_1;
            puVar3[0x28] = puVar3[4];
            iVar4 = wcd_irq_init(puVar1,puVar3 + 0x25);
            if (iVar4 != 0) {
                iVar5 = ___ratelimit(obj.wcd938x_bind._rs.106,"wcd938x_bind");
                if (iVar5 != 0) {
                    _dev_err(*puVar3,"%s: IRQ init failed: %d\n","wcd938x_bind",iVar4);
                }
                goto code_r0x0801ac04;
            }
            *(puVar3[6] + 1000) = puVar3[0x25];
            if (iVar2 == 0) {
                _dev_err(*puVar3,"%s: NULL pdata\n","wcd938x_set_micbias_data");
                iVar4 = -0x13;
code_r0x0801af44:
                iVar5 = ___ratelimit(obj.wcd938x_bind._rs.108,"wcd938x_bind");
                if (iVar5 != 0) {
                    pcVar7 = "%s: bad micbias pdata\n";
code_r0x0801af74:
                    _dev_err(param_1,pcVar7,"wcd938x_bind");
                }
            }
            else {
                if (*(iVar2 + 0x20) - 0xb23U < 0xfffff8c5) {
                    iVar4 = ___ratelimit(obj.wcd938x_get_micb_vout_ctl_val._rs,"wcd938x_get_micb_vout_ctl_val");
                    if (iVar4 == 0) {
                        uVar8 = 0xffffffea;
                    }
                    else {
                        _printk(0x8009009,"wcd938x_get_micb_vout_ctl_val");
                        uVar8 = 0xffffffea;
                    }
                }
                else {
                    uVar8 = (*(iVar2 + 0x20) - 1000U >> 1 & 0x7fff) / 0x19;
                }
                if (*(iVar2 + 0x24) - 0xb23U < 0xfffff8c5) {
                    iVar4 = ___ratelimit(obj.wcd938x_get_micb_vout_ctl_val._rs,"wcd938x_get_micb_vout_ctl_val");
                    if (iVar4 == 0) {
                        uVar9 = 0xffffffea;
                    }
                    else {
                        _printk(0x8009009,"wcd938x_get_micb_vout_ctl_val");
                        uVar9 = 0xffffffea;
                    }
                }
                else {
                    uVar9 = (*(iVar2 + 0x24) - 1000U >> 1 & 0x7fff) / 0x19;
                }
                if (*(iVar2 + 0x28) - 0xb23U < 0xfffff8c5) {
                    iVar4 = ___ratelimit(obj.wcd938x_get_micb_vout_ctl_val._rs,"wcd938x_get_micb_vout_ctl_val");
                    if (iVar4 == 0) {
                        uVar10 = 0xffffffea;
                    }
                    else {
                        _printk(0x8009009,"wcd938x_get_micb_vout_ctl_val");
                        uVar10 = 0xffffffea;
                    }
                }
                else {
                    uVar10 = (*(iVar2 + 0x28) - 1000U >> 1 & 0x7fff) / 0x19;
                }
                if (0xfffff8c4 < *(iVar2 + 0x2c) - 0xb23U) {
                    uVar11 = (*(iVar2 + 0x2c) - 1000U >> 1 & 0x7fff) / 0x19;
                    iVar4 = -0x16;
                    if (-1 < uVar8) goto code_r0x0801ad88;
                    goto code_r0x0801af44;
                }
                iVar4 = ___ratelimit(obj.wcd938x_get_micb_vout_ctl_val._rs,"wcd938x_get_micb_vout_ctl_val");
                if (iVar4 != 0) {
                    _printk(0x8009009,"wcd938x_get_micb_vout_ctl_val");
                }
                uVar11 = 0xffffffea;
                iVar4 = -0x16;
                if (uVar8 < 0) goto code_r0x0801af44;
code_r0x0801ad88:
                iVar4 = -0x16;
                if (((uVar9 < 0) || (uVar10 < 0)) || (uVar11 < 0)) goto code_r0x0801af44;
                regmap_update_bits_base(puVar3[4],0x3022,0x3f,uVar8,0,0,0);
                regmap_update_bits_base(puVar3[4],0x3023,0x3f,uVar9,0,0,0);
                regmap_update_bits_base(puVar3[4],0x3025,0x3f,uVar10,0,0,0);
                regmap_update_bits_base(puVar3[4],0x3026,0x3f,uVar11,0,0,0);
                wcd_request_irq(puVar1,0xe,"HPHR PDM WD INT",
                                sym.wcd938x_wd_handle_irq.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt,0);
                wcd_request_irq(puVar1,0xd,"HPHL PDM WD INT",
                                sym.wcd938x_wd_handle_irq.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt,0);
                wcd_request_irq(puVar1,0xf,"AUX PDM WD INT",
                                sym.wcd938x_wd_handle_irq.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt,0);
                wcd_disable_irq(puVar1,0xe);
                wcd_disable_irq(puVar1,0xd);
                wcd_disable_irq(puVar1,0xf);
                iVar4 = snd_soc_register_component(param_1,obj.soc_codec_dev_wcd938x,obj.wcd938x_dai,1);
                if (iVar4 == 0) {
                    *(puVar3 + 399) = 1;
                    return 0;
                }
                iVar5 = ___ratelimit(obj.wcd938x_bind._rs.113,"wcd938x_bind");
                if (iVar5 != 0) {
                    pcVar7 = "%s: Codec registration failed\n";
                    goto code_r0x0801af74;
                }
            }
            wcd_irq_exit(puVar1,puVar3[0x25]);
            goto code_r0x0801ac04;
        }
        iVar4 = ___ratelimit(obj.wcd938x_bind._rs.101,"wcd938x_bind");
        if (iVar4 != 0) {
            pcVar7 = "%s: Could not find TX swr slave device\n";
            goto code_r0x0801aef0;
        }
    }
    iVar4 = -0x13;
code_r0x0801ac04:
    component_unbind_all(param_1,puVar3);
    return iVar4;
}


// ===== sym.wcd938x_suspend.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt @ 0x08018920 (size 8) =====

ulong sym.wcd938x_suspend.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt(int64_t param_1)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    ulong uVar5;
    ulong *in_x18;
    int64_t *piVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        return 0xffffffed;
    }
    piVar6 = *(param_1 + 0x98);
    if (piVar6 != NULL) {
        iVar7 = *(*piVar6 + 0x90);
        if (iVar7 == 0) {
            iVar4 = ___ratelimit(obj.wcd938x_suspend._rs,"wcd938x_suspend");
            if (iVar4 == 0) {
                return 0xffffffea;
            }
            _dev_err(param_1,"%s: pdata is NULL\n","wcd938x_suspend");
            return 0xffffffea;
        }
        puVar1 = piVar6 + 0x2c;
        if ((piVar6[0x2c] >> 4 & 1) == 0) {
            cVar2 = *(piVar6 + 0x124);
        }
        else {
            iVar4 = msm_cdc_disable_ondemand_supply
                              (*piVar6,piVar6[0x182],*(iVar7 + 0x38),*(iVar7 + 0x40),"cdc-vdd-buck");
            if (iVar4 == -0x16) {
                uVar5 = ___ratelimit(obj.wcd938x_suspend._rs.858,"wcd938x_suspend");
                if (uVar5 != 0) {
                    _dev_err(param_1,"%s: vdd buck is not disabled\n","wcd938x_suspend");
                    return 0;
                }
                return uVar5;
            }
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                    *puVar1 = *puVar1 & 0xffffffffffffffef;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            cVar2 = *(piVar6 + 0x124);
        }
        if ((cVar2 != '\0') || ((piVar6[2] != 0 && (*(piVar6[2] + 0xd0) == 0)))) {
            msm_cdc_set_supplies_lpm_mode(*piVar6,piVar6[0x182],*(iVar7 + 0x38),*(iVar7 + 0x40),1);
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                    *puVar1 = *puVar1 | 0x100;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
        }
        return 0;
    }
    return 0xffffffea;
}


// ===== sym.wcd938x_mbhc_moisture_polling_ctrl.228a7220f248aaede76982248f6c4394.cfi_jt @ 0x08018928 (size 8) =====

void sym.wcd938x_mbhc_moisture_polling_ctrl.228a7220f248aaede76982248f6c4394.cfi_jt(int64_t param_1,uint64_t param_2)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = 4;
    if ((param_2 & 1) == 0) {
        uVar1 = 0;
    }
    snd_soc_component_update_bits(*(param_1 + 0xf8),0x31b0,4,uVar1);
    return;
}


// ===== sym.wcd938x_mbhc_bcs_enable.228a7220f248aaede76982248f6c4394.cfi_jt @ 0x08018930 (size 8) =====

void sym.wcd938x_mbhc_bcs_enable.228a7220f248aaede76982248f6c4394.cfi_jt(int64_t param_1,uint32_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.wcd938x_disable_bcs_before_slow_insert(*(param_1 + 0xf8),~param_2 & 1);
    return;
}


// ===== sym.wcd938x_mbhc_moisture_detect_en.228a7220f248aaede76982248f6c4394.cfi_jt @ 0x08018938 (size 8) =====

void sym.wcd938x_mbhc_moisture_detect_en.228a7220f248aaede76982248f6c4394.cfi_jt(int64_t param_1,uint64_t param_2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_2 & 1) == 0) {
        iVar1 = 0;
    }
    else {
        iVar1 = *(param_1 + 0xe0) << 2;
    }
    snd_soc_component_update_bits(*(param_1 + 0xf8),0x3121,0xc,iVar1);
    return;
}


// ===== sym.wcd938x_mbhc_micb_ctrl_threshold_mic.228a7220f248aaede76982248f6c4394.cfi_jt @ 0x08018940 (size 8) =====

ulong sym.wcd938x_mbhc_micb_ctrl_threshold_mic.228a7220f248aaede76982248f6c4394.cfi_jt
                (int64_t param_1,int param_2,uint64_t param_3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 == 2) {
        uVar2 = *(*(*(param_1 + 0x18) + 0x90) + 0x24);
        if (uVar2 < 0xa8c) {
            uVar1 = 0xa8c;
            if ((param_3 & 1) == 0) {
                uVar1 = uVar2;
            }
            uVar3 = sym.wcd938x_mbhc_micb_adjust_voltage(param_1,uVar1,2);
        }
        else {
            uVar3 = 0;
        }
    }
    else {
        uVar3 = 0xffffffea;
    }
    return uVar3;
}


// ===== sym.wcd938x_get_micb_vout_ctl_val.cfi_jt @ 0x08018948 (size 8) =====

uint32_t sym.wcd938x_get_micb_vout_ctl_val.cfi_jt(int param_1)

{
    int iVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 - 0xb23U < 0xfffff8c5) {
        iVar1 = ___ratelimit(obj.wcd938x_get_micb_vout_ctl_val._rs,"wcd938x_get_micb_vout_ctl_val");
        if (iVar1 == 0) {
            uVar2 = 0xffffffea;
        }
        else {
            _printk(0x8009009,"wcd938x_get_micb_vout_ctl_val");
            uVar2 = 0xffffffea;
        }
    }
    else {
        uVar2 = (param_1 - 1000U >> 1 & 0x7fff) / 0x19;
    }
    return uVar2;
}


// ===== sym.wcd938x_mbhc_hph_l_pull_up_control.228a7220f248aaede76982248f6c4394.cfi_jt @ 0x08018950 (size 8) =====

void sym.wcd938x_mbhc_hph_l_pull_up_control.228a7220f248aaede76982248f6c4394.cfi_jt(ulong param_1,uint32_t param_2)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = 8;
    if (param_2 < 0x19) {
        uVar1 = param_2;
    }
    snd_soc_component_update_bits(param_1,0x31b1,0x1f,uVar1);
    return;
}


// ===== sym.wcd938x_version_read.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt @ 0x08018958 (size 8) =====

uint64_t sym.wcd938x_version_read.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt
                   (int64_t param_1,ulong param_2,ulong param_3,char *param_4,ulong param_5,ulong param_6)

{
    uint uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t *piVar8;
    int64_t *piVar9;
    uint *puVar10;
    int64_t iVar11;
    char *pcVar12;
    char *pcVar13;
    ulong uVar14;
    int64_t *piVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t iVar16;
    ulong unaff_x30;
    ulong uStack_d8;
    uint32_t uStack_cc;
    int64_t iStack_c8;
    uchar **ppuStack_c0;
    code *pcStack_b8;
    ulong uStack_80;
    char acStack_78 [9];
    unkbyte6 Stack_6f;
    uchar uStack_69;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    ulong uStack_40;
    char acStack_38 [5];
    ushort uStack_33;
    char cStack_31;
    char acStack_30 [5];
    ushort uStack_2b;
    uchar uStack_29;
    ulong uStack_28;
    ulong uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_18 = *(iVar11 + 0x5e0);
    acStack_38[0] = '\0';
    acStack_38[1] = '\0';
    acStack_38[2] = '\0';
    acStack_38[3] = '\0';
    acStack_38[4] = '\0';
    uStack_33 = 0;
    cStack_31 = '\0';
    uStack_28 = 0;
    uStack_20 = 0;
    acStack_30[0] = '\0';
    acStack_30[1] = '\0';
    acStack_30[2] = '\0';
    acStack_30[3] = '\0';
    acStack_30[4] = '\0';
    uStack_2b = 0;
    uStack_29 = 0;
    uStack_40 = param_6;
    if (*(param_1 + 0x40) == 0) {
        iVar4 = ___ratelimit(obj.wcd938x_version_read._rs,"wcd938x_version_read");
        if (iVar4 == 0) {
            uVar5 = 0xffffffffffffffea;
        }
        else {
            _printk(0x8009959,"wcd938x_version_read");
            uVar5 = 0xffffffffffffffea;
        }
    }
    else {
        if (*(*(param_1 + 0x40) + 0xc50) == 1) {
            uVar14 = 0xc;
            acStack_38[0] = str.WCD938X_1_0_n[0];
            acStack_38[1] = str.WCD938X_1_0_n[1];
            acStack_38[2] = str.WCD938X_1_0_n[2];
            acStack_38[3] = str.WCD938X_1_0_n[3];
            acStack_38[4] = str.WCD938X_1_0_n[4];
            uStack_33 = str.WCD938X_1_0_n._5_3_;
            cStack_31 = SUB31(str.WCD938X_1_0_n._5_3_,2);
            acStack_30[0] = str.WCD938X_1_0_n[8];
            acStack_30[1] = str.WCD938X_1_0_n[9];
            acStack_30[2] = str.WCD938X_1_0_n[10];
            acStack_30[3] = str.WCD938X_1_0_n[0xb];
            acStack_30[4] = str.WCD938X_1_0_n[0xc];
        }
        else {
            uVar14 = 0xe;
            acStack_38 = SUB75(str.VER_UNDEFINED_n._0_7_,0);
            uStack_33 = SUB72(str.VER_UNDEFINED_n._0_7_,5);
            cStack_31 = str.VER_UNDEFINED_n[7];
            acStack_30 = SUB75(str.VER_UNDEFINED_n._8_7_,0);
            uStack_2b = SUB72(str.VER_UNDEFINED_n._8_7_,5);
        }
        pcVar12 = acStack_38;
        uVar5 = simple_read_from_buffer(param_4,param_5,&uStack_40,pcVar12,uVar14);
        param_4 = pcVar12;
        param_5 = uVar14;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_18) {
        return uVar5;
    }
    iVar6 = __stack_chk_fail(uVar5);
    *extraout_x18 = sym.wcd938x_variant_read;
    pcStack_48 = sym.wcd938x_variant_read;
    iVar11 = sp_el0;
    iStack_58 = *(iVar11 + 0x5e0);
    acStack_78[0] = '\0';
    acStack_78[1] = '\0';
    acStack_78[2] = '\0';
    acStack_78[3] = '\0';
    acStack_78[4] = '\0';
    acStack_78[5] = '\0';
    acStack_78[6] = '\0';
    acStack_78[7] = '\0';
    uStack_68 = 0;
    uStack_60 = 0;
    acStack_78[8] = '\0';
    Stack_6f = 0;
    uStack_69 = 0;
    uStack_80 = param_6;
    puStack_50 = &stack0xfffffffffffffff0;
    if (*(iVar6 + 0x40) == 0) {
        iVar4 = ___ratelimit(obj.wcd938x_variant_read._rs,"wcd938x_variant_read");
        if (iVar4 == 0) {
            uVar5 = 0xffffffffffffffea;
        }
        else {
            _printk(0x8009959,"wcd938x_variant_read");
            uVar5 = 0xffffffffffffffea;
        }
    }
    else {
        iVar4 = *(*(iVar6 + 0x40) + 8);
        if (iVar4 == 5) {
            pcVar12 = "WCD9385\n";
code_r0x0801a0d4:
            uVar14 = 8;
            acStack_78[8] = '\0';
            acStack_78._0_7_ = *pcVar12;
            acStack_78[7] = *pcVar12 >> 0x38;
        }
        else {
            if (iVar4 == 0) {
                pcVar12 = "WCD9380\n";
                goto code_r0x0801a0d4;
            }
            uVar14 = 0xe;
            acStack_78[0] = str.VER_UNDEFINED_n[0];
            acStack_78[1] = str.VER_UNDEFINED_n[1];
            acStack_78[2] = str.VER_UNDEFINED_n[2];
            acStack_78[3] = str.VER_UNDEFINED_n[3];
            acStack_78[4] = str.VER_UNDEFINED_n[4];
            acStack_78[5] = str.VER_UNDEFINED_n[5];
            acStack_78[6] = str.VER_UNDEFINED_n[6];
            acStack_78[7] = str.VER_UNDEFINED_n[7];
            acStack_78[8] = str.VER_UNDEFINED_n._8_7_;
            Stack_6f = SUB76(str.VER_UNDEFINED_n._8_7_,1);
        }
        uVar5 = simple_read_from_buffer(param_4,param_5,&uStack_80,acStack_78,uVar14);
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_58) {
        return uVar5;
    }
    iVar7 = __stack_chk_fail(uVar5);
    *extraout_x18_00 = sym.wcd938x_probe;
    pcStack_b8 = sym.wcd938x_probe;
    iVar6 = sp_el0;
    iVar11 = iVar7 + 0x10;
    iStack_c8 = *(iVar6 + 0x5e0);
    uStack_d8 = 0;
    ppuStack_c0 = &puStack_50;
    piVar8 = devm_kmalloc(iVar11,0xcd0,0xdc0);
    if (piVar8 == NULL) {
        uVar2 = 0xfffffff4;
        goto code_r0x0801a620;
    }
    *(iVar7 + 0xa8) = piVar8;
    *piVar8 = iVar11;
    piVar9 = sym.wcd938x_populate_dt_data(iVar11);
    if (piVar9 == NULL) {
        pcVar12 = "%s: Fail to obtain platform data\n";
        goto code_r0x0801a55c;
    }
    *(iVar7 + 0xa0) = piVar9;
    piVar8[3] = *piVar9;
    uVar2 = msm_cdc_init_supplies(iVar11,piVar8 + 0x182,piVar9[7],piVar9[8]);
    if (piVar8[0x182] == 0) {
        pcVar12 = "%s: Cannot init wcd supplies\n";
code_r0x0801a580:
        _dev_err(iVar11,pcVar12,"wcd938x_probe");
        goto code_r0x0801a620;
    }
    piVar15 = *(*(iVar7 + 0x70) + 0x90);
    if (piVar15 == NULL) {
        pcVar12 = "%s: platform data from parent is NULL\n";
    }
    else {
        iVar6 = *piVar15;
        piVar8[0x186] = iVar6;
        if (iVar6 == 0) {
            pcVar12 = "%s: handle is NULL\n";
        }
        else {
            iVar6 = piVar15[1];
            piVar8[0x187] = iVar6;
            if (iVar6 == 0) {
                pcVar12 = "%s: update_wcd_event api is null!\n";
            }
            else {
                iVar6 = piVar15[2];
                piVar8[0x188] = iVar6;
                if (iVar6 != 0) {
                    uVar2 = msm_cdc_enable_static_supplies(iVar11,piVar8[0x182],piVar9[7],piVar9[8]);
                    if (uVar2 != 0) {
                        pcVar12 = "%s: wcd static supply enable failed!\n";
                        goto code_r0x0801a580;
                    }
                    uVar3 = sym.wcd938x_parse_port_mapping(iVar11,0x8002bf3,1);
                    uVar2 = sym.wcd938x_parse_port_mapping(iVar11,0x8002c06,0);
                    uVar2 = uVar2 | uVar3;
                    if (uVar2 == 0) {
                        iVar16 = *(iVar7 + 0xa8);
                        uStack_cc = 0;
                        iVar6 = of_find_property(*(iVar7 + 0x300),"qcom,swr-tx-port-params",&uStack_cc);
                        if (iVar6 == 0) {
                            pcVar12 = "missing port mapping prop %s\n";
                            pcVar13 = "qcom,swr-tx-port-params";
code_r0x0801a5c4:
                            _dev_err(iVar11,pcVar12,pcVar13);
                            uVar2 = 0xffffffea;
                        }
                        else {
                            if ((uStack_cc & 0xffffffe0) != 0x80) {
                                pcVar12 = "%s: port params not provided for all usecases\n";
                                pcVar13 = "wcd938x_parse_port_params";
                                goto code_r0x0801a5c4;
                            }
                            puVar10 = __kmalloc(uStack_cc,0xdc0);
                            if (puVar10 == NULL) {
                                uVar2 = 0xfffffff4;
                            }
                            else {
                                uVar2 = of_property_read_variable_u32_array
                                                  (*(iVar7 + 0x300),"qcom,swr-tx-port-params",puVar10,0x20,0);
                                if (-1 < uVar2) {
                                    *(iVar16 + 0xb6c) = *puVar10;
                                    *(iVar16 + 0xb70) = puVar10[1];
                                    *(iVar16 + 0xb74) = puVar10[2];
                                    *(iVar16 + 0xb78) = puVar10[3];
                                    *(iVar16 + 0xb7c) = puVar10[4];
                                    *(iVar16 + 0xb80) = puVar10[5];
                                    *(iVar16 + 0xb84) = puVar10[6];
                                    uVar1 = puVar10[7];
                                    *(iVar16 + 0xbf0) = iVar16 + 0xb6c;
                                    *(iVar16 + 0xb88) = uVar1;
                                    *(iVar16 + 0xb8c) = puVar10[8];
                                    *(iVar16 + 0xb90) = puVar10[9];
                                    *(iVar16 + 0xb94) = puVar10[10];
                                    *(iVar16 + 0xb98) = puVar10[0xb];
                                    *(iVar16 + 0xb9c) = puVar10[0xc];
                                    *(iVar16 + 0xba0) = puVar10[0xd];
                                    *(iVar16 + 0xba4) = puVar10[0xe];
                                    uVar1 = puVar10[0xf];
                                    *(iVar16 + 0xbf8) = iVar16 + 0xb8c;
                                    *(iVar16 + 0xba8) = uVar1;
                                    *(iVar16 + 0xbac) = puVar10[0x10];
                                    *(iVar16 + 0xbb0) = puVar10[0x11];
                                    *(iVar16 + 0xbb4) = puVar10[0x12];
                                    *(iVar16 + 3000) = puVar10[0x13];
                                    *(iVar16 + 0xbbc) = puVar10[0x14];
                                    *(iVar16 + 0xbc0) = puVar10[0x15];
                                    *(iVar16 + 0xbc4) = puVar10[0x16];
                                    uVar1 = puVar10[0x17];
                                    *(iVar16 + 0xc00) = iVar16 + 0xbac;
                                    *(iVar16 + 0xbc8) = uVar1;
                                    *(iVar16 + 0xbcc) = puVar10[0x18];
                                    *(iVar16 + 0xbd0) = puVar10[0x19];
                                    *(iVar16 + 0xbd4) = puVar10[0x1a];
                                    *(iVar16 + 0xbd8) = puVar10[0x1b];
                                    *(iVar16 + 0xbdc) = puVar10[0x1c];
                                    *(iVar16 + 0xbe0) = puVar10[0x1d];
                                    *(iVar16 + 0xbe4) = puVar10[0x1e];
                                    uVar1 = puVar10[0x1f];
                                    *(iVar16 + 0xc08) = iVar16 + 0xbcc;
                                    *(iVar16 + 0xbe8) = uVar1;
                                    kfree(puVar10);
                                    __mutex_init(piVar8 + 0x13,"&wcd938x->wakeup_lock",obj.wcd938x_soc_get_mbhc._rs);
                                    __mutex_init(piVar8 + 0xd,"&wcd938x->micb_lock",obj.wcd938x_soc_get_mbhc._rs);
                                    uVar14 = *(iVar7 + 0x300);
                                    iVar6 = of_parse_phandle(uVar14,"qcom,rx-slave",0);
                                    if (iVar6 == 0) {
                                        iVar4 = ___ratelimit(obj.wcd938x_add_slave_components._rs,
                                                             "wcd938x_add_slave_components");
                                        if (iVar4 != 0) {
                                            pcVar12 = "%s: Rx-slave node not defined\n";
code_r0x0801a660:
                                            _dev_err(iVar11,pcVar12,"wcd938x_add_slave_components");
                                            uVar2 = 0xffffffed;
                                            goto code_r0x0801a620;
                                        }
                                    }
                                    else {
                                        component_match_add_release
                                                  (iVar11,&uStack_d8,
                                                   sym.wcd938x_release_of.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt,
                                                   sym.wcd938x_compare_of.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt,iVar6
                                                  );
                                        iVar6 = of_parse_phandle(uVar14,"qcom,tx-slave",0);
                                        if (iVar6 != 0) {
                                            component_match_add_release
                                                      (iVar11,&uStack_d8,
                                                       sym.wcd938x_release_of.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt,
                                                       sym.wcd938x_compare_of.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt,
                                                       iVar6);
                                            sym.wcd938x_reset(iVar11);
                                            piVar8[0x189] = sym.__typeid__ZTSFiPvbE_global_addr;
                                            uVar2 = component_master_add_with_match
                                                              (iVar11,
                                                            reloc.wcd938x_bind.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt,
                                                            uStack_d8);
                                            goto code_r0x0801a620;
                                        }
                                        iVar4 = ___ratelimit(obj.wcd938x_add_slave_components._rs.91,
                                                             "wcd938x_add_slave_components");
                                        if (iVar4 != 0) {
                                            pcVar12 = "%s: Tx-slave node not defined\n";
                                            goto code_r0x0801a660;
                                        }
                                    }
                                    uVar2 = 0xffffffed;
                                    goto code_r0x0801a620;
                                }
                                _dev_err(iVar11,"%s: Failed to read  port mapping from prop %s\n",
                                         "wcd938x_parse_port_params","qcom,swr-tx-port-params");
                                kfree(puVar10);
                            }
                        }
                        pcVar12 = "Failed to read port params\n";
                    }
                    else {
                        pcVar12 = "Failed to read port mapping\n";
                    }
                    _dev_err(iVar11,pcVar12);
                    goto code_r0x0801a620;
                }
                pcVar12 = "%s: register_notifier api is null!\n";
            }
        }
    }
code_r0x0801a55c:
    _dev_err(iVar11,pcVar12,"wcd938x_probe");
    uVar2 = 0xffffffea;
code_r0x0801a620:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_c8) {
        return uVar2;
    }
    iVar11 = __stack_chk_fail();
    *extraout_x18_01 = sym.wcd938x_remove;
    component_master_del(iVar11 + 0x10,reloc.wcd938x_bind.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt);
    *(iVar11 + 0xa8) = 0;
    return 0;
}


// ===== sym.wcd938x_variant_read.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt @ 0x08018960 (size 8) =====

uint64_t sym.wcd938x_variant_read.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt
                   (int64_t param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,ulong param_6)

{
    uint uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t *piVar7;
    int64_t *piVar8;
    uint *puVar9;
    int64_t iVar10;
    char *pcVar11;
    char *pcVar12;
    ulong uVar13;
    int64_t *piVar14;
    int64_t iVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar16;
    ulong unaff_x30;
    ulong uStack_98;
    uint32_t uStack_8c;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    ulong uStack_40;
    char acStack_38 [9];
    unkbyte6 Stack_2f;
    uchar uStack_29;
    ulong uStack_28;
    ulong uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_18 = *(iVar10 + 0x5e0);
    acStack_38[0] = '\0';
    acStack_38[1] = '\0';
    acStack_38[2] = '\0';
    acStack_38[3] = '\0';
    acStack_38[4] = '\0';
    acStack_38[5] = '\0';
    acStack_38[6] = '\0';
    acStack_38[7] = '\0';
    uStack_28 = 0;
    uStack_20 = 0;
    acStack_38[8] = '\0';
    Stack_2f = 0;
    uStack_29 = 0;
    uStack_40 = param_6;
    if (*(param_1 + 0x40) == 0) {
        iVar4 = ___ratelimit(obj.wcd938x_variant_read._rs,"wcd938x_variant_read");
        if (iVar4 == 0) {
            uVar5 = 0xffffffffffffffea;
        }
        else {
            _printk(0x8009959,"wcd938x_variant_read");
            uVar5 = 0xffffffffffffffea;
        }
    }
    else {
        iVar4 = *(*(param_1 + 0x40) + 8);
        if (iVar4 == 5) {
            pcVar11 = "WCD9385\n";
code_r0x0801a0d4:
            uVar13 = 8;
            acStack_38[8] = '\0';
            acStack_38._0_7_ = *pcVar11;
            acStack_38[7] = *pcVar11 >> 0x38;
        }
        else {
            if (iVar4 == 0) {
                pcVar11 = "WCD9380\n";
                goto code_r0x0801a0d4;
            }
            uVar13 = 0xe;
            acStack_38[0] = str.VER_UNDEFINED_n[0];
            acStack_38[1] = str.VER_UNDEFINED_n[1];
            acStack_38[2] = str.VER_UNDEFINED_n[2];
            acStack_38[3] = str.VER_UNDEFINED_n[3];
            acStack_38[4] = str.VER_UNDEFINED_n[4];
            acStack_38[5] = str.VER_UNDEFINED_n[5];
            acStack_38[6] = str.VER_UNDEFINED_n[6];
            acStack_38[7] = str.VER_UNDEFINED_n[7];
            acStack_38[8] = str.VER_UNDEFINED_n._8_7_;
            Stack_2f = SUB76(str.VER_UNDEFINED_n._8_7_,1);
        }
        uVar5 = simple_read_from_buffer(param_4,param_5,&uStack_40,acStack_38,uVar13);
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_18) {
        return uVar5;
    }
    iVar6 = __stack_chk_fail(uVar5);
    *extraout_x18 = sym.wcd938x_probe;
    pcStack_78 = sym.wcd938x_probe;
    iVar15 = sp_el0;
    iVar10 = iVar6 + 0x10;
    iStack_88 = *(iVar15 + 0x5e0);
    uStack_98 = 0;
    puStack_80 = &stack0xfffffffffffffff0;
    piVar7 = devm_kmalloc(iVar10,0xcd0,0xdc0);
    if (piVar7 == NULL) {
        uVar2 = 0xfffffff4;
        goto code_r0x0801a620;
    }
    *(iVar6 + 0xa8) = piVar7;
    *piVar7 = iVar10;
    piVar8 = sym.wcd938x_populate_dt_data(iVar10);
    if (piVar8 == NULL) {
        pcVar11 = "%s: Fail to obtain platform data\n";
        goto code_r0x0801a55c;
    }
    *(iVar6 + 0xa0) = piVar8;
    piVar7[3] = *piVar8;
    uVar2 = msm_cdc_init_supplies(iVar10,piVar7 + 0x182,piVar8[7],piVar8[8]);
    if (piVar7[0x182] == 0) {
        pcVar11 = "%s: Cannot init wcd supplies\n";
code_r0x0801a580:
        _dev_err(iVar10,pcVar11,"wcd938x_probe");
        goto code_r0x0801a620;
    }
    piVar14 = *(*(iVar6 + 0x70) + 0x90);
    if (piVar14 == NULL) {
        pcVar11 = "%s: platform data from parent is NULL\n";
    }
    else {
        iVar15 = *piVar14;
        piVar7[0x186] = iVar15;
        if (iVar15 == 0) {
            pcVar11 = "%s: handle is NULL\n";
        }
        else {
            iVar15 = piVar14[1];
            piVar7[0x187] = iVar15;
            if (iVar15 == 0) {
                pcVar11 = "%s: update_wcd_event api is null!\n";
            }
            else {
                iVar15 = piVar14[2];
                piVar7[0x188] = iVar15;
                if (iVar15 != 0) {
                    uVar2 = msm_cdc_enable_static_supplies(iVar10,piVar7[0x182],piVar8[7],piVar8[8]);
                    if (uVar2 != 0) {
                        pcVar11 = "%s: wcd static supply enable failed!\n";
                        goto code_r0x0801a580;
                    }
                    uVar3 = sym.wcd938x_parse_port_mapping(iVar10,0x8002bf3,1);
                    uVar2 = sym.wcd938x_parse_port_mapping(iVar10,0x8002c06,0);
                    uVar2 = uVar2 | uVar3;
                    if (uVar2 == 0) {
                        iVar16 = *(iVar6 + 0xa8);
                        uStack_8c = 0;
                        iVar15 = of_find_property(*(iVar6 + 0x300),"qcom,swr-tx-port-params",&uStack_8c);
                        if (iVar15 == 0) {
                            pcVar11 = "missing port mapping prop %s\n";
                            pcVar12 = "qcom,swr-tx-port-params";
code_r0x0801a5c4:
                            _dev_err(iVar10,pcVar11,pcVar12);
                            uVar2 = 0xffffffea;
                        }
                        else {
                            if ((uStack_8c & 0xffffffe0) != 0x80) {
                                pcVar11 = "%s: port params not provided for all usecases\n";
                                pcVar12 = "wcd938x_parse_port_params";
                                goto code_r0x0801a5c4;
                            }
                            puVar9 = __kmalloc(uStack_8c,0xdc0);
                            if (puVar9 == NULL) {
                                uVar2 = 0xfffffff4;
                            }
                            else {
                                uVar2 = of_property_read_variable_u32_array
                                                  (*(iVar6 + 0x300),"qcom,swr-tx-port-params",puVar9,0x20,0);
                                if (-1 < uVar2) {
                                    *(iVar16 + 0xb6c) = *puVar9;
                                    *(iVar16 + 0xb70) = puVar9[1];
                                    *(iVar16 + 0xb74) = puVar9[2];
                                    *(iVar16 + 0xb78) = puVar9[3];
                                    *(iVar16 + 0xb7c) = puVar9[4];
                                    *(iVar16 + 0xb80) = puVar9[5];
                                    *(iVar16 + 0xb84) = puVar9[6];
                                    uVar1 = puVar9[7];
                                    *(iVar16 + 0xbf0) = iVar16 + 0xb6c;
                                    *(iVar16 + 0xb88) = uVar1;
                                    *(iVar16 + 0xb8c) = puVar9[8];
                                    *(iVar16 + 0xb90) = puVar9[9];
                                    *(iVar16 + 0xb94) = puVar9[10];
                                    *(iVar16 + 0xb98) = puVar9[0xb];
                                    *(iVar16 + 0xb9c) = puVar9[0xc];
                                    *(iVar16 + 0xba0) = puVar9[0xd];
                                    *(iVar16 + 0xba4) = puVar9[0xe];
                                    uVar1 = puVar9[0xf];
                                    *(iVar16 + 0xbf8) = iVar16 + 0xb8c;
                                    *(iVar16 + 0xba8) = uVar1;
                                    *(iVar16 + 0xbac) = puVar9[0x10];
                                    *(iVar16 + 0xbb0) = puVar9[0x11];
                                    *(iVar16 + 0xbb4) = puVar9[0x12];
                                    *(iVar16 + 3000) = puVar9[0x13];
                                    *(iVar16 + 0xbbc) = puVar9[0x14];
                                    *(iVar16 + 0xbc0) = puVar9[0x15];
                                    *(iVar16 + 0xbc4) = puVar9[0x16];
                                    uVar1 = puVar9[0x17];
                                    *(iVar16 + 0xc00) = iVar16 + 0xbac;
                                    *(iVar16 + 0xbc8) = uVar1;
                                    *(iVar16 + 0xbcc) = puVar9[0x18];
                                    *(iVar16 + 0xbd0) = puVar9[0x19];
                                    *(iVar16 + 0xbd4) = puVar9[0x1a];
                                    *(iVar16 + 0xbd8) = puVar9[0x1b];
                                    *(iVar16 + 0xbdc) = puVar9[0x1c];
                                    *(iVar16 + 0xbe0) = puVar9[0x1d];
                                    *(iVar16 + 0xbe4) = puVar9[0x1e];
                                    uVar1 = puVar9[0x1f];
                                    *(iVar16 + 0xc08) = iVar16 + 0xbcc;
                                    *(iVar16 + 0xbe8) = uVar1;
                                    kfree(puVar9);
                                    __mutex_init(piVar7 + 0x13,"&wcd938x->wakeup_lock",obj.wcd938x_soc_get_mbhc._rs);
                                    __mutex_init(piVar7 + 0xd,"&wcd938x->micb_lock",obj.wcd938x_soc_get_mbhc._rs);
                                    uVar13 = *(iVar6 + 0x300);
                                    iVar15 = of_parse_phandle(uVar13,"qcom,rx-slave",0);
                                    if (iVar15 == 0) {
                                        iVar4 = ___ratelimit(obj.wcd938x_add_slave_components._rs,
                                                             "wcd938x_add_slave_components");
                                        if (iVar4 != 0) {
                                            pcVar11 = "%s: Rx-slave node not defined\n";
code_r0x0801a660:
                                            _dev_err(iVar10,pcVar11,"wcd938x_add_slave_components");
                                            uVar2 = 0xffffffed;
                                            goto code_r0x0801a620;
                                        }
                                    }
                                    else {
                                        component_match_add_release
                                                  (iVar10,&uStack_98,
                                                   sym.wcd938x_release_of.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt,
                                                   sym.wcd938x_compare_of.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt,
                                                   iVar15);
                                        iVar15 = of_parse_phandle(uVar13,"qcom,tx-slave",0);
                                        if (iVar15 != 0) {
                                            component_match_add_release
                                                      (iVar10,&uStack_98,
                                                       sym.wcd938x_release_of.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt,
                                                       sym.wcd938x_compare_of.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt,
                                                       iVar15);
                                            sym.wcd938x_reset(iVar10);
                                            piVar7[0x189] = sym.__typeid__ZTSFiPvbE_global_addr;
                                            uVar2 = component_master_add_with_match
                                                              (iVar10,
                                                            reloc.wcd938x_bind.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt,
                                                            uStack_98);
                                            goto code_r0x0801a620;
                                        }
                                        iVar4 = ___ratelimit(obj.wcd938x_add_slave_components._rs.91,
                                                             "wcd938x_add_slave_components");
                                        if (iVar4 != 0) {
                                            pcVar11 = "%s: Tx-slave node not defined\n";
                                            goto code_r0x0801a660;
                                        }
                                    }
                                    uVar2 = 0xffffffed;
                                    goto code_r0x0801a620;
                                }
                                _dev_err(iVar10,"%s: Failed to read  port mapping from prop %s\n",
                                         "wcd938x_parse_port_params","qcom,swr-tx-port-params");
                                kfree(puVar9);
                            }
                        }
                        pcVar11 = "Failed to read port params\n";
                    }
                    else {
                        pcVar11 = "Failed to read port mapping\n";
                    }
                    _dev_err(iVar10,pcVar11);
                    goto code_r0x0801a620;
                }
                pcVar11 = "%s: register_notifier api is null!\n";
            }
        }
    }
code_r0x0801a55c:
    _dev_err(iVar10,pcVar11,"wcd938x_probe");
    uVar2 = 0xffffffea;
code_r0x0801a620:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_88) {
        return uVar2;
    }
    iVar10 = __stack_chk_fail();
    *extraout_x18_00 = sym.wcd938x_remove;
    component_master_del(iVar10 + 0x10,reloc.wcd938x_bind.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt);
    *(iVar10 + 0xa8) = 0;
    return 0;
}


// ===== sym.wcd938x_mbhc_lock_sleep.228a7220f248aaede76982248f6c4394.cfi_jt @ 0x08018968 (size 8) =====

ulong sym.wcd938x_mbhc_lock_sleep.228a7220f248aaede76982248f6c4394.cfi_jt(int64_t param_1,uint32_t param_2)

{
    int64_t iVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(*(*(param_1 + 0xf8) + 0x18) + 0x98);
    pcVar2 = *(iVar1 + 0xc48);
    if (pcVar2 != sym.__typeid__ZTSFiPvbE_global_addr) {
        __cfi_slowpath_diag(0x2b17460ce4bf82db,pcVar2,0x8001b10);
    }
    (*pcVar2)(iVar1,param_2 & 1);
    return 1;
}


// ===== sym.wcd938x_info_create_codec_entry.cfi_jt @ 0x08018970 (size 8) =====

ulong sym.wcd938x_info_create_codec_entry.cfi_jt(int64_t param_1,int64_t param_2)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = 0xffffffea;
    if ((param_1 != 0) && (param_2 != 0)) {
        puVar5 = *(*(param_2 + 0x18) + 0x98);
        if (puVar5[0x18b] == 0) {
            iVar4 = *(param_2 + 0x20);
            iVar3 = snd_info_create_module_entry(*(param_1 + 0x38),"wcd938x");
            puVar5[0x18b] = iVar3;
            if (iVar3 == 0) {
                _dev_printk(0x800991b,*(param_2 + 0x18),"%s: failed to create wcd938x entry\n",
                            "wcd938x_info_create_codec_entry");
            }
            else {
                *(iVar3 + 8) = 0x416d;
                iVar1 = snd_info_register(puVar5[0x18b]);
                if (-1 < iVar1) {
                    iVar3 = snd_info_create_card_entry(*(iVar4 + 0x48),"version",puVar5[0x18b]);
                    if (iVar3 == 0) {
                        _dev_printk(0x800991b,*(param_2 + 0x18),"%s: failed to create wcd938x version entry\n",
                                    "wcd938x_info_create_codec_entry");
                    }
                    else {
                        *(iVar3 + 0x40) = puVar5;
                        *(iVar3 + 0x10) = 0x20;
                        *(iVar3 + 0x18) = 1;
                        *(iVar3 + 0x20) = obj.wcd938x_info_ops;
                        iVar1 = snd_info_register();
                        if (-1 < iVar1) {
                            puVar5[0x18c] = iVar3;
                            iVar4 = snd_info_create_card_entry(*(iVar4 + 0x48),"variant",puVar5[0x18b]);
                            if (iVar4 == 0) {
                                _dev_printk(0x800991b,*(param_2 + 0x18),"%s: failed to create wcd938x variant entry\n"
                                            ,"wcd938x_info_create_codec_entry");
                            }
                            else {
                                *(iVar4 + 0x40) = puVar5;
                                *(iVar4 + 0x10) = 0x20;
                                *(iVar4 + 0x18) = 1;
                                *(iVar4 + 0x20) = obj.wcd938x_variant_ops;
                                iVar1 = snd_info_register();
                                if (-1 < iVar1) {
                                    puVar5[0x18d] = iVar4;
                                    return 0;
                                }
                                snd_info_free_entry(iVar4);
                            }
                        }
                        snd_info_free_entry(iVar3);
                    }
                }
                snd_info_free_entry(puVar5[0x18b]);
            }
            uVar2 = 0xfffffff4;
        }
        else {
            _dev_printk(0x800991b,*puVar5,"%s:wcd938x module already created\n","wcd938x_info_create_codec_entry");
            uVar2 = 0;
        }
    }
    return uVar2;
}


// ===== sym.wcd938x_mbhc_post_ssr_init.cfi_jt @ 0x08018978 (size 8) =====

int sym.wcd938x_mbhc_post_ssr_init.cfi_jt(int64_t param_1,int64_t param_2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = -0x16;
    if ((param_1 != 0) && (param_2 != 0)) {
        snd_soc_component_update_bits(param_2,0x3014,0x20,0x20);
        iVar1 = wcd_mbhc_init(param_1,param_2,obj.mbhc_cb,obj.intr_ids,obj.wcd_mbhc_registers,1);
        if (iVar1 != 0) {
            _dev_err(*(param_2 + 0x18),"%s: mbhc initialization failed\n","wcd938x_mbhc_post_ssr_init");
        }
    }
    return iVar1;
}


// ===== sym.wcd938x_wd_handle_irq.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt @ 0x08018980 (size 8) =====

ulong sym.wcd938x_wd_handle_irq.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt(uint param_1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = ___ratelimit(obj.wcd938x_wd_handle_irq._rs,"wcd938x_wd_handle_irq");
    if (iVar1 != 0) {
        _printk(0x8004700,"wcd938x_wd_handle_irq",param_1);
    }
    return 1;
}


// ===== sym.wcd938x_readable_register.bfe5409578f5ad48e0ad82856044c7d5.cfi_jt @ 0x08018988 (size 8) =====

uint8_t sym.wcd938x_readable_register.bfe5409578f5ad48e0ad82856044c7d5.cfi_jt(ulong param_1,uint32_t param_2)

{
    uint32_t uVar1;
    code *pcVar2;
    
    uVar1 = param_2 - 0x3000;
    if (param_2 < 0x3000 || uVar1 == 0) {
        return 0;
    }
    if (uVar1 < 0x34d9) {
        return obj.wcd938x_reg_access[uVar1] & 1;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8024780);
    (*pcVar2)();
}


// ===== sym.wcd938x_volatile_register.bfe5409578f5ad48e0ad82856044c7d5.cfi_jt @ 0x08018990 (size 8) =====

bool sym.wcd938x_volatile_register.bfe5409578f5ad48e0ad82856044c7d5.cfi_jt(ulong param_1,uint32_t param_2)

{
    uint32_t uVar1;
    code *pcVar2;
    
    uVar1 = param_2 - 0x3000;
    if (param_2 < 0x3000 || uVar1 == 0) {
        return false;
    }
    if (uVar1 < 0x34d9) {
        return (obj.wcd938x_reg_access[uVar1] & 3) == 1;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x80247c8);
    (*pcVar2)();
}


// ===== sym.wcd938x_writeable_register.bfe5409578f5ad48e0ad82856044c7d5.cfi_jt @ 0x08018998 (size 8) =====

uint8_t sym.wcd938x_writeable_register.bfe5409578f5ad48e0ad82856044c7d5.cfi_jt(ulong param_1,uint32_t param_2)

{
    uint32_t uVar1;
    code *pcVar2;
    
    uVar1 = param_2 - 0x3000;
    if (param_2 < 0x3000 || uVar1 == 0) {
        return 0;
    }
    if (uVar1 < 0x34d9) {
        return obj.wcd938x_reg_access[uVar1] >> 1 & 1;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8024740);
    (*pcVar2)();
}


// ===== sym.wcd938x_compare_of.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt @ 0x080189a0 (size 8) =====

bool sym.wcd938x_compare_of.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt(int64_t param_1,int64_t param_2)

{
    return *(param_1 + 0x2f0) == param_2;
}


// ===== sym.wcd938x_mbhc_get_impedance.cfi_jt @ 0x080189a8 (size 8) =====

ulong sym.wcd938x_mbhc_get_impedance.cfi_jt(int64_t param_1,int64_t param_2,int64_t param_3)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        iVar1 = ___ratelimit(obj.wcd938x_mbhc_get_impedance._rs,"wcd938x_mbhc_get_impedance");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        uVar2 = 0x8003fd2;
    }
    else {
        if ((param_2 != 0) && (param_3 != 0)) {
            uVar2 = wcd_mbhc_get_impedance();
            return uVar2;
        }
        iVar1 = ___ratelimit(obj.wcd938x_mbhc_get_impedance._rs.1,"wcd938x_mbhc_get_impedance");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        uVar2 = 0x8003fef;
    }
    _printk(uVar2,"wcd938x_mbhc_get_impedance");
    return 0xffffffea;
}


// ===== sym.wcd938x_mbhc_free_irq.228a7220f248aaede76982248f6c4394.cfi_jt @ 0x080189b0 (size 8) =====

ulong sym.wcd938x_mbhc_free_irq.228a7220f248aaede76982248f6c4394.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    wcd_free_irq(*(*(param_1 + 0x18) + 0x98) + 0x130);
    return 0;
}


// ===== sym.wcd938x_mbhc_request_micbias.228a7220f248aaede76982248f6c4394.cfi_jt @ 0x080189b8 (size 8) =====

void sym.wcd938x_mbhc_request_micbias.228a7220f248aaede76982248f6c4394.cfi_jt
               (int64_t param_1,int64_t param_2,int64_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.wcd938x_micbias_control(param_1,param_2,param_3,0);
    return;
}


// ===== sym.wcd938x_codec_force_enable_micbias_v2.cfi_jt @ 0x080189c0 (size 8) =====

ulong sym.wcd938x_codec_force_enable_micbias_v2.cfi_jt(int64_t param_1,uint32_t param_2,uint32_t param_3)

{
    uint32_t uVar1;
    code *pcVar2;
    int iVar3;
    ulong uVar4;
    int64_t arg3;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        iVar3 = ___ratelimit(obj.wcd938x_codec_force_enable_micbias_v2._rs,"wcd938x_codec_force_enable_micbias_v2");
        if (iVar3 == 0) {
            return 0xffffffea;
        }
        _printk(0x8006168,"wcd938x_codec_force_enable_micbias_v2");
        return 0xffffffea;
    }
    if ((param_2 == 1) || (param_2 == 8)) {
        if (0xfffffffb < param_3 - 5) {
            arg1 = *(*(param_1 + 0x18) + 0x98);
            if (*(arg1 + 0xc78) == '\0') {
                uVar1 = param_3 - 1;
                if (3 < uVar1) {
    //WARNING: Does not return
                    pcVar2 = SoftwareBreakpoint(0x5512,0x80196e8);
                    (*pcVar2)();
                }
                if (param_2 == 8) {
                    iVar3 = *(arg1 + 0x48 + uVar1 * 4);
                    if (0 < iVar3) {
                        *(arg1 + 0x48 + uVar1 * 4) = iVar3 + -1;
                        return 0xffffffed;
                    }
                }
            }
            if (param_2 == 8) {
                sym.wcd938x_wakeup(arg1,1);
                arg3 = 1;
            }
            else {
                if (param_2 != 1) {
                    return 0;
                }
                sym.wcd938x_wakeup(arg1,1);
                arg3 = 0;
            }
            sym.wcd938x_enable_micbias(arg1,param_3,arg3);
            sym.wcd938x_wakeup(arg1,0);
            return 0;
        }
        iVar3 = ___ratelimit(obj.wcd938x_codec_force_enable_micbias_v2._rs.17,"wcd938x_codec_force_enable_micbias_v2");
        if (iVar3 == 0) {
            return 0xffffffea;
        }
        uVar4 = 0x80030d3;
        param_2 = param_3;
    }
    else {
        iVar3 = ___ratelimit(obj.wcd938x_codec_force_enable_micbias_v2._rs.15,"wcd938x_codec_force_enable_micbias_v2");
        if (iVar3 == 0) {
            return 0xffffffea;
        }
        uVar4 = 0x8004053;
    }
    _printk(uVar4,"wcd938x_codec_force_enable_micbias_v2",param_2);
    return 0xffffffea;
}


// ===== sym.wcd938x_mbhc_micb_adjust_voltage.cfi_jt @ 0x080189c8 (size 8) =====

uint sym.wcd938x_mbhc_micb_adjust_voltage.cfi_jt(int64_t param_1,int param_2,int param_3)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    ulong *in_x18;
    uint uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_3 - 1U < 4) {
        uVar6 = *((param_3 - 1U) * 4 + 0x8016318);
        iVar1 = *(*(param_1 + 0x18) + 0x98) + 0x68;
        mutex_lock(iVar1);
        uVar4 = snd_soc_component_read(param_1,uVar6);
        if (param_2 - 0xb23U < 0xfffff8c5) {
            iVar5 = ___ratelimit(obj.wcd938x_get_micb_vout_ctl_val._rs,"wcd938x_get_micb_vout_ctl_val");
            if (iVar5 == 0) {
                uVar6 = 0xffffffea;
            }
            else {
                _printk(0x8009009,"wcd938x_get_micb_vout_ctl_val");
                uVar6 = 0xffffffea;
            }
        }
        else {
            uVar2 = (param_2 - 1000U >> 1 & 0x7fff) / 0x19;
            if ((uVar4 & 0x3f) != uVar2) {
                uVar3 = uVar4 >> 6 & 3;
                _dev_printk(0x800991b,*(param_1 + 0x18),"%s: micb_num: %d, cur_mv: %d, req_mv: %d, micb_en: %d\n",
                            "wcd938x_mbhc_micb_adjust_voltage",param_3,(uVar4 & 0x3f) * 0x32 + 1000,param_2,uVar3);
                if (uVar3 == 1) {
                    snd_soc_component_update_bits(param_1,uVar6,0xc0,0x80);
                    snd_soc_component_update_bits(param_1,uVar6,0x3f,uVar2);
                    snd_soc_component_update_bits(param_1,uVar6,0xc0,0x40);
                    usleep_range_state(2000,0x834,2);
                }
                else {
                    snd_soc_component_update_bits(param_1,uVar6,0x3f,uVar2);
                }
            }
            uVar6 = 0;
        }
        mutex_unlock(iVar1);
    }
    else {
        uVar6 = 0xffffffea;
    }
    return uVar6;
}


// ===== sym.wcd938x_codec_aux_dac_event.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt @ 0x080189d0 (size 8) =====

ulong sym.wcd938x_codec_aux_dac_event.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt
                (int64_t param_1,ulong param_2,int param_3)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    int64_t arg1;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(*(param_1 + 0x28) + -0xb8);
    arg1 = *(param_1 + 0x28) + -0xd0;
    iVar3 = *(iVar1 + 0x98);
    _dev_printk(0x800991b,iVar1,"%s wname: %s event: %d\n","wcd938x_codec_aux_dac_event",*(param_1 + 8),param_3);
    if (param_3 == 8) {
        snd_soc_component_update_bits(arg1,0x3408,4,0);
    }
    else if (param_3 == 1) {
        sym.wcd938x_rx_clk_enable(arg1);
        snd_soc_component_update_bits(arg1,0x3408,4,4);
        snd_soc_component_update_bits(arg1,0x3409,4,4);
        snd_soc_component_update_bits(arg1,0x344f,1,1);
        iVar2 = *(iVar3 + 0xc70);
        if (iVar2 == 0) {
            snd_soc_component_update_bits(arg1,0x30a4,4,0);
            iVar2 = *(iVar3 + 0xc70);
        }
        *(iVar3 + 0xc70) = iVar2 + 1;
        wcd_cls_h_fsm(arg1,iVar3 + 0xe0,1,8,*(iVar3 + 0x108));
    }
    return 0;
}


// ===== sym.wcd938x_codec_enable_micbias.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt @ 0x080189d8 (size 8) =====

void sym.wcd938x_codec_enable_micbias.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt
               (int64_t param_1,ulong param_2,uint32_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__wcd938x_codec_enable_micbias(param_1,param_3);
    return;
}


// ===== sym.wcd938x_enable_clsh.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt @ 0x080189e0 (size 8) =====

uint64_t sym.wcd938x_enable_clsh.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt
                   (int64_t param_1,ulong param_2,uint32_t param_3)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    char *arg3;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar8;
    int64_t iVar9;
    int64_t iVar10;
    int64_t iVar11;
    int64_t iVar12;
    ulong unaff_x30;
    uchar auStack_48 [4];
    uchar auStack_44 [4];
    uchar auStack_40 [4];
    char acStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_38 = *(iVar9 + 0x5e0);
    arg3 = "%s wname: %s event: %d\n";
    iVar10 = *(param_1 + 0x28);
    iVar9 = *(*(iVar10 + -0xb8) + 0x98);
    uVar6 = *(iVar9 + 0x108);
    _dev_printk(0x800991b,*(iVar10 + -0xb8),"%s wname: %s event: %d\n","wcd938x_enable_clsh",*(param_1 + 8),param_3
               );
    if (uVar6 < 6 && (1 << (uVar6 & 0x1f) & 0x36U) != 0) {
        arg3 = acStack_3c;
        acStack_3c[0] = '\0';
        auStack_40[0] = 0;
        iVar11 = *(*(iVar10 + -0xb8) + 0x98);
        auStack_44[0] = 0;
        auStack_48[0] = 0;
        iVar4 = sym.wcd938x_set_port_params(iVar10 + -0xd0,0x12,arg3,auStack_40);
        if (iVar4 != 0) goto code_r0x0801d0e4;
        if ((param_3 & 3) != 0) {
            arg3 = 0x1;
            swr_connect_port();
            goto code_r0x0801d0e4;
        }
        arg3 = 0x1;
        swr_disconnect_port(*(iVar11 + 0x28),acStack_3c,1,auStack_44,auStack_48);
        if ((param_3 & 0xc) == 0) goto code_r0x0801d114;
code_r0x0801d0ec:
        iVar9 = *(iVar9 + 0x28);
        arg3 = NULL;
        uVar7 = swr_slvdev_datapath_control(iVar9,*(iVar9 + 0x40));
    }
    else {
code_r0x0801d0e4:
        if ((param_3 & 0xc) != 0) goto code_r0x0801d0ec;
code_r0x0801d114:
        uVar7 = 0;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_38) {
        return uVar7;
    }
    iVar9 = __stack_chk_fail(uVar7);
    *extraout_x18 = sym.wcd938x_codec_enable_ear_pa;
    iVar11 = *(iVar9 + 0x28);
    iVar10 = *(iVar11 + -0xb8);
    iVar12 = *(iVar10 + 0x98);
    uVar6 = *(iVar12 + 0x108);
    _dev_printk(0x800991b,iVar10,"%s wname: %s event: %d\n","wcd938x_codec_enable_ear_pa",*(iVar9 + 8),
                arg3 & 0xffffffff);
    uVar5 = 0;
    if (7 < arg3 - 1U) goto code_r0x0801d49c;
    iVar11 = iVar11 + -0xd0;
    switch(arg3) {
    case 1:
        uVar5 = swr_slvdev_datapath_control(*(iVar12 + 0x28),*(*(iVar12 + 0x28) + 0x40),1);
        uVar6 = snd_soc_component_read(iVar11,0x3450);
        *(iVar12 + 0xc74) = uVar6;
        if ((uVar6 & 1) == 0) {
            snd_soc_component_update_bits(iVar11,0x3465,7,3);
            puVar1 = iVar12 + 0x160;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                    *puVar1 = *puVar1 | 0x4000;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            cVar2 = *(iVar12 + 0x120);
        }
        else {
            snd_soc_component_update_bits(iVar11,0x3467,1,1);
            cVar2 = *(iVar12 + 0x120);
        }
        if (cVar2 == '\0') {
            snd_soc_component_update_bits(iVar11,0x300b,0x80,0x80);
        }
        goto code_r0x0801d49c;
    case 2:
        usleep_range_state(6000,0x177a,2);
        if ((uVar6 < 9) && ((1 << (uVar6 & 0x1f) & 0x1c8U) != 0)) {
            snd_soc_component_update_bits(iVar11,0x3008,2,2);
        }
        pcVar8 = *(iVar12 + 0xc38);
        if ((*(iVar12 + 0xc74) & 1) == 0) {
            if (pcVar8 != NULL) {
                __cfi_slowpath_diag(0xec879b5e5e7b1759,pcVar8,0x8001930);
                (*pcVar8)(*(iVar12 + 0xc30),1,0);
            }
            wcd_enable_irq(iVar12 + 0x130,0xd);
        }
        else {
            if (pcVar8 != NULL) {
                __cfi_slowpath_diag(0xec879b5e5e7b1759,pcVar8,0x8001910);
                (*pcVar8)(*(iVar12 + 0xc30),1,0x20000);
            }
            wcd_enable_irq(iVar12 + 0x130,0xf);
        }
        break;
    default:
        goto code_r0x0801d49c;
    case 4:
        if ((*(iVar12 + 0xc74) & 1) == 0) {
            if ((*(iVar12 + 0x160) >> 0xd & 1) == 0) {
                wcd_disable_irq(iVar12 + 0x130,0xd);
                pcVar8 = *(iVar12 + 0xc38);
                if (pcVar8 != NULL) {
                    __cfi_slowpath_diag(0xec879b5e5e7b1759,pcVar8,0x8001970);
                    (*pcVar8)(*(iVar12 + 0xc30),1,1);
                }
            }
        }
        else {
            wcd_disable_irq(iVar12 + 0x130,0xf);
            pcVar8 = *(iVar12 + 0xc38);
            if (pcVar8 != NULL) {
                __cfi_slowpath_diag(0xec879b5e5e7b1759,pcVar8,0x8001950);
                (*pcVar8)(*(iVar12 + 0xc30),1,0x20001);
            }
        }
        break;
    case 8:
        if (*(iVar12 + 0x120) == '\0') {
            snd_soc_component_update_bits(iVar11,0x300b,0x80,0);
        }
        usleep_range_state(7000,0x1b62,2);
        if ((*(iVar12 + 0xc74) & 1) == 0) {
            snd_soc_component_update_bits(iVar11,0x3465,7,0);
            puVar1 = iVar12 + 0x160;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                    *puVar1 = *puVar1 & 0xffffffffffffbfff;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
        }
        else {
            snd_soc_component_update_bits(iVar11,0x3467,1,0);
        }
        wcd_cls_h_fsm(iVar11,iVar12 + 0xe0,2,1,uVar6);
        iVar4 = *(iVar12 + 0xc70) + -1;
        *(iVar12 + 0xc70) = iVar4;
        if (iVar4 == 0) {
            snd_soc_component_update_bits(iVar11,0x30a4,4,4);
        }
    }
    uVar5 = 0;
code_r0x0801d49c:
    return uVar5;
}


// ===== sym.wcd938x_enable_req.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt @ 0x080189e8 (size 8) =====

uint sym.wcd938x_enable_req.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt(int64_t param_1,ulong param_2,int param_3)

{
    uint8_t uVar1;
    code *pcVar2;
    int iVar3;
    int64_t iVar4;
    ulong uVar5;
    ulong uVar6;
    uint32_t uVar7;
    ulong *in_x18;
    int64_t iVar8;
    uint64_t uVar9;
    uint uVar10;
    int64_t iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(*(param_1 + 0x28) + -0xb8);
    iVar11 = *(iVar4 + 0x98);
    iVar8 = *(param_1 + 0x28) + -0xd0;
    _dev_printk(0x800991b,iVar4,"%s wname: %s event: %d\n","wcd938x_enable_req",*(param_1 + 8),param_3);
    if (param_3 != 8) {
        if (param_3 != 1) {
            return 0;
        }
        snd_soc_component_update_bits(iVar8,0x3408,8,8);
        snd_soc_component_update_bits(iVar8,0x3408,0x10,0x10);
        snd_soc_component_update_bits(iVar8,0x3457,2,2);
        snd_soc_component_update_bits(iVar8,0x3457,1,0);
        uVar1 = *(param_1 + 0x4c);
        if (uVar1 < 4) {
            snd_soc_component_update_bits(iVar8,*(L"@" + uVar1 * 2 + 8),*(L"@" + uVar1 * 2),*(L"@" + uVar1 * 2));
            uVar10 = 0;
        }
        else {
            iVar3 = ___ratelimit(obj.wcd938x_tx_channel_config._rs,"wcd938x_tx_channel_config");
            if (iVar3 != 0) {
                _printk(0x800902c,"wcd938x_tx_channel_config",uVar1);
            }
            uVar10 = 0xffffffea;
        }
        if (3 < *(param_1 + 0x4c)) {
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x5512,0x801c5fc);
            (*pcVar2)();
        }
        uVar7 = *(iVar11 + *(param_1 + 0x4c) * 4 + 0x10c);
        if (uVar7 < 7) {
            uVar7 = *(uVar7 * 4 + 0x80179b4);
        }
        else {
            iVar3 = ___ratelimit(obj.wcd938x_get_adc_mode._rs,"wcd938x_get_adc_mode");
            if (iVar3 != 0) {
                _printk(0x8003106,"wcd938x_get_adc_mode",uVar7);
            }
            uVar7 = 0xffffffea;
        }
        uVar9 = *(param_1 + 0x4c);
        switch(uVar9) {
        case 0:
            snd_soc_component_update_bits(iVar8,0x3410,0xf,uVar7 & 0xef);
            uVar5 = 0x10;
            uVar6 = 0x10;
            break;
        case 1:
            snd_soc_component_update_bits(iVar8,0x3410,0xf0,(uVar7 & 0xef) << 4);
            uVar5 = 0x20;
            uVar6 = 0x20;
            break;
        case 2:
            snd_soc_component_update_bits(iVar8,0x3411,0xf,uVar7 & 0xef);
            uVar5 = 0x40;
            uVar6 = 0x40;
            break;
        case 3:
            snd_soc_component_update_bits(iVar8,0x3411,0xf0,(uVar7 & 0xef) << 4);
            uVar5 = 0x80;
            uVar6 = 0x80;
            break;
        default:
            goto code_r0x0801c544;
        }
        snd_soc_component_update_bits(iVar8,0x3409,uVar5,uVar6);
        uVar9 = *(param_1 + 0x4c);
code_r0x0801c544:
        if (3 < uVar9) {
            iVar3 = ___ratelimit(obj.wcd938x_tx_channel_config._rs,"wcd938x_tx_channel_config");
            if (iVar3 != 0) {
                _printk(0x800902c,"wcd938x_tx_channel_config",uVar9);
            }
            return 0xffffffea;
        }
        uVar9 = -(uVar9 >> 7) & 0xfffffffffffffc00 | uVar9 << 2;
        snd_soc_component_update_bits(iVar8,*(L"@" + uVar9 + 0x10),*(L"@" + uVar9),0);
        return uVar10;
    }
    switch(*(param_1 + 0x4c)) {
    case 0:
        snd_soc_component_update_bits(iVar8,0x3410,0xf,0);
        uVar5 = 0x10;
        break;
    case 1:
        snd_soc_component_update_bits(iVar8,0x3410,0xf0,0);
        uVar5 = 0x20;
        break;
    case 2:
        snd_soc_component_update_bits(iVar8,0x3411,0xf,0);
        uVar5 = 0x40;
        break;
    case 3:
        snd_soc_component_update_bits(iVar8,0x3411,0xf0,0);
        uVar5 = 0x80;
        break;
    default:
        goto code_r0x0801c460;
    }
    snd_soc_component_update_bits(iVar8,0x3409,uVar5,0);
code_r0x0801c460:
    if (*(iVar11 + 0x11c) == 0) {
        snd_soc_component_update_bits(iVar8,0x3408,0x10,0);
        snd_soc_component_update_bits(iVar8,0x3408,8,0);
    }
    return 0;
}


// ===== sym.wcd938x_codec_enable_aux_pa.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt @ 0x080189f0 (size 8) =====

uint sym.wcd938x_codec_enable_aux_pa.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt
               (int64_t param_1,ulong param_2,int param_3)

{
    uint32_t uVar1;
    int iVar2;
    uint uVar3;
    int64_t iVar4;
    ulong *in_x18;
    code *pcVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = *(param_1 + 0x28);
    iVar4 = *(iVar7 + -0xb8);
    iVar6 = *(iVar4 + 0x98);
    uVar1 = *(iVar6 + 0x108);
    _dev_printk(0x800991b,iVar4,"%s wname: %s event: %d\n","wcd938x_codec_enable_aux_pa",*(param_1 + 8),param_3);
    if (7 < param_3 - 1U) {
        return 0;
    }
    iVar7 = iVar7 + -0xd0;
    switch(param_3) {
    case 1:
        uVar3 = swr_slvdev_datapath_control(*(iVar6 + 0x28),*(*(iVar6 + 0x28) + 0x40),1);
        snd_soc_component_update_bits(iVar7,0x3467,1,1);
        return uVar3;
    case 2:
        usleep_range_state(1000,0x3f2,2);
        if ((uVar1 < 9) && ((1 << (uVar1 & 0x1f) & 0x1c8U) != 0)) {
            snd_soc_component_update_bits(iVar7,0x3008,2,2);
        }
        pcVar5 = *(iVar6 + 0xc38);
        if (pcVar5 != NULL) {
            __cfi_slowpath_diag(0xec879b5e5e7b1759,pcVar5,0x8001990);
            (*pcVar5)(*(iVar6 + 0xc30),1,0x20000);
        }
        wcd_enable_irq(iVar6 + 0x130,0xf);
        break;
    case 4:
        wcd_disable_irq(iVar6 + 0x130,0xf);
        pcVar5 = *(iVar6 + 0xc38);
        if (pcVar5 != NULL) {
            __cfi_slowpath_diag(0xec879b5e5e7b1759,pcVar5,0x80019b0);
            (*pcVar5)(*(iVar6 + 0xc30),1,0x20001);
        }
        break;
    case 8:
        usleep_range_state(1000,0x3f2,2);
        snd_soc_component_update_bits(iVar7,0x3467,1,0);
        wcd_cls_h_fsm(iVar7,iVar6 + 0xe0,2,8,uVar1);
        iVar2 = *(iVar6 + 0xc70) + -1;
        *(iVar6 + 0xc70) = iVar2;
        if (iVar2 != 0) {
            return 0;
        }
        snd_soc_component_update_bits(iVar7,0x30a4,4,4);
    }
    return 0;
}


// ===== sym.wcd938x_tx_swr_ctrl.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt @ 0x080189f8 (size 8) =====

uint sym.wcd938x_tx_swr_ctrl.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt(int64_t param_1,ulong param_2,int param_3)

{
    char cVar1;
    bool bVar2;
    bool bVar3;
    bool bVar4;
    code *pcVar5;
    int iVar6;
    uint32_t uVar7;
    uint uVar8;
    int64_t iVar9;
    uint uVar10;
    uint uVar11;
    uint64_t uVar12;
    uint64_t *extraout_x8;
    uint64_t *puVar13;
    uint64_t uVar14;
    uint64_t extraout_x9;
    ulong *in_x18;
    int64_t iVar15;
    uint32_t uVar16;
    int64_t iVar17;
    ulong unaff_x30;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_48 = *(iVar9 + 0x5e0);
    iVar15 = *(param_1 + 0x28);
    uStack_4c = 0;
    iVar17 = *(*(iVar15 + -0xb8) + 0x98);
    iVar6 = swr_read(*(iVar17 + 0x30),*(*(iVar17 + 0x30) + 0x40),0x44,&uStack_4c,1);
    bVar3 = iVar6 != 0;
    bVar4 = (uStack_4c & 0x40) != 0;
    iVar9 = strnstr(*(param_1 + 8),0x8008174,4);
    if (iVar9 == 0) {
        uVar16 = 0;
    }
    else {
        uVar12 = *(param_1 + 0x4c) - 0x1e;
        if (3 < uVar12) goto code_r0x0801cb94;
        uVar16 = *(iVar17 + uVar12 * 4 + 0x10c) - 4;
        if (uVar16 < 3) {
            uVar16 = *(uVar16 * 4 + 0x80179d0);
        }
        else {
            uVar16 = 9600000;
        }
    }
    iVar15 = iVar15 + -0xd0;
    if (param_3 != 8) {
        if (param_3 == 1) {
            if (((*(param_1 + 0x4c) == '\x1f') &&
                (uVar7 = snd_soc_component_read(iVar15,0x3127), (uVar7 >> 7 & 1) == 0)) && (*(iVar17 + 0x123) == '\0')
               ) {
                sym.wcd938x_tx_connect_port(iVar15,0x1d,4800000,1);
                puVar13 = iVar17 + 0x160;
                Hint_Prefetch(puVar13,2,0,1);
                do {
                    cVar1 = '\x01';
                    bVar3 = ExclusiveMonitorPass(puVar13,0x10);
                    if (bVar3) {
                        *puVar13 = *puVar13 | 0x80;
                        cVar1 = ExclusiveMonitorsStatus();
                    }
                } while (cVar1 != '\0');
            }
            iVar9 = strnstr(*(param_1 + 8),0x8008174,4);
            uVar12 = *(param_1 + 0x4c);
            if (iVar9 == 0) {
                uVar7 = 2400000;
                goto code_r0x0801c7e8;
            }
            uVar14 = 1L << (uVar12 - 0x1e & 0x3f);
            puVar13 = iVar17 + (uVar12 - 0x1e >> 6 & 0x3ffffff) * 8 + 0x160;
            goto code_r0x0801cba0;
        }
        uVar8 = 0;
        goto code_r0x0801cb5c;
    }
    iVar9 = strnstr(*(param_1 + 8),0x8008174,4);
    if (iVar9 != 0) {
        iVar9 = strnstr(*(param_1 + 8),"ADC1",5);
        if (iVar9 == 0) {
            iVar9 = strnstr(*(param_1 + 8),"ADC2",5);
            if (iVar9 == 0) {
                iVar9 = strnstr(*(param_1 + 8),"ADC3",5);
                if (iVar9 == 0) {
                    iVar9 = strnstr(*(param_1 + 8),"ADC4",5);
                    if (iVar9 != 0) {
                        puVar13 = iVar17 + 0x160;
                        Hint_Prefetch(puVar13,2,0,1);
                        do {
                            cVar1 = '\x01';
                            bVar2 = ExclusiveMonitorPass(puVar13,0x10);
                            if (bVar2) {
                                *puVar13 = *puVar13 & 0xfffffffffffffff7;
                                cVar1 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar1 != '\0');
                        Hint_Prefetch(puVar13,2,0,1);
                        do {
                            cVar1 = '\x01';
                            bVar2 = ExclusiveMonitorPass(puVar13,0x10);
                            if (bVar2) {
                                *puVar13 = *puVar13 & 0xffffffffffffefff;
                                cVar1 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar1 != '\0');
                    }
                }
                else {
                    puVar13 = iVar17 + 0x160;
                    Hint_Prefetch(puVar13,2,0,1);
                    do {
                        cVar1 = '\x01';
                        bVar2 = ExclusiveMonitorPass(puVar13,0x10);
                        if (bVar2) {
                            *puVar13 = *puVar13 & 0xfffffffffffffffb;
                            cVar1 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar1 != '\0');
                    Hint_Prefetch(puVar13,2,0,1);
                    do {
                        cVar1 = '\x01';
                        bVar2 = ExclusiveMonitorPass(puVar13,0x10);
                        if (bVar2) {
                            *puVar13 = *puVar13 & 0xfffffffffffff7ff;
                            cVar1 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar1 != '\0');
                }
            }
            else {
                puVar13 = iVar17 + 0x160;
                Hint_Prefetch(puVar13,2,0,1);
                do {
                    cVar1 = '\x01';
                    bVar2 = ExclusiveMonitorPass(puVar13,0x10);
                    if (bVar2) {
                        *puVar13 = *puVar13 & 0xfffffffffffffffd;
                        cVar1 = ExclusiveMonitorsStatus();
                    }
                } while (cVar1 != '\0');
                Hint_Prefetch(puVar13,2,0,1);
                do {
                    cVar1 = '\x01';
                    bVar2 = ExclusiveMonitorPass(puVar13,0x10);
                    if (bVar2) {
                        *puVar13 = *puVar13 & 0xfffffffffffffbff;
                        cVar1 = ExclusiveMonitorsStatus();
                    }
                } while (cVar1 != '\0');
            }
        }
        else {
            puVar13 = iVar17 + 0x160;
            Hint_Prefetch(puVar13,2,0,1);
            do {
                cVar1 = '\x01';
                bVar2 = ExclusiveMonitorPass(puVar13,0x10);
                if (bVar2) {
                    *puVar13 = *puVar13 & 0xfffffffffffffffe;
                    cVar1 = ExclusiveMonitorsStatus();
                }
            } while (cVar1 != '\0');
            Hint_Prefetch(puVar13,2,0,1);
            do {
                cVar1 = '\x01';
                bVar2 = ExclusiveMonitorPass(puVar13,0x10);
                if (bVar2) {
                    *puVar13 = *puVar13 & 0xfffffffffffffdff;
                    cVar1 = ExclusiveMonitorsStatus();
                }
            } while (cVar1 != '\0');
        }
    }
    iVar9 = strnstr(*(param_1 + 8),0x8008174,4);
    if (iVar9 != 0) {
        if (((*(iVar17 + 0x160) & 1) == 0) && ((*(iVar17 + 0x160) >> 9 & 1) == 0)) {
            uVar7 = 0;
            if ((*(iVar17 + 0x160) >> 1 & 1) != 0) goto code_r0x0801c914;
code_r0x0801c90c:
            if ((*(iVar17 + 0x160) >> 10 & 1) != 0) goto code_r0x0801c914;
        }
        else {
            if (6 < *(iVar17 + 0x10c)) goto code_r0x0801cb94;
            uVar7 = obj.tx_mode_bit[*(iVar17 + 0x10c)];
            if ((*(iVar17 + 0x160) >> 1 & 1) == 0) goto code_r0x0801c90c;
code_r0x0801c914:
            if (6 < *(iVar17 + 0x110)) goto code_r0x0801cb94;
            uVar7 = obj.tx_mode_bit[*(iVar17 + 0x110)] | uVar7;
        }
        if (((*(iVar17 + 0x160) >> 2 & 1) != 0) || ((*(iVar17 + 0x160) >> 0xb & 1) != 0)) {
            if (6 < *(iVar17 + 0x114)) goto code_r0x0801cb94;
            uVar7 = obj.tx_mode_bit[*(iVar17 + 0x114)] | uVar7;
        }
        if (((*(iVar17 + 0x160) >> 3 & 1) != 0) || ((*(iVar17 + 0x160) >> 0xc & 1) != 0)) {
            if (6 < *(iVar17 + 0x118)) {
code_r0x0801cb94:
    //WARNING: Does not return
                pcVar5 = SoftwareBreakpoint(0x5512,0x801cb98);
                (*pcVar5)();
            }
            uVar7 = obj.tx_mode_bit[*(iVar17 + 0x118)] | uVar7;
        }
        uVar16 = 9600000;
        if ((((uVar7 != 0) && ((uVar7 & 1) == 0)) && ((uVar7 >> 1 & 1) == 0)) &&
           (uVar16 = 9600000, (uVar7 >> 2 & 1) == 0)) {
            if ((uVar7 >> 3 & 1) == 0) {
                uVar16 = 600000;
                if ((uVar7 & 0x10) != 0) {
                    uVar16 = 1200000;
                }
            }
            else {
                uVar16 = 4800000;
            }
        }
        uVar7 = *(iVar17 + 0x11c) * uVar16;
        if (9599999 < uVar7) {
            uVar7 = 9600000;
        }
        if (*(iVar17 + 0x11c) != 0) {
            uVar16 = uVar7;
        }
        uVar8 = 0;
        if (uVar16 < 2400000) {
            if (uVar16 == 600000) {
                uVar10 = 6;
                uVar8 = 0x60;
            }
            else {
                if (uVar16 != 1200000) goto code_r0x0801ca64;
                uVar10 = 5;
                uVar8 = 0x50;
            }
code_r0x0801ca60:
            if (bVar3 || bVar4) {
                uVar8 = uVar10;
            }
        }
        else {
            if (uVar16 == 2400000) {
                uVar10 = 3;
                uVar8 = 0x30;
                goto code_r0x0801ca60;
            }
            if ((uVar16 == 4800000) && (uVar8 = 0x10, bVar3 || bVar4)) {
                uVar8 = 1;
            }
        }
code_r0x0801ca64:
        uVar10 = 0xf0;
        if (bVar3 || bVar4) {
            uVar10 = 0xf;
        }
        snd_soc_component_update_bits(iVar15,0x3405,uVar10,uVar8);
    }
    uVar8 = swr_slvdev_datapath_control(*(iVar17 + 0x30),*(*(iVar17 + 0x30) + 0x40),0);
    iVar9 = strnstr(*(param_1 + 8),0x8008174,4);
    if (iVar9 == 0) goto code_r0x0801cb5c;
    uVar10 = 0;
    if (uVar16 < 2400000) {
        if (uVar16 == 600000) {
            uVar11 = 0x60;
            uVar10 = 6;
        }
        else {
            if (uVar16 != 1200000) goto code_r0x0801cb40;
            uVar11 = 0x50;
            uVar10 = 5;
        }
code_r0x0801cb3c:
        if (bVar3 || bVar4) {
            uVar10 = uVar11;
        }
    }
    else {
        if (uVar16 == 2400000) {
            uVar11 = 0x30;
            uVar10 = 3;
            goto code_r0x0801cb3c;
        }
        if ((uVar16 == 4800000) && (uVar10 = 0x10, !bVar3 && !bVar4)) {
            uVar10 = 1;
        }
    }
code_r0x0801cb40:
    uVar11 = 0xf;
    if (bVar3 || bVar4) {
        uVar11 = 0xf0;
    }
    snd_soc_component_update_bits(iVar15,0x3405,uVar11,uVar10);
code_r0x0801cb5c:
    while (iVar9 = sp_el0, *(iVar9 + 0x5e0) != iStack_48) {
        __stack_chk_fail();
        puVar13 = extraout_x8;
        uVar14 = extraout_x9;
code_r0x0801cba0:
        Hint_Prefetch(puVar13,2,0,1);
        do {
            cVar1 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar13,0x10);
            if (bVar3) {
                *puVar13 = *puVar13 | uVar14;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        uVar12 = *(param_1 + 0x4c);
        uVar7 = uVar16;
code_r0x0801c7e8:
        sym.wcd938x_tx_connect_port(iVar15,uVar12,uVar7,1);
        uVar8 = 0;
    }
    return uVar8;
}


// ===== sym.wcd938x_codec_ear_dac_event.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt @ 0x08018a00 (size 8) =====

ulong sym.wcd938x_codec_ear_dac_event.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt
                (int64_t param_1,ulong param_2,int param_3)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong uVar4;
    ulong uVar5;
    int iVar6;
    ulong *in_x18;
    int64_t arg1;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(param_1 + 0x28) + -0xb8);
    arg1 = *(param_1 + 0x28) + -0xd0;
    iVar7 = *(iVar2 + 0x98);
    _dev_printk(0x800991b,iVar2,"%s wname: %s event: %d\n","wcd938x_codec_ear_dac_event",*(param_1 + 8),param_3);
    if (param_3 != 8) {
        if (param_3 != 1) {
            return 0;
        }
        sym.wcd938x_rx_clk_enable(arg1);
        uVar1 = snd_soc_component_read(arg1,0x3450);
        *(iVar7 + 0xc74) = uVar1;
        if ((uVar1 & 1) == 0) {
            snd_soc_component_update_bits(arg1,0x344e,4,4);
            snd_soc_component_update_bits(arg1,0x3409,1,1);
            if (*(iVar7 + 0x120) == '\0') goto code_r0x0801e5c8;
            uVar3 = 0x3414;
            uVar4 = 2;
            uVar5 = 2;
        }
        else {
            snd_soc_component_update_bits(arg1,0x30ec,0x80,0);
            snd_soc_component_update_bits(arg1,0x344f,1,1);
            snd_soc_component_update_bits(arg1,0x3409,4,4);
            uVar3 = 0x300b;
            uVar4 = 0x80;
            uVar5 = 0x80;
        }
        snd_soc_component_update_bits(arg1,uVar3,uVar4,uVar5);
code_r0x0801e5c8:
        usleep_range_state(5000,0x1392,2);
        iVar6 = *(iVar7 + 0xc70);
        if (iVar6 == 0) {
            snd_soc_component_update_bits(arg1,0x30a4,4,0);
            iVar6 = *(iVar7 + 0xc70);
        }
        *(iVar7 + 0xc70) = iVar6 + 1;
        wcd_cls_h_fsm(arg1,iVar7 + 0xe0,1,1,*(iVar7 + 0x108));
        return 0;
    }
    if ((*(iVar7 + 0xc74) & 1) == 0) {
        if ((*(iVar7 + 0x160) >> 0xd & 1) == 0) {
            snd_soc_component_update_bits(arg1,0x344e,4,0);
            snd_soc_component_update_bits(arg1,0x3409,1,0);
        }
        if (*(iVar7 + 0x120) == '\0') goto code_r0x0801e644;
        uVar3 = 0x3414;
        uVar4 = 2;
    }
    else {
        snd_soc_component_update_bits(arg1,0x344f,1,0);
        uVar3 = 0x3409;
        uVar4 = 4;
    }
    snd_soc_component_update_bits(arg1,uVar3,uVar4,0);
code_r0x0801e644:
    snd_soc_component_update_bits(arg1,0x300b,0x80,0);
    snd_soc_component_update_bits(arg1,0x30ec,0x80,0x80);
    return 0;
}


// ===== sym.wcd938x_codec_enable_dmic.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt @ 0x08018a08 (size 8) =====

ulong sym.wcd938x_codec_enable_dmic.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt(int64_t param_1,ulong param_2,int param_3)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int iVar4;
    ulong *in_x18;
    int64_t arg1;
    ulong uVar5;
    ulong uVar6;
    ulong uVar7;
    int64_t iVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x28);
    iVar8 = *(*(iVar2 + -0xb8) + 0x98);
    arg1 = iVar2 + -0xd0;
    _dev_printk(0x800991b,*(iVar2 + -0xb8),"%s wname: %s event: %d\n","wcd938x_codec_enable_dmic",*(param_1 + 8),
                param_3);
    iVar4 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar6 = 0xf;
    uVar5 = 0x345c;
    uVar7 = 0x3462;
    iVar3 = 200;
    iVar1 = 0;
    switch(*(param_1 + 0x4c)) {
    case 0:
    case 1:
        break;
    case 2:
        iVar4 = 0x345d;
    case 3:
        uVar6 = 0xf0;
        uVar9 = 4;
        uVar10 = 1;
        uVar5 = 0x345d;
        uVar7 = 0x3462;
        iVar3 = 0xcc;
        iVar1 = iVar4;
        break;
    case 4:
    case 5:
        uVar9 = 0;
        uVar6 = 0xf;
        uVar10 = 2;
        uVar5 = 0x345e;
        uVar7 = 0x3463;
        iVar3 = 0xd0;
        iVar1 = 0;
        break;
    case 6:
    case 7:
        uVar6 = 0xf0;
        uVar9 = 4;
        uVar10 = 3;
        uVar5 = 0x345f;
        uVar7 = 0x3463;
        iVar3 = 0xd4;
        iVar1 = 0;
        break;
    default:
        iVar1 = ___ratelimit(obj.wcd938x_codec_enable_dmic._rs,"wcd938x_codec_enable_dmic");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        _dev_err(*(iVar2 + -0xb8),"%s: Invalid DMIC Selection\n","wcd938x_codec_enable_dmic");
        return 0xffffffea;
    }
    _dev_printk(0x800991b,*(iVar2 + -0xb8),"%s: event %d DMIC%d dmic_clk_cnt %d\n","wcd938x_codec_enable_dmic",
                param_3,*(param_1 + 0x4c) + 1,*(iVar8 + iVar3));
    if (param_3 == 8) {
        sym.wcd938x_tx_connect_port(arg1,*(param_1 + 0x4c) + 0x22,0,0);
        snd_soc_component_update_bits(arg1,0x345a,1 << uVar10,1 << uVar10);
        if (iVar1 != 0) {
            snd_soc_component_update_bits(arg1,iVar1,0x80,0);
        }
        snd_soc_component_update_bits(arg1,uVar5,8,0);
    }
    else if (param_3 == 1) {
        snd_soc_component_update_bits(arg1,0x345a,1 << uVar10,0);
        usleep_range_state(0xfa,0x104,2);
        if (iVar1 != 0) {
            snd_soc_component_update_bits(arg1,iVar1,0x80,0x80);
        }
        snd_soc_component_update_bits(arg1,uVar7,uVar6,3 << uVar9);
        snd_soc_component_update_bits(arg1,uVar5,8,8);
        snd_soc_component_update_bits(arg1,0x345b,6,6);
        iVar2 = *(iVar8 + 0x30);
        uVar5 = swr_slvdev_datapath_control(iVar2,*(iVar2 + 0x40),1);
        return uVar5;
    }
    return 0;
}


// ===== sym.wcd938x_codec_enable_micbias_pullup.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt @ 0x08018a10 (size 8) =====

ulong sym.wcd938x_codec_enable_micbias_pullup.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt
                (int64_t param_1,ulong param_2,int param_3)

{
    int64_t iVar1;
    int64_t arg3;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x28);
    _dev_printk(0x800991b,*(iVar2 + -0xb8),"%s: wname: %s, event: %d\n","__wcd938x_codec_enable_micbias_pullup",
                *(param_1 + 8),param_3);
    iVar1 = strnstr(*(param_1 + 8),"VA MIC BIAS1",0xd);
    if (iVar1 == 0) {
        iVar1 = strnstr(*(param_1 + 8),"VA MIC BIAS2",0xd);
        if (iVar1 == 0) {
            iVar1 = strnstr(*(param_1 + 8),"VA MIC BIAS3",0xd);
            if (iVar1 == 0) {
                iVar1 = strnstr(*(param_1 + 8),"VA MIC BIAS4",0xd);
                if (iVar1 == 0) {
                    return 0xffffffea;
                }
                iVar1 = 4;
            }
            else {
                iVar1 = 3;
            }
        }
        else {
            iVar1 = 2;
        }
    }
    else {
        iVar1 = 1;
    }
    if (param_3 == 8) {
        arg3 = 1;
    }
    else {
        if (param_3 == 2) {
            usleep_range_state(1000,0x44c,2);
            return 0;
        }
        if (param_3 != 1) {
            return 0;
        }
        arg3 = 0;
    }
    sym.wcd938x_micbias_control(iVar2 + -0xd0,iVar1,arg3,1);
    return 0;
}


// ===== sym.wcd938x_enable_rx3.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt @ 0x08018a18 (size 8) =====

ulong sym.wcd938x_enable_rx3.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt(int64_t param_1,ulong param_2,int param_3)

{
    int iVar1;
    char *arg3;
    int64_t iVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    int64_t iVar4;
    ulong unaff_x30;
    uint uStack_3c;
    uchar auStack_38 [4];
    uchar auStack_34 [4];
    uchar auStack_30 [4];
    char acStack_2c [4];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    arg3 = "%s wname: %s event: %d\n";
    iVar2 = *(param_1 + 0x28);
    iVar3 = iVar2 + -0xd0;
    _dev_printk(0x800991b,*(iVar2 + -0xb8),"%s wname: %s event: %d\n","wcd938x_enable_rx3",*(param_1 + 8),param_3);
    if (param_3 == 8) {
        iVar2 = *(*(iVar2 + -0xb8) + 0x98);
        acStack_2c[0] = '\0';
        auStack_34[0] = 0;
        auStack_38[0] = 0;
        iVar1 = sym.wcd938x_set_port_params(iVar3,0x13,acStack_2c,auStack_30);
        if (iVar1 == 0) {
            swr_disconnect_port(*(iVar2 + 0x28),acStack_2c,1,auStack_34,auStack_38);
        }
        usleep_range_state(6000,0x177a,2);
        sym.wcd938x_rx_clk_disable(iVar3);
        arg3 = 0x4;
        snd_soc_component_update_bits(iVar3,0x3409,4,0);
    }
    else if (param_3 == 1) {
        arg3 = acStack_2c;
        iVar2 = *(*(iVar2 + -0xb8) + 0x98);
        acStack_2c[0] = '\0';
        auStack_30[0] = 0;
        auStack_34[0] = 0;
        auStack_38[0] = 0;
        uStack_3c = 0;
        iVar1 = sym.wcd938x_set_port_params(iVar3,0x13,arg3,auStack_30);
        if (iVar1 == 0) {
            arg3 = 0x1;
            swr_connect_port(*(iVar2 + 0x28),acStack_2c,1,auStack_34,&uStack_3c,auStack_30,auStack_38);
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return 0;
    }
    iVar2 = __stack_chk_fail();
    *extraout_x18 = sym.wcd938x_codec_enable_micbias_pullup;
    iVar4 = *(iVar2 + 0x28);
    _dev_printk(0x800991b,*(iVar4 + -0xb8),"%s: wname: %s, event: %d\n","__wcd938x_codec_enable_micbias_pullup",
                *(iVar2 + 8),arg3 & 0xffffffff);
    iVar3 = strnstr(*(iVar2 + 8),"VA MIC BIAS1",0xd);
    if (iVar3 == 0) {
        iVar3 = strnstr(*(iVar2 + 8),"VA MIC BIAS2",0xd);
        if (iVar3 == 0) {
            iVar3 = strnstr(*(iVar2 + 8),"VA MIC BIAS3",0xd);
            if (iVar3 == 0) {
                iVar2 = strnstr(*(iVar2 + 8),"VA MIC BIAS4",0xd);
                if (iVar2 == 0) {
                    return 0xffffffea;
                }
                iVar2 = 4;
            }
            else {
                iVar2 = 3;
            }
        }
        else {
            iVar2 = 2;
        }
    }
    else {
        iVar2 = 1;
    }
    iVar1 = arg3;
    if (iVar1 == 8) {
        iVar3 = 1;
    }
    else {
        if (iVar1 == 2) {
            usleep_range_state(1000,0x44c,2);
            return 0;
        }
        if (iVar1 != 1) {
            return 0;
        }
        iVar3 = 0;
    }
    sym.wcd938x_micbias_control(iVar4 + -0xd0,iVar2,iVar3,1);
    return 0;
}


// ===== sym.wcd938x_codec_hphr_dac_event.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt @ 0x08018a20 (size 8) =====

ulong sym.wcd938x_codec_hphr_dac_event.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt
                (int64_t param_1,ulong param_2,int param_3)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong uVar4;
    ulong uVar5;
    ulong *in_x18;
    int64_t arg1;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(param_1 + 0x28) + -0xb8);
    arg1 = *(param_1 + 0x28) + -0xd0;
    iVar6 = *(iVar2 + 0x98);
    _dev_printk(0x800991b,iVar2,"%s wname: %s event: %d\n","wcd938x_codec_hphr_dac_event",*(param_1 + 8),param_3);
    if (param_3 == 8) {
        uVar3 = 0x3136;
        uVar4 = 0xf;
        uVar5 = 1;
    }
    else if (param_3 == 2) {
        snd_soc_component_update_bits(arg1,0x3136,0xf,2);
        if (*(iVar6 + 0x121) == '\0') {
            snd_soc_component_update_bits(arg1,0x3414,1,0);
            uVar3 = 0x30d6;
            uVar4 = 0x20;
            uVar5 = 0x20;
        }
        else {
            snd_soc_component_update_bits(arg1,0x3414,1,1);
            if ((*(iVar6 + 0x120) == '\0') || (uVar1 = snd_soc_component_read(arg1,0x3414), (uVar1 >> 1 & 1) != 0)) {
                usleep_range_state(5000,0x1392,2);
            }
            uVar3 = 0x313a;
            uVar4 = 2;
            uVar5 = 0;
        }
    }
    else {
        if (param_3 != 1) {
            return 0;
        }
        sym.wcd938x_rx_clk_enable(arg1);
        snd_soc_component_update_bits(arg1,0x3409,2,2);
        snd_soc_component_update_bits(arg1,0x344e,8,8);
        uVar3 = 0x30d9;
        uVar4 = 0x80;
        uVar5 = 0;
    }
    snd_soc_component_update_bits(arg1,uVar3,uVar4,uVar5);
    return 0;
}


// ===== sym.wcd938x_enable_rx1.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt @ 0x08018a28 (size 8) =====

ulong sym.wcd938x_enable_rx1.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt(int64_t param_1,ulong param_2,uint32_t param_3)

{
    int iVar1;
    int64_t iVar2;
    char *pcVar3;
    char *arg3;
    int64_t iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t iVar5;
    int64_t arg1;
    uint64_t uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    ulong unaff_x30;
    uint uStack_dc;
    uchar auStack_d8 [4];
    uchar auStack_d4 [4];
    uchar auStack_d0 [4];
    char acStack_cc [4];
    int64_t iStack_c8;
    uchar **ppuStack_c0;
    code *pcStack_b8;
    uint64_t uStack_b0;
    int64_t iStack_a8;
    uint uStack_9c;
    uchar auStack_98 [4];
    uchar auStack_94 [4];
    uchar auStack_90 [4];
    char acStack_8c [4];
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    int64_t iStack_70;
    uint64_t uStack_60;
    int64_t iStack_58;
    uint uStack_4c;
    uchar auStack_48 [4];
    uchar auStack_44 [4];
    uchar auStack_40 [4];
    char acStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    uVar6 = param_3;
    iStack_38 = *(iVar4 + 0x5e0);
    pcVar3 = "%s wname: %s event: %d\n";
    iVar4 = *(param_1 + 0x28);
    iVar5 = iVar4 + -0xd0;
    iVar8 = *(*(iVar4 + -0xb8) + 0x98);
    _dev_printk(0x800991b,*(iVar4 + -0xb8),"%s wname: %s event: %d\n","wcd938x_enable_rx1",*(param_1 + 8),uVar6);
    if (param_3 == 8) {
        if (((*(iVar8 + 0x160) >> 0xd & 1) == 0) && ((*(iVar8 + 0x160) >> 0xe & 1) == 0)) {
            uVar6 = *(*(iVar4 + -0xb8) + 0x98);
            acStack_3c[0] = '\0';
            auStack_44[0] = 0;
            auStack_48[0] = 0;
            iVar1 = sym.wcd938x_set_port_params(iVar5,0xe,acStack_3c,auStack_40);
            if (iVar1 == 0) {
                swr_disconnect_port(*(uVar6 + 0x28),acStack_3c,1,auStack_44,auStack_48);
            }
            if (*(iVar8 + 0x120) != '\0') {
                uVar6 = *(*(iVar4 + -0xb8) + 0x98);
                acStack_3c[0] = '\0';
                auStack_44[0] = 0;
                auStack_48[0] = 0;
                iVar1 = sym.wcd938x_set_port_params(iVar5,0x10,acStack_3c,auStack_40);
                if (iVar1 == 0) {
                    swr_disconnect_port(*(uVar6 + 0x28),acStack_3c,1,auStack_44,auStack_48);
                }
            }
            sym.wcd938x_rx_clk_disable(iVar5);
            pcVar3 = 0x1;
            snd_soc_component_update_bits(iVar5,0x3409,1,0);
        }
    }
    else if (param_3 == 1) {
        pcVar3 = acStack_3c;
        uVar6 = *(*(iVar4 + -0xb8) + 0x98);
        acStack_3c[0] = '\0';
        auStack_40[0] = 0;
        auStack_44[0] = 0;
        auStack_48[0] = 0;
        uStack_4c = 0;
        iVar1 = sym.wcd938x_set_port_params(iVar5,0xe,pcVar3,auStack_40);
        if (iVar1 == 0) {
            pcVar3 = 0x1;
            swr_connect_port(*(uVar6 + 0x28),acStack_3c,1,auStack_44,&uStack_4c,auStack_40,auStack_48);
        }
        if (*(iVar8 + 0x120) != '\0') {
            pcVar3 = acStack_3c;
            uVar6 = *(*(iVar4 + -0xb8) + 0x98);
            acStack_3c[0] = '\0';
            auStack_40[0] = 0;
            auStack_44[0] = 0;
            auStack_48[0] = 0;
            uStack_4c = 0;
            iVar1 = sym.wcd938x_set_port_params(iVar5,0x10,pcVar3,auStack_40);
            if (iVar1 == 0) {
                pcVar3 = 0x1;
                swr_connect_port(*(uVar6 + 0x28),acStack_3c,1,auStack_44,&uStack_4c,auStack_40,auStack_48);
            }
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return 0;
    }
    iVar2 = __stack_chk_fail();
    *extraout_x18 = sym.wcd938x_enable_rx2;
    pcStack_78 = sym.wcd938x_enable_rx2;
    iVar4 = sp_el0;
    uVar7 = pcVar3 & 0xffffffff;
    iStack_88 = *(iVar4 + 0x5e0);
    arg3 = "%s wname: %s event: %d\n";
    iVar4 = *(iVar2 + 0x28);
    arg1 = iVar4 + -0xd0;
    iVar9 = *(*(iVar4 + -0xb8) + 0x98);
    puStack_80 = &stack0xffffffffffffffd0;
    iStack_70 = iVar8;
    uStack_60 = uVar6;
    iStack_58 = iVar5;
    _dev_printk(0x800991b,*(iVar4 + -0xb8),"%s wname: %s event: %d\n","wcd938x_enable_rx2",*(iVar2 + 8),uVar7);
    if (pcVar3 == 8) {
        uVar7 = *(*(iVar4 + -0xb8) + 0x98);
        acStack_8c[0] = '\0';
        auStack_94[0] = 0;
        auStack_98[0] = 0;
        iVar1 = sym.wcd938x_set_port_params(arg1,0xf,acStack_8c,auStack_90);
        if (iVar1 == 0) {
            swr_disconnect_port(*(uVar7 + 0x28),acStack_8c,1,auStack_94,auStack_98);
        }
        if (*(iVar9 + 0x121) != '\0') {
            uVar7 = *(*(iVar4 + -0xb8) + 0x98);
            acStack_8c[0] = '\0';
            auStack_94[0] = 0;
            auStack_98[0] = 0;
            iVar1 = sym.wcd938x_set_port_params(arg1,0x11,acStack_8c,auStack_90);
            if (iVar1 == 0) {
                swr_disconnect_port(*(uVar7 + 0x28),acStack_8c,1,auStack_94,auStack_98);
            }
        }
        sym.wcd938x_rx_clk_disable(arg1);
        arg3 = 0x2;
        snd_soc_component_update_bits(arg1,0x3409,2,0);
    }
    else if (pcVar3 == 1) {
        arg3 = acStack_8c;
        uVar7 = *(*(iVar4 + -0xb8) + 0x98);
        acStack_8c[0] = '\0';
        auStack_90[0] = 0;
        auStack_94[0] = 0;
        auStack_98[0] = 0;
        uStack_9c = 0;
        iVar1 = sym.wcd938x_set_port_params(arg1,0xf,arg3,auStack_90);
        if (iVar1 == 0) {
            arg3 = 0x1;
            swr_connect_port(*(uVar7 + 0x28),acStack_8c,1,auStack_94,&uStack_9c,auStack_90,auStack_98);
        }
        if (*(iVar9 + 0x121) != '\0') {
            arg3 = acStack_8c;
            uVar7 = *(*(iVar4 + -0xb8) + 0x98);
            acStack_8c[0] = '\0';
            auStack_90[0] = 0;
            auStack_94[0] = 0;
            auStack_98[0] = 0;
            uStack_9c = 0;
            iVar1 = sym.wcd938x_set_port_params(arg1,0x11,arg3,auStack_90);
            if (iVar1 == 0) {
                arg3 = 0x1;
                swr_connect_port(*(uVar7 + 0x28),acStack_8c,1,auStack_94,&uStack_9c,auStack_90,auStack_98);
            }
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_88) {
        iVar5 = __stack_chk_fail();
        *extraout_x18_00 = sym.wcd938x_enable_rx3;
        pcStack_b8 = sym.wcd938x_enable_rx3;
        iVar4 = sp_el0;
        iStack_c8 = *(iVar4 + 0x5e0);
        pcVar3 = "%s wname: %s event: %d\n";
        iVar4 = *(iVar5 + 0x28);
        iVar8 = iVar4 + -0xd0;
        ppuStack_c0 = &puStack_80;
        uStack_b0 = uVar7;
        iStack_a8 = arg1;
        _dev_printk(0x800991b,*(iVar4 + -0xb8),"%s wname: %s event: %d\n","wcd938x_enable_rx3",*(iVar5 + 8),
                    arg3 & 0xffffffff);
        if (arg3 == 8) {
            iVar4 = *(*(iVar4 + -0xb8) + 0x98);
            acStack_cc[0] = '\0';
            auStack_d4[0] = 0;
            auStack_d8[0] = 0;
            iVar1 = sym.wcd938x_set_port_params(iVar8,0x13,acStack_cc,auStack_d0);
            if (iVar1 == 0) {
                swr_disconnect_port(*(iVar4 + 0x28),acStack_cc,1,auStack_d4,auStack_d8);
            }
            usleep_range_state(6000,0x177a,2);
            sym.wcd938x_rx_clk_disable(iVar8);
            pcVar3 = 0x4;
            snd_soc_component_update_bits(iVar8,0x3409,4,0);
        }
        else if (arg3 == 1) {
            pcVar3 = acStack_cc;
            iVar4 = *(*(iVar4 + -0xb8) + 0x98);
            acStack_cc[0] = '\0';
            auStack_d0[0] = 0;
            auStack_d4[0] = 0;
            auStack_d8[0] = 0;
            uStack_dc = 0;
            iVar1 = sym.wcd938x_set_port_params(iVar8,0x13,pcVar3,auStack_d0);
            if (iVar1 == 0) {
                pcVar3 = 0x1;
                swr_connect_port(*(iVar4 + 0x28),acStack_cc,1,auStack_d4,&uStack_dc,auStack_d0,auStack_d8);
            }
        }
        iVar4 = sp_el0;
        if (*(iVar4 + 0x5e0) == iStack_c8) {
            return 0;
        }
        iVar4 = __stack_chk_fail();
        *extraout_x18_01 = sym.wcd938x_codec_enable_micbias_pullup;
        iVar8 = *(iVar4 + 0x28);
        _dev_printk(0x800991b,*(iVar8 + -0xb8),"%s: wname: %s, event: %d\n","__wcd938x_codec_enable_micbias_pullup",
                    *(iVar4 + 8),pcVar3 & 0xffffffff);
        iVar5 = strnstr(*(iVar4 + 8),"VA MIC BIAS1",0xd);
        if (iVar5 == 0) {
            iVar5 = strnstr(*(iVar4 + 8),"VA MIC BIAS2",0xd);
            if (iVar5 == 0) {
                iVar5 = strnstr(*(iVar4 + 8),"VA MIC BIAS3",0xd);
                if (iVar5 == 0) {
                    iVar4 = strnstr(*(iVar4 + 8),"VA MIC BIAS4",0xd);
                    if (iVar4 == 0) {
                        return 0xffffffea;
                    }
                    iVar4 = 4;
                }
                else {
                    iVar4 = 3;
                }
            }
            else {
                iVar4 = 2;
            }
        }
        else {
            iVar4 = 1;
        }
        iVar1 = pcVar3;
        if (iVar1 == 8) {
            iVar5 = 1;
        }
        else {
            if (iVar1 == 2) {
                usleep_range_state(1000,0x44c,2);
                return 0;
            }
            if (iVar1 != 1) {
                return 0;
            }
            iVar5 = 0;
        }
        sym.wcd938x_micbias_control(iVar8 + -0xd0,iVar4,iVar5,1);
        return 0;
    }
    return 0;
}


// ===== sym.wcd938x_codec_enable_ear_pa.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt @ 0x08018a30 (size 8) =====

uint sym.wcd938x_codec_enable_ear_pa.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt
               (int64_t param_1,ulong param_2,int param_3)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    uint uVar5;
    uint32_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    code *pcVar8;
    int64_t iVar9;
    int64_t iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar10 = *(param_1 + 0x28);
    iVar7 = *(iVar10 + -0xb8);
    iVar9 = *(iVar7 + 0x98);
    uVar6 = *(iVar9 + 0x108);
    _dev_printk(0x800991b,iVar7,"%s wname: %s event: %d\n","wcd938x_codec_enable_ear_pa",*(param_1 + 8),param_3);
    if (7 < param_3 - 1U) {
        return 0;
    }
    iVar10 = iVar10 + -0xd0;
    switch(param_3) {
    case 1:
        uVar5 = swr_slvdev_datapath_control(*(iVar9 + 0x28),*(*(iVar9 + 0x28) + 0x40),1);
        uVar6 = snd_soc_component_read(iVar10,0x3450);
        *(iVar9 + 0xc74) = uVar6;
        if ((uVar6 & 1) == 0) {
            snd_soc_component_update_bits(iVar10,0x3465,7,3);
            puVar1 = iVar9 + 0x160;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                    *puVar1 = *puVar1 | 0x4000;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            cVar2 = *(iVar9 + 0x120);
        }
        else {
            snd_soc_component_update_bits(iVar10,0x3467,1,1);
            cVar2 = *(iVar9 + 0x120);
        }
        if (cVar2 == '\0') {
            snd_soc_component_update_bits(iVar10,0x300b,0x80,0x80);
            return uVar5;
        }
        return uVar5;
    case 2:
        usleep_range_state(6000,0x177a,2);
        if ((uVar6 < 9) && ((1 << (uVar6 & 0x1f) & 0x1c8U) != 0)) {
            snd_soc_component_update_bits(iVar10,0x3008,2,2);
        }
        pcVar8 = *(iVar9 + 0xc38);
        if ((*(iVar9 + 0xc74) & 1) == 0) {
            if (pcVar8 != NULL) {
                __cfi_slowpath_diag(0xec879b5e5e7b1759,pcVar8,0x8001930);
                (*pcVar8)(*(iVar9 + 0xc30),1,0);
            }
            wcd_enable_irq(iVar9 + 0x130,0xd);
        }
        else {
            if (pcVar8 != NULL) {
                __cfi_slowpath_diag(0xec879b5e5e7b1759,pcVar8,0x8001910);
                (*pcVar8)(*(iVar9 + 0xc30),1,0x20000);
            }
            wcd_enable_irq(iVar9 + 0x130,0xf);
        }
        break;
    case 4:
        if ((*(iVar9 + 0xc74) & 1) == 0) {
            if ((*(iVar9 + 0x160) >> 0xd & 1) == 0) {
                wcd_disable_irq(iVar9 + 0x130,0xd);
                pcVar8 = *(iVar9 + 0xc38);
                if (pcVar8 != NULL) {
                    __cfi_slowpath_diag(0xec879b5e5e7b1759,pcVar8,0x8001970);
                    (*pcVar8)(*(iVar9 + 0xc30),1,1);
                }
            }
        }
        else {
            wcd_disable_irq(iVar9 + 0x130,0xf);
            pcVar8 = *(iVar9 + 0xc38);
            if (pcVar8 != NULL) {
                __cfi_slowpath_diag(0xec879b5e5e7b1759,pcVar8,0x8001950);
                (*pcVar8)(*(iVar9 + 0xc30),1,0x20001);
            }
        }
        break;
    case 8:
        if (*(iVar9 + 0x120) == '\0') {
            snd_soc_component_update_bits(iVar10,0x300b,0x80,0);
        }
        usleep_range_state(7000,0x1b62,2);
        if ((*(iVar9 + 0xc74) & 1) == 0) {
            snd_soc_component_update_bits(iVar10,0x3465,7,0);
            puVar1 = iVar9 + 0x160;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                    *puVar1 = *puVar1 & 0xffffffffffffbfff;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
        }
        else {
            snd_soc_component_update_bits(iVar10,0x3467,1,0);
        }
        wcd_cls_h_fsm(iVar10,iVar9 + 0xe0,2,1,uVar6);
        iVar4 = *(iVar9 + 0xc70) + -1;
        *(iVar9 + 0xc70) = iVar4;
        if (iVar4 == 0) {
            snd_soc_component_update_bits(iVar10,0x30a4,4,4);
        }
    }
    return 0;
}


// ===== sym.wcd938x_codec_enable_hphl_pa.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt @ 0x08018a38 (size 8) =====

uint sym.wcd938x_codec_enable_hphl_pa.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt
               (int64_t param_1,ulong param_2,int param_3)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    uint uVar5;
    ulong uVar6;
    int64_t iVar7;
    ulong uVar8;
    ulong *in_x18;
    code *pcVar9;
    int64_t iVar10;
    int64_t iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar11 = *(param_1 + 0x28);
    iVar7 = *(iVar11 + -0xb8);
    iVar10 = *(iVar7 + 0x98);
    uVar2 = *(iVar10 + 0x108);
    _dev_printk(0x800991b,iVar7,"%s wname: %s event: %d\n","wcd938x_codec_enable_hphl_pa",*(param_1 + 8),param_3);
    if (param_3 - 1U < 8) {
        iVar11 = iVar11 + -0xd0;
        switch(param_3) {
        case 1:
            if (*(iVar10 + 0x122) != '\0') {
                snd_soc_component_update_bits(iVar11,0x3067,0x80,0x80);
            }
            pcVar9 = *(iVar10 + 0xc38);
            if (pcVar9 != NULL) {
                __cfi_slowpath_diag(0xec879b5e5e7b1759,pcVar9,0x80019d0);
                (*pcVar9)(*(iVar10 + 0xc30),1,1);
            }
            uVar5 = swr_slvdev_datapath_control(*(iVar10 + 0x28),*(*(iVar10 + 0x28) + 0x40),1);
            wcd_cls_h_fsm(iVar11,iVar10 + 0xe0,1,2,uVar2);
            wcd_clsh_set_hph_mode(iVar11,1);
            if ((uVar2 < 6) && ((1 << (uVar2 & 0x1f) & 0x34U) != 0)) {
                snd_soc_component_update_bits(iVar11,0x30de,1,1);
            }
            snd_soc_component_update_bits(iVar11,0x3009,0x20,0x20);
            wcd_clsh_set_hph_mode(iVar11,uVar2);
            usleep_range_state(100,0x6e,2);
            puVar1 = iVar10 + 0x160;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = *puVar1 | 0x40;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            snd_soc_component_update_bits(iVar11,0x3465,7,3);
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = *puVar1 | 0x2000;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            return uVar5;
        case 2:
            if ((*(iVar10 + 0x160) >> 6 & 1) != 0) {
                if (*(iVar10 + 0x120) == '\0') {
                    uVar6 = 20000;
                    uVar8 = 0x4e84;
                }
                else {
                    uVar6 = 7000;
                    uVar8 = 0x1bbc;
                }
                usleep_range_state(uVar6,uVar8,2);
                puVar1 = iVar10 + 0x160;
                if ((uVar2 < 6) && ((1 << (uVar2 & 0x1f) & 0x34U) != 0)) {
                    snd_soc_component_update_bits(iVar11,0x30de,1,0);
                }
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    cVar3 = '\x01';
                    bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar4) {
                        *puVar1 = *puVar1 & 0xffffffffffffffbf;
                        cVar3 = ExclusiveMonitorsStatus();
                    }
                } while (cVar3 != '\0');
            }
            snd_soc_component_update_bits(iVar11,0x313a,2,2);
            if ((uVar2 < 9) && ((1 << (uVar2 & 0x1f) & 0x1c8U) != 0)) {
                snd_soc_component_update_bits(iVar11,0x3008,2,2);
            }
            pcVar9 = *(iVar10 + 0xc38);
            if (pcVar9 != NULL) {
                __cfi_slowpath_diag(0xec879b5e5e7b1759,pcVar9,0x80019f0);
                (*pcVar9)(*(iVar10 + 0xc30),1,0);
            }
            wcd_enable_irq(iVar10 + 0x130,0xd);
            break;
        case 4:
            if ((*(iVar10 + 0x160) >> 0xe & 1) == 0) {
                pcVar9 = *(iVar10 + 0xc38);
                if (pcVar9 != NULL) {
                    __cfi_slowpath_diag(0xec879b5e5e7b1759,pcVar9,0x8001a10);
                    (*pcVar9)(*(iVar10 + 0xc30),1,1);
                }
                wcd_disable_irq(iVar10 + 0x130,0xd);
            }
            pcVar9 = *(iVar10 + 0xc38);
            if ((pcVar9 != NULL) && (*(iVar10 + 0x120) != '\0')) {
                __cfi_slowpath_diag(0xec879b5e5e7b1759,pcVar9,0x8001a30);
                (*pcVar9)(*(iVar10 + 0xc30),4,0);
            }
            puVar1 = iVar10 + 0x160;
            if (*(iVar10 + 0x120) == '\0') {
                uVar6 = 20000;
                uVar8 = 0x4e84;
            }
            else {
                uVar6 = 7000;
                uVar8 = 0x1bbc;
            }
            usleep_range_state(uVar6,uVar8,2);
            snd_soc_component_update_bits(iVar11,0x3009,0x80,0);
            blocking_notifier_call_chain(*(iVar10 + 0x100) + 0x420,0xd);
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = *puVar1 | 0x40;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            break;
        case 8:
            puVar1 = iVar10 + 0x160;
            if ((*(iVar10 + 0x160) >> 6 & 1) != 0) {
                if (*(iVar10 + 0x120) == '\0') {
                    uVar6 = 21000;
                    uVar8 = 0x526c;
                }
                else {
                    uVar6 = 7000;
                    uVar8 = 0x1bbc;
                }
                usleep_range_state(uVar6,uVar8,2);
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    cVar3 = '\x01';
                    bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar4) {
                        *puVar1 = *puVar1 & 0xffffffffffffffbf;
                        cVar3 = ExclusiveMonitorsStatus();
                    }
                } while (cVar3 != '\0');
            }
            blocking_notifier_call_chain(*(iVar10 + 0x100) + 0x420,10);
            snd_soc_component_update_bits(iVar11,0x3009,0x20,0);
            snd_soc_component_update_bits(iVar11,0x3465,7,0);
            wcd_cls_h_fsm(iVar11,iVar10 + 0xe0,2,2,uVar2);
            if (*(iVar10 + 0x122) != '\0') {
                snd_soc_component_update_bits(iVar11,0x3067,0x80,0);
            }
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = *puVar1 & 0xffffffffffffdfff;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
        }
        return 0;
    }
    return 0;
}


// ===== sym.wcd938x_codec_hphl_dac_event.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt @ 0x08018a40 (size 8) =====

ulong sym.wcd938x_codec_hphl_dac_event.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt
                (int64_t param_1,ulong param_2,int param_3)

{
    uint64_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong uVar4;
    ulong uVar5;
    ulong *in_x18;
    int64_t arg1;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(param_1 + 0x28) + -0xb8);
    arg1 = *(param_1 + 0x28) + -0xd0;
    iVar6 = *(iVar2 + 0x98);
    _dev_printk(0x800991b,iVar2,"%s wname: %s event: %d\n","wcd938x_codec_hphl_dac_event",*(param_1 + 8),param_3);
    if (param_3 == 8) {
        uVar3 = 0x3136;
        uVar4 = 0xf;
        uVar5 = 1;
    }
    else if (param_3 == 2) {
        snd_soc_component_update_bits(arg1,0x3133,0xf,2);
        if (*(iVar6 + 0x120) == '\0') {
            snd_soc_component_update_bits(arg1,0x3414,2,0);
            uVar3 = 0x30d3;
            uVar4 = 0x20;
            uVar5 = 0x20;
        }
        else {
            snd_soc_component_update_bits(arg1,0x3414,2,2);
            if ((*(iVar6 + 0x121) == '\0') || (uVar1 = snd_soc_component_read(arg1,0x3414), (uVar1 & 1) != 0)) {
                usleep_range_state(5000,0x1392,2);
            }
            uVar3 = 0x313a;
            uVar4 = 2;
            uVar5 = 0;
        }
    }
    else {
        if (param_3 != 1) {
            return 0;
        }
        sym.wcd938x_rx_clk_enable(arg1);
        snd_soc_component_update_bits(arg1,0x3409,1,1);
        snd_soc_component_update_bits(arg1,0x344e,4,4);
        uVar3 = 0x30d9;
        uVar4 = 0x80;
        uVar5 = 0;
    }
    snd_soc_component_update_bits(arg1,uVar3,uVar4,uVar5);
    return 0;
}


// ===== sym.wcd938x_codec_force_enable_micbias.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt @ 0x08018a48 (size 8) =====

uint sym.wcd938x_codec_force_enable_micbias.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt
               (int64_t param_1,ulong param_2,uint32_t param_3)

{
    uint uVar1;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(*(*(param_1 + 0x28) + -0xb8) + 0x98);
    if ((param_3 == 1) || (param_3 == 8)) {
        sym.wcd938x_wakeup(arg1,1);
        uVar1 = sym.__wcd938x_codec_enable_micbias(param_1,param_3);
        sym.wcd938x_wakeup(arg1,0);
    }
    else {
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.wcd938x_codec_enable_adc.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt @ 0x08018a50 (size 8) =====

uint sym.wcd938x_codec_enable_adc.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt(uint64_t *param_1,ulong param_2,int param_3)

{
    uint32_t uVar1;
    char cVar2;
    bool bVar3;
    bool bVar4;
    code *pcVar5;
    int iVar6;
    uint uVar7;
    int64_t iVar8;
    uint uVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    int iVar12;
    ulong *in_x18;
    int64_t arg1;
    int64_t iVar13;
    ulong unaff_x30;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_48 = *(iVar8 + 0x5e0);
    iVar8 = *(param_1[5] - 0xb8);
    arg1 = param_1[5] - 0xd0;
    iVar13 = *(iVar8 + 0x98);
    _dev_printk(0x800991b,iVar8,"%s wname: %s event: %d\n","wcd938x_codec_enable_adc",param_1[1],param_3);
    uStack_4c = 0;
    iVar6 = swr_read(*(iVar13 + 0x30),*(*(iVar13 + 0x30) + 0x40),0x44,&uStack_4c,1);
    bVar3 = iVar6 != 0;
    bVar4 = (uStack_4c & 0x40) != 0;
    if (param_3 == 8) {
        uVar10 = *(iVar13 + 0x11c) - 1;
        *(iVar13 + 0x11c) = uVar10 & (uVar10 >> 0x1f ^ 0xffffffffU);
        sym.wcd938x_tx_connect_port(arg1,*(param_1 + 0x4c) + 0x1e,0,0);
        uVar7 = 0;
        if (*(param_1 + 0x4c) == '\x01') {
            if ((*(iVar13 + 0x160) >> 7 & 1) == 0) goto code_r0x0801bcd8;
            param_1 = iVar13 + 0x160;
            sym.wcd938x_tx_connect_port(arg1,0x1d,0,0);
            goto code_r0x0801bf30;
        }
        goto code_r0x0801beec;
    }
    uVar7 = 0;
    if (param_3 != 1) goto code_r0x0801beec;
    iVar6 = *(iVar13 + 0x11c) + 1;
    *(iVar13 + 0x11c) = iVar6;
    if (((*(iVar13 + 0x160) & 1) == 0) && ((*(iVar13 + 0x160) >> 9 & 1) == 0)) {
        uVar10 = 0;
        if ((*(iVar13 + 0x160) >> 1 & 1) != 0) goto code_r0x0801bd00;
code_r0x0801bcf8:
        if ((*(iVar13 + 0x160) >> 10 & 1) != 0) goto code_r0x0801bd00;
    }
    else {
        if (6 < *(iVar13 + 0x10c)) goto code_r0x0801bf24;
        uVar10 = obj.tx_mode_bit[*(iVar13 + 0x10c)];
        if ((*(iVar13 + 0x160) >> 1 & 1) == 0) goto code_r0x0801bcf8;
code_r0x0801bd00:
        if (6 < *(iVar13 + 0x110)) goto code_r0x0801bf24;
        uVar10 = uVar10 | obj.tx_mode_bit[*(iVar13 + 0x110)];
    }
    if (((*(iVar13 + 0x160) >> 2 & 1) != 0) || ((*(iVar13 + 0x160) >> 0xb & 1) != 0)) {
        if (6 < *(iVar13 + 0x114)) goto code_r0x0801bf24;
        uVar10 = uVar10 | obj.tx_mode_bit[*(iVar13 + 0x114)];
    }
    if (((*(iVar13 + 0x160) >> 3 & 1) != 0) || ((*(iVar13 + 0x160) >> 0xc & 1) != 0)) {
        if (6 < *(iVar13 + 0x118)) {
code_r0x0801bf24:
    //WARNING: Does not return
            pcVar5 = SoftwareBreakpoint(0x5512,0x801bf28);
            (*pcVar5)();
        }
        uVar10 = uVar10 | obj.tx_mode_bit[*(iVar13 + 0x118)];
    }
    if (uVar10 == 0) {
        iVar12 = 9600000;
    }
    else {
        iVar12 = 9600000;
        if ((uVar10 & 7) == 0) {
            if ((uVar10 >> 3 & 1) == 0) {
                iVar12 = 600000;
                if ((uVar10 & 0x10) != 0) {
                    iVar12 = 1200000;
                }
            }
            else {
                iVar12 = 4800000;
            }
        }
    }
    iVar12 = iVar12 * iVar6;
    if (9599999 < iVar12) {
        iVar12 = 9600000;
    }
    if (iVar12 < 2400000) {
        if (iVar12 == 600000) {
            uVar10 = 6;
            uVar11 = 0x60;
code_r0x0801be98:
            uVar1 = uVar11;
            if (bVar3 || bVar4) {
                uVar1 = uVar10;
            }
            uVar7 = 0xf0;
            if (bVar3 || bVar4) {
                uVar7 = 0xf;
                uVar10 = uVar11;
            }
            goto code_r0x0801beb4;
        }
        if (iVar12 == 1200000) {
            uVar10 = 5;
            uVar11 = 0x50;
            goto code_r0x0801be98;
        }
code_r0x0801be40:
        uVar7 = 0xf0;
        if (bVar3 || bVar4) {
            uVar7 = 0xf;
        }
        snd_soc_component_update_bits(arg1,0x3405,uVar7,0);
        uVar7 = swr_slvdev_datapath_control(*(iVar13 + 0x30),*(*(iVar13 + 0x30) + 0x40),1);
        param_1 = NULL;
    }
    else {
        if (iVar12 == 2400000) {
            uVar10 = 3;
            uVar11 = 0x30;
            goto code_r0x0801be98;
        }
        if (iVar12 != 4800000) goto code_r0x0801be40;
        uVar1 = 0x10;
        if (bVar3 || bVar4) {
            uVar1 = 1;
        }
        uVar7 = 0xf0;
        if (bVar3 || bVar4) {
            uVar7 = 0xf;
            uVar10 = 0x10;
        }
        else {
            uVar10 = 1;
        }
code_r0x0801beb4:
        param_1 = uVar10;
        snd_soc_component_update_bits(arg1,0x3405,uVar7,uVar1);
        uVar7 = swr_slvdev_datapath_control(*(iVar13 + 0x30),*(*(iVar13 + 0x30) + 0x40),1);
    }
    uVar9 = 0xf;
    if (bVar3 || bVar4) {
        uVar9 = 0xf0;
    }
    snd_soc_component_update_bits(arg1,0x3405,uVar9,param_1);
code_r0x0801beec:
    while (iVar8 = sp_el0, *(iVar8 + 0x5e0) != iStack_48) {
        __stack_chk_fail();
code_r0x0801bf30:
        Hint_Prefetch(param_1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(param_1,0x10);
            if (bVar3) {
                *param_1 = *param_1 & 0xffffffffffffff7f;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
code_r0x0801bcd8:
        uVar7 = 0;
    }
    return uVar7;
}


// ===== sym.wcd938x_enable_rx2.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt @ 0x08018a58 (size 8) =====

ulong sym.wcd938x_enable_rx2.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt(int64_t param_1,ulong param_2,uint32_t param_3)

{
    int iVar1;
    char *arg3;
    char *arg3_00;
    int64_t iVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar3;
    int64_t arg1;
    uint64_t uVar4;
    int64_t iVar5;
    ulong unaff_x30;
    uint uStack_8c;
    uchar auStack_88 [4];
    uchar auStack_84 [4];
    uchar auStack_80 [4];
    char acStack_7c [4];
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    uint64_t uStack_60;
    int64_t iStack_58;
    uint uStack_4c;
    uchar auStack_48 [4];
    uchar auStack_44 [4];
    uchar auStack_40 [4];
    char acStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    uVar4 = param_3;
    iStack_38 = *(iVar2 + 0x5e0);
    arg3 = "%s wname: %s event: %d\n";
    iVar2 = *(param_1 + 0x28);
    iVar3 = iVar2 + -0xd0;
    iVar5 = *(*(iVar2 + -0xb8) + 0x98);
    _dev_printk(0x800991b,*(iVar2 + -0xb8),"%s wname: %s event: %d\n","wcd938x_enable_rx2",*(param_1 + 8),uVar4);
    if (param_3 == 8) {
        uVar4 = *(*(iVar2 + -0xb8) + 0x98);
        acStack_3c[0] = '\0';
        auStack_44[0] = 0;
        auStack_48[0] = 0;
        iVar1 = sym.wcd938x_set_port_params(iVar3,0xf,acStack_3c,auStack_40);
        if (iVar1 == 0) {
            swr_disconnect_port(*(uVar4 + 0x28),acStack_3c,1,auStack_44,auStack_48);
        }
        if (*(iVar5 + 0x121) != '\0') {
            uVar4 = *(*(iVar2 + -0xb8) + 0x98);
            acStack_3c[0] = '\0';
            auStack_44[0] = 0;
            auStack_48[0] = 0;
            iVar1 = sym.wcd938x_set_port_params(iVar3,0x11,acStack_3c,auStack_40);
            if (iVar1 == 0) {
                swr_disconnect_port(*(uVar4 + 0x28),acStack_3c,1,auStack_44,auStack_48);
            }
        }
        sym.wcd938x_rx_clk_disable(iVar3);
        arg3 = 0x2;
        snd_soc_component_update_bits(iVar3,0x3409,2,0);
    }
    else if (param_3 == 1) {
        arg3 = acStack_3c;
        uVar4 = *(*(iVar2 + -0xb8) + 0x98);
        acStack_3c[0] = '\0';
        auStack_40[0] = 0;
        auStack_44[0] = 0;
        auStack_48[0] = 0;
        uStack_4c = 0;
        iVar1 = sym.wcd938x_set_port_params(iVar3,0xf,arg3,auStack_40);
        if (iVar1 == 0) {
            arg3 = 0x1;
            swr_connect_port(*(uVar4 + 0x28),acStack_3c,1,auStack_44,&uStack_4c,auStack_40,auStack_48);
        }
        if (*(iVar5 + 0x121) != '\0') {
            arg3 = acStack_3c;
            uVar4 = *(*(iVar2 + -0xb8) + 0x98);
            acStack_3c[0] = '\0';
            auStack_40[0] = 0;
            auStack_44[0] = 0;
            auStack_48[0] = 0;
            uStack_4c = 0;
            iVar1 = sym.wcd938x_set_port_params(iVar3,0x11,arg3,auStack_40);
            if (iVar1 == 0) {
                arg3 = 0x1;
                swr_connect_port(*(uVar4 + 0x28),acStack_3c,1,auStack_44,&uStack_4c,auStack_40,auStack_48);
            }
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return 0;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18 = sym.wcd938x_enable_rx3;
    pcStack_68 = sym.wcd938x_enable_rx3;
    iVar2 = sp_el0;
    iStack_78 = *(iVar2 + 0x5e0);
    arg3_00 = "%s wname: %s event: %d\n";
    iVar2 = *(iVar5 + 0x28);
    arg1 = iVar2 + -0xd0;
    puStack_70 = &stack0xffffffffffffffd0;
    uStack_60 = uVar4;
    iStack_58 = iVar3;
    _dev_printk(0x800991b,*(iVar2 + -0xb8),"%s wname: %s event: %d\n","wcd938x_enable_rx3",*(iVar5 + 8),
                arg3 & 0xffffffff);
    if (arg3 == 8) {
        iVar2 = *(*(iVar2 + -0xb8) + 0x98);
        acStack_7c[0] = '\0';
        auStack_84[0] = 0;
        auStack_88[0] = 0;
        iVar1 = sym.wcd938x_set_port_params(arg1,0x13,acStack_7c,auStack_80);
        if (iVar1 == 0) {
            swr_disconnect_port(*(iVar2 + 0x28),acStack_7c,1,auStack_84,auStack_88);
        }
        usleep_range_state(6000,0x177a,2);
        sym.wcd938x_rx_clk_disable(arg1);
        arg3_00 = 0x4;
        snd_soc_component_update_bits(arg1,0x3409,4,0);
    }
    else if (arg3 == 1) {
        arg3_00 = acStack_7c;
        iVar2 = *(*(iVar2 + -0xb8) + 0x98);
        acStack_7c[0] = '\0';
        auStack_80[0] = 0;
        auStack_84[0] = 0;
        auStack_88[0] = 0;
        uStack_8c = 0;
        iVar1 = sym.wcd938x_set_port_params(arg1,0x13,arg3_00,auStack_80);
        if (iVar1 == 0) {
            arg3_00 = 0x1;
            swr_connect_port(*(iVar2 + 0x28),acStack_7c,1,auStack_84,&uStack_8c,auStack_80,auStack_88);
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_78) {
        return 0;
    }
    iVar2 = __stack_chk_fail();
    *extraout_x18_00 = sym.wcd938x_codec_enable_micbias_pullup;
    iVar5 = *(iVar2 + 0x28);
    _dev_printk(0x800991b,*(iVar5 + -0xb8),"%s: wname: %s, event: %d\n","__wcd938x_codec_enable_micbias_pullup",
                *(iVar2 + 8),arg3_00 & 0xffffffff);
    iVar3 = strnstr(*(iVar2 + 8),"VA MIC BIAS1",0xd);
    if (iVar3 == 0) {
        iVar3 = strnstr(*(iVar2 + 8),"VA MIC BIAS2",0xd);
        if (iVar3 == 0) {
            iVar3 = strnstr(*(iVar2 + 8),"VA MIC BIAS3",0xd);
            if (iVar3 == 0) {
                iVar2 = strnstr(*(iVar2 + 8),"VA MIC BIAS4",0xd);
                if (iVar2 == 0) {
                    return 0xffffffea;
                }
                iVar2 = 4;
            }
            else {
                iVar2 = 3;
            }
        }
        else {
            iVar2 = 2;
        }
    }
    else {
        iVar2 = 1;
    }
    iVar1 = arg3_00;
    if (iVar1 == 8) {
        iVar3 = 1;
    }
    else {
        if (iVar1 == 2) {
            usleep_range_state(1000,0x44c,2);
            return 0;
        }
        if (iVar1 != 1) {
            return 0;
        }
        iVar3 = 0;
    }
    sym.wcd938x_micbias_control(iVar5 + -0xd0,iVar2,iVar3,1);
    return 0;
}


// ===== sym.wcd938x_codec_enable_hphr_pa.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt @ 0x08018a60 (size 8) =====

uint sym.wcd938x_codec_enable_hphr_pa.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt
               (int64_t param_1,ulong param_2,int param_3)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    uint uVar5;
    ulong uVar6;
    int64_t iVar7;
    ulong uVar8;
    ulong *in_x18;
    code *pcVar9;
    int64_t iVar10;
    int64_t iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar11 = *(param_1 + 0x28);
    iVar7 = *(iVar11 + -0xb8);
    iVar10 = *(iVar7 + 0x98);
    uVar2 = *(iVar10 + 0x108);
    _dev_printk(0x800991b,iVar7,"%s wname: %s event: %d\n","wcd938x_codec_enable_hphr_pa",*(param_1 + 8),param_3);
    if (param_3 - 1U < 8) {
        iVar11 = iVar11 + -0xd0;
        switch(param_3) {
        case 1:
            if (*(iVar10 + 0x122) != '\0') {
                snd_soc_component_update_bits(iVar11,0x3067,0x80,0x80);
            }
            pcVar9 = *(iVar10 + 0xc38);
            if (pcVar9 != NULL) {
                __cfi_slowpath_diag(0xec879b5e5e7b1759,pcVar9,0x8001a50);
                (*pcVar9)(*(iVar10 + 0xc30),1,0x10001);
            }
            uVar5 = swr_slvdev_datapath_control(*(iVar10 + 0x28),*(*(iVar10 + 0x28) + 0x40),1);
            wcd_cls_h_fsm(iVar11,iVar10 + 0xe0,1,4,uVar2);
            wcd_clsh_set_hph_mode(iVar11,1);
            if ((uVar2 < 6) && ((1 << (uVar2 & 0x1f) & 0x34U) != 0)) {
                snd_soc_component_update_bits(iVar11,0x30de,1,1);
            }
            snd_soc_component_update_bits(iVar11,0x3009,0x10,0x10);
            wcd_clsh_set_hph_mode(iVar11,uVar2);
            usleep_range_state(100,0x6e,2);
            puVar1 = iVar10 + 0x160;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = *puVar1 | 0x40;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            snd_soc_component_update_bits(iVar11,0x3466,7,3);
            return uVar5;
        case 2:
            if ((*(iVar10 + 0x160) >> 6 & 1) != 0) {
                if (*(iVar10 + 0x121) == '\0') {
                    uVar6 = 20000;
                    uVar8 = 0x4e84;
                }
                else {
                    uVar6 = 7000;
                    uVar8 = 0x1bbc;
                }
                usleep_range_state(uVar6,uVar8,2);
                puVar1 = iVar10 + 0x160;
                if ((uVar2 < 6) && ((1 << (uVar2 & 0x1f) & 0x34U) != 0)) {
                    snd_soc_component_update_bits(iVar11,0x30de,1,0);
                }
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    cVar3 = '\x01';
                    bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar4) {
                        *puVar1 = *puVar1 & 0xffffffffffffffbf;
                        cVar3 = ExclusiveMonitorsStatus();
                    }
                } while (cVar3 != '\0');
            }
            snd_soc_component_update_bits(iVar11,0x313a,2,2);
            if ((uVar2 < 9) && ((1 << (uVar2 & 0x1f) & 0x1c8U) != 0)) {
                snd_soc_component_update_bits(iVar11,0x3008,2,2);
            }
            pcVar9 = *(iVar10 + 0xc38);
            if (pcVar9 != NULL) {
                __cfi_slowpath_diag(0xec879b5e5e7b1759,pcVar9,0x8001a70);
                (*pcVar9)(*(iVar10 + 0xc30),1,0x10000);
            }
            wcd_enable_irq(iVar10 + 0x130,0xe);
            break;
        case 4:
            pcVar9 = *(iVar10 + 0xc38);
            if (pcVar9 != NULL) {
                __cfi_slowpath_diag(0xec879b5e5e7b1759,pcVar9,0x8001a90);
                (*pcVar9)(*(iVar10 + 0xc30),1,0x10001);
            }
            wcd_disable_irq(iVar10 + 0x130,0xe);
            pcVar9 = *(iVar10 + 0xc38);
            if ((pcVar9 != NULL) && (*(iVar10 + 0x121) != '\0')) {
                __cfi_slowpath_diag(0xec879b5e5e7b1759,pcVar9,0x8001ab0);
                (*pcVar9)(*(iVar10 + 0xc30),4,0x10000);
            }
            if (*(iVar10 + 0x121) == '\0') {
                uVar6 = 20000;
                uVar8 = 0x4e84;
            }
            else {
                uVar6 = 7000;
                uVar8 = 0x1bbc;
            }
            usleep_range_state(uVar6,uVar8,2);
            snd_soc_component_update_bits(iVar11,0x3009,0x40,0);
            blocking_notifier_call_chain(*(iVar10 + 0x100) + 0x420,0xe);
            puVar1 = iVar10 + 0x160;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = *puVar1 | 0x40;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            break;
        case 8:
            if ((*(iVar10 + 0x160) >> 6 & 1) != 0) {
                puVar1 = iVar10 + 0x160;
                if (*(iVar10 + 0x121) == '\0') {
                    uVar6 = 20000;
                    uVar8 = 0x4e84;
                }
                else {
                    uVar6 = 7000;
                    uVar8 = 0x1bbc;
                }
                usleep_range_state(uVar6,uVar8,2);
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    cVar3 = '\x01';
                    bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar4) {
                        *puVar1 = *puVar1 & 0xffffffffffffffbf;
                        cVar3 = ExclusiveMonitorsStatus();
                    }
                } while (cVar3 != '\0');
            }
            blocking_notifier_call_chain(*(iVar10 + 0x100) + 0x420,0xc);
            snd_soc_component_update_bits(iVar11,0x3009,0x10,0);
            snd_soc_component_update_bits(iVar11,0x3466,7,0);
            wcd_cls_h_fsm(iVar11,iVar10 + 0xe0,2,4,uVar2);
            if (*(iVar10 + 0x122) != '\0') {
                snd_soc_component_update_bits(iVar11,0x3067,0x80,0);
            }
        }
        return 0;
    }
    return 0;
}


// ===== sym.wcd938x_codec_enable_vdd_buck.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt @ 0x08018a68 (size 8) =====

ulong sym.wcd938x_codec_enable_vdd_buck.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt
                (int64_t param_1,ulong param_2,int param_3)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    uint64_t uVar5;
    ulong uVar6;
    char *pcVar7;
    ulong *in_x18;
    int64_t iVar8;
    int64_t *piVar9;
    int64_t iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = *(param_1 + 0x28);
    piVar9 = *(*(iVar8 + -0xb8) + 0x98);
    iVar10 = *(*piVar9 + 0x90);
    if (iVar10 == 0) {
        iVar4 = ___ratelimit(obj.wcd938x_codec_enable_vdd_buck._rs,"wcd938x_codec_enable_vdd_buck");
        if (iVar4 != 0) {
            uVar6 = *(iVar8 + -0xb8);
            pcVar7 = "%s: pdata is NULL\n";
code_r0x0801cf08:
            _dev_err(uVar6,pcVar7,"wcd938x_codec_enable_vdd_buck");
        }
code_r0x0801ce4c:
        uVar6 = 0xffffffea;
    }
    else {
        uVar5 = msm_cdc_is_ondemand_supply(*piVar9,piVar9[0x182],*(iVar10 + 0x38),*(iVar10 + 0x40),"cdc-vdd-buck");
        if ((uVar5 & 1) != 0) {
            _dev_printk(0x800991b,*(iVar8 + -0xb8),"%s wname: %s event: %d\n","wcd938x_codec_enable_vdd_buck",
                        *(param_1 + 8),param_3);
            if (param_3 == 8) {
                puVar1 = piVar9 + 0x2c;
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar3) {
                        *puVar1 = *puVar1 | 0x10;
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
            }
            else if (param_3 == 1) {
                puVar1 = piVar9 + 0x2c;
                if ((piVar9[0x2c] >> 4 & 1) == 0) {
                    iVar4 = msm_cdc_enable_ondemand_supply
                                      (*piVar9,piVar9[0x182],*(iVar10 + 0x38),*(iVar10 + 0x40),"cdc-vdd-buck");
                    if (iVar4 == -0x16) {
                        iVar4 = ___ratelimit(obj.wcd938x_codec_enable_vdd_buck._rs.315,"wcd938x_codec_enable_vdd_buck")
                        ;
                        if (iVar4 != 0) {
                            uVar6 = *(iVar8 + -0xb8);
                            pcVar7 = "%s: vdd buck is not enabled\n";
                            goto code_r0x0801cf08;
                        }
                        goto code_r0x0801ce4c;
                    }
                    Hint_Prefetch(puVar1,2,0,1);
                    do {
                        cVar2 = '\x01';
                        bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar3) {
                            *puVar1 = *puVar1 & 0xffffffffffffffef;
                            cVar2 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar2 != '\0');
                    usleep_range_state(200,0xfa,2);
                }
                else {
                    _dev_printk(0x800991b,*(iVar8 + -0xb8),"%s: buck already in enabled state\n",
                                "wcd938x_codec_enable_vdd_buck");
                    Hint_Prefetch(puVar1,2,0,1);
                    do {
                        cVar2 = '\x01';
                        bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar3) {
                            *puVar1 = *puVar1 & 0xffffffffffffffef;
                            cVar2 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar2 != '\0');
                }
            }
        }
        uVar6 = 0;
    }
    return uVar6;
}


// ===== sym.wcd938x_swr_dmic_register_notifier.cfi_jt @ 0x08018a70 (size 8) =====

ulong sym.wcd938x_swr_dmic_register_notifier.cfi_jt(int64_t param_1,ulong param_2,uint8_t param_3)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        iVar1 = ___ratelimit(obj.wcd938x_swr_dmic_register_notifier._rs,"wcd938x_swr_dmic_register_notifier");
        if (iVar1 == 0) {
            uVar2 = 0xffffffea;
        }
        else {
            _printk(0x8006168,"wcd938x_swr_dmic_register_notifier");
            uVar2 = 0xffffffea;
        }
    }
    else {
        iVar3 = *(*(param_1 + 0x18) + 0x98);
        *(iVar3 + 0xc87) = param_3 & 1;
        if ((param_3 & 1) == 0) {
            uVar2 = blocking_notifier_chain_unregister(iVar3 + 0xc88);
        }
        else {
            uVar2 = blocking_notifier_chain_register();
        }
    }
    return uVar2;
}


// ===== sym.wcd938x_mbhc_clk_setup.228a7220f248aaede76982248f6c4394.cfi_jt @ 0x08018a78 (size 8) =====

void sym.wcd938x_mbhc_clk_setup.228a7220f248aaede76982248f6c4394.cfi_jt(ulong param_1,uint64_t param_2)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = 0x80;
    if ((param_2 & 1) == 0) {
        uVar1 = 0;
    }
    snd_soc_component_update_bits(param_1,0x3120,0x80,uVar1);
    return;
}


// ===== sym.wcd938x_mbhc_gnd_det_ctrl.228a7220f248aaede76982248f6c4394.cfi_jt @ 0x08018a80 (size 8) =====

void sym.wcd938x_mbhc_gnd_det_ctrl.228a7220f248aaede76982248f6c4394.cfi_jt(ulong param_1,uint64_t param_2)

{
    ulong uVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_2 & 1) == 0) {
        snd_soc_component_update_bits(param_1,0x3014,0x40,0);
        uVar1 = 2;
        uVar2 = 0;
    }
    else {
        snd_soc_component_update_bits(param_1,0x3014,2,2);
        uVar1 = 0x40;
        uVar2 = 0x40;
    }
    snd_soc_component_update_bits(param_1,0x3014,uVar1,uVar2);
    return;
}


// ===== sym.wcd938x_mbhc_micb_ramp_control.228a7220f248aaede76982248f6c4394.cfi_jt @ 0x08018a88 (size 8) =====

void sym.wcd938x_mbhc_micb_ramp_control.228a7220f248aaede76982248f6c4394.cfi_jt(ulong param_1,uint64_t param_2)

{
    ulong uVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_2 & 1) == 0) {
        snd_soc_component_update_bits(param_1,0x3024,0x80,0);
        uVar1 = 0x1c;
        uVar2 = 0;
    }
    else {
        snd_soc_component_update_bits(param_1,0x3024,0x1c,0xc);
        uVar1 = 0x80;
        uVar2 = 0x80;
    }
    snd_soc_component_update_bits(param_1,0x3024,uVar1,uVar2);
    return;
}


// ===== sym.wcd938x_mbhc_mbhc_bias_control.228a7220f248aaede76982248f6c4394.cfi_jt @ 0x08018a90 (size 8) =====

void sym.wcd938x_mbhc_mbhc_bias_control.228a7220f248aaede76982248f6c4394.cfi_jt(ulong param_1,uint32_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    snd_soc_component_update_bits(param_1,0x3015,1,param_2 & 1);
    return;
}


// ===== sym.wcd938x_mbhc_hph_pull_down_ctrl.228a7220f248aaede76982248f6c4394.cfi_jt @ 0x08018a98 (size 8) =====

void sym.wcd938x_mbhc_hph_pull_down_ctrl.228a7220f248aaede76982248f6c4394.cfi_jt(ulong param_1,uint64_t param_2)

{
    bool bVar1;
    uint uVar2;
    uint uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bVar1 = (param_2 & 1) == 0;
    uVar2 = 0x40;
    if (bVar1) {
        uVar2 = 0;
    }
    uVar3 = 0x10;
    if (bVar1) {
        uVar3 = 0;
    }
    snd_soc_component_update_bits(param_1,0x30d2,0x40,uVar2);
    snd_soc_component_update_bits(param_1,0x30d2,0x10,uVar3);
    return;
}


// ===== sym.wcd938x_soc_codec_resume.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt @ 0x08018aa0 (size 8) =====

ulong sym.wcd938x_soc_codec_resume.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    
    iVar1 = *(*(param_1 + 0x18) + 0x98);
    if (iVar1 != 0) {
        *(iVar1 + 0x124) = 0;
    }
    return 0;
}


// ===== sym.wcd938x_soc_codec_probe.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt @ 0x08018aa8 (size 8) =====

int sym.wcd938x_soc_codec_probe.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt(int64_t param_1)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    uint32_t uVar4;
    int iVar5;
    int64_t iVar6;
    ulong uVar7;
    char *pcVar8;
    int iVar9;
    ulong *in_x18;
    code *pcVar10;
    int64_t iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _dev_info(*(param_1 + 0x18),"%s()\n","wcd938x_soc_codec_probe");
    iVar11 = *(*(param_1 + 0x18) + 0x98);
    if (iVar11 == 0) {
        return -0x16;
    }
    *(iVar11 + 0x10) = param_1;
    snd_soc_component_init_regmap(param_1,*(iVar11 + 0x20));
    devm_regmap_qti_debugfs_register(*(iVar11 + 0x30) + 0x48,*(iVar11 + 0x20));
    uVar4 = snd_soc_component_read(param_1,0x34b0);
    *(iVar11 + 8) = uVar4 >> 1 & 0xf;
    iVar6 = devm_kmalloc(*(param_1 + 0x18),0x78,0xdc0);
    *(iVar11 + 0x58) = iVar6;
    if (iVar6 == 0) {
        _dev_err(*(param_1 + 0x18),"Failed to allocate fw_data\n");
        return -0xc;
    }
    puVar1 = iVar6 + 0x20;
    Hint_Prefetch(puVar1,2,0,1);
    do {
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
            *puVar1 = *puVar1 | 4;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    iVar5 = wcd_cal_create_hwdep(*(iVar11 + 0x58),1000,param_1);
    if (iVar5 < 0) {
        uVar7 = *(param_1 + 0x18);
        pcVar8 = "%s hwdep failed %d\n";
        iVar9 = iVar5;
        goto code_r0x0801b56c;
    }
    iVar5 = sym.wcd938x_mbhc_init(iVar11 + 0x100,param_1,*(iVar11 + 0x58));
    if (iVar5 != 0) {
        _printk(0x8009140,"wcd938x_soc_codec_probe");
        *(iVar11 + 0x58) = 0;
        return iVar5;
    }
    iVar6 = param_1 + 0xd0;
    snd_soc_dapm_ignore_suspend(iVar6,"WCD938X_AIF Playback");
    snd_soc_dapm_ignore_suspend(iVar6,"WCD938X_AIF Capture");
    snd_soc_dapm_ignore_suspend(iVar6,"AMIC1");
    snd_soc_dapm_ignore_suspend(iVar6,"AMIC2");
    snd_soc_dapm_ignore_suspend(iVar6,"AMIC3");
    snd_soc_dapm_ignore_suspend(iVar6,"AMIC4");
    snd_soc_dapm_ignore_suspend(iVar6,"AMIC5");
    snd_soc_dapm_ignore_suspend(iVar6,"AMIC6");
    snd_soc_dapm_ignore_suspend(iVar6,"AMIC7");
    snd_soc_dapm_ignore_suspend(iVar6,"VA AMIC1");
    snd_soc_dapm_ignore_suspend(iVar6,"VA AMIC2");
    snd_soc_dapm_ignore_suspend(iVar6,"VA AMIC3");
    snd_soc_dapm_ignore_suspend(iVar6,"VA AMIC4");
    snd_soc_dapm_ignore_suspend(iVar6,"VA AMIC5");
    snd_soc_dapm_ignore_suspend(iVar6,"VA AMIC6");
    snd_soc_dapm_ignore_suspend(iVar6,"VA AMIC7");
    snd_soc_dapm_ignore_suspend(iVar6,"WCD_TX_OUTPUT");
    snd_soc_dapm_ignore_suspend(iVar6,"IN1_HPHL");
    snd_soc_dapm_ignore_suspend(iVar6,"IN2_HPHR");
    snd_soc_dapm_ignore_suspend(iVar6,"IN3_AUX");
    snd_soc_dapm_ignore_suspend(iVar6,0x800911a);
    snd_soc_dapm_ignore_suspend(iVar6,0x800703a);
    snd_soc_dapm_ignore_suspend(iVar6,"HPHL");
    snd_soc_dapm_ignore_suspend(iVar6,"HPHR");
    snd_soc_dapm_ignore_suspend(iVar6,"WCD_TX_DUMMY");
    snd_soc_dapm_ignore_suspend(iVar6,"WCD_RX_DUMMY");
    snd_soc_dapm_sync(iVar6);
    wcd_cls_h_init(iVar11 + 0xe0);
    sym.wcd938x_init_reg(param_1);
    iVar5 = snd_soc_add_component_controls(param_1,obj.wcd9380_debug_snd_controls,1);
    if (-1 < iVar5) {
        iVar9 = *(iVar11 + 8);
        if (iVar9 == 0) {
            iVar5 = snd_soc_add_component_controls(param_1,obj.wcd9380_snd_controls,6);
            if (iVar5 < 0) goto code_r0x0801b51c;
            iVar9 = *(iVar11 + 8);
        }
        if ((iVar9 != 5) || (iVar5 = snd_soc_add_component_controls(param_1,obj.wcd9385_snd_controls,6), -1 < iVar5))
        {
            pcVar10 = *(iVar11 + 0xc40);
            *(iVar11 + 0xc50) = 1;
            *(iVar11 + 0xc18) = sym.wcd938x_event_notify.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt;
            if (pcVar10 == NULL) {
                return iVar5;
            }
            __cfi_slowpath_diag(0x3b795baa068bc3a6,pcVar10,0x8001ad0);
            iVar5 = (*pcVar10)(*(iVar11 + 0xc30),iVar11 + 0xc18,1);
            if (iVar5 == 0) {
                return 0;
            }
            _dev_err(*(param_1 + 0x18),"%s: Failed to register notifier %d\n","wcd938x_soc_codec_probe",iVar5);
            return iVar5;
        }
    }
code_r0x0801b51c:
    uVar7 = *(param_1 + 0x18);
    pcVar8 = "%s: Failed to add snd ctrls for variant: %d\n";
    iVar9 = *(iVar11 + 8);
code_r0x0801b56c:
    _dev_err(uVar7,pcVar8,"wcd938x_soc_codec_probe",iVar9);
    *(iVar11 + 0x58) = 0;
    return iVar5;
}


// ===== sym.wcd938x_mbhc_btn_to_num.228a7220f248aaede76982248f6c4394.cfi_jt @ 0x08018ab0 (size 8) =====

uint32_t sym.wcd938x_mbhc_btn_to_num.228a7220f248aaede76982248f6c4394.cfi_jt(ulong param_1)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = snd_soc_component_read(param_1,0x3019);
    return uVar1 & 7;
}


// ===== sym.wcd938x_soc_codec_suspend.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt @ 0x08018ab8 (size 8) =====

ulong sym.wcd938x_soc_codec_suspend.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    
    iVar1 = *(*(param_1 + 0x18) + 0x98);
    if (iVar1 != 0) {
        *(iVar1 + 0x124) = 1;
    }
    return 0;
}


// ===== sym.wcd938x_get_codec_variant.cfi_jt @ 0x08018ac0 (size 8) =====

uint sym.wcd938x_get_codec_variant.cfi_jt(int64_t param_1)

{
    uint uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        uVar1 = 0xffffffea;
    }
    else {
        iVar2 = *(*(param_1 + 0x18) + 0x98);
        if (iVar2 == 0) {
            _dev_err(*(param_1 + 0x18),"%s:wcd938x not probed\n","wcd938x_get_codec_variant");
            uVar1 = 0;
        }
        else {
            uVar1 = *(iVar2 + 8);
        }
    }
    return uVar1;
}


// ===== sym.wcd938x_codec_get_dev_num.cfi_jt @ 0x08018ac8 (size 8) =====

uint64_t sym.wcd938x_codec_get_dev_num.cfi_jt(int64_t param_1)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 != 0) {
        iVar2 = *(*(param_1 + 0x18) + 0x98);
        if ((iVar2 != 0) && (iVar2 = *(iVar2 + 0x28), iVar2 != 0)) {
            return *(iVar2 + 0x40);
        }
        iVar1 = ___ratelimit(obj.wcd938x_codec_get_dev_num._rs,"wcd938x_codec_get_dev_num");
        if (iVar1 != 0) {
            _printk(0x8006168,"wcd938x_codec_get_dev_num");
        }
    }
    return 0xffffffea;
}


// ===== sym.wcd938x_mbhc_moisture_config.228a7220f248aaede76982248f6c4394.cfi_jt @ 0x08018ad0 (size 8) =====

void sym.wcd938x_mbhc_moisture_config.228a7220f248aaede76982248f6c4394.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(param_1 + 0xe0) == 0) || (*(*(param_1 + 0x90) + 0x58) != 0)) {
        iVar1 = 0;
    }
    else {
        iVar1 = 0;
        if (*(param_1 + 0xc3) != '\0') {
            iVar1 = *(param_1 + 0xe0) << 2;
        }
    }
    snd_soc_component_update_bits(*(param_1 + 0xf8),0x3121,0xc,iVar1);
    return;
}


// ===== sym.wcd938x_mbhc_init.cfi_jt @ 0x08018ad8 (size 8) =====

int sym.wcd938x_mbhc_init.cfi_jt(int64_t *param_1,int64_t param_2,ulong param_3)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 == 0) {
        _printk(0x800464a,"wcd938x_mbhc_init");
        iVar1 = -0x16;
    }
    else {
        iVar2 = devm_kmalloc(*(param_2 + 0x18),0x470,0xdc0);
        if (iVar2 == 0) {
            iVar1 = -0xc;
        }
        else {
            *(iVar2 + 0x468) = param_3;
            __init_rwsem(iVar2 + 0x420,"&(&wcd938x_mbhc->notifier)->rwsem",obj.wcd938x_soc_get_mbhc._rs);
            iVar3 = *(param_2 + 0x18);
            *(iVar2 + 0x460) = 0;
            *(iVar2 + 0x3d4) = 1;
            iVar4 = *(iVar3 + 0x90);
            if (iVar4 == 0) {
                _dev_err(iVar3,"%s: pdata pointer is NULL\n","wcd938x_mbhc_init");
                iVar1 = -0x16;
            }
            else {
                *(iVar2 + 0xd0) = *(iVar4 + 0x24);
                iVar1 = wcd_mbhc_init(iVar2,param_2,obj.mbhc_cb,obj.intr_ids,obj.wcd_mbhc_registers,1);
                if (iVar1 == 0) {
                    *param_1 = iVar2;
                    snd_soc_add_component_controls(param_2,obj.impedance_detect_controls,2);
                    snd_soc_add_component_controls(param_2,obj.hph_type_detect_controls,1);
                    return 0;
                }
                _dev_err(*(param_2 + 0x18),"%s: mbhc initialization failed\n","wcd938x_mbhc_init");
            }
            devm_kfree(*(param_2 + 0x18),iVar2);
        }
    }
    return iVar1;
}


// ===== sym.wcd938x_bcs_get.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt @ 0x08018ae0 (size 8) =====

ulong sym.wcd938x_bcs_get.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt(int64_t param_1,int64_t param_2)

{
    *(param_2 + 0x48) = *(*(*(*(param_1 + 0x80) + 0x18) + 0x98) + 0x123);
    return 0;
}


// ===== sym.snd_soc_put_volsw.cfi_jt @ 0x08018ae8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_put_volsw.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.snd_soc_dapm_put_volsw.cfi_jt @ 0x08018af0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_dapm_put_volsw.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.wcd938x_ear_pa_gain_get.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt @ 0x08018af8 (size 8) =====

ulong sym.wcd938x_ear_pa_gain_get.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint32_t uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x80);
    uVar1 = snd_soc_component_read(iVar2,0x300b);
    *(param_2 + 0x48) = uVar1 >> 2 & 0x1f;
    _dev_printk(0x800991b,*(iVar2 + 0x18),"%s: ear_pa_gain = 0x%x\n","wcd938x_ear_pa_gain_get");
    return 0;
}


// ===== sym.wcd938x_codec_debug_set.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt @ 0x08018b00 (size 8) =====

ulong sym.wcd938x_codec_debug_set.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar2;
    int64_t iVar3;
    ulong unaff_x30;
    uchar auVar4 [16];
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_2c = 0;
    puVar2 = *(*(*(param_1 + 0x80) + 0x18) + 0x98);
    regmap_read(puVar2[4],0x3000,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_BASE_ADDRESS = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3000,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_PAGE_REGISTER = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3001,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_BIAS = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3008,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_RX_SUPPLIES = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3009,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_HPH = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x300a,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_EAR = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x300b,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_EAR_COMPANDER_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x300e,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_TX_CH1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x300f,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_TX_CH2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3010,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_TX_CH3 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3011,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_TX_CH4 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3012,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_MICB1_MICB2_DSP_EN_LOGIC = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3013,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_MICB3_DSP_EN_LOGIC = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3014,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_MBHC_MECH = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3015,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_MBHC_ELECT = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3016,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_MBHC_ZDET = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3017,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_MBHC_RESULT_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3018,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_MBHC_RESULT_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3019,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_MBHC_RESULT_3 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x301a,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_MBHC_BTN0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x301b,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_MBHC_BTN1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x301c,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_MBHC_BTN2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x301d,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_MBHC_BTN3 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x301e,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_MBHC_BTN4 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x301f,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_MBHC_BTN5 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3020,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_MBHC_BTN6 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3021,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_MBHC_BTN7 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3022,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_MICB1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3023,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_MICB2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3024,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_MICB2_RAMP = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3025,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_MICB3 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3026,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_MICB4 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3028,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_BIAS_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3029,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_BIAS_VBG_FINE_ADJ = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3040,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_LDOL_VDDCX_ADJUST = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3041,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_LDOL_DISABLE_LDOL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3056,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MBHC_CTL_CLK = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3057,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MBHC_CTL_ANA = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3058,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MBHC_CTL_SPARE_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3059,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MBHC_CTL_SPARE_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x305a,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MBHC_CTL_BCS = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x305b,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MBHC_MOISTURE_DET_FSM_STATUS = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x305c,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MBHC_TEST_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3067,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_LDOH_MODE = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3068,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_LDOH_BIAS = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3069,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_LDOH_STB_LOADS = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x306a,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_LDOH_SLOWRAMP = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x306b,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MICB1_TEST_CTL_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x306c,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MICB1_TEST_CTL_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x306d,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MICB1_TEST_CTL_3 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x306e,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MICB2_TEST_CTL_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x306f,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MICB2_TEST_CTL_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3070,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MICB2_TEST_CTL_3 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3071,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MICB3_TEST_CTL_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3072,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MICB3_TEST_CTL_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3073,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MICB3_TEST_CTL_3 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3074,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MICB4_TEST_CTL_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3075,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MICB4_TEST_CTL_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3076,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MICB4_TEST_CTL_3 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3077,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_COM_ADC_VCM = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3078,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_COM_BIAS_ATEST = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3079,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_COM_SPARE1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x307a,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_COM_SPARE2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x307b,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_COM_TXFE_DIV_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x307c,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_COM_TXFE_DIV_START = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x307d,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_COM_SPARE3 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x307e,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_COM_SPARE4 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x307f,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_1_2_TEST_EN = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3080,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_1_2_ADC_IB = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3081,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_1_2_ATEST_REFCTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3082,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_1_2_TEST_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3083,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_1_2_TEST_BLK_EN1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3084,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_1_2_TXFE1_CLKDIV = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3085,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_1_2_SAR2_ERR = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3086,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_1_2_SAR1_ERR = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3087,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_3_4_TEST_EN = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3088,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_3_4_ADC_IB = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3089,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_3_4_ATEST_REFCTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x308a,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_3_4_TEST_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x308b,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_3_4_TEST_BLK_EN3 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x308c,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_3_4_TXFE3_CLKDIV = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x308d,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_3_4_SAR4_ERR = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x308e,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_3_4_SAR3_ERR = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x308f,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_3_4_TEST_BLK_EN2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3090,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_3_4_TXFE2_CLKDIV = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3091,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_3_4_SPARE1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3092,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_3_4_TEST_BLK_EN4 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3093,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_3_4_TXFE4_CLKDIV = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3094,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_3_4_SPARE2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3097,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_CLASSH_MODE_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3098,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_CLASSH_MODE_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3099,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_CLASSH_MODE_3 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x309a,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_CLASSH_CTRL_VCL_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x309b,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_CLASSH_CTRL_VCL_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x309c,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_CLASSH_CTRL_CCL_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x309d,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_CLASSH_CTRL_CCL_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x309e,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_CLASSH_CTRL_CCL_3 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x309f,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_CLASSH_CTRL_CCL_4 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30a0,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_CLASSH_CTRL_CCL_5 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30a1,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_CLASSH_BUCK_TMUX_A_D = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30a2,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_CLASSH_BUCK_SW_DRV_CNTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30a3,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_CLASSH_SPARE = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30a4,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_FLYBACK_EN = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30a5,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_FLYBACK_VNEG_CTRL_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30a6,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_FLYBACK_VNEG_CTRL_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30a7,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_FLYBACK_VNEG_CTRL_3 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30a8,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_FLYBACK_VNEG_CTRL_4 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30a9,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_FLYBACK_VNEG_CTRL_5 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30aa,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_FLYBACK_VNEG_CTRL_6 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30ab,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_FLYBACK_VNEG_CTRL_7 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30ac,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_FLYBACK_VNEG_CTRL_8 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30ad,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_FLYBACK_VNEG_CTRL_9 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30ae,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_FLYBACK_VNEGDAC_CTRL_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30af,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_FLYBACK_VNEGDAC_CTRL_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30b0,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_FLYBACK_VNEGDAC_CTRL_3 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30b1,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_FLYBACK_CTRL_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30b2,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_FLYBACK_TEST_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30b3,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_RX_AUX_SW_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30b4,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_RX_PA_AUX_IN_CONN = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30b5,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_RX_TIMER_DIV = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30b6,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_RX_OCP_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30b7,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_RX_OCP_COUNT = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30b8,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_RX_BIAS_EAR_DAC = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30b9,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_RX_BIAS_EAR_AMP = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30ba,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_RX_BIAS_HPH_LDO = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30bb,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_RX_BIAS_HPH_PA = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30bc,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_RX_BIAS_HPH_RDACBUFF_CNP2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30bd,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_RX_BIAS_HPH_RDAC_LDO = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30be,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_RX_BIAS_HPH_CNP1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30bf,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_RX_BIAS_HPH_LOWPOWER = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30c0,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_RX_BIAS_AUX_DAC = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30c1,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_RX_BIAS_AUX_AMP = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30c2,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_RX_BIAS_VNEGDAC_BLEEDER = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30c3,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_RX_BIAS_MISC = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30c4,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_RX_BIAS_BUCK_RST = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30c5,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_RX_BIAS_BUCK_VREF_ERRAMP = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30c6,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_RX_BIAS_FLYB_ERRAMP = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30c7,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_RX_BIAS_FLYB_BUFF = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30c8,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_RX_BIAS_FLYB_MID_RST = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30c9,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_L_STATUS = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30ca,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_R_STATUS = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30cb,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_CNP_EN = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30cc,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_CNP_WG_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30cd,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_CNP_WG_TIME = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30ce,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_OCP_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30cf,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_AUTO_CHOP = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30d0,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_CHOP_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30d1,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_PA_CTL1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30d2,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_PA_CTL2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30d3,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_L_EN = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30d4,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_L_TEST = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30d5,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_L_ATEST = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30d6,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_R_EN = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30d7,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_R_TEST = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30d8,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_R_ATEST = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30d9,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_RDAC_CLK_CTL1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30da,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_RDAC_CLK_CTL2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30db,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_RDAC_LDO_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30dc,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_RDAC_CHOP_CLK_LP_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30dd,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_REFBUFF_UHQA_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30de,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_REFBUFF_LP_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30df,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_L_DAC_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30e0,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_R_DAC_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30e1,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_SURGE_HPHLR_SURGE_COMP_SEL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30e2,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_SURGE_HPHLR_SURGE_EN = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30e3,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_SURGE_HPHLR_SURGE_MISC1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30e4,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_SURGE_HPHLR_SURGE_STATUS = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30e9,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_EAR_EAR_EN_REG = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30ea,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_EAR_EAR_PA_CON = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30eb,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_EAR_EAR_SP_CON = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30ec,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_EAR_EAR_DAC_CON = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30ed,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_EAR_EAR_CNP_FSM_CON = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30ee,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_EAR_TEST_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30ef,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_EAR_STATUS_REG_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30f0,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_EAR_STATUS_REG_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3100,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_NEW_PAGE_REGISTER = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3101,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_NEW_ANA_HPH2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3102,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_NEW_ANA_HPH3 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3103,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_SLEEP_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3104,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_SLEEP_WATCHDOG_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x311f,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MBHC_NEW_ELECT_REM_CLAMP_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3120,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MBHC_NEW_CTL_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3121,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MBHC_NEW_CTL_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3122,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MBHC_NEW_PLUG_DETECT_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3123,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MBHC_NEW_ZDET_ANA_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3124,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MBHC_NEW_ZDET_RAMP_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3125,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MBHC_NEW_FSM_STATUS = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3126,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MBHC_NEW_ADC_RESULT = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3127,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_NEW_AMIC_MUX_CFG = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3128,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_AUX_AUXPA = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3129,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_LDORXTX_MODE = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x312a,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_LDORXTX_CONFIG = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x312c,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIE_CRACK_DIE_CRK_DET_EN = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x312d,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIE_CRACK_DIE_CRK_DET_OUT = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3132,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_NEW_INT_RDAC_GAIN_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3133,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_NEW_INT_RDAC_HD2_CTL_L = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3134,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_NEW_INT_RDAC_VREF_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3135,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_NEW_INT_RDAC_OVERRIDE_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3136,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_NEW_INT_RDAC_HD2_CTL_R = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3137,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_NEW_INT_PA_MISC1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3138,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_NEW_INT_PA_MISC2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3139,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_NEW_INT_PA_RDAC_MISC = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x313a,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_NEW_INT_HPH_TIMER1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x313b,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_NEW_INT_HPH_TIMER2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x313c,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_NEW_INT_HPH_TIMER3 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x313d,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_NEW_INT_HPH_TIMER4 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x313e,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_NEW_INT_PA_RDAC_MISC2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x313f,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_NEW_INT_PA_RDAC_MISC3 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3140,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_NEW_INT_RDAC_HD2_CTL_L_NEW = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3141,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_NEW_INT_RDAC_HD2_CTL_R_NEW = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3145,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_RX_NEW_INT_HPH_RDAC_BIAS_LOHIFI = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3146,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_RX_NEW_INT_HPH_RDAC_BIAS_ULP = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3147,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_RX_NEW_INT_HPH_RDAC_LDO_LP = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31af,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MBHC_NEW_INT_MOISTURE_DET_DC_CTRL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31b0,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MBHC_NEW_INT_MOISTURE_DET_POLLING_CTRL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31b1,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MBHC_NEW_INT_MECH_DET_CURRENT = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31b2,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MBHC_NEW_INT_SPARE_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31b7,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_EAR_INT_NEW_EAR_CHOPPER_CON = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31b8,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_EAR_INT_NEW_CNP_VCM_CON1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31b9,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_EAR_INT_NEW_CNP_VCM_CON2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31ba,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_EAR_INT_NEW_EAR_DYNAMIC_BIAS = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31bd,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_AUX_INT_EN_REG = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31be,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_AUX_INT_PA_CTRL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31bf,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_AUX_INT_SP_CTRL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31c0,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_AUX_INT_DAC_CTRL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31c1,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_AUX_INT_CLK_CTRL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31c2,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_AUX_INT_TEST_CTRL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31c3,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_AUX_INT_STATUS_REG = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31c4,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_AUX_INT_MISC = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31c5,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_LDORXTX_INT_BIAS = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31c6,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_LDORXTX_INT_STB_LOADS_DTEST = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31c7,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_LDORXTX_INT_TEST0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31c8,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_LDORXTX_INT_STARTUP_TIMER = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31c9,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_LDORXTX_INT_TEST1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31ca,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_LDORXTX_INT_STATUS = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31d0,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_SLEEP_INT_WATCHDOG_CTL_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31d1,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_SLEEP_INT_WATCHDOG_CTL_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31d3,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIE_CRACK_INT_DIE_CRK_DET_INT1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31d4,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIE_CRACK_INT_DIE_CRK_DET_INT2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31d5,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_COM_NEW_INT_TXFE_DIVSTOP_L2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31d6,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_COM_NEW_INT_TXFE_DIVSTOP_L1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31d7,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_COM_NEW_INT_TXFE_DIVSTOP_L0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31d8,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_COM_NEW_INT_TXFE_DIVSTOP_ULP1P2M = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31d9,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_COM_NEW_INT_TXFE_DIVSTOP_ULP0P6M = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31da,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_COM_NEW_INT_TXFE_ICTRL_STG1_L2L1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31db,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_COM_NEW_INT_TXFE_ICTRL_STG1_L0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31dc,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_COM_NEW_INT_TXFE_ICTRL_STG1_ULP = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31dd,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_COM_NEW_INT_TXFE_ICTRL_STG2MAIN_L2L1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31de,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_COM_NEW_INT_TXFE_ICTRL_STG2MAIN_L0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31df,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_COM_NEW_INT_TXFE_ICTRL_STG2MAIN_ULP = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31e0,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_COM_NEW_INT_TXFE_ICTRL_STG2CASC_L2L1L0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31e1,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_COM_NEW_INT_TXFE_ICTRL_STG2CASC_ULP = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31e2,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_COM_NEW_INT_TXADC_SCBIAS_L2L1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31e3,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_COM_NEW_INT_TXADC_SCBIAS_L0ULP = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31e4,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_COM_NEW_INT_TXADC_INT_L2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31e5,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_COM_NEW_INT_TXADC_INT_L1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31e6,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_COM_NEW_INT_TXADC_INT_L0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31e7,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_COM_NEW_INT_TXADC_INT_ULP = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3400,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_PAGE_REGISTER = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3401,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CHIP_ID0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3402,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CHIP_ID1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3403,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CHIP_ID2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3404,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CHIP_ID3 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3405,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_SWR_TX_CLK_RATE = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3406,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_RST_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3407,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_TOP_CLK_CFG = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3408,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_ANA_CLK_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3409,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_DIG_CLK_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x340a,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_SWR_RST_EN = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x340b,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_PATH_MODE = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x340c,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_RX_RST = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x340d,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_RX0_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x340e,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_RX1_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x340f,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_RX2_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3410,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_TX_ANA_MODE_0_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3411,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_TX_ANA_MODE_2_3 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3414,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_COMP_CTL_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3417,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_ANA_TX_CLK_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3418,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_DSM_A1_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3419,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_DSM_A1_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x341a,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_DSM_A2_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x341b,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_DSM_A2_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x341c,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_DSM_A3_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x341d,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_DSM_A3_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x341e,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_DSM_A4_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x341f,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_DSM_A4_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3420,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_DSM_A5_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3421,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_DSM_A5_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3422,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_DSM_A6_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3423,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_DSM_A7_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3424,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_DSM_C_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3425,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_DSM_C_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3426,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_DSM_C_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3427,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_DSM_C_3 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3428,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_DSM_R1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3429,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_DSM_R2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x342a,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_DSM_R3 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x342b,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_DSM_R4 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x342c,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_DSM_R5 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x342d,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_DSM_R6 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x342e,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_DSM_R7 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x342f,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_AUX_DSM_A1_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3430,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_AUX_DSM_A1_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3431,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_AUX_DSM_A2_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3432,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_AUX_DSM_A2_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3433,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_AUX_DSM_A3_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3434,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_AUX_DSM_A3_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3435,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_AUX_DSM_A4_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3436,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_AUX_DSM_A4_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3437,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_AUX_DSM_A5_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3438,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_AUX_DSM_A5_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3439,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_AUX_DSM_A6_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x343a,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_AUX_DSM_A7_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x343b,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_AUX_DSM_C_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x343c,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_AUX_DSM_C_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x343d,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_AUX_DSM_C_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x343e,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_AUX_DSM_C_3 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x343f,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_AUX_DSM_R1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3440,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_AUX_DSM_R2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3441,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_AUX_DSM_R3 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3442,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_AUX_DSM_R4 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3443,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_AUX_DSM_R5 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3444,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_AUX_DSM_R6 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3445,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_AUX_DSM_R7 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3446,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_GAIN_RX_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3447,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_GAIN_RX_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3448,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_GAIN_DSD_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3449,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_GAIN_DSD_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x344a,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_GAIN_DSD_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x344b,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_AUX_GAIN_DSD_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x344c,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_AUX_GAIN_DSD_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x344d,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_AUX_GAIN_DSD_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x344e,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_GAIN_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x344f,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_AUX_GAIN_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3450,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_EAR_PATH_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3451,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_SWR_CLH = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3452,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_SWR_CLH_BYP = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3453,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_TX0_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3454,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_TX1_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3455,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_TX2_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3456,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_TX_RST = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3457,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_REQ_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3458,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_RST = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x345a,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_AMIC_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x345b,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_DMIC_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x345c,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_DMIC1_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x345d,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_DMIC2_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x345e,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_DMIC3_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x345f,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_DMIC4_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3460,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_PRG_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3461,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3462,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_DMIC_RATE_1_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3463,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_DMIC_RATE_3_4 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3465,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_PDM_WD_CTL0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3466,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_PDM_WD_CTL1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3467,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_PDM_WD_CTL2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x346a,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_INTR_MODE = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x346b,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_INTR_MASK_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x346c,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_INTR_MASK_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x346d,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_INTR_MASK_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x346e,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_INTR_STATUS_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x346f,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_INTR_STATUS_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3470,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_INTR_STATUS_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3471,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_INTR_CLEAR_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3472,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_INTR_CLEAR_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3473,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_INTR_CLEAR_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3474,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_INTR_LEVEL_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3475,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_INTR_LEVEL_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3476,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_INTR_LEVEL_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3477,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_INTR_SET_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3478,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_INTR_SET_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3479,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_INTR_SET_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x347a,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_INTR_TEST_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x347b,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_INTR_TEST_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x347c,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_INTR_TEST_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x347f,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_TX_MODE_DBG_EN = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3480,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_TX_MODE_DBG_0_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3481,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_TX_MODE_DBG_2_3 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3482,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_LB_IN_SEL_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3483,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_LOOP_BACK_MODE = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3484,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_SWR_DAC_TEST = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3485,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_SWR_HM_TEST_RX_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3486,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_SWR_HM_TEST_TX_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3487,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_SWR_HM_TEST_RX_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3488,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_SWR_HM_TEST_TX_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3489,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_SWR_HM_TEST_TX_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x348a,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_SWR_HM_TEST_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x348b,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_SWR_HM_TEST_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x348c,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_PAD_CTL_SWR_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x348d,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_PAD_CTL_SWR_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x348e,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_I2C_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x348f,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_TX_TANGGU_SW_MODE = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3490,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_TEST_CTL_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3491,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_TEST_CTL_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3492,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_T_DATA_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3493,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_T_DATA_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3494,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_PAD_CTL_PDM_RX0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3495,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_PAD_CTL_PDM_RX1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3496,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_PAD_CTL_PDM_TX0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3497,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_PAD_CTL_PDM_TX1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3498,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_PAD_CTL_PDM_TX2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3499,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_PAD_INP_DIS_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x349a,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_PAD_INP_DIS_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x349b,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_DRIVE_STRENGTH_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x349c,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_DRIVE_STRENGTH_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x349d,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_DRIVE_STRENGTH_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x349e,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_RX_DATA_EDGE_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x349f,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_TX_DATA_EDGE_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34a0,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_GPIO_MODE = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34a1,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_PIN_CTL_OE = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34a2,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_PIN_CTL_DATA_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34a3,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_PIN_CTL_DATA_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34a4,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_PIN_STATUS_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34a5,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_PIN_STATUS_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34a6,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_DIG_DEBUG_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34a7,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_DIG_DEBUG_EN = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34a8,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_ANA_CSR_DBG_ADD = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34a9,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_ANA_CSR_DBG_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34aa,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_SSP_DBG = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34ab,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_MODE_STATUS_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34ac,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_MODE_STATUS_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34ad,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_SPARE_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34ae,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_SPARE_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34af,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_SPARE_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34b0,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34b1,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34b2,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34b3,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_3 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34b4,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_4 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34b5,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_5 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34b6,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_6 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34b7,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_7 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34b8,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_8 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34b9,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_9 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34ba,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_10 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34bb,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_11 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34bc,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_12 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34bd,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_13 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34be,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_14 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34bf,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_15 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34c0,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_16 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34c1,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_17 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34c2,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_18 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34c3,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_19 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34c4,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_20 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34c5,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_21 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34c6,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_22 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34c7,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_23 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34c8,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_24 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34c9,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_25 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34ca,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_26 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34cb,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_27 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34cc,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_28 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34cd,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_29 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34ce,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_30 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34cf,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_31 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34d0,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_TX_REQ_FB_CTL_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34d1,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_TX_REQ_FB_CTL_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34d2,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_TX_REQ_FB_CTL_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34d3,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_TX_REQ_FB_CTL_3 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34d4,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_TX_REQ_FB_CTL_4 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34d5,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_DEM_BYPASS_DATA0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34d6,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_DEM_BYPASS_DATA1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34d7,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_DEM_BYPASS_DATA2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34d8,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_DEM_BYPASS_DATA3 = 0x%02x\n",uStack_2c);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return 0;
    }
    auVar4 = __stack_chk_fail();
    *extraout_x18 = sym.wcd938x_ear_pa_gain_get;
    iVar3 = *(auVar4._0_8_ + 0x80);
    uVar1 = snd_soc_component_read(iVar3,0x300b);
    *(auVar4._8_8_ + 0x48) = uVar1 >> 2 & 0x1f;
    _dev_printk(0x800991b,*(iVar3 + 0x18),"%s: ear_pa_gain = 0x%x\n","wcd938x_ear_pa_gain_get");
    return 0;
}


// ===== sym.wcd938x_rx_hph_mode_put.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt @ 0x08018b08 (size 8) =====

ulong sym.wcd938x_rx_hph_mode_put.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt(int64_t param_1,int64_t param_2)

{
    int iVar1;
    char *pcVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(param_1 + 0x80);
    iVar1 = *(param_2 + 0x48);
    iVar3 = *(iVar5 + 0x18);
    iVar4 = *(iVar3 + 0x98);
    _dev_printk(0x800991b,iVar3,"%s: mode: %d\n","wcd938x_rx_hph_mode_put",iVar1);
    if (*(iVar4 + 8) == 0) {
        if (iVar1 == 0) goto code_r0x08024024;
        if ((iVar1 != 6) && (iVar1 != 1)) goto code_r0x08024040;
        iVar1 = ___ratelimit(obj.wcd938x_rx_hph_mode_put._rs,"wcd938x_rx_hph_mode_put");
        if (iVar1 != 0) {
            pcVar2 = "%s:Invalid HPH Mode, default to CLS_H_ULP\n";
            goto code_r0x08024068;
        }
    }
    else {
        if (iVar1 != 0) goto code_r0x08024040;
code_r0x08024024:
        iVar1 = ___ratelimit(obj.wcd938x_rx_hph_mode_put._rs.825,"wcd938x_rx_hph_mode_put");
        if (iVar1 != 0) {
            pcVar2 = "%s:Invalid HPH Mode, default to class_AB\n";
code_r0x08024068:
            _dev_info(*(iVar5 + 0x18),pcVar2,"wcd938x_rx_hph_mode_put");
        }
    }
    iVar1 = 5;
code_r0x08024040:
    *(iVar4 + 0x108) = iVar1;
    return 0;
}


// ===== sym.wcd938x_ldoh_put.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt @ 0x08018b10 (size 8) =====

ulong sym.wcd938x_ldoh_put.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt(int64_t param_1,int64_t param_2)

{
    *(*(*(*(param_1 + 0x80) + 0x18) + 0x98) + 0x122) = *(param_2 + 0x48) != 0;
    return 0;
}


// ===== sym.wcd938x_rx_hph_mode_get.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt @ 0x08018b18 (size 8) =====

ulong sym.wcd938x_rx_hph_mode_get.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt(int64_t param_1,int64_t param_2)

{
    *(param_2 + 0x48) = *(*(*(*(param_1 + 0x80) + 0x18) + 0x98) + 0x108);
    return 0;
}


// ===== sym.wcd938x_set_compander.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt @ 0x08018b20 (size 8) =====

ulong sym.wcd938x_set_compander.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt(int64_t param_1,int64_t param_2)

{
    bool bVar1;
    int64_t iVar2;
    
    bVar1 = *(param_2 + 0x48) != 0;
    iVar2 = *(*(*(param_1 + 0x80) + 0x18) + 0x98);
    if (*(*(param_1 + 0x78) + 0x18) == 0) {
        *(iVar2 + 0x120) = bVar1;
    }
    else {
        *(iVar2 + 0x121) = bVar1;
    }
    return 0;
}


// ===== sym.snd_soc_dapm_get_enum_double.cfi_jt @ 0x08018b28 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_dapm_get_enum_double.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.snd_soc_dapm_get_volsw.cfi_jt @ 0x08018b30 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_dapm_get_volsw.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.wcd938x_bcs_put.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt @ 0x08018b38 (size 8) =====

ulong sym.wcd938x_bcs_put.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt(int64_t param_1,int64_t param_2)

{
    *(*(*(*(param_1 + 0x80) + 0x18) + 0x98) + 0x123) = *(param_2 + 0x48) != 0;
    return 0;
}


// ===== sym.wcd938x_ldoh_get.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt @ 0x08018b40 (size 8) =====

ulong sym.wcd938x_ldoh_get.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt(int64_t param_1,int64_t param_2)

{
    *(param_2 + 0x48) = *(*(*(*(param_1 + 0x80) + 0x18) + 0x98) + 0x122);
    return 0;
}


// ===== sym.snd_soc_dapm_put_enum_double.cfi_jt @ 0x08018b48 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_dapm_put_enum_double.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.snd_soc_get_volsw.cfi_jt @ 0x08018b50 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_get_volsw.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.wcd938x_tx_mode_put.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt @ 0x08018b58 (size 8) =====

void sym.wcd938x_tx_mode_put.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint uVar1;
    code *pcVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t iVar4;
    int64_t iVar5;
    ulong unaff_x30;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    iVar5 = *(param_1 + 0x80);
    uStack_3c = 0;
    if (iVar5 == 0) {
code_r0x080241bc:
        uVar3 = 0xffffffea;
    }
    else {
        iVar4 = *(*(iVar5 + 0x18) + 0x98);
        if (iVar4 == 0) goto code_r0x080241bc;
        uVar3 = sym.wcd938x_tx_path_get(*(iVar5 + 0x18),&uStack_3c);
        if (uVar3 == 0) {
            uVar1 = *(param_2 + 0x48);
            _dev_printk(0x800991b,*(iVar5 + 0x18),"%s: mode: %d\n","wcd938x_tx_mode_put",uVar1);
            if (3 < uStack_3c) goto code_r0x080241f4;
            uVar3 = 0;
            *(iVar4 + uStack_3c * 4 + 0x10c) = uVar1;
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(uVar3);
code_r0x080241f4:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x80241f8);
    (*pcVar2)();
}


// ===== sym.wcd938x_codec_debug_get.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt @ 0x08018b60 (size 8) =====

ulong sym.wcd938x_codec_debug_get.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt(void)

{
    return 0;
}


// ===== sym.wcd938x_tx_master_ch_get.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt @ 0x08018b68 (size 8) =====

void sym.wcd938x_tx_master_ch_get.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt(int64_t param_1,int64_t param_2)

{
    int iVar1;
    ulong uVar2;
    uint32_t uVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong unaff_x30;
    uchar auVar7 [16];
    uint32_t uStack_7c;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    uVar2 = 0xffffffea;
    uStack_2c = 0xffffffea;
    if (*(param_1 + 0x80) != 0) {
        iVar4 = *(*(*(param_1 + 0x80) + 0x18) + 0x98);
        if (iVar4 != 0) {
            sym.wcd938x_tx_get_slave_ch_type_idx(param_1 + 0x20,&uStack_2c);
            if (uStack_2c < 0xd) {
                uVar2 = 0;
                uVar3 = *(iVar4 + uStack_2c + 0xc79) - 0x2d;
                iVar4 = 0;
                if (uVar3 < 0xc) {
                    iVar4 = (uVar3 & 0xff) + 1;
                }
                *(param_2 + 0x48) = iVar4;
                goto code_r0x0801b834;
            }
        }
        uVar2 = 0xffffffea;
    }
code_r0x0801b834:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_28) {
        return;
    }
    auVar7 = __stack_chk_fail(uVar2);
    *extraout_x18 = sym.wcd938x_tx_master_ch_put;
    pcStack_68 = sym.wcd938x_tx_master_ch_put;
    iVar4 = sp_el0;
    iStack_78 = *(iVar4 + 0x5e0);
    iVar4 = *(auVar7._0_8_ + 0x80);
    uVar2 = 0xffffffea;
    uStack_7c = 0xffffffea;
    puStack_70 = &stack0xffffffffffffffe0;
    if (iVar4 != 0) {
        iVar6 = *(*(iVar4 + 0x18) + 0x98);
        if (iVar6 != 0) {
            sym.wcd938x_tx_get_slave_ch_type_idx(auVar7._0_8_ + 0x20,&uStack_7c);
            uVar5 = uStack_7c;
            if (uStack_7c < 0xd) {
                _dev_printk(0x800991b,*(iVar4 + 0x18),"%s: slave_ch_idx: %d","wcd938x_tx_master_ch_put",uVar5);
                _dev_printk(0x800991b,*(iVar4 + 0x18),"%s: ucontrol->value.enumerated.item[0] = %ld\n",
                            "wcd938x_tx_master_ch_put",*(auVar7._8_8_ + 0x48));
                uVar3 = *(auVar7._8_8_ + 0x48);
                if (uVar3 < 0xf) {
                    uVar2 = 0;
                    *(iVar6 + uVar5 + 0xc79) = *(obj.swr_master_ch_map + uVar3 * 4);
                    goto code_r0x0801b8d0;
                }
            }
        }
        uVar2 = 0xffffffea;
    }
code_r0x0801b8d0:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_78) {
        return;
    }
    auVar7 = __stack_chk_fail(uVar2);
    uVar2 = auVar7._0_8_;
    *extraout_x18_00 = sym.wcd938x_tx_get_slave_ch_type_idx;
    iVar4 = strnstr(uVar2,"ADC1",5);
    if (iVar4 == 0) {
        iVar4 = strnstr(uVar2,"ADC2",5);
        if (iVar4 == 0) {
            iVar4 = strnstr(uVar2,"ADC3",5);
            if (iVar4 == 0) {
                iVar4 = strnstr(uVar2,"ADC4",5);
                if (iVar4 == 0) {
                    iVar4 = strnstr(uVar2,"DMIC0",6);
                    if (iVar4 == 0) {
                        iVar4 = strnstr(uVar2,"DMIC1",6);
                        if (iVar4 == 0) {
                            iVar4 = strnstr(uVar2,"MBHC",5);
                            if (iVar4 == 0) {
                                iVar4 = strnstr(uVar2,"DMIC2",6);
                                if (iVar4 == 0) {
                                    iVar4 = strnstr(uVar2,"DMIC3",6);
                                    if (iVar4 == 0) {
                                        iVar4 = strnstr(uVar2,"DMIC4",6);
                                        if (iVar4 == 0) {
                                            iVar4 = strnstr(uVar2,"DMIC5",6);
                                            if (iVar4 == 0) {
                                                iVar4 = strnstr(uVar2,"DMIC6",6);
                                                if (iVar4 == 0) {
                                                    iVar4 = strnstr(uVar2,"DMIC7",6);
                                                    if (iVar4 == 0) {
                                                        iVar1 = ___ratelimit(obj.wcd938x_tx_get_slave_ch_type_idx._rs,
                                                                             "wcd938x_tx_get_slave_ch_type_idx");
                                                        if (iVar1 != 0) {
                                                            _printk(0x8005565,"wcd938x_tx_get_slave_ch_type_idx",uVar2
                                                                   );
                                                        }
                                                        uVar3 = 0xffffffea;
                                                        goto code_r0x0801bb3c;
                                                    }
                                                    iVar4 = 0xc;
                                                }
                                                else {
                                                    iVar4 = 0xb;
                                                }
                                            }
                                            else {
                                                iVar4 = 10;
                                            }
                                        }
                                        else {
                                            iVar4 = 9;
                                        }
                                    }
                                    else {
                                        iVar4 = 8;
                                    }
                                }
                                else {
                                    iVar4 = 7;
                                }
                            }
                            else {
                                iVar4 = 6;
                            }
                        }
                        else {
                            iVar4 = 5;
                        }
                    }
                    else {
                        iVar4 = 4;
                    }
                }
                else {
                    iVar4 = 3;
                }
            }
            else {
                iVar4 = 2;
            }
        }
        else {
            iVar4 = 1;
        }
    }
    else {
        iVar4 = 0;
    }
    uVar3 = *(iVar4 * 2 + 0x800ce01);
code_r0x0801bb3c:
    *auVar7._8_8_ = uVar3;
    return;
}


// ===== sym.wcd938x_get_compander.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt @ 0x08018b70 (size 8) =====

ulong sym.wcd938x_get_compander.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    
    iVar1 = 0x120;
    if (*(*(param_1 + 0x78) + 0x18) != 0) {
        iVar1 = 0x121;
    }
    *(param_2 + 0x48) = *(*(*(*(param_1 + 0x80) + 0x18) + 0x98) + iVar1);
    return 0;
}


// ===== sym.wcd938x_get_hph_type.228a7220f248aaede76982248f6c4394.cfi_jt @ 0x08018b78 (size 8) =====

ulong sym.wcd938x_get_hph_type.228a7220f248aaede76982248f6c4394.cfi_jt(int64_t param_1,int64_t param_2)

{
    int iVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0x80);
    iVar2 = sym.wcd938x_soc_get_mbhc(arg1);
    if (iVar2 == 0) {
        iVar1 = ___ratelimit(obj.wcd938x_get_hph_type._rs,"wcd938x_get_hph_type");
        if (iVar1 != 0) {
            _dev_err(*(arg1 + 0x18),"%s: mbhc not initialized!\n","wcd938x_get_hph_type");
        }
        uVar3 = 0xffffffea;
    }
    else {
        uVar3 = 0;
        *(param_2 + 0x48) = *(iVar2 + 0x1c4);
    }
    return uVar3;
}


// ===== sym.wcd938x_tx_master_ch_put.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt @ 0x08018b80 (size 8) =====

void sym.wcd938x_tx_master_ch_put.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt(int64_t param_1,int64_t param_2)

{
    int iVar1;
    ulong uVar2;
    uint32_t uVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong unaff_x30;
    uchar auVar7 [16];
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_48 = *(iVar6 + 0x5e0);
    iVar6 = *(param_1 + 0x80);
    uVar2 = 0xffffffea;
    uStack_4c = 0xffffffea;
    if (iVar6 != 0) {
        iVar5 = *(*(iVar6 + 0x18) + 0x98);
        if (iVar5 != 0) {
            sym.wcd938x_tx_get_slave_ch_type_idx(param_1 + 0x20,&uStack_4c);
            uVar4 = uStack_4c;
            if (uStack_4c < 0xd) {
                _dev_printk(0x800991b,*(iVar6 + 0x18),"%s: slave_ch_idx: %d","wcd938x_tx_master_ch_put",uVar4);
                _dev_printk(0x800991b,*(iVar6 + 0x18),"%s: ucontrol->value.enumerated.item[0] = %ld\n",
                            "wcd938x_tx_master_ch_put",*(param_2 + 0x48));
                if (*(param_2 + 0x48) < 0xf) {
                    uVar2 = 0;
                    *(iVar5 + uVar4 + 0xc79) = *(obj.swr_master_ch_map + *(param_2 + 0x48) * 4);
                    goto code_r0x0801b8d0;
                }
            }
        }
        uVar2 = 0xffffffea;
    }
code_r0x0801b8d0:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_48) {
        return;
    }
    auVar7 = __stack_chk_fail(uVar2);
    uVar2 = auVar7._0_8_;
    *extraout_x18 = sym.wcd938x_tx_get_slave_ch_type_idx;
    iVar6 = strnstr(uVar2,"ADC1",5);
    if (iVar6 == 0) {
        iVar6 = strnstr(uVar2,"ADC2",5);
        if (iVar6 == 0) {
            iVar6 = strnstr(uVar2,"ADC3",5);
            if (iVar6 == 0) {
                iVar6 = strnstr(uVar2,"ADC4",5);
                if (iVar6 == 0) {
                    iVar6 = strnstr(uVar2,"DMIC0",6);
                    if (iVar6 == 0) {
                        iVar6 = strnstr(uVar2,"DMIC1",6);
                        if (iVar6 == 0) {
                            iVar6 = strnstr(uVar2,"MBHC",5);
                            if (iVar6 == 0) {
                                iVar6 = strnstr(uVar2,"DMIC2",6);
                                if (iVar6 == 0) {
                                    iVar6 = strnstr(uVar2,"DMIC3",6);
                                    if (iVar6 == 0) {
                                        iVar6 = strnstr(uVar2,"DMIC4",6);
                                        if (iVar6 == 0) {
                                            iVar6 = strnstr(uVar2,"DMIC5",6);
                                            if (iVar6 == 0) {
                                                iVar6 = strnstr(uVar2,"DMIC6",6);
                                                if (iVar6 == 0) {
                                                    iVar6 = strnstr(uVar2,"DMIC7",6);
                                                    if (iVar6 == 0) {
                                                        iVar1 = ___ratelimit(obj.wcd938x_tx_get_slave_ch_type_idx._rs,
                                                                             "wcd938x_tx_get_slave_ch_type_idx");
                                                        if (iVar1 != 0) {
                                                            _printk(0x8005565,"wcd938x_tx_get_slave_ch_type_idx",uVar2
                                                                   );
                                                        }
                                                        uVar3 = 0xffffffea;
                                                        goto code_r0x0801bb3c;
                                                    }
                                                    iVar6 = 0xc;
                                                }
                                                else {
                                                    iVar6 = 0xb;
                                                }
                                            }
                                            else {
                                                iVar6 = 10;
                                            }
                                        }
                                        else {
                                            iVar6 = 9;
                                        }
                                    }
                                    else {
                                        iVar6 = 8;
                                    }
                                }
                                else {
                                    iVar6 = 7;
                                }
                            }
                            else {
                                iVar6 = 6;
                            }
                        }
                        else {
                            iVar6 = 5;
                        }
                    }
                    else {
                        iVar6 = 4;
                    }
                }
                else {
                    iVar6 = 3;
                }
            }
            else {
                iVar6 = 2;
            }
        }
        else {
            iVar6 = 1;
        }
    }
    else {
        iVar6 = 0;
    }
    uVar3 = *(iVar6 * 2 + 0x800ce01);
code_r0x0801bb3c:
    *auVar7._8_8_ = uVar3;
    return;
}


// ===== sym.wcd938x_hph_impedance_get.228a7220f248aaede76982248f6c4394.cfi_jt @ 0x08018b88 (size 8) =====

//WARNING: Type propagation algorithm not settling

ulong sym.wcd938x_hph_impedance_get.228a7220f248aaede76982248f6c4394.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint32_t *puVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar5;
    ulong unaff_x30;
    uchar auVar6 [16];
    uint32_t uStack_40;
    uchar auStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iVar5 = *(param_1 + 0x80);
    _uStack_40 = 0;
    iVar3 = sym.wcd938x_soc_get_mbhc(iVar5);
    if (iVar3 == 0) {
        iVar2 = ___ratelimit(obj.wcd938x_hph_impedance_get._rs,"wcd938x_hph_impedance_get");
        if (iVar2 != 0) {
            _dev_err(*(iVar5 + 0x18),"%s: mbhc not initialized!\n","wcd938x_hph_impedance_get");
        }
        uVar4 = 0xffffffea;
    }
    else {
        iVar2 = *(*(param_1 + 0x78) + 0x18);
        wcd_mbhc_get_impedance(iVar3,auStack_3c,&uStack_40);
        uVar4 = 0;
        puVar1 = auStack_3c;
        if (iVar2 != 0) {
            puVar1 = &uStack_40;
        }
        *(param_2 + 0x48) = *puVar1;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return uVar4;
    }
    auVar6 = __stack_chk_fail(uVar4);
    *extraout_x18 = sym.wcd938x_get_hph_type;
    iVar5 = *(auVar6._0_8_ + 0x80);
    iVar3 = sym.wcd938x_soc_get_mbhc(iVar5);
    if (iVar3 == 0) {
        iVar2 = ___ratelimit(obj.wcd938x_get_hph_type._rs,"wcd938x_get_hph_type");
        if (iVar2 != 0) {
            _dev_err(*(iVar5 + 0x18),"%s: mbhc not initialized!\n","wcd938x_get_hph_type");
        }
        uVar4 = 0xffffffea;
    }
    else {
        uVar4 = 0;
        *(auVar6._8_8_ + 0x48) = *(iVar3 + 0x1c4);
    }
    return uVar4;
}


// ===== sym.wcd938x_tx_mode_get.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt @ 0x08018b90 (size 8) =====

void sym.wcd938x_tx_mode_get.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt(int64_t param_1,int64_t param_2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_2c = 0;
    if (*(param_1 + 0x80) == 0) {
code_r0x080240ec:
        uVar2 = 0xffffffea;
    }
    else {
        iVar3 = *(*(param_1 + 0x80) + 0x18);
        iVar4 = *(iVar3 + 0x98);
        if (iVar4 == 0) goto code_r0x080240ec;
        uVar2 = sym.wcd938x_tx_path_get(iVar3,&uStack_2c);
        if (-1 < uVar2) {
            if (3 < uStack_2c) goto code_r0x08024120;
            uVar2 = 0;
            *(param_2 + 0x48) = *(iVar4 + uStack_2c * 4 + 0x10c);
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return;
    }
    __stack_chk_fail(uVar2);
code_r0x08024120:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8024124);
    (*pcVar1)();
}


// ===== sym.wcd938x_ear_pa_gain_put.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt @ 0x08018b98 (size 8) =====

ulong sym.wcd938x_ear_pa_gain_put.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x80);
    iVar1 = *(iVar2 + 0x18);
    iVar3 = *(iVar1 + 0x98);
    _dev_printk(0x800991b,iVar1,"%s: ucontrol->value.integer.value[0]  = %ld\n","wcd938x_ear_pa_gain_put",
                *(param_2 + 0x48));
    if (*(iVar3 + 0x120) == '\0') {
        snd_soc_component_update_bits(iVar2,0x300b,0x7c,(*(param_2 + 0x48) & 0x3f) << 2);
    }
    return 0;
}


// ===== sym.wcd938x_soc_get_mbhc.cfi_jt @ 0x08018ba0 (size 8) =====

ulong sym.wcd938x_soc_get_mbhc.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        iVar1 = ___ratelimit(obj.wcd938x_soc_get_mbhc._rs,"wcd938x_soc_get_mbhc");
        if (iVar1 == 0) {
            return 0;
        }
        uVar2 = 0x8003be3;
    }
    else {
        iVar3 = *(*(param_1 + 0x18) + 0x98);
        if (iVar3 != 0) {
            return *(iVar3 + 0x100);
        }
        iVar1 = ___ratelimit(obj.wcd938x_soc_get_mbhc._rs.1,"wcd938x_soc_get_mbhc");
        if (iVar1 == 0) {
            return 0;
        }
        uVar2 = 0x8002b6c;
    }
    _printk(uVar2,"wcd938x_soc_get_mbhc");
    return 0;
}


// ===== sym.wcd938x_soc_get_mbhc @ 0x08018ba8 (size 144) =====

ulong sym.wcd938x_soc_get_mbhc(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        iVar1 = ___ratelimit(obj.wcd938x_soc_get_mbhc._rs,"wcd938x_soc_get_mbhc");
        if (iVar1 == 0) {
            return 0;
        }
        uVar2 = 0x8003be3;
    }
    else {
        iVar3 = *(*(arg1 + 0x18) + 0x98);
        if (iVar3 != 0) {
            return *(iVar3 + 0x100);
        }
        iVar1 = ___ratelimit(obj.wcd938x_soc_get_mbhc._rs.1,"wcd938x_soc_get_mbhc");
        if (iVar1 == 0) {
            return 0;
        }
        uVar2 = 0x8002b6c;
    }
    _printk(uVar2,"wcd938x_soc_get_mbhc");
    return 0;
}


// ===== sym.wcd938x_get_micb_vout_ctl_val @ 0x08018c38 (size 124) =====

uint32_t sym.wcd938x_get_micb_vout_ctl_val(int64_t arg1)

{
    int iVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 - 0xb23U < 0xfffff8c5) {
        iVar1 = ___ratelimit(obj.wcd938x_get_micb_vout_ctl_val._rs,"wcd938x_get_micb_vout_ctl_val");
        if (iVar1 == 0) {
            uVar2 = 0xffffffea;
        }
        else {
            _printk(0x8009009,"wcd938x_get_micb_vout_ctl_val");
            uVar2 = 0xffffffea;
        }
    }
    else {
        uVar2 = (arg1 - 1000U >> 1 & 0x7fff) / 0x19;
    }
    return uVar2;
}


// ===== sym.wcd938x_mbhc_micb_adjust_voltage @ 0x08018cb4 (size 432) =====

uint sym.wcd938x_mbhc_micb_adjust_voltage(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    ulong *in_x18;
    uint uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = arg3 - 1;
    if (uVar4 < 4) {
        uVar6 = *(uVar4 * 4 + 0x8016318);
        iVar1 = *(*(arg1 + 0x18) + 0x98) + 0x68;
        mutex_lock(iVar1);
        uVar4 = snd_soc_component_read(arg1,uVar6);
        if (arg2 - 0xb23U < 0xfffff8c5) {
            iVar5 = ___ratelimit(obj.wcd938x_get_micb_vout_ctl_val._rs,"wcd938x_get_micb_vout_ctl_val");
            if (iVar5 == 0) {
                uVar6 = 0xffffffea;
            }
            else {
                _printk(0x8009009,"wcd938x_get_micb_vout_ctl_val");
                uVar6 = 0xffffffea;
            }
        }
        else {
            uVar2 = (arg2 - 1000U >> 1 & 0x7fff) / 0x19;
            if ((uVar4 & 0x3f) != uVar2) {
                uVar3 = uVar4 >> 6 & 3;
                _dev_printk(0x800991b,*(arg1 + 0x18),"%s: micb_num: %d, cur_mv: %d, req_mv: %d, micb_en: %d\n",
                            "wcd938x_mbhc_micb_adjust_voltage",arg3 & 0xffffffff,(uVar4 & 0x3f) * 0x32 + 1000,
                            arg2 & 0xffffffff,uVar3);
                if (uVar3 == 1) {
                    snd_soc_component_update_bits(arg1,uVar6,0xc0,0x80);
                    snd_soc_component_update_bits(arg1,uVar6,0x3f,uVar2);
                    snd_soc_component_update_bits(arg1,uVar6,0xc0,0x40);
                    usleep_range_state(2000,0x834,2);
                }
                else {
                    snd_soc_component_update_bits(arg1,uVar6,0x3f,uVar2);
                }
            }
            uVar6 = 0;
        }
        mutex_unlock(iVar1);
    }
    else {
        uVar6 = 0xffffffea;
    }
    return uVar6;
}


// ===== sym.wcd938x_tx_channel_config @ 0x08018e64 (size 160) =====

ulong sym.wcd938x_tx_channel_config(ulong noname_0,uint32_t arg1,uint32_t arg2)

{
    uint uVar1;
    uint uVar2;
    int iVar3;
    ulong in_x0;
    ulong uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 < 4) {
        uVar5 = -(arg1 >> 0x1f) & 0xfffffffc00000000 | arg1 << 2;
        uVar2 = *(L"@" + uVar5);
        uVar1 = 0;
        if (arg2 != 0) {
            uVar1 = uVar2;
        }
        snd_soc_component_update_bits(in_x0,*(L"@" + uVar5 + 0x10),uVar2,uVar1);
        uVar4 = 0;
    }
    else {
        iVar3 = ___ratelimit(obj.wcd938x_tx_channel_config._rs,"wcd938x_tx_channel_config");
        if (iVar3 != 0) {
            _printk(0x800902c,"wcd938x_tx_channel_config",arg1);
        }
        uVar4 = 0xffffffea;
    }
    return uVar4;
}


// ===== sym.wcd938x_disable_bcs_before_slow_insert @ 0x08018f04 (size 136) =====

void sym.wcd938x_disable_bcs_before_slow_insert(int64_t arg1,uint32_t arg2)

{
    ulong uVar1;
    ulong *in_x18;
    code *pcVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(arg1 + 0x18) + 0x98);
    pcVar2 = *(iVar3 + 0xc38);
    if (pcVar2 != NULL) {
        uVar1 = 0x80018d0;
        if ((arg2 & 1) == 0) {
            uVar1 = 0x80018f0;
        }
        __cfi_slowpath_diag(0xec879b5e5e7b1759,pcVar2,uVar1);
        (*pcVar2)(*(iVar3 + 0xc30),5,~arg2 & 1);
    }
    return;
}


// ===== sym.wcd938x_micbias_control @ 0x08018f8c (size 1280) =====

ulong sym.wcd938x_micbias_control(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    bool bVar2;
    int iVar3;
    ulong uVar4;
    char *pcVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint32_t uVar8;
    uint uVar9;
    ulong uVar10;
    ulong *in_x18;
    uint64_t uVar11;
    int64_t iVar12;
    ulong uVar13;
    ulong uVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = arg2 - 1;
    uVar11 = uVar1;
    if (3 < uVar1) {
        iVar3 = ___ratelimit(obj.wcd938x_micbias_control._rs,"wcd938x_micbias_control");
        if (iVar3 == 0) {
            return 0xffffffea;
        }
        uVar4 = *(arg1 + 0x18);
        pcVar5 = "%s: Invalid micbias index, micb_ind:%d\n";
        uVar7 = uVar1;
code_r0x08019040:
        _dev_err(uVar4,pcVar5,"wcd938x_micbias_control",uVar7);
        return 0xffffffea;
    }
    iVar12 = *(*(arg1 + 0x18) + 0x98);
    if (iVar12 == 0) {
        iVar3 = ___ratelimit(obj.wcd938x_micbias_control._rs.8,"wcd938x_micbias_control");
        if (iVar3 == 0) {
            return 0xffffffea;
        }
        _dev_err(*(arg1 + 0x18),"%s: wcd938x private data is NULL\n","wcd938x_micbias_control");
        return 0xffffffea;
    }
    uVar7 = arg2 & 0xffffffff;
    if (3 < uVar1) {
        iVar3 = ___ratelimit(obj.wcd938x_micbias_control._rs.10,"wcd938x_micbias_control");
        if (iVar3 == 0) {
            return 0xffffffea;
        }
        uVar4 = *(arg1 + 0x18);
        pcVar5 = "%s: Invalid micbias number: %d\n";
        goto code_r0x08019040;
    }
    uVar14 = 0;
    uVar13 = 0;
    uVar8 = 0;
    uVar10 = 0;
    //switch table (3 cases) at 0x8001b30
    uVar4 = 0;
    bVar2 = true;
    uVar9 = 0x3022;
    switch(*(uVar11 + 0x8001b30) * 4 + 0x80190d0) {
    case 0x80190d4:
        bVar2 = false;
        uVar8 = 1;
        uVar9 = 0x3023;
        uVar4 = 8;
        uVar10 = 6;
        uVar13 = 4;
        uVar14 = 2;
        break;
    case 0x80190f8:
        uVar14 = 0;
        uVar13 = 0;
        uVar8 = 0;
        uVar10 = 0;
        uVar4 = 0;
        bVar2 = true;
        uVar9 = 0x3025;
        break;
    case 0x801911c:
        uVar14 = 0;
        uVar13 = 0;
        uVar8 = 0;
        uVar10 = 0;
        uVar4 = 0;
        bVar2 = true;
        uVar9 = 0x3026;
    }
    mutex_lock();
    if (arg3 < 4) {
    //switch table (3 cases) at 0x8001b34
        switch(*((arg3 & 0xffffffffU) + 0x8001b34) * 4 + 0x8019178) {
        case 0x801917c:
            if (*(iVar12 + 0xc78) != '\0') {
                iVar6 = iVar12 + uVar1 * 4;
                iVar3 = *(iVar6 + 0x48);
                *(iVar6 + 0x48) = iVar3 + 1;
                if ((iVar3 == 0) && (*(iVar12 + uVar11 * 4 + 0x38) == 0)) {
                    snd_soc_component_update_bits(arg1,uVar9,0xc0,0x80);
                }
                goto code_r0x0801944c;
            }
            uVar4 = *(arg1 + 0x18);
            uVar10 = 0;
            break;
        case 0x80191ac:
            if (*(iVar12 + 0xc78) != '\0') {
                iVar6 = iVar12 + uVar1 * 4;
                iVar3 = *(iVar6 + 0x38);
                *(iVar6 + 0x38) = iVar3 + 1;
                if (iVar3 == 0) {
                    snd_soc_component_update_bits(arg1,0x3409,0xf0,0xf0);
                    snd_soc_component_update_bits(arg1,0x3408,0x10,0x10);
                    snd_soc_component_update_bits(arg1,0x3417,1,1);
                    snd_soc_component_update_bits(arg1,0x306c,1,1);
                    snd_soc_component_update_bits(arg1,0x306f,1,1);
                    snd_soc_component_update_bits(arg1,0x3072,1,1);
                    snd_soc_component_update_bits(arg1,0x3075,1,1);
                    snd_soc_component_update_bits(arg1,uVar9,0xc0,0x40);
                    if (!bVar2) {
                        blocking_notifier_call_chain(*(iVar12 + 0x100) + 0x420,uVar13);
                    }
                }
                if (((uVar8 & arg4) != 1) || (iVar6 = *(iVar12 + 0x100), iVar6 == 0)) goto code_r0x0801944c;
code_r0x08019448:
                blocking_notifier_call_chain(iVar6 + 0x420,uVar4);
                goto code_r0x0801944c;
            }
            uVar4 = *(arg1 + 0x18);
            uVar10 = 2;
            break;
        case 0x80191dc:
            iVar3 = *(iVar12 + 0x48 + uVar1 * 4);
            if (0 < iVar3) {
                *(iVar12 + 0x48 + uVar11 * 4) = iVar3 + -1;
                iVar3 = iVar3 + -1;
            }
            if (*(iVar12 + 0xc78) != '\0') {
                if ((iVar3 == 0) && (*(iVar12 + uVar11 * 4 + 0x38) == 0)) {
                    snd_soc_component_update_bits(arg1,uVar9,0xc0,0);
                }
                goto code_r0x0801944c;
            }
            uVar4 = *(arg1 + 0x18);
            uVar10 = 1;
            break;
        case 0x8019224:
            iVar3 = *(iVar12 + 0x38 + uVar1 * 4);
            if (0 < iVar3) {
                *(iVar12 + 0x38 + uVar11 * 4) = iVar3 + -1;
                iVar3 = iVar3 + -1;
            }
            if (*(iVar12 + 0xc78) != '\0') {
                if (iVar3 == 0) {
                    iVar3 = *(iVar12 + uVar11 * 4 + 0x48);
                    if (iVar3 < 1) {
                        if (iVar3 == 0) {
                            if (bVar2) {
                                uVar4 = 0;
                                goto code_r0x08019424;
                            }
                            if (*(iVar12 + 0x100) != 0) {
                                blocking_notifier_call_chain(*(iVar12 + 0x100) + 0x420,1);
                            }
                            snd_soc_component_update_bits(arg1,uVar9,0xc0,0);
                            if (*(iVar12 + 0x100) != 0) {
                                blocking_notifier_call_chain(*(iVar12 + 0x100) + 0x420,uVar14);
                            }
                        }
                    }
                    else {
                        uVar4 = 0x80;
code_r0x08019424:
                        snd_soc_component_update_bits(arg1,uVar9,0xc0,uVar4);
                    }
                }
                if (((uVar8 & arg4) == 1) && (iVar6 = *(iVar12 + 0x100), uVar4 = uVar10, iVar6 != 0))
                goto code_r0x08019448;
                goto code_r0x0801944c;
            }
            uVar4 = *(arg1 + 0x18);
            uVar10 = 3;
        }
        _dev_printk(0x800991b,uVar4,"%s: enable req %d wcd device down\n","wcd938x_micbias_control",uVar10);
        uVar4 = 0xffffffed;
    }
    else {
code_r0x0801944c:
        iVar6 = iVar12 + uVar11 * 4;
        _dev_printk(0x800991b,*(arg1 + 0x18),"%s: micb_num:%d, micb_ref: %d, pullup_ref: %d\n",
                    "wcd938x_micbias_control",uVar7,*(iVar6 + 0x38),*(iVar6 + 0x48));
        uVar4 = 0;
    }
    mutex_unlock(iVar12 + 0x68);
    return uVar4;
}


// ===== sym.wcd938x_swr_dmic_register_notifier @ 0x080194cc (size 132) =====

ulong sym.wcd938x_swr_dmic_register_notifier(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        iVar1 = ___ratelimit(obj.wcd938x_swr_dmic_register_notifier._rs,"wcd938x_swr_dmic_register_notifier");
        if (iVar1 == 0) {
            uVar2 = 0xffffffea;
        }
        else {
            _printk(0x8006168,"wcd938x_swr_dmic_register_notifier");
            uVar2 = 0xffffffea;
        }
    }
    else {
        iVar3 = *(*(arg1 + 0x18) + 0x98);
        *(iVar3 + 0xc87) = arg2 & 1;
        if ((arg2 & 1U) == 0) {
            uVar2 = blocking_notifier_chain_unregister(iVar3 + 0xc88);
        }
        else {
            uVar2 = blocking_notifier_chain_register();
        }
    }
    return uVar2;
}


// ===== sym.wcd938x_codec_force_enable_micbias_v2 @ 0x08019550 (size 408) =====

ulong sym.wcd938x_codec_force_enable_micbias_v2(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    code *pcVar2;
    int iVar3;
    ulong uVar4;
    int64_t arg3_00;
    ulong *in_x18;
    uint64_t uVar5;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        iVar3 = ___ratelimit(obj.wcd938x_codec_force_enable_micbias_v2._rs,"wcd938x_codec_force_enable_micbias_v2");
        if (iVar3 == 0) {
            return 0xffffffea;
        }
        _printk(0x8006168,"wcd938x_codec_force_enable_micbias_v2");
        return 0xffffffea;
    }
    uVar5 = arg3 & 0xffffffff;
    if ((arg2 == 1) || (arg2 == 8)) {
        if (0xfffffffb < arg3 - 5U) {
            arg1_00 = *(*(arg1 + 0x18) + 0x98);
            if (*(arg1_00 + 0xc78) == '\0') {
                uVar1 = arg3 - 1;
                if (3 < uVar1) {
    //WARNING: Does not return
                    pcVar2 = SoftwareBreakpoint(0x5512,0x80196e8);
                    (*pcVar2)();
                }
                if (arg2 == 8) {
                    iVar3 = *(arg1_00 + 0x48 + uVar1 * 4);
                    if (0 < iVar3) {
                        *(arg1_00 + 0x48 + uVar1 * 4) = iVar3 + -1;
                        return 0xffffffed;
                    }
                }
            }
            if (arg2 == 8) {
                sym.wcd938x_wakeup(arg1_00,1);
                arg3_00 = 1;
            }
            else {
                if (arg2 != 1) {
                    return 0;
                }
                sym.wcd938x_wakeup(arg1_00,1);
                arg3_00 = 0;
            }
            sym.wcd938x_enable_micbias(arg1_00,arg3 & 0xffffffff,arg3_00);
            sym.wcd938x_wakeup(arg1_00,0);
            return 0;
        }
        iVar3 = ___ratelimit(obj.wcd938x_codec_force_enable_micbias_v2._rs.17,"wcd938x_codec_force_enable_micbias_v2");
        if (iVar3 == 0) {
            return 0xffffffea;
        }
        uVar4 = 0x80030d3;
    }
    else {
        iVar3 = ___ratelimit(obj.wcd938x_codec_force_enable_micbias_v2._rs.15,"wcd938x_codec_force_enable_micbias_v2");
        if (iVar3 == 0) {
            return 0xffffffea;
        }
        uVar4 = 0x8004053;
        uVar5 = arg2;
    }
    _printk(uVar4,"wcd938x_codec_force_enable_micbias_v2",uVar5);
    return 0xffffffea;
}


// ===== sym.wcd938x_wakeup @ 0x080196e8 (size 212) =====

uint sym.wcd938x_wakeup(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        iVar2 = ___ratelimit(obj.wcd938x_wakeup._rs,"wcd938x_wakeup");
        if (iVar2 != 0) {
            uVar3 = 0x80080d3;
            goto code_r0x080197a8;
        }
    }
    else {
        if (*(arg1 + 0x30) != 0) {
            mutex_lock(arg1 + 0x98);
            if ((arg2 & 1U) == 0) {
                uVar1 = swr_device_wakeup_unvote(*(arg1 + 0x30));
            }
            else {
                uVar1 = swr_device_wakeup_vote();
            }
            mutex_unlock(arg1 + 0x98);
            return uVar1;
        }
        iVar2 = ___ratelimit(obj.wcd938x_wakeup._rs.49,"wcd938x_wakeup");
        if (iVar2 != 0) {
            uVar3 = 0x80094fe;
code_r0x080197a8:
            _printk(uVar3,"wcd938x_wakeup");
            return 0xffffffea;
        }
    }
    return 0xffffffea;
}


// ===== sym.wcd938x_enable_micbias @ 0x080197bc (size 364) =====

void sym.wcd938x_enable_micbias(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint32_t uVar2;
    int iVar3;
    ulong uVar4;
    ulong *in_x18;
    int *piVar5;
    int *piVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        iVar3 = ___ratelimit(obj.wcd938x_enable_micbias._rs,"wcd938x_enable_micbias");
        if (iVar3 == 0) {
            return;
        }
        _printk(0x8003c16,"wcd938x_enable_micbias");
        return;
    }
    uVar2 = arg2 - 1;
    if (3 < uVar2) {
        iVar3 = ___ratelimit(obj.wcd938x_enable_micbias._rs.52,"wcd938x_enable_micbias");
        if (iVar3 == 0) {
            return;
        }
        _printk(0x8001bd1,"wcd938x_enable_micbias",arg2 & 0xffffffffU);
        return;
    }
    iVar1 = arg1 + uVar2 * 4;
    piVar6 = iVar1 + 0x48;
    piVar5 = iVar1 + 0x38;
    _printk(0x800379d,"wcd938x_enable_micbias",arg3,arg2 & 0xffffffffU,*piVar5,*piVar6);
    mutex_lock(arg1 + 0x68);
    if (arg3 == 1) {
        iVar3 = *piVar6;
        if (0 < iVar3) {
            *piVar6 = iVar3 + -1;
            iVar3 = iVar3 + -1;
        }
        if ((iVar3 != 0) || (*piVar5 != 0)) goto code_r0x0801991c;
        uVar4 = 0;
    }
    else {
        if (((arg3 != 0) || (iVar3 = *piVar6, *piVar6 = iVar3 + 1, iVar3 != 0)) || (*piVar5 != 0))
        goto code_r0x0801991c;
        uVar4 = 0x80;
    }
    regmap_update_bits_base(*(arg1 + 0x20),*(uVar2 * 4 + 0x8016318),0xc0,uVar4,0,0,0);
code_r0x0801991c:
    mutex_unlock(arg1 + 0x68);
    return;
}


// ===== sym.wcd938x_codec_get_dev_num @ 0x08019928 (size 116) =====

uint64_t sym.wcd938x_codec_get_dev_num(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 != 0) {
        iVar2 = *(*(arg1 + 0x18) + 0x98);
        if ((iVar2 != 0) && (iVar2 = *(iVar2 + 0x28), iVar2 != 0)) {
            return *(iVar2 + 0x40);
        }
        iVar1 = ___ratelimit(obj.wcd938x_codec_get_dev_num._rs,"wcd938x_codec_get_dev_num");
        if (iVar1 != 0) {
            _printk(0x8006168,"wcd938x_codec_get_dev_num");
        }
    }
    return 0xffffffea;
}


// ===== sym.wcd938x_get_codec_variant @ 0x0801999c (size 88) =====

uint sym.wcd938x_get_codec_variant(int64_t arg1)

{
    uint uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        uVar1 = 0xffffffea;
    }
    else {
        iVar2 = *(*(arg1 + 0x18) + 0x98);
        if (iVar2 == 0) {
            _dev_err(*(arg1 + 0x18),"%s:wcd938x not probed\n","wcd938x_get_codec_variant");
            uVar1 = 0;
        }
        else {
            uVar1 = *(iVar2 + 8);
        }
    }
    return uVar1;
}


// ===== sym.wcd938x_info_create_codec_entry @ 0x080199f4 (size 460) =====

ulong sym.wcd938x_info_create_codec_entry(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = 0xffffffea;
    if ((arg1 != 0) && (arg2 != 0)) {
        puVar5 = *(*(arg2 + 0x18) + 0x98);
        if (puVar5[0x18b] == 0) {
            iVar4 = *(arg2 + 0x20);
            iVar3 = snd_info_create_module_entry(*(arg1 + 0x38),"wcd938x");
            puVar5[0x18b] = iVar3;
            if (iVar3 == 0) {
                _dev_printk(0x800991b,*(arg2 + 0x18),"%s: failed to create wcd938x entry\n",
                            "wcd938x_info_create_codec_entry");
            }
            else {
                *(iVar3 + 8) = 0x416d;
                iVar1 = snd_info_register(puVar5[0x18b]);
                if (-1 < iVar1) {
                    iVar3 = snd_info_create_card_entry(*(iVar4 + 0x48),"version",puVar5[0x18b]);
                    if (iVar3 == 0) {
                        _dev_printk(0x800991b,*(arg2 + 0x18),"%s: failed to create wcd938x version entry\n",
                                    "wcd938x_info_create_codec_entry");
                    }
                    else {
                        *(iVar3 + 0x40) = puVar5;
                        *(iVar3 + 0x10) = 0x20;
                        *(iVar3 + 0x18) = 1;
                        *(iVar3 + 0x20) = obj.wcd938x_info_ops;
                        iVar1 = snd_info_register();
                        if (-1 < iVar1) {
                            puVar5[0x18c] = iVar3;
                            iVar4 = snd_info_create_card_entry(*(iVar4 + 0x48),"variant",puVar5[0x18b]);
                            if (iVar4 == 0) {
                                _dev_printk(0x800991b,*(arg2 + 0x18),"%s: failed to create wcd938x variant entry\n",
                                            "wcd938x_info_create_codec_entry");
                            }
                            else {
                                *(iVar4 + 0x40) = puVar5;
                                *(iVar4 + 0x10) = 0x20;
                                *(iVar4 + 0x18) = 1;
                                *(iVar4 + 0x20) = obj.wcd938x_variant_ops;
                                iVar1 = snd_info_register();
                                if (-1 < iVar1) {
                                    puVar5[0x18d] = iVar4;
                                    return 0;
                                }
                                snd_info_free_entry(iVar4);
                            }
                        }
                        snd_info_free_entry(iVar3);
                    }
                }
                snd_info_free_entry(puVar5[0x18b]);
            }
            uVar2 = 0xfffffff4;
        }
        else {
            _dev_printk(0x800991b,*puVar5,"%s:wcd938x module already created\n","wcd938x_info_create_codec_entry");
            uVar2 = 0;
        }
    }
    return uVar2;
}


// ===== sym.wcd938x_populate_dt_data @ 0x08019bc0 (size 920) =====

int64_t * sym.wcd938x_populate_dt_data(int64_t arg1)

{
    uint uVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int64_t *piVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t *piVar9;
    uint *puVar10;
    char *pcVar11;
    char *pcVar12;
    char *in_x3;
    ulong in_x4;
    ulong uVar13;
    int64_t *piVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    int64_t iVar15;
    ulong unaff_x30;
    ulong uStack_118;
    uint32_t uStack_10c;
    int64_t iStack_108;
    ulong **ppuStack_100;
    code *pcStack_f8;
    uchar auStack_c0 [8];
    char acStack_b8 [9];
    unkbyte6 Stack_af;
    uchar uStack_a9;
    ulong uStack_a8;
    ulong uStack_a0;
    int64_t iStack_98;
    uchar **ppuStack_90;
    code *pcStack_88;
    uchar auStack_80 [8];
    char acStack_78 [5];
    ushort uStack_73;
    char cStack_71;
    char acStack_70 [5];
    ushort uStack_6b;
    uchar uStack_69;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    piVar5 = devm_kmalloc(arg1,0x48,0xdc0);
    if (piVar5 != NULL) {
        iVar6 = of_parse_phandle(*(arg1 + 0x2f0),"qcom,wcd-rst-gpio-node",0);
        *piVar5 = iVar6;
        if (iVar6 == 0) {
            iVar2 = ___ratelimit(obj.wcd938x_populate_dt_data._rs,"wcd938x_populate_dt_data");
            if (iVar2 != 0) {
                in_x4 = *(*(arg1 + 0x2f0) + 0x10);
                in_x3 = "qcom,wcd-rst-gpio-node";
                _dev_err(arg1,"%s: Looking up %s property in node %s failed\n","wcd938x_populate_dt_data",
                         "qcom,wcd-rst-gpio-node",in_x4);
            }
        }
        else {
            msm_cdc_get_power_supplies(arg1,piVar5 + 7,piVar5 + 8);
            if ((piVar5[7] != 0) && (0 < piVar5[8])) {
                iVar6 = of_parse_phandle(*(arg1 + 0x2f0),"qcom,rx-slave",0);
                uVar13 = *(arg1 + 0x2f0);
                piVar5[1] = iVar6;
                iVar6 = of_parse_phandle(uVar13,"qcom,tx-slave",0);
                uVar13 = *(arg1 + 0x2f0);
                piVar5[2] = iVar6;
                uStack_3c = 0;
                iVar6 = of_find_property(uVar13,"qcom,cdc-micbias1-mv",0);
                if (iVar6 == 0) {
                    _dev_info(arg1,"%s: Micbias1 DT property not found\n","wcd938x_dt_parse_micbias_info");
                }
                else {
                    in_x3 = 0x1;
                    in_x4 = 0;
                    iVar2 = of_property_read_variable_u32_array
                                      (*(arg1 + 0x2f0),"qcom,cdc-micbias1-mv",&uStack_3c,1,0);
                    if (iVar2 < 0) {
                        in_x4 = *(*(arg1 + 0x2f0) + 0x10);
                        in_x3 = "qcom,cdc-micbias1-mv";
                        _dev_err(arg1,"%s: Looking up %s property in node %s failed\n","wcd938x_read_of_property_u32"
                                 ,"qcom,cdc-micbias1-mv",in_x4);
                    }
                    else {
                        *(piVar5 + 4) = uStack_3c;
                    }
                }
                iVar6 = of_find_property(*(arg1 + 0x2f0),"qcom,cdc-micbias2-mv",0);
                if (iVar6 == 0) {
                    _dev_info(arg1,"%s: Micbias2 DT property not found\n","wcd938x_dt_parse_micbias_info");
                }
                else {
                    in_x3 = 0x1;
                    in_x4 = 0;
                    iVar2 = of_property_read_variable_u32_array
                                      (*(arg1 + 0x2f0),"qcom,cdc-micbias2-mv",&uStack_3c,1,0);
                    if (iVar2 < 0) {
                        in_x4 = *(*(arg1 + 0x2f0) + 0x10);
                        in_x3 = "qcom,cdc-micbias2-mv";
                        _dev_err(arg1,"%s: Looking up %s property in node %s failed\n","wcd938x_read_of_property_u32"
                                 ,"qcom,cdc-micbias2-mv",in_x4);
                    }
                    else {
                        *(piVar5 + 0x24) = uStack_3c;
                    }
                }
                iVar6 = of_find_property(*(arg1 + 0x2f0),"qcom,cdc-micbias3-mv",0);
                if (iVar6 == 0) {
                    _dev_info(arg1,"%s: Micbias3 DT property not found\n","wcd938x_dt_parse_micbias_info");
                }
                else {
                    in_x3 = 0x1;
                    in_x4 = 0;
                    iVar2 = of_property_read_variable_u32_array
                                      (*(arg1 + 0x2f0),"qcom,cdc-micbias3-mv",&uStack_3c,1,0);
                    if (iVar2 < 0) {
                        in_x4 = *(*(arg1 + 0x2f0) + 0x10);
                        in_x3 = "qcom,cdc-micbias3-mv";
                        _dev_err(arg1,"%s: Looking up %s property in node %s failed\n","wcd938x_read_of_property_u32"
                                 ,"qcom,cdc-micbias3-mv",in_x4);
                    }
                    else {
                        *(piVar5 + 5) = uStack_3c;
                    }
                }
                iVar6 = of_find_property(*(arg1 + 0x2f0),"qcom,cdc-micbias4-mv",0);
                if (iVar6 == 0) {
                    _dev_info(arg1,"%s: Micbias4 DT property not found\n","wcd938x_dt_parse_micbias_info");
                }
                else {
                    in_x3 = 0x1;
                    in_x4 = 0;
                    iVar2 = of_property_read_variable_u32_array
                                      (*(arg1 + 0x2f0),"qcom,cdc-micbias4-mv",&uStack_3c,1,0);
                    if (iVar2 < 0) {
                        in_x4 = *(*(arg1 + 0x2f0) + 0x10);
                        in_x3 = "qcom,cdc-micbias4-mv";
                        _dev_err(arg1,"%s: Looking up %s property in node %s failed\n","wcd938x_read_of_property_u32"
                                 ,"qcom,cdc-micbias4-mv",in_x4);
                    }
                    else {
                        *(piVar5 + 0x2c) = uStack_3c;
                    }
                }
                goto code_r0x08019dd4;
            }
            iVar2 = ___ratelimit(obj.wcd938x_populate_dt_data._rs.44,"wcd938x_populate_dt_data");
            if (iVar2 != 0) {
                _dev_err(arg1,"%s: no power supplies defined for codec\n","wcd938x_populate_dt_data");
            }
        }
        piVar5 = NULL;
    }
code_r0x08019dd4:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return piVar5;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18 = sym.wcd938x_version_read;
    pcStack_48 = sym.wcd938x_version_read;
    iVar6 = sp_el0;
    iStack_58 = *(iVar6 + 0x5e0);
    acStack_78[0] = '\0';
    acStack_78[1] = '\0';
    acStack_78[2] = '\0';
    acStack_78[3] = '\0';
    acStack_78[4] = '\0';
    uStack_73 = 0;
    cStack_71 = '\0';
    uStack_68 = 0;
    uStack_60 = 0;
    acStack_70[0] = '\0';
    acStack_70[1] = '\0';
    acStack_70[2] = '\0';
    acStack_70[3] = '\0';
    acStack_70[4] = '\0';
    uStack_6b = 0;
    uStack_69 = 0;
    puStack_50 = &stack0xffffffffffffffd0;
    if (*(iVar7 + 0x40) == 0) {
        iVar2 = ___ratelimit(obj.wcd938x_version_read._rs,"wcd938x_version_read");
        if (iVar2 == 0) {
            piVar5 = 0xffffffffffffffea;
        }
        else {
            _printk(0x8009959,"wcd938x_version_read");
            piVar5 = 0xffffffffffffffea;
        }
    }
    else {
        if (*(*(iVar7 + 0x40) + 0xc50) == 1) {
            uVar13 = 0xc;
            acStack_78[0] = str.WCD938X_1_0_n[0];
            acStack_78[1] = str.WCD938X_1_0_n[1];
            acStack_78[2] = str.WCD938X_1_0_n[2];
            acStack_78[3] = str.WCD938X_1_0_n[3];
            acStack_78[4] = str.WCD938X_1_0_n[4];
            uStack_73 = str.WCD938X_1_0_n._5_3_;
            cStack_71 = SUB31(str.WCD938X_1_0_n._5_3_,2);
            acStack_70[0] = str.WCD938X_1_0_n[8];
            acStack_70[1] = str.WCD938X_1_0_n[9];
            acStack_70[2] = str.WCD938X_1_0_n[10];
            acStack_70[3] = str.WCD938X_1_0_n[0xb];
            acStack_70[4] = str.WCD938X_1_0_n[0xc];
        }
        else {
            uVar13 = 0xe;
            acStack_78 = SUB75(str.VER_UNDEFINED_n._0_7_,0);
            uStack_73 = SUB72(str.VER_UNDEFINED_n._0_7_,5);
            cStack_71 = str.VER_UNDEFINED_n[7];
            acStack_70 = SUB75(str.VER_UNDEFINED_n._8_7_,0);
            uStack_6b = SUB72(str.VER_UNDEFINED_n._8_7_,5);
        }
        pcVar11 = acStack_78;
        piVar5 = simple_read_from_buffer(in_x3,in_x4,auStack_80,pcVar11,uVar13);
        in_x3 = pcVar11;
        in_x4 = uVar13;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_58) {
        return piVar5;
    }
    iVar7 = __stack_chk_fail(piVar5);
    *extraout_x18_00 = sym.wcd938x_variant_read;
    pcStack_88 = sym.wcd938x_variant_read;
    iVar6 = sp_el0;
    iStack_98 = *(iVar6 + 0x5e0);
    acStack_b8[0] = '\0';
    acStack_b8[1] = '\0';
    acStack_b8[2] = '\0';
    acStack_b8[3] = '\0';
    acStack_b8[4] = '\0';
    acStack_b8[5] = '\0';
    acStack_b8[6] = '\0';
    acStack_b8[7] = '\0';
    uStack_a8 = 0;
    uStack_a0 = 0;
    acStack_b8[8] = '\0';
    Stack_af = 0;
    uStack_a9 = 0;
    ppuStack_90 = &puStack_50;
    if (*(iVar7 + 0x40) == 0) {
        iVar2 = ___ratelimit(obj.wcd938x_variant_read._rs,"wcd938x_variant_read");
        if (iVar2 == 0) {
            piVar5 = 0xffffffffffffffea;
        }
        else {
            _printk(0x8009959,"wcd938x_variant_read");
            piVar5 = 0xffffffffffffffea;
        }
    }
    else {
        iVar2 = *(*(iVar7 + 0x40) + 8);
        if (iVar2 == 5) {
            pcVar11 = "WCD9385\n";
code_r0x0801a0d4:
            uVar13 = 8;
            acStack_b8[8] = '\0';
            acStack_b8._0_7_ = *pcVar11;
            acStack_b8[7] = *pcVar11 >> 0x38;
        }
        else {
            if (iVar2 == 0) {
                pcVar11 = "WCD9380\n";
                goto code_r0x0801a0d4;
            }
            uVar13 = 0xe;
            acStack_b8[0] = str.VER_UNDEFINED_n[0];
            acStack_b8[1] = str.VER_UNDEFINED_n[1];
            acStack_b8[2] = str.VER_UNDEFINED_n[2];
            acStack_b8[3] = str.VER_UNDEFINED_n[3];
            acStack_b8[4] = str.VER_UNDEFINED_n[4];
            acStack_b8[5] = str.VER_UNDEFINED_n[5];
            acStack_b8[6] = str.VER_UNDEFINED_n[6];
            acStack_b8[7] = str.VER_UNDEFINED_n[7];
            acStack_b8[8] = str.VER_UNDEFINED_n._8_7_;
            Stack_af = SUB76(str.VER_UNDEFINED_n._8_7_,1);
        }
        piVar5 = simple_read_from_buffer(in_x3,in_x4,auStack_c0,acStack_b8,uVar13);
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_98) {
        return piVar5;
    }
    iVar8 = __stack_chk_fail(piVar5);
    *extraout_x18_01 = sym.wcd938x_probe;
    pcStack_f8 = sym.wcd938x_probe;
    iVar7 = sp_el0;
    iVar6 = iVar8 + 0x10;
    iStack_108 = *(iVar7 + 0x5e0);
    uStack_118 = 0;
    ppuStack_100 = &ppuStack_90;
    piVar5 = devm_kmalloc(iVar6,0xcd0,0xdc0);
    if (piVar5 == NULL) {
        uVar3 = 0xfffffff4;
        goto code_r0x0801a620;
    }
    *(iVar8 + 0xa8) = piVar5;
    *piVar5 = iVar6;
    piVar9 = sym.wcd938x_populate_dt_data(iVar6);
    if (piVar9 == NULL) {
        pcVar11 = "%s: Fail to obtain platform data\n";
        goto code_r0x0801a55c;
    }
    *(iVar8 + 0xa0) = piVar9;
    piVar5[3] = *piVar9;
    uVar3 = msm_cdc_init_supplies(iVar6,piVar5 + 0x182,piVar9[7],piVar9[8]);
    if (piVar5[0x182] == 0) {
        pcVar11 = "%s: Cannot init wcd supplies\n";
code_r0x0801a580:
        _dev_err(iVar6,pcVar11,"wcd938x_probe");
        goto code_r0x0801a620;
    }
    piVar14 = *(*(iVar8 + 0x70) + 0x90);
    if (piVar14 == NULL) {
        pcVar11 = "%s: platform data from parent is NULL\n";
    }
    else {
        iVar7 = *piVar14;
        piVar5[0x186] = iVar7;
        if (iVar7 == 0) {
            pcVar11 = "%s: handle is NULL\n";
        }
        else {
            iVar7 = piVar14[1];
            piVar5[0x187] = iVar7;
            if (iVar7 == 0) {
                pcVar11 = "%s: update_wcd_event api is null!\n";
            }
            else {
                iVar7 = piVar14[2];
                piVar5[0x188] = iVar7;
                if (iVar7 != 0) {
                    uVar3 = msm_cdc_enable_static_supplies(iVar6,piVar5[0x182],piVar9[7],piVar9[8]);
                    if (uVar3 != 0) {
                        pcVar11 = "%s: wcd static supply enable failed!\n";
                        goto code_r0x0801a580;
                    }
                    uVar4 = sym.wcd938x_parse_port_mapping(iVar6,0x8002bf3,1);
                    uVar3 = sym.wcd938x_parse_port_mapping(iVar6,0x8002c06,0);
                    uVar3 = uVar3 | uVar4;
                    if (uVar3 == 0) {
                        iVar15 = *(iVar8 + 0xa8);
                        uStack_10c = 0;
                        iVar7 = of_find_property(*(iVar8 + 0x300),"qcom,swr-tx-port-params",&uStack_10c);
                        if (iVar7 == 0) {
                            pcVar11 = "missing port mapping prop %s\n";
                            pcVar12 = "qcom,swr-tx-port-params";
code_r0x0801a5c4:
                            _dev_err(iVar6,pcVar11,pcVar12);
                            uVar3 = 0xffffffea;
                        }
                        else {
                            if ((uStack_10c & 0xffffffe0) != 0x80) {
                                pcVar11 = "%s: port params not provided for all usecases\n";
                                pcVar12 = "wcd938x_parse_port_params";
                                goto code_r0x0801a5c4;
                            }
                            puVar10 = __kmalloc(uStack_10c,0xdc0);
                            if (puVar10 == NULL) {
                                uVar3 = 0xfffffff4;
                            }
                            else {
                                uVar3 = of_property_read_variable_u32_array
                                                  (*(iVar8 + 0x300),"qcom,swr-tx-port-params",puVar10,0x20,0);
                                if (-1 < uVar3) {
                                    *(iVar15 + 0xb6c) = *puVar10;
                                    *(iVar15 + 0xb70) = puVar10[1];
                                    *(iVar15 + 0xb74) = puVar10[2];
                                    *(iVar15 + 0xb78) = puVar10[3];
                                    *(iVar15 + 0xb7c) = puVar10[4];
                                    *(iVar15 + 0xb80) = puVar10[5];
                                    *(iVar15 + 0xb84) = puVar10[6];
                                    uVar1 = puVar10[7];
                                    *(iVar15 + 0xbf0) = iVar15 + 0xb6c;
                                    *(iVar15 + 0xb88) = uVar1;
                                    *(iVar15 + 0xb8c) = puVar10[8];
                                    *(iVar15 + 0xb90) = puVar10[9];
                                    *(iVar15 + 0xb94) = puVar10[10];
                                    *(iVar15 + 0xb98) = puVar10[0xb];
                                    *(iVar15 + 0xb9c) = puVar10[0xc];
                                    *(iVar15 + 0xba0) = puVar10[0xd];
                                    *(iVar15 + 0xba4) = puVar10[0xe];
                                    uVar1 = puVar10[0xf];
                                    *(iVar15 + 0xbf8) = iVar15 + 0xb8c;
                                    *(iVar15 + 0xba8) = uVar1;
                                    *(iVar15 + 0xbac) = puVar10[0x10];
                                    *(iVar15 + 0xbb0) = puVar10[0x11];
                                    *(iVar15 + 0xbb4) = puVar10[0x12];
                                    *(iVar15 + 3000) = puVar10[0x13];
                                    *(iVar15 + 0xbbc) = puVar10[0x14];
                                    *(iVar15 + 0xbc0) = puVar10[0x15];
                                    *(iVar15 + 0xbc4) = puVar10[0x16];
                                    uVar1 = puVar10[0x17];
                                    *(iVar15 + 0xc00) = iVar15 + 0xbac;
                                    *(iVar15 + 0xbc8) = uVar1;
                                    *(iVar15 + 0xbcc) = puVar10[0x18];
                                    *(iVar15 + 0xbd0) = puVar10[0x19];
                                    *(iVar15 + 0xbd4) = puVar10[0x1a];
                                    *(iVar15 + 0xbd8) = puVar10[0x1b];
                                    *(iVar15 + 0xbdc) = puVar10[0x1c];
                                    *(iVar15 + 0xbe0) = puVar10[0x1d];
                                    *(iVar15 + 0xbe4) = puVar10[0x1e];
                                    uVar1 = puVar10[0x1f];
                                    *(iVar15 + 0xc08) = iVar15 + 0xbcc;
                                    *(iVar15 + 0xbe8) = uVar1;
                                    kfree(puVar10);
                                    __mutex_init(piVar5 + 0x13,"&wcd938x->wakeup_lock",obj.wcd938x_soc_get_mbhc._rs);
                                    __mutex_init(piVar5 + 0xd,"&wcd938x->micb_lock",obj.wcd938x_soc_get_mbhc._rs);
                                    uVar13 = *(iVar8 + 0x300);
                                    iVar7 = of_parse_phandle(uVar13,"qcom,rx-slave",0);
                                    if (iVar7 == 0) {
                                        iVar2 = ___ratelimit(obj.wcd938x_add_slave_components._rs,
                                                             "wcd938x_add_slave_components");
                                        if (iVar2 != 0) {
                                            pcVar11 = "%s: Rx-slave node not defined\n";
code_r0x0801a660:
                                            _dev_err(iVar6,pcVar11,"wcd938x_add_slave_components");
                                            uVar3 = 0xffffffed;
                                            goto code_r0x0801a620;
                                        }
                                    }
                                    else {
                                        component_match_add_release
                                                  (iVar6,&uStack_118,
                                                   sym.wcd938x_release_of.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt,
                                                   sym.wcd938x_compare_of.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt,iVar7
                                                  );
                                        iVar7 = of_parse_phandle(uVar13,"qcom,tx-slave",0);
                                        if (iVar7 != 0) {
                                            component_match_add_release
                                                      (iVar6,&uStack_118,
                                                       sym.wcd938x_release_of.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt,
                                                       sym.wcd938x_compare_of.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt,
                                                       iVar7);
                                            sym.wcd938x_reset(iVar6);
                                            piVar5[0x189] = sym.__typeid__ZTSFiPvbE_global_addr;
                                            uVar3 = component_master_add_with_match
                                                              (iVar6,
                                                            reloc.wcd938x_bind.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt,
                                                            uStack_118);
                                            goto code_r0x0801a620;
                                        }
                                        iVar2 = ___ratelimit(obj.wcd938x_add_slave_components._rs.91,
                                                             "wcd938x_add_slave_components");
                                        if (iVar2 != 0) {
                                            pcVar11 = "%s: Tx-slave node not defined\n";
                                            goto code_r0x0801a660;
                                        }
                                    }
                                    uVar3 = 0xffffffed;
                                    goto code_r0x0801a620;
                                }
                                _dev_err(iVar6,"%s: Failed to read  port mapping from prop %s\n",
                                         "wcd938x_parse_port_params","qcom,swr-tx-port-params");
                                kfree(puVar10);
                            }
                        }
                        pcVar11 = "Failed to read port params\n";
                    }
                    else {
                        pcVar11 = "Failed to read port mapping\n";
                    }
                    _dev_err(iVar6,pcVar11);
                    goto code_r0x0801a620;
                }
                pcVar11 = "%s: register_notifier api is null!\n";
            }
        }
    }
code_r0x0801a55c:
    _dev_err(iVar6,pcVar11,"wcd938x_probe");
    uVar3 = 0xffffffea;
code_r0x0801a620:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_108) {
        return uVar3;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18_02 = sym.wcd938x_remove;
    component_master_del(iVar6 + 0x10,reloc.wcd938x_bind.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt);
    *(iVar6 + 0xa8) = 0;
    return NULL;
}


// ===== sym.wcd938x_version_read @ 0x08019f58 (size 256) =====

uint64_t sym.wcd938x_version_read(int64_t arg1,uchar noname_1 [16],uchar noname_2 [16],int64_t arg2)

{
    uint uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t *piVar8;
    int64_t *piVar9;
    uint *puVar10;
    int64_t iVar11;
    char *pcVar12;
    char *pcVar13;
    ulong in_x4;
    ulong uVar14;
    int64_t *piVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t iVar16;
    ulong unaff_x30;
    ulong uStack_d8;
    uint32_t uStack_cc;
    int64_t iStack_c8;
    uchar **ppuStack_c0;
    code *pcStack_b8;
    uchar auStack_80 [8];
    char acStack_78 [9];
    unkbyte6 Stack_6f;
    uchar uStack_69;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    char acStack_38 [5];
    ushort uStack_33;
    char cStack_31;
    char acStack_30 [5];
    ushort uStack_2b;
    uchar uStack_29;
    ulong uStack_28;
    ulong uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_18 = *(iVar11 + 0x5e0);
    acStack_38[0] = '\0';
    acStack_38[1] = '\0';
    acStack_38[2] = '\0';
    acStack_38[3] = '\0';
    acStack_38[4] = '\0';
    uStack_33 = 0;
    cStack_31 = '\0';
    uStack_28 = 0;
    uStack_20 = 0;
    acStack_30[0] = '\0';
    acStack_30[1] = '\0';
    acStack_30[2] = '\0';
    acStack_30[3] = '\0';
    acStack_30[4] = '\0';
    uStack_2b = 0;
    uStack_29 = 0;
    if (*(arg1 + 0x40) == 0) {
        iVar4 = ___ratelimit(obj.wcd938x_version_read._rs,"wcd938x_version_read");
        if (iVar4 == 0) {
            uVar5 = 0xffffffffffffffea;
        }
        else {
            _printk(0x8009959,"wcd938x_version_read");
            uVar5 = 0xffffffffffffffea;
        }
    }
    else {
        if (*(*(arg1 + 0x40) + 0xc50) == 1) {
            in_x4 = 0xc;
            acStack_38[0] = str.WCD938X_1_0_n[0];
            acStack_38[1] = str.WCD938X_1_0_n[1];
            acStack_38[2] = str.WCD938X_1_0_n[2];
            acStack_38[3] = str.WCD938X_1_0_n[3];
            acStack_38[4] = str.WCD938X_1_0_n[4];
            uStack_33 = str.WCD938X_1_0_n._5_3_;
            cStack_31 = SUB31(str.WCD938X_1_0_n._5_3_,2);
            acStack_30[0] = str.WCD938X_1_0_n[8];
            acStack_30[1] = str.WCD938X_1_0_n[9];
            acStack_30[2] = str.WCD938X_1_0_n[10];
            acStack_30[3] = str.WCD938X_1_0_n[0xb];
            acStack_30[4] = str.WCD938X_1_0_n[0xc];
        }
        else {
            in_x4 = 0xe;
            acStack_38 = SUB75(str.VER_UNDEFINED_n._0_7_,0);
            uStack_33 = SUB72(str.VER_UNDEFINED_n._0_7_,5);
            cStack_31 = str.VER_UNDEFINED_n[7];
            acStack_30 = SUB75(str.VER_UNDEFINED_n._8_7_,0);
            uStack_2b = SUB72(str.VER_UNDEFINED_n._8_7_,5);
        }
        pcVar12 = acStack_38;
        uVar5 = simple_read_from_buffer(arg2);
        arg2 = pcVar12;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_18) {
        return uVar5;
    }
    iVar6 = __stack_chk_fail(uVar5);
    *extraout_x18 = sym.wcd938x_variant_read;
    pcStack_48 = sym.wcd938x_variant_read;
    iVar11 = sp_el0;
    iStack_58 = *(iVar11 + 0x5e0);
    acStack_78[0] = '\0';
    acStack_78[1] = '\0';
    acStack_78[2] = '\0';
    acStack_78[3] = '\0';
    acStack_78[4] = '\0';
    acStack_78[5] = '\0';
    acStack_78[6] = '\0';
    acStack_78[7] = '\0';
    uStack_68 = 0;
    uStack_60 = 0;
    acStack_78[8] = '\0';
    Stack_6f = 0;
    uStack_69 = 0;
    puStack_50 = &stack0xfffffffffffffff0;
    if (*(iVar6 + 0x40) == 0) {
        iVar4 = ___ratelimit(obj.wcd938x_variant_read._rs,"wcd938x_variant_read");
        if (iVar4 == 0) {
            uVar5 = 0xffffffffffffffea;
        }
        else {
            _printk(0x8009959,"wcd938x_variant_read");
            uVar5 = 0xffffffffffffffea;
        }
    }
    else {
        iVar4 = *(*(iVar6 + 0x40) + 8);
        if (iVar4 == 5) {
            pcVar12 = "WCD9385\n";
code_r0x0801a0d4:
            uVar14 = 8;
            acStack_78[8] = '\0';
            acStack_78._0_7_ = *pcVar12;
            acStack_78[7] = *pcVar12 >> 0x38;
        }
        else {
            if (iVar4 == 0) {
                pcVar12 = "WCD9380\n";
                goto code_r0x0801a0d4;
            }
            uVar14 = 0xe;
            acStack_78[0] = str.VER_UNDEFINED_n[0];
            acStack_78[1] = str.VER_UNDEFINED_n[1];
            acStack_78[2] = str.VER_UNDEFINED_n[2];
            acStack_78[3] = str.VER_UNDEFINED_n[3];
            acStack_78[4] = str.VER_UNDEFINED_n[4];
            acStack_78[5] = str.VER_UNDEFINED_n[5];
            acStack_78[6] = str.VER_UNDEFINED_n[6];
            acStack_78[7] = str.VER_UNDEFINED_n[7];
            acStack_78[8] = str.VER_UNDEFINED_n._8_7_;
            Stack_6f = SUB76(str.VER_UNDEFINED_n._8_7_,1);
        }
        uVar5 = simple_read_from_buffer(arg2,in_x4,auStack_80,acStack_78,uVar14);
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_58) {
        return uVar5;
    }
    iVar7 = __stack_chk_fail(uVar5);
    *extraout_x18_00 = sym.wcd938x_probe;
    pcStack_b8 = sym.wcd938x_probe;
    iVar6 = sp_el0;
    iVar11 = iVar7 + 0x10;
    iStack_c8 = *(iVar6 + 0x5e0);
    uStack_d8 = 0;
    ppuStack_c0 = &puStack_50;
    piVar8 = devm_kmalloc(iVar11,0xcd0,0xdc0);
    if (piVar8 == NULL) {
        uVar2 = 0xfffffff4;
        goto code_r0x0801a620;
    }
    *(iVar7 + 0xa8) = piVar8;
    *piVar8 = iVar11;
    piVar9 = sym.wcd938x_populate_dt_data(iVar11);
    if (piVar9 == NULL) {
        pcVar12 = "%s: Fail to obtain platform data\n";
        goto code_r0x0801a55c;
    }
    *(iVar7 + 0xa0) = piVar9;
    piVar8[3] = *piVar9;
    uVar2 = msm_cdc_init_supplies(iVar11,piVar8 + 0x182,piVar9[7],piVar9[8]);
    if (piVar8[0x182] == 0) {
        pcVar12 = "%s: Cannot init wcd supplies\n";
code_r0x0801a580:
        _dev_err(iVar11,pcVar12,"wcd938x_probe");
        goto code_r0x0801a620;
    }
    piVar15 = *(*(iVar7 + 0x70) + 0x90);
    if (piVar15 == NULL) {
        pcVar12 = "%s: platform data from parent is NULL\n";
    }
    else {
        iVar6 = *piVar15;
        piVar8[0x186] = iVar6;
        if (iVar6 == 0) {
            pcVar12 = "%s: handle is NULL\n";
        }
        else {
            iVar6 = piVar15[1];
            piVar8[0x187] = iVar6;
            if (iVar6 == 0) {
                pcVar12 = "%s: update_wcd_event api is null!\n";
            }
            else {
                iVar6 = piVar15[2];
                piVar8[0x188] = iVar6;
                if (iVar6 != 0) {
                    uVar2 = msm_cdc_enable_static_supplies(iVar11,piVar8[0x182],piVar9[7],piVar9[8]);
                    if (uVar2 != 0) {
                        pcVar12 = "%s: wcd static supply enable failed!\n";
                        goto code_r0x0801a580;
                    }
                    uVar3 = sym.wcd938x_parse_port_mapping(iVar11,0x8002bf3,1);
                    uVar2 = sym.wcd938x_parse_port_mapping(iVar11,0x8002c06,0);
                    uVar2 = uVar2 | uVar3;
                    if (uVar2 == 0) {
                        iVar16 = *(iVar7 + 0xa8);
                        uStack_cc = 0;
                        iVar6 = of_find_property(*(iVar7 + 0x300),"qcom,swr-tx-port-params",&uStack_cc);
                        if (iVar6 == 0) {
                            pcVar12 = "missing port mapping prop %s\n";
                            pcVar13 = "qcom,swr-tx-port-params";
code_r0x0801a5c4:
                            _dev_err(iVar11,pcVar12,pcVar13);
                            uVar2 = 0xffffffea;
                        }
                        else {
                            if ((uStack_cc & 0xffffffe0) != 0x80) {
                                pcVar12 = "%s: port params not provided for all usecases\n";
                                pcVar13 = "wcd938x_parse_port_params";
                                goto code_r0x0801a5c4;
                            }
                            puVar10 = __kmalloc(uStack_cc,0xdc0);
                            if (puVar10 == NULL) {
                                uVar2 = 0xfffffff4;
                            }
                            else {
                                uVar2 = of_property_read_variable_u32_array
                                                  (*(iVar7 + 0x300),"qcom,swr-tx-port-params",puVar10,0x20,0);
                                if (-1 < uVar2) {
                                    *(iVar16 + 0xb6c) = *puVar10;
                                    *(iVar16 + 0xb70) = puVar10[1];
                                    *(iVar16 + 0xb74) = puVar10[2];
                                    *(iVar16 + 0xb78) = puVar10[3];
                                    *(iVar16 + 0xb7c) = puVar10[4];
                                    *(iVar16 + 0xb80) = puVar10[5];
                                    *(iVar16 + 0xb84) = puVar10[6];
                                    uVar1 = puVar10[7];
                                    *(iVar16 + 0xbf0) = iVar16 + 0xb6c;
                                    *(iVar16 + 0xb88) = uVar1;
                                    *(iVar16 + 0xb8c) = puVar10[8];
                                    *(iVar16 + 0xb90) = puVar10[9];
                                    *(iVar16 + 0xb94) = puVar10[10];
                                    *(iVar16 + 0xb98) = puVar10[0xb];
                                    *(iVar16 + 0xb9c) = puVar10[0xc];
                                    *(iVar16 + 0xba0) = puVar10[0xd];
                                    *(iVar16 + 0xba4) = puVar10[0xe];
                                    uVar1 = puVar10[0xf];
                                    *(iVar16 + 0xbf8) = iVar16 + 0xb8c;
                                    *(iVar16 + 0xba8) = uVar1;
                                    *(iVar16 + 0xbac) = puVar10[0x10];
                                    *(iVar16 + 0xbb0) = puVar10[0x11];
                                    *(iVar16 + 0xbb4) = puVar10[0x12];
                                    *(iVar16 + 3000) = puVar10[0x13];
                                    *(iVar16 + 0xbbc) = puVar10[0x14];
                                    *(iVar16 + 0xbc0) = puVar10[0x15];
                                    *(iVar16 + 0xbc4) = puVar10[0x16];
                                    uVar1 = puVar10[0x17];
                                    *(iVar16 + 0xc00) = iVar16 + 0xbac;
                                    *(iVar16 + 0xbc8) = uVar1;
                                    *(iVar16 + 0xbcc) = puVar10[0x18];
                                    *(iVar16 + 0xbd0) = puVar10[0x19];
                                    *(iVar16 + 0xbd4) = puVar10[0x1a];
                                    *(iVar16 + 0xbd8) = puVar10[0x1b];
                                    *(iVar16 + 0xbdc) = puVar10[0x1c];
                                    *(iVar16 + 0xbe0) = puVar10[0x1d];
                                    *(iVar16 + 0xbe4) = puVar10[0x1e];
                                    uVar1 = puVar10[0x1f];
                                    *(iVar16 + 0xc08) = iVar16 + 0xbcc;
                                    *(iVar16 + 0xbe8) = uVar1;
                                    kfree(puVar10);
                                    __mutex_init(piVar8 + 0x13,"&wcd938x->wakeup_lock",obj.wcd938x_soc_get_mbhc._rs);
                                    __mutex_init(piVar8 + 0xd,"&wcd938x->micb_lock",obj.wcd938x_soc_get_mbhc._rs);
                                    uVar14 = *(iVar7 + 0x300);
                                    iVar6 = of_parse_phandle(uVar14,"qcom,rx-slave",0);
                                    if (iVar6 == 0) {
                                        iVar4 = ___ratelimit(obj.wcd938x_add_slave_components._rs,
                                                             "wcd938x_add_slave_components");
                                        if (iVar4 != 0) {
                                            pcVar12 = "%s: Rx-slave node not defined\n";
code_r0x0801a660:
                                            _dev_err(iVar11,pcVar12,"wcd938x_add_slave_components");
                                            uVar2 = 0xffffffed;
                                            goto code_r0x0801a620;
                                        }
                                    }
                                    else {
                                        component_match_add_release
                                                  (iVar11,&uStack_d8,
                                                   sym.wcd938x_release_of.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt,
                                                   sym.wcd938x_compare_of.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt,iVar6
                                                  );
                                        iVar6 = of_parse_phandle(uVar14,"qcom,tx-slave",0);
                                        if (iVar6 != 0) {
                                            component_match_add_release
                                                      (iVar11,&uStack_d8,
                                                       sym.wcd938x_release_of.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt,
                                                       sym.wcd938x_compare_of.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt,
                                                       iVar6);
                                            sym.wcd938x_reset(iVar11);
                                            piVar8[0x189] = sym.__typeid__ZTSFiPvbE_global_addr;
                                            uVar2 = component_master_add_with_match
                                                              (iVar11,
                                                            reloc.wcd938x_bind.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt,
                                                            uStack_d8);
                                            goto code_r0x0801a620;
                                        }
                                        iVar4 = ___ratelimit(obj.wcd938x_add_slave_components._rs.91,
                                                             "wcd938x_add_slave_components");
                                        if (iVar4 != 0) {
                                            pcVar12 = "%s: Tx-slave node not defined\n";
                                            goto code_r0x0801a660;
                                        }
                                    }
                                    uVar2 = 0xffffffed;
                                    goto code_r0x0801a620;
                                }
                                _dev_err(iVar11,"%s: Failed to read  port mapping from prop %s\n",
                                         "wcd938x_parse_port_params","qcom,swr-tx-port-params");
                                kfree(puVar10);
                            }
                        }
                        pcVar12 = "Failed to read port params\n";
                    }
                    else {
                        pcVar12 = "Failed to read port mapping\n";
                    }
                    _dev_err(iVar11,pcVar12);
                    goto code_r0x0801a620;
                }
                pcVar12 = "%s: register_notifier api is null!\n";
            }
        }
    }
code_r0x0801a55c:
    _dev_err(iVar11,pcVar12,"wcd938x_probe");
    uVar2 = 0xffffffea;
code_r0x0801a620:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_c8) {
        return uVar2;
    }
    iVar11 = __stack_chk_fail();
    *extraout_x18_01 = sym.wcd938x_remove;
    component_master_del(iVar11 + 0x10,reloc.wcd938x_bind.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt);
    *(iVar11 + 0xa8) = 0;
    return 0;
}


// ===== sym.wcd938x_variant_read @ 0x0801a058 (size 268) =====

uint64_t sym.wcd938x_variant_read(int64_t arg1,uchar noname_1 [16],uchar noname_2 [16],int64_t arg2)

{
    uint uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t *piVar7;
    int64_t *piVar8;
    uint *puVar9;
    char *pcVar10;
    char *pcVar11;
    int64_t iVar12;
    int64_t *piVar13;
    int64_t iVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong uVar15;
    int64_t iVar16;
    ulong unaff_x30;
    ulong uStack_98;
    uint32_t uStack_8c;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iVar12 = *(iVar12 + 0x5e0);
    if (*(arg1 + 0x40) == 0) {
        iVar4 = ___ratelimit(obj.wcd938x_variant_read._rs,"wcd938x_variant_read");
        if (iVar4 == 0) {
            uVar5 = 0xffffffffffffffea;
        }
        else {
            _printk(0x8009959,"wcd938x_variant_read");
            uVar5 = 0xffffffffffffffea;
        }
    }
    else {
        uVar5 = simple_read_from_buffer(arg2);
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iVar12) {
        return uVar5;
    }
    iVar6 = __stack_chk_fail(uVar5);
    *extraout_x18 = sym.wcd938x_probe;
    pcStack_78 = sym.wcd938x_probe;
    iVar14 = sp_el0;
    iVar12 = iVar6 + 0x10;
    iStack_88 = *(iVar14 + 0x5e0);
    uStack_98 = 0;
    puStack_80 = &stack0xfffffffffffffff0;
    piVar7 = devm_kmalloc(iVar12,0xcd0,0xdc0);
    if (piVar7 == NULL) {
        uVar2 = 0xfffffff4;
        goto code_r0x0801a620;
    }
    *(iVar6 + 0xa8) = piVar7;
    *piVar7 = iVar12;
    piVar8 = sym.wcd938x_populate_dt_data(iVar12);
    if (piVar8 == NULL) {
        pcVar10 = "%s: Fail to obtain platform data\n";
        goto code_r0x0801a55c;
    }
    *(iVar6 + 0xa0) = piVar8;
    piVar7[3] = *piVar8;
    uVar2 = msm_cdc_init_supplies(iVar12,piVar7 + 0x182,piVar8[7],piVar8[8]);
    if (piVar7[0x182] == 0) {
        pcVar10 = "%s: Cannot init wcd supplies\n";
code_r0x0801a580:
        _dev_err(iVar12,pcVar10,"wcd938x_probe");
        goto code_r0x0801a620;
    }
    piVar13 = *(*(iVar6 + 0x70) + 0x90);
    if (piVar13 == NULL) {
        pcVar10 = "%s: platform data from parent is NULL\n";
    }
    else {
        iVar14 = *piVar13;
        piVar7[0x186] = iVar14;
        if (iVar14 == 0) {
            pcVar10 = "%s: handle is NULL\n";
        }
        else {
            iVar14 = piVar13[1];
            piVar7[0x187] = iVar14;
            if (iVar14 == 0) {
                pcVar10 = "%s: update_wcd_event api is null!\n";
            }
            else {
                iVar14 = piVar13[2];
                piVar7[0x188] = iVar14;
                if (iVar14 != 0) {
                    uVar2 = msm_cdc_enable_static_supplies(iVar12,piVar7[0x182],piVar8[7],piVar8[8]);
                    if (uVar2 != 0) {
                        pcVar10 = "%s: wcd static supply enable failed!\n";
                        goto code_r0x0801a580;
                    }
                    uVar3 = sym.wcd938x_parse_port_mapping(iVar12,0x8002bf3,1);
                    uVar2 = sym.wcd938x_parse_port_mapping(iVar12,0x8002c06,0);
                    uVar2 = uVar2 | uVar3;
                    if (uVar2 == 0) {
                        iVar16 = *(iVar6 + 0xa8);
                        uStack_8c = 0;
                        iVar14 = of_find_property(*(iVar6 + 0x300),"qcom,swr-tx-port-params",&uStack_8c);
                        if (iVar14 == 0) {
                            pcVar10 = "missing port mapping prop %s\n";
                            pcVar11 = "qcom,swr-tx-port-params";
code_r0x0801a5c4:
                            _dev_err(iVar12,pcVar10,pcVar11);
                            uVar2 = 0xffffffea;
                        }
                        else {
                            if ((uStack_8c & 0xffffffe0) != 0x80) {
                                pcVar10 = "%s: port params not provided for all usecases\n";
                                pcVar11 = "wcd938x_parse_port_params";
                                goto code_r0x0801a5c4;
                            }
                            puVar9 = __kmalloc(uStack_8c,0xdc0);
                            if (puVar9 == NULL) {
                                uVar2 = 0xfffffff4;
                            }
                            else {
                                uVar2 = of_property_read_variable_u32_array
                                                  (*(iVar6 + 0x300),"qcom,swr-tx-port-params",puVar9,0x20,0);
                                if (-1 < uVar2) {
                                    *(iVar16 + 0xb6c) = *puVar9;
                                    *(iVar16 + 0xb70) = puVar9[1];
                                    *(iVar16 + 0xb74) = puVar9[2];
                                    *(iVar16 + 0xb78) = puVar9[3];
                                    *(iVar16 + 0xb7c) = puVar9[4];
                                    *(iVar16 + 0xb80) = puVar9[5];
                                    *(iVar16 + 0xb84) = puVar9[6];
                                    uVar1 = puVar9[7];
                                    *(iVar16 + 0xbf0) = iVar16 + 0xb6c;
                                    *(iVar16 + 0xb88) = uVar1;
                                    *(iVar16 + 0xb8c) = puVar9[8];
                                    *(iVar16 + 0xb90) = puVar9[9];
                                    *(iVar16 + 0xb94) = puVar9[10];
                                    *(iVar16 + 0xb98) = puVar9[0xb];
                                    *(iVar16 + 0xb9c) = puVar9[0xc];
                                    *(iVar16 + 0xba0) = puVar9[0xd];
                                    *(iVar16 + 0xba4) = puVar9[0xe];
                                    uVar1 = puVar9[0xf];
                                    *(iVar16 + 0xbf8) = iVar16 + 0xb8c;
                                    *(iVar16 + 0xba8) = uVar1;
                                    *(iVar16 + 0xbac) = puVar9[0x10];
                                    *(iVar16 + 0xbb0) = puVar9[0x11];
                                    *(iVar16 + 0xbb4) = puVar9[0x12];
                                    *(iVar16 + 3000) = puVar9[0x13];
                                    *(iVar16 + 0xbbc) = puVar9[0x14];
                                    *(iVar16 + 0xbc0) = puVar9[0x15];
                                    *(iVar16 + 0xbc4) = puVar9[0x16];
                                    uVar1 = puVar9[0x17];
                                    *(iVar16 + 0xc00) = iVar16 + 0xbac;
                                    *(iVar16 + 0xbc8) = uVar1;
                                    *(iVar16 + 0xbcc) = puVar9[0x18];
                                    *(iVar16 + 0xbd0) = puVar9[0x19];
                                    *(iVar16 + 0xbd4) = puVar9[0x1a];
                                    *(iVar16 + 0xbd8) = puVar9[0x1b];
                                    *(iVar16 + 0xbdc) = puVar9[0x1c];
                                    *(iVar16 + 0xbe0) = puVar9[0x1d];
                                    *(iVar16 + 0xbe4) = puVar9[0x1e];
                                    uVar1 = puVar9[0x1f];
                                    *(iVar16 + 0xc08) = iVar16 + 0xbcc;
                                    *(iVar16 + 0xbe8) = uVar1;
                                    kfree(puVar9);
                                    __mutex_init(piVar7 + 0x13,"&wcd938x->wakeup_lock",obj.wcd938x_soc_get_mbhc._rs);
                                    __mutex_init(piVar7 + 0xd,"&wcd938x->micb_lock",obj.wcd938x_soc_get_mbhc._rs);
                                    uVar15 = *(iVar6 + 0x300);
                                    iVar14 = of_parse_phandle(uVar15,"qcom,rx-slave",0);
                                    if (iVar14 == 0) {
                                        iVar4 = ___ratelimit(obj.wcd938x_add_slave_components._rs,
                                                             "wcd938x_add_slave_components");
                                        if (iVar4 != 0) {
                                            pcVar10 = "%s: Rx-slave node not defined\n";
code_r0x0801a660:
                                            _dev_err(iVar12,pcVar10,"wcd938x_add_slave_components");
                                            uVar2 = 0xffffffed;
                                            goto code_r0x0801a620;
                                        }
                                    }
                                    else {
                                        component_match_add_release
                                                  (iVar12,&uStack_98,
                                                   sym.wcd938x_release_of.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt,
                                                   sym.wcd938x_compare_of.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt,
                                                   iVar14);
                                        iVar14 = of_parse_phandle(uVar15,"qcom,tx-slave",0);
                                        if (iVar14 != 0) {
                                            component_match_add_release
                                                      (iVar12,&uStack_98,
                                                       sym.wcd938x_release_of.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt,
                                                       sym.wcd938x_compare_of.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt,
                                                       iVar14);
                                            sym.wcd938x_reset(iVar12);
                                            piVar7[0x189] = sym.__typeid__ZTSFiPvbE_global_addr;
                                            uVar2 = component_master_add_with_match
                                                              (iVar12,
                                                            reloc.wcd938x_bind.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt,
                                                            uStack_98);
                                            goto code_r0x0801a620;
                                        }
                                        iVar4 = ___ratelimit(obj.wcd938x_add_slave_components._rs.91,
                                                             "wcd938x_add_slave_components");
                                        if (iVar4 != 0) {
                                            pcVar10 = "%s: Tx-slave node not defined\n";
                                            goto code_r0x0801a660;
                                        }
                                    }
                                    uVar2 = 0xffffffed;
                                    goto code_r0x0801a620;
                                }
                                _dev_err(iVar12,"%s: Failed to read  port mapping from prop %s\n",
                                         "wcd938x_parse_port_params","qcom,swr-tx-port-params");
                                kfree(puVar9);
                            }
                        }
                        pcVar10 = "Failed to read port params\n";
                    }
                    else {
                        pcVar10 = "Failed to read port mapping\n";
                    }
                    _dev_err(iVar12,pcVar10);
                    goto code_r0x0801a620;
                }
                pcVar10 = "%s: register_notifier api is null!\n";
            }
        }
    }
code_r0x0801a55c:
    _dev_err(iVar12,pcVar10,"wcd938x_probe");
    uVar2 = 0xffffffea;
code_r0x0801a620:
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) != iStack_88) {
        iVar12 = __stack_chk_fail();
        *extraout_x18_00 = sym.wcd938x_remove;
        component_master_del(iVar12 + 0x10,reloc.wcd938x_bind.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt);
        *(iVar12 + 0xa8) = 0;
        return 0;
    }
    return uVar2;
}


// ===== sym.wcd938x_probe @ 0x0801a164 (size 1304) =====

uint32_t sym.wcd938x_probe(int64_t arg1)

{
    uint uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t *piVar5;
    int64_t *piVar6;
    uint *puVar7;
    int64_t iVar8;
    char *pcVar9;
    char *pcVar10;
    int64_t *piVar11;
    int64_t iVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar13;
    int64_t iVar14;
    ulong unaff_x30;
    ulong uStack_58;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iVar8 = arg1 + 0x10;
    iStack_48 = *(iVar12 + 0x5e0);
    uStack_58 = 0;
    piVar5 = devm_kmalloc(iVar8,0xcd0,0xdc0);
    if (piVar5 == NULL) {
        uVar2 = 0xfffffff4;
        goto code_r0x0801a620;
    }
    *(arg1 + 0xa8) = piVar5;
    *piVar5 = iVar8;
    piVar6 = sym.wcd938x_populate_dt_data(iVar8);
    if (piVar6 == NULL) {
        pcVar9 = "%s: Fail to obtain platform data\n";
        goto code_r0x0801a55c;
    }
    *(arg1 + 0xa0) = piVar6;
    piVar5[3] = *piVar6;
    uVar2 = msm_cdc_init_supplies(iVar8,piVar5 + 0x182,piVar6[7],piVar6[8]);
    if (piVar5[0x182] == 0) {
        pcVar9 = "%s: Cannot init wcd supplies\n";
code_r0x0801a580:
        _dev_err(iVar8,pcVar9,"wcd938x_probe");
        goto code_r0x0801a620;
    }
    piVar11 = *(*(arg1 + 0x70) + 0x90);
    if (piVar11 == NULL) {
        pcVar9 = "%s: platform data from parent is NULL\n";
    }
    else {
        iVar12 = *piVar11;
        piVar5[0x186] = iVar12;
        if (iVar12 == 0) {
            pcVar9 = "%s: handle is NULL\n";
        }
        else {
            iVar12 = piVar11[1];
            piVar5[0x187] = iVar12;
            if (iVar12 == 0) {
                pcVar9 = "%s: update_wcd_event api is null!\n";
            }
            else {
                iVar12 = piVar11[2];
                piVar5[0x188] = iVar12;
                if (iVar12 != 0) {
                    uVar2 = msm_cdc_enable_static_supplies(iVar8,piVar5[0x182],piVar6[7],piVar6[8]);
                    if (uVar2 != 0) {
                        pcVar9 = "%s: wcd static supply enable failed!\n";
                        goto code_r0x0801a580;
                    }
                    uVar3 = sym.wcd938x_parse_port_mapping(iVar8,0x8002bf3,1);
                    uVar2 = sym.wcd938x_parse_port_mapping(iVar8,0x8002c06,0);
                    uVar2 = uVar2 | uVar3;
                    if (uVar2 == 0) {
                        iVar14 = *(arg1 + 0xa8);
                        uStack_4c = 0;
                        iVar12 = of_find_property(*(arg1 + 0x300),"qcom,swr-tx-port-params",&uStack_4c);
                        if (iVar12 == 0) {
                            pcVar9 = "missing port mapping prop %s\n";
                            pcVar10 = "qcom,swr-tx-port-params";
code_r0x0801a5c4:
                            _dev_err(iVar8,pcVar9,pcVar10);
                            uVar2 = 0xffffffea;
                        }
                        else {
                            if ((uStack_4c & 0xffffffe0) != 0x80) {
                                pcVar9 = "%s: port params not provided for all usecases\n";
                                pcVar10 = "wcd938x_parse_port_params";
                                goto code_r0x0801a5c4;
                            }
                            puVar7 = __kmalloc(uStack_4c,0xdc0);
                            if (puVar7 == NULL) {
                                uVar2 = 0xfffffff4;
                            }
                            else {
                                uVar2 = of_property_read_variable_u32_array
                                                  (*(arg1 + 0x300),"qcom,swr-tx-port-params",puVar7,0x20,0);
                                if (-1 < uVar2) {
                                    *(iVar14 + 0xb6c) = *puVar7;
                                    *(iVar14 + 0xb70) = puVar7[1];
                                    *(iVar14 + 0xb74) = puVar7[2];
                                    *(iVar14 + 0xb78) = puVar7[3];
                                    *(iVar14 + 0xb7c) = puVar7[4];
                                    *(iVar14 + 0xb80) = puVar7[5];
                                    *(iVar14 + 0xb84) = puVar7[6];
                                    uVar1 = puVar7[7];
                                    *(iVar14 + 0xbf0) = iVar14 + 0xb6c;
                                    *(iVar14 + 0xb88) = uVar1;
                                    *(iVar14 + 0xb8c) = puVar7[8];
                                    *(iVar14 + 0xb90) = puVar7[9];
                                    *(iVar14 + 0xb94) = puVar7[10];
                                    *(iVar14 + 0xb98) = puVar7[0xb];
                                    *(iVar14 + 0xb9c) = puVar7[0xc];
                                    *(iVar14 + 0xba0) = puVar7[0xd];
                                    *(iVar14 + 0xba4) = puVar7[0xe];
                                    uVar1 = puVar7[0xf];
                                    *(iVar14 + 0xbf8) = iVar14 + 0xb8c;
                                    *(iVar14 + 0xba8) = uVar1;
                                    *(iVar14 + 0xbac) = puVar7[0x10];
                                    *(iVar14 + 0xbb0) = puVar7[0x11];
                                    *(iVar14 + 0xbb4) = puVar7[0x12];
                                    *(iVar14 + 3000) = puVar7[0x13];
                                    *(iVar14 + 0xbbc) = puVar7[0x14];
                                    *(iVar14 + 0xbc0) = puVar7[0x15];
                                    *(iVar14 + 0xbc4) = puVar7[0x16];
                                    uVar1 = puVar7[0x17];
                                    *(iVar14 + 0xc00) = iVar14 + 0xbac;
                                    *(iVar14 + 0xbc8) = uVar1;
                                    *(iVar14 + 0xbcc) = puVar7[0x18];
                                    *(iVar14 + 0xbd0) = puVar7[0x19];
                                    *(iVar14 + 0xbd4) = puVar7[0x1a];
                                    *(iVar14 + 0xbd8) = puVar7[0x1b];
                                    *(iVar14 + 0xbdc) = puVar7[0x1c];
                                    *(iVar14 + 0xbe0) = puVar7[0x1d];
                                    *(iVar14 + 0xbe4) = puVar7[0x1e];
                                    uVar1 = puVar7[0x1f];
                                    *(iVar14 + 0xc08) = iVar14 + 0xbcc;
                                    *(iVar14 + 0xbe8) = uVar1;
                                    kfree(puVar7);
                                    __mutex_init(piVar5 + 0x13,"&wcd938x->wakeup_lock",obj.wcd938x_soc_get_mbhc._rs);
                                    __mutex_init(piVar5 + 0xd,"&wcd938x->micb_lock",obj.wcd938x_soc_get_mbhc._rs);
                                    uVar13 = *(arg1 + 0x300);
                                    iVar12 = of_parse_phandle(uVar13,"qcom,rx-slave",0);
                                    if (iVar12 == 0) {
                                        iVar4 = ___ratelimit(obj.wcd938x_add_slave_components._rs,
                                                             "wcd938x_add_slave_components");
                                        if (iVar4 != 0) {
                                            pcVar9 = "%s: Rx-slave node not defined\n";
code_r0x0801a660:
                                            _dev_err(iVar8,pcVar9,"wcd938x_add_slave_components");
                                            uVar2 = 0xffffffed;
                                            goto code_r0x0801a620;
                                        }
                                    }
                                    else {
                                        component_match_add_release
                                                  (iVar8,&uStack_58,
                                                   sym.wcd938x_release_of.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt,
                                                   sym.wcd938x_compare_of.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt,
                                                   iVar12);
                                        iVar12 = of_parse_phandle(uVar13,"qcom,tx-slave",0);
                                        if (iVar12 != 0) {
                                            component_match_add_release
                                                      (iVar8,&uStack_58,
                                                       sym.wcd938x_release_of.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt,
                                                       sym.wcd938x_compare_of.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt,
                                                       iVar12);
                                            sym.wcd938x_reset(iVar8);
                                            piVar5[0x189] = sym.__typeid__ZTSFiPvbE_global_addr;
                                            uVar2 = component_master_add_with_match
                                                              (iVar8,
                                                            reloc.wcd938x_bind.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt,
                                                            uStack_58);
                                            goto code_r0x0801a620;
                                        }
                                        iVar4 = ___ratelimit(obj.wcd938x_add_slave_components._rs.91,
                                                             "wcd938x_add_slave_components");
                                        if (iVar4 != 0) {
                                            pcVar9 = "%s: Tx-slave node not defined\n";
                                            goto code_r0x0801a660;
                                        }
                                    }
                                    uVar2 = 0xffffffed;
                                    goto code_r0x0801a620;
                                }
                                _dev_err(iVar8,"%s: Failed to read  port mapping from prop %s\n",
                                         "wcd938x_parse_port_params","qcom,swr-tx-port-params");
                                kfree(puVar7);
                            }
                        }
                        pcVar9 = "Failed to read port params\n";
                    }
                    else {
                        pcVar9 = "Failed to read port mapping\n";
                    }
                    _dev_err(iVar8,pcVar9);
                    goto code_r0x0801a620;
                }
                pcVar9 = "%s: register_notifier api is null!\n";
            }
        }
    }
code_r0x0801a55c:
    _dev_err(iVar8,pcVar9,"wcd938x_probe");
    uVar2 = 0xffffffea;
code_r0x0801a620:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_48) {
        return uVar2;
    }
    iVar8 = __stack_chk_fail();
    *extraout_x18 = sym.wcd938x_remove;
    component_master_del(iVar8 + 0x10,reloc.wcd938x_bind.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt);
    *(iVar8 + 0xa8) = 0;
    return 0;
}


// ===== sym.wcd938x_remove @ 0x0801a67c (size 68) =====

ulong sym.wcd938x_remove(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    component_master_del(arg1 + 0x10,reloc.wcd938x_bind.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt);
    *(arg1 + 0xa8) = 0;
    return 0;
}


// ===== sym.wcd938x_parse_port_mapping @ 0x0801a6c0 (size 568) =====

uint64_t sym.wcd938x_parse_port_mapping(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint uVar1;
    uint uVar2;
    uint32_t uVar3;
    uint uVar4;
    int iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    char *pcVar8;
    uint32_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar10;
    int64_t iVar11;
    int64_t iVar12;
    uint *puVar13;
    uint32_t uVar14;
    uint32_t uVar15;
    int64_t iVar16;
    uint *puVar17;
    ulong unaff_x30;
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_68 = *(iVar11 + 0x5e0);
    iVar11 = *(arg1 + 0x98);
    uStack_6c = 0;
    if ((arg3 & 0xff) == 1) {
        iVar12 = 0x169;
        iVar16 = 0x66c;
    }
    else {
        if ((arg3 & 0xffU) != 0) {
            _dev_err(arg1,"%s Invalid path selected %u\n","wcd938x_parse_port_mapping",arg3 & 0xff);
            uVar10 = 0xffffffea;
            goto code_r0x0801a828;
        }
        iVar12 = 0x168;
        iVar16 = 0x16c;
    }
    iVar6 = of_find_property(*(arg1 + 0x2f0),arg2,&uStack_6c);
    uVar15 = uStack_6c;
    if (iVar6 == 0) {
        _dev_err(arg1,"missing port mapping prop %s\n",arg2);
        uVar10 = 0xffffffea;
    }
    else {
        iVar6 = __kmalloc(uStack_6c,0xdc0);
        if (iVar6 == 0) {
            uVar10 = 0xfffffff4;
        }
        else {
            uVar3 = of_property_read_variable_u32_array(*(arg1 + 0x2f0),arg2,iVar6,(uVar15 / 0x14) * 5,0);
            if (uVar3 < 0) {
                _dev_err(arg1,"%s: Failed to read  port mapping from prop %s\n","wcd938x_parse_port_mapping",arg2);
code_r0x0801a8e4:
                uVar10 = uVar3 & uVar3 >> 0x1f;
                kfree(iVar6);
            }
            else {
                if (uVar15 < 0x14) {
                    uVar14 = 0;
                }
                else {
                    uVar15 = uVar15 / 0x14;
                    uVar9 = 0;
                    if (uVar15 < 2) {
                        uVar15 = 1;
                    }
                    uVar10 = uVar15;
                    puVar17 = iVar6 + 8;
                    uVar15 = 0;
                    do {
                        uVar14 = puVar17[-2];
                        if (7 < uVar14 || 7 < uVar9) {
                            _dev_err(arg1,"%s: Invalid port or channel number\n","wcd938x_parse_port_mapping");
                            goto code_r0x0801a8e4;
                        }
                        if (uVar14 != uVar15) {
                            uVar9 = 0;
                        }
                        uVar4 = *puVar17;
                        puVar13 = iVar11 + iVar16 + uVar14 * 0xa0 + uVar9 * 0x14;
                        uVar1 = puVar17[1];
                        uVar2 = puVar17[2];
                        *puVar13 = puVar17[-1];
                        puVar13[1] = uVar2;
                        puVar13[2] = uVar4;
                        uVar4 = __sw_hweight8();
                        uVar9 = uVar9 + 1;
                        uVar10 = uVar10 - 1;
                        puVar17 = puVar17 + 5;
                        puVar13[3] = uVar4;
                        puVar13[4] = uVar1;
                        uVar15 = uVar14;
                    } while (uVar10 != 0);
                }
                *(iVar11 + iVar12) = uVar14;
                kfree(iVar6);
                uVar10 = 0;
            }
        }
    }
code_r0x0801a828:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_68) {
        return uVar10;
    }
    uVar10 = __stack_chk_fail();
    *extraout_x18 = sym.wcd938x_reset;
    if (uVar10 == 0) {
        return 0;
    }
    iVar11 = *(uVar10 + 0x98);
    if (iVar11 == 0) {
        return uVar10;
    }
    if (*(iVar11 + 0x18) == 0) {
        uVar7 = ___ratelimit(obj.wcd938x_reset._rs,"wcd938x_reset");
        if (uVar7 == 0) {
            return uVar7;
        }
        pcVar8 = "%s: reset gpio device node not specified\n";
    }
    else {
        uVar7 = msm_cdc_pinctrl_get_state();
        if (0 < uVar7) {
            return uVar7;
        }
        iVar5 = msm_cdc_pinctrl_select_sleep_state(*(iVar11 + 0x18));
        if (iVar5 == 0) {
            usleep_range_state(0x14,0x1e,2);
            iVar5 = msm_cdc_pinctrl_select_active_state(*(iVar11 + 0x18));
            if (iVar5 == 0) {
                uVar10 = usleep_range_state(0x14,0x1e,2);
                return uVar10;
            }
            uVar7 = ___ratelimit(obj.wcd938x_reset._rs.96,"wcd938x_reset");
            if (uVar7 == 0) {
                return uVar7;
            }
            pcVar8 = "%s: wcd active state request fail!\n";
        }
        else {
            uVar7 = ___ratelimit(obj.wcd938x_reset._rs.94,"wcd938x_reset");
            if (uVar7 == 0) {
                return uVar7;
            }
            pcVar8 = "%s: wcd sleep state request fail!\n";
        }
    }
    uVar10 = _dev_err(uVar10,pcVar8,"wcd938x_reset");
    return uVar10;
}


// ===== sym.wcd938x_reset @ 0x0801a8f8 (size 260) =====

void sym.wcd938x_reset(int64_t arg1)

{
    int iVar1;
    char *pcVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        return;
    }
    iVar3 = *(arg1 + 0x98);
    if (iVar3 == 0) {
        return;
    }
    if (*(iVar3 + 0x18) == 0) {
        iVar1 = ___ratelimit(obj.wcd938x_reset._rs,"wcd938x_reset");
        if (iVar1 == 0) {
            return;
        }
        pcVar2 = "%s: reset gpio device node not specified\n";
    }
    else {
        iVar1 = msm_cdc_pinctrl_get_state();
        if (0 < iVar1) {
            return;
        }
        iVar1 = msm_cdc_pinctrl_select_sleep_state(*(iVar3 + 0x18));
        if (iVar1 == 0) {
            usleep_range_state(0x14,0x1e,2);
            iVar1 = msm_cdc_pinctrl_select_active_state(*(iVar3 + 0x18));
            if (iVar1 == 0) {
                usleep_range_state(0x14,0x1e,2);
                return;
            }
            iVar1 = ___ratelimit(obj.wcd938x_reset._rs.96,"wcd938x_reset");
            if (iVar1 == 0) {
                return;
            }
            pcVar2 = "%s: wcd active state request fail!\n";
        }
        else {
            iVar1 = ___ratelimit(obj.wcd938x_reset._rs.94,"wcd938x_reset");
            if (iVar1 == 0) {
                return;
            }
            pcVar2 = "%s: wcd sleep state request fail!\n";
        }
    }
    _dev_err(arg1,pcVar2,"wcd938x_reset");
    return;
}


// ===== sym.wcd938x_release_of @ 0x0801a9fc (size 12) =====

void sym.wcd938x_release_of(void)

{
    return;
}


// ===== sym.wcd938x_compare_of @ 0x0801aa08 (size 24) =====

bool sym.wcd938x_compare_of(int64_t arg1,uint32_t arg2)

{
    return *(arg1 + 0x2f0) == arg2;
}


// ===== sym.wcd938x_bind @ 0x0801aa20 (size 1492) =====

int sym.wcd938x_bind(int64_t arg1)

{
    ulong *puVar1;
    int64_t iVar2;
    ulong *puVar3;
    int iVar4;
    int iVar5;
    int64_t iVar6;
    char *pcVar7;
    ulong *in_x18;
    uint32_t uVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x90);
    puVar3 = *(arg1 + 0x98);
    usleep_range_state(5000,0x1392,2);
    iVar4 = component_bind_all(arg1,puVar3);
    if (iVar4 != 0) {
        iVar5 = ___ratelimit(obj.wcd938x_bind._rs,"wcd938x_bind");
        if (iVar5 == 0) {
            return iVar4;
        }
        _dev_err(arg1,"%s: Slave bind failed, ret = %d\n","wcd938x_bind",iVar4);
        return iVar4;
    }
    iVar6 = get_matching_swr_slave_device(*(iVar2 + 8));
    puVar3[5] = iVar6;
    if (iVar6 == 0) {
        iVar4 = ___ratelimit(obj.wcd938x_bind._rs.99,"wcd938x_bind");
        if (iVar4 != 0) {
            pcVar7 = "%s: Could not find RX swr slave device\n";
code_r0x0801aef0:
            _dev_err(arg1,pcVar7,"wcd938x_bind");
            iVar4 = -0x13;
            goto code_r0x0801ac04;
        }
    }
    else {
        iVar6 = get_matching_swr_slave_device(*(iVar2 + 0x10));
        puVar3[6] = iVar6;
        if (iVar6 != 0) {
            swr_init_port_params(iVar6,4,puVar3 + 0x17e);
            iVar6 = __devm_regmap_init_swr(puVar3[6],obj.wcd938x_regmap_config,0,0);
            puVar3[4] = iVar6;
            if (iVar6 == 0) {
                iVar4 = ___ratelimit(obj.wcd938x_bind._rs.103,"wcd938x_bind");
                if (iVar4 == 0) {
                    iVar4 = 0;
                }
                else {
                    _dev_err(arg1,"%s: Regmap init failed\n","wcd938x_bind");
                    iVar4 = 0;
                }
                goto code_r0x0801ac04;
            }
            if ((0 < _segment.ehdr) && (regmap_write(iVar6,0x3474,0), 1 < _segment.ehdr)) {
                iVar4 = 0;
                do {
                    regmap_write(puVar3[4],iVar4 + 0x3475,0);
                    iVar5 = iVar4 + 2;
                    iVar4 = iVar4 + 1;
                } while (iVar5 < _segment.ehdr);
            }
            puVar1 = puVar3 + 0x26;
            *0x8000f60 = puVar3;
            puVar3[0x26] = obj.wcd938x_regmap_irq_chip;
            puVar3[0x27] = "WCD938X";
            puVar3[0x2a] = arg1;
            puVar3[0x28] = puVar3[4];
            iVar4 = wcd_irq_init(puVar1,puVar3 + 0x25);
            if (iVar4 != 0) {
                iVar5 = ___ratelimit(obj.wcd938x_bind._rs.106,"wcd938x_bind");
                if (iVar5 != 0) {
                    _dev_err(*puVar3,"%s: IRQ init failed: %d\n","wcd938x_bind",iVar4);
                }
                goto code_r0x0801ac04;
            }
            *(puVar3[6] + 1000) = puVar3[0x25];
            if (iVar2 == 0) {
                _dev_err(*puVar3,"%s: NULL pdata\n","wcd938x_set_micbias_data");
                iVar4 = -0x13;
code_r0x0801af44:
                iVar5 = ___ratelimit(obj.wcd938x_bind._rs.108,"wcd938x_bind");
                if (iVar5 != 0) {
                    pcVar7 = "%s: bad micbias pdata\n";
code_r0x0801af74:
                    _dev_err(arg1,pcVar7,"wcd938x_bind");
                }
            }
            else {
                if (*(iVar2 + 0x20) - 0xb23U < 0xfffff8c5) {
                    iVar4 = ___ratelimit(obj.wcd938x_get_micb_vout_ctl_val._rs,"wcd938x_get_micb_vout_ctl_val");
                    if (iVar4 == 0) {
                        uVar8 = 0xffffffea;
                    }
                    else {
                        _printk(0x8009009,"wcd938x_get_micb_vout_ctl_val");
                        uVar8 = 0xffffffea;
                    }
                }
                else {
                    uVar8 = (*(iVar2 + 0x20) - 1000U >> 1 & 0x7fff) / 0x19;
                }
                if (*(iVar2 + 0x24) - 0xb23U < 0xfffff8c5) {
                    iVar4 = ___ratelimit(obj.wcd938x_get_micb_vout_ctl_val._rs,"wcd938x_get_micb_vout_ctl_val");
                    if (iVar4 == 0) {
                        uVar9 = 0xffffffea;
                    }
                    else {
                        _printk(0x8009009,"wcd938x_get_micb_vout_ctl_val");
                        uVar9 = 0xffffffea;
                    }
                }
                else {
                    uVar9 = (*(iVar2 + 0x24) - 1000U >> 1 & 0x7fff) / 0x19;
                }
                if (*(iVar2 + 0x28) - 0xb23U < 0xfffff8c5) {
                    iVar4 = ___ratelimit(obj.wcd938x_get_micb_vout_ctl_val._rs,"wcd938x_get_micb_vout_ctl_val");
                    if (iVar4 == 0) {
                        uVar10 = 0xffffffea;
                    }
                    else {
                        _printk(0x8009009,"wcd938x_get_micb_vout_ctl_val");
                        uVar10 = 0xffffffea;
                    }
                }
                else {
                    uVar10 = (*(iVar2 + 0x28) - 1000U >> 1 & 0x7fff) / 0x19;
                }
                if (0xfffff8c4 < *(iVar2 + 0x2c) - 0xb23U) {
                    uVar11 = (*(iVar2 + 0x2c) - 1000U >> 1 & 0x7fff) / 0x19;
                    iVar4 = -0x16;
                    if (-1 < uVar8) goto code_r0x0801ad88;
                    goto code_r0x0801af44;
                }
                iVar4 = ___ratelimit(obj.wcd938x_get_micb_vout_ctl_val._rs,"wcd938x_get_micb_vout_ctl_val");
                if (iVar4 != 0) {
                    _printk(0x8009009,"wcd938x_get_micb_vout_ctl_val");
                }
                uVar11 = 0xffffffea;
                iVar4 = -0x16;
                if (uVar8 < 0) goto code_r0x0801af44;
code_r0x0801ad88:
                iVar4 = -0x16;
                if (((uVar9 < 0) || (uVar10 < 0)) || (uVar11 < 0)) goto code_r0x0801af44;
                regmap_update_bits_base(puVar3[4],0x3022,0x3f,uVar8,0,0,0);
                regmap_update_bits_base(puVar3[4],0x3023,0x3f,uVar9,0,0,0);
                regmap_update_bits_base(puVar3[4],0x3025,0x3f,uVar10,0,0,0);
                regmap_update_bits_base(puVar3[4],0x3026,0x3f,uVar11,0,0,0);
                wcd_request_irq(puVar1,0xe,"HPHR PDM WD INT",
                                sym.wcd938x_wd_handle_irq.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt,0);
                wcd_request_irq(puVar1,0xd,"HPHL PDM WD INT",
                                sym.wcd938x_wd_handle_irq.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt,0);
                wcd_request_irq(puVar1,0xf,"AUX PDM WD INT",
                                sym.wcd938x_wd_handle_irq.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt,0);
                wcd_disable_irq(puVar1,0xe);
                wcd_disable_irq(puVar1,0xd);
                wcd_disable_irq(puVar1,0xf);
                iVar4 = snd_soc_register_component(arg1,obj.soc_codec_dev_wcd938x,obj.wcd938x_dai,1);
                if (iVar4 == 0) {
                    *(puVar3 + 399) = 1;
                    return 0;
                }
                iVar5 = ___ratelimit(obj.wcd938x_bind._rs.113,"wcd938x_bind");
                if (iVar5 != 0) {
                    pcVar7 = "%s: Codec registration failed\n";
                    goto code_r0x0801af74;
                }
            }
            wcd_irq_exit(puVar1,puVar3[0x25]);
            goto code_r0x0801ac04;
        }
        iVar4 = ___ratelimit(obj.wcd938x_bind._rs.101,"wcd938x_bind");
        if (iVar4 != 0) {
            pcVar7 = "%s: Could not find TX swr slave device\n";
            goto code_r0x0801aef0;
        }
    }
    iVar4 = -0x13;
code_r0x0801ac04:
    component_unbind_all(arg1,puVar3);
    return iVar4;
}


// ===== sym.wcd938x_unbind @ 0x0801aff4 (size 140) =====

void sym.wcd938x_unbind(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x98);
    iVar1 = iVar2 + 0x130;
    wcd_free_irq(iVar1,0xe,0);
    wcd_free_irq(iVar1,0xd,0);
    wcd_free_irq(iVar1,0xf,0);
    wcd_irq_exit(iVar1,*(iVar2 + 0x128));
    snd_soc_unregister_component(arg1);
    component_unbind_all(arg1,iVar2);
    return;
}


// ===== sym.wcd938x_wd_handle_irq @ 0x0801b080 (size 100) =====

ulong sym.wcd938x_wd_handle_irq(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = ___ratelimit(obj.wcd938x_wd_handle_irq._rs,"wcd938x_wd_handle_irq");
    if (iVar1 != 0) {
        _printk(0x8004700,"wcd938x_wd_handle_irq",arg1 & 0xffffffff);
    }
    return 1;
}


// ===== sym.wcd938x_handle_post_irq @ 0x0801b0e4 (size 192) =====

int sym.wcd938x_handle_post_irq(int64_t arg1)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    uint32_t uVar4;
    int iVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong uVar8;
    char *pcVar9;
    int iVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar11;
    int64_t iVar12;
    ulong unaff_x30;
    int iStack_34;
    int iStack_30;
    int iStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_28 = *(iVar6 + 0x5e0);
    iStack_2c = 0;
    iStack_34 = 0;
    iStack_30 = 0;
    regmap_read(*(arg1 + 0x20),0x346e,&iStack_2c);
    regmap_read(*(arg1 + 0x20),0x346f,&iStack_30);
    regmap_read(*(arg1 + 0x20),0x3470,&iStack_34);
    *(*(arg1 + 0x30) + 0x3f0) = (iStack_2c != 0 || iStack_30 != 0) || iStack_34 != 0;
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_28) {
        return 1;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18 = sym.wcd938x_soc_codec_probe;
    _dev_info(*(iVar6 + 0x18),"%s()\n","wcd938x_soc_codec_probe");
    iVar12 = *(*(iVar6 + 0x18) + 0x98);
    if (iVar12 == 0) {
        return -0x16;
    }
    *(iVar12 + 0x10) = iVar6;
    snd_soc_component_init_regmap(iVar6,*(iVar12 + 0x20));
    devm_regmap_qti_debugfs_register(*(iVar12 + 0x30) + 0x48,*(iVar12 + 0x20));
    uVar4 = snd_soc_component_read(iVar6,0x34b0);
    *(iVar12 + 8) = uVar4 >> 1 & 0xf;
    iVar7 = devm_kmalloc(*(iVar6 + 0x18),0x78,0xdc0);
    *(iVar12 + 0x58) = iVar7;
    if (iVar7 == 0) {
        _dev_err(*(iVar6 + 0x18),"Failed to allocate fw_data\n");
        return -0xc;
    }
    puVar1 = iVar7 + 0x20;
    Hint_Prefetch(puVar1,2,0,1);
    do {
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
            *puVar1 = *puVar1 | 4;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    iVar5 = wcd_cal_create_hwdep(*(iVar12 + 0x58),1000,iVar6);
    if (iVar5 < 0) {
        uVar8 = *(iVar6 + 0x18);
        pcVar9 = "%s hwdep failed %d\n";
        iVar10 = iVar5;
        goto code_r0x0801b56c;
    }
    iVar5 = sym.wcd938x_mbhc_init(iVar12 + 0x100,iVar6,*(iVar12 + 0x58));
    if (iVar5 != 0) {
        _printk(0x8009140,"wcd938x_soc_codec_probe");
        *(iVar12 + 0x58) = 0;
        return iVar5;
    }
    iVar7 = iVar6 + 0xd0;
    snd_soc_dapm_ignore_suspend(iVar7,"WCD938X_AIF Playback");
    snd_soc_dapm_ignore_suspend(iVar7,"WCD938X_AIF Capture");
    snd_soc_dapm_ignore_suspend(iVar7,"AMIC1");
    snd_soc_dapm_ignore_suspend(iVar7,"AMIC2");
    snd_soc_dapm_ignore_suspend(iVar7,"AMIC3");
    snd_soc_dapm_ignore_suspend(iVar7,"AMIC4");
    snd_soc_dapm_ignore_suspend(iVar7,"AMIC5");
    snd_soc_dapm_ignore_suspend(iVar7,"AMIC6");
    snd_soc_dapm_ignore_suspend(iVar7,"AMIC7");
    snd_soc_dapm_ignore_suspend(iVar7,"VA AMIC1");
    snd_soc_dapm_ignore_suspend(iVar7,"VA AMIC2");
    snd_soc_dapm_ignore_suspend(iVar7,"VA AMIC3");
    snd_soc_dapm_ignore_suspend(iVar7,"VA AMIC4");
    snd_soc_dapm_ignore_suspend(iVar7,"VA AMIC5");
    snd_soc_dapm_ignore_suspend(iVar7,"VA AMIC6");
    snd_soc_dapm_ignore_suspend(iVar7,"VA AMIC7");
    snd_soc_dapm_ignore_suspend(iVar7,"WCD_TX_OUTPUT");
    snd_soc_dapm_ignore_suspend(iVar7,"IN1_HPHL");
    snd_soc_dapm_ignore_suspend(iVar7,"IN2_HPHR");
    snd_soc_dapm_ignore_suspend(iVar7,"IN3_AUX");
    snd_soc_dapm_ignore_suspend(iVar7,0x800911a);
    snd_soc_dapm_ignore_suspend(iVar7,0x800703a);
    snd_soc_dapm_ignore_suspend(iVar7,"HPHL");
    snd_soc_dapm_ignore_suspend(iVar7,"HPHR");
    snd_soc_dapm_ignore_suspend(iVar7,"WCD_TX_DUMMY");
    snd_soc_dapm_ignore_suspend(iVar7,"WCD_RX_DUMMY");
    snd_soc_dapm_sync(iVar7);
    wcd_cls_h_init(iVar12 + 0xe0);
    sym.wcd938x_init_reg(iVar6);
    iVar5 = snd_soc_add_component_controls(iVar6,obj.wcd9380_debug_snd_controls,1);
    if (-1 < iVar5) {
        iVar10 = *(iVar12 + 8);
        if (iVar10 == 0) {
            iVar5 = snd_soc_add_component_controls(iVar6,obj.wcd9380_snd_controls,6);
            if (iVar5 < 0) goto code_r0x0801b51c;
            iVar10 = *(iVar12 + 8);
        }
        if ((iVar10 != 5) || (iVar5 = snd_soc_add_component_controls(iVar6,obj.wcd9385_snd_controls,6), -1 < iVar5))
        {
            pcVar11 = *(iVar12 + 0xc40);
            *(iVar12 + 0xc50) = 1;
            *(iVar12 + 0xc18) = sym.wcd938x_event_notify.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt;
            if (pcVar11 == NULL) {
                return iVar5;
            }
            __cfi_slowpath_diag(0x3b795baa068bc3a6,pcVar11,0x8001ad0);
            iVar5 = (*pcVar11)(*(iVar12 + 0xc30),iVar12 + 0xc18,1);
            if (iVar5 == 0) {
                return 0;
            }
            _dev_err(*(iVar6 + 0x18),"%s: Failed to register notifier %d\n","wcd938x_soc_codec_probe",iVar5);
            return iVar5;
        }
    }
code_r0x0801b51c:
    uVar8 = *(iVar6 + 0x18);
    pcVar9 = "%s: Failed to add snd ctrls for variant: %d\n";
    iVar10 = *(iVar12 + 8);
code_r0x0801b56c:
    _dev_err(uVar8,pcVar9,"wcd938x_soc_codec_probe",iVar10);
    *(iVar12 + 0x58) = 0;
    return iVar5;
}


// ===== sym.wcd938x_soc_codec_probe @ 0x0801b1a4 (size 1072) =====

int sym.wcd938x_soc_codec_probe(int64_t arg1)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    uint32_t uVar4;
    int iVar5;
    int64_t iVar6;
    ulong uVar7;
    char *pcVar8;
    int iVar9;
    ulong *in_x18;
    code *pcVar10;
    int64_t iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _dev_info(*(arg1 + 0x18),"%s()\n","wcd938x_soc_codec_probe");
    iVar11 = *(*(arg1 + 0x18) + 0x98);
    if (iVar11 == 0) {
        return -0x16;
    }
    *(iVar11 + 0x10) = arg1;
    snd_soc_component_init_regmap(arg1,*(iVar11 + 0x20));
    devm_regmap_qti_debugfs_register(*(iVar11 + 0x30) + 0x48,*(iVar11 + 0x20));
    uVar4 = snd_soc_component_read(arg1,0x34b0);
    *(iVar11 + 8) = uVar4 >> 1 & 0xf;
    iVar6 = devm_kmalloc(*(arg1 + 0x18),0x78,0xdc0);
    *(iVar11 + 0x58) = iVar6;
    if (iVar6 == 0) {
        _dev_err(*(arg1 + 0x18),"Failed to allocate fw_data\n");
        return -0xc;
    }
    puVar1 = iVar6 + 0x20;
    Hint_Prefetch(puVar1,2,0,1);
    do {
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
            *puVar1 = *puVar1 | 4;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    iVar5 = wcd_cal_create_hwdep(*(iVar11 + 0x58),1000,arg1);
    if (iVar5 < 0) {
        uVar7 = *(arg1 + 0x18);
        pcVar8 = "%s hwdep failed %d\n";
        iVar9 = iVar5;
        goto code_r0x0801b56c;
    }
    iVar5 = sym.wcd938x_mbhc_init(iVar11 + 0x100,arg1,*(iVar11 + 0x58));
    if (iVar5 != 0) {
        _printk(0x8009140,"wcd938x_soc_codec_probe");
        *(iVar11 + 0x58) = 0;
        return iVar5;
    }
    iVar6 = arg1 + 0xd0;
    snd_soc_dapm_ignore_suspend(iVar6,"WCD938X_AIF Playback");
    snd_soc_dapm_ignore_suspend(iVar6,"WCD938X_AIF Capture");
    snd_soc_dapm_ignore_suspend(iVar6,"AMIC1");
    snd_soc_dapm_ignore_suspend(iVar6,"AMIC2");
    snd_soc_dapm_ignore_suspend(iVar6,"AMIC3");
    snd_soc_dapm_ignore_suspend(iVar6,"AMIC4");
    snd_soc_dapm_ignore_suspend(iVar6,"AMIC5");
    snd_soc_dapm_ignore_suspend(iVar6,"AMIC6");
    snd_soc_dapm_ignore_suspend(iVar6,"AMIC7");
    snd_soc_dapm_ignore_suspend(iVar6,"VA AMIC1");
    snd_soc_dapm_ignore_suspend(iVar6,"VA AMIC2");
    snd_soc_dapm_ignore_suspend(iVar6,"VA AMIC3");
    snd_soc_dapm_ignore_suspend(iVar6,"VA AMIC4");
    snd_soc_dapm_ignore_suspend(iVar6,"VA AMIC5");
    snd_soc_dapm_ignore_suspend(iVar6,"VA AMIC6");
    snd_soc_dapm_ignore_suspend(iVar6,"VA AMIC7");
    snd_soc_dapm_ignore_suspend(iVar6,"WCD_TX_OUTPUT");
    snd_soc_dapm_ignore_suspend(iVar6,"IN1_HPHL");
    snd_soc_dapm_ignore_suspend(iVar6,"IN2_HPHR");
    snd_soc_dapm_ignore_suspend(iVar6,"IN3_AUX");
    snd_soc_dapm_ignore_suspend(iVar6,0x800911a);
    snd_soc_dapm_ignore_suspend(iVar6,0x800703a);
    snd_soc_dapm_ignore_suspend(iVar6,"HPHL");
    snd_soc_dapm_ignore_suspend(iVar6,"HPHR");
    snd_soc_dapm_ignore_suspend(iVar6,"WCD_TX_DUMMY");
    snd_soc_dapm_ignore_suspend(iVar6,"WCD_RX_DUMMY");
    snd_soc_dapm_sync(iVar6);
    wcd_cls_h_init(iVar11 + 0xe0);
    sym.wcd938x_init_reg(arg1);
    iVar5 = snd_soc_add_component_controls(arg1,obj.wcd9380_debug_snd_controls,1);
    if (-1 < iVar5) {
        iVar9 = *(iVar11 + 8);
        if (iVar9 == 0) {
            iVar5 = snd_soc_add_component_controls(arg1,obj.wcd9380_snd_controls,6);
            if (iVar5 < 0) goto code_r0x0801b51c;
            iVar9 = *(iVar11 + 8);
        }
        if ((iVar9 != 5) || (iVar5 = snd_soc_add_component_controls(arg1,obj.wcd9385_snd_controls,6), -1 < iVar5)) {
            pcVar10 = *(iVar11 + 0xc40);
            *(iVar11 + 0xc50) = 1;
            *(iVar11 + 0xc18) = sym.wcd938x_event_notify.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt;
            if (pcVar10 == NULL) {
                return iVar5;
            }
            __cfi_slowpath_diag(0x3b795baa068bc3a6,pcVar10,0x8001ad0);
            iVar5 = (*pcVar10)(*(iVar11 + 0xc30),iVar11 + 0xc18,1);
            if (iVar5 == 0) {
                return 0;
            }
            _dev_err(*(arg1 + 0x18),"%s: Failed to register notifier %d\n","wcd938x_soc_codec_probe",iVar5);
            return iVar5;
        }
    }
code_r0x0801b51c:
    uVar7 = *(arg1 + 0x18);
    pcVar8 = "%s: Failed to add snd ctrls for variant: %d\n";
    iVar9 = *(iVar11 + 8);
code_r0x0801b56c:
    _dev_err(uVar7,pcVar8,"wcd938x_soc_codec_probe",iVar9);
    *(iVar11 + 0x58) = 0;
    return iVar5;
}


// ===== sym.wcd938x_soc_codec_remove @ 0x0801b5d4 (size 132) =====

void sym.wcd938x_soc_codec_remove(int64_t arg1)

{
    ulong *in_x18;
    code *pcVar1;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(arg1 + 0x18) + 0x98);
    if (iVar2 == 0) {
        _dev_err(*(arg1 + 0x18),"%s: wcd938x is already NULL\n","wcd938x_soc_codec_remove");
    }
    else {
        pcVar1 = *(iVar2 + 0xc40);
        if (pcVar1 != NULL) {
            __cfi_slowpath_diag(0x3b795baa068bc3a6,pcVar1,0x8001af0);
            (*pcVar1)(*(iVar2 + 0xc30),iVar2 + 0xc18,0);
        }
    }
    return;
}


// ===== sym.wcd938x_soc_codec_suspend @ 0x0801b658 (size 36) =====

ulong sym.wcd938x_soc_codec_suspend(int64_t arg1)

{
    int64_t iVar1;
    
    iVar1 = *(*(arg1 + 0x18) + 0x98);
    if (iVar1 != 0) {
        *(iVar1 + 0x124) = 1;
    }
    return 0;
}


// ===== sym.wcd938x_soc_codec_resume @ 0x0801b67c (size 32) =====

ulong sym.wcd938x_soc_codec_resume(int64_t arg1)

{
    int64_t iVar1;
    
    iVar1 = *(*(arg1 + 0x18) + 0x98);
    if (iVar1 != 0) {
        *(iVar1 + 0x124) = 0;
    }
    return 0;
}


// ===== sym.wcd938x_get_compander @ 0x0801b69c (size 52) =====

ulong sym.wcd938x_get_compander(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    iVar1 = 0x120;
    if (*(*(arg1 + 0x78) + 0x18) != 0) {
        iVar1 = 0x121;
    }
    *(arg2 + 0x48) = *(*(*(*(arg1 + 0x80) + 0x18) + 0x98) + iVar1);
    return 0;
}


// ===== sym.wcd938x_set_compander @ 0x0801b6d0 (size 60) =====

ulong sym.wcd938x_set_compander(int64_t arg1,int64_t arg2)

{
    bool bVar1;
    int64_t iVar2;
    
    bVar1 = *(arg2 + 0x48) != 0;
    iVar2 = *(*(*(arg1 + 0x80) + 0x18) + 0x98);
    if (*(*(arg1 + 0x78) + 0x18) == 0) {
        *(iVar2 + 0x120) = bVar1;
    }
    else {
        *(iVar2 + 0x121) = bVar1;
    }
    return 0;
}


// ===== sym.wcd938x_ldoh_get @ 0x0801b70c (size 36) =====

ulong sym.wcd938x_ldoh_get(int64_t arg1,int64_t arg2)

{
    *(arg2 + 0x48) = *(*(*(*(arg1 + 0x80) + 0x18) + 0x98) + 0x122);
    return 0;
}


// ===== sym.wcd938x_ldoh_put @ 0x0801b730 (size 44) =====

ulong sym.wcd938x_ldoh_put(int64_t arg1,int64_t arg2)

{
    *(*(*(*(arg1 + 0x80) + 0x18) + 0x98) + 0x122) = *(arg2 + 0x48) != 0;
    return 0;
}


// ===== sym.wcd938x_bcs_get @ 0x0801b75c (size 36) =====

ulong sym.wcd938x_bcs_get(int64_t arg1,int64_t arg2)

{
    *(arg2 + 0x48) = *(*(*(*(arg1 + 0x80) + 0x18) + 0x98) + 0x123);
    return 0;
}


// ===== sym.wcd938x_bcs_put @ 0x0801b780 (size 44) =====

ulong sym.wcd938x_bcs_put(int64_t arg1,int64_t arg2)

{
    *(*(*(*(arg1 + 0x80) + 0x18) + 0x98) + 0x123) = *(arg2 + 0x48) != 0;
    return 0;
}


// ===== sym.wcd938x_tx_master_ch_get @ 0x0801b7ac (size 184) =====

void sym.wcd938x_tx_master_ch_get(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    uint32_t uVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong unaff_x30;
    uchar auVar7 [16];
    uint32_t uStack_7c;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    uVar2 = 0xffffffea;
    uStack_2c = 0xffffffea;
    if (*(arg1 + 0x80) != 0) {
        iVar4 = *(*(*(arg1 + 0x80) + 0x18) + 0x98);
        if (iVar4 != 0) {
            sym.wcd938x_tx_get_slave_ch_type_idx(arg1 + 0x20,&uStack_2c);
            if (uStack_2c < 0xd) {
                uVar2 = 0;
                uVar3 = *(iVar4 + uStack_2c + 0xc79) - 0x2d;
                iVar4 = 0;
                if (uVar3 < 0xc) {
                    iVar4 = (uVar3 & 0xff) + 1;
                }
                *(arg2 + 0x48) = iVar4;
                goto code_r0x0801b834;
            }
        }
        uVar2 = 0xffffffea;
    }
code_r0x0801b834:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_28) {
        return;
    }
    auVar7 = __stack_chk_fail(uVar2);
    *extraout_x18 = sym.wcd938x_tx_master_ch_put;
    pcStack_68 = sym.wcd938x_tx_master_ch_put;
    iVar4 = sp_el0;
    iStack_78 = *(iVar4 + 0x5e0);
    iVar4 = *(auVar7._0_8_ + 0x80);
    uVar2 = 0xffffffea;
    uStack_7c = 0xffffffea;
    puStack_70 = &stack0xffffffffffffffe0;
    if (iVar4 != 0) {
        iVar6 = *(*(iVar4 + 0x18) + 0x98);
        if (iVar6 != 0) {
            sym.wcd938x_tx_get_slave_ch_type_idx(auVar7._0_8_ + 0x20,&uStack_7c);
            uVar5 = uStack_7c;
            if (uStack_7c < 0xd) {
                _dev_printk(0x800991b,*(iVar4 + 0x18),"%s: slave_ch_idx: %d","wcd938x_tx_master_ch_put",uVar5);
                _dev_printk(0x800991b,*(iVar4 + 0x18),"%s: ucontrol->value.enumerated.item[0] = %ld\n",
                            "wcd938x_tx_master_ch_put",*(auVar7._8_8_ + 0x48));
                uVar3 = *(auVar7._8_8_ + 0x48);
                if (uVar3 < 0xf) {
                    uVar2 = 0;
                    *(iVar6 + uVar5 + 0xc79) = *(obj.swr_master_ch_map + uVar3 * 4);
                    goto code_r0x0801b8d0;
                }
            }
        }
        uVar2 = 0xffffffea;
    }
code_r0x0801b8d0:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_78) {
        return;
    }
    auVar7 = __stack_chk_fail(uVar2);
    uVar2 = auVar7._0_8_;
    *extraout_x18_00 = sym.wcd938x_tx_get_slave_ch_type_idx;
    iVar4 = strnstr(uVar2,"ADC1",5);
    if (iVar4 == 0) {
        iVar4 = strnstr(uVar2,"ADC2",5);
        if (iVar4 == 0) {
            iVar4 = strnstr(uVar2,"ADC3",5);
            if (iVar4 == 0) {
                iVar4 = strnstr(uVar2,"ADC4",5);
                if (iVar4 == 0) {
                    iVar4 = strnstr(uVar2,"DMIC0",6);
                    if (iVar4 == 0) {
                        iVar4 = strnstr(uVar2,"DMIC1",6);
                        if (iVar4 == 0) {
                            iVar4 = strnstr(uVar2,"MBHC",5);
                            if (iVar4 == 0) {
                                iVar4 = strnstr(uVar2,"DMIC2",6);
                                if (iVar4 == 0) {
                                    iVar4 = strnstr(uVar2,"DMIC3",6);
                                    if (iVar4 == 0) {
                                        iVar4 = strnstr(uVar2,"DMIC4",6);
                                        if (iVar4 == 0) {
                                            iVar4 = strnstr(uVar2,"DMIC5",6);
                                            if (iVar4 == 0) {
                                                iVar4 = strnstr(uVar2,"DMIC6",6);
                                                if (iVar4 == 0) {
                                                    iVar4 = strnstr(uVar2,"DMIC7",6);
                                                    if (iVar4 == 0) {
                                                        iVar1 = ___ratelimit(obj.wcd938x_tx_get_slave_ch_type_idx._rs,
                                                                             "wcd938x_tx_get_slave_ch_type_idx");
                                                        if (iVar1 != 0) {
                                                            _printk(0x8005565,"wcd938x_tx_get_slave_ch_type_idx",uVar2
                                                                   );
                                                        }
                                                        uVar3 = 0xffffffea;
                                                        goto code_r0x0801bb3c;
                                                    }
                                                    iVar4 = 0xc;
                                                }
                                                else {
                                                    iVar4 = 0xb;
                                                }
                                            }
                                            else {
                                                iVar4 = 10;
                                            }
                                        }
                                        else {
                                            iVar4 = 9;
                                        }
                                    }
                                    else {
                                        iVar4 = 8;
                                    }
                                }
                                else {
                                    iVar4 = 7;
                                }
                            }
                            else {
                                iVar4 = 6;
                            }
                        }
                        else {
                            iVar4 = 5;
                        }
                    }
                    else {
                        iVar4 = 4;
                    }
                }
                else {
                    iVar4 = 3;
                }
            }
            else {
                iVar4 = 2;
            }
        }
        else {
            iVar4 = 1;
        }
    }
    else {
        iVar4 = 0;
    }
    uVar3 = *(iVar4 * 2 + 0x800ce01);
code_r0x0801bb3c:
    *auVar7._8_8_ = uVar3;
    return;
}


// ===== sym.wcd938x_tx_master_ch_put @ 0x0801b864 (size 276) =====

void sym.wcd938x_tx_master_ch_put(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    uint32_t uVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong unaff_x30;
    uchar auVar7 [16];
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_48 = *(iVar6 + 0x5e0);
    iVar6 = *(arg1 + 0x80);
    uVar2 = 0xffffffea;
    uStack_4c = 0xffffffea;
    if (iVar6 != 0) {
        iVar5 = *(*(iVar6 + 0x18) + 0x98);
        if (iVar5 != 0) {
            sym.wcd938x_tx_get_slave_ch_type_idx(arg1 + 0x20,&uStack_4c);
            uVar4 = uStack_4c;
            if (uStack_4c < 0xd) {
                _dev_printk(0x800991b,*(iVar6 + 0x18),"%s: slave_ch_idx: %d","wcd938x_tx_master_ch_put",uVar4);
                _dev_printk(0x800991b,*(iVar6 + 0x18),"%s: ucontrol->value.enumerated.item[0] = %ld\n",
                            "wcd938x_tx_master_ch_put",*(arg2 + 0x48));
                if (*(arg2 + 0x48) < 0xf) {
                    uVar2 = 0;
                    *(iVar5 + uVar4 + 0xc79) = *(obj.swr_master_ch_map + *(arg2 + 0x48) * 4);
                    goto code_r0x0801b8d0;
                }
            }
        }
        uVar2 = 0xffffffea;
    }
code_r0x0801b8d0:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_48) {
        return;
    }
    auVar7 = __stack_chk_fail(uVar2);
    uVar2 = auVar7._0_8_;
    *extraout_x18 = sym.wcd938x_tx_get_slave_ch_type_idx;
    iVar6 = strnstr(uVar2,"ADC1",5);
    if (iVar6 == 0) {
        iVar6 = strnstr(uVar2,"ADC2",5);
        if (iVar6 == 0) {
            iVar6 = strnstr(uVar2,"ADC3",5);
            if (iVar6 == 0) {
                iVar6 = strnstr(uVar2,"ADC4",5);
                if (iVar6 == 0) {
                    iVar6 = strnstr(uVar2,"DMIC0",6);
                    if (iVar6 == 0) {
                        iVar6 = strnstr(uVar2,"DMIC1",6);
                        if (iVar6 == 0) {
                            iVar6 = strnstr(uVar2,"MBHC",5);
                            if (iVar6 == 0) {
                                iVar6 = strnstr(uVar2,"DMIC2",6);
                                if (iVar6 == 0) {
                                    iVar6 = strnstr(uVar2,"DMIC3",6);
                                    if (iVar6 == 0) {
                                        iVar6 = strnstr(uVar2,"DMIC4",6);
                                        if (iVar6 == 0) {
                                            iVar6 = strnstr(uVar2,"DMIC5",6);
                                            if (iVar6 == 0) {
                                                iVar6 = strnstr(uVar2,"DMIC6",6);
                                                if (iVar6 == 0) {
                                                    iVar6 = strnstr(uVar2,"DMIC7",6);
                                                    if (iVar6 == 0) {
                                                        iVar1 = ___ratelimit(obj.wcd938x_tx_get_slave_ch_type_idx._rs,
                                                                             "wcd938x_tx_get_slave_ch_type_idx");
                                                        if (iVar1 != 0) {
                                                            _printk(0x8005565,"wcd938x_tx_get_slave_ch_type_idx",uVar2
                                                                   );
                                                        }
                                                        uVar3 = 0xffffffea;
                                                        goto code_r0x0801bb3c;
                                                    }
                                                    iVar6 = 0xc;
                                                }
                                                else {
                                                    iVar6 = 0xb;
                                                }
                                            }
                                            else {
                                                iVar6 = 10;
                                            }
                                        }
                                        else {
                                            iVar6 = 9;
                                        }
                                    }
                                    else {
                                        iVar6 = 8;
                                    }
                                }
                                else {
                                    iVar6 = 7;
                                }
                            }
                            else {
                                iVar6 = 6;
                            }
                        }
                        else {
                            iVar6 = 5;
                        }
                    }
                    else {
                        iVar6 = 4;
                    }
                }
                else {
                    iVar6 = 3;
                }
            }
            else {
                iVar6 = 2;
            }
        }
        else {
            iVar6 = 1;
        }
    }
    else {
        iVar6 = 0;
    }
    uVar3 = *(iVar6 * 2 + 0x800ce01);
code_r0x0801bb3c:
    *auVar7._8_8_ = uVar3;
    return;
}


// ===== sym.wcd938x_tx_get_slave_ch_type_idx @ 0x0801b978 (size 536) =====

void sym.wcd938x_tx_get_slave_ch_type_idx(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = strnstr(arg1,"ADC1",5);
    if (iVar2 == 0) {
        iVar2 = strnstr(arg1,"ADC2",5);
        if (iVar2 == 0) {
            iVar2 = strnstr(arg1,"ADC3",5);
            if (iVar2 == 0) {
                iVar2 = strnstr(arg1,"ADC4",5);
                if (iVar2 == 0) {
                    iVar2 = strnstr(arg1,"DMIC0",6);
                    if (iVar2 == 0) {
                        iVar2 = strnstr(arg1,"DMIC1",6);
                        if (iVar2 == 0) {
                            iVar2 = strnstr(arg1,"MBHC",5);
                            if (iVar2 == 0) {
                                iVar2 = strnstr(arg1,"DMIC2",6);
                                if (iVar2 == 0) {
                                    iVar2 = strnstr(arg1,"DMIC3",6);
                                    if (iVar2 == 0) {
                                        iVar2 = strnstr(arg1,"DMIC4",6);
                                        if (iVar2 == 0) {
                                            iVar2 = strnstr(arg1,"DMIC5",6);
                                            if (iVar2 == 0) {
                                                iVar2 = strnstr(arg1,"DMIC6",6);
                                                if (iVar2 == 0) {
                                                    iVar2 = strnstr(arg1,"DMIC7",6);
                                                    if (iVar2 == 0) {
                                                        iVar1 = ___ratelimit(obj.wcd938x_tx_get_slave_ch_type_idx._rs,
                                                                             "wcd938x_tx_get_slave_ch_type_idx");
                                                        if (iVar1 != 0) {
                                                            _printk(0x8005565,"wcd938x_tx_get_slave_ch_type_idx",arg1)
                                                            ;
                                                        }
                                                        uVar3 = 0xffffffea;
                                                        goto code_r0x0801bb3c;
                                                    }
                                                    iVar2 = 0xc;
                                                }
                                                else {
                                                    iVar2 = 0xb;
                                                }
                                            }
                                            else {
                                                iVar2 = 10;
                                            }
                                        }
                                        else {
                                            iVar2 = 9;
                                        }
                                    }
                                    else {
                                        iVar2 = 8;
                                    }
                                }
                                else {
                                    iVar2 = 7;
                                }
                            }
                            else {
                                iVar2 = 6;
                            }
                        }
                        else {
                            iVar2 = 5;
                        }
                    }
                    else {
                        iVar2 = 4;
                    }
                }
                else {
                    iVar2 = 3;
                }
            }
            else {
                iVar2 = 2;
            }
        }
        else {
            iVar2 = 1;
        }
    }
    else {
        iVar2 = 0;
    }
    uVar3 = *(iVar2 * 2 + 0x800ce01);
code_r0x0801bb3c:
    *arg2 = uVar3;
    return;
}


// ===== sym.wcd938x_codec_enable_adc @ 0x0801bb90 (size 964) =====

uint sym.wcd938x_codec_enable_adc(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint32_t uVar1;
    char cVar2;
    bool bVar3;
    bool bVar4;
    code *pcVar5;
    int iVar6;
    uint uVar7;
    int64_t iVar8;
    uint uVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    int iVar12;
    ulong *in_x18;
    int64_t arg1_00;
    int64_t iVar13;
    ulong unaff_x30;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_48 = *(iVar8 + 0x5e0);
    iVar8 = *(*(arg1 + 0x28) + -0xb8);
    arg1_00 = *(arg1 + 0x28) + -0xd0;
    iVar13 = *(iVar8 + 0x98);
    _dev_printk(0x800991b,iVar8,"%s wname: %s event: %d\n","wcd938x_codec_enable_adc",*(arg1 + 8),arg2 & 0xffffffff
               );
    uStack_4c = 0;
    iVar6 = swr_read(*(iVar13 + 0x30),*(*(iVar13 + 0x30) + 0x40),0x44,&uStack_4c,1);
    bVar3 = iVar6 != 0;
    bVar4 = (uStack_4c & 0x40) != 0;
    if (arg2 == 8) {
        uVar10 = *(iVar13 + 0x11c) - 1;
        *(iVar13 + 0x11c) = uVar10 & (uVar10 >> 0x1f ^ 0xffffffffU);
        sym.wcd938x_tx_connect_port(arg1_00,*(arg1 + 0x4c) + 0x1e,0,0);
        uVar7 = 0;
        if (*(arg1 + 0x4c) == '\x01') {
            if ((*(iVar13 + 0x160) >> 7 & 1) == 0) goto code_r0x0801bcd8;
            arg1 = iVar13 + 0x160;
            sym.wcd938x_tx_connect_port(arg1_00,0x1d,0,0);
            goto code_r0x0801bf30;
        }
        goto code_r0x0801beec;
    }
    uVar7 = 0;
    if (arg2 != 1) goto code_r0x0801beec;
    iVar6 = *(iVar13 + 0x11c) + 1;
    *(iVar13 + 0x11c) = iVar6;
    if (((*(iVar13 + 0x160) & 1) == 0) && ((*(iVar13 + 0x160) >> 9 & 1) == 0)) {
        uVar10 = 0;
        if ((*(iVar13 + 0x160) >> 1 & 1) != 0) goto code_r0x0801bd00;
code_r0x0801bcf8:
        if ((*(iVar13 + 0x160) >> 10 & 1) != 0) goto code_r0x0801bd00;
    }
    else {
        if (6 < *(iVar13 + 0x10c)) goto code_r0x0801bf24;
        uVar10 = obj.tx_mode_bit[*(iVar13 + 0x10c)];
        if ((*(iVar13 + 0x160) >> 1 & 1) == 0) goto code_r0x0801bcf8;
code_r0x0801bd00:
        if (6 < *(iVar13 + 0x110)) goto code_r0x0801bf24;
        uVar10 = uVar10 | obj.tx_mode_bit[*(iVar13 + 0x110)];
    }
    if (((*(iVar13 + 0x160) >> 2 & 1) != 0) || ((*(iVar13 + 0x160) >> 0xb & 1) != 0)) {
        if (6 < *(iVar13 + 0x114)) goto code_r0x0801bf24;
        uVar10 = uVar10 | obj.tx_mode_bit[*(iVar13 + 0x114)];
    }
    if (((*(iVar13 + 0x160) >> 3 & 1) != 0) || ((*(iVar13 + 0x160) >> 0xc & 1) != 0)) {
        if (6 < *(iVar13 + 0x118)) {
code_r0x0801bf24:
    //WARNING: Does not return
            pcVar5 = SoftwareBreakpoint(0x5512,0x801bf28);
            (*pcVar5)();
        }
        uVar10 = uVar10 | obj.tx_mode_bit[*(iVar13 + 0x118)];
    }
    if (uVar10 == 0) {
        iVar12 = 9600000;
    }
    else {
        iVar12 = 9600000;
        if ((uVar10 & 7) == 0) {
            if ((uVar10 >> 3 & 1) == 0) {
                iVar12 = 600000;
                if ((uVar10 & 0x10) != 0) {
                    iVar12 = 1200000;
                }
            }
            else {
                iVar12 = 4800000;
            }
        }
    }
    iVar12 = iVar12 * iVar6;
    if (9599999 < iVar12) {
        iVar12 = 9600000;
    }
    if (iVar12 < 2400000) {
        if (iVar12 == 600000) {
            uVar10 = 6;
            uVar11 = 0x60;
code_r0x0801be98:
            uVar1 = uVar11;
            if (bVar3 || bVar4) {
                uVar1 = uVar10;
            }
            uVar7 = 0xf0;
            if (bVar3 || bVar4) {
                uVar7 = 0xf;
                uVar10 = uVar11;
            }
            goto code_r0x0801beb4;
        }
        if (iVar12 == 1200000) {
            uVar10 = 5;
            uVar11 = 0x50;
            goto code_r0x0801be98;
        }
code_r0x0801be40:
        uVar7 = 0xf0;
        if (bVar3 || bVar4) {
            uVar7 = 0xf;
        }
        snd_soc_component_update_bits(arg1_00,0x3405,uVar7,0);
        uVar7 = swr_slvdev_datapath_control(*(iVar13 + 0x30),*(*(iVar13 + 0x30) + 0x40),1);
        arg1 = 0;
    }
    else {
        if (iVar12 == 2400000) {
            uVar10 = 3;
            uVar11 = 0x30;
            goto code_r0x0801be98;
        }
        if (iVar12 != 4800000) goto code_r0x0801be40;
        uVar1 = 0x10;
        if (bVar3 || bVar4) {
            uVar1 = 1;
        }
        uVar7 = 0xf0;
        if (bVar3 || bVar4) {
            uVar7 = 0xf;
            uVar10 = 0x10;
        }
        else {
            uVar10 = 1;
        }
code_r0x0801beb4:
        arg1 = uVar10;
        snd_soc_component_update_bits(arg1_00,0x3405,uVar7,uVar1);
        uVar7 = swr_slvdev_datapath_control(*(iVar13 + 0x30),*(*(iVar13 + 0x30) + 0x40),1);
    }
    uVar9 = 0xf;
    if (bVar3 || bVar4) {
        uVar9 = 0xf0;
    }
    snd_soc_component_update_bits(arg1_00,0x3405,uVar9,arg1);
code_r0x0801beec:
    while (iVar8 = sp_el0, *(iVar8 + 0x5e0) != iStack_48) {
        __stack_chk_fail();
code_r0x0801bf30:
        Hint_Prefetch(arg1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(arg1,0x10);
            if (bVar3) {
                *arg1 = *arg1 & 0xffffffffffffff7f;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
code_r0x0801bcd8:
        uVar7 = 0;
    }
    return uVar7;
}


// ===== sym.wcd938x_codec_enable_dmic @ 0x0801bf54 (size 684) =====

ulong sym.wcd938x_codec_enable_dmic(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint8_t uVar1;
    int iVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t iVar5;
    int iVar6;
    ulong *in_x18;
    int64_t arg1_00;
    ulong uVar7;
    ulong uVar8;
    int64_t iVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0x28);
    iVar9 = *(*(iVar4 + -0xb8) + 0x98);
    arg1_00 = iVar4 + -0xd0;
    _dev_printk(0x800991b,*(iVar4 + -0xb8),"%s wname: %s event: %d\n","wcd938x_codec_enable_dmic",*(arg1 + 8),
                arg2 & 0xffffffffU);
    uVar1 = *(arg1 + 0x4c);
    if (uVar1 < 8) {
        iVar6 = 0;
        uVar11 = 0;
        uVar10 = 0;
        uVar7 = 0xf;
        uVar3 = 0x345c;
    //switch table (7 cases) at 0x8001b38
        uVar8 = 0x3462;
        iVar5 = 200;
        iVar2 = 0;
        switch(*(uVar1 + 0x8001b38) * 4 + 0x801c018) {
        case 0x801c01c:
            uVar10 = 0;
            uVar7 = 0xf;
            uVar11 = 2;
            uVar3 = 0x345e;
            uVar8 = 0x3463;
            iVar5 = 0xd0;
            iVar2 = 0;
            break;
        case 0x801c040:
            uVar7 = 0xf0;
            uVar10 = 4;
            uVar11 = 3;
            uVar3 = 0x345f;
            uVar8 = 0x3463;
            iVar5 = 0xd4;
            iVar2 = 0;
            break;
        case 0x801c084:
            iVar6 = 0x345d;
        case 0x801c08c:
            uVar7 = 0xf0;
            uVar10 = 4;
            uVar11 = 1;
            uVar3 = 0x345d;
            uVar8 = 0x3462;
            iVar5 = 0xcc;
            iVar2 = iVar6;
        }
        _dev_printk(0x800991b,*(iVar4 + -0xb8),"%s: event %d DMIC%d dmic_clk_cnt %d\n","wcd938x_codec_enable_dmic",
                    arg2 & 0xffffffffU,uVar1 + 1,*(iVar9 + iVar5));
        if (arg2 == 8) {
            sym.wcd938x_tx_connect_port(arg1_00,*(arg1 + 0x4c) + 0x22,0,0);
            snd_soc_component_update_bits(arg1_00,0x345a,1 << uVar11,1 << uVar11);
            if (iVar2 != 0) {
                snd_soc_component_update_bits(arg1_00,iVar2,0x80,0);
            }
            snd_soc_component_update_bits(arg1_00,uVar3,8,0);
        }
        else if (arg2 == 1) {
            snd_soc_component_update_bits(arg1_00,0x345a,1 << uVar11,0);
            usleep_range_state(0xfa,0x104,2);
            if (iVar2 != 0) {
                snd_soc_component_update_bits(arg1_00,iVar2,0x80,0x80);
            }
            snd_soc_component_update_bits(arg1_00,uVar8,uVar7,3 << uVar10);
            snd_soc_component_update_bits(arg1_00,uVar3,8,8);
            snd_soc_component_update_bits(arg1_00,0x345b,6,6);
            iVar4 = *(iVar9 + 0x30);
            uVar3 = swr_slvdev_datapath_control(iVar4,*(iVar4 + 0x40),1);
            return uVar3;
        }
        uVar3 = 0;
    }
    else {
        iVar2 = ___ratelimit(obj.wcd938x_codec_enable_dmic._rs,"wcd938x_codec_enable_dmic");
        if (iVar2 == 0) {
            uVar3 = 0xffffffea;
        }
        else {
            _dev_err(*(iVar4 + -0xb8),"%s: Invalid DMIC Selection\n","wcd938x_codec_enable_dmic");
            uVar3 = 0xffffffea;
        }
    }
    return uVar3;
}


// ===== sym.wcd938x_enable_req @ 0x0801c200 (size 1020) =====

uint sym.wcd938x_enable_req(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint8_t uVar1;
    code *pcVar2;
    int iVar3;
    int64_t iVar4;
    ulong uVar5;
    ulong uVar6;
    uint32_t uVar7;
    ulong *in_x18;
    int64_t iVar8;
    uint64_t uVar9;
    uint uVar10;
    int64_t iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(*(arg1 + 0x28) + -0xb8);
    iVar11 = *(iVar4 + 0x98);
    iVar8 = *(arg1 + 0x28) + -0xd0;
    _dev_printk(0x800991b,iVar4,"%s wname: %s event: %d\n","wcd938x_enable_req",*(arg1 + 8),arg2 & 0xffffffff);
    if (arg2 == 8) {
        if (*(arg1 + 0x4c) < 4) {
    //switch table (4 cases) at 0x8001b40
            switch(*(*(arg1 + 0x4c) + 0x8001b40) * 4 + 0x801c31c) {
            case 0x801c320:
                snd_soc_component_update_bits(iVar8,0x3410,0xf,0);
                uVar5 = 0x10;
                break;
            case 0x801c3f8:
                snd_soc_component_update_bits(iVar8,0x3410,0xf0,0);
                uVar5 = 0x20;
                break;
            case 0x801c418:
                snd_soc_component_update_bits(iVar8,0x3411,0xf,0);
                uVar5 = 0x40;
                break;
            case 0x801c438:
                snd_soc_component_update_bits(iVar8,0x3411,0xf0,0);
                uVar5 = 0x80;
            }
            snd_soc_component_update_bits(iVar8,0x3409,uVar5,0);
        }
        if (*(iVar11 + 0x11c) == 0) {
            snd_soc_component_update_bits(iVar8,0x3408,0x10,0);
            snd_soc_component_update_bits(iVar8,0x3408,8,0);
        }
    }
    else if (arg2 == 1) {
        snd_soc_component_update_bits(iVar8,0x3408,8,8);
        snd_soc_component_update_bits(iVar8,0x3408,0x10,0x10);
        snd_soc_component_update_bits(iVar8,0x3457,2,2);
        snd_soc_component_update_bits(iVar8,0x3457,1,0);
        uVar1 = *(arg1 + 0x4c);
        if (uVar1 < 4) {
            snd_soc_component_update_bits(iVar8,*(L"@" + uVar1 * 2 + 8),*(L"@" + uVar1 * 2),*(L"@" + uVar1 * 2));
            uVar10 = 0;
        }
        else {
            iVar3 = ___ratelimit(obj.wcd938x_tx_channel_config._rs,"wcd938x_tx_channel_config");
            if (iVar3 != 0) {
                _printk(0x800902c,"wcd938x_tx_channel_config",uVar1);
            }
            uVar10 = 0xffffffea;
        }
        if (3 < *(arg1 + 0x4c)) {
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x5512,0x801c5fc);
            (*pcVar2)();
        }
        uVar7 = *(iVar11 + *(arg1 + 0x4c) * 4 + 0x10c);
        if (uVar7 < 7) {
            uVar7 = *(uVar7 * 4 + 0x80179b4);
        }
        else {
            iVar3 = ___ratelimit(obj.wcd938x_get_adc_mode._rs,"wcd938x_get_adc_mode");
            if (iVar3 != 0) {
                _printk(0x8003106,"wcd938x_get_adc_mode",uVar7);
            }
            uVar7 = 0xffffffea;
        }
        uVar9 = *(arg1 + 0x4c);
        if (*(arg1 + 0x4c) < 4) {
    //switch table (4 cases) at 0x8001b44
            switch(*(uVar9 + 0x8001b44) * 4 + 0x801c3c4) {
            case 0x801c3c8:
                snd_soc_component_update_bits(iVar8,0x3410,0xf,uVar7 & 0xef);
                uVar5 = 0x10;
                uVar6 = 0x10;
                break;
            case 0x801c4b4:
                snd_soc_component_update_bits(iVar8,0x3410,0xf0,(uVar7 & 0xef) << 4);
                uVar5 = 0x20;
                uVar6 = 0x20;
                break;
            case 0x801c4e4:
                snd_soc_component_update_bits(iVar8,0x3411,0xf,uVar7 & 0xef);
                uVar5 = 0x40;
                uVar6 = 0x40;
                break;
            case 0x801c514:
                snd_soc_component_update_bits(iVar8,0x3411,0xf0,(uVar7 & 0xef) << 4);
                uVar5 = 0x80;
                uVar6 = 0x80;
            }
            snd_soc_component_update_bits(iVar8,0x3409,uVar5,uVar6);
            uVar9 = *(arg1 + 0x4c);
        }
        if (uVar9 < 4) {
            uVar9 = -(uVar9 >> 7) & 0xfffffffffffffc00 | uVar9 << 2;
            snd_soc_component_update_bits(iVar8,*(L"@" + uVar9 + 0x10),*(L"@" + uVar9),0);
            return uVar10;
        }
        iVar3 = ___ratelimit(obj.wcd938x_tx_channel_config._rs,"wcd938x_tx_channel_config");
        if (iVar3 != 0) {
            _printk(0x800902c,"wcd938x_tx_channel_config",uVar9);
        }
        return 0xffffffea;
    }
    return 0;
}


// ===== sym.wcd938x_tx_swr_ctrl @ 0x0801c5fc (size 1832) =====

uint sym.wcd938x_tx_swr_ctrl(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    char cVar1;
    bool bVar2;
    bool bVar3;
    bool bVar4;
    code *pcVar5;
    int iVar6;
    uint32_t uVar7;
    uint uVar8;
    int64_t iVar9;
    uint uVar10;
    uint uVar11;
    uint64_t uVar12;
    uint64_t *extraout_x8;
    uint64_t *puVar13;
    uint64_t uVar14;
    uint64_t extraout_x9;
    ulong *in_x18;
    int64_t iVar15;
    uint32_t uVar16;
    int64_t iVar17;
    ulong unaff_x30;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_48 = *(iVar9 + 0x5e0);
    iVar15 = *(arg1 + 0x28);
    uStack_4c = 0;
    iVar17 = *(*(iVar15 + -0xb8) + 0x98);
    iVar6 = swr_read(*(iVar17 + 0x30),*(*(iVar17 + 0x30) + 0x40),0x44,&uStack_4c,1);
    bVar3 = iVar6 != 0;
    bVar4 = (uStack_4c & 0x40) != 0;
    iVar9 = strnstr(*(arg1 + 8),0x8008174,4);
    if (iVar9 == 0) {
        uVar16 = 0;
    }
    else {
        uVar12 = *(arg1 + 0x4c) - 0x1e;
        if (3 < uVar12) goto code_r0x0801cb94;
        uVar16 = *(iVar17 + uVar12 * 4 + 0x10c) - 4;
        if (uVar16 < 3) {
            uVar16 = *(uVar16 * 4 + 0x80179d0);
        }
        else {
            uVar16 = 9600000;
        }
    }
    iVar15 = iVar15 + -0xd0;
    if (arg2 != 8) {
        if (arg2 == 1) {
            if (((*(arg1 + 0x4c) == '\x1f') && (uVar7 = snd_soc_component_read(iVar15,0x3127), (uVar7 >> 7 & 1) == 0))
               && (*(iVar17 + 0x123) == '\0')) {
                sym.wcd938x_tx_connect_port(iVar15,0x1d,4800000,1);
                puVar13 = iVar17 + 0x160;
                Hint_Prefetch(puVar13,2,0,1);
                do {
                    cVar1 = '\x01';
                    bVar3 = ExclusiveMonitorPass(puVar13,0x10);
                    if (bVar3) {
                        *puVar13 = *puVar13 | 0x80;
                        cVar1 = ExclusiveMonitorsStatus();
                    }
                } while (cVar1 != '\0');
            }
            iVar9 = strnstr(*(arg1 + 8),0x8008174,4);
            uVar12 = *(arg1 + 0x4c);
            if (iVar9 == 0) {
                uVar7 = 2400000;
                goto code_r0x0801c7e8;
            }
            uVar14 = 1L << (uVar12 - 0x1e & 0x3f);
            puVar13 = iVar17 + (uVar12 - 0x1e >> 6 & 0x3ffffff) * 8 + 0x160;
            goto code_r0x0801cba0;
        }
        uVar8 = 0;
        goto code_r0x0801cb5c;
    }
    iVar9 = strnstr(*(arg1 + 8),0x8008174,4);
    if (iVar9 != 0) {
        iVar9 = strnstr(*(arg1 + 8),"ADC1",5);
        if (iVar9 == 0) {
            iVar9 = strnstr(*(arg1 + 8),"ADC2",5);
            if (iVar9 == 0) {
                iVar9 = strnstr(*(arg1 + 8),"ADC3",5);
                if (iVar9 == 0) {
                    iVar9 = strnstr(*(arg1 + 8),"ADC4",5);
                    if (iVar9 != 0) {
                        puVar13 = iVar17 + 0x160;
                        Hint_Prefetch(puVar13,2,0,1);
                        do {
                            cVar1 = '\x01';
                            bVar2 = ExclusiveMonitorPass(puVar13,0x10);
                            if (bVar2) {
                                *puVar13 = *puVar13 & 0xfffffffffffffff7;
                                cVar1 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar1 != '\0');
                        Hint_Prefetch(puVar13,2,0,1);
                        do {
                            cVar1 = '\x01';
                            bVar2 = ExclusiveMonitorPass(puVar13,0x10);
                            if (bVar2) {
                                *puVar13 = *puVar13 & 0xffffffffffffefff;
                                cVar1 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar1 != '\0');
                    }
                }
                else {
                    puVar13 = iVar17 + 0x160;
                    Hint_Prefetch(puVar13,2,0,1);
                    do {
                        cVar1 = '\x01';
                        bVar2 = ExclusiveMonitorPass(puVar13,0x10);
                        if (bVar2) {
                            *puVar13 = *puVar13 & 0xfffffffffffffffb;
                            cVar1 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar1 != '\0');
                    Hint_Prefetch(puVar13,2,0,1);
                    do {
                        cVar1 = '\x01';
                        bVar2 = ExclusiveMonitorPass(puVar13,0x10);
                        if (bVar2) {
                            *puVar13 = *puVar13 & 0xfffffffffffff7ff;
                            cVar1 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar1 != '\0');
                }
            }
            else {
                puVar13 = iVar17 + 0x160;
                Hint_Prefetch(puVar13,2,0,1);
                do {
                    cVar1 = '\x01';
                    bVar2 = ExclusiveMonitorPass(puVar13,0x10);
                    if (bVar2) {
                        *puVar13 = *puVar13 & 0xfffffffffffffffd;
                        cVar1 = ExclusiveMonitorsStatus();
                    }
                } while (cVar1 != '\0');
                Hint_Prefetch(puVar13,2,0,1);
                do {
                    cVar1 = '\x01';
                    bVar2 = ExclusiveMonitorPass(puVar13,0x10);
                    if (bVar2) {
                        *puVar13 = *puVar13 & 0xfffffffffffffbff;
                        cVar1 = ExclusiveMonitorsStatus();
                    }
                } while (cVar1 != '\0');
            }
        }
        else {
            puVar13 = iVar17 + 0x160;
            Hint_Prefetch(puVar13,2,0,1);
            do {
                cVar1 = '\x01';
                bVar2 = ExclusiveMonitorPass(puVar13,0x10);
                if (bVar2) {
                    *puVar13 = *puVar13 & 0xfffffffffffffffe;
                    cVar1 = ExclusiveMonitorsStatus();
                }
            } while (cVar1 != '\0');
            Hint_Prefetch(puVar13,2,0,1);
            do {
                cVar1 = '\x01';
                bVar2 = ExclusiveMonitorPass(puVar13,0x10);
                if (bVar2) {
                    *puVar13 = *puVar13 & 0xfffffffffffffdff;
                    cVar1 = ExclusiveMonitorsStatus();
                }
            } while (cVar1 != '\0');
        }
    }
    iVar9 = strnstr(*(arg1 + 8),0x8008174,4);
    if (iVar9 != 0) {
        if (((*(iVar17 + 0x160) & 1) == 0) && ((*(iVar17 + 0x160) >> 9 & 1) == 0)) {
            uVar7 = 0;
            if ((*(iVar17 + 0x160) >> 1 & 1) != 0) goto code_r0x0801c914;
code_r0x0801c90c:
            if ((*(iVar17 + 0x160) >> 10 & 1) != 0) goto code_r0x0801c914;
        }
        else {
            if (6 < *(iVar17 + 0x10c)) goto code_r0x0801cb94;
            uVar7 = obj.tx_mode_bit[*(iVar17 + 0x10c)];
            if ((*(iVar17 + 0x160) >> 1 & 1) == 0) goto code_r0x0801c90c;
code_r0x0801c914:
            if (6 < *(iVar17 + 0x110)) goto code_r0x0801cb94;
            uVar7 = obj.tx_mode_bit[*(iVar17 + 0x110)] | uVar7;
        }
        if (((*(iVar17 + 0x160) >> 2 & 1) != 0) || ((*(iVar17 + 0x160) >> 0xb & 1) != 0)) {
            if (6 < *(iVar17 + 0x114)) goto code_r0x0801cb94;
            uVar7 = obj.tx_mode_bit[*(iVar17 + 0x114)] | uVar7;
        }
        if (((*(iVar17 + 0x160) >> 3 & 1) != 0) || ((*(iVar17 + 0x160) >> 0xc & 1) != 0)) {
            if (6 < *(iVar17 + 0x118)) {
code_r0x0801cb94:
    //WARNING: Does not return
                pcVar5 = SoftwareBreakpoint(0x5512,0x801cb98);
                (*pcVar5)();
            }
            uVar7 = obj.tx_mode_bit[*(iVar17 + 0x118)] | uVar7;
        }
        uVar16 = 9600000;
        if ((((uVar7 != 0) && ((uVar7 & 1) == 0)) && ((uVar7 >> 1 & 1) == 0)) &&
           (uVar16 = 9600000, (uVar7 >> 2 & 1) == 0)) {
            if ((uVar7 >> 3 & 1) == 0) {
                uVar16 = 600000;
                if ((uVar7 & 0x10) != 0) {
                    uVar16 = 1200000;
                }
            }
            else {
                uVar16 = 4800000;
            }
        }
        uVar7 = *(iVar17 + 0x11c) * uVar16;
        if (9599999 < uVar7) {
            uVar7 = 9600000;
        }
        if (*(iVar17 + 0x11c) != 0) {
            uVar16 = uVar7;
        }
        uVar8 = 0;
        if (uVar16 < 2400000) {
            if (uVar16 == 600000) {
                uVar10 = 6;
                uVar8 = 0x60;
            }
            else {
                if (uVar16 != 1200000) goto code_r0x0801ca64;
                uVar10 = 5;
                uVar8 = 0x50;
            }
code_r0x0801ca60:
            if (bVar3 || bVar4) {
                uVar8 = uVar10;
            }
        }
        else {
            if (uVar16 == 2400000) {
                uVar10 = 3;
                uVar8 = 0x30;
                goto code_r0x0801ca60;
            }
            if ((uVar16 == 4800000) && (uVar8 = 0x10, bVar3 || bVar4)) {
                uVar8 = 1;
            }
        }
code_r0x0801ca64:
        uVar10 = 0xf0;
        if (bVar3 || bVar4) {
            uVar10 = 0xf;
        }
        snd_soc_component_update_bits(iVar15,0x3405,uVar10,uVar8);
    }
    uVar8 = swr_slvdev_datapath_control(*(iVar17 + 0x30),*(*(iVar17 + 0x30) + 0x40),0);
    iVar9 = strnstr(*(arg1 + 8),0x8008174,4);
    if (iVar9 == 0) goto code_r0x0801cb5c;
    uVar10 = 0;
    if (uVar16 < 2400000) {
        if (uVar16 == 600000) {
            uVar11 = 0x60;
            uVar10 = 6;
        }
        else {
            if (uVar16 != 1200000) goto code_r0x0801cb40;
            uVar11 = 0x50;
            uVar10 = 5;
        }
code_r0x0801cb3c:
        if (bVar3 || bVar4) {
            uVar10 = uVar11;
        }
    }
    else {
        if (uVar16 == 2400000) {
            uVar11 = 0x30;
            uVar10 = 3;
            goto code_r0x0801cb3c;
        }
        if ((uVar16 == 4800000) && (uVar10 = 0x10, !bVar3 && !bVar4)) {
            uVar10 = 1;
        }
    }
code_r0x0801cb40:
    uVar11 = 0xf;
    if (bVar3 || bVar4) {
        uVar11 = 0xf0;
    }
    snd_soc_component_update_bits(iVar15,0x3405,uVar11,uVar10);
code_r0x0801cb5c:
    while (iVar9 = sp_el0, *(iVar9 + 0x5e0) != iStack_48) {
        __stack_chk_fail();
        puVar13 = extraout_x8;
        uVar14 = extraout_x9;
code_r0x0801cba0:
        Hint_Prefetch(puVar13,2,0,1);
        do {
            cVar1 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar13,0x10);
            if (bVar3) {
                *puVar13 = *puVar13 | uVar14;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        uVar12 = *(arg1 + 0x4c);
        uVar7 = uVar16;
code_r0x0801c7e8:
        sym.wcd938x_tx_connect_port(iVar15,uVar12,uVar7,1);
        uVar8 = 0;
    }
    return uVar8;
}


// ===== sym.wcd938x_codec_enable_micbias @ 0x0801cd24 (size 40) =====

void sym.wcd938x_codec_enable_micbias(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__wcd938x_codec_enable_micbias(arg1,arg2 & 0xffffffff);
    return;
}


// ===== sym.wcd938x_codec_force_enable_micbias @ 0x0801cd4c (size 136) =====

uint sym.wcd938x_codec_force_enable_micbias(int64_t arg1,uchar noname_1 [16],uint32_t arg2)

{
    uint uVar1;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(*(*(arg1 + 0x28) + -0xb8) + 0x98);
    if ((arg2 == 1) || (arg2 == 8)) {
        sym.wcd938x_wakeup(arg1_00,1);
        uVar1 = sym.__wcd938x_codec_enable_micbias(arg1,arg2);
        sym.wcd938x_wakeup(arg1_00,0);
    }
    else {
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.wcd938x_codec_enable_vdd_buck @ 0x0801cdd4 (size 552) =====

ulong sym.wcd938x_codec_enable_vdd_buck(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    uint64_t uVar5;
    ulong uVar6;
    char *pcVar7;
    ulong *in_x18;
    int64_t iVar8;
    int64_t *piVar9;
    int64_t iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = *(arg1 + 0x28);
    piVar9 = *(*(iVar8 + -0xb8) + 0x98);
    iVar10 = *(*piVar9 + 0x90);
    if (iVar10 == 0) {
        iVar4 = ___ratelimit(obj.wcd938x_codec_enable_vdd_buck._rs,"wcd938x_codec_enable_vdd_buck");
        if (iVar4 != 0) {
            uVar6 = *(iVar8 + -0xb8);
            pcVar7 = "%s: pdata is NULL\n";
code_r0x0801cf08:
            _dev_err(uVar6,pcVar7,"wcd938x_codec_enable_vdd_buck");
        }
code_r0x0801ce4c:
        uVar6 = 0xffffffea;
    }
    else {
        uVar5 = msm_cdc_is_ondemand_supply(*piVar9,piVar9[0x182],*(iVar10 + 0x38),*(iVar10 + 0x40),"cdc-vdd-buck");
        if ((uVar5 & 1) != 0) {
            _dev_printk(0x800991b,*(iVar8 + -0xb8),"%s wname: %s event: %d\n","wcd938x_codec_enable_vdd_buck",
                        *(arg1 + 8),arg2 & 0xffffffff);
            if (arg2 == 8) {
                puVar1 = piVar9 + 0x2c;
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar3) {
                        *puVar1 = *puVar1 | 0x10;
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
            }
            else if (arg2 == 1) {
                puVar1 = piVar9 + 0x2c;
                if ((piVar9[0x2c] >> 4 & 1) == 0) {
                    iVar4 = msm_cdc_enable_ondemand_supply
                                      (*piVar9,piVar9[0x182],*(iVar10 + 0x38),*(iVar10 + 0x40),"cdc-vdd-buck");
                    if (iVar4 == -0x16) {
                        iVar4 = ___ratelimit(obj.wcd938x_codec_enable_vdd_buck._rs.315,"wcd938x_codec_enable_vdd_buck")
                        ;
                        if (iVar4 != 0) {
                            uVar6 = *(iVar8 + -0xb8);
                            pcVar7 = "%s: vdd buck is not enabled\n";
                            goto code_r0x0801cf08;
                        }
                        goto code_r0x0801ce4c;
                    }
                    Hint_Prefetch(puVar1,2,0,1);
                    do {
                        cVar2 = '\x01';
                        bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar3) {
                            *puVar1 = *puVar1 & 0xffffffffffffffef;
                            cVar2 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar2 != '\0');
                    usleep_range_state(200,0xfa,2);
                }
                else {
                    _dev_printk(0x800991b,*(iVar8 + -0xb8),"%s: buck already in enabled state\n",
                                "wcd938x_codec_enable_vdd_buck");
                    Hint_Prefetch(puVar1,2,0,1);
                    do {
                        cVar2 = '\x01';
                        bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar3) {
                            *puVar1 = *puVar1 & 0xffffffffffffffef;
                            cVar2 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar2 != '\0');
                }
            }
        }
        uVar6 = 0;
    }
    return uVar6;
}


// ===== sym.wcd938x_enable_clsh @ 0x0801cffc (size 336) =====

uint64_t sym.wcd938x_enable_clsh(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    char *arg3;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar8;
    int64_t iVar9;
    int64_t iVar10;
    int64_t iVar11;
    int64_t iVar12;
    ulong unaff_x30;
    uchar auStack_48 [4];
    uchar auStack_44 [4];
    uchar auStack_40 [4];
    char acStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_38 = *(iVar9 + 0x5e0);
    arg3 = "%s wname: %s event: %d\n";
    iVar10 = *(arg1 + 0x28);
    iVar9 = *(*(iVar10 + -0xb8) + 0x98);
    uVar6 = *(iVar9 + 0x108);
    _dev_printk(0x800991b,*(iVar10 + -0xb8),"%s wname: %s event: %d\n","wcd938x_enable_clsh",*(arg1 + 8),
                arg2 & 0xffffffff);
    if (uVar6 < 6 && (1 << (uVar6 & 0x1f) & 0x36U) != 0) {
        arg3 = acStack_3c;
        acStack_3c[0] = '\0';
        auStack_40[0] = 0;
        iVar11 = *(*(iVar10 + -0xb8) + 0x98);
        auStack_44[0] = 0;
        auStack_48[0] = 0;
        iVar4 = sym.wcd938x_set_port_params(iVar10 + -0xd0,0x12,arg3,auStack_40);
        if (iVar4 != 0) goto code_r0x0801d0e4;
        if ((arg2 & 3U) != 0) {
            arg3 = 0x1;
            swr_connect_port();
            goto code_r0x0801d0e4;
        }
        arg3 = 0x1;
        swr_disconnect_port(*(iVar11 + 0x28),acStack_3c,1,auStack_44,auStack_48);
        if ((arg2 & 0xcU) == 0) goto code_r0x0801d114;
code_r0x0801d0ec:
        iVar9 = *(iVar9 + 0x28);
        arg3 = NULL;
        uVar7 = swr_slvdev_datapath_control(iVar9,*(iVar9 + 0x40));
    }
    else {
code_r0x0801d0e4:
        if ((arg2 & 0xcU) != 0) goto code_r0x0801d0ec;
code_r0x0801d114:
        uVar7 = 0;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_38) {
        return uVar7;
    }
    iVar9 = __stack_chk_fail(uVar7);
    *extraout_x18 = sym.wcd938x_codec_enable_ear_pa;
    iVar11 = *(iVar9 + 0x28);
    iVar10 = *(iVar11 + -0xb8);
    iVar12 = *(iVar10 + 0x98);
    uVar6 = *(iVar12 + 0x108);
    _dev_printk(0x800991b,iVar10,"%s wname: %s event: %d\n","wcd938x_codec_enable_ear_pa",*(iVar9 + 8),
                arg3 & 0xffffffff);
    uVar5 = 0;
    if (7 < arg3 - 1U) goto code_r0x0801d49c;
    iVar11 = iVar11 + -0xd0;
    switch(arg3) {
    case 1:
        uVar5 = swr_slvdev_datapath_control(*(iVar12 + 0x28),*(*(iVar12 + 0x28) + 0x40),1);
        uVar6 = snd_soc_component_read(iVar11,0x3450);
        *(iVar12 + 0xc74) = uVar6;
        if ((uVar6 & 1) == 0) {
            snd_soc_component_update_bits(iVar11,0x3465,7,3);
            puVar1 = iVar12 + 0x160;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                    *puVar1 = *puVar1 | 0x4000;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            cVar2 = *(iVar12 + 0x120);
        }
        else {
            snd_soc_component_update_bits(iVar11,0x3467,1,1);
            cVar2 = *(iVar12 + 0x120);
        }
        if (cVar2 == '\0') {
            snd_soc_component_update_bits(iVar11,0x300b,0x80,0x80);
        }
        goto code_r0x0801d49c;
    case 2:
        usleep_range_state(6000,0x177a,2);
        if ((uVar6 < 9) && ((1 << (uVar6 & 0x1f) & 0x1c8U) != 0)) {
            snd_soc_component_update_bits(iVar11,0x3008,2,2);
        }
        pcVar8 = *(iVar12 + 0xc38);
        if ((*(iVar12 + 0xc74) & 1) == 0) {
            if (pcVar8 != NULL) {
                __cfi_slowpath_diag(0xec879b5e5e7b1759,pcVar8,0x8001930);
                (*pcVar8)(*(iVar12 + 0xc30),1,0);
            }
            wcd_enable_irq(iVar12 + 0x130,0xd);
        }
        else {
            if (pcVar8 != NULL) {
                __cfi_slowpath_diag(0xec879b5e5e7b1759,pcVar8,0x8001910);
                (*pcVar8)(*(iVar12 + 0xc30),1,0x20000);
            }
            wcd_enable_irq(iVar12 + 0x130,0xf);
        }
        break;
    default:
        goto code_r0x0801d49c;
    case 4:
        if ((*(iVar12 + 0xc74) & 1) == 0) {
            if ((*(iVar12 + 0x160) >> 0xd & 1) == 0) {
                wcd_disable_irq(iVar12 + 0x130,0xd);
                pcVar8 = *(iVar12 + 0xc38);
                if (pcVar8 != NULL) {
                    __cfi_slowpath_diag(0xec879b5e5e7b1759,pcVar8,0x8001970);
                    (*pcVar8)(*(iVar12 + 0xc30),1,1);
                }
            }
        }
        else {
            wcd_disable_irq(iVar12 + 0x130,0xf);
            pcVar8 = *(iVar12 + 0xc38);
            if (pcVar8 != NULL) {
                __cfi_slowpath_diag(0xec879b5e5e7b1759,pcVar8,0x8001950);
                (*pcVar8)(*(iVar12 + 0xc30),1,0x20001);
            }
        }
        break;
    case 8:
        if (*(iVar12 + 0x120) == '\0') {
            snd_soc_component_update_bits(iVar11,0x300b,0x80,0);
        }
        usleep_range_state(7000,0x1b62,2);
        if ((*(iVar12 + 0xc74) & 1) == 0) {
            snd_soc_component_update_bits(iVar11,0x3465,7,0);
            puVar1 = iVar12 + 0x160;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                    *puVar1 = *puVar1 & 0xffffffffffffbfff;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
        }
        else {
            snd_soc_component_update_bits(iVar11,0x3467,1,0);
        }
        wcd_cls_h_fsm(iVar11,iVar12 + 0xe0,2,1,uVar6);
        iVar4 = *(iVar12 + 0xc70) + -1;
        *(iVar12 + 0xc70) = iVar4;
        if (iVar4 == 0) {
            snd_soc_component_update_bits(iVar11,0x30a4,4,4);
        }
    }
    uVar5 = 0;
code_r0x0801d49c:
    return uVar5;
}


// ===== sym.wcd938x_codec_enable_ear_pa @ 0x0801d14c (size 964) =====

uint sym.wcd938x_codec_enable_ear_pa(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    uint32_t uVar4;
    int iVar5;
    uint uVar6;
    uint32_t uVar7;
    int64_t iVar8;
    ulong *in_x18;
    code *pcVar9;
    int64_t iVar10;
    int64_t iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar11 = *(arg1 + 0x28);
    iVar8 = *(iVar11 + -0xb8);
    iVar10 = *(iVar8 + 0x98);
    uVar7 = *(iVar10 + 0x108);
    _dev_printk(0x800991b,iVar8,"%s wname: %s event: %d\n","wcd938x_codec_enable_ear_pa",*(arg1 + 8),
                arg2 & 0xffffffff);
    uVar4 = arg2 - 1;
    if (7 < uVar4) {
        return 0;
    }
    iVar11 = iVar11 + -0xd0;
    //switch table (8 cases) at 0x8001b48
    switch(*(uVar4 * 4 + 0x8001b48) + 0x801d1bc) {
    case 0x801d1d0:
        uVar6 = swr_slvdev_datapath_control(*(iVar10 + 0x28),*(*(iVar10 + 0x28) + 0x40),1);
        uVar7 = snd_soc_component_read(iVar11,0x3450);
        *(iVar10 + 0xc74) = uVar7;
        if ((uVar7 & 1) == 0) {
            snd_soc_component_update_bits(iVar11,0x3465,7,3);
            puVar1 = iVar10 + 0x160;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                    *puVar1 = *puVar1 | 0x4000;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            cVar2 = *(iVar10 + 0x120);
        }
        else {
            snd_soc_component_update_bits(iVar11,0x3467,1,1);
            cVar2 = *(iVar10 + 0x120);
        }
        if (cVar2 == '\0') {
            snd_soc_component_update_bits(iVar11,0x300b,0x80,0x80);
            return uVar6;
        }
        return uVar6;
    case 0x801d230:
        if ((*(iVar10 + 0xc74) & 1) == 0) {
            if ((*(iVar10 + 0x160) >> 0xd & 1) == 0) {
                wcd_disable_irq(iVar10 + 0x130,0xd);
                pcVar9 = *(iVar10 + 0xc38);
                if (pcVar9 != NULL) {
                    __cfi_slowpath_diag(0xec879b5e5e7b1759,pcVar9,0x8001970);
                    (*pcVar9)(*(iVar10 + 0xc30),1,1);
                }
            }
        }
        else {
            wcd_disable_irq(iVar10 + 0x130,0xf);
            pcVar9 = *(iVar10 + 0xc38);
            if (pcVar9 != NULL) {
                __cfi_slowpath_diag(0xec879b5e5e7b1759,pcVar9,0x8001950);
                (*pcVar9)(*(iVar10 + 0xc30),1,0x20001);
            }
        }
        break;
    case 0x801d28c:
        usleep_range_state(6000,0x177a,2);
        if ((uVar7 < 9) && ((1 << (uVar7 & 0x1f) & 0x1c8U) != 0)) {
            snd_soc_component_update_bits(iVar11,0x3008,2,2);
        }
        pcVar9 = *(iVar10 + 0xc38);
        if ((*(iVar10 + 0xc74) & 1) == 0) {
            if (pcVar9 != NULL) {
                __cfi_slowpath_diag(0xec879b5e5e7b1759,pcVar9,0x8001930);
                (*pcVar9)(*(iVar10 + 0xc30),1,0);
            }
            wcd_enable_irq(iVar10 + 0x130,0xd);
        }
        else {
            if (pcVar9 != NULL) {
                __cfi_slowpath_diag(0xec879b5e5e7b1759,pcVar9,0x8001910);
                (*pcVar9)(*(iVar10 + 0xc30),1,0x20000);
            }
            wcd_enable_irq(iVar10 + 0x130,0xf);
        }
        break;
    case 0x801d320:
        if (*(iVar10 + 0x120) == '\0') {
            snd_soc_component_update_bits(iVar11,0x300b,0x80,0);
        }
        usleep_range_state(7000,0x1b62,2);
        if ((*(iVar10 + 0xc74) & 1) == 0) {
            snd_soc_component_update_bits(iVar11,0x3465,7,0);
            puVar1 = iVar10 + 0x160;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                    *puVar1 = *puVar1 & 0xffffffffffffbfff;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
        }
        else {
            snd_soc_component_update_bits(iVar11,0x3467,1,0);
        }
        wcd_cls_h_fsm(iVar11,iVar10 + 0xe0,2,1,uVar7);
        iVar5 = *(iVar10 + 0xc70) + -1;
        *(iVar10 + 0xc70) = iVar5;
        if (iVar5 == 0) {
            snd_soc_component_update_bits(iVar11,0x30a4,4,4);
        }
    }
    return 0;
}


// ===== sym.wcd938x_codec_enable_aux_pa @ 0x0801d510 (size 540) =====

uint sym.wcd938x_codec_enable_aux_pa(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint uVar4;
    int64_t iVar5;
    ulong *in_x18;
    code *pcVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = *(arg1 + 0x28);
    iVar5 = *(iVar8 + -0xb8);
    iVar7 = *(iVar5 + 0x98);
    uVar1 = *(iVar7 + 0x108);
    _dev_printk(0x800991b,iVar5,"%s wname: %s event: %d\n","wcd938x_codec_enable_aux_pa",*(arg1 + 8),
                arg2 & 0xffffffff);
    uVar2 = arg2 - 1;
    if (7 < uVar2) {
        return 0;
    }
    iVar8 = iVar8 + -0xd0;
    //switch table (8 cases) at 0x8001b68
    switch(*(uVar2 + 0x8001b68) * 4 + 0x801d590) {
    case 0x801d594:
        uVar4 = swr_slvdev_datapath_control(*(iVar7 + 0x28),*(*(iVar7 + 0x28) + 0x40),1);
        snd_soc_component_update_bits(iVar8,0x3467,1,1);
        return uVar4;
    case 0x801d5c4:
        usleep_range_state(1000,0x3f2,2);
        if ((uVar1 < 9) && ((1 << (uVar1 & 0x1f) & 0x1c8U) != 0)) {
            snd_soc_component_update_bits(iVar8,0x3008,2,2);
        }
        pcVar6 = *(iVar7 + 0xc38);
        if (pcVar6 != NULL) {
            __cfi_slowpath_diag(0xec879b5e5e7b1759,pcVar6,0x8001990);
            (*pcVar6)(*(iVar7 + 0xc30),1,0x20000);
        }
        wcd_enable_irq(iVar7 + 0x130,0xf);
        break;
    case 0x801d650:
        wcd_disable_irq(iVar7 + 0x130,0xf);
        pcVar6 = *(iVar7 + 0xc38);
        if (pcVar6 != NULL) {
            __cfi_slowpath_diag(0xec879b5e5e7b1759,pcVar6,0x80019b0);
            (*pcVar6)(*(iVar7 + 0xc30),1,0x20001);
        }
        break;
    case 0x801d6a0:
        usleep_range_state(1000,0x3f2,2);
        snd_soc_component_update_bits(iVar8,0x3467,1,0);
        wcd_cls_h_fsm(iVar8,iVar7 + 0xe0,2,8,uVar1);
        iVar3 = *(iVar7 + 0xc70) + -1;
        *(iVar7 + 0xc70) = iVar3;
        if (iVar3 != 0) {
            return 0;
        }
        snd_soc_component_update_bits(iVar8,0x30a4,4,4);
    }
    return 0;
}


// ===== sym.wcd938x_codec_enable_hphl_pa @ 0x0801d72c (size 1384) =====

uint sym.wcd938x_codec_enable_hphl_pa(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    uint32_t uVar5;
    uint uVar6;
    ulong uVar7;
    int64_t iVar8;
    ulong uVar9;
    ulong *in_x18;
    code *pcVar10;
    int64_t iVar11;
    int64_t iVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar12 = *(arg1 + 0x28);
    iVar8 = *(iVar12 + -0xb8);
    iVar11 = *(iVar8 + 0x98);
    uVar2 = *(iVar11 + 0x108);
    _dev_printk(0x800991b,iVar8,"%s wname: %s event: %d\n","wcd938x_codec_enable_hphl_pa",*(arg1 + 8),
                arg2 & 0xffffffff);
    uVar5 = arg2 - 1;
    if (uVar5 < 8) {
        iVar12 = iVar12 + -0xd0;
    //switch table (8 cases) at 0x8001b70
        switch(*(uVar5 * 4 + 0x8001b70) + 0x801d79c) {
        case 0x801d7b0:
            if (*(iVar11 + 0x122) != '\0') {
                snd_soc_component_update_bits(iVar12,0x3067,0x80,0x80);
            }
            pcVar10 = *(iVar11 + 0xc38);
            if (pcVar10 != NULL) {
                __cfi_slowpath_diag(0xec879b5e5e7b1759,pcVar10,0x80019d0);
                (*pcVar10)(*(iVar11 + 0xc30),1,1);
            }
            uVar6 = swr_slvdev_datapath_control(*(iVar11 + 0x28),*(*(iVar11 + 0x28) + 0x40),1);
            wcd_cls_h_fsm(iVar12,iVar11 + 0xe0,1,2,uVar2);
            wcd_clsh_set_hph_mode(iVar12,1);
            if ((uVar2 < 6) && ((1 << (uVar2 & 0x1f) & 0x34U) != 0)) {
                snd_soc_component_update_bits(iVar12,0x30de,1,1);
            }
            snd_soc_component_update_bits(iVar12,0x3009,0x20,0x20);
            wcd_clsh_set_hph_mode(iVar12,uVar2);
            usleep_range_state(100,0x6e,2);
            puVar1 = iVar11 + 0x160;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = *puVar1 | 0x40;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            snd_soc_component_update_bits(iVar12,0x3465,7,3);
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = *puVar1 | 0x2000;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            return uVar6;
        case 0x801d8dc:
            if ((*(iVar11 + 0x160) >> 0xe & 1) == 0) {
                pcVar10 = *(iVar11 + 0xc38);
                if (pcVar10 != NULL) {
                    __cfi_slowpath_diag(0xec879b5e5e7b1759,pcVar10,0x8001a10);
                    (*pcVar10)(*(iVar11 + 0xc30),1,1);
                }
                wcd_disable_irq(iVar11 + 0x130,0xd);
            }
            pcVar10 = *(iVar11 + 0xc38);
            if ((pcVar10 != NULL) && (*(iVar11 + 0x120) != '\0')) {
                __cfi_slowpath_diag(0xec879b5e5e7b1759,pcVar10,0x8001a30);
                (*pcVar10)(*(iVar11 + 0xc30),4,0);
            }
            puVar1 = iVar11 + 0x160;
            if (*(iVar11 + 0x120) == '\0') {
                uVar7 = 20000;
                uVar9 = 0x4e84;
            }
            else {
                uVar7 = 7000;
                uVar9 = 0x1bbc;
            }
            usleep_range_state(uVar7,uVar9,2);
            snd_soc_component_update_bits(iVar12,0x3009,0x80,0);
            blocking_notifier_call_chain(*(iVar11 + 0x100) + 0x420,0xd);
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = *puVar1 | 0x40;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            break;
        case 0x801d984:
            if ((*(iVar11 + 0x160) >> 6 & 1) != 0) {
                if (*(iVar11 + 0x120) == '\0') {
                    uVar7 = 20000;
                    uVar9 = 0x4e84;
                }
                else {
                    uVar7 = 7000;
                    uVar9 = 0x1bbc;
                }
                usleep_range_state(uVar7,uVar9,2);
                puVar1 = iVar11 + 0x160;
                if ((uVar2 < 6) && ((1 << (uVar2 & 0x1f) & 0x34U) != 0)) {
                    snd_soc_component_update_bits(iVar12,0x30de,1,0);
                }
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    cVar3 = '\x01';
                    bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar4) {
                        *puVar1 = *puVar1 & 0xffffffffffffffbf;
                        cVar3 = ExclusiveMonitorsStatus();
                    }
                } while (cVar3 != '\0');
            }
            snd_soc_component_update_bits(iVar12,0x313a,2,2);
            if ((uVar2 < 9) && ((1 << (uVar2 & 0x1f) & 0x1c8U) != 0)) {
                snd_soc_component_update_bits(iVar12,0x3008,2,2);
            }
            pcVar10 = *(iVar11 + 0xc38);
            if (pcVar10 != NULL) {
                __cfi_slowpath_diag(0xec879b5e5e7b1759,pcVar10,0x80019f0);
                (*pcVar10)(*(iVar11 + 0xc30),1,0);
            }
            wcd_enable_irq(iVar11 + 0x130,0xd);
            break;
        case 0x801d9a4:
            puVar1 = iVar11 + 0x160;
            if ((*(iVar11 + 0x160) >> 6 & 1) != 0) {
                if (*(iVar11 + 0x120) == '\0') {
                    uVar7 = 21000;
                    uVar9 = 0x526c;
                }
                else {
                    uVar7 = 7000;
                    uVar9 = 0x1bbc;
                }
                usleep_range_state(uVar7,uVar9,2);
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    cVar3 = '\x01';
                    bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar4) {
                        *puVar1 = *puVar1 & 0xffffffffffffffbf;
                        cVar3 = ExclusiveMonitorsStatus();
                    }
                } while (cVar3 != '\0');
            }
            blocking_notifier_call_chain(*(iVar11 + 0x100) + 0x420,10);
            snd_soc_component_update_bits(iVar12,0x3009,0x20,0);
            snd_soc_component_update_bits(iVar12,0x3465,7,0);
            wcd_cls_h_fsm(iVar12,iVar11 + 0xe0,2,2,uVar2);
            if (*(iVar11 + 0x122) != '\0') {
                snd_soc_component_update_bits(iVar12,0x3067,0x80,0);
            }
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = *puVar1 & 0xffffffffffffdfff;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
        }
        return 0;
    }
    return 0;
}


// ===== sym.wcd938x_codec_enable_hphr_pa @ 0x0801dc94 (size 1268) =====

uint sym.wcd938x_codec_enable_hphr_pa(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    uint32_t uVar5;
    uint uVar6;
    ulong uVar7;
    int64_t iVar8;
    ulong uVar9;
    ulong *in_x18;
    code *pcVar10;
    int64_t iVar11;
    int64_t iVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar12 = *(arg1 + 0x28);
    iVar8 = *(iVar12 + -0xb8);
    iVar11 = *(iVar8 + 0x98);
    uVar2 = *(iVar11 + 0x108);
    _dev_printk(0x800991b,iVar8,"%s wname: %s event: %d\n","wcd938x_codec_enable_hphr_pa",*(arg1 + 8),
                arg2 & 0xffffffff);
    uVar5 = arg2 - 1;
    if (uVar5 < 8) {
        iVar12 = iVar12 + -0xd0;
    //switch table (8 cases) at 0x8001b90
        switch(*(uVar5 * 4 + 0x8001b90) + 0x801dd04) {
        case 0x801dd18:
            if (*(iVar11 + 0x122) != '\0') {
                snd_soc_component_update_bits(iVar12,0x3067,0x80,0x80);
            }
            pcVar10 = *(iVar11 + 0xc38);
            if (pcVar10 != NULL) {
                __cfi_slowpath_diag(0xec879b5e5e7b1759,pcVar10,0x8001a50);
                (*pcVar10)(*(iVar11 + 0xc30),1,0x10001);
            }
            uVar6 = swr_slvdev_datapath_control(*(iVar11 + 0x28),*(*(iVar11 + 0x28) + 0x40),1);
            wcd_cls_h_fsm(iVar12,iVar11 + 0xe0,1,4,uVar2);
            wcd_clsh_set_hph_mode(iVar12,1);
            if ((uVar2 < 6) && ((1 << (uVar2 & 0x1f) & 0x34U) != 0)) {
                snd_soc_component_update_bits(iVar12,0x30de,1,1);
            }
            snd_soc_component_update_bits(iVar12,0x3009,0x10,0x10);
            wcd_clsh_set_hph_mode(iVar12,uVar2);
            usleep_range_state(100,0x6e,2);
            puVar1 = iVar11 + 0x160;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = *puVar1 | 0x40;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            snd_soc_component_update_bits(iVar12,0x3466,7,3);
            return uVar6;
        case 0x801de34:
            pcVar10 = *(iVar11 + 0xc38);
            if (pcVar10 != NULL) {
                __cfi_slowpath_diag(0xec879b5e5e7b1759,pcVar10,0x8001a90);
                (*pcVar10)(*(iVar11 + 0xc30),1,0x10001);
            }
            wcd_disable_irq(iVar11 + 0x130,0xe);
            pcVar10 = *(iVar11 + 0xc38);
            if ((pcVar10 != NULL) && (*(iVar11 + 0x121) != '\0')) {
                __cfi_slowpath_diag(0xec879b5e5e7b1759,pcVar10,0x8001ab0);
                (*pcVar10)(*(iVar11 + 0xc30),4,0x10000);
            }
            if (*(iVar11 + 0x121) == '\0') {
                uVar7 = 20000;
                uVar9 = 0x4e84;
            }
            else {
                uVar7 = 7000;
                uVar9 = 0x1bbc;
            }
            usleep_range_state(uVar7,uVar9,2);
            snd_soc_component_update_bits(iVar12,0x3009,0x40,0);
            blocking_notifier_call_chain(*(iVar11 + 0x100) + 0x420,0xe);
            puVar1 = iVar11 + 0x160;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = *puVar1 | 0x40;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            break;
        case 0x801ded0:
            if ((*(iVar11 + 0x160) >> 6 & 1) != 0) {
                if (*(iVar11 + 0x121) == '\0') {
                    uVar7 = 20000;
                    uVar9 = 0x4e84;
                }
                else {
                    uVar7 = 7000;
                    uVar9 = 0x1bbc;
                }
                usleep_range_state(uVar7,uVar9,2);
                puVar1 = iVar11 + 0x160;
                if ((uVar2 < 6) && ((1 << (uVar2 & 0x1f) & 0x34U) != 0)) {
                    snd_soc_component_update_bits(iVar12,0x30de,1,0);
                }
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    cVar3 = '\x01';
                    bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar4) {
                        *puVar1 = *puVar1 & 0xffffffffffffffbf;
                        cVar3 = ExclusiveMonitorsStatus();
                    }
                } while (cVar3 != '\0');
            }
            snd_soc_component_update_bits(iVar12,0x313a,2,2);
            if ((uVar2 < 9) && ((1 << (uVar2 & 0x1f) & 0x1c8U) != 0)) {
                snd_soc_component_update_bits(iVar12,0x3008,2,2);
            }
            pcVar10 = *(iVar11 + 0xc38);
            if (pcVar10 != NULL) {
                __cfi_slowpath_diag(0xec879b5e5e7b1759,pcVar10,0x8001a70);
                (*pcVar10)(*(iVar11 + 0xc30),1,0x10000);
            }
            wcd_enable_irq(iVar11 + 0x130,0xe);
            break;
        case 0x801def0:
            if ((*(iVar11 + 0x160) >> 6 & 1) != 0) {
                puVar1 = iVar11 + 0x160;
                if (*(iVar11 + 0x121) == '\0') {
                    uVar7 = 20000;
                    uVar9 = 0x4e84;
                }
                else {
                    uVar7 = 7000;
                    uVar9 = 0x1bbc;
                }
                usleep_range_state(uVar7,uVar9,2);
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    cVar3 = '\x01';
                    bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar4) {
                        *puVar1 = *puVar1 & 0xffffffffffffffbf;
                        cVar3 = ExclusiveMonitorsStatus();
                    }
                } while (cVar3 != '\0');
            }
            blocking_notifier_call_chain(*(iVar11 + 0x100) + 0x420,0xc);
            snd_soc_component_update_bits(iVar12,0x3009,0x10,0);
            snd_soc_component_update_bits(iVar12,0x3466,7,0);
            wcd_cls_h_fsm(iVar12,iVar11 + 0xe0,2,4,uVar2);
            if (*(iVar11 + 0x122) != '\0') {
                snd_soc_component_update_bits(iVar12,0x3067,0x80,0);
            }
        }
        return 0;
    }
    return 0;
}


// ===== sym.wcd938x_codec_hphl_dac_event @ 0x0801e188 (size 368) =====

ulong sym.wcd938x_codec_hphl_dac_event(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong uVar4;
    ulong uVar5;
    ulong *in_x18;
    int64_t arg1_00;
    int iVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(arg1 + 0x28) + -0xb8);
    arg1_00 = *(arg1 + 0x28) + -0xd0;
    iVar7 = *(iVar2 + 0x98);
    _dev_printk(0x800991b,iVar2,"%s wname: %s event: %d\n","wcd938x_codec_hphl_dac_event",*(arg1 + 8),
                arg2 & 0xffffffff);
    iVar6 = arg2;
    if (iVar6 == 8) {
        uVar3 = 0x3136;
        uVar4 = 0xf;
        uVar5 = 1;
    }
    else if (iVar6 == 2) {
        snd_soc_component_update_bits(arg1_00,0x3133,0xf,2);
        if (*(iVar7 + 0x120) == '\0') {
            snd_soc_component_update_bits(arg1_00,0x3414,2,0);
            uVar3 = 0x30d3;
            uVar4 = 0x20;
            uVar5 = 0x20;
        }
        else {
            snd_soc_component_update_bits(arg1_00,0x3414,2,2);
            if ((*(iVar7 + 0x121) == '\0') || (uVar1 = snd_soc_component_read(arg1_00,0x3414), (uVar1 & 1) != 0)) {
                usleep_range_state(5000,0x1392,2);
            }
            uVar3 = 0x313a;
            uVar4 = 2;
            uVar5 = 0;
        }
    }
    else {
        if (iVar6 != 1) {
            return 0;
        }
        sym.wcd938x_rx_clk_enable(arg1_00);
        snd_soc_component_update_bits(arg1_00,0x3409,1,1);
        snd_soc_component_update_bits(arg1_00,0x344e,4,4);
        uVar3 = 0x30d9;
        uVar4 = 0x80;
        uVar5 = 0;
    }
    snd_soc_component_update_bits(arg1_00,uVar3,uVar4,uVar5);
    return 0;
}


// ===== sym.wcd938x_codec_hphr_dac_event @ 0x0801e2f8 (size 368) =====

ulong sym.wcd938x_codec_hphr_dac_event(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong uVar4;
    ulong uVar5;
    ulong *in_x18;
    int64_t arg1_00;
    int iVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(arg1 + 0x28) + -0xb8);
    arg1_00 = *(arg1 + 0x28) + -0xd0;
    iVar7 = *(iVar2 + 0x98);
    _dev_printk(0x800991b,iVar2,"%s wname: %s event: %d\n","wcd938x_codec_hphr_dac_event",*(arg1 + 8),
                arg2 & 0xffffffff);
    iVar6 = arg2;
    if (iVar6 == 8) {
        uVar3 = 0x3136;
        uVar4 = 0xf;
        uVar5 = 1;
    }
    else if (iVar6 == 2) {
        snd_soc_component_update_bits(arg1_00,0x3136,0xf,2);
        if (*(iVar7 + 0x121) == '\0') {
            snd_soc_component_update_bits(arg1_00,0x3414,1,0);
            uVar3 = 0x30d6;
            uVar4 = 0x20;
            uVar5 = 0x20;
        }
        else {
            snd_soc_component_update_bits(arg1_00,0x3414,1,1);
            if ((*(iVar7 + 0x120) == '\0') || (uVar1 = snd_soc_component_read(arg1_00,0x3414), (uVar1 >> 1 & 1) != 0))
            {
                usleep_range_state(5000,0x1392,2);
            }
            uVar3 = 0x313a;
            uVar4 = 2;
            uVar5 = 0;
        }
    }
    else {
        if (iVar6 != 1) {
            return 0;
        }
        sym.wcd938x_rx_clk_enable(arg1_00);
        snd_soc_component_update_bits(arg1_00,0x3409,2,2);
        snd_soc_component_update_bits(arg1_00,0x344e,8,8);
        uVar3 = 0x30d9;
        uVar4 = 0x80;
        uVar5 = 0;
    }
    snd_soc_component_update_bits(arg1_00,uVar3,uVar4,uVar5);
    return 0;
}


// ===== sym.wcd938x_codec_ear_dac_event @ 0x0801e468 (size 544) =====

ulong sym.wcd938x_codec_ear_dac_event(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong uVar4;
    ulong uVar5;
    int iVar6;
    ulong *in_x18;
    int64_t arg1_00;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(arg1 + 0x28) + -0xb8);
    arg1_00 = *(arg1 + 0x28) + -0xd0;
    iVar7 = *(iVar2 + 0x98);
    _dev_printk(0x800991b,iVar2,"%s wname: %s event: %d\n","wcd938x_codec_ear_dac_event",*(arg1 + 8),
                arg2 & 0xffffffff);
    if (arg2 != 8) {
        if (arg2 != 1) {
            return 0;
        }
        sym.wcd938x_rx_clk_enable(arg1_00);
        uVar1 = snd_soc_component_read(arg1_00,0x3450);
        *(iVar7 + 0xc74) = uVar1;
        if ((uVar1 & 1) == 0) {
            snd_soc_component_update_bits(arg1_00,0x344e,4,4);
            snd_soc_component_update_bits(arg1_00,0x3409,1,1);
            if (*(iVar7 + 0x120) == '\0') goto code_r0x0801e5c8;
            uVar3 = 0x3414;
            uVar4 = 2;
            uVar5 = 2;
        }
        else {
            snd_soc_component_update_bits(arg1_00,0x30ec,0x80,0);
            snd_soc_component_update_bits(arg1_00,0x344f,1,1);
            snd_soc_component_update_bits(arg1_00,0x3409,4,4);
            uVar3 = 0x300b;
            uVar4 = 0x80;
            uVar5 = 0x80;
        }
        snd_soc_component_update_bits(arg1_00,uVar3,uVar4,uVar5);
code_r0x0801e5c8:
        usleep_range_state(5000,0x1392,2);
        iVar6 = *(iVar7 + 0xc70);
        if (iVar6 == 0) {
            snd_soc_component_update_bits(arg1_00,0x30a4,4,0);
            iVar6 = *(iVar7 + 0xc70);
        }
        *(iVar7 + 0xc70) = iVar6 + 1;
        wcd_cls_h_fsm(arg1_00,iVar7 + 0xe0,1,1,*(iVar7 + 0x108));
        return 0;
    }
    if ((*(iVar7 + 0xc74) & 1) == 0) {
        if ((*(iVar7 + 0x160) >> 0xd & 1) == 0) {
            snd_soc_component_update_bits(arg1_00,0x344e,4,0);
            snd_soc_component_update_bits(arg1_00,0x3409,1,0);
        }
        if (*(iVar7 + 0x120) == '\0') goto code_r0x0801e644;
        uVar3 = 0x3414;
        uVar4 = 2;
    }
    else {
        snd_soc_component_update_bits(arg1_00,0x344f,1,0);
        uVar3 = 0x3409;
        uVar4 = 4;
    }
    snd_soc_component_update_bits(arg1_00,uVar3,uVar4,0);
code_r0x0801e644:
    snd_soc_component_update_bits(arg1_00,0x300b,0x80,0);
    snd_soc_component_update_bits(arg1_00,0x30ec,0x80,0x80);
    return 0;
}


// ===== sym.wcd938x_codec_aux_dac_event @ 0x0801e688 (size 280) =====

ulong sym.wcd938x_codec_aux_dac_event(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    int64_t arg1_00;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(*(arg1 + 0x28) + -0xb8);
    arg1_00 = *(arg1 + 0x28) + -0xd0;
    iVar3 = *(iVar1 + 0x98);
    _dev_printk(0x800991b,iVar1,"%s wname: %s event: %d\n","wcd938x_codec_aux_dac_event",*(arg1 + 8),
                arg2 & 0xffffffff);
    if (arg2 == 8) {
        snd_soc_component_update_bits(arg1_00,0x3408,4,0);
    }
    else if (arg2 == 1) {
        sym.wcd938x_rx_clk_enable(arg1_00);
        snd_soc_component_update_bits(arg1_00,0x3408,4,4);
        snd_soc_component_update_bits(arg1_00,0x3409,4,4);
        snd_soc_component_update_bits(arg1_00,0x344f,1,1);
        iVar2 = *(iVar3 + 0xc70);
        if (iVar2 == 0) {
            snd_soc_component_update_bits(arg1_00,0x30a4,4,0);
            iVar2 = *(iVar3 + 0xc70);
        }
        *(iVar3 + 0xc70) = iVar2 + 1;
        wcd_cls_h_fsm(arg1_00,iVar3 + 0xe0,1,8,*(iVar3 + 0x108));
    }
    return 0;
}


// ===== sym.wcd938x_enable_rx1 @ 0x0801e7a0 (size 600) =====

ulong sym.wcd938x_enable_rx1(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    char *pcVar3;
    char *arg3;
    int64_t iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t iVar5;
    int64_t arg1_00;
    uint64_t uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    ulong unaff_x30;
    uint uStack_dc;
    uchar auStack_d8 [4];
    uchar auStack_d4 [4];
    uchar auStack_d0 [4];
    char acStack_cc [4];
    int64_t iStack_c8;
    uchar **ppuStack_c0;
    code *pcStack_b8;
    uint64_t uStack_b0;
    int64_t iStack_a8;
    uint uStack_9c;
    uchar auStack_98 [4];
    uchar auStack_94 [4];
    uchar auStack_90 [4];
    char acStack_8c [4];
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    int64_t iStack_70;
    uint64_t uStack_60;
    int64_t iStack_58;
    uint uStack_4c;
    uchar auStack_48 [4];
    uchar auStack_44 [4];
    uchar auStack_40 [4];
    char acStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    uVar6 = arg2 & 0xffffffff;
    iStack_38 = *(iVar4 + 0x5e0);
    pcVar3 = "%s wname: %s event: %d\n";
    iVar4 = *(arg1 + 0x28);
    iVar5 = iVar4 + -0xd0;
    iVar8 = *(*(iVar4 + -0xb8) + 0x98);
    _dev_printk(0x800991b,*(iVar4 + -0xb8),"%s wname: %s event: %d\n","wcd938x_enable_rx1",*(arg1 + 8),uVar6);
    if (arg2 == 8) {
        if (((*(iVar8 + 0x160) >> 0xd & 1) == 0) && ((*(iVar8 + 0x160) >> 0xe & 1) == 0)) {
            uVar6 = *(*(iVar4 + -0xb8) + 0x98);
            acStack_3c[0] = '\0';
            auStack_44[0] = 0;
            auStack_48[0] = 0;
            iVar1 = sym.wcd938x_set_port_params(iVar5,0xe,acStack_3c,auStack_40);
            if (iVar1 == 0) {
                swr_disconnect_port(*(uVar6 + 0x28),acStack_3c,1,auStack_44,auStack_48);
            }
            if (*(iVar8 + 0x120) != '\0') {
                uVar6 = *(*(iVar4 + -0xb8) + 0x98);
                acStack_3c[0] = '\0';
                auStack_44[0] = 0;
                auStack_48[0] = 0;
                iVar1 = sym.wcd938x_set_port_params(iVar5,0x10,acStack_3c,auStack_40);
                if (iVar1 == 0) {
                    swr_disconnect_port(*(uVar6 + 0x28),acStack_3c,1,auStack_44,auStack_48);
                }
            }
            sym.wcd938x_rx_clk_disable(iVar5);
            pcVar3 = 0x1;
            snd_soc_component_update_bits(iVar5,0x3409,1,0);
        }
    }
    else if (arg2 == 1) {
        pcVar3 = acStack_3c;
        uVar6 = *(*(iVar4 + -0xb8) + 0x98);
        acStack_3c[0] = '\0';
        auStack_40[0] = 0;
        auStack_44[0] = 0;
        auStack_48[0] = 0;
        uStack_4c = 0;
        iVar1 = sym.wcd938x_set_port_params(iVar5,0xe,pcVar3,auStack_40);
        if (iVar1 == 0) {
            pcVar3 = 0x1;
            swr_connect_port(*(uVar6 + 0x28),acStack_3c,1,auStack_44,&uStack_4c,auStack_40,auStack_48);
        }
        if (*(iVar8 + 0x120) != '\0') {
            pcVar3 = acStack_3c;
            uVar6 = *(*(iVar4 + -0xb8) + 0x98);
            acStack_3c[0] = '\0';
            auStack_40[0] = 0;
            auStack_44[0] = 0;
            auStack_48[0] = 0;
            uStack_4c = 0;
            iVar1 = sym.wcd938x_set_port_params(iVar5,0x10,pcVar3,auStack_40);
            if (iVar1 == 0) {
                pcVar3 = 0x1;
                swr_connect_port(*(uVar6 + 0x28),acStack_3c,1,auStack_44,&uStack_4c,auStack_40,auStack_48);
            }
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return 0;
    }
    iVar2 = __stack_chk_fail();
    *extraout_x18 = sym.wcd938x_enable_rx2;
    pcStack_78 = sym.wcd938x_enable_rx2;
    iVar4 = sp_el0;
    uVar7 = pcVar3 & 0xffffffff;
    iStack_88 = *(iVar4 + 0x5e0);
    arg3 = "%s wname: %s event: %d\n";
    iVar4 = *(iVar2 + 0x28);
    arg1_00 = iVar4 + -0xd0;
    iVar9 = *(*(iVar4 + -0xb8) + 0x98);
    puStack_80 = &stack0xffffffffffffffd0;
    iStack_70 = iVar8;
    uStack_60 = uVar6;
    iStack_58 = iVar5;
    _dev_printk(0x800991b,*(iVar4 + -0xb8),"%s wname: %s event: %d\n","wcd938x_enable_rx2",*(iVar2 + 8),uVar7);
    if (pcVar3 == 8) {
        uVar7 = *(*(iVar4 + -0xb8) + 0x98);
        acStack_8c[0] = '\0';
        auStack_94[0] = 0;
        auStack_98[0] = 0;
        iVar1 = sym.wcd938x_set_port_params(arg1_00,0xf,acStack_8c,auStack_90);
        if (iVar1 == 0) {
            swr_disconnect_port(*(uVar7 + 0x28),acStack_8c,1,auStack_94,auStack_98);
        }
        if (*(iVar9 + 0x121) != '\0') {
            uVar7 = *(*(iVar4 + -0xb8) + 0x98);
            acStack_8c[0] = '\0';
            auStack_94[0] = 0;
            auStack_98[0] = 0;
            iVar1 = sym.wcd938x_set_port_params(arg1_00,0x11,acStack_8c,auStack_90);
            if (iVar1 == 0) {
                swr_disconnect_port(*(uVar7 + 0x28),acStack_8c,1,auStack_94,auStack_98);
            }
        }
        sym.wcd938x_rx_clk_disable(arg1_00);
        arg3 = 0x2;
        snd_soc_component_update_bits(arg1_00,0x3409,2,0);
    }
    else if (pcVar3 == 1) {
        arg3 = acStack_8c;
        uVar7 = *(*(iVar4 + -0xb8) + 0x98);
        acStack_8c[0] = '\0';
        auStack_90[0] = 0;
        auStack_94[0] = 0;
        auStack_98[0] = 0;
        uStack_9c = 0;
        iVar1 = sym.wcd938x_set_port_params(arg1_00,0xf,arg3,auStack_90);
        if (iVar1 == 0) {
            arg3 = 0x1;
            swr_connect_port(*(uVar7 + 0x28),acStack_8c,1,auStack_94,&uStack_9c,auStack_90,auStack_98);
        }
        if (*(iVar9 + 0x121) != '\0') {
            arg3 = acStack_8c;
            uVar7 = *(*(iVar4 + -0xb8) + 0x98);
            acStack_8c[0] = '\0';
            auStack_90[0] = 0;
            auStack_94[0] = 0;
            auStack_98[0] = 0;
            uStack_9c = 0;
            iVar1 = sym.wcd938x_set_port_params(arg1_00,0x11,arg3,auStack_90);
            if (iVar1 == 0) {
                arg3 = 0x1;
                swr_connect_port(*(uVar7 + 0x28),acStack_8c,1,auStack_94,&uStack_9c,auStack_90,auStack_98);
            }
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_88) {
        iVar5 = __stack_chk_fail();
        *extraout_x18_00 = sym.wcd938x_enable_rx3;
        pcStack_b8 = sym.wcd938x_enable_rx3;
        iVar4 = sp_el0;
        iStack_c8 = *(iVar4 + 0x5e0);
        pcVar3 = "%s wname: %s event: %d\n";
        iVar4 = *(iVar5 + 0x28);
        iVar8 = iVar4 + -0xd0;
        ppuStack_c0 = &puStack_80;
        uStack_b0 = uVar7;
        iStack_a8 = arg1_00;
        _dev_printk(0x800991b,*(iVar4 + -0xb8),"%s wname: %s event: %d\n","wcd938x_enable_rx3",*(iVar5 + 8),
                    arg3 & 0xffffffff);
        if (arg3 == 8) {
            iVar4 = *(*(iVar4 + -0xb8) + 0x98);
            acStack_cc[0] = '\0';
            auStack_d4[0] = 0;
            auStack_d8[0] = 0;
            iVar1 = sym.wcd938x_set_port_params(iVar8,0x13,acStack_cc,auStack_d0);
            if (iVar1 == 0) {
                swr_disconnect_port(*(iVar4 + 0x28),acStack_cc,1,auStack_d4,auStack_d8);
            }
            usleep_range_state(6000,0x177a,2);
            sym.wcd938x_rx_clk_disable(iVar8);
            pcVar3 = 0x4;
            snd_soc_component_update_bits(iVar8,0x3409,4,0);
        }
        else if (arg3 == 1) {
            pcVar3 = acStack_cc;
            iVar4 = *(*(iVar4 + -0xb8) + 0x98);
            acStack_cc[0] = '\0';
            auStack_d0[0] = 0;
            auStack_d4[0] = 0;
            auStack_d8[0] = 0;
            uStack_dc = 0;
            iVar1 = sym.wcd938x_set_port_params(iVar8,0x13,pcVar3,auStack_d0);
            if (iVar1 == 0) {
                pcVar3 = 0x1;
                swr_connect_port(*(iVar4 + 0x28),acStack_cc,1,auStack_d4,&uStack_dc,auStack_d0,auStack_d8);
            }
        }
        iVar4 = sp_el0;
        if (*(iVar4 + 0x5e0) == iStack_c8) {
            return 0;
        }
        iVar4 = __stack_chk_fail();
        *extraout_x18_01 = sym.wcd938x_codec_enable_micbias_pullup;
        iVar8 = *(iVar4 + 0x28);
        _dev_printk(0x800991b,*(iVar8 + -0xb8),"%s: wname: %s, event: %d\n","__wcd938x_codec_enable_micbias_pullup",
                    *(iVar4 + 8),pcVar3 & 0xffffffff);
        iVar5 = strnstr(*(iVar4 + 8),"VA MIC BIAS1",0xd);
        if (iVar5 == 0) {
            iVar5 = strnstr(*(iVar4 + 8),"VA MIC BIAS2",0xd);
            if (iVar5 == 0) {
                iVar5 = strnstr(*(iVar4 + 8),"VA MIC BIAS3",0xd);
                if (iVar5 == 0) {
                    iVar4 = strnstr(*(iVar4 + 8),"VA MIC BIAS4",0xd);
                    if (iVar4 == 0) {
                        return 0xffffffea;
                    }
                    iVar4 = 4;
                }
                else {
                    iVar4 = 3;
                }
            }
            else {
                iVar4 = 2;
            }
        }
        else {
            iVar4 = 1;
        }
        iVar1 = pcVar3;
        if (iVar1 == 8) {
            iVar5 = 1;
        }
        else {
            if (iVar1 == 2) {
                usleep_range_state(1000,0x44c,2);
                return 0;
            }
            if (iVar1 != 1) {
                return 0;
            }
            iVar5 = 0;
        }
        sym.wcd938x_micbias_control(iVar8 + -0xd0,iVar4,iVar5,1);
        return 0;
    }
    return 0;
}


// ===== sym.wcd938x_enable_rx2 @ 0x0801e9f8 (size 584) =====

ulong sym.wcd938x_enable_rx2(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    char *arg3;
    char *arg3_00;
    int64_t iVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar3;
    int64_t arg1_00;
    uint64_t uVar4;
    int64_t iVar5;
    ulong unaff_x30;
    uint uStack_8c;
    uchar auStack_88 [4];
    uchar auStack_84 [4];
    uchar auStack_80 [4];
    char acStack_7c [4];
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    uint64_t uStack_60;
    int64_t iStack_58;
    uint uStack_4c;
    uchar auStack_48 [4];
    uchar auStack_44 [4];
    uchar auStack_40 [4];
    char acStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    uVar4 = arg2 & 0xffffffff;
    iStack_38 = *(iVar2 + 0x5e0);
    arg3 = "%s wname: %s event: %d\n";
    iVar2 = *(arg1 + 0x28);
    iVar3 = iVar2 + -0xd0;
    iVar5 = *(*(iVar2 + -0xb8) + 0x98);
    _dev_printk(0x800991b,*(iVar2 + -0xb8),"%s wname: %s event: %d\n","wcd938x_enable_rx2",*(arg1 + 8),uVar4);
    if (arg2 == 8) {
        uVar4 = *(*(iVar2 + -0xb8) + 0x98);
        acStack_3c[0] = '\0';
        auStack_44[0] = 0;
        auStack_48[0] = 0;
        iVar1 = sym.wcd938x_set_port_params(iVar3,0xf,acStack_3c,auStack_40);
        if (iVar1 == 0) {
            swr_disconnect_port(*(uVar4 + 0x28),acStack_3c,1,auStack_44,auStack_48);
        }
        if (*(iVar5 + 0x121) != '\0') {
            uVar4 = *(*(iVar2 + -0xb8) + 0x98);
            acStack_3c[0] = '\0';
            auStack_44[0] = 0;
            auStack_48[0] = 0;
            iVar1 = sym.wcd938x_set_port_params(iVar3,0x11,acStack_3c,auStack_40);
            if (iVar1 == 0) {
                swr_disconnect_port(*(uVar4 + 0x28),acStack_3c,1,auStack_44,auStack_48);
            }
        }
        sym.wcd938x_rx_clk_disable(iVar3);
        arg3 = 0x2;
        snd_soc_component_update_bits(iVar3,0x3409,2,0);
    }
    else if (arg2 == 1) {
        arg3 = acStack_3c;
        uVar4 = *(*(iVar2 + -0xb8) + 0x98);
        acStack_3c[0] = '\0';
        auStack_40[0] = 0;
        auStack_44[0] = 0;
        auStack_48[0] = 0;
        uStack_4c = 0;
        iVar1 = sym.wcd938x_set_port_params(iVar3,0xf,arg3,auStack_40);
        if (iVar1 == 0) {
            arg3 = 0x1;
            swr_connect_port(*(uVar4 + 0x28),acStack_3c,1,auStack_44,&uStack_4c,auStack_40,auStack_48);
        }
        if (*(iVar5 + 0x121) != '\0') {
            arg3 = acStack_3c;
            uVar4 = *(*(iVar2 + -0xb8) + 0x98);
            acStack_3c[0] = '\0';
            auStack_40[0] = 0;
            auStack_44[0] = 0;
            auStack_48[0] = 0;
            uStack_4c = 0;
            iVar1 = sym.wcd938x_set_port_params(iVar3,0x11,arg3,auStack_40);
            if (iVar1 == 0) {
                arg3 = 0x1;
                swr_connect_port(*(uVar4 + 0x28),acStack_3c,1,auStack_44,&uStack_4c,auStack_40,auStack_48);
            }
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return 0;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18 = sym.wcd938x_enable_rx3;
    pcStack_68 = sym.wcd938x_enable_rx3;
    iVar2 = sp_el0;
    iStack_78 = *(iVar2 + 0x5e0);
    arg3_00 = "%s wname: %s event: %d\n";
    iVar2 = *(iVar5 + 0x28);
    arg1_00 = iVar2 + -0xd0;
    puStack_70 = &stack0xffffffffffffffd0;
    uStack_60 = uVar4;
    iStack_58 = iVar3;
    _dev_printk(0x800991b,*(iVar2 + -0xb8),"%s wname: %s event: %d\n","wcd938x_enable_rx3",*(iVar5 + 8),
                arg3 & 0xffffffff);
    if (arg3 == 8) {
        iVar2 = *(*(iVar2 + -0xb8) + 0x98);
        acStack_7c[0] = '\0';
        auStack_84[0] = 0;
        auStack_88[0] = 0;
        iVar1 = sym.wcd938x_set_port_params(arg1_00,0x13,acStack_7c,auStack_80);
        if (iVar1 == 0) {
            swr_disconnect_port(*(iVar2 + 0x28),acStack_7c,1,auStack_84,auStack_88);
        }
        usleep_range_state(6000,0x177a,2);
        sym.wcd938x_rx_clk_disable(arg1_00);
        arg3_00 = 0x4;
        snd_soc_component_update_bits(arg1_00,0x3409,4,0);
    }
    else if (arg3 == 1) {
        arg3_00 = acStack_7c;
        iVar2 = *(*(iVar2 + -0xb8) + 0x98);
        acStack_7c[0] = '\0';
        auStack_80[0] = 0;
        auStack_84[0] = 0;
        auStack_88[0] = 0;
        uStack_8c = 0;
        iVar1 = sym.wcd938x_set_port_params(arg1_00,0x13,arg3_00,auStack_80);
        if (iVar1 == 0) {
            arg3_00 = 0x1;
            swr_connect_port(*(iVar2 + 0x28),acStack_7c,1,auStack_84,&uStack_8c,auStack_80,auStack_88);
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_78) {
        return 0;
    }
    iVar2 = __stack_chk_fail();
    *extraout_x18_00 = sym.wcd938x_codec_enable_micbias_pullup;
    iVar5 = *(iVar2 + 0x28);
    _dev_printk(0x800991b,*(iVar5 + -0xb8),"%s: wname: %s, event: %d\n","__wcd938x_codec_enable_micbias_pullup",
                *(iVar2 + 8),arg3_00 & 0xffffffff);
    iVar3 = strnstr(*(iVar2 + 8),"VA MIC BIAS1",0xd);
    if (iVar3 == 0) {
        iVar3 = strnstr(*(iVar2 + 8),"VA MIC BIAS2",0xd);
        if (iVar3 == 0) {
            iVar3 = strnstr(*(iVar2 + 8),"VA MIC BIAS3",0xd);
            if (iVar3 == 0) {
                iVar2 = strnstr(*(iVar2 + 8),"VA MIC BIAS4",0xd);
                if (iVar2 == 0) {
                    return 0xffffffea;
                }
                iVar2 = 4;
            }
            else {
                iVar2 = 3;
            }
        }
        else {
            iVar2 = 2;
        }
    }
    else {
        iVar2 = 1;
    }
    iVar1 = arg3_00;
    if (iVar1 == 8) {
        iVar3 = 1;
    }
    else {
        if (iVar1 == 2) {
            usleep_range_state(1000,0x44c,2);
            return 0;
        }
        if (iVar1 != 1) {
            return 0;
        }
        iVar3 = 0;
    }
    sym.wcd938x_micbias_control(iVar5 + -0xd0,iVar2,iVar3,1);
    return 0;
}


// ===== sym.wcd938x_enable_rx3 @ 0x0801ec40 (size 388) =====

ulong sym.wcd938x_enable_rx3(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    char *arg3;
    int64_t iVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    int64_t iVar4;
    ulong unaff_x30;
    uint uStack_3c;
    uchar auStack_38 [4];
    uchar auStack_34 [4];
    uchar auStack_30 [4];
    char acStack_2c [4];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    arg3 = "%s wname: %s event: %d\n";
    iVar2 = *(arg1 + 0x28);
    iVar3 = iVar2 + -0xd0;
    _dev_printk(0x800991b,*(iVar2 + -0xb8),"%s wname: %s event: %d\n","wcd938x_enable_rx3",*(arg1 + 8),
                arg2 & 0xffffffff);
    if (arg2 == 8) {
        iVar2 = *(*(iVar2 + -0xb8) + 0x98);
        acStack_2c[0] = '\0';
        auStack_34[0] = 0;
        auStack_38[0] = 0;
        iVar1 = sym.wcd938x_set_port_params(iVar3,0x13,acStack_2c,auStack_30);
        if (iVar1 == 0) {
            swr_disconnect_port(*(iVar2 + 0x28),acStack_2c,1,auStack_34,auStack_38);
        }
        usleep_range_state(6000,0x177a,2);
        sym.wcd938x_rx_clk_disable(iVar3);
        arg3 = 0x4;
        snd_soc_component_update_bits(iVar3,0x3409,4,0);
    }
    else if (arg2 == 1) {
        arg3 = acStack_2c;
        iVar2 = *(*(iVar2 + -0xb8) + 0x98);
        acStack_2c[0] = '\0';
        auStack_30[0] = 0;
        auStack_34[0] = 0;
        auStack_38[0] = 0;
        uStack_3c = 0;
        iVar1 = sym.wcd938x_set_port_params(iVar3,0x13,arg3,auStack_30);
        if (iVar1 == 0) {
            arg3 = 0x1;
            swr_connect_port(*(iVar2 + 0x28),acStack_2c,1,auStack_34,&uStack_3c,auStack_30,auStack_38);
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return 0;
    }
    iVar2 = __stack_chk_fail();
    *extraout_x18 = sym.wcd938x_codec_enable_micbias_pullup;
    iVar4 = *(iVar2 + 0x28);
    _dev_printk(0x800991b,*(iVar4 + -0xb8),"%s: wname: %s, event: %d\n","__wcd938x_codec_enable_micbias_pullup",
                *(iVar2 + 8),arg3 & 0xffffffff);
    iVar3 = strnstr(*(iVar2 + 8),"VA MIC BIAS1",0xd);
    if (iVar3 == 0) {
        iVar3 = strnstr(*(iVar2 + 8),"VA MIC BIAS2",0xd);
        if (iVar3 == 0) {
            iVar3 = strnstr(*(iVar2 + 8),"VA MIC BIAS3",0xd);
            if (iVar3 == 0) {
                iVar2 = strnstr(*(iVar2 + 8),"VA MIC BIAS4",0xd);
                if (iVar2 == 0) {
                    return 0xffffffea;
                }
                iVar2 = 4;
            }
            else {
                iVar2 = 3;
            }
        }
        else {
            iVar2 = 2;
        }
    }
    else {
        iVar2 = 1;
    }
    iVar1 = arg3;
    if (iVar1 == 8) {
        iVar3 = 1;
    }
    else {
        if (iVar1 == 2) {
            usleep_range_state(1000,0x44c,2);
            return 0;
        }
        if (iVar1 != 1) {
            return 0;
        }
        iVar3 = 0;
    }
    sym.wcd938x_micbias_control(iVar4 + -0xd0,iVar2,iVar3,1);
    return 0;
}


// ===== sym.wcd938x_codec_enable_micbias_pullup @ 0x0801edc4 (size 304) =====

ulong sym.wcd938x_codec_enable_micbias_pullup(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t iVar1;
    int64_t arg3;
    ulong *in_x18;
    int iVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x28);
    _dev_printk(0x800991b,*(iVar3 + -0xb8),"%s: wname: %s, event: %d\n","__wcd938x_codec_enable_micbias_pullup",
                *(arg1 + 8),arg2 & 0xffffffff);
    iVar1 = strnstr(*(arg1 + 8),"VA MIC BIAS1",0xd);
    if (iVar1 == 0) {
        iVar1 = strnstr(*(arg1 + 8),"VA MIC BIAS2",0xd);
        if (iVar1 == 0) {
            iVar1 = strnstr(*(arg1 + 8),"VA MIC BIAS3",0xd);
            if (iVar1 == 0) {
                iVar1 = strnstr(*(arg1 + 8),"VA MIC BIAS4",0xd);
                if (iVar1 == 0) {
                    return 0xffffffea;
                }
                iVar1 = 4;
            }
            else {
                iVar1 = 3;
            }
        }
        else {
            iVar1 = 2;
        }
    }
    else {
        iVar1 = 1;
    }
    iVar2 = arg2;
    if (iVar2 == 8) {
        arg3 = 1;
    }
    else {
        if (iVar2 == 2) {
            usleep_range_state(1000,0x44c,2);
            return 0;
        }
        if (iVar2 != 1) {
            return 0;
        }
        arg3 = 0;
    }
    sym.wcd938x_micbias_control(iVar3 + -0xd0,iVar1,arg3,1);
    return 0;
}


// ===== sym.wcd938x_tx_connect_port @ 0x0801eef4 (size 348) =====

ulong sym.wcd938x_tx_connect_port(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    code *pcVar2;
    bool bVar3;
    int iVar4;
    ulong uVar5;
    int64_t iVar6;
    char *pcVar7;
    uchar *arg3_00;
    uint8_t *arg4_00;
    uint8_t *puVar8;
    uint64_t uVar9;
    uint8_t *puVar10;
    uint8_t *puVar11;
    int64_t iVar12;
    int64_t iVar13;
    uint64_t uVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar15;
    int64_t iVar16;
    ulong unaff_x30;
    uchar auVar17 [12];
    int iStack_5c;
    uint8_t auStack_58 [4];
    uint8_t auStack_54 [4];
    uint8_t auStack_50 [4];
    uchar auStack_4c [4];
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar16 = sp_el0;
    iStack_48 = *(iVar16 + 0x5e0);
    arg3_00 = auStack_4c;
    arg4_00 = auStack_50;
    puVar8 = auStack_54;
    puVar10 = &iStack_5c;
    puVar11 = auStack_58;
    uVar15 = 0;
    auStack_4c[0] = 0;
    iVar16 = *(*(arg1 + 0x18) + 0x98);
    auStack_50[0] = 0;
    auStack_54[0] = 0;
    auStack_58[0] = 0;
    iStack_5c = 0;
    uVar5 = sym.wcd938x_set_port_params(arg1,arg2,arg3_00,arg4_00);
    if (uVar5 == 0) {
        if (arg3 != 0) {
            iStack_5c = arg3;
        }
        uVar1 = arg2 - 0x1d;
        if ((uVar1 & 0xff) < 0xd) {
            uVar9 = *(*(uVar1 * 8 + 0x80179e0) * 2 + 0x800ce01);
            auStack_58[0] = *(iVar16 + uVar9 + 0xc79);
        }
        else {
            uVar9 = 0xffffffea;
        }
        puVar10 = auStack_58[0];
        _dev_printk(0x800991b,*(arg1 + 0x18),"%s slv_ch_idx: %d, mstr_ch_type: %d\n","wcd938x_tx_connect_port",uVar9
                   );
        arg4_00 = auStack_54;
        if ((arg4 & 0xffU) == 0) {
            puVar8 = auStack_58;
            arg3_00 = 0x1;
            uVar5 = swr_disconnect_port(*(iVar16 + 0x30),auStack_4c);
        }
        else {
            puVar8 = &iStack_5c;
            puVar10 = auStack_50;
            puVar11 = auStack_58;
            arg3_00 = 0x1;
            uVar5 = swr_connect_port();
        }
    }
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_48) {
        return uVar5;
    }
    auVar17 = __stack_chk_fail();
    iVar6 = auVar17._0_8_;
    *extraout_x18 = sym.wcd938x_set_port_params;
    uVar15 = uVar15 & 0xff;
    iVar16 = *(*(iVar6 + 0x18) + 0x98);
    if (uVar15 == 1) {
        iVar13 = 0x169;
        iVar12 = 0x66c;
    }
    else {
        if (uVar15 != 0) {
            iVar4 = ___ratelimit(obj.wcd938x_set_port_params._rs,"wcd938x_set_port_params");
            if (iVar4 == 0) {
                return 0xffffffea;
            }
            uVar5 = *(iVar6 + 0x18);
            pcVar7 = "%s Invalid path selected %u\n";
            goto code_r0x0801f23c;
        }
        iVar13 = 0x168;
        iVar12 = 0x16c;
    }
    uVar14 = *(iVar16 + iVar13);
    iVar13 = 0;
    bVar3 = false;
    iVar16 = iVar16 + iVar12;
    uVar15 = auVar17._8_4_ & 0xff;
    iVar12 = 1;
    uVar9 = 0;
    do {
        if (iVar13 == 0x500) {
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x5512,0x801f258);
            (*pcVar2)();
        }
        if (*(iVar16 + iVar13) == uVar15) {
            iVar12 = 0;
joined_r0x0801f180:
            if (!bVar3) {
                *arg3_00 = uVar9;
                iVar13 = iVar16 + iVar12 * 0x14 + iVar13;
                *arg4_00 = *(iVar13 + 0xc);
                *puVar8 = *(iVar13 + 8);
                *puVar10 = *(iVar13 + 0x10);
                *puVar11 = *(iVar13 + 4);
                return 0;
            }
            break;
        }
        if (*(iVar16 + iVar13 + 0x14) == uVar15) goto joined_r0x0801f180;
        if (*(iVar16 + iVar13 + 0x28) == uVar15) {
            iVar12 = 2;
            goto joined_r0x0801f180;
        }
        if (*(iVar16 + iVar13 + 0x3c) == uVar15) {
            iVar12 = 3;
            goto joined_r0x0801f180;
        }
        if (*(iVar16 + iVar13 + 0x50) == uVar15) {
            iVar12 = 4;
            goto joined_r0x0801f180;
        }
        if (*(iVar16 + iVar13 + 100) == uVar15) {
            iVar12 = 5;
            goto joined_r0x0801f180;
        }
        if (*(iVar16 + iVar13 + 0x78) == uVar15) {
            iVar12 = 6;
            goto joined_r0x0801f180;
        }
        if (*(iVar16 + iVar13 + 0x8c) == uVar15) {
            iVar12 = 7;
            goto joined_r0x0801f180;
        }
        bVar3 = uVar14 <= uVar9;
        iVar13 = iVar13 + 0xa0;
        uVar9 = uVar9 + 1;
    } while (uVar14 * 0xa0 + 0xa0 != iVar13);
    iVar4 = ___ratelimit(obj.wcd938x_set_port_params._rs.261,"wcd938x_set_port_params");
    if (iVar4 == 0) {
        return 0xffffffea;
    }
    uVar5 = *(iVar6 + 0x18);
    pcVar7 = "%s Failed to find slave port for type %u\n";
code_r0x0801f23c:
    _dev_err(uVar5,pcVar7,"wcd938x_set_port_params",uVar15);
    return 0xffffffea;
}


// ===== sym.wcd938x_set_port_params @ 0x0801f050 (size 520) =====

ulong sym.wcd938x_set_port_params(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    code *pcVar1;
    bool bVar2;
    int iVar3;
    ulong uVar4;
    char *pcVar5;
    uchar *in_x4;
    uint *in_x5;
    uchar *in_x6;
    uint32_t in_w7;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint64_t uVar10;
    ulong *in_x18;
    uint32_t uVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar11 = in_w7 & 0xff;
    iVar7 = *(*(arg1 + 0x18) + 0x98);
    if (uVar11 == 1) {
        iVar9 = 0x169;
        iVar8 = 0x66c;
    }
    else {
        if (uVar11 != 0) {
            iVar3 = ___ratelimit(obj.wcd938x_set_port_params._rs,"wcd938x_set_port_params");
            if (iVar3 == 0) {
                return 0xffffffea;
            }
            uVar4 = *(arg1 + 0x18);
            pcVar5 = "%s Invalid path selected %u\n";
            goto code_r0x0801f23c;
        }
        iVar9 = 0x168;
        iVar8 = 0x16c;
    }
    uVar10 = *(iVar7 + iVar9);
    iVar9 = 0;
    bVar2 = false;
    iVar7 = iVar7 + iVar8;
    uVar11 = arg2 & 0xff;
    iVar8 = 1;
    uVar6 = 0;
    do {
        if (iVar9 == 0x500) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5512,0x801f258);
            (*pcVar1)();
        }
        if (*(iVar7 + iVar9) == uVar11) {
            iVar8 = 0;
joined_r0x0801f180:
            if (!bVar2) {
                *arg3 = uVar6;
                iVar9 = iVar7 + iVar8 * 0x14 + iVar9;
                *arg4 = *(iVar9 + 0xc);
                *in_x4 = *(iVar9 + 8);
                *in_x5 = *(iVar9 + 0x10);
                *in_x6 = *(iVar9 + 4);
                return 0;
            }
            break;
        }
        if (*(iVar7 + iVar9 + 0x14) == uVar11) goto joined_r0x0801f180;
        if (*(iVar7 + iVar9 + 0x28) == uVar11) {
            iVar8 = 2;
            goto joined_r0x0801f180;
        }
        if (*(iVar7 + iVar9 + 0x3c) == uVar11) {
            iVar8 = 3;
            goto joined_r0x0801f180;
        }
        if (*(iVar7 + iVar9 + 0x50) == uVar11) {
            iVar8 = 4;
            goto joined_r0x0801f180;
        }
        if (*(iVar7 + iVar9 + 100) == uVar11) {
            iVar8 = 5;
            goto joined_r0x0801f180;
        }
        if (*(iVar7 + iVar9 + 0x78) == uVar11) {
            iVar8 = 6;
            goto joined_r0x0801f180;
        }
        if (*(iVar7 + iVar9 + 0x8c) == uVar11) {
            iVar8 = 7;
            goto joined_r0x0801f180;
        }
        bVar2 = uVar10 <= uVar6;
        iVar9 = iVar9 + 0xa0;
        uVar6 = uVar6 + 1;
    } while (uVar10 * 0xa0 + 0xa0 != iVar9);
    iVar3 = ___ratelimit(obj.wcd938x_set_port_params._rs.261,"wcd938x_set_port_params");
    if (iVar3 == 0) {
        return 0xffffffea;
    }
    uVar4 = *(arg1 + 0x18);
    pcVar5 = "%s Failed to find slave port for type %u\n";
code_r0x0801f23c:
    _dev_err(uVar4,pcVar5,"wcd938x_set_port_params",uVar11);
    return 0xffffffea;
}


// ===== sym.__wcd938x_codec_enable_micbias @ 0x0801f258 (size 304) =====

ulong sym.__wcd938x_codec_enable_micbias(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t arg3;
    ulong *in_x18;
    int iVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x28);
    _dev_printk(0x800991b,*(iVar3 + -0xb8),"%s: wname: %s, event: %d\n","__wcd938x_codec_enable_micbias",*(arg1 + 8)
                ,arg2 & 0xffffffff);
    iVar1 = strnstr(*(arg1 + 8),"MIC BIAS1",10);
    if (iVar1 == 0) {
        iVar1 = strnstr(*(arg1 + 8),"MIC BIAS2",10);
        if (iVar1 == 0) {
            iVar1 = strnstr(*(arg1 + 8),"MIC BIAS3",10);
            if (iVar1 == 0) {
                iVar1 = strnstr(*(arg1 + 8),"MIC BIAS4",10);
                if (iVar1 == 0) {
                    return 0xffffffea;
                }
                iVar1 = 4;
            }
            else {
                iVar1 = 3;
            }
        }
        else {
            iVar1 = 2;
        }
    }
    else {
        iVar1 = 1;
    }
    iVar2 = arg2;
    if (iVar2 == 8) {
        arg3 = 3;
    }
    else {
        if (iVar2 == 2) {
            usleep_range_state(1000,0x44c,2);
            return 0;
        }
        if (iVar2 != 1) {
            return 0;
        }
        arg3 = 2;
    }
    sym.wcd938x_micbias_control(iVar3 + -0xd0,iVar1,arg3,1);
    return 0;
}


// ===== sym.wcd938x_rx_clk_enable @ 0x0801f388 (size 208) =====

void sym.wcd938x_rx_clk_enable(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(arg1 + 0x18) + 0x98);
    iVar1 = *(iVar2 + 0x158);
    if (iVar1 == 0) {
        snd_soc_component_update_bits(arg1,0x3408,1,1);
        snd_soc_component_update_bits(arg1,0x3008,1,1);
        snd_soc_component_update_bits(arg1,0x340d,0x40,0);
        snd_soc_component_update_bits(arg1,0x340e,0x40,0);
        snd_soc_component_update_bits(arg1,0x340f,0x40,0);
        snd_soc_component_update_bits(arg1,0x3408,2,2);
        snd_soc_component_update_bits(arg1,0x3128,0x10,0x10);
        iVar1 = *(iVar2 + 0x158);
    }
    *(iVar2 + 0x158) = iVar1 + 1;
    return;
}


// ===== sym.wcd938x_rx_clk_disable @ 0x0801f458 (size 164) =====

void sym.wcd938x_rx_clk_disable(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(arg1 + 0x18) + 0x98);
    iVar1 = *(iVar2 + 0x158) + -1;
    *(iVar2 + 0x158) = iVar1;
    if (iVar1 == 0) {
        snd_soc_component_update_bits(arg1,0x3008,0x40,0);
        snd_soc_component_update_bits(arg1,0x3008,0x80,0);
        snd_soc_component_update_bits(arg1,0x3008,1,0);
        snd_soc_component_update_bits(arg1,0x3408,2,0);
        snd_soc_component_update_bits(arg1,0x3408,1,0);
    }
    return;
}


// ===== sym.wcd938x_init_reg @ 0x0801f4fc (size 640) =====

void sym.wcd938x_init_reg(int64_t arg1)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    snd_soc_component_update_bits(arg1,0x3103,0xe,0xe);
    snd_soc_component_update_bits(arg1,0x3103,0x80,0x80);
    usleep_range_state(1000,0x3f2,2);
    snd_soc_component_update_bits(arg1,0x3103,0x40,0x40);
    usleep_range_state(1000,0x3f2,2);
    snd_soc_component_update_bits(arg1,0x312a,0x10,0);
    snd_soc_component_update_bits(arg1,0x3029,0xf0,0x80);
    snd_soc_component_update_bits(arg1,0x3001,0x80,0x80);
    snd_soc_component_update_bits(arg1,0x3001,0x40,0x40);
    usleep_range_state(10000,0x271a,2);
    snd_soc_component_update_bits(arg1,0x3001,0x40,0);
    snd_soc_component_update_bits(arg1,0x3132,0xf0,0);
    snd_soc_component_update_bits(arg1,0x3140,0x1f,0x15);
    snd_soc_component_update_bits(arg1,0x3141,0x1f,0x15);
    snd_soc_component_update_bits(arg1,0x30dd,0xc0,0x80);
    snd_soc_component_update_bits(arg1,0x345b,2,2);
    snd_soc_component_update_bits(arg1,0x31e1,0xff,0x14);
    snd_soc_component_update_bits(arg1,0x31df,0x1f,8);
    snd_soc_component_update_bits(arg1,0x34d0,0xff,0x55);
    snd_soc_component_update_bits(arg1,0x34d1,0xff,0x44);
    snd_soc_component_update_bits(arg1,0x34d2,0xff,0x11);
    snd_soc_component_update_bits(arg1,0x34d3,0xff,0);
    snd_soc_component_update_bits(arg1,0x34d4,0xff,0);
    snd_soc_component_update_bits(arg1,0x306b,0xe0,0xe0);
    snd_soc_component_update_bits(arg1,0x306e,0xe0,0xe0);
    snd_soc_component_update_bits(arg1,0x3071,0xe0,0xe0);
    snd_soc_component_update_bits(arg1,0x3074,0xe0,0xe0);
    snd_soc_component_update_bits(arg1,0x308f,1,0);
    uVar1 = snd_soc_component_read(arg1,0x34ce);
    snd_soc_component_update_bits(arg1,0x3103,0xe,(uVar1 & 7) << 1);
    snd_soc_component_update_bits(arg1,0x30e2,0xc0,0xc0);
    return;
}


// ===== sym.wcd938x_event_notify @ 0x0801f77c (size 1320) =====

ulong sym.wcd938x_event_notify(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    uint32_t uVar5;
    char *pcVar6;
    uchar uVar7;
    ulong *in_x18;
    int64_t iVar8;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(arg3 + 0x98);
    uVar5 = (arg2 & 0xffff) - 1;
    iVar8 = piVar9[2];
    if (uVar5 < 7) {
    //switch table (7 cases) at 0x8001bb0
        switch(*(uVar5 * 4 + 0x8001bb0) + 0x801f7b4) {
        case 0x801f7c8:
            puVar1 = piVar9 + 0x2c;
            if ((piVar9[0x2c] & 1U) == 0) {
                if ((*puVar1 >> 1 & 1) != 0) goto code_r0x0801f9c8;
code_r0x0801f7dc:
                if ((*puVar1 >> 2 & 1) != 0) goto code_r0x0801fa04;
code_r0x0801f7e4:
                uVar5 = *puVar1;
            }
            else {
                snd_soc_component_update_bits(iVar8,0x300f,0x40,0);
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar3) {
                        *puVar1 = *puVar1 | 0x200;
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar3) {
                        *puVar1 = *puVar1 & 0xfffffffffffffffe;
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
                if ((*puVar1 >> 1 & 1) == 0) goto code_r0x0801f7dc;
code_r0x0801f9c8:
                snd_soc_component_update_bits(iVar8,0x300f,0x20,0);
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar3) {
                        *puVar1 = *puVar1 | 0x400;
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar3) {
                        *puVar1 = *puVar1 & 0xfffffffffffffffd;
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
                if ((*puVar1 >> 2 & 1) == 0) goto code_r0x0801f7e4;
code_r0x0801fa04:
                snd_soc_component_update_bits(iVar8,0x3011,0x40,0);
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar3) {
                        *puVar1 = *puVar1 | 0x800;
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar3) {
                        *puVar1 = *puVar1 & 0xfffffffffffffffb;
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
                uVar5 = *puVar1;
            }
            if ((uVar5 >> 3 & 1) != 0) {
                snd_soc_component_update_bits(iVar8,0x3011,0x20,0);
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar3) {
                        *puVar1 = *puVar1 | 0x1000;
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar3) {
                        *puVar1 = *puVar1 & 0xfffffffffffffff7;
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
            }
            break;
        case 0x801f7f4:
            snd_soc_component_update_bits(iVar8,0x3009,0xc0,0);
            snd_soc_component_update_bits(iVar8,0x300a,0x80,0);
            snd_soc_component_update_bits(iVar8,0x3128,0x80,0);
            break;
        case 0x801f838:
            snd_soc_component_update_bits(iVar8,0x3407,6,arg2 >> 0xf & 0xfffffffe);
            break;
        case 0x801f858:
            sym.wcd938x_reset(*piVar9);
            usleep_range_state(10000,0x271a,2);
            sym.wcd938x_get_logical_addr(piVar9[6]);
            sym.wcd938x_get_logical_addr(piVar9[5]);
            sym.wcd938x_init_reg(iVar8);
            regcache_mark_dirty(piVar9[4]);
            regcache_sync(piVar9[4]);
            iVar4 = sym.wcd938x_mbhc_post_ssr_init(piVar9[0x20],iVar8);
            if (iVar4 == 0) {
                sym.wcd938x_mbhc_hs_detect(iVar8);
            }
            else {
                iVar4 = ___ratelimit(obj.wcd938x_event_notify._rs,"wcd938x_event_notify");
                if (iVar4 != 0) {
                    _dev_err(*(iVar8 + 0x18),"%s: mbhc initialization failed\n","wcd938x_event_notify");
                }
            }
            *(piVar9[0x20] + 0x3d0) = 0;
            *(piVar9 + 399) = 1;
            if (*(piVar9 + 0xc87) != '\0') {
                blocking_notifier_call_chain(piVar9 + 0x191,1,0);
            }
            if (*(piVar9 + 0xc86) != '\0') {
                iVar8 = -500;
                do {
                    __const_udelay(0x418958);
                    bVar3 = iVar8 != -1;
                    iVar8 = iVar8 + 1;
                } while (bVar3);
            }
            break;
        case 0x801f8e4:
            *(piVar9 + 399) = 0;
            if (*(piVar9 + 0xc87) != '\0') {
                blocking_notifier_call_chain(piVar9 + 0x191,0,0);
            }
            *(piVar9[0x20] + 0x3d0) = 1;
            if ((*(*(piVar9[0x20] + 0x90) + 0x58) == 0) ||
               (uVar5 = snd_soc_component_read(iVar8,0x3014), (uVar5 >> 5 & 1) != 0)) {
                uVar7 = 0;
            }
            else {
                uVar7 = 1;
            }
            *(piVar9 + 0xc86) = uVar7;
            sym.wcd938x_mbhc_ssr_down(piVar9[0x20],iVar8);
            iVar8 = *piVar9;
            if ((iVar8 != 0) && (*(iVar8 + 0x98) != 0)) {
                if (*(*(iVar8 + 0x98) + 0x18) == 0) {
                    iVar4 = ___ratelimit(obj.wcd938x_reset_low._rs,"wcd938x_reset_low");
                    if (iVar4 == 0) {
                        return 0;
                    }
                    pcVar6 = "%s: reset gpio device node not specified\n";
                }
                else {
                    iVar4 = msm_cdc_pinctrl_select_sleep_state();
                    if (iVar4 == 0) {
                        usleep_range_state(0x14,0x1e,2);
                        return 0;
                    }
                    iVar4 = ___ratelimit(obj.wcd938x_reset_low._rs.854,"wcd938x_reset_low");
                    if (iVar4 == 0) {
                        return 0;
                    }
                    pcVar6 = "%s: wcd sleep state request fail!\n";
                }
                _dev_err(iVar8,pcVar6,"wcd938x_reset_low");
            }
            break;
        case 0x801fb34:
            goto code_r0x0801fb34;
        }
    }
    else {
code_r0x0801fb34:
        _dev_printk(0x800991b,*(iVar8 + 0x18),"%s: invalid event %d\n","wcd938x_event_notify",arg2 & 0xffff);
    }
    return 0;
}


// ===== sym.wcd938x_codec_debug_get @ 0x0801fca4 (size 16) =====

ulong sym.wcd938x_codec_debug_get(int64_t arg1)

{
    return 0;
}


// ===== sym.wcd938x_codec_debug_set @ 0x0801fcb4 (size 16844) =====

ulong sym.wcd938x_codec_debug_set(int64_t arg1)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar2;
    int64_t iVar3;
    ulong unaff_x30;
    uchar auVar4 [16];
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_2c = 0;
    puVar2 = *(*(*(arg1 + 0x80) + 0x18) + 0x98);
    regmap_read(puVar2[4],0x3000,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_BASE_ADDRESS = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3000,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_PAGE_REGISTER = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3001,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_BIAS = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3008,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_RX_SUPPLIES = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3009,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_HPH = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x300a,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_EAR = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x300b,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_EAR_COMPANDER_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x300e,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_TX_CH1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x300f,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_TX_CH2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3010,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_TX_CH3 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3011,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_TX_CH4 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3012,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_MICB1_MICB2_DSP_EN_LOGIC = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3013,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_MICB3_DSP_EN_LOGIC = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3014,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_MBHC_MECH = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3015,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_MBHC_ELECT = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3016,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_MBHC_ZDET = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3017,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_MBHC_RESULT_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3018,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_MBHC_RESULT_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3019,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_MBHC_RESULT_3 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x301a,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_MBHC_BTN0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x301b,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_MBHC_BTN1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x301c,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_MBHC_BTN2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x301d,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_MBHC_BTN3 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x301e,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_MBHC_BTN4 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x301f,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_MBHC_BTN5 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3020,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_MBHC_BTN6 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3021,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_MBHC_BTN7 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3022,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_MICB1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3023,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_MICB2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3024,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_MICB2_RAMP = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3025,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_MICB3 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3026,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_MICB4 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3028,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_BIAS_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3029,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_BIAS_VBG_FINE_ADJ = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3040,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_LDOL_VDDCX_ADJUST = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3041,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_LDOL_DISABLE_LDOL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3056,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MBHC_CTL_CLK = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3057,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MBHC_CTL_ANA = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3058,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MBHC_CTL_SPARE_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3059,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MBHC_CTL_SPARE_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x305a,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MBHC_CTL_BCS = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x305b,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MBHC_MOISTURE_DET_FSM_STATUS = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x305c,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MBHC_TEST_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3067,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_LDOH_MODE = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3068,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_LDOH_BIAS = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3069,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_LDOH_STB_LOADS = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x306a,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_LDOH_SLOWRAMP = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x306b,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MICB1_TEST_CTL_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x306c,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MICB1_TEST_CTL_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x306d,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MICB1_TEST_CTL_3 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x306e,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MICB2_TEST_CTL_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x306f,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MICB2_TEST_CTL_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3070,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MICB2_TEST_CTL_3 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3071,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MICB3_TEST_CTL_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3072,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MICB3_TEST_CTL_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3073,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MICB3_TEST_CTL_3 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3074,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MICB4_TEST_CTL_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3075,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MICB4_TEST_CTL_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3076,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MICB4_TEST_CTL_3 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3077,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_COM_ADC_VCM = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3078,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_COM_BIAS_ATEST = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3079,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_COM_SPARE1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x307a,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_COM_SPARE2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x307b,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_COM_TXFE_DIV_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x307c,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_COM_TXFE_DIV_START = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x307d,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_COM_SPARE3 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x307e,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_COM_SPARE4 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x307f,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_1_2_TEST_EN = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3080,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_1_2_ADC_IB = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3081,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_1_2_ATEST_REFCTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3082,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_1_2_TEST_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3083,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_1_2_TEST_BLK_EN1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3084,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_1_2_TXFE1_CLKDIV = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3085,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_1_2_SAR2_ERR = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3086,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_1_2_SAR1_ERR = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3087,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_3_4_TEST_EN = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3088,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_3_4_ADC_IB = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3089,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_3_4_ATEST_REFCTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x308a,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_3_4_TEST_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x308b,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_3_4_TEST_BLK_EN3 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x308c,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_3_4_TXFE3_CLKDIV = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x308d,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_3_4_SAR4_ERR = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x308e,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_3_4_SAR3_ERR = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x308f,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_3_4_TEST_BLK_EN2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3090,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_3_4_TXFE2_CLKDIV = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3091,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_3_4_SPARE1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3092,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_3_4_TEST_BLK_EN4 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3093,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_3_4_TXFE4_CLKDIV = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3094,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_3_4_SPARE2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3097,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_CLASSH_MODE_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3098,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_CLASSH_MODE_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3099,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_CLASSH_MODE_3 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x309a,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_CLASSH_CTRL_VCL_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x309b,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_CLASSH_CTRL_VCL_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x309c,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_CLASSH_CTRL_CCL_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x309d,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_CLASSH_CTRL_CCL_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x309e,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_CLASSH_CTRL_CCL_3 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x309f,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_CLASSH_CTRL_CCL_4 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30a0,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_CLASSH_CTRL_CCL_5 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30a1,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_CLASSH_BUCK_TMUX_A_D = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30a2,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_CLASSH_BUCK_SW_DRV_CNTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30a3,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_CLASSH_SPARE = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30a4,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_FLYBACK_EN = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30a5,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_FLYBACK_VNEG_CTRL_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30a6,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_FLYBACK_VNEG_CTRL_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30a7,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_FLYBACK_VNEG_CTRL_3 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30a8,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_FLYBACK_VNEG_CTRL_4 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30a9,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_FLYBACK_VNEG_CTRL_5 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30aa,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_FLYBACK_VNEG_CTRL_6 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30ab,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_FLYBACK_VNEG_CTRL_7 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30ac,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_FLYBACK_VNEG_CTRL_8 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30ad,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_FLYBACK_VNEG_CTRL_9 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30ae,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_FLYBACK_VNEGDAC_CTRL_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30af,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_FLYBACK_VNEGDAC_CTRL_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30b0,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_FLYBACK_VNEGDAC_CTRL_3 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30b1,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_FLYBACK_CTRL_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30b2,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_FLYBACK_TEST_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30b3,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_RX_AUX_SW_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30b4,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_RX_PA_AUX_IN_CONN = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30b5,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_RX_TIMER_DIV = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30b6,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_RX_OCP_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30b7,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_RX_OCP_COUNT = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30b8,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_RX_BIAS_EAR_DAC = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30b9,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_RX_BIAS_EAR_AMP = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30ba,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_RX_BIAS_HPH_LDO = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30bb,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_RX_BIAS_HPH_PA = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30bc,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_RX_BIAS_HPH_RDACBUFF_CNP2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30bd,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_RX_BIAS_HPH_RDAC_LDO = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30be,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_RX_BIAS_HPH_CNP1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30bf,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_RX_BIAS_HPH_LOWPOWER = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30c0,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_RX_BIAS_AUX_DAC = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30c1,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_RX_BIAS_AUX_AMP = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30c2,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_RX_BIAS_VNEGDAC_BLEEDER = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30c3,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_RX_BIAS_MISC = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30c4,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_RX_BIAS_BUCK_RST = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30c5,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_RX_BIAS_BUCK_VREF_ERRAMP = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30c6,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_RX_BIAS_FLYB_ERRAMP = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30c7,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_RX_BIAS_FLYB_BUFF = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30c8,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_RX_BIAS_FLYB_MID_RST = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30c9,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_L_STATUS = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30ca,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_R_STATUS = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30cb,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_CNP_EN = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30cc,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_CNP_WG_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30cd,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_CNP_WG_TIME = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30ce,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_OCP_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30cf,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_AUTO_CHOP = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30d0,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_CHOP_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30d1,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_PA_CTL1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30d2,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_PA_CTL2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30d3,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_L_EN = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30d4,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_L_TEST = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30d5,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_L_ATEST = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30d6,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_R_EN = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30d7,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_R_TEST = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30d8,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_R_ATEST = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30d9,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_RDAC_CLK_CTL1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30da,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_RDAC_CLK_CTL2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30db,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_RDAC_LDO_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30dc,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_RDAC_CHOP_CLK_LP_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30dd,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_REFBUFF_UHQA_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30de,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_REFBUFF_LP_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30df,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_L_DAC_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30e0,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_R_DAC_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30e1,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_SURGE_HPHLR_SURGE_COMP_SEL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30e2,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_SURGE_HPHLR_SURGE_EN = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30e3,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_SURGE_HPHLR_SURGE_MISC1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30e4,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_SURGE_HPHLR_SURGE_STATUS = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30e9,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_EAR_EAR_EN_REG = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30ea,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_EAR_EAR_PA_CON = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30eb,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_EAR_EAR_SP_CON = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30ec,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_EAR_EAR_DAC_CON = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30ed,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_EAR_EAR_CNP_FSM_CON = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30ee,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_EAR_TEST_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30ef,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_EAR_STATUS_REG_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x30f0,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_EAR_STATUS_REG_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3100,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_ANA_NEW_PAGE_REGISTER = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3101,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_NEW_ANA_HPH2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3102,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_NEW_ANA_HPH3 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3103,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_SLEEP_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3104,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_SLEEP_WATCHDOG_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x311f,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MBHC_NEW_ELECT_REM_CLAMP_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3120,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MBHC_NEW_CTL_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3121,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MBHC_NEW_CTL_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3122,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MBHC_NEW_PLUG_DETECT_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3123,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MBHC_NEW_ZDET_ANA_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3124,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MBHC_NEW_ZDET_RAMP_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3125,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MBHC_NEW_FSM_STATUS = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3126,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MBHC_NEW_ADC_RESULT = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3127,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_NEW_AMIC_MUX_CFG = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3128,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_AUX_AUXPA = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3129,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_LDORXTX_MODE = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x312a,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_LDORXTX_CONFIG = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x312c,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIE_CRACK_DIE_CRK_DET_EN = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x312d,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIE_CRACK_DIE_CRK_DET_OUT = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3132,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_NEW_INT_RDAC_GAIN_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3133,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_NEW_INT_RDAC_HD2_CTL_L = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3134,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_NEW_INT_RDAC_VREF_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3135,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_NEW_INT_RDAC_OVERRIDE_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3136,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_NEW_INT_RDAC_HD2_CTL_R = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3137,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_NEW_INT_PA_MISC1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3138,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_NEW_INT_PA_MISC2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3139,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_NEW_INT_PA_RDAC_MISC = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x313a,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_NEW_INT_HPH_TIMER1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x313b,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_NEW_INT_HPH_TIMER2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x313c,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_NEW_INT_HPH_TIMER3 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x313d,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_NEW_INT_HPH_TIMER4 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x313e,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_NEW_INT_PA_RDAC_MISC2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x313f,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_NEW_INT_PA_RDAC_MISC3 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3140,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_NEW_INT_RDAC_HD2_CTL_L_NEW = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3141,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_HPH_NEW_INT_RDAC_HD2_CTL_R_NEW = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3145,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_RX_NEW_INT_HPH_RDAC_BIAS_LOHIFI = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3146,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_RX_NEW_INT_HPH_RDAC_BIAS_ULP = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3147,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_RX_NEW_INT_HPH_RDAC_LDO_LP = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31af,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MBHC_NEW_INT_MOISTURE_DET_DC_CTRL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31b0,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MBHC_NEW_INT_MOISTURE_DET_POLLING_CTRL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31b1,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MBHC_NEW_INT_MECH_DET_CURRENT = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31b2,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_MBHC_NEW_INT_SPARE_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31b7,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_EAR_INT_NEW_EAR_CHOPPER_CON = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31b8,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_EAR_INT_NEW_CNP_VCM_CON1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31b9,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_EAR_INT_NEW_CNP_VCM_CON2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31ba,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_EAR_INT_NEW_EAR_DYNAMIC_BIAS = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31bd,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_AUX_INT_EN_REG = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31be,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_AUX_INT_PA_CTRL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31bf,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_AUX_INT_SP_CTRL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31c0,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_AUX_INT_DAC_CTRL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31c1,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_AUX_INT_CLK_CTRL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31c2,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_AUX_INT_TEST_CTRL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31c3,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_AUX_INT_STATUS_REG = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31c4,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_AUX_INT_MISC = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31c5,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_LDORXTX_INT_BIAS = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31c6,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_LDORXTX_INT_STB_LOADS_DTEST = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31c7,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_LDORXTX_INT_TEST0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31c8,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_LDORXTX_INT_STARTUP_TIMER = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31c9,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_LDORXTX_INT_TEST1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31ca,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_LDORXTX_INT_STATUS = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31d0,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_SLEEP_INT_WATCHDOG_CTL_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31d1,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_SLEEP_INT_WATCHDOG_CTL_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31d3,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIE_CRACK_INT_DIE_CRK_DET_INT1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31d4,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIE_CRACK_INT_DIE_CRK_DET_INT2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31d5,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_COM_NEW_INT_TXFE_DIVSTOP_L2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31d6,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_COM_NEW_INT_TXFE_DIVSTOP_L1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31d7,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_COM_NEW_INT_TXFE_DIVSTOP_L0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31d8,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_COM_NEW_INT_TXFE_DIVSTOP_ULP1P2M = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31d9,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_COM_NEW_INT_TXFE_DIVSTOP_ULP0P6M = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31da,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_COM_NEW_INT_TXFE_ICTRL_STG1_L2L1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31db,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_COM_NEW_INT_TXFE_ICTRL_STG1_L0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31dc,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_COM_NEW_INT_TXFE_ICTRL_STG1_ULP = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31dd,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_COM_NEW_INT_TXFE_ICTRL_STG2MAIN_L2L1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31de,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_COM_NEW_INT_TXFE_ICTRL_STG2MAIN_L0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31df,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_COM_NEW_INT_TXFE_ICTRL_STG2MAIN_ULP = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31e0,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_COM_NEW_INT_TXFE_ICTRL_STG2CASC_L2L1L0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31e1,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_COM_NEW_INT_TXFE_ICTRL_STG2CASC_ULP = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31e2,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_COM_NEW_INT_TXADC_SCBIAS_L2L1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31e3,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_COM_NEW_INT_TXADC_SCBIAS_L0ULP = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31e4,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_COM_NEW_INT_TXADC_INT_L2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31e5,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_COM_NEW_INT_TXADC_INT_L1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31e6,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_COM_NEW_INT_TXADC_INT_L0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x31e7,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_TX_COM_NEW_INT_TXADC_INT_ULP = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3400,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_PAGE_REGISTER = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3401,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CHIP_ID0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3402,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CHIP_ID1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3403,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CHIP_ID2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3404,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CHIP_ID3 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3405,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_SWR_TX_CLK_RATE = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3406,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_RST_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3407,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_TOP_CLK_CFG = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3408,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_ANA_CLK_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3409,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_DIG_CLK_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x340a,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_SWR_RST_EN = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x340b,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_PATH_MODE = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x340c,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_RX_RST = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x340d,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_RX0_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x340e,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_RX1_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x340f,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_RX2_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3410,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_TX_ANA_MODE_0_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3411,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_TX_ANA_MODE_2_3 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3414,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_COMP_CTL_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3417,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_ANA_TX_CLK_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3418,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_DSM_A1_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3419,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_DSM_A1_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x341a,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_DSM_A2_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x341b,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_DSM_A2_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x341c,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_DSM_A3_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x341d,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_DSM_A3_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x341e,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_DSM_A4_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x341f,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_DSM_A4_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3420,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_DSM_A5_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3421,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_DSM_A5_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3422,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_DSM_A6_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3423,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_DSM_A7_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3424,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_DSM_C_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3425,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_DSM_C_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3426,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_DSM_C_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3427,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_DSM_C_3 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3428,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_DSM_R1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3429,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_DSM_R2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x342a,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_DSM_R3 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x342b,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_DSM_R4 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x342c,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_DSM_R5 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x342d,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_DSM_R6 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x342e,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_DSM_R7 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x342f,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_AUX_DSM_A1_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3430,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_AUX_DSM_A1_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3431,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_AUX_DSM_A2_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3432,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_AUX_DSM_A2_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3433,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_AUX_DSM_A3_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3434,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_AUX_DSM_A3_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3435,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_AUX_DSM_A4_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3436,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_AUX_DSM_A4_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3437,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_AUX_DSM_A5_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3438,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_AUX_DSM_A5_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3439,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_AUX_DSM_A6_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x343a,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_AUX_DSM_A7_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x343b,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_AUX_DSM_C_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x343c,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_AUX_DSM_C_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x343d,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_AUX_DSM_C_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x343e,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_AUX_DSM_C_3 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x343f,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_AUX_DSM_R1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3440,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_AUX_DSM_R2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3441,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_AUX_DSM_R3 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3442,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_AUX_DSM_R4 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3443,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_AUX_DSM_R5 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3444,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_AUX_DSM_R6 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3445,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_AUX_DSM_R7 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3446,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_GAIN_RX_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3447,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_GAIN_RX_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3448,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_GAIN_DSD_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3449,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_GAIN_DSD_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x344a,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_GAIN_DSD_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x344b,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_AUX_GAIN_DSD_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x344c,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_AUX_GAIN_DSD_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x344d,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_AUX_GAIN_DSD_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x344e,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_HPH_GAIN_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x344f,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_AUX_GAIN_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3450,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_EAR_PATH_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3451,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_SWR_CLH = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3452,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_SWR_CLH_BYP = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3453,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_TX0_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3454,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_TX1_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3455,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_TX2_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3456,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_TX_RST = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3457,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_REQ_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3458,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_RST = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x345a,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_AMIC_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x345b,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_DMIC_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x345c,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_DMIC1_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x345d,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_DMIC2_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x345e,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_DMIC3_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x345f,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_DMIC4_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3460,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_PRG_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3461,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3462,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_DMIC_RATE_1_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3463,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_DMIC_RATE_3_4 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3465,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_PDM_WD_CTL0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3466,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_PDM_WD_CTL1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3467,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_PDM_WD_CTL2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x346a,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_INTR_MODE = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x346b,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_INTR_MASK_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x346c,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_INTR_MASK_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x346d,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_INTR_MASK_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x346e,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_INTR_STATUS_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x346f,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_INTR_STATUS_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3470,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_INTR_STATUS_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3471,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_INTR_CLEAR_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3472,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_INTR_CLEAR_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3473,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_INTR_CLEAR_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3474,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_INTR_LEVEL_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3475,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_INTR_LEVEL_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3476,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_INTR_LEVEL_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3477,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_INTR_SET_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3478,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_INTR_SET_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3479,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_INTR_SET_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x347a,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_INTR_TEST_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x347b,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_INTR_TEST_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x347c,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_INTR_TEST_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x347f,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_TX_MODE_DBG_EN = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3480,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_TX_MODE_DBG_0_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3481,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_TX_MODE_DBG_2_3 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3482,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_LB_IN_SEL_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3483,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_LOOP_BACK_MODE = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3484,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_SWR_DAC_TEST = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3485,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_SWR_HM_TEST_RX_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3486,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_SWR_HM_TEST_TX_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3487,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_SWR_HM_TEST_RX_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3488,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_SWR_HM_TEST_TX_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3489,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_SWR_HM_TEST_TX_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x348a,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_SWR_HM_TEST_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x348b,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_SWR_HM_TEST_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x348c,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_PAD_CTL_SWR_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x348d,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_PAD_CTL_SWR_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x348e,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_I2C_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x348f,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_CDC_TX_TANGGU_SW_MODE = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3490,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_TEST_CTL_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3491,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_TEST_CTL_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3492,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_T_DATA_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3493,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_T_DATA_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3494,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_PAD_CTL_PDM_RX0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3495,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_PAD_CTL_PDM_RX1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3496,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_PAD_CTL_PDM_TX0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3497,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_PAD_CTL_PDM_TX1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3498,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_PAD_CTL_PDM_TX2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x3499,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_PAD_INP_DIS_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x349a,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_PAD_INP_DIS_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x349b,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_DRIVE_STRENGTH_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x349c,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_DRIVE_STRENGTH_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x349d,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_DRIVE_STRENGTH_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x349e,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_RX_DATA_EDGE_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x349f,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_TX_DATA_EDGE_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34a0,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_GPIO_MODE = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34a1,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_PIN_CTL_OE = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34a2,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_PIN_CTL_DATA_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34a3,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_PIN_CTL_DATA_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34a4,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_PIN_STATUS_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34a5,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_PIN_STATUS_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34a6,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_DIG_DEBUG_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34a7,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_DIG_DEBUG_EN = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34a8,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_ANA_CSR_DBG_ADD = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34a9,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_ANA_CSR_DBG_CTL = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34aa,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_SSP_DBG = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34ab,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_MODE_STATUS_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34ac,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_MODE_STATUS_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34ad,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_SPARE_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34ae,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_SPARE_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34af,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_SPARE_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34b0,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34b1,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34b2,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34b3,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_3 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34b4,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_4 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34b5,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_5 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34b6,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_6 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34b7,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_7 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34b8,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_8 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34b9,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_9 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34ba,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_10 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34bb,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_11 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34bc,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_12 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34bd,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_13 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34be,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_14 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34bf,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_15 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34c0,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_16 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34c1,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_17 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34c2,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_18 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34c3,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_19 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34c4,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_20 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34c5,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_21 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34c6,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_22 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34c7,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_23 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34c8,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_24 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34c9,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_25 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34ca,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_26 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34cb,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_27 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34cc,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_28 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34cd,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_29 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34ce,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_30 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34cf,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_EFUSE_REG_31 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34d0,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_TX_REQ_FB_CTL_0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34d1,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_TX_REQ_FB_CTL_1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34d2,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_TX_REQ_FB_CTL_2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34d3,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_TX_REQ_FB_CTL_3 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34d4,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_TX_REQ_FB_CTL_4 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34d5,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_DEM_BYPASS_DATA0 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34d6,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_DEM_BYPASS_DATA1 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34d7,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_DEM_BYPASS_DATA2 = 0x%02x\n",uStack_2c);
    regmap_read(puVar2[4],0x34d8,&uStack_2c);
    _dev_info(*puVar2,"debug_codec  WCD938X_DIGITAL_DEM_BYPASS_DATA3 = 0x%02x\n",uStack_2c);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return 0;
    }
    auVar4 = __stack_chk_fail();
    *extraout_x18 = sym.wcd938x_ear_pa_gain_get;
    iVar3 = *(auVar4._0_8_ + 0x80);
    uVar1 = snd_soc_component_read(iVar3,0x300b);
    *(auVar4._8_8_ + 0x48) = uVar1 >> 2 & 0x1f;
    _dev_printk(0x800991b,*(iVar3 + 0x18),"%s: ear_pa_gain = 0x%x\n","wcd938x_ear_pa_gain_get");
    return 0;
}


// ===== sym.wcd938x_ear_pa_gain_get @ 0x08023e80 (size 104) =====

ulong sym.wcd938x_ear_pa_gain_get(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x80);
    uVar1 = snd_soc_component_read(iVar2,0x300b);
    *(arg2 + 0x48) = uVar1 >> 2 & 0x1f;
    _dev_printk(0x800991b,*(iVar2 + 0x18),"%s: ear_pa_gain = 0x%x\n","wcd938x_ear_pa_gain_get");
    return 0;
}


// ===== sym.wcd938x_ear_pa_gain_put @ 0x08023ee8 (size 132) =====

ulong sym.wcd938x_ear_pa_gain_put(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x80);
    iVar1 = *(iVar2 + 0x18);
    iVar3 = *(iVar1 + 0x98);
    _dev_printk(0x800991b,iVar1,"%s: ucontrol->value.integer.value[0]  = %ld\n","wcd938x_ear_pa_gain_put",
                *(arg2 + 0x48));
    if (*(iVar3 + 0x120) == '\0') {
        snd_soc_component_update_bits(iVar2,0x300b,0x7c,(*(arg2 + 0x48) & 0x3f) << 2);
    }
    return 0;
}


// ===== sym.wcd938x_rx_hph_mode_get @ 0x08023f6c (size 36) =====

ulong sym.wcd938x_rx_hph_mode_get(int64_t arg1,int64_t arg2)

{
    *(arg2 + 0x48) = *(*(*(*(arg1 + 0x80) + 0x18) + 0x98) + 0x108);
    return 0;
}


// ===== sym.wcd938x_rx_hph_mode_put @ 0x08023f90 (size 236) =====

ulong sym.wcd938x_rx_hph_mode_put(int64_t arg1,int64_t arg2)

{
    int iVar1;
    char *pcVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(arg1 + 0x80);
    iVar1 = *(arg2 + 0x48);
    iVar3 = *(iVar5 + 0x18);
    iVar4 = *(iVar3 + 0x98);
    _dev_printk(0x800991b,iVar3,"%s: mode: %d\n","wcd938x_rx_hph_mode_put",iVar1);
    if (*(iVar4 + 8) == 0) {
        if (iVar1 == 0) goto code_r0x08024024;
        if ((iVar1 != 6) && (iVar1 != 1)) goto code_r0x08024040;
        iVar1 = ___ratelimit(obj.wcd938x_rx_hph_mode_put._rs,"wcd938x_rx_hph_mode_put");
        if (iVar1 != 0) {
            pcVar2 = "%s:Invalid HPH Mode, default to CLS_H_ULP\n";
            goto code_r0x08024068;
        }
    }
    else {
        if (iVar1 != 0) goto code_r0x08024040;
code_r0x08024024:
        iVar1 = ___ratelimit(obj.wcd938x_rx_hph_mode_put._rs.825,"wcd938x_rx_hph_mode_put");
        if (iVar1 != 0) {
            pcVar2 = "%s:Invalid HPH Mode, default to class_AB\n";
code_r0x08024068:
            _dev_info(*(iVar5 + 0x18),pcVar2,"wcd938x_rx_hph_mode_put");
        }
    }
    iVar1 = 5;
code_r0x08024040:
    *(iVar4 + 0x108) = iVar1;
    return 0;
}


// ===== sym.wcd938x_tx_mode_get @ 0x0802407c (size 168) =====

void sym.wcd938x_tx_mode_get(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_2c = 0;
    if (*(arg1 + 0x80) == 0) {
code_r0x080240ec:
        uVar2 = 0xffffffea;
    }
    else {
        iVar3 = *(*(arg1 + 0x80) + 0x18);
        iVar4 = *(iVar3 + 0x98);
        if (iVar4 == 0) goto code_r0x080240ec;
        uVar2 = sym.wcd938x_tx_path_get(iVar3,&uStack_2c);
        if (-1 < uVar2) {
            if (3 < uStack_2c) goto code_r0x08024120;
            uVar2 = 0;
            *(arg2 + 0x48) = *(iVar4 + uStack_2c * 4 + 0x10c);
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return;
    }
    __stack_chk_fail(uVar2);
code_r0x08024120:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8024124);
    (*pcVar1)();
}


// ===== sym.wcd938x_tx_mode_put @ 0x08024124 (size 212) =====

void sym.wcd938x_tx_mode_put(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    code *pcVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t iVar4;
    int64_t iVar5;
    ulong unaff_x30;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    iVar5 = *(arg1 + 0x80);
    uStack_3c = 0;
    if (iVar5 == 0) {
code_r0x080241bc:
        uVar3 = 0xffffffea;
    }
    else {
        iVar4 = *(*(iVar5 + 0x18) + 0x98);
        if (iVar4 == 0) goto code_r0x080241bc;
        uVar3 = sym.wcd938x_tx_path_get(*(iVar5 + 0x18),&uStack_3c);
        if (uVar3 == 0) {
            uVar1 = *(arg2 + 0x48);
            _dev_printk(0x800991b,*(iVar5 + 0x18),"%s: mode: %d\n","wcd938x_tx_mode_put",uVar1);
            if (3 < uStack_3c) goto code_r0x080241f4;
            uVar3 = 0;
            *(iVar4 + uStack_3c * 4 + 0x10c) = uVar1;
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(uVar3);
code_r0x080241f4:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x80241f8);
    (*pcVar2)();
}


// ===== sym.wcd938x_tx_path_get @ 0x080241f8 (size 344) =====

uint64_t sym.wcd938x_tx_path_get(ulong noname_0,int64_t arg1)

{
    uint64_t *puVar1;
    bool bVar2;
    char cVar3;
    uint32_t uVar4;
    int iVar5;
    ulong in_x0;
    int64_t iVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t unaff_x19;
    uint64_t uVar8;
    int64_t *piVar9;
    ulong unaff_x30;
    uchar auStack_5c [4];
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    int64_t iStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_28 = *(iVar6 + 0x5e0);
    iVar6 = kstrndup(in_x0,9,0xcc0);
    iStack_30 = iVar6;
    if (iVar6 == 0) {
        uVar8 = 0xffffffea;
        goto code_r0x08024304;
    }
    iVar7 = strsep(&iStack_30,0x80033f3);
    if (iVar7 == 0) {
        iVar5 = ___ratelimit(obj.wcd938x_tx_path_get._rs,"wcd938x_tx_path_get");
        if (iVar5 != 0) {
            _printk(0x800691c,"wcd938x_tx_path_get",iStack_30);
        }
code_r0x080242f8:
        uVar8 = 0xffffffea;
    }
    else {
        iVar7 = strpbrk(iVar7,"0123");
        if (iVar7 == 0) {
            iVar5 = ___ratelimit(obj.wcd938x_tx_path_get._rs.839,"wcd938x_tx_path_get");
            if (iVar5 != 0) {
                _printk(0x80033f5,"wcd938x_tx_path_get");
            }
            goto code_r0x080242f8;
        }
        uVar4 = kstrtouint(iVar7,10,arg1);
        uVar8 = uVar4;
        if ((uVar4 < 0) && (iVar5 = ___ratelimit(obj.wcd938x_tx_path_get._rs.841,"wcd938x_tx_path_get"), iVar5 != 0))
        {
            _printk(0x8006fbf,"wcd938x_tx_path_get",iVar6);
        }
    }
    kfree(iVar6);
    unaff_x19 = iVar6;
code_r0x08024304:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_28) {
        return uVar8;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18 = sym.wcd938x_get_logical_addr;
    pcStack_48 = sym.wcd938x_get_logical_addr;
    iVar6 = sp_el0;
    iStack_58 = *(iVar6 + 0x5e0);
    auStack_5c[0] = 0;
    puStack_50 = &stack0xffffffffffffffe0;
    uStack_40 = uVar8;
    iStack_38 = unaff_x19;
    iVar5 = -0x13;
    do {
        usleep_range_state(4000,0xfaa,2);
        uVar8 = swr_get_logical_dev_num(iVar7,*(iVar7 + 0x3d8),auStack_5c);
        if (uVar8 == 0) break;
        bVar2 = iVar5 != 0;
        iVar5 = iVar5 + 1;
    } while (bVar2);
    if ((uVar8 != 0) &&
       (uVar8 = ___ratelimit(obj.wcd938x_get_logical_addr._rs,"wcd938x_get_logical_addr"), uVar8 != 0)) {
        uVar8 = _dev_err(iVar7 + 0x48,"%s get devnum %d for dev addr %llx failed\n","wcd938x_get_logical_addr",
                         auStack_5c[0],*(iVar7 + 0x3d8));
    }
    *(iVar7 + 0x40) = auStack_5c[0];
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_58) {
        return uVar8;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18_00 = sym.wcd938x_suspend;
    if (iVar6 == 0) {
        return 0xffffffed;
    }
    piVar9 = *(iVar6 + 0x98);
    if (piVar9 != NULL) {
        iVar7 = *(*piVar9 + 0x90);
        if (iVar7 == 0) {
            iVar5 = ___ratelimit(obj.wcd938x_suspend._rs,"wcd938x_suspend");
            if (iVar5 == 0) {
                return 0xffffffea;
            }
            _dev_err(iVar6,"%s: pdata is NULL\n","wcd938x_suspend");
            return 0xffffffea;
        }
        puVar1 = piVar9 + 0x2c;
        if ((piVar9[0x2c] >> 4 & 1) == 0) {
            cVar3 = *(piVar9 + 0x124);
        }
        else {
            iVar5 = msm_cdc_disable_ondemand_supply
                              (*piVar9,piVar9[0x182],*(iVar7 + 0x38),*(iVar7 + 0x40),"cdc-vdd-buck");
            if (iVar5 == -0x16) {
                uVar8 = ___ratelimit(obj.wcd938x_suspend._rs.858,"wcd938x_suspend");
                if (uVar8 != 0) {
                    _dev_err(iVar6,"%s: vdd buck is not disabled\n","wcd938x_suspend");
                    return 0;
                }
                return uVar8;
            }
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar3 = '\x01';
                bVar2 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar2) {
                    *puVar1 = *puVar1 & 0xffffffffffffffef;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            cVar3 = *(piVar9 + 0x124);
        }
        if ((cVar3 != '\0') || ((piVar9[2] != 0 && (*(piVar9[2] + 0xd0) == 0)))) {
            msm_cdc_set_supplies_lpm_mode(*piVar9,piVar9[0x182],*(iVar7 + 0x38),*(iVar7 + 0x40),1);
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar3 = '\x01';
                bVar2 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar2) {
                    *puVar1 = *puVar1 | 0x100;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
        }
        return 0;
    }
    return 0xffffffea;
}


// ===== sym.wcd938x_get_logical_addr @ 0x08024350 (size 216) =====

ulong sym.wcd938x_get_logical_addr(int64_t arg1)

{
    uint64_t *puVar1;
    bool bVar2;
    char cVar3;
    int iVar4;
    ulong uVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar7;
    int64_t iVar8;
    ulong unaff_x30;
    uchar auStack_2c [4];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_28 = *(iVar6 + 0x5e0);
    auStack_2c[0] = 0;
    iVar4 = -0x13;
    do {
        usleep_range_state(4000,0xfaa,2);
        uVar5 = swr_get_logical_dev_num(arg1,*(arg1 + 0x3d8),auStack_2c);
        if (uVar5 == 0) break;
        bVar2 = iVar4 != 0;
        iVar4 = iVar4 + 1;
    } while (bVar2);
    if ((uVar5 != 0) &&
       (uVar5 = ___ratelimit(obj.wcd938x_get_logical_addr._rs,"wcd938x_get_logical_addr"), uVar5 != 0)) {
        uVar5 = _dev_err(arg1 + 0x48,"%s get devnum %d for dev addr %llx failed\n","wcd938x_get_logical_addr",
                         auStack_2c[0],*(arg1 + 0x3d8));
    }
    *(arg1 + 0x40) = auStack_2c[0];
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_28) {
        return uVar5;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18 = sym.wcd938x_suspend;
    if (iVar6 == 0) {
        return 0xffffffed;
    }
    piVar7 = *(iVar6 + 0x98);
    if (piVar7 != NULL) {
        iVar8 = *(*piVar7 + 0x90);
        if (iVar8 == 0) {
            iVar4 = ___ratelimit(obj.wcd938x_suspend._rs,"wcd938x_suspend");
            if (iVar4 == 0) {
                return 0xffffffea;
            }
            _dev_err(iVar6,"%s: pdata is NULL\n","wcd938x_suspend");
            return 0xffffffea;
        }
        puVar1 = piVar7 + 0x2c;
        if ((piVar7[0x2c] >> 4 & 1) == 0) {
            cVar3 = *(piVar7 + 0x124);
        }
        else {
            iVar4 = msm_cdc_disable_ondemand_supply
                              (*piVar7,piVar7[0x182],*(iVar8 + 0x38),*(iVar8 + 0x40),"cdc-vdd-buck");
            if (iVar4 == -0x16) {
                uVar5 = ___ratelimit(obj.wcd938x_suspend._rs.858,"wcd938x_suspend");
                if (uVar5 != 0) {
                    _dev_err(iVar6,"%s: vdd buck is not disabled\n","wcd938x_suspend");
                    return 0;
                }
                return uVar5;
            }
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar3 = '\x01';
                bVar2 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar2) {
                    *puVar1 = *puVar1 & 0xffffffffffffffef;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            cVar3 = *(piVar7 + 0x124);
        }
        if ((cVar3 != '\0') || ((piVar7[2] != 0 && (*(piVar7[2] + 0xd0) == 0)))) {
            msm_cdc_set_supplies_lpm_mode(*piVar7,piVar7[0x182],*(iVar8 + 0x38),*(iVar8 + 0x40),1);
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar3 = '\x01';
                bVar2 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar2) {
                    *puVar1 = *puVar1 | 0x100;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
        }
        return 0;
    }
    return 0xffffffea;
}


// ===== sym.wcd938x_suspend @ 0x08024428 (size 412) =====

ulong sym.wcd938x_suspend(int64_t arg1)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    ulong uVar5;
    ulong *in_x18;
    int64_t *piVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        return 0xffffffed;
    }
    piVar6 = *(arg1 + 0x98);
    if (piVar6 != NULL) {
        iVar7 = *(*piVar6 + 0x90);
        if (iVar7 == 0) {
            iVar4 = ___ratelimit(obj.wcd938x_suspend._rs,"wcd938x_suspend");
            if (iVar4 == 0) {
                return 0xffffffea;
            }
            _dev_err(arg1,"%s: pdata is NULL\n","wcd938x_suspend");
            return 0xffffffea;
        }
        puVar1 = piVar6 + 0x2c;
        if ((piVar6[0x2c] >> 4 & 1) == 0) {
            cVar2 = *(piVar6 + 0x124);
        }
        else {
            iVar4 = msm_cdc_disable_ondemand_supply
                              (*piVar6,piVar6[0x182],*(iVar7 + 0x38),*(iVar7 + 0x40),"cdc-vdd-buck");
            if (iVar4 == -0x16) {
                uVar5 = ___ratelimit(obj.wcd938x_suspend._rs.858,"wcd938x_suspend");
                if (uVar5 != 0) {
                    _dev_err(arg1,"%s: vdd buck is not disabled\n","wcd938x_suspend");
                    return 0;
                }
                return uVar5;
            }
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                    *puVar1 = *puVar1 & 0xffffffffffffffef;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            cVar2 = *(piVar6 + 0x124);
        }
        if ((cVar2 != '\0') || ((piVar6[2] != 0 && (*(piVar6[2] + 0xd0) == 0)))) {
            msm_cdc_set_supplies_lpm_mode(*piVar6,piVar6[0x182],*(iVar7 + 0x38),*(iVar7 + 0x40),1);
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                    *puVar1 = *puVar1 | 0x100;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
        }
        return 0;
    }
    return 0xffffffea;
}


// ===== sym.wcd938x_resume @ 0x080245c4 (size 228) =====

ulong sym.wcd938x_resume(int64_t arg1)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    ulong uVar5;
    int64_t *piVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        uVar5 = 0xffffffed;
    }
    else {
        piVar6 = *(arg1 + 0x98);
        if (piVar6 != NULL) {
            iVar7 = *(*piVar6 + 0x90);
            if (iVar7 != 0) {
                if ((piVar6[0x2c] >> 8 & 1) != 0) {
                    puVar1 = piVar6 + 0x2c;
                    msm_cdc_set_supplies_lpm_mode(*piVar6,piVar6[0x182],*(iVar7 + 0x38),*(iVar7 + 0x40),0);
                    Hint_Prefetch(puVar1,2,0,1);
                    do {
                        cVar2 = '\x01';
                        bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar3) {
                            *puVar1 = *puVar1 & 0xfffffffffffffeff;
                            cVar2 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar2 != '\0');
                }
                return 0;
            }
            iVar4 = ___ratelimit(obj.wcd938x_resume._rs,"wcd938x_resume");
            if (iVar4 != 0) {
                _dev_err(arg1,"%s: pdata is NULL\n","wcd938x_resume");
            }
        }
        uVar5 = 0xffffffea;
    }
    return uVar5;
}


// ===== sym.__cfi_check_fail @ 0x080246a8 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080246ec

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
    //switch table (4 cases) at 0x8001bcc
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8024700);
    (*pcVar1)();
}


// ===== sym.wcd938x_writeable_register @ 0x08024700 (size 64) =====

uint8_t sym.wcd938x_writeable_register(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    code *pcVar2;
    
    uVar1 = arg2 - 0x3000;
    if (arg2 < 0x3000 || uVar1 == 0) {
        return 0;
    }
    if (uVar1 < 0x34d9) {
        return obj.wcd938x_reg_access[uVar1] >> 1 & 1;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8024740);
    (*pcVar2)();
}


// ===== sym.wcd938x_readable_register @ 0x08024740 (size 64) =====

uint8_t sym.wcd938x_readable_register(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    code *pcVar2;
    
    uVar1 = arg2 - 0x3000;
    if (arg2 < 0x3000 || uVar1 == 0) {
        return 0;
    }
    if (uVar1 < 0x34d9) {
        return obj.wcd938x_reg_access[uVar1] & 1;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8024780);
    (*pcVar2)();
}


// ===== sym.wcd938x_volatile_register @ 0x08024780 (size 72) =====

bool sym.wcd938x_volatile_register(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    code *pcVar2;
    
    uVar1 = arg2 - 0x3000;
    if (arg2 < 0x3000 || uVar1 == 0) {
        return false;
    }
    if (uVar1 < 0x34d9) {
        return (obj.wcd938x_reg_access[uVar1] & 3) == 1;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x80247c8);
    (*pcVar2)();
}


// ===== sym.wcd938x_mbhc_get_impedance @ 0x080247c8 (size 140) =====

ulong sym.wcd938x_mbhc_get_impedance(int64_t param_1,int64_t param_2,int64_t param_3)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        iVar1 = ___ratelimit(obj.wcd938x_mbhc_get_impedance._rs,"wcd938x_mbhc_get_impedance");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        uVar2 = 0x8003fd2;
    }
    else {
        if ((param_2 != 0) && (param_3 != 0)) {
            uVar2 = wcd_mbhc_get_impedance();
            return uVar2;
        }
        iVar1 = ___ratelimit(obj.wcd938x_mbhc_get_impedance._rs.1,"wcd938x_mbhc_get_impedance");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        uVar2 = 0x8003fef;
    }
    _printk(uVar2,"wcd938x_mbhc_get_impedance");
    return 0xffffffea;
}


// ===== sym.wcd938x_mbhc_hs_detect @ 0x08024854 (size 216) =====

ulong sym.wcd938x_mbhc_hs_detect(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        iVar1 = ___ratelimit(obj.wcd938x_mbhc_hs_detect._rs,"wcd938x_mbhc_hs_detect");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        uVar2 = 0x800464a;
    }
    else {
        iVar3 = *(*(arg1 + 0x18) + 0x98);
        if (iVar3 != 0) {
            if (*(iVar3 + 0x100) != 0) {
                uVar2 = wcd_mbhc_start();
                return uVar2;
            }
            iVar1 = ___ratelimit(obj.wcd938x_mbhc_hs_detect._rs.6,"wcd938x_mbhc_hs_detect");
            if (iVar1 == 0) {
                return 0xffffffea;
            }
            _dev_err(*(arg1 + 0x18),"%s: mbhc not initialized!\n","wcd938x_mbhc_hs_detect");
            return 0xffffffea;
        }
        iVar1 = ___ratelimit(obj.wcd938x_mbhc_hs_detect._rs.4,"wcd938x_mbhc_hs_detect");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        uVar2 = 0x8002b6c;
    }
    _printk(uVar2,"wcd938x_mbhc_hs_detect");
    return 0xffffffea;
}


// ===== sym.wcd938x_mbhc_hs_detect_exit @ 0x0802492c (size 212) =====

void sym.wcd938x_mbhc_hs_detect_exit(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        iVar1 = ___ratelimit(obj.wcd938x_mbhc_hs_detect_exit._rs,"wcd938x_mbhc_hs_detect_exit");
        if (iVar1 == 0) {
            return;
        }
        uVar2 = 0x800464a;
    }
    else {
        iVar3 = *(*(arg1 + 0x18) + 0x98);
        if (iVar3 != 0) {
            if (*(iVar3 + 0x100) != 0) {
                wcd_mbhc_stop();
                return;
            }
            iVar1 = ___ratelimit(obj.wcd938x_mbhc_hs_detect_exit._rs.9,"wcd938x_mbhc_hs_detect_exit");
            if (iVar1 == 0) {
                return;
            }
            _dev_err(*(arg1 + 0x18),"%s: mbhc not initialized!\n","wcd938x_mbhc_hs_detect_exit");
            return;
        }
        iVar1 = ___ratelimit(obj.wcd938x_mbhc_hs_detect_exit._rs.8,"wcd938x_mbhc_hs_detect_exit");
        if (iVar1 == 0) {
            return;
        }
        uVar2 = 0x8002b6c;
    }
    _printk(uVar2,"wcd938x_mbhc_hs_detect_exit");
    return;
}


// ===== sym.wcd938x_mbhc_ssr_down @ 0x08024a00 (size 72) =====

void sym.wcd938x_mbhc_ssr_down(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    if ((arg1 != 0) && (arg2 != 0)) {
        *in_x18 = unaff_x30;
        sym.wcd938x_mbhc_hs_detect_exit(arg2);
        wcd_mbhc_deinit(arg1);
    }
    return;
}


// ===== sym.wcd938x_mbhc_post_ssr_init @ 0x08024a48 (size 168) =====

int sym.wcd938x_mbhc_post_ssr_init(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = -0x16;
    if ((arg1 != 0) && (arg2 != 0)) {
        snd_soc_component_update_bits(arg2,0x3014,0x20,0x20);
        iVar1 = wcd_mbhc_init(arg1,arg2,obj.mbhc_cb,obj.intr_ids,obj.wcd_mbhc_registers,1);
        if (iVar1 != 0) {
            _dev_err(*(arg2 + 0x18),"%s: mbhc initialization failed\n","wcd938x_mbhc_post_ssr_init");
        }
    }
    return iVar1;
}


// ===== sym.wcd938x_mbhc_init @ 0x08024af0 (size 348) =====

int sym.wcd938x_mbhc_init(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 0) {
        _printk(0x800464a,"wcd938x_mbhc_init");
        iVar1 = -0x16;
    }
    else {
        iVar2 = devm_kmalloc(*(arg2 + 0x18),0x470,0xdc0);
        if (iVar2 == 0) {
            iVar1 = -0xc;
        }
        else {
            *(iVar2 + 0x468) = arg3;
            __init_rwsem(iVar2 + 0x420,"&(&wcd938x_mbhc->notifier)->rwsem",obj.wcd938x_soc_get_mbhc._rs);
            iVar3 = *(arg2 + 0x18);
            *(iVar2 + 0x460) = 0;
            *(iVar2 + 0x3d4) = 1;
            iVar4 = *(iVar3 + 0x90);
            if (iVar4 == 0) {
                _dev_err(iVar3,"%s: pdata pointer is NULL\n","wcd938x_mbhc_init");
                iVar1 = -0x16;
            }
            else {
                *(iVar2 + 0xd0) = *(iVar4 + 0x24);
                iVar1 = wcd_mbhc_init(iVar2,arg2,obj.mbhc_cb,obj.intr_ids,obj.wcd_mbhc_registers,1);
                if (iVar1 == 0) {
                    *arg1 = iVar2;
                    snd_soc_add_component_controls(arg2,obj.impedance_detect_controls,2);
                    snd_soc_add_component_controls(arg2,obj.hph_type_detect_controls,1);
                    return 0;
                }
                _dev_err(*(arg2 + 0x18),"%s: mbhc initialization failed\n","wcd938x_mbhc_init");
            }
            devm_kfree(*(arg2 + 0x18),iVar2);
        }
    }
    return iVar1;
}


// ===== sym.wcd938x_mbhc_deinit @ 0x08024c4c (size 124) =====

void sym.wcd938x_mbhc_deinit(int64_t arg1)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        uVar1 = 0x800464a;
    }
    else {
        iVar2 = *(*(arg1 + 0x18) + 0x98);
        if (iVar2 != 0) {
            iVar2 = *(iVar2 + 0x100);
            if (iVar2 == 0) {
                return;
            }
            wcd_mbhc_deinit(iVar2);
            devm_kfree(*(arg1 + 0x18),iVar2);
            return;
        }
        uVar1 = 0x8002b6c;
    }
    _printk(uVar1,"wcd938x_mbhc_deinit");
    return;
}


// ===== sym.wcd938x_mbhc_bcs_enable @ 0x08024cc8 (size 48) =====

void sym.wcd938x_mbhc_bcs_enable(int64_t arg1)

{
    uint32_t in_w1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.wcd938x_disable_bcs_before_slow_insert(*(arg1 + 0xf8),~in_w1 & 1);
    return;
}


// ===== sym.wcd938x_wcd_mbhc_calc_impedance @ 0x08024cf8 (size 1852) =====

int64_t sym.wcd938x_wcd_mbhc_calc_impedance(int arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    code *pcVar4;
    int16_t iVar5;
    int16_t iVar6;
    int16_t iVar7;
    int16_t iVar8;
    int16_t iVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    int iVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    ulong *arg2_00;
    int iVar15;
    uint uVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar17;
    ulong *arg2_01;
    int64_t iVar18;
    ulong unaff_x30;
    uchar auVar19 [16];
    uint32_t uStack_c4;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    uchar auStack_90 [8];
    ulong uStack_88;
    ulong uStack_80;
    uchar auStack_78 [8];
    ulong uStack_70;
    int64_t iStack_68;
    
    uVar13 = arg1;
    *in_x18 = unaff_x30;
    iVar17 = sp_el0;
    iStack_68 = *(iVar17 + 0x5e0);
    uStack_c4 = 0;
    iVar17 = *(uVar13 + 0xf8);
    uStack_88 = *0x8017a58;
    uStack_80 = *0x8017a60;
    auStack_78 = *0x8017a68;
    uStack_70 = *0x8017a70;
    uStack_98 = *0x8017a48;
    auStack_90 = *0x8017a50;
    iVar18 = *(*(iVar17 + 0x18) + 0x98);
    uStack_c0 = 0;
    uStack_b8 = *0x8017900;
    uStack_b0 = *0x8017908;
    uStack_a8 = *0x8017910;
    uStack_a0 = *0x8017918;
    uVar14 = mutex_is_locked(uVar13 + 0x328);
    if (((uVar14 & 1) == 0) && ((obj.wcd938x_wcd_mbhc_calc_impedance.__already_done & 1) == 0)) {
        obj.wcd938x_wcd_mbhc_calc_impedance.__already_done = 0x1;
        __warn_printk("%s: BCL should have acquired\n","wcd938x_wcd_mbhc_calc_impedance");
    //WARNING: Does not return
        pcVar4 = SoftwareBreakpoint(0x800,0x802542c);
        (*pcVar4)();
    }
    iVar5 = snd_soc_component_read(iVar17,0x301f);
    iVar6 = snd_soc_component_read(iVar17,0x3020);
    iVar7 = snd_soc_component_read(iVar17,0x3021);
    iVar8 = snd_soc_component_read(iVar17,0x3056);
    iVar9 = snd_soc_component_read(iVar17,0x3123);
    uVar10 = snd_soc_component_read(iVar17,0x3015);
    if ((uVar10 >> 7 & 1) != 0) {
        regmap_update_bits_base(*(iVar18 + 0x20),0x3015,0x80,0,0,0,0);
    }
    if (*(uVar13 + 0xc3) != '\0') {
        regmap_update_bits_base(*(iVar18 + 0x20),0x3014,0x80,0,0,0,0);
    }
    regmap_update_bits_base(*(iVar18 + 0x20),0x3014,1,0,0,0,0);
    regmap_update_bits_base(*(iVar18 + 0x20),0x30e2,0xc0,0,0,0,0);
    usleep_range_state(1000,0x3f2,2);
    arg2_00 = auStack_90 + 4;
    sym.wcd938x_mbhc_zdet_ramp(iVar17,arg2_00,&uStack_c0 + 4,0);
    arg2_01 = arg2_00;
    if (uStack_c0._4_4_ - 0x61a81U < 0xfffa627f) {
        iVar1 = 2;
        if (0xc34 < uStack_c0._4_4_ - 0x61a81U >> 8) {
            iVar1 = 3;
        }
        iVar2 = 0;
        if (31999 < uStack_c0._4_4_) {
            iVar2 = iVar1;
        }
        arg2_01 = &uStack_98 + iVar2 * 0xc;
        sym.wcd938x_mbhc_zdet_ramp(iVar17,arg2_01,&uStack_c0 + 4,0);
        if (uStack_c0._4_4_ < 0x5f5e101) goto code_r0x08024f58;
        iVar15 = 0xffffffe;
        arg2_01 = arg2_00;
code_r0x08024fd0:
        *arg2 = iVar15;
    }
    else {
code_r0x08024f58:
        uVar16 = 0x34c7;
        if (399999 < uStack_c0._4_4_) {
            uVar16 = 0x34c8;
        }
        *arg2 = uStack_c0._4_4_ / 1000;
        uVar11 = snd_soc_component_read(iVar17,uVar16);
        if ((uVar11 >> 7 & 1) != 0) {
            iVar12 = (uVar11 & 0x7f) * -0x19;
code_r0x08024fbc:
            iVar15 = 0;
            if (iVar12 + 10000 != 0) {
                iVar15 = (*arg2 * 10000) / (iVar12 + 10000);
            }
            goto code_r0x08024fd0;
        }
        iVar12 = uVar11 * 0x19;
        if (-10000 < iVar12) goto code_r0x08024fbc;
    }
    sym.wcd938x_mbhc_zdet_ramp(iVar17,arg2_01,0,&uStack_c0);
    iVar12 = uStack_c0;
    if (uStack_c0 - 0x61a81U < 0xfffa627f) {
        if (((uStack_c0 < 0x124f81) || (*(arg2_01 + 2) != 6)) && (*arg2 == 0xffffffe)) {
            if (uStack_c0 < 32000) {
                arg2_01 = &uStack_98;
            }
            else if (uStack_c0 - 0x61a81U >> 8 < 0xc35) {
                arg2_01 = &uStack_80;
            }
            else if (1200000 < uStack_c0) {
                arg2_01 = auStack_78 + 4;
            }
            sym.wcd938x_mbhc_zdet_ramp(iVar17,arg2_01,0,&uStack_c0);
        }
        iVar12 = uStack_c0;
        if (uStack_c0 < 0x5f5e101) goto code_r0x080250cc;
        uVar11 = 0xffffffe;
code_r0x08025140:
        *arg3 = uVar11;
    }
    else {
code_r0x080250cc:
        uVar16 = 0x34c9;
        if (399999 < iVar12) {
            uVar16 = 0x34ca;
        }
        *arg3 = iVar12 / 1000;
        uVar11 = snd_soc_component_read(iVar17,uVar16);
        if ((uVar11 >> 7 & 1) != 0) {
            iVar12 = (uVar11 & 0x7f) * -0x19;
code_r0x0802512c:
            uVar11 = 0;
            if (iVar12 + 10000 != 0) {
                uVar11 = (*arg3 * 10000) / (iVar12 + 10000);
            }
            goto code_r0x08025140;
        }
        iVar12 = uVar11 * 0x19;
        if (-10000 < iVar12) goto code_r0x0802512c;
        uVar11 = *arg3;
    }
    uVar3 = *arg2;
    if (uVar3 == 0xffffffe) {
        if (uVar11 == 0xffffffe) goto code_r0x08025190;
    }
    else if (((uVar11 != 0xffffffe) && ((1 < uVar3 || (uVar11 < 3)))) && ((uVar3 < 3 || (1 < uVar11)))) {
        snd_soc_component_update_bits(iVar17,0x30d8,2,2);
        snd_soc_component_update_bits(iVar17,0x30d2,0x40,1);
        if (*arg2 < 0x20) {
            arg2_00 = &uStack_98;
        }
        sym.wcd938x_mbhc_zdet_ramp(iVar17,arg2_00,&uStack_c4,0);
        snd_soc_component_update_bits(iVar17,0x30d2,0x40,0);
        snd_soc_component_update_bits(iVar17,0x30d8,2,0);
        uVar16 = 0x34c7;
        if (399999 < uStack_c4) {
            uVar16 = 0x34c8;
        }
        uStack_c4 = uStack_c4 / 1000;
        uVar11 = snd_soc_component_read(iVar17,uVar16);
        if ((uVar11 >> 7 & 1) == 0) {
            iVar12 = uVar11 * 0x19;
            if (-10000 < iVar12) goto code_r0x08025388;
        }
        else {
            iVar12 = (uVar11 & 0x7f) * -0x19;
code_r0x08025388:
            iVar15 = uStack_c4 * 10000;
            uStack_c4 = 0;
            if (iVar12 + 10000 != 0) {
                uStack_c4 = iVar15 / (iVar12 + 10000);
            }
        }
        uVar11 = *arg2;
        uVar3 = 0;
        if (uVar11 + 9 != 0) {
            uVar3 = (uVar11 * 9) / (uVar11 + 9);
        }
        iVar12 = uStack_c4 - uVar3;
        if (uStack_c4 - uVar3 == 0 || uStack_c4 < uVar3) {
            iVar12 = uVar3 - uStack_c4;
        }
        iVar15 = uVar11 - uStack_c4;
        if (uVar11 < uStack_c4 || uVar11 - uStack_c4 == 0) {
            iVar15 = uStack_c4 - uVar11;
        }
        uVar16 = 1;
        if (iVar15 * (uVar3 + uStack_c4) < iVar12 * (uVar11 + uStack_c4)) {
            uVar16 = 2;
        }
        *(uVar13 + 0x1c4) = uVar16;
        regmap_update_bits_base(*(iVar18 + 0x20),0x30e2,0xc0,0xc0,0,0,0);
        goto code_r0x08025190;
    }
    *(uVar13 + 0x1c4) = 1;
code_r0x08025190:
    snd_soc_component_write(iVar17,0x301f,iVar5);
    snd_soc_component_write(iVar17,0x3020,iVar6);
    snd_soc_component_write(iVar17,0x3021,iVar7);
    regmap_update_bits_base(*(iVar18 + 0x20),0x3014,1,1,0,0,0);
    if (*(uVar13 + 0xc3) != '\0') {
        regmap_update_bits_base(*(iVar18 + 0x20),0x3014,0x80,0x80,0,0,0);
    }
    snd_soc_component_write(iVar17,0x3123,iVar9);
    iVar17 = snd_soc_component_write(iVar17,0x3056,iVar8);
    if ((uVar10 >> 7 & 1) != 0) {
        iVar17 = regmap_update_bits_base(*(iVar18 + 0x20),0x3015,0x80,0x80,0,0,0);
    }
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) != iStack_68) {
        auVar19 = __stack_chk_fail();
        *extraout_x18 = sym.wcd938x_get_hwdep_fw_cal;
        iVar17 = *(auVar19._0_8_ + 0xf8);
        if (iVar17 == 0) {
            iVar12 = ___ratelimit(obj.wcd938x_get_hwdep_fw_cal._rs,"wcd938x_get_hwdep_fw_cal");
            if (iVar12 != 0) {
                _printk(0x80064db,"wcd938x_get_hwdep_fw_cal");
            }
        }
        else {
            iVar18 = wcdcal_get_fw_cal(*(auVar19._0_8_ + 0x468));
            if (iVar18 != 0) {
                return iVar18;
            }
            iVar12 = ___ratelimit(obj.wcd938x_get_hwdep_fw_cal._rs.17,"wcd938x_get_hwdep_fw_cal");
            if (iVar12 != 0) {
                _dev_err(*(iVar17 + 0x18),"%s: cal not sent by %d\n","wcd938x_get_hwdep_fw_cal",
                         auVar19._8_8_ & 0xffffffff);
            }
        }
        return 0;
    }
    return iVar17;
}


// ===== sym.wcd938x_get_hwdep_fw_cal @ 0x08025434 (size 172) =====

int64_t sym.wcd938x_get_hwdep_fw_cal(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0xf8);
    if (iVar3 == 0) {
        iVar1 = ___ratelimit(obj.wcd938x_get_hwdep_fw_cal._rs,"wcd938x_get_hwdep_fw_cal");
        if (iVar1 != 0) {
            _printk(0x80064db,"wcd938x_get_hwdep_fw_cal");
        }
    }
    else {
        iVar2 = wcdcal_get_fw_cal(*(arg1 + 0x468));
        if (iVar2 != 0) {
            return iVar2;
        }
        iVar1 = ___ratelimit(obj.wcd938x_get_hwdep_fw_cal._rs.17,"wcd938x_get_hwdep_fw_cal");
        if (iVar1 != 0) {
            _dev_err(*(iVar3 + 0x18),"%s: cal not sent by %d\n","wcd938x_get_hwdep_fw_cal",arg2 & 0xffffffff);
        }
    }
    return 0;
}


// ===== sym.wcd938x_mbhc_register_notifier @ 0x080254e0 (size 52) =====

void sym.wcd938x_mbhc_register_notifier(int64_t arg1)

{
    uint32_t in_w2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((in_w2 & 1) == 0) {
        blocking_notifier_chain_unregister(arg1 + 0x420);
    }
    else {
        blocking_notifier_chain_register();
    }
    return;
}


// ===== sym.wcd938x_mbhc_request_irq @ 0x08025514 (size 60) =====

void sym.wcd938x_mbhc_request_irq(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    ulong in_x1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    wcd_request_irq(*(*(arg1 + 0x18) + 0x98) + 0x130,in_x1,arg3,arg2);
    return;
}


// ===== sym.wcd938x_mbhc_irq_control @ 0x08025550 (size 60) =====

void sym.wcd938x_mbhc_irq_control(int64_t arg1)

{
    uint32_t in_w2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((in_w2 & 1) == 0) {
        wcd_disable_irq(*(*(arg1 + 0x18) + 0x98) + 0x130);
    }
    else {
        wcd_enable_irq();
    }
    return;
}


// ===== sym.wcd938x_mbhc_free_irq @ 0x0802558c (size 52) =====

ulong sym.wcd938x_mbhc_free_irq(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    wcd_free_irq(*(*(arg1 + 0x18) + 0x98) + 0x130);
    return 0;
}


// ===== sym.wcd938x_mbhc_clk_setup @ 0x080255c0 (size 56) =====

void sym.wcd938x_mbhc_clk_setup(ulong noname_0,uint32_t arg1)

{
    ulong in_x0;
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = 0x80;
    if ((arg1 & 1) == 0) {
        uVar1 = 0;
    }
    snd_soc_component_update_bits(in_x0,0x3120,0x80,uVar1);
    return;
}


// ===== sym.wcd938x_mbhc_btn_to_num @ 0x080255f8 (size 44) =====

uint32_t sym.wcd938x_mbhc_btn_to_num(ulong param_1)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = snd_soc_component_read(param_1,0x3019);
    return uVar1 & 7;
}


// ===== sym.wcd938x_mbhc_lock_sleep @ 0x08025624 (size 144) =====

ulong sym.wcd938x_mbhc_lock_sleep(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(*(*(arg1 + 0xf8) + 0x18) + 0x98);
    pcVar2 = *(iVar1 + 0xc48);
    if (pcVar2 != sym.__typeid__ZTSFiPvbE_global_addr) {
        __cfi_slowpath_diag(0x2b17460ce4bf82db,pcVar2,0x8001b10);
    }
    (*pcVar2)(iVar1,arg2 & 1);
    return 1;
}


// ===== sym.wcd938x_mbhc_micb_en_status @ 0x080256b4 (size 80) =====

ulong sym.wcd938x_mbhc_micb_en_status(int64_t arg1,uint32_t arg2)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg2 == 2) {
        *in_x18 = unaff_x30;
        uVar1 = snd_soc_component_read(*(arg1 + 0xf8),0x3023);
        if ((uVar1 & 0xc0) == 0x40) {
            return 1;
        }
    }
    return 0;
}


// ===== sym.wcd938x_mbhc_mbhc_bias_control @ 0x08025704 (size 48) =====

void sym.wcd938x_mbhc_mbhc_bias_control(ulong noname_0,int64_t arg1)

{
    ulong in_x0;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    snd_soc_component_update_bits(in_x0,0x3015,1,arg1 & 1);
    return;
}


// ===== sym.wcd938x_mbhc_hph_pa_on_status @ 0x08025734 (size 48) =====

bool sym.wcd938x_mbhc_hph_pa_on_status(ulong param_1)

{
    uint64_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = snd_soc_component_read(param_1,0x3009);
    return (uVar1 & 0xc0) != 0;
}


// ===== sym.wcd938x_mbhc_program_btn_thr @ 0x08025764 (size 572) =====

uchar  [16] sym.wcd938x_mbhc_program_btn_thr(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    
    *in_x18 = unaff_x30;
    iVar2 = arg3;
    if (iVar2 < 9) {
        if (((((0 < iVar2) &&
              (noname_1 = snd_soc_component_update_bits
                                    (arg1,0x301a,0xfc,
                                     (((*arg2 << 1) * 0x51eb851f >> 0x23) - ((*arg2 << 1) >> 0x1f) & 0x3f) << 2),
              iVar2 != 1)) &&
             (iVar1 = *(arg2 + 2) << 1,
             noname_1 = snd_soc_component_update_bits
                                  (arg1,0x301b,0xfc,((iVar1 * 0x51eb851f >> 0x23) - (iVar1 >> 0x1f) & 0x3f) << 2),
             iVar2 != 2)) &&
            ((iVar1 = *(arg2 + 4) << 1,
             noname_1 = snd_soc_component_update_bits
                                  (arg1,0x301c,0xfc,((iVar1 * 0x51eb851f >> 0x23) - (iVar1 >> 0x1f) & 0x3f) << 2),
             iVar2 != 3 &&
             (iVar1 = *(arg2 + 6) << 1,
             noname_1 = snd_soc_component_update_bits
                                  (arg1,0x301d,0xfc,((iVar1 * 0x51eb851f >> 0x23) - (iVar1 >> 0x1f) & 0x3f) << 2),
             iVar2 != 4)))) &&
           ((iVar1 = *(arg2 + 8) << 1,
            noname_1 = snd_soc_component_update_bits
                                 (arg1,0x301e,0xfc,((iVar1 * 0x51eb851f >> 0x23) - (iVar1 >> 0x1f) & 0x3f) << 2),
            iVar2 != 5 &&
            ((iVar1 = *(arg2 + 10) << 1,
             noname_1 = snd_soc_component_update_bits
                                  (arg1,0x301f,0xfc,((iVar1 * 0x51eb851f >> 0x23) - (iVar1 >> 0x1f) & 0x3f) << 2),
             iVar2 != 6 &&
             (iVar1 = *(arg2 + 0xc) << 1,
             noname_1 = snd_soc_component_update_bits
                                  (arg1,0x3020,0xfc,((iVar1 * 0x51eb851f >> 0x23) - (iVar1 >> 0x1f) & 0x3f) << 2),
             iVar2 != 7)))))) {
            iVar2 = *(arg2 + 0xe) << 1;
            noname_1 = snd_soc_component_update_bits
                                 (arg1,0x3021,0xfc,((iVar2 * 0x51eb851f >> 0x23) - (iVar2 >> 0x1f) & 0x3f) << 2);
        }
    }
    else {
        iVar2 = ___ratelimit(obj.wcd938x_mbhc_program_btn_thr._rs,"wcd938x_mbhc_program_btn_thr");
        noname_1 = extraout_q0;
        if (iVar2 != 0) {
            noname_1 = _dev_err(*(arg1 + 0x18),"%s: invalid number of buttons: %d\n","wcd938x_mbhc_program_btn_thr",
                                arg3 & 0xffffffff);
        }
    }
    return noname_1;
}


// ===== sym.wcd938x_mbhc_request_micbias @ 0x080259a0 (size 40) =====

void sym.wcd938x_mbhc_request_micbias(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.wcd938x_micbias_control(arg1,arg2,arg3,0);
    return;
}


// ===== sym.wcd938x_mbhc_micb_ramp_control @ 0x080259c8 (size 120) =====

void sym.wcd938x_mbhc_micb_ramp_control(int64_t arg1)

{
    uint64_t in_x1;
    ulong uVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((in_x1 & 1) == 0) {
        snd_soc_component_update_bits(arg1,0x3024,0x80,0);
        uVar1 = 0x1c;
        uVar2 = 0;
    }
    else {
        snd_soc_component_update_bits(arg1,0x3024,0x1c,0xc);
        uVar1 = 0x80;
        uVar2 = 0x80;
    }
    snd_soc_component_update_bits(arg1,0x3024,uVar1,uVar2);
    return;
}


// ===== sym.wcd938x_mbhc_micb_ctrl_threshold_mic @ 0x08025a40 (size 96) =====

ulong sym.wcd938x_mbhc_micb_ctrl_threshold_mic(int64_t arg1,uint32_t arg2,uint32_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 2) {
        uVar2 = *(*(*(arg1 + 0x18) + 0x90) + 0x24);
        if (uVar2 < 0xa8c) {
            uVar1 = 0xa8c;
            if ((arg3 & 1) == 0) {
                uVar1 = uVar2;
            }
            uVar3 = sym.wcd938x_mbhc_micb_adjust_voltage(arg1,uVar1,2);
        }
        else {
            uVar3 = 0;
        }
    }
    else {
        uVar3 = 0xffffffea;
    }
    return uVar3;
}


// ===== sym.wcd938x_mbhc_gnd_det_ctrl @ 0x08025aa0 (size 120) =====

void sym.wcd938x_mbhc_gnd_det_ctrl(int64_t arg1)

{
    uint64_t in_x1;
    ulong uVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((in_x1 & 1) == 0) {
        snd_soc_component_update_bits(arg1,0x3014,0x40,0);
        uVar1 = 2;
        uVar2 = 0;
    }
    else {
        snd_soc_component_update_bits(arg1,0x3014,2,2);
        uVar1 = 0x40;
        uVar2 = 0x40;
    }
    snd_soc_component_update_bits(arg1,0x3014,uVar1,uVar2);
    return;
}


// ===== sym.wcd938x_mbhc_hph_pull_down_ctrl @ 0x08025b18 (size 96) =====

void sym.wcd938x_mbhc_hph_pull_down_ctrl(int64_t arg1,uint32_t arg2)

{
    bool bVar1;
    uint uVar2;
    uint uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bVar1 = (arg2 & 1) == 0;
    uVar2 = 0x40;
    if (bVar1) {
        uVar2 = 0;
    }
    uVar3 = 0x10;
    if (bVar1) {
        uVar3 = 0;
    }
    snd_soc_component_update_bits(arg1,0x30d2,0x40,uVar2);
    snd_soc_component_update_bits(arg1,0x30d2,0x10,uVar3);
    return;
}


// ===== sym.wcd938x_mbhc_moisture_config @ 0x08025b78 (size 96) =====

void sym.wcd938x_mbhc_moisture_config(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 0xe0) == 0) || (*(*(arg1 + 0x90) + 0x58) != 0)) {
        iVar1 = 0;
    }
    else {
        iVar1 = 0;
        if (*(arg1 + 0xc3) != '\0') {
            iVar1 = *(arg1 + 0xe0) << 2;
        }
    }
    snd_soc_component_update_bits(*(arg1 + 0xf8),0x3121,0xc,iVar1);
    return;
}


// ===== sym.wcd938x_mbhc_hph_l_pull_up_control @ 0x08025bd8 (size 56) =====

void sym.wcd938x_mbhc_hph_l_pull_up_control(ulong noname_0,uint32_t arg1)

{
    uint32_t uVar1;
    ulong in_x0;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = 8;
    if (arg1 < 0x19) {
        uVar1 = arg1;
    }
    snd_soc_component_update_bits(in_x0,0x31b1,0x1f,uVar1);
    return;
}


// ===== sym.wcd938x_mbhc_get_moisture_status @ 0x08025c10 (size 168) =====

bool sym.wcd938x_mbhc_get_moisture_status(int64_t arg1)

{
    uint64_t uVar1;
    ulong *in_x18;
    ulong uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *(arg1 + 0xf8);
    if (((*(arg1 + 0xe0) == 0) || (*(*(arg1 + 0x90) + 0x58) != 0)) || (*(arg1 + 0xc3) == '\0')) {
        snd_soc_component_update_bits(uVar2,0x3121,0xc,0);
    }
    else {
        uVar1 = snd_soc_component_read(uVar2,0x3121);
        if ((uVar1 & 0xc) == 0) {
            snd_soc_component_update_bits(*(arg1 + 0xf8),0x3121,0xc,*(arg1 + 0xe0) << 2);
            uVar1 = snd_soc_component_read(uVar2,0x3125);
            return (uVar1 & 0x20) == 0;
        }
    }
    return false;
}


// ===== sym.wcd938x_mbhc_moisture_polling_ctrl @ 0x08025cb8 (size 60) =====

void sym.wcd938x_mbhc_moisture_polling_ctrl(int64_t arg1,uint32_t arg2)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = 4;
    if ((arg2 & 1) == 0) {
        uVar1 = 0;
    }
    snd_soc_component_update_bits(*(arg1 + 0xf8),0x31b0,4,uVar1);
    return;
}


// ===== sym.wcd938x_mbhc_moisture_detect_en @ 0x08025cf4 (size 72) =====

void sym.wcd938x_mbhc_moisture_detect_en(int64_t arg1)

{
    uint64_t in_x1;
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((in_x1 & 1) == 0) {
        iVar1 = 0;
    }
    else {
        iVar1 = *(arg1 + 0xe0) << 2;
    }
    snd_soc_component_update_bits(*(arg1 + 0xf8),0x3121,0xc,iVar1);
    return;
}


// ===== sym.wcd938x_mbhc_zdet_ramp @ 0x08025d3c (size 444) =====

void sym.wcd938x_mbhc_zdet_ramp(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    code *pcVar4;
    bool bVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint32_t *puVar8;
    int64_t in_x4;
    uint32_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    int iVar10;
    int64_t iVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    ulong uStack_a0;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    int64_t iStack_80;
    int64_t iStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    int64_t iStack_58;
    uint uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_48 = *(iVar11 + 0x5e0);
    uStack_4c = 0;
    iVar11 = *(*(arg1 + 0x18) + 0x98);
    snd_soc_component_update_bits(arg1,0x3123,0x70,*arg2 << 4);
    snd_soc_component_update_bits(arg1,0x301f,0xfc,*(arg2 + 6));
    snd_soc_component_update_bits(arg1,0x3020,0xfc,*(arg2 + 8));
    snd_soc_component_update_bits(arg1,0x3021,0xfc,*(arg2 + 10));
    snd_soc_component_update_bits(arg1,0x3123,0xf,*(arg2 + 2));
    puVar8 = *(arg2 + 4);
    uVar7 = 0xf;
    snd_soc_component_update_bits(arg1,0x3124);
    if (arg3 != 0) {
        regmap_update_bits_base(*(iVar11 + 0x20),0x3016,0x80,0x80,0,0,0);
        sym.wcd938x_mbhc_get_result_params(iVar11,in_x4,*(arg2 + 2),&uStack_4c);
        uVar7 = 0x80;
        puVar8 = NULL;
        regmap_update_bits_base(*(iVar11 + 0x20),0x3016,0x80,0,0,0,0);
        *arg3 = uStack_4c;
    }
    if (arg4 != 0) {
        regmap_update_bits_base(*(iVar11 + 0x20),0x3016,0x40,0x40,0,0,0);
        sym.wcd938x_mbhc_get_result_params(iVar11,in_x4,*(arg2 + 2),&uStack_4c);
        uVar7 = 0x40;
        puVar8 = NULL;
        regmap_update_bits_base(*(iVar11 + 0x20),0x3016,0x40,0,0,0,0);
        *arg4 = uStack_4c;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_48) {
        return;
    }
    auVar12 = __stack_chk_fail();
    iVar6 = auVar12._0_8_;
    *extraout_x18 = sym.wcd938x_mbhc_get_result_params;
    pcStack_88 = sym.wcd938x_mbhc_get_result_params;
    iVar3 = sp_el0;
    iStack_98 = *(iVar3 + 0x5e0);
    uStack_a0 = 0;
    puStack_90 = &stack0xffffffffffffffc0;
    iStack_80 = arg1;
    iStack_78 = arg3;
    iStack_70 = iVar11;
    iStack_68 = arg2;
    iStack_58 = arg4;
    regmap_update_bits_base(*(iVar6 + 0x20),0x3016,0x20,0x20,0,0,0);
    iVar10 = 899;
    do {
        regmap_read(*(iVar6 + 0x20),0x3018,&uStack_a0 + 4);
        if ((uStack_a0._4_4_ >> 7 & 1) != 0) break;
        bVar5 = iVar10 != 0;
        iVar10 = iVar10 + -1;
    } while (bVar5);
    uStack_a0._4_4_ = uStack_a0._4_4_ << 8;
    regmap_read(*(iVar6 + 0x20),0x3017,&uStack_a0);
    uStack_a0._4_4_ = uStack_a0._4_4_ | uStack_a0;
    regmap_update_bits_base(*(iVar6 + 0x20),0x3016,0x20,0,0,0,0);
    uVar1 = uStack_a0._4_4_ & 0x3fff;
    uVar2 = uStack_a0._4_4_ & 0xffff;
    if (((uStack_a0._4_4_ >> 0xf & 1) == 0) && (uVar1 != 0)) {
        usleep_range_state(5000,0x13ba,2);
    }
    if ((0x3fff < uVar2) && (uVar1 != 0)) {
        uVar2 = (-1 << (0xe - (uVar7 & 0xffff) & 0x1f)) + uVar1 * *(auVar12._8_8_ + (uVar2 >> 0xe) * 2);
        if (uVar2 < 1) {
            if (7 < (uVar7 & 0xffff)) goto code_r0x080260cc;
            if (*((uVar7 & 0xffff) * 4 + 0x8017920) <= uVar1) goto code_r0x08026050;
            uVar9 = 0xffffffe;
        }
        else {
            uVar9 = 0;
            if (uVar2 != 0) {
                uVar9 = 0x53fc0000 / uVar2;
            }
        }
        *puVar8 = uVar9;
    }
code_r0x08026050:
    if (uVar1 != 0) {
        iVar10 = 899;
        do {
            regmap_read(*(iVar6 + 0x20),0x3017,&uStack_a0 + 4);
            regmap_read(*(iVar6 + 0x20),0x3018,&uStack_a0);
            bVar5 = iVar10 == 0;
            iVar10 = iVar10 + -1;
            uStack_a0._4_4_ = uStack_a0 | uStack_a0._4_4_ << 8;
            if (bVar5) break;
        } while ((uStack_a0._4_4_ & 0x3fff) != 0);
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_98) {
        return;
    }
    __stack_chk_fail();
code_r0x080260cc:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x80260d0);
    (*pcVar4)();
}


// ===== sym.wcd938x_mbhc_get_result_params @ 0x08025ef8 (size 472) =====

void sym.wcd938x_mbhc_get_result_params(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    code *pcVar4;
    bool bVar5;
    uint32_t uVar6;
    ulong *in_x18;
    int iVar7;
    ulong unaff_x30;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_48 = *(iVar3 + 0x5e0);
    uStack_50 = 0;
    regmap_update_bits_base(*(arg1 + 0x20),0x3016,0x20,0x20,0,0,0);
    iVar7 = 899;
    do {
        regmap_read(*(arg1 + 0x20),0x3018,&uStack_50 + 4);
        if ((uStack_50._4_4_ >> 7 & 1) != 0) break;
        bVar5 = iVar7 != 0;
        iVar7 = iVar7 + -1;
    } while (bVar5);
    uStack_50._4_4_ = uStack_50._4_4_ << 8;
    regmap_read(*(arg1 + 0x20),0x3017,&uStack_50);
    uStack_50._4_4_ = uStack_50._4_4_ | uStack_50;
    regmap_update_bits_base(*(arg1 + 0x20),0x3016,0x20,0,0,0,0);
    uVar1 = uStack_50._4_4_ & 0x3fff;
    uVar2 = uStack_50._4_4_ & 0xffff;
    if (((uStack_50._4_4_ >> 0xf & 1) == 0) && (uVar1 != 0)) {
        usleep_range_state(5000,0x13ba,2);
    }
    if ((0x3fff < uVar2) && (uVar1 != 0)) {
        uVar2 = (-1 << (0xe - (arg3 & 0xffff) & 0x1f)) + uVar1 * *(arg2 + (uVar2 >> 0xe) * 2);
        if (uVar2 < 1) {
            if (7 < (arg3 & 0xffff)) goto code_r0x080260cc;
            if (*((arg3 & 0xffffU) * 4 + 0x8017920) <= uVar1) goto code_r0x08026050;
            uVar6 = 0xffffffe;
        }
        else {
            uVar6 = 0;
            if (uVar2 != 0) {
                uVar6 = 0x53fc0000 / uVar2;
            }
        }
        *arg4 = uVar6;
    }
code_r0x08026050:
    if (uVar1 != 0) {
        iVar7 = 899;
        do {
            regmap_read(*(arg1 + 0x20),0x3017,&uStack_50 + 4);
            regmap_read(*(arg1 + 0x20),0x3018,&uStack_50);
            bVar5 = iVar7 == 0;
            iVar7 = iVar7 + -1;
            uStack_50._4_4_ = uStack_50 | uStack_50._4_4_ << 8;
            if (bVar5) break;
        } while ((uStack_50._4_4_ & 0x3fff) != 0);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_48) {
        return;
    }
    __stack_chk_fail();
code_r0x080260cc:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x80260d0);
    (*pcVar4)();
}


// ===== sym.wcd938x_hph_impedance_get @ 0x080260d0 (size 228) =====

//WARNING: Type propagation algorithm not settling

ulong sym.wcd938x_hph_impedance_get(int64_t arg1,int64_t arg2)

{
    uint32_t *puVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar5;
    ulong unaff_x30;
    uchar auVar6 [16];
    uint32_t uStack_40;
    uchar auStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iVar5 = *(arg1 + 0x80);
    _uStack_40 = 0;
    iVar3 = sym.wcd938x_soc_get_mbhc(iVar5);
    if (iVar3 == 0) {
        iVar2 = ___ratelimit(obj.wcd938x_hph_impedance_get._rs,"wcd938x_hph_impedance_get");
        if (iVar2 != 0) {
            _dev_err(*(iVar5 + 0x18),"%s: mbhc not initialized!\n","wcd938x_hph_impedance_get");
        }
        uVar4 = 0xffffffea;
    }
    else {
        iVar2 = *(*(arg1 + 0x78) + 0x18);
        wcd_mbhc_get_impedance(iVar3,auStack_3c,&uStack_40);
        uVar4 = 0;
        puVar1 = auStack_3c;
        if (iVar2 != 0) {
            puVar1 = &uStack_40;
        }
        *(arg2 + 0x48) = *puVar1;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return uVar4;
    }
    auVar6 = __stack_chk_fail(uVar4);
    *extraout_x18 = sym.wcd938x_get_hph_type;
    iVar5 = *(auVar6._0_8_ + 0x80);
    iVar3 = sym.wcd938x_soc_get_mbhc(iVar5);
    if (iVar3 == 0) {
        iVar2 = ___ratelimit(obj.wcd938x_get_hph_type._rs,"wcd938x_get_hph_type");
        if (iVar2 != 0) {
            _dev_err(*(iVar5 + 0x18),"%s: mbhc not initialized!\n","wcd938x_get_hph_type");
        }
        uVar4 = 0xffffffea;
    }
    else {
        uVar4 = 0;
        *(auVar6._8_8_ + 0x48) = *(iVar3 + 0x1c4);
    }
    return uVar4;
}


// ===== sym.wcd938x_get_hph_type @ 0x080261b4 (size 132) =====

ulong sym.wcd938x_get_hph_type(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x80);
    iVar2 = sym.wcd938x_soc_get_mbhc(arg1_00);
    if (iVar2 == 0) {
        iVar1 = ___ratelimit(obj.wcd938x_get_hph_type._rs,"wcd938x_get_hph_type");
        if (iVar1 != 0) {
            _dev_err(*(arg1_00 + 0x18),"%s: mbhc not initialized!\n","wcd938x_get_hph_type");
        }
        uVar3 = 0xffffffea;
    }
    else {
        uVar3 = 0;
        *(arg2 + 0x48) = *(iVar2 + 0x1c4);
    }
    return uVar3;
}


// ===== sym.init_module @ 0x080263f4 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.wcd938x_probe.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08026428 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.wcd938x_probe.1fb7d28f1601f4ed4ac4e9a0615460c6.cfi_jt);
    return;
}

