// decompiled from snd-soc-hdmi-codec by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 816) =====

//WARNING: Switch with 1 destination removed at 0x08003710

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x1410433e4ed4949) {
        if (arg1 < -0x457ac4930f0f603a) {
            if (arg1 < -0x6fcda26769f997f1) {
                if (arg1 == -0x749213c658cf941a) {
                    pcVar2 = sym.hdmi_eld_ctl_info.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
code_r0x080022b0:
                    if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                        return;
                    }
                    goto code_r0x080036d0;
                }
                if (arg1 != -0x72bd58d471d33d4c) goto code_r0x080036d0;
                pcVar2 = sym.hdmi_codec_pcm_new.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            }
            else if (arg1 == -0x6fcda26769f997f1) {
                pcVar2 = sym.hdmi_codec_set_jack.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            }
            else {
                if (arg1 != -0x62d266395c155465) goto code_r0x080036d0;
                pcVar2 = sym.hdmi_codec_i2s_set_fmt.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            }
        }
        else if (arg1 < -0x3557318fb8d07b71) {
            if (arg1 != -0x457ac4930f0f603a) {
                if ((arg1 == -0x394017b05c2a5361) && ((pcVar1 + -0x80023d8 >> 3 | pcVar1 << 0x3d) < 3)) {
                    return;
                }
                goto code_r0x080036d0;
            }
            pcVar2 = sym.hdmi_codec_mute.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else if (arg1 == -0x3557318fb8d07b71) {
            pcVar2 = sym.hdmi_codec_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else {
            if (arg1 != -0x3236d35ec86b4f45) goto code_r0x080036d0;
            pcVar2 = sym.plugged_cb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
    }
    else if (arg1 < 0x6c5345b411bb97e7) {
        if (arg1 < 0x2882621ee1337d31) {
            if (arg1 == -0x1410433e4ed4949) {
                pcVar2 = sym.hdmi_codec_prepare.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                goto code_r0x080022b0;
            }
            if (arg1 != 0x2b3a43e29242445) goto code_r0x080036d0;
            pcVar2 = sym.init_module.cfi_jt;
        }
        else {
            if (arg1 == 0x2882621ee1337d31) {
                if ((pcVar1 + -0x80023a8 >> 3 | pcVar1 << 0x3d) < 5) {
                    return;
                }
                goto code_r0x080036d0;
            }
            if (arg1 != 0x5a4b3c1fa7130354) goto code_r0x080036d0;
            pcVar2 = sym.hdmi_codec_shutdown.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
    }
    else if (arg1 < 0x7e04a0fb7ad8bcd5) {
        if (arg1 == 0x6c5345b411bb97e7) {
            pcVar2 = sym.__typeid__ZTSFiP17snd_soc_componentP11device_nodeE_global_addr;
        }
        else {
            if (arg1 != 0x74f0ccf11b57c4f0) goto code_r0x080036d0;
            pcVar2 = sym.hdmi_codec_hw_params.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
    }
    else if (arg1 == 0x7e04a0fb7ad8bcd5) {
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    else {
        if (arg1 != 0x7e6c99e1529760f9) goto code_r0x080036d0;
        pcVar2 = sym.hdmi_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080036d0:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8003724);
    (*pcVar1)();
}


// ===== sym.hdmi_codec_mute.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002338 (size 8) =====

ulong sym.hdmi_codec_mute.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int param_2,int param_3)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    code *pcVar3;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(*(param_1 + 0x10) + 0x98);
    iVar2 = *piVar4;
    pcVar3 = *(iVar2 + 0x20);
    if ((pcVar3 != NULL) && ((param_3 == 0 || ((*(iVar2 + 0x40) & 1) == 0)))) {
        __cfi_slowpath_diag(0x2e954847b3f98594,pcVar3,0x8000230);
        uVar1 = (*pcVar3)(*(*(param_1 + 0x10) + 0x60),piVar4[2],param_2 != 0,param_3);
        return uVar1;
    }
    return 0xfffffdf4;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08002340 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.hdmi_codec_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08002348 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.hdmi_codec_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.hdmi_codec_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002350 (size 8) =====

int sym.hdmi_codec_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    bool bVar2;
    uint8_t uVar3;
    int iVar4;
    int iVar5;
    int64_t *piVar6;
    char *pcVar7;
    int64_t iVar8;
    int64_t iVar9;
    ulong *in_x18;
    int64_t *piVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar10 = *(param_1 + 0xa0);
    iVar1 = param_1 + 0x10;
    if (piVar10 == NULL) {
        pcVar7 = "%s: No platform data\n";
    }
    else {
        iVar5 = (*(piVar10 + 1) >> 1 & 1) + (*(piVar10 + 1) & 1);
        if ((((iVar5 != 0) && (iVar8 = *piVar10, iVar8 != 0)) && ((*(iVar8 + 8) != 0 || (*(iVar8 + 0x10) != 0)))) &&
           (*(iVar8 + 0x18) != 0)) {
            piVar6 = devm_kmalloc(iVar1,0x108,0xdc0);
            if (piVar6 != NULL) {
                iVar8 = piVar10[2];
                iVar9 = *piVar10;
                piVar6[1] = piVar10[1];
                piVar6[2] = iVar8;
                *piVar6 = iVar9;
                __mutex_init(piVar6 + 0x15,"&hcp->lock",reloc.hdmi_codec_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                            );
                iVar4 = snd_pcm_create_iec958_consumer_default(piVar6 + 0xec,0x18);
                if (iVar4 < 0) {
                    return iVar4;
                }
                iVar8 = devm_kmalloc(iVar1,iVar5 * 0xf0,0xdc0);
                if (iVar8 != 0) {
                    uVar3 = *(piVar10 + 1);
                    bVar2 = (uVar3 & 1) != 0;
                    if (bVar2) {
                        memcpy(iVar8,obj.hdmi_i2s_dai,0xf0);
                        *(iVar8 + 0xd0) = *(piVar10 + 0xc);
                        uVar3 = *(piVar10 + 1);
                    }
                    if ((uVar3 >> 1 & 1) != 0) {
                        memcpy(iVar8 + bVar2 * 0xf0,obj.hdmi_spdif_dai,0xf0);
                    }
                    *(param_1 + 0xa8) = piVar6;
                    iVar5 = devm_snd_soc_register_component(iVar1,obj.hdmi_driver,iVar8,iVar5);
                    if (iVar5 == 0) {
                        return 0;
                    }
                    _dev_err(iVar1,"%s: snd_soc_register_component() failed (%d)\n","hdmi_codec_probe",iVar5);
                    return iVar5;
                }
            }
            return -0xc;
        }
        pcVar7 = "%s: Invalid parameters\n";
    }
    _dev_err(iVar1,pcVar7,"hdmi_codec_probe");
    return -0x16;
}


// ===== sym.hdmi_codec_pcm_new.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002358 (size 8) =====

uint64_t sym.hdmi_codec_pcm_new.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(param_2 + 0x10) + 0x98);
    uVar2 = snd_pcm_add_chmap_ctls(*(param_1 + 0x5f0),0,0,*(*(param_2 + 0x18) + 0xd0),0,iVar3 + 0x98);
    if (uVar2 < 0) {
        return uVar2;
    }
    *(*(iVar3 + 0x98) + 0x28) = iVar3;
    *(*(*(iVar3 + 0x98) + 0x10) + 0x60) = sym.hdmi_codec_chmap_ctl_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    *(*(iVar3 + 0x98) + 0x18) = obj.hdmi_codec_stereo_chmaps;
    *(iVar3 + 0xa0) = 0xffffffff;
    iVar3 = snd_ctl_new1(obj.hdmi_codec_controls,*(param_2 + 0x58));
    if (iVar3 != 0) {
        *(iVar3 + 0x18) = *(*(param_1 + 0x5f0) + 0x18);
        uVar2 = snd_ctl_add(*(*(param_1 + 8) + 0x48),iVar3);
        if (uVar2 < 0) {
            return uVar2;
        }
        iVar3 = snd_ctl_new1(0x8000180,*(param_2 + 0x58));
        if (iVar3 != 0) {
            *(iVar3 + 0x18) = *(*(param_1 + 0x5f0) + 0x18);
            uVar2 = snd_ctl_add(*(*(param_1 + 8) + 0x48),iVar3);
            if (uVar2 < 0) {
                return uVar2;
            }
            iVar3 = snd_ctl_new1(0x80001d0,*(param_2 + 0x58));
            if (iVar3 != 0) {
                *(iVar3 + 0x18) = *(*(param_1 + 0x5f0) + 0x18);
                uVar1 = snd_ctl_add(*(*(param_1 + 8) + 0x48),iVar3);
                return uVar1 & uVar1 >> 0x1f;
            }
        }
    }
    return 0xfffffff4;
}


// ===== sym.hdmi_eld_ctl_info.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002360 (size 8) =====

ulong sym.hdmi_eld_ctl_info.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,int64_t param_2)

{
    *(param_2 + 0x40) = 4;
    *(param_2 + 0x48) = 0x80;
    return 0;
}


// ===== sym.hdmi_codec_iec958_info.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002368 (size 8) =====

ulong sym.hdmi_codec_iec958_info.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,int64_t param_2)

{
    *(param_2 + 0x40) = 5;
    *(param_2 + 0x48) = 1;
    return 0;
}


// ===== sym.hdmi_codec_prepare.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002370 (size 8) =====

uint32_t sym.hdmi_codec_prepare.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                   (int64_t param_1,int64_t param_2,ulong param_3,uint32_t param_4,ulong *param_5)

