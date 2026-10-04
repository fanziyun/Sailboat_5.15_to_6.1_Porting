// decompiled from swr_dmic_dlkm by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 488) =====

//WARNING: Switch with 1 destination removed at 0x080035b0

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 < -0x49739d0000a0fe53) {
            if (arg1 == -0x749213c658cf941a) {
                pcVar2 = sym.snd_soc_info_enum_double.cfi_jt;
            }
            else {
                if (arg1 != -0x57be845bca9148ef) goto code_r0x08003570;
                pcVar2 = sym.swr_dmic_resume.089e67a74375a66802647a567e2a34c2.cfi_jt;
            }
        }
        else if (arg1 == -0x49739d0000a0fe53) {
            pcVar2 = sym.swr_dmic_port_enable.089e67a74375a66802647a567e2a34c2.cfi_jt;
        }
        else {
            if (arg1 != -0x440ca8bece010a7b) {
                if (arg1 != -0xf2d15659b6de7a9) goto code_r0x08003570;
                pcVar2 = sym.swr_dmic_codec_probe.089e67a74375a66802647a567e2a34c2.cfi_jt;
                goto code_r0x080021d8;
            }
            pcVar2 = sym.swr_dmic_remove.089e67a74375a66802647a567e2a34c2.cfi_jt;
        }
        if (1 < (pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d)) {
code_r0x08003570:
            *in_x18 = unaff_x30;
            if (arg3 != 0) {
                if (4 < *arg3) {
                    return;
                }
                __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
            }
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5502,0x80035c4);
            (*pcVar1)();
        }
    }
    else {
        if (arg1 < 0x7d57972cd3914fb1) {
            if (arg1 != 0x2b3a43e29242445) {
                if ((arg1 == 0x2882621ee1337d31) && ((pcVar1 + -0x8002238 >> 3 | pcVar1 << 0x3d) < 4)) {
                    return;
                }
                goto code_r0x08003570;
            }
            pcVar2 = sym.init_module.cfi_jt;
        }
        else if (arg1 == 0x7d57972cd3914fb1) {
            pcVar2 = sym.swr_dmic_event_notify.089e67a74375a66802647a567e2a34c2.cfi_jt;
        }
        else if (arg1 == 0x7e04a0fb7ad8bcd5) {
            pcVar2 = sym.cleanup_module.cfi_jt;
        }
        else {
            if (arg1 != 0x7e6c99e1529760f9) goto code_r0x08003570;
            pcVar2 = sym.swr_dmic_codec_remove.089e67a74375a66802647a567e2a34c2.cfi_jt;
        }
code_r0x080021d8:
        if (pcVar1 != pcVar2) goto code_r0x08003570;
    }
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080021f0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    swr_driver_unregister(reloc.swr_dmic_probe.089e67a74375a66802647a567e2a34c2.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080021f8 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    swr_driver_register(reloc.swr_dmic_probe.089e67a74375a66802647a567e2a34c2.cfi_jt);
    return;
}


// ===== sym.swr_dmic_codec_probe.089e67a74375a66802647a567e2a34c2.cfi_jt @ 0x08002200 (size 8) =====

void sym.swr_dmic_codec_probe.089e67a74375a66802647a567e2a34c2.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    iVar3 = *(*(param_1 + 0x18) + 0x98);
    if (iVar3 == 0) {
        uVar2 = 0xffffffea;
    }
    else {
        *(iVar3 + 0x10) = param_1;
        if (*(param_1 + 0x10) == 0) {
            _dev_err(*(param_1 + 0x18),"%s: component prefix is NULL\n","swr_dmic_codec_probe");
            uVar2 = 0xfffffdfb;
        }
        else {
            uStack_48 = 0;
            uStack_40 = 0;
            iVar1 = param_1 + 0xd0;
            uStack_58 = 0;
            uStack_50 = 0;
            uStack_60 = 0;
            strlcpy(&uStack_60,*(param_1 + 0x10),0x28);
            strlcat(&uStack_60,0x800042d,0x28);
            strlcat(&uStack_60,*(*(iVar3 + 0x20) + 0x80),0x28);
            snd_soc_dapm_ignore_suspend(iVar1,&uStack_60);
            uStack_60 = 0;
            uStack_58 = 0;
            uStack_50 = 0;
            uStack_48 = 0;
            uStack_40 = 0;
            strlcpy(&uStack_60,*(param_1 + 0x10),0x28);
            strlcat(&uStack_60," SWR_DMIC",0x28);
            snd_soc_dapm_ignore_suspend(iVar1,&uStack_60);
            uStack_60 = 0;
            uStack_58 = 0;
            uStack_50 = 0;
            uStack_48 = 0;
            uStack_40 = 0;
            strlcpy(&uStack_60,*(param_1 + 0x10),0x28);
            strlcat(&uStack_60," SMIC_PORT_EN",0x28);
            snd_soc_dapm_ignore_suspend(iVar1,&uStack_60);
            uStack_60 = 0;
            uStack_58 = 0;
            uStack_50 = 0;
            uStack_48 = 0;
            uStack_40 = 0;
            strlcpy(&uStack_60,*(param_1 + 0x10),0x28);
            strlcat(&uStack_60," SWR_DMIC_OUTPUT",0x28);
            snd_soc_dapm_ignore_suspend(iVar1,&uStack_60);
            uStack_60 = 0;
            uStack_58 = 0;
            uStack_50 = 0;
            uStack_48 = 0;
            uStack_40 = 0;
            strlcpy(&uStack_60,*(param_1 + 0x10),0x28);
            strlcat(&uStack_60," VA_SWR_DMIC",0x28);
            snd_soc_dapm_ignore_suspend(iVar1,&uStack_60);
            uStack_60 = 0;
            uStack_58 = 0;
            uStack_50 = 0;
            uStack_48 = 0;
            uStack_40 = 0;
            strlcpy(&uStack_60,*(param_1 + 0x10),0x28);
            strlcat(&uStack_60," SMIC_VA_PORT_EN",0x28);
            snd_soc_dapm_ignore_suspend(iVar1,&uStack_60);
            uStack_60 = 0;
            uStack_58 = 0;
            uStack_50 = 0;
            uStack_48 = 0;
            uStack_40 = 0;
            strlcpy(&uStack_60,*(param_1 + 0x10),0x28);
            strlcat(&uStack_60," SWR_DMIC_VA_OUTPUT",0x28);
            snd_soc_dapm_ignore_suspend(iVar1,&uStack_60);
            snd_soc_dapm_sync(iVar1);
            *(iVar3 + 0xb0) = sym.swr_dmic_event_notify.089e67a74375a66802647a567e2a34c2.cfi_jt;
            wcd938x_swr_dmic_register_notifier(*(iVar3 + 0x28),iVar3 + 0xb0,1);
            uVar2 = 0;
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return;
    }
    iVar3 = __stack_chk_fail(uVar2);
    *(*(*(iVar3 + 0x18) + 0x98) + 0x10) = 0;
    return;
}


// ===== sym.snd_soc_info_enum_double.cfi_jt @ 0x08002208 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_info_enum_double.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.snd_soc_info_volsw.cfi_jt @ 0x08002210 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_info_volsw.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.swr_dmic_event_notify.089e67a74375a66802647a567e2a34c2.cfi_jt @ 0x08002218 (size 8) =====

ulong sym.swr_dmic_event_notify.089e67a74375a66802647a567e2a34c2.cfi_jt(int64_t param_1,int16_t param_2)

{
    int iVar1;
    ulong uVar2;
    char *pcVar3;
    ulong *in_x18;
    int64_t iVar4;
    int64_t iVar5;
    ulong unaff_x30;
    uchar auStack_2c [4];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    if (param_2 != 1) {
        if (param_2 == 0) {
            iVar5 = *(param_1 + -0xa8);
            if ((iVar5 == 0) || (iVar4 = *(iVar5 + 0xe0), iVar4 == 0)) {
                iVar1 = ___ratelimit(obj.swr_dmic_down._rs,"swr_dmic_down");
                if (iVar1 != 0) {
                    iVar5 = iVar5 + 0x48;
                    pcVar3 = "swr_dmic_down";
                    goto code_r0x080033e0;
                }
                goto code_r0x08003438;
            }
            iVar1 = *(iVar4 + 0x44) + -1;
            *(iVar4 + 0x44) = iVar1;
            if (iVar1 < 0) {
                _dev_warn(iVar5 + 0x48,"%s: mismatch in supply count %d\n","swr_dmic_down");
                uVar2 = 0;
                *(iVar4 + 0x44) = 0;
                goto code_r0x0800343c;
            }
            if (iVar1 == 0) {
                if (*(iVar4 + 0x28) == 0) {
                    uVar2 = ___ratelimit(obj.enable_wcd_codec_supply._rs,"enable_wcd_codec_supply");
                    if (uVar2 != 0) {
                        _printk(0x80004fc,"enable_wcd_codec_supply");
                        uVar2 = 0;
                    }
                }
                else {
                    wcd938x_codec_force_enable_micbias_v2(*(iVar4 + 0x28),8,*(iVar4 + 0x30));
                    uVar2 = 0;
                }
                goto code_r0x0800343c;
            }
        }
        uVar2 = 0;
        goto code_r0x0800343c;
    }
    iVar5 = *(param_1 + -0xa8);
    if ((iVar5 == 0) || (iVar4 = *(iVar5 + 0xe0), iVar4 == 0)) {
        iVar1 = ___ratelimit(obj.swr_dmic_up._rs,"swr_dmic_up");
        if (iVar1 != 0) {
            iVar5 = iVar5 + 0x48;
            pcVar3 = "swr_dmic_up";
code_r0x080033e0:
            _dev_err(iVar5,"%s: swr_dmic is NULL\n",pcVar3);
        }
    }
    else {
        iVar1 = *(iVar4 + 0x44);
        *(iVar4 + 0x44) = iVar1 + 1;
        if (iVar1 == 0) {
            if (*(iVar4 + 0x28) == 0) {
                iVar1 = ___ratelimit(obj.enable_wcd_codec_supply._rs,"enable_wcd_codec_supply");
                if (iVar1 != 0) {
                    _printk(0x80004fc,"enable_wcd_codec_supply");
                }
                goto code_r0x08003438;
            }
            uVar2 = wcd938x_codec_force_enable_micbias_v2(*(iVar4 + 0x28),1,*(iVar4 + 0x30));
            if (uVar2 != 0) goto code_r0x0800343c;
        }
        iVar5 = *(param_1 + -0xa8);
        auStack_2c[0] = 0;
        if ((iVar5 != 0) && (*(iVar5 + 0xe0) != 0)) {
            iVar1 = swr_get_logical_dev_num(iVar5,*(iVar5 + 0x3d8),auStack_2c);
            if (iVar1 != 0) {
                usleep_range_state(1000,0x44c,2);
                iVar1 = swr_get_logical_dev_num(iVar5,*(iVar5 + 0x3d8),auStack_2c);
                if (iVar1 != 0) {
                    usleep_range_state(1000,0x44c,2);
                    iVar1 = swr_get_logical_dev_num(iVar5,*(iVar5 + 0x3d8),auStack_2c);
                    if (iVar1 != 0) {
                        usleep_range_state(1000,0x44c,2);
                        iVar1 = swr_get_logical_dev_num(iVar5,*(iVar5 + 0x3d8),auStack_2c);
                        if (iVar1 != 0) {
                            usleep_range_state(1000,0x44c,2);
                            iVar1 = swr_get_logical_dev_num(iVar5,*(iVar5 + 0x3d8),auStack_2c);
                            if (iVar1 != 0) {
                                usleep_range_state(1000,0x44c,2);
                                swr_get_logical_dev_num(iVar5,*(iVar5 + 0x3d8),auStack_2c);
                            }
                        }
                    }
                }
            }
            uVar2 = 0;
            *(iVar5 + 0x40) = auStack_2c[0];
            goto code_r0x0800343c;
        }
        iVar1 = ___ratelimit(obj.swr_dmic_reset._rs,"swr_dmic_reset");
        if (iVar1 != 0) {
            iVar5 = iVar5 + 0x48;
            pcVar3 = "swr_dmic_reset";
            goto code_r0x080033e0;
        }
    }
code_r0x08003438:
    uVar2 = 0xffffffea;
code_r0x0800343c:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_28) {
        __stack_chk_fail(uVar2);
        return 0;
    }
    return uVar2;
}