{
    uint8_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    uint32_t uVar4;
    uint64_t arg3;
    uint64_t arg4;
    ulong *puVar5;
    uint uVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar7;
    int64_t iVar8;
    code *pcVar9;
    int64_t *piVar10;
    ulong unaff_x30;
    uchar auVar11 [12];
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    uint uStack_118;
    uint uStack_114;
    uint uStack_110;
    uint uStack_10c;
    uint uStack_108;
    uint uStack_104;
    uint uStack_100;
    uint uStack_fc;
    ulong uStack_f8;
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
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    puVar5 = &uStack_130;
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_58 = *(iVar7 + 0x5e0);
    iVar8 = *(param_1 + 0xb8);
    iVar7 = *(param_2 + 0x38);
    piVar10 = *(*(param_2 + 0x10) + 0x98);
    uVar2 = *(iVar8 + 0x68);
    uVar3 = snd_pcm_format_width(*(iVar8 + 0x5c));
    uVar4 = *(iVar8 + 100);
    arg3 = uVar4;
    uStack_68 = 0;
    uStack_60 = 0;
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
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    uStack_118 = 0;
    uStack_114 = 0;
    uStack_110 = 0;
    uStack_10c = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_130 = 0;
    if (*(*piVar10 + 0x10) == 0) {
        uVar2 = 0;
        puVar5 = param_5;
    }
    else {
        arg4 = uVar2;
        uVar2 = sym.hdmi_codec_fill_codec_params(param_2,uVar3 & 0xffffffff,arg3,arg4);
        uVar4 = arg3;
        param_4 = arg4;
        if (-1 < uVar2) {
            uStack_114 = *(piVar10 + 0xec);
            uStack_110 = *(piVar10 + 0xec) >> 0x20;
            uStack_10c = *(piVar10 + 0xf4);
            uStack_108 = *(piVar10 + 0xf4) >> 0x20;
            uStack_104 = *(piVar10 + 0xfc);
            uStack_100 = *(piVar10 + 0xfc) >> 0x20;
            uVar2 = snd_pcm_fill_iec958_consumer(iVar8,&uStack_114,0x18);
            if (uVar2 < 0) {
                uVar4 = uVar2;
                _dev_err(*(param_2 + 0x10),"Creating IEC958 channel status failed %d\n");
            }
            else {
                *(iVar7 + 8) = *(iVar8 + 0x5c);
                pcVar9 = *(*piVar10 + 0x10);
                __cfi_slowpath_diag(0x16c96fc7d41b8ddc,pcVar9,0x80002d0);
                param_4 = &uStack_130;
                uVar2 = (*pcVar9)(*(*(param_2 + 0x10) + 0x60),piVar10[2]);
                uVar4 = iVar7;
            }
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_58) {
        return uVar2;
    }
    auVar11 = __stack_chk_fail();
    *extraout_x18 = sym.hdmi_codec_fill_codec_params;
    iVar7 = *(auVar11._0_8_ + 0x10);
    iVar8 = *(iVar7 + 0x98);
    uVar2 = 0;
    pcVar9 = obj.hdmi_codec_channel_alloc;
    uVar1 = *(iVar8 + 0x1f);
    uVar3 = 0;
    if ((uVar1 & 1) != 0) {
        uVar3 = 5;
    }
    uVar3 = uVar3 | (uVar1 & 0x7f) << 9 & 0x400 | uVar1 >> 1 & 2;
    if ((uVar1 & 8) != 0) {
        uVar3 = uVar3 | 0xa0;
    }
    uVar3 = uVar3 | (uVar1 & 0x10) << 2;
    if ((uVar1 & 0x20) != 0) {
        uVar3 = uVar3 | 0x18;
    }
    if ((uVar1 & 0x40) != 0) {
        uVar3 = uVar3 | 0x300;
    }
    while ((((uVar1 & 0x7f) != 0 || (*pcVar9 != 0)) &&
           ((*(pcVar9 + 4) != (param_4 & 0xff) || ((*(pcVar9 + 8) & (uVar3 ^ 0xffffffffffffffff)) != 0))))) {
        uVar2 = uVar2 + 1;
        pcVar9 = pcVar9 + 0x10;
        if (uVar2 == 0x20) {
            uVar2 = 0xffffffea;
            _dev_err(iVar7,"Not able to map channels to speakers (%d)\n",0xffffffea);
            uVar6 = 0xffffffff;
code_r0x080032e0:
            *(iVar8 + 0xa0) = uVar6;
            return uVar2;
        }
    }
    puVar5[0x19] = 0;
    puVar5[0x1a] = 0;
    puVar5[0x17] = 0;
    puVar5[0x18] = 0;
    puVar5[0x15] = 0;
    puVar5[0x16] = 0;
    puVar5[0x13] = 0;
    puVar5[0x14] = 0;
    puVar5[0x11] = 0;
    puVar5[0x12] = 0;
    puVar5[0xf] = 0;
    puVar5[0x10] = 0;
    puVar5[0xd] = 0;
    puVar5[0xe] = 0;
    puVar5[0xb] = 0;
    puVar5[0xc] = 0;
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    hdmi_audio_infoframe_init(puVar5);
    *(puVar5 + 6) = param_4;
    puVar5[1] = 0;
    *(puVar5 + 2) = 0;
    if (0x1f < uVar2) {
    //WARNING: Does not return
        pcVar9 = SoftwareBreakpoint(0x5512,0x8003328);
        (*pcVar9)();
    }
    uVar2 = 0;
    uVar6 = *pcVar9;
    *(puVar5 + 0xcc) = uVar4;
    *(puVar5 + 0x1a) = auVar11._8_4_;
    *(puVar5 + 0xd4) = param_4;
    *(puVar5 + 3) = uVar6;
    goto code_r0x080032e0;
}


// ===== sym.hdmi_codec_startup.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002378 (size 8) =====

int sym.hdmi_codec_startup.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    int iVar1;
    uint8_t uVar2;
    int iVar3;
    uint32_t uVar4;
    ulong *in_x18;
    code *pcVar5;
    int64_t *piVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x3c);
    piVar6 = *(*(param_2 + 0x10) + 0x98);
    mutex_lock(piVar6 + 0x15);
    if (piVar6[0x1b] == '\0') {
        pcVar5 = **piVar6;
        if (pcVar5 != NULL) {
            __cfi_slowpath_diag(0xd2e10b27ab65761b,pcVar5,0x8000250);
            iVar3 = (*pcVar5)(*(*(param_2 + 0x10) + 0x60),piVar6[2]);
            if (iVar3 != 0) goto code_r0x08002c5c;
        }
        if ((iVar1 == 0) && (pcVar5 = *(*piVar6 + 0x28), pcVar5 != NULL)) {
            __cfi_slowpath_diag(0xb4c8dba5baae093e,pcVar5,0x8000270);
            iVar3 = (*pcVar5)(*(*(param_2 + 0x10) + 0x60),piVar6[2],piVar6 + 3,0x80);
            if ((iVar3 != 0) || (iVar3 = snd_pcm_hw_constraint_eld(*(param_1 + 0xb8),piVar6 + 3), iVar3 != 0))
            goto code_r0x08002c5c;
            uVar2 = *(piVar6 + 0x1f);
            uVar4 = (uVar2 & 2) << 9 | uVar2 >> 1 & 2;
            if ((uVar2 & 8) != 0) {
                uVar4 = uVar4 | 0xa0;
            }
            uVar4 = uVar4 | (uVar2 & 0x10) << 2;
            if ((uVar2 & 0x20) != 0) {
                uVar4 = uVar4 | 0x18;
            }
            if ((uVar2 & 0x40) != 0) {
                uVar4 = uVar4 | 0x300;
            }
            if ((uVar4 == 0) || (*(piVar6[0x13] + 0x20) < 3)) {
                pcVar5 = obj.hdmi_codec_stereo_chmaps;
            }
            else {
                pcVar5 = obj.hdmi_codec_8ch_chmaps;
            }
            *(piVar6[0x13] + 0x18) = pcVar5;
        }
        iVar3 = 0;
        *(piVar6 + 0x1b) = 1;
    }
    else {
        _dev_err(*(param_2 + 0x10),"Only one simultaneous stream supported!\n");
        iVar3 = -0x16;
    }
code_r0x08002c5c:
    mutex_unlock(piVar6 + 0x15);
    return iVar3;
}


// ===== sym.hdmi_codec_hw_params.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002380 (size 8) =====

uint32_t sym.hdmi_codec_hw_params.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                   (ulong param_1,int64_t param_2,int64_t param_3,uint32_t param_4,ulong *param_5)