// ===== sym.swr_dmic_port_enable.089e67a74375a66802647a567e2a34c2.cfi_jt @ 0x08002220 (size 8) =====

ulong sym.swr_dmic_port_enable.089e67a74375a66802647a567e2a34c2.cfi_jt(int64_t param_1,ulong param_2,int param_3)

{
    code *pcVar1;
    int iVar2;
    ulong uVar3;
    char *pcVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    uchar auStack_5c [4];
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    uchar auStack_24 [4];
    uint8_t auStack_20 [4];
    uchar auStack_1c [4];
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_18 = *(iVar5 + 0x5e0);
    auStack_1c[0] = 1;
    auStack_20[0] = *(param_1 + 0x4c);
    iVar5 = *(*(*(param_1 + 0x28) + -0xb8) + 0x98);
    if (1 < auStack_20[0]) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5512,0x80031e4);
        (*pcVar1)();
    }
    auStack_24[0] = *(iVar5 + auStack_20[0] + 0x48);
    if (param_3 == 4) {
        uVar3 = swr_disconnect_port(*(iVar5 + 8),auStack_20,1,auStack_1c,auStack_24);
    }
    else if (param_3 == 2) {
        uVar3 = swr_slvdev_datapath_control(*(iVar5 + 8),*(*(iVar5 + 8) + 0x40),1);
    }
    else {
        uVar3 = 0;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_18) {
        return uVar3;
    }
    auVar8 = __stack_chk_fail(uVar3);
    iVar7 = auVar8._0_8_;
    *extraout_x18 = sym.swr_dmic_event_notify;
    pcStack_48 = sym.swr_dmic_event_notify;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    puStack_50 = &stack0xfffffffffffffff0;
    if ((auVar8._8_4_ & 0xffff) != 1) {
        if ((auVar8._8_8_ & 0xffff) == 0) {
            iVar5 = *(iVar7 + -0xa8);
            if ((iVar5 == 0) || (iVar7 = *(iVar5 + 0xe0), iVar7 == 0)) {
                iVar2 = ___ratelimit(obj.swr_dmic_down._rs,"swr_dmic_down");
                if (iVar2 != 0) {
                    iVar5 = iVar5 + 0x48;
                    pcVar4 = "swr_dmic_down";
                    goto code_r0x080033e0;
                }
                goto code_r0x08003438;
            }
            iVar2 = *(iVar7 + 0x44) + -1;
            *(iVar7 + 0x44) = iVar2;
            if (iVar2 < 0) {
                _dev_warn(iVar5 + 0x48,"%s: mismatch in supply count %d\n","swr_dmic_down");
                uVar3 = 0;
                *(iVar7 + 0x44) = 0;
                goto code_r0x0800343c;
            }
            if (iVar2 == 0) {
                if (*(iVar7 + 0x28) == 0) {
                    uVar3 = ___ratelimit(obj.enable_wcd_codec_supply._rs,"enable_wcd_codec_supply");
                    if (uVar3 != 0) {
                        _printk(0x80004fc,"enable_wcd_codec_supply");
                        uVar3 = 0;
                    }
                }
                else {
                    wcd938x_codec_force_enable_micbias_v2(*(iVar7 + 0x28),8,*(iVar7 + 0x30));
                    uVar3 = 0;
                }
                goto code_r0x0800343c;
            }
        }
        uVar3 = 0;
        goto code_r0x0800343c;
    }
    iVar5 = *(iVar7 + -0xa8);
    if ((iVar5 == 0) || (iVar6 = *(iVar5 + 0xe0), iVar6 == 0)) {
        iVar2 = ___ratelimit(obj.swr_dmic_up._rs,"swr_dmic_up");
        if (iVar2 != 0) {
            iVar5 = iVar5 + 0x48;
            pcVar4 = "swr_dmic_up";
code_r0x080033e0:
            _dev_err(iVar5,"%s: swr_dmic is NULL\n",pcVar4);
        }
    }
    else {
        iVar2 = *(iVar6 + 0x44);
        *(iVar6 + 0x44) = iVar2 + 1;
        if (iVar2 == 0) {
            if (*(iVar6 + 0x28) == 0) {
                iVar2 = ___ratelimit(obj.enable_wcd_codec_supply._rs,"enable_wcd_codec_supply");
                if (iVar2 != 0) {
                    _printk(0x80004fc,"enable_wcd_codec_supply");
                }
                goto code_r0x08003438;
            }
            uVar3 = wcd938x_codec_force_enable_micbias_v2(*(iVar6 + 0x28),1,*(iVar6 + 0x30));
            if (uVar3 != 0) goto code_r0x0800343c;
        }
        iVar5 = *(iVar7 + -0xa8);
        auStack_5c[0] = 0;
        if ((iVar5 != 0) && (*(iVar5 + 0xe0) != 0)) {
            iVar2 = swr_get_logical_dev_num(iVar5,*(iVar5 + 0x3d8),auStack_5c);
            if (iVar2 != 0) {
                usleep_range_state(1000,0x44c,2);
                iVar2 = swr_get_logical_dev_num(iVar5,*(iVar5 + 0x3d8),auStack_5c);
                if (iVar2 != 0) {
                    usleep_range_state(1000,0x44c,2);
                    iVar2 = swr_get_logical_dev_num(iVar5,*(iVar5 + 0x3d8),auStack_5c);
                    if (iVar2 != 0) {
                        usleep_range_state(1000,0x44c,2);
                        iVar2 = swr_get_logical_dev_num(iVar5,*(iVar5 + 0x3d8),auStack_5c);
                        if (iVar2 != 0) {
                            usleep_range_state(1000,0x44c,2);
                            iVar2 = swr_get_logical_dev_num(iVar5,*(iVar5 + 0x3d8),auStack_5c);
                            if (iVar2 != 0) {
                                usleep_range_state(1000,0x44c,2);
                                swr_get_logical_dev_num(iVar5,*(iVar5 + 0x3d8),auStack_5c);
                            }
                        }
                    }
                }
            }
            uVar3 = 0;
            *(iVar5 + 0x40) = auStack_5c[0];
            goto code_r0x0800343c;
        }
        iVar2 = ___ratelimit(obj.swr_dmic_reset._rs,"swr_dmic_reset");
        if (iVar2 != 0) {
            iVar5 = iVar5 + 0x48;
            pcVar4 = "swr_dmic_reset";
            goto code_r0x080033e0;
        }
    }
code_r0x08003438:
    uVar3 = 0xffffffea;
code_r0x0800343c:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_58) {
        __stack_chk_fail(uVar3);
        return 0;
    }
    return uVar3;
}


// ===== sym.dmic_swr_ctrl.089e67a74375a66802647a567e2a34c2.cfi_jt @ 0x08002228 (size 8) =====

ulong sym.dmic_swr_ctrl.089e67a74375a66802647a567e2a34c2.cfi_jt(int64_t param_1,ulong param_2,char *param_3)