{
    uint8_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint64_t arg4;
    ulong *puVar5;
    ulong *puVar6;
    uint uVar7;
    uint32_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar9;
    code *pcVar10;
    int64_t iVar11;
    int64_t *piVar12;
    int64_t iVar13;
    ulong unaff_x30;
    uchar auVar14 [16];
    uchar auVar15 [12];
    ulong uStack_260;
    ulong uStack_258;
    ulong uStack_250;
    uint uStack_248;
    uint uStack_244;
    uint uStack_240;
    uint uStack_23c;
    uint uStack_238;
    uint uStack_234;
    uint uStack_230;
    uint uStack_22c;
    ulong uStack_228;
    ulong uStack_220;
    ulong uStack_218;
    ulong uStack_210;
    ulong uStack_208;
    ulong uStack_200;
    ulong uStack_1f8;
    ulong uStack_1f0;
    ulong uStack_1e8;
    ulong uStack_1e0;
    ulong uStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1b0;
    ulong uStack_1a8;
    ulong uStack_1a0;
    ulong uStack_198;
    ulong uStack_190;
    int64_t iStack_188;
    uchar *puStack_180;
    code *pcStack_178;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    uint uStack_118;
    uint uStack_114;
    uint uStack_110;
    uint uStack_10c;
    uint uStack_108;
    uint uStack_104;
    uint uStack_100;
    uint uStack_fc;
    ulong uStack_f8;
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
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    puVar5 = &uStack_130;
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_58 = *(iVar9 + 0x5e0);
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    iVar9 = *(param_3 + 0x38);
    uStack_c8 = 0;
    uStack_c0 = 0;
    piVar12 = *(*(param_3 + 0x10) + 0x98);
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    uStack_118 = 0;
    uStack_114 = 0;
    uStack_110 = 0;
    uStack_10c = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_130 = 0;
    if (*(*piVar12 + 8) == 0) {
        uVar2 = 0;
        puVar5 = param_5;
        goto code_r0x08002fa4;
    }
    uVar2 = *(param_2 + 0x24);
    if (uVar2 == 0) {
        uVar2 = *(param_2 + 0x28);
        if (uVar2 != 0) {
            uVar8 = 0x20;
            goto code_r0x08002ed8;
        }
        uVar8 = 0;
    }
    else {
        uVar8 = 0;
code_r0x08002ed8:
        uVar2 = (uVar2 & 0xaaaaaaaa) >> 1 | (uVar2 & 0x55555555) << 1;
        uVar2 = (uVar2 & 0xcccccccc) >> 2 | (uVar2 & 0x33333333) << 2;
        uVar2 = (uVar2 & 0xf0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f) << 4;
        uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
        uVar8 = LZCOUNT(uVar2 >> 0x10 | uVar2 << 0x10) | uVar8;
    }
    uVar3 = snd_pcm_format_width(uVar8);
    uVar4 = *(param_2 + 0x11c);
    uVar2 = sym.hdmi_codec_fill_codec_params(param_3,uVar3 & 0xffffffff,*(param_2 + 0x128),uVar4);
    param_4 = uVar4;
    if (uVar2 < 0) goto code_r0x08002fa4;
    uStack_114 = *(piVar12 + 0xec);
    uStack_110 = *(piVar12 + 0xec) >> 0x20;
    uStack_10c = *(piVar12 + 0xf4);
    uStack_108 = *(piVar12 + 0xf4) >> 0x20;
    uStack_104 = *(piVar12 + 0xfc);
    uStack_100 = *(piVar12 + 0xfc) >> 0x20;
    uVar2 = snd_pcm_fill_iec958_consumer_hw_params(param_2,&uStack_114,0x18);
    if (uVar2 < 0) {
        _dev_err(*(param_3 + 0x10),"Creating IEC958 channel status failed %d\n",uVar2);
        goto code_r0x08002fa4;
    }
    uVar2 = *(param_2 + 0x24);
    if (uVar2 == 0) {
        uVar2 = *(param_2 + 0x28);
        uVar8 = 0;
        if (uVar2 != 0) {
            uVar8 = 0x20;
            goto code_r0x08002f50;
        }
    }
    else {
        uVar8 = 0;
code_r0x08002f50:
        uVar2 = (uVar2 & 0xaaaaaaaa) >> 1 | (uVar2 & 0x55555555) << 1;
        uVar2 = (uVar2 & 0xcccccccc) >> 2 | (uVar2 & 0x33333333) << 2;
        uVar2 = (uVar2 & 0xf0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f) << 4;
        uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
        uVar8 = LZCOUNT(uVar2 >> 0x10 | uVar2 << 0x10) | uVar8;
    }
    *(iVar9 + 8) = uVar8;
    pcVar10 = *(*piVar12 + 8);
    __cfi_slowpath_diag(0x16c96fc7d41b8ddc,pcVar10,0x80002b0);
    param_4 = &uStack_130;
    uVar2 = (*pcVar10)(*(*(param_3 + 0x10) + 0x60),piVar12[2],iVar9);
code_r0x08002fa4:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_58) {
        return uVar2;
    }
    auVar14 = __stack_chk_fail();
    iVar13 = auVar14._8_8_;
    puVar6 = &uStack_260;
    *extraout_x18 = sym.hdmi_codec_prepare;
    pcStack_178 = sym.hdmi_codec_prepare;
    iVar9 = sp_el0;
    iStack_188 = *(iVar9 + 0x5e0);
    iVar11 = *(auVar14._0_8_ + 0xb8);
    iVar9 = *(iVar13 + 0x38);
    piVar12 = *(*(iVar13 + 0x10) + 0x98);
    uVar2 = *(iVar11 + 0x68);
    puStack_180 = &stack0xffffffffffffffb0;
    uVar3 = snd_pcm_format_width(*(iVar11 + 0x5c));
    uVar8 = *(iVar11 + 100);
    uVar4 = uVar8;
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uStack_208 = 0;
    uStack_200 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_228 = 0;
    uStack_220 = 0;
    uStack_238 = 0;
    uStack_234 = 0;
    uStack_230 = 0;
    uStack_22c = 0;
    uStack_248 = 0;
    uStack_244 = 0;
    uStack_240 = 0;
    uStack_23c = 0;
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_260 = 0;
    if (*(*piVar12 + 0x10) == 0) {
        uVar2 = 0;
        puVar6 = puVar5;
    }
    else {
        arg4 = uVar2;
        uVar2 = sym.hdmi_codec_fill_codec_params(iVar13,uVar3 & 0xffffffff,uVar4,arg4);
        uVar8 = uVar4;
        param_4 = arg4;
        if (-1 < uVar2) {
            uStack_244 = *(piVar12 + 0xec);
            uStack_240 = *(piVar12 + 0xec) >> 0x20;
            uStack_23c = *(piVar12 + 0xf4);
            uStack_238 = *(piVar12 + 0xf4) >> 0x20;
            uStack_234 = *(piVar12 + 0xfc);
            uStack_230 = *(piVar12 + 0xfc) >> 0x20;
            uVar2 = snd_pcm_fill_iec958_consumer(iVar11,&uStack_244,0x18);
            if (uVar2 < 0) {
                uVar8 = uVar2;
                _dev_err(*(iVar13 + 0x10),"Creating IEC958 channel status failed %d\n");
            }
            else {
                *(iVar9 + 8) = *(iVar11 + 0x5c);
                pcVar10 = *(*piVar12 + 0x10);
                __cfi_slowpath_diag(0x16c96fc7d41b8ddc,pcVar10,0x80002d0);
                param_4 = &uStack_260;
                uVar2 = (*pcVar10)(*(*(iVar13 + 0x10) + 0x60),piVar12[2]);
                uVar8 = iVar9;
            }
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_188) {
        return uVar2;
    }
    auVar15 = __stack_chk_fail();
    *extraout_x18_00 = sym.hdmi_codec_fill_codec_params;
    iVar9 = *(auVar15._0_8_ + 0x10);
    iVar13 = *(iVar9 + 0x98);
    uVar2 = 0;
    pcVar10 = obj.hdmi_codec_channel_alloc;
    uVar1 = *(iVar13 + 0x1f);
    uVar3 = 0;
    if ((uVar1 & 1) != 0) {
        uVar3 = 5;
    }
    uVar3 = uVar3 | (uVar1 & 0x7f) << 9 & 0x400 | uVar1 >> 1 & 2;
    if ((uVar1 & 8) != 0) {
        uVar3 = uVar3 | 0xa0;
    }
    uVar3 = uVar3 | (uVar1 & 0x10) << 2;
    if ((uVar1 & 0x20) != 0) {
        uVar3 = uVar3 | 0x18;
    }
    if ((uVar1 & 0x40) != 0) {
        uVar3 = uVar3 | 0x300;
    }
    while ((((uVar1 & 0x7f) != 0 || (*pcVar10 != 0)) &&
           ((*(pcVar10 + 4) != (param_4 & 0xff) || ((*(pcVar10 + 8) & (uVar3 ^ 0xffffffffffffffff)) != 0))))) {
        uVar2 = uVar2 + 1;
        pcVar10 = pcVar10 + 0x10;
        if (uVar2 == 0x20) {
            uVar2 = 0xffffffea;
            _dev_err(iVar9,"Not able to map channels to speakers (%d)\n",0xffffffea);
            uVar7 = 0xffffffff;
code_r0x080032e0:
            *(iVar13 + 0xa0) = uVar7;
            return uVar2;
        }
    }
    puVar6[0x19] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x17] = 0;
    puVar6[0x18] = 0;
    puVar6[0x15] = 0;
    puVar6[0x16] = 0;
    puVar6[0x13] = 0;
    puVar6[0x14] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    hdmi_audio_infoframe_init(puVar6);
    *(puVar6 + 6) = param_4;
    puVar6[1] = 0;
    *(puVar6 + 2) = 0;
    if (0x1f < uVar2) {
    //WARNING: Does not return
        pcVar10 = SoftwareBreakpoint(0x5512,0x8003328);
        (*pcVar10)();
    }
    uVar2 = 0;
    uVar7 = *pcVar10;
    *(puVar6 + 0xcc) = uVar8;
    *(puVar6 + 0x1a) = auVar15._8_4_;
    *(puVar6 + 0xd4) = param_4;
    *(puVar6 + 3) = uVar7;
    goto code_r0x080032e0;
}


// ===== sym.hdmi_codec_set_jack.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002388 (size 8) =====

ulong sym.hdmi_codec_set_jack.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong uVar1;
    ulong *in_x18;
    code *pcVar2;
    int64_t *piVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar3 = *(*(param_1 + 0x18) + 0x98);
    if (*(*piVar3 + 0x38) == 0) {
        uVar1 = 0xfffffdf4;
    }
    else {
        piVar3[0x1c] = param_2;
        pcVar2 = *(*piVar3 + 0x38);
        __cfi_slowpath_diag(0xac6f6450dd1138ab,pcVar2,0x8000310);
        uVar1 = (*pcVar2)(*(*(param_1 + 0x18) + 0x60),piVar3[2],sym.plugged_cb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                         );
        if (uVar1 != 0) {
            piVar3[0x1c] = 0;
        }
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFiP17snd_soc_componentP11device_nodeE_global_addr @ 0x08002390 (size 8) =====

ulong sym.__typeid__ZTSFiP17snd_soc_componentP11device_nodeE_global_addr(int64_t param_1,ulong param_2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = *(**(*(param_1 + 0x18) + 0x98) + 0x30);
    if (pcVar2 == NULL) {
        uVar1 = 0xfffffdf4;
    }
    else {
        if (pcVar2 != sym.__typeid__ZTSFiP17snd_soc_componentP11device_nodeE_global_addr) {
            __cfi_slowpath_diag(0x6c5345b411bb97e7,pcVar2,0x8000350);
        }
        uVar1 = (*pcVar2)(param_1,param_2);
    }
    return uVar1;
}


// ===== sym.hdmi_codec_i2s_set_fmt.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002398 (size 8) =====

ulong sym.hdmi_codec_i2s_set_fmt.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,uint32_t param_2)

{
    uint32_t uVar1;
    ulong *puVar2;
    uint8_t uVar3;
    uint uVar4;
    uint8_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = *(param_1 + 0x38);
    *(puVar2 + 1) = 0;
    *puVar2 = 0;
    uVar5 = 0xc;
    uVar3 = 0;
    switch((param_2 & 0xf000) - 0x1000 >> 0xc) {
    case 0:
        break;
    case 1:
        uVar5 = 8;
        break;
    case 2:
        uVar5 = 4;
        break;
    case 3:
        goto code_r0x08002a44;
    default:
        goto code_r0x08002b0c;
    }
    *(puVar2 + 4) = uVar5;
    uVar3 = uVar5;
code_r0x08002a44:
    uVar1 = param_2 & 0xf00;
    if (uVar1 == 0x200) {
        uVar5 = 2;
code_r0x08002a74:
        *(puVar2 + 4) = uVar5 | uVar3;
    }
    else {
        if (uVar1 == 0x400) {
            uVar5 = 3;
            goto code_r0x08002a74;
        }
        if (uVar1 == 0x300) {
            uVar5 = 1;
            goto code_r0x08002a74;
        }
    }
    switch(param_2 & 0xf) {
    case 1:
        *puVar2 = 0;
        return 0;
    case 2:
        uVar4 = 1;
        break;
    case 3:
        uVar4 = 2;
        break;
    case 4:
        uVar4 = 3;
        break;
    case 5:
        uVar4 = 4;
        break;
    case 6:
        uVar4 = 5;
        break;
    default:
        _dev_err(*(param_1 + 0x10),"Invalid DAI interface format\n");
code_r0x08002b0c:
        return 0xffffffea;
    }
    *puVar2 = uVar4;
    return 0;
}


// ===== sym.hdmi_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080023a0 (size 8) =====

void sym.hdmi_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    code *pcVar1;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *(*(param_1 + 0x18) + 0x98);
    pcVar1 = *(*piVar2 + 0x38);
    if (pcVar1 != NULL) {
        __cfi_slowpath_diag(0xac6f6450dd1138ab,pcVar1,0x80002f0);
        (*pcVar1)(*(*(param_1 + 0x18) + 0x60),piVar2[2],0,0);
    }
    return;
}