{
    uint8_t uVar1;
    code *pcVar2;
    int iVar3;
    ulong uVar4;
    int64_t iVar5;
    char *pcVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar8;
    int64_t iVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    uchar auStack_9c [4];
    int64_t iStack_98;
    uchar **ppuStack_90;
    code *pcStack_88;
    int64_t iStack_80;
    uint64_t uStack_78;
    uchar auStack_64 [4];
    uint8_t auStack_60 [4];
    uchar auStack_5c [4];
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    uint8_t auStack_3c [4];
    uchar auStack_38 [4];
    uint uStack_34;
    uchar auStack_30 [4];
    uchar auStack_2c [4];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_28 = *(iVar7 + 0x5e0);
    iVar9 = *(param_1 + 0x28);
    auStack_2c[0] = 1;
    uVar1 = *(param_1 + 0x4c);
    uVar8 = uVar1;
    auStack_30[0] = 1;
    iVar7 = *(*(iVar9 + -0xb8) + 0x98);
    auStack_3c[0] = uVar1;
    if (uVar1 < 2) {
        uStack_34 = 2400000;
        if (uVar1 != 0) {
            uStack_34 = 600000;
        }
        auStack_38[0] = *(iVar7 + uVar8 + 0x48);
        if (param_3 == 8) {
            param_3 = NULL;
            uVar4 = swr_slvdev_datapath_control(*(iVar7 + 8),*(*(iVar7 + 8) + 0x40));
        }
        else if (param_3 == 1) {
            uVar4 = swr_connect_port(*(iVar7 + 8),auStack_3c,param_3,auStack_30,&uStack_34,auStack_2c,auStack_38);
        }
        else {
            uVar4 = 0;
        }
    }
    else {
        iVar3 = ___ratelimit(obj.dmic_swr_ctrl._rs,"dmic_swr_ctrl");
        if (iVar3 == 0) {
            uVar4 = 0xffffffea;
        }
        else {
            param_3 = "dmic_swr_ctrl";
            _dev_err(*(iVar9 + -0xb8),"%s: invalid port id: %d\n","dmic_swr_ctrl",uVar1);
            uVar4 = 0xffffffea;
        }
    }
    iVar3 = param_3;
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_28) {
        return uVar4;
    }
    iVar5 = __stack_chk_fail(uVar4);
    *extraout_x18 = sym.swr_dmic_port_enable;
    pcStack_48 = sym.swr_dmic_port_enable;
    iVar7 = sp_el0;
    iStack_58 = *(iVar7 + 0x5e0);
    auStack_5c[0] = 1;
    auStack_60[0] = *(iVar5 + 0x4c);
    iVar7 = *(*(*(iVar5 + 0x28) + -0xb8) + 0x98);
    puStack_50 = &stack0xffffffffffffffe0;
    if (1 < auStack_60[0]) {
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5512,0x80031e4);
        (*pcVar2)();
    }
    auStack_64[0] = *(iVar7 + auStack_60[0] + 0x48);
    if (iVar3 == 4) {
        uVar4 = swr_disconnect_port(*(iVar7 + 8),auStack_60,1,auStack_5c,auStack_64);
    }
    else if (iVar3 == 2) {
        uVar4 = swr_slvdev_datapath_control(*(iVar7 + 8),*(*(iVar7 + 8) + 0x40),1);
    }
    else {
        uVar4 = 0;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_58) {
        return uVar4;
    }
    auVar10 = __stack_chk_fail(uVar4);
    iVar5 = auVar10._0_8_;
    *extraout_x18_00 = sym.swr_dmic_event_notify;
    pcStack_88 = sym.swr_dmic_event_notify;
    iVar7 = sp_el0;
    iStack_98 = *(iVar7 + 0x5e0);
    ppuStack_90 = &puStack_50;
    iStack_80 = iVar9;
    uStack_78 = uVar8;
    if ((auVar10._8_4_ & 0xffff) != 1) {
        if ((auVar10._8_8_ & 0xffff) == 0) {
            iVar7 = *(iVar5 + -0xa8);
            if ((iVar7 == 0) || (iVar9 = *(iVar7 + 0xe0), iVar9 == 0)) {
                iVar3 = ___ratelimit(obj.swr_dmic_down._rs,"swr_dmic_down");
                if (iVar3 != 0) {
                    iVar7 = iVar7 + 0x48;
                    pcVar6 = "swr_dmic_down";
                    goto code_r0x080033e0;
                }
                goto code_r0x08003438;
            }
            iVar3 = *(iVar9 + 0x44) + -1;
            *(iVar9 + 0x44) = iVar3;
            if (iVar3 < 0) {
                _dev_warn(iVar7 + 0x48,"%s: mismatch in supply count %d\n","swr_dmic_down");
                uVar4 = 0;
                *(iVar9 + 0x44) = 0;
                goto code_r0x0800343c;
            }
            if (iVar3 == 0) {
                if (*(iVar9 + 0x28) == 0) {
                    uVar4 = ___ratelimit(obj.enable_wcd_codec_supply._rs,"enable_wcd_codec_supply");
                    if (uVar4 != 0) {
                        _printk(0x80004fc,"enable_wcd_codec_supply");
                        uVar4 = 0;
                    }
                }
                else {
                    wcd938x_codec_force_enable_micbias_v2(*(iVar9 + 0x28),8,*(iVar9 + 0x30));
                    uVar4 = 0;
                }
                goto code_r0x0800343c;
            }
        }
        uVar4 = 0;
        goto code_r0x0800343c;
    }
    iVar7 = *(iVar5 + -0xa8);
    if ((iVar7 == 0) || (iVar9 = *(iVar7 + 0xe0), iVar9 == 0)) {
        iVar3 = ___ratelimit(obj.swr_dmic_up._rs,"swr_dmic_up");
        if (iVar3 != 0) {
            iVar7 = iVar7 + 0x48;
            pcVar6 = "swr_dmic_up";
code_r0x080033e0:
            _dev_err(iVar7,"%s: swr_dmic is NULL\n",pcVar6);
        }
    }
    else {
        iVar3 = *(iVar9 + 0x44);
        *(iVar9 + 0x44) = iVar3 + 1;
        if (iVar3 == 0) {
            if (*(iVar9 + 0x28) == 0) {
                iVar3 = ___ratelimit(obj.enable_wcd_codec_supply._rs,"enable_wcd_codec_supply");
                if (iVar3 != 0) {
                    _printk(0x80004fc,"enable_wcd_codec_supply");
                }
                goto code_r0x08003438;
            }
            uVar4 = wcd938x_codec_force_enable_micbias_v2(*(iVar9 + 0x28),1,*(iVar9 + 0x30));
            if (uVar4 != 0) goto code_r0x0800343c;
        }
        iVar7 = *(iVar5 + -0xa8);
        auStack_9c[0] = 0;
        if ((iVar7 != 0) && (*(iVar7 + 0xe0) != 0)) {
            iVar3 = swr_get_logical_dev_num(iVar7,*(iVar7 + 0x3d8),auStack_9c);
            if (iVar3 != 0) {
                usleep_range_state(1000,0x44c,2);
                iVar3 = swr_get_logical_dev_num(iVar7,*(iVar7 + 0x3d8),auStack_9c);
                if (iVar3 != 0) {
                    usleep_range_state(1000,0x44c,2);
                    iVar3 = swr_get_logical_dev_num(iVar7,*(iVar7 + 0x3d8),auStack_9c);
                    if (iVar3 != 0) {
                        usleep_range_state(1000,0x44c,2);
                        iVar3 = swr_get_logical_dev_num(iVar7,*(iVar7 + 0x3d8),auStack_9c);
                        if (iVar3 != 0) {
                            usleep_range_state(1000,0x44c,2);
                            iVar3 = swr_get_logical_dev_num(iVar7,*(iVar7 + 0x3d8),auStack_9c);
                            if (iVar3 != 0) {
                                usleep_range_state(1000,0x44c,2);
                                swr_get_logical_dev_num(iVar7,*(iVar7 + 0x3d8),auStack_9c);
                            }
                        }
                    }
                }
            }
            uVar4 = 0;
            *(iVar7 + 0x40) = auStack_9c[0];
            goto code_r0x0800343c;
        }
        iVar3 = ___ratelimit(obj.swr_dmic_reset._rs,"swr_dmic_reset");
        if (iVar3 != 0) {
            iVar7 = iVar7 + 0x48;
            pcVar6 = "swr_dmic_reset";
            goto code_r0x080033e0;
        }
    }
code_r0x08003438:
    uVar4 = 0xffffffea;
code_r0x0800343c:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_98) {
        __stack_chk_fail(uVar4);
        return 0;
    }
    return uVar4;
}


// ===== sym.swr_dmic_codec_remove.089e67a74375a66802647a567e2a34c2.cfi_jt @ 0x08002230 (size 8) =====

void sym.swr_dmic_codec_remove.089e67a74375a66802647a567e2a34c2.cfi_jt(int64_t param_1)

{
    *(*(*(param_1 + 0x18) + 0x98) + 0x10) = 0;
    return;
}


// ===== sym.swr_dmic_tx_master_port_put.089e67a74375a66802647a567e2a34c2.cfi_jt @ 0x08002238 (size 8) =====

ulong sym.swr_dmic_tx_master_port_put.089e67a74375a66802647a567e2a34c2.cfi_jt(int64_t param_1,int64_t param_2)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x80) == 0) {
        iVar1 = ___ratelimit(obj.swr_dmic_tx_master_port_put._rs,"swr_dmic_tx_master_port_put");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        uVar2 = 0x80005ee;
    }
    else {
        iVar4 = *(*(*(param_1 + 0x80) + 0x18) + 0x98);
        if (iVar4 != 0) {
            param_1 = param_1 + 0x20;
            uVar2 = strlen(param_1);
            iVar3 = strnstr(param_1,"HIFI",uVar2);
            if (iVar3 == 0) {
                uVar2 = strlen(param_1);
                iVar3 = strnstr(param_1,0x800087f,uVar2);
                if (iVar3 == 0) {
                    return 0xffffffea;
                }
                iVar3 = 1;
            }
            else {
                iVar3 = 0;
            }
            if (0xe < *(param_2 + 0x48)) {
                return 0xffffffea;
            }
            *(iVar4 + iVar3 + 0x48) = *(obj.swr_master_channel_map + *(param_2 + 0x48) * 4);
            return 0;
        }
        iVar1 = ___ratelimit(obj.swr_dmic_tx_master_port_put._rs.36,"swr_dmic_tx_master_port_put");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        uVar2 = 0x8000610;
    }
    _printk(uVar2,"swr_dmic_tx_master_port_put");
    return 0xffffffea;
}


// ===== sym.snd_soc_dapm_put_volsw.cfi_jt @ 0x08002240 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_dapm_put_volsw.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.swr_dmic_tx_master_port_get.089e67a74375a66802647a567e2a34c2.cfi_jt @ 0x08002248 (size 8) =====

ulong sym.swr_dmic_tx_master_port_get.089e67a74375a66802647a567e2a34c2.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint32_t uVar1;
    int iVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x80) == 0) {
        iVar2 = ___ratelimit(obj.swr_dmic_tx_master_port_get._rs,"swr_dmic_tx_master_port_get");
        if (iVar2 != 0) {
            uVar3 = 0x80005ee;
            goto code_r0x08002ec8;
        }
    }
    else {
        iVar5 = *(*(*(param_1 + 0x80) + 0x18) + 0x98);
        if (iVar5 != 0) {
            param_1 = param_1 + 0x20;
            uVar3 = strlen(param_1);
            iVar4 = strnstr(param_1,"HIFI",uVar3);
            if (iVar4 == 0) {
                uVar3 = strlen(param_1);
                iVar4 = strnstr(param_1,0x800087f,uVar3);
                if (iVar4 == 0) {
                    return 0xffffffea;
                }
                iVar4 = 1;
            }
            else {
                iVar4 = 0;
            }
            uVar1 = *(iVar5 + iVar4 + 0x48) - 0x2d;
            iVar5 = 0;
            if (uVar1 < 0xe) {
                iVar5 = (uVar1 & 0xff) + 1;
            }
            *(param_2 + 0x48) = iVar5;
            return 0;
        }
        iVar2 = ___ratelimit(obj.swr_dmic_tx_master_port_get._rs.30,"swr_dmic_tx_master_port_get");
        if (iVar2 != 0) {
            uVar3 = 0x8000610;
code_r0x08002ec8:
            _printk(uVar3,"swr_dmic_tx_master_port_get");
            return 0xffffffea;
        }
    }
    return 0xffffffea;
}


// ===== sym.snd_soc_dapm_get_volsw.cfi_jt @ 0x08002250 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_dapm_get_volsw.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.swr_dmic_resume.089e67a74375a66802647a567e2a34c2.cfi_jt @ 0x08002258 (size 8) =====

ulong sym.swr_dmic_resume.089e67a74375a66802647a567e2a34c2.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((param_1 == 0) || (param_1 == 0x48)) || (*(param_1 + 0x98) == 0)) {
        iVar1 = ___ratelimit(obj.swr_dmic_resume._rs,"swr_dmic_resume");
        if (iVar1 != 0) {
            _dev_err(param_1,"%s: swr_dmic private data is NULL\n","swr_dmic_resume");
        }
        uVar2 = 0xffffffea;
    }
    else {
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.swr_dmic_suspend.089e67a74375a66802647a567e2a34c2.cfi_jt @ 0x08002260 (size 8) =====

ulong sym.swr_dmic_suspend.089e67a74375a66802647a567e2a34c2.cfi_jt(void)

{
    return 0;
}


// ===== sym.swr_dmic_remove.089e67a74375a66802647a567e2a34c2.cfi_jt @ 0x08002268 (size 8) =====

ulong sym.swr_dmic_remove.089e67a74375a66802647a567e2a34c2.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == 0) || (iVar3 = *(param_1 + 0xe0), iVar3 == 0)) {
        _dev_err(param_1 + 0x48,"%s: swr_dmic is NULL\n","swr_dmic_remove");
        uVar2 = 0xffffffea;
    }
    else {
        if (*(iVar3 + 0x44) == 1) {
            if (*(iVar3 + 0x28) == 0) {
                iVar1 = ___ratelimit(obj.enable_wcd_codec_supply._rs,"enable_wcd_codec_supply");
                if (iVar1 != 0) {
                    _printk(0x80004fc,"enable_wcd_codec_supply");
                }
            }
            else {
                wcd938x_codec_force_enable_micbias_v2(*(iVar3 + 0x28),8,*(iVar3 + 0x30));
            }
            *(iVar3 + 0x44) = *(iVar3 + 0x44) + -1;
        }
        snd_soc_unregister_component(param_1 + 0x48);
        uVar2 = 0;
        *(param_1 + 0xe0) = 0;
    }
    return uVar2;
}