// ===== sym.hdmi_codec_chmap_ctl_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080023a8 (size 8) =====

ulong sym.hdmi_codec_chmap_ctl_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint32_t uVar1;
    code *pcVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    
    iVar3 = *(param_1 + 0x80);
    if (*(iVar3 + 0x20) == 0) {
        return 0;
    }
    iVar5 = *(iVar3 + 0x28);
    uVar4 = 0;
    iVar6 = *(iVar3 + 0x18);
    uVar1 = *(iVar5 + 0xa0);
    if (uVar1 == 0xffffffff) goto code_r0x0800286c;
    while (uVar4 < 0x80) {
        uVar7 = *(iVar6 + uVar1 * 0x10 + 1 + uVar4);
        while( true ) {
            *(param_2 + 0x48 + uVar4 * 8) = uVar7;
            uVar4 = uVar4 + 1;
            if (*(iVar3 + 0x20) <= uVar4) {
                return 0;
            }
            if (*(iVar5 + 0xa0) != -1) break;
code_r0x0800286c:
            if (0x7f < uVar4) goto code_r0x080028a8;
            uVar7 = 0;
        }
    }
code_r0x080028a8:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x80028ac);
    (*pcVar2)();
}


// ===== sym.hdmi_codec_iec958_default_put.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080023b0 (size 8) =====

ulong sym.hdmi_codec_iec958_default_put.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong uVar1;
    int64_t iVar2;
    ulong uVar3;
    
    uVar3 = *(param_2 + 0x48);
    uVar1 = *(param_2 + 0x50);
    iVar2 = *(*(*(param_1 + 0x80) + 0x18) + 0x98);
    *(iVar2 + 0xfc) = *(param_2 + 0x58);
    *(iVar2 + 0xf4) = uVar1;
    *(iVar2 + 0xec) = uVar3;
    return 0;
}


// ===== sym.hdmi_codec_iec958_mask_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080023b8 (size 8) =====

ulong sym.hdmi_codec_iec958_mask_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,int64_t param_2)

{
    *(param_2 + 0x50) = 0xffffffffffffffff;
    *(param_2 + 0x58) = 0xffffffffffffffff;
    *(param_2 + 0x48) = 0xffffffffffffffff;
    return 0;
}


// ===== sym.hdmi_eld_ctl_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080023c0 (size 8) =====

ulong sym.hdmi_eld_ctl_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong uVar1;
    ulong uVar2;
    ulong uVar3;
    int64_t iVar4;
    
    iVar4 = *(*(*(param_1 + 0x80) + 0x18) + 0x98);
    uVar2 = *(iVar4 + 0x50);
    uVar1 = *(iVar4 + 0x38);
    uVar3 = *(iVar4 + 0x40);
    *(param_2 + 0x78) = *(iVar4 + 0x48);
    *(param_2 + 0x80) = uVar2;
    *(param_2 + 0x68) = uVar1;
    *(param_2 + 0x70) = uVar3;
    uVar2 = *(iVar4 + 0x70);
    uVar1 = *(iVar4 + 0x58);
    uVar3 = *(iVar4 + 0x60);
    *(param_2 + 0x98) = *(iVar4 + 0x68);
    *(param_2 + 0xa0) = uVar2;
    *(param_2 + 0x88) = uVar1;
    *(param_2 + 0x90) = uVar3;
    uVar2 = *(iVar4 + 0x90);
    uVar1 = *(iVar4 + 0x78);
    uVar3 = *(iVar4 + 0x80);
    *(param_2 + 0xb8) = *(iVar4 + 0x88);
    *(param_2 + 0xc0) = uVar2;
    *(param_2 + 0xa8) = uVar1;
    *(param_2 + 0xb0) = uVar3;
    uVar2 = *(iVar4 + 0x30);
    uVar1 = *(iVar4 + 0x18);
    uVar3 = *(iVar4 + 0x20);
    *(param_2 + 0x58) = *(iVar4 + 0x28);
    *(param_2 + 0x60) = uVar2;
    *(param_2 + 0x48) = uVar1;
    *(param_2 + 0x50) = uVar3;
    return 0;
}


// ===== sym.hdmi_codec_iec958_default_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080023c8 (size 8) =====

ulong sym.hdmi_codec_iec958_default_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    ulong uVar2;
    ulong uVar3;
    
    iVar1 = *(*(*(param_1 + 0x80) + 0x18) + 0x98);
    uVar3 = *(iVar1 + 0xfc);
    uVar2 = *(iVar1 + 0xec);
    *(param_2 + 0x50) = *(iVar1 + 0xf4);
    *(param_2 + 0x58) = uVar3;
    *(param_2 + 0x48) = uVar2;
    return 0;
}


// ===== sym.hdmi_codec_shutdown.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080023d0 (size 8) =====

void sym.hdmi_codec_shutdown.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    code *pcVar1;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *(*(param_2 + 0x10) + 0x98);
    *(piVar2 + 0x14) = 0xffffffff;
    pcVar1 = *(*piVar2 + 0x18);
    __cfi_slowpath_diag(0xb710ab9fd4b9c5d9,pcVar1,0x8000290);
    (*pcVar1)(*(*(param_2 + 0x10) + 0x60),piVar2[2]);
    mutex_lock(piVar2 + 0x15);
    *(piVar2 + 0x1b) = 0;
    mutex_unlock(piVar2 + 0x15);
    return;
}


// ===== sym.hdmi_dai_spdif_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080023d8 (size 8) =====

void sym.hdmi_dai_spdif_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    uint *puVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar4;
    int64_t *piVar5;
    ulong unaff_x30;
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
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_e8 = 0x800038a;
    uStack_e0 = 0;
    uStack_d8 = *(*(param_1 + 0x18) + 0xb0);
    uStack_88 = *(*(param_1 + 0x18) + 0x80);
    uStack_90 = 0;
    uStack_d0 = 0;
    uStack_80 = 0;
    uStack_70 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_b8 = 0;
    uStack_78 = 0x80004d8;
    uVar1 = snd_soc_dapm_add_routes(*(param_1 + 0x58) + 0xd0,&uStack_e8,2);
    if (uVar1 == 0) {
        iVar3 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar3 = 0x30;
        }
        puVar2 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar3),0xdc0,0xc);
        if (puVar2 == NULL) {
            uVar1 = 0xfffffff4;
        }
        else {
            uVar1 = 0;
            *(param_1 + 0x38) = puVar2;
            *puVar2 = 6;
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return;
    }
    iVar3 = __stack_chk_fail(uVar1);
    *extraout_x18 = sym.hdmi_remove;
    piVar5 = *(*(iVar3 + 0x18) + 0x98);
    pcVar4 = *(*piVar5 + 0x38);
    if (pcVar4 != NULL) {
        __cfi_slowpath_diag(0xac6f6450dd1138ab,pcVar4,0x80002f0);
        (*pcVar4)(*(*(iVar3 + 0x18) + 0x60),piVar5[2],0,0);
    }
    return;
}


// ===== sym.hdmi_dai_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080023e0 (size 8) =====

ulong sym.hdmi_dai_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
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
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_e8 = 0x800038a;
    uStack_e0 = 0;
    uStack_d8 = *(*(param_1 + 0x18) + 0xb0);
    uStack_88 = *(*(param_1 + 0x18) + 0x80);
    uStack_90 = 0;
    uStack_d0 = 0;
    uStack_80 = 0;
    uStack_70 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_b8 = 0;
    uStack_78 = 0x80004d8;
    uVar1 = snd_soc_dapm_add_routes(*(param_1 + 0x58) + 0xd0,&uStack_e8,2);
    if (uVar1 == 0) {
        iVar2 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar2 = 0x30;
        }
        iVar2 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar2),0xdc0,0xc);
        if (iVar2 == 0) {
            uVar1 = 0xfffffff4;
        }
        else {
            uVar1 = 0;
            *(param_1 + 0x38) = iVar2;
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return uVar1;
    }
    iVar2 = __stack_chk_fail(uVar1);
    *extraout_x18 = sym.hdmi_codec_dai_remove;
    kfree(*(iVar2 + 0x38));
    return 0;
}


// ===== sym.hdmi_codec_dai_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080023e8 (size 8) =====

ulong sym.hdmi_codec_dai_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree(*(param_1 + 0x38));
    return 0;
}


// ===== sym.plugged_cb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080023f0 (size 8) =====

void sym.plugged_cb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,uint64_t param_2)

{
    ulong *in_x18;
    code *pcVar1;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *(param_1 + 0x98);
    if ((param_2 & 1) == 0) {
        if ((piVar2[0x1c] != 0) && (piVar2[0x1d] != 0)) {
            snd_soc_jack_report(piVar2[0x1c],0,4);
            *(piVar2 + 0x1d) = 0;
        }
        piVar2[0x11] = 0;
        piVar2[0x12] = 0;
        piVar2[0xf] = 0;
        piVar2[0x10] = 0;
        piVar2[0xd] = 0;
        piVar2[0xe] = 0;
        piVar2[0xb] = 0;
        piVar2[0xc] = 0;
        piVar2[9] = 0;
        piVar2[10] = 0;
        piVar2[7] = 0;
        piVar2[8] = 0;
        piVar2[5] = 0;
        piVar2[6] = 0;
        piVar2[3] = 0;
        piVar2[4] = 0;
    }
    else {
        pcVar1 = *(*piVar2 + 0x28);
        if (pcVar1 != NULL) {
            __cfi_slowpath_diag(0xb4c8dba5baae093e,pcVar1,0x8000330);
            (*pcVar1)(*(param_1 + 0x60),piVar2[2],piVar2 + 3,0x80);
        }
        if ((piVar2[0x1c] != 0) && (piVar2[0x1d] != 4)) {
            snd_soc_jack_report(piVar2[0x1c],4,4);
            *(piVar2 + 0x1d) = 4;
        }
    }
    return;
}


// ===== sym.hdmi_codec_probe @ 0x080023f8 (size 444) =====

int sym.hdmi_codec_probe(int64_t arg1)