// ===== sym.swr_dmic_probe.089e67a74375a66802647a567e2a34c2.cfi_jt @ 0x08002270 (size 8) =====

int sym.swr_dmic_probe.089e67a74375a66802647a567e2a34c2.cfi_jt(int64_t param_1)

{
    uint *puVar1;
    bool bVar2;
    int iVar3;
    int iVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong uVar7;
    uint *puVar8;
    ulong *puVar9;
    int64_t iVar10;
    char *pcVar11;
    char *pcVar12;
    ulong uVar13;
    ulong uVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar15;
    int64_t iVar16;
    ulong unaff_x30;
    ulong uStack_78;
    uchar auStack_70 [4];
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iVar10 = param_1 + 0x48;
    iStack_68 = *(iVar5 + 0x5e0);
    auStack_70[0] = 0;
    uStack_78 = 0;
    iVar5 = devm_kmalloc(iVar10,200,0xdc0);
    if (iVar5 == 0) {
        iVar3 = -0xc;
        goto code_r0x08002418;
    }
    puVar1 = iVar5 + 0x30;
    iVar3 = of_property_read_variable_u32_array(*(param_1 + 0x338),"qcom,swr-dmic-supply",puVar1,1,0);
    if (iVar3 < 0) goto code_r0x08002418;
    iVar6 = of_parse_phandle(*(param_1 + 0x338),"qcom,wcd-handle",0);
    *(iVar5 + 0x38) = iVar6;
    if (iVar6 != 0) {
        iVar6 = of_find_device_by_node();
        if (iVar6 == 0) {
            iVar6 = *(iVar5 + 0x28);
        }
        else {
            iVar6 = snd_soc_lookup_component(iVar6 + 0x10,0);
            *(iVar5 + 0x28) = iVar6;
        }
        *(iVar5 + 0x40) = 1;
        if (iVar6 == 0) {
            iVar3 = ___ratelimit(obj.enable_wcd_codec_supply._rs,"enable_wcd_codec_supply");
            if (iVar3 != 0) {
                _printk(0x80004fc,"enable_wcd_codec_supply");
            }
        }
        else {
            iVar3 = wcd938x_codec_force_enable_micbias_v2(iVar6,1,*puVar1);
            if (iVar3 == 0) {
                *(iVar5 + 0x44) = *(iVar5 + 0x44) + 1;
                goto code_r0x08002374;
            }
        }
code_r0x080023d4:
        iVar3 = -0x205;
        *(iVar5 + 0x40) = 0;
        *(iVar5 + 0x38) = 0;
        goto code_r0x08002418;
    }
    *(iVar5 + 0x40) = 0;
code_r0x08002374:
    uVar7 = *(param_1 + 0x338);
    *(param_1 + 0xe0) = iVar5;
    *(iVar5 + 8) = param_1;
    iVar3 = of_property_read_string(uVar7,"qcom,codec-name",&uStack_78);
    if (iVar3 == 0) {
        iVar16 = *(param_1 + 0xe0);
        uStack_6c = 0;
        iVar6 = of_find_property(*(param_1 + 0x338),"qcom,swr-tx-port-params",&uStack_6c);
        if (iVar6 == 0) {
            pcVar11 = "missing port mapping prop %s\n";
            pcVar12 = "qcom,swr-tx-port-params";
code_r0x080024d8:
            _dev_err(iVar10,pcVar11,pcVar12);
            iVar3 = -0x16;
        }
        else {
            if ((uStack_6c & 0xfffffff0) != 0x40) {
                pcVar11 = "%s:port params not provided for all usecases\n";
                pcVar12 = "swr_dmic_parse_port_params";
                goto code_r0x080024d8;
            }
            puVar8 = __kmalloc(uStack_6c,0xdc0);
            if (puVar8 == NULL) {
                iVar3 = -0xc;
            }
            else {
                iVar3 = of_property_read_variable_u32_array
                                  (*(param_1 + 0x338),"qcom,swr-tx-port-params",puVar8,0x10,0);
                if (-1 < iVar3) {
                    iVar6 = param_1 + 0x48;
                    *(iVar16 + 0x4c) = *puVar8;
                    *(iVar16 + 0x50) = puVar8[1];
                    _dev_err(iVar6,"%s: port %d, uc: %d, offset1:%d, lane: %d\n","swr_dmic_parse_port_params",0,0,
                             *puVar8,puVar8[1]);
                    *(iVar16 + 0x54) = puVar8[2];
                    *(iVar16 + 0x58) = puVar8[3];
                    _dev_err(iVar6,"%s: port %d, uc: %d, offset1:%d, lane: %d\n","swr_dmic_parse_port_params",1,0,
                             puVar8[2],puVar8[3]);
                    *(iVar16 + 0x90) = iVar16 + 0x4c;
                    *(iVar16 + 0x5c) = puVar8[4];
                    *(iVar16 + 0x60) = puVar8[5];
                    _dev_err(iVar6,"%s: port %d, uc: %d, offset1:%d, lane: %d\n","swr_dmic_parse_port_params",0,1,
                             puVar8[4],puVar8[5]);
                    *(iVar16 + 100) = puVar8[6];
                    *(iVar16 + 0x68) = puVar8[7];
                    _dev_err(iVar6,"%s: port %d, uc: %d, offset1:%d, lane: %d\n","swr_dmic_parse_port_params",1,1,
                             puVar8[6],puVar8[7]);
                    *(iVar16 + 0x98) = iVar16 + 0x5c;
                    *(iVar16 + 0x6c) = puVar8[8];
                    *(iVar16 + 0x70) = puVar8[9];
                    _dev_err(iVar6,"%s: port %d, uc: %d, offset1:%d, lane: %d\n","swr_dmic_parse_port_params",0,2,
                             puVar8[8],puVar8[9]);
                    *(iVar16 + 0x74) = puVar8[10];
                    *(iVar16 + 0x78) = puVar8[0xb];
                    _dev_err(iVar6,"%s: port %d, uc: %d, offset1:%d, lane: %d\n","swr_dmic_parse_port_params",1,2,
                             puVar8[10],puVar8[0xb]);
                    *(iVar16 + 0xa0) = iVar16 + 0x6c;
                    *(iVar16 + 0x7c) = puVar8[0xc];
                    *(iVar16 + 0x80) = puVar8[0xd];
                    _dev_err(iVar6,"%s: port %d, uc: %d, offset1:%d, lane: %d\n","swr_dmic_parse_port_params",0,3,
                             puVar8[0xc],puVar8[0xd]);
                    *(iVar16 + 0x84) = puVar8[0xe];
                    *(iVar16 + 0x88) = puVar8[0xf];
                    _dev_err(iVar6,"%s: port %d, uc: %d, offset1:%d, lane: %d\n","swr_dmic_parse_port_params",1,3,
                             puVar8[0xe],puVar8[0xf]);
                    *(iVar16 + 0xa8) = iVar16 + 0x7c;
                    kfree(puVar8);
                    usleep_range_state(5000,0x1392,2);
                    usleep_range_state(100,0x6e,2);
                    iVar3 = swr_get_logical_dev_num(param_1,*(param_1 + 0x3d8),auStack_70);
                    bVar2 = iVar3 == 0;
                    if (iVar3 != 0) {
                        usleep_range_state(100,0x6e,2);
                        iVar3 = swr_get_logical_dev_num(param_1,*(param_1 + 0x3d8),auStack_70);
                        bVar2 = iVar3 == 0;
                        if (iVar3 != 0) {
                            usleep_range_state(100,0x6e,2);
                            iVar3 = swr_get_logical_dev_num(param_1,*(param_1 + 0x3d8),auStack_70);
                            bVar2 = iVar3 == 0;
                            if (iVar3 != 0) {
                                usleep_range_state(100,0x6e,2);
                                iVar3 = swr_get_logical_dev_num(param_1,*(param_1 + 0x3d8),auStack_70);
                                bVar2 = iVar3 == 0;
                                if (iVar3 != 0) {
                                    usleep_range_state(100,0x6e,2);
                                    iVar3 = swr_get_logical_dev_num(param_1,*(param_1 + 0x3d8),auStack_70);
                                    bVar2 = iVar3 == 0;
                                }
                            }
                        }
                    }
                    if (!bVar2) {
                        _dev_info(param_1 + 0x48,"%s get devnum %d for dev addr %llx failed\n","swr_dmic_probe",
                                  auStack_70[0],*(param_1 + 0x3d8));
                        if (*(iVar5 + 0x44) == 1) {
                            sym.enable_wcd_codec_supply(iVar5);
                            *(iVar5 + 0x44) = *(iVar5 + 0x44) + -1;
                        }
                        goto code_r0x080023d4;
                    }
                    *(param_1 + 0x40) = auStack_70[0];
                    swr_init_port_params(param_1,2,iVar5 + 0x90);
                    puVar9 = devm_kmalloc(iVar10,0x160,0xdc0);
                    *(iVar5 + 0x18) = puVar9;
                    if (puVar9 != NULL) {
                        memcpy(puVar9,obj.soc_codec_dev_swr_dmic,0x160);
                        uVar14 = uStack_78;
                        uVar7 = _segment.ehdr;
                        iVar3 = strcmp(uStack_78,_segment.ehdr);
                        uVar13 = _segment.ehdr;
                        if (iVar3 == 0) {
                            uVar15 = 0;
                        }
                        else {
                            iVar3 = strcmp(uVar14,_segment.ehdr);
                            uVar7 = _segment.ehdr;
                            if (iVar3 == 0) {
                                uVar15 = 1;
                                uVar7 = uVar13;
                            }
                            else {
                                iVar3 = strcmp(uVar14,_segment.ehdr);
                                uVar13 = _segment.ehdr;
                                if (iVar3 == 0) {
                                    uVar15 = 2;
                                }
                                else {
                                    iVar3 = strcmp(uVar14,_segment.ehdr);
                                    if (iVar3 != 0) {
                                        iVar3 = -0x16;
                                        goto code_r0x08002398;
                                    }
                                    uVar15 = 3;
                                    uVar7 = uVar13;
                                }
                            }
                        }
                        *puVar9 = uVar7;
                        puVar9 = devm_kmalloc(iVar10,0xf0,0xdc0);
                        *(iVar5 + 0x20) = puVar9;
                        if (puVar9 != NULL) {
                            memcpy(puVar9,obj.swr_dmic_dai,0xf0);
                            uVar7 = *(iVar5 + 0x18);
                            uVar14 = *(obj.dai_name_list + uVar15 * 8);
                            uVar13 = *(obj.aif_name_list + uVar15 * 8);
                            *(puVar9 + 1) = uVar15;
                            *puVar9 = uVar14;
                            puVar9[0x10] = uVar13;
                            iVar3 = snd_soc_register_component(iVar10,uVar7,puVar9,1);
                            if (iVar3 == 0) {
                                iVar6 = snd_soc_lookup_component(iVar10,**(iVar5 + 0x18));
                                if (iVar6 != 0) {
                                    iVar3 = 0;
                                    *(iVar5 + 0x10) = iVar6;
                                    goto code_r0x08002418;
                                }
                                _dev_err(iVar10,"%s: could not find swr_dmic component\n","swr_dmic_probe");
                                iVar3 = 0;
                            }
                            else {
                                _dev_err(iVar10,"%s: Codec registration failed\n","swr_dmic_probe");
                            }
                            goto code_r0x08002398;
                        }
                    }
                    iVar3 = -0xc;
                    goto code_r0x08002398;
                }
                _dev_err(iVar10,"%s: Failed to read  port mapping from prop %s\n","swr_dmic_parse_port_params",
                         "qcom,swr-tx-port-params");
                kfree(puVar8);
            }
        }
        _dev_err(param_1 + 0x48,"%s: Parsing %s failed in node %s\n","swr_dmic_probe","qcom,swr-tx-port-params",
                 *(*(param_1 + 0x338) + 0x10));
    }
code_r0x08002398:
    if (*(iVar5 + 0x44) == 1) {
        if (*(iVar5 + 0x28) == 0) {
            iVar4 = ___ratelimit(obj.enable_wcd_codec_supply._rs,"enable_wcd_codec_supply");
            if (iVar4 != 0) {
                _printk(0x80004fc,"enable_wcd_codec_supply");
            }
        }
        else {
            wcd938x_codec_force_enable_micbias_v2(*(iVar5 + 0x28),8,*puVar1);
        }
        *(iVar5 + 0x44) = *(iVar5 + 0x44) + -1;
    }
    *(iVar5 + 0x40) = 0;
    *(iVar5 + 0x38) = 0;
    swr_remove_device(param_1);
code_r0x08002418:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) != iStack_68) {
        iVar10 = __stack_chk_fail();
        *extraout_x18 = sym.swr_dmic_remove;
        if ((iVar10 == 0) || (iVar5 = *(iVar10 + 0xe0), iVar5 == 0)) {
            _dev_err(iVar10 + 0x48,"%s: swr_dmic is NULL\n","swr_dmic_remove");
            iVar3 = -0x16;
        }
        else {
            if (*(iVar5 + 0x44) == 1) {
                if (*(iVar5 + 0x28) == 0) {
                    iVar3 = ___ratelimit(obj.enable_wcd_codec_supply._rs,"enable_wcd_codec_supply");
                    if (iVar3 != 0) {
                        _printk(0x80004fc,"enable_wcd_codec_supply");
                    }
                }
                else {
                    wcd938x_codec_force_enable_micbias_v2(*(iVar5 + 0x28),8,*(iVar5 + 0x30));
                }
                *(iVar5 + 0x44) = *(iVar5 + 0x44) + -1;
            }
            snd_soc_unregister_component(iVar10 + 0x48);
            iVar3 = 0;
            *(iVar10 + 0xe0) = 0;
        }
        return iVar3;
    }
    return iVar3;
}