{
    int64_t iVar1;
    bool bVar2;
    uint8_t uVar3;
    int iVar4;
    int iVar5;
    int64_t *piVar6;
    char *pcVar7;
    int64_t iVar8;
    int64_t iVar9;
    ulong *in_x18;
    int64_t *piVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar10 = *(arg1 + 0xa0);
    iVar1 = arg1 + 0x10;
    if (piVar10 == NULL) {
        pcVar7 = "%s: No platform data\n";
    }
    else {
        iVar5 = (*(piVar10 + 1) >> 1 & 1) + (*(piVar10 + 1) & 1);
        if ((((iVar5 != 0) && (iVar8 = *piVar10, iVar8 != 0)) && ((*(iVar8 + 8) != 0 || (*(iVar8 + 0x10) != 0)))) &&
           (*(iVar8 + 0x18) != 0)) {
            piVar6 = devm_kmalloc(iVar1,0x108,0xdc0);
            if (piVar6 != NULL) {
                iVar8 = piVar10[2];
                iVar9 = *piVar10;
                piVar6[1] = piVar10[1];
                piVar6[2] = iVar8;
                *piVar6 = iVar9;
                __mutex_init(piVar6 + 0x15,"&hcp->lock",reloc.hdmi_codec_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                            );
                iVar4 = snd_pcm_create_iec958_consumer_default(piVar6 + 0xec,0x18);
                if (iVar4 < 0) {
                    return iVar4;
                }
                iVar8 = devm_kmalloc(iVar1,iVar5 * 0xf0,0xdc0);
                if (iVar8 != 0) {
                    uVar3 = *(piVar10 + 1);
                    bVar2 = (uVar3 & 1) != 0;
                    if (bVar2) {
                        memcpy(iVar8,obj.hdmi_i2s_dai,0xf0);
                        *(iVar8 + 0xd0) = *(piVar10 + 0xc);
                        uVar3 = *(piVar10 + 1);
                    }
                    if ((uVar3 >> 1 & 1) != 0) {
                        memcpy(iVar8 + bVar2 * 0xf0,obj.hdmi_spdif_dai,0xf0);
                    }
                    *(arg1 + 0xa8) = piVar6;
                    iVar5 = devm_snd_soc_register_component(iVar1,obj.hdmi_driver,iVar8,iVar5);
                    if (iVar5 == 0) {
                        return 0;
                    }
                    _dev_err(iVar1,"%s: snd_soc_register_component() failed (%d)\n","hdmi_codec_probe",iVar5);
                    return iVar5;
                }
            }
            return -0xc;
        }
        pcVar7 = "%s: Invalid parameters\n";
    }
    _dev_err(iVar1,pcVar7,"hdmi_codec_probe");
    return -0x16;
}


// ===== sym.hdmi_dai_probe @ 0x080025b4 (size 272) =====

ulong sym.hdmi_dai_probe(int64_t arg1)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
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
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_e8 = 0x800038a;
    uStack_e0 = 0;
    uStack_d8 = *(*(arg1 + 0x18) + 0xb0);
    uStack_88 = *(*(arg1 + 0x18) + 0x80);
    uStack_90 = 0;
    uStack_d0 = 0;
    uStack_80 = 0;
    uStack_70 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_b8 = 0;
    uStack_78 = 0x80004d8;
    uVar1 = snd_soc_dapm_add_routes(*(arg1 + 0x58) + 0xd0,&uStack_e8,2);
    if (uVar1 == 0) {
        iVar2 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar2 = 0x30;
        }
        iVar2 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar2),0xdc0,0xc);
        if (iVar2 == 0) {
            uVar1 = 0xfffffff4;
        }
        else {
            uVar1 = 0;
            *(arg1 + 0x38) = iVar2;
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return uVar1;
    }
    iVar2 = __stack_chk_fail(uVar1);
    *extraout_x18 = sym.hdmi_codec_dai_remove;
    kfree(*(iVar2 + 0x38));
    return 0;
}


// ===== sym.hdmi_codec_dai_remove @ 0x080026c4 (size 44) =====

ulong sym.hdmi_codec_dai_remove(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree(*(arg1 + 0x38));
    return 0;
}


// ===== sym.hdmi_codec_pcm_new @ 0x080026f0 (size 312) =====

uint64_t sym.hdmi_codec_pcm_new(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(arg2 + 0x10) + 0x98);
    uVar2 = snd_pcm_add_chmap_ctls(*(arg1 + 0x5f0),0,0,*(*(arg2 + 0x18) + 0xd0),0,iVar3 + 0x98);
    if (uVar2 < 0) {
        return uVar2;
    }
    *(*(iVar3 + 0x98) + 0x28) = iVar3;
    *(*(*(iVar3 + 0x98) + 0x10) + 0x60) = sym.hdmi_codec_chmap_ctl_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    *(*(iVar3 + 0x98) + 0x18) = obj.hdmi_codec_stereo_chmaps;
    *(iVar3 + 0xa0) = 0xffffffff;
    iVar3 = snd_ctl_new1(obj.hdmi_codec_controls,*(arg2 + 0x58));
    if (iVar3 != 0) {
        *(iVar3 + 0x18) = *(*(arg1 + 0x5f0) + 0x18);
        uVar2 = snd_ctl_add(*(*(arg1 + 8) + 0x48),iVar3);
        if (uVar2 < 0) {
            return uVar2;
        }
        iVar3 = snd_ctl_new1(0x8000180,*(arg2 + 0x58));
        if (iVar3 != 0) {
            *(iVar3 + 0x18) = *(*(arg1 + 0x5f0) + 0x18);
            uVar2 = snd_ctl_add(*(*(arg1 + 8) + 0x48),iVar3);
            if (uVar2 < 0) {
                return uVar2;
            }
            iVar3 = snd_ctl_new1(0x80001d0,*(arg2 + 0x58));
            if (iVar3 != 0) {
                *(iVar3 + 0x18) = *(*(arg1 + 0x5f0) + 0x18);
                uVar1 = snd_ctl_add(*(*(arg1 + 8) + 0x48),iVar3);
                return uVar1 & uVar1 >> 0x1f;
            }
        }
    }
    return 0xfffffff4;
}


// ===== sym.hdmi_codec_chmap_ctl_get @ 0x08002828 (size 132) =====

ulong sym.hdmi_codec_chmap_ctl_get(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    code *pcVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    
    iVar3 = *(arg1 + 0x80);
    if (*(iVar3 + 0x20) == 0) {
        return 0;
    }
    iVar5 = *(iVar3 + 0x28);
    uVar4 = 0;
    iVar6 = *(iVar3 + 0x18);
    uVar1 = *(iVar5 + 0xa0);
    if (uVar1 == 0xffffffff) goto code_r0x0800286c;
    while (uVar4 < 0x80) {
        uVar7 = *(iVar6 + uVar1 * 0x10 + 1 + uVar4);
        while( true ) {
            *(arg2 + 0x48 + uVar4 * 8) = uVar7;
            uVar4 = uVar4 + 1;
            if (*(iVar3 + 0x20) <= uVar4) {
                return 0;
            }
            if (*(iVar5 + 0xa0) != -1) break;
code_r0x0800286c:
            if (0x7f < uVar4) goto code_r0x080028a8;
            uVar7 = 0;
        }
    }
code_r0x080028a8:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x80028ac);
    (*pcVar2)();
}


// ===== sym.hdmi_codec_iec958_info @ 0x080028ac (size 32) =====

ulong sym.hdmi_codec_iec958_info(int64_t arg1,int64_t arg2)

{
    *(arg2 + 0x40) = 5;
    *(arg2 + 0x48) = 1;
    return 0;
}


// ===== sym.hdmi_codec_iec958_mask_get @ 0x080028cc (size 28) =====

ulong sym.hdmi_codec_iec958_mask_get(int64_t arg1,int64_t arg2)

{
    *(arg2 + 0x50) = 0xffffffffffffffff;
    *(arg2 + 0x58) = 0xffffffffffffffff;
    *(arg2 + 0x48) = 0xffffffffffffffff;
    return 0;
}


// ===== sym.hdmi_codec_iec958_default_get @ 0x080028e8 (size 52) =====

ulong sym.hdmi_codec_iec958_default_get(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    ulong uVar3;
    
    iVar1 = *(*(*(arg1 + 0x80) + 0x18) + 0x98);
    uVar3 = *(iVar1 + 0xfc);
    uVar2 = *(iVar1 + 0xec);
    *(arg2 + 0x50) = *(iVar1 + 0xf4);
    *(arg2 + 0x58) = uVar3;
    *(arg2 + 0x48) = uVar2;
    return 0;
}


// ===== sym.hdmi_codec_iec958_default_put @ 0x0800291c (size 52) =====

ulong sym.hdmi_codec_iec958_default_put(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    int64_t iVar2;
    ulong uVar3;
    
    uVar3 = *(arg2 + 0x48);
    uVar1 = *(arg2 + 0x50);
    iVar2 = *(*(*(arg1 + 0x80) + 0x18) + 0x98);
    *(iVar2 + 0xfc) = *(arg2 + 0x58);
    *(iVar2 + 0xf4) = uVar1;
    *(iVar2 + 0xec) = uVar3;
    return 0;
}


// ===== sym.hdmi_eld_ctl_info @ 0x08002950 (size 32) =====

ulong sym.hdmi_eld_ctl_info(int64_t arg1,int64_t arg2)

{
    *(arg2 + 0x40) = 4;
    *(arg2 + 0x48) = 0x80;
    return 0;
}


// ===== sym.hdmi_eld_ctl_get @ 0x08002970 (size 96) =====

ulong sym.hdmi_eld_ctl_get(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    ulong uVar2;
    ulong uVar3;
    int64_t iVar4;
    
    iVar4 = *(*(*(arg1 + 0x80) + 0x18) + 0x98);
    uVar2 = *(iVar4 + 0x50);
    uVar1 = *(iVar4 + 0x38);
    uVar3 = *(iVar4 + 0x40);
    *(arg2 + 0x78) = *(iVar4 + 0x48);
    *(arg2 + 0x80) = uVar2;
    *(arg2 + 0x68) = uVar1;
    *(arg2 + 0x70) = uVar3;
    uVar2 = *(iVar4 + 0x70);
    uVar1 = *(iVar4 + 0x58);
    uVar3 = *(iVar4 + 0x60);
    *(arg2 + 0x98) = *(iVar4 + 0x68);
    *(arg2 + 0xa0) = uVar2;
    *(arg2 + 0x88) = uVar1;
    *(arg2 + 0x90) = uVar3;
    uVar2 = *(iVar4 + 0x90);
    uVar1 = *(iVar4 + 0x78);
    uVar3 = *(iVar4 + 0x80);
    *(arg2 + 0xb8) = *(iVar4 + 0x88);
    *(arg2 + 0xc0) = uVar2;
    *(arg2 + 0xa8) = uVar1;
    *(arg2 + 0xb0) = uVar3;
    uVar2 = *(iVar4 + 0x30);
    uVar1 = *(iVar4 + 0x18);
    uVar3 = *(iVar4 + 0x20);
    *(arg2 + 0x58) = *(iVar4 + 0x28);
    *(arg2 + 0x60) = uVar2;
    *(arg2 + 0x48) = uVar1;
    *(arg2 + 0x50) = uVar3;
    return 0;
}