// ===== sym.swr_dmic_probe @ 0x08002278 (size 1908) =====

uint64_t sym.swr_dmic_probe(int64_t arg1)

{
    uint *puVar1;
    bool bVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong uVar7;
    uint *puVar8;
    int64_t iVar9;
    char *pcVar10;
    char *pcVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar12;
    int64_t iVar13;
    ulong unaff_x30;
    ulong uStack_78;
    uchar auStack_70 [4];
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iVar9 = arg1 + 0x48;
    iStack_68 = *(iVar5 + 0x5e0);
    auStack_70[0] = 0;
    uStack_78 = 0;
    iVar5 = devm_kmalloc(iVar9,200,0xdc0);
    if (iVar5 == 0) {
        uVar12 = 0xfffffff4;
        goto code_r0x08002418;
    }
    puVar1 = iVar5 + 0x30;
    uVar3 = of_property_read_variable_u32_array(*(arg1 + 0x338),"qcom,swr-dmic-supply",puVar1,1,0);
    if (uVar3 < 0) {
        uVar12 = uVar3;
        goto code_r0x08002418;
    }
    iVar6 = of_parse_phandle(*(arg1 + 0x338),"qcom,wcd-handle",0);
    *(iVar5 + 0x38) = iVar6;
    if (iVar6 != 0) {
        iVar6 = of_find_device_by_node();
        if (iVar6 == 0) {
            iVar6 = *(iVar5 + 0x28);
        }
        else {
            iVar6 = snd_soc_lookup_component(iVar6 + 0x10,0);
            *(iVar5 + 0x28) = iVar6;
        }
        *(iVar5 + 0x40) = 1;
        if (iVar6 == 0) {
            iVar4 = ___ratelimit(obj.enable_wcd_codec_supply._rs,"enable_wcd_codec_supply");
            if (iVar4 != 0) {
                _printk(0x80004fc,"enable_wcd_codec_supply");
            }
        }
        else {
            iVar4 = wcd938x_codec_force_enable_micbias_v2(iVar6,1,*puVar1);
            if (iVar4 == 0) {
                *(iVar5 + 0x44) = *(iVar5 + 0x44) + 1;
                goto code_r0x08002374;
            }
        }
code_r0x080023d4:
        uVar12 = 0xfffffdfb;
        *(iVar5 + 0x40) = 0;
        *(iVar5 + 0x38) = 0;
        goto code_r0x08002418;
    }
    *(iVar5 + 0x40) = 0;
code_r0x08002374:
    uVar7 = *(arg1 + 0x338);
    *(arg1 + 0xe0) = iVar5;
    *(iVar5 + 8) = arg1;
    uVar3 = of_property_read_string(uVar7,"qcom,codec-name",&uStack_78);
    uVar12 = uVar3;
    if (uVar3 == 0) {
        iVar13 = *(arg1 + 0xe0);
        uStack_6c = 0;
        iVar6 = of_find_property(*(arg1 + 0x338),"qcom,swr-tx-port-params",&uStack_6c);
        if (iVar6 == 0) {
            pcVar10 = "missing port mapping prop %s\n";
            pcVar11 = "qcom,swr-tx-port-params";
code_r0x080024d8:
            _dev_err(iVar9,pcVar10,pcVar11);
            uVar12 = 0xffffffea;
        }
        else {
            if ((uStack_6c & 0xfffffff0) != 0x40) {
                pcVar10 = "%s:port params not provided for all usecases\n";
                pcVar11 = "swr_dmic_parse_port_params";
                goto code_r0x080024d8;
            }
            puVar8 = __kmalloc(uStack_6c,0xdc0);
            if (puVar8 == NULL) {
                uVar12 = 0xfffffff4;
            }
            else {
                uVar3 = of_property_read_variable_u32_array(*(arg1 + 0x338),"qcom,swr-tx-port-params",puVar8,0x10,0)
                ;
                if (-1 < uVar3) {
                    iVar6 = arg1 + 0x48;
                    *(iVar13 + 0x4c) = *puVar8;
                    *(iVar13 + 0x50) = puVar8[1];
                    _dev_err(iVar6,"%s: port %d, uc: %d, offset1:%d, lane: %d\n","swr_dmic_parse_port_params",0,0,
                             *puVar8,puVar8[1]);
                    *(iVar13 + 0x54) = puVar8[2];
                    *(iVar13 + 0x58) = puVar8[3];
                    _dev_err(iVar6,"%s: port %d, uc: %d, offset1:%d, lane: %d\n","swr_dmic_parse_port_params",1,0,
                             puVar8[2],puVar8[3]);
                    *(iVar13 + 0x90) = iVar13 + 0x4c;
                    *(iVar13 + 0x5c) = puVar8[4];
                    *(iVar13 + 0x60) = puVar8[5];
                    _dev_err(iVar6,"%s: port %d, uc: %d, offset1:%d, lane: %d\n","swr_dmic_parse_port_params",0,1,
                             puVar8[4],puVar8[5]);
                    *(iVar13 + 100) = puVar8[6];
                    *(iVar13 + 0x68) = puVar8[7];
                    _dev_err(iVar6,"%s: port %d, uc: %d, offset1:%d, lane: %d\n","swr_dmic_parse_port_params",1,1,
                             puVar8[6],puVar8[7]);
                    *(iVar13 + 0x98) = iVar13 + 0x5c;
                    *(iVar13 + 0x6c) = puVar8[8];
                    *(iVar13 + 0x70) = puVar8[9];
                    _dev_err(iVar6,"%s: port %d, uc: %d, offset1:%d, lane: %d\n","swr_dmic_parse_port_params",0,2,
                             puVar8[8],puVar8[9]);
                    *(iVar13 + 0x74) = puVar8[10];
                    *(iVar13 + 0x78) = puVar8[0xb];
                    _dev_err(iVar6,"%s: port %d, uc: %d, offset1:%d, lane: %d\n","swr_dmic_parse_port_params",1,2,
                             puVar8[10],puVar8[0xb]);
                    *(iVar13 + 0xa0) = iVar13 + 0x6c;
                    *(iVar13 + 0x7c) = puVar8[0xc];
                    *(iVar13 + 0x80) = puVar8[0xd];
                    _dev_err(iVar6,"%s: port %d, uc: %d, offset1:%d, lane: %d\n","swr_dmic_parse_port_params",0,3,
                             puVar8[0xc],puVar8[0xd]);
                    *(iVar13 + 0x84) = puVar8[0xe];
                    *(iVar13 + 0x88) = puVar8[0xf];
                    _dev_err(iVar6,"%s: port %d, uc: %d, offset1:%d, lane: %d\n","swr_dmic_parse_port_params",1,3,
                             puVar8[0xe],puVar8[0xf]);
                    *(iVar13 + 0xa8) = iVar13 + 0x7c;
                    kfree(puVar8);
                    usleep_range_state(5000,0x1392,2);
                    usleep_range_state(100,0x6e,2);
                    iVar4 = swr_get_logical_dev_num(arg1,*(arg1 + 0x3d8),auStack_70);
                    bVar2 = iVar4 == 0;
                    if (iVar4 != 0) {
                        usleep_range_state(100,0x6e,2);
                        iVar4 = swr_get_logical_dev_num(arg1,*(arg1 + 0x3d8),auStack_70);
                        bVar2 = iVar4 == 0;
                        if (iVar4 != 0) {
                            usleep_range_state(100,0x6e,2);
                            iVar4 = swr_get_logical_dev_num(arg1,*(arg1 + 0x3d8),auStack_70);
                            bVar2 = iVar4 == 0;
                            if (iVar4 != 0) {
                                usleep_range_state(100,0x6e,2);
                                iVar4 = swr_get_logical_dev_num(arg1,*(arg1 + 0x3d8),auStack_70);
                                bVar2 = iVar4 == 0;
                                if (iVar4 != 0) {
                                    usleep_range_state(100,0x6e,2);
                                    iVar4 = swr_get_logical_dev_num(arg1,*(arg1 + 0x3d8),auStack_70);
                                    bVar2 = iVar4 == 0;
                                }
                            }
                        }
                    }
                    if (bVar2) {
                        *(arg1 + 0x40) = auStack_70[0];
                        swr_init_port_params(arg1,2,iVar5 + 0x90);
                        uVar12 = devm_kmalloc(iVar9,0x160,0xdc0);
                        return uVar12;
                    }
                    _dev_info(arg1 + 0x48,"%s get devnum %d for dev addr %llx failed\n","swr_dmic_probe",
                              auStack_70[0],*(arg1 + 0x3d8));
                    if (*(iVar5 + 0x44) == 1) {
                        sym.enable_wcd_codec_supply(iVar5);
                        *(iVar5 + 0x44) = *(iVar5 + 0x44) + -1;
                    }
                    goto code_r0x080023d4;
                }
                uVar12 = uVar3;
                _dev_err(iVar9,"%s: Failed to read  port mapping from prop %s\n","swr_dmic_parse_port_params",
                         "qcom,swr-tx-port-params");
                kfree(puVar8);
            }
        }
        _dev_err(arg1 + 0x48,"%s: Parsing %s failed in node %s\n","swr_dmic_probe","qcom,swr-tx-port-params",
                 *(*(arg1 + 0x338) + 0x10));
    }
    if (*(iVar5 + 0x44) == 1) {
        if (*(iVar5 + 0x28) == 0) {
            iVar4 = ___ratelimit(obj.enable_wcd_codec_supply._rs,"enable_wcd_codec_supply");
            if (iVar4 != 0) {
                _printk(0x80004fc,"enable_wcd_codec_supply");
            }
        }
        else {
            wcd938x_codec_force_enable_micbias_v2(*(iVar5 + 0x28),8,*puVar1);
        }
        *(iVar5 + 0x44) = *(iVar5 + 0x44) + -1;
    }
    *(iVar5 + 0x40) = 0;
    *(iVar5 + 0x38) = 0;
    swr_remove_device(arg1);
code_r0x08002418:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_68) {
        return uVar12;
    }
    iVar9 = __stack_chk_fail();
    *extraout_x18 = sym.swr_dmic_remove;
    if ((iVar9 == 0) || (iVar5 = *(iVar9 + 0xe0), iVar5 == 0)) {
        _dev_err(iVar9 + 0x48,"%s: swr_dmic is NULL\n","swr_dmic_remove");
        uVar12 = 0xffffffea;
    }
    else {
        if (*(iVar5 + 0x44) == 1) {
            if (*(iVar5 + 0x28) == 0) {
                iVar4 = ___ratelimit(obj.enable_wcd_codec_supply._rs,"enable_wcd_codec_supply");
                if (iVar4 != 0) {
                    _printk(0x80004fc,"enable_wcd_codec_supply");
                }
            }
            else {
                wcd938x_codec_force_enable_micbias_v2(*(iVar5 + 0x28),8,*(iVar5 + 0x30));
            }
            *(iVar5 + 0x44) = *(iVar5 + 0x44) + -1;
        }
        snd_soc_unregister_component(iVar9 + 0x48);
        uVar12 = 0;
        *(iVar9 + 0xe0) = 0;
    }
    return uVar12;
}


// ===== sym.swr_dmic_remove @ 0x080029ec (size 200) =====

ulong sym.swr_dmic_remove(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (iVar3 = *(arg1 + 0xe0), iVar3 == 0)) {
        _dev_err(arg1 + 0x48,"%s: swr_dmic is NULL\n","swr_dmic_remove");
        uVar2 = 0xffffffea;
    }
    else {
        if (*(iVar3 + 0x44) == 1) {
            if (*(iVar3 + 0x28) == 0) {
                iVar1 = ___ratelimit(obj.enable_wcd_codec_supply._rs,"enable_wcd_codec_supply");
                if (iVar1 != 0) {
                    _printk(0x80004fc,"enable_wcd_codec_supply");
                }
            }
            else {
                wcd938x_codec_force_enable_micbias_v2(*(iVar3 + 0x28),8,*(iVar3 + 0x30));
            }
            *(iVar3 + 0x44) = *(iVar3 + 0x44) + -1;
        }
        snd_soc_unregister_component(arg1 + 0x48);
        uVar2 = 0;
        *(arg1 + 0xe0) = 0;
    }
    return uVar2;
}


// ===== sym.enable_wcd_codec_supply @ 0x08002ab4 (size 108) =====

void sym.enable_wcd_codec_supply(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x28) == 0) {
        iVar1 = ___ratelimit(obj.enable_wcd_codec_supply._rs,"enable_wcd_codec_supply");
        if (iVar1 != 0) {
            _printk(0x80004fc,"enable_wcd_codec_supply");
        }
    }
    else {
        wcd938x_codec_force_enable_micbias_v2(*(arg1 + 0x28),8,*(arg1 + 0x30));
    }
    return;
}


// ===== sym.swr_dmic_codec_probe @ 0x08002b20 (size 652) =====

void sym.swr_dmic_codec_probe(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    iVar3 = *(*(arg1 + 0x18) + 0x98);
    if (iVar3 == 0) {
        uVar2 = 0xffffffea;
    }
    else {
        *(iVar3 + 0x10) = arg1;
        if (*(arg1 + 0x10) == 0) {
            _dev_err(*(arg1 + 0x18),"%s: component prefix is NULL\n","swr_dmic_codec_probe");
            uVar2 = 0xfffffdfb;
        }
        else {
            uStack_48 = 0;
            uStack_40 = 0;
            iVar1 = arg1 + 0xd0;
            uStack_58 = 0;
            uStack_50 = 0;
            uStack_60 = 0;
            strlcpy(&uStack_60,*(arg1 + 0x10),0x28);
            strlcat(&uStack_60,0x800042d,0x28);
            strlcat(&uStack_60,*(*(iVar3 + 0x20) + 0x80),0x28);
            snd_soc_dapm_ignore_suspend(iVar1,&uStack_60);
            uStack_60 = 0;
            uStack_58 = 0;
            uStack_50 = 0;
            uStack_48 = 0;
            uStack_40 = 0;
            strlcpy(&uStack_60,*(arg1 + 0x10),0x28);
            strlcat(&uStack_60," SWR_DMIC",0x28);
            snd_soc_dapm_ignore_suspend(iVar1,&uStack_60);
            uStack_60 = 0;
            uStack_58 = 0;
            uStack_50 = 0;
            uStack_48 = 0;
            uStack_40 = 0;
            strlcpy(&uStack_60,*(arg1 + 0x10),0x28);
            strlcat(&uStack_60," SMIC_PORT_EN",0x28);
            snd_soc_dapm_ignore_suspend(iVar1,&uStack_60);
            uStack_60 = 0;
            uStack_58 = 0;
            uStack_50 = 0;
            uStack_48 = 0;
            uStack_40 = 0;
            strlcpy(&uStack_60,*(arg1 + 0x10),0x28);
            strlcat(&uStack_60," SWR_DMIC_OUTPUT",0x28);
            snd_soc_dapm_ignore_suspend(iVar1,&uStack_60);
            uStack_60 = 0;
            uStack_58 = 0;
            uStack_50 = 0;
            uStack_48 = 0;
            uStack_40 = 0;
            strlcpy(&uStack_60,*(arg1 + 0x10),0x28);
            strlcat(&uStack_60," VA_SWR_DMIC",0x28);
            snd_soc_dapm_ignore_suspend(iVar1,&uStack_60);
            uStack_60 = 0;
            uStack_58 = 0;
            uStack_50 = 0;
            uStack_48 = 0;
            uStack_40 = 0;
            strlcpy(&uStack_60,*(arg1 + 0x10),0x28);
            strlcat(&uStack_60," SMIC_VA_PORT_EN",0x28);
            snd_soc_dapm_ignore_suspend(iVar1,&uStack_60);
            uStack_60 = 0;
            uStack_58 = 0;
            uStack_50 = 0;
            uStack_48 = 0;
            uStack_40 = 0;
            strlcpy(&uStack_60,*(arg1 + 0x10),0x28);
            strlcat(&uStack_60," SWR_DMIC_VA_OUTPUT",0x28);
            snd_soc_dapm_ignore_suspend(iVar1,&uStack_60);
            snd_soc_dapm_sync(iVar1);
            *(iVar3 + 0xb0) = sym.swr_dmic_event_notify.089e67a74375a66802647a567e2a34c2.cfi_jt;
            wcd938x_swr_dmic_register_notifier(*(iVar3 + 0x28),iVar3 + 0xb0,1);
            uVar2 = 0;
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return;
    }
    iVar3 = __stack_chk_fail(uVar2);
    *(*(*(iVar3 + 0x18) + 0x98) + 0x10) = 0;
    return;
}


// ===== sym.swr_dmic_codec_remove @ 0x08002dac (size 24) =====

void sym.swr_dmic_codec_remove(int64_t arg1)

{
    *(*(*(arg1 + 0x18) + 0x98) + 0x10) = 0;
    return;
}


// ===== sym.swr_dmic_tx_master_port_get @ 0x08002dc4 (size 280) =====

ulong sym.swr_dmic_tx_master_port_get(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x80) == 0) {
        iVar2 = ___ratelimit(obj.swr_dmic_tx_master_port_get._rs,"swr_dmic_tx_master_port_get");
        if (iVar2 != 0) {
            uVar3 = 0x80005ee;
            goto code_r0x08002ec8;
        }
    }
    else {
        iVar5 = *(*(*(arg1 + 0x80) + 0x18) + 0x98);
        if (iVar5 != 0) {
            arg1 = arg1 + 0x20;
            uVar3 = strlen(arg1);
            iVar4 = strnstr(arg1,"HIFI",uVar3);
            if (iVar4 == 0) {
                uVar3 = strlen(arg1);
                iVar4 = strnstr(arg1,0x800087f,uVar3);
                if (iVar4 == 0) {
                    return 0xffffffea;
                }
                iVar4 = 1;
            }
            else {
                iVar4 = 0;
            }
            uVar1 = *(iVar5 + iVar4 + 0x48) - 0x2d;
            iVar5 = 0;
            if (uVar1 < 0xe) {
                iVar5 = (uVar1 & 0xff) + 1;
            }
            *(arg2 + 0x48) = iVar5;
            return 0;
        }
        iVar2 = ___ratelimit(obj.swr_dmic_tx_master_port_get._rs.30,"swr_dmic_tx_master_port_get");
        if (iVar2 != 0) {
            uVar3 = 0x8000610;
code_r0x08002ec8:
            _printk(uVar3,"swr_dmic_tx_master_port_get");
            return 0xffffffea;
        }
    }
    return 0xffffffea;
}


// ===== sym.swr_dmic_tx_master_port_put @ 0x08002edc (size 280) =====

ulong sym.swr_dmic_tx_master_port_put(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x80) == 0) {
        iVar1 = ___ratelimit(obj.swr_dmic_tx_master_port_put._rs,"swr_dmic_tx_master_port_put");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        uVar2 = 0x80005ee;
    }
    else {
        iVar4 = *(*(*(arg1 + 0x80) + 0x18) + 0x98);
        if (iVar4 != 0) {
            arg1 = arg1 + 0x20;
            uVar2 = strlen(arg1);
            iVar3 = strnstr(arg1,"HIFI",uVar2);
            if (iVar3 == 0) {
                uVar2 = strlen(arg1);
                iVar3 = strnstr(arg1,0x800087f,uVar2);
                if (iVar3 == 0) {
                    return 0xffffffea;
                }
                iVar3 = 1;
            }
            else {
                iVar3 = 0;
            }
            if (0xe < *(arg2 + 0x48)) {
                return 0xffffffea;
            }
            *(iVar4 + iVar3 + 0x48) = *(obj.swr_master_channel_map + *(arg2 + 0x48) * 4);
            return 0;
        }
        iVar1 = ___ratelimit(obj.swr_dmic_tx_master_port_put._rs.36,"swr_dmic_tx_master_port_put");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        uVar2 = 0x8000610;
    }
    _printk(uVar2,"swr_dmic_tx_master_port_put");
    return 0xffffffea;
}