// ===== sym.hdmi_codec_i2s_set_fmt @ 0x080029d0 (size 332) =====

ulong sym.hdmi_codec_i2s_set_fmt(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    ulong *puVar3;
    uint8_t uVar4;
    uint uVar5;
    uint8_t uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = arg2;
    puVar3 = *(arg1 + 0x38);
    uVar1 = (uVar2 & 0xf000) - 0x1000 >> 0xc;
    *(puVar3 + 1) = 0;
    *puVar3 = 0;
    if (3 < uVar1) {
        return 0xffffffea;
    }
    uVar6 = 0xc;
    //switch table (4 cases) at 0x8000370
    uVar4 = 0;
    switch(*(uVar1 + 0x8000370) * 4 + 0x8002a20) {
    case 0x8002a24:
        uVar6 = 8;
        break;
    case 0x8002a30:
        uVar6 = 4;
        break;
    case 0x8002a44:
        goto code_r0x08002a44;
    }
    *(puVar3 + 4) = uVar6;
    uVar4 = uVar6;
code_r0x08002a44:
    uVar1 = uVar2 & 0xf00;
    if (uVar1 == 0x200) {
        uVar6 = 2;
    }
    else if (uVar1 == 0x400) {
        uVar6 = 3;
    }
    else {
        if (uVar1 != 0x300) goto code_r0x08002a7c;
        uVar6 = 1;
    }
    *(puVar3 + 4) = uVar6 | uVar4;
code_r0x08002a7c:
    uVar1 = (uVar2 & 0xf) - 1;
    if (5 < uVar1) {
        _dev_err(*(arg1 + 0x10),"Invalid DAI interface format\n");
        return 0xffffffea;
    }
    //switch table (6 cases) at 0x8000374
    switch(*(uVar1 + 0x8000374) * 4 + 0x8002aa4) {
    case 0x8002aa8:
        *puVar3 = 0;
        return 0;
    case 0x8002ab8:
        uVar5 = 1;
        break;
    case 0x8002ac4:
        uVar5 = 2;
        break;
    case 0x8002ad0:
        uVar5 = 3;
        break;
    case 0x8002adc:
        uVar5 = 4;
        break;
    case 0x8002ae8:
        uVar5 = 5;
    }
    *puVar3 = uVar5;
    return 0;
}


// ===== sym.hdmi_codec_mute @ 0x08002b1c (size 168) =====

ulong sym.hdmi_codec_mute(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    code *pcVar3;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(*(arg1 + 0x10) + 0x98);
    iVar2 = *piVar4;
    pcVar3 = *(iVar2 + 0x20);
    if (pcVar3 != NULL) {
        if ((arg3 == 0) || ((*(iVar2 + 0x40) & 1) == 0)) {
            __cfi_slowpath_diag(0x2e954847b3f98594,pcVar3,0x8000230);
            uVar1 = (*pcVar3)(*(*(arg1 + 0x10) + 0x60),piVar4[2],arg2 != 0,arg3 & 0xffffffff);
            return uVar1;
        }
    }
    return 0xfffffdf4;
}


// ===== sym.hdmi_codec_startup @ 0x08002bc4 (size 468) =====

int sym.hdmi_codec_startup(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint8_t uVar2;
    int iVar3;
    uint32_t uVar4;
    ulong *in_x18;
    code *pcVar5;
    int64_t *piVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x3c);
    piVar6 = *(*(arg2 + 0x10) + 0x98);
    mutex_lock(piVar6 + 0x15);
    if (piVar6[0x1b] == '\0') {
        pcVar5 = **piVar6;
        if (pcVar5 != NULL) {
            __cfi_slowpath_diag(0xd2e10b27ab65761b,pcVar5,0x8000250);
            iVar3 = (*pcVar5)(*(*(arg2 + 0x10) + 0x60),piVar6[2]);
            if (iVar3 != 0) goto code_r0x08002c5c;
        }
        if ((iVar1 == 0) && (pcVar5 = *(*piVar6 + 0x28), pcVar5 != NULL)) {
            __cfi_slowpath_diag(0xb4c8dba5baae093e,pcVar5,0x8000270);
            iVar3 = (*pcVar5)(*(*(arg2 + 0x10) + 0x60),piVar6[2],piVar6 + 3,0x80);
            if ((iVar3 != 0) || (iVar3 = snd_pcm_hw_constraint_eld(*(arg1 + 0xb8),piVar6 + 3), iVar3 != 0))
            goto code_r0x08002c5c;
            uVar2 = *(piVar6 + 0x1f);
            uVar4 = (uVar2 & 2) << 9 | uVar2 >> 1 & 2;
            if ((uVar2 & 8) != 0) {
                uVar4 = uVar4 | 0xa0;
            }
            uVar4 = uVar4 | (uVar2 & 0x10) << 2;
            if ((uVar2 & 0x20) != 0) {
                uVar4 = uVar4 | 0x18;
            }
            if ((uVar2 & 0x40) != 0) {
                uVar4 = uVar4 | 0x300;
            }
            if ((uVar4 == 0) || (*(piVar6[0x13] + 0x20) < 3)) {
                pcVar5 = obj.hdmi_codec_stereo_chmaps;
            }
            else {
                pcVar5 = obj.hdmi_codec_8ch_chmaps;
            }
            *(piVar6[0x13] + 0x18) = pcVar5;
        }
        iVar3 = 0;
        *(piVar6 + 0x1b) = 1;
    }
    else {
        _dev_err(*(arg2 + 0x10),"Only one simultaneous stream supported!\n");
        iVar3 = -0x16;
    }
code_r0x08002c5c:
    mutex_unlock(piVar6 + 0x15);
    return iVar3;
}


// ===== sym.hdmi_codec_shutdown @ 0x08002d98 (size 148) =====

void sym.hdmi_codec_shutdown(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    code *pcVar1;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *(*(arg1 + 0x10) + 0x98);
    *(piVar2 + 0x14) = 0xffffffff;
    pcVar1 = *(*piVar2 + 0x18);
    __cfi_slowpath_diag(0xb710ab9fd4b9c5d9,pcVar1,0x8000290);
    (*pcVar1)(*(*(arg1 + 0x10) + 0x60),piVar2[2]);
    mutex_lock(piVar2 + 0x15);
    *(piVar2 + 0x1b) = 0;
    mutex_unlock(piVar2 + 0x15);
    return;
}


// ===== sym.hdmi_codec_hw_params @ 0x08002e2c (size 476) =====

uint64_t sym.hdmi_codec_hw_params(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    int iVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    uint32_t in_w3;
    uint64_t uVar5;
    uint64_t arg4;
    ulong *in_x4;
    ulong *puVar6;
    uint uVar7;
    uint32_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar9;
    code *pcVar10;
    int64_t iVar11;
    int64_t *piVar12;
    int64_t iVar13;
    ulong unaff_x30;
    uchar auVar14 [16];
    uchar auVar15 [12];
    ulong uStack_260;
    ulong uStack_258;
    ulong uStack_250;
    uint uStack_248;
    uint uStack_244;
    uint uStack_240;
    uint uStack_23c;
    uint uStack_238;
    uint uStack_234;
    uint uStack_230;
    uint uStack_22c;
    ulong uStack_228;
    ulong uStack_220;
    ulong uStack_218;
    ulong uStack_210;
    ulong uStack_208;
    ulong uStack_200;
    ulong uStack_1f8;
    ulong uStack_1f0;
    ulong uStack_1e8;
    ulong uStack_1e0;
    ulong uStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1b0;
    ulong uStack_1a8;
    ulong uStack_1a0;
    ulong uStack_198;
    ulong uStack_190;
    int64_t iStack_188;
    uchar *puStack_180;
    code *pcStack_178;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    uint uStack_118;
    uint uStack_114;
    uint uStack_110;
    uint uStack_10c;
    uint uStack_108;
    uint uStack_104;
    uint uStack_100;
    uint uStack_fc;
    ulong uStack_f8;
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
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    puVar6 = &uStack_130;
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_58 = *(iVar9 + 0x5e0);
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    iVar9 = *(arg3 + 0x38);
    uStack_c8 = 0;
    uStack_c0 = 0;
    piVar12 = *(*(arg3 + 0x10) + 0x98);
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    uStack_118 = 0;
    uStack_114 = 0;
    uStack_110 = 0;
    uStack_10c = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_130 = 0;
    if (*(*piVar12 + 8) == 0) {
        uVar4 = 0;
    }
    else {
        uVar3 = *(arg2 + 0x24);
        if (uVar3 == 0) {
            uVar3 = *(arg2 + 0x28);
            if (uVar3 != 0) {
                uVar8 = 0x20;
                goto code_r0x08002ed8;
            }
            uVar8 = 0;
        }
        else {
            uVar8 = 0;
code_r0x08002ed8:
            uVar3 = (uVar3 & 0xaaaaaaaa) >> 1 | (uVar3 & 0x55555555) << 1;
            uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
            uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
            uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
            uVar8 = LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10) | uVar8;
        }
        uVar4 = snd_pcm_format_width(uVar8);
        uVar5 = *(arg2 + 0x11c);
        arg1 = sym.hdmi_codec_fill_codec_params(arg3,uVar4 & 0xffffffff,*(arg2 + 0x128),uVar5);
        in_w3 = uVar5;
        if (-1 < arg1) {
            uStack_114 = *(piVar12 + 0xec);
            uStack_110 = *(piVar12 + 0xec) >> 0x20;
            uStack_10c = *(piVar12 + 0xf4);
            uStack_108 = *(piVar12 + 0xf4) >> 0x20;
            uStack_104 = *(piVar12 + 0xfc);
            uStack_100 = *(piVar12 + 0xfc) >> 0x20;
            iVar2 = snd_pcm_fill_iec958_consumer_hw_params(arg2,&uStack_114,0x18);
            if (iVar2 < 0) {
                uVar4 = _dev_err(*(arg3 + 0x10),"Creating IEC958 channel status failed %d\n",iVar2);
                return uVar4;
            }
            uVar3 = *(arg2 + 0x24);
            if (uVar3 == 0) {
                uVar3 = *(arg2 + 0x28);
                uVar8 = 0;
                if (uVar3 != 0) {
                    uVar8 = 0x20;
                    goto code_r0x08002f50;
                }
            }
            else {
                uVar8 = 0;
code_r0x08002f50:
                uVar3 = (uVar3 & 0xaaaaaaaa) >> 1 | (uVar3 & 0x55555555) << 1;
                uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
                uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
                uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
                uVar8 = LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10) | uVar8;
            }
            *(iVar9 + 8) = uVar8;
            pcVar10 = *(*piVar12 + 8);
            __cfi_slowpath_diag(0x16c96fc7d41b8ddc,pcVar10,0x80002b0);
            in_w3 = &uStack_130;
            arg1 = (*pcVar10)(*(*(arg3 + 0x10) + 0x60),piVar12[2],iVar9);
        }
        uVar4 = arg1 & 0xffffffff;
        in_x4 = puVar6;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_58) {
        return uVar4;
    }
    auVar14 = __stack_chk_fail(arg1);
    iVar13 = auVar14._8_8_;
    puVar6 = &uStack_260;
    *extraout_x18 = sym.hdmi_codec_prepare;
    pcStack_178 = sym.hdmi_codec_prepare;
    iVar9 = sp_el0;
    iStack_188 = *(iVar9 + 0x5e0);
    iVar11 = *(auVar14._0_8_ + 0xb8);
    iVar9 = *(iVar13 + 0x38);
    piVar12 = *(*(iVar13 + 0x10) + 0x98);
    uVar3 = *(iVar11 + 0x68);
    puStack_180 = &stack0xffffffffffffffb0;
    uVar4 = snd_pcm_format_width(*(iVar11 + 0x5c));
    uVar8 = *(iVar11 + 100);
    uVar5 = uVar8;
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uStack_208 = 0;
    uStack_200 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_228 = 0;
    uStack_220 = 0;
    uStack_238 = 0;
    uStack_234 = 0;
    uStack_230 = 0;
    uStack_22c = 0;
    uStack_248 = 0;
    uStack_244 = 0;
    uStack_240 = 0;
    uStack_23c = 0;
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_260 = 0;
    if (*(*piVar12 + 0x10) == 0) {
        uVar4 = 0;
    }
    else {
        arg4 = uVar3;
        uVar3 = sym.hdmi_codec_fill_codec_params(iVar13,uVar4 & 0xffffffff,uVar5,arg4);
        uVar8 = uVar5;
        in_w3 = arg4;
        if (-1 < uVar3) {
            uStack_244 = *(piVar12 + 0xec);
            uStack_240 = *(piVar12 + 0xec) >> 0x20;
            uStack_23c = *(piVar12 + 0xf4);
            uStack_238 = *(piVar12 + 0xf4) >> 0x20;
            uStack_234 = *(piVar12 + 0xfc);
            uStack_230 = *(piVar12 + 0xfc) >> 0x20;
            uVar3 = snd_pcm_fill_iec958_consumer(iVar11,&uStack_244,0x18);
            if (uVar3 < 0) {
                uVar4 = uVar3;
                uVar5 = uVar4;
                _dev_err(*(iVar13 + 0x10),"Creating IEC958 channel status failed %d\n");
                uVar8 = uVar5;
                in_x4 = puVar6;
                goto code_r0x0800313c;
            }
            *(iVar9 + 8) = *(iVar11 + 0x5c);
            pcVar10 = *(*piVar12 + 0x10);
            __cfi_slowpath_diag(0x16c96fc7d41b8ddc,pcVar10,0x80002d0);
            in_w3 = &uStack_260;
            uVar3 = (*pcVar10)(*(*(iVar13 + 0x10) + 0x60),piVar12[2]);
            uVar8 = iVar9;
        }
        uVar4 = uVar3;
        in_x4 = puVar6;
    }