// ===== sym.dmic_swr_ctrl @ 0x08002ff4 (size 304) =====

ulong sym.dmic_swr_ctrl(int64_t arg1,uchar noname_1 [16],uint32_t arg2)

{
    uint8_t uVar1;
    code *pcVar2;
    int iVar3;
    ulong uVar4;
    int64_t iVar5;
    char *pcVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar8;
    int64_t iVar9;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uchar extraout_q0_00 [16];
    uchar extraout_q0_01 [16];
    uchar auVar10 [16];
    uchar auStack_9c [4];
    int64_t iStack_98;
    uchar **ppuStack_90;
    code *pcStack_88;
    int64_t iStack_80;
    uint64_t uStack_78;
    uchar auStack_64 [4];
    uint8_t auStack_60 [4];
    uchar auStack_5c [4];
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    uint8_t auStack_3c [4];
    uchar auStack_38 [4];
    uint uStack_34;
    uchar auStack_30 [4];
    uchar auStack_2c [4];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_28 = *(iVar7 + 0x5e0);
    iVar9 = *(arg1 + 0x28);
    auStack_2c[0] = 1;
    uVar1 = *(arg1 + 0x4c);
    uVar8 = uVar1;
    auStack_30[0] = 1;
    iVar7 = *(*(iVar9 + -0xb8) + 0x98);
    auStack_3c[0] = uVar1;
    if (uVar1 < 2) {
        uStack_34 = 2400000;
        if (uVar1 != 0) {
            uStack_34 = 600000;
        }
        auStack_38[0] = *(iVar7 + uVar8 + 0x48);
        if (arg2 == 8) {
            arg2 = 0;
            uVar4 = swr_slvdev_datapath_control(*(iVar7 + 8),*(*(iVar7 + 8) + 0x40));
            noname_1 = extraout_q0_01;
        }
        else if (arg2 == 1) {
            uVar4 = swr_connect_port(*(iVar7 + 8),auStack_3c,1,auStack_30,&uStack_34,auStack_2c,auStack_38);
            noname_1 = extraout_q0_00;
        }
        else {
            uVar4 = 0;
        }
    }
    else {
        iVar3 = ___ratelimit(obj.dmic_swr_ctrl._rs,"dmic_swr_ctrl");
        if (iVar3 == 0) {
            uVar4 = 0xffffffea;
            noname_1 = extraout_q0;
        }
        else {
            arg2 = 0x8000823;
            noname_1 = _dev_err(*(iVar9 + -0xb8),"%s: invalid port id: %d\n","dmic_swr_ctrl",uVar1);
            uVar4 = 0xffffffea;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_28) {
        return uVar4;
    }
    iVar5 = __stack_chk_fail(noname_1,uVar4);
    *extraout_x18 = sym.swr_dmic_port_enable;
    pcStack_48 = sym.swr_dmic_port_enable;
    iVar7 = sp_el0;
    iStack_58 = *(iVar7 + 0x5e0);
    auStack_5c[0] = 1;
    auStack_60[0] = *(iVar5 + 0x4c);
    iVar7 = *(*(*(iVar5 + 0x28) + -0xb8) + 0x98);
    puStack_50 = &stack0xffffffffffffffe0;
    if (1 < auStack_60[0]) {
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5512,0x80031e4);
        (*pcVar2)();
    }
    auStack_64[0] = *(iVar7 + auStack_60[0] + 0x48);
    if (arg2 == 4) {
        uVar4 = swr_disconnect_port(*(iVar7 + 8),auStack_60,1,auStack_5c,auStack_64);
    }
    else if (arg2 == 2) {
        uVar4 = swr_slvdev_datapath_control(*(iVar7 + 8),*(*(iVar7 + 8) + 0x40),1);
    }
    else {
        uVar4 = 0;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_58) {
        return uVar4;
    }
    auVar10 = __stack_chk_fail(uVar4);
    iVar5 = auVar10._0_8_;
    *extraout_x18_00 = sym.swr_dmic_event_notify;
    pcStack_88 = sym.swr_dmic_event_notify;
    iVar7 = sp_el0;
    iStack_98 = *(iVar7 + 0x5e0);
    ppuStack_90 = &puStack_50;
    iStack_80 = iVar9;
    uStack_78 = uVar8;
    if ((auVar10._8_4_ & 0xffff) != 1) {
        if ((auVar10._8_8_ & 0xffff) == 0) {
            iVar7 = *(iVar5 + -0xa8);
            if ((iVar7 == 0) || (iVar9 = *(iVar7 + 0xe0), iVar9 == 0)) {
                iVar3 = ___ratelimit(obj.swr_dmic_down._rs,"swr_dmic_down");
                if (iVar3 != 0) {
                    iVar7 = iVar7 + 0x48;
                    pcVar6 = "swr_dmic_down";
                    goto code_r0x080033e0;
                }
                goto code_r0x08003438;
            }
            iVar3 = *(iVar9 + 0x44) + -1;
            *(iVar9 + 0x44) = iVar3;
            if (iVar3 < 0) {
                _dev_warn(iVar7 + 0x48,"%s: mismatch in supply count %d\n","swr_dmic_down");
                uVar4 = 0;
                *(iVar9 + 0x44) = 0;
                goto code_r0x0800343c;
            }
            if (iVar3 == 0) {
                if (*(iVar9 + 0x28) == 0) {
                    uVar4 = ___ratelimit(obj.enable_wcd_codec_supply._rs,"enable_wcd_codec_supply");
                    if (uVar4 != 0) {
                        _printk(0x80004fc,"enable_wcd_codec_supply");
                        uVar4 = 0;
                    }
                }
                else {
                    wcd938x_codec_force_enable_micbias_v2(*(iVar9 + 0x28),8,*(iVar9 + 0x30));
                    uVar4 = 0;
                }
                goto code_r0x0800343c;
            }
        }
        uVar4 = 0;
        goto code_r0x0800343c;
    }
    iVar7 = *(iVar5 + -0xa8);
    if ((iVar7 == 0) || (iVar9 = *(iVar7 + 0xe0), iVar9 == 0)) {
        iVar3 = ___ratelimit(obj.swr_dmic_up._rs,"swr_dmic_up");
        if (iVar3 != 0) {
            iVar7 = iVar7 + 0x48;
            pcVar6 = "swr_dmic_up";
code_r0x080033e0:
            _dev_err(iVar7,"%s: swr_dmic is NULL\n",pcVar6);
        }
    }
    else {
        iVar3 = *(iVar9 + 0x44);
        *(iVar9 + 0x44) = iVar3 + 1;
        if (iVar3 == 0) {
            if (*(iVar9 + 0x28) == 0) {
                iVar3 = ___ratelimit(obj.enable_wcd_codec_supply._rs,"enable_wcd_codec_supply");
                if (iVar3 != 0) {
                    _printk(0x80004fc,"enable_wcd_codec_supply");
                }
                goto code_r0x08003438;
            }
            uVar4 = wcd938x_codec_force_enable_micbias_v2(*(iVar9 + 0x28),1,*(iVar9 + 0x30));
            if (uVar4 != 0) goto code_r0x0800343c;
        }
        iVar7 = *(iVar5 + -0xa8);
        auStack_9c[0] = 0;
        if ((iVar7 != 0) && (*(iVar7 + 0xe0) != 0)) {
            iVar3 = swr_get_logical_dev_num(iVar7,*(iVar7 + 0x3d8),auStack_9c);
            if (iVar3 != 0) {
                usleep_range_state(1000,0x44c,2);
                iVar3 = swr_get_logical_dev_num(iVar7,*(iVar7 + 0x3d8),auStack_9c);
                if (iVar3 != 0) {
                    usleep_range_state(1000,0x44c,2);
                    iVar3 = swr_get_logical_dev_num(iVar7,*(iVar7 + 0x3d8),auStack_9c);
                    if (iVar3 != 0) {
                        usleep_range_state(1000,0x44c,2);
                        iVar3 = swr_get_logical_dev_num(iVar7,*(iVar7 + 0x3d8),auStack_9c);
                        if (iVar3 != 0) {
                            usleep_range_state(1000,0x44c,2);
                            iVar3 = swr_get_logical_dev_num(iVar7,*(iVar7 + 0x3d8),auStack_9c);
                            if (iVar3 != 0) {
                                usleep_range_state(1000,0x44c,2);
                                swr_get_logical_dev_num(iVar7,*(iVar7 + 0x3d8),auStack_9c);
                            }
                        }
                    }
                }
            }
            uVar4 = 0;
            *(iVar7 + 0x40) = auStack_9c[0];
            goto code_r0x0800343c;
        }
        iVar3 = ___ratelimit(obj.swr_dmic_reset._rs,"swr_dmic_reset");
        if (iVar3 != 0) {
            iVar7 = iVar7 + 0x48;
            pcVar6 = "swr_dmic_reset";
            goto code_r0x080033e0;
        }
    }
code_r0x08003438:
    uVar4 = 0xffffffea;
code_r0x0800343c:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_98) {
        __stack_chk_fail(uVar4);
        return 0;
    }
    return uVar4;
}


// ===== sym.swr_dmic_port_enable @ 0x08003124 (size 196) =====

ulong sym.swr_dmic_port_enable(int64_t arg1,uchar noname_1 [16],uint32_t arg2)