code_r0x0800313c:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_188) {
        return uVar4;
    }
    auVar15 = __stack_chk_fail();
    *extraout_x18_00 = sym.hdmi_codec_fill_codec_params;
    iVar9 = *(auVar15._0_8_ + 0x10);
    iVar13 = *(iVar9 + 0x98);
    uVar3 = 0;
    pcVar10 = obj.hdmi_codec_channel_alloc;
    uVar1 = *(iVar13 + 0x1f);
    uVar4 = 0;
    if ((uVar1 & 1) != 0) {
        uVar4 = 5;
    }
    uVar4 = uVar4 | (uVar1 & 0x7f) << 9 & 0x400 | uVar1 >> 1 & 2;
    if ((uVar1 & 8) != 0) {
        uVar4 = uVar4 | 0xa0;
    }
    uVar4 = uVar4 | (uVar1 & 0x10) << 2;
    if ((uVar1 & 0x20) != 0) {
        uVar4 = uVar4 | 0x18;
    }
    if ((uVar1 & 0x40) != 0) {
        uVar4 = uVar4 | 0x300;
    }
    while ((((uVar1 & 0x7f) != 0 || (*pcVar10 != 0)) &&
           ((*(pcVar10 + 4) != (in_w3 & 0xff) || ((*(pcVar10 + 8) & (uVar4 ^ 0xffffffffffffffff)) != 0))))) {
        uVar3 = uVar3 + 1;
        pcVar10 = pcVar10 + 0x10;
        if (uVar3 == 0x20) {
            uVar3 = 0xffffffea;
            _dev_err(iVar9,"Not able to map channels to speakers (%d)\n",0xffffffea);
            uVar7 = 0xffffffff;
code_r0x080032e0:
            *(iVar13 + 0xa0) = uVar7;
            return uVar3;
        }
    }
    in_x4[0x19] = 0;
    in_x4[0x1a] = 0;
    in_x4[0x17] = 0;
    in_x4[0x18] = 0;
    in_x4[0x15] = 0;
    in_x4[0x16] = 0;
    in_x4[0x13] = 0;
    in_x4[0x14] = 0;
    in_x4[0x11] = 0;
    in_x4[0x12] = 0;
    in_x4[0xf] = 0;
    in_x4[0x10] = 0;
    in_x4[0xd] = 0;
    in_x4[0xe] = 0;
    in_x4[0xb] = 0;
    in_x4[0xc] = 0;
    in_x4[9] = 0;
    in_x4[10] = 0;
    in_x4[7] = 0;
    in_x4[8] = 0;
    in_x4[5] = 0;
    in_x4[6] = 0;
    in_x4[3] = 0;
    in_x4[4] = 0;
    in_x4[1] = 0;
    in_x4[2] = 0;
    *in_x4 = 0;
    hdmi_audio_infoframe_init(in_x4);
    *(in_x4 + 6) = in_w3;
    in_x4[1] = 0;
    *(in_x4 + 2) = 0;
    if (0x1f < uVar3) {
    //WARNING: Does not return
        pcVar10 = SoftwareBreakpoint(0x5512,0x8003328);
        (*pcVar10)();
    }
    uVar3 = 0;
    uVar7 = *pcVar10;
    *(in_x4 + 0xcc) = uVar8;
    *(in_x4 + 0x1a) = auVar15._8_4_;
    *(in_x4 + 0xd4) = in_w3;
    *(in_x4 + 3) = uVar7;
    goto code_r0x080032e0;
}


// ===== sym.hdmi_codec_prepare @ 0x08003008 (size 400) =====