{
    code *pcVar1;
    int iVar2;
    ulong uVar3;
    char *pcVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar7;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uchar extraout_q0_00 [16];
    uchar auVar8 [16];
    uchar auStack_5c [4];
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    uchar auStack_24 [4];
    uint8_t auStack_20 [4];
    uchar auStack_1c [4];
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_18 = *(iVar5 + 0x5e0);
    auStack_1c[0] = 1;
    auStack_20[0] = *(arg1 + 0x4c);
    iVar5 = *(*(*(arg1 + 0x28) + -0xb8) + 0x98);
    if (1 < auStack_20[0]) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5512,0x80031e4);
        (*pcVar1)();
    }
    auStack_24[0] = *(iVar5 + auStack_20[0] + 0x48);
    if (arg2 == 4) {
        uVar3 = swr_disconnect_port(*(iVar5 + 8),auStack_20,1,auStack_1c,auStack_24);
        noname_1 = extraout_q0_00;
    }
    else if (arg2 == 2) {
        uVar3 = swr_slvdev_datapath_control(*(iVar5 + 8),*(*(iVar5 + 8) + 0x40),1);
        noname_1 = extraout_q0;
    }
    else {
        uVar3 = 0;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_18) {
        return uVar3;
    }
    auVar8 = __stack_chk_fail(noname_1,uVar3);
    iVar7 = auVar8._0_8_;
    *extraout_x18 = sym.swr_dmic_event_notify;
    pcStack_48 = sym.swr_dmic_event_notify;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    puStack_50 = &stack0xfffffffffffffff0;
    if ((auVar8._8_4_ & 0xffff) != 1) {
        if ((auVar8._8_8_ & 0xffff) == 0) {
            iVar5 = *(iVar7 + -0xa8);
            if ((iVar5 == 0) || (iVar7 = *(iVar5 + 0xe0), iVar7 == 0)) {
                iVar2 = ___ratelimit(obj.swr_dmic_down._rs,"swr_dmic_down");
                if (iVar2 != 0) {
                    iVar5 = iVar5 + 0x48;
                    pcVar4 = "swr_dmic_down";
                    goto code_r0x080033e0;
                }
                goto code_r0x08003438;
            }
            iVar2 = *(iVar7 + 0x44) + -1;
            *(iVar7 + 0x44) = iVar2;
            if (iVar2 < 0) {
                _dev_warn(iVar5 + 0x48,"%s: mismatch in supply count %d\n","swr_dmic_down");
                uVar3 = 0;
                *(iVar7 + 0x44) = 0;
                goto code_r0x0800343c;
            }
            if (iVar2 == 0) {
                if (*(iVar7 + 0x28) == 0) {
                    uVar3 = ___ratelimit(obj.enable_wcd_codec_supply._rs,"enable_wcd_codec_supply");
                    if (uVar3 != 0) {
                        _printk(0x80004fc,"enable_wcd_codec_supply");
                        uVar3 = 0;
                    }
                }
                else {
                    wcd938x_codec_force_enable_micbias_v2(*(iVar7 + 0x28),8,*(iVar7 + 0x30));
                    uVar3 = 0;
                }
                goto code_r0x0800343c;
            }
        }
        uVar3 = 0;
        goto code_r0x0800343c;
    }
    iVar5 = *(iVar7 + -0xa8);
    if ((iVar5 == 0) || (iVar6 = *(iVar5 + 0xe0), iVar6 == 0)) {
        iVar2 = ___ratelimit(obj.swr_dmic_up._rs,"swr_dmic_up");
        if (iVar2 != 0) {
            iVar5 = iVar5 + 0x48;
            pcVar4 = "swr_dmic_up";
code_r0x080033e0:
            _dev_err(iVar5,"%s: swr_dmic is NULL\n",pcVar4);
        }
    }
    else {
        iVar2 = *(iVar6 + 0x44);
        *(iVar6 + 0x44) = iVar2 + 1;
        if (iVar2 == 0) {
            if (*(iVar6 + 0x28) == 0) {
                iVar2 = ___ratelimit(obj.enable_wcd_codec_supply._rs,"enable_wcd_codec_supply");
                if (iVar2 != 0) {
                    _printk(0x80004fc,"enable_wcd_codec_supply");
                }
                goto code_r0x08003438;
            }
            uVar3 = wcd938x_codec_force_enable_micbias_v2(*(iVar6 + 0x28),1,*(iVar6 + 0x30));
            if (uVar3 != 0) goto code_r0x0800343c;
        }
        iVar5 = *(iVar7 + -0xa8);
        auStack_5c[0] = 0;
        if ((iVar5 != 0) && (*(iVar5 + 0xe0) != 0)) {
            iVar2 = swr_get_logical_dev_num(iVar5,*(iVar5 + 0x3d8),auStack_5c);
            if (iVar2 != 0) {
                usleep_range_state(1000,0x44c,2);
                iVar2 = swr_get_logical_dev_num(iVar5,*(iVar5 + 0x3d8),auStack_5c);
                if (iVar2 != 0) {
                    usleep_range_state(1000,0x44c,2);
                    iVar2 = swr_get_logical_dev_num(iVar5,*(iVar5 + 0x3d8),auStack_5c);
                    if (iVar2 != 0) {
                        usleep_range_state(1000,0x44c,2);
                        iVar2 = swr_get_logical_dev_num(iVar5,*(iVar5 + 0x3d8),auStack_5c);
                        if (iVar2 != 0) {
                            usleep_range_state(1000,0x44c,2);
                            iVar2 = swr_get_logical_dev_num(iVar5,*(iVar5 + 0x3d8),auStack_5c);
                            if (iVar2 != 0) {
                                usleep_range_state(1000,0x44c,2);
                                swr_get_logical_dev_num(iVar5,*(iVar5 + 0x3d8),auStack_5c);
                            }
                        }
                    }
                }
            }
            uVar3 = 0;
            *(iVar5 + 0x40) = auStack_5c[0];
            goto code_r0x0800343c;
        }
        iVar2 = ___ratelimit(obj.swr_dmic_reset._rs,"swr_dmic_reset");
        if (iVar2 != 0) {
            iVar5 = iVar5 + 0x48;
            pcVar4 = "swr_dmic_reset";
            goto code_r0x080033e0;
        }
    }
code_r0x08003438:
    uVar3 = 0xffffffea;
code_r0x0800343c:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_58) {
        __stack_chk_fail(uVar3);
        return 0;
    }
    return uVar3;
}


// ===== sym.swr_dmic_event_notify @ 0x080031e8 (size 756) =====

ulong sym.swr_dmic_event_notify(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    char *pcVar3;
    ulong *in_x18;
    int64_t iVar4;
    int64_t iVar5;
    ulong unaff_x30;
    uchar auStack_2c [4];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    if ((arg2 & 0xffff) != 1) {
        if ((arg2 & 0xffffU) == 0) {
            iVar5 = *(arg1 + -0xa8);
            if ((iVar5 == 0) || (iVar4 = *(iVar5 + 0xe0), iVar4 == 0)) {
                iVar1 = ___ratelimit(obj.swr_dmic_down._rs,"swr_dmic_down");
                if (iVar1 != 0) {
                    iVar5 = iVar5 + 0x48;
                    pcVar3 = "swr_dmic_down";
                    goto code_r0x080033e0;
                }
                goto code_r0x08003438;
            }
            iVar1 = *(iVar4 + 0x44) + -1;
            *(iVar4 + 0x44) = iVar1;
            if (iVar1 < 0) {
                _dev_warn(iVar5 + 0x48,"%s: mismatch in supply count %d\n","swr_dmic_down");
                uVar2 = 0;
                *(iVar4 + 0x44) = 0;
                goto code_r0x0800343c;
            }
            if (iVar1 == 0) {
                if (*(iVar4 + 0x28) == 0) {
                    uVar2 = ___ratelimit(obj.enable_wcd_codec_supply._rs,"enable_wcd_codec_supply");
                    if (uVar2 != 0) {
                        _printk(0x80004fc,"enable_wcd_codec_supply");
                        uVar2 = 0;
                    }
                }
                else {
                    wcd938x_codec_force_enable_micbias_v2(*(iVar4 + 0x28),8,*(iVar4 + 0x30));
                    uVar2 = 0;
                }
                goto code_r0x0800343c;
            }
        }
        uVar2 = 0;
        goto code_r0x0800343c;
    }
    iVar5 = *(arg1 + -0xa8);
    if ((iVar5 == 0) || (iVar4 = *(iVar5 + 0xe0), iVar4 == 0)) {
        iVar1 = ___ratelimit(obj.swr_dmic_up._rs,"swr_dmic_up");
        if (iVar1 != 0) {
            iVar5 = iVar5 + 0x48;
            pcVar3 = "swr_dmic_up";
code_r0x080033e0:
            _dev_err(iVar5,"%s: swr_dmic is NULL\n",pcVar3);
        }
    }
    else {
        iVar1 = *(iVar4 + 0x44);
        *(iVar4 + 0x44) = iVar1 + 1;
        if (iVar1 == 0) {
            if (*(iVar4 + 0x28) == 0) {
                iVar1 = ___ratelimit(obj.enable_wcd_codec_supply._rs,"enable_wcd_codec_supply");
                if (iVar1 != 0) {
                    _printk(0x80004fc,"enable_wcd_codec_supply");
                }
                goto code_r0x08003438;
            }
            uVar2 = wcd938x_codec_force_enable_micbias_v2(*(iVar4 + 0x28),1,*(iVar4 + 0x30));
            if (uVar2 != 0) goto code_r0x0800343c;
        }
        iVar5 = *(arg1 + -0xa8);
        auStack_2c[0] = 0;
        if ((iVar5 != 0) && (*(iVar5 + 0xe0) != 0)) {
            iVar1 = swr_get_logical_dev_num(iVar5,*(iVar5 + 0x3d8),auStack_2c);
            if (iVar1 != 0) {
                usleep_range_state(1000,0x44c,2);
                iVar1 = swr_get_logical_dev_num(iVar5,*(iVar5 + 0x3d8),auStack_2c);
                if (iVar1 != 0) {
                    usleep_range_state(1000,0x44c,2);
                    iVar1 = swr_get_logical_dev_num(iVar5,*(iVar5 + 0x3d8),auStack_2c);
                    if (iVar1 != 0) {
                        usleep_range_state(1000,0x44c,2);
                        iVar1 = swr_get_logical_dev_num(iVar5,*(iVar5 + 0x3d8),auStack_2c);
                        if (iVar1 != 0) {
                            usleep_range_state(1000,0x44c,2);
                            iVar1 = swr_get_logical_dev_num(iVar5,*(iVar5 + 0x3d8),auStack_2c);
                            if (iVar1 != 0) {
                                usleep_range_state(1000,0x44c,2);
                                swr_get_logical_dev_num(iVar5,*(iVar5 + 0x3d8),auStack_2c);
                            }
                        }
                    }
                }
            }
            uVar2 = 0;
            *(iVar5 + 0x40) = auStack_2c[0];
            goto code_r0x0800343c;
        }
        iVar1 = ___ratelimit(obj.swr_dmic_reset._rs,"swr_dmic_reset");
        if (iVar1 != 0) {
            iVar5 = iVar5 + 0x48;
            pcVar3 = "swr_dmic_reset";
            goto code_r0x080033e0;
        }
    }
code_r0x08003438:
    uVar2 = 0xffffffea;
code_r0x0800343c:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_28) {
        __stack_chk_fail(uVar2);
        return 0;
    }
    return uVar2;
}


// ===== sym.swr_dmic_suspend @ 0x080034dc (size 16) =====

ulong sym.swr_dmic_suspend(int64_t arg1)

{
    return 0;
}


// ===== sym.swr_dmic_resume @ 0x080034ec (size 128) =====

ulong sym.swr_dmic_resume(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((arg1 == 0) || (arg1 == 0x48)) || (*(arg1 + 0x98) == 0)) {
        iVar1 = ___ratelimit(obj.swr_dmic_resume._rs,"swr_dmic_resume");
        if (iVar1 != 0) {
            _dev_err(arg1,"%s: swr_dmic private data is NULL\n","swr_dmic_resume");
        }
        uVar2 = 0xffffffea;
    }
    else {
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.__cfi_check_fail @ 0x0800356c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080035b0

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
    //switch table (4 cases) at 0x8000328
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80035c4);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080035d4 (size 44) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    swr_driver_register(reloc.swr_dmic_probe.089e67a74375a66802647a567e2a34c2.cfi_jt);
    return;
}


// ===== sym.cleanup_module @ 0x08003600 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    swr_driver_unregister(reloc.swr_dmic_probe.089e67a74375a66802647a567e2a34c2.cfi_jt);
    return;
}