uint32_t sym.hdmi_codec_prepare(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    uint32_t uVar4;
    uint64_t arg3;
    uint32_t in_w3;
    uint64_t arg4;
    ulong *in_x4;
    ulong *puVar5;
    uint uVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar7;
    int64_t iVar8;
    code *pcVar9;
    int64_t *piVar10;
    ulong unaff_x30;
    uchar auVar11 [12];
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    uint uStack_118;
    uint uStack_114;
    uint uStack_110;
    uint uStack_10c;
    uint uStack_108;
    uint uStack_104;
    uint uStack_100;
    uint uStack_fc;
    ulong uStack_f8;
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
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    puVar5 = &uStack_130;
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_58 = *(iVar7 + 0x5e0);
    iVar8 = *(arg1 + 0xb8);
    iVar7 = *(arg2 + 0x38);
    piVar10 = *(*(arg2 + 0x10) + 0x98);
    uVar2 = *(iVar8 + 0x68);
    uVar3 = snd_pcm_format_width(*(iVar8 + 0x5c));
    uVar4 = *(iVar8 + 100);
    arg3 = uVar4;
    uStack_68 = 0;
    uStack_60 = 0;
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
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    uStack_118 = 0;
    uStack_114 = 0;
    uStack_110 = 0;
    uStack_10c = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_130 = 0;
    if (*(*piVar10 + 0x10) == 0) {
        uVar2 = 0;
        puVar5 = in_x4;
    }
    else {
        arg4 = uVar2;
        uVar2 = sym.hdmi_codec_fill_codec_params(arg2,uVar3 & 0xffffffff,arg3,arg4);
        uVar4 = arg3;
        in_w3 = arg4;
        if (-1 < uVar2) {
            uStack_114 = *(piVar10 + 0xec);
            uStack_110 = *(piVar10 + 0xec) >> 0x20;
            uStack_10c = *(piVar10 + 0xf4);
            uStack_108 = *(piVar10 + 0xf4) >> 0x20;
            uStack_104 = *(piVar10 + 0xfc);
            uStack_100 = *(piVar10 + 0xfc) >> 0x20;
            uVar2 = snd_pcm_fill_iec958_consumer(iVar8,&uStack_114,0x18);
            if (uVar2 < 0) {
                uVar4 = uVar2;
                _dev_err(*(arg2 + 0x10),"Creating IEC958 channel status failed %d\n");
            }
            else {
                *(iVar7 + 8) = *(iVar8 + 0x5c);
                pcVar9 = *(*piVar10 + 0x10);
                __cfi_slowpath_diag(0x16c96fc7d41b8ddc,pcVar9,0x80002d0);
                in_w3 = &uStack_130;
                uVar2 = (*pcVar9)(*(*(arg2 + 0x10) + 0x60),piVar10[2]);
                uVar4 = iVar7;
            }
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_58) {
        return uVar2;
    }
    auVar11 = __stack_chk_fail();
    *extraout_x18 = sym.hdmi_codec_fill_codec_params;
    iVar7 = *(auVar11._0_8_ + 0x10);
    iVar8 = *(iVar7 + 0x98);
    uVar2 = 0;
    pcVar9 = obj.hdmi_codec_channel_alloc;
    uVar1 = *(iVar8 + 0x1f);
    uVar3 = 0;
    if ((uVar1 & 1) != 0) {
        uVar3 = 5;
    }
    uVar3 = uVar3 | (uVar1 & 0x7f) << 9 & 0x400 | uVar1 >> 1 & 2;
    if ((uVar1 & 8) != 0) {
        uVar3 = uVar3 | 0xa0;
    }
    uVar3 = uVar3 | (uVar1 & 0x10) << 2;
    if ((uVar1 & 0x20) != 0) {
        uVar3 = uVar3 | 0x18;
    }
    if ((uVar1 & 0x40) != 0) {
        uVar3 = uVar3 | 0x300;
    }
    while ((((uVar1 & 0x7f) != 0 || (*pcVar9 != 0)) &&
           ((*(pcVar9 + 4) != (in_w3 & 0xff) || ((*(pcVar9 + 8) & (uVar3 ^ 0xffffffffffffffff)) != 0))))) {
        uVar2 = uVar2 + 1;
        pcVar9 = pcVar9 + 0x10;
        if (uVar2 == 0x20) {
            uVar2 = 0xffffffea;
            _dev_err(iVar7,"Not able to map channels to speakers (%d)\n",0xffffffea);
            uVar6 = 0xffffffff;
code_r0x080032e0:
            *(iVar8 + 0xa0) = uVar6;
            return uVar2;
        }
    }
    puVar5[0x19] = 0;
    puVar5[0x1a] = 0;
    puVar5[0x17] = 0;
    puVar5[0x18] = 0;
    puVar5[0x15] = 0;
    puVar5[0x16] = 0;
    puVar5[0x13] = 0;
    puVar5[0x14] = 0;
    puVar5[0x11] = 0;
    puVar5[0x12] = 0;
    puVar5[0xf] = 0;
    puVar5[0x10] = 0;
    puVar5[0xd] = 0;
    puVar5[0xe] = 0;
    puVar5[0xb] = 0;
    puVar5[0xc] = 0;
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    hdmi_audio_infoframe_init(puVar5);
    *(puVar5 + 6) = in_w3;
    puVar5[1] = 0;
    *(puVar5 + 2) = 0;
    if (0x1f < uVar2) {
    //WARNING: Does not return
        pcVar9 = SoftwareBreakpoint(0x5512,0x8003328);
        (*pcVar9)();
    }
    uVar2 = 0;
    uVar6 = *pcVar9;
    *(puVar5 + 0xcc) = uVar4;
    *(puVar5 + 0x1a) = auVar11._8_4_;
    *(puVar5 + 0xd4) = in_w3;
    *(puVar5 + 3) = uVar6;
    goto code_r0x080032e0;
}


// ===== sym.hdmi_codec_fill_codec_params @ 0x08003198 (size 400) =====

uint sym.hdmi_codec_fill_codec_params(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    code *pcVar2;
    ulong *in_x4;
    uint uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    uint32_t uVar5;
    uint uVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = *(*(arg1 + 0x10) + 0x98);
    uVar5 = 0;
    pcVar2 = obj.hdmi_codec_channel_alloc;
    uVar1 = *(iVar7 + 0x1f);
    uVar4 = 0;
    if ((uVar1 & 1) != 0) {
        uVar4 = 5;
    }
    uVar4 = uVar4 | (uVar1 & 0x7f) << 9 & 0x400 | uVar1 >> 1 & 2;
    if ((uVar1 & 8) != 0) {
        uVar4 = uVar4 | 0xa0;
    }
    uVar4 = uVar4 | (uVar1 & 0x10) << 2;
    if ((uVar1 & 0x20) != 0) {
        uVar4 = uVar4 | 0x18;
    }
    if ((uVar1 & 0x40) != 0) {
        uVar4 = uVar4 | 0x300;
    }
    while ((((uVar1 & 0x7f) != 0 || (*pcVar2 != 0)) &&
           ((*(pcVar2 + 4) != (arg4 & 0xff) || ((*(pcVar2 + 8) & (uVar4 ^ 0xffffffffffffffff)) != 0))))) {
        uVar5 = uVar5 + 1;
        pcVar2 = pcVar2 + 0x10;
        if (uVar5 == 0x20) {
            uVar6 = 0xffffffea;
            _dev_err(*(arg1 + 0x10),"Not able to map channels to speakers (%d)\n",0xffffffea);
            uVar3 = 0xffffffff;
code_r0x080032e0:
            *(iVar7 + 0xa0) = uVar3;
            return uVar6;
        }
    }
    in_x4[0x19] = 0;
    in_x4[0x1a] = 0;
    in_x4[0x17] = 0;
    in_x4[0x18] = 0;
    in_x4[0x15] = 0;
    in_x4[0x16] = 0;
    in_x4[0x13] = 0;
    in_x4[0x14] = 0;
    in_x4[0x11] = 0;
    in_x4[0x12] = 0;
    in_x4[0xf] = 0;
    in_x4[0x10] = 0;
    in_x4[0xd] = 0;
    in_x4[0xe] = 0;
    in_x4[0xb] = 0;
    in_x4[0xc] = 0;
    in_x4[9] = 0;
    in_x4[10] = 0;
    in_x4[7] = 0;
    in_x4[8] = 0;
    in_x4[5] = 0;
    in_x4[6] = 0;
    in_x4[3] = 0;
    in_x4[4] = 0;
    in_x4[1] = 0;
    in_x4[2] = 0;
    *in_x4 = 0;
    hdmi_audio_infoframe_init();
    *(in_x4 + 6) = arg4;
    in_x4[1] = 0;
    *(in_x4 + 2) = 0;
    if (0x1f < uVar5) {
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5512,0x8003328);
        (*pcVar2)();
    }
    uVar6 = 0;
    uVar3 = *pcVar2;
    *(in_x4 + 0xcc) = arg3;
    *(in_x4 + 0x1a) = arg2;
    *(in_x4 + 0xd4) = arg4;
    *(in_x4 + 3) = uVar3;
    goto code_r0x080032e0;
}


// ===== sym.hdmi_dai_spdif_probe @ 0x08003328 (size 280) =====

void sym.hdmi_dai_spdif_probe(int64_t arg1)

{
    ulong uVar1;
    uint *puVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar4;
    int64_t *piVar5;
    ulong unaff_x30;
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
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_e8 = 0x800038a;
    uStack_e0 = 0;
    uStack_d8 = *(*(arg1 + 0x18) + 0xb0);
    uStack_88 = *(*(arg1 + 0x18) + 0x80);
    uStack_90 = 0;
    uStack_d0 = 0;
    uStack_80 = 0;
    uStack_70 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_b8 = 0;
    uStack_78 = 0x80004d8;
    uVar1 = snd_soc_dapm_add_routes(*(arg1 + 0x58) + 0xd0,&uStack_e8,2);
    if (uVar1 == 0) {
        iVar3 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar3 = 0x30;
        }
        puVar2 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar3),0xdc0,0xc);
        if (puVar2 == NULL) {
            uVar1 = 0xfffffff4;
        }
        else {
            uVar1 = 0;
            *(arg1 + 0x38) = puVar2;
            *puVar2 = 6;
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return;
    }
    iVar3 = __stack_chk_fail(uVar1);
    *extraout_x18 = sym.hdmi_remove;
    piVar5 = *(*(iVar3 + 0x18) + 0x98);
    pcVar4 = *(*piVar5 + 0x38);
    if (pcVar4 != NULL) {
        __cfi_slowpath_diag(0xac6f6450dd1138ab,pcVar4,0x80002f0);
        (*pcVar4)(*(*(iVar3 + 0x18) + 0x60),piVar5[2],0,0);
    }
    return;
}


// ===== sym.hdmi_remove @ 0x08003440 (size 128) =====

void sym.hdmi_remove(int64_t arg1)

{
    ulong *in_x18;
    code *pcVar1;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *(*(arg1 + 0x18) + 0x98);
    pcVar1 = *(*piVar2 + 0x38);
    if (pcVar1 != NULL) {
        __cfi_slowpath_diag(0xac6f6450dd1138ab,pcVar1,0x80002f0);
        (*pcVar1)(*(*(arg1 + 0x18) + 0x60),piVar2[2],0,0);
    }
    return;
}


// ===== sym.hdmi_codec_set_jack @ 0x080034c0 (size 152) =====

ulong sym.hdmi_codec_set_jack(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    ulong *in_x18;
    code *pcVar2;
    int64_t *piVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar3 = *(*(arg1 + 0x18) + 0x98);
    if (*(*piVar3 + 0x38) == 0) {
        uVar1 = 0xfffffdf4;
    }
    else {
        piVar3[0x1c] = arg2;
        pcVar2 = *(*piVar3 + 0x38);
        __cfi_slowpath_diag(0xac6f6450dd1138ab,pcVar2,0x8000310);
        uVar1 = (*pcVar2)(*(*(arg1 + 0x18) + 0x60),piVar3[2],sym.plugged_cb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
        if (uVar1 != 0) {
            piVar3[0x1c] = 0;
        }
    }
    return uVar1;
}


// ===== sym.hdmi_of_xlate_dai_id @ 0x08003558 (size 140) =====

ulong sym.hdmi_of_xlate_dai_id(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = *(**(*(arg1 + 0x18) + 0x98) + 0x30);
    if (pcVar2 == NULL) {
        uVar1 = 0xfffffdf4;
    }
    else {
        if (pcVar2 != sym.__typeid__ZTSFiP17snd_soc_componentP11device_nodeE_global_addr) {
            __cfi_slowpath_diag(0x6c5345b411bb97e7,pcVar2,0x8000350);
        }
        uVar1 = (*pcVar2)(arg1,arg2);
    }
    return uVar1;
}


// ===== sym.plugged_cb @ 0x080035e4 (size 232) =====

void sym.plugged_cb(int64_t arg1)

{
    uint64_t in_x1;
    ulong *in_x18;
    code *pcVar1;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *(arg1 + 0x98);
    if ((in_x1 & 1) == 0) {
        if ((piVar2[0x1c] != 0) && (piVar2[0x1d] != 0)) {
            snd_soc_jack_report(piVar2[0x1c],0,4);
            *(piVar2 + 0x1d) = 0;
        }
        piVar2[0x11] = 0;
        piVar2[0x12] = 0;
        piVar2[0xf] = 0;
        piVar2[0x10] = 0;
        piVar2[0xd] = 0;
        piVar2[0xe] = 0;
        piVar2[0xb] = 0;
        piVar2[0xc] = 0;
        piVar2[9] = 0;
        piVar2[10] = 0;
        piVar2[7] = 0;
        piVar2[8] = 0;
        piVar2[5] = 0;
        piVar2[6] = 0;
        piVar2[3] = 0;
        piVar2[4] = 0;
    }
    else {
        pcVar1 = *(*piVar2 + 0x28);
        if (pcVar1 != NULL) {
            __cfi_slowpath_diag(0xb4c8dba5baae093e,pcVar1,0x8000330);
            (*pcVar1)(*(arg1 + 0x60),piVar2[2],piVar2 + 3,0x80);
        }
        if ((piVar2[0x1c] != 0) && (piVar2[0x1d] != 4)) {
            snd_soc_jack_report(piVar2[0x1c],4,4);
            *(piVar2 + 0x1d) = 4;
        }
    }
    return;
}


// ===== sym.__cfi_check_fail @ 0x080036cc (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08003710

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
    //switch table (4 cases) at 0x800037a
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8003724);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08003734 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.hdmi_codec_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08003768 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.hdmi_codec_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}

