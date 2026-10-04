// decompiled from lpass_cdc_rx_macro_dlkm by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08013000 (size 772) =====

//WARNING: Switch with 1 destination removed at 0x0801968c

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
                if (arg1 != -0x57be845bca9148ef) {
                    if (arg1 != -0x550b9e52359ac614) goto code_r0x0801964c;
                    pcVar2 = sym.lpass_cdc_rx_macro_add_child_devices.5c0fcf43324700bd174cccbefdf1d743.cfi_jt;
                    goto code_r0x080132f4;
                }
                pcVar2 = sym.pm_runtime_force_resume.cfi_jt;
            }
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 4) {
                return;
            }
            goto code_r0x0801964c;
        }
        if (arg1 < -0x133b7e8d0b7609ce) {
            if (arg1 == -0x49739d0000a0fe53) {
                if ((pcVar1 + -0x80133a0 >> 3 | pcVar1 << 0x3d) < 7) {
                    return;
                }
                goto code_r0x0801964c;
            }
            if (arg1 != -0x3557318fb8d07b71) goto code_r0x0801964c;
            pcVar2 = sym.lpass_cdc_rx_macro_probe.5c0fcf43324700bd174cccbefdf1d743.cfi_jt;
        }
        else {
            if (arg1 == -0x133b7e8d0b7609ce) {
                pcVar2 = sym.lpass_cdc_rx_set_fir_capability.cfi_jt;
                goto code_r0x080132f4;
            }
            if (arg1 != -0xf2d15659b6de7a9) goto code_r0x0801964c;
            pcVar2 = sym.lpass_cdc_rx_macro_deinit.5c0fcf43324700bd174cccbefdf1d743.cfi_jt;
        }
code_r0x08013210:
        if (1 < (pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d)) goto code_r0x0801964c;
    }
    else {
        if (arg1 < 0x3a2d6f9b27d89e39) {
            if (0x2882621ee1337d30 < arg1) {
                if (arg1 == 0x2882621ee1337d31) {
                    if ((pcVar1 + -0x80133d8 >> 3 | pcVar1 << 0x3d) < 0x23) {
                        return;
                    }
                    goto code_r0x0801964c;
                }
                if (arg1 != 0x2b17460ce4bf82db) goto code_r0x0801964c;
                pcVar2 = sym.rx_swrm_clock.5c0fcf43324700bd174cccbefdf1d743.cfi_jt;
                goto code_r0x08013210;
            }
            if (arg1 == 0x2b3a43e29242445) {
                pcVar2 = sym.init_module.cfi_jt;
            }
            else {
                if (arg1 != 0x65013fe89c46b56) goto code_r0x0801964c;
                pcVar2 = sym.lpass_cdc_rx_macro_set_port_map.5c0fcf43324700bd174cccbefdf1d743.cfi_jt;
            }
        }
        else if (arg1 < 0x74f0ccf11b57c4f0) {
            if (arg1 == 0x3a2d6f9b27d89e39) {
                pcVar2 = sym.lpass_cdc_rx_macro_get_channel_map.5c0fcf43324700bd174cccbefdf1d743.cfi_jt;
            }
            else {
                if (arg1 != 0x6b84145aa65a8cf9) goto code_r0x0801964c;
                pcVar2 = sym.lpass_cdc_rx_macro_event_handler.5c0fcf43324700bd174cccbefdf1d743.cfi_jt;
            }
        }
        else if (arg1 == 0x74f0ccf11b57c4f0) {
            pcVar2 = sym.lpass_cdc_rx_macro_hw_params.5c0fcf43324700bd174cccbefdf1d743.cfi_jt;
        }
        else {
            if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x0801964c;
            pcVar2 = sym.cleanup_module.cfi_jt;
        }
code_r0x080132f4:
        if (pcVar1 != pcVar2) {
code_r0x0801964c:
            *in_x18 = unaff_x30;
            if (arg3 != 0) {
                if (4 < *arg3) {
                    return;
                }
                __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
            }
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5502,0x80196a0);
            (*pcVar1)();
        }
    }
    return;
}


// ===== sym.lpass_cdc_rx_set_fir_capability.cfi_jt @ 0x08013310 (size 8) =====

ulong sym.lpass_cdc_rx_set_fir_capability.cfi_jt(int64_t param_1,uint8_t param_2,int64_t *param_3,char *param_4)

{
    int iVar1;
    uint64_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    char *pcVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar6 [16];
    int64_t iStack_38;
    uchar auStack_30 [8];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    iStack_38 = 0;
    if (param_1 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_rx_set_fir_capability._rs,"lpass_cdc_rx_set_fir_capability");
        if (iVar1 != 0) {
            _printk(0x800180e,"lpass_cdc_rx_set_fir_capability");
        }
    }
    else {
        param_4 = "lpass_cdc_rx_set_fir_capability";
        param_3 = &iStack_38;
        uVar2 = sym.lpass_cdc_rx_macro_get_data(param_1,auStack_30,param_3,0x8001082);
        if ((uVar2 & 1) != 0) {
            uVar3 = 0;
            *(iStack_38 + 0x59) = param_2 & 1;
            goto code_r0x08013588;
        }
    }
    uVar3 = 0xffffffea;
code_r0x08013588:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_28) {
        return uVar3;
    }
    auVar6 = __stack_chk_fail(uVar3);
    *extraout_x18 = sym.lpass_cdc_rx_macro_get_data;
    iVar4 = lpass_cdc_get_device_ptr(*(auVar6._0_8_ + 0x18),1);
    *auVar6._8_8_ = iVar4;
    if (iVar4 == 0) {
        uVar3 = ___ratelimit(obj.lpass_cdc_rx_macro_get_data._rs,"lpass_cdc_rx_macro_get_data");
        if (uVar3 == 0) {
            return uVar3;
        }
        pcVar5 = "%s: null device for macro!\n";
    }
    else {
        iVar4 = *(iVar4 + 0x98);
        *param_3 = iVar4;
        if (iVar4 == 0) {
            uVar3 = ___ratelimit(obj.lpass_cdc_rx_macro_get_data._rs.2,"lpass_cdc_rx_macro_get_data");
            if (uVar3 == 0) {
                return uVar3;
            }
            pcVar5 = "%s: priv is null for macro!\n";
        }
        else {
            if (*(iVar4 + 0x138) != 0) {
                return 1;
            }
            uVar3 = ___ratelimit(obj.lpass_cdc_rx_macro_get_data._rs.4,"lpass_cdc_rx_macro_get_data");
            if (uVar3 == 0) {
                return uVar3;
            }
            pcVar5 = "%s: rx_priv component is not initialized!\n";
        }
    }
    _dev_err(*(auVar6._0_8_ + 0x18),pcVar5,param_4);
    return 0;
}


// ===== sym.init_module.cfi_jt @ 0x08013318 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register
              (reloc.lpass_cdc_rx_macro_probe.5c0fcf43324700bd174cccbefdf1d743.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.lpass_cdc_rx_macro_hw_params.5c0fcf43324700bd174cccbefdf1d743.cfi_jt @ 0x08013320 (size 8) =====

void sym.lpass_cdc_rx_macro_hw_params.5c0fcf43324700bd174cccbefdf1d743.cfi_jt
               (int64_t param_1,int64_t param_2,int64_t param_3)

{
    uint64_t uVar1;
    uint64_t uVar2;
    code *pcVar3;
    ushort uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    int iVar7;
    uint64_t uVar8;
    ulong uVar9;
    uchar *puVar10;
    uchar uVar11;
    uint64_t uVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar13;
    int64_t arg1;
    int64_t iVar14;
    uint32_t uVar15;
    ulong unaff_x30;
    uchar auVar16 [16];
    int64_t iStack_98;
    uchar auStack_90 [8];
    int64_t iStack_88;
    uchar auStack_80 [8];
    int64_t iStack_78;
    uchar auStack_70 [8];
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iStack_68 = *(iVar13 + 0x5e0);
    iStack_98 = 0;
    uVar8 = sym.lpass_cdc_rx_macro_get_data(*(param_3 + 0x58),auStack_90,&iStack_98,0x8002981);
    if ((uVar8 & 1) != 0) {
        if (*(param_1 + 0x3c) != 0) {
            uVar9 = 0;
            goto code_r0x080195e8;
        }
        iVar13 = *(param_3 + 0x58);
        iVar7 = *(param_2 + 0x128);
        iStack_88 = 0;
        uVar8 = sym.lpass_cdc_rx_macro_get_data(iVar13,auStack_80,&iStack_88,0x800190b);
        if ((uVar8 & 1) != 0) {
            if (iVar7 < 0x15888) {
                if (iVar7 < 32000) {
                    if (iVar7 == 8000) {
                        iVar13 = 0;
                    }
                    else {
                        if (iVar7 != 16000) {
code_r0x080195b0:
                            _dev_err(*(iVar13 + 0x18),"%s: Unsupported sample rate: %d\n",
                                     "lpass_cdc_rx_macro_set_interpolator_rate",iVar7);
                            goto code_r0x080195cc;
                        }
                        iVar13 = 1;
                    }
                }
                else if (iVar7 == 32000) {
                    iVar13 = 2;
                }
                else {
                    if (iVar7 == 0xac44) {
                        uVar11 = 1;
                        iVar13 = 7;
                        goto code_r0x0801926c;
                    }
                    if (iVar7 != 48000) goto code_r0x080195b0;
                    iVar13 = 3;
                }
code_r0x08019268:
                uVar11 = 0;
            }
            else {
                if (0x2edff < iVar7) {
                    if (iVar7 == 0x2ee00) {
                        iVar13 = 5;
                    }
                    else {
                        if (iVar7 == 0x56220) {
                            uVar11 = 1;
                            iVar13 = 10;
                            goto code_r0x0801926c;
                        }
                        if (iVar7 != 0x5dc00) goto code_r0x080195b0;
                        iVar13 = 6;
                    }
                    goto code_r0x08019268;
                }
                if (iVar7 == 0x15888) {
                    uVar11 = 1;
                    iVar13 = 8;
                }
                else {
                    if (iVar7 == 96000) {
                        iVar13 = 4;
                        goto code_r0x08019268;
                    }
                    if (iVar7 != 0x2b110) goto code_r0x080195b0;
                    uVar11 = 1;
                    iVar13 = 9;
                }
            }
code_r0x0801926c:
            iStack_78 = 0;
            *(iStack_88 + 0x52) = uVar11;
            arg1 = *(param_3 + 0x58);
            uVar8 = sym.lpass_cdc_rx_macro_get_data(arg1,auStack_70,&iStack_78,0x800299e);
            iVar14 = iStack_78;
            if ((uVar8 & 1) != 0) {
                if (8 < *(param_3 + 8)) goto code_r0x08019640;
                uVar11 = *(iVar13 * 8 + 0x8012b84);
                uVar12 = *(iStack_78 + *(param_3 + 8) * 8 + 0x140);
                uVar1 = (uVar12 & 0x2a) >> 1 | (uVar12 & 0x15) << 1;
                uVar2 = (uVar1 & 0x3333333333333333) << 2;
                uVar8 = 6;
                if ((uVar12 & 0x3f) != 0) {
                    uVar8 = LZCOUNT((uVar2 >> 4 | ((uVar1 & 0xcccccccccccccccc) >> 2 | uVar2 & 0xf0f0f0f0f0f0f0f) << 4)
                                    << 0x38);
                }
                uVar15 = uVar8;
                while (uVar15 < 6) {
                    uVar15 = uVar8 + 5;
                    uVar5 = snd_soc_component_read(arg1,0x1180);
                    uVar6 = snd_soc_component_read(arg1,0x1184);
                    if ((((uVar5 & 0xf) == uVar15) || ((uVar5 >> 4 & 0xf) == uVar15)) || ((uVar6 >> 4 & 0xf) == uVar15))
                    {
                        snd_soc_component_update_bits(arg1,0x1400,0xf,uVar11);
                    }
                    uVar5 = snd_soc_component_read(arg1,0x1188);
                    uVar6 = snd_soc_component_read(arg1,0x118c);
                    if ((((uVar5 & 0xf) == uVar15) || ((uVar5 >> 4 & 0xf) == uVar15)) || ((uVar6 >> 4 & 0xf) == uVar15))
                    {
                        snd_soc_component_update_bits(arg1,0x14c0,0xf,uVar11);
                    }
                    uVar5 = snd_soc_component_read(arg1,0x1190);
                    uVar6 = snd_soc_component_read(arg1,0x1194);
                    if ((((uVar5 & 0xf) == uVar15) || ((uVar5 >> 4 & 0xf) == uVar15)) || ((uVar6 >> 4 & 0xf) == uVar15))
                    {
                        snd_soc_component_update_bits(arg1,0x1580,0xf,uVar11);
                    }
                    if (8 < *(param_3 + 8)) goto code_r0x08019640;
                    if (4 < uVar8) break;
                    uVar15 = -1L << (uVar8 + 1 & 0x3f) & *(iVar14 + *(param_3 + 8) * 8 + 0x140);
                    uVar1 = (uVar15 & 0x2a) >> 1 | (uVar15 & 0x15) << 1;
                    uVar2 = (uVar1 & 0x3333333333333333) << 2;
                    uVar8 = 6;
                    if ((uVar15 & 0x3f) != 0) {
                        uVar8 = LZCOUNT((uVar2 >> 4 |
                                        ((uVar1 & 0xcccccccccccccccc) >> 2 | uVar2 & 0xf0f0f0f0f0f0f0f) << 4) << 0x38);
                    }
                    uVar15 = uVar8;
                }
                iVar14 = *(param_3 + 0x58);
                iStack_78 = 0;
                uVar8 = sym.lpass_cdc_rx_macro_get_data(iVar14,auStack_70,&iStack_78,0x80020a1);
                iVar13 = iStack_78;
                if ((uVar8 & 1) == 0) goto code_r0x080195cc;
                if (8 < *(param_3 + 8)) goto code_r0x08019640;
                uVar12 = *(iStack_78 + *(param_3 + 8) * 8 + 0x140);
                uVar1 = (uVar12 & 0x2a) >> 1 | (uVar12 & 0x15) << 1;
                uVar2 = (uVar1 & 0x3333333333333333) << 2;
                uVar8 = 6;
                if ((uVar12 & 0x3f) != 0) {
                    uVar8 = LZCOUNT((uVar2 >> 4 | ((uVar1 & 0xcccccccccccccccc) >> 2 | uVar2 & 0xf0f0f0f0f0f0f0f) << 4)
                                    << 0x38);
                }
                uVar15 = uVar8;
                while (uVar15 < 6) {
                    uVar15 = uVar8 + 1;
                    uVar5 = snd_soc_component_read(iVar14,0x1184);
                    if ((uVar5 & 0xf) == uVar15) {
                        snd_soc_component_update_bits(iVar14,0x1418,0xf,uVar11);
                    }
                    uVar5 = snd_soc_component_read(iVar14,0x118c);
                    if ((uVar5 & 0xf) == uVar15) {
                        snd_soc_component_update_bits(iVar14,0x14d8,0xf,uVar11);
                    }
                    uVar5 = snd_soc_component_read(iVar14,0x1194);
                    if ((uVar5 & 0xf) == uVar15) {
                        snd_soc_component_update_bits(iVar14,0x1598,0xf,uVar11);
                    }
                    if (8 < *(param_3 + 8)) goto code_r0x08019640;
                    if (4 < uVar8) break;
                    uVar15 = -1L << (uVar8 + 1 & 0x3f) & *(iVar13 + *(param_3 + 8) * 8 + 0x140);
                    uVar1 = (uVar15 & 0x2a) >> 1 | (uVar15 & 0x15) << 1;
                    uVar2 = (uVar1 & 0x3333333333333333) << 2;
                    uVar8 = 6;
                    if ((uVar15 & 0x3f) != 0) {
                        uVar8 = LZCOUNT((uVar2 >> 4 |
                                        ((uVar1 & 0xcccccccccccccccc) >> 2 | uVar2 & 0xf0f0f0f0f0f0f0f) << 4) << 0x38);
                    }
                    uVar15 = uVar8;
                }
                uVar15 = *(param_2 + 0x24);
                if (uVar15 == 0) {
                    uVar15 = *(param_2 + 0x28);
                    if (uVar15 != 0) {
                        uVar5 = 0x20;
                        goto code_r0x08019574;
                    }
                    uVar5 = 0;
                }
                else {
                    uVar5 = 0;
code_r0x08019574:
                    uVar15 = (uVar15 & 0xaaaaaaaa) >> 1 | (uVar15 & 0x55555555) << 1;
                    uVar15 = (uVar15 & 0xcccccccc) >> 2 | (uVar15 & 0x33333333) << 2;
                    uVar15 = (uVar15 & 0xf0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f) << 4;
                    uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
                    uVar5 = LZCOUNT(uVar15 >> 0x10 | uVar15 << 0x10) | uVar5;
                }
                uVar4 = snd_pcm_format_width(uVar5);
                if (7 < *(param_3 + 8)) {
code_r0x08019640:
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(0x5512,0x8019644);
                    (*pcVar3)();
                }
                uVar9 = 0;
                *(iStack_98 + *(param_3 + 8) * 2 + 0x1c0) = uVar4;
                goto code_r0x080195e8;
            }
        }
code_r0x080195cc:
        iVar7 = ___ratelimit(obj.lpass_cdc_rx_macro_hw_params._rs,"lpass_cdc_rx_macro_hw_params");
        if (iVar7 != 0) {
            _printk(0x8001ad2,"lpass_cdc_rx_macro_hw_params",*(param_2 + 0x128));
        }
    }
    uVar9 = 0xffffffea;
code_r0x080195e8:
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_68) {
        return;
    }
    auVar16 = __stack_chk_fail(uVar9);
    puVar10 = auVar16._0_8_;
    *extraout_x18 = sym.__cfi_check_fail;
    if (puVar10 != NULL) {
        switch(*puVar10) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            __ubsan_handle_cfi_check_fail_abort(puVar10,auVar16._8_8_,0);
            break;
        default:
            return;
        }
    }
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5502,0x80196a0);
    (*pcVar3)();
}


// ===== sym.lpass_cdc_rx_macro_get_channel_map.5c0fcf43324700bd174cccbefdf1d743.cfi_jt @ 0x08013328 (size 8) =====

void sym.lpass_cdc_rx_macro_get_channel_map.5c0fcf43324700bd174cccbefdf1d743.cfi_jt
               (int64_t param_1,uint32_t *param_2,uint32_t *param_3,uint *param_4,uint32_t *param_5)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    code *pcVar4;
    bool bVar5;
    bool bVar6;
    uint64_t uVar7;
    ulong uVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    uint32_t uVar11;
    ulong *in_x18;
    int64_t iVar12;
    ulong unaff_x30;
    int64_t iStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_48 = *(iVar12 + 0x5e0);
    iVar12 = *(param_1 + 0x58);
    iStack_58 = 0;
    uStack_50 = 0;
    uVar7 = sym.lpass_cdc_rx_macro_get_data(iVar12,&uStack_50,&iStack_58,0x80017d7);
    if ((uVar7 & 1) == 0) {
        uVar8 = 0xffffffea;
    }
    else {
        switch(*(param_1 + 8)) {
        case 1:
        case 2:
        case 3:
        case 4:
            uVar10 = *(iStack_58 + *(param_1 + 8) * 8 + 0x140);
            uVar2 = (uVar10 & 0x2a) >> 1 | (uVar10 & 0x15) << 1;
            uVar3 = (uVar2 & 0x3333333333333333) << 2;
            uVar7 = 6;
            if ((uVar10 & 0x3f) != 0) {
                uVar7 = LZCOUNT((uVar3 >> 4 | ((uVar2 & 0xcccccccccccccccc) >> 2 | uVar3 & 0xf0f0f0f0f0f0f0f) << 4) <<
                                0x38);
            }
            if (uVar7 < 6) {
                uVar9 = 1 << (uVar7 & 0x1f);
                if (((uVar7 < 5) && (uVar7 = -2L << (uVar7 & 0x3f) & uVar10 & 0x3f, uVar7 != 0)) &&
                   (uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1,
                   uVar2 = (uVar7 & 0x3333333333333333) << 2,
                   uVar11 = LZCOUNT((uVar2 >> 4 | ((uVar7 & 0xcccccccccccccccc) >> 2 | uVar2 & 0xf0f0f0f0f0f0f0f) << 4)
                                    << 0x38), uVar11 < 6)) {
                    uVar9 = 1 << (uVar11 & 0x1f) | uVar9;
                }
            }
            else {
                uVar9 = 0;
            }
            if ((uVar9 & 0xc) != 0) {
                uVar9 = uVar9 >> 2;
            }
            if ((uVar9 & 0x30) != 0) {
                uVar9 = 1;
            }
            *param_5 = uVar9;
            if (7 < *(param_1 + 8)) goto code_r0x080190a0;
            uVar8 = 0;
            *param_4 = *(iStack_58 + *(param_1 + 8) * 8 + 0x180);
            break;
        case 5:
            uVar7 = snd_soc_component_read(iVar12,0x1198);
            bVar5 = (uVar7 & 0xf0) != 0;
            uVar9 = 1;
            if (bVar5) {
                uVar9 = 2;
            }
            bVar6 = (uVar7 & 0xf) != 0;
            uVar11 = bVar5;
            if (bVar6) {
                uVar11 = bVar5 | 2;
            }
            uVar1 = bVar5;
            if (bVar6) {
                uVar1 = uVar9;
            }
            uVar7 = snd_soc_component_read(iVar12,0x119c);
            if ((uVar7 & 0xf) != 0) {
                uVar1 = uVar1 + 1;
                uVar11 = uVar11 | 4;
            }
            uVar8 = 0;
            *param_3 = uVar11;
            *param_2 = uVar1;
            break;
        case 6:
        case 7:
            uVar8 = 0;
            *param_5 = 1;
            *param_4 = 1;
            break;
        default:
            uVar8 = ___ratelimit(obj.lpass_cdc_rx_macro_get_channel_map._rs,"lpass_cdc_rx_macro_get_channel_map");
            if (uVar8 != 0) {
                _dev_err(uStack_50,"%s: Invalid AIF\n","lpass_cdc_rx_macro_get_channel_map");
                uVar8 = 0;
            }
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_48) {
        return;
    }
    __stack_chk_fail(uVar8);
code_r0x080190a0:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x80190a4);
    (*pcVar4)();
}


// ===== sym.lpass_cdc_rx_macro_set_port_map.5c0fcf43324700bd174cccbefdf1d743.cfi_jt @ 0x08013330 (size 8) =====

ulong sym.lpass_cdc_rx_macro_set_port_map.5c0fcf43324700bd174cccbefdf1d743.cfi_jt
                (int64_t param_1,uint param_2,uint param_3,ulong param_4)

{
    bool bVar1;
    uint32_t uVar2;
    int iVar3;
    uint32_t uVar4;
    uint uVar5;
    uint uVar6;
    uint64_t uVar7;
    ulong uVar8;
    int64_t iVar9;
    int iVar10;
    uchar *arg3;
    uint uVar11;
    uint uVar12;
    uint uVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar14;
    ulong unaff_x30;
    uchar auStack_a8 [8];
    ulong uStack_a0;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    uint uStack_58;
    uint uStack_54;
    ulong uStack_50;
    int64_t iStack_48;
    uchar auStack_40 [8];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iStack_38 = *(iVar14 + 0x5e0);
    iStack_48 = 0;
    uVar7 = sym.lpass_cdc_rx_macro_get_data(param_1,auStack_40,&iStack_48,0x80026d5);
    if ((uVar7 & 1) == 0) {
        uVar8 = 0xffffffea;
    }
    else {
        uStack_58 = param_3;
        uStack_54 = param_2;
        uStack_50 = param_4;
        if (*(iStack_48 + 0xc0) == NULL) {
            uVar8 = 0;
        }
        else {
            uVar8 = swrm_wcd_notify(**(iStack_48 + 0xc0),9,&uStack_58);
        }
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_38) {
        return uVar8;
    }
    iVar9 = __stack_chk_fail(uVar8);
    *extraout_x18 = sym.lpass_cdc_rx_macro_enable_echo;
    pcStack_88 = sym.lpass_cdc_rx_macro_enable_echo;
    iVar14 = sp_el0;
    iStack_98 = *(iVar14 + 0x5e0);
    arg3 = auStack_a8;
    uStack_a0 = 0;
    iVar14 = *(iVar9 + 0x28) + -0xd0;
    puStack_90 = &stack0xffffffffffffffd0;
    uVar7 = sym.lpass_cdc_rx_macro_get_data(iVar14,&uStack_a0,arg3,0x800231e);
    iVar10 = arg3;
    if ((uVar7 & 1) != 0) {
        uVar2 = snd_soc_component_read(iVar14,0x1198);
        uVar8 = *(iVar9 + 8);
        iVar3 = strcmp(uVar8,"RX MIX TX0 MUX");
        if (iVar3 == 0) {
            uVar2 = uVar2 >> 4;
code_r0x08015170:
            uVar2 = (uVar2 & 0xf) - 1;
        }
        else {
            iVar3 = strcmp(uVar8,"RX MIX TX1 MUX");
            if (iVar3 == 0) goto code_r0x08015170;
            uVar2 = 0;
        }
        uVar4 = snd_soc_component_read(iVar14,0x119c);
        iVar3 = strcmp(*(iVar9 + 8),"RX MIX TX2 MUX");
        uVar4 = (uVar4 & 0xf) - 1;
        if (iVar3 != 0) {
            uVar4 = uVar2;
        }
        if (uVar4 < 3) {
            snd_soc_component_update_bits(iVar14,uVar4 * 0x40 + 0x1c00 & 0xffc0,1,1);
            iVar10 = 0x1e;
            snd_soc_component_update_bits(iVar14,uVar4 * 0x40 + 0x1c04 & 0xfffc,0x1e,8);
            uVar8 = 0;
            goto code_r0x0801520c;
        }
        iVar3 = ___ratelimit(obj.lpass_cdc_rx_macro_enable_echo._rs,"lpass_cdc_rx_macro_enable_echo");
        if (iVar3 != 0) {
            iVar10 = 0x800231e;
            _dev_err(uStack_a0,"%s: EC mix control not set correctly\n");
            uVar8 = 0xffffffea;
            goto code_r0x0801520c;
        }
    }
    uVar8 = 0xffffffea;
code_r0x0801520c:
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) != iStack_98) {
        iVar14 = __stack_chk_fail(uVar8);
        *extraout_x18_00 = sym.lpass_cdc_rx_macro_set_iir_gain;
        if ((iVar10 == 4) || (iVar10 == 2)) {
            iVar9 = *(iVar14 + 0x28) + -0xd0;
            iVar14 = strnstr(*(iVar14 + 8),"IIR0",5);
            bVar1 = iVar14 != 0;
            uVar6 = 0x1a84;
            if (bVar1) {
                uVar6 = 0x1a04;
            }
            uVar12 = 0x1a88;
            if (bVar1) {
                uVar12 = 0x1a08;
            }
            uVar11 = 0x1a8c;
            if (bVar1) {
                uVar11 = 0x1a0c;
            }
            uVar13 = 0x1a90;
            if (bVar1) {
                uVar13 = 0x1a10;
            }
            uVar5 = snd_soc_component_read(iVar9,uVar6);
            snd_soc_component_write(iVar9,uVar6,uVar5);
            uVar6 = snd_soc_component_read(iVar9,uVar12);
            snd_soc_component_write(iVar9,uVar12,uVar6);
            uVar6 = snd_soc_component_read(iVar9,uVar11);
            snd_soc_component_write(iVar9,uVar11,uVar6);
            uVar6 = snd_soc_component_read(iVar9,uVar13);
            snd_soc_component_write(iVar9,uVar13,uVar6);
        }
        return 0;
    }
    return uVar8;
}


// ===== sym.lpass_cdc_rx_macro_event_handler.5c0fcf43324700bd174cccbefdf1d743.cfi_jt @ 0x08013338 (size 8) =====

int sym.lpass_cdc_rx_macro_event_handler.5c0fcf43324700bd174cccbefdf1d743.cfi_jt
              (int64_t param_1,ushort param_2,uint32_t param_3)

{
    uint8_t uVar1;
    int64_t *piVar2;
    code *pcVar3;
    bool bVar4;
    uchar uVar5;
    uint8_t uVar6;
    uint uVar7;
    int iVar8;
    int iVar9;
    uint64_t uVar10;
    ulong uVar11;
    uint32_t uVar12;
    code cVar13;
    uint64_t uVar14;
    ulong *in_x18;
    int64_t iVar15;
    ulong unaff_x30;
    int64_t *piStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar15 = sp_el0;
    iStack_38 = *(iVar15 + 0x5e0);
    piStack_48 = NULL;
    iStack_40 = 0;
    uVar10 = sym.lpass_cdc_rx_macro_get_data(param_1,&iStack_40,&piStack_48,0x8001600);
    iVar15 = iStack_40;
    piVar2 = piStack_48;
    if ((uVar10 & 1) == 0) {
        iVar8 = -0x16;
        goto code_r0x08014ea4;
    }
    iVar8 = 0;
    switch(param_2) {
    case 1:
        bVar4 = (param_3 & 0xffff) != 0;
        iVar8 = (param_3 >> 0x10) * 0xc0;
        snd_soc_component_update_bits(param_1,iVar8 + 0x1400U & 0xffc0,0x10,bVar4 << 4);
        uVar12 = iVar8 + 0x1418U & 0xfff8;
        cVar13 = 0x10;
        param_3 = bVar4 << 4;
        goto code_r0x08014e98;
    case 2:
        _segment.ehdr = obj.imped_table;
        snd_soc_component_update_bits(param_1,0x1414,0xff,0);
        snd_soc_component_update_bits(param_1,*(_segment.ehdr + 4),_segment.ehdr[6],0);
        snd_soc_component_update_bits(param_1,*(_segment.ehdr + 8),_segment.ehdr[10],0);
        snd_soc_component_update_bits(param_1,*(_segment.ehdr + 0xc),_segment.ehdr[0xe],0);
        snd_soc_component_update_bits(param_1,*(_segment.ehdr + 0x10),_segment.ehdr[0x12],0);
        param_3 = 0;
        uVar12 = *(_segment.ehdr + 0x14);
        cVar13 = _segment.ehdr[0x16];
        goto code_r0x08014e98;
    case 3:
        _segment.ehdr = obj.imped_table;
        if (param_3 < 4) {
code_r0x08014b80:
            iVar15 = 0;
        }
        else {
            if (0xc < param_3) break;
            if (param_3 < 5) goto code_r0x08014b80;
            if (param_3 - 5 < 7) {
                iVar15 = (param_3 - 5) + 1;
            }
            else {
                iVar15 = 8;
            }
        }
        uVar10 = *(iVar15 * 8 + 0x8012cb4);
        uVar14 = uVar10 * 0x18;
        if (((0xd8 < uVar14) || (0xd8 < (uVar14 | 2))) || (0xd8 < (uVar14 | 3))) goto code_r0x08015010;
        iVar15 = uVar10 * 0x18;
        snd_soc_component_update_bits
                  (param_1,*(obj.imped_table + uVar10 * 0x18),*(iVar15 + 0x8012bda),*(iVar15 + 0x8012bdb));
        snd_soc_component_update_bits
                  (param_1,*(_segment.ehdr + iVar15 + 4),_segment.ehdr[iVar15 + 6],_segment.ehdr[iVar15 + 7]);
        snd_soc_component_update_bits
                  (param_1,*(_segment.ehdr + iVar15 + 8),_segment.ehdr[iVar15 + 10],_segment.ehdr[iVar15 + 0xb]);
        snd_soc_component_update_bits
                  (param_1,*(_segment.ehdr + iVar15 + 0xc),_segment.ehdr[iVar15 + 0xe],_segment.ehdr[iVar15 + 0xf]);
        snd_soc_component_update_bits
                  (param_1,*(_segment.ehdr + iVar15 + 0x10),_segment.ehdr[iVar15 + 0x12],_segment.ehdr[iVar15 + 0x13]
                  );
        uVar12 = *(_segment.ehdr + iVar15 + 0x14);
        cVar13 = _segment.ehdr[iVar15 + 0x16];
        param_3 = _segment.ehdr[iVar15 + 0x17];
        goto code_r0x08014e98;
    case 4:
        __trace_bprintk(0x8014c70,*0x8019000,"lpass_cdc_rx_macro_event_handler");
        *(piStack_48 + 0x5a) = 0;
        if (piStack_48[0x18] != NULL) {
            swrm_wcd_notify(*piStack_48[0x18],6,0);
        }
        iVar15 = iStack_40;
        if (((*(iStack_40 + 0x200) & 7) == 0) && (*(iStack_40 + 0x20c) == 2)) break;
        iVar8 = lpass_cdc_runtime_suspend(iStack_40);
        if (iVar8 == 0) {
            __pm_runtime_disable(iVar15,1);
            __pm_runtime_set_status(iVar15,2);
            pm_runtime_enable(iVar15);
        }
        goto code_r0x08014ea4;
    case 5:
        __trace_bprintk(0x8014d00,*0x8019000,"lpass_cdc_rx_macro_event_handler");
        *(piStack_48 + 0x5a) = 1;
        *(piStack_48 + 0x45) = 1;
        if (piStack_48[0x18] != NULL) {
            swrm_wcd_notify(*piStack_48[0x18],7,0);
        }
        break;
    default:
        goto code_r0x08014ea4;
    case 7:
        lpass_cdc_rsc_clk_reset(iStack_40,1);
        lpass_cdc_rsc_clk_reset(iVar15,5);
        break;
    case 9:
        if (param_3 >> 0x10 != 2) {
            uVar12 = (param_3 >> 0x10) * 0x60 + 0x1800 & 0xffe0;
            uVar7 = snd_soc_component_read(param_1,uVar12);
            snd_soc_component_write(param_1,uVar12,uVar7);
        }
        break;
    case 0xc:
        *(piStack_48 + 0x5b) = 1;
        if (piStack_48 == NULL) {
            iVar8 = ___ratelimit(obj.lpass_cdc_rx_macro_core_vote._rs,"lpass_cdc_rx_macro_core_vote");
            if (iVar8 == 0) {
                iVar8 = -0x16;
            }
            else {
                _printk(0x8001934,"lpass_cdc_rx_macro_core_vote");
                iVar8 = -0x16;
            }
        }
        else {
            __pm_runtime_resume(*piStack_48,4);
            uVar10 = lpass_cdc_check_core_votes(*piVar2);
            if ((uVar10 & 1) != 0) {
                iVar8 = lpass_cdc_clk_rsc_request_clock(*piVar2,*(piVar2 + 0x92a),1,1);
                if (iVar8 < 0) {
                    iVar9 = ___ratelimit(obj.lpass_cdc_rx_macro_event_handler._rs.350,
                                         "lpass_cdc_rx_macro_event_handler");
                    if (iVar9 != 0) {
                        _dev_err(*piVar2,"%s, failed to enable clk, ret:%d\n","lpass_cdc_rx_macro_event_handler",
                                 iVar8);
                    }
                }
                else {
                    lpass_cdc_clk_rsc_request_clock(*piVar2,*(piVar2 + 0x92a),1,0);
                }
                __pm_runtime_suspend(*piVar2,0xd);
                iVar15 = *piVar2;
                uVar11 = ktime_get_mono_fast_ns();
                *(iVar15 + 0x218) = uVar11;
                goto code_r0x08014ea4;
            }
            iVar8 = -0x20a;
        }
        iVar9 = ___ratelimit(obj.lpass_cdc_rx_macro_event_handler._rs,"lpass_cdc_rx_macro_event_handler");
        if (iVar9 != 0) {
            _dev_err(*piVar2,"%s: rx request core vote failed\n","lpass_cdc_rx_macro_event_handler");
        }
        goto code_r0x08014ea4;
    case 0xd:
        uVar5 = snd_soc_component_read(param_1,0x1414);
        piVar2 = piStack_48;
        *(piStack_48 + 0x127) = uVar5;
        uVar6 = snd_soc_component_read(param_1,0x14d4);
        uVar1 = *(piVar2 + 0x127);
        *(piVar2 + 0x939) = uVar6;
        if (param_3 == 0) {
            if ((uVar1 + 6 & 0xff) < 0x29) {
                snd_soc_component_update_bits(param_1,0x1414,0xff,uVar1 + 6);
                uVar6 = *(piVar2 + 0x939);
            }
            if (uVar6 + 6 < 0x29) {
                param_3 = uVar6 + 6;
                goto code_r0x08014f3c;
            }
        }
        else {
            if (uVar1 < 0x29) {
                snd_soc_component_update_bits(param_1,0x1414,0xff,uVar1 - 6);
                uVar6 = *(piVar2 + 0x939);
            }
            if (uVar6 < 0x29) {
                param_3 = uVar6 - 6;
code_r0x08014f3c:
                uVar12 = 0x14d4;
                cVar13 = 0xff;
                goto code_r0x08014e98;
            }
        }
        break;
    case 0xe:
        uVar12 = 0x1404;
        goto code_r0x08014e90;
    case 0xf:
        uVar12 = 0x14c4;
code_r0x08014e90:
        cVar13 = 0x4;
code_r0x08014e98:
        snd_soc_component_update_bits(param_1,uVar12,cVar13,param_3);
    }
    iVar8 = 0;
code_r0x08014ea4:
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_38) {
        return iVar8;
    }
    __stack_chk_fail();
code_r0x08015010:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(1,0x8015014);
    (*pcVar3)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08013340 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.lpass_cdc_rx_macro_probe.5c0fcf43324700bd174cccbefdf1d743.cfi_jt);
    return;
}


// ===== sym.pm_runtime_force_resume.cfi_jt @ 0x08013348 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.pm_runtime_force_resume.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.lpass_cdc_runtime_resume.cfi_jt @ 0x08013350 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.lpass_cdc_runtime_resume.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.lpass_cdc_runtime_suspend.cfi_jt @ 0x08013358 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.lpass_cdc_runtime_suspend.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.pm_runtime_force_suspend.cfi_jt @ 0x08013360 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.pm_runtime_force_suspend.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.lpass_cdc_rx_macro_probe.5c0fcf43324700bd174cccbefdf1d743.cfi_jt @ 0x08013368 (size 8) =====

int sym.lpass_cdc_rx_macro_probe.5c0fcf43324700bd174cccbefdf1d743.cfi_jt(int64_t param_1)

{
    int iVar1;
    uint64_t uVar2;
    int64_t *piVar3;
    ulong uVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    char *pcVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    int iStack_c8;
    uint uStack_c4;
    ulong uStack_c0;
    code *pcStack_b8;
    code *pcStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    code *pcStack_98;
    ulong uStack_90;
    code *pcStack_88;
    ulong uStack_80;
    code *pcStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iVar8 = param_1 + 0x10;
    iStack_48 = *(iVar5 + 0x5e0);
    iStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    pcStack_78 = NULL;
    uStack_70 = 0;
    pcStack_88 = NULL;
    uStack_80 = 0;
    pcStack_98 = NULL;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    pcStack_b8 = NULL;
    pcStack_b0 = NULL;
    uStack_c0 = 0;
    iStack_c8 = 1;
    uStack_c4 = 0;
    uVar2 = lpass_cdc_is_va_macro_registered(iVar8);
    if ((uVar2 & 1) == 0) {
        pcVar9 = "%s: va-macro not registered yet, defer\n";
code_r0x08013a38:
        _dev_err(iVar8,pcVar9,"lpass_cdc_rx_macro_probe");
        iVar1 = -0x205;
    }
    else {
        piVar3 = devm_kmalloc(iVar8,0x940,0xdc0);
        if (piVar3 != NULL) {
            uVar4 = *(param_1 + 0x300);
            *(piVar3 + 0x5b) = 1;
            *piVar3 = iVar8;
            iVar1 = of_property_read_variable_u32_array(uVar4,0x80022b1,&uStack_c0 + 4,1,0);
            if ((iVar1 < 0) ||
               (iVar1 = of_property_read_variable_u32_array
                                  (*(param_1 + 0x300),"qcom,rx_mclk_mode_muxsel",&uStack_c0,1,0), iVar1 < 0)) {
                _dev_err(iVar8,"%s: could not find %s entry in dt\n","lpass_cdc_rx_macro_probe",0x80022b1);
                goto code_r0x08013a78;
            }
            iVar1 = of_property_read_variable_u32_array(*(param_1 + 0x300),"qcom,default-clk-id",&uStack_c4,1,0);
            if (iVar1 < 0) {
                _dev_err(iVar8,"%s: could not find %s entry in dt\n","lpass_cdc_rx_macro_probe","qcom,default-clk-id"
                        );
                uStack_c4 = 1;
            }
            iVar5 = of_find_property(*(param_1 + 0x300),"qcom,is-used-swr-gpio",0);
            if ((iVar5 != 0) &&
               (iVar1 = of_property_read_variable_u32_array
                                  (*(param_1 + 0x300),"qcom,is-used-swr-gpio",&iStack_c8,1,0), iVar1 < 0)) {
                _dev_err(iVar8,"%s: error reading %s in dt\n","lpass_cdc_rx_macro_probe","qcom,is-used-swr-gpio");
                iStack_c8 = 1;
            }
            iVar5 = of_parse_phandle(*(param_1 + 0x300),"qcom,rx-swr-gpios",0);
            piVar3[0x26] = iVar5;
            if ((iVar5 == 0) && (iStack_c8 != 0)) {
                _dev_err(iVar8,"%s: swr_gpios handle not provided!\n","lpass_cdc_rx_macro_probe");
                iVar1 = -0x16;
                goto code_r0x08013a78;
            }
            iVar1 = msm_cdc_pinctrl_get_state();
            if ((iVar1 < 0) && (iStack_c8 != 0)) {
                pcVar9 = "%s: failed to get swr pin state\n";
                goto code_r0x08013a38;
            }
            msm_cdc_pinctrl_set_wakeup_capable(piVar3[0x26],0);
            iVar5 = devm_ioremap(iVar8,uStack_c0._4_4_,0x1000);
            if (iVar5 == 0) {
                pcVar9 = "%s: ioremap failed\n";
            }
            else {
                piVar3[0x3a] = iVar5;
                iVar6 = devm_ioremap(iVar8,uStack_c0 & 0xffffffff,4);
                if (iVar6 != 0) {
                    piVar3[0x3b] = iVar6;
                    piVar3[0x1f] = 0;
                    piVar3[0x20] = 0xfffffffe0;
                    *(piVar3 + 0x45) = 1;
                    piVar3[0x21] = piVar3 + 0x21;
                    piVar3[0x22] = piVar3 + 0x21;
                    piVar3[0x23] = sym.lpass_cdc_rx_macro_add_child_devices.5c0fcf43324700bd174cccbefdf1d743.cfi_jt;
                    piVar3[0x19] = piVar3;
                    piVar3[0x1a] = 0;
                    piVar3[0x1b] = 0;
                    piVar3[0x1c] = 0;
                    piVar3[0x1d] = sym.rx_swrm_clock.5c0fcf43324700bd174cccbefdf1d743.cfi_jt;
                    piVar3[0x1e] = sym.lpass_cdc_rx_macro_core_vote.5c0fcf43324700bd174cccbefdf1d743.cfi_jt;
                    *(piVar3 + 0x125) = uStack_c4;
                    *(piVar3 + 0x92a) = uStack_c4;
                    uVar7 = devm_clk_get(iVar8,"rx_mclk2_2x_clk");
                    uVar2 = 0;
                    if (uVar7 < 0xfffffffffffff001) {
                        uVar2 = uVar7;
                    }
                    *(piVar3 + 0x124) = 1;
                    piVar3[0x126] = uVar2;
                    *(param_1 + 0xa8) = piVar3;
                    __mutex_init(piVar3 + 0xc,"&rx_priv->mclk_lock",obj.lpass_cdc_rx_set_fir_capability._rs);
                    __mutex_init(piVar3 + 0x12,"&rx_priv->swr_clk_lock",obj.lpass_cdc_rx_set_fir_capability._rs);
                    uStack_68 = 0;
                    uStack_60 = 0;
                    pcStack_b8 = sym.lpass_cdc_rx_macro_init.5c0fcf43324700bd174cccbefdf1d743.cfi_jt;
                    pcStack_b0 = sym.lpass_cdc_rx_macro_deinit.5c0fcf43324700bd174cccbefdf1d743.cfi_jt;
                    uStack_a0 = 0;
                    uStack_50 = 0;
                    pcStack_98 = obj.lpass_cdc_rx_macro_dai;
                    uStack_90 = 0;
                    uStack_a8 = 7;
                    pcStack_88 = sym.lpass_cdc_rx_macro_event_handler.5c0fcf43324700bd174cccbefdf1d743.cfi_jt;
                    uStack_80 = 0;
                    pcStack_78 = sym.lpass_cdc_rx_macro_set_port_map.5c0fcf43324700bd174cccbefdf1d743.cfi_jt;
                    uStack_70 = 0;
                    iStack_58 = iVar5;
                    iVar1 = lpass_cdc_register_macro(iVar8,1,&pcStack_b8);
                    if (iVar1 == 0) {
                        pm_runtime_set_autosuspend_delay(iVar8,0x32);
                        __pm_runtime_use_autosuspend(iVar8,1);
                        __pm_runtime_set_status(iVar8,2);
                        *(param_1 + 0x210) = *(param_1 + 0x210) | 0x100;
                        pm_runtime_enable(iVar8);
                        queue_work_on(0x20,_pm_runtime_force_resume,piVar3 + 0x20);
                    }
                    else {
                        _dev_err(iVar8,"%s: register macro failed\n","lpass_cdc_rx_macro_probe");
                    }
                    goto code_r0x08013a78;
                }
                pcVar9 = "%s: ioremap failed for muxsel\n";
            }
            _dev_err(iVar8,pcVar9,"lpass_cdc_rx_macro_probe");
        }
        iVar1 = -0xc;
    }
code_r0x08013a78:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_48) {
        return iVar1;
    }
    iVar8 = __stack_chk_fail();
    *extraout_x18 = sym.lpass_cdc_rx_macro_remove;
    iVar5 = *(iVar8 + 0xa8);
    if (iVar5 == 0) {
        iVar1 = -0x16;
    }
    else {
        iVar8 = iVar8 + 0x10;
        if (0 < *(iVar5 + 0x918)) {
            platform_device_unregister(*(iVar5 + 0x900));
            if (1 < *(iVar5 + 0x918)) {
                platform_device_unregister(*(iVar5 + 0x908));
                if (2 < *(iVar5 + 0x918)) {
                    platform_device_unregister(*(iVar5 + 0x910));
                }
            }
        }
        __pm_runtime_disable(iVar8,1);
        __pm_runtime_set_status(iVar8,2);
        lpass_cdc_unregister_macro(iVar8,1);
        kfree(*(iVar5 + 0xc0));
        iVar1 = 0;
    }
    return iVar1;
}


// ===== sym.lpass_cdc_rx_macro_remove.5c0fcf43324700bd174cccbefdf1d743.cfi_jt @ 0x08013370 (size 8) =====

ulong sym.lpass_cdc_rx_macro_remove.5c0fcf43324700bd174cccbefdf1d743.cfi_jt(int64_t param_1)

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
        if (0 < *(iVar2 + 0x918)) {
            platform_device_unregister(*(iVar2 + 0x900));
            if (1 < *(iVar2 + 0x918)) {
                platform_device_unregister(*(iVar2 + 0x908));
                if (2 < *(iVar2 + 0x918)) {
                    platform_device_unregister(*(iVar2 + 0x910));
                }
            }
        }
        __pm_runtime_disable(param_1,1);
        __pm_runtime_set_status(param_1,2);
        lpass_cdc_unregister_macro(param_1,1);
        kfree(*(iVar2 + 0xc0));
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.lpass_cdc_rx_macro_add_child_devices.5c0fcf43324700bd174cccbefdf1d743.cfi_jt @ 0x08013378 (size 8) =====

uint64_t sym.lpass_cdc_rx_macro_add_child_devices.5c0fcf43324700bd174cccbefdf1d743.cfi_jt(int64_t param_1)

{
    int iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    ulong *puVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t *piVar8;
    ulong uVar9;
    char *pcVar10;
    ulong in_x7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *unaff_x19;
    int64_t unaff_x20;
    int64_t unaff_x21;
    char *unaff_x22;
    char *pcVar11;
    uint64_t uVar12;
    uint16_t uVar13;
    ulong unaff_x30;
    uchar auVar14 [16];
    uchar *puVar15;
    code *pcVar16;
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
    puVar15 = &stack0xffffffffffffffa0;
    iVar3 = sp_el0;
    iStack_68 = *(iVar3 + 0x5e0);
    piVar8 = param_1 + -0x100;
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
    if (piVar8 == NULL) {
        uVar9 = 0x8001ce0;
code_r0x08013d24:
        uVar7 = _printk(uVar9,"lpass_cdc_rx_macro_add_child_devices");
    }
    else {
        iVar3 = *piVar8;
        if (iVar3 == 0) {
            uVar9 = 0x80019cf;
            goto code_r0x08013d24;
        }
        if (*(iVar3 + 0x2f0) == 0) {
            pcVar11 = "%s: DT node for RX dev does not exist\n";
code_r0x08013d3c:
            uVar7 = _dev_err(iVar3,pcVar11,"lpass_cdc_rx_macro_add_child_devices");
        }
        else {
            *(param_1 + 0x818) = 0;
            puVar4 = of_get_next_available_child(*(iVar3 + 0x2f0),0);
            uVar7 = 0;
            if (puVar4 != NULL) {
                uVar13 = 0;
                unaff_x20 = param_1 + -0x38;
                unaff_x22 = "rx_swr_master";
                pcVar11 = "rx_swr_master";
                unaff_x21 = 0;
                do {
                    iVar5 = strnstr(*puVar4,"rx_swr_master",0xd);
                    pcVar10 = "rx_swr_ctrl";
                    if (iVar5 == 0) {
                        pcVar10 = *puVar4;
                    }
                    strlcpy(&uStack_b8,pcVar10,0x4f);
                    iVar6 = platform_device_alloc(&uStack_b8,0xffffffff);
                    iVar3 = *piVar8;
                    unaff_x19 = puVar4;
                    if (iVar6 == 0) {
                        pcVar11 = "%s: pdev memory alloc failed\n";
                        goto code_r0x08013d3c;
                    }
                    *(iVar6 + 0x70) = iVar3;
                    *(iVar6 + 0x300) = puVar4;
                    iVar3 = unaff_x21;
                    if (iVar5 != 0) {
                        iVar1 = platform_device_add_data(iVar6,unaff_x20,0x38);
                        if (iVar1 == 0) {
                            uVar12 = uVar13;
                            iVar3 = krealloc(unaff_x21,uVar12 * 8 + 8,0xcc0);
                            uVar7 = 0;
                            if (iVar3 != 0) {
                                uVar13 = uVar13 + 1;
                                *(iVar3 + uVar12 * 8) = iVar6;
                                *(param_1 + -0x40) = iVar3;
                                goto code_r0x08013cc8;
                            }
                        }
                        else {
                            uVar7 = _dev_err(iVar6 + 0x10,"%s: cannot add plat data ctrl:%d\n",
                                             "lpass_cdc_rx_macro_add_child_devices",uVar13);
                        }
code_r0x08013d90:
                        unaff_x22 = pcVar11;
                        if (0 < *(param_1 + 0x818)) {
                            uVar7 = platform_device_put(*(param_1 + 0x800));
                            if (1 < *(param_1 + 0x818)) {
                                uVar7 = platform_device_put(*(param_1 + 0x808));
                                if ((2 < *(param_1 + 0x818)) &&
                                   (uVar7 = platform_device_put(*(param_1 + 0x810)), 3 < *(param_1 + 0x818))) {
code_r0x08013e14:
    //WARNING: Does not return
                                    pcVar16 = SoftwareBreakpoint(0x5512,0x8013e18);
                                    (*pcVar16)();
                                }
                            }
                        }
                        goto code_r0x08013dd8;
                    }
code_r0x08013cc8:
                    uVar7 = platform_device_add(iVar6);
                    unaff_x21 = iVar3;
                    if (uVar7 != 0) {
                        uVar7 = _dev_err(iVar6 + 0x10,"%s: Cannot add platform device\n",
                                         "lpass_cdc_rx_macro_add_child_devices");
                        goto code_r0x08013d90;
                    }
                    uVar2 = *(param_1 + 0x818);
                    if (2 < uVar2) goto code_r0x08013dd8;
                    *(param_1 + 0x818) = uVar2 + 1;
                    if (2 < uVar2) goto code_r0x08013e14;
                    iVar3 = *piVar8;
                    *(param_1 + 0x800 + uVar2 * 8) = iVar6;
                    puVar4 = of_get_next_available_child(*(iVar3 + 0x2f0),puVar4);
                } while (puVar4 != NULL);
                uVar7 = 0;
                unaff_x19 = puVar4;
            }
        }
    }
code_r0x08013dd8:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_68) {
        return uVar7;
    }
    auVar14 = __stack_chk_fail();
    piVar8 = auVar14._0_8_;
    *extraout_x18 = sym.rx_swrm_clock;
    pcVar16 = sym.rx_swrm_clock;
    iVar3 = dev_get_regmap(*(*piVar8 + 0x60),0);
    if (iVar3 == 0) {
        iVar1 = ___ratelimit(obj.rx_swrm_clock._rs,"rx_swrm_clock");
        if (iVar1 == 0) {
            uVar2 = 0xffffffea;
        }
        else {
            _dev_err(*piVar8,"%s: regmap is NULL\n","rx_swrm_clock");
            uVar2 = 0xffffffea;
        }
        goto code_r0x08014044;
    }
    mutex_lock(piVar8 + 0x12);
    pcVar11 = "enable";
    if ((auVar14._8_8_ & 1) == 0) {
        pcVar11 = "disable";
    }
    __trace_bprintk(0x8013e60,*0x8019000,"rx_swrm_clock",pcVar11);
    if ((auVar14._8_8_ & 1) == 0) {
        if (piVar8[8] < 1) {
            iVar1 = ___ratelimit(obj.rx_swrm_clock._rs.41,"rx_swrm_clock");
            if (iVar1 != 0) {
                _dev_err(*piVar8,"%s: rx swrm clock users already reset\n","rx_swrm_clock");
            }
            uVar2 = 0;
            *(piVar8 + 8) = 0;
        }
        else {
            iVar1 = piVar8[8] + -1;
            *(piVar8 + 8) = iVar1;
            if (iVar1 == 0) {
                regmap_update_bits_base
                          (iVar3,0x1108,1,0,0,0,0,in_x7,puVar15,pcVar16,unaff_x22,unaff_x21,unaff_x20,
                           unaff_x19);
                sym.lpass_cdc_rx_macro_mclk_enable(piVar8,0,1);
                uVar2 = msm_cdc_pinctrl_select_sleep_state(piVar8[0x26]);
                if (uVar2 < 0) {
                    iVar1 = ___ratelimit(obj.rx_swrm_clock._rs.43,"rx_swrm_clock");
                    if (iVar1 != 0) {
                        _dev_err(*piVar8,"%s: rx swr pinctrl disable failed\n","rx_swrm_clock");
                    }
                    goto code_r0x0801403c;
                }
                iVar1 = piVar8[8];
            }
            else {
                uVar2 = 0;
            }
code_r0x08014020:
            __trace_bprintk(0x801401c,*0x8019000,"rx_swrm_clock",iVar1);
        }
    }
    else {
        __pm_runtime_resume(*piVar8,4);
        if (piVar8[8] != 0) {
            uVar2 = 0;
code_r0x08013eb4:
            iVar3 = *piVar8;
            uVar9 = ktime_get_mono_fast_ns();
            *(iVar3 + 0x218) = uVar9;
            __pm_runtime_suspend(*piVar8,0xd);
            iVar1 = piVar8[8] + 1;
            *(piVar8 + 8) = iVar1;
            goto code_r0x08014020;
        }
        uVar2 = msm_cdc_pinctrl_select_active_state(piVar8[0x26]);
        if (uVar2 < 0) {
            iVar1 = ___ratelimit(obj.rx_swrm_clock._rs.37,"rx_swrm_clock");
            if (iVar1 != 0) {
                iVar3 = *piVar8;
                pcVar11 = "%s: rx swr pinctrl enable failed\n";
code_r0x08014144:
                _dev_err(iVar3,pcVar11,"rx_swrm_clock");
            }
        }
        else {
            uVar2 = sym.lpass_cdc_rx_macro_mclk_enable(piVar8,1,1);
            if (-1 < uVar2) {
                if (*(piVar8 + 0x45) != '\0') {
                    regmap_update_bits_base(iVar3,0x1108,2,2,0,0,0);
                }
                regmap_update_bits_base(iVar3,0x1108,1,1,0,0,0);
                if (*(piVar8 + 0x45) != '\0') {
                    regmap_update_bits_base(iVar3,0x1108,2,0,0,0,0);
                }
                *(piVar8 + 0x45) = 0;
                goto code_r0x08013eb4;
            }
            msm_cdc_pinctrl_select_sleep_state(piVar8[0x26]);
            iVar1 = ___ratelimit(obj.rx_swrm_clock._rs.39,"rx_swrm_clock");
            if (iVar1 != 0) {
                iVar3 = *piVar8;
                pcVar11 = "%s: rx request clock enable failed\n";
                goto code_r0x08014144;
            }
        }
        iVar3 = *piVar8;
        uVar9 = ktime_get_mono_fast_ns();
        *(iVar3 + 0x218) = uVar9;
        __pm_runtime_suspend(*piVar8,0xd);
    }
code_r0x0801403c:
    mutex_unlock(piVar8 + 0x12);
code_r0x08014044:
    return uVar2;
}


// ===== sym.rx_swrm_clock.5c0fcf43324700bd174cccbefdf1d743.cfi_jt @ 0x08013380 (size 8) =====

int sym.rx_swrm_clock.5c0fcf43324700bd174cccbefdf1d743.cfi_jt(int64_t *param_1,uint64_t param_2)

{
    int iVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    char *pcVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = dev_get_regmap(*(*param_1 + 0x60),0);
    if (iVar3 == 0) {
        iVar1 = ___ratelimit(obj.rx_swrm_clock._rs,"rx_swrm_clock");
        if (iVar1 == 0) {
            return -0x16;
        }
        _dev_err(*param_1,"%s: regmap is NULL\n","rx_swrm_clock");
        return -0x16;
    }
    mutex_lock(param_1 + 0x12);
    pcVar5 = "enable";
    if ((param_2 & 1) == 0) {
        pcVar5 = "disable";
    }
    __trace_bprintk(0x8013e60,*0x8019000,"rx_swrm_clock",pcVar5);
    if ((param_2 & 1) == 0) {
        if (param_1[8] < 1) {
            iVar1 = ___ratelimit(obj.rx_swrm_clock._rs.41,"rx_swrm_clock");
            if (iVar1 != 0) {
                _dev_err(*param_1,"%s: rx swrm clock users already reset\n","rx_swrm_clock");
            }
            iVar1 = 0;
            *(param_1 + 8) = 0;
            goto code_r0x0801403c;
        }
        iVar2 = param_1[8] + -1;
        *(param_1 + 8) = iVar2;
        if (iVar2 == 0) {
            regmap_update_bits_base(iVar3,0x1108,1,0,0,0,0);
            sym.lpass_cdc_rx_macro_mclk_enable(param_1,0,1);
            iVar1 = msm_cdc_pinctrl_select_sleep_state(param_1[0x26]);
            if (iVar1 < 0) {
                iVar2 = ___ratelimit(obj.rx_swrm_clock._rs.43,"rx_swrm_clock");
                if (iVar2 != 0) {
                    _dev_err(*param_1,"%s: rx swr pinctrl disable failed\n","rx_swrm_clock");
                }
                goto code_r0x0801403c;
            }
            iVar2 = param_1[8];
        }
        else {
            iVar1 = 0;
        }
    }
    else {
        __pm_runtime_resume(*param_1,4);
        if (param_1[8] == 0) {
            iVar1 = msm_cdc_pinctrl_select_active_state(param_1[0x26]);
            if (iVar1 < 0) {
                iVar2 = ___ratelimit(obj.rx_swrm_clock._rs.37,"rx_swrm_clock");
                if (iVar2 != 0) {
                    iVar3 = *param_1;
                    pcVar5 = "%s: rx swr pinctrl enable failed\n";
code_r0x08014144:
                    _dev_err(iVar3,pcVar5,"rx_swrm_clock");
                }
            }
            else {
                iVar1 = sym.lpass_cdc_rx_macro_mclk_enable(param_1,1,1);
                if (-1 < iVar1) {
                    if (*(param_1 + 0x45) != '\0') {
                        regmap_update_bits_base(iVar3,0x1108,2,2,0,0,0);
                    }
                    regmap_update_bits_base(iVar3,0x1108,1,1,0,0,0);
                    if (*(param_1 + 0x45) != '\0') {
                        regmap_update_bits_base(iVar3,0x1108,2,0,0,0,0);
                    }
                    *(param_1 + 0x45) = 0;
                    goto code_r0x08013eb4;
                }
                msm_cdc_pinctrl_select_sleep_state(param_1[0x26]);
                iVar2 = ___ratelimit(obj.rx_swrm_clock._rs.39,"rx_swrm_clock");
                if (iVar2 != 0) {
                    iVar3 = *param_1;
                    pcVar5 = "%s: rx request clock enable failed\n";
                    goto code_r0x08014144;
                }
            }
            iVar3 = *param_1;
            uVar4 = ktime_get_mono_fast_ns();
            *(iVar3 + 0x218) = uVar4;
            __pm_runtime_suspend(*param_1,0xd);
            goto code_r0x0801403c;
        }
        iVar1 = 0;
code_r0x08013eb4:
        iVar3 = *param_1;
        uVar4 = ktime_get_mono_fast_ns();
        *(iVar3 + 0x218) = uVar4;
        __pm_runtime_suspend(*param_1,0xd);
        iVar2 = param_1[8] + 1;
        *(param_1 + 8) = iVar2;
    }
    __trace_bprintk(0x801401c,*0x8019000,"rx_swrm_clock",iVar2);
code_r0x0801403c:
    mutex_unlock(param_1 + 0x12);
    return iVar1;
}


// ===== sym.lpass_cdc_rx_macro_core_vote.5c0fcf43324700bd174cccbefdf1d743.cfi_jt @ 0x08013388 (size 8) =====

uint sym.lpass_cdc_rx_macro_core_vote.5c0fcf43324700bd174cccbefdf1d743.cfi_jt(int64_t *param_1,uint64_t param_2)

{
    int iVar1;
    uint64_t uVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == NULL) {
        iVar1 = ___ratelimit(obj.lpass_cdc_rx_macro_core_vote._rs,"lpass_cdc_rx_macro_core_vote");
        if (iVar1 != 0) {
            _printk(0x8001934,"lpass_cdc_rx_macro_core_vote");
            return 0xffffffea;
        }
    }
    else if ((*(param_1 + 0x5b) != '\0') || ((param_2 & 1) == 0)) {
        if ((param_2 & 1) == 0) {
            __pm_runtime_suspend(*param_1,0xd);
            iVar4 = *param_1;
            uVar3 = ktime_get_mono_fast_ns();
            *(iVar4 + 0x218) = uVar3;
            return 0;
        }
        __pm_runtime_resume(*param_1,4);
        uVar2 = lpass_cdc_check_core_votes(*param_1);
        if ((uVar2 & 1) != 0) {
            return 0;
        }
        return 0xfffffdf6;
    }
    return 0xffffffea;
}


// ===== sym.lpass_cdc_rx_macro_deinit.5c0fcf43324700bd174cccbefdf1d743.cfi_jt @ 0x08013390 (size 8) =====

int sym.lpass_cdc_rx_macro_deinit.5c0fcf43324700bd174cccbefdf1d743.cfi_jt(int64_t param_1)

{
    uint8_t uVar1;
    int64_t *piVar2;
    code *pcVar3;
    bool bVar4;
    uchar uVar5;
    uint8_t uVar6;
    uint uVar7;
    int iVar8;
    int iVar9;
    uint64_t uVar10;
    int64_t arg1;
    ulong uVar11;
    uint32_t uVar12;
    code cVar13;
    int64_t *piVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar15;
    uint64_t uVar16;
    ulong unaff_x30;
    uchar auVar17 [12];
    int64_t *piStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    int64_t iStack_28;
    uchar auStack_20 [8];
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar15 = sp_el0;
    iStack_18 = *(iVar15 + 0x5e0);
    piVar14 = &iStack_28;
    iStack_28 = 0;
    uVar10 = sym.lpass_cdc_rx_macro_get_data(param_1,auStack_20,piVar14,0x8001170);
    if ((uVar10 & 1) == 0) {
        iVar8 = -0x16;
    }
    else {
        iVar8 = 0;
        *(iStack_28 + 0x138) = 0;
    }
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_18) {
        return iVar8;
    }
    auVar17 = __stack_chk_fail(iVar8);
    arg1 = auVar17._0_8_;
    *extraout_x18 = sym.lpass_cdc_rx_macro_event_handler;
    pcStack_58 = sym.lpass_cdc_rx_macro_event_handler;
    iVar15 = sp_el0;
    uVar16 = piVar14 & 0xffffffff;
    iStack_68 = *(iVar15 + 0x5e0);
    piStack_78 = NULL;
    iStack_70 = 0;
    puStack_60 = &stack0xfffffffffffffff0;
    uVar10 = sym.lpass_cdc_rx_macro_get_data(arg1,&iStack_70,&piStack_78,0x8001600);
    iVar15 = iStack_70;
    piVar2 = piStack_78;
    if ((uVar10 & 1) == 0) {
        iVar8 = -0x16;
        goto code_r0x08014ea4;
    }
    iVar8 = 0;
    uVar12 = piVar14;
    switch(auVar17._8_4_ & 0xffff) {
    case 1:
        bVar4 = (piVar14 & 0xffff) != 0;
        iVar8 = (uVar16 >> 0x10) * 0xc0;
        snd_soc_component_update_bits(arg1,iVar8 + 0x1400U & 0xffc0,0x10,bVar4 << 4);
        uVar12 = iVar8 + 0x1418U & 0xfff8;
        cVar13 = 0x10;
        uVar16 = bVar4 << 4;
        goto code_r0x08014e98;
    case 2:
        _segment.ehdr = obj.imped_table;
        snd_soc_component_update_bits(arg1,0x1414,0xff,0);
        snd_soc_component_update_bits(arg1,*(_segment.ehdr + 4),_segment.ehdr[6],0);
        snd_soc_component_update_bits(arg1,*(_segment.ehdr + 8),_segment.ehdr[10],0);
        snd_soc_component_update_bits(arg1,*(_segment.ehdr + 0xc),_segment.ehdr[0xe],0);
        snd_soc_component_update_bits(arg1,*(_segment.ehdr + 0x10),_segment.ehdr[0x12],0);
        uVar16 = 0;
        uVar12 = *(_segment.ehdr + 0x14);
        cVar13 = _segment.ehdr[0x16];
        goto code_r0x08014e98;
    case 3:
        _segment.ehdr = obj.imped_table;
        if (uVar12 < 4) {
code_r0x08014b80:
            iVar15 = 0;
        }
        else {
            if (0xc < uVar12) break;
            if (uVar12 < 5) goto code_r0x08014b80;
            if (uVar12 - 5 < 7) {
                iVar15 = (uVar12 - 5) + 1;
            }
            else {
                iVar15 = 8;
            }
        }
        uVar10 = *(iVar15 * 8 + 0x8012cb4);
        uVar16 = uVar10 * 0x18;
        if (((0xd8 < uVar16) || (0xd8 < (uVar16 | 2))) || (0xd8 < (uVar16 | 3))) goto code_r0x08015010;
        iVar15 = uVar10 * 0x18;
        snd_soc_component_update_bits
                  (arg1,*(obj.imped_table + uVar10 * 0x18),*(iVar15 + 0x8012bda),*(iVar15 + 0x8012bdb));
        snd_soc_component_update_bits
                  (arg1,*(_segment.ehdr + iVar15 + 4),_segment.ehdr[iVar15 + 6],_segment.ehdr[iVar15 + 7]);
        snd_soc_component_update_bits
                  (arg1,*(_segment.ehdr + iVar15 + 8),_segment.ehdr[iVar15 + 10],_segment.ehdr[iVar15 + 0xb]);
        snd_soc_component_update_bits
                  (arg1,*(_segment.ehdr + iVar15 + 0xc),_segment.ehdr[iVar15 + 0xe],_segment.ehdr[iVar15 + 0xf]);
        snd_soc_component_update_bits
                  (arg1,*(_segment.ehdr + iVar15 + 0x10),_segment.ehdr[iVar15 + 0x12],_segment.ehdr[iVar15 + 0x13]);
        uVar12 = *(_segment.ehdr + iVar15 + 0x14);
        cVar13 = _segment.ehdr[iVar15 + 0x16];
        uVar16 = _segment.ehdr[iVar15 + 0x17];
        goto code_r0x08014e98;
    case 4:
        __trace_bprintk(0x8014c70,*0x8019000,"lpass_cdc_rx_macro_event_handler");
        *(piStack_78 + 0x5a) = 0;
        if (piStack_78[0x18] != NULL) {
            swrm_wcd_notify(*piStack_78[0x18],6,0);
        }
        iVar15 = iStack_70;
        if (((*(iStack_70 + 0x200) & 7) == 0) && (*(iStack_70 + 0x20c) == 2)) break;
        iVar8 = lpass_cdc_runtime_suspend(iStack_70);
        if (iVar8 == 0) {
            __pm_runtime_disable(iVar15,1);
            __pm_runtime_set_status(iVar15,2);
            pm_runtime_enable(iVar15);
        }
        goto code_r0x08014ea4;
    case 5:
        __trace_bprintk(0x8014d00,*0x8019000,"lpass_cdc_rx_macro_event_handler");
        *(piStack_78 + 0x5a) = 1;
        *(piStack_78 + 0x45) = 1;
        if (piStack_78[0x18] != NULL) {
            swrm_wcd_notify(*piStack_78[0x18],7,0);
        }
        break;
    default:
        goto code_r0x08014ea4;
    case 7:
        lpass_cdc_rsc_clk_reset(iStack_70,1);
        lpass_cdc_rsc_clk_reset(iVar15,5);
        break;
    case 9:
        if (uVar12 >> 0x10 != 2) {
            uVar12 = (uVar12 >> 0x10) * 0x60 + 0x1800 & 0xffe0;
            uVar7 = snd_soc_component_read(arg1,uVar12);
            snd_soc_component_write(arg1,uVar12,uVar7);
        }
        break;
    case 0xc:
        *(piStack_78 + 0x5b) = 1;
        if (piStack_78 == NULL) {
            iVar8 = ___ratelimit(obj.lpass_cdc_rx_macro_core_vote._rs,"lpass_cdc_rx_macro_core_vote");
            if (iVar8 == 0) {
                iVar8 = -0x16;
            }
            else {
                _printk(0x8001934,"lpass_cdc_rx_macro_core_vote");
                iVar8 = -0x16;
            }
        }
        else {
            __pm_runtime_resume(*piStack_78,4);
            uVar10 = lpass_cdc_check_core_votes(*piVar2);
            if ((uVar10 & 1) != 0) {
                iVar8 = lpass_cdc_clk_rsc_request_clock(*piVar2,*(piVar2 + 0x92a),1,1);
                if (iVar8 < 0) {
                    iVar9 = ___ratelimit(obj.lpass_cdc_rx_macro_event_handler._rs.350,
                                         "lpass_cdc_rx_macro_event_handler");
                    if (iVar9 != 0) {
                        _dev_err(*piVar2,"%s, failed to enable clk, ret:%d\n","lpass_cdc_rx_macro_event_handler",
                                 iVar8);
                    }
                }
                else {
                    lpass_cdc_clk_rsc_request_clock(*piVar2,*(piVar2 + 0x92a),1,0);
                }
                __pm_runtime_suspend(*piVar2,0xd);
                iVar15 = *piVar2;
                uVar11 = ktime_get_mono_fast_ns();
                *(iVar15 + 0x218) = uVar11;
                goto code_r0x08014ea4;
            }
            iVar8 = -0x20a;
        }
        iVar9 = ___ratelimit(obj.lpass_cdc_rx_macro_event_handler._rs,"lpass_cdc_rx_macro_event_handler");
        if (iVar9 != 0) {
            _dev_err(*piVar2,"%s: rx request core vote failed\n","lpass_cdc_rx_macro_event_handler");
        }
        goto code_r0x08014ea4;
    case 0xd:
        uVar5 = snd_soc_component_read(arg1,0x1414);
        piVar14 = piStack_78;
        *(piStack_78 + 0x127) = uVar5;
        uVar6 = snd_soc_component_read(arg1,0x14d4);
        uVar1 = *(piVar14 + 0x127);
        *(piVar14 + 0x939) = uVar6;
        if (uVar12 == 0) {
            if ((uVar1 + 6 & 0xff) < 0x29) {
                snd_soc_component_update_bits(arg1,0x1414,0xff,uVar1 + 6);
                uVar6 = *(piVar14 + 0x939);
            }
            if (uVar6 + 6 < 0x29) {
                uVar12 = uVar6 + 6;
                goto code_r0x08014f3c;
            }
        }
        else {
            if (uVar1 < 0x29) {
                snd_soc_component_update_bits(arg1,0x1414,0xff,uVar1 - 6);
                uVar6 = *(piVar14 + 0x939);
            }
            if (uVar6 < 0x29) {
                uVar12 = uVar6 - 6;
code_r0x08014f3c:
                uVar16 = uVar12;
                uVar12 = 0x14d4;
                cVar13 = 0xff;
                goto code_r0x08014e98;
            }
        }
        break;
    case 0xe:
        uVar12 = 0x1404;
        goto code_r0x08014e90;
    case 0xf:
        uVar12 = 0x14c4;
code_r0x08014e90:
        cVar13 = 0x4;
code_r0x08014e98:
        snd_soc_component_update_bits(arg1,uVar12,cVar13,uVar16);
    }
    iVar8 = 0;
code_r0x08014ea4:
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_68) {
        return iVar8;
    }
    __stack_chk_fail();
code_r0x08015010:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(1,0x8015014);
    (*pcVar3)();
}


// ===== sym.lpass_cdc_rx_macro_init.5c0fcf43324700bd174cccbefdf1d743.cfi_jt @ 0x08013398 (size 8) =====

int sym.lpass_cdc_rx_macro_init.5c0fcf43324700bd174cccbefdf1d743.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    char *pcVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = lpass_cdc_get_device_ptr(*(param_1 + 0x18),1);
    if (iVar3 == 0) {
        uVar4 = *(param_1 + 0x18);
        pcVar5 = "%s: null device for macro!\n";
    }
    else {
        iVar6 = *(iVar3 + 0x98);
        if (iVar6 != 0) {
            iVar1 = param_1 + 0xd0;
            iVar2 = snd_soc_dapm_new_controls(iVar1,obj.lpass_cdc_rx_macro_dapm_widgets,0x4c);
            if (iVar2 < 0) {
                pcVar5 = "%s: failed to add controls\n";
            }
            else {
                iVar2 = snd_soc_dapm_add_routes(iVar1,obj.rx_audio_map,0x124);
                if (iVar2 < 0) {
                    pcVar5 = "%s: failed to add routes\n";
                }
                else {
                    iVar2 = snd_soc_dapm_new_widgets(*(param_1 + 0xe8));
                    if (iVar2 < 0) {
                        pcVar5 = "%s: failed to add widgets\n";
                    }
                    else {
                        iVar2 = snd_soc_add_component_controls(param_1,obj.lpass_cdc_rx_macro_snd_controls,0x32);
                        if (-1 < iVar2) {
                            *(iVar6 + 0x938) = 0;
                            *(iVar6 + 0x5a) = 1;
                            snd_soc_dapm_ignore_suspend(iVar1,"RX_MACRO_AIF1 Playback");
                            snd_soc_dapm_ignore_suspend(iVar1,"RX_MACRO_AIF2 Playback");
                            snd_soc_dapm_ignore_suspend(iVar1,"RX_MACRO_AIF3 Playback");
                            snd_soc_dapm_ignore_suspend(iVar1,"RX_MACRO_AIF4 Playback");
                            snd_soc_dapm_ignore_suspend(iVar1,"RX_MACRO_AIF5 Playback");
                            snd_soc_dapm_ignore_suspend(iVar1,"RX_MACRO_AIF6 Playback");
                            snd_soc_dapm_ignore_suspend(iVar1,"HPHL_OUT");
                            snd_soc_dapm_ignore_suspend(iVar1,"HPHR_OUT");
                            snd_soc_dapm_ignore_suspend(iVar1,"AUX_OUT");
                            snd_soc_dapm_ignore_suspend(iVar1,"PCM_OUT");
                            snd_soc_dapm_ignore_suspend(iVar1,"RX_TX DEC0_INP");
                            snd_soc_dapm_ignore_suspend(iVar1,"RX_TX DEC1_INP");
                            snd_soc_dapm_ignore_suspend(iVar1,"RX_TX DEC2_INP");
                            snd_soc_dapm_ignore_suspend(iVar1,"RX_TX DEC3_INP");
                            snd_soc_dapm_sync(iVar1);
                            snd_soc_component_update_bits(param_1,0x1434,7,2);
                            snd_soc_component_update_bits(param_1,0x14f4,7,2);
                            snd_soc_component_update_bits(param_1,0x15c0,7,2);
                            snd_soc_component_update_bits(param_1,0x1410,3,2);
                            snd_soc_component_update_bits(param_1,0x14d0,3,2);
                            snd_soc_component_update_bits(param_1,0x1590,3,2);
                            *(iVar6 + 0x138) = param_1;
                            return 0;
                        }
                        pcVar5 = "%s: failed to add snd_ctls\n";
                    }
                }
            }
            _dev_err(iVar3,pcVar5,"lpass_cdc_rx_macro_init");
            return iVar2;
        }
        uVar4 = *(param_1 + 0x18);
        pcVar5 = "%s: priv is null for macro!\n";
    }
    _dev_err(uVar4,pcVar5,"lpass_cdc_rx_macro_init");
    return -0x16;
}


// ===== sym.lpass_cdc_rx_macro_enable_main_path.5c0fcf43324700bd174cccbefdf1d743.cfi_jt @ 0x080133a0 (size 8) =====

ulong sym.lpass_cdc_rx_macro_enable_main_path.5c0fcf43324700bd174cccbefdf1d743.cfi_jt
                (int64_t param_1,ulong param_2,int param_3)

{
    int16_t iVar1;
    uint8_t uVar2;
    int16_t iVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    ulong uVar8;
    int iVar9;
    int64_t *arg3;
    int64_t iVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar11;
    ulong unaff_x30;
    int64_t iStack_48;
    uchar auStack_40 [8];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_38 = *(iVar10 + 0x5e0);
    arg3 = &iStack_48;
    iVar10 = *(param_1 + 0x28);
    iStack_48 = 0;
    iVar11 = iVar10 + -0xd0;
    uVar7 = sym.lpass_cdc_rx_macro_get_data(iVar11,auStack_40,arg3,0x8002760);
    iVar9 = arg3;
    if ((uVar7 & 1) != 0) {
        uVar2 = *(param_1 + 0x4c);
        uVar7 = uVar2;
        if (uVar2 < 3) {
            if (param_3 == 8) {
                sym.lpass_cdc_rx_macro_enable_interp_clk(iVar11,8,uVar7);
            }
            else {
                iVar9 = (uVar2 + uVar2 * 2) * 0x40;
                if (param_3 == 2) {
                    uVar5 = iVar9 + 0x1414U & 0xffd4;
                    uVar7 = snd_soc_component_read(iVar11,uVar5);
                    uVar7 = uVar7 & 0xffffffff;
                    snd_soc_component_write(iVar11,uVar5);
                }
                else if (param_3 == 1) {
                    sym.lpass_cdc_rx_macro_set_idle_detect_thr(iVar11,iStack_48,uVar2,0);
                    uVar7 = *(param_1 + 0x4c);
                    sym.lpass_cdc_rx_macro_enable_interp_clk(iVar11,1,uVar7);
                    iVar4 = *(param_1 + 0x4c) * 8;
                    uVar5 = snd_soc_component_read(iVar11,iVar4 + 0x1180);
                    uVar6 = snd_soc_component_read(iVar11,iVar4 + 0x1184);
                    if ((((uVar5 & 0xf) - 1 < 4) || ((uVar5 >> 4 & 0xf) - 1 < 4)) || ((uVar6 >> 4 & 0xf) - 1 < 4)) {
                        uVar7 = 0x20;
                        snd_soc_component_update_bits(iVar11,iVar9 + 0x1400U & 0xffc0,0x20,0x20);
                    }
                }
            }
            iVar9 = uVar7;
            uVar8 = 0;
            goto code_r0x080156a8;
        }
        iVar4 = ___ratelimit(obj.lpass_cdc_rx_macro_enable_main_path._rs,"lpass_cdc_rx_macro_enable_main_path");
        iVar9 = uVar7;
        if (iVar4 != 0) {
            iVar9 = 0x8002760;
            _dev_err(*(iVar10 + -0xb8),"%s: Invalid Interpolator value %d for name %s\n",
                     "lpass_cdc_rx_macro_enable_main_path",*(param_1 + 0x4c),*(param_1 + 8));
            uVar8 = 0xffffffea;
            goto code_r0x080156a8;
        }
    }
    uVar8 = 0xffffffea;
code_r0x080156a8:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_38) {
        return uVar8;
    }
    iVar10 = __stack_chk_fail(uVar8);
    *extraout_x18 = sym.lpass_cdc_rx_macro_enable_rx_path_clk;
    iVar3 = *(iVar10 + 0x4c) * 0xc0;
    iVar11 = *(iVar10 + 0x28) + -0xd0;
    iVar1 = iVar3 + 0x1408;
    if (iVar9 == 8) {
        snd_soc_component_update_bits(iVar11,iVar1,0x10,0);
        sym.lpass_cdc_rx_macro_enable_interp_clk(iVar11,8,*(iVar10 + 0x4c));
    }
    else if (iVar9 == 1) {
        sym.lpass_cdc_rx_macro_enable_interp_clk(iVar11,1,*(iVar10 + 0x4c));
        snd_soc_component_update_bits(iVar11,iVar1,0x10,0x10);
        snd_soc_component_update_bits(iVar11,iVar3 + 0x1400,0x20,0x20);
    }
    return 0;
}


// ===== sym.lpass_cdc_rx_macro_enable_vbat.5c0fcf43324700bd174cccbefdf1d743.cfi_jt @ 0x080133a8 (size 8) =====

void sym.lpass_cdc_rx_macro_enable_vbat.5c0fcf43324700bd174cccbefdf1d743.cfi_jt
               (int64_t param_1,ulong param_2,uint32_t param_3)

{
    int64_t iVar1;
    ulong *arg1;
    code *pcVar2;
    int iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong uVar6;
    int64_t extraout_x1;
    char *arg3;
    ulong uVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar8;
    ulong *puVar9;
    uint64_t uVar10;
    ulong unaff_x30;
    int64_t iStack_b8;
    uchar auStack_b0 [8];
    int64_t iStack_a8;
    uchar **ppuStack_a0;
    code *pcStack_98;
    uint64_t uStack_90;
    ulong *puStack_88;
    uint uStack_7c;
    ulong *puStack_78;
    uchar auStack_70 [8];
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    uint64_t uStack_50;
    int64_t iStack_48;
    uint64_t uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_28 = *(iVar8 + 0x5e0);
    uVar10 = param_3;
    arg3 = &uStack_38;
    uStack_38 = 0;
    uStack_30 = 0;
    iVar8 = *(param_1 + 0x28) + -0xd0;
    uVar4 = sym.lpass_cdc_rx_macro_get_data(iVar8,&uStack_30,arg3,0x8002576);
    if ((uVar4 & 1) == 0) {
        uVar6 = 0xffffffea;
    }
    else {
        if (param_3 == 8) {
            snd_soc_component_update_bits(iVar8,0x1608,1,0);
            snd_soc_component_update_bits(iVar8,0x1604,1,0);
            snd_soc_component_update_bits(iVar8,0x1600,1,0);
            snd_soc_component_update_bits(iVar8,0x1588,0x80,0);
            snd_soc_component_update_bits(iVar8,0x15c0,2,0);
            snd_soc_component_update_bits(iVar8,0x1284,2,2);
            snd_soc_component_update_bits(iVar8,0x1588,2,0);
            snd_soc_component_update_bits(iVar8,0x12dc,0xff,0);
            snd_soc_component_update_bits(iVar8,0x12e0,0xff,0);
            snd_soc_component_update_bits(iVar8,0x12e4,0xff,0);
            snd_soc_component_update_bits(iVar8,0x12e8,0xff,0);
            snd_soc_component_update_bits(iVar8,0x12ec,0xff,0);
            snd_soc_component_update_bits(iVar8,0x12f0,0xff,0);
            snd_soc_component_update_bits(iVar8,0x12f4,0xff,0);
            snd_soc_component_update_bits(iVar8,0x12f8,0xff,0);
            snd_soc_component_update_bits(iVar8,0x12fc,0xff,0);
            iVar3 = *(uStack_38 + 0x924) + -1;
            *(uStack_38 + 0x924) = iVar3;
            if (iVar3 == 0) {
                snd_soc_component_update_bits(iVar8,0x1140,1,0);
            }
            snd_soc_component_update_bits(iVar8,0x1284,1,0);
            uVar6 = 0x1280;
            arg3 = 0x10;
            uVar7 = 0;
code_r0x08015b58:
            snd_soc_component_update_bits(iVar8,uVar6,arg3,uVar7);
        }
        else {
            if (param_3 == 1) {
                snd_soc_component_update_bits(iVar8,0x1280,0x10,0x10);
                snd_soc_component_update_bits(iVar8,0x1284,1,1);
                snd_soc_component_update_bits(iVar8,0x1588,0x80,0x80);
                snd_soc_component_update_bits(iVar8,0x15c0,2,2);
                snd_soc_component_update_bits(iVar8,0x1284,2,0);
                uVar10 = uStack_38;
                iVar3 = *(uStack_38 + 0x924);
                if (iVar3 == 0) {
                    snd_soc_component_update_bits(iVar8,0x1140,1,1);
                    iVar3 = *(uVar10 + 0x924);
                }
                *(uVar10 + 0x924) = iVar3 + 1;
                snd_soc_component_update_bits(iVar8,0x1588,2,2);
                snd_soc_component_update_bits(iVar8,0x12dc,0xff,0xff);
                snd_soc_component_update_bits(iVar8,0x12e0,0xff,3);
                snd_soc_component_update_bits(iVar8,0x12e4,0xff,0);
                snd_soc_component_update_bits(iVar8,0x12e8,0xff,0xff);
                snd_soc_component_update_bits(iVar8,0x12ec,0xff,3);
                snd_soc_component_update_bits(iVar8,0x12f0,0xff,0);
                snd_soc_component_update_bits(iVar8,0x12f4,0xff,0xff);
                snd_soc_component_update_bits(iVar8,0x12f8,0xff,3);
                snd_soc_component_update_bits(iVar8,0x12fc,0xff,0);
                snd_soc_component_update_bits(iVar8,0x1600,1,1);
                snd_soc_component_update_bits(iVar8,0x1604,1,1);
                uVar6 = 0x1608;
                arg3 = 0x1;
                uVar7 = 1;
                goto code_r0x08015b58;
            }
            uVar6 = ___ratelimit(obj.lpass_cdc_rx_macro_enable_vbat._rs,"lpass_cdc_rx_macro_enable_vbat");
            if (uVar6 == 0) goto code_r0x08015b7c;
            arg3 = "lpass_cdc_rx_macro_enable_vbat";
            _dev_err(uStack_30,"%s: Invalid event %d\n","lpass_cdc_rx_macro_enable_vbat",uVar10);
        }
        uVar6 = 0;
    }
code_r0x08015b7c:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return;
    }
    iVar5 = __stack_chk_fail(uVar6);
    *extraout_x18 = sym.lpass_cdc_rx_macro_mclk_event;
    pcStack_58 = sym.lpass_cdc_rx_macro_mclk_event;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    puVar9 = arg3 & 0xffffffff;
    puStack_78 = NULL;
    uStack_7c = 9600000;
    puStack_60 = &stack0xffffffffffffffe0;
    uStack_50 = uVar10;
    iStack_48 = iVar8;
    uVar4 = sym.lpass_cdc_rx_macro_get_data(*(iVar5 + 0x28) + -0xd0,auStack_70,&puStack_78,0x8001eb2);
    arg1 = puStack_78;
    if ((uVar4 & 1) == 0) {
code_r0x08015cb8:
        uVar6 = 0xffffffea;
    }
    else if (arg3 == 8) {
        if (*(puStack_78 + 0x44) == '\0') {
            uVar6 = 0;
        }
        else {
            uVar6 = sym.lpass_cdc_rx_macro_mclk_enable(puStack_78,0,1);
        }
    }
    else {
        if (arg3 != 1) {
            iVar3 = ___ratelimit(obj.lpass_cdc_rx_macro_mclk_event._rs,"lpass_cdc_rx_macro_mclk_event");
            if (iVar3 != 0) {
                _dev_err(*puStack_78,"%s: invalid DAPM event %d\n","lpass_cdc_rx_macro_mclk_event",puVar9);
            }
            goto code_r0x08015cb8;
        }
        if (*(puStack_78 + 0x52) != '\0') {
            uStack_7c = 0xac4400;
        }
        if (puStack_78[0x18] != NULL) {
            swrm_wcd_notify(*puStack_78[0x18],5,&uStack_7c);
        }
        uVar10 = 1;
        uVar6 = sym.lpass_cdc_rx_macro_mclk_enable(arg1,1,1);
        puVar9 = arg1;
        if (uVar6 == 0) {
            *(arg1 + 0x44) = 1;
        }
        else {
            *(arg1 + 0x44) = 0;
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_68) {
        return;
    }
    __stack_chk_fail(uVar6);
    *extraout_x18_00 = sym.lpass_cdc_rx_macro_mux_get;
    pcStack_98 = sym.lpass_cdc_rx_macro_mux_get;
    iVar8 = sp_el0;
    iStack_a8 = *(iVar8 + 0x5e0);
    ppuStack_a0 = &puStack_60;
    uStack_90 = uVar10;
    puStack_88 = puVar9;
    iVar8 = snd_soc_dapm_kcontrol_widget();
    iStack_b8 = 0;
    uVar10 = sym.lpass_cdc_rx_macro_get_data(*(iVar8 + 0x28) + -0xd0,auStack_b0,&iStack_b8,0x80011b6);
    if ((uVar10 & 1) == 0) {
        uVar6 = 0xffffffea;
    }
    else {
        if (5 < *(iVar8 + 0x4c)) goto code_r0x08015dcc;
        uVar6 = 0;
        *(extraout_x1 + 0x48) = *(iStack_b8 + *(iVar8 + 0x4c) * 4 + 0x1c);
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_a8) {
        return;
    }
    __stack_chk_fail(uVar6);
code_r0x08015dcc:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8015dd0);
    (*pcVar2)();
}


// ===== sym.lpass_cdc_rx_macro_enable_mix_path.5c0fcf43324700bd174cccbefdf1d743.cfi_jt @ 0x080133b0 (size 8) =====

ulong sym.lpass_cdc_rx_macro_enable_mix_path.5c0fcf43324700bd174cccbefdf1d743.cfi_jt
                (uint64_t param_1,ulong param_2,uint32_t param_3)

{
    int16_t iVar1;
    uint8_t uVar2;
    int16_t iVar3;
    int iVar4;
    int iVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong uVar9;
    int64_t iVar10;
    int64_t *piVar11;
    int64_t iVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar13;
    int64_t arg1;
    uint64_t uVar14;
    uint64_t unaff_x22;
    ulong unaff_x30;
    int64_t iStack_98;
    uchar auStack_90 [8];
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    uint64_t uStack_70;
    uint64_t uStack_68;
    uint64_t uStack_60;
    int64_t iStack_58;
    int64_t iStack_48;
    uchar auStack_40 [8];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_38 = *(iVar12 + 0x5e0);
    uVar14 = param_3;
    piVar11 = &iStack_48;
    iVar12 = *(param_1 + 0x28);
    iStack_48 = 0;
    iVar13 = iVar12 + -0xd0;
    uVar8 = sym.lpass_cdc_rx_macro_get_data(iVar13,auStack_40,piVar11,0x8001a58);
    uVar6 = piVar11;
    if ((uVar8 & 1) == 0) {
code_r0x080153e8:
        uVar9 = 0xffffffea;
    }
    else {
        uVar2 = *(param_1 + 0x4c);
        uVar6 = uVar2;
        if (uVar2 < 3) {
            iVar4 = (uVar2 + uVar2 * 2) * 0x40;
            uVar7 = iVar4 + 0x1418;
            unaff_x22 = uVar7;
            if (param_3 == 8) {
                uVar8 = uVar7 & 0xffff;
                snd_soc_component_update_bits(iVar13,uVar8,0x20,0);
                sym.lpass_cdc_rx_macro_enable_interp_clk(iVar13,8,*(param_1 + 0x4c));
                snd_soc_component_update_bits(iVar13,uVar8,0x40,0x40);
                uVar6 = 0x40;
                uVar9 = 0;
                uVar14 = uVar8;
code_r0x08015498:
                snd_soc_component_update_bits(iVar13,uVar8,uVar6,uVar9);
            }
            else if (param_3 == 2) {
                param_1 = iVar4 + 0x1420U & 0xffe0;
                uVar6 = snd_soc_component_read(iVar13,param_1);
                snd_soc_component_write(iVar13,param_1);
            }
            else if (param_3 == 1) {
                sym.lpass_cdc_rx_macro_set_idle_detect_thr(iVar13,iStack_48,uVar2,1);
                sym.lpass_cdc_rx_macro_enable_interp_clk(iVar13,1,*(param_1 + 0x4c));
                uVar8 = uVar7 & 0xffff;
                uVar6 = 0x20;
                uVar9 = 0x20;
                goto code_r0x08015498;
            }
            uVar9 = 0;
        }
        else {
            uVar6 = uVar2;
            iVar4 = ___ratelimit(obj.lpass_cdc_rx_macro_enable_mix_path._rs,"lpass_cdc_rx_macro_enable_mix_path");
            if (iVar4 == 0) goto code_r0x080153e8;
            uVar6 = 0x8001a58;
            _dev_err(*(iVar12 + -0xb8),"%s: Invalid Interpolator value %d for name %s\n",
                     "lpass_cdc_rx_macro_enable_mix_path",*(param_1 + 0x4c),*(param_1 + 8));
            uVar9 = 0xffffffea;
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_38) {
        return uVar9;
    }
    iVar10 = __stack_chk_fail(uVar9);
    *extraout_x18 = sym.lpass_cdc_rx_macro_enable_main_path;
    pcStack_78 = sym.lpass_cdc_rx_macro_enable_main_path;
    iVar12 = sp_el0;
    iStack_88 = *(iVar12 + 0x5e0);
    piVar11 = &iStack_98;
    iVar12 = *(iVar10 + 0x28);
    iStack_98 = 0;
    arg1 = iVar12 + -0xd0;
    puStack_80 = &stack0xffffffffffffffd0;
    uStack_70 = unaff_x22;
    uStack_68 = uVar14;
    uStack_60 = param_1;
    iStack_58 = iVar13;
    uVar14 = sym.lpass_cdc_rx_macro_get_data(arg1,auStack_90,piVar11,0x8002760);
    iVar4 = piVar11;
    if ((uVar14 & 1) != 0) {
        uVar2 = *(iVar10 + 0x4c);
        uVar14 = uVar2;
        if (uVar2 < 3) {
            if (uVar6 == 8) {
                sym.lpass_cdc_rx_macro_enable_interp_clk(arg1,8,uVar14);
            }
            else {
                iVar4 = (uVar2 + uVar2 * 2) * 0x40;
                if (uVar6 == 2) {
                    uVar6 = iVar4 + 0x1414U & 0xffd4;
                    uVar14 = snd_soc_component_read(arg1,uVar6);
                    uVar14 = uVar14 & 0xffffffff;
                    snd_soc_component_write(arg1,uVar6);
                }
                else if (uVar6 == 1) {
                    sym.lpass_cdc_rx_macro_set_idle_detect_thr(arg1,iStack_98,uVar2,0);
                    uVar14 = *(iVar10 + 0x4c);
                    sym.lpass_cdc_rx_macro_enable_interp_clk(arg1,1,uVar14);
                    iVar5 = *(iVar10 + 0x4c) * 8;
                    uVar6 = snd_soc_component_read(arg1,iVar5 + 0x1180);
                    uVar7 = snd_soc_component_read(arg1,iVar5 + 0x1184);
                    if ((((uVar6 & 0xf) - 1 < 4) || ((uVar6 >> 4 & 0xf) - 1 < 4)) || ((uVar7 >> 4 & 0xf) - 1 < 4)) {
                        uVar14 = 0x20;
                        snd_soc_component_update_bits(arg1,iVar4 + 0x1400U & 0xffc0,0x20,0x20);
                    }
                }
            }
            iVar4 = uVar14;
            uVar9 = 0;
            goto code_r0x080156a8;
        }
        iVar5 = ___ratelimit(obj.lpass_cdc_rx_macro_enable_main_path._rs,"lpass_cdc_rx_macro_enable_main_path");
        iVar4 = uVar14;
        if (iVar5 != 0) {
            iVar4 = 0x8002760;
            _dev_err(*(iVar12 + -0xb8),"%s: Invalid Interpolator value %d for name %s\n",
                     "lpass_cdc_rx_macro_enable_main_path",*(iVar10 + 0x4c),*(iVar10 + 8));
            uVar9 = 0xffffffea;
            goto code_r0x080156a8;
        }
    }
    uVar9 = 0xffffffea;
code_r0x080156a8:
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_88) {
        return uVar9;
    }
    iVar12 = __stack_chk_fail(uVar9);
    *extraout_x18_00 = sym.lpass_cdc_rx_macro_enable_rx_path_clk;
    iVar3 = *(iVar12 + 0x4c) * 0xc0;
    iVar13 = *(iVar12 + 0x28) + -0xd0;
    iVar1 = iVar3 + 0x1408;
    if (iVar4 == 8) {
        snd_soc_component_update_bits(iVar13,iVar1,0x10,0);
        sym.lpass_cdc_rx_macro_enable_interp_clk(iVar13,8,*(iVar12 + 0x4c));
    }
    else if (iVar4 == 1) {
        sym.lpass_cdc_rx_macro_enable_interp_clk(iVar13,1,*(iVar12 + 0x4c));
        snd_soc_component_update_bits(iVar13,iVar1,0x10,0x10);
        snd_soc_component_update_bits(iVar13,iVar3 + 0x1400,0x20,0x20);
    }
    return 0;
}


// ===== sym.lpass_cdc_rx_macro_mclk_event.5c0fcf43324700bd174cccbefdf1d743.cfi_jt @ 0x080133b8 (size 8) =====

void sym.lpass_cdc_rx_macro_mclk_event.5c0fcf43324700bd174cccbefdf1d743.cfi_jt
               (int64_t param_1,ulong param_2,uint32_t param_3)

{
    ulong *arg1;
    code *pcVar1;
    int iVar2;
    uint64_t uVar3;
    ulong uVar4;
    int64_t iVar5;
    int64_t extraout_x1;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar6;
    ulong unaff_x20;
    ulong unaff_x30;
    int64_t iStack_78;
    uchar auStack_70 [8];
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    ulong uStack_50;
    ulong *puStack_48;
    uint uStack_3c;
    ulong *puStack_38;
    uchar auStack_30 [8];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    puVar6 = param_3;
    puStack_38 = NULL;
    uStack_3c = 9600000;
    uVar3 = sym.lpass_cdc_rx_macro_get_data(*(param_1 + 0x28) + -0xd0,auStack_30,&puStack_38,0x8001eb2);
    arg1 = puStack_38;
    if ((uVar3 & 1) == 0) {
code_r0x08015cb8:
        uVar4 = 0xffffffea;
    }
    else if (param_3 == 8) {
        if (*(puStack_38 + 0x44) == '\0') {
            uVar4 = 0;
        }
        else {
            uVar4 = sym.lpass_cdc_rx_macro_mclk_enable(puStack_38,0,1);
        }
    }
    else {
        if (param_3 != 1) {
            iVar2 = ___ratelimit(obj.lpass_cdc_rx_macro_mclk_event._rs,"lpass_cdc_rx_macro_mclk_event");
            if (iVar2 != 0) {
                _dev_err(*puStack_38,"%s: invalid DAPM event %d\n","lpass_cdc_rx_macro_mclk_event",puVar6);
            }
            goto code_r0x08015cb8;
        }
        if (*(puStack_38 + 0x52) != '\0') {
            uStack_3c = 0xac4400;
        }
        if (puStack_38[0x18] != NULL) {
            swrm_wcd_notify(*puStack_38[0x18],5,&uStack_3c);
        }
        unaff_x20 = 1;
        uVar4 = sym.lpass_cdc_rx_macro_mclk_enable(arg1,1,1);
        puVar6 = arg1;
        if (uVar4 == 0) {
            *(arg1 + 0x44) = 1;
        }
        else {
            *(arg1 + 0x44) = 0;
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_28) {
        return;
    }
    __stack_chk_fail(uVar4);
    *extraout_x18 = sym.lpass_cdc_rx_macro_mux_get;
    pcStack_58 = sym.lpass_cdc_rx_macro_mux_get;
    iVar5 = sp_el0;
    iStack_68 = *(iVar5 + 0x5e0);
    puStack_60 = &stack0xffffffffffffffe0;
    uStack_50 = unaff_x20;
    puStack_48 = puVar6;
    iVar5 = snd_soc_dapm_kcontrol_widget();
    iStack_78 = 0;
    uVar3 = sym.lpass_cdc_rx_macro_get_data(*(iVar5 + 0x28) + -0xd0,auStack_70,&iStack_78,0x80011b6);
    if ((uVar3 & 1) == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        if (5 < *(iVar5 + 0x4c)) goto code_r0x08015dcc;
        uVar4 = 0;
        *(extraout_x1 + 0x48) = *(iStack_78 + *(iVar5 + 0x4c) * 4 + 0x1c);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_68) {
        return;
    }
    __stack_chk_fail(uVar4);
code_r0x08015dcc:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8015dd0);
    (*pcVar1)();
}


// ===== sym.lpass_cdc_rx_macro_set_iir_gain.5c0fcf43324700bd174cccbefdf1d743.cfi_jt @ 0x080133c0 (size 8) =====

ulong sym.lpass_cdc_rx_macro_set_iir_gain.5c0fcf43324700bd174cccbefdf1d743.cfi_jt
                (int64_t param_1,ulong param_2,int param_3)

{
    bool bVar1;
    uint uVar2;
    uint uVar3;
    int64_t iVar4;
    uint uVar5;
    uint uVar6;
    uint uVar7;
    ulong *in_x18;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_3 == 4) || (param_3 == 2)) {
        iVar8 = *(param_1 + 0x28) + -0xd0;
        iVar4 = strnstr(*(param_1 + 8),"IIR0",5);
        bVar1 = iVar4 != 0;
        uVar3 = 0x1a84;
        if (bVar1) {
            uVar3 = 0x1a04;
        }
        uVar6 = 0x1a88;
        if (bVar1) {
            uVar6 = 0x1a08;
        }
        uVar5 = 0x1a8c;
        if (bVar1) {
            uVar5 = 0x1a0c;
        }
        uVar7 = 0x1a90;
        if (bVar1) {
            uVar7 = 0x1a10;
        }
        uVar2 = snd_soc_component_read(iVar8,uVar3);
        snd_soc_component_write(iVar8,uVar3,uVar2);
        uVar3 = snd_soc_component_read(iVar8,uVar6);
        snd_soc_component_write(iVar8,uVar6,uVar3);
        uVar3 = snd_soc_component_read(iVar8,uVar5);
        snd_soc_component_write(iVar8,uVar5,uVar3);
        uVar3 = snd_soc_component_read(iVar8,uVar7);
        snd_soc_component_write(iVar8,uVar7,uVar3);
    }
    return 0;
}


// ===== sym.lpass_cdc_rx_macro_enable_rx_path_clk.5c0fcf43324700bd174cccbefdf1d743.cfi_jt @ 0x080133c8 (size 8) =====

ulong sym.lpass_cdc_rx_macro_enable_rx_path_clk.5c0fcf43324700bd174cccbefdf1d743.cfi_jt
                (int64_t param_1,ulong param_2,int param_3)

{
    int16_t iVar1;
    int16_t iVar2;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x4c) * 0xc0;
    arg1 = *(param_1 + 0x28) + -0xd0;
    iVar1 = iVar2 + 0x1408;
    if (param_3 == 8) {
        snd_soc_component_update_bits(arg1,iVar1,0x10,0);
        sym.lpass_cdc_rx_macro_enable_interp_clk(arg1,8,*(param_1 + 0x4c));
    }
    else if (param_3 == 1) {
        sym.lpass_cdc_rx_macro_enable_interp_clk(arg1,1,*(param_1 + 0x4c));
        snd_soc_component_update_bits(arg1,iVar1,0x10,0x10);
        snd_soc_component_update_bits(arg1,iVar2 + 0x1400,0x20,0x20);
    }
    return 0;
}


// ===== sym.lpass_cdc_rx_macro_enable_echo.5c0fcf43324700bd174cccbefdf1d743.cfi_jt @ 0x080133d0 (size 8) =====

ulong sym.lpass_cdc_rx_macro_enable_echo.5c0fcf43324700bd174cccbefdf1d743.cfi_jt(int64_t param_1)

{
    bool bVar1;
    uint32_t uVar2;
    int iVar3;
    uint32_t uVar4;
    uint uVar5;
    uint uVar6;
    uint64_t uVar7;
    int iVar8;
    uchar *arg3;
    uint uVar9;
    uint uVar10;
    uint uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar12;
    int64_t iVar13;
    ulong uVar14;
    ulong unaff_x30;
    uchar auStack_48 [8];
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_38 = *(iVar12 + 0x5e0);
    arg3 = auStack_48;
    uStack_40 = 0;
    iVar12 = *(param_1 + 0x28) + -0xd0;
    uVar7 = sym.lpass_cdc_rx_macro_get_data(iVar12,&uStack_40,arg3,0x800231e);
    iVar8 = arg3;
    if ((uVar7 & 1) != 0) {
        uVar2 = snd_soc_component_read(iVar12,0x1198);
        uVar14 = *(param_1 + 8);
        iVar3 = strcmp(uVar14,"RX MIX TX0 MUX");
        if (iVar3 == 0) {
            uVar2 = uVar2 >> 4;
code_r0x08015170:
            uVar2 = (uVar2 & 0xf) - 1;
        }
        else {
            iVar3 = strcmp(uVar14,"RX MIX TX1 MUX");
            if (iVar3 == 0) goto code_r0x08015170;
            uVar2 = 0;
        }
        uVar4 = snd_soc_component_read(iVar12,0x119c);
        iVar3 = strcmp(*(param_1 + 8),"RX MIX TX2 MUX");
        uVar4 = (uVar4 & 0xf) - 1;
        if (iVar3 != 0) {
            uVar4 = uVar2;
        }
        if (uVar4 < 3) {
            snd_soc_component_update_bits(iVar12,uVar4 * 0x40 + 0x1c00 & 0xffc0,1,1);
            iVar8 = 0x1e;
            snd_soc_component_update_bits(iVar12,uVar4 * 0x40 + 0x1c04 & 0xfffc,0x1e,8);
            uVar14 = 0;
            goto code_r0x0801520c;
        }
        iVar3 = ___ratelimit(obj.lpass_cdc_rx_macro_enable_echo._rs,"lpass_cdc_rx_macro_enable_echo");
        if (iVar3 != 0) {
            iVar8 = 0x800231e;
            _dev_err(uStack_40,"%s: EC mix control not set correctly\n");
            uVar14 = 0xffffffea;
            goto code_r0x0801520c;
        }
    }
    uVar14 = 0xffffffea;
code_r0x0801520c:
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) != iStack_38) {
        iVar12 = __stack_chk_fail(uVar14);
        *extraout_x18 = sym.lpass_cdc_rx_macro_set_iir_gain;
        if ((iVar8 == 4) || (iVar8 == 2)) {
            iVar13 = *(iVar12 + 0x28) + -0xd0;
            iVar12 = strnstr(*(iVar12 + 8),"IIR0",5);
            bVar1 = iVar12 != 0;
            uVar6 = 0x1a84;
            if (bVar1) {
                uVar6 = 0x1a04;
            }
            uVar10 = 0x1a88;
            if (bVar1) {
                uVar10 = 0x1a08;
            }
            uVar9 = 0x1a8c;
            if (bVar1) {
                uVar9 = 0x1a0c;
            }
            uVar11 = 0x1a90;
            if (bVar1) {
                uVar11 = 0x1a10;
            }
            uVar5 = snd_soc_component_read(iVar13,uVar6);
            snd_soc_component_write(iVar13,uVar6,uVar5);
            uVar6 = snd_soc_component_read(iVar13,uVar10);
            snd_soc_component_write(iVar13,uVar10,uVar6);
            uVar6 = snd_soc_component_read(iVar13,uVar9);
            snd_soc_component_write(iVar13,uVar9,uVar6);
            uVar6 = snd_soc_component_read(iVar13,uVar11);
            snd_soc_component_write(iVar13,uVar11,uVar6);
        }
        return 0;
    }
    return uVar14;
}


// ===== sym.lpass_cdc_rx_macro_vbat_bcl_gsm_mode_func_put.5c0fcf43324700bd174cccbefdf1d743.cfi_jt @ 0x080133d8 (size 8) =====

ulong sym.lpass_cdc_rx_macro_vbat_bcl_gsm_mode_func_put.5c0fcf43324700bd174cccbefdf1d743.cfi_jt
                (int64_t param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    snd_soc_component_update_bits(*(param_1 + 0x80),0x1284,4,(*(param_2 + 0x48) != 0) << 2);
    return 0;
}


// ===== sym.lpass_cdc_rx_macro_fir_filter_enable_get.5c0fcf43324700bd174cccbefdf1d743.cfi_jt @ 0x080133e0 (size 8) =====

int sym.lpass_cdc_rx_macro_fir_filter_enable_get.5c0fcf43324700bd174cccbefdf1d743.cfi_jt
              (int64_t param_1,int64_t param_2)

{
    char cVar1;
    ulong *puVar2;
    int iVar3;
    int iVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    int64_t iVar7;
    int64_t iVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    uchar auVar10 [16];
    int64_t iStack_188;
    uchar auStack_180 [8];
    int64_t iStack_178;
    ulong ***pppuStack_170;
    code *pcStack_168;
    int64_t iStack_160;
    int64_t iStack_148;
    uchar auStack_140 [8];
    int64_t iStack_138;
    ulong ***pppuStack_130;
    code *pcStack_128;
    int64_t iStack_120;
    int64_t iStack_108;
    uchar auStack_100 [8];
    int64_t iStack_f8;
    uchar ***pppuStack_f0;
    code *pcStack_e8;
    int64_t iStack_e0;
    int64_t iStack_c8;
    uchar auStack_c0 [8];
    int64_t iStack_b8;
    uchar **ppuStack_b0;
    code *pcStack_a8;
    int64_t iStack_a0;
    ulong *puStack_88;
    uchar auStack_80 [8];
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    int64_t iStack_38;
    uchar auStack_30 [8];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_28 = *(iVar7 + 0x5e0);
    iStack_38 = 0;
    if (*(param_1 + 0x80) == 0) {
        iVar3 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_filter_enable_get._rs,
                             "lpass_cdc_rx_macro_fir_filter_enable_get");
        if (iVar3 != 0) {
            _printk(0x800180e,"lpass_cdc_rx_macro_fir_filter_enable_get");
        }
code_r0x080176cc:
        iVar3 = -0x16;
    }
    else {
        uVar6 = sym.lpass_cdc_rx_macro_get_data(*(param_1 + 0x80),auStack_30,&iStack_38,0x8001ba9);
        if ((uVar6 & 1) == 0) goto code_r0x080176cc;
        iVar3 = 0;
        *(param_2 + 0x48) = *(iStack_38 + 0x54);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_28) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail(iVar3);
    *extraout_x18 = sym.lpass_cdc_rx_macro_fir_filter_enable_put;
    pcStack_68 = sym.lpass_cdc_rx_macro_fir_filter_enable_put;
    iVar7 = sp_el0;
    iStack_78 = *(iVar7 + 0x5e0);
    iVar7 = *(auVar9._0_8_ + 0x80);
    puStack_88 = NULL;
    puStack_70 = &stack0xffffffffffffffe0;
    if (iVar7 == 0) {
        iVar3 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_filter_enable_put._rs,
                             "lpass_cdc_rx_macro_fir_filter_enable_put");
        if (iVar3 != 0) {
            _printk(0x800180e,"lpass_cdc_rx_macro_fir_filter_enable_put");
            iVar3 = -0x16;
            goto code_r0x080178e4;
        }
    }
    else {
        uVar6 = sym.lpass_cdc_rx_macro_get_data(iVar7,auStack_80,&puStack_88,0x8001c78);
        puVar2 = puStack_88;
        if ((uVar6 & 1) != 0) {
            iVar8 = puStack_88[0x126];
            if ((iVar8 != 0) && (*(puStack_88 + 0x59) != '\0')) {
                cVar1 = *(auVar9._8_8_ + 0x48);
                *(puStack_88 + 0x54) = cVar1 != '\0';
                if (cVar1 == '\0') {
                    snd_soc_component_update_bits(iVar7,0x145c,0xd,0);
                    snd_soc_component_update_bits(iVar7,0x151c,0xd,0);
                    snd_soc_component_update_bits(iVar7,0x1400,0x80,0);
                    snd_soc_component_update_bits(iVar7,0x14c0,0x80,0);
                    snd_soc_component_update_bits(iVar7,0x1004,1,0);
                    iVar7 = puVar2[0x126];
                    clk_disable(iVar7);
                    clk_unprepare(iVar7);
                }
                else {
                    iVar3 = clk_prepare(iVar8);
                    if (iVar3 == 0) {
                        iVar3 = clk_enable(iVar8);
                        if (iVar3 != 0) {
                            clk_unprepare(iVar8);
                            goto code_r0x080177bc;
                        }
                    }
                    else {
code_r0x080177bc:
                        if (iVar3 < 0) {
                            iVar4 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_filter_enable_put._rs.326,
                                                 "lpass_cdc_rx_macro_fir_filter_enable_put");
                            if (iVar4 != 0) {
                                _dev_err(*puVar2,"%s:hifi_fir_clk enable failed\n",
                                         "lpass_cdc_rx_macro_fir_filter_enable_put");
                            }
                            goto code_r0x080178e4;
                        }
                    }
                    snd_soc_component_write(iVar7,0x1460,*(puVar2 + 10));
                    snd_soc_component_write(iVar7,0x1520,*(puVar2 + 0x51));
                    snd_soc_component_update_bits(iVar7,0x1004,1,1);
                    snd_soc_component_update_bits(iVar7,0x1400,0x80,0x80);
                    snd_soc_component_update_bits(iVar7,0x14c0,0x80,0x80);
                    snd_soc_component_update_bits(iVar7,0x145c,0xd,5);
                    snd_soc_component_update_bits(iVar7,0x151c,0xd,5);
                }
            }
            iVar3 = 0;
            goto code_r0x080178e4;
        }
    }
    iVar3 = -0x16;
code_r0x080178e4:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_78) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail();
    *extraout_x18_00 = sym.lpass_cdc_rx_macro_get_hph_hd2_mode;
    pcStack_a8 = sym.lpass_cdc_rx_macro_get_hph_hd2_mode;
    iVar8 = sp_el0;
    iStack_b8 = *(iVar8 + 0x5e0);
    iStack_c8 = 0;
    ppuStack_b0 = &puStack_70;
    iStack_a0 = iVar7;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar9._0_8_ + 0x80),auStack_c0,&iStack_c8,0x8001ca1);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(auVar9._8_8_ + 0x48) = *(iStack_c8 + 0x5d);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_b8) {
        return iVar3;
    }
    auVar10 = __stack_chk_fail(iVar3);
    *extraout_x18_01 = sym.lpass_cdc_rx_macro_put_hph_hd2_mode;
    pcStack_e8 = sym.lpass_cdc_rx_macro_put_hph_hd2_mode;
    iVar7 = sp_el0;
    iStack_f8 = *(iVar7 + 0x5e0);
    iStack_108 = 0;
    pppuStack_f0 = &ppuStack_b0;
    iStack_e0 = auVar9._8_8_;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar10._0_8_ + 0x80),auStack_100,&iStack_108,0x800285c);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(iStack_108 + 0x5d) = *(auVar10._8_8_ + 0x48) != 0;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_f8) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail(iVar3);
    *extraout_x18_02 = sym.lpass_cdc_rx_macro_get_hph_pwr_mode;
    pcStack_128 = sym.lpass_cdc_rx_macro_get_hph_pwr_mode;
    iVar7 = sp_el0;
    iStack_138 = *(iVar7 + 0x5e0);
    iStack_148 = 0;
    pppuStack_130 = &pppuStack_f0;
    iStack_120 = auVar10._8_8_;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar9._0_8_ + 0x80),auStack_140,&iStack_148,0x80016e4);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(auVar9._8_8_ + 0x48) = *(iStack_148 + 0x5c);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_138) {
        return iVar3;
    }
    auVar10 = __stack_chk_fail(iVar3);
    *extraout_x18_03 = sym.lpass_cdc_rx_macro_put_hph_pwr_mode;
    pcStack_168 = sym.lpass_cdc_rx_macro_put_hph_pwr_mode;
    iVar7 = sp_el0;
    iStack_178 = *(iVar7 + 0x5e0);
    iStack_188 = 0;
    pppuStack_170 = &pppuStack_130;
    iStack_160 = auVar9._8_8_;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar10._0_8_ + 0x80),auStack_180,&iStack_188,0x80015dc);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(iStack_188 + 0x5c) = *(auVar10._8_8_ + 0x48) != 0;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_178) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail(iVar3);
    *extraout_x18_04 = sym.lpass_cdc_rx_macro_vbat_bcl_gsm_mode_func_get;
    uVar5 = snd_soc_component_read(*(auVar9._0_8_ + 0x80),0x1284);
    *(auVar9._8_8_ + 0x48) = uVar5 >> 2 & 1;
    return 0;
}


// ===== sym.lpass_cdc_rx_macro_iir_enable_audio_mixer_put.5c0fcf43324700bd174cccbefdf1d743.cfi_jt @ 0x080133e8 (size 8) =====

void sym.lpass_cdc_rx_macro_iir_enable_audio_mixer_put.5c0fcf43324700bd174cccbefdf1d743.cfi_jt
               (int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t iVar5;
    int64_t *piVar6;
    code *pcVar7;
    int iVar8;
    uint64_t uVar9;
    int64_t iVar10;
    ulong *in_x18;
    ulong uVar11;
    ulong unaff_x30;
    int64_t *piStack_68;
    uchar auStack_60 [8];
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_58 = *(iVar1 + 0x5e0);
    iVar1 = *(param_1 + 0x80);
    piStack_68 = NULL;
    uVar11 = *(param_2 + 0x48);
    uVar2 = *(*(param_1 + 0x78) + 0x10);
    uVar3 = *(*(param_1 + 0x78) + 0x18);
    uVar9 = sym.lpass_cdc_rx_macro_get_data(iVar1,auStack_60,&piStack_68,0x800147e);
    piVar6 = piStack_68;
    if ((uVar9 & 1) == 0) {
        uVar11 = 0xffffffea;
    }
    else {
        iVar4 = uVar2 * 0x80;
        iVar10 = dev_get_regmap(*(*piStack_68 + 0x60),0);
        if (iVar10 == 0) {
            iVar8 = ___ratelimit(obj.lpass_cdc_rx_macro_restore_iir_coeff._rs,"lpass_cdc_rx_macro_restore_iir_coeff");
            if (iVar8 != 0) {
                _dev_err(*piVar6,"%s: regmap is NULL\n","lpass_cdc_rx_macro_restore_iir_coeff");
            }
        }
        else {
            regmap_write(iVar10,iVar4 + 0x1a2c,(uVar3 * 5 & 0x1f) << 2);
            if ((1 < uVar2) || (4 < uVar3)) goto code_r0x080181a0;
            iVar5 = uVar3 * 0x14 + uVar2 * 100;
            uVar2 = iVar4 + 0x1a30U & 0xffb0;
            regmap_write(iVar10,uVar2,*(piVar6 + iVar5 + 0x1e2));
            regmap_write(iVar10,uVar2,*(piVar6 + iVar5 + 0x1e3));
            regmap_write(iVar10,uVar2,*(piVar6 + iVar5 + 0x1e4));
            regmap_write(iVar10,uVar2,*(piVar6 + iVar5 + 0x1e5));
            regmap_write(iVar10,uVar2,*(piVar6 + iVar5 + 0x1e6));
            regmap_write(iVar10,uVar2,*(piVar6 + iVar5 + 0x1e7));
            regmap_write(iVar10,uVar2,*(piVar6 + iVar5 + 0x1e8));
            regmap_write(iVar10,uVar2,*(piVar6 + iVar5 + 0x1e9));
            regmap_write(iVar10,uVar2,*(piVar6 + iVar5 + 0x1ea));
            regmap_write(iVar10,uVar2,*(piVar6 + iVar5 + 0x1eb));
            regmap_write(iVar10,uVar2,*(piVar6 + iVar5 + 0x1ec));
            regmap_write(iVar10,uVar2,*(piVar6 + iVar5 + 0x1ed));
            regmap_write(iVar10,uVar2,*(piVar6 + iVar5 + 0x1ee));
            regmap_write(iVar10,uVar2,*(piVar6 + iVar5 + 0x1ef));
            regmap_write(iVar10,uVar2,*(piVar6 + iVar5 + 0x1f0));
            regmap_write(iVar10,uVar2,*(piVar6 + iVar5 + 0x1f1));
            regmap_write(iVar10,uVar2,*(piVar6 + iVar5 + 0x1f2));
            regmap_write(iVar10,uVar2,*(piVar6 + iVar5 + 499));
            regmap_write(iVar10,uVar2,*(piVar6 + iVar5 + 500));
            regmap_write(iVar10,uVar2,*(piVar6 + iVar5 + 0x1f5));
        }
        uVar2 = iVar4 + 0x1a24U & 0xffa4;
        snd_soc_component_update_bits(iVar1,uVar2,1 << (uVar3 & 0x1f),uVar11 << (uVar3 & 0x1f));
        snd_soc_component_read(iVar1,uVar2);
        uVar11 = 0;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_58) {
        return;
    }
    __stack_chk_fail(uVar11);
code_r0x080181a0:
    //WARNING: Does not return
    pcVar7 = SoftwareBreakpoint(0x5512,0x80181a4);
    (*pcVar7)();
}


// ===== sym.lpass_cdc_rx_macro_hph_idle_detect_get.5c0fcf43324700bd174cccbefdf1d743.cfi_jt @ 0x080133f0 (size 8) =====

int sym.lpass_cdc_rx_macro_hph_idle_detect_get.5c0fcf43324700bd174cccbefdf1d743.cfi_jt(int64_t param_1,int64_t param_2)

{
    char cVar1;
    ulong *puVar2;
    int iVar3;
    int iVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong *extraout_x18_07;
    ulong *extraout_x18_08;
    int64_t iVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    uchar auVar10 [16];
    int64_t iStack_288;
    uchar auStack_280 [8];
    int64_t iStack_278;
    ulong ***pppuStack_270;
    code *pcStack_268;
    int64_t iStack_260;
    int64_t iStack_248;
    uchar auStack_240 [8];
    int64_t iStack_238;
    ulong ***pppuStack_230;
    code *pcStack_228;
    int64_t iStack_220;
    int64_t iStack_208;
    uchar auStack_200 [8];
    int64_t iStack_1f8;
    ulong ***pppuStack_1f0;
    code *pcStack_1e8;
    int64_t iStack_1e0;
    int64_t iStack_1c8;
    uchar auStack_1c0 [8];
    int64_t iStack_1b8;
    ulong ***pppuStack_1b0;
    code *pcStack_1a8;
    int64_t iStack_1a0;
    ulong *puStack_188;
    uchar auStack_180 [8];
    int64_t iStack_178;
    ulong ***pppuStack_170;
    code *pcStack_168;
    int64_t iStack_138;
    uchar auStack_130 [8];
    int64_t iStack_128;
    ulong ***pppuStack_120;
    code *pcStack_118;
    int64_t iStack_110;
    int64_t iStack_f8;
    uchar auStack_f0 [8];
    int64_t iStack_e8;
    uchar ***pppuStack_e0;
    code *pcStack_d8;
    int64_t iStack_d0;
    int64_t iStack_b8;
    uchar auStack_b0 [8];
    int64_t iStack_a8;
    uchar **ppuStack_a0;
    code *pcStack_98;
    int64_t iStack_90;
    uchar auStack_78 [8];
    int64_t iStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    int64_t iStack_50;
    uchar auStack_38 [8];
    int64_t iStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_28 = *(iVar7 + 0x5e0);
    iStack_30 = 0;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(param_1 + 0x80),auStack_38,&iStack_30,0x800127c);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(param_2 + 0x48) = *(iStack_30 + 0x1e1);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_28) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail(iVar3);
    *extraout_x18 = sym.lpass_cdc_rx_macro_hph_idle_detect_put;
    pcStack_58 = sym.lpass_cdc_rx_macro_hph_idle_detect_put;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    iStack_70 = 0;
    puStack_60 = &stack0xffffffffffffffe0;
    iStack_50 = param_2;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar9._0_8_ + 0x80),auStack_78,&iStack_70,0x80023d6);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(iStack_70 + 0x1e1) = *(auVar9._8_8_ + 0x48);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_68) {
        return iVar3;
    }
    auVar10 = __stack_chk_fail(iVar3);
    *extraout_x18_00 = sym.lpass_cdc_rx_macro_get_ear_mode;
    pcStack_98 = sym.lpass_cdc_rx_macro_get_ear_mode;
    iVar7 = sp_el0;
    iStack_a8 = *(iVar7 + 0x5e0);
    iStack_b8 = 0;
    ppuStack_a0 = &puStack_60;
    iStack_90 = auVar9._8_8_;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar10._0_8_ + 0x80),auStack_b0,&iStack_b8,0x800283c);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(auVar10._8_8_ + 0x48) = *(iStack_b8 + 0x53);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_a8) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail(iVar3);
    iVar8 = auVar9._8_8_;
    *extraout_x18_01 = sym.lpass_cdc_rx_macro_put_ear_mode;
    pcStack_d8 = sym.lpass_cdc_rx_macro_put_ear_mode;
    iVar7 = sp_el0;
    iStack_e8 = *(iVar7 + 0x5e0);
    iStack_f8 = 0;
    pppuStack_e0 = &ppuStack_a0;
    iStack_d0 = auVar10._8_8_;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar9._0_8_ + 0x80),auStack_f0,&iStack_f8,0x8001de8);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(iStack_f8 + 0x53) = *(iVar8 + 0x48) != 0;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_e8) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail(iVar3);
    *extraout_x18_02 = sym.lpass_cdc_rx_macro_fir_filter_enable_get;
    pcStack_118 = sym.lpass_cdc_rx_macro_fir_filter_enable_get;
    iVar7 = sp_el0;
    iStack_128 = *(iVar7 + 0x5e0);
    iVar7 = *(auVar9._0_8_ + 0x80);
    iStack_138 = 0;
    pppuStack_120 = &pppuStack_e0;
    iStack_110 = iVar8;
    if (iVar7 == 0) {
        iVar3 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_filter_enable_get._rs,
                             "lpass_cdc_rx_macro_fir_filter_enable_get");
        if (iVar3 != 0) {
            _printk(0x800180e,"lpass_cdc_rx_macro_fir_filter_enable_get");
        }
code_r0x080176cc:
        iVar3 = -0x16;
    }
    else {
        uVar6 = sym.lpass_cdc_rx_macro_get_data(iVar7,auStack_130,&iStack_138,0x8001ba9);
        if ((uVar6 & 1) == 0) goto code_r0x080176cc;
        iVar3 = 0;
        *(auVar9._8_8_ + 0x48) = *(iStack_138 + 0x54);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_128) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail(iVar3);
    *extraout_x18_03 = sym.lpass_cdc_rx_macro_fir_filter_enable_put;
    pcStack_168 = sym.lpass_cdc_rx_macro_fir_filter_enable_put;
    iVar7 = sp_el0;
    iStack_178 = *(iVar7 + 0x5e0);
    iVar7 = *(auVar9._0_8_ + 0x80);
    puStack_188 = NULL;
    pppuStack_170 = &pppuStack_120;
    if (iVar7 == 0) {
        iVar3 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_filter_enable_put._rs,
                             "lpass_cdc_rx_macro_fir_filter_enable_put");
        if (iVar3 != 0) {
            _printk(0x800180e,"lpass_cdc_rx_macro_fir_filter_enable_put");
            iVar3 = -0x16;
            goto code_r0x080178e4;
        }
    }
    else {
        uVar6 = sym.lpass_cdc_rx_macro_get_data(iVar7,auStack_180,&puStack_188,0x8001c78);
        puVar2 = puStack_188;
        if ((uVar6 & 1) != 0) {
            iVar8 = puStack_188[0x126];
            if ((iVar8 != 0) && (*(puStack_188 + 0x59) != '\0')) {
                cVar1 = *(auVar9._8_8_ + 0x48);
                *(puStack_188 + 0x54) = cVar1 != '\0';
                if (cVar1 == '\0') {
                    snd_soc_component_update_bits(iVar7,0x145c,0xd,0);
                    snd_soc_component_update_bits(iVar7,0x151c,0xd,0);
                    snd_soc_component_update_bits(iVar7,0x1400,0x80,0);
                    snd_soc_component_update_bits(iVar7,0x14c0,0x80,0);
                    snd_soc_component_update_bits(iVar7,0x1004,1,0);
                    iVar7 = puVar2[0x126];
                    clk_disable(iVar7);
                    clk_unprepare(iVar7);
                }
                else {
                    iVar3 = clk_prepare(iVar8);
                    if (iVar3 == 0) {
                        iVar3 = clk_enable(iVar8);
                        if (iVar3 != 0) {
                            clk_unprepare(iVar8);
                            goto code_r0x080177bc;
                        }
                    }
                    else {
code_r0x080177bc:
                        if (iVar3 < 0) {
                            iVar4 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_filter_enable_put._rs.326,
                                                 "lpass_cdc_rx_macro_fir_filter_enable_put");
                            if (iVar4 != 0) {
                                _dev_err(*puVar2,"%s:hifi_fir_clk enable failed\n",
                                         "lpass_cdc_rx_macro_fir_filter_enable_put");
                            }
                            goto code_r0x080178e4;
                        }
                    }
                    snd_soc_component_write(iVar7,0x1460,*(puVar2 + 10));
                    snd_soc_component_write(iVar7,0x1520,*(puVar2 + 0x51));
                    snd_soc_component_update_bits(iVar7,0x1004,1,1);
                    snd_soc_component_update_bits(iVar7,0x1400,0x80,0x80);
                    snd_soc_component_update_bits(iVar7,0x14c0,0x80,0x80);
                    snd_soc_component_update_bits(iVar7,0x145c,0xd,5);
                    snd_soc_component_update_bits(iVar7,0x151c,0xd,5);
                }
            }
            iVar3 = 0;
            goto code_r0x080178e4;
        }
    }
    iVar3 = -0x16;
code_r0x080178e4:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_178) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail();
    *extraout_x18_04 = sym.lpass_cdc_rx_macro_get_hph_hd2_mode;
    pcStack_1a8 = sym.lpass_cdc_rx_macro_get_hph_hd2_mode;
    iVar8 = sp_el0;
    iStack_1b8 = *(iVar8 + 0x5e0);
    iStack_1c8 = 0;
    pppuStack_1b0 = &pppuStack_170;
    iStack_1a0 = iVar7;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar9._0_8_ + 0x80),auStack_1c0,&iStack_1c8,0x8001ca1);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(auVar9._8_8_ + 0x48) = *(iStack_1c8 + 0x5d);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_1b8) {
        return iVar3;
    }
    auVar10 = __stack_chk_fail(iVar3);
    *extraout_x18_05 = sym.lpass_cdc_rx_macro_put_hph_hd2_mode;
    pcStack_1e8 = sym.lpass_cdc_rx_macro_put_hph_hd2_mode;
    iVar7 = sp_el0;
    iStack_1f8 = *(iVar7 + 0x5e0);
    iStack_208 = 0;
    pppuStack_1f0 = &pppuStack_1b0;
    iStack_1e0 = auVar9._8_8_;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar10._0_8_ + 0x80),auStack_200,&iStack_208,0x800285c);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(iStack_208 + 0x5d) = *(auVar10._8_8_ + 0x48) != 0;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_1f8) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail(iVar3);
    *extraout_x18_06 = sym.lpass_cdc_rx_macro_get_hph_pwr_mode;
    pcStack_228 = sym.lpass_cdc_rx_macro_get_hph_pwr_mode;
    iVar7 = sp_el0;
    iStack_238 = *(iVar7 + 0x5e0);
    iStack_248 = 0;
    pppuStack_230 = &pppuStack_1f0;
    iStack_220 = auVar10._8_8_;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar9._0_8_ + 0x80),auStack_240,&iStack_248,0x80016e4);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(auVar9._8_8_ + 0x48) = *(iStack_248 + 0x5c);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_238) {
        return iVar3;
    }
    auVar10 = __stack_chk_fail(iVar3);
    *extraout_x18_07 = sym.lpass_cdc_rx_macro_put_hph_pwr_mode;
    pcStack_268 = sym.lpass_cdc_rx_macro_put_hph_pwr_mode;
    iVar7 = sp_el0;
    iStack_278 = *(iVar7 + 0x5e0);
    iStack_288 = 0;
    pppuStack_270 = &pppuStack_230;
    iStack_260 = auVar9._8_8_;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar10._0_8_ + 0x80),auStack_280,&iStack_288,0x80015dc);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(iStack_288 + 0x5c) = *(auVar10._8_8_ + 0x48) != 0;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_278) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail(iVar3);
    *extraout_x18_08 = sym.lpass_cdc_rx_macro_vbat_bcl_gsm_mode_func_get;
    uVar5 = snd_soc_component_read(*(auVar9._0_8_ + 0x80),0x1284);
    *(auVar9._8_8_ + 0x48) = uVar5 >> 2 & 1;
    return 0;
}


// ===== sym.lpass_cdc_rx_macro_soft_clip_enable_get.5c0fcf43324700bd174cccbefdf1d743.cfi_jt @ 0x080133f8 (size 8) =====

ulong sym.lpass_cdc_rx_macro_soft_clip_enable_get.5c0fcf43324700bd174cccbefdf1d743.cfi_jt
                (int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong unaff_x30;
    uchar auVar5 [16];
    uchar auVar6 [16];
    int64_t iStack_f8;
    uchar auStack_f0 [8];
    int64_t iStack_e8;
    ulong **ppuStack_e0;
    code *pcStack_d8;
    int64_t iStack_d0;
    int64_t iStack_b8;
    uchar auStack_b0 [8];
    int64_t iStack_a8;
    uchar **ppuStack_a0;
    code *pcStack_98;
    int64_t iStack_90;
    int64_t iStack_78;
    uchar auStack_70 [8];
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    int64_t iStack_50;
    int64_t iStack_38;
    uchar auStack_30 [8];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    iStack_38 = 0;
    uVar3 = sym.lpass_cdc_rx_macro_get_data(*(param_1 + 0x80),auStack_30,&iStack_38,0x80018bf);
    if ((uVar3 & 1) == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        uVar4 = 0;
        *(param_2 + 0x48) = *(iStack_38 + 0x91c);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return uVar4;
    }
    auVar5 = __stack_chk_fail(uVar4);
    *extraout_x18 = sym.lpass_cdc_rx_macro_soft_clip_enable_put;
    pcStack_58 = sym.lpass_cdc_rx_macro_soft_clip_enable_put;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    iStack_78 = 0;
    puStack_60 = &stack0xffffffffffffffe0;
    iStack_50 = param_2;
    uVar3 = sym.lpass_cdc_rx_macro_get_data(*(auVar5._0_8_ + 0x80),auStack_70,&iStack_78,0x80021e2);
    if ((uVar3 & 1) == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        uVar4 = 0;
        *(iStack_78 + 0x91c) = *(auVar5._8_8_ + 0x48);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return uVar4;
    }
    auVar6 = __stack_chk_fail(uVar4);
    *extraout_x18_00 = sym.lpass_cdc_rx_macro_aux_hpf_mode_get;
    pcStack_98 = sym.lpass_cdc_rx_macro_aux_hpf_mode_get;
    iVar1 = sp_el0;
    iStack_a8 = *(iVar1 + 0x5e0);
    iStack_b8 = 0;
    ppuStack_a0 = &puStack_60;
    iStack_90 = auVar5._8_8_;
    uVar3 = sym.lpass_cdc_rx_macro_get_data(*(auVar6._0_8_ + 0x80),auStack_b0,&iStack_b8,0x800233d);
    if ((uVar3 & 1) == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        uVar4 = 0;
        *(auVar6._8_8_ + 0x48) = *(iStack_b8 + 0x920);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_a8) {
        return uVar4;
    }
    auVar5 = __stack_chk_fail(uVar4);
    *extraout_x18_01 = sym.lpass_cdc_rx_macro_aux_hpf_mode_put;
    pcStack_d8 = sym.lpass_cdc_rx_macro_aux_hpf_mode_put;
    iVar1 = sp_el0;
    iStack_e8 = *(iVar1 + 0x5e0);
    iStack_f8 = 0;
    ppuStack_e0 = &ppuStack_a0;
    iStack_d0 = auVar6._8_8_;
    uVar3 = sym.lpass_cdc_rx_macro_get_data(*(auVar5._0_8_ + 0x80),auStack_f0,&iStack_f8,0x80018e7);
    if ((uVar3 & 1) == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        uVar4 = 0;
        *(iStack_f8 + 0x920) = *(auVar5._8_8_ + 0x48);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_e8) {
        return uVar4;
    }
    auVar5 = __stack_chk_fail(uVar4);
    *extraout_x18_02 = sym.lpass_cdc_rx_macro_iir_enable_audio_mixer_get;
    iVar1 = *(auVar5._0_8_ + 0x78);
    uVar2 = *(iVar1 + 0x18);
    uVar3 = snd_soc_component_read(*(auVar5._0_8_ + 0x80),*(iVar1 + 0x10) * 0x80 + 0x1a24U & 0xfffc);
    *(auVar5._8_8_ + 0x48) = (uVar3 & 0xffffffff) >> (uVar2 & 0x3f) & 1;
    return 0;
}


// ===== sym.lpass_cdc_rx_macro_fir_coeff_num_put.5c0fcf43324700bd174cccbefdf1d743.cfi_jt @ 0x08013400 (size 8) =====

uint64_t sym.lpass_cdc_rx_macro_fir_coeff_num_put.5c0fcf43324700bd174cccbefdf1d743.cfi_jt
                   (int64_t param_1,int64_t param_2)

{
    uint8_t uVar1;
    char cVar2;
    ulong *puVar3;
    code *pcVar4;
    int iVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong *extraout_x18_07;
    ulong *extraout_x18_08;
    ulong *extraout_x18_09;
    uint64_t uVar9;
    int64_t iVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    uchar auVar12 [16];
    int64_t iStack_2d8;
    uchar auStack_2d0 [8];
    int64_t iStack_2c8;
    ulong ***pppuStack_2c0;
    code *pcStack_2b8;
    int64_t iStack_2b0;
    int64_t iStack_298;
    uchar auStack_290 [8];
    int64_t iStack_288;
    ulong ***pppuStack_280;
    code *pcStack_278;
    int64_t iStack_270;
    int64_t iStack_258;
    uchar auStack_250 [8];
    int64_t iStack_248;
    ulong ***pppuStack_240;
    code *pcStack_238;
    int64_t iStack_230;
    int64_t iStack_218;
    uchar auStack_210 [8];
    int64_t iStack_208;
    ulong ***pppuStack_200;
    code *pcStack_1f8;
    int64_t iStack_1f0;
    ulong *puStack_1d8;
    uchar auStack_1d0 [8];
    int64_t iStack_1c8;
    ulong ***pppuStack_1c0;
    code *pcStack_1b8;
    int64_t iStack_188;
    uchar auStack_180 [8];
    int64_t iStack_178;
    ulong ***pppuStack_170;
    code *pcStack_168;
    int64_t iStack_160;
    int64_t iStack_148;
    uchar auStack_140 [8];
    int64_t iStack_138;
    ulong ***pppuStack_130;
    code *pcStack_128;
    int64_t iStack_120;
    int64_t iStack_108;
    uchar auStack_100 [8];
    int64_t iStack_f8;
    uchar ***pppuStack_f0;
    code *pcStack_e8;
    int64_t iStack_e0;
    uchar auStack_c8 [8];
    int64_t iStack_c0;
    int64_t iStack_b8;
    uchar **ppuStack_b0;
    code *pcStack_a8;
    int64_t iStack_a0;
    uchar auStack_88 [8];
    int64_t iStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    uint64_t uStack_60;
    ulong *puStack_48;
    uchar auStack_40 [8];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_38 = *(iVar8 + 0x5e0);
    iVar8 = *(param_1 + 0x80);
    puStack_48 = NULL;
    uVar1 = *(param_2 + 0x48);
    uVar6 = *(*(param_1 + 0x78) + 0x18);
    uVar9 = uVar6;
    if (iVar8 == 0) {
        iVar5 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_coeff_num_put._rs,"lpass_cdc_rx_macro_fir_coeff_num_put");
        if (iVar5 != 0) {
            _printk(0x800180e,"lpass_cdc_rx_macro_fir_coeff_num_put");
        }
code_r0x08017348:
        uVar7 = 0xffffffea;
    }
    else {
        uVar7 = sym.lpass_cdc_rx_macro_get_data(iVar8,auStack_40,&puStack_48,0x8002160);
        if ((uVar7 & 1) == 0) goto code_r0x08017348;
        if (uVar1 < 0xc9) {
            if (1 < uVar6) goto code_r0x08017404;
            iVar5 = *(puStack_48 + uVar9 * 8 + 0x8ec);
            *(puStack_48 + uVar9 + 0x50) = uVar1;
            if (*(puStack_48 + uVar9 + 0x11e) + iVar5 == uVar1) {
                uVar7 = sym.set_fir_filter_coeff(iVar8,puStack_48,uVar9);
            }
            else {
                uVar7 = 0;
            }
        }
        else {
            iVar5 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_coeff_num_put._rs.315,
                                 "lpass_cdc_rx_macro_fir_coeff_num_put");
            if (iVar5 != 0) {
                _dev_err(*puStack_48,"%s: inavlid total number of RX_FIR coefficients:%d in path:%d\n",
                         "lpass_cdc_rx_macro_fir_coeff_num_put",uVar1,uVar9);
            }
            if (1 < uVar6) {
code_r0x08017404:
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x5512,0x8017408);
                (*pcVar4)();
            }
            uVar7 = 0xffffffea;
            *(puStack_48 + uVar9 + 0x50) = 0;
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_38) {
        return uVar7;
    }
    auVar11 = __stack_chk_fail(uVar7);
    *extraout_x18 = sym.lpass_cdc_rx_macro_hph_idle_detect_get;
    pcStack_68 = sym.lpass_cdc_rx_macro_hph_idle_detect_get;
    iVar8 = sp_el0;
    iStack_78 = *(iVar8 + 0x5e0);
    iStack_80 = 0;
    puStack_70 = &stack0xffffffffffffffd0;
    uStack_60 = uVar9;
    uVar9 = sym.lpass_cdc_rx_macro_get_data(*(auVar11._0_8_ + 0x80),auStack_88,&iStack_80,0x800127c);
    if ((uVar9 & 1) == 0) {
        uVar9 = 0xffffffea;
    }
    else {
        uVar9 = 0;
        *(auVar11._8_8_ + 0x48) = *(iStack_80 + 0x1e1);
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_78) {
        return uVar9;
    }
    auVar12 = __stack_chk_fail(uVar9);
    *extraout_x18_00 = sym.lpass_cdc_rx_macro_hph_idle_detect_put;
    pcStack_a8 = sym.lpass_cdc_rx_macro_hph_idle_detect_put;
    iVar8 = sp_el0;
    iStack_b8 = *(iVar8 + 0x5e0);
    iStack_c0 = 0;
    ppuStack_b0 = &puStack_70;
    iStack_a0 = auVar11._8_8_;
    uVar9 = sym.lpass_cdc_rx_macro_get_data(*(auVar12._0_8_ + 0x80),auStack_c8,&iStack_c0,0x80023d6);
    if ((uVar9 & 1) == 0) {
        uVar9 = 0xffffffea;
    }
    else {
        uVar9 = 0;
        *(iStack_c0 + 0x1e1) = *(auVar12._8_8_ + 0x48);
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_b8) {
        return uVar9;
    }
    auVar11 = __stack_chk_fail(uVar9);
    *extraout_x18_01 = sym.lpass_cdc_rx_macro_get_ear_mode;
    pcStack_e8 = sym.lpass_cdc_rx_macro_get_ear_mode;
    iVar8 = sp_el0;
    iStack_f8 = *(iVar8 + 0x5e0);
    iStack_108 = 0;
    pppuStack_f0 = &ppuStack_b0;
    iStack_e0 = auVar12._8_8_;
    uVar9 = sym.lpass_cdc_rx_macro_get_data(*(auVar11._0_8_ + 0x80),auStack_100,&iStack_108,0x800283c);
    if ((uVar9 & 1) == 0) {
        uVar9 = 0xffffffea;
    }
    else {
        uVar9 = 0;
        *(auVar11._8_8_ + 0x48) = *(iStack_108 + 0x53);
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_f8) {
        return uVar9;
    }
    auVar12 = __stack_chk_fail(uVar9);
    iVar10 = auVar12._8_8_;
    *extraout_x18_02 = sym.lpass_cdc_rx_macro_put_ear_mode;
    pcStack_128 = sym.lpass_cdc_rx_macro_put_ear_mode;
    iVar8 = sp_el0;
    iStack_138 = *(iVar8 + 0x5e0);
    iStack_148 = 0;
    pppuStack_130 = &pppuStack_f0;
    iStack_120 = auVar11._8_8_;
    uVar9 = sym.lpass_cdc_rx_macro_get_data(*(auVar12._0_8_ + 0x80),auStack_140,&iStack_148,0x8001de8);
    if ((uVar9 & 1) == 0) {
        uVar9 = 0xffffffea;
    }
    else {
        uVar9 = 0;
        *(iStack_148 + 0x53) = *(iVar10 + 0x48) != 0;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_138) {
        return uVar9;
    }
    auVar11 = __stack_chk_fail(uVar9);
    *extraout_x18_03 = sym.lpass_cdc_rx_macro_fir_filter_enable_get;
    pcStack_168 = sym.lpass_cdc_rx_macro_fir_filter_enable_get;
    iVar8 = sp_el0;
    iStack_178 = *(iVar8 + 0x5e0);
    iVar8 = *(auVar11._0_8_ + 0x80);
    iStack_188 = 0;
    pppuStack_170 = &pppuStack_130;
    iStack_160 = iVar10;
    if (iVar8 == 0) {
        iVar5 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_filter_enable_get._rs,
                             "lpass_cdc_rx_macro_fir_filter_enable_get");
        if (iVar5 != 0) {
            _printk(0x800180e,"lpass_cdc_rx_macro_fir_filter_enable_get");
        }
code_r0x080176cc:
        uVar9 = 0xffffffea;
    }
    else {
        uVar9 = sym.lpass_cdc_rx_macro_get_data(iVar8,auStack_180,&iStack_188,0x8001ba9);
        if ((uVar9 & 1) == 0) goto code_r0x080176cc;
        uVar9 = 0;
        *(auVar11._8_8_ + 0x48) = *(iStack_188 + 0x54);
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_178) {
        return uVar9;
    }
    auVar11 = __stack_chk_fail(uVar9);
    *extraout_x18_04 = sym.lpass_cdc_rx_macro_fir_filter_enable_put;
    pcStack_1b8 = sym.lpass_cdc_rx_macro_fir_filter_enable_put;
    iVar8 = sp_el0;
    iStack_1c8 = *(iVar8 + 0x5e0);
    iVar8 = *(auVar11._0_8_ + 0x80);
    puStack_1d8 = NULL;
    pppuStack_1c0 = &pppuStack_170;
    if (iVar8 == 0) {
        iVar5 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_filter_enable_put._rs,
                             "lpass_cdc_rx_macro_fir_filter_enable_put");
        if (iVar5 != 0) {
            _printk(0x800180e,"lpass_cdc_rx_macro_fir_filter_enable_put");
            uVar9 = 0xffffffea;
            goto code_r0x080178e4;
        }
    }
    else {
        uVar9 = sym.lpass_cdc_rx_macro_get_data(iVar8,auStack_1d0,&puStack_1d8,0x8001c78);
        puVar3 = puStack_1d8;
        if ((uVar9 & 1) != 0) {
            iVar10 = puStack_1d8[0x126];
            if ((iVar10 != 0) && (*(puStack_1d8 + 0x59) != '\0')) {
                cVar2 = *(auVar11._8_8_ + 0x48);
                *(puStack_1d8 + 0x54) = cVar2 != '\0';
                if (cVar2 == '\0') {
                    snd_soc_component_update_bits(iVar8,0x145c,0xd,0);
                    snd_soc_component_update_bits(iVar8,0x151c,0xd,0);
                    snd_soc_component_update_bits(iVar8,0x1400,0x80,0);
                    snd_soc_component_update_bits(iVar8,0x14c0,0x80,0);
                    snd_soc_component_update_bits(iVar8,0x1004,1,0);
                    iVar8 = puVar3[0x126];
                    clk_disable(iVar8);
                    clk_unprepare(iVar8);
                }
                else {
                    uVar6 = clk_prepare(iVar10);
                    if (uVar6 == 0) {
                        uVar6 = clk_enable(iVar10);
                        if (uVar6 != 0) {
                            clk_unprepare(iVar10);
                            goto code_r0x080177bc;
                        }
                    }
                    else {
code_r0x080177bc:
                        uVar9 = uVar6;
                        if (uVar6 < 0) {
                            iVar5 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_filter_enable_put._rs.326,
                                                 "lpass_cdc_rx_macro_fir_filter_enable_put");
                            if (iVar5 != 0) {
                                _dev_err(*puVar3,"%s:hifi_fir_clk enable failed\n",
                                         "lpass_cdc_rx_macro_fir_filter_enable_put");
                            }
                            goto code_r0x080178e4;
                        }
                    }
                    snd_soc_component_write(iVar8,0x1460,*(puVar3 + 10));
                    snd_soc_component_write(iVar8,0x1520,*(puVar3 + 0x51));
                    snd_soc_component_update_bits(iVar8,0x1004,1,1);
                    snd_soc_component_update_bits(iVar8,0x1400,0x80,0x80);
                    snd_soc_component_update_bits(iVar8,0x14c0,0x80,0x80);
                    snd_soc_component_update_bits(iVar8,0x145c,0xd,5);
                    snd_soc_component_update_bits(iVar8,0x151c,0xd,5);
                }
            }
            uVar9 = 0;
            goto code_r0x080178e4;
        }
    }
    uVar9 = 0xffffffea;
code_r0x080178e4:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_1c8) {
        return uVar9;
    }
    auVar11 = __stack_chk_fail();
    *extraout_x18_05 = sym.lpass_cdc_rx_macro_get_hph_hd2_mode;
    pcStack_1f8 = sym.lpass_cdc_rx_macro_get_hph_hd2_mode;
    iVar10 = sp_el0;
    iStack_208 = *(iVar10 + 0x5e0);
    iStack_218 = 0;
    pppuStack_200 = &pppuStack_1c0;
    iStack_1f0 = iVar8;
    uVar9 = sym.lpass_cdc_rx_macro_get_data(*(auVar11._0_8_ + 0x80),auStack_210,&iStack_218,0x8001ca1);
    if ((uVar9 & 1) == 0) {
        uVar9 = 0xffffffea;
    }
    else {
        uVar9 = 0;
        *(auVar11._8_8_ + 0x48) = *(iStack_218 + 0x5d);
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_208) {
        return uVar9;
    }
    auVar12 = __stack_chk_fail(uVar9);
    *extraout_x18_06 = sym.lpass_cdc_rx_macro_put_hph_hd2_mode;
    pcStack_238 = sym.lpass_cdc_rx_macro_put_hph_hd2_mode;
    iVar8 = sp_el0;
    iStack_248 = *(iVar8 + 0x5e0);
    iStack_258 = 0;
    pppuStack_240 = &pppuStack_200;
    iStack_230 = auVar11._8_8_;
    uVar9 = sym.lpass_cdc_rx_macro_get_data(*(auVar12._0_8_ + 0x80),auStack_250,&iStack_258,0x800285c);
    if ((uVar9 & 1) == 0) {
        uVar9 = 0xffffffea;
    }
    else {
        uVar9 = 0;
        *(iStack_258 + 0x5d) = *(auVar12._8_8_ + 0x48) != 0;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_248) {
        return uVar9;
    }
    auVar11 = __stack_chk_fail(uVar9);
    *extraout_x18_07 = sym.lpass_cdc_rx_macro_get_hph_pwr_mode;
    pcStack_278 = sym.lpass_cdc_rx_macro_get_hph_pwr_mode;
    iVar8 = sp_el0;
    iStack_288 = *(iVar8 + 0x5e0);
    iStack_298 = 0;
    pppuStack_280 = &pppuStack_240;
    iStack_270 = auVar12._8_8_;
    uVar9 = sym.lpass_cdc_rx_macro_get_data(*(auVar11._0_8_ + 0x80),auStack_290,&iStack_298,0x80016e4);
    if ((uVar9 & 1) == 0) {
        uVar9 = 0xffffffea;
    }
    else {
        uVar9 = 0;
        *(auVar11._8_8_ + 0x48) = *(iStack_298 + 0x5c);
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_288) {
        return uVar9;
    }
    auVar12 = __stack_chk_fail(uVar9);
    *extraout_x18_08 = sym.lpass_cdc_rx_macro_put_hph_pwr_mode;
    pcStack_2b8 = sym.lpass_cdc_rx_macro_put_hph_pwr_mode;
    iVar8 = sp_el0;
    iStack_2c8 = *(iVar8 + 0x5e0);
    iStack_2d8 = 0;
    pppuStack_2c0 = &pppuStack_280;
    iStack_2b0 = auVar11._8_8_;
    uVar9 = sym.lpass_cdc_rx_macro_get_data(*(auVar12._0_8_ + 0x80),auStack_2d0,&iStack_2d8,0x80015dc);
    if ((uVar9 & 1) == 0) {
        uVar9 = 0xffffffea;
    }
    else {
        uVar9 = 0;
        *(iStack_2d8 + 0x5c) = *(auVar12._8_8_ + 0x48) != 0;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_2c8) {
        return uVar9;
    }
    auVar11 = __stack_chk_fail(uVar9);
    *extraout_x18_09 = sym.lpass_cdc_rx_macro_vbat_bcl_gsm_mode_func_get;
    uVar6 = snd_soc_component_read(*(auVar11._0_8_ + 0x80),0x1284);
    *(auVar11._8_8_ + 0x48) = uVar6 >> 2 & 1;
    return 0;
}


// ===== sym.lpass_cdc_rx_macro_vbat_bcl_gsm_mode_func_get.5c0fcf43324700bd174cccbefdf1d743.cfi_jt @ 0x08013408 (size 8) =====

ulong sym.lpass_cdc_rx_macro_vbat_bcl_gsm_mode_func_get.5c0fcf43324700bd174cccbefdf1d743.cfi_jt
                (int64_t param_1,int64_t param_2)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = snd_soc_component_read(*(param_1 + 0x80),0x1284);
    *(param_2 + 0x48) = uVar1 >> 2 & 1;
    return 0;
}


// ===== sym.lpass_cdc_rx_macro_mux_put.5c0fcf43324700bd174cccbefdf1d743.cfi_jt @ 0x08013410 (size 8) =====

void sym.lpass_cdc_rx_macro_mux_put.5c0fcf43324700bd174cccbefdf1d743.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    uint8_t uVar3;
    char cVar4;
    bool bVar5;
    code *pcVar6;
    int iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    char *pcVar10;
    int64_t iVar11;
    uint32_t *puVar12;
    int64_t iVar13;
    ulong *in_x18;
    uint32_t uVar14;
    uint64_t uVar15;
    ulong uVar16;
    ulong unaff_x30;
    int64_t iStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_48 = *(iVar8 + 0x5e0);
    iVar8 = snd_soc_dapm_kcontrol_widget();
    iVar11 = *(iVar8 + 0x28);
    uVar16 = *(param_1 + 0x78);
    uVar15 = *(param_2 + 0x48);
    iStack_58 = 0;
    uStack_50 = 0;
    uVar9 = sym.lpass_cdc_rx_macro_get_data(iVar11 + -0xd0,&uStack_50,&iStack_58,0x8001439);
    if ((uVar9 & 1) == 0) {
code_r0x08015f24:
        uVar16 = 0xffffffea;
    }
    else {
        if (5 < *(iVar8 + 0x4c)) goto code_r0x08015ffc;
        puVar12 = iStack_58 + *(iVar8 + 0x4c) * 4 + 0x1c;
        uVar2 = *puVar12;
        uVar14 = uVar15;
        if (uVar14 == 0) {
            if (uVar2 == 0) {
                uVar16 = ___ratelimit(obj.lpass_cdc_rx_macro_mux_put._rs,"lpass_cdc_rx_macro_mux_put");
                if (uVar16 != 0) {
                    pcVar10 = "%s:AIF reset already\n";
code_r0x08015f80:
                    _dev_err(uStack_50,pcVar10,"lpass_cdc_rx_macro_mux_put");
                    goto code_r0x08015ed0;
                }
            }
            else {
                if (uVar2 < 5) {
                    iVar11 = iStack_58 + uVar2 * 8;
                    *puVar12 = 0;
                    if (*(iVar11 + 0x180) != 0) {
                        uVar3 = *(iVar8 + 0x4c);
                        puVar1 = iVar11 + (uVar3 >> 3 & 0x18) + 0x140;
                        Hint_Prefetch(puVar1,2,0,1);
                        do {
                            cVar4 = '\x01';
                            bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                            if (bVar5) {
                                *puVar1 = *puVar1 & (1L << (uVar3 & 0x3f) ^ 0xffffffffffffffffU);
                                cVar4 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar4 != '\0');
                        iVar13 = -1;
                        goto code_r0x08015eac;
                    }
                    goto code_r0x08015eb8;
                }
                uVar16 = ___ratelimit(obj.lpass_cdc_rx_macro_mux_put._rs.148,"lpass_cdc_rx_macro_mux_put");
                if (uVar16 != 0) {
                    pcVar10 = "%s: Invalid AIF reset\n";
                    goto code_r0x08015f80;
                }
            }
        }
        else {
            *puVar12 = uVar14;
            if (uVar14 - 1 < 4) {
                uVar9 = uVar15 & 0xffffffff;
                if (8 < uVar9) goto code_r0x08015ffc;
                uVar3 = *(iVar8 + 0x4c);
                puVar1 = iStack_58 + uVar9 * 8 + (uVar3 >> 3 & 0x18) + 0x140;
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    cVar4 = '\x01';
                    bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar5) {
                        *puVar1 = *puVar1 | 1L << (uVar3 & 0x3f);
                        cVar4 = ExclusiveMonitorsStatus();
                    }
                } while (cVar4 != '\0');
                iVar11 = iStack_58 + uVar9 * 8;
                iVar13 = 1;
code_r0x08015eac:
                *(iVar11 + 0x180) = *(iVar11 + 0x180) + iVar13;
code_r0x08015eb8:
                snd_soc_dapm_mux_update_power(*(iVar8 + 0x28),param_1,uVar15 & 0xffffffff,uVar16,0);
code_r0x08015ed0:
                uVar16 = 0;
            }
            else {
                iVar7 = ___ratelimit(obj.lpass_cdc_rx_macro_mux_put._rs.150,"lpass_cdc_rx_macro_mux_put");
                if (iVar7 == 0) goto code_r0x08015f24;
                _dev_err(*(iVar11 + -0xb8),"%s:Invalid AIF_ID for LPASS_CDC_RX_MACRO MUX %d\n",
                         "lpass_cdc_rx_macro_mux_put",uVar15 & 0xffffffff);
                uVar16 = 0xffffffea;
            }
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_48) {
        return;
    }
    __stack_chk_fail(uVar16);
code_r0x08015ffc:
    //WARNING: Does not return
    pcVar6 = SoftwareBreakpoint(0x5512,0x8016000);
    (*pcVar6)();
}


// ===== sym.lpass_cdc_rx_macro_get_compander.5c0fcf43324700bd174cccbefdf1d743.cfi_jt @ 0x08013418 (size 8) =====

void sym.lpass_cdc_rx_macro_get_compander.5c0fcf43324700bd174cccbefdf1d743.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint32_t uVar1;
    int64_t iVar2;
    code *pcVar3;
    uint64_t uVar4;
    ulong uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    int64_t iStack_38;
    uchar auStack_30 [8];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    iStack_38 = 0;
    uVar1 = *(*(param_1 + 0x78) + 0x18);
    uVar4 = sym.lpass_cdc_rx_macro_get_data(*(param_1 + 0x80),auStack_30,&iStack_38,0x80024bd);
    if ((uVar4 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        if (1 < uVar1) goto code_r0x080170e0;
        uVar5 = 0;
        *(param_2 + 0x48) = *(iStack_38 + uVar1 * 4 + 8);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return;
    }
    __stack_chk_fail(uVar5);
code_r0x080170e0:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x80170e4);
    (*pcVar3)();
}


// ===== sym.snd_soc_put_volsw.cfi_jt @ 0x08013420 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_put_volsw.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.lpass_cdc_rx_macro_int_dem_inp_mux_put.5c0fcf43324700bd174cccbefdf1d743.cfi_jt @ 0x08013428 (size 8) =====

ulong sym.lpass_cdc_rx_macro_int_dem_inp_mux_put.5c0fcf43324700bd174cccbefdf1d743.cfi_jt
                (int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    ulong uVar2;
    uint uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snd_soc_dapm_kcontrol_widget();
    if (*(param_2 + 0x48) < (*(param_1 + 0x78))[2]) {
        uVar3 = 0x14c4;
        if (**(param_1 + 0x78) != 0x14c8) {
            uVar3 = 0x1404;
        }
        snd_soc_component_update_bits(*(iVar1 + 0x28) + -0xd0,uVar3,8,(*(param_2 + 0x48) != 0) << 3);
        uVar2 = snd_soc_dapm_put_enum_double(param_1,param_2);
    }
    else {
        uVar2 = 0xffffffea;
    }
    return uVar2;
}


// ===== sym.lpass_cdc_rx_macro_get_hph_hd2_mode.5c0fcf43324700bd174cccbefdf1d743.cfi_jt @ 0x08013430 (size 8) =====

ulong sym.lpass_cdc_rx_macro_get_hph_hd2_mode.5c0fcf43324700bd174cccbefdf1d743.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong unaff_x30;
    uchar auVar5 [16];
    uchar auVar6 [16];
    int64_t iStack_f8;
    uchar auStack_f0 [8];
    int64_t iStack_e8;
    ulong **ppuStack_e0;
    code *pcStack_d8;
    int64_t iStack_d0;
    int64_t iStack_b8;
    uchar auStack_b0 [8];
    int64_t iStack_a8;
    uchar **ppuStack_a0;
    code *pcStack_98;
    int64_t iStack_90;
    int64_t iStack_78;
    uchar auStack_70 [8];
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    int64_t iStack_50;
    int64_t iStack_38;
    uchar auStack_30 [8];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    iStack_38 = 0;
    uVar3 = sym.lpass_cdc_rx_macro_get_data(*(param_1 + 0x80),auStack_30,&iStack_38,0x8001ca1);
    if ((uVar3 & 1) == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        uVar4 = 0;
        *(param_2 + 0x48) = *(iStack_38 + 0x5d);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return uVar4;
    }
    auVar5 = __stack_chk_fail(uVar4);
    *extraout_x18 = sym.lpass_cdc_rx_macro_put_hph_hd2_mode;
    pcStack_58 = sym.lpass_cdc_rx_macro_put_hph_hd2_mode;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    iStack_78 = 0;
    puStack_60 = &stack0xffffffffffffffe0;
    iStack_50 = param_2;
    uVar3 = sym.lpass_cdc_rx_macro_get_data(*(auVar5._0_8_ + 0x80),auStack_70,&iStack_78,0x800285c);
    if ((uVar3 & 1) == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        uVar4 = 0;
        *(iStack_78 + 0x5d) = *(auVar5._8_8_ + 0x48) != 0;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return uVar4;
    }
    auVar6 = __stack_chk_fail(uVar4);
    *extraout_x18_00 = sym.lpass_cdc_rx_macro_get_hph_pwr_mode;
    pcStack_98 = sym.lpass_cdc_rx_macro_get_hph_pwr_mode;
    iVar1 = sp_el0;
    iStack_a8 = *(iVar1 + 0x5e0);
    iStack_b8 = 0;
    ppuStack_a0 = &puStack_60;
    iStack_90 = auVar5._8_8_;
    uVar3 = sym.lpass_cdc_rx_macro_get_data(*(auVar6._0_8_ + 0x80),auStack_b0,&iStack_b8,0x80016e4);
    if ((uVar3 & 1) == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        uVar4 = 0;
        *(auVar6._8_8_ + 0x48) = *(iStack_b8 + 0x5c);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_a8) {
        return uVar4;
    }
    auVar5 = __stack_chk_fail(uVar4);
    *extraout_x18_01 = sym.lpass_cdc_rx_macro_put_hph_pwr_mode;
    pcStack_d8 = sym.lpass_cdc_rx_macro_put_hph_pwr_mode;
    iVar1 = sp_el0;
    iStack_e8 = *(iVar1 + 0x5e0);
    iStack_f8 = 0;
    ppuStack_e0 = &ppuStack_a0;
    iStack_d0 = auVar6._8_8_;
    uVar3 = sym.lpass_cdc_rx_macro_get_data(*(auVar5._0_8_ + 0x80),auStack_f0,&iStack_f8,0x80015dc);
    if ((uVar3 & 1) == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        uVar4 = 0;
        *(iStack_f8 + 0x5c) = *(auVar5._8_8_ + 0x48) != 0;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_e8) {
        return uVar4;
    }
    auVar5 = __stack_chk_fail(uVar4);
    *extraout_x18_02 = sym.lpass_cdc_rx_macro_vbat_bcl_gsm_mode_func_get;
    uVar2 = snd_soc_component_read(*(auVar5._0_8_ + 0x80),0x1284);
    *(auVar5._8_8_ + 0x48) = uVar2 >> 2 & 1;
    return 0;
}


// ===== sym.snd_soc_dapm_put_enum_double.cfi_jt @ 0x08013438 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_dapm_put_enum_double.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.snd_soc_dapm_put_volsw.cfi_jt @ 0x08013440 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_dapm_put_volsw.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.lpass_cdc_rx_macro_aux_hpf_mode_put.5c0fcf43324700bd174cccbefdf1d743.cfi_jt @ 0x08013448 (size 8) =====

ulong sym.lpass_cdc_rx_macro_aux_hpf_mode_put.5c0fcf43324700bd174cccbefdf1d743.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar5 [16];
    int64_t iStack_38;
    uchar auStack_30 [8];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    iStack_38 = 0;
    uVar3 = sym.lpass_cdc_rx_macro_get_data(*(param_1 + 0x80),auStack_30,&iStack_38,0x80018e7);
    if ((uVar3 & 1) == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        uVar4 = 0;
        *(iStack_38 + 0x920) = *(param_2 + 0x48);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return uVar4;
    }
    auVar5 = __stack_chk_fail(uVar4);
    *extraout_x18 = sym.lpass_cdc_rx_macro_iir_enable_audio_mixer_get;
    iVar1 = *(auVar5._0_8_ + 0x78);
    uVar2 = *(iVar1 + 0x18);
    uVar3 = snd_soc_component_read(*(auVar5._0_8_ + 0x80),*(iVar1 + 0x10) * 0x80 + 0x1a24U & 0xfffc);
    *(auVar5._8_8_ + 0x48) = (uVar3 & 0xffffffff) >> (uVar2 & 0x3f) & 1;
    return 0;
}


// ===== sym.lpass_cdc_rx_macro_iir_band_audio_mixer_get.5c0fcf43324700bd174cccbefdf1d743.cfi_jt @ 0x08013450 (size 8) =====

ulong sym.lpass_cdc_rx_macro_iir_band_audio_mixer_get.5c0fcf43324700bd174cccbefdf1d743.cfi_jt
                (int64_t param_1,int64_t param_2)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t *puVar3;
    uint32_t uVar4;
    int64_t iVar5;
    code *pcVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    int iVar9;
    uint32_t uVar10;
    ulong uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar12;
    uint64_t uVar13;
    int64_t iVar14;
    int64_t iVar15;
    ulong unaff_x30;
    uchar auVar16 [16];
    int64_t iStack_110;
    uchar auStack_108 [8];
    ulong uStack_100;
    ulong uStack_f8;
    uint uStack_f0;
    int64_t iStack_e8;
    uchar *puStack_e0;
    code *pcStack_d8;
    uint64_t uStack_d0;
    uint64_t uStack_c0;
    uint64_t uStack_b8;
    uint64_t uStack_b0;
    uint64_t uStack_a8;
    ulong uStack_a0;
    uint64_t uStack_98;
    int *piStack_90;
    int64_t iStack_88;
    uint32_t auStack_80 [6];
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar15 = sp_el0;
    iStack_68 = *(iVar15 + 0x5e0);
    iVar15 = 0;
    piStack_90 = *(param_1 + 0x78);
    uVar11 = *(param_1 + 0x80);
    auStack_80[4] = 0;
    auStack_80[0] = 0;
    auStack_80[1] = 0;
    auStack_80[2] = 0;
    auStack_80[3] = 0;
    iVar2 = piStack_90[1];
    uVar12 = *piStack_90 * 0x80 + 0x1a2c;
    uVar13 = *piStack_90 * 0x80 + 0x1a30;
    iStack_88 = param_2;
    do {
        uVar1 = iVar2 * 0x14 + iVar15 & 0x7c;
        snd_soc_component_write(uVar11,uVar12,uVar1);
        uVar7 = snd_soc_component_read(uVar11,uVar13);
        snd_soc_component_write(uVar11,uVar12,uVar1 | 1);
        uVar8 = snd_soc_component_read(uVar11,uVar13);
        snd_soc_component_write(uVar11,uVar12,uVar1 | 2);
        iVar9 = snd_soc_component_read(uVar11,uVar13);
        snd_soc_component_write(uVar11,uVar12,uVar1 | 3);
        uVar10 = snd_soc_component_read(uVar11,uVar13);
        *(auStack_80 + iVar15) = uVar7 | uVar8 << 8 | iVar9 << 0x10 | (uVar10 & 0x3f) << 0x18;
        iVar15 = iVar15 + 4;
    } while (iVar15 != 0x14);
    memcpy(iStack_88 + 0x48,auStack_80,piStack_90[2]);
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_68) {
        return 0;
    }
    auVar16 = __stack_chk_fail();
    *extraout_x18 = sym.lpass_cdc_rx_macro_iir_band_audio_mixer_put;
    pcStack_d8 = sym.lpass_cdc_rx_macro_iir_band_audio_mixer_put;
    iVar15 = sp_el0;
    iStack_e8 = *(iVar15 + 0x5e0);
    puVar3 = *(auVar16._0_8_ + 0x78);
    iVar15 = *(auVar16._0_8_ + 0x80);
    uStack_f0 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    iStack_110 = 0;
    uVar10 = *puVar3;
    uVar4 = puVar3[2];
    puStack_e0 = &stack0xffffffffffffffa0;
    uStack_d0 = uVar8;
    uStack_c0 = uVar7;
    uStack_b8 = uVar1;
    uStack_b0 = uVar13;
    uStack_a8 = uVar12;
    uStack_a0 = uVar11;
    uStack_98 = iVar2 * 0x14;
    uVar12 = sym.lpass_cdc_rx_macro_get_data(iVar15,auStack_108,&iStack_110,0x8001708);
    if ((uVar12 & 1) == 0) {
        uVar11 = 0xffffffea;
    }
    else {
        memcpy(&uStack_100,auVar16._8_8_ + 0x48,puVar3[2]);
        snd_soc_component_write(iVar15,uVar10 * 0x80 + 0x1a2c,(uVar4 * 5 & 0x1f) << 2);
        iVar5 = iStack_110;
        uVar1 = uStack_100;
        iVar2 = uVar10 * 0x80 + 0x1a30;
        snd_soc_component_write(iVar15,iVar2,uStack_100 & 0xff);
        snd_soc_component_write(iVar15,iVar2,uVar1 >> 8 & 0xff);
        snd_soc_component_write(iVar15,iVar2,uVar1 >> 0x10 & 0xff);
        snd_soc_component_write(iVar15,iVar2,uVar1 >> 0x18 & 0x3f);
        if ((1 < uVar10) || (4 < uVar4)) goto code_r0x080184fc;
        iVar14 = 0;
        *(iVar5 + uVar10 * 100 + uVar4 * 0x14 + 0x1e2) = uVar1;
        do {
            uVar1 = *((&uStack_100 | 4) + iVar14);
            snd_soc_component_write(iVar15,iVar2,uVar1 & 0xff);
            snd_soc_component_write(iVar15,iVar2,uVar1 >> 8 & 0xff);
            snd_soc_component_write(iVar15,iVar2,uVar1 >> 0x10 & 0xff);
            snd_soc_component_write(iVar15,iVar2,uVar1 >> 0x18 & 0x3f);
            *(uVar10 * 100 + uVar4 * 0x14 + iVar5 + 0x1e6 + iVar14) = uVar1;
            iVar14 = iVar14 + 4;
        } while (iVar14 != 0x10);
        uVar11 = 0;
    }
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_e8) {
        return uVar11;
    }
    __stack_chk_fail(uVar11);
code_r0x080184fc:
    //WARNING: Does not return
    pcVar6 = SoftwareBreakpoint(0x5512,0x8018500);
    (*pcVar6)();
}


// ===== sym.snd_soc_get_volsw.cfi_jt @ 0x08013458 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_get_volsw.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.lpass_cdc_rx_macro_fir_coeff_num_get.5c0fcf43324700bd174cccbefdf1d743.cfi_jt @ 0x08013460 (size 8) =====

uint64_t sym.lpass_cdc_rx_macro_fir_coeff_num_get.5c0fcf43324700bd174cccbefdf1d743.cfi_jt
                   (int64_t param_1,int64_t param_2)

{
    uint8_t uVar1;
    char cVar2;
    ulong *puVar3;
    code *pcVar4;
    int iVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    int64_t iVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong *extraout_x18_07;
    ulong *extraout_x18_08;
    ulong *extraout_x18_09;
    ulong *extraout_x18_10;
    int64_t iVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    uchar auVar12 [16];
    int64_t iStack_318;
    uchar auStack_310 [8];
    int64_t iStack_308;
    ulong ***pppuStack_300;
    code *pcStack_2f8;
    int64_t iStack_2f0;
    int64_t iStack_2d8;
    uchar auStack_2d0 [8];
    int64_t iStack_2c8;
    ulong ***pppuStack_2c0;
    code *pcStack_2b8;
    int64_t iStack_2b0;
    int64_t iStack_298;
    uchar auStack_290 [8];
    int64_t iStack_288;
    ulong ***pppuStack_280;
    code *pcStack_278;
    int64_t iStack_270;
    int64_t iStack_258;
    uchar auStack_250 [8];
    int64_t iStack_248;
    ulong ***pppuStack_240;
    code *pcStack_238;
    int64_t iStack_230;
    ulong *puStack_218;
    uchar auStack_210 [8];
    int64_t iStack_208;
    ulong ***pppuStack_200;
    code *pcStack_1f8;
    int64_t iStack_1c8;
    uchar auStack_1c0 [8];
    int64_t iStack_1b8;
    ulong ***pppuStack_1b0;
    code *pcStack_1a8;
    int64_t iStack_1a0;
    int64_t iStack_188;
    uchar auStack_180 [8];
    int64_t iStack_178;
    ulong ***pppuStack_170;
    code *pcStack_168;
    int64_t iStack_160;
    int64_t iStack_148;
    uchar auStack_140 [8];
    int64_t iStack_138;
    ulong ***pppuStack_130;
    code *pcStack_128;
    int64_t iStack_120;
    uchar auStack_108 [8];
    int64_t iStack_100;
    int64_t iStack_f8;
    uchar ***pppuStack_f0;
    code *pcStack_e8;
    int64_t iStack_e0;
    uchar auStack_c8 [8];
    int64_t iStack_c0;
    int64_t iStack_b8;
    uchar **ppuStack_b0;
    code *pcStack_a8;
    uint64_t uStack_a0;
    ulong *puStack_88;
    uchar auStack_80 [8];
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    ulong *puStack_38;
    uchar auStack_30 [8];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_28 = *(iVar9 + 0x5e0);
    puStack_38 = NULL;
    uVar6 = *(*(param_1 + 0x78) + 0x18);
    if (*(param_1 + 0x80) == 0) {
        iVar5 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_coeff_num_get._rs,"lpass_cdc_rx_macro_fir_coeff_num_get");
        if (iVar5 != 0) {
            _printk(0x800180e,"lpass_cdc_rx_macro_fir_coeff_num_get");
            uVar7 = 0xffffffea;
            goto code_r0x08017238;
        }
code_r0x08017234:
        uVar7 = 0xffffffea;
    }
    else {
        uVar7 = sym.lpass_cdc_rx_macro_get_data(*(param_1 + 0x80),auStack_30,&puStack_38,0x800201b);
        if ((uVar7 & 1) == 0) goto code_r0x08017234;
        if (uVar6 < 2) {
            uVar7 = 0;
            *(param_2 + 0x48) = *(puStack_38 + uVar6 + 0x50);
        }
        else {
            iVar5 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_coeff_num_get._rs.313,
                                 "lpass_cdc_rx_macro_fir_coeff_num_get");
            if (iVar5 == 0) goto code_r0x08017234;
            _dev_err(*puStack_38,"%s: path_idx:%d is invalid\n","lpass_cdc_rx_macro_fir_coeff_num_get",uVar6);
            uVar7 = 0xffffffea;
        }
    }
code_r0x08017238:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_28) {
        return uVar7;
    }
    auVar11 = __stack_chk_fail(uVar7);
    *extraout_x18 = sym.lpass_cdc_rx_macro_fir_coeff_num_put;
    pcStack_68 = sym.lpass_cdc_rx_macro_fir_coeff_num_put;
    iVar9 = sp_el0;
    iStack_78 = *(iVar9 + 0x5e0);
    iVar9 = *(auVar11._0_8_ + 0x80);
    puStack_88 = NULL;
    uVar1 = *(auVar11._8_8_ + 0x48);
    uVar6 = *(*(auVar11._0_8_ + 0x78) + 0x18);
    uVar7 = uVar6;
    puStack_70 = &stack0xffffffffffffffe0;
    if (iVar9 == 0) {
        iVar5 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_coeff_num_put._rs,"lpass_cdc_rx_macro_fir_coeff_num_put");
        if (iVar5 != 0) {
            _printk(0x800180e,"lpass_cdc_rx_macro_fir_coeff_num_put");
        }
code_r0x08017348:
        uVar8 = 0xffffffea;
    }
    else {
        uVar8 = sym.lpass_cdc_rx_macro_get_data(iVar9,auStack_80,&puStack_88,0x8002160);
        if ((uVar8 & 1) == 0) goto code_r0x08017348;
        if (uVar1 < 0xc9) {
            if (1 < uVar6) goto code_r0x08017404;
            iVar5 = *(puStack_88 + uVar7 * 8 + 0x8ec);
            *(puStack_88 + uVar7 + 0x50) = uVar1;
            if (*(puStack_88 + uVar7 + 0x11e) + iVar5 == uVar1) {
                uVar8 = sym.set_fir_filter_coeff(iVar9,puStack_88,uVar7);
            }
            else {
                uVar8 = 0;
            }
        }
        else {
            iVar5 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_coeff_num_put._rs.315,
                                 "lpass_cdc_rx_macro_fir_coeff_num_put");
            if (iVar5 != 0) {
                _dev_err(*puStack_88,"%s: inavlid total number of RX_FIR coefficients:%d in path:%d\n",
                         "lpass_cdc_rx_macro_fir_coeff_num_put",uVar1,uVar7);
            }
            if (1 < uVar6) {
code_r0x08017404:
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x5512,0x8017408);
                (*pcVar4)();
            }
            uVar8 = 0xffffffea;
            *(puStack_88 + uVar7 + 0x50) = 0;
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_78) {
        return uVar8;
    }
    auVar11 = __stack_chk_fail(uVar8);
    *extraout_x18_00 = sym.lpass_cdc_rx_macro_hph_idle_detect_get;
    pcStack_a8 = sym.lpass_cdc_rx_macro_hph_idle_detect_get;
    iVar9 = sp_el0;
    iStack_b8 = *(iVar9 + 0x5e0);
    iStack_c0 = 0;
    ppuStack_b0 = &puStack_70;
    uStack_a0 = uVar7;
    uVar7 = sym.lpass_cdc_rx_macro_get_data(*(auVar11._0_8_ + 0x80),auStack_c8,&iStack_c0,0x800127c);
    if ((uVar7 & 1) == 0) {
        uVar7 = 0xffffffea;
    }
    else {
        uVar7 = 0;
        *(auVar11._8_8_ + 0x48) = *(iStack_c0 + 0x1e1);
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_b8) {
        return uVar7;
    }
    auVar12 = __stack_chk_fail(uVar7);
    *extraout_x18_01 = sym.lpass_cdc_rx_macro_hph_idle_detect_put;
    pcStack_e8 = sym.lpass_cdc_rx_macro_hph_idle_detect_put;
    iVar9 = sp_el0;
    iStack_f8 = *(iVar9 + 0x5e0);
    iStack_100 = 0;
    pppuStack_f0 = &ppuStack_b0;
    iStack_e0 = auVar11._8_8_;
    uVar7 = sym.lpass_cdc_rx_macro_get_data(*(auVar12._0_8_ + 0x80),auStack_108,&iStack_100,0x80023d6);
    if ((uVar7 & 1) == 0) {
        uVar7 = 0xffffffea;
    }
    else {
        uVar7 = 0;
        *(iStack_100 + 0x1e1) = *(auVar12._8_8_ + 0x48);
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_f8) {
        return uVar7;
    }
    auVar11 = __stack_chk_fail(uVar7);
    *extraout_x18_02 = sym.lpass_cdc_rx_macro_get_ear_mode;
    pcStack_128 = sym.lpass_cdc_rx_macro_get_ear_mode;
    iVar9 = sp_el0;
    iStack_138 = *(iVar9 + 0x5e0);
    iStack_148 = 0;
    pppuStack_130 = &pppuStack_f0;
    iStack_120 = auVar12._8_8_;
    uVar7 = sym.lpass_cdc_rx_macro_get_data(*(auVar11._0_8_ + 0x80),auStack_140,&iStack_148,0x800283c);
    if ((uVar7 & 1) == 0) {
        uVar7 = 0xffffffea;
    }
    else {
        uVar7 = 0;
        *(auVar11._8_8_ + 0x48) = *(iStack_148 + 0x53);
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_138) {
        return uVar7;
    }
    auVar12 = __stack_chk_fail(uVar7);
    iVar10 = auVar12._8_8_;
    *extraout_x18_03 = sym.lpass_cdc_rx_macro_put_ear_mode;
    pcStack_168 = sym.lpass_cdc_rx_macro_put_ear_mode;
    iVar9 = sp_el0;
    iStack_178 = *(iVar9 + 0x5e0);
    iStack_188 = 0;
    pppuStack_170 = &pppuStack_130;
    iStack_160 = auVar11._8_8_;
    uVar7 = sym.lpass_cdc_rx_macro_get_data(*(auVar12._0_8_ + 0x80),auStack_180,&iStack_188,0x8001de8);
    if ((uVar7 & 1) == 0) {
        uVar7 = 0xffffffea;
    }
    else {
        uVar7 = 0;
        *(iStack_188 + 0x53) = *(iVar10 + 0x48) != 0;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_178) {
        return uVar7;
    }
    auVar11 = __stack_chk_fail(uVar7);
    *extraout_x18_04 = sym.lpass_cdc_rx_macro_fir_filter_enable_get;
    pcStack_1a8 = sym.lpass_cdc_rx_macro_fir_filter_enable_get;
    iVar9 = sp_el0;
    iStack_1b8 = *(iVar9 + 0x5e0);
    iVar9 = *(auVar11._0_8_ + 0x80);
    iStack_1c8 = 0;
    pppuStack_1b0 = &pppuStack_170;
    iStack_1a0 = iVar10;
    if (iVar9 == 0) {
        iVar5 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_filter_enable_get._rs,
                             "lpass_cdc_rx_macro_fir_filter_enable_get");
        if (iVar5 != 0) {
            _printk(0x800180e,"lpass_cdc_rx_macro_fir_filter_enable_get");
        }
code_r0x080176cc:
        uVar7 = 0xffffffea;
    }
    else {
        uVar7 = sym.lpass_cdc_rx_macro_get_data(iVar9,auStack_1c0,&iStack_1c8,0x8001ba9);
        if ((uVar7 & 1) == 0) goto code_r0x080176cc;
        uVar7 = 0;
        *(auVar11._8_8_ + 0x48) = *(iStack_1c8 + 0x54);
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_1b8) {
        return uVar7;
    }
    auVar11 = __stack_chk_fail(uVar7);
    *extraout_x18_05 = sym.lpass_cdc_rx_macro_fir_filter_enable_put;
    pcStack_1f8 = sym.lpass_cdc_rx_macro_fir_filter_enable_put;
    iVar9 = sp_el0;
    iStack_208 = *(iVar9 + 0x5e0);
    iVar9 = *(auVar11._0_8_ + 0x80);
    puStack_218 = NULL;
    pppuStack_200 = &pppuStack_1b0;
    if (iVar9 == 0) {
        iVar5 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_filter_enable_put._rs,
                             "lpass_cdc_rx_macro_fir_filter_enable_put");
        if (iVar5 != 0) {
            _printk(0x800180e,"lpass_cdc_rx_macro_fir_filter_enable_put");
            uVar7 = 0xffffffea;
            goto code_r0x080178e4;
        }
    }
    else {
        uVar7 = sym.lpass_cdc_rx_macro_get_data(iVar9,auStack_210,&puStack_218,0x8001c78);
        puVar3 = puStack_218;
        if ((uVar7 & 1) != 0) {
            iVar10 = puStack_218[0x126];
            if ((iVar10 != 0) && (*(puStack_218 + 0x59) != '\0')) {
                cVar2 = *(auVar11._8_8_ + 0x48);
                *(puStack_218 + 0x54) = cVar2 != '\0';
                if (cVar2 == '\0') {
                    snd_soc_component_update_bits(iVar9,0x145c,0xd,0);
                    snd_soc_component_update_bits(iVar9,0x151c,0xd,0);
                    snd_soc_component_update_bits(iVar9,0x1400,0x80,0);
                    snd_soc_component_update_bits(iVar9,0x14c0,0x80,0);
                    snd_soc_component_update_bits(iVar9,0x1004,1,0);
                    iVar9 = puVar3[0x126];
                    clk_disable(iVar9);
                    clk_unprepare(iVar9);
                }
                else {
                    uVar6 = clk_prepare(iVar10);
                    if (uVar6 == 0) {
                        uVar6 = clk_enable(iVar10);
                        if (uVar6 != 0) {
                            clk_unprepare(iVar10);
                            goto code_r0x080177bc;
                        }
                    }
                    else {
code_r0x080177bc:
                        uVar7 = uVar6;
                        if (uVar6 < 0) {
                            iVar5 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_filter_enable_put._rs.326,
                                                 "lpass_cdc_rx_macro_fir_filter_enable_put");
                            if (iVar5 != 0) {
                                _dev_err(*puVar3,"%s:hifi_fir_clk enable failed\n",
                                         "lpass_cdc_rx_macro_fir_filter_enable_put");
                            }
                            goto code_r0x080178e4;
                        }
                    }
                    snd_soc_component_write(iVar9,0x1460,*(puVar3 + 10));
                    snd_soc_component_write(iVar9,0x1520,*(puVar3 + 0x51));
                    snd_soc_component_update_bits(iVar9,0x1004,1,1);
                    snd_soc_component_update_bits(iVar9,0x1400,0x80,0x80);
                    snd_soc_component_update_bits(iVar9,0x14c0,0x80,0x80);
                    snd_soc_component_update_bits(iVar9,0x145c,0xd,5);
                    snd_soc_component_update_bits(iVar9,0x151c,0xd,5);
                }
            }
            uVar7 = 0;
            goto code_r0x080178e4;
        }
    }
    uVar7 = 0xffffffea;
code_r0x080178e4:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_208) {
        return uVar7;
    }
    auVar11 = __stack_chk_fail();
    *extraout_x18_06 = sym.lpass_cdc_rx_macro_get_hph_hd2_mode;
    pcStack_238 = sym.lpass_cdc_rx_macro_get_hph_hd2_mode;
    iVar10 = sp_el0;
    iStack_248 = *(iVar10 + 0x5e0);
    iStack_258 = 0;
    pppuStack_240 = &pppuStack_200;
    iStack_230 = iVar9;
    uVar7 = sym.lpass_cdc_rx_macro_get_data(*(auVar11._0_8_ + 0x80),auStack_250,&iStack_258,0x8001ca1);
    if ((uVar7 & 1) == 0) {
        uVar7 = 0xffffffea;
    }
    else {
        uVar7 = 0;
        *(auVar11._8_8_ + 0x48) = *(iStack_258 + 0x5d);
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_248) {
        return uVar7;
    }
    auVar12 = __stack_chk_fail(uVar7);
    *extraout_x18_07 = sym.lpass_cdc_rx_macro_put_hph_hd2_mode;
    pcStack_278 = sym.lpass_cdc_rx_macro_put_hph_hd2_mode;
    iVar9 = sp_el0;
    iStack_288 = *(iVar9 + 0x5e0);
    iStack_298 = 0;
    pppuStack_280 = &pppuStack_240;
    iStack_270 = auVar11._8_8_;
    uVar7 = sym.lpass_cdc_rx_macro_get_data(*(auVar12._0_8_ + 0x80),auStack_290,&iStack_298,0x800285c);
    if ((uVar7 & 1) == 0) {
        uVar7 = 0xffffffea;
    }
    else {
        uVar7 = 0;
        *(iStack_298 + 0x5d) = *(auVar12._8_8_ + 0x48) != 0;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_288) {
        return uVar7;
    }
    auVar11 = __stack_chk_fail(uVar7);
    *extraout_x18_08 = sym.lpass_cdc_rx_macro_get_hph_pwr_mode;
    pcStack_2b8 = sym.lpass_cdc_rx_macro_get_hph_pwr_mode;
    iVar9 = sp_el0;
    iStack_2c8 = *(iVar9 + 0x5e0);
    iStack_2d8 = 0;
    pppuStack_2c0 = &pppuStack_280;
    iStack_2b0 = auVar12._8_8_;
    uVar7 = sym.lpass_cdc_rx_macro_get_data(*(auVar11._0_8_ + 0x80),auStack_2d0,&iStack_2d8,0x80016e4);
    if ((uVar7 & 1) == 0) {
        uVar7 = 0xffffffea;
    }
    else {
        uVar7 = 0;
        *(auVar11._8_8_ + 0x48) = *(iStack_2d8 + 0x5c);
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_2c8) {
        return uVar7;
    }
    auVar12 = __stack_chk_fail(uVar7);
    *extraout_x18_09 = sym.lpass_cdc_rx_macro_put_hph_pwr_mode;
    pcStack_2f8 = sym.lpass_cdc_rx_macro_put_hph_pwr_mode;
    iVar9 = sp_el0;
    iStack_308 = *(iVar9 + 0x5e0);
    iStack_318 = 0;
    pppuStack_300 = &pppuStack_2c0;
    iStack_2f0 = auVar11._8_8_;
    uVar7 = sym.lpass_cdc_rx_macro_get_data(*(auVar12._0_8_ + 0x80),auStack_310,&iStack_318,0x80015dc);
    if ((uVar7 & 1) == 0) {
        uVar7 = 0xffffffea;
    }
    else {
        uVar7 = 0;
        *(iStack_318 + 0x5c) = *(auVar12._8_8_ + 0x48) != 0;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_308) {
        return uVar7;
    }
    auVar11 = __stack_chk_fail(uVar7);
    *extraout_x18_10 = sym.lpass_cdc_rx_macro_vbat_bcl_gsm_mode_func_get;
    uVar6 = snd_soc_component_read(*(auVar11._0_8_ + 0x80),0x1284);
    *(auVar11._8_8_ + 0x48) = uVar6 >> 2 & 1;
    return 0;
}


// ===== sym.lpass_cdc_rx_macro_fir_audio_mixer_get.5c0fcf43324700bd174cccbefdf1d743.cfi_jt @ 0x08013468 (size 8) =====

uint64_t sym.lpass_cdc_rx_macro_fir_audio_mixer_get.5c0fcf43324700bd174cccbefdf1d743.cfi_jt
                   (int64_t param_1,int64_t param_2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint8_t uVar3;
    bool bVar4;
    int64_t iVar5;
    code *pcVar6;
    int iVar7;
    uint32_t uVar8;
    int iVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    ulong *puVar12;
    char *pcVar13;
    uint64_t uVar14;
    bool bVar15;
    uint32_t uVar16;
    uint32_t *puVar17;
    uint uVar18;
    char *pcVar19;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong uVar20;
    ulong uVar21;
    uint32_t *puVar22;
    uint64_t uVar23;
    ulong uVar24;
    uint uVar25;
    int64_t iVar26;
    ulong unaff_x30;
    uchar auVar27 [16];
    ulong *puStack_400;
    uchar auStack_3f8 [12];
    uint32_t uStack_3ec;
    uint32_t auStack_3e8 [100];
    int64_t iStack_258;
    uchar *puStack_250;
    code *pcStack_248;
    ulong *puStack_1f0;
    uchar auStack_1e8 [12];
    uint32_t uStack_1dc;
    uint auStack_1d8 [100];
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar26 = sp_el0;
    iStack_48 = *(iVar26 + 0x5e0);
    iVar26 = *(param_1 + 0x80);
    uVar16 = **(param_1 + 0x78);
    uVar8 = (*(param_1 + 0x78))[1];
    memset(auStack_1d8,0,400);
    puStack_1f0 = NULL;
    if (iVar26 == 0) {
        iVar7 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_audio_mixer_get._rs,"lpass_cdc_rx_macro_fir_audio_mixer_get");
        if (iVar7 != 0) {
            _printk(0x800180e,"lpass_cdc_rx_macro_fir_audio_mixer_get");
        }
code_r0x080185e8:
        uVar10 = 0xffffffea;
    }
    else {
        uVar10 = sym.lpass_cdc_rx_macro_get_data(iVar26,auStack_1e8,&puStack_1f0,0x80024e2);
        if ((uVar10 & 1) == 0) goto code_r0x080185e8;
        if (1 < uVar16) {
            iVar7 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_audio_mixer_get._rs.329,
                                 "lpass_cdc_rx_macro_fir_audio_mixer_get");
            if (iVar7 != 0) {
                pcVar19 = "%s: path_idx:%d is invalid\n";
                uVar8 = uVar16;
code_r0x08018658:
                _dev_err(*puStack_1f0,pcVar19,"lpass_cdc_rx_macro_fir_audio_mixer_get",uVar8);
            }
            goto code_r0x080185e8;
        }
        if (1 < uVar8) {
            iVar7 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_audio_mixer_get._rs.330,
                                 "lpass_cdc_rx_macro_fir_audio_mixer_get");
            if (iVar7 != 0) {
                pcVar19 = "%s: grp_idx:%d is invalid\n";
                goto code_r0x08018658;
            }
            goto code_r0x080185e8;
        }
        uStack_1dc = *(puStack_1f0 + uVar8 * 4 + uVar16 * 8 + 0x8ec);
        if (uStack_1dc == 0) {
            iVar26 = 4;
        }
        else {
            iVar5 = 0;
            do {
                iVar26 = iVar5;
                if (iVar26 == 400) {
    //WARNING: Does not return
                    pcVar6 = SoftwareBreakpoint(0x5512,0x80186fc);
                    (*pcVar6)();
                }
                *(auStack_1d8 + iVar26) = *(puStack_1f0 + iVar26 + uVar8 * 400 + uVar16 * 800 + 0x2ac);
                iVar5 = iVar26 + 4;
            } while (uStack_1dc * 4 - (iVar26 + 4) != 0);
            iVar26 = iVar26 + 8;
        }
        memcpy(param_2 + 0x48,&uStack_1dc,iVar26);
        uVar10 = 0;
    }
    iVar26 = sp_el0;
    if (*(iVar26 + 0x5e0) == iStack_48) {
        return uVar10;
    }
    auVar27 = __stack_chk_fail(uVar10);
    *extraout_x18 = sym.lpass_cdc_rx_macro_fir_audio_mixer_put;
    pcStack_248 = sym.lpass_cdc_rx_macro_fir_audio_mixer_put;
    pcVar19 = &puStack_400;
    iVar26 = sp_el0;
    iStack_258 = *(iVar26 + 0x5e0);
    pcVar13 = 0x190;
    puVar22 = *(auVar27._0_8_ + 0x78);
    iVar26 = *(auVar27._0_8_ + 0x80);
    uVar16 = *puVar22;
    uVar10 = uVar16;
    uVar8 = puVar22[1];
    uVar14 = uVar8;
    puStack_250 = &stack0xffffffffffffffc0;
    memset(auStack_3e8,0);
    puStack_400 = NULL;
    if (iVar26 == 0) {
        iVar7 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_audio_mixer_put._rs,"lpass_cdc_rx_macro_fir_audio_mixer_put");
        pcVar19 = pcVar13;
        if (iVar7 != 0) {
            _printk(0x800180e,"lpass_cdc_rx_macro_fir_audio_mixer_put");
            pcVar19 = pcVar13;
        }
code_r0x080187d0:
        uVar11 = 0xffffffea;
    }
    else {
        uVar11 = sym.lpass_cdc_rx_macro_get_data(iVar26,auStack_3f8,&puStack_400,0x80026ae);
        puVar12 = puStack_400;
        if ((uVar11 & 1) == 0) goto code_r0x080187d0;
        if (1 < uVar16) {
            iVar7 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_audio_mixer_put._rs.332,
                                 "lpass_cdc_rx_macro_fir_audio_mixer_put");
            if (iVar7 != 0) {
                pcVar13 = "%s: path_idx:%d is invalid\n";
                uVar14 = uVar16;
code_r0x08018848:
                pcVar19 = "lpass_cdc_rx_macro_fir_audio_mixer_put";
                _dev_err(*puStack_400,pcVar13,"lpass_cdc_rx_macro_fir_audio_mixer_put",uVar14);
            }
            goto code_r0x080187d0;
        }
        if (1 < uVar8) {
            iVar7 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_audio_mixer_put._rs.333,
                                 "lpass_cdc_rx_macro_fir_audio_mixer_put");
            if (iVar7 != 0) {
                pcVar13 = "%s: grp_idx:%d is invalid\n";
                goto code_r0x08018848;
            }
            goto code_r0x080187d0;
        }
        if ((puStack_400[0x126] == 0) || (*(puStack_400 + 0x59) == '\0')) {
            uVar11 = 0;
        }
        else {
            uVar1 = *(auVar27._8_8_ + 0x48);
            uVar11 = uVar1;
            uStack_3ec = uVar1;
            if (uVar1 < 0x65) {
                pcVar19 = uVar11 << 2;
                *(puStack_400 + uVar14 * 4 + uVar10 * 8 + 0x8ec) = uVar1;
                memcpy(auStack_3e8,auVar27._8_8_ + 0x4c);
                if (uVar1 != 0) {
                    puVar22 = &uStack_3ec;
                    puVar17 = puVar12 + uVar14 * 400 + uVar10 * 800 + 0x2ac;
                    do {
                        puVar22 = puVar22 + 1;
                        uVar11 = uVar11 - 1;
                        *puVar17 = *puVar22;
                        puVar17 = puVar17 + 1;
                    } while (uVar11 != 0);
                }
                uVar11 = 0;
                uVar3 = *(puVar12 + uVar10 + 0x50);
                *(puVar12 + uVar14 + uVar10 * 2 + 0x55) = 0;
                if (*(puVar12 + uVar10 + 0x11e) + *(puVar12 + uVar10 * 8 + 0x8ec) == uVar3) {
                    pcVar19 = uVar16;
                    uVar11 = sym.set_fir_filter_coeff(iVar26,puVar12,pcVar19);
                }
            }
            else {
                iVar7 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_audio_mixer_put._rs.334,
                                     "lpass_cdc_rx_macro_fir_audio_mixer_put");
                if (iVar7 != 0) {
                    pcVar19 = "lpass_cdc_rx_macro_fir_audio_mixer_put";
                    _dev_err(*puVar12,"%s: inavlid number of RX_FIR coefficients:%d in path:%d, group:%d\n",
                             "lpass_cdc_rx_macro_fir_audio_mixer_put",uVar11,uVar16,uVar8);
                }
                uVar11 = 0xffffffea;
                *(puVar12 + uVar14 * 4 + uVar10 * 8 + 0x8ec) = 0;
            }
        }
    }
    iVar26 = sp_el0;
    if (*(iVar26 + 0x5e0) == iStack_258) {
        return uVar11;
    }
    auVar27 = __stack_chk_fail(uVar11);
    puVar12 = auVar27._8_8_;
    uVar21 = auVar27._0_8_;
    *extraout_x18_00 = sym.set_fir_filter_coeff;
    iVar7 = pcVar19;
    if (iVar7 == 0) {
        uVar18 = 0x1464;
        uVar16 = 0x1468;
        uVar24 = 0x145c;
        uVar25 = 0x1400;
    }
    else {
        if (iVar7 != 1) {
            iVar7 = ___ratelimit(obj.set_fir_filter_coeff._rs,"set_fir_filter_coeff");
            if (iVar7 == 0) {
                uVar8 = 0xffffffea;
            }
            else {
                _dev_err(*puVar12,"%s: inavlid FIR ID: %d\n","set_fir_filter_coeff",pcVar19 & 0xffffffff);
                uVar8 = 0xffffffea;
            }
            goto code_r0x08018e08;
        }
        uVar24 = 0x151c;
        uVar18 = 0x1524;
        uVar16 = 0x1528;
        uVar25 = 0x14c0;
    }
    uVar10 = pcVar19 & 0xffffffff;
    if ((*(puVar12 + (pcVar19 & 0xffffffff) * 2 + 0x55) == '\0') || (*(puVar12 + uVar10 * 2 + 0x56) == '\0')) {
        sym.lpass_cdc_rx_macro_mclk_enable(puVar12,1,0);
        uVar20 = puVar12[0x126];
        uVar8 = clk_prepare(uVar20);
        if ((uVar8 == 0) && (uVar8 = clk_enable(uVar20), uVar8 != 0)) {
            clk_unprepare(uVar20);
        }
        snd_soc_component_update_bits(uVar21,0x1004,1,1);
        snd_soc_component_update_bits(uVar21,uVar25,0xc0,0xc0);
        snd_soc_component_update_bits(uVar21,uVar25,0xc0,0x80);
        usleep_range_state(10,0xb,2);
        iVar26 = 0;
        bVar15 = false;
        do {
            pcVar19 = puVar12 + iVar26 + uVar10 * 2 + 0x55;
            if (*pcVar19 == '\0') {
                uVar1 = *(puVar12 + iVar26 * 4 + uVar10 * 8 + 0x8ec);
                if (100 < uVar1) {
                    iVar9 = ___ratelimit(obj.set_fir_filter_coeff._rs.322,"set_fir_filter_coeff");
                    if (iVar9 != 0) {
                        _dev_err(*puVar12,"%s: inavlid number of RX_FIR coefficients:%d in path:%d, group:%d\n",
                                 "set_fir_filter_coeff",uVar1,iVar7,iVar26);
                    }
                    uVar8 = 0xffffffea;
                    break;
                }
                uVar14 = iVar26 * 100;
                uVar11 = (uVar1 & 0xfffffffe) + uVar14;
                if (uVar14 < uVar11) {
                    uVar23 = 0;
                    iVar9 = iVar26 * 0x32;
                    puVar22 = puVar12 + uVar10 * 100 + iVar26 * 0x32 + 0x56;
                    do {
                        if (99 < uVar23) goto code_r0x08018e80;
                        uVar2 = puVar22[-1];
                        snd_soc_component_write(uVar21,uVar16,uVar2 & 0xff);
                        snd_soc_component_write(uVar21,uVar16 | 4,uVar2 >> 8 & 0xff);
                        snd_soc_component_write(uVar21,uVar16 + 8,uVar2 >> 0x10 & 0xff);
                        snd_soc_component_write(uVar21,uVar16 + 0xc,uVar2 >> 0x18);
                        uVar2 = *puVar22;
                        uVar23 = uVar23 + 2;
                        snd_soc_component_write(uVar21,uVar16 | 0x10,uVar2 & 0xff);
                        snd_soc_component_write(uVar21,uVar16 | 0x14,uVar2 >> 8 & 0xff);
                        snd_soc_component_write(uVar21,uVar16 + 0x18,uVar2 >> 0x10 & 0xff);
                        snd_soc_component_write(uVar21,uVar16 + 0x1c,uVar2 >> 0x18);
                        snd_soc_component_write(uVar21,uVar18,iVar9);
                        snd_soc_component_update_bits(uVar21,uVar24,2,2);
                        usleep_range_state(0xd,0xf,2);
                        snd_soc_component_update_bits(uVar21,uVar24,2,0);
                        iVar9 = iVar9 + 1;
                        puVar22 = puVar22 + 2;
                    } while (uVar14 + uVar23 < uVar11);
                    if ((uVar1 & 1) != 0) {
                        if (99 < uVar23) {
code_r0x08018e80:
    //WARNING: Does not return
                            pcVar6 = SoftwareBreakpoint(0x5512,0x8018e84);
                            (*pcVar6)();
                        }
                        uVar14 = uVar14 + uVar23;
code_r0x08018af8:
                        iVar9 = uVar14;
                        uVar1 = *(puVar12 + uVar23 * 4 + iVar26 * 400 + uVar10 * 800 + 0x2ac);
                        if (iVar9 < 0) {
                            iVar9 = iVar9 + 1;
                        }
                        snd_soc_component_write(uVar21,uVar16,uVar1 & 0xff);
                        snd_soc_component_write(uVar21,uVar16 | 4,uVar1 >> 8 & 0xff);
                        snd_soc_component_write(uVar21,uVar16 + 8,uVar1 >> 0x10 & 0xff);
                        snd_soc_component_write(uVar21,uVar16 + 0xc,uVar1 >> 0x18);
                        snd_soc_component_write(uVar21,uVar16 | 0x10,0);
                        snd_soc_component_write(uVar21,uVar16 | 0x14,0);
                        snd_soc_component_write(uVar21,uVar16 + 0x18,0);
                        snd_soc_component_write(uVar21,uVar16 + 0x1c,0);
                        snd_soc_component_write(uVar21,uVar18,iVar9 >> 1);
                        snd_soc_component_update_bits(uVar21,uVar24,2,2);
                        usleep_range_state(0xd,0xf,2);
                        snd_soc_component_update_bits(uVar21,uVar24,2,0);
                    }
                }
                else if ((uVar1 & 1) != 0) {
                    uVar23 = 0;
                    goto code_r0x08018af8;
                }
                *pcVar19 = '\x01';
            }
            iVar26 = 1;
            bVar4 = !bVar15;
            bVar15 = true;
        } while (bVar4);
        snd_soc_component_update_bits(uVar21,uVar25,0x80,0);
        snd_soc_component_update_bits(uVar21,0x1004,1,0);
        uVar21 = puVar12[0x126];
        clk_disable(uVar21);
        clk_unprepare(uVar21);
        sym.lpass_cdc_rx_macro_mclk_enable(puVar12,0,0);
    }
    else {
        uVar8 = 0;
    }
code_r0x08018e08:
    return uVar8;
}


// ===== sym.lpass_cdc_rx_macro_hph_idle_detect_put.5c0fcf43324700bd174cccbefdf1d743.cfi_jt @ 0x08013470 (size 8) =====

int sym.lpass_cdc_rx_macro_hph_idle_detect_put.5c0fcf43324700bd174cccbefdf1d743.cfi_jt(int64_t param_1,int64_t param_2)

{
    char cVar1;
    ulong *puVar2;
    int iVar3;
    int iVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong *extraout_x18_07;
    int64_t iVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    uchar auVar10 [16];
    int64_t iStack_248;
    uchar auStack_240 [8];
    int64_t iStack_238;
    ulong ***pppuStack_230;
    code *pcStack_228;
    int64_t iStack_220;
    int64_t iStack_208;
    uchar auStack_200 [8];
    int64_t iStack_1f8;
    ulong ***pppuStack_1f0;
    code *pcStack_1e8;
    int64_t iStack_1e0;
    int64_t iStack_1c8;
    uchar auStack_1c0 [8];
    int64_t iStack_1b8;
    ulong ***pppuStack_1b0;
    code *pcStack_1a8;
    int64_t iStack_1a0;
    int64_t iStack_188;
    uchar auStack_180 [8];
    int64_t iStack_178;
    ulong ***pppuStack_170;
    code *pcStack_168;
    int64_t iStack_160;
    ulong *puStack_148;
    uchar auStack_140 [8];
    int64_t iStack_138;
    ulong ***pppuStack_130;
    code *pcStack_128;
    int64_t iStack_f8;
    uchar auStack_f0 [8];
    int64_t iStack_e8;
    uchar ***pppuStack_e0;
    code *pcStack_d8;
    int64_t iStack_d0;
    int64_t iStack_b8;
    uchar auStack_b0 [8];
    int64_t iStack_a8;
    uchar **ppuStack_a0;
    code *pcStack_98;
    int64_t iStack_90;
    int64_t iStack_78;
    uchar auStack_70 [8];
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    int64_t iStack_50;
    uchar auStack_38 [8];
    int64_t iStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_28 = *(iVar7 + 0x5e0);
    iStack_30 = 0;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(param_1 + 0x80),auStack_38,&iStack_30,0x80023d6);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(iStack_30 + 0x1e1) = *(param_2 + 0x48);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_28) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail(iVar3);
    *extraout_x18 = sym.lpass_cdc_rx_macro_get_ear_mode;
    pcStack_58 = sym.lpass_cdc_rx_macro_get_ear_mode;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    iStack_78 = 0;
    puStack_60 = &stack0xffffffffffffffe0;
    iStack_50 = param_2;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar9._0_8_ + 0x80),auStack_70,&iStack_78,0x800283c);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(auVar9._8_8_ + 0x48) = *(iStack_78 + 0x53);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_68) {
        return iVar3;
    }
    auVar10 = __stack_chk_fail(iVar3);
    iVar8 = auVar10._8_8_;
    *extraout_x18_00 = sym.lpass_cdc_rx_macro_put_ear_mode;
    pcStack_98 = sym.lpass_cdc_rx_macro_put_ear_mode;
    iVar7 = sp_el0;
    iStack_a8 = *(iVar7 + 0x5e0);
    iStack_b8 = 0;
    ppuStack_a0 = &puStack_60;
    iStack_90 = auVar9._8_8_;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar10._0_8_ + 0x80),auStack_b0,&iStack_b8,0x8001de8);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(iStack_b8 + 0x53) = *(iVar8 + 0x48) != 0;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_a8) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail(iVar3);
    *extraout_x18_01 = sym.lpass_cdc_rx_macro_fir_filter_enable_get;
    pcStack_d8 = sym.lpass_cdc_rx_macro_fir_filter_enable_get;
    iVar7 = sp_el0;
    iStack_e8 = *(iVar7 + 0x5e0);
    iVar7 = *(auVar9._0_8_ + 0x80);
    iStack_f8 = 0;
    pppuStack_e0 = &ppuStack_a0;
    iStack_d0 = iVar8;
    if (iVar7 == 0) {
        iVar3 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_filter_enable_get._rs,
                             "lpass_cdc_rx_macro_fir_filter_enable_get");
        if (iVar3 != 0) {
            _printk(0x800180e,"lpass_cdc_rx_macro_fir_filter_enable_get");
        }
code_r0x080176cc:
        iVar3 = -0x16;
    }
    else {
        uVar6 = sym.lpass_cdc_rx_macro_get_data(iVar7,auStack_f0,&iStack_f8,0x8001ba9);
        if ((uVar6 & 1) == 0) goto code_r0x080176cc;
        iVar3 = 0;
        *(auVar9._8_8_ + 0x48) = *(iStack_f8 + 0x54);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_e8) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail(iVar3);
    *extraout_x18_02 = sym.lpass_cdc_rx_macro_fir_filter_enable_put;
    pcStack_128 = sym.lpass_cdc_rx_macro_fir_filter_enable_put;
    iVar7 = sp_el0;
    iStack_138 = *(iVar7 + 0x5e0);
    iVar7 = *(auVar9._0_8_ + 0x80);
    puStack_148 = NULL;
    pppuStack_130 = &pppuStack_e0;
    if (iVar7 == 0) {
        iVar3 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_filter_enable_put._rs,
                             "lpass_cdc_rx_macro_fir_filter_enable_put");
        if (iVar3 != 0) {
            _printk(0x800180e,"lpass_cdc_rx_macro_fir_filter_enable_put");
            iVar3 = -0x16;
            goto code_r0x080178e4;
        }
    }
    else {
        uVar6 = sym.lpass_cdc_rx_macro_get_data(iVar7,auStack_140,&puStack_148,0x8001c78);
        puVar2 = puStack_148;
        if ((uVar6 & 1) != 0) {
            iVar8 = puStack_148[0x126];
            if ((iVar8 != 0) && (*(puStack_148 + 0x59) != '\0')) {
                cVar1 = *(auVar9._8_8_ + 0x48);
                *(puStack_148 + 0x54) = cVar1 != '\0';
                if (cVar1 == '\0') {
                    snd_soc_component_update_bits(iVar7,0x145c,0xd,0);
                    snd_soc_component_update_bits(iVar7,0x151c,0xd,0);
                    snd_soc_component_update_bits(iVar7,0x1400,0x80,0);
                    snd_soc_component_update_bits(iVar7,0x14c0,0x80,0);
                    snd_soc_component_update_bits(iVar7,0x1004,1,0);
                    iVar7 = puVar2[0x126];
                    clk_disable(iVar7);
                    clk_unprepare(iVar7);
                }
                else {
                    iVar3 = clk_prepare(iVar8);
                    if (iVar3 == 0) {
                        iVar3 = clk_enable(iVar8);
                        if (iVar3 != 0) {
                            clk_unprepare(iVar8);
                            goto code_r0x080177bc;
                        }
                    }
                    else {
code_r0x080177bc:
                        if (iVar3 < 0) {
                            iVar4 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_filter_enable_put._rs.326,
                                                 "lpass_cdc_rx_macro_fir_filter_enable_put");
                            if (iVar4 != 0) {
                                _dev_err(*puVar2,"%s:hifi_fir_clk enable failed\n",
                                         "lpass_cdc_rx_macro_fir_filter_enable_put");
                            }
                            goto code_r0x080178e4;
                        }
                    }
                    snd_soc_component_write(iVar7,0x1460,*(puVar2 + 10));
                    snd_soc_component_write(iVar7,0x1520,*(puVar2 + 0x51));
                    snd_soc_component_update_bits(iVar7,0x1004,1,1);
                    snd_soc_component_update_bits(iVar7,0x1400,0x80,0x80);
                    snd_soc_component_update_bits(iVar7,0x14c0,0x80,0x80);
                    snd_soc_component_update_bits(iVar7,0x145c,0xd,5);
                    snd_soc_component_update_bits(iVar7,0x151c,0xd,5);
                }
            }
            iVar3 = 0;
            goto code_r0x080178e4;
        }
    }
    iVar3 = -0x16;
code_r0x080178e4:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_138) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail();
    *extraout_x18_03 = sym.lpass_cdc_rx_macro_get_hph_hd2_mode;
    pcStack_168 = sym.lpass_cdc_rx_macro_get_hph_hd2_mode;
    iVar8 = sp_el0;
    iStack_178 = *(iVar8 + 0x5e0);
    iStack_188 = 0;
    pppuStack_170 = &pppuStack_130;
    iStack_160 = iVar7;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar9._0_8_ + 0x80),auStack_180,&iStack_188,0x8001ca1);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(auVar9._8_8_ + 0x48) = *(iStack_188 + 0x5d);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_178) {
        return iVar3;
    }
    auVar10 = __stack_chk_fail(iVar3);
    *extraout_x18_04 = sym.lpass_cdc_rx_macro_put_hph_hd2_mode;
    pcStack_1a8 = sym.lpass_cdc_rx_macro_put_hph_hd2_mode;
    iVar7 = sp_el0;
    iStack_1b8 = *(iVar7 + 0x5e0);
    iStack_1c8 = 0;
    pppuStack_1b0 = &pppuStack_170;
    iStack_1a0 = auVar9._8_8_;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar10._0_8_ + 0x80),auStack_1c0,&iStack_1c8,0x800285c);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(iStack_1c8 + 0x5d) = *(auVar10._8_8_ + 0x48) != 0;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_1b8) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail(iVar3);
    *extraout_x18_05 = sym.lpass_cdc_rx_macro_get_hph_pwr_mode;
    pcStack_1e8 = sym.lpass_cdc_rx_macro_get_hph_pwr_mode;
    iVar7 = sp_el0;
    iStack_1f8 = *(iVar7 + 0x5e0);
    iStack_208 = 0;
    pppuStack_1f0 = &pppuStack_1b0;
    iStack_1e0 = auVar10._8_8_;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar9._0_8_ + 0x80),auStack_200,&iStack_208,0x80016e4);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(auVar9._8_8_ + 0x48) = *(iStack_208 + 0x5c);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_1f8) {
        return iVar3;
    }
    auVar10 = __stack_chk_fail(iVar3);
    *extraout_x18_06 = sym.lpass_cdc_rx_macro_put_hph_pwr_mode;
    pcStack_228 = sym.lpass_cdc_rx_macro_put_hph_pwr_mode;
    iVar7 = sp_el0;
    iStack_238 = *(iVar7 + 0x5e0);
    iStack_248 = 0;
    pppuStack_230 = &pppuStack_1f0;
    iStack_220 = auVar9._8_8_;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar10._0_8_ + 0x80),auStack_240,&iStack_248,0x80015dc);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(iStack_248 + 0x5c) = *(auVar10._8_8_ + 0x48) != 0;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_238) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail(iVar3);
    *extraout_x18_07 = sym.lpass_cdc_rx_macro_vbat_bcl_gsm_mode_func_get;
    uVar5 = snd_soc_component_read(*(auVar9._0_8_ + 0x80),0x1284);
    *(auVar9._8_8_ + 0x48) = uVar5 >> 2 & 1;
    return 0;
}


// ===== sym.lpass_cdc_rx_macro_mux_get.5c0fcf43324700bd174cccbefdf1d743.cfi_jt @ 0x08013478 (size 8) =====

void sym.lpass_cdc_rx_macro_mux_get.5c0fcf43324700bd174cccbefdf1d743.cfi_jt(ulong param_1,int64_t param_2)

{
    code *pcVar1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    int64_t iStack_38;
    uchar auStack_30 [8];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    iVar2 = snd_soc_dapm_kcontrol_widget();
    iStack_38 = 0;
    uVar3 = sym.lpass_cdc_rx_macro_get_data(*(iVar2 + 0x28) + -0xd0,auStack_30,&iStack_38,0x80011b6);
    if ((uVar3 & 1) == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        if (5 < *(iVar2 + 0x4c)) goto code_r0x08015dcc;
        uVar4 = 0;
        *(param_2 + 0x48) = *(iStack_38 + *(iVar2 + 0x4c) * 4 + 0x1c);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return;
    }
    __stack_chk_fail(uVar4);
code_r0x08015dcc:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8015dd0);
    (*pcVar1)();
}


// ===== sym.lpass_cdc_rx_macro_set_compander.5c0fcf43324700bd174cccbefdf1d743.cfi_jt @ 0x08013480 (size 8) =====

void sym.lpass_cdc_rx_macro_set_compander.5c0fcf43324700bd174cccbefdf1d743.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    code *pcVar4;
    uint64_t uVar5;
    ulong uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    int64_t iStack_38;
    uchar auStack_30 [8];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    iStack_38 = 0;
    uVar1 = *(param_2 + 0x48);
    uVar2 = *(*(param_1 + 0x78) + 0x18);
    uVar5 = sym.lpass_cdc_rx_macro_get_data(*(param_1 + 0x80),auStack_30,&iStack_38,0x800281b);
    if ((uVar5 & 1) == 0) {
        uVar6 = 0xffffffea;
    }
    else {
        if (1 < uVar2) goto code_r0x08017180;
        uVar6 = 0;
        *(iStack_38 + uVar2 * 4 + 8) = uVar1;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return;
    }
    __stack_chk_fail(uVar6);
code_r0x08017180:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x8017184);
    (*pcVar4)();
}


// ===== sym.lpass_cdc_rx_macro_iir_enable_audio_mixer_get.5c0fcf43324700bd174cccbefdf1d743.cfi_jt @ 0x08013488 (size 8) =====

ulong sym.lpass_cdc_rx_macro_iir_enable_audio_mixer_get.5c0fcf43324700bd174cccbefdf1d743.cfi_jt
                (int64_t param_1,int64_t param_2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(*(param_1 + 0x78) + 0x18);
    uVar2 = snd_soc_component_read(*(param_1 + 0x80),*(*(param_1 + 0x78) + 0x10) * 0x80 + 0x1a24U & 0xfffc);
    *(param_2 + 0x48) = (uVar2 & 0xffffffff) >> (uVar1 & 0x3f) & 1;
    return 0;
}


// ===== sym.lpass_cdc_rx_macro_get_hph_pwr_mode.5c0fcf43324700bd174cccbefdf1d743.cfi_jt @ 0x08013490 (size 8) =====

ulong sym.lpass_cdc_rx_macro_get_hph_pwr_mode.5c0fcf43324700bd174cccbefdf1d743.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong unaff_x30;
    uchar auVar5 [16];
    int64_t iStack_78;
    uchar auStack_70 [8];
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    int64_t iStack_50;
    int64_t iStack_38;
    uchar auStack_30 [8];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    iStack_38 = 0;
    uVar3 = sym.lpass_cdc_rx_macro_get_data(*(param_1 + 0x80),auStack_30,&iStack_38,0x80016e4);
    if ((uVar3 & 1) == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        uVar4 = 0;
        *(param_2 + 0x48) = *(iStack_38 + 0x5c);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return uVar4;
    }
    auVar5 = __stack_chk_fail(uVar4);
    *extraout_x18 = sym.lpass_cdc_rx_macro_put_hph_pwr_mode;
    pcStack_58 = sym.lpass_cdc_rx_macro_put_hph_pwr_mode;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    iStack_78 = 0;
    puStack_60 = &stack0xffffffffffffffe0;
    iStack_50 = param_2;
    uVar3 = sym.lpass_cdc_rx_macro_get_data(*(auVar5._0_8_ + 0x80),auStack_70,&iStack_78,0x80015dc);
    if ((uVar3 & 1) == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        uVar4 = 0;
        *(iStack_78 + 0x5c) = *(auVar5._8_8_ + 0x48) != 0;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return uVar4;
    }
    auVar5 = __stack_chk_fail(uVar4);
    *extraout_x18_00 = sym.lpass_cdc_rx_macro_vbat_bcl_gsm_mode_func_get;
    uVar2 = snd_soc_component_read(*(auVar5._0_8_ + 0x80),0x1284);
    *(auVar5._8_8_ + 0x48) = uVar2 >> 2 & 1;
    return 0;
}


// ===== sym.lpass_cdc_rx_macro_fir_filter_enable_put.5c0fcf43324700bd174cccbefdf1d743.cfi_jt @ 0x08013498 (size 8) =====

int sym.lpass_cdc_rx_macro_fir_filter_enable_put.5c0fcf43324700bd174cccbefdf1d743.cfi_jt
              (int64_t param_1,int64_t param_2)

{
    char cVar1;
    ulong *puVar2;
    int iVar3;
    int iVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    int64_t iVar7;
    int64_t iVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    uchar auVar10 [16];
    int64_t iStack_148;
    uchar auStack_140 [8];
    int64_t iStack_138;
    ulong ***pppuStack_130;
    code *pcStack_128;
    int64_t iStack_120;
    int64_t iStack_108;
    uchar auStack_100 [8];
    int64_t iStack_f8;
    uchar ***pppuStack_f0;
    code *pcStack_e8;
    int64_t iStack_e0;
    int64_t iStack_c8;
    uchar auStack_c0 [8];
    int64_t iStack_b8;
    uchar **ppuStack_b0;
    code *pcStack_a8;
    int64_t iStack_a0;
    int64_t iStack_88;
    uchar auStack_80 [8];
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    int64_t iStack_60;
    ulong *puStack_48;
    uchar auStack_40 [8];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    iVar7 = *(param_1 + 0x80);
    puStack_48 = NULL;
    if (iVar7 == 0) {
        iVar3 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_filter_enable_put._rs,
                             "lpass_cdc_rx_macro_fir_filter_enable_put");
        if (iVar3 != 0) {
            _printk(0x800180e,"lpass_cdc_rx_macro_fir_filter_enable_put");
            iVar3 = -0x16;
            goto code_r0x080178e4;
        }
    }
    else {
        uVar6 = sym.lpass_cdc_rx_macro_get_data(iVar7,auStack_40,&puStack_48,0x8001c78);
        puVar2 = puStack_48;
        if ((uVar6 & 1) != 0) {
            iVar8 = puStack_48[0x126];
            if ((iVar8 != 0) && (*(puStack_48 + 0x59) != '\0')) {
                cVar1 = *(param_2 + 0x48);
                *(puStack_48 + 0x54) = cVar1 != '\0';
                if (cVar1 == '\0') {
                    snd_soc_component_update_bits(iVar7,0x145c,0xd,0);
                    snd_soc_component_update_bits(iVar7,0x151c,0xd,0);
                    snd_soc_component_update_bits(iVar7,0x1400,0x80,0);
                    snd_soc_component_update_bits(iVar7,0x14c0,0x80,0);
                    snd_soc_component_update_bits(iVar7,0x1004,1,0);
                    iVar7 = puVar2[0x126];
                    clk_disable(iVar7);
                    clk_unprepare(iVar7);
                }
                else {
                    iVar3 = clk_prepare(iVar8);
                    if (iVar3 == 0) {
                        iVar3 = clk_enable(iVar8);
                        if (iVar3 != 0) {
                            clk_unprepare(iVar8);
                            goto code_r0x080177bc;
                        }
                    }
                    else {
code_r0x080177bc:
                        if (iVar3 < 0) {
                            iVar4 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_filter_enable_put._rs.326,
                                                 "lpass_cdc_rx_macro_fir_filter_enable_put");
                            if (iVar4 != 0) {
                                _dev_err(*puVar2,"%s:hifi_fir_clk enable failed\n",
                                         "lpass_cdc_rx_macro_fir_filter_enable_put");
                            }
                            goto code_r0x080178e4;
                        }
                    }
                    snd_soc_component_write(iVar7,0x1460,*(puVar2 + 10));
                    snd_soc_component_write(iVar7,0x1520,*(puVar2 + 0x51));
                    snd_soc_component_update_bits(iVar7,0x1004,1,1);
                    snd_soc_component_update_bits(iVar7,0x1400,0x80,0x80);
                    snd_soc_component_update_bits(iVar7,0x14c0,0x80,0x80);
                    snd_soc_component_update_bits(iVar7,0x145c,0xd,5);
                    snd_soc_component_update_bits(iVar7,0x151c,0xd,5);
                }
            }
            iVar3 = 0;
            goto code_r0x080178e4;
        }
    }
    iVar3 = -0x16;
code_r0x080178e4:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_38) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail();
    *extraout_x18 = sym.lpass_cdc_rx_macro_get_hph_hd2_mode;
    pcStack_68 = sym.lpass_cdc_rx_macro_get_hph_hd2_mode;
    iVar8 = sp_el0;
    iStack_78 = *(iVar8 + 0x5e0);
    iStack_88 = 0;
    puStack_70 = &stack0xffffffffffffffd0;
    iStack_60 = iVar7;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar9._0_8_ + 0x80),auStack_80,&iStack_88,0x8001ca1);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(auVar9._8_8_ + 0x48) = *(iStack_88 + 0x5d);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_78) {
        return iVar3;
    }
    auVar10 = __stack_chk_fail(iVar3);
    *extraout_x18_00 = sym.lpass_cdc_rx_macro_put_hph_hd2_mode;
    pcStack_a8 = sym.lpass_cdc_rx_macro_put_hph_hd2_mode;
    iVar7 = sp_el0;
    iStack_b8 = *(iVar7 + 0x5e0);
    iStack_c8 = 0;
    ppuStack_b0 = &puStack_70;
    iStack_a0 = auVar9._8_8_;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar10._0_8_ + 0x80),auStack_c0,&iStack_c8,0x800285c);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(iStack_c8 + 0x5d) = *(auVar10._8_8_ + 0x48) != 0;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_b8) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail(iVar3);
    *extraout_x18_01 = sym.lpass_cdc_rx_macro_get_hph_pwr_mode;
    pcStack_e8 = sym.lpass_cdc_rx_macro_get_hph_pwr_mode;
    iVar7 = sp_el0;
    iStack_f8 = *(iVar7 + 0x5e0);
    iStack_108 = 0;
    pppuStack_f0 = &ppuStack_b0;
    iStack_e0 = auVar10._8_8_;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar9._0_8_ + 0x80),auStack_100,&iStack_108,0x80016e4);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(auVar9._8_8_ + 0x48) = *(iStack_108 + 0x5c);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_f8) {
        return iVar3;
    }
    auVar10 = __stack_chk_fail(iVar3);
    *extraout_x18_02 = sym.lpass_cdc_rx_macro_put_hph_pwr_mode;
    pcStack_128 = sym.lpass_cdc_rx_macro_put_hph_pwr_mode;
    iVar7 = sp_el0;
    iStack_138 = *(iVar7 + 0x5e0);
    iStack_148 = 0;
    pppuStack_130 = &pppuStack_f0;
    iStack_120 = auVar9._8_8_;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar10._0_8_ + 0x80),auStack_140,&iStack_148,0x80015dc);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(iStack_148 + 0x5c) = *(auVar10._8_8_ + 0x48) != 0;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_138) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail(iVar3);
    *extraout_x18_03 = sym.lpass_cdc_rx_macro_vbat_bcl_gsm_mode_func_get;
    uVar5 = snd_soc_component_read(*(auVar9._0_8_ + 0x80),0x1284);
    *(auVar9._8_8_ + 0x48) = uVar5 >> 2 & 1;
    return 0;
}


// ===== sym.lpass_cdc_rx_macro_soft_clip_enable_put.5c0fcf43324700bd174cccbefdf1d743.cfi_jt @ 0x080134a0 (size 8) =====

ulong sym.lpass_cdc_rx_macro_soft_clip_enable_put.5c0fcf43324700bd174cccbefdf1d743.cfi_jt
                (int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong unaff_x30;
    uchar auVar5 [16];
    uchar auVar6 [16];
    int64_t iStack_b8;
    uchar auStack_b0 [8];
    int64_t iStack_a8;
    uchar **ppuStack_a0;
    code *pcStack_98;
    int64_t iStack_90;
    int64_t iStack_78;
    uchar auStack_70 [8];
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    int64_t iStack_50;
    int64_t iStack_38;
    uchar auStack_30 [8];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    iStack_38 = 0;
    uVar3 = sym.lpass_cdc_rx_macro_get_data(*(param_1 + 0x80),auStack_30,&iStack_38,0x80021e2);
    if ((uVar3 & 1) == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        uVar4 = 0;
        *(iStack_38 + 0x91c) = *(param_2 + 0x48);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return uVar4;
    }
    auVar5 = __stack_chk_fail(uVar4);
    *extraout_x18 = sym.lpass_cdc_rx_macro_aux_hpf_mode_get;
    pcStack_58 = sym.lpass_cdc_rx_macro_aux_hpf_mode_get;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    iStack_78 = 0;
    puStack_60 = &stack0xffffffffffffffe0;
    iStack_50 = param_2;
    uVar3 = sym.lpass_cdc_rx_macro_get_data(*(auVar5._0_8_ + 0x80),auStack_70,&iStack_78,0x800233d);
    if ((uVar3 & 1) == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        uVar4 = 0;
        *(auVar5._8_8_ + 0x48) = *(iStack_78 + 0x920);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return uVar4;
    }
    auVar6 = __stack_chk_fail(uVar4);
    *extraout_x18_00 = sym.lpass_cdc_rx_macro_aux_hpf_mode_put;
    pcStack_98 = sym.lpass_cdc_rx_macro_aux_hpf_mode_put;
    iVar1 = sp_el0;
    iStack_a8 = *(iVar1 + 0x5e0);
    iStack_b8 = 0;
    ppuStack_a0 = &puStack_60;
    iStack_90 = auVar5._8_8_;
    uVar3 = sym.lpass_cdc_rx_macro_get_data(*(auVar6._0_8_ + 0x80),auStack_b0,&iStack_b8,0x80018e7);
    if ((uVar3 & 1) == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        uVar4 = 0;
        *(iStack_b8 + 0x920) = *(auVar6._8_8_ + 0x48);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_a8) {
        return uVar4;
    }
    auVar5 = __stack_chk_fail(uVar4);
    *extraout_x18_01 = sym.lpass_cdc_rx_macro_iir_enable_audio_mixer_get;
    iVar1 = *(auVar5._0_8_ + 0x78);
    uVar2 = *(iVar1 + 0x18);
    uVar3 = snd_soc_component_read(*(auVar5._0_8_ + 0x80),*(iVar1 + 0x10) * 0x80 + 0x1a24U & 0xfffc);
    *(auVar5._8_8_ + 0x48) = (uVar3 & 0xffffffff) >> (uVar2 & 0x3f) & 1;
    return 0;
}


// ===== sym.lpass_cdc_rx_macro_aux_hpf_mode_get.5c0fcf43324700bd174cccbefdf1d743.cfi_jt @ 0x080134a8 (size 8) =====

ulong sym.lpass_cdc_rx_macro_aux_hpf_mode_get.5c0fcf43324700bd174cccbefdf1d743.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong unaff_x30;
    uchar auVar5 [16];
    int64_t iStack_78;
    uchar auStack_70 [8];
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    int64_t iStack_50;
    int64_t iStack_38;
    uchar auStack_30 [8];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    iStack_38 = 0;
    uVar3 = sym.lpass_cdc_rx_macro_get_data(*(param_1 + 0x80),auStack_30,&iStack_38,0x800233d);
    if ((uVar3 & 1) == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        uVar4 = 0;
        *(param_2 + 0x48) = *(iStack_38 + 0x920);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return uVar4;
    }
    auVar5 = __stack_chk_fail(uVar4);
    *extraout_x18 = sym.lpass_cdc_rx_macro_aux_hpf_mode_put;
    pcStack_58 = sym.lpass_cdc_rx_macro_aux_hpf_mode_put;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    iStack_78 = 0;
    puStack_60 = &stack0xffffffffffffffe0;
    iStack_50 = param_2;
    uVar3 = sym.lpass_cdc_rx_macro_get_data(*(auVar5._0_8_ + 0x80),auStack_70,&iStack_78,0x80018e7);
    if ((uVar3 & 1) == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        uVar4 = 0;
        *(iStack_78 + 0x920) = *(auVar5._8_8_ + 0x48);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return uVar4;
    }
    auVar5 = __stack_chk_fail(uVar4);
    *extraout_x18_00 = sym.lpass_cdc_rx_macro_iir_enable_audio_mixer_get;
    iVar1 = *(auVar5._0_8_ + 0x78);
    uVar2 = *(iVar1 + 0x18);
    uVar3 = snd_soc_component_read(*(auVar5._0_8_ + 0x80),*(iVar1 + 0x10) * 0x80 + 0x1a24U & 0xfffc);
    *(auVar5._8_8_ + 0x48) = (uVar3 & 0xffffffff) >> (uVar2 & 0x3f) & 1;
    return 0;
}


// ===== sym.lpass_cdc_rx_macro_put_hph_pwr_mode.5c0fcf43324700bd174cccbefdf1d743.cfi_jt @ 0x080134b0 (size 8) =====

ulong sym.lpass_cdc_rx_macro_put_hph_pwr_mode.5c0fcf43324700bd174cccbefdf1d743.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar5 [16];
    int64_t iStack_38;
    uchar auStack_30 [8];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    iStack_38 = 0;
    uVar3 = sym.lpass_cdc_rx_macro_get_data(*(param_1 + 0x80),auStack_30,&iStack_38,0x80015dc);
    if ((uVar3 & 1) == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        uVar4 = 0;
        *(iStack_38 + 0x5c) = *(param_2 + 0x48) != 0;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return uVar4;
    }
    auVar5 = __stack_chk_fail(uVar4);
    *extraout_x18 = sym.lpass_cdc_rx_macro_vbat_bcl_gsm_mode_func_get;
    uVar2 = snd_soc_component_read(*(auVar5._0_8_ + 0x80),0x1284);
    *(auVar5._8_8_ + 0x48) = uVar2 >> 2 & 1;
    return 0;
}


// ===== sym.lpass_cdc_rx_macro_get_ear_mode.5c0fcf43324700bd174cccbefdf1d743.cfi_jt @ 0x080134b8 (size 8) =====

int sym.lpass_cdc_rx_macro_get_ear_mode.5c0fcf43324700bd174cccbefdf1d743.cfi_jt(int64_t param_1,int64_t param_2)

{
    char cVar1;
    ulong *puVar2;
    int iVar3;
    int iVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    int64_t iVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    uchar auVar10 [16];
    int64_t iStack_208;
    uchar auStack_200 [8];
    int64_t iStack_1f8;
    ulong ***pppuStack_1f0;
    code *pcStack_1e8;
    int64_t iStack_1e0;
    int64_t iStack_1c8;
    uchar auStack_1c0 [8];
    int64_t iStack_1b8;
    ulong ***pppuStack_1b0;
    code *pcStack_1a8;
    int64_t iStack_1a0;
    int64_t iStack_188;
    uchar auStack_180 [8];
    int64_t iStack_178;
    ulong ***pppuStack_170;
    code *pcStack_168;
    int64_t iStack_160;
    int64_t iStack_148;
    uchar auStack_140 [8];
    int64_t iStack_138;
    ulong ***pppuStack_130;
    code *pcStack_128;
    int64_t iStack_120;
    ulong *puStack_108;
    uchar auStack_100 [8];
    int64_t iStack_f8;
    uchar ***pppuStack_f0;
    code *pcStack_e8;
    int64_t iStack_b8;
    uchar auStack_b0 [8];
    int64_t iStack_a8;
    uchar **ppuStack_a0;
    code *pcStack_98;
    int64_t iStack_90;
    int64_t iStack_78;
    uchar auStack_70 [8];
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    int64_t iStack_50;
    int64_t iStack_38;
    uchar auStack_30 [8];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_28 = *(iVar7 + 0x5e0);
    iStack_38 = 0;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(param_1 + 0x80),auStack_30,&iStack_38,0x800283c);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(param_2 + 0x48) = *(iStack_38 + 0x53);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_28) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail(iVar3);
    iVar8 = auVar9._8_8_;
    *extraout_x18 = sym.lpass_cdc_rx_macro_put_ear_mode;
    pcStack_58 = sym.lpass_cdc_rx_macro_put_ear_mode;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    iStack_78 = 0;
    puStack_60 = &stack0xffffffffffffffe0;
    iStack_50 = param_2;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar9._0_8_ + 0x80),auStack_70,&iStack_78,0x8001de8);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(iStack_78 + 0x53) = *(iVar8 + 0x48) != 0;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_68) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail(iVar3);
    *extraout_x18_00 = sym.lpass_cdc_rx_macro_fir_filter_enable_get;
    pcStack_98 = sym.lpass_cdc_rx_macro_fir_filter_enable_get;
    iVar7 = sp_el0;
    iStack_a8 = *(iVar7 + 0x5e0);
    iVar7 = *(auVar9._0_8_ + 0x80);
    iStack_b8 = 0;
    ppuStack_a0 = &puStack_60;
    iStack_90 = iVar8;
    if (iVar7 == 0) {
        iVar3 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_filter_enable_get._rs,
                             "lpass_cdc_rx_macro_fir_filter_enable_get");
        if (iVar3 != 0) {
            _printk(0x800180e,"lpass_cdc_rx_macro_fir_filter_enable_get");
        }
code_r0x080176cc:
        iVar3 = -0x16;
    }
    else {
        uVar6 = sym.lpass_cdc_rx_macro_get_data(iVar7,auStack_b0,&iStack_b8,0x8001ba9);
        if ((uVar6 & 1) == 0) goto code_r0x080176cc;
        iVar3 = 0;
        *(auVar9._8_8_ + 0x48) = *(iStack_b8 + 0x54);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_a8) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail(iVar3);
    *extraout_x18_01 = sym.lpass_cdc_rx_macro_fir_filter_enable_put;
    pcStack_e8 = sym.lpass_cdc_rx_macro_fir_filter_enable_put;
    iVar7 = sp_el0;
    iStack_f8 = *(iVar7 + 0x5e0);
    iVar7 = *(auVar9._0_8_ + 0x80);
    puStack_108 = NULL;
    pppuStack_f0 = &ppuStack_a0;
    if (iVar7 == 0) {
        iVar3 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_filter_enable_put._rs,
                             "lpass_cdc_rx_macro_fir_filter_enable_put");
        if (iVar3 != 0) {
            _printk(0x800180e,"lpass_cdc_rx_macro_fir_filter_enable_put");
            iVar3 = -0x16;
            goto code_r0x080178e4;
        }
    }
    else {
        uVar6 = sym.lpass_cdc_rx_macro_get_data(iVar7,auStack_100,&puStack_108,0x8001c78);
        puVar2 = puStack_108;
        if ((uVar6 & 1) != 0) {
            iVar8 = puStack_108[0x126];
            if ((iVar8 != 0) && (*(puStack_108 + 0x59) != '\0')) {
                cVar1 = *(auVar9._8_8_ + 0x48);
                *(puStack_108 + 0x54) = cVar1 != '\0';
                if (cVar1 == '\0') {
                    snd_soc_component_update_bits(iVar7,0x145c,0xd,0);
                    snd_soc_component_update_bits(iVar7,0x151c,0xd,0);
                    snd_soc_component_update_bits(iVar7,0x1400,0x80,0);
                    snd_soc_component_update_bits(iVar7,0x14c0,0x80,0);
                    snd_soc_component_update_bits(iVar7,0x1004,1,0);
                    iVar7 = puVar2[0x126];
                    clk_disable(iVar7);
                    clk_unprepare(iVar7);
                }
                else {
                    iVar3 = clk_prepare(iVar8);
                    if (iVar3 == 0) {
                        iVar3 = clk_enable(iVar8);
                        if (iVar3 != 0) {
                            clk_unprepare(iVar8);
                            goto code_r0x080177bc;
                        }
                    }
                    else {
code_r0x080177bc:
                        if (iVar3 < 0) {
                            iVar4 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_filter_enable_put._rs.326,
                                                 "lpass_cdc_rx_macro_fir_filter_enable_put");
                            if (iVar4 != 0) {
                                _dev_err(*puVar2,"%s:hifi_fir_clk enable failed\n",
                                         "lpass_cdc_rx_macro_fir_filter_enable_put");
                            }
                            goto code_r0x080178e4;
                        }
                    }
                    snd_soc_component_write(iVar7,0x1460,*(puVar2 + 10));
                    snd_soc_component_write(iVar7,0x1520,*(puVar2 + 0x51));
                    snd_soc_component_update_bits(iVar7,0x1004,1,1);
                    snd_soc_component_update_bits(iVar7,0x1400,0x80,0x80);
                    snd_soc_component_update_bits(iVar7,0x14c0,0x80,0x80);
                    snd_soc_component_update_bits(iVar7,0x145c,0xd,5);
                    snd_soc_component_update_bits(iVar7,0x151c,0xd,5);
                }
            }
            iVar3 = 0;
            goto code_r0x080178e4;
        }
    }
    iVar3 = -0x16;
code_r0x080178e4:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_f8) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail();
    *extraout_x18_02 = sym.lpass_cdc_rx_macro_get_hph_hd2_mode;
    pcStack_128 = sym.lpass_cdc_rx_macro_get_hph_hd2_mode;
    iVar8 = sp_el0;
    iStack_138 = *(iVar8 + 0x5e0);
    iStack_148 = 0;
    pppuStack_130 = &pppuStack_f0;
    iStack_120 = iVar7;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar9._0_8_ + 0x80),auStack_140,&iStack_148,0x8001ca1);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(auVar9._8_8_ + 0x48) = *(iStack_148 + 0x5d);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_138) {
        return iVar3;
    }
    auVar10 = __stack_chk_fail(iVar3);
    *extraout_x18_03 = sym.lpass_cdc_rx_macro_put_hph_hd2_mode;
    pcStack_168 = sym.lpass_cdc_rx_macro_put_hph_hd2_mode;
    iVar7 = sp_el0;
    iStack_178 = *(iVar7 + 0x5e0);
    iStack_188 = 0;
    pppuStack_170 = &pppuStack_130;
    iStack_160 = auVar9._8_8_;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar10._0_8_ + 0x80),auStack_180,&iStack_188,0x800285c);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(iStack_188 + 0x5d) = *(auVar10._8_8_ + 0x48) != 0;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_178) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail(iVar3);
    *extraout_x18_04 = sym.lpass_cdc_rx_macro_get_hph_pwr_mode;
    pcStack_1a8 = sym.lpass_cdc_rx_macro_get_hph_pwr_mode;
    iVar7 = sp_el0;
    iStack_1b8 = *(iVar7 + 0x5e0);
    iStack_1c8 = 0;
    pppuStack_1b0 = &pppuStack_170;
    iStack_1a0 = auVar10._8_8_;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar9._0_8_ + 0x80),auStack_1c0,&iStack_1c8,0x80016e4);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(auVar9._8_8_ + 0x48) = *(iStack_1c8 + 0x5c);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_1b8) {
        return iVar3;
    }
    auVar10 = __stack_chk_fail(iVar3);
    *extraout_x18_05 = sym.lpass_cdc_rx_macro_put_hph_pwr_mode;
    pcStack_1e8 = sym.lpass_cdc_rx_macro_put_hph_pwr_mode;
    iVar7 = sp_el0;
    iStack_1f8 = *(iVar7 + 0x5e0);
    iStack_208 = 0;
    pppuStack_1f0 = &pppuStack_1b0;
    iStack_1e0 = auVar9._8_8_;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar10._0_8_ + 0x80),auStack_200,&iStack_208,0x80015dc);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(iStack_208 + 0x5c) = *(auVar10._8_8_ + 0x48) != 0;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_1f8) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail(iVar3);
    *extraout_x18_06 = sym.lpass_cdc_rx_macro_vbat_bcl_gsm_mode_func_get;
    uVar5 = snd_soc_component_read(*(auVar9._0_8_ + 0x80),0x1284);
    *(auVar9._8_8_ + 0x48) = uVar5 >> 2 & 1;
    return 0;
}


// ===== sym.lpass_cdc_rx_macro_put_ear_mode.5c0fcf43324700bd174cccbefdf1d743.cfi_jt @ 0x080134c0 (size 8) =====

int sym.lpass_cdc_rx_macro_put_ear_mode.5c0fcf43324700bd174cccbefdf1d743.cfi_jt(int64_t param_1,int64_t param_2)

{
    char cVar1;
    ulong *puVar2;
    int iVar3;
    int iVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    int64_t iVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    uchar auVar10 [16];
    int64_t iStack_1c8;
    uchar auStack_1c0 [8];
    int64_t iStack_1b8;
    ulong ***pppuStack_1b0;
    code *pcStack_1a8;
    int64_t iStack_1a0;
    int64_t iStack_188;
    uchar auStack_180 [8];
    int64_t iStack_178;
    ulong ***pppuStack_170;
    code *pcStack_168;
    int64_t iStack_160;
    int64_t iStack_148;
    uchar auStack_140 [8];
    int64_t iStack_138;
    ulong ***pppuStack_130;
    code *pcStack_128;
    int64_t iStack_120;
    int64_t iStack_108;
    uchar auStack_100 [8];
    int64_t iStack_f8;
    uchar ***pppuStack_f0;
    code *pcStack_e8;
    int64_t iStack_e0;
    ulong *puStack_c8;
    uchar auStack_c0 [8];
    int64_t iStack_b8;
    uchar **ppuStack_b0;
    code *pcStack_a8;
    int64_t iStack_78;
    uchar auStack_70 [8];
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    int64_t iStack_50;
    int64_t iStack_38;
    uchar auStack_30 [8];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_28 = *(iVar7 + 0x5e0);
    iStack_38 = 0;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(param_1 + 0x80),auStack_30,&iStack_38,0x8001de8);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(iStack_38 + 0x53) = *(param_2 + 0x48) != 0;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_28) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail(iVar3);
    *extraout_x18 = sym.lpass_cdc_rx_macro_fir_filter_enable_get;
    pcStack_58 = sym.lpass_cdc_rx_macro_fir_filter_enable_get;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    iVar7 = *(auVar9._0_8_ + 0x80);
    iStack_78 = 0;
    puStack_60 = &stack0xffffffffffffffe0;
    iStack_50 = param_2;
    if (iVar7 == 0) {
        iVar3 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_filter_enable_get._rs,
                             "lpass_cdc_rx_macro_fir_filter_enable_get");
        if (iVar3 != 0) {
            _printk(0x800180e,"lpass_cdc_rx_macro_fir_filter_enable_get");
        }
code_r0x080176cc:
        iVar3 = -0x16;
    }
    else {
        uVar6 = sym.lpass_cdc_rx_macro_get_data(iVar7,auStack_70,&iStack_78,0x8001ba9);
        if ((uVar6 & 1) == 0) goto code_r0x080176cc;
        iVar3 = 0;
        *(auVar9._8_8_ + 0x48) = *(iStack_78 + 0x54);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_68) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail(iVar3);
    *extraout_x18_00 = sym.lpass_cdc_rx_macro_fir_filter_enable_put;
    pcStack_a8 = sym.lpass_cdc_rx_macro_fir_filter_enable_put;
    iVar7 = sp_el0;
    iStack_b8 = *(iVar7 + 0x5e0);
    iVar7 = *(auVar9._0_8_ + 0x80);
    puStack_c8 = NULL;
    ppuStack_b0 = &puStack_60;
    if (iVar7 == 0) {
        iVar3 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_filter_enable_put._rs,
                             "lpass_cdc_rx_macro_fir_filter_enable_put");
        if (iVar3 != 0) {
            _printk(0x800180e,"lpass_cdc_rx_macro_fir_filter_enable_put");
            iVar3 = -0x16;
            goto code_r0x080178e4;
        }
    }
    else {
        uVar6 = sym.lpass_cdc_rx_macro_get_data(iVar7,auStack_c0,&puStack_c8,0x8001c78);
        puVar2 = puStack_c8;
        if ((uVar6 & 1) != 0) {
            iVar8 = puStack_c8[0x126];
            if ((iVar8 != 0) && (*(puStack_c8 + 0x59) != '\0')) {
                cVar1 = *(auVar9._8_8_ + 0x48);
                *(puStack_c8 + 0x54) = cVar1 != '\0';
                if (cVar1 == '\0') {
                    snd_soc_component_update_bits(iVar7,0x145c,0xd,0);
                    snd_soc_component_update_bits(iVar7,0x151c,0xd,0);
                    snd_soc_component_update_bits(iVar7,0x1400,0x80,0);
                    snd_soc_component_update_bits(iVar7,0x14c0,0x80,0);
                    snd_soc_component_update_bits(iVar7,0x1004,1,0);
                    iVar7 = puVar2[0x126];
                    clk_disable(iVar7);
                    clk_unprepare(iVar7);
                }
                else {
                    iVar3 = clk_prepare(iVar8);
                    if (iVar3 == 0) {
                        iVar3 = clk_enable(iVar8);
                        if (iVar3 != 0) {
                            clk_unprepare(iVar8);
                            goto code_r0x080177bc;
                        }
                    }
                    else {
code_r0x080177bc:
                        if (iVar3 < 0) {
                            iVar4 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_filter_enable_put._rs.326,
                                                 "lpass_cdc_rx_macro_fir_filter_enable_put");
                            if (iVar4 != 0) {
                                _dev_err(*puVar2,"%s:hifi_fir_clk enable failed\n",
                                         "lpass_cdc_rx_macro_fir_filter_enable_put");
                            }
                            goto code_r0x080178e4;
                        }
                    }
                    snd_soc_component_write(iVar7,0x1460,*(puVar2 + 10));
                    snd_soc_component_write(iVar7,0x1520,*(puVar2 + 0x51));
                    snd_soc_component_update_bits(iVar7,0x1004,1,1);
                    snd_soc_component_update_bits(iVar7,0x1400,0x80,0x80);
                    snd_soc_component_update_bits(iVar7,0x14c0,0x80,0x80);
                    snd_soc_component_update_bits(iVar7,0x145c,0xd,5);
                    snd_soc_component_update_bits(iVar7,0x151c,0xd,5);
                }
            }
            iVar3 = 0;
            goto code_r0x080178e4;
        }
    }
    iVar3 = -0x16;
code_r0x080178e4:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_b8) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail();
    *extraout_x18_01 = sym.lpass_cdc_rx_macro_get_hph_hd2_mode;
    pcStack_e8 = sym.lpass_cdc_rx_macro_get_hph_hd2_mode;
    iVar8 = sp_el0;
    iStack_f8 = *(iVar8 + 0x5e0);
    iStack_108 = 0;
    pppuStack_f0 = &ppuStack_b0;
    iStack_e0 = iVar7;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar9._0_8_ + 0x80),auStack_100,&iStack_108,0x8001ca1);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(auVar9._8_8_ + 0x48) = *(iStack_108 + 0x5d);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_f8) {
        return iVar3;
    }
    auVar10 = __stack_chk_fail(iVar3);
    *extraout_x18_02 = sym.lpass_cdc_rx_macro_put_hph_hd2_mode;
    pcStack_128 = sym.lpass_cdc_rx_macro_put_hph_hd2_mode;
    iVar7 = sp_el0;
    iStack_138 = *(iVar7 + 0x5e0);
    iStack_148 = 0;
    pppuStack_130 = &pppuStack_f0;
    iStack_120 = auVar9._8_8_;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar10._0_8_ + 0x80),auStack_140,&iStack_148,0x800285c);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(iStack_148 + 0x5d) = *(auVar10._8_8_ + 0x48) != 0;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_138) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail(iVar3);
    *extraout_x18_03 = sym.lpass_cdc_rx_macro_get_hph_pwr_mode;
    pcStack_168 = sym.lpass_cdc_rx_macro_get_hph_pwr_mode;
    iVar7 = sp_el0;
    iStack_178 = *(iVar7 + 0x5e0);
    iStack_188 = 0;
    pppuStack_170 = &pppuStack_130;
    iStack_160 = auVar10._8_8_;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar9._0_8_ + 0x80),auStack_180,&iStack_188,0x80016e4);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(auVar9._8_8_ + 0x48) = *(iStack_188 + 0x5c);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_178) {
        return iVar3;
    }
    auVar10 = __stack_chk_fail(iVar3);
    *extraout_x18_04 = sym.lpass_cdc_rx_macro_put_hph_pwr_mode;
    pcStack_1a8 = sym.lpass_cdc_rx_macro_put_hph_pwr_mode;
    iVar7 = sp_el0;
    iStack_1b8 = *(iVar7 + 0x5e0);
    iStack_1c8 = 0;
    pppuStack_1b0 = &pppuStack_170;
    iStack_1a0 = auVar9._8_8_;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar10._0_8_ + 0x80),auStack_1c0,&iStack_1c8,0x80015dc);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(iStack_1c8 + 0x5c) = *(auVar10._8_8_ + 0x48) != 0;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_1b8) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail(iVar3);
    *extraout_x18_05 = sym.lpass_cdc_rx_macro_vbat_bcl_gsm_mode_func_get;
    uVar5 = snd_soc_component_read(*(auVar9._0_8_ + 0x80),0x1284);
    *(auVar9._8_8_ + 0x48) = uVar5 >> 2 & 1;
    return 0;
}


// ===== sym.lpass_cdc_rx_macro_put_hph_hd2_mode.5c0fcf43324700bd174cccbefdf1d743.cfi_jt @ 0x080134c8 (size 8) =====

ulong sym.lpass_cdc_rx_macro_put_hph_hd2_mode.5c0fcf43324700bd174cccbefdf1d743.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong unaff_x30;
    uchar auVar5 [16];
    uchar auVar6 [16];
    int64_t iStack_b8;
    uchar auStack_b0 [8];
    int64_t iStack_a8;
    uchar **ppuStack_a0;
    code *pcStack_98;
    int64_t iStack_90;
    int64_t iStack_78;
    uchar auStack_70 [8];
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    int64_t iStack_50;
    int64_t iStack_38;
    uchar auStack_30 [8];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    iStack_38 = 0;
    uVar3 = sym.lpass_cdc_rx_macro_get_data(*(param_1 + 0x80),auStack_30,&iStack_38,0x800285c);
    if ((uVar3 & 1) == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        uVar4 = 0;
        *(iStack_38 + 0x5d) = *(param_2 + 0x48) != 0;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return uVar4;
    }
    auVar5 = __stack_chk_fail(uVar4);
    *extraout_x18 = sym.lpass_cdc_rx_macro_get_hph_pwr_mode;
    pcStack_58 = sym.lpass_cdc_rx_macro_get_hph_pwr_mode;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    iStack_78 = 0;
    puStack_60 = &stack0xffffffffffffffe0;
    iStack_50 = param_2;
    uVar3 = sym.lpass_cdc_rx_macro_get_data(*(auVar5._0_8_ + 0x80),auStack_70,&iStack_78,0x80016e4);
    if ((uVar3 & 1) == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        uVar4 = 0;
        *(auVar5._8_8_ + 0x48) = *(iStack_78 + 0x5c);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return uVar4;
    }
    auVar6 = __stack_chk_fail(uVar4);
    *extraout_x18_00 = sym.lpass_cdc_rx_macro_put_hph_pwr_mode;
    pcStack_98 = sym.lpass_cdc_rx_macro_put_hph_pwr_mode;
    iVar1 = sp_el0;
    iStack_a8 = *(iVar1 + 0x5e0);
    iStack_b8 = 0;
    ppuStack_a0 = &puStack_60;
    iStack_90 = auVar5._8_8_;
    uVar3 = sym.lpass_cdc_rx_macro_get_data(*(auVar6._0_8_ + 0x80),auStack_b0,&iStack_b8,0x80015dc);
    if ((uVar3 & 1) == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        uVar4 = 0;
        *(iStack_b8 + 0x5c) = *(auVar6._8_8_ + 0x48) != 0;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_a8) {
        return uVar4;
    }
    auVar5 = __stack_chk_fail(uVar4);
    *extraout_x18_01 = sym.lpass_cdc_rx_macro_vbat_bcl_gsm_mode_func_get;
    uVar2 = snd_soc_component_read(*(auVar5._0_8_ + 0x80),0x1284);
    *(auVar5._8_8_ + 0x48) = uVar2 >> 2 & 1;
    return 0;
}


// ===== sym.lpass_cdc_rx_macro_fir_audio_mixer_put.5c0fcf43324700bd174cccbefdf1d743.cfi_jt @ 0x080134d0 (size 8) =====

uint64_t sym.lpass_cdc_rx_macro_fir_audio_mixer_put.5c0fcf43324700bd174cccbefdf1d743.cfi_jt
                   (int64_t param_1,int64_t param_2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint8_t uVar3;
    bool bVar4;
    code *pcVar5;
    int iVar6;
    uint32_t uVar7;
    int iVar8;
    uint64_t uVar9;
    ulong *puVar10;
    char *pcVar11;
    uint64_t uVar12;
    bool bVar13;
    uint32_t uVar14;
    uint32_t *puVar15;
    uint uVar16;
    char *pcVar17;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar18;
    ulong uVar19;
    uint32_t *puVar20;
    uint64_t uVar21;
    ulong uVar22;
    uint uVar23;
    int64_t iVar24;
    uint64_t uVar25;
    ulong unaff_x30;
    uchar auVar26 [16];
    ulong *puStack_210;
    uchar auStack_208 [12];
    uint32_t uStack_1fc;
    uint32_t auStack_1f8 [100];
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    pcVar17 = &puStack_210;
    iVar24 = sp_el0;
    iStack_68 = *(iVar24 + 0x5e0);
    pcVar11 = 0x190;
    iVar24 = *(param_1 + 0x80);
    uVar14 = **(param_1 + 0x78);
    uVar25 = uVar14;
    uVar7 = (*(param_1 + 0x78))[1];
    uVar12 = uVar7;
    memset(auStack_1f8,0);
    puStack_210 = NULL;
    if (iVar24 == 0) {
        iVar6 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_audio_mixer_put._rs,"lpass_cdc_rx_macro_fir_audio_mixer_put");
        pcVar17 = pcVar11;
        if (iVar6 != 0) {
            _printk(0x800180e,"lpass_cdc_rx_macro_fir_audio_mixer_put");
            pcVar17 = pcVar11;
        }
code_r0x080187d0:
        uVar9 = 0xffffffea;
    }
    else {
        uVar9 = sym.lpass_cdc_rx_macro_get_data(iVar24,auStack_208,&puStack_210,0x80026ae);
        puVar10 = puStack_210;
        if ((uVar9 & 1) == 0) goto code_r0x080187d0;
        if (1 < uVar14) {
            iVar6 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_audio_mixer_put._rs.332,
                                 "lpass_cdc_rx_macro_fir_audio_mixer_put");
            if (iVar6 != 0) {
                pcVar11 = "%s: path_idx:%d is invalid\n";
                uVar12 = uVar14;
code_r0x08018848:
                pcVar17 = "lpass_cdc_rx_macro_fir_audio_mixer_put";
                _dev_err(*puStack_210,pcVar11,"lpass_cdc_rx_macro_fir_audio_mixer_put",uVar12);
            }
            goto code_r0x080187d0;
        }
        if (1 < uVar7) {
            iVar6 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_audio_mixer_put._rs.333,
                                 "lpass_cdc_rx_macro_fir_audio_mixer_put");
            if (iVar6 != 0) {
                pcVar11 = "%s: grp_idx:%d is invalid\n";
                goto code_r0x08018848;
            }
            goto code_r0x080187d0;
        }
        if ((puStack_210[0x126] == 0) || (*(puStack_210 + 0x59) == '\0')) {
            uVar9 = 0;
        }
        else {
            uVar1 = *(param_2 + 0x48);
            uVar9 = uVar1;
            uStack_1fc = uVar1;
            if (uVar1 < 0x65) {
                pcVar17 = uVar9 << 2;
                *(puStack_210 + uVar12 * 4 + uVar25 * 8 + 0x8ec) = uVar1;
                memcpy(auStack_1f8,param_2 + 0x4c);
                if (uVar1 != 0) {
                    puVar20 = &uStack_1fc;
                    puVar15 = puVar10 + uVar12 * 400 + uVar25 * 800 + 0x2ac;
                    do {
                        puVar20 = puVar20 + 1;
                        uVar9 = uVar9 - 1;
                        *puVar15 = *puVar20;
                        puVar15 = puVar15 + 1;
                    } while (uVar9 != 0);
                }
                uVar9 = 0;
                uVar3 = *(puVar10 + uVar25 + 0x50);
                *(puVar10 + uVar12 + uVar25 * 2 + 0x55) = 0;
                if (*(puVar10 + uVar25 + 0x11e) + *(puVar10 + uVar25 * 8 + 0x8ec) == uVar3) {
                    pcVar17 = uVar14;
                    uVar9 = sym.set_fir_filter_coeff(iVar24,puVar10,pcVar17);
                }
            }
            else {
                iVar6 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_audio_mixer_put._rs.334,
                                     "lpass_cdc_rx_macro_fir_audio_mixer_put");
                if (iVar6 != 0) {
                    pcVar17 = "lpass_cdc_rx_macro_fir_audio_mixer_put";
                    _dev_err(*puVar10,"%s: inavlid number of RX_FIR coefficients:%d in path:%d, group:%d\n",
                             "lpass_cdc_rx_macro_fir_audio_mixer_put",uVar9,uVar14,uVar7);
                }
                uVar9 = 0xffffffea;
                *(puVar10 + uVar12 * 4 + uVar25 * 8 + 0x8ec) = 0;
            }
        }
    }
    iVar24 = sp_el0;
    if (*(iVar24 + 0x5e0) == iStack_68) {
        return uVar9;
    }
    auVar26 = __stack_chk_fail(uVar9);
    puVar10 = auVar26._8_8_;
    uVar19 = auVar26._0_8_;
    *extraout_x18 = sym.set_fir_filter_coeff;
    iVar6 = pcVar17;
    if (iVar6 == 0) {
        uVar16 = 0x1464;
        uVar14 = 0x1468;
        uVar22 = 0x145c;
        uVar23 = 0x1400;
    }
    else {
        if (iVar6 != 1) {
            iVar6 = ___ratelimit(obj.set_fir_filter_coeff._rs,"set_fir_filter_coeff");
            if (iVar6 == 0) {
                uVar7 = 0xffffffea;
            }
            else {
                _dev_err(*puVar10,"%s: inavlid FIR ID: %d\n","set_fir_filter_coeff",pcVar17 & 0xffffffff);
                uVar7 = 0xffffffea;
            }
            goto code_r0x08018e08;
        }
        uVar22 = 0x151c;
        uVar16 = 0x1524;
        uVar14 = 0x1528;
        uVar23 = 0x14c0;
    }
    uVar25 = pcVar17 & 0xffffffff;
    if ((*(puVar10 + (pcVar17 & 0xffffffff) * 2 + 0x55) == '\0') || (*(puVar10 + uVar25 * 2 + 0x56) == '\0')) {
        sym.lpass_cdc_rx_macro_mclk_enable(puVar10,1,0);
        uVar18 = puVar10[0x126];
        uVar7 = clk_prepare(uVar18);
        if ((uVar7 == 0) && (uVar7 = clk_enable(uVar18), uVar7 != 0)) {
            clk_unprepare(uVar18);
        }
        snd_soc_component_update_bits(uVar19,0x1004,1,1);
        snd_soc_component_update_bits(uVar19,uVar23,0xc0,0xc0);
        snd_soc_component_update_bits(uVar19,uVar23,0xc0,0x80);
        usleep_range_state(10,0xb,2);
        iVar24 = 0;
        bVar13 = false;
        do {
            pcVar17 = puVar10 + iVar24 + uVar25 * 2 + 0x55;
            if (*pcVar17 == '\0') {
                uVar1 = *(puVar10 + iVar24 * 4 + uVar25 * 8 + 0x8ec);
                if (100 < uVar1) {
                    iVar8 = ___ratelimit(obj.set_fir_filter_coeff._rs.322,"set_fir_filter_coeff");
                    if (iVar8 != 0) {
                        _dev_err(*puVar10,"%s: inavlid number of RX_FIR coefficients:%d in path:%d, group:%d\n",
                                 "set_fir_filter_coeff",uVar1,iVar6,iVar24);
                    }
                    uVar7 = 0xffffffea;
                    break;
                }
                uVar12 = iVar24 * 100;
                uVar9 = (uVar1 & 0xfffffffe) + uVar12;
                if (uVar12 < uVar9) {
                    uVar21 = 0;
                    iVar8 = iVar24 * 0x32;
                    puVar20 = puVar10 + uVar25 * 100 + iVar24 * 0x32 + 0x56;
                    do {
                        if (99 < uVar21) goto code_r0x08018e80;
                        uVar2 = puVar20[-1];
                        snd_soc_component_write(uVar19,uVar14,uVar2 & 0xff);
                        snd_soc_component_write(uVar19,uVar14 | 4,uVar2 >> 8 & 0xff);
                        snd_soc_component_write(uVar19,uVar14 + 8,uVar2 >> 0x10 & 0xff);
                        snd_soc_component_write(uVar19,uVar14 + 0xc,uVar2 >> 0x18);
                        uVar2 = *puVar20;
                        uVar21 = uVar21 + 2;
                        snd_soc_component_write(uVar19,uVar14 | 0x10,uVar2 & 0xff);
                        snd_soc_component_write(uVar19,uVar14 | 0x14,uVar2 >> 8 & 0xff);
                        snd_soc_component_write(uVar19,uVar14 + 0x18,uVar2 >> 0x10 & 0xff);
                        snd_soc_component_write(uVar19,uVar14 + 0x1c,uVar2 >> 0x18);
                        snd_soc_component_write(uVar19,uVar16,iVar8);
                        snd_soc_component_update_bits(uVar19,uVar22,2,2);
                        usleep_range_state(0xd,0xf,2);
                        snd_soc_component_update_bits(uVar19,uVar22,2,0);
                        iVar8 = iVar8 + 1;
                        puVar20 = puVar20 + 2;
                    } while (uVar12 + uVar21 < uVar9);
                    if ((uVar1 & 1) != 0) {
                        if (99 < uVar21) {
code_r0x08018e80:
    //WARNING: Does not return
                            pcVar5 = SoftwareBreakpoint(0x5512,0x8018e84);
                            (*pcVar5)();
                        }
                        uVar12 = uVar12 + uVar21;
code_r0x08018af8:
                        iVar8 = uVar12;
                        uVar1 = *(puVar10 + uVar21 * 4 + iVar24 * 400 + uVar25 * 800 + 0x2ac);
                        if (iVar8 < 0) {
                            iVar8 = iVar8 + 1;
                        }
                        snd_soc_component_write(uVar19,uVar14,uVar1 & 0xff);
                        snd_soc_component_write(uVar19,uVar14 | 4,uVar1 >> 8 & 0xff);
                        snd_soc_component_write(uVar19,uVar14 + 8,uVar1 >> 0x10 & 0xff);
                        snd_soc_component_write(uVar19,uVar14 + 0xc,uVar1 >> 0x18);
                        snd_soc_component_write(uVar19,uVar14 | 0x10,0);
                        snd_soc_component_write(uVar19,uVar14 | 0x14,0);
                        snd_soc_component_write(uVar19,uVar14 + 0x18,0);
                        snd_soc_component_write(uVar19,uVar14 + 0x1c,0);
                        snd_soc_component_write(uVar19,uVar16,iVar8 >> 1);
                        snd_soc_component_update_bits(uVar19,uVar22,2,2);
                        usleep_range_state(0xd,0xf,2);
                        snd_soc_component_update_bits(uVar19,uVar22,2,0);
                    }
                }
                else if ((uVar1 & 1) != 0) {
                    uVar21 = 0;
                    goto code_r0x08018af8;
                }
                *pcVar17 = '\x01';
            }
            iVar24 = 1;
            bVar4 = !bVar13;
            bVar13 = true;
        } while (bVar4);
        snd_soc_component_update_bits(uVar19,uVar23,0x80,0);
        snd_soc_component_update_bits(uVar19,0x1004,1,0);
        uVar19 = puVar10[0x126];
        clk_disable(uVar19);
        clk_unprepare(uVar19);
        sym.lpass_cdc_rx_macro_mclk_enable(puVar10,0,0);
    }
    else {
        uVar7 = 0;
    }
code_r0x08018e08:
    return uVar7;
}


// ===== sym.snd_soc_dapm_get_enum_double.cfi_jt @ 0x080134d8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_dapm_get_enum_double.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.snd_soc_dapm_get_volsw.cfi_jt @ 0x080134e0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_dapm_get_volsw.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.lpass_cdc_rx_macro_iir_band_audio_mixer_put.5c0fcf43324700bd174cccbefdf1d743.cfi_jt @ 0x080134e8 (size 8) =====

void sym.lpass_cdc_rx_macro_iir_band_audio_mixer_put.5c0fcf43324700bd174cccbefdf1d743.cfi_jt
               (int64_t param_1,int64_t param_2)

{
    int iVar1;
    uint32_t *puVar2;
    int64_t iVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    int64_t iVar7;
    code *pcVar8;
    uint64_t uVar9;
    ulong uVar10;
    ulong *in_x18;
    int64_t iVar11;
    ulong unaff_x30;
    int64_t iStack_80;
    uchar auStack_78 [8];
    ulong uStack_70;
    ulong uStack_68;
    uint uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_58 = *(iVar3 + 0x5e0);
    puVar2 = *(param_1 + 0x78);
    iVar3 = *(param_1 + 0x80);
    uStack_60 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    iStack_80 = 0;
    uVar4 = *puVar2;
    uVar5 = puVar2[2];
    uVar9 = sym.lpass_cdc_rx_macro_get_data(iVar3,auStack_78,&iStack_80,0x8001708);
    if ((uVar9 & 1) == 0) {
        uVar10 = 0xffffffea;
    }
    else {
        memcpy(&uStack_70,param_2 + 0x48,puVar2[2]);
        snd_soc_component_write(iVar3,uVar4 * 0x80 + 0x1a2c,(uVar5 * 5 & 0x1f) << 2);
        iVar7 = iStack_80;
        uVar6 = uStack_70;
        iVar1 = uVar4 * 0x80 + 0x1a30;
        snd_soc_component_write(iVar3,iVar1,uStack_70 & 0xff);
        snd_soc_component_write(iVar3,iVar1,uVar6 >> 8 & 0xff);
        snd_soc_component_write(iVar3,iVar1,uVar6 >> 0x10 & 0xff);
        snd_soc_component_write(iVar3,iVar1,uVar6 >> 0x18 & 0x3f);
        if ((1 < uVar4) || (4 < uVar5)) goto code_r0x080184fc;
        iVar11 = 0;
        *(iVar7 + uVar4 * 100 + uVar5 * 0x14 + 0x1e2) = uVar6;
        do {
            uVar6 = *((&uStack_70 | 4) + iVar11);
            snd_soc_component_write(iVar3,iVar1,uVar6 & 0xff);
            snd_soc_component_write(iVar3,iVar1,uVar6 >> 8 & 0xff);
            snd_soc_component_write(iVar3,iVar1,uVar6 >> 0x10 & 0xff);
            snd_soc_component_write(iVar3,iVar1,uVar6 >> 0x18 & 0x3f);
            *(uVar4 * 100 + uVar5 * 0x14 + iVar7 + 0x1e6 + iVar11) = uVar6;
            iVar11 = iVar11 + 4;
        } while (iVar11 != 0x10);
        uVar10 = 0;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_58) {
        return;
    }
    __stack_chk_fail(uVar10);
code_r0x080184fc:
    //WARNING: Does not return
    pcVar8 = SoftwareBreakpoint(0x5512,0x8018500);
    (*pcVar8)();
}


// ===== sym.snd_soc_info_enum_double.cfi_jt @ 0x080134f0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_info_enum_double.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.lpass_cdc_rx_macro_iir_filter_info.5c0fcf43324700bd174cccbefdf1d743.cfi_jt @ 0x080134f8 (size 8) =====

ulong sym.lpass_cdc_rx_macro_iir_filter_info.5c0fcf43324700bd174cccbefdf1d743.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    
    iVar1 = *(param_1 + 0x78);
    *(param_2 + 0x40) = 4;
    *(param_2 + 0x48) = *(iVar1 + 8);
    return 0;
}


// ===== sym.snd_soc_info_volsw.cfi_jt @ 0x08013500 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_info_volsw.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.lpass_cdc_rx_macro_fir_filter_info.5c0fcf43324700bd174cccbefdf1d743.cfi_jt @ 0x08013508 (size 8) =====

ulong sym.lpass_cdc_rx_macro_fir_filter_info.5c0fcf43324700bd174cccbefdf1d743.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    
    iVar1 = *(param_1 + 0x78);
    *(param_2 + 0x40) = 4;
    *(param_2 + 0x48) = *(iVar1 + 8);
    return 0;
}


// ===== sym.lpass_cdc_rx_set_fir_capability @ 0x08013510 (size 192) =====

ulong sym.lpass_cdc_rx_set_fir_capability(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint64_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    char *pcVar5;
    int64_t *in_x2;
    char *in_x3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar6 [16];
    int64_t iStack_38;
    uchar auStack_30 [8];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    iStack_38 = 0;
    if (arg1 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_rx_set_fir_capability._rs,"lpass_cdc_rx_set_fir_capability");
        if (iVar1 != 0) {
            _printk(0x800180e,"lpass_cdc_rx_set_fir_capability");
        }
    }
    else {
        in_x3 = "lpass_cdc_rx_set_fir_capability";
        in_x2 = &iStack_38;
        uVar2 = sym.lpass_cdc_rx_macro_get_data(arg1,auStack_30,in_x2,0x8001082);
        if ((uVar2 & 1) != 0) {
            uVar3 = 0;
            *(iStack_38 + 0x59) = arg2 & 1;
            goto code_r0x08013588;
        }
    }
    uVar3 = 0xffffffea;
code_r0x08013588:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_28) {
        return uVar3;
    }
    auVar6 = __stack_chk_fail(uVar3);
    *extraout_x18 = sym.lpass_cdc_rx_macro_get_data;
    iVar4 = lpass_cdc_get_device_ptr(*(auVar6._0_8_ + 0x18),1);
    *auVar6._8_8_ = iVar4;
    if (iVar4 == 0) {
        uVar3 = ___ratelimit(obj.lpass_cdc_rx_macro_get_data._rs,"lpass_cdc_rx_macro_get_data");
        if (uVar3 == 0) {
            return uVar3;
        }
        pcVar5 = "%s: null device for macro!\n";
    }
    else {
        iVar4 = *(iVar4 + 0x98);
        *in_x2 = iVar4;
        if (iVar4 == 0) {
            uVar3 = ___ratelimit(obj.lpass_cdc_rx_macro_get_data._rs.2,"lpass_cdc_rx_macro_get_data");
            if (uVar3 == 0) {
                return uVar3;
            }
            pcVar5 = "%s: priv is null for macro!\n";
        }
        else {
            if (*(iVar4 + 0x138) != 0) {
                return 1;
            }
            uVar3 = ___ratelimit(obj.lpass_cdc_rx_macro_get_data._rs.4,"lpass_cdc_rx_macro_get_data");
            if (uVar3 == 0) {
                return uVar3;
            }
            pcVar5 = "%s: rx_priv component is not initialized!\n";
        }
    }
    _dev_err(*(auVar6._0_8_ + 0x18),pcVar5,in_x3);
    return 0;
}


// ===== sym.lpass_cdc_rx_macro_get_data @ 0x080135d0 (size 232) =====

ulong sym.lpass_cdc_rx_macro_get_data(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    ulong uVar2;
    char *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = lpass_cdc_get_device_ptr(*(arg1 + 0x18),1);
    *arg2 = iVar1;
    if (iVar1 == 0) {
        uVar2 = ___ratelimit(obj.lpass_cdc_rx_macro_get_data._rs,"lpass_cdc_rx_macro_get_data");
        if (uVar2 == 0) {
            return uVar2;
        }
        pcVar3 = "%s: null device for macro!\n";
    }
    else {
        iVar1 = *(iVar1 + 0x98);
        *arg3 = iVar1;
        if (iVar1 == 0) {
            uVar2 = ___ratelimit(obj.lpass_cdc_rx_macro_get_data._rs.2,"lpass_cdc_rx_macro_get_data");
            if (uVar2 == 0) {
                return uVar2;
            }
            pcVar3 = "%s: priv is null for macro!\n";
        }
        else {
            if (*(iVar1 + 0x138) != 0) {
                return 1;
            }
            uVar2 = ___ratelimit(obj.lpass_cdc_rx_macro_get_data._rs.4,"lpass_cdc_rx_macro_get_data");
            if (uVar2 == 0) {
                return uVar2;
            }
            pcVar3 = "%s: rx_priv component is not initialized!\n";
        }
    }
    _dev_err(*(arg1 + 0x18),pcVar3,arg4);
    return 0;
}


// ===== sym.lpass_cdc_rx_macro_probe @ 0x080136b8 (size 1088) =====

int sym.lpass_cdc_rx_macro_probe(int64_t arg1)

{
    int iVar1;
    uint64_t uVar2;
    int64_t *piVar3;
    ulong uVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    char *pcVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    int iStack_c8;
    uint uStack_c4;
    ulong uStack_c0;
    code *pcStack_b8;
    code *pcStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    code *pcStack_98;
    ulong uStack_90;
    code *pcStack_88;
    ulong uStack_80;
    code *pcStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iVar8 = arg1 + 0x10;
    iStack_48 = *(iVar5 + 0x5e0);
    iStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    pcStack_78 = NULL;
    uStack_70 = 0;
    pcStack_88 = NULL;
    uStack_80 = 0;
    pcStack_98 = NULL;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    pcStack_b8 = NULL;
    pcStack_b0 = NULL;
    uStack_c0 = 0;
    iStack_c8 = 1;
    uStack_c4 = 0;
    uVar2 = lpass_cdc_is_va_macro_registered(iVar8);
    if ((uVar2 & 1) == 0) {
        pcVar9 = "%s: va-macro not registered yet, defer\n";
code_r0x08013a38:
        _dev_err(iVar8,pcVar9,"lpass_cdc_rx_macro_probe");
        iVar1 = -0x205;
    }
    else {
        piVar3 = devm_kmalloc(iVar8,0x940,0xdc0);
        if (piVar3 != NULL) {
            uVar4 = *(arg1 + 0x300);
            *(piVar3 + 0x5b) = 1;
            *piVar3 = iVar8;
            iVar1 = of_property_read_variable_u32_array(uVar4,0x80022b1,&uStack_c0 + 4,1,0);
            if ((iVar1 < 0) ||
               (iVar1 = of_property_read_variable_u32_array
                                  (*(arg1 + 0x300),"qcom,rx_mclk_mode_muxsel",&uStack_c0,1,0), iVar1 < 0)) {
                _dev_err(iVar8,"%s: could not find %s entry in dt\n","lpass_cdc_rx_macro_probe",0x80022b1);
                goto code_r0x08013a78;
            }
            iVar1 = of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,default-clk-id",&uStack_c4,1,0);
            if (iVar1 < 0) {
                _dev_err(iVar8,"%s: could not find %s entry in dt\n","lpass_cdc_rx_macro_probe","qcom,default-clk-id"
                        );
                uStack_c4 = 1;
            }
            iVar5 = of_find_property(*(arg1 + 0x300),"qcom,is-used-swr-gpio",0);
            if ((iVar5 != 0) &&
               (iVar1 = of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,is-used-swr-gpio",&iStack_c8,1,0)
               , iVar1 < 0)) {
                _dev_err(iVar8,"%s: error reading %s in dt\n","lpass_cdc_rx_macro_probe","qcom,is-used-swr-gpio");
                iStack_c8 = 1;
            }
            iVar5 = of_parse_phandle(*(arg1 + 0x300),"qcom,rx-swr-gpios",0);
            piVar3[0x26] = iVar5;
            if ((iVar5 == 0) && (iStack_c8 != 0)) {
                _dev_err(iVar8,"%s: swr_gpios handle not provided!\n","lpass_cdc_rx_macro_probe");
                iVar1 = -0x16;
                goto code_r0x08013a78;
            }
            iVar1 = msm_cdc_pinctrl_get_state();
            if ((iVar1 < 0) && (iStack_c8 != 0)) {
                pcVar9 = "%s: failed to get swr pin state\n";
                goto code_r0x08013a38;
            }
            msm_cdc_pinctrl_set_wakeup_capable(piVar3[0x26],0);
            iVar5 = devm_ioremap(iVar8,uStack_c0._4_4_,0x1000);
            if (iVar5 == 0) {
                pcVar9 = "%s: ioremap failed\n";
            }
            else {
                piVar3[0x3a] = iVar5;
                iVar6 = devm_ioremap(iVar8,uStack_c0 & 0xffffffff,4);
                if (iVar6 != 0) {
                    piVar3[0x3b] = iVar6;
                    piVar3[0x1f] = 0;
                    piVar3[0x20] = 0xfffffffe0;
                    *(piVar3 + 0x45) = 1;
                    piVar3[0x21] = piVar3 + 0x21;
                    piVar3[0x22] = piVar3 + 0x21;
                    piVar3[0x23] = sym.lpass_cdc_rx_macro_add_child_devices.5c0fcf43324700bd174cccbefdf1d743.cfi_jt;
                    piVar3[0x19] = piVar3;
                    piVar3[0x1a] = 0;
                    piVar3[0x1b] = 0;
                    piVar3[0x1c] = 0;
                    piVar3[0x1d] = sym.rx_swrm_clock.5c0fcf43324700bd174cccbefdf1d743.cfi_jt;
                    piVar3[0x1e] = sym.lpass_cdc_rx_macro_core_vote.5c0fcf43324700bd174cccbefdf1d743.cfi_jt;
                    *(piVar3 + 0x125) = uStack_c4;
                    *(piVar3 + 0x92a) = uStack_c4;
                    uVar7 = devm_clk_get(iVar8,"rx_mclk2_2x_clk");
                    uVar2 = 0;
                    if (uVar7 < 0xfffffffffffff001) {
                        uVar2 = uVar7;
                    }
                    *(piVar3 + 0x124) = 1;
                    piVar3[0x126] = uVar2;
                    *(arg1 + 0xa8) = piVar3;
                    __mutex_init(piVar3 + 0xc,"&rx_priv->mclk_lock",obj.lpass_cdc_rx_set_fir_capability._rs);
                    __mutex_init(piVar3 + 0x12,"&rx_priv->swr_clk_lock",obj.lpass_cdc_rx_set_fir_capability._rs);
                    uStack_68 = 0;
                    uStack_60 = 0;
                    pcStack_b8 = sym.lpass_cdc_rx_macro_init.5c0fcf43324700bd174cccbefdf1d743.cfi_jt;
                    pcStack_b0 = sym.lpass_cdc_rx_macro_deinit.5c0fcf43324700bd174cccbefdf1d743.cfi_jt;
                    uStack_a0 = 0;
                    uStack_50 = 0;
                    pcStack_98 = obj.lpass_cdc_rx_macro_dai;
                    uStack_90 = 0;
                    uStack_a8 = 7;
                    pcStack_88 = sym.lpass_cdc_rx_macro_event_handler.5c0fcf43324700bd174cccbefdf1d743.cfi_jt;
                    uStack_80 = 0;
                    pcStack_78 = sym.lpass_cdc_rx_macro_set_port_map.5c0fcf43324700bd174cccbefdf1d743.cfi_jt;
                    uStack_70 = 0;
                    iStack_58 = iVar5;
                    iVar1 = lpass_cdc_register_macro(iVar8,1,&pcStack_b8);
                    if (iVar1 == 0) {
                        pm_runtime_set_autosuspend_delay(iVar8,0x32);
                        __pm_runtime_use_autosuspend(iVar8,1);
                        __pm_runtime_set_status(iVar8,2);
                        *(arg1 + 0x210) = *(arg1 + 0x210) | 0x100;
                        pm_runtime_enable(iVar8);
                        queue_work_on(0x20,_pm_runtime_force_resume,piVar3 + 0x20);
                    }
                    else {
                        _dev_err(iVar8,"%s: register macro failed\n","lpass_cdc_rx_macro_probe");
                    }
                    goto code_r0x08013a78;
                }
                pcVar9 = "%s: ioremap failed for muxsel\n";
            }
            _dev_err(iVar8,pcVar9,"lpass_cdc_rx_macro_probe");
        }
        iVar1 = -0xc;
    }
code_r0x08013a78:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_48) {
        return iVar1;
    }
    iVar8 = __stack_chk_fail();
    *extraout_x18 = sym.lpass_cdc_rx_macro_remove;
    iVar5 = *(iVar8 + 0xa8);
    if (iVar5 == 0) {
        iVar1 = -0x16;
    }
    else {
        iVar8 = iVar8 + 0x10;
        if (0 < *(iVar5 + 0x918)) {
            platform_device_unregister(*(iVar5 + 0x900));
            if (1 < *(iVar5 + 0x918)) {
                platform_device_unregister(*(iVar5 + 0x908));
                if (2 < *(iVar5 + 0x918)) {
                    platform_device_unregister(*(iVar5 + 0x910));
                }
            }
        }
        __pm_runtime_disable(iVar8,1);
        __pm_runtime_set_status(iVar8,2);
        lpass_cdc_unregister_macro(iVar8,1);
        kfree(*(iVar5 + 0xc0));
        iVar1 = 0;
    }
    return iVar1;
}


// ===== sym.lpass_cdc_rx_macro_remove @ 0x08013af8 (size 168) =====

ulong sym.lpass_cdc_rx_macro_remove(int64_t arg1)

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
        if (0 < *(iVar2 + 0x918)) {
            platform_device_unregister(*(iVar2 + 0x900));
            if (1 < *(iVar2 + 0x918)) {
                platform_device_unregister(*(iVar2 + 0x908));
                if (2 < *(iVar2 + 0x918)) {
                    platform_device_unregister(*(iVar2 + 0x910));
                }
            }
        }
        __pm_runtime_disable(arg1,1);
        __pm_runtime_set_status(arg1,2);
        lpass_cdc_unregister_macro(arg1,1);
        kfree(*(iVar2 + 0xc0));
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.lpass_cdc_rx_macro_add_child_devices @ 0x08013ba0 (size 636) =====

uint64_t sym.lpass_cdc_rx_macro_add_child_devices(int64_t arg1)

{
    int iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    ulong *puVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t *piVar8;
    ulong uVar9;
    char *pcVar10;
    ulong in_x7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *unaff_x19;
    int64_t unaff_x20;
    int64_t unaff_x21;
    char *unaff_x22;
    char *pcVar11;
    uint64_t uVar12;
    uint16_t uVar13;
    ulong unaff_x30;
    uchar auVar14 [16];
    uchar *puVar15;
    code *pcVar16;
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
    puVar15 = &stack0xffffffffffffffa0;
    iVar3 = sp_el0;
    iStack_68 = *(iVar3 + 0x5e0);
    piVar8 = arg1 + -0x100;
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
    if (piVar8 == NULL) {
        uVar9 = 0x8001ce0;
code_r0x08013d24:
        uVar7 = _printk(uVar9,"lpass_cdc_rx_macro_add_child_devices");
    }
    else {
        iVar3 = *piVar8;
        if (iVar3 == 0) {
            uVar9 = 0x80019cf;
            goto code_r0x08013d24;
        }
        if (*(iVar3 + 0x2f0) == 0) {
            pcVar11 = "%s: DT node for RX dev does not exist\n";
code_r0x08013d3c:
            uVar7 = _dev_err(iVar3,pcVar11,"lpass_cdc_rx_macro_add_child_devices");
        }
        else {
            *(arg1 + 0x818) = 0;
            puVar4 = of_get_next_available_child(*(iVar3 + 0x2f0),0);
            uVar7 = 0;
            if (puVar4 != NULL) {
                uVar13 = 0;
                unaff_x20 = arg1 + -0x38;
                unaff_x22 = "rx_swr_master";
                pcVar11 = "rx_swr_master";
                unaff_x21 = 0;
                do {
                    iVar5 = strnstr(*puVar4,"rx_swr_master",0xd);
                    pcVar10 = "rx_swr_ctrl";
                    if (iVar5 == 0) {
                        pcVar10 = *puVar4;
                    }
                    strlcpy(&uStack_b8,pcVar10,0x4f);
                    iVar6 = platform_device_alloc(&uStack_b8,0xffffffff);
                    iVar3 = *piVar8;
                    unaff_x19 = puVar4;
                    if (iVar6 == 0) {
                        pcVar11 = "%s: pdev memory alloc failed\n";
                        goto code_r0x08013d3c;
                    }
                    *(iVar6 + 0x70) = iVar3;
                    *(iVar6 + 0x300) = puVar4;
                    iVar3 = unaff_x21;
                    if (iVar5 != 0) {
                        iVar1 = platform_device_add_data(iVar6,unaff_x20,0x38);
                        if (iVar1 == 0) {
                            uVar12 = uVar13;
                            iVar3 = krealloc(unaff_x21,uVar12 * 8 + 8,0xcc0);
                            uVar7 = 0;
                            if (iVar3 != 0) {
                                uVar13 = uVar13 + 1;
                                *(iVar3 + uVar12 * 8) = iVar6;
                                *(arg1 + -0x40) = iVar3;
                                goto code_r0x08013cc8;
                            }
                        }
                        else {
                            uVar7 = _dev_err(iVar6 + 0x10,"%s: cannot add plat data ctrl:%d\n",
                                             "lpass_cdc_rx_macro_add_child_devices",uVar13);
                        }
code_r0x08013d90:
                        unaff_x22 = pcVar11;
                        if (0 < *(arg1 + 0x818)) {
                            uVar7 = platform_device_put(*(arg1 + 0x800));
                            if (1 < *(arg1 + 0x818)) {
                                uVar7 = platform_device_put(*(arg1 + 0x808));
                                if ((2 < *(arg1 + 0x818)) &&
                                   (uVar7 = platform_device_put(*(arg1 + 0x810)), 3 < *(arg1 + 0x818))) {
code_r0x08013e14:
    //WARNING: Does not return
                                    pcVar16 = SoftwareBreakpoint(0x5512,0x8013e18);
                                    (*pcVar16)();
                                }
                            }
                        }
                        goto code_r0x08013dd8;
                    }
code_r0x08013cc8:
                    uVar7 = platform_device_add(iVar6);
                    unaff_x21 = iVar3;
                    if (uVar7 != 0) {
                        uVar7 = _dev_err(iVar6 + 0x10,"%s: Cannot add platform device\n",
                                         "lpass_cdc_rx_macro_add_child_devices");
                        goto code_r0x08013d90;
                    }
                    uVar2 = *(arg1 + 0x818);
                    if (2 < uVar2) goto code_r0x08013dd8;
                    *(arg1 + 0x818) = uVar2 + 1;
                    if (2 < uVar2) goto code_r0x08013e14;
                    iVar3 = *piVar8;
                    *(arg1 + 0x800 + uVar2 * 8) = iVar6;
                    puVar4 = of_get_next_available_child(*(iVar3 + 0x2f0),puVar4);
                } while (puVar4 != NULL);
                uVar7 = 0;
                unaff_x19 = puVar4;
            }
        }
    }
code_r0x08013dd8:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_68) {
        return uVar7;
    }
    auVar14 = __stack_chk_fail();
    piVar8 = auVar14._0_8_;
    *extraout_x18 = sym.rx_swrm_clock;
    pcVar16 = sym.rx_swrm_clock;
    iVar3 = dev_get_regmap(*(*piVar8 + 0x60),0);
    if (iVar3 == 0) {
        iVar1 = ___ratelimit(obj.rx_swrm_clock._rs,"rx_swrm_clock");
        if (iVar1 == 0) {
            uVar2 = 0xffffffea;
        }
        else {
            _dev_err(*piVar8,"%s: regmap is NULL\n","rx_swrm_clock");
            uVar2 = 0xffffffea;
        }
        goto code_r0x08014044;
    }
    mutex_lock(piVar8 + 0x12);
    pcVar11 = "enable";
    if ((auVar14._8_8_ & 1) == 0) {
        pcVar11 = "disable";
    }
    __trace_bprintk(0x8013e60,*0x8019000,"rx_swrm_clock",pcVar11);
    if ((auVar14._8_8_ & 1) == 0) {
        if (piVar8[8] < 1) {
            iVar1 = ___ratelimit(obj.rx_swrm_clock._rs.41,"rx_swrm_clock");
            if (iVar1 != 0) {
                _dev_err(*piVar8,"%s: rx swrm clock users already reset\n","rx_swrm_clock");
            }
            uVar2 = 0;
            *(piVar8 + 8) = 0;
        }
        else {
            iVar1 = piVar8[8] + -1;
            *(piVar8 + 8) = iVar1;
            if (iVar1 == 0) {
                regmap_update_bits_base
                          (iVar3,0x1108,1,0,0,0,0,in_x7,puVar15,pcVar16,unaff_x22,unaff_x21,unaff_x20,
                           unaff_x19);
                sym.lpass_cdc_rx_macro_mclk_enable(piVar8,0,1);
                uVar2 = msm_cdc_pinctrl_select_sleep_state(piVar8[0x26]);
                if (uVar2 < 0) {
                    iVar1 = ___ratelimit(obj.rx_swrm_clock._rs.43,"rx_swrm_clock");
                    if (iVar1 != 0) {
                        _dev_err(*piVar8,"%s: rx swr pinctrl disable failed\n","rx_swrm_clock");
                    }
                    goto code_r0x0801403c;
                }
                iVar1 = piVar8[8];
            }
            else {
                uVar2 = 0;
            }
code_r0x08014020:
            __trace_bprintk(0x801401c,*0x8019000,"rx_swrm_clock",iVar1);
        }
    }
    else {
        __pm_runtime_resume(*piVar8,4);
        if (piVar8[8] != 0) {
            uVar2 = 0;
code_r0x08013eb4:
            iVar3 = *piVar8;
            uVar9 = ktime_get_mono_fast_ns();
            *(iVar3 + 0x218) = uVar9;
            __pm_runtime_suspend(*piVar8,0xd);
            iVar1 = piVar8[8] + 1;
            *(piVar8 + 8) = iVar1;
            goto code_r0x08014020;
        }
        uVar2 = msm_cdc_pinctrl_select_active_state(piVar8[0x26]);
        if (uVar2 < 0) {
            iVar1 = ___ratelimit(obj.rx_swrm_clock._rs.37,"rx_swrm_clock");
            if (iVar1 != 0) {
                iVar3 = *piVar8;
                pcVar11 = "%s: rx swr pinctrl enable failed\n";
code_r0x08014144:
                _dev_err(iVar3,pcVar11,"rx_swrm_clock");
            }
        }
        else {
            uVar2 = sym.lpass_cdc_rx_macro_mclk_enable(piVar8,1,1);
            if (-1 < uVar2) {
                if (*(piVar8 + 0x45) != '\0') {
                    regmap_update_bits_base(iVar3,0x1108,2,2,0,0,0);
                }
                regmap_update_bits_base(iVar3,0x1108,1,1,0,0,0);
                if (*(piVar8 + 0x45) != '\0') {
                    regmap_update_bits_base(iVar3,0x1108,2,0,0,0,0);
                }
                *(piVar8 + 0x45) = 0;
                goto code_r0x08013eb4;
            }
            msm_cdc_pinctrl_select_sleep_state(piVar8[0x26]);
            iVar1 = ___ratelimit(obj.rx_swrm_clock._rs.39,"rx_swrm_clock");
            if (iVar1 != 0) {
                iVar3 = *piVar8;
                pcVar11 = "%s: rx request clock enable failed\n";
                goto code_r0x08014144;
            }
        }
        iVar3 = *piVar8;
        uVar9 = ktime_get_mono_fast_ns();
        *(iVar3 + 0x218) = uVar9;
        __pm_runtime_suspend(*piVar8,0xd);
    }
code_r0x0801403c:
    mutex_unlock(piVar8 + 0x12);
code_r0x08014044:
    return uVar2;
}


// ===== sym.rx_swrm_clock @ 0x08013e1c (size 824) =====

ulong sym.rx_swrm_clock(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = dev_get_regmap(*(*arg1 + 0x60),0);
    if (iVar2 == 0) {
        iVar1 = ___ratelimit(obj.rx_swrm_clock._rs,"rx_swrm_clock");
        if (iVar1 != 0) {
            _dev_err(*arg1,"%s: regmap is NULL\n","rx_swrm_clock");
        }
        return 0xffffffea;
    }
    uVar3 = mutex_lock(arg1 + 0x90);
    return uVar3;
}


// ===== sym.lpass_cdc_rx_macro_core_vote @ 0x08014154 (size 188) =====

uint sym.lpass_cdc_rx_macro_core_vote(int64_t arg1)

{
    int iVar1;
    uint64_t uVar2;
    ulong uVar3;
    uint64_t in_x1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_rx_macro_core_vote._rs,"lpass_cdc_rx_macro_core_vote");
        if (iVar1 != 0) {
            _printk(0x8001934,"lpass_cdc_rx_macro_core_vote");
            return 0xffffffea;
        }
    }
    else if ((*(arg1 + 0x5b) != '\0') || ((in_x1 & 1) == 0)) {
        if ((in_x1 & 1) == 0) {
            __pm_runtime_suspend(*arg1,0xd);
            arg1 = *arg1;
            uVar3 = ktime_get_mono_fast_ns();
            *(arg1 + 0x218) = uVar3;
            return 0;
        }
        __pm_runtime_resume(*arg1,4);
        uVar2 = lpass_cdc_check_core_votes(*arg1);
        if ((uVar2 & 1) != 0) {
            return 0;
        }
        return 0xfffffdf6;
    }
    return 0xffffffea;
}


// ===== sym.lpass_cdc_rx_macro_mclk_enable @ 0x08014210 (size 1192) =====

int sym.lpass_cdc_rx_macro_mclk_enable(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    ulong uVar5;
    char *pcVar6;
    ulong *in_x18;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = dev_get_regmap(*(*arg1 + 0x60),0);
    if (iVar3 == 0) {
        iVar2 = ___ratelimit(obj.lpass_cdc_rx_macro_mclk_enable._rs,"lpass_cdc_rx_macro_mclk_enable");
        if (iVar2 == 0) {
            return -0x16;
        }
        _dev_err(*arg1,"%s: regmap is NULL\n","lpass_cdc_rx_macro_mclk_enable");
        return -0x16;
    }
    mutex_lock(arg1 + 0x60);
    iVar2 = *(arg1 + 0x3c);
    if ((arg2 & 1U) == 0) {
        if (iVar2 < 1) {
            iVar2 = ___ratelimit(obj.lpass_cdc_rx_macro_mclk_enable._rs.52,"lpass_cdc_rx_macro_mclk_enable");
            if (iVar2 != 0) {
                _dev_err(*arg1,"%s: clock already disabled\n","lpass_cdc_rx_macro_mclk_enable");
            }
            iVar1 = 0;
            *(arg1 + 0x3c) = 0;
            goto code_r0x080145b8;
        }
        *(arg1 + 0x3c) = iVar2 + -1;
        if (iVar2 + -1 != 0) {
            iVar1 = 0;
            goto code_r0x080145b8;
        }
        regmap_update_bits_base(iVar3,0x1104,1,0,0,0,0);
        regmap_update_bits_base(iVar3,0x1104,2,2,0,0,0);
        regmap_update_bits_base(iVar3,0x1100,2,0,0,0,0);
        regmap_update_bits_base(iVar3,0x1100,1,0,0,0,0);
        lpass_cdc_clk_rsc_fs_gen_request(*arg1,0);
        if (arg1 == 0) {
            iVar2 = ___ratelimit(obj.lpass_cdc_rx_macro_core_vote._rs,"lpass_cdc_rx_macro_core_vote");
            if (iVar2 != 0) {
                _printk(0x8001934,"lpass_cdc_rx_macro_core_vote");
            }
code_r0x080144e0:
            iVar1 = -0x16;
code_r0x08014544:
            iVar2 = ___ratelimit(obj.lpass_cdc_rx_macro_mclk_enable._rs.54,"lpass_cdc_rx_macro_mclk_enable");
            if (iVar2 != 0) {
                _dev_err(*arg1,"%s: rx request core vote failed\n","lpass_cdc_rx_macro_mclk_enable");
            }
        }
        else {
            if (*(arg1 + 0x5b) == '\0') goto code_r0x080144e0;
            __pm_runtime_resume(*arg1,4);
            uVar4 = lpass_cdc_check_core_votes(*arg1);
            if ((uVar4 & 1) == 0) {
                iVar1 = -0x20a;
                goto code_r0x08014544;
            }
            iVar1 = 0;
        }
        lpass_cdc_clk_rsc_request_clock(*arg1,*(arg1 + 0x92a),*(arg1 + 0x928),0);
        if (iVar1 == 0) {
            if (arg1 == 0) {
                iVar2 = ___ratelimit(obj.lpass_cdc_rx_macro_core_vote._rs,"lpass_cdc_rx_macro_core_vote");
                if (iVar2 != 0) {
                    _printk(0x8001934,"lpass_cdc_rx_macro_core_vote");
                }
            }
            else {
                __pm_runtime_suspend(*arg1,0xd);
                iVar3 = *arg1;
                uVar5 = ktime_get_mono_fast_ns();
                *(iVar3 + 0x218) = uVar5;
            }
        }
        *(arg1 + 0x928) = *(arg1 + 0x92a);
        goto code_r0x080145b8;
    }
    if (iVar2 != 0) {
        iVar1 = 0;
code_r0x08014270:
        *(arg1 + 0x3c) = iVar2 + 1;
        goto code_r0x080145b8;
    }
    if (*(arg1 + 0x52) != '\0') {
        *(arg1 + 0x928) = 1;
    }
    if (arg1 == 0) {
        iVar2 = ___ratelimit(obj.lpass_cdc_rx_macro_core_vote._rs,"lpass_cdc_rx_macro_core_vote");
        if (iVar2 == 0) goto code_r0x080144c0;
        _printk(0x8001934,"lpass_cdc_rx_macro_core_vote");
        iVar1 = -0x16;
code_r0x080144ec:
        iVar2 = ___ratelimit(obj.lpass_cdc_rx_macro_mclk_enable._rs.49,"lpass_cdc_rx_macro_mclk_enable");
        if (iVar2 == 0) goto code_r0x080145b8;
        uVar5 = *arg1;
        pcVar6 = "%s: rx request core vote failed\n";
    }
    else {
        if (*(arg1 + 0x5b) == '\0') {
code_r0x080144c0:
            iVar1 = -0x16;
            goto code_r0x080144ec;
        }
        __pm_runtime_resume(*arg1,4);
        uVar4 = lpass_cdc_check_core_votes(*arg1);
        if ((uVar4 & 1) == 0) {
            iVar1 = -0x20a;
            goto code_r0x080144ec;
        }
        iVar1 = lpass_cdc_clk_rsc_request_clock(*arg1,*(arg1 + 0x92a),*(arg1 + 0x928),1);
        __pm_runtime_suspend(*arg1,0xd);
        iVar7 = *arg1;
        uVar5 = ktime_get_mono_fast_ns();
        *(iVar7 + 0x218) = uVar5;
        if (-1 < iVar1) {
            lpass_cdc_clk_rsc_fs_gen_request(*arg1,1);
            regcache_mark_dirty(iVar3);
            regcache_sync_region(iVar3,0x1000,0x1f8c);
            regmap_update_bits_base(iVar3,0x1100,1,1,0,0,0);
            regmap_update_bits_base(iVar3,0x1100,2,2,0,0,0);
            regmap_update_bits_base(iVar3,0x1104,2,0,0,0,0);
            regmap_update_bits_base(iVar3,0x1104,1,1,0,0,0);
            iVar2 = *(arg1 + 0x3c);
            goto code_r0x08014270;
        }
        iVar2 = ___ratelimit(obj.lpass_cdc_rx_macro_mclk_enable._rs.51,"lpass_cdc_rx_macro_mclk_enable");
        if (iVar2 == 0) goto code_r0x080145b8;
        uVar5 = *arg1;
        pcVar6 = "%s: rx request clock enable failed\n";
    }
    _dev_err(uVar5,pcVar6,"lpass_cdc_rx_macro_mclk_enable");
code_r0x080145b8:
    __trace_bprintk(0x80145b4,*0x8019000,"lpass_cdc_rx_macro_mclk_enable",arg2 & 1,arg3 & 1,*(arg1 + 0x3c));
    mutex_unlock(arg1 + 0x60);
    return iVar1;
}


// ===== sym.lpass_cdc_rx_macro_init @ 0x080146b8 (size 680) =====

int sym.lpass_cdc_rx_macro_init(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    char *pcVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = lpass_cdc_get_device_ptr(*(arg1 + 0x18),1);
    if (iVar3 == 0) {
        uVar4 = *(arg1 + 0x18);
        pcVar5 = "%s: null device for macro!\n";
    }
    else {
        iVar6 = *(iVar3 + 0x98);
        if (iVar6 != 0) {
            iVar1 = arg1 + 0xd0;
            iVar2 = snd_soc_dapm_new_controls(iVar1,obj.lpass_cdc_rx_macro_dapm_widgets,0x4c);
            if (iVar2 < 0) {
                pcVar5 = "%s: failed to add controls\n";
            }
            else {
                iVar2 = snd_soc_dapm_add_routes(iVar1,obj.rx_audio_map,0x124);
                if (iVar2 < 0) {
                    pcVar5 = "%s: failed to add routes\n";
                }
                else {
                    iVar2 = snd_soc_dapm_new_widgets(*(arg1 + 0xe8));
                    if (iVar2 < 0) {
                        pcVar5 = "%s: failed to add widgets\n";
                    }
                    else {
                        iVar2 = snd_soc_add_component_controls(arg1,obj.lpass_cdc_rx_macro_snd_controls,0x32);
                        if (-1 < iVar2) {
                            *(iVar6 + 0x938) = 0;
                            *(iVar6 + 0x5a) = 1;
                            snd_soc_dapm_ignore_suspend(iVar1,"RX_MACRO_AIF1 Playback");
                            snd_soc_dapm_ignore_suspend(iVar1,"RX_MACRO_AIF2 Playback");
                            snd_soc_dapm_ignore_suspend(iVar1,"RX_MACRO_AIF3 Playback");
                            snd_soc_dapm_ignore_suspend(iVar1,"RX_MACRO_AIF4 Playback");
                            snd_soc_dapm_ignore_suspend(iVar1,"RX_MACRO_AIF5 Playback");
                            snd_soc_dapm_ignore_suspend(iVar1,"RX_MACRO_AIF6 Playback");
                            snd_soc_dapm_ignore_suspend(iVar1,"HPHL_OUT");
                            snd_soc_dapm_ignore_suspend(iVar1,"HPHR_OUT");
                            snd_soc_dapm_ignore_suspend(iVar1,"AUX_OUT");
                            snd_soc_dapm_ignore_suspend(iVar1,"PCM_OUT");
                            snd_soc_dapm_ignore_suspend(iVar1,"RX_TX DEC0_INP");
                            snd_soc_dapm_ignore_suspend(iVar1,"RX_TX DEC1_INP");
                            snd_soc_dapm_ignore_suspend(iVar1,"RX_TX DEC2_INP");
                            snd_soc_dapm_ignore_suspend(iVar1,"RX_TX DEC3_INP");
                            snd_soc_dapm_sync(iVar1);
                            snd_soc_component_update_bits(arg1,0x1434,7,2);
                            snd_soc_component_update_bits(arg1,0x14f4,7,2);
                            snd_soc_component_update_bits(arg1,0x15c0,7,2);
                            snd_soc_component_update_bits(arg1,0x1410,3,2);
                            snd_soc_component_update_bits(arg1,0x14d0,3,2);
                            snd_soc_component_update_bits(arg1,0x1590,3,2);
                            *(iVar6 + 0x138) = arg1;
                            return 0;
                        }
                        pcVar5 = "%s: failed to add snd_ctls\n";
                    }
                }
            }
            _dev_err(iVar3,pcVar5,"lpass_cdc_rx_macro_init");
            return iVar2;
        }
        uVar4 = *(arg1 + 0x18);
        pcVar5 = "%s: priv is null for macro!\n";
    }
    _dev_err(uVar4,pcVar5,"lpass_cdc_rx_macro_init");
    return -0x16;
}


// ===== sym.lpass_cdc_rx_macro_deinit @ 0x08014960 (size 124) =====

int sym.lpass_cdc_rx_macro_deinit(int64_t arg1)

{
    uint8_t uVar1;
    int64_t *piVar2;
    code *pcVar3;
    bool bVar4;
    uchar uVar5;
    uint8_t uVar6;
    uint uVar7;
    int iVar8;
    int iVar9;
    uint64_t uVar10;
    int64_t arg1_00;
    ulong uVar11;
    uint32_t uVar12;
    code cVar13;
    int64_t *piVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar15;
    uint64_t uVar16;
    ulong unaff_x30;
    uchar auVar17 [12];
    int64_t *piStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    int64_t iStack_28;
    uchar auStack_20 [8];
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar15 = sp_el0;
    iStack_18 = *(iVar15 + 0x5e0);
    piVar14 = &iStack_28;
    iStack_28 = 0;
    uVar10 = sym.lpass_cdc_rx_macro_get_data(arg1,auStack_20,piVar14,0x8001170);
    if ((uVar10 & 1) == 0) {
        iVar8 = -0x16;
    }
    else {
        iVar8 = 0;
        *(iStack_28 + 0x138) = 0;
    }
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_18) {
        return iVar8;
    }
    auVar17 = __stack_chk_fail(iVar8);
    arg1_00 = auVar17._0_8_;
    *extraout_x18 = sym.lpass_cdc_rx_macro_event_handler;
    pcStack_58 = sym.lpass_cdc_rx_macro_event_handler;
    iVar15 = sp_el0;
    uVar16 = piVar14 & 0xffffffff;
    iStack_68 = *(iVar15 + 0x5e0);
    piStack_78 = NULL;
    iStack_70 = 0;
    puStack_60 = &stack0xfffffffffffffff0;
    uVar10 = sym.lpass_cdc_rx_macro_get_data(arg1_00,&iStack_70,&piStack_78,0x8001600);
    iVar15 = iStack_70;
    piVar2 = piStack_78;
    if ((uVar10 & 1) == 0) {
        iVar8 = -0x16;
        goto code_r0x08014ea4;
    }
    iVar8 = 0;
    uVar12 = piVar14;
    switch(auVar17._8_4_ & 0xffff) {
    case 1:
        bVar4 = (piVar14 & 0xffff) != 0;
        iVar8 = (uVar16 >> 0x10) * 0xc0;
        snd_soc_component_update_bits(arg1_00,iVar8 + 0x1400U & 0xffc0,0x10,bVar4 << 4);
        uVar12 = iVar8 + 0x1418U & 0xfff8;
        cVar13 = 0x10;
        uVar16 = bVar4 << 4;
        goto code_r0x08014e98;
    case 2:
        _segment.ehdr = obj.imped_table;
        snd_soc_component_update_bits(arg1_00,0x1414,0xff,0);
        snd_soc_component_update_bits(arg1_00,*(_segment.ehdr + 4),_segment.ehdr[6],0);
        snd_soc_component_update_bits(arg1_00,*(_segment.ehdr + 8),_segment.ehdr[10],0);
        snd_soc_component_update_bits(arg1_00,*(_segment.ehdr + 0xc),_segment.ehdr[0xe],0);
        snd_soc_component_update_bits(arg1_00,*(_segment.ehdr + 0x10),_segment.ehdr[0x12],0);
        uVar16 = 0;
        uVar12 = *(_segment.ehdr + 0x14);
        cVar13 = _segment.ehdr[0x16];
        goto code_r0x08014e98;
    case 3:
        _segment.ehdr = obj.imped_table;
        if (uVar12 < 4) {
code_r0x08014b80:
            iVar15 = 0;
        }
        else {
            if (0xc < uVar12) break;
            if (uVar12 < 5) goto code_r0x08014b80;
            if (uVar12 - 5 < 7) {
                iVar15 = (uVar12 - 5) + 1;
            }
            else {
                iVar15 = 8;
            }
        }
        uVar10 = *(iVar15 * 8 + 0x8012cb4);
        uVar16 = uVar10 * 0x18;
        if (((0xd8 < uVar16) || (0xd8 < (uVar16 | 2))) || (0xd8 < (uVar16 | 3))) goto code_r0x08015010;
        iVar15 = uVar10 * 0x18;
        snd_soc_component_update_bits
                  (arg1_00,*(obj.imped_table + uVar10 * 0x18),*(iVar15 + 0x8012bda),*(iVar15 + 0x8012bdb));
        snd_soc_component_update_bits
                  (arg1_00,*(_segment.ehdr + iVar15 + 4),_segment.ehdr[iVar15 + 6],_segment.ehdr[iVar15 + 7]);
        snd_soc_component_update_bits
                  (arg1_00,*(_segment.ehdr + iVar15 + 8),_segment.ehdr[iVar15 + 10],_segment.ehdr[iVar15 + 0xb]);
        snd_soc_component_update_bits
                  (arg1_00,*(_segment.ehdr + iVar15 + 0xc),_segment.ehdr[iVar15 + 0xe],_segment.ehdr[iVar15 + 0xf]);
        snd_soc_component_update_bits
                  (arg1_00,*(_segment.ehdr + iVar15 + 0x10),_segment.ehdr[iVar15 + 0x12],_segment.ehdr[iVar15 + 0x13]
                  );
        uVar12 = *(_segment.ehdr + iVar15 + 0x14);
        cVar13 = _segment.ehdr[iVar15 + 0x16];
        uVar16 = _segment.ehdr[iVar15 + 0x17];
        goto code_r0x08014e98;
    case 4:
        __trace_bprintk(0x8014c70,*0x8019000,"lpass_cdc_rx_macro_event_handler");
        *(piStack_78 + 0x5a) = 0;
        if (piStack_78[0x18] != NULL) {
            swrm_wcd_notify(*piStack_78[0x18],6,0);
        }
        iVar15 = iStack_70;
        if (((*(iStack_70 + 0x200) & 7) == 0) && (*(iStack_70 + 0x20c) == 2)) break;
        iVar8 = lpass_cdc_runtime_suspend(iStack_70);
        if (iVar8 == 0) {
            __pm_runtime_disable(iVar15,1);
            __pm_runtime_set_status(iVar15,2);
            pm_runtime_enable(iVar15);
        }
        goto code_r0x08014ea4;
    case 5:
        __trace_bprintk(0x8014d00,*0x8019000,"lpass_cdc_rx_macro_event_handler");
        *(piStack_78 + 0x5a) = 1;
        *(piStack_78 + 0x45) = 1;
        if (piStack_78[0x18] != NULL) {
            swrm_wcd_notify(*piStack_78[0x18],7,0);
        }
        break;
    default:
        goto code_r0x08014ea4;
    case 7:
        lpass_cdc_rsc_clk_reset(iStack_70,1);
        lpass_cdc_rsc_clk_reset(iVar15,5);
        break;
    case 9:
        if (uVar12 >> 0x10 != 2) {
            uVar12 = (uVar12 >> 0x10) * 0x60 + 0x1800 & 0xffe0;
            uVar7 = snd_soc_component_read(arg1_00,uVar12);
            snd_soc_component_write(arg1_00,uVar12,uVar7);
        }
        break;
    case 0xc:
        *(piStack_78 + 0x5b) = 1;
        if (piStack_78 == NULL) {
            iVar8 = ___ratelimit(obj.lpass_cdc_rx_macro_core_vote._rs,"lpass_cdc_rx_macro_core_vote");
            if (iVar8 == 0) {
                iVar8 = -0x16;
            }
            else {
                _printk(0x8001934,"lpass_cdc_rx_macro_core_vote");
                iVar8 = -0x16;
            }
        }
        else {
            __pm_runtime_resume(*piStack_78,4);
            uVar10 = lpass_cdc_check_core_votes(*piVar2);
            if ((uVar10 & 1) != 0) {
                iVar8 = lpass_cdc_clk_rsc_request_clock(*piVar2,*(piVar2 + 0x92a),1,1);
                if (iVar8 < 0) {
                    iVar9 = ___ratelimit(obj.lpass_cdc_rx_macro_event_handler._rs.350,
                                         "lpass_cdc_rx_macro_event_handler");
                    if (iVar9 != 0) {
                        _dev_err(*piVar2,"%s, failed to enable clk, ret:%d\n","lpass_cdc_rx_macro_event_handler",
                                 iVar8);
                    }
                }
                else {
                    lpass_cdc_clk_rsc_request_clock(*piVar2,*(piVar2 + 0x92a),1,0);
                }
                __pm_runtime_suspend(*piVar2,0xd);
                iVar15 = *piVar2;
                uVar11 = ktime_get_mono_fast_ns();
                *(iVar15 + 0x218) = uVar11;
                goto code_r0x08014ea4;
            }
            iVar8 = -0x20a;
        }
        iVar9 = ___ratelimit(obj.lpass_cdc_rx_macro_event_handler._rs,"lpass_cdc_rx_macro_event_handler");
        if (iVar9 != 0) {
            _dev_err(*piVar2,"%s: rx request core vote failed\n","lpass_cdc_rx_macro_event_handler");
        }
        goto code_r0x08014ea4;
    case 0xd:
        uVar5 = snd_soc_component_read(arg1_00,0x1414);
        piVar14 = piStack_78;
        *(piStack_78 + 0x127) = uVar5;
        uVar6 = snd_soc_component_read(arg1_00,0x14d4);
        uVar1 = *(piVar14 + 0x127);
        *(piVar14 + 0x939) = uVar6;
        if (uVar12 == 0) {
            if ((uVar1 + 6 & 0xff) < 0x29) {
                snd_soc_component_update_bits(arg1_00,0x1414,0xff,uVar1 + 6);
                uVar6 = *(piVar14 + 0x939);
            }
            if (uVar6 + 6 < 0x29) {
                uVar12 = uVar6 + 6;
                goto code_r0x08014f3c;
            }
        }
        else {
            if (uVar1 < 0x29) {
                snd_soc_component_update_bits(arg1_00,0x1414,0xff,uVar1 - 6);
                uVar6 = *(piVar14 + 0x939);
            }
            if (uVar6 < 0x29) {
                uVar12 = uVar6 - 6;
code_r0x08014f3c:
                uVar16 = uVar12;
                uVar12 = 0x14d4;
                cVar13 = 0xff;
                goto code_r0x08014e98;
            }
        }
        break;
    case 0xe:
        uVar12 = 0x1404;
        goto code_r0x08014e90;
    case 0xf:
        uVar12 = 0x14c4;
code_r0x08014e90:
        cVar13 = 0x4;
code_r0x08014e98:
        snd_soc_component_update_bits(arg1_00,uVar12,cVar13,uVar16);
    }
    iVar8 = 0;
code_r0x08014ea4:
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_68) {
        return iVar8;
    }
    __stack_chk_fail();
code_r0x08015010:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(1,0x8015014);
    (*pcVar3)();
}


// ===== sym.lpass_cdc_rx_macro_event_handler @ 0x080149dc (size 1592) =====

int sym.lpass_cdc_rx_macro_event_handler(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    int64_t *piVar2;
    code *pcVar3;
    bool bVar4;
    uchar uVar5;
    uint8_t uVar6;
    uint uVar7;
    int iVar8;
    int iVar9;
    uint64_t uVar10;
    ulong uVar11;
    uint32_t uVar12;
    code cVar13;
    ulong *in_x18;
    int64_t iVar14;
    uint32_t uVar15;
    uint64_t uVar16;
    ulong unaff_x30;
    int64_t *piStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    uVar16 = arg3 & 0xffffffff;
    iStack_38 = *(iVar14 + 0x5e0);
    piStack_48 = NULL;
    iStack_40 = 0;
    uVar10 = sym.lpass_cdc_rx_macro_get_data(arg1,&stack0xffffffffffffffc0,&stack0xffffffffffffffb8,0x8001600);
    iVar14 = iStack_40;
    piVar2 = piStack_48;
    if ((uVar10 & 1) == 0) {
        iVar8 = -0x16;
        goto code_r0x08014ea4;
    }
    iVar8 = 0;
    uVar12 = (arg2 & 0xffff) - 1;
    if (0xe < uVar12) goto code_r0x08014ea4;
    //switch table (14 cases) at 0x8001058
    uVar15 = arg3;
    switch(*(uVar12 * 2 + 0x8001058) * 4 + 0x8014a58) {
    case 0x8014a5c:
        bVar4 = (arg3 & 0xffffU) != 0;
        iVar8 = (uVar16 >> 0x10) * 0xc0;
        snd_soc_component_update_bits(arg1,iVar8 + 0x1400U & 0xffc0,0x10,bVar4 << 4);
        uVar12 = iVar8 + 0x1418U & 0xfff8;
        cVar13 = 0x10;
        uVar16 = bVar4 << 4;
        goto code_r0x08014e98;
    case 0x8014ab8:
        _segment.ehdr = obj.imped_table;
        snd_soc_component_update_bits(arg1,0x1414,0xff,0);
        snd_soc_component_update_bits(arg1,*(_segment.ehdr + 4),_segment.ehdr[6],0);
        snd_soc_component_update_bits(arg1,*(_segment.ehdr + 8),_segment.ehdr[10],0);
        snd_soc_component_update_bits(arg1,*(_segment.ehdr + 0xc),_segment.ehdr[0xe],0);
        snd_soc_component_update_bits(arg1,*(_segment.ehdr + 0x10),_segment.ehdr[0x12],0);
        uVar16 = 0;
        uVar12 = *(_segment.ehdr + 0x14);
        cVar13 = _segment.ehdr[0x16];
        goto code_r0x08014e98;
    case 0x8014b58:
        _segment.ehdr = obj.imped_table;
        if (uVar15 < 4) {
code_r0x08014b80:
            iVar14 = 0;
        }
        else {
            if (0xc < uVar15) break;
            if (uVar15 < 5) goto code_r0x08014b80;
            if (uVar15 - 5 < 7) {
                iVar14 = (uVar15 - 5) + 1;
            }
            else {
                iVar14 = 8;
            }
        }
        uVar10 = *(iVar14 * 8 + 0x8012cb4);
        uVar16 = uVar10 * 0x18;
        if (((0xd8 < uVar16) || (0xd8 < (uVar16 | 2))) || (0xd8 < (uVar16 | 3))) goto code_r0x08015010;
        iVar14 = uVar10 * 0x18;
        snd_soc_component_update_bits
                  (arg1,*(obj.imped_table + uVar10 * 0x18),*(iVar14 + 0x8012bda),*(iVar14 + 0x8012bdb));
        snd_soc_component_update_bits
                  (arg1,*(_segment.ehdr + iVar14 + 4),_segment.ehdr[iVar14 + 6],_segment.ehdr[iVar14 + 7]);
        snd_soc_component_update_bits
                  (arg1,*(_segment.ehdr + iVar14 + 8),_segment.ehdr[iVar14 + 10],_segment.ehdr[iVar14 + 0xb]);
        snd_soc_component_update_bits
                  (arg1,*(_segment.ehdr + iVar14 + 0xc),_segment.ehdr[iVar14 + 0xe],_segment.ehdr[iVar14 + 0xf]);
        snd_soc_component_update_bits
                  (arg1,*(_segment.ehdr + iVar14 + 0x10),_segment.ehdr[iVar14 + 0x12],_segment.ehdr[iVar14 + 0x13]);
        uVar12 = *(_segment.ehdr + iVar14 + 0x14);
        cVar13 = _segment.ehdr[iVar14 + 0x16];
        uVar16 = _segment.ehdr[iVar14 + 0x17];
        goto code_r0x08014e98;
    case 0x8014c74:
        __trace_bprintk(0x8014c70,*0x8019000,"lpass_cdc_rx_macro_event_handler");
        *(piStack_48 + 0x5a) = 0;
        if (piStack_48[0x18] != NULL) {
            swrm_wcd_notify(*piStack_48[0x18],6,0);
        }
        iVar14 = iStack_40;
        if (((*(iStack_40 + 0x200) & 7) == 0) && (*(iStack_40 + 0x20c) == 2)) break;
        iVar8 = lpass_cdc_runtime_suspend(iStack_40);
        if (iVar8 == 0) {
            __pm_runtime_disable(iVar14,1);
            __pm_runtime_set_status(iVar14,2);
            pm_runtime_enable(iVar14);
        }
        goto code_r0x08014ea4;
    case 0x8014d04:
        __trace_bprintk(0x8014d00,*0x8019000,"lpass_cdc_rx_macro_event_handler");
        *(piStack_48 + 0x5a) = 1;
        *(piStack_48 + 0x45) = 1;
        if (piStack_48[0x18] != NULL) {
            swrm_wcd_notify(*piStack_48[0x18],7,0);
        }
        break;
    case 0x8014d50:
        lpass_cdc_rsc_clk_reset(iStack_40,1);
        lpass_cdc_rsc_clk_reset(iVar14,5);
        break;
    case 0x8014d74:
        if (uVar15 >> 0x10 != 2) {
            uVar12 = (uVar15 >> 0x10) * 0x60 + 0x1800 & 0xffe0;
            uVar7 = snd_soc_component_read(arg1,uVar12);
            snd_soc_component_write(arg1,uVar12,uVar7);
        }
        break;
    case 0x8014db4:
        *(piStack_48 + 0x5b) = 1;
        if (piStack_48 == NULL) {
            iVar8 = ___ratelimit(obj.lpass_cdc_rx_macro_core_vote._rs,"lpass_cdc_rx_macro_core_vote");
            if (iVar8 == 0) {
                iVar8 = -0x16;
            }
            else {
                _printk(0x8001934,"lpass_cdc_rx_macro_core_vote");
                iVar8 = -0x16;
            }
        }
        else {
            __pm_runtime_resume(*piStack_48,4);
            uVar10 = lpass_cdc_check_core_votes(*piVar2);
            if ((uVar10 & 1) != 0) {
                iVar8 = lpass_cdc_clk_rsc_request_clock(*piVar2,*(piVar2 + 0x92a),1,1);
                if (iVar8 < 0) {
                    iVar9 = ___ratelimit(obj.lpass_cdc_rx_macro_event_handler._rs.350,
                                         "lpass_cdc_rx_macro_event_handler");
                    if (iVar9 != 0) {
                        _dev_err(*piVar2,"%s, failed to enable clk, ret:%d\n","lpass_cdc_rx_macro_event_handler",
                                 iVar8);
                    }
                }
                else {
                    lpass_cdc_clk_rsc_request_clock(*piVar2,*(piVar2 + 0x92a),1,0);
                }
                __pm_runtime_suspend(*piVar2,0xd);
                iVar14 = *piVar2;
                uVar11 = ktime_get_mono_fast_ns();
                *(iVar14 + 0x218) = uVar11;
                goto code_r0x08014ea4;
            }
            iVar8 = -0x20a;
        }
        iVar9 = ___ratelimit(obj.lpass_cdc_rx_macro_event_handler._rs,"lpass_cdc_rx_macro_event_handler");
        if (iVar9 != 0) {
            _dev_err(*piVar2,"%s: rx request core vote failed\n","lpass_cdc_rx_macro_event_handler");
        }
        goto code_r0x08014ea4;
    case 0x8014e14:
        uVar5 = snd_soc_component_read(arg1,0x1414);
        piVar2 = piStack_48;
        *(piStack_48 + 0x127) = uVar5;
        uVar6 = snd_soc_component_read(arg1,0x14d4);
        uVar1 = *(piVar2 + 0x127);
        *(piVar2 + 0x939) = uVar6;
        if (uVar15 == 0) {
            if ((uVar1 + 6 & 0xff) < 0x29) {
                snd_soc_component_update_bits(arg1,0x1414,0xff,uVar1 + 6);
                uVar6 = *(piVar2 + 0x939);
            }
            if (uVar6 + 6 < 0x29) {
                uVar12 = uVar6 + 6;
                goto code_r0x08014f3c;
            }
        }
        else {
            if (uVar1 < 0x29) {
                snd_soc_component_update_bits(arg1,0x1414,0xff,uVar1 - 6);
                uVar6 = *(piVar2 + 0x939);
            }
            if (uVar6 < 0x29) {
                uVar12 = uVar6 - 6;
code_r0x08014f3c:
                uVar16 = uVar12;
                uVar12 = 0x14d4;
                cVar13 = 0xff;
                goto code_r0x08014e98;
            }
        }
        break;
    case 0x8014e78:
        uVar12 = 0x1404;
        goto code_r0x08014e90;
    case 0x8014e88:
        uVar12 = 0x14c4;
code_r0x08014e90:
        cVar13 = 0x4;
code_r0x08014e98:
        snd_soc_component_update_bits(arg1,uVar12,cVar13,uVar16);
        break;
    default:
        goto code_r0x08014ea4;
    }
    iVar8 = 0;
code_r0x08014ea4:
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_38) {
        return iVar8;
    }
    __stack_chk_fail();
code_r0x08015010:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(1,0x8015014);
    (*pcVar3)();
}


// ===== sym.lpass_cdc_rx_macro_set_port_map @ 0x08015014 (size 184) =====

ulong sym.lpass_cdc_rx_macro_set_port_map(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    bool bVar1;
    uint32_t uVar2;
    int iVar3;
    uint32_t uVar4;
    uint uVar5;
    uint uVar6;
    uint64_t uVar7;
    ulong uVar8;
    int64_t iVar9;
    int iVar10;
    uchar *arg3_00;
    uint uVar11;
    uint uVar12;
    uint uVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar14;
    ulong unaff_x30;
    uchar auStack_a8 [8];
    ulong uStack_a0;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    uint uStack_58;
    uint uStack_54;
    int64_t iStack_50;
    int64_t iStack_48;
    uchar auStack_40 [8];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iStack_38 = *(iVar14 + 0x5e0);
    iStack_48 = 0;
    uVar7 = sym.lpass_cdc_rx_macro_get_data(arg1,auStack_40,&iStack_48,0x80026d5);
    if ((uVar7 & 1) == 0) {
        uVar8 = 0xffffffea;
    }
    else {
        uStack_58 = arg3;
        uStack_54 = arg2;
        iStack_50 = arg4;
        if (*(iStack_48 + 0xc0) == NULL) {
            uVar8 = 0;
        }
        else {
            uVar8 = swrm_wcd_notify(**(iStack_48 + 0xc0),9,&uStack_58);
        }
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_38) {
        return uVar8;
    }
    iVar9 = __stack_chk_fail(uVar8);
    *extraout_x18 = sym.lpass_cdc_rx_macro_enable_echo;
    pcStack_88 = sym.lpass_cdc_rx_macro_enable_echo;
    iVar14 = sp_el0;
    iStack_98 = *(iVar14 + 0x5e0);
    arg3_00 = auStack_a8;
    uStack_a0 = 0;
    iVar14 = *(iVar9 + 0x28) + -0xd0;
    puStack_90 = &stack0xffffffffffffffd0;
    uVar7 = sym.lpass_cdc_rx_macro_get_data(iVar14,&uStack_a0,arg3_00,0x800231e);
    iVar10 = arg3_00;
    if ((uVar7 & 1) != 0) {
        uVar2 = snd_soc_component_read(iVar14,0x1198);
        uVar8 = *(iVar9 + 8);
        iVar3 = strcmp(uVar8,"RX MIX TX0 MUX");
        if (iVar3 == 0) {
            uVar2 = uVar2 >> 4;
code_r0x08015170:
            uVar2 = (uVar2 & 0xf) - 1;
        }
        else {
            iVar3 = strcmp(uVar8,"RX MIX TX1 MUX");
            if (iVar3 == 0) goto code_r0x08015170;
            uVar2 = 0;
        }
        uVar4 = snd_soc_component_read(iVar14,0x119c);
        iVar3 = strcmp(*(iVar9 + 8),"RX MIX TX2 MUX");
        uVar4 = (uVar4 & 0xf) - 1;
        if (iVar3 != 0) {
            uVar4 = uVar2;
        }
        if (uVar4 < 3) {
            snd_soc_component_update_bits(iVar14,uVar4 * 0x40 + 0x1c00 & 0xffc0,1,1);
            iVar10 = 0x1e;
            snd_soc_component_update_bits(iVar14,uVar4 * 0x40 + 0x1c04 & 0xfffc,0x1e,8);
            uVar8 = 0;
            goto code_r0x0801520c;
        }
        iVar3 = ___ratelimit(obj.lpass_cdc_rx_macro_enable_echo._rs,"lpass_cdc_rx_macro_enable_echo");
        if (iVar3 != 0) {
            iVar10 = 0x800231e;
            _dev_err(uStack_a0,"%s: EC mix control not set correctly\n");
            uVar8 = 0xffffffea;
            goto code_r0x0801520c;
        }
    }
    uVar8 = 0xffffffea;
code_r0x0801520c:
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) != iStack_98) {
        iVar14 = __stack_chk_fail(uVar8);
        *extraout_x18_00 = sym.lpass_cdc_rx_macro_set_iir_gain;
        if ((iVar10 == 4) || (iVar10 == 2)) {
            iVar9 = *(iVar14 + 0x28) + -0xd0;
            iVar14 = strnstr(*(iVar14 + 8),"IIR0",5);
            bVar1 = iVar14 != 0;
            uVar6 = 0x1a84;
            if (bVar1) {
                uVar6 = 0x1a04;
            }
            uVar12 = 0x1a88;
            if (bVar1) {
                uVar12 = 0x1a08;
            }
            uVar11 = 0x1a8c;
            if (bVar1) {
                uVar11 = 0x1a0c;
            }
            uVar13 = 0x1a90;
            if (bVar1) {
                uVar13 = 0x1a10;
            }
            uVar5 = snd_soc_component_read(iVar9,uVar6);
            snd_soc_component_write(iVar9,uVar6,uVar5);
            uVar6 = snd_soc_component_read(iVar9,uVar12);
            snd_soc_component_write(iVar9,uVar12,uVar6);
            uVar6 = snd_soc_component_read(iVar9,uVar11);
            snd_soc_component_write(iVar9,uVar11,uVar6);
            uVar6 = snd_soc_component_read(iVar9,uVar13);
            snd_soc_component_write(iVar9,uVar13,uVar6);
        }
        return 0;
    }
    return uVar8;
}


// ===== sym.lpass_cdc_rx_macro_enable_echo @ 0x080150cc (size 404) =====

ulong sym.lpass_cdc_rx_macro_enable_echo(int64_t arg1)

{
    bool bVar1;
    uint32_t uVar2;
    int iVar3;
    uint32_t uVar4;
    uint uVar5;
    uint uVar6;
    uint64_t uVar7;
    int iVar8;
    uchar *arg3;
    uint uVar9;
    uint uVar10;
    uint uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar12;
    int64_t iVar13;
    ulong uVar14;
    ulong unaff_x30;
    uchar auStack_48 [8];
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_38 = *(iVar12 + 0x5e0);
    arg3 = auStack_48;
    uStack_40 = 0;
    iVar12 = *(arg1 + 0x28) + -0xd0;
    uVar7 = sym.lpass_cdc_rx_macro_get_data(iVar12,&uStack_40,arg3,0x800231e);
    iVar8 = arg3;
    if ((uVar7 & 1) != 0) {
        uVar2 = snd_soc_component_read(iVar12,0x1198);
        uVar14 = *(arg1 + 8);
        iVar3 = strcmp(uVar14,"RX MIX TX0 MUX");
        if (iVar3 == 0) {
            uVar2 = uVar2 >> 4;
code_r0x08015170:
            uVar2 = (uVar2 & 0xf) - 1;
        }
        else {
            iVar3 = strcmp(uVar14,"RX MIX TX1 MUX");
            if (iVar3 == 0) goto code_r0x08015170;
            uVar2 = 0;
        }
        uVar4 = snd_soc_component_read(iVar12,0x119c);
        iVar3 = strcmp(*(arg1 + 8),"RX MIX TX2 MUX");
        uVar4 = (uVar4 & 0xf) - 1;
        if (iVar3 != 0) {
            uVar4 = uVar2;
        }
        if (uVar4 < 3) {
            snd_soc_component_update_bits(iVar12,uVar4 * 0x40 + 0x1c00 & 0xffc0,1,1);
            iVar8 = 0x1e;
            snd_soc_component_update_bits(iVar12,uVar4 * 0x40 + 0x1c04 & 0xfffc,0x1e,8);
            uVar14 = 0;
            goto code_r0x0801520c;
        }
        iVar3 = ___ratelimit(obj.lpass_cdc_rx_macro_enable_echo._rs,"lpass_cdc_rx_macro_enable_echo");
        if (iVar3 != 0) {
            iVar8 = 0x800231e;
            _dev_err(uStack_40,"%s: EC mix control not set correctly\n");
            uVar14 = 0xffffffea;
            goto code_r0x0801520c;
        }
    }
    uVar14 = 0xffffffea;
code_r0x0801520c:
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) != iStack_38) {
        iVar12 = __stack_chk_fail(uVar14);
        *extraout_x18 = sym.lpass_cdc_rx_macro_set_iir_gain;
        if ((iVar8 == 4) || (iVar8 == 2)) {
            iVar13 = *(iVar12 + 0x28) + -0xd0;
            iVar12 = strnstr(*(iVar12 + 8),"IIR0",5);
            bVar1 = iVar12 != 0;
            uVar6 = 0x1a84;
            if (bVar1) {
                uVar6 = 0x1a04;
            }
            uVar10 = 0x1a88;
            if (bVar1) {
                uVar10 = 0x1a08;
            }
            uVar9 = 0x1a8c;
            if (bVar1) {
                uVar9 = 0x1a0c;
            }
            uVar11 = 0x1a90;
            if (bVar1) {
                uVar11 = 0x1a10;
            }
            uVar5 = snd_soc_component_read(iVar13,uVar6);
            snd_soc_component_write(iVar13,uVar6,uVar5);
            uVar6 = snd_soc_component_read(iVar13,uVar10);
            snd_soc_component_write(iVar13,uVar10,uVar6);
            uVar6 = snd_soc_component_read(iVar13,uVar9);
            snd_soc_component_write(iVar13,uVar9,uVar6);
            uVar6 = snd_soc_component_read(iVar13,uVar11);
            snd_soc_component_write(iVar13,uVar11,uVar6);
        }
        return 0;
    }
    return uVar14;
}


// ===== sym.lpass_cdc_rx_macro_set_iir_gain @ 0x08015260 (size 268) =====

ulong sym.lpass_cdc_rx_macro_set_iir_gain(int64_t arg1,uchar noname_1 [16],uint32_t arg2)

{
    bool bVar1;
    uint uVar2;
    uint uVar3;
    int64_t iVar4;
    uint uVar5;
    uint uVar6;
    uint uVar7;
    ulong *in_x18;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg2 == 4) || (arg2 == 2)) {
        iVar8 = *(arg1 + 0x28) + -0xd0;
        iVar4 = strnstr(*(arg1 + 8),"IIR0",5);
        bVar1 = iVar4 != 0;
        uVar3 = 0x1a84;
        if (bVar1) {
            uVar3 = 0x1a04;
        }
        uVar6 = 0x1a88;
        if (bVar1) {
            uVar6 = 0x1a08;
        }
        uVar5 = 0x1a8c;
        if (bVar1) {
            uVar5 = 0x1a0c;
        }
        uVar7 = 0x1a90;
        if (bVar1) {
            uVar7 = 0x1a10;
        }
        uVar2 = snd_soc_component_read(iVar8,uVar3);
        snd_soc_component_write(iVar8,uVar3,uVar2);
        uVar3 = snd_soc_component_read(iVar8,uVar6);
        snd_soc_component_write(iVar8,uVar6,uVar3);
        uVar3 = snd_soc_component_read(iVar8,uVar5);
        snd_soc_component_write(iVar8,uVar5,uVar3);
        uVar3 = snd_soc_component_read(iVar8,uVar7);
        snd_soc_component_write(iVar8,uVar7,uVar3);
    }
    return 0;
}


// ===== sym.lpass_cdc_rx_macro_enable_mix_path @ 0x0801536c (size 444) =====

ulong sym.lpass_cdc_rx_macro_enable_mix_path(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int16_t iVar1;
    uint8_t uVar2;
    int16_t iVar3;
    int iVar4;
    int iVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong uVar9;
    int64_t iVar10;
    int64_t *piVar11;
    int64_t iVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar13;
    int64_t arg1_00;
    uint64_t uVar14;
    uint64_t unaff_x22;
    ulong unaff_x30;
    int64_t iStack_98;
    uchar auStack_90 [8];
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    uint64_t uStack_70;
    uint64_t uStack_68;
    uint64_t uStack_60;
    int64_t iStack_58;
    int64_t iStack_48;
    uchar auStack_40 [8];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_38 = *(iVar12 + 0x5e0);
    uVar14 = arg2 & 0xffffffff;
    piVar11 = &iStack_48;
    iVar12 = *(arg1 + 0x28);
    iStack_48 = 0;
    iVar13 = iVar12 + -0xd0;
    uVar8 = sym.lpass_cdc_rx_macro_get_data(iVar13,auStack_40,piVar11,0x8001a58);
    uVar6 = piVar11;
    if ((uVar8 & 1) == 0) {
code_r0x080153e8:
        uVar9 = 0xffffffea;
    }
    else {
        uVar2 = *(arg1 + 0x4c);
        uVar6 = uVar2;
        if (uVar2 < 3) {
            iVar4 = (uVar2 + uVar2 * 2) * 0x40;
            iVar5 = arg2;
            uVar7 = iVar4 + 0x1418;
            unaff_x22 = uVar7;
            if (iVar5 == 8) {
                uVar8 = uVar7 & 0xffff;
                snd_soc_component_update_bits(iVar13,uVar8,0x20,0);
                sym.lpass_cdc_rx_macro_enable_interp_clk(iVar13,8,*(arg1 + 0x4c));
                snd_soc_component_update_bits(iVar13,uVar8,0x40,0x40);
                uVar6 = 0x40;
                uVar9 = 0;
                uVar14 = uVar8;
code_r0x08015498:
                snd_soc_component_update_bits(iVar13,uVar8,uVar6,uVar9);
            }
            else if (iVar5 == 2) {
                arg1 = iVar4 + 0x1420U & 0xffe0;
                uVar6 = snd_soc_component_read(iVar13,arg1);
                snd_soc_component_write(iVar13,arg1);
            }
            else if (iVar5 == 1) {
                sym.lpass_cdc_rx_macro_set_idle_detect_thr(iVar13,iStack_48,uVar2,1);
                sym.lpass_cdc_rx_macro_enable_interp_clk(iVar13,1,*(arg1 + 0x4c));
                uVar8 = uVar7 & 0xffff;
                uVar6 = 0x20;
                uVar9 = 0x20;
                goto code_r0x08015498;
            }
            uVar9 = 0;
        }
        else {
            uVar6 = uVar2;
            iVar4 = ___ratelimit(obj.lpass_cdc_rx_macro_enable_mix_path._rs,"lpass_cdc_rx_macro_enable_mix_path");
            if (iVar4 == 0) goto code_r0x080153e8;
            uVar6 = 0x8001a58;
            _dev_err(*(iVar12 + -0xb8),"%s: Invalid Interpolator value %d for name %s\n",
                     "lpass_cdc_rx_macro_enable_mix_path",*(arg1 + 0x4c),*(arg1 + 8));
            uVar9 = 0xffffffea;
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_38) {
        return uVar9;
    }
    iVar10 = __stack_chk_fail(uVar9);
    *extraout_x18 = sym.lpass_cdc_rx_macro_enable_main_path;
    pcStack_78 = sym.lpass_cdc_rx_macro_enable_main_path;
    iVar12 = sp_el0;
    iStack_88 = *(iVar12 + 0x5e0);
    piVar11 = &iStack_98;
    iVar12 = *(iVar10 + 0x28);
    iStack_98 = 0;
    arg1_00 = iVar12 + -0xd0;
    puStack_80 = &stack0xffffffffffffffd0;
    uStack_70 = unaff_x22;
    uStack_68 = uVar14;
    uStack_60 = arg1;
    iStack_58 = iVar13;
    uVar14 = sym.lpass_cdc_rx_macro_get_data(arg1_00,auStack_90,piVar11,0x8002760);
    iVar4 = piVar11;
    if ((uVar14 & 1) != 0) {
        uVar2 = *(iVar10 + 0x4c);
        uVar14 = uVar2;
        if (uVar2 < 3) {
            if (uVar6 == 8) {
                sym.lpass_cdc_rx_macro_enable_interp_clk(arg1_00,8,uVar14);
            }
            else {
                iVar4 = (uVar2 + uVar2 * 2) * 0x40;
                if (uVar6 == 2) {
                    uVar6 = iVar4 + 0x1414U & 0xffd4;
                    uVar14 = snd_soc_component_read(arg1_00,uVar6);
                    uVar14 = uVar14 & 0xffffffff;
                    snd_soc_component_write(arg1_00,uVar6);
                }
                else if (uVar6 == 1) {
                    sym.lpass_cdc_rx_macro_set_idle_detect_thr(arg1_00,iStack_98,uVar2,0);
                    uVar14 = *(iVar10 + 0x4c);
                    sym.lpass_cdc_rx_macro_enable_interp_clk(arg1_00,1,uVar14);
                    iVar5 = *(iVar10 + 0x4c) * 8;
                    uVar6 = snd_soc_component_read(arg1_00,iVar5 + 0x1180);
                    uVar7 = snd_soc_component_read(arg1_00,iVar5 + 0x1184);
                    if ((((uVar6 & 0xf) - 1 < 4) || ((uVar6 >> 4 & 0xf) - 1 < 4)) || ((uVar7 >> 4 & 0xf) - 1 < 4)) {
                        uVar14 = 0x20;
                        snd_soc_component_update_bits(arg1_00,iVar4 + 0x1400U & 0xffc0,0x20,0x20);
                    }
                }
            }
            iVar4 = uVar14;
            uVar9 = 0;
            goto code_r0x080156a8;
        }
        iVar5 = ___ratelimit(obj.lpass_cdc_rx_macro_enable_main_path._rs,"lpass_cdc_rx_macro_enable_main_path");
        iVar4 = uVar14;
        if (iVar5 != 0) {
            iVar4 = 0x8002760;
            _dev_err(*(iVar12 + -0xb8),"%s: Invalid Interpolator value %d for name %s\n",
                     "lpass_cdc_rx_macro_enable_main_path",*(iVar10 + 0x4c),*(iVar10 + 8));
            uVar9 = 0xffffffea;
            goto code_r0x080156a8;
        }
    }
    uVar9 = 0xffffffea;
code_r0x080156a8:
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_88) {
        return uVar9;
    }
    iVar12 = __stack_chk_fail(uVar9);
    *extraout_x18_00 = sym.lpass_cdc_rx_macro_enable_rx_path_clk;
    iVar3 = *(iVar12 + 0x4c) * 0xc0;
    iVar13 = *(iVar12 + 0x28) + -0xd0;
    iVar1 = iVar3 + 0x1408;
    if (iVar4 == 8) {
        snd_soc_component_update_bits(iVar13,iVar1,0x10,0);
        sym.lpass_cdc_rx_macro_enable_interp_clk(iVar13,8,*(iVar12 + 0x4c));
    }
    else if (iVar4 == 1) {
        sym.lpass_cdc_rx_macro_enable_interp_clk(iVar13,1,*(iVar12 + 0x4c));
        snd_soc_component_update_bits(iVar13,iVar1,0x10,0x10);
        snd_soc_component_update_bits(iVar13,iVar3 + 0x1400,0x20,0x20);
    }
    return 0;
}


// ===== sym.lpass_cdc_rx_macro_enable_main_path @ 0x08015528 (size 476) =====

ulong sym.lpass_cdc_rx_macro_enable_main_path(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int16_t iVar1;
    uint8_t uVar2;
    int16_t iVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    ulong uVar8;
    int64_t *arg3;
    int64_t iVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar10;
    int iVar11;
    ulong unaff_x30;
    int64_t iStack_48;
    uchar auStack_40 [8];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_38 = *(iVar9 + 0x5e0);
    arg3 = &iStack_48;
    iVar9 = *(arg1 + 0x28);
    iStack_48 = 0;
    iVar10 = iVar9 + -0xd0;
    uVar7 = sym.lpass_cdc_rx_macro_get_data(iVar10,auStack_40,arg3,0x8002760);
    iVar11 = arg3;
    if ((uVar7 & 1) != 0) {
        uVar2 = *(arg1 + 0x4c);
        uVar7 = uVar2;
        if (uVar2 < 3) {
            iVar11 = arg2;
            if (iVar11 == 8) {
                sym.lpass_cdc_rx_macro_enable_interp_clk(iVar10,8,uVar7);
            }
            else {
                iVar4 = (uVar2 + uVar2 * 2) * 0x40;
                if (iVar11 == 2) {
                    uVar5 = iVar4 + 0x1414U & 0xffd4;
                    uVar7 = snd_soc_component_read(iVar10,uVar5);
                    uVar7 = uVar7 & 0xffffffff;
                    snd_soc_component_write(iVar10,uVar5);
                }
                else if (iVar11 == 1) {
                    sym.lpass_cdc_rx_macro_set_idle_detect_thr(iVar10,iStack_48,uVar2,0);
                    uVar7 = *(arg1 + 0x4c);
                    sym.lpass_cdc_rx_macro_enable_interp_clk(iVar10,1,uVar7);
                    iVar11 = *(arg1 + 0x4c) * 8;
                    uVar5 = snd_soc_component_read(iVar10,iVar11 + 0x1180);
                    uVar6 = snd_soc_component_read(iVar10,iVar11 + 0x1184);
                    if ((((uVar5 & 0xf) - 1 < 4) || ((uVar5 >> 4 & 0xf) - 1 < 4)) || ((uVar6 >> 4 & 0xf) - 1 < 4)) {
                        uVar7 = 0x20;
                        snd_soc_component_update_bits(iVar10,iVar4 + 0x1400U & 0xffc0,0x20,0x20);
                    }
                }
            }
            iVar11 = uVar7;
            uVar8 = 0;
            goto code_r0x080156a8;
        }
        iVar4 = ___ratelimit(obj.lpass_cdc_rx_macro_enable_main_path._rs,"lpass_cdc_rx_macro_enable_main_path");
        iVar11 = uVar7;
        if (iVar4 != 0) {
            iVar11 = 0x8002760;
            _dev_err(*(iVar9 + -0xb8),"%s: Invalid Interpolator value %d for name %s\n",
                     "lpass_cdc_rx_macro_enable_main_path",*(arg1 + 0x4c),*(arg1 + 8));
            uVar8 = 0xffffffea;
            goto code_r0x080156a8;
        }
    }
    uVar8 = 0xffffffea;
code_r0x080156a8:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_38) {
        return uVar8;
    }
    iVar9 = __stack_chk_fail(uVar8);
    *extraout_x18 = sym.lpass_cdc_rx_macro_enable_rx_path_clk;
    iVar3 = *(iVar9 + 0x4c) * 0xc0;
    iVar10 = *(iVar9 + 0x28) + -0xd0;
    iVar1 = iVar3 + 0x1408;
    if (iVar11 == 8) {
        snd_soc_component_update_bits(iVar10,iVar1,0x10,0);
        sym.lpass_cdc_rx_macro_enable_interp_clk(iVar10,8,*(iVar9 + 0x4c));
    }
    else if (iVar11 == 1) {
        sym.lpass_cdc_rx_macro_enable_interp_clk(iVar10,1,*(iVar9 + 0x4c));
        snd_soc_component_update_bits(iVar10,iVar1,0x10,0x10);
        snd_soc_component_update_bits(iVar10,iVar3 + 0x1400,0x20,0x20);
    }
    return 0;
}


// ===== sym.lpass_cdc_rx_macro_enable_rx_path_clk @ 0x08015704 (size 204) =====

ulong sym.lpass_cdc_rx_macro_enable_rx_path_clk(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int16_t iVar1;
    int16_t iVar2;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x4c) * 0xc0;
    arg1_00 = *(arg1 + 0x28) + -0xd0;
    iVar1 = iVar2 + 0x1408;
    if (arg2 == 8) {
        snd_soc_component_update_bits(arg1_00,iVar1,0x10,0);
        sym.lpass_cdc_rx_macro_enable_interp_clk(arg1_00,8,*(arg1 + 0x4c));
    }
    else if (arg2 == 1) {
        sym.lpass_cdc_rx_macro_enable_interp_clk(arg1_00,1,*(arg1 + 0x4c));
        snd_soc_component_update_bits(arg1_00,iVar1,0x10,0x10);
        snd_soc_component_update_bits(arg1_00,iVar2 + 0x1400,0x20,0x20);
    }
    return 0;
}


// ===== sym.lpass_cdc_rx_macro_enable_vbat @ 0x080157d0 (size 1020) =====

void sym.lpass_cdc_rx_macro_enable_vbat(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t iVar1;
    ulong *arg1_00;
    code *pcVar2;
    int iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong uVar6;
    int64_t extraout_x1;
    char *arg3;
    ulong uVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar8;
    ulong *puVar9;
    uint64_t uVar10;
    ulong unaff_x30;
    int64_t iStack_b8;
    uchar auStack_b0 [8];
    int64_t iStack_a8;
    uchar **ppuStack_a0;
    code *pcStack_98;
    uint64_t uStack_90;
    ulong *puStack_88;
    uint uStack_7c;
    ulong *puStack_78;
    uchar auStack_70 [8];
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    uint64_t uStack_50;
    int64_t iStack_48;
    uint64_t uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_28 = *(iVar8 + 0x5e0);
    uVar10 = arg2 & 0xffffffff;
    arg3 = &uStack_38;
    uStack_38 = 0;
    uStack_30 = 0;
    iVar8 = *(arg1 + 0x28) + -0xd0;
    uVar4 = sym.lpass_cdc_rx_macro_get_data(iVar8,&uStack_30,arg3,0x8002576);
    if ((uVar4 & 1) == 0) {
        uVar6 = 0xffffffea;
    }
    else {
        if (arg2 == 8) {
            snd_soc_component_update_bits(iVar8,0x1608,1,0);
            snd_soc_component_update_bits(iVar8,0x1604,1,0);
            snd_soc_component_update_bits(iVar8,0x1600,1,0);
            snd_soc_component_update_bits(iVar8,0x1588,0x80,0);
            snd_soc_component_update_bits(iVar8,0x15c0,2,0);
            snd_soc_component_update_bits(iVar8,0x1284,2,2);
            snd_soc_component_update_bits(iVar8,0x1588,2,0);
            snd_soc_component_update_bits(iVar8,0x12dc,0xff,0);
            snd_soc_component_update_bits(iVar8,0x12e0,0xff,0);
            snd_soc_component_update_bits(iVar8,0x12e4,0xff,0);
            snd_soc_component_update_bits(iVar8,0x12e8,0xff,0);
            snd_soc_component_update_bits(iVar8,0x12ec,0xff,0);
            snd_soc_component_update_bits(iVar8,0x12f0,0xff,0);
            snd_soc_component_update_bits(iVar8,0x12f4,0xff,0);
            snd_soc_component_update_bits(iVar8,0x12f8,0xff,0);
            snd_soc_component_update_bits(iVar8,0x12fc,0xff,0);
            iVar3 = *(uStack_38 + 0x924) + -1;
            *(uStack_38 + 0x924) = iVar3;
            if (iVar3 == 0) {
                snd_soc_component_update_bits(iVar8,0x1140,1,0);
            }
            snd_soc_component_update_bits(iVar8,0x1284,1,0);
            uVar6 = 0x1280;
            arg3 = 0x10;
            uVar7 = 0;
code_r0x08015b58:
            snd_soc_component_update_bits(iVar8,uVar6,arg3,uVar7);
        }
        else {
            if (arg2 == 1) {
                snd_soc_component_update_bits(iVar8,0x1280,0x10,0x10);
                snd_soc_component_update_bits(iVar8,0x1284,1,1);
                snd_soc_component_update_bits(iVar8,0x1588,0x80,0x80);
                snd_soc_component_update_bits(iVar8,0x15c0,2,2);
                snd_soc_component_update_bits(iVar8,0x1284,2,0);
                uVar10 = uStack_38;
                iVar3 = *(uStack_38 + 0x924);
                if (iVar3 == 0) {
                    snd_soc_component_update_bits(iVar8,0x1140,1,1);
                    iVar3 = *(uVar10 + 0x924);
                }
                *(uVar10 + 0x924) = iVar3 + 1;
                snd_soc_component_update_bits(iVar8,0x1588,2,2);
                snd_soc_component_update_bits(iVar8,0x12dc,0xff,0xff);
                snd_soc_component_update_bits(iVar8,0x12e0,0xff,3);
                snd_soc_component_update_bits(iVar8,0x12e4,0xff,0);
                snd_soc_component_update_bits(iVar8,0x12e8,0xff,0xff);
                snd_soc_component_update_bits(iVar8,0x12ec,0xff,3);
                snd_soc_component_update_bits(iVar8,0x12f0,0xff,0);
                snd_soc_component_update_bits(iVar8,0x12f4,0xff,0xff);
                snd_soc_component_update_bits(iVar8,0x12f8,0xff,3);
                snd_soc_component_update_bits(iVar8,0x12fc,0xff,0);
                snd_soc_component_update_bits(iVar8,0x1600,1,1);
                snd_soc_component_update_bits(iVar8,0x1604,1,1);
                uVar6 = 0x1608;
                arg3 = 0x1;
                uVar7 = 1;
                goto code_r0x08015b58;
            }
            uVar6 = ___ratelimit(obj.lpass_cdc_rx_macro_enable_vbat._rs,"lpass_cdc_rx_macro_enable_vbat");
            if (uVar6 == 0) goto code_r0x08015b7c;
            arg3 = "lpass_cdc_rx_macro_enable_vbat";
            _dev_err(uStack_30,"%s: Invalid event %d\n","lpass_cdc_rx_macro_enable_vbat",uVar10);
        }
        uVar6 = 0;
    }
code_r0x08015b7c:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return;
    }
    iVar5 = __stack_chk_fail(uVar6);
    *extraout_x18 = sym.lpass_cdc_rx_macro_mclk_event;
    pcStack_58 = sym.lpass_cdc_rx_macro_mclk_event;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    puVar9 = arg3 & 0xffffffff;
    puStack_78 = NULL;
    uStack_7c = 9600000;
    puStack_60 = &stack0xffffffffffffffe0;
    uStack_50 = uVar10;
    iStack_48 = iVar8;
    uVar4 = sym.lpass_cdc_rx_macro_get_data(*(iVar5 + 0x28) + -0xd0,auStack_70,&puStack_78,0x8001eb2);
    arg1_00 = puStack_78;
    if ((uVar4 & 1) == 0) {
code_r0x08015cb8:
        uVar6 = 0xffffffea;
    }
    else if (arg3 == 8) {
        if (*(puStack_78 + 0x44) == '\0') {
            uVar6 = 0;
        }
        else {
            uVar6 = sym.lpass_cdc_rx_macro_mclk_enable(puStack_78,0,1);
        }
    }
    else {
        if (arg3 != 1) {
            iVar3 = ___ratelimit(obj.lpass_cdc_rx_macro_mclk_event._rs,"lpass_cdc_rx_macro_mclk_event");
            if (iVar3 != 0) {
                _dev_err(*puStack_78,"%s: invalid DAPM event %d\n","lpass_cdc_rx_macro_mclk_event",puVar9);
            }
            goto code_r0x08015cb8;
        }
        if (*(puStack_78 + 0x52) != '\0') {
            uStack_7c = 0xac4400;
        }
        if (puStack_78[0x18] != NULL) {
            swrm_wcd_notify(*puStack_78[0x18],5,&uStack_7c);
        }
        uVar10 = 1;
        uVar6 = sym.lpass_cdc_rx_macro_mclk_enable(arg1_00,1,1);
        puVar9 = arg1_00;
        if (uVar6 == 0) {
            *(arg1_00 + 0x44) = 1;
        }
        else {
            *(arg1_00 + 0x44) = 0;
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_68) {
        return;
    }
    __stack_chk_fail(uVar6);
    *extraout_x18_00 = sym.lpass_cdc_rx_macro_mux_get;
    pcStack_98 = sym.lpass_cdc_rx_macro_mux_get;
    iVar8 = sp_el0;
    iStack_a8 = *(iVar8 + 0x5e0);
    ppuStack_a0 = &puStack_60;
    uStack_90 = uVar10;
    puStack_88 = puVar9;
    iVar8 = snd_soc_dapm_kcontrol_widget();
    iStack_b8 = 0;
    uVar10 = sym.lpass_cdc_rx_macro_get_data(*(iVar8 + 0x28) + -0xd0,auStack_b0,&iStack_b8,0x80011b6);
    if ((uVar10 & 1) == 0) {
        uVar6 = 0xffffffea;
    }
    else {
        if (5 < *(iVar8 + 0x4c)) goto code_r0x08015dcc;
        uVar6 = 0;
        *(extraout_x1 + 0x48) = *(iStack_b8 + *(iVar8 + 0x4c) * 4 + 0x1c);
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_a8) {
        return;
    }
    __stack_chk_fail(uVar6);
code_r0x08015dcc:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8015dd0);
    (*pcVar2)();
}


// ===== sym.lpass_cdc_rx_macro_mclk_event @ 0x08015bcc (size 340) =====

void sym.lpass_cdc_rx_macro_mclk_event(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    ulong *arg1_00;
    code *pcVar1;
    int iVar2;
    uint64_t uVar3;
    ulong uVar4;
    int64_t iVar5;
    int64_t extraout_x1;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar6;
    ulong unaff_x20;
    ulong unaff_x30;
    int64_t iStack_78;
    uchar auStack_70 [8];
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    ulong uStack_50;
    ulong *puStack_48;
    uint uStack_3c;
    ulong *puStack_38;
    uchar auStack_30 [8];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    puVar6 = arg2 & 0xffffffff;
    puStack_38 = NULL;
    uStack_3c = 9600000;
    uVar3 = sym.lpass_cdc_rx_macro_get_data(*(arg1 + 0x28) + -0xd0,auStack_30,&puStack_38,0x8001eb2);
    arg1_00 = puStack_38;
    if ((uVar3 & 1) == 0) {
code_r0x08015cb8:
        uVar4 = 0xffffffea;
    }
    else if (arg2 == 8) {
        if (*(puStack_38 + 0x44) == '\0') {
            uVar4 = 0;
        }
        else {
            uVar4 = sym.lpass_cdc_rx_macro_mclk_enable(puStack_38,0,1);
        }
    }
    else {
        if (arg2 != 1) {
            iVar2 = ___ratelimit(obj.lpass_cdc_rx_macro_mclk_event._rs,"lpass_cdc_rx_macro_mclk_event");
            if (iVar2 != 0) {
                _dev_err(*puStack_38,"%s: invalid DAPM event %d\n","lpass_cdc_rx_macro_mclk_event",puVar6);
            }
            goto code_r0x08015cb8;
        }
        if (*(puStack_38 + 0x52) != '\0') {
            uStack_3c = 0xac4400;
        }
        if (puStack_38[0x18] != NULL) {
            swrm_wcd_notify(*puStack_38[0x18],5,&uStack_3c);
        }
        unaff_x20 = 1;
        uVar4 = sym.lpass_cdc_rx_macro_mclk_enable(arg1_00,1,1);
        puVar6 = arg1_00;
        if (uVar4 == 0) {
            *(arg1_00 + 0x44) = 1;
        }
        else {
            *(arg1_00 + 0x44) = 0;
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_28) {
        return;
    }
    __stack_chk_fail(uVar4);
    *extraout_x18 = sym.lpass_cdc_rx_macro_mux_get;
    pcStack_58 = sym.lpass_cdc_rx_macro_mux_get;
    iVar5 = sp_el0;
    iStack_68 = *(iVar5 + 0x5e0);
    puStack_60 = &stack0xffffffffffffffe0;
    uStack_50 = unaff_x20;
    puStack_48 = puVar6;
    iVar5 = snd_soc_dapm_kcontrol_widget();
    iStack_78 = 0;
    uVar3 = sym.lpass_cdc_rx_macro_get_data(*(iVar5 + 0x28) + -0xd0,auStack_70,&iStack_78,0x80011b6);
    if ((uVar3 & 1) == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        if (5 < *(iVar5 + 0x4c)) goto code_r0x08015dcc;
        uVar4 = 0;
        *(extraout_x1 + 0x48) = *(iStack_78 + *(iVar5 + 0x4c) * 4 + 0x1c);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_68) {
        return;
    }
    __stack_chk_fail(uVar4);
code_r0x08015dcc:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8015dd0);
    (*pcVar1)();
}


// ===== sym.lpass_cdc_rx_macro_mux_get @ 0x08015d20 (size 176) =====

void sym.lpass_cdc_rx_macro_mux_get(ulong noname_0,int64_t arg1)

{
    code *pcVar1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    int64_t iStack_38;
    uchar auStack_30 [8];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    iVar2 = snd_soc_dapm_kcontrol_widget();
    iStack_38 = 0;
    uVar3 = sym.lpass_cdc_rx_macro_get_data(*(iVar2 + 0x28) + -0xd0,auStack_30,&iStack_38,0x80011b6);
    if ((uVar3 & 1) == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        if (5 < *(iVar2 + 0x4c)) goto code_r0x08015dcc;
        uVar4 = 0;
        *(arg1 + 0x48) = *(iStack_38 + *(iVar2 + 0x4c) * 4 + 0x1c);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return;
    }
    __stack_chk_fail(uVar4);
code_r0x08015dcc:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8015dd0);
    (*pcVar1)();
}


// ===== sym.lpass_cdc_rx_macro_mux_put @ 0x08015dd0 (size 632) =====

void sym.lpass_cdc_rx_macro_mux_put(int64_t arg1,int64_t arg2)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    uint8_t uVar3;
    char cVar4;
    bool bVar5;
    code *pcVar6;
    int iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    char *pcVar10;
    int64_t iVar11;
    uint32_t *puVar12;
    int64_t iVar13;
    ulong *in_x18;
    uint32_t uVar14;
    uint64_t uVar15;
    ulong uVar16;
    ulong unaff_x30;
    int64_t iStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_48 = *(iVar8 + 0x5e0);
    iVar8 = snd_soc_dapm_kcontrol_widget();
    iVar11 = *(iVar8 + 0x28);
    uVar16 = *(arg1 + 0x78);
    uVar15 = *(arg2 + 0x48);
    iStack_58 = 0;
    uStack_50 = 0;
    uVar9 = sym.lpass_cdc_rx_macro_get_data(iVar11 + -0xd0,&uStack_50,&iStack_58,0x8001439);
    if ((uVar9 & 1) == 0) {
code_r0x08015f24:
        uVar16 = 0xffffffea;
    }
    else {
        if (5 < *(iVar8 + 0x4c)) goto code_r0x08015ffc;
        puVar12 = iStack_58 + *(iVar8 + 0x4c) * 4 + 0x1c;
        uVar2 = *puVar12;
        uVar14 = uVar15;
        if (uVar14 == 0) {
            if (uVar2 == 0) {
                uVar16 = ___ratelimit(obj.lpass_cdc_rx_macro_mux_put._rs,"lpass_cdc_rx_macro_mux_put");
                if (uVar16 != 0) {
                    pcVar10 = "%s:AIF reset already\n";
code_r0x08015f80:
                    _dev_err(uStack_50,pcVar10,"lpass_cdc_rx_macro_mux_put");
                    goto code_r0x08015ed0;
                }
            }
            else {
                if (uVar2 < 5) {
                    iVar11 = iStack_58 + uVar2 * 8;
                    *puVar12 = 0;
                    if (*(iVar11 + 0x180) != 0) {
                        uVar3 = *(iVar8 + 0x4c);
                        puVar1 = iVar11 + (uVar3 >> 3 & 0x18) + 0x140;
                        Hint_Prefetch(puVar1,2,0,1);
                        do {
                            cVar4 = '\x01';
                            bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                            if (bVar5) {
                                *puVar1 = *puVar1 & (1L << (uVar3 & 0x3f) ^ 0xffffffffffffffffU);
                                cVar4 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar4 != '\0');
                        iVar13 = -1;
                        goto code_r0x08015eac;
                    }
                    goto code_r0x08015eb8;
                }
                uVar16 = ___ratelimit(obj.lpass_cdc_rx_macro_mux_put._rs.148,"lpass_cdc_rx_macro_mux_put");
                if (uVar16 != 0) {
                    pcVar10 = "%s: Invalid AIF reset\n";
                    goto code_r0x08015f80;
                }
            }
        }
        else {
            *puVar12 = uVar14;
            if (uVar14 - 1 < 4) {
                uVar9 = uVar15 & 0xffffffff;
                if (8 < uVar9) goto code_r0x08015ffc;
                uVar3 = *(iVar8 + 0x4c);
                puVar1 = iStack_58 + uVar9 * 8 + (uVar3 >> 3 & 0x18) + 0x140;
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    cVar4 = '\x01';
                    bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar5) {
                        *puVar1 = *puVar1 | 1L << (uVar3 & 0x3f);
                        cVar4 = ExclusiveMonitorsStatus();
                    }
                } while (cVar4 != '\0');
                iVar11 = iStack_58 + uVar9 * 8;
                iVar13 = 1;
code_r0x08015eac:
                *(iVar11 + 0x180) = *(iVar11 + 0x180) + iVar13;
code_r0x08015eb8:
                snd_soc_dapm_mux_update_power(*(iVar8 + 0x28),arg1,uVar15 & 0xffffffff,uVar16,0);
code_r0x08015ed0:
                uVar16 = 0;
            }
            else {
                iVar7 = ___ratelimit(obj.lpass_cdc_rx_macro_mux_put._rs.150,"lpass_cdc_rx_macro_mux_put");
                if (iVar7 == 0) goto code_r0x08015f24;
                _dev_err(*(iVar11 + -0xb8),"%s:Invalid AIF_ID for LPASS_CDC_RX_MACRO MUX %d\n",
                         "lpass_cdc_rx_macro_mux_put",uVar15 & 0xffffffff);
                uVar16 = 0xffffffea;
            }
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_48) {
        return;
    }
    __stack_chk_fail(uVar16);
code_r0x08015ffc:
    //WARNING: Does not return
    pcVar6 = SoftwareBreakpoint(0x5512,0x8016000);
    (*pcVar6)();
}


// ===== sym.lpass_cdc_rx_macro_int_dem_inp_mux_put @ 0x08016048 (size 144) =====

ulong sym.lpass_cdc_rx_macro_int_dem_inp_mux_put(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    uint uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snd_soc_dapm_kcontrol_widget();
    if (*(arg2 + 0x48) < (*(arg1 + 0x78))[2]) {
        uVar3 = 0x14c4;
        if (**(arg1 + 0x78) != 0x14c8) {
            uVar3 = 0x1404;
        }
        snd_soc_component_update_bits(*(iVar1 + 0x28) + -0xd0,uVar3,8,(*(arg2 + 0x48) != 0) << 3);
        uVar2 = snd_soc_dapm_put_enum_double(arg1,arg2);
    }
    else {
        uVar2 = 0xffffffea;
    }
    return uVar2;
}


// ===== sym.lpass_cdc_rx_macro_set_idle_detect_thr @ 0x080160d8 (size 984) =====

void sym.lpass_cdc_rx_macro_set_idle_detect_thr(int64_t arg1,int64_t arg2,uint32_t arg3,uint32_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    uchar uVar6;
    uint8_t uVar7;
    code *pcVar8;
    uint32_t uVar9;
    int iVar10;
    uint32_t uVar11;
    int64_t iVar12;
    int64_t iVar13;
    uint uVar14;
    int *piVar15;
    int iVar16;
    uint16_t uVar17;
    uint16_t uVar18;
    uint64_t uVar19;
    int64_t iVar20;
    uint64_t uVar21;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar22;
    uint64_t arg4_00;
    char cVar23;
    ulong uVar24;
    uint32_t *puVar25;
    uint32_t *puVar26;
    ulong uVar27;
    ulong unaff_x30;
    uchar auVar28 [16];
    int64_t iStack_d8;
    uchar auStack_d0 [8];
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    ulong uStack_58;
    uint64_t uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iStack_48 = *(iVar13 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    if ((arg3 < 2) && (*(arg2 + 0x1e1) != '\0')) {
        if (arg4 == 0) {
            iVar10 = arg3 * 2;
            puVar25 = &uStack_58;
            uVar9 = snd_soc_component_read(arg1,iVar10 + 0x1186);
            uVar9 = (uVar9 & 0xf) - 5;
            cVar23 = uVar9 < 6;
            if (cVar23) {
                puVar25 = puVar25 | 4;
                uStack_58 = CONCAT44(uStack_58._4_4_,uVar9);
            }
            uVar9 = snd_soc_component_read(arg1,iVar10 + 0x1186);
            uVar9 = (uVar9 >> 4 & 0xf) - 5;
            puVar26 = puVar25;
            if (uVar9 < 6) {
                cVar23 = cVar23 + '\x01';
                puVar26 = puVar25 + 1;
                *puVar25 = uVar9;
            }
            uVar9 = snd_soc_component_read(arg1,iVar10 + 0x1187);
            uVar9 = (uVar9 >> 4 & 0xf) - 5;
            if (uVar9 < 6) {
                cVar23 = cVar23 + '\x01';
                *puVar26 = uVar9;
                snd_soc_component_read(arg1,iVar10 + 0x1188);
            }
            else {
                snd_soc_component_read(arg1,iVar10 + 0x1188);
                if (cVar23 == '\0') goto code_r0x08016440;
            }
code_r0x08016204:
            iVar13 = arg2 + 0x148;
            iVar20 = 1;
            iVar12 = arg2 + 0x150;
            iVar1 = arg2 + 0x158;
            iVar2 = arg2 + 0x160;
            uVar19 = uStack_58 >> 6 & 0x3ffffff;
            iVar3 = arg2 + 0x168;
            iVar4 = arg2 + 0x170;
            iVar5 = arg2 + 0x178;
            uVar21 = 1L << (uStack_58 & 0x3f);
            if ((uVar21 & *(iVar13 + uVar19 * 8)) == 0) {
                if ((*(iVar12 + uVar19 * 8) & uVar21) != 0) {
                    iVar20 = 2;
                    goto code_r0x080162b0;
                }
                if ((*(iVar1 + uVar19 * 8) & uVar21) != 0) {
                    iVar20 = 3;
                    goto code_r0x080162b0;
                }
                if ((*(iVar2 + uVar19 * 8) & uVar21) != 0) {
                    iVar20 = 4;
                    goto code_r0x080162b0;
                }
                if ((*(iVar3 + uVar19 * 8) & uVar21) != 0) {
                    iVar20 = 5;
                    goto code_r0x080162b0;
                }
                if ((*(iVar4 + uVar19 * 8) & uVar21) != 0) {
                    iVar20 = 6;
                    goto code_r0x080162b0;
                }
                if ((*(iVar5 + uVar19 * 8) & uVar21) != 0) {
                    iVar20 = 7;
                    goto code_r0x080162b0;
                }
                uVar18 = 0;
            }
            else {
code_r0x080162b0:
                uVar18 = *(arg2 + iVar20 * 2 + 0x1c0);
            }
            if (cVar23 != '\x01') {
                iVar20 = 1;
                uVar21 = uStack_58._4_4_ >> 6;
                uVar19 = 1L << (uStack_58._4_4_ & 0x3f);
                if ((uVar19 & *(iVar13 + uVar21 * 8)) == 0) {
                    if ((*(iVar12 + uVar21 * 8) & uVar19) != 0) {
                        iVar20 = 2;
                        goto code_r0x08016350;
                    }
                    if ((*(iVar1 + uVar21 * 8) & uVar19) != 0) {
                        iVar20 = 3;
                        goto code_r0x08016350;
                    }
                    if ((*(iVar2 + uVar21 * 8) & uVar19) != 0) {
                        iVar20 = 4;
                        goto code_r0x08016350;
                    }
                    if ((*(iVar3 + uVar21 * 8) & uVar19) != 0) {
                        iVar20 = 5;
                        goto code_r0x08016350;
                    }
                    if ((*(iVar4 + uVar21 * 8) & uVar19) != 0) {
                        iVar20 = 6;
                        goto code_r0x08016350;
                    }
                    uVar17 = uVar18;
                    if ((*(iVar5 + uVar21 * 8) & uVar19) != 0) {
                        iVar20 = 7;
                        goto code_r0x08016350;
                    }
                }
                else {
code_r0x08016350:
                    uVar17 = *(arg2 + iVar20 * 2 + 0x1c0);
                    if (uVar17 <= uVar18) {
                        uVar17 = uVar18;
                    }
                }
                uVar18 = uVar17;
                if (cVar23 != '\x02') {
                    uVar19 = uStack_50 >> 6 & 0x3ffffff;
                    iVar20 = 1;
                    uVar21 = 1L << (uStack_50 & 0x3f);
                    if ((uVar21 & *(iVar13 + uVar19 * 8)) == 0) {
                        if ((*(iVar12 + uVar19 * 8) & uVar21) == 0) {
                            if ((*(iVar1 + uVar19 * 8) & uVar21) == 0) {
                                if ((*(iVar2 + uVar19 * 8) & uVar21) == 0) {
                                    if ((*(iVar3 + uVar19 * 8) & uVar21) == 0) {
                                        if ((*(iVar4 + uVar19 * 8) & uVar21) == 0) {
                                            if ((*(iVar5 + uVar19 * 8) & uVar21) == 0) goto code_r0x08016418;
                                            iVar20 = 7;
                                        }
                                        else {
                                            iVar20 = 6;
                                        }
                                    }
                                    else {
                                        iVar20 = 5;
                                    }
                                }
                                else {
                                    iVar20 = 4;
                                }
                            }
                            else {
                                iVar20 = 3;
                            }
                        }
                        else {
                            iVar20 = 2;
                        }
                    }
                    uVar18 = *(arg2 + iVar20 * 2 + 0x1c0);
                    if (uVar18 <= uVar17) {
                        uVar18 = uVar17;
                    }
                }
            }
code_r0x08016418:
            if (uVar18 == 0x10) {
                uVar22 = 0xff;
                uVar9 = 0xff;
                uVar7 = *(arg2 + 0x1e0);
            }
            else {
                if ((uVar18 != 0x20) && (uVar18 != 0x18)) goto code_r0x08016440;
                uVar22 = 3;
                uVar9 = 3;
                uVar7 = *(arg2 + 0x1e0);
            }
        }
        else {
            if (arg4 == 1) {
                uVar9 = snd_soc_component_read(arg1,arg3 * 2 + 0x1184);
                uVar9 = (uVar9 & 0xf) - 1;
                if (uVar9 < 6) {
                    cVar23 = '\x01';
                    uStack_58 = CONCAT44(uStack_58._4_4_,uVar9);
                    goto code_r0x08016204;
                }
            }
code_r0x08016440:
            uVar22 = 0;
            uVar9 = 0;
            uVar7 = *(arg2 + 0x1e0);
        }
        if ((uVar7 == 0) || (uVar9 = uVar22, uVar22 < uVar7)) {
            arg3 = uVar9;
            snd_soc_component_write(arg1,0x1790);
            *(arg2 + 0x1e0) = uVar9;
        }
    }
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_48) {
        return;
    }
    auVar28 = __stack_chk_fail();
    uVar19 = auVar28._8_8_;
    iVar12 = auVar28._0_8_;
    *extraout_x18 = sym.lpass_cdc_rx_macro_enable_interp_clk;
    pcStack_b8 = sym.lpass_cdc_rx_macro_enable_interp_clk;
    iVar13 = sp_el0;
    iStack_c8 = *(iVar13 + 0x5e0);
    iStack_d8 = 0;
    puStack_c0 = &stack0xffffffffffffffc0;
    if (iVar12 == 0) {
        iVar10 = ___ratelimit(obj.lpass_cdc_rx_macro_enable_interp_clk._rs,"lpass_cdc_rx_macro_enable_interp_clk");
        if (iVar10 != 0) {
            _printk(0x800180e,"lpass_cdc_rx_macro_enable_interp_clk");
        }
    }
    else {
        arg4_00 = uVar19 & 0xffffffff;
        uVar21 = sym.lpass_cdc_rx_macro_get_data(iVar12,auStack_d0,&iStack_d8,0x800264a);
        if ((uVar21 & 1) != 0) {
            iVar10 = arg3 * 0xc0;
            uVar9 = 0x15cc;
            if (arg3 != 2) {
                uVar9 = iVar10 + 0x1440;
            }
            uVar22 = auVar28._8_4_;
            if ((uVar19 & 3) != 0) {
                if (2 < arg3) goto code_r0x08016acc;
                uVar21 = arg3;
                iVar16 = *(iStack_d8 + uVar21 * 4 + 0x10);
                if (iVar16 == 0) {
                    uVar11 = iVar10 + 0x1400U & 0xffff;
                    snd_soc_component_update_bits(iVar12,uVar11,0x10,0x10);
                    snd_soc_component_update_bits(iVar12,uVar9 & 0xffff,1,1);
                    snd_soc_component_update_bits(iVar12,uVar11,0x20,0x20);
                    snd_soc_component_update_bits(iVar12,iVar10 + 0x140cU & 0xffff,3,3);
                    iVar13 = iStack_d8;
                    if (*(iStack_d8 + 0x1e1) != '\0') {
                        uVar14 = 0x1780;
                        if (1 < arg3) {
                            uVar14 = 0;
                        }
                        uVar6 = 2;
                        if (arg3 != 1) {
                            uVar6 = arg3 == 0;
                        }
                        if ((arg3 < 2) &&
                           (snd_soc_component_update_bits(iVar12,uVar14,uVar6,uVar6), (uVar19 & 0xc) != 0)) {
                            snd_soc_component_update_bits(iVar12,uVar14,uVar6,0);
                            *(iVar13 + 0x1e0) = 0;
                            snd_soc_component_write(iVar12,0x1790,0);
                        }
                    }
                    if (*(iStack_d8 + 0x5d) != '\0') {
                        if ((arg3 & 0xffff) == 0) {
                            uVar27 = 0x1404;
                            uVar24 = 0x142c;
                        }
                        else {
                            if ((arg3 & 0xffff) != 1) goto code_r0x080166f4;
                            uVar27 = 0x14c4;
                            uVar24 = 0x14ec;
                        }
                        snd_soc_component_update_bits(iVar12,uVar24,0x3c,0x14);
                        snd_soc_component_update_bits(iVar12,uVar27,4,4);
                        if ((uVar19 & 0xc) != 0) {
                            snd_soc_component_update_bits(iVar12,uVar27,4,0);
                            snd_soc_component_update_bits(iVar12,uVar24,0x3c,0);
                        }
                    }
code_r0x080166f4:
                    sym.lpass_cdc_rx_macro_hphdelay_lutbypass(iVar12,iStack_d8,arg3,uVar19 & 0xffffffff);
                    uVar11 = snd_soc_component_read(iVar12,iVar10 + 0x1400U & 0xffc0);
                    uVar11 = uVar11 & 0xf;
                    if (uVar11 < 6) {
                        iVar13 = 3;
                    }
                    else if (uVar11 < 8) {
                        iVar13 = 1;
                    }
                    else {
                        iVar13 = (uVar11 < 0xb) << 1;
                    }
                    uVar11 = iVar10 + 0x1410U & 0xffd0;
                    snd_soc_component_update_bits(iVar12,uVar11,3,iVar13);
                    if ((uVar19 & 0xc) != 0) {
                        snd_soc_component_update_bits(iVar12,uVar11,3,3);
                    }
                    sym.lpass_cdc_rx_macro_config_compander(iVar12,iStack_d8,arg3,arg4_00);
                    if (arg3 == 2) {
                        sym.lpass_cdc_rx_macro_config_softclip(iVar12,iStack_d8,uVar22);
                        if (*(iStack_d8 + 0x920) == 0) {
                            snd_soc_component_update_bits(iVar12,0x1588,4,0);
                        }
                        if ((uVar19 & 0xc) != 0) {
                            snd_soc_component_update_bits(iVar12,0x1588,4,4);
                        }
                    }
                    sym.lpass_cdc_rx_macro_config_classh(iVar12,iStack_d8,arg3,uVar22);
                    iVar16 = *(iStack_d8 + uVar21 * 4 + 0x10);
                }
                *(iStack_d8 + uVar21 * 4 + 0x10) = iVar16 + 1;
            }
            if ((uVar19 & 0xc) == 0) {
                if (2 < arg3) goto code_r0x08016acc;
            }
            else {
                if (3 < arg3) goto code_r0x08016acc;
                iVar13 = iStack_d8 + arg3 * 4;
                *(iVar13 + 0x10) = *(iVar13 + 0x10) + -1;
                if (arg3 == 3) goto code_r0x08016acc;
                piVar15 = iStack_d8 + arg3 * 4 + 0x10;
                if (0 < *piVar15) goto code_r0x080169b4;
                uVar11 = iVar10 + 0x1400U & 0xffff;
                *piVar15 = 0;
                snd_soc_component_update_bits(iVar12,uVar11,0x10,0x10);
                snd_soc_component_update_bits(iVar12,uVar9 & 0xffff,1,0);
                snd_soc_component_update_bits(iVar12,uVar11,0x20,0);
                snd_soc_component_update_bits(iVar12,uVar11,0x40,0x40);
                snd_soc_component_update_bits(iVar12,uVar11,0x40,0);
                snd_soc_component_update_bits(iVar12,uVar11,0xf,4);
                snd_soc_component_update_bits(iVar12,iVar10 + 0x140cU & 0xffff,3,0);
                sym.lpass_cdc_rx_macro_config_classh(iVar12,iStack_d8,arg3,uVar22);
                sym.lpass_cdc_rx_macro_config_compander(iVar12,iStack_d8,arg3,arg4_00);
                if (arg3 == 2) {
                    sym.lpass_cdc_rx_macro_config_softclip(iVar12,iStack_d8,uVar22);
                    if (((uVar19 & 3) != 0) && (*(iStack_d8 + 0x920) == 0)) {
                        snd_soc_component_update_bits(iVar12,0x1588,4,0);
                    }
                    snd_soc_component_update_bits(iVar12,0x1588,4,4);
                }
                sym.lpass_cdc_rx_macro_hphdelay_lutbypass(iVar12,iStack_d8,arg3,arg4_00);
                if (*(iStack_d8 + 0x5d) != '\0') {
                    if ((arg3 & 0xffff) == 0) {
                        uVar27 = 0x1404;
                        uVar24 = 0x142c;
                    }
                    else {
                        if ((arg3 & 0xffff) != 1) goto code_r0x08016a50;
                        uVar27 = 0x14c4;
                        uVar24 = 0x14ec;
                    }
                    if ((uVar19 & 3) != 0) {
                        snd_soc_component_update_bits(iVar12,uVar24,0x3c,0x14);
                        snd_soc_component_update_bits(iVar12,uVar27,4,4);
                    }
                    snd_soc_component_update_bits(iVar12,uVar27,4,0);
                    snd_soc_component_update_bits(iVar12,uVar24,0x3c,0);
                }
code_r0x08016a50:
                iVar13 = iStack_d8;
                if (*(iStack_d8 + 0x1e1) != '\0') {
                    uVar14 = 0x1780;
                    if (1 < arg3) {
                        uVar14 = 0;
                    }
                    uVar6 = 2;
                    if (arg3 != 1) {
                        uVar6 = arg3 == 0;
                    }
                    if ((arg3 < 2) && ((uVar19 & 3) != 0)) {
                        snd_soc_component_update_bits(iVar12,uVar14,uVar6,uVar6);
                    }
                    if (arg3 < 2) {
                        snd_soc_component_update_bits(iVar12,uVar14,uVar6,0);
                        *(iVar13 + 0x1e0) = 0;
                        snd_soc_component_write(iVar12,0x1790,0);
                    }
                }
            }
        }
    }
code_r0x080169b4:
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_c8) {
        return;
    }
    __stack_chk_fail();
code_r0x08016acc:
    //WARNING: Does not return
    pcVar8 = SoftwareBreakpoint(0x5512,0x8016ad0);
    (*pcVar8)();
}


// ===== sym.lpass_cdc_rx_macro_enable_interp_clk @ 0x080164b0 (size 1568) =====

void sym.lpass_cdc_rx_macro_enable_interp_clk(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar uVar1;
    uint32_t uVar2;
    uint32_t arg3_00;
    code *pcVar3;
    int iVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    uint uVar8;
    int *piVar9;
    int iVar10;
    ulong *in_x18;
    uint32_t arg3_01;
    uint64_t arg4;
    ulong uVar11;
    ulong uVar12;
    ulong unaff_x30;
    int64_t iStack_78;
    uchar auStack_70 [8];
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    iStack_78 = 0;
    if (arg1 == 0) {
        iVar4 = ___ratelimit(obj.lpass_cdc_rx_macro_enable_interp_clk._rs,"lpass_cdc_rx_macro_enable_interp_clk");
        if (iVar4 != 0) {
            _printk(0x800180e,"lpass_cdc_rx_macro_enable_interp_clk");
        }
    }
    else {
        arg3_00 = arg3;
        arg4 = arg2 & 0xffffffff;
        uVar6 = sym.lpass_cdc_rx_macro_get_data(arg1,auStack_70,&iStack_78,0x800264a);
        if ((uVar6 & 1) != 0) {
            iVar4 = arg3_00 * 0xc0;
            uVar2 = 0x15cc;
            if (arg3_00 != 2) {
                uVar2 = iVar4 + 0x1440;
            }
            arg3_01 = arg2;
            if ((arg2 & 3U) != 0) {
                if (2 < arg3_00) goto code_r0x08016acc;
                uVar6 = arg3 & 0xffffffff;
                iVar10 = *(iStack_78 + uVar6 * 4 + 0x10);
                if (iVar10 == 0) {
                    uVar5 = iVar4 + 0x1400U & 0xffff;
                    snd_soc_component_update_bits(arg1,uVar5,0x10,0x10);
                    snd_soc_component_update_bits(arg1,uVar2 & 0xffff,1,1);
                    snd_soc_component_update_bits(arg1,uVar5,0x20,0x20);
                    snd_soc_component_update_bits(arg1,iVar4 + 0x140cU & 0xffff,3,3);
                    iVar7 = iStack_78;
                    if (*(iStack_78 + 0x1e1) != '\0') {
                        uVar8 = 0x1780;
                        if (1 < arg3_00) {
                            uVar8 = 0;
                        }
                        uVar1 = 2;
                        if (arg3_00 != 1) {
                            uVar1 = arg3_00 == 0;
                        }
                        if ((arg3_00 < 2) &&
                           (snd_soc_component_update_bits(arg1,uVar8,uVar1,uVar1), (arg2 & 0xcU) != 0)) {
                            snd_soc_component_update_bits(arg1,uVar8,uVar1,0);
                            *(iVar7 + 0x1e0) = 0;
                            snd_soc_component_write(arg1,0x1790,0);
                        }
                    }
                    if (*(iStack_78 + 0x5d) != '\0') {
                        if ((arg3 & 0xffffU) == 0) {
                            uVar12 = 0x1404;
                            uVar11 = 0x142c;
                        }
                        else {
                            if ((arg3_00 & 0xffff) != 1) goto code_r0x080166f4;
                            uVar12 = 0x14c4;
                            uVar11 = 0x14ec;
                        }
                        snd_soc_component_update_bits(arg1,uVar11,0x3c,0x14);
                        snd_soc_component_update_bits(arg1,uVar12,4,4);
                        if ((arg2 & 0xcU) != 0) {
                            snd_soc_component_update_bits(arg1,uVar12,4,0);
                            snd_soc_component_update_bits(arg1,uVar11,0x3c,0);
                        }
                    }
code_r0x080166f4:
                    sym.lpass_cdc_rx_macro_hphdelay_lutbypass(arg1,iStack_78,arg3 & 0xffffffff,arg2 & 0xffffffff);
                    uVar5 = snd_soc_component_read(arg1,iVar4 + 0x1400U & 0xffc0);
                    uVar5 = uVar5 & 0xf;
                    if (uVar5 < 6) {
                        iVar7 = 3;
                    }
                    else if (uVar5 < 8) {
                        iVar7 = 1;
                    }
                    else {
                        iVar7 = (uVar5 < 0xb) << 1;
                    }
                    uVar5 = iVar4 + 0x1410U & 0xffd0;
                    snd_soc_component_update_bits(arg1,uVar5,3,iVar7);
                    if ((arg2 & 0xcU) != 0) {
                        snd_soc_component_update_bits(arg1,uVar5,3,3);
                    }
                    sym.lpass_cdc_rx_macro_config_compander(arg1,iStack_78,arg3_00,arg4);
                    if (arg3_00 == 2) {
                        sym.lpass_cdc_rx_macro_config_softclip(arg1,iStack_78,arg3_01);
                        if (*(iStack_78 + 0x920) == 0) {
                            snd_soc_component_update_bits(arg1,0x1588,4,0);
                        }
                        if ((arg2 & 0xcU) != 0) {
                            snd_soc_component_update_bits(arg1,0x1588,4,4);
                        }
                    }
                    sym.lpass_cdc_rx_macro_config_classh(arg1,iStack_78,arg3 & 0xffffffff,arg3_01);
                    iVar10 = *(iStack_78 + uVar6 * 4 + 0x10);
                }
                *(iStack_78 + uVar6 * 4 + 0x10) = iVar10 + 1;
            }
            if ((arg2 & 0xcU) == 0) {
                if (2 < arg3_00) goto code_r0x08016acc;
            }
            else {
                if (3 < arg3_00) goto code_r0x08016acc;
                iVar7 = iStack_78 + (arg3 & 0xffffffffU) * 4;
                *(iVar7 + 0x10) = *(iVar7 + 0x10) + -1;
                if (arg3_00 == 3) goto code_r0x08016acc;
                piVar9 = iStack_78 + (arg3 & 0xffffffffU) * 4 + 0x10;
                if (0 < *piVar9) goto code_r0x080169b4;
                uVar5 = iVar4 + 0x1400U & 0xffff;
                *piVar9 = 0;
                snd_soc_component_update_bits(arg1,uVar5,0x10,0x10);
                snd_soc_component_update_bits(arg1,uVar2 & 0xffff,1,0);
                snd_soc_component_update_bits(arg1,uVar5,0x20,0);
                snd_soc_component_update_bits(arg1,uVar5,0x40,0x40);
                snd_soc_component_update_bits(arg1,uVar5,0x40,0);
                snd_soc_component_update_bits(arg1,uVar5,0xf,4);
                snd_soc_component_update_bits(arg1,iVar4 + 0x140cU & 0xffff,3,0);
                sym.lpass_cdc_rx_macro_config_classh(arg1,iStack_78,arg3 & 0xffffffff,arg3_01);
                sym.lpass_cdc_rx_macro_config_compander(arg1,iStack_78,arg3_00,arg4);
                if (arg3_00 == 2) {
                    sym.lpass_cdc_rx_macro_config_softclip(arg1,iStack_78,arg3_01);
                    if (((arg2 & 3U) != 0) && (*(iStack_78 + 0x920) == 0)) {
                        snd_soc_component_update_bits(arg1,0x1588,4,0);
                    }
                    snd_soc_component_update_bits(arg1,0x1588,4,4);
                }
                sym.lpass_cdc_rx_macro_hphdelay_lutbypass(arg1,iStack_78,arg3 & 0xffffffff,arg4);
                if (*(iStack_78 + 0x5d) != '\0') {
                    if ((arg3 & 0xffffU) == 0) {
                        uVar12 = 0x1404;
                        uVar11 = 0x142c;
                    }
                    else {
                        if ((arg3_00 & 0xffff) != 1) goto code_r0x08016a50;
                        uVar12 = 0x14c4;
                        uVar11 = 0x14ec;
                    }
                    if ((arg2 & 3U) != 0) {
                        snd_soc_component_update_bits(arg1,uVar11,0x3c,0x14);
                        snd_soc_component_update_bits(arg1,uVar12,4,4);
                    }
                    snd_soc_component_update_bits(arg1,uVar12,4,0);
                    snd_soc_component_update_bits(arg1,uVar11,0x3c,0);
                }
code_r0x08016a50:
                iVar7 = iStack_78;
                if (*(iStack_78 + 0x1e1) != '\0') {
                    uVar8 = 0x1780;
                    if (1 < arg3_00) {
                        uVar8 = 0;
                    }
                    uVar1 = 2;
                    if (arg3_00 != 1) {
                        uVar1 = arg3_00 == 0;
                    }
                    if ((arg3_00 < 2) && ((arg2 & 3U) != 0)) {
                        snd_soc_component_update_bits(arg1,uVar8,uVar1,uVar1);
                    }
                    if (arg3_00 < 2) {
                        snd_soc_component_update_bits(arg1,uVar8,uVar1,0);
                        *(iVar7 + 0x1e0) = 0;
                        snd_soc_component_write(arg1,0x1790,0);
                    }
                }
            }
        }
    }
code_r0x080169b4:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_68) {
        return;
    }
    __stack_chk_fail();
code_r0x08016acc:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x8016ad0);
    (*pcVar3)();
}


// ===== sym.lpass_cdc_rx_macro_hphdelay_lutbypass @ 0x08016ad0 (size 324) =====

void sym.lpass_cdc_rx_macro_hphdelay_lutbypass(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    ulong *in_x18;
    ulong uVar2;
    ulong uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg3 & 0xffff) == 1) {
        if ((arg4 & 3U) == 0) {
            uVar2 = 0x103c;
            uVar3 = 0x187c;
            goto code_r0x08016bb4;
        }
        uVar2 = 0x103c;
        snd_soc_component_update_bits(arg1,0x103c,0x80,0x80);
        uVar3 = 0x187c;
        cVar1 = *(arg2 + 0x5c);
    }
    else {
        if ((arg3 & 0xffffU) != 0) {
            return;
        }
        if ((arg4 & 3U) == 0) {
            uVar2 = 0x1028;
            uVar3 = 0x181c;
            goto code_r0x08016bb4;
        }
        if (*(arg2 + 0x53) == '\0') {
            snd_soc_component_update_bits(arg1,0x1028,0x80,0x80);
        }
        else {
            snd_soc_component_update_bits(arg1,0x1408,2,2);
        }
        uVar2 = 0x1028;
        uVar3 = 0x181c;
        cVar1 = *(arg2 + 0x5c);
    }
    if (cVar1 != '\0') {
        snd_soc_component_update_bits(arg1,uVar3,0x20,0);
    }
code_r0x08016bb4:
    if ((arg4 & 0xcU) != 0) {
        snd_soc_component_update_bits(arg1,0x1408,2,0);
        snd_soc_component_update_bits(arg1,uVar2,0x80,0);
        snd_soc_component_update_bits(arg1,uVar3,0x20,0x20);
    }
    return;
}


// ===== sym.lpass_cdc_rx_macro_config_compander @ 0x08016c14 (size 412) =====

void sym.lpass_cdc_rx_macro_config_compander(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    uint32_t uVar4;
    uint uVar5;
    uint uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg3 != 2) && (*(arg2 + arg3 * 4 + 8) != 0)) {
        uVar4 = arg3 * 0xc0 + 0x1404;
        uVar1 = arg3 * 0x60 + 0x1800;
        if ((arg4 & 3U) != 0) {
            uVar3 = 2;
            if (*(arg2 + 0x53) == '\0' || arg3 != 0) {
                uVar3 = *(arg2 + 0x5c);
            }
            uVar5 = 0x1020;
            if (arg3 != 0) {
                uVar5 = 0x1034;
            }
            uVar6 = 0x1024;
            if (arg3 != 0) {
                uVar6 = 0x1038;
            }
            lpass_cdc_load_compander_coeff(arg1,uVar5,uVar6,obj.comp_coeff_table + *(arg2 + 0x5c) * 0x32,0x19);
            lpass_cdc_update_compander_setting(arg1,arg3 * 0x60 + 0x1820,obj.comp_setting_table + uVar3 * 0xc);
            uVar2 = uVar1 & 0xffff;
            snd_soc_component_update_bits(arg1,uVar2,1,1);
            snd_soc_component_update_bits(arg1,uVar2,2,2);
            snd_soc_component_update_bits(arg1,uVar2,2,0);
            snd_soc_component_update_bits(arg1,uVar4 & 0xffff,2,2);
        }
        if ((arg4 & 0xcU) != 0) {
            uVar1 = uVar1 & 0xffff;
            snd_soc_component_update_bits(arg1,uVar1,4,4);
            snd_soc_component_update_bits(arg1,uVar4 & 0xffff,2,0);
            snd_soc_component_update_bits(arg1,uVar1,1,0);
            snd_soc_component_update_bits(arg1,uVar1,4,0);
        }
    }
    return;
}


// ===== sym.lpass_cdc_rx_macro_config_softclip @ 0x08016db0 (size 200) =====

void sym.lpass_cdc_rx_macro_config_softclip(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg2 + 0x91c) != 0) {
        if ((arg3 & 3) != 0) {
            iVar1 = *(arg2 + 0x924);
            if (iVar1 == 0) {
                snd_soc_component_update_bits(arg1,0x1140,1,1);
                iVar1 = *(arg2 + 0x924);
            }
            *(arg2 + 0x924) = iVar1 + 1;
            snd_soc_component_update_bits(arg1,0x1144,1,1);
        }
        if ((arg3 & 0xc) != 0) {
            snd_soc_component_update_bits(arg1,0x1144,1,0);
            iVar1 = *(arg2 + 0x924) + -1;
            *(arg2 + 0x924) = iVar1;
            if (iVar1 == 0) {
                snd_soc_component_update_bits(arg1,0x1140,1,0);
            }
        }
    }
    return;
}


// ===== sym.lpass_cdc_rx_macro_config_classh @ 0x08016e78 (size 456) =====

//WARNING: Type propagation algorithm not settling

void sym.lpass_cdc_rx_macro_config_classh(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    int iVar1;
    int iVar2;
    uint32_t uVar3;
    ulong uVar4;
    ulong uVar5;
    ulong uVar6;
    uint uVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg4 & 0xc) == 0) {
        if ((arg4 & 3) == 0) {
            return;
        }
        iVar1 = *(arg2 + 0x48);
        uVar3 = arg3;
        iVar2 = iVar1 + 1;
        *(arg2 + 0x48) = iVar2;
        if (iVar1 == 0) {
            snd_soc_component_update_bits(*(arg2 + 0x138),0x1200,1,1);
            iVar2 = *(arg2 + 0x48);
        }
        if (iVar2 < 0) {
            *(arg2 + 0x48) = 0;
        }
        if (uVar3 < 2) {
            snd_soc_component_update_bits(arg1,0x1220,0xff,0xc0);
            snd_soc_component_update_bits(arg1,0x121c,0xf,0);
        }
        if (uVar3 == 2) {
            snd_soc_component_update_bits(arg1,0x1584,8,8);
            uVar4 = 0x1584;
            uVar5 = 0x10;
            uVar6 = 0x10;
        }
        else {
            if (uVar3 == 1) {
                uVar7 = 0x1c;
                if (*(arg2 + 0x53) != '\0') {
                    uVar7 = 0x39;
                }
                snd_soc_component_update_bits(arg1,0x120c,0x3f,uVar7);
                snd_soc_component_update_bits(arg1,0x1208,7,0);
                uVar4 = 0x14c4;
            }
            else {
                if (uVar3 != 0) {
                    return;
                }
                uVar7 = 0x1c;
                if (*(arg2 + 0x53) != '\0') {
                    uVar7 = 0x39;
                }
                snd_soc_component_update_bits(arg1,0x120c,0x3f,uVar7);
                snd_soc_component_update_bits(arg1,0x1208,7,0);
                uVar4 = 0x1404;
            }
            uVar5 = 0x40;
            uVar6 = 0x40;
        }
        snd_soc_component_update_bits(arg1,uVar4,uVar5,uVar6);
        return;
    }
    iVar2 = *(arg2 + 0x48) + -1;
    *(arg2 + 0x48) = iVar2;
    if (iVar2 == 0) {
        snd_soc_component_update_bits(*(arg2 + 0x138),0x1200,1,0);
        iVar2 = *(arg2 + 0x48);
    }
    if (-1 < iVar2) {
        return;
    }
    *(arg2 + 0x48) = 0;
    return;
}


// ===== sym.lpass_cdc_rx_macro_get_compander @ 0x08017040 (size 164) =====

void sym.lpass_cdc_rx_macro_get_compander(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    code *pcVar3;
    uint64_t uVar4;
    ulong uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    int64_t iStack_38;
    uchar auStack_30 [8];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    iStack_38 = 0;
    uVar1 = *(*(arg1 + 0x78) + 0x18);
    uVar4 = sym.lpass_cdc_rx_macro_get_data(*(arg1 + 0x80),auStack_30,&iStack_38,0x80024bd);
    if ((uVar4 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        if (1 < uVar1) goto code_r0x080170e0;
        uVar5 = 0;
        *(arg2 + 0x48) = *(iStack_38 + uVar1 * 4 + 8);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return;
    }
    __stack_chk_fail(uVar5);
code_r0x080170e0:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x80170e4);
    (*pcVar3)();
}


// ===== sym.lpass_cdc_rx_macro_set_compander @ 0x080170e4 (size 160) =====

void sym.lpass_cdc_rx_macro_set_compander(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    code *pcVar4;
    uint64_t uVar5;
    ulong uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    int64_t iStack_38;
    uchar auStack_30 [8];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    iStack_38 = 0;
    uVar1 = *(arg2 + 0x48);
    uVar2 = *(*(arg1 + 0x78) + 0x18);
    uVar5 = sym.lpass_cdc_rx_macro_get_data(*(arg1 + 0x80),auStack_30,&iStack_38,0x800281b);
    if ((uVar5 & 1) == 0) {
        uVar6 = 0xffffffea;
    }
    else {
        if (1 < uVar2) goto code_r0x08017180;
        uVar6 = 0;
        *(iStack_38 + uVar2 * 4 + 8) = uVar1;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return;
    }
    __stack_chk_fail(uVar6);
code_r0x08017180:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x8017184);
    (*pcVar4)();
}


// ===== sym.lpass_cdc_rx_macro_fir_coeff_num_get @ 0x08017184 (size 280) =====

uint64_t sym.lpass_cdc_rx_macro_fir_coeff_num_get(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    char cVar2;
    ulong *puVar3;
    code *pcVar4;
    int iVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    int64_t iVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong *extraout_x18_07;
    ulong *extraout_x18_08;
    ulong *extraout_x18_09;
    ulong *extraout_x18_10;
    int64_t iVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    uchar auVar12 [16];
    int64_t iStack_318;
    uchar auStack_310 [8];
    int64_t iStack_308;
    ulong ***pppuStack_300;
    code *pcStack_2f8;
    int64_t iStack_2f0;
    int64_t iStack_2d8;
    uchar auStack_2d0 [8];
    int64_t iStack_2c8;
    ulong ***pppuStack_2c0;
    code *pcStack_2b8;
    int64_t iStack_2b0;
    int64_t iStack_298;
    uchar auStack_290 [8];
    int64_t iStack_288;
    ulong ***pppuStack_280;
    code *pcStack_278;
    int64_t iStack_270;
    int64_t iStack_258;
    uchar auStack_250 [8];
    int64_t iStack_248;
    ulong ***pppuStack_240;
    code *pcStack_238;
    int64_t iStack_230;
    ulong *puStack_218;
    uchar auStack_210 [8];
    int64_t iStack_208;
    ulong ***pppuStack_200;
    code *pcStack_1f8;
    int64_t iStack_1c8;
    uchar auStack_1c0 [8];
    int64_t iStack_1b8;
    ulong ***pppuStack_1b0;
    code *pcStack_1a8;
    int64_t iStack_1a0;
    int64_t iStack_188;
    uchar auStack_180 [8];
    int64_t iStack_178;
    ulong ***pppuStack_170;
    code *pcStack_168;
    int64_t iStack_160;
    int64_t iStack_148;
    uchar auStack_140 [8];
    int64_t iStack_138;
    ulong ***pppuStack_130;
    code *pcStack_128;
    int64_t iStack_120;
    uchar auStack_108 [8];
    int64_t iStack_100;
    int64_t iStack_f8;
    uchar ***pppuStack_f0;
    code *pcStack_e8;
    int64_t iStack_e0;
    uchar auStack_c8 [8];
    int64_t iStack_c0;
    int64_t iStack_b8;
    uchar **ppuStack_b0;
    code *pcStack_a8;
    uint64_t uStack_a0;
    ulong *puStack_88;
    uchar auStack_80 [8];
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    ulong *puStack_38;
    uchar auStack_30 [8];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_28 = *(iVar9 + 0x5e0);
    puStack_38 = NULL;
    uVar6 = *(*(arg1 + 0x78) + 0x18);
    if (*(arg1 + 0x80) == 0) {
        iVar5 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_coeff_num_get._rs,"lpass_cdc_rx_macro_fir_coeff_num_get");
        if (iVar5 != 0) {
            _printk(0x800180e,"lpass_cdc_rx_macro_fir_coeff_num_get");
            uVar7 = 0xffffffea;
            goto code_r0x08017238;
        }
code_r0x08017234:
        uVar7 = 0xffffffea;
    }
    else {
        uVar7 = sym.lpass_cdc_rx_macro_get_data(*(arg1 + 0x80),auStack_30,&puStack_38,0x800201b);
        if ((uVar7 & 1) == 0) goto code_r0x08017234;
        if (uVar6 < 2) {
            uVar7 = 0;
            *(arg2 + 0x48) = *(puStack_38 + uVar6 + 0x50);
        }
        else {
            iVar5 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_coeff_num_get._rs.313,
                                 "lpass_cdc_rx_macro_fir_coeff_num_get");
            if (iVar5 == 0) goto code_r0x08017234;
            _dev_err(*puStack_38,"%s: path_idx:%d is invalid\n","lpass_cdc_rx_macro_fir_coeff_num_get",uVar6);
            uVar7 = 0xffffffea;
        }
    }
code_r0x08017238:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_28) {
        return uVar7;
    }
    auVar11 = __stack_chk_fail(uVar7);
    *extraout_x18 = sym.lpass_cdc_rx_macro_fir_coeff_num_put;
    pcStack_68 = sym.lpass_cdc_rx_macro_fir_coeff_num_put;
    iVar9 = sp_el0;
    iStack_78 = *(iVar9 + 0x5e0);
    iVar9 = *(auVar11._0_8_ + 0x80);
    puStack_88 = NULL;
    uVar1 = *(auVar11._8_8_ + 0x48);
    uVar6 = *(*(auVar11._0_8_ + 0x78) + 0x18);
    uVar7 = uVar6;
    puStack_70 = &stack0xffffffffffffffe0;
    if (iVar9 == 0) {
        iVar5 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_coeff_num_put._rs,"lpass_cdc_rx_macro_fir_coeff_num_put");
        if (iVar5 != 0) {
            _printk(0x800180e,"lpass_cdc_rx_macro_fir_coeff_num_put");
        }
code_r0x08017348:
        uVar8 = 0xffffffea;
    }
    else {
        uVar8 = sym.lpass_cdc_rx_macro_get_data(iVar9,auStack_80,&puStack_88,0x8002160);
        if ((uVar8 & 1) == 0) goto code_r0x08017348;
        if (uVar1 < 0xc9) {
            if (1 < uVar6) goto code_r0x08017404;
            iVar5 = *(puStack_88 + uVar7 * 8 + 0x8ec);
            *(puStack_88 + uVar7 + 0x50) = uVar1;
            if (*(puStack_88 + uVar7 + 0x11e) + iVar5 == uVar1) {
                uVar8 = sym.set_fir_filter_coeff(iVar9,puStack_88,uVar7);
            }
            else {
                uVar8 = 0;
            }
        }
        else {
            iVar5 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_coeff_num_put._rs.315,
                                 "lpass_cdc_rx_macro_fir_coeff_num_put");
            if (iVar5 != 0) {
                _dev_err(*puStack_88,"%s: inavlid total number of RX_FIR coefficients:%d in path:%d\n",
                         "lpass_cdc_rx_macro_fir_coeff_num_put",uVar1,uVar7);
            }
            if (1 < uVar6) {
code_r0x08017404:
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x5512,0x8017408);
                (*pcVar4)();
            }
            uVar8 = 0xffffffea;
            *(puStack_88 + uVar7 + 0x50) = 0;
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_78) {
        return uVar8;
    }
    auVar11 = __stack_chk_fail(uVar8);
    *extraout_x18_00 = sym.lpass_cdc_rx_macro_hph_idle_detect_get;
    pcStack_a8 = sym.lpass_cdc_rx_macro_hph_idle_detect_get;
    iVar9 = sp_el0;
    iStack_b8 = *(iVar9 + 0x5e0);
    iStack_c0 = 0;
    ppuStack_b0 = &puStack_70;
    uStack_a0 = uVar7;
    uVar7 = sym.lpass_cdc_rx_macro_get_data(*(auVar11._0_8_ + 0x80),auStack_c8,&iStack_c0,0x800127c);
    if ((uVar7 & 1) == 0) {
        uVar7 = 0xffffffea;
    }
    else {
        uVar7 = 0;
        *(auVar11._8_8_ + 0x48) = *(iStack_c0 + 0x1e1);
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_b8) {
        return uVar7;
    }
    auVar12 = __stack_chk_fail(uVar7);
    *extraout_x18_01 = sym.lpass_cdc_rx_macro_hph_idle_detect_put;
    pcStack_e8 = sym.lpass_cdc_rx_macro_hph_idle_detect_put;
    iVar9 = sp_el0;
    iStack_f8 = *(iVar9 + 0x5e0);
    iStack_100 = 0;
    pppuStack_f0 = &ppuStack_b0;
    iStack_e0 = auVar11._8_8_;
    uVar7 = sym.lpass_cdc_rx_macro_get_data(*(auVar12._0_8_ + 0x80),auStack_108,&iStack_100,0x80023d6);
    if ((uVar7 & 1) == 0) {
        uVar7 = 0xffffffea;
    }
    else {
        uVar7 = 0;
        *(iStack_100 + 0x1e1) = *(auVar12._8_8_ + 0x48);
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_f8) {
        return uVar7;
    }
    auVar11 = __stack_chk_fail(uVar7);
    *extraout_x18_02 = sym.lpass_cdc_rx_macro_get_ear_mode;
    pcStack_128 = sym.lpass_cdc_rx_macro_get_ear_mode;
    iVar9 = sp_el0;
    iStack_138 = *(iVar9 + 0x5e0);
    iStack_148 = 0;
    pppuStack_130 = &pppuStack_f0;
    iStack_120 = auVar12._8_8_;
    uVar7 = sym.lpass_cdc_rx_macro_get_data(*(auVar11._0_8_ + 0x80),auStack_140,&iStack_148,0x800283c);
    if ((uVar7 & 1) == 0) {
        uVar7 = 0xffffffea;
    }
    else {
        uVar7 = 0;
        *(auVar11._8_8_ + 0x48) = *(iStack_148 + 0x53);
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_138) {
        return uVar7;
    }
    auVar12 = __stack_chk_fail(uVar7);
    iVar10 = auVar12._8_8_;
    *extraout_x18_03 = sym.lpass_cdc_rx_macro_put_ear_mode;
    pcStack_168 = sym.lpass_cdc_rx_macro_put_ear_mode;
    iVar9 = sp_el0;
    iStack_178 = *(iVar9 + 0x5e0);
    iStack_188 = 0;
    pppuStack_170 = &pppuStack_130;
    iStack_160 = auVar11._8_8_;
    uVar7 = sym.lpass_cdc_rx_macro_get_data(*(auVar12._0_8_ + 0x80),auStack_180,&iStack_188,0x8001de8);
    if ((uVar7 & 1) == 0) {
        uVar7 = 0xffffffea;
    }
    else {
        uVar7 = 0;
        *(iStack_188 + 0x53) = *(iVar10 + 0x48) != 0;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_178) {
        return uVar7;
    }
    auVar11 = __stack_chk_fail(uVar7);
    *extraout_x18_04 = sym.lpass_cdc_rx_macro_fir_filter_enable_get;
    pcStack_1a8 = sym.lpass_cdc_rx_macro_fir_filter_enable_get;
    iVar9 = sp_el0;
    iStack_1b8 = *(iVar9 + 0x5e0);
    iVar9 = *(auVar11._0_8_ + 0x80);
    iStack_1c8 = 0;
    pppuStack_1b0 = &pppuStack_170;
    iStack_1a0 = iVar10;
    if (iVar9 == 0) {
        iVar5 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_filter_enable_get._rs,
                             "lpass_cdc_rx_macro_fir_filter_enable_get");
        if (iVar5 != 0) {
            _printk(0x800180e,"lpass_cdc_rx_macro_fir_filter_enable_get");
        }
code_r0x080176cc:
        uVar7 = 0xffffffea;
    }
    else {
        uVar7 = sym.lpass_cdc_rx_macro_get_data(iVar9,auStack_1c0,&iStack_1c8,0x8001ba9);
        if ((uVar7 & 1) == 0) goto code_r0x080176cc;
        uVar7 = 0;
        *(auVar11._8_8_ + 0x48) = *(iStack_1c8 + 0x54);
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_1b8) {
        return uVar7;
    }
    auVar11 = __stack_chk_fail(uVar7);
    *extraout_x18_05 = sym.lpass_cdc_rx_macro_fir_filter_enable_put;
    pcStack_1f8 = sym.lpass_cdc_rx_macro_fir_filter_enable_put;
    iVar9 = sp_el0;
    iStack_208 = *(iVar9 + 0x5e0);
    iVar9 = *(auVar11._0_8_ + 0x80);
    puStack_218 = NULL;
    pppuStack_200 = &pppuStack_1b0;
    if (iVar9 == 0) {
        iVar5 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_filter_enable_put._rs,
                             "lpass_cdc_rx_macro_fir_filter_enable_put");
        if (iVar5 != 0) {
            _printk(0x800180e,"lpass_cdc_rx_macro_fir_filter_enable_put");
            uVar7 = 0xffffffea;
            goto code_r0x080178e4;
        }
    }
    else {
        uVar7 = sym.lpass_cdc_rx_macro_get_data(iVar9,auStack_210,&puStack_218,0x8001c78);
        puVar3 = puStack_218;
        if ((uVar7 & 1) != 0) {
            iVar10 = puStack_218[0x126];
            if ((iVar10 != 0) && (*(puStack_218 + 0x59) != '\0')) {
                cVar2 = *(auVar11._8_8_ + 0x48);
                *(puStack_218 + 0x54) = cVar2 != '\0';
                if (cVar2 == '\0') {
                    snd_soc_component_update_bits(iVar9,0x145c,0xd,0);
                    snd_soc_component_update_bits(iVar9,0x151c,0xd,0);
                    snd_soc_component_update_bits(iVar9,0x1400,0x80,0);
                    snd_soc_component_update_bits(iVar9,0x14c0,0x80,0);
                    snd_soc_component_update_bits(iVar9,0x1004,1,0);
                    iVar9 = puVar3[0x126];
                    clk_disable(iVar9);
                    clk_unprepare(iVar9);
                }
                else {
                    uVar6 = clk_prepare(iVar10);
                    if (uVar6 == 0) {
                        uVar6 = clk_enable(iVar10);
                        if (uVar6 != 0) {
                            clk_unprepare(iVar10);
                            goto code_r0x080177bc;
                        }
                    }
                    else {
code_r0x080177bc:
                        uVar7 = uVar6;
                        if (uVar6 < 0) {
                            iVar5 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_filter_enable_put._rs.326,
                                                 "lpass_cdc_rx_macro_fir_filter_enable_put");
                            if (iVar5 != 0) {
                                _dev_err(*puVar3,"%s:hifi_fir_clk enable failed\n",
                                         "lpass_cdc_rx_macro_fir_filter_enable_put");
                            }
                            goto code_r0x080178e4;
                        }
                    }
                    snd_soc_component_write(iVar9,0x1460,*(puVar3 + 10));
                    snd_soc_component_write(iVar9,0x1520,*(puVar3 + 0x51));
                    snd_soc_component_update_bits(iVar9,0x1004,1,1);
                    snd_soc_component_update_bits(iVar9,0x1400,0x80,0x80);
                    snd_soc_component_update_bits(iVar9,0x14c0,0x80,0x80);
                    snd_soc_component_update_bits(iVar9,0x145c,0xd,5);
                    snd_soc_component_update_bits(iVar9,0x151c,0xd,5);
                }
            }
            uVar7 = 0;
            goto code_r0x080178e4;
        }
    }
    uVar7 = 0xffffffea;
code_r0x080178e4:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_208) {
        return uVar7;
    }
    auVar11 = __stack_chk_fail();
    *extraout_x18_06 = sym.lpass_cdc_rx_macro_get_hph_hd2_mode;
    pcStack_238 = sym.lpass_cdc_rx_macro_get_hph_hd2_mode;
    iVar10 = sp_el0;
    iStack_248 = *(iVar10 + 0x5e0);
    iStack_258 = 0;
    pppuStack_240 = &pppuStack_200;
    iStack_230 = iVar9;
    uVar7 = sym.lpass_cdc_rx_macro_get_data(*(auVar11._0_8_ + 0x80),auStack_250,&iStack_258,0x8001ca1);
    if ((uVar7 & 1) == 0) {
        uVar7 = 0xffffffea;
    }
    else {
        uVar7 = 0;
        *(auVar11._8_8_ + 0x48) = *(iStack_258 + 0x5d);
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_248) {
        return uVar7;
    }
    auVar12 = __stack_chk_fail(uVar7);
    *extraout_x18_07 = sym.lpass_cdc_rx_macro_put_hph_hd2_mode;
    pcStack_278 = sym.lpass_cdc_rx_macro_put_hph_hd2_mode;
    iVar9 = sp_el0;
    iStack_288 = *(iVar9 + 0x5e0);
    iStack_298 = 0;
    pppuStack_280 = &pppuStack_240;
    iStack_270 = auVar11._8_8_;
    uVar7 = sym.lpass_cdc_rx_macro_get_data(*(auVar12._0_8_ + 0x80),auStack_290,&iStack_298,0x800285c);
    if ((uVar7 & 1) == 0) {
        uVar7 = 0xffffffea;
    }
    else {
        uVar7 = 0;
        *(iStack_298 + 0x5d) = *(auVar12._8_8_ + 0x48) != 0;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_288) {
        return uVar7;
    }
    auVar11 = __stack_chk_fail(uVar7);
    *extraout_x18_08 = sym.lpass_cdc_rx_macro_get_hph_pwr_mode;
    pcStack_2b8 = sym.lpass_cdc_rx_macro_get_hph_pwr_mode;
    iVar9 = sp_el0;
    iStack_2c8 = *(iVar9 + 0x5e0);
    iStack_2d8 = 0;
    pppuStack_2c0 = &pppuStack_280;
    iStack_2b0 = auVar12._8_8_;
    uVar7 = sym.lpass_cdc_rx_macro_get_data(*(auVar11._0_8_ + 0x80),auStack_2d0,&iStack_2d8,0x80016e4);
    if ((uVar7 & 1) == 0) {
        uVar7 = 0xffffffea;
    }
    else {
        uVar7 = 0;
        *(auVar11._8_8_ + 0x48) = *(iStack_2d8 + 0x5c);
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_2c8) {
        return uVar7;
    }
    auVar12 = __stack_chk_fail(uVar7);
    *extraout_x18_09 = sym.lpass_cdc_rx_macro_put_hph_pwr_mode;
    pcStack_2f8 = sym.lpass_cdc_rx_macro_put_hph_pwr_mode;
    iVar9 = sp_el0;
    iStack_308 = *(iVar9 + 0x5e0);
    iStack_318 = 0;
    pppuStack_300 = &pppuStack_2c0;
    iStack_2f0 = auVar11._8_8_;
    uVar7 = sym.lpass_cdc_rx_macro_get_data(*(auVar12._0_8_ + 0x80),auStack_310,&iStack_318,0x80015dc);
    if ((uVar7 & 1) == 0) {
        uVar7 = 0xffffffea;
    }
    else {
        uVar7 = 0;
        *(iStack_318 + 0x5c) = *(auVar12._8_8_ + 0x48) != 0;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_308) {
        return uVar7;
    }
    auVar11 = __stack_chk_fail(uVar7);
    *extraout_x18_10 = sym.lpass_cdc_rx_macro_vbat_bcl_gsm_mode_func_get;
    uVar6 = snd_soc_component_read(*(auVar11._0_8_ + 0x80),0x1284);
    *(auVar11._8_8_ + 0x48) = uVar6 >> 2 & 1;
    return 0;
}


// ===== sym.lpass_cdc_rx_macro_fir_coeff_num_put @ 0x0801729c (size 368) =====

uint64_t sym.lpass_cdc_rx_macro_fir_coeff_num_put(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    char cVar2;
    ulong *puVar3;
    code *pcVar4;
    int iVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong *extraout_x18_07;
    ulong *extraout_x18_08;
    ulong *extraout_x18_09;
    uint64_t uVar9;
    int64_t iVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    uchar auVar12 [16];
    int64_t iStack_2d8;
    uchar auStack_2d0 [8];
    int64_t iStack_2c8;
    ulong ***pppuStack_2c0;
    code *pcStack_2b8;
    int64_t iStack_2b0;
    int64_t iStack_298;
    uchar auStack_290 [8];
    int64_t iStack_288;
    ulong ***pppuStack_280;
    code *pcStack_278;
    int64_t iStack_270;
    int64_t iStack_258;
    uchar auStack_250 [8];
    int64_t iStack_248;
    ulong ***pppuStack_240;
    code *pcStack_238;
    int64_t iStack_230;
    int64_t iStack_218;
    uchar auStack_210 [8];
    int64_t iStack_208;
    ulong ***pppuStack_200;
    code *pcStack_1f8;
    int64_t iStack_1f0;
    ulong *puStack_1d8;
    uchar auStack_1d0 [8];
    int64_t iStack_1c8;
    ulong ***pppuStack_1c0;
    code *pcStack_1b8;
    int64_t iStack_188;
    uchar auStack_180 [8];
    int64_t iStack_178;
    ulong ***pppuStack_170;
    code *pcStack_168;
    int64_t iStack_160;
    int64_t iStack_148;
    uchar auStack_140 [8];
    int64_t iStack_138;
    ulong ***pppuStack_130;
    code *pcStack_128;
    int64_t iStack_120;
    int64_t iStack_108;
    uchar auStack_100 [8];
    int64_t iStack_f8;
    uchar ***pppuStack_f0;
    code *pcStack_e8;
    int64_t iStack_e0;
    uchar auStack_c8 [8];
    int64_t iStack_c0;
    int64_t iStack_b8;
    uchar **ppuStack_b0;
    code *pcStack_a8;
    int64_t iStack_a0;
    uchar auStack_88 [8];
    int64_t iStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    uint64_t uStack_60;
    ulong *puStack_48;
    uchar auStack_40 [8];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_38 = *(iVar8 + 0x5e0);
    iVar8 = *(arg1 + 0x80);
    puStack_48 = NULL;
    uVar1 = *(arg2 + 0x48);
    uVar6 = *(*(arg1 + 0x78) + 0x18);
    uVar9 = uVar6;
    if (iVar8 == 0) {
        iVar5 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_coeff_num_put._rs,"lpass_cdc_rx_macro_fir_coeff_num_put");
        if (iVar5 != 0) {
            _printk(0x800180e,"lpass_cdc_rx_macro_fir_coeff_num_put");
        }
code_r0x08017348:
        uVar7 = 0xffffffea;
    }
    else {
        uVar7 = sym.lpass_cdc_rx_macro_get_data(iVar8,auStack_40,&puStack_48,0x8002160);
        if ((uVar7 & 1) == 0) goto code_r0x08017348;
        if (uVar1 < 0xc9) {
            if (1 < uVar6) goto code_r0x08017404;
            iVar5 = *(puStack_48 + uVar9 * 8 + 0x8ec);
            *(puStack_48 + uVar9 + 0x50) = uVar1;
            if (*(puStack_48 + uVar9 + 0x11e) + iVar5 == uVar1) {
                uVar7 = sym.set_fir_filter_coeff(iVar8,puStack_48,uVar9);
            }
            else {
                uVar7 = 0;
            }
        }
        else {
            iVar5 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_coeff_num_put._rs.315,
                                 "lpass_cdc_rx_macro_fir_coeff_num_put");
            if (iVar5 != 0) {
                _dev_err(*puStack_48,"%s: inavlid total number of RX_FIR coefficients:%d in path:%d\n",
                         "lpass_cdc_rx_macro_fir_coeff_num_put",uVar1,uVar9);
            }
            if (1 < uVar6) {
code_r0x08017404:
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x5512,0x8017408);
                (*pcVar4)();
            }
            uVar7 = 0xffffffea;
            *(puStack_48 + uVar9 + 0x50) = 0;
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_38) {
        return uVar7;
    }
    auVar11 = __stack_chk_fail(uVar7);
    *extraout_x18 = sym.lpass_cdc_rx_macro_hph_idle_detect_get;
    pcStack_68 = sym.lpass_cdc_rx_macro_hph_idle_detect_get;
    iVar8 = sp_el0;
    iStack_78 = *(iVar8 + 0x5e0);
    iStack_80 = 0;
    puStack_70 = &stack0xffffffffffffffd0;
    uStack_60 = uVar9;
    uVar9 = sym.lpass_cdc_rx_macro_get_data(*(auVar11._0_8_ + 0x80),auStack_88,&iStack_80,0x800127c);
    if ((uVar9 & 1) == 0) {
        uVar9 = 0xffffffea;
    }
    else {
        uVar9 = 0;
        *(auVar11._8_8_ + 0x48) = *(iStack_80 + 0x1e1);
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_78) {
        return uVar9;
    }
    auVar12 = __stack_chk_fail(uVar9);
    *extraout_x18_00 = sym.lpass_cdc_rx_macro_hph_idle_detect_put;
    pcStack_a8 = sym.lpass_cdc_rx_macro_hph_idle_detect_put;
    iVar8 = sp_el0;
    iStack_b8 = *(iVar8 + 0x5e0);
    iStack_c0 = 0;
    ppuStack_b0 = &puStack_70;
    iStack_a0 = auVar11._8_8_;
    uVar9 = sym.lpass_cdc_rx_macro_get_data(*(auVar12._0_8_ + 0x80),auStack_c8,&iStack_c0,0x80023d6);
    if ((uVar9 & 1) == 0) {
        uVar9 = 0xffffffea;
    }
    else {
        uVar9 = 0;
        *(iStack_c0 + 0x1e1) = *(auVar12._8_8_ + 0x48);
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_b8) {
        return uVar9;
    }
    auVar11 = __stack_chk_fail(uVar9);
    *extraout_x18_01 = sym.lpass_cdc_rx_macro_get_ear_mode;
    pcStack_e8 = sym.lpass_cdc_rx_macro_get_ear_mode;
    iVar8 = sp_el0;
    iStack_f8 = *(iVar8 + 0x5e0);
    iStack_108 = 0;
    pppuStack_f0 = &ppuStack_b0;
    iStack_e0 = auVar12._8_8_;
    uVar9 = sym.lpass_cdc_rx_macro_get_data(*(auVar11._0_8_ + 0x80),auStack_100,&iStack_108,0x800283c);
    if ((uVar9 & 1) == 0) {
        uVar9 = 0xffffffea;
    }
    else {
        uVar9 = 0;
        *(auVar11._8_8_ + 0x48) = *(iStack_108 + 0x53);
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_f8) {
        return uVar9;
    }
    auVar12 = __stack_chk_fail(uVar9);
    iVar10 = auVar12._8_8_;
    *extraout_x18_02 = sym.lpass_cdc_rx_macro_put_ear_mode;
    pcStack_128 = sym.lpass_cdc_rx_macro_put_ear_mode;
    iVar8 = sp_el0;
    iStack_138 = *(iVar8 + 0x5e0);
    iStack_148 = 0;
    pppuStack_130 = &pppuStack_f0;
    iStack_120 = auVar11._8_8_;
    uVar9 = sym.lpass_cdc_rx_macro_get_data(*(auVar12._0_8_ + 0x80),auStack_140,&iStack_148,0x8001de8);
    if ((uVar9 & 1) == 0) {
        uVar9 = 0xffffffea;
    }
    else {
        uVar9 = 0;
        *(iStack_148 + 0x53) = *(iVar10 + 0x48) != 0;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_138) {
        return uVar9;
    }
    auVar11 = __stack_chk_fail(uVar9);
    *extraout_x18_03 = sym.lpass_cdc_rx_macro_fir_filter_enable_get;
    pcStack_168 = sym.lpass_cdc_rx_macro_fir_filter_enable_get;
    iVar8 = sp_el0;
    iStack_178 = *(iVar8 + 0x5e0);
    iVar8 = *(auVar11._0_8_ + 0x80);
    iStack_188 = 0;
    pppuStack_170 = &pppuStack_130;
    iStack_160 = iVar10;
    if (iVar8 == 0) {
        iVar5 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_filter_enable_get._rs,
                             "lpass_cdc_rx_macro_fir_filter_enable_get");
        if (iVar5 != 0) {
            _printk(0x800180e,"lpass_cdc_rx_macro_fir_filter_enable_get");
        }
code_r0x080176cc:
        uVar9 = 0xffffffea;
    }
    else {
        uVar9 = sym.lpass_cdc_rx_macro_get_data(iVar8,auStack_180,&iStack_188,0x8001ba9);
        if ((uVar9 & 1) == 0) goto code_r0x080176cc;
        uVar9 = 0;
        *(auVar11._8_8_ + 0x48) = *(iStack_188 + 0x54);
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_178) {
        return uVar9;
    }
    auVar11 = __stack_chk_fail(uVar9);
    *extraout_x18_04 = sym.lpass_cdc_rx_macro_fir_filter_enable_put;
    pcStack_1b8 = sym.lpass_cdc_rx_macro_fir_filter_enable_put;
    iVar8 = sp_el0;
    iStack_1c8 = *(iVar8 + 0x5e0);
    iVar8 = *(auVar11._0_8_ + 0x80);
    puStack_1d8 = NULL;
    pppuStack_1c0 = &pppuStack_170;
    if (iVar8 == 0) {
        iVar5 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_filter_enable_put._rs,
                             "lpass_cdc_rx_macro_fir_filter_enable_put");
        if (iVar5 != 0) {
            _printk(0x800180e,"lpass_cdc_rx_macro_fir_filter_enable_put");
            uVar9 = 0xffffffea;
            goto code_r0x080178e4;
        }
    }
    else {
        uVar9 = sym.lpass_cdc_rx_macro_get_data(iVar8,auStack_1d0,&puStack_1d8,0x8001c78);
        puVar3 = puStack_1d8;
        if ((uVar9 & 1) != 0) {
            iVar10 = puStack_1d8[0x126];
            if ((iVar10 != 0) && (*(puStack_1d8 + 0x59) != '\0')) {
                cVar2 = *(auVar11._8_8_ + 0x48);
                *(puStack_1d8 + 0x54) = cVar2 != '\0';
                if (cVar2 == '\0') {
                    snd_soc_component_update_bits(iVar8,0x145c,0xd,0);
                    snd_soc_component_update_bits(iVar8,0x151c,0xd,0);
                    snd_soc_component_update_bits(iVar8,0x1400,0x80,0);
                    snd_soc_component_update_bits(iVar8,0x14c0,0x80,0);
                    snd_soc_component_update_bits(iVar8,0x1004,1,0);
                    iVar8 = puVar3[0x126];
                    clk_disable(iVar8);
                    clk_unprepare(iVar8);
                }
                else {
                    uVar6 = clk_prepare(iVar10);
                    if (uVar6 == 0) {
                        uVar6 = clk_enable(iVar10);
                        if (uVar6 != 0) {
                            clk_unprepare(iVar10);
                            goto code_r0x080177bc;
                        }
                    }
                    else {
code_r0x080177bc:
                        uVar9 = uVar6;
                        if (uVar6 < 0) {
                            iVar5 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_filter_enable_put._rs.326,
                                                 "lpass_cdc_rx_macro_fir_filter_enable_put");
                            if (iVar5 != 0) {
                                _dev_err(*puVar3,"%s:hifi_fir_clk enable failed\n",
                                         "lpass_cdc_rx_macro_fir_filter_enable_put");
                            }
                            goto code_r0x080178e4;
                        }
                    }
                    snd_soc_component_write(iVar8,0x1460,*(puVar3 + 10));
                    snd_soc_component_write(iVar8,0x1520,*(puVar3 + 0x51));
                    snd_soc_component_update_bits(iVar8,0x1004,1,1);
                    snd_soc_component_update_bits(iVar8,0x1400,0x80,0x80);
                    snd_soc_component_update_bits(iVar8,0x14c0,0x80,0x80);
                    snd_soc_component_update_bits(iVar8,0x145c,0xd,5);
                    snd_soc_component_update_bits(iVar8,0x151c,0xd,5);
                }
            }
            uVar9 = 0;
            goto code_r0x080178e4;
        }
    }
    uVar9 = 0xffffffea;
code_r0x080178e4:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_1c8) {
        return uVar9;
    }
    auVar11 = __stack_chk_fail();
    *extraout_x18_05 = sym.lpass_cdc_rx_macro_get_hph_hd2_mode;
    pcStack_1f8 = sym.lpass_cdc_rx_macro_get_hph_hd2_mode;
    iVar10 = sp_el0;
    iStack_208 = *(iVar10 + 0x5e0);
    iStack_218 = 0;
    pppuStack_200 = &pppuStack_1c0;
    iStack_1f0 = iVar8;
    uVar9 = sym.lpass_cdc_rx_macro_get_data(*(auVar11._0_8_ + 0x80),auStack_210,&iStack_218,0x8001ca1);
    if ((uVar9 & 1) == 0) {
        uVar9 = 0xffffffea;
    }
    else {
        uVar9 = 0;
        *(auVar11._8_8_ + 0x48) = *(iStack_218 + 0x5d);
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_208) {
        return uVar9;
    }
    auVar12 = __stack_chk_fail(uVar9);
    *extraout_x18_06 = sym.lpass_cdc_rx_macro_put_hph_hd2_mode;
    pcStack_238 = sym.lpass_cdc_rx_macro_put_hph_hd2_mode;
    iVar8 = sp_el0;
    iStack_248 = *(iVar8 + 0x5e0);
    iStack_258 = 0;
    pppuStack_240 = &pppuStack_200;
    iStack_230 = auVar11._8_8_;
    uVar9 = sym.lpass_cdc_rx_macro_get_data(*(auVar12._0_8_ + 0x80),auStack_250,&iStack_258,0x800285c);
    if ((uVar9 & 1) == 0) {
        uVar9 = 0xffffffea;
    }
    else {
        uVar9 = 0;
        *(iStack_258 + 0x5d) = *(auVar12._8_8_ + 0x48) != 0;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_248) {
        return uVar9;
    }
    auVar11 = __stack_chk_fail(uVar9);
    *extraout_x18_07 = sym.lpass_cdc_rx_macro_get_hph_pwr_mode;
    pcStack_278 = sym.lpass_cdc_rx_macro_get_hph_pwr_mode;
    iVar8 = sp_el0;
    iStack_288 = *(iVar8 + 0x5e0);
    iStack_298 = 0;
    pppuStack_280 = &pppuStack_240;
    iStack_270 = auVar12._8_8_;
    uVar9 = sym.lpass_cdc_rx_macro_get_data(*(auVar11._0_8_ + 0x80),auStack_290,&iStack_298,0x80016e4);
    if ((uVar9 & 1) == 0) {
        uVar9 = 0xffffffea;
    }
    else {
        uVar9 = 0;
        *(auVar11._8_8_ + 0x48) = *(iStack_298 + 0x5c);
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_288) {
        return uVar9;
    }
    auVar12 = __stack_chk_fail(uVar9);
    *extraout_x18_08 = sym.lpass_cdc_rx_macro_put_hph_pwr_mode;
    pcStack_2b8 = sym.lpass_cdc_rx_macro_put_hph_pwr_mode;
    iVar8 = sp_el0;
    iStack_2c8 = *(iVar8 + 0x5e0);
    iStack_2d8 = 0;
    pppuStack_2c0 = &pppuStack_280;
    iStack_2b0 = auVar11._8_8_;
    uVar9 = sym.lpass_cdc_rx_macro_get_data(*(auVar12._0_8_ + 0x80),auStack_2d0,&iStack_2d8,0x80015dc);
    if ((uVar9 & 1) == 0) {
        uVar9 = 0xffffffea;
    }
    else {
        uVar9 = 0;
        *(iStack_2d8 + 0x5c) = *(auVar12._8_8_ + 0x48) != 0;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_2c8) {
        return uVar9;
    }
    auVar11 = __stack_chk_fail(uVar9);
    *extraout_x18_09 = sym.lpass_cdc_rx_macro_vbat_bcl_gsm_mode_func_get;
    uVar6 = snd_soc_component_read(*(auVar11._0_8_ + 0x80),0x1284);
    *(auVar11._8_8_ + 0x48) = uVar6 >> 2 & 1;
    return 0;
}


// ===== sym.lpass_cdc_rx_macro_hph_idle_detect_get @ 0x0801740c (size 144) =====

int sym.lpass_cdc_rx_macro_hph_idle_detect_get(int64_t arg1,int64_t arg2)

{
    char cVar1;
    ulong *puVar2;
    int iVar3;
    int iVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong *extraout_x18_07;
    ulong *extraout_x18_08;
    int64_t iVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    uchar auVar10 [16];
    int64_t iStack_288;
    uchar auStack_280 [8];
    int64_t iStack_278;
    ulong ***pppuStack_270;
    code *pcStack_268;
    int64_t iStack_260;
    int64_t iStack_248;
    uchar auStack_240 [8];
    int64_t iStack_238;
    ulong ***pppuStack_230;
    code *pcStack_228;
    int64_t iStack_220;
    int64_t iStack_208;
    uchar auStack_200 [8];
    int64_t iStack_1f8;
    ulong ***pppuStack_1f0;
    code *pcStack_1e8;
    int64_t iStack_1e0;
    int64_t iStack_1c8;
    uchar auStack_1c0 [8];
    int64_t iStack_1b8;
    ulong ***pppuStack_1b0;
    code *pcStack_1a8;
    int64_t iStack_1a0;
    ulong *puStack_188;
    uchar auStack_180 [8];
    int64_t iStack_178;
    ulong ***pppuStack_170;
    code *pcStack_168;
    int64_t iStack_138;
    uchar auStack_130 [8];
    int64_t iStack_128;
    ulong ***pppuStack_120;
    code *pcStack_118;
    int64_t iStack_110;
    int64_t iStack_f8;
    uchar auStack_f0 [8];
    int64_t iStack_e8;
    uchar ***pppuStack_e0;
    code *pcStack_d8;
    int64_t iStack_d0;
    int64_t iStack_b8;
    uchar auStack_b0 [8];
    int64_t iStack_a8;
    uchar **ppuStack_a0;
    code *pcStack_98;
    int64_t iStack_90;
    uchar auStack_78 [8];
    int64_t iStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    int64_t iStack_50;
    uchar auStack_38 [8];
    int64_t iStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_28 = *(iVar7 + 0x5e0);
    iStack_30 = 0;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(arg1 + 0x80),auStack_38,&iStack_30,0x800127c);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(arg2 + 0x48) = *(iStack_30 + 0x1e1);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_28) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail(iVar3);
    *extraout_x18 = sym.lpass_cdc_rx_macro_hph_idle_detect_put;
    pcStack_58 = sym.lpass_cdc_rx_macro_hph_idle_detect_put;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    iStack_70 = 0;
    puStack_60 = &stack0xffffffffffffffe0;
    iStack_50 = arg2;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar9._0_8_ + 0x80),auStack_78,&iStack_70,0x80023d6);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(iStack_70 + 0x1e1) = *(auVar9._8_8_ + 0x48);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_68) {
        return iVar3;
    }
    auVar10 = __stack_chk_fail(iVar3);
    *extraout_x18_00 = sym.lpass_cdc_rx_macro_get_ear_mode;
    pcStack_98 = sym.lpass_cdc_rx_macro_get_ear_mode;
    iVar7 = sp_el0;
    iStack_a8 = *(iVar7 + 0x5e0);
    iStack_b8 = 0;
    ppuStack_a0 = &puStack_60;
    iStack_90 = auVar9._8_8_;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar10._0_8_ + 0x80),auStack_b0,&iStack_b8,0x800283c);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(auVar10._8_8_ + 0x48) = *(iStack_b8 + 0x53);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_a8) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail(iVar3);
    iVar8 = auVar9._8_8_;
    *extraout_x18_01 = sym.lpass_cdc_rx_macro_put_ear_mode;
    pcStack_d8 = sym.lpass_cdc_rx_macro_put_ear_mode;
    iVar7 = sp_el0;
    iStack_e8 = *(iVar7 + 0x5e0);
    iStack_f8 = 0;
    pppuStack_e0 = &ppuStack_a0;
    iStack_d0 = auVar10._8_8_;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar9._0_8_ + 0x80),auStack_f0,&iStack_f8,0x8001de8);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(iStack_f8 + 0x53) = *(iVar8 + 0x48) != 0;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_e8) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail(iVar3);
    *extraout_x18_02 = sym.lpass_cdc_rx_macro_fir_filter_enable_get;
    pcStack_118 = sym.lpass_cdc_rx_macro_fir_filter_enable_get;
    iVar7 = sp_el0;
    iStack_128 = *(iVar7 + 0x5e0);
    iVar7 = *(auVar9._0_8_ + 0x80);
    iStack_138 = 0;
    pppuStack_120 = &pppuStack_e0;
    iStack_110 = iVar8;
    if (iVar7 == 0) {
        iVar3 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_filter_enable_get._rs,
                             "lpass_cdc_rx_macro_fir_filter_enable_get");
        if (iVar3 != 0) {
            _printk(0x800180e,"lpass_cdc_rx_macro_fir_filter_enable_get");
        }
code_r0x080176cc:
        iVar3 = -0x16;
    }
    else {
        uVar6 = sym.lpass_cdc_rx_macro_get_data(iVar7,auStack_130,&iStack_138,0x8001ba9);
        if ((uVar6 & 1) == 0) goto code_r0x080176cc;
        iVar3 = 0;
        *(auVar9._8_8_ + 0x48) = *(iStack_138 + 0x54);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_128) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail(iVar3);
    *extraout_x18_03 = sym.lpass_cdc_rx_macro_fir_filter_enable_put;
    pcStack_168 = sym.lpass_cdc_rx_macro_fir_filter_enable_put;
    iVar7 = sp_el0;
    iStack_178 = *(iVar7 + 0x5e0);
    iVar7 = *(auVar9._0_8_ + 0x80);
    puStack_188 = NULL;
    pppuStack_170 = &pppuStack_120;
    if (iVar7 == 0) {
        iVar3 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_filter_enable_put._rs,
                             "lpass_cdc_rx_macro_fir_filter_enable_put");
        if (iVar3 != 0) {
            _printk(0x800180e,"lpass_cdc_rx_macro_fir_filter_enable_put");
            iVar3 = -0x16;
            goto code_r0x080178e4;
        }
    }
    else {
        uVar6 = sym.lpass_cdc_rx_macro_get_data(iVar7,auStack_180,&puStack_188,0x8001c78);
        puVar2 = puStack_188;
        if ((uVar6 & 1) != 0) {
            iVar8 = puStack_188[0x126];
            if ((iVar8 != 0) && (*(puStack_188 + 0x59) != '\0')) {
                cVar1 = *(auVar9._8_8_ + 0x48);
                *(puStack_188 + 0x54) = cVar1 != '\0';
                if (cVar1 == '\0') {
                    snd_soc_component_update_bits(iVar7,0x145c,0xd,0);
                    snd_soc_component_update_bits(iVar7,0x151c,0xd,0);
                    snd_soc_component_update_bits(iVar7,0x1400,0x80,0);
                    snd_soc_component_update_bits(iVar7,0x14c0,0x80,0);
                    snd_soc_component_update_bits(iVar7,0x1004,1,0);
                    iVar7 = puVar2[0x126];
                    clk_disable(iVar7);
                    clk_unprepare(iVar7);
                }
                else {
                    iVar3 = clk_prepare(iVar8);
                    if (iVar3 == 0) {
                        iVar3 = clk_enable(iVar8);
                        if (iVar3 != 0) {
                            clk_unprepare(iVar8);
                            goto code_r0x080177bc;
                        }
                    }
                    else {
code_r0x080177bc:
                        if (iVar3 < 0) {
                            iVar4 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_filter_enable_put._rs.326,
                                                 "lpass_cdc_rx_macro_fir_filter_enable_put");
                            if (iVar4 != 0) {
                                _dev_err(*puVar2,"%s:hifi_fir_clk enable failed\n",
                                         "lpass_cdc_rx_macro_fir_filter_enable_put");
                            }
                            goto code_r0x080178e4;
                        }
                    }
                    snd_soc_component_write(iVar7,0x1460,*(puVar2 + 10));
                    snd_soc_component_write(iVar7,0x1520,*(puVar2 + 0x51));
                    snd_soc_component_update_bits(iVar7,0x1004,1,1);
                    snd_soc_component_update_bits(iVar7,0x1400,0x80,0x80);
                    snd_soc_component_update_bits(iVar7,0x14c0,0x80,0x80);
                    snd_soc_component_update_bits(iVar7,0x145c,0xd,5);
                    snd_soc_component_update_bits(iVar7,0x151c,0xd,5);
                }
            }
            iVar3 = 0;
            goto code_r0x080178e4;
        }
    }
    iVar3 = -0x16;
code_r0x080178e4:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_178) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail();
    *extraout_x18_04 = sym.lpass_cdc_rx_macro_get_hph_hd2_mode;
    pcStack_1a8 = sym.lpass_cdc_rx_macro_get_hph_hd2_mode;
    iVar8 = sp_el0;
    iStack_1b8 = *(iVar8 + 0x5e0);
    iStack_1c8 = 0;
    pppuStack_1b0 = &pppuStack_170;
    iStack_1a0 = iVar7;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar9._0_8_ + 0x80),auStack_1c0,&iStack_1c8,0x8001ca1);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(auVar9._8_8_ + 0x48) = *(iStack_1c8 + 0x5d);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_1b8) {
        return iVar3;
    }
    auVar10 = __stack_chk_fail(iVar3);
    *extraout_x18_05 = sym.lpass_cdc_rx_macro_put_hph_hd2_mode;
    pcStack_1e8 = sym.lpass_cdc_rx_macro_put_hph_hd2_mode;
    iVar7 = sp_el0;
    iStack_1f8 = *(iVar7 + 0x5e0);
    iStack_208 = 0;
    pppuStack_1f0 = &pppuStack_1b0;
    iStack_1e0 = auVar9._8_8_;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar10._0_8_ + 0x80),auStack_200,&iStack_208,0x800285c);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(iStack_208 + 0x5d) = *(auVar10._8_8_ + 0x48) != 0;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_1f8) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail(iVar3);
    *extraout_x18_06 = sym.lpass_cdc_rx_macro_get_hph_pwr_mode;
    pcStack_228 = sym.lpass_cdc_rx_macro_get_hph_pwr_mode;
    iVar7 = sp_el0;
    iStack_238 = *(iVar7 + 0x5e0);
    iStack_248 = 0;
    pppuStack_230 = &pppuStack_1f0;
    iStack_220 = auVar10._8_8_;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar9._0_8_ + 0x80),auStack_240,&iStack_248,0x80016e4);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(auVar9._8_8_ + 0x48) = *(iStack_248 + 0x5c);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_238) {
        return iVar3;
    }
    auVar10 = __stack_chk_fail(iVar3);
    *extraout_x18_07 = sym.lpass_cdc_rx_macro_put_hph_pwr_mode;
    pcStack_268 = sym.lpass_cdc_rx_macro_put_hph_pwr_mode;
    iVar7 = sp_el0;
    iStack_278 = *(iVar7 + 0x5e0);
    iStack_288 = 0;
    pppuStack_270 = &pppuStack_230;
    iStack_260 = auVar9._8_8_;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar10._0_8_ + 0x80),auStack_280,&iStack_288,0x80015dc);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(iStack_288 + 0x5c) = *(auVar10._8_8_ + 0x48) != 0;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_278) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail(iVar3);
    *extraout_x18_08 = sym.lpass_cdc_rx_macro_vbat_bcl_gsm_mode_func_get;
    uVar5 = snd_soc_component_read(*(auVar9._0_8_ + 0x80),0x1284);
    *(auVar9._8_8_ + 0x48) = uVar5 >> 2 & 1;
    return 0;
}


// ===== sym.lpass_cdc_rx_macro_hph_idle_detect_put @ 0x0801749c (size 144) =====

int sym.lpass_cdc_rx_macro_hph_idle_detect_put(int64_t arg1,int64_t arg2)

{
    char cVar1;
    ulong *puVar2;
    int iVar3;
    int iVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong *extraout_x18_07;
    int64_t iVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    uchar auVar10 [16];
    int64_t iStack_248;
    uchar auStack_240 [8];
    int64_t iStack_238;
    ulong ***pppuStack_230;
    code *pcStack_228;
    int64_t iStack_220;
    int64_t iStack_208;
    uchar auStack_200 [8];
    int64_t iStack_1f8;
    ulong ***pppuStack_1f0;
    code *pcStack_1e8;
    int64_t iStack_1e0;
    int64_t iStack_1c8;
    uchar auStack_1c0 [8];
    int64_t iStack_1b8;
    ulong ***pppuStack_1b0;
    code *pcStack_1a8;
    int64_t iStack_1a0;
    int64_t iStack_188;
    uchar auStack_180 [8];
    int64_t iStack_178;
    ulong ***pppuStack_170;
    code *pcStack_168;
    int64_t iStack_160;
    ulong *puStack_148;
    uchar auStack_140 [8];
    int64_t iStack_138;
    ulong ***pppuStack_130;
    code *pcStack_128;
    int64_t iStack_f8;
    uchar auStack_f0 [8];
    int64_t iStack_e8;
    uchar ***pppuStack_e0;
    code *pcStack_d8;
    int64_t iStack_d0;
    int64_t iStack_b8;
    uchar auStack_b0 [8];
    int64_t iStack_a8;
    uchar **ppuStack_a0;
    code *pcStack_98;
    int64_t iStack_90;
    int64_t iStack_78;
    uchar auStack_70 [8];
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    int64_t iStack_50;
    uchar auStack_38 [8];
    int64_t iStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_28 = *(iVar7 + 0x5e0);
    iStack_30 = 0;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(arg1 + 0x80),auStack_38,&iStack_30,0x80023d6);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(iStack_30 + 0x1e1) = *(arg2 + 0x48);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_28) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail(iVar3);
    *extraout_x18 = sym.lpass_cdc_rx_macro_get_ear_mode;
    pcStack_58 = sym.lpass_cdc_rx_macro_get_ear_mode;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    iStack_78 = 0;
    puStack_60 = &stack0xffffffffffffffe0;
    iStack_50 = arg2;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar9._0_8_ + 0x80),auStack_70,&iStack_78,0x800283c);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(auVar9._8_8_ + 0x48) = *(iStack_78 + 0x53);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_68) {
        return iVar3;
    }
    auVar10 = __stack_chk_fail(iVar3);
    iVar8 = auVar10._8_8_;
    *extraout_x18_00 = sym.lpass_cdc_rx_macro_put_ear_mode;
    pcStack_98 = sym.lpass_cdc_rx_macro_put_ear_mode;
    iVar7 = sp_el0;
    iStack_a8 = *(iVar7 + 0x5e0);
    iStack_b8 = 0;
    ppuStack_a0 = &puStack_60;
    iStack_90 = auVar9._8_8_;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar10._0_8_ + 0x80),auStack_b0,&iStack_b8,0x8001de8);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(iStack_b8 + 0x53) = *(iVar8 + 0x48) != 0;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_a8) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail(iVar3);
    *extraout_x18_01 = sym.lpass_cdc_rx_macro_fir_filter_enable_get;
    pcStack_d8 = sym.lpass_cdc_rx_macro_fir_filter_enable_get;
    iVar7 = sp_el0;
    iStack_e8 = *(iVar7 + 0x5e0);
    iVar7 = *(auVar9._0_8_ + 0x80);
    iStack_f8 = 0;
    pppuStack_e0 = &ppuStack_a0;
    iStack_d0 = iVar8;
    if (iVar7 == 0) {
        iVar3 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_filter_enable_get._rs,
                             "lpass_cdc_rx_macro_fir_filter_enable_get");
        if (iVar3 != 0) {
            _printk(0x800180e,"lpass_cdc_rx_macro_fir_filter_enable_get");
        }
code_r0x080176cc:
        iVar3 = -0x16;
    }
    else {
        uVar6 = sym.lpass_cdc_rx_macro_get_data(iVar7,auStack_f0,&iStack_f8,0x8001ba9);
        if ((uVar6 & 1) == 0) goto code_r0x080176cc;
        iVar3 = 0;
        *(auVar9._8_8_ + 0x48) = *(iStack_f8 + 0x54);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_e8) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail(iVar3);
    *extraout_x18_02 = sym.lpass_cdc_rx_macro_fir_filter_enable_put;
    pcStack_128 = sym.lpass_cdc_rx_macro_fir_filter_enable_put;
    iVar7 = sp_el0;
    iStack_138 = *(iVar7 + 0x5e0);
    iVar7 = *(auVar9._0_8_ + 0x80);
    puStack_148 = NULL;
    pppuStack_130 = &pppuStack_e0;
    if (iVar7 == 0) {
        iVar3 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_filter_enable_put._rs,
                             "lpass_cdc_rx_macro_fir_filter_enable_put");
        if (iVar3 != 0) {
            _printk(0x800180e,"lpass_cdc_rx_macro_fir_filter_enable_put");
            iVar3 = -0x16;
            goto code_r0x080178e4;
        }
    }
    else {
        uVar6 = sym.lpass_cdc_rx_macro_get_data(iVar7,auStack_140,&puStack_148,0x8001c78);
        puVar2 = puStack_148;
        if ((uVar6 & 1) != 0) {
            iVar8 = puStack_148[0x126];
            if ((iVar8 != 0) && (*(puStack_148 + 0x59) != '\0')) {
                cVar1 = *(auVar9._8_8_ + 0x48);
                *(puStack_148 + 0x54) = cVar1 != '\0';
                if (cVar1 == '\0') {
                    snd_soc_component_update_bits(iVar7,0x145c,0xd,0);
                    snd_soc_component_update_bits(iVar7,0x151c,0xd,0);
                    snd_soc_component_update_bits(iVar7,0x1400,0x80,0);
                    snd_soc_component_update_bits(iVar7,0x14c0,0x80,0);
                    snd_soc_component_update_bits(iVar7,0x1004,1,0);
                    iVar7 = puVar2[0x126];
                    clk_disable(iVar7);
                    clk_unprepare(iVar7);
                }
                else {
                    iVar3 = clk_prepare(iVar8);
                    if (iVar3 == 0) {
                        iVar3 = clk_enable(iVar8);
                        if (iVar3 != 0) {
                            clk_unprepare(iVar8);
                            goto code_r0x080177bc;
                        }
                    }
                    else {
code_r0x080177bc:
                        if (iVar3 < 0) {
                            iVar4 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_filter_enable_put._rs.326,
                                                 "lpass_cdc_rx_macro_fir_filter_enable_put");
                            if (iVar4 != 0) {
                                _dev_err(*puVar2,"%s:hifi_fir_clk enable failed\n",
                                         "lpass_cdc_rx_macro_fir_filter_enable_put");
                            }
                            goto code_r0x080178e4;
                        }
                    }
                    snd_soc_component_write(iVar7,0x1460,*(puVar2 + 10));
                    snd_soc_component_write(iVar7,0x1520,*(puVar2 + 0x51));
                    snd_soc_component_update_bits(iVar7,0x1004,1,1);
                    snd_soc_component_update_bits(iVar7,0x1400,0x80,0x80);
                    snd_soc_component_update_bits(iVar7,0x14c0,0x80,0x80);
                    snd_soc_component_update_bits(iVar7,0x145c,0xd,5);
                    snd_soc_component_update_bits(iVar7,0x151c,0xd,5);
                }
            }
            iVar3 = 0;
            goto code_r0x080178e4;
        }
    }
    iVar3 = -0x16;
code_r0x080178e4:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_138) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail();
    *extraout_x18_03 = sym.lpass_cdc_rx_macro_get_hph_hd2_mode;
    pcStack_168 = sym.lpass_cdc_rx_macro_get_hph_hd2_mode;
    iVar8 = sp_el0;
    iStack_178 = *(iVar8 + 0x5e0);
    iStack_188 = 0;
    pppuStack_170 = &pppuStack_130;
    iStack_160 = iVar7;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar9._0_8_ + 0x80),auStack_180,&iStack_188,0x8001ca1);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(auVar9._8_8_ + 0x48) = *(iStack_188 + 0x5d);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_178) {
        return iVar3;
    }
    auVar10 = __stack_chk_fail(iVar3);
    *extraout_x18_04 = sym.lpass_cdc_rx_macro_put_hph_hd2_mode;
    pcStack_1a8 = sym.lpass_cdc_rx_macro_put_hph_hd2_mode;
    iVar7 = sp_el0;
    iStack_1b8 = *(iVar7 + 0x5e0);
    iStack_1c8 = 0;
    pppuStack_1b0 = &pppuStack_170;
    iStack_1a0 = auVar9._8_8_;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar10._0_8_ + 0x80),auStack_1c0,&iStack_1c8,0x800285c);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(iStack_1c8 + 0x5d) = *(auVar10._8_8_ + 0x48) != 0;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_1b8) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail(iVar3);
    *extraout_x18_05 = sym.lpass_cdc_rx_macro_get_hph_pwr_mode;
    pcStack_1e8 = sym.lpass_cdc_rx_macro_get_hph_pwr_mode;
    iVar7 = sp_el0;
    iStack_1f8 = *(iVar7 + 0x5e0);
    iStack_208 = 0;
    pppuStack_1f0 = &pppuStack_1b0;
    iStack_1e0 = auVar10._8_8_;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar9._0_8_ + 0x80),auStack_200,&iStack_208,0x80016e4);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(auVar9._8_8_ + 0x48) = *(iStack_208 + 0x5c);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_1f8) {
        return iVar3;
    }
    auVar10 = __stack_chk_fail(iVar3);
    *extraout_x18_06 = sym.lpass_cdc_rx_macro_put_hph_pwr_mode;
    pcStack_228 = sym.lpass_cdc_rx_macro_put_hph_pwr_mode;
    iVar7 = sp_el0;
    iStack_238 = *(iVar7 + 0x5e0);
    iStack_248 = 0;
    pppuStack_230 = &pppuStack_1f0;
    iStack_220 = auVar9._8_8_;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar10._0_8_ + 0x80),auStack_240,&iStack_248,0x80015dc);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(iStack_248 + 0x5c) = *(auVar10._8_8_ + 0x48) != 0;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_238) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail(iVar3);
    *extraout_x18_07 = sym.lpass_cdc_rx_macro_vbat_bcl_gsm_mode_func_get;
    uVar5 = snd_soc_component_read(*(auVar9._0_8_ + 0x80),0x1284);
    *(auVar9._8_8_ + 0x48) = uVar5 >> 2 & 1;
    return 0;
}


// ===== sym.lpass_cdc_rx_macro_get_ear_mode @ 0x0801752c (size 144) =====

int sym.lpass_cdc_rx_macro_get_ear_mode(int64_t arg1,int64_t arg2)

{
    char cVar1;
    ulong *puVar2;
    int iVar3;
    int iVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    int64_t iVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    uchar auVar10 [16];
    int64_t iStack_208;
    uchar auStack_200 [8];
    int64_t iStack_1f8;
    ulong ***pppuStack_1f0;
    code *pcStack_1e8;
    int64_t iStack_1e0;
    int64_t iStack_1c8;
    uchar auStack_1c0 [8];
    int64_t iStack_1b8;
    ulong ***pppuStack_1b0;
    code *pcStack_1a8;
    int64_t iStack_1a0;
    int64_t iStack_188;
    uchar auStack_180 [8];
    int64_t iStack_178;
    ulong ***pppuStack_170;
    code *pcStack_168;
    int64_t iStack_160;
    int64_t iStack_148;
    uchar auStack_140 [8];
    int64_t iStack_138;
    ulong ***pppuStack_130;
    code *pcStack_128;
    int64_t iStack_120;
    ulong *puStack_108;
    uchar auStack_100 [8];
    int64_t iStack_f8;
    uchar ***pppuStack_f0;
    code *pcStack_e8;
    int64_t iStack_b8;
    uchar auStack_b0 [8];
    int64_t iStack_a8;
    uchar **ppuStack_a0;
    code *pcStack_98;
    int64_t iStack_90;
    int64_t iStack_78;
    uchar auStack_70 [8];
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    int64_t iStack_50;
    int64_t iStack_38;
    uchar auStack_30 [8];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_28 = *(iVar7 + 0x5e0);
    iStack_38 = 0;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(arg1 + 0x80),auStack_30,&iStack_38,0x800283c);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(arg2 + 0x48) = *(iStack_38 + 0x53);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_28) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail(iVar3);
    iVar8 = auVar9._8_8_;
    *extraout_x18 = sym.lpass_cdc_rx_macro_put_ear_mode;
    pcStack_58 = sym.lpass_cdc_rx_macro_put_ear_mode;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    iStack_78 = 0;
    puStack_60 = &stack0xffffffffffffffe0;
    iStack_50 = arg2;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar9._0_8_ + 0x80),auStack_70,&iStack_78,0x8001de8);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(iStack_78 + 0x53) = *(iVar8 + 0x48) != 0;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_68) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail(iVar3);
    *extraout_x18_00 = sym.lpass_cdc_rx_macro_fir_filter_enable_get;
    pcStack_98 = sym.lpass_cdc_rx_macro_fir_filter_enable_get;
    iVar7 = sp_el0;
    iStack_a8 = *(iVar7 + 0x5e0);
    iVar7 = *(auVar9._0_8_ + 0x80);
    iStack_b8 = 0;
    ppuStack_a0 = &puStack_60;
    iStack_90 = iVar8;
    if (iVar7 == 0) {
        iVar3 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_filter_enable_get._rs,
                             "lpass_cdc_rx_macro_fir_filter_enable_get");
        if (iVar3 != 0) {
            _printk(0x800180e,"lpass_cdc_rx_macro_fir_filter_enable_get");
        }
code_r0x080176cc:
        iVar3 = -0x16;
    }
    else {
        uVar6 = sym.lpass_cdc_rx_macro_get_data(iVar7,auStack_b0,&iStack_b8,0x8001ba9);
        if ((uVar6 & 1) == 0) goto code_r0x080176cc;
        iVar3 = 0;
        *(auVar9._8_8_ + 0x48) = *(iStack_b8 + 0x54);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_a8) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail(iVar3);
    *extraout_x18_01 = sym.lpass_cdc_rx_macro_fir_filter_enable_put;
    pcStack_e8 = sym.lpass_cdc_rx_macro_fir_filter_enable_put;
    iVar7 = sp_el0;
    iStack_f8 = *(iVar7 + 0x5e0);
    iVar7 = *(auVar9._0_8_ + 0x80);
    puStack_108 = NULL;
    pppuStack_f0 = &ppuStack_a0;
    if (iVar7 == 0) {
        iVar3 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_filter_enable_put._rs,
                             "lpass_cdc_rx_macro_fir_filter_enable_put");
        if (iVar3 != 0) {
            _printk(0x800180e,"lpass_cdc_rx_macro_fir_filter_enable_put");
            iVar3 = -0x16;
            goto code_r0x080178e4;
        }
    }
    else {
        uVar6 = sym.lpass_cdc_rx_macro_get_data(iVar7,auStack_100,&puStack_108,0x8001c78);
        puVar2 = puStack_108;
        if ((uVar6 & 1) != 0) {
            iVar8 = puStack_108[0x126];
            if ((iVar8 != 0) && (*(puStack_108 + 0x59) != '\0')) {
                cVar1 = *(auVar9._8_8_ + 0x48);
                *(puStack_108 + 0x54) = cVar1 != '\0';
                if (cVar1 == '\0') {
                    snd_soc_component_update_bits(iVar7,0x145c,0xd,0);
                    snd_soc_component_update_bits(iVar7,0x151c,0xd,0);
                    snd_soc_component_update_bits(iVar7,0x1400,0x80,0);
                    snd_soc_component_update_bits(iVar7,0x14c0,0x80,0);
                    snd_soc_component_update_bits(iVar7,0x1004,1,0);
                    iVar7 = puVar2[0x126];
                    clk_disable(iVar7);
                    clk_unprepare(iVar7);
                }
                else {
                    iVar3 = clk_prepare(iVar8);
                    if (iVar3 == 0) {
                        iVar3 = clk_enable(iVar8);
                        if (iVar3 != 0) {
                            clk_unprepare(iVar8);
                            goto code_r0x080177bc;
                        }
                    }
                    else {
code_r0x080177bc:
                        if (iVar3 < 0) {
                            iVar4 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_filter_enable_put._rs.326,
                                                 "lpass_cdc_rx_macro_fir_filter_enable_put");
                            if (iVar4 != 0) {
                                _dev_err(*puVar2,"%s:hifi_fir_clk enable failed\n",
                                         "lpass_cdc_rx_macro_fir_filter_enable_put");
                            }
                            goto code_r0x080178e4;
                        }
                    }
                    snd_soc_component_write(iVar7,0x1460,*(puVar2 + 10));
                    snd_soc_component_write(iVar7,0x1520,*(puVar2 + 0x51));
                    snd_soc_component_update_bits(iVar7,0x1004,1,1);
                    snd_soc_component_update_bits(iVar7,0x1400,0x80,0x80);
                    snd_soc_component_update_bits(iVar7,0x14c0,0x80,0x80);
                    snd_soc_component_update_bits(iVar7,0x145c,0xd,5);
                    snd_soc_component_update_bits(iVar7,0x151c,0xd,5);
                }
            }
            iVar3 = 0;
            goto code_r0x080178e4;
        }
    }
    iVar3 = -0x16;
code_r0x080178e4:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_f8) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail();
    *extraout_x18_02 = sym.lpass_cdc_rx_macro_get_hph_hd2_mode;
    pcStack_128 = sym.lpass_cdc_rx_macro_get_hph_hd2_mode;
    iVar8 = sp_el0;
    iStack_138 = *(iVar8 + 0x5e0);
    iStack_148 = 0;
    pppuStack_130 = &pppuStack_f0;
    iStack_120 = iVar7;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar9._0_8_ + 0x80),auStack_140,&iStack_148,0x8001ca1);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(auVar9._8_8_ + 0x48) = *(iStack_148 + 0x5d);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_138) {
        return iVar3;
    }
    auVar10 = __stack_chk_fail(iVar3);
    *extraout_x18_03 = sym.lpass_cdc_rx_macro_put_hph_hd2_mode;
    pcStack_168 = sym.lpass_cdc_rx_macro_put_hph_hd2_mode;
    iVar7 = sp_el0;
    iStack_178 = *(iVar7 + 0x5e0);
    iStack_188 = 0;
    pppuStack_170 = &pppuStack_130;
    iStack_160 = auVar9._8_8_;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar10._0_8_ + 0x80),auStack_180,&iStack_188,0x800285c);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(iStack_188 + 0x5d) = *(auVar10._8_8_ + 0x48) != 0;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_178) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail(iVar3);
    *extraout_x18_04 = sym.lpass_cdc_rx_macro_get_hph_pwr_mode;
    pcStack_1a8 = sym.lpass_cdc_rx_macro_get_hph_pwr_mode;
    iVar7 = sp_el0;
    iStack_1b8 = *(iVar7 + 0x5e0);
    iStack_1c8 = 0;
    pppuStack_1b0 = &pppuStack_170;
    iStack_1a0 = auVar10._8_8_;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar9._0_8_ + 0x80),auStack_1c0,&iStack_1c8,0x80016e4);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(auVar9._8_8_ + 0x48) = *(iStack_1c8 + 0x5c);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_1b8) {
        return iVar3;
    }
    auVar10 = __stack_chk_fail(iVar3);
    *extraout_x18_05 = sym.lpass_cdc_rx_macro_put_hph_pwr_mode;
    pcStack_1e8 = sym.lpass_cdc_rx_macro_put_hph_pwr_mode;
    iVar7 = sp_el0;
    iStack_1f8 = *(iVar7 + 0x5e0);
    iStack_208 = 0;
    pppuStack_1f0 = &pppuStack_1b0;
    iStack_1e0 = auVar9._8_8_;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar10._0_8_ + 0x80),auStack_200,&iStack_208,0x80015dc);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(iStack_208 + 0x5c) = *(auVar10._8_8_ + 0x48) != 0;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_1f8) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail(iVar3);
    *extraout_x18_06 = sym.lpass_cdc_rx_macro_vbat_bcl_gsm_mode_func_get;
    uVar5 = snd_soc_component_read(*(auVar9._0_8_ + 0x80),0x1284);
    *(auVar9._8_8_ + 0x48) = uVar5 >> 2 & 1;
    return 0;
}


// ===== sym.lpass_cdc_rx_macro_put_ear_mode @ 0x080175bc (size 152) =====

int sym.lpass_cdc_rx_macro_put_ear_mode(int64_t arg1,int64_t arg2)

{
    char cVar1;
    ulong *puVar2;
    int iVar3;
    int iVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    int64_t iVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    uchar auVar10 [16];
    int64_t iStack_1c8;
    uchar auStack_1c0 [8];
    int64_t iStack_1b8;
    ulong ***pppuStack_1b0;
    code *pcStack_1a8;
    int64_t iStack_1a0;
    int64_t iStack_188;
    uchar auStack_180 [8];
    int64_t iStack_178;
    ulong ***pppuStack_170;
    code *pcStack_168;
    int64_t iStack_160;
    int64_t iStack_148;
    uchar auStack_140 [8];
    int64_t iStack_138;
    ulong ***pppuStack_130;
    code *pcStack_128;
    int64_t iStack_120;
    int64_t iStack_108;
    uchar auStack_100 [8];
    int64_t iStack_f8;
    uchar ***pppuStack_f0;
    code *pcStack_e8;
    int64_t iStack_e0;
    ulong *puStack_c8;
    uchar auStack_c0 [8];
    int64_t iStack_b8;
    uchar **ppuStack_b0;
    code *pcStack_a8;
    int64_t iStack_78;
    uchar auStack_70 [8];
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    int64_t iStack_50;
    int64_t iStack_38;
    uchar auStack_30 [8];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_28 = *(iVar7 + 0x5e0);
    iStack_38 = 0;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(arg1 + 0x80),auStack_30,&iStack_38,0x8001de8);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(iStack_38 + 0x53) = *(arg2 + 0x48) != 0;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_28) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail(iVar3);
    *extraout_x18 = sym.lpass_cdc_rx_macro_fir_filter_enable_get;
    pcStack_58 = sym.lpass_cdc_rx_macro_fir_filter_enable_get;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    iVar7 = *(auVar9._0_8_ + 0x80);
    iStack_78 = 0;
    puStack_60 = &stack0xffffffffffffffe0;
    iStack_50 = arg2;
    if (iVar7 == 0) {
        iVar3 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_filter_enable_get._rs,
                             "lpass_cdc_rx_macro_fir_filter_enable_get");
        if (iVar3 != 0) {
            _printk(0x800180e,"lpass_cdc_rx_macro_fir_filter_enable_get");
        }
code_r0x080176cc:
        iVar3 = -0x16;
    }
    else {
        uVar6 = sym.lpass_cdc_rx_macro_get_data(iVar7,auStack_70,&iStack_78,0x8001ba9);
        if ((uVar6 & 1) == 0) goto code_r0x080176cc;
        iVar3 = 0;
        *(auVar9._8_8_ + 0x48) = *(iStack_78 + 0x54);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_68) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail(iVar3);
    *extraout_x18_00 = sym.lpass_cdc_rx_macro_fir_filter_enable_put;
    pcStack_a8 = sym.lpass_cdc_rx_macro_fir_filter_enable_put;
    iVar7 = sp_el0;
    iStack_b8 = *(iVar7 + 0x5e0);
    iVar7 = *(auVar9._0_8_ + 0x80);
    puStack_c8 = NULL;
    ppuStack_b0 = &puStack_60;
    if (iVar7 == 0) {
        iVar3 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_filter_enable_put._rs,
                             "lpass_cdc_rx_macro_fir_filter_enable_put");
        if (iVar3 != 0) {
            _printk(0x800180e,"lpass_cdc_rx_macro_fir_filter_enable_put");
            iVar3 = -0x16;
            goto code_r0x080178e4;
        }
    }
    else {
        uVar6 = sym.lpass_cdc_rx_macro_get_data(iVar7,auStack_c0,&puStack_c8,0x8001c78);
        puVar2 = puStack_c8;
        if ((uVar6 & 1) != 0) {
            iVar8 = puStack_c8[0x126];
            if ((iVar8 != 0) && (*(puStack_c8 + 0x59) != '\0')) {
                cVar1 = *(auVar9._8_8_ + 0x48);
                *(puStack_c8 + 0x54) = cVar1 != '\0';
                if (cVar1 == '\0') {
                    snd_soc_component_update_bits(iVar7,0x145c,0xd,0);
                    snd_soc_component_update_bits(iVar7,0x151c,0xd,0);
                    snd_soc_component_update_bits(iVar7,0x1400,0x80,0);
                    snd_soc_component_update_bits(iVar7,0x14c0,0x80,0);
                    snd_soc_component_update_bits(iVar7,0x1004,1,0);
                    iVar7 = puVar2[0x126];
                    clk_disable(iVar7);
                    clk_unprepare(iVar7);
                }
                else {
                    iVar3 = clk_prepare(iVar8);
                    if (iVar3 == 0) {
                        iVar3 = clk_enable(iVar8);
                        if (iVar3 != 0) {
                            clk_unprepare(iVar8);
                            goto code_r0x080177bc;
                        }
                    }
                    else {
code_r0x080177bc:
                        if (iVar3 < 0) {
                            iVar4 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_filter_enable_put._rs.326,
                                                 "lpass_cdc_rx_macro_fir_filter_enable_put");
                            if (iVar4 != 0) {
                                _dev_err(*puVar2,"%s:hifi_fir_clk enable failed\n",
                                         "lpass_cdc_rx_macro_fir_filter_enable_put");
                            }
                            goto code_r0x080178e4;
                        }
                    }
                    snd_soc_component_write(iVar7,0x1460,*(puVar2 + 10));
                    snd_soc_component_write(iVar7,0x1520,*(puVar2 + 0x51));
                    snd_soc_component_update_bits(iVar7,0x1004,1,1);
                    snd_soc_component_update_bits(iVar7,0x1400,0x80,0x80);
                    snd_soc_component_update_bits(iVar7,0x14c0,0x80,0x80);
                    snd_soc_component_update_bits(iVar7,0x145c,0xd,5);
                    snd_soc_component_update_bits(iVar7,0x151c,0xd,5);
                }
            }
            iVar3 = 0;
            goto code_r0x080178e4;
        }
    }
    iVar3 = -0x16;
code_r0x080178e4:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_b8) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail();
    *extraout_x18_01 = sym.lpass_cdc_rx_macro_get_hph_hd2_mode;
    pcStack_e8 = sym.lpass_cdc_rx_macro_get_hph_hd2_mode;
    iVar8 = sp_el0;
    iStack_f8 = *(iVar8 + 0x5e0);
    iStack_108 = 0;
    pppuStack_f0 = &ppuStack_b0;
    iStack_e0 = iVar7;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar9._0_8_ + 0x80),auStack_100,&iStack_108,0x8001ca1);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(auVar9._8_8_ + 0x48) = *(iStack_108 + 0x5d);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_f8) {
        return iVar3;
    }
    auVar10 = __stack_chk_fail(iVar3);
    *extraout_x18_02 = sym.lpass_cdc_rx_macro_put_hph_hd2_mode;
    pcStack_128 = sym.lpass_cdc_rx_macro_put_hph_hd2_mode;
    iVar7 = sp_el0;
    iStack_138 = *(iVar7 + 0x5e0);
    iStack_148 = 0;
    pppuStack_130 = &pppuStack_f0;
    iStack_120 = auVar9._8_8_;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar10._0_8_ + 0x80),auStack_140,&iStack_148,0x800285c);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(iStack_148 + 0x5d) = *(auVar10._8_8_ + 0x48) != 0;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_138) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail(iVar3);
    *extraout_x18_03 = sym.lpass_cdc_rx_macro_get_hph_pwr_mode;
    pcStack_168 = sym.lpass_cdc_rx_macro_get_hph_pwr_mode;
    iVar7 = sp_el0;
    iStack_178 = *(iVar7 + 0x5e0);
    iStack_188 = 0;
    pppuStack_170 = &pppuStack_130;
    iStack_160 = auVar10._8_8_;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar9._0_8_ + 0x80),auStack_180,&iStack_188,0x80016e4);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(auVar9._8_8_ + 0x48) = *(iStack_188 + 0x5c);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_178) {
        return iVar3;
    }
    auVar10 = __stack_chk_fail(iVar3);
    *extraout_x18_04 = sym.lpass_cdc_rx_macro_put_hph_pwr_mode;
    pcStack_1a8 = sym.lpass_cdc_rx_macro_put_hph_pwr_mode;
    iVar7 = sp_el0;
    iStack_1b8 = *(iVar7 + 0x5e0);
    iStack_1c8 = 0;
    pppuStack_1b0 = &pppuStack_170;
    iStack_1a0 = auVar9._8_8_;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar10._0_8_ + 0x80),auStack_1c0,&iStack_1c8,0x80015dc);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(iStack_1c8 + 0x5c) = *(auVar10._8_8_ + 0x48) != 0;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_1b8) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail(iVar3);
    *extraout_x18_05 = sym.lpass_cdc_rx_macro_vbat_bcl_gsm_mode_func_get;
    uVar5 = snd_soc_component_read(*(auVar9._0_8_ + 0x80),0x1284);
    *(auVar9._8_8_ + 0x48) = uVar5 >> 2 & 1;
    return 0;
}


// ===== sym.lpass_cdc_rx_macro_fir_filter_enable_get @ 0x08017654 (size 196) =====

int sym.lpass_cdc_rx_macro_fir_filter_enable_get(int64_t arg1,int64_t arg2)

{
    char cVar1;
    ulong *puVar2;
    int iVar3;
    int iVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    int64_t iVar7;
    int64_t iVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    uchar auVar10 [16];
    int64_t iStack_188;
    uchar auStack_180 [8];
    int64_t iStack_178;
    ulong ***pppuStack_170;
    code *pcStack_168;
    int64_t iStack_160;
    int64_t iStack_148;
    uchar auStack_140 [8];
    int64_t iStack_138;
    ulong ***pppuStack_130;
    code *pcStack_128;
    int64_t iStack_120;
    int64_t iStack_108;
    uchar auStack_100 [8];
    int64_t iStack_f8;
    uchar ***pppuStack_f0;
    code *pcStack_e8;
    int64_t iStack_e0;
    int64_t iStack_c8;
    uchar auStack_c0 [8];
    int64_t iStack_b8;
    uchar **ppuStack_b0;
    code *pcStack_a8;
    int64_t iStack_a0;
    ulong *puStack_88;
    uchar auStack_80 [8];
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    int64_t iStack_38;
    uchar auStack_30 [8];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_28 = *(iVar7 + 0x5e0);
    iStack_38 = 0;
    if (*(arg1 + 0x80) == 0) {
        iVar3 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_filter_enable_get._rs,
                             "lpass_cdc_rx_macro_fir_filter_enable_get");
        if (iVar3 != 0) {
            _printk(0x800180e,"lpass_cdc_rx_macro_fir_filter_enable_get");
        }
code_r0x080176cc:
        iVar3 = -0x16;
    }
    else {
        uVar6 = sym.lpass_cdc_rx_macro_get_data(*(arg1 + 0x80),auStack_30,&iStack_38,0x8001ba9);
        if ((uVar6 & 1) == 0) goto code_r0x080176cc;
        iVar3 = 0;
        *(arg2 + 0x48) = *(iStack_38 + 0x54);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_28) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail(iVar3);
    *extraout_x18 = sym.lpass_cdc_rx_macro_fir_filter_enable_put;
    pcStack_68 = sym.lpass_cdc_rx_macro_fir_filter_enable_put;
    iVar7 = sp_el0;
    iStack_78 = *(iVar7 + 0x5e0);
    iVar7 = *(auVar9._0_8_ + 0x80);
    puStack_88 = NULL;
    puStack_70 = &stack0xffffffffffffffe0;
    if (iVar7 == 0) {
        iVar3 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_filter_enable_put._rs,
                             "lpass_cdc_rx_macro_fir_filter_enable_put");
        if (iVar3 != 0) {
            _printk(0x800180e,"lpass_cdc_rx_macro_fir_filter_enable_put");
            iVar3 = -0x16;
            goto code_r0x080178e4;
        }
    }
    else {
        uVar6 = sym.lpass_cdc_rx_macro_get_data(iVar7,auStack_80,&puStack_88,0x8001c78);
        puVar2 = puStack_88;
        if ((uVar6 & 1) != 0) {
            iVar8 = puStack_88[0x126];
            if ((iVar8 != 0) && (*(puStack_88 + 0x59) != '\0')) {
                cVar1 = *(auVar9._8_8_ + 0x48);
                *(puStack_88 + 0x54) = cVar1 != '\0';
                if (cVar1 == '\0') {
                    snd_soc_component_update_bits(iVar7,0x145c,0xd,0);
                    snd_soc_component_update_bits(iVar7,0x151c,0xd,0);
                    snd_soc_component_update_bits(iVar7,0x1400,0x80,0);
                    snd_soc_component_update_bits(iVar7,0x14c0,0x80,0);
                    snd_soc_component_update_bits(iVar7,0x1004,1,0);
                    iVar7 = puVar2[0x126];
                    clk_disable(iVar7);
                    clk_unprepare(iVar7);
                }
                else {
                    iVar3 = clk_prepare(iVar8);
                    if (iVar3 == 0) {
                        iVar3 = clk_enable(iVar8);
                        if (iVar3 != 0) {
                            clk_unprepare(iVar8);
                            goto code_r0x080177bc;
                        }
                    }
                    else {
code_r0x080177bc:
                        if (iVar3 < 0) {
                            iVar4 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_filter_enable_put._rs.326,
                                                 "lpass_cdc_rx_macro_fir_filter_enable_put");
                            if (iVar4 != 0) {
                                _dev_err(*puVar2,"%s:hifi_fir_clk enable failed\n",
                                         "lpass_cdc_rx_macro_fir_filter_enable_put");
                            }
                            goto code_r0x080178e4;
                        }
                    }
                    snd_soc_component_write(iVar7,0x1460,*(puVar2 + 10));
                    snd_soc_component_write(iVar7,0x1520,*(puVar2 + 0x51));
                    snd_soc_component_update_bits(iVar7,0x1004,1,1);
                    snd_soc_component_update_bits(iVar7,0x1400,0x80,0x80);
                    snd_soc_component_update_bits(iVar7,0x14c0,0x80,0x80);
                    snd_soc_component_update_bits(iVar7,0x145c,0xd,5);
                    snd_soc_component_update_bits(iVar7,0x151c,0xd,5);
                }
            }
            iVar3 = 0;
            goto code_r0x080178e4;
        }
    }
    iVar3 = -0x16;
code_r0x080178e4:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_78) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail();
    *extraout_x18_00 = sym.lpass_cdc_rx_macro_get_hph_hd2_mode;
    pcStack_a8 = sym.lpass_cdc_rx_macro_get_hph_hd2_mode;
    iVar8 = sp_el0;
    iStack_b8 = *(iVar8 + 0x5e0);
    iStack_c8 = 0;
    ppuStack_b0 = &puStack_70;
    iStack_a0 = iVar7;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar9._0_8_ + 0x80),auStack_c0,&iStack_c8,0x8001ca1);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(auVar9._8_8_ + 0x48) = *(iStack_c8 + 0x5d);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_b8) {
        return iVar3;
    }
    auVar10 = __stack_chk_fail(iVar3);
    *extraout_x18_01 = sym.lpass_cdc_rx_macro_put_hph_hd2_mode;
    pcStack_e8 = sym.lpass_cdc_rx_macro_put_hph_hd2_mode;
    iVar7 = sp_el0;
    iStack_f8 = *(iVar7 + 0x5e0);
    iStack_108 = 0;
    pppuStack_f0 = &ppuStack_b0;
    iStack_e0 = auVar9._8_8_;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar10._0_8_ + 0x80),auStack_100,&iStack_108,0x800285c);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(iStack_108 + 0x5d) = *(auVar10._8_8_ + 0x48) != 0;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_f8) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail(iVar3);
    *extraout_x18_02 = sym.lpass_cdc_rx_macro_get_hph_pwr_mode;
    pcStack_128 = sym.lpass_cdc_rx_macro_get_hph_pwr_mode;
    iVar7 = sp_el0;
    iStack_138 = *(iVar7 + 0x5e0);
    iStack_148 = 0;
    pppuStack_130 = &pppuStack_f0;
    iStack_120 = auVar10._8_8_;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar9._0_8_ + 0x80),auStack_140,&iStack_148,0x80016e4);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(auVar9._8_8_ + 0x48) = *(iStack_148 + 0x5c);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_138) {
        return iVar3;
    }
    auVar10 = __stack_chk_fail(iVar3);
    *extraout_x18_03 = sym.lpass_cdc_rx_macro_put_hph_pwr_mode;
    pcStack_168 = sym.lpass_cdc_rx_macro_put_hph_pwr_mode;
    iVar7 = sp_el0;
    iStack_178 = *(iVar7 + 0x5e0);
    iStack_188 = 0;
    pppuStack_170 = &pppuStack_130;
    iStack_160 = auVar9._8_8_;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar10._0_8_ + 0x80),auStack_180,&iStack_188,0x80015dc);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(iStack_188 + 0x5c) = *(auVar10._8_8_ + 0x48) != 0;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_178) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail(iVar3);
    *extraout_x18_04 = sym.lpass_cdc_rx_macro_vbat_bcl_gsm_mode_func_get;
    uVar5 = snd_soc_component_read(*(auVar9._0_8_ + 0x80),0x1284);
    *(auVar9._8_8_ + 0x48) = uVar5 >> 2 & 1;
    return 0;
}


// ===== sym.lpass_cdc_rx_macro_fir_filter_enable_put @ 0x08017718 (size 596) =====

int sym.lpass_cdc_rx_macro_fir_filter_enable_put(int64_t arg1,int64_t arg2)

{
    char cVar1;
    ulong *puVar2;
    int iVar3;
    int iVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    int64_t iVar7;
    int64_t iVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    uchar auVar10 [16];
    int64_t iStack_148;
    uchar auStack_140 [8];
    int64_t iStack_138;
    ulong ***pppuStack_130;
    code *pcStack_128;
    int64_t iStack_120;
    int64_t iStack_108;
    uchar auStack_100 [8];
    int64_t iStack_f8;
    uchar ***pppuStack_f0;
    code *pcStack_e8;
    int64_t iStack_e0;
    int64_t iStack_c8;
    uchar auStack_c0 [8];
    int64_t iStack_b8;
    uchar **ppuStack_b0;
    code *pcStack_a8;
    int64_t iStack_a0;
    int64_t iStack_88;
    uchar auStack_80 [8];
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    int64_t iStack_60;
    ulong *puStack_48;
    uchar auStack_40 [8];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    iVar7 = *(arg1 + 0x80);
    puStack_48 = NULL;
    if (iVar7 == 0) {
        iVar3 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_filter_enable_put._rs,
                             "lpass_cdc_rx_macro_fir_filter_enable_put");
        if (iVar3 != 0) {
            _printk(0x800180e,"lpass_cdc_rx_macro_fir_filter_enable_put");
            iVar3 = -0x16;
            goto code_r0x080178e4;
        }
    }
    else {
        uVar6 = sym.lpass_cdc_rx_macro_get_data(iVar7,auStack_40,&puStack_48,0x8001c78);
        puVar2 = puStack_48;
        if ((uVar6 & 1) != 0) {
            iVar8 = puStack_48[0x126];
            if ((iVar8 != 0) && (*(puStack_48 + 0x59) != '\0')) {
                cVar1 = *(arg2 + 0x48);
                *(puStack_48 + 0x54) = cVar1 != '\0';
                if (cVar1 == '\0') {
                    snd_soc_component_update_bits(iVar7,0x145c,0xd,0);
                    snd_soc_component_update_bits(iVar7,0x151c,0xd,0);
                    snd_soc_component_update_bits(iVar7,0x1400,0x80,0);
                    snd_soc_component_update_bits(iVar7,0x14c0,0x80,0);
                    snd_soc_component_update_bits(iVar7,0x1004,1,0);
                    iVar7 = puVar2[0x126];
                    clk_disable(iVar7);
                    clk_unprepare(iVar7);
                }
                else {
                    iVar3 = clk_prepare(iVar8);
                    if (iVar3 == 0) {
                        iVar3 = clk_enable(iVar8);
                        if (iVar3 != 0) {
                            clk_unprepare(iVar8);
                            goto code_r0x080177bc;
                        }
                    }
                    else {
code_r0x080177bc:
                        if (iVar3 < 0) {
                            iVar4 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_filter_enable_put._rs.326,
                                                 "lpass_cdc_rx_macro_fir_filter_enable_put");
                            if (iVar4 != 0) {
                                _dev_err(*puVar2,"%s:hifi_fir_clk enable failed\n",
                                         "lpass_cdc_rx_macro_fir_filter_enable_put");
                            }
                            goto code_r0x080178e4;
                        }
                    }
                    snd_soc_component_write(iVar7,0x1460,*(puVar2 + 10));
                    snd_soc_component_write(iVar7,0x1520,*(puVar2 + 0x51));
                    snd_soc_component_update_bits(iVar7,0x1004,1,1);
                    snd_soc_component_update_bits(iVar7,0x1400,0x80,0x80);
                    snd_soc_component_update_bits(iVar7,0x14c0,0x80,0x80);
                    snd_soc_component_update_bits(iVar7,0x145c,0xd,5);
                    snd_soc_component_update_bits(iVar7,0x151c,0xd,5);
                }
            }
            iVar3 = 0;
            goto code_r0x080178e4;
        }
    }
    iVar3 = -0x16;
code_r0x080178e4:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_38) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail();
    *extraout_x18 = sym.lpass_cdc_rx_macro_get_hph_hd2_mode;
    pcStack_68 = sym.lpass_cdc_rx_macro_get_hph_hd2_mode;
    iVar8 = sp_el0;
    iStack_78 = *(iVar8 + 0x5e0);
    iStack_88 = 0;
    puStack_70 = &stack0xffffffffffffffd0;
    iStack_60 = iVar7;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar9._0_8_ + 0x80),auStack_80,&iStack_88,0x8001ca1);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(auVar9._8_8_ + 0x48) = *(iStack_88 + 0x5d);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_78) {
        return iVar3;
    }
    auVar10 = __stack_chk_fail(iVar3);
    *extraout_x18_00 = sym.lpass_cdc_rx_macro_put_hph_hd2_mode;
    pcStack_a8 = sym.lpass_cdc_rx_macro_put_hph_hd2_mode;
    iVar7 = sp_el0;
    iStack_b8 = *(iVar7 + 0x5e0);
    iStack_c8 = 0;
    ppuStack_b0 = &puStack_70;
    iStack_a0 = auVar9._8_8_;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar10._0_8_ + 0x80),auStack_c0,&iStack_c8,0x800285c);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(iStack_c8 + 0x5d) = *(auVar10._8_8_ + 0x48) != 0;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_b8) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail(iVar3);
    *extraout_x18_01 = sym.lpass_cdc_rx_macro_get_hph_pwr_mode;
    pcStack_e8 = sym.lpass_cdc_rx_macro_get_hph_pwr_mode;
    iVar7 = sp_el0;
    iStack_f8 = *(iVar7 + 0x5e0);
    iStack_108 = 0;
    pppuStack_f0 = &ppuStack_b0;
    iStack_e0 = auVar10._8_8_;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar9._0_8_ + 0x80),auStack_100,&iStack_108,0x80016e4);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(auVar9._8_8_ + 0x48) = *(iStack_108 + 0x5c);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_f8) {
        return iVar3;
    }
    auVar10 = __stack_chk_fail(iVar3);
    *extraout_x18_02 = sym.lpass_cdc_rx_macro_put_hph_pwr_mode;
    pcStack_128 = sym.lpass_cdc_rx_macro_put_hph_pwr_mode;
    iVar7 = sp_el0;
    iStack_138 = *(iVar7 + 0x5e0);
    iStack_148 = 0;
    pppuStack_130 = &pppuStack_f0;
    iStack_120 = auVar9._8_8_;
    uVar6 = sym.lpass_cdc_rx_macro_get_data(*(auVar10._0_8_ + 0x80),auStack_140,&iStack_148,0x80015dc);
    if ((uVar6 & 1) == 0) {
        iVar3 = -0x16;
    }
    else {
        iVar3 = 0;
        *(iStack_148 + 0x5c) = *(auVar10._8_8_ + 0x48) != 0;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_138) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail(iVar3);
    *extraout_x18_03 = sym.lpass_cdc_rx_macro_vbat_bcl_gsm_mode_func_get;
    uVar5 = snd_soc_component_read(*(auVar9._0_8_ + 0x80),0x1284);
    *(auVar9._8_8_ + 0x48) = uVar5 >> 2 & 1;
    return 0;
}


// ===== sym.lpass_cdc_rx_macro_get_hph_hd2_mode @ 0x0801796c (size 144) =====

ulong sym.lpass_cdc_rx_macro_get_hph_hd2_mode(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong unaff_x30;
    uchar auVar5 [16];
    uchar auVar6 [16];
    int64_t iStack_f8;
    uchar auStack_f0 [8];
    int64_t iStack_e8;
    ulong **ppuStack_e0;
    code *pcStack_d8;
    int64_t iStack_d0;
    int64_t iStack_b8;
    uchar auStack_b0 [8];
    int64_t iStack_a8;
    uchar **ppuStack_a0;
    code *pcStack_98;
    int64_t iStack_90;
    int64_t iStack_78;
    uchar auStack_70 [8];
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    int64_t iStack_50;
    int64_t iStack_38;
    uchar auStack_30 [8];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    iStack_38 = 0;
    uVar3 = sym.lpass_cdc_rx_macro_get_data(*(arg1 + 0x80),auStack_30,&iStack_38,0x8001ca1);
    if ((uVar3 & 1) == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        uVar4 = 0;
        *(arg2 + 0x48) = *(iStack_38 + 0x5d);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return uVar4;
    }
    auVar5 = __stack_chk_fail(uVar4);
    *extraout_x18 = sym.lpass_cdc_rx_macro_put_hph_hd2_mode;
    pcStack_58 = sym.lpass_cdc_rx_macro_put_hph_hd2_mode;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    iStack_78 = 0;
    puStack_60 = &stack0xffffffffffffffe0;
    iStack_50 = arg2;
    uVar3 = sym.lpass_cdc_rx_macro_get_data(*(auVar5._0_8_ + 0x80),auStack_70,&iStack_78,0x800285c);
    if ((uVar3 & 1) == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        uVar4 = 0;
        *(iStack_78 + 0x5d) = *(auVar5._8_8_ + 0x48) != 0;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return uVar4;
    }
    auVar6 = __stack_chk_fail(uVar4);
    *extraout_x18_00 = sym.lpass_cdc_rx_macro_get_hph_pwr_mode;
    pcStack_98 = sym.lpass_cdc_rx_macro_get_hph_pwr_mode;
    iVar1 = sp_el0;
    iStack_a8 = *(iVar1 + 0x5e0);
    iStack_b8 = 0;
    ppuStack_a0 = &puStack_60;
    iStack_90 = auVar5._8_8_;
    uVar3 = sym.lpass_cdc_rx_macro_get_data(*(auVar6._0_8_ + 0x80),auStack_b0,&iStack_b8,0x80016e4);
    if ((uVar3 & 1) == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        uVar4 = 0;
        *(auVar6._8_8_ + 0x48) = *(iStack_b8 + 0x5c);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_a8) {
        return uVar4;
    }
    auVar5 = __stack_chk_fail(uVar4);
    *extraout_x18_01 = sym.lpass_cdc_rx_macro_put_hph_pwr_mode;
    pcStack_d8 = sym.lpass_cdc_rx_macro_put_hph_pwr_mode;
    iVar1 = sp_el0;
    iStack_e8 = *(iVar1 + 0x5e0);
    iStack_f8 = 0;
    ppuStack_e0 = &ppuStack_a0;
    iStack_d0 = auVar6._8_8_;
    uVar3 = sym.lpass_cdc_rx_macro_get_data(*(auVar5._0_8_ + 0x80),auStack_f0,&iStack_f8,0x80015dc);
    if ((uVar3 & 1) == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        uVar4 = 0;
        *(iStack_f8 + 0x5c) = *(auVar5._8_8_ + 0x48) != 0;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_e8) {
        return uVar4;
    }
    auVar5 = __stack_chk_fail(uVar4);
    *extraout_x18_02 = sym.lpass_cdc_rx_macro_vbat_bcl_gsm_mode_func_get;
    uVar2 = snd_soc_component_read(*(auVar5._0_8_ + 0x80),0x1284);
    *(auVar5._8_8_ + 0x48) = uVar2 >> 2 & 1;
    return 0;
}


// ===== sym.lpass_cdc_rx_macro_put_hph_hd2_mode @ 0x080179fc (size 152) =====

ulong sym.lpass_cdc_rx_macro_put_hph_hd2_mode(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong unaff_x30;
    uchar auVar5 [16];
    uchar auVar6 [16];
    int64_t iStack_b8;
    uchar auStack_b0 [8];
    int64_t iStack_a8;
    uchar **ppuStack_a0;
    code *pcStack_98;
    int64_t iStack_90;
    int64_t iStack_78;
    uchar auStack_70 [8];
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    int64_t iStack_50;
    int64_t iStack_38;
    uchar auStack_30 [8];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    iStack_38 = 0;
    uVar3 = sym.lpass_cdc_rx_macro_get_data(*(arg1 + 0x80),auStack_30,&iStack_38,0x800285c);
    if ((uVar3 & 1) == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        uVar4 = 0;
        *(iStack_38 + 0x5d) = *(arg2 + 0x48) != 0;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return uVar4;
    }
    auVar5 = __stack_chk_fail(uVar4);
    *extraout_x18 = sym.lpass_cdc_rx_macro_get_hph_pwr_mode;
    pcStack_58 = sym.lpass_cdc_rx_macro_get_hph_pwr_mode;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    iStack_78 = 0;
    puStack_60 = &stack0xffffffffffffffe0;
    iStack_50 = arg2;
    uVar3 = sym.lpass_cdc_rx_macro_get_data(*(auVar5._0_8_ + 0x80),auStack_70,&iStack_78,0x80016e4);
    if ((uVar3 & 1) == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        uVar4 = 0;
        *(auVar5._8_8_ + 0x48) = *(iStack_78 + 0x5c);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return uVar4;
    }
    auVar6 = __stack_chk_fail(uVar4);
    *extraout_x18_00 = sym.lpass_cdc_rx_macro_put_hph_pwr_mode;
    pcStack_98 = sym.lpass_cdc_rx_macro_put_hph_pwr_mode;
    iVar1 = sp_el0;
    iStack_a8 = *(iVar1 + 0x5e0);
    iStack_b8 = 0;
    ppuStack_a0 = &puStack_60;
    iStack_90 = auVar5._8_8_;
    uVar3 = sym.lpass_cdc_rx_macro_get_data(*(auVar6._0_8_ + 0x80),auStack_b0,&iStack_b8,0x80015dc);
    if ((uVar3 & 1) == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        uVar4 = 0;
        *(iStack_b8 + 0x5c) = *(auVar6._8_8_ + 0x48) != 0;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_a8) {
        return uVar4;
    }
    auVar5 = __stack_chk_fail(uVar4);
    *extraout_x18_01 = sym.lpass_cdc_rx_macro_vbat_bcl_gsm_mode_func_get;
    uVar2 = snd_soc_component_read(*(auVar5._0_8_ + 0x80),0x1284);
    *(auVar5._8_8_ + 0x48) = uVar2 >> 2 & 1;
    return 0;
}


// ===== sym.lpass_cdc_rx_macro_get_hph_pwr_mode @ 0x08017a94 (size 144) =====

ulong sym.lpass_cdc_rx_macro_get_hph_pwr_mode(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong unaff_x30;
    uchar auVar5 [16];
    int64_t iStack_78;
    uchar auStack_70 [8];
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    int64_t iStack_50;
    int64_t iStack_38;
    uchar auStack_30 [8];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    iStack_38 = 0;
    uVar3 = sym.lpass_cdc_rx_macro_get_data(*(arg1 + 0x80),auStack_30,&iStack_38,0x80016e4);
    if ((uVar3 & 1) == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        uVar4 = 0;
        *(arg2 + 0x48) = *(iStack_38 + 0x5c);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return uVar4;
    }
    auVar5 = __stack_chk_fail(uVar4);
    *extraout_x18 = sym.lpass_cdc_rx_macro_put_hph_pwr_mode;
    pcStack_58 = sym.lpass_cdc_rx_macro_put_hph_pwr_mode;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    iStack_78 = 0;
    puStack_60 = &stack0xffffffffffffffe0;
    iStack_50 = arg2;
    uVar3 = sym.lpass_cdc_rx_macro_get_data(*(auVar5._0_8_ + 0x80),auStack_70,&iStack_78,0x80015dc);
    if ((uVar3 & 1) == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        uVar4 = 0;
        *(iStack_78 + 0x5c) = *(auVar5._8_8_ + 0x48) != 0;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return uVar4;
    }
    auVar5 = __stack_chk_fail(uVar4);
    *extraout_x18_00 = sym.lpass_cdc_rx_macro_vbat_bcl_gsm_mode_func_get;
    uVar2 = snd_soc_component_read(*(auVar5._0_8_ + 0x80),0x1284);
    *(auVar5._8_8_ + 0x48) = uVar2 >> 2 & 1;
    return 0;
}


// ===== sym.lpass_cdc_rx_macro_put_hph_pwr_mode @ 0x08017b24 (size 152) =====

ulong sym.lpass_cdc_rx_macro_put_hph_pwr_mode(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar5 [16];
    int64_t iStack_38;
    uchar auStack_30 [8];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    iStack_38 = 0;
    uVar3 = sym.lpass_cdc_rx_macro_get_data(*(arg1 + 0x80),auStack_30,&iStack_38,0x80015dc);
    if ((uVar3 & 1) == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        uVar4 = 0;
        *(iStack_38 + 0x5c) = *(arg2 + 0x48) != 0;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return uVar4;
    }
    auVar5 = __stack_chk_fail(uVar4);
    *extraout_x18 = sym.lpass_cdc_rx_macro_vbat_bcl_gsm_mode_func_get;
    uVar2 = snd_soc_component_read(*(auVar5._0_8_ + 0x80),0x1284);
    *(auVar5._8_8_ + 0x48) = uVar2 >> 2 & 1;
    return 0;
}


// ===== sym.lpass_cdc_rx_macro_vbat_bcl_gsm_mode_func_get @ 0x08017bbc (size 72) =====

ulong sym.lpass_cdc_rx_macro_vbat_bcl_gsm_mode_func_get(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = snd_soc_component_read(*(arg1 + 0x80),0x1284);
    *(arg2 + 0x48) = uVar1 >> 2 & 1;
    return 0;
}


// ===== sym.lpass_cdc_rx_macro_vbat_bcl_gsm_mode_func_put @ 0x08017c04 (size 68) =====

ulong sym.lpass_cdc_rx_macro_vbat_bcl_gsm_mode_func_put(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    snd_soc_component_update_bits(*(arg1 + 0x80),0x1284,4,(*(arg2 + 0x48) != 0) << 2);
    return 0;
}


// ===== sym.lpass_cdc_rx_macro_soft_clip_enable_get @ 0x08017c48 (size 144) =====

ulong sym.lpass_cdc_rx_macro_soft_clip_enable_get(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong unaff_x30;
    uchar auVar5 [16];
    uchar auVar6 [16];
    int64_t iStack_f8;
    uchar auStack_f0 [8];
    int64_t iStack_e8;
    ulong **ppuStack_e0;
    code *pcStack_d8;
    int64_t iStack_d0;
    int64_t iStack_b8;
    uchar auStack_b0 [8];
    int64_t iStack_a8;
    uchar **ppuStack_a0;
    code *pcStack_98;
    int64_t iStack_90;
    int64_t iStack_78;
    uchar auStack_70 [8];
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    int64_t iStack_50;
    int64_t iStack_38;
    uchar auStack_30 [8];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    iStack_38 = 0;
    uVar3 = sym.lpass_cdc_rx_macro_get_data(*(arg1 + 0x80),auStack_30,&iStack_38,0x80018bf);
    if ((uVar3 & 1) == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        uVar4 = 0;
        *(arg2 + 0x48) = *(iStack_38 + 0x91c);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return uVar4;
    }
    auVar5 = __stack_chk_fail(uVar4);
    *extraout_x18 = sym.lpass_cdc_rx_macro_soft_clip_enable_put;
    pcStack_58 = sym.lpass_cdc_rx_macro_soft_clip_enable_put;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    iStack_78 = 0;
    puStack_60 = &stack0xffffffffffffffe0;
    iStack_50 = arg2;
    uVar3 = sym.lpass_cdc_rx_macro_get_data(*(auVar5._0_8_ + 0x80),auStack_70,&iStack_78,0x80021e2);
    if ((uVar3 & 1) == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        uVar4 = 0;
        *(iStack_78 + 0x91c) = *(auVar5._8_8_ + 0x48);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return uVar4;
    }
    auVar6 = __stack_chk_fail(uVar4);
    *extraout_x18_00 = sym.lpass_cdc_rx_macro_aux_hpf_mode_get;
    pcStack_98 = sym.lpass_cdc_rx_macro_aux_hpf_mode_get;
    iVar1 = sp_el0;
    iStack_a8 = *(iVar1 + 0x5e0);
    iStack_b8 = 0;
    ppuStack_a0 = &puStack_60;
    iStack_90 = auVar5._8_8_;
    uVar3 = sym.lpass_cdc_rx_macro_get_data(*(auVar6._0_8_ + 0x80),auStack_b0,&iStack_b8,0x800233d);
    if ((uVar3 & 1) == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        uVar4 = 0;
        *(auVar6._8_8_ + 0x48) = *(iStack_b8 + 0x920);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_a8) {
        return uVar4;
    }
    auVar5 = __stack_chk_fail(uVar4);
    *extraout_x18_01 = sym.lpass_cdc_rx_macro_aux_hpf_mode_put;
    pcStack_d8 = sym.lpass_cdc_rx_macro_aux_hpf_mode_put;
    iVar1 = sp_el0;
    iStack_e8 = *(iVar1 + 0x5e0);
    iStack_f8 = 0;
    ppuStack_e0 = &ppuStack_a0;
    iStack_d0 = auVar6._8_8_;
    uVar3 = sym.lpass_cdc_rx_macro_get_data(*(auVar5._0_8_ + 0x80),auStack_f0,&iStack_f8,0x80018e7);
    if ((uVar3 & 1) == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        uVar4 = 0;
        *(iStack_f8 + 0x920) = *(auVar5._8_8_ + 0x48);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_e8) {
        return uVar4;
    }
    auVar5 = __stack_chk_fail(uVar4);
    *extraout_x18_02 = sym.lpass_cdc_rx_macro_iir_enable_audio_mixer_get;
    iVar1 = *(auVar5._0_8_ + 0x78);
    uVar2 = *(iVar1 + 0x18);
    uVar3 = snd_soc_component_read(*(auVar5._0_8_ + 0x80),*(iVar1 + 0x10) * 0x80 + 0x1a24U & 0xfffc);
    *(auVar5._8_8_ + 0x48) = (uVar3 & 0xffffffff) >> (uVar2 & 0x3f) & 1;
    return 0;
}


// ===== sym.lpass_cdc_rx_macro_soft_clip_enable_put @ 0x08017cd8 (size 144) =====

ulong sym.lpass_cdc_rx_macro_soft_clip_enable_put(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong unaff_x30;
    uchar auVar5 [16];
    uchar auVar6 [16];
    int64_t iStack_b8;
    uchar auStack_b0 [8];
    int64_t iStack_a8;
    uchar **ppuStack_a0;
    code *pcStack_98;
    int64_t iStack_90;
    int64_t iStack_78;
    uchar auStack_70 [8];
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    int64_t iStack_50;
    int64_t iStack_38;
    uchar auStack_30 [8];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    iStack_38 = 0;
    uVar3 = sym.lpass_cdc_rx_macro_get_data(*(arg1 + 0x80),auStack_30,&iStack_38,0x80021e2);
    if ((uVar3 & 1) == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        uVar4 = 0;
        *(iStack_38 + 0x91c) = *(arg2 + 0x48);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return uVar4;
    }
    auVar5 = __stack_chk_fail(uVar4);
    *extraout_x18 = sym.lpass_cdc_rx_macro_aux_hpf_mode_get;
    pcStack_58 = sym.lpass_cdc_rx_macro_aux_hpf_mode_get;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    iStack_78 = 0;
    puStack_60 = &stack0xffffffffffffffe0;
    iStack_50 = arg2;
    uVar3 = sym.lpass_cdc_rx_macro_get_data(*(auVar5._0_8_ + 0x80),auStack_70,&iStack_78,0x800233d);
    if ((uVar3 & 1) == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        uVar4 = 0;
        *(auVar5._8_8_ + 0x48) = *(iStack_78 + 0x920);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return uVar4;
    }
    auVar6 = __stack_chk_fail(uVar4);
    *extraout_x18_00 = sym.lpass_cdc_rx_macro_aux_hpf_mode_put;
    pcStack_98 = sym.lpass_cdc_rx_macro_aux_hpf_mode_put;
    iVar1 = sp_el0;
    iStack_a8 = *(iVar1 + 0x5e0);
    iStack_b8 = 0;
    ppuStack_a0 = &puStack_60;
    iStack_90 = auVar5._8_8_;
    uVar3 = sym.lpass_cdc_rx_macro_get_data(*(auVar6._0_8_ + 0x80),auStack_b0,&iStack_b8,0x80018e7);
    if ((uVar3 & 1) == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        uVar4 = 0;
        *(iStack_b8 + 0x920) = *(auVar6._8_8_ + 0x48);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_a8) {
        return uVar4;
    }
    auVar5 = __stack_chk_fail(uVar4);
    *extraout_x18_01 = sym.lpass_cdc_rx_macro_iir_enable_audio_mixer_get;
    iVar1 = *(auVar5._0_8_ + 0x78);
    uVar2 = *(iVar1 + 0x18);
    uVar3 = snd_soc_component_read(*(auVar5._0_8_ + 0x80),*(iVar1 + 0x10) * 0x80 + 0x1a24U & 0xfffc);
    *(auVar5._8_8_ + 0x48) = (uVar3 & 0xffffffff) >> (uVar2 & 0x3f) & 1;
    return 0;
}


// ===== sym.lpass_cdc_rx_macro_aux_hpf_mode_get @ 0x08017d68 (size 144) =====

ulong sym.lpass_cdc_rx_macro_aux_hpf_mode_get(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong unaff_x30;
    uchar auVar5 [16];
    int64_t iStack_78;
    uchar auStack_70 [8];
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    int64_t iStack_50;
    int64_t iStack_38;
    uchar auStack_30 [8];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    iStack_38 = 0;
    uVar3 = sym.lpass_cdc_rx_macro_get_data(*(arg1 + 0x80),auStack_30,&iStack_38,0x800233d);
    if ((uVar3 & 1) == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        uVar4 = 0;
        *(arg2 + 0x48) = *(iStack_38 + 0x920);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return uVar4;
    }
    auVar5 = __stack_chk_fail(uVar4);
    *extraout_x18 = sym.lpass_cdc_rx_macro_aux_hpf_mode_put;
    pcStack_58 = sym.lpass_cdc_rx_macro_aux_hpf_mode_put;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    iStack_78 = 0;
    puStack_60 = &stack0xffffffffffffffe0;
    iStack_50 = arg2;
    uVar3 = sym.lpass_cdc_rx_macro_get_data(*(auVar5._0_8_ + 0x80),auStack_70,&iStack_78,0x80018e7);
    if ((uVar3 & 1) == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        uVar4 = 0;
        *(iStack_78 + 0x920) = *(auVar5._8_8_ + 0x48);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return uVar4;
    }
    auVar5 = __stack_chk_fail(uVar4);
    *extraout_x18_00 = sym.lpass_cdc_rx_macro_iir_enable_audio_mixer_get;
    iVar1 = *(auVar5._0_8_ + 0x78);
    uVar2 = *(iVar1 + 0x18);
    uVar3 = snd_soc_component_read(*(auVar5._0_8_ + 0x80),*(iVar1 + 0x10) * 0x80 + 0x1a24U & 0xfffc);
    *(auVar5._8_8_ + 0x48) = (uVar3 & 0xffffffff) >> (uVar2 & 0x3f) & 1;
    return 0;
}


// ===== sym.lpass_cdc_rx_macro_aux_hpf_mode_put @ 0x08017df8 (size 144) =====

ulong sym.lpass_cdc_rx_macro_aux_hpf_mode_put(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar5 [16];
    int64_t iStack_38;
    uchar auStack_30 [8];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    iStack_38 = 0;
    uVar3 = sym.lpass_cdc_rx_macro_get_data(*(arg1 + 0x80),auStack_30,&iStack_38,0x80018e7);
    if ((uVar3 & 1) == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        uVar4 = 0;
        *(iStack_38 + 0x920) = *(arg2 + 0x48);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return uVar4;
    }
    auVar5 = __stack_chk_fail(uVar4);
    *extraout_x18 = sym.lpass_cdc_rx_macro_iir_enable_audio_mixer_get;
    iVar1 = *(auVar5._0_8_ + 0x78);
    uVar2 = *(iVar1 + 0x18);
    uVar3 = snd_soc_component_read(*(auVar5._0_8_ + 0x80),*(iVar1 + 0x10) * 0x80 + 0x1a24U & 0xfffc);
    *(auVar5._8_8_ + 0x48) = (uVar3 & 0xffffffff) >> (uVar2 & 0x3f) & 1;
    return 0;
}


// ===== sym.lpass_cdc_rx_macro_iir_enable_audio_mixer_get @ 0x08017e88 (size 96) =====

ulong sym.lpass_cdc_rx_macro_iir_enable_audio_mixer_get(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(*(arg1 + 0x78) + 0x18);
    uVar2 = snd_soc_component_read(*(arg1 + 0x80),*(*(arg1 + 0x78) + 0x10) * 0x80 + 0x1a24U & 0xfffc);
    *(arg2 + 0x48) = (uVar2 & 0xffffffff) >> (uVar1 & 0x3f) & 1;
    return 0;
}


// ===== sym.lpass_cdc_rx_macro_iir_enable_audio_mixer_put @ 0x08017ee8 (size 700) =====

void sym.lpass_cdc_rx_macro_iir_enable_audio_mixer_put(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t iVar5;
    int64_t *piVar6;
    code *pcVar7;
    int iVar8;
    uint64_t uVar9;
    int64_t iVar10;
    ulong *in_x18;
    ulong uVar11;
    ulong unaff_x30;
    int64_t *piStack_68;
    uchar auStack_60 [8];
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_58 = *(iVar1 + 0x5e0);
    iVar1 = *(arg1 + 0x80);
    piStack_68 = NULL;
    uVar11 = *(arg2 + 0x48);
    uVar2 = *(*(arg1 + 0x78) + 0x10);
    uVar3 = *(*(arg1 + 0x78) + 0x18);
    uVar9 = sym.lpass_cdc_rx_macro_get_data(iVar1,auStack_60,&piStack_68,0x800147e);
    piVar6 = piStack_68;
    if ((uVar9 & 1) == 0) {
        uVar11 = 0xffffffea;
    }
    else {
        iVar4 = uVar2 * 0x80;
        iVar10 = dev_get_regmap(*(*piStack_68 + 0x60),0);
        if (iVar10 == 0) {
            iVar8 = ___ratelimit(obj.lpass_cdc_rx_macro_restore_iir_coeff._rs,"lpass_cdc_rx_macro_restore_iir_coeff");
            if (iVar8 != 0) {
                _dev_err(*piVar6,"%s: regmap is NULL\n","lpass_cdc_rx_macro_restore_iir_coeff");
            }
        }
        else {
            regmap_write(iVar10,iVar4 + 0x1a2c,(uVar3 * 5 & 0x1f) << 2);
            if ((1 < uVar2) || (4 < uVar3)) goto code_r0x080181a0;
            iVar5 = uVar3 * 0x14 + uVar2 * 100;
            uVar2 = iVar4 + 0x1a30U & 0xffb0;
            regmap_write(iVar10,uVar2,*(piVar6 + iVar5 + 0x1e2));
            regmap_write(iVar10,uVar2,*(piVar6 + iVar5 + 0x1e3));
            regmap_write(iVar10,uVar2,*(piVar6 + iVar5 + 0x1e4));
            regmap_write(iVar10,uVar2,*(piVar6 + iVar5 + 0x1e5));
            regmap_write(iVar10,uVar2,*(piVar6 + iVar5 + 0x1e6));
            regmap_write(iVar10,uVar2,*(piVar6 + iVar5 + 0x1e7));
            regmap_write(iVar10,uVar2,*(piVar6 + iVar5 + 0x1e8));
            regmap_write(iVar10,uVar2,*(piVar6 + iVar5 + 0x1e9));
            regmap_write(iVar10,uVar2,*(piVar6 + iVar5 + 0x1ea));
            regmap_write(iVar10,uVar2,*(piVar6 + iVar5 + 0x1eb));
            regmap_write(iVar10,uVar2,*(piVar6 + iVar5 + 0x1ec));
            regmap_write(iVar10,uVar2,*(piVar6 + iVar5 + 0x1ed));
            regmap_write(iVar10,uVar2,*(piVar6 + iVar5 + 0x1ee));
            regmap_write(iVar10,uVar2,*(piVar6 + iVar5 + 0x1ef));
            regmap_write(iVar10,uVar2,*(piVar6 + iVar5 + 0x1f0));
            regmap_write(iVar10,uVar2,*(piVar6 + iVar5 + 0x1f1));
            regmap_write(iVar10,uVar2,*(piVar6 + iVar5 + 0x1f2));
            regmap_write(iVar10,uVar2,*(piVar6 + iVar5 + 499));
            regmap_write(iVar10,uVar2,*(piVar6 + iVar5 + 500));
            regmap_write(iVar10,uVar2,*(piVar6 + iVar5 + 0x1f5));
        }
        uVar2 = iVar4 + 0x1a24U & 0xffa4;
        snd_soc_component_update_bits(iVar1,uVar2,1 << (uVar3 & 0x1f),uVar11 << (uVar3 & 0x1f));
        snd_soc_component_read(iVar1,uVar2);
        uVar11 = 0;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_58) {
        return;
    }
    __stack_chk_fail(uVar11);
code_r0x080181a0:
    //WARNING: Does not return
    pcVar7 = SoftwareBreakpoint(0x5512,0x80181a4);
    (*pcVar7)();
}


// ===== sym.lpass_cdc_rx_macro_iir_filter_info @ 0x080181a4 (size 36) =====

ulong sym.lpass_cdc_rx_macro_iir_filter_info(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    iVar1 = *(arg1 + 0x78);
    *(arg2 + 0x40) = 4;
    *(arg2 + 0x48) = *(iVar1 + 8);
    return 0;
}


// ===== sym.lpass_cdc_rx_macro_iir_band_audio_mixer_get @ 0x080181c8 (size 368) =====

ulong sym.lpass_cdc_rx_macro_iir_band_audio_mixer_get(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t *puVar3;
    uint32_t uVar4;
    int64_t iVar5;
    code *pcVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    int iVar9;
    uint32_t uVar10;
    ulong uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar12;
    uint64_t uVar13;
    int64_t iVar14;
    int64_t iVar15;
    ulong unaff_x30;
    uchar auVar16 [16];
    int64_t iStack_110;
    uchar auStack_108 [8];
    ulong uStack_100;
    ulong uStack_f8;
    uint uStack_f0;
    int64_t iStack_e8;
    uchar *puStack_e0;
    code *pcStack_d8;
    uint64_t uStack_d0;
    uint64_t uStack_c0;
    uint64_t uStack_b8;
    uint64_t uStack_b0;
    uint64_t uStack_a8;
    ulong uStack_a0;
    uint64_t uStack_98;
    int *piStack_90;
    int64_t iStack_88;
    uint32_t auStack_80 [6];
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar15 = sp_el0;
    iStack_68 = *(iVar15 + 0x5e0);
    iVar15 = 0;
    piStack_90 = *(arg1 + 0x78);
    uVar11 = *(arg1 + 0x80);
    auStack_80[4] = 0;
    auStack_80[0] = 0;
    auStack_80[1] = 0;
    auStack_80[2] = 0;
    auStack_80[3] = 0;
    iVar2 = piStack_90[1];
    uVar12 = *piStack_90 * 0x80 + 0x1a2c;
    uVar13 = *piStack_90 * 0x80 + 0x1a30;
    iStack_88 = arg2;
    do {
        uVar1 = iVar2 * 0x14 + iVar15 & 0x7c;
        snd_soc_component_write(uVar11,uVar12,uVar1);
        uVar7 = snd_soc_component_read(uVar11,uVar13);
        snd_soc_component_write(uVar11,uVar12,uVar1 | 1);
        uVar8 = snd_soc_component_read(uVar11,uVar13);
        snd_soc_component_write(uVar11,uVar12,uVar1 | 2);
        iVar9 = snd_soc_component_read(uVar11,uVar13);
        snd_soc_component_write(uVar11,uVar12,uVar1 | 3);
        uVar10 = snd_soc_component_read(uVar11,uVar13);
        *(auStack_80 + iVar15) = uVar7 | uVar8 << 8 | iVar9 << 0x10 | (uVar10 & 0x3f) << 0x18;
        iVar15 = iVar15 + 4;
    } while (iVar15 != 0x14);
    memcpy(iStack_88 + 0x48,auStack_80,piStack_90[2]);
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_68) {
        return 0;
    }
    auVar16 = __stack_chk_fail();
    *extraout_x18 = sym.lpass_cdc_rx_macro_iir_band_audio_mixer_put;
    pcStack_d8 = sym.lpass_cdc_rx_macro_iir_band_audio_mixer_put;
    iVar15 = sp_el0;
    iStack_e8 = *(iVar15 + 0x5e0);
    puVar3 = *(auVar16._0_8_ + 0x78);
    iVar15 = *(auVar16._0_8_ + 0x80);
    uStack_f0 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    iStack_110 = 0;
    uVar10 = *puVar3;
    uVar4 = puVar3[2];
    puStack_e0 = &stack0xffffffffffffffa0;
    uStack_d0 = uVar8;
    uStack_c0 = uVar7;
    uStack_b8 = uVar1;
    uStack_b0 = uVar13;
    uStack_a8 = uVar12;
    uStack_a0 = uVar11;
    uStack_98 = iVar2 * 0x14;
    uVar12 = sym.lpass_cdc_rx_macro_get_data(iVar15,auStack_108,&iStack_110,0x8001708);
    if ((uVar12 & 1) == 0) {
        uVar11 = 0xffffffea;
    }
    else {
        memcpy(&uStack_100,auVar16._8_8_ + 0x48,puVar3[2]);
        snd_soc_component_write(iVar15,uVar10 * 0x80 + 0x1a2c,(uVar4 * 5 & 0x1f) << 2);
        iVar5 = iStack_110;
        uVar1 = uStack_100;
        iVar2 = uVar10 * 0x80 + 0x1a30;
        snd_soc_component_write(iVar15,iVar2,uStack_100 & 0xff);
        snd_soc_component_write(iVar15,iVar2,uVar1 >> 8 & 0xff);
        snd_soc_component_write(iVar15,iVar2,uVar1 >> 0x10 & 0xff);
        snd_soc_component_write(iVar15,iVar2,uVar1 >> 0x18 & 0x3f);
        if ((1 < uVar10) || (4 < uVar4)) goto code_r0x080184fc;
        iVar14 = 0;
        *(iVar5 + uVar10 * 100 + uVar4 * 0x14 + 0x1e2) = uVar1;
        do {
            uVar1 = *((&uStack_100 | 4) + iVar14);
            snd_soc_component_write(iVar15,iVar2,uVar1 & 0xff);
            snd_soc_component_write(iVar15,iVar2,uVar1 >> 8 & 0xff);
            snd_soc_component_write(iVar15,iVar2,uVar1 >> 0x10 & 0xff);
            snd_soc_component_write(iVar15,iVar2,uVar1 >> 0x18 & 0x3f);
            *(uVar10 * 100 + uVar4 * 0x14 + iVar5 + 0x1e6 + iVar14) = uVar1;
            iVar14 = iVar14 + 4;
        } while (iVar14 != 0x10);
        uVar11 = 0;
    }
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_e8) {
        return uVar11;
    }
    __stack_chk_fail(uVar11);
code_r0x080184fc:
    //WARNING: Does not return
    pcVar6 = SoftwareBreakpoint(0x5512,0x8018500);
    (*pcVar6)();
}


// ===== sym.lpass_cdc_rx_macro_iir_band_audio_mixer_put @ 0x08018338 (size 456) =====

void sym.lpass_cdc_rx_macro_iir_band_audio_mixer_put(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint32_t *puVar2;
    int64_t iVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    int64_t iVar7;
    code *pcVar8;
    uint64_t uVar9;
    ulong uVar10;
    ulong *in_x18;
    int64_t iVar11;
    ulong unaff_x30;
    int64_t iStack_80;
    uchar auStack_78 [8];
    ulong uStack_70;
    ulong uStack_68;
    uint uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_58 = *(iVar3 + 0x5e0);
    puVar2 = *(arg1 + 0x78);
    iVar3 = *(arg1 + 0x80);
    uStack_60 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    iStack_80 = 0;
    uVar4 = *puVar2;
    uVar5 = puVar2[2];
    uVar9 = sym.lpass_cdc_rx_macro_get_data(iVar3,auStack_78,&iStack_80,0x8001708);
    if ((uVar9 & 1) == 0) {
        uVar10 = 0xffffffea;
    }
    else {
        memcpy(&uStack_70,arg2 + 0x48,puVar2[2]);
        snd_soc_component_write(iVar3,uVar4 * 0x80 + 0x1a2c,(uVar5 * 5 & 0x1f) << 2);
        iVar7 = iStack_80;
        uVar6 = uStack_70;
        iVar1 = uVar4 * 0x80 + 0x1a30;
        snd_soc_component_write(iVar3,iVar1,uStack_70 & 0xff);
        snd_soc_component_write(iVar3,iVar1,uVar6 >> 8 & 0xff);
        snd_soc_component_write(iVar3,iVar1,uVar6 >> 0x10 & 0xff);
        snd_soc_component_write(iVar3,iVar1,uVar6 >> 0x18 & 0x3f);
        if ((1 < uVar4) || (4 < uVar5)) goto code_r0x080184fc;
        iVar11 = 0;
        *(iVar7 + uVar4 * 100 + uVar5 * 0x14 + 0x1e2) = uVar6;
        do {
            uVar6 = *((&uStack_70 | 4) + iVar11);
            snd_soc_component_write(iVar3,iVar1,uVar6 & 0xff);
            snd_soc_component_write(iVar3,iVar1,uVar6 >> 8 & 0xff);
            snd_soc_component_write(iVar3,iVar1,uVar6 >> 0x10 & 0xff);
            snd_soc_component_write(iVar3,iVar1,uVar6 >> 0x18 & 0x3f);
            *(uVar4 * 100 + uVar5 * 0x14 + iVar7 + 0x1e6 + iVar11) = uVar6;
            iVar11 = iVar11 + 4;
        } while (iVar11 != 0x10);
        uVar10 = 0;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_58) {
        return;
    }
    __stack_chk_fail(uVar10);
code_r0x080184fc:
    //WARNING: Does not return
    pcVar8 = SoftwareBreakpoint(0x5512,0x8018500);
    (*pcVar8)();
}


// ===== sym.lpass_cdc_rx_macro_fir_filter_info @ 0x08018500 (size 36) =====

ulong sym.lpass_cdc_rx_macro_fir_filter_info(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    iVar1 = *(arg1 + 0x78);
    *(arg2 + 0x40) = 4;
    *(arg2 + 0x48) = *(iVar1 + 8);
    return 0;
}


// ===== sym.lpass_cdc_rx_macro_fir_audio_mixer_get @ 0x08018524 (size 476) =====

uint64_t sym.lpass_cdc_rx_macro_fir_audio_mixer_get(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint8_t uVar3;
    bool bVar4;
    int64_t iVar5;
    code *pcVar6;
    int iVar7;
    uint32_t uVar8;
    int iVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    ulong *puVar12;
    char *pcVar13;
    uint64_t uVar14;
    bool bVar15;
    uint32_t uVar16;
    uint32_t *puVar17;
    uint uVar18;
    char *pcVar19;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong uVar20;
    ulong uVar21;
    uint32_t *puVar22;
    uint64_t uVar23;
    ulong uVar24;
    uint uVar25;
    int64_t iVar26;
    ulong unaff_x30;
    uchar auVar27 [16];
    ulong *puStack_400;
    uchar auStack_3f8 [12];
    uint32_t uStack_3ec;
    uint32_t auStack_3e8 [100];
    int64_t iStack_258;
    uchar *puStack_250;
    code *pcStack_248;
    ulong *puStack_1f0;
    uchar auStack_1e8 [12];
    uint32_t uStack_1dc;
    uint auStack_1d8 [100];
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar26 = sp_el0;
    iStack_48 = *(iVar26 + 0x5e0);
    iVar26 = *(arg1 + 0x80);
    uVar16 = **(arg1 + 0x78);
    uVar8 = (*(arg1 + 0x78))[1];
    memset(auStack_1d8,0,400);
    puStack_1f0 = NULL;
    if (iVar26 == 0) {
        iVar7 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_audio_mixer_get._rs,"lpass_cdc_rx_macro_fir_audio_mixer_get");
        if (iVar7 != 0) {
            _printk(0x800180e,"lpass_cdc_rx_macro_fir_audio_mixer_get");
        }
code_r0x080185e8:
        uVar10 = 0xffffffea;
    }
    else {
        uVar10 = sym.lpass_cdc_rx_macro_get_data(iVar26,auStack_1e8,&puStack_1f0,0x80024e2);
        if ((uVar10 & 1) == 0) goto code_r0x080185e8;
        if (1 < uVar16) {
            iVar7 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_audio_mixer_get._rs.329,
                                 "lpass_cdc_rx_macro_fir_audio_mixer_get");
            if (iVar7 != 0) {
                pcVar19 = "%s: path_idx:%d is invalid\n";
                uVar8 = uVar16;
code_r0x08018658:
                _dev_err(*puStack_1f0,pcVar19,"lpass_cdc_rx_macro_fir_audio_mixer_get",uVar8);
            }
            goto code_r0x080185e8;
        }
        if (1 < uVar8) {
            iVar7 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_audio_mixer_get._rs.330,
                                 "lpass_cdc_rx_macro_fir_audio_mixer_get");
            if (iVar7 != 0) {
                pcVar19 = "%s: grp_idx:%d is invalid\n";
                goto code_r0x08018658;
            }
            goto code_r0x080185e8;
        }
        uStack_1dc = *(puStack_1f0 + uVar8 * 4 + uVar16 * 8 + 0x8ec);
        if (uStack_1dc == 0) {
            iVar26 = 4;
        }
        else {
            iVar5 = 0;
            do {
                iVar26 = iVar5;
                if (iVar26 == 400) {
    //WARNING: Does not return
                    pcVar6 = SoftwareBreakpoint(0x5512,0x80186fc);
                    (*pcVar6)();
                }
                *(auStack_1d8 + iVar26) = *(puStack_1f0 + iVar26 + uVar8 * 400 + uVar16 * 800 + 0x2ac);
                iVar5 = iVar26 + 4;
            } while (uStack_1dc * 4 - (iVar26 + 4) != 0);
            iVar26 = iVar26 + 8;
        }
        memcpy(arg2 + 0x48,&uStack_1dc,iVar26);
        uVar10 = 0;
    }
    iVar26 = sp_el0;
    if (*(iVar26 + 0x5e0) == iStack_48) {
        return uVar10;
    }
    auVar27 = __stack_chk_fail(uVar10);
    *extraout_x18 = sym.lpass_cdc_rx_macro_fir_audio_mixer_put;
    pcStack_248 = sym.lpass_cdc_rx_macro_fir_audio_mixer_put;
    pcVar19 = &puStack_400;
    iVar26 = sp_el0;
    iStack_258 = *(iVar26 + 0x5e0);
    pcVar13 = 0x190;
    puVar22 = *(auVar27._0_8_ + 0x78);
    iVar26 = *(auVar27._0_8_ + 0x80);
    uVar16 = *puVar22;
    uVar10 = uVar16;
    uVar8 = puVar22[1];
    uVar14 = uVar8;
    puStack_250 = &stack0xffffffffffffffc0;
    memset(auStack_3e8,0);
    puStack_400 = NULL;
    if (iVar26 == 0) {
        iVar7 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_audio_mixer_put._rs,"lpass_cdc_rx_macro_fir_audio_mixer_put");
        pcVar19 = pcVar13;
        if (iVar7 != 0) {
            _printk(0x800180e,"lpass_cdc_rx_macro_fir_audio_mixer_put");
            pcVar19 = pcVar13;
        }
code_r0x080187d0:
        uVar11 = 0xffffffea;
    }
    else {
        uVar11 = sym.lpass_cdc_rx_macro_get_data(iVar26,auStack_3f8,&puStack_400,0x80026ae);
        puVar12 = puStack_400;
        if ((uVar11 & 1) == 0) goto code_r0x080187d0;
        if (1 < uVar16) {
            iVar7 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_audio_mixer_put._rs.332,
                                 "lpass_cdc_rx_macro_fir_audio_mixer_put");
            if (iVar7 != 0) {
                pcVar13 = "%s: path_idx:%d is invalid\n";
                uVar14 = uVar16;
code_r0x08018848:
                pcVar19 = "lpass_cdc_rx_macro_fir_audio_mixer_put";
                _dev_err(*puStack_400,pcVar13,"lpass_cdc_rx_macro_fir_audio_mixer_put",uVar14);
            }
            goto code_r0x080187d0;
        }
        if (1 < uVar8) {
            iVar7 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_audio_mixer_put._rs.333,
                                 "lpass_cdc_rx_macro_fir_audio_mixer_put");
            if (iVar7 != 0) {
                pcVar13 = "%s: grp_idx:%d is invalid\n";
                goto code_r0x08018848;
            }
            goto code_r0x080187d0;
        }
        if ((puStack_400[0x126] == 0) || (*(puStack_400 + 0x59) == '\0')) {
            uVar11 = 0;
        }
        else {
            uVar1 = *(auVar27._8_8_ + 0x48);
            uVar11 = uVar1;
            uStack_3ec = uVar1;
            if (uVar1 < 0x65) {
                pcVar19 = uVar11 << 2;
                *(puStack_400 + uVar14 * 4 + uVar10 * 8 + 0x8ec) = uVar1;
                memcpy(auStack_3e8,auVar27._8_8_ + 0x4c);
                if (uVar1 != 0) {
                    puVar22 = &uStack_3ec;
                    puVar17 = puVar12 + uVar14 * 400 + uVar10 * 800 + 0x2ac;
                    do {
                        puVar22 = puVar22 + 1;
                        uVar11 = uVar11 - 1;
                        *puVar17 = *puVar22;
                        puVar17 = puVar17 + 1;
                    } while (uVar11 != 0);
                }
                uVar11 = 0;
                uVar3 = *(puVar12 + uVar10 + 0x50);
                *(puVar12 + uVar14 + uVar10 * 2 + 0x55) = 0;
                if (*(puVar12 + uVar10 + 0x11e) + *(puVar12 + uVar10 * 8 + 0x8ec) == uVar3) {
                    pcVar19 = uVar16;
                    uVar11 = sym.set_fir_filter_coeff(iVar26,puVar12,pcVar19);
                }
            }
            else {
                iVar7 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_audio_mixer_put._rs.334,
                                     "lpass_cdc_rx_macro_fir_audio_mixer_put");
                if (iVar7 != 0) {
                    pcVar19 = "lpass_cdc_rx_macro_fir_audio_mixer_put";
                    _dev_err(*puVar12,"%s: inavlid number of RX_FIR coefficients:%d in path:%d, group:%d\n",
                             "lpass_cdc_rx_macro_fir_audio_mixer_put",uVar11,uVar16,uVar8);
                }
                uVar11 = 0xffffffea;
                *(puVar12 + uVar14 * 4 + uVar10 * 8 + 0x8ec) = 0;
            }
        }
    }
    iVar26 = sp_el0;
    if (*(iVar26 + 0x5e0) == iStack_258) {
        return uVar11;
    }
    auVar27 = __stack_chk_fail(uVar11);
    puVar12 = auVar27._8_8_;
    uVar21 = auVar27._0_8_;
    *extraout_x18_00 = sym.set_fir_filter_coeff;
    iVar7 = pcVar19;
    if (iVar7 == 0) {
        uVar18 = 0x1464;
        uVar16 = 0x1468;
        uVar24 = 0x145c;
        uVar25 = 0x1400;
    }
    else {
        if (iVar7 != 1) {
            iVar7 = ___ratelimit(obj.set_fir_filter_coeff._rs,"set_fir_filter_coeff");
            if (iVar7 == 0) {
                uVar8 = 0xffffffea;
            }
            else {
                _dev_err(*puVar12,"%s: inavlid FIR ID: %d\n","set_fir_filter_coeff",pcVar19 & 0xffffffff);
                uVar8 = 0xffffffea;
            }
            goto code_r0x08018e08;
        }
        uVar24 = 0x151c;
        uVar18 = 0x1524;
        uVar16 = 0x1528;
        uVar25 = 0x14c0;
    }
    uVar10 = pcVar19 & 0xffffffff;
    if ((*(puVar12 + (pcVar19 & 0xffffffff) * 2 + 0x55) == '\0') || (*(puVar12 + uVar10 * 2 + 0x56) == '\0')) {
        sym.lpass_cdc_rx_macro_mclk_enable(puVar12,1,0);
        uVar20 = puVar12[0x126];
        uVar8 = clk_prepare(uVar20);
        if ((uVar8 == 0) && (uVar8 = clk_enable(uVar20), uVar8 != 0)) {
            clk_unprepare(uVar20);
        }
        snd_soc_component_update_bits(uVar21,0x1004,1,1);
        snd_soc_component_update_bits(uVar21,uVar25,0xc0,0xc0);
        snd_soc_component_update_bits(uVar21,uVar25,0xc0,0x80);
        usleep_range_state(10,0xb,2);
        iVar26 = 0;
        bVar15 = false;
        do {
            pcVar19 = puVar12 + iVar26 + uVar10 * 2 + 0x55;
            if (*pcVar19 == '\0') {
                uVar1 = *(puVar12 + iVar26 * 4 + uVar10 * 8 + 0x8ec);
                if (100 < uVar1) {
                    iVar9 = ___ratelimit(obj.set_fir_filter_coeff._rs.322,"set_fir_filter_coeff");
                    if (iVar9 != 0) {
                        _dev_err(*puVar12,"%s: inavlid number of RX_FIR coefficients:%d in path:%d, group:%d\n",
                                 "set_fir_filter_coeff",uVar1,iVar7,iVar26);
                    }
                    uVar8 = 0xffffffea;
                    break;
                }
                uVar14 = iVar26 * 100;
                uVar11 = (uVar1 & 0xfffffffe) + uVar14;
                if (uVar14 < uVar11) {
                    uVar23 = 0;
                    iVar9 = iVar26 * 0x32;
                    puVar22 = puVar12 + uVar10 * 100 + iVar26 * 0x32 + 0x56;
                    do {
                        if (99 < uVar23) goto code_r0x08018e80;
                        uVar2 = puVar22[-1];
                        snd_soc_component_write(uVar21,uVar16,uVar2 & 0xff);
                        snd_soc_component_write(uVar21,uVar16 | 4,uVar2 >> 8 & 0xff);
                        snd_soc_component_write(uVar21,uVar16 + 8,uVar2 >> 0x10 & 0xff);
                        snd_soc_component_write(uVar21,uVar16 + 0xc,uVar2 >> 0x18);
                        uVar2 = *puVar22;
                        uVar23 = uVar23 + 2;
                        snd_soc_component_write(uVar21,uVar16 | 0x10,uVar2 & 0xff);
                        snd_soc_component_write(uVar21,uVar16 | 0x14,uVar2 >> 8 & 0xff);
                        snd_soc_component_write(uVar21,uVar16 + 0x18,uVar2 >> 0x10 & 0xff);
                        snd_soc_component_write(uVar21,uVar16 + 0x1c,uVar2 >> 0x18);
                        snd_soc_component_write(uVar21,uVar18,iVar9);
                        snd_soc_component_update_bits(uVar21,uVar24,2,2);
                        usleep_range_state(0xd,0xf,2);
                        snd_soc_component_update_bits(uVar21,uVar24,2,0);
                        iVar9 = iVar9 + 1;
                        puVar22 = puVar22 + 2;
                    } while (uVar14 + uVar23 < uVar11);
                    if ((uVar1 & 1) != 0) {
                        if (99 < uVar23) {
code_r0x08018e80:
    //WARNING: Does not return
                            pcVar6 = SoftwareBreakpoint(0x5512,0x8018e84);
                            (*pcVar6)();
                        }
                        uVar14 = uVar14 + uVar23;
code_r0x08018af8:
                        iVar9 = uVar14;
                        uVar1 = *(puVar12 + uVar23 * 4 + iVar26 * 400 + uVar10 * 800 + 0x2ac);
                        if (iVar9 < 0) {
                            iVar9 = iVar9 + 1;
                        }
                        snd_soc_component_write(uVar21,uVar16,uVar1 & 0xff);
                        snd_soc_component_write(uVar21,uVar16 | 4,uVar1 >> 8 & 0xff);
                        snd_soc_component_write(uVar21,uVar16 + 8,uVar1 >> 0x10 & 0xff);
                        snd_soc_component_write(uVar21,uVar16 + 0xc,uVar1 >> 0x18);
                        snd_soc_component_write(uVar21,uVar16 | 0x10,0);
                        snd_soc_component_write(uVar21,uVar16 | 0x14,0);
                        snd_soc_component_write(uVar21,uVar16 + 0x18,0);
                        snd_soc_component_write(uVar21,uVar16 + 0x1c,0);
                        snd_soc_component_write(uVar21,uVar18,iVar9 >> 1);
                        snd_soc_component_update_bits(uVar21,uVar24,2,2);
                        usleep_range_state(0xd,0xf,2);
                        snd_soc_component_update_bits(uVar21,uVar24,2,0);
                    }
                }
                else if ((uVar1 & 1) != 0) {
                    uVar23 = 0;
                    goto code_r0x08018af8;
                }
                *pcVar19 = '\x01';
            }
            iVar26 = 1;
            bVar4 = !bVar15;
            bVar15 = true;
        } while (bVar4);
        snd_soc_component_update_bits(uVar21,uVar25,0x80,0);
        snd_soc_component_update_bits(uVar21,0x1004,1,0);
        uVar21 = puVar12[0x126];
        clk_disable(uVar21);
        clk_unprepare(uVar21);
        sym.lpass_cdc_rx_macro_mclk_enable(puVar12,0,0);
    }
    else {
        uVar8 = 0;
    }
code_r0x08018e08:
    return uVar8;
}


// ===== sym.lpass_cdc_rx_macro_fir_audio_mixer_put @ 0x08018700 (size 640) =====

uint64_t sym.lpass_cdc_rx_macro_fir_audio_mixer_put(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint8_t uVar3;
    bool bVar4;
    code *pcVar5;
    int iVar6;
    uint32_t uVar7;
    int iVar8;
    uint64_t uVar9;
    ulong *puVar10;
    char *pcVar11;
    uint64_t uVar12;
    bool bVar13;
    uint32_t uVar14;
    uint32_t *puVar15;
    uint uVar16;
    char *pcVar17;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar18;
    ulong uVar19;
    uint32_t *puVar20;
    uint64_t uVar21;
    ulong uVar22;
    uint uVar23;
    int64_t iVar24;
    uint64_t uVar25;
    ulong unaff_x30;
    uchar auVar26 [16];
    ulong *puStack_210;
    uchar auStack_208 [12];
    uint32_t uStack_1fc;
    uint32_t auStack_1f8 [100];
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    pcVar17 = &puStack_210;
    iVar24 = sp_el0;
    iStack_68 = *(iVar24 + 0x5e0);
    pcVar11 = 0x190;
    iVar24 = *(arg1 + 0x80);
    uVar14 = **(arg1 + 0x78);
    uVar25 = uVar14;
    uVar7 = (*(arg1 + 0x78))[1];
    uVar12 = uVar7;
    memset(auStack_1f8,0);
    puStack_210 = NULL;
    if (iVar24 == 0) {
        iVar6 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_audio_mixer_put._rs,"lpass_cdc_rx_macro_fir_audio_mixer_put");
        pcVar17 = pcVar11;
        if (iVar6 != 0) {
            _printk(0x800180e,"lpass_cdc_rx_macro_fir_audio_mixer_put");
            pcVar17 = pcVar11;
        }
code_r0x080187d0:
        uVar9 = 0xffffffea;
    }
    else {
        uVar9 = sym.lpass_cdc_rx_macro_get_data(iVar24,auStack_208,&puStack_210,0x80026ae);
        puVar10 = puStack_210;
        if ((uVar9 & 1) == 0) goto code_r0x080187d0;
        if (1 < uVar14) {
            iVar6 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_audio_mixer_put._rs.332,
                                 "lpass_cdc_rx_macro_fir_audio_mixer_put");
            if (iVar6 != 0) {
                pcVar11 = "%s: path_idx:%d is invalid\n";
                uVar12 = uVar14;
code_r0x08018848:
                pcVar17 = "lpass_cdc_rx_macro_fir_audio_mixer_put";
                _dev_err(*puStack_210,pcVar11,"lpass_cdc_rx_macro_fir_audio_mixer_put",uVar12);
            }
            goto code_r0x080187d0;
        }
        if (1 < uVar7) {
            iVar6 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_audio_mixer_put._rs.333,
                                 "lpass_cdc_rx_macro_fir_audio_mixer_put");
            if (iVar6 != 0) {
                pcVar11 = "%s: grp_idx:%d is invalid\n";
                goto code_r0x08018848;
            }
            goto code_r0x080187d0;
        }
        if ((puStack_210[0x126] == 0) || (*(puStack_210 + 0x59) == '\0')) {
            uVar9 = 0;
        }
        else {
            uVar1 = *(arg2 + 0x48);
            uVar9 = uVar1;
            uStack_1fc = uVar1;
            if (uVar1 < 0x65) {
                pcVar17 = uVar9 << 2;
                *(puStack_210 + uVar12 * 4 + uVar25 * 8 + 0x8ec) = uVar1;
                memcpy(auStack_1f8,arg2 + 0x4c);
                if (uVar1 != 0) {
                    puVar20 = &uStack_1fc;
                    puVar15 = puVar10 + uVar12 * 400 + uVar25 * 800 + 0x2ac;
                    do {
                        puVar20 = puVar20 + 1;
                        uVar9 = uVar9 - 1;
                        *puVar15 = *puVar20;
                        puVar15 = puVar15 + 1;
                    } while (uVar9 != 0);
                }
                uVar9 = 0;
                uVar3 = *(puVar10 + uVar25 + 0x50);
                *(puVar10 + uVar12 + uVar25 * 2 + 0x55) = 0;
                if (*(puVar10 + uVar25 + 0x11e) + *(puVar10 + uVar25 * 8 + 0x8ec) == uVar3) {
                    pcVar17 = uVar14;
                    uVar9 = sym.set_fir_filter_coeff(iVar24,puVar10,pcVar17);
                }
            }
            else {
                iVar6 = ___ratelimit(obj.lpass_cdc_rx_macro_fir_audio_mixer_put._rs.334,
                                     "lpass_cdc_rx_macro_fir_audio_mixer_put");
                if (iVar6 != 0) {
                    pcVar17 = "lpass_cdc_rx_macro_fir_audio_mixer_put";
                    _dev_err(*puVar10,"%s: inavlid number of RX_FIR coefficients:%d in path:%d, group:%d\n",
                             "lpass_cdc_rx_macro_fir_audio_mixer_put",uVar9,uVar14,uVar7);
                }
                uVar9 = 0xffffffea;
                *(puVar10 + uVar12 * 4 + uVar25 * 8 + 0x8ec) = 0;
            }
        }
    }
    iVar24 = sp_el0;
    if (*(iVar24 + 0x5e0) == iStack_68) {
        return uVar9;
    }
    auVar26 = __stack_chk_fail(uVar9);
    puVar10 = auVar26._8_8_;
    uVar19 = auVar26._0_8_;
    *extraout_x18 = sym.set_fir_filter_coeff;
    iVar6 = pcVar17;
    if (iVar6 == 0) {
        uVar16 = 0x1464;
        uVar14 = 0x1468;
        uVar22 = 0x145c;
        uVar23 = 0x1400;
    }
    else {
        if (iVar6 != 1) {
            iVar6 = ___ratelimit(obj.set_fir_filter_coeff._rs,"set_fir_filter_coeff");
            if (iVar6 == 0) {
                uVar7 = 0xffffffea;
            }
            else {
                _dev_err(*puVar10,"%s: inavlid FIR ID: %d\n","set_fir_filter_coeff",pcVar17 & 0xffffffff);
                uVar7 = 0xffffffea;
            }
            goto code_r0x08018e08;
        }
        uVar22 = 0x151c;
        uVar16 = 0x1524;
        uVar14 = 0x1528;
        uVar23 = 0x14c0;
    }
    uVar25 = pcVar17 & 0xffffffff;
    if ((*(puVar10 + (pcVar17 & 0xffffffff) * 2 + 0x55) == '\0') || (*(puVar10 + uVar25 * 2 + 0x56) == '\0')) {
        sym.lpass_cdc_rx_macro_mclk_enable(puVar10,1,0);
        uVar18 = puVar10[0x126];
        uVar7 = clk_prepare(uVar18);
        if ((uVar7 == 0) && (uVar7 = clk_enable(uVar18), uVar7 != 0)) {
            clk_unprepare(uVar18);
        }
        snd_soc_component_update_bits(uVar19,0x1004,1,1);
        snd_soc_component_update_bits(uVar19,uVar23,0xc0,0xc0);
        snd_soc_component_update_bits(uVar19,uVar23,0xc0,0x80);
        usleep_range_state(10,0xb,2);
        iVar24 = 0;
        bVar13 = false;
        do {
            pcVar17 = puVar10 + iVar24 + uVar25 * 2 + 0x55;
            if (*pcVar17 == '\0') {
                uVar1 = *(puVar10 + iVar24 * 4 + uVar25 * 8 + 0x8ec);
                if (100 < uVar1) {
                    iVar8 = ___ratelimit(obj.set_fir_filter_coeff._rs.322,"set_fir_filter_coeff");
                    if (iVar8 != 0) {
                        _dev_err(*puVar10,"%s: inavlid number of RX_FIR coefficients:%d in path:%d, group:%d\n",
                                 "set_fir_filter_coeff",uVar1,iVar6,iVar24);
                    }
                    uVar7 = 0xffffffea;
                    break;
                }
                uVar12 = iVar24 * 100;
                uVar9 = (uVar1 & 0xfffffffe) + uVar12;
                if (uVar12 < uVar9) {
                    uVar21 = 0;
                    iVar8 = iVar24 * 0x32;
                    puVar20 = puVar10 + uVar25 * 100 + iVar24 * 0x32 + 0x56;
                    do {
                        if (99 < uVar21) goto code_r0x08018e80;
                        uVar2 = puVar20[-1];
                        snd_soc_component_write(uVar19,uVar14,uVar2 & 0xff);
                        snd_soc_component_write(uVar19,uVar14 | 4,uVar2 >> 8 & 0xff);
                        snd_soc_component_write(uVar19,uVar14 + 8,uVar2 >> 0x10 & 0xff);
                        snd_soc_component_write(uVar19,uVar14 + 0xc,uVar2 >> 0x18);
                        uVar2 = *puVar20;
                        uVar21 = uVar21 + 2;
                        snd_soc_component_write(uVar19,uVar14 | 0x10,uVar2 & 0xff);
                        snd_soc_component_write(uVar19,uVar14 | 0x14,uVar2 >> 8 & 0xff);
                        snd_soc_component_write(uVar19,uVar14 + 0x18,uVar2 >> 0x10 & 0xff);
                        snd_soc_component_write(uVar19,uVar14 + 0x1c,uVar2 >> 0x18);
                        snd_soc_component_write(uVar19,uVar16,iVar8);
                        snd_soc_component_update_bits(uVar19,uVar22,2,2);
                        usleep_range_state(0xd,0xf,2);
                        snd_soc_component_update_bits(uVar19,uVar22,2,0);
                        iVar8 = iVar8 + 1;
                        puVar20 = puVar20 + 2;
                    } while (uVar12 + uVar21 < uVar9);
                    if ((uVar1 & 1) != 0) {
                        if (99 < uVar21) {
code_r0x08018e80:
    //WARNING: Does not return
                            pcVar5 = SoftwareBreakpoint(0x5512,0x8018e84);
                            (*pcVar5)();
                        }
                        uVar12 = uVar12 + uVar21;
code_r0x08018af8:
                        iVar8 = uVar12;
                        uVar1 = *(puVar10 + uVar21 * 4 + iVar24 * 400 + uVar25 * 800 + 0x2ac);
                        if (iVar8 < 0) {
                            iVar8 = iVar8 + 1;
                        }
                        snd_soc_component_write(uVar19,uVar14,uVar1 & 0xff);
                        snd_soc_component_write(uVar19,uVar14 | 4,uVar1 >> 8 & 0xff);
                        snd_soc_component_write(uVar19,uVar14 + 8,uVar1 >> 0x10 & 0xff);
                        snd_soc_component_write(uVar19,uVar14 + 0xc,uVar1 >> 0x18);
                        snd_soc_component_write(uVar19,uVar14 | 0x10,0);
                        snd_soc_component_write(uVar19,uVar14 | 0x14,0);
                        snd_soc_component_write(uVar19,uVar14 + 0x18,0);
                        snd_soc_component_write(uVar19,uVar14 + 0x1c,0);
                        snd_soc_component_write(uVar19,uVar16,iVar8 >> 1);
                        snd_soc_component_update_bits(uVar19,uVar22,2,2);
                        usleep_range_state(0xd,0xf,2);
                        snd_soc_component_update_bits(uVar19,uVar22,2,0);
                    }
                }
                else if ((uVar1 & 1) != 0) {
                    uVar21 = 0;
                    goto code_r0x08018af8;
                }
                *pcVar17 = '\x01';
            }
            iVar24 = 1;
            bVar4 = !bVar13;
            bVar13 = true;
        } while (bVar4);
        snd_soc_component_update_bits(uVar19,uVar23,0x80,0);
        snd_soc_component_update_bits(uVar19,0x1004,1,0);
        uVar19 = puVar10[0x126];
        clk_disable(uVar19);
        clk_unprepare(uVar19);
        sym.lpass_cdc_rx_macro_mclk_enable(puVar10,0,0);
    }
    else {
        uVar7 = 0;
    }
code_r0x08018e08:
    return uVar7;
}


// ===== sym.set_fir_filter_coeff @ 0x08018980 (size 1284) =====

int sym.set_fir_filter_coeff(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    bool bVar4;
    code *pcVar5;
    int iVar6;
    int iVar7;
    bool bVar8;
    uint32_t uVar9;
    uint uVar10;
    char *pcVar11;
    ulong *in_x18;
    ulong uVar12;
    uint32_t *puVar13;
    uint64_t uVar14;
    ulong uVar15;
    uint uVar16;
    int64_t iVar17;
    uint64_t uVar18;
    int iVar19;
    uint64_t uVar20;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = arg3;
    if (iVar7 == 0) {
        uVar10 = 0x1464;
        uVar9 = 0x1468;
        uVar15 = 0x145c;
        uVar16 = 0x1400;
    }
    else {
        if (iVar7 != 1) {
            iVar7 = ___ratelimit(obj.set_fir_filter_coeff._rs,"set_fir_filter_coeff");
            if (iVar7 == 0) {
                return -0x16;
            }
            _dev_err(*arg2,"%s: inavlid FIR ID: %d\n","set_fir_filter_coeff",arg3 & 0xffffffff);
            return -0x16;
        }
        uVar15 = 0x151c;
        uVar10 = 0x1524;
        uVar9 = 0x1528;
        uVar16 = 0x14c0;
    }
    uVar18 = arg3 & 0xffffffff;
    if ((*(arg2 + (arg3 & 0xffffffffU) * 2 + 0x55) == '\0') || (*(arg2 + uVar18 * 2 + 0x56) == '\0')) {
        sym.lpass_cdc_rx_macro_mclk_enable(arg2,1,0);
        uVar12 = *(arg2 + 0x930);
        iVar6 = clk_prepare(uVar12);
        if ((iVar6 == 0) && (iVar6 = clk_enable(uVar12), iVar6 != 0)) {
            clk_unprepare(uVar12);
        }
        snd_soc_component_update_bits(arg1,0x1004,1,1);
        snd_soc_component_update_bits(arg1,uVar16,0xc0,0xc0);
        snd_soc_component_update_bits(arg1,uVar16,0xc0,0x80);
        usleep_range_state(10,0xb,2);
        iVar17 = 0;
        bVar8 = false;
        do {
            pcVar11 = arg2 + uVar18 * 2 + iVar17 + 0x55;
            if (*pcVar11 == '\0') {
                uVar2 = *(arg2 + uVar18 * 8 + iVar17 * 4 + 0x8ec);
                if (100 < uVar2) {
                    iVar6 = ___ratelimit(obj.set_fir_filter_coeff._rs.322,"set_fir_filter_coeff");
                    if (iVar6 != 0) {
                        _dev_err(*arg2,"%s: inavlid number of RX_FIR coefficients:%d in path:%d, group:%d\n",
                                 "set_fir_filter_coeff",uVar2,iVar7,iVar17);
                    }
                    iVar6 = -0x16;
                    break;
                }
                uVar20 = iVar17 * 100;
                uVar1 = (uVar2 & 0xfffffffe) + uVar20;
                if (uVar20 < uVar1) {
                    uVar14 = 0;
                    iVar19 = iVar17 * 0x32;
                    puVar13 = arg2 + uVar18 * 800 + 0x2b0 + iVar17 * 400;
                    do {
                        if (99 < uVar14) goto code_r0x08018e80;
                        uVar3 = puVar13[-1];
                        snd_soc_component_write(arg1,uVar9,uVar3 & 0xff);
                        snd_soc_component_write(arg1,uVar9 | 4,uVar3 >> 8 & 0xff);
                        snd_soc_component_write(arg1,uVar9 + 8,uVar3 >> 0x10 & 0xff);
                        snd_soc_component_write(arg1,uVar9 + 0xc,uVar3 >> 0x18);
                        uVar3 = *puVar13;
                        uVar14 = uVar14 + 2;
                        snd_soc_component_write(arg1,uVar9 | 0x10,uVar3 & 0xff);
                        snd_soc_component_write(arg1,uVar9 | 0x14,uVar3 >> 8 & 0xff);
                        snd_soc_component_write(arg1,uVar9 + 0x18,uVar3 >> 0x10 & 0xff);
                        snd_soc_component_write(arg1,uVar9 + 0x1c,uVar3 >> 0x18);
                        snd_soc_component_write(arg1,uVar10,iVar19);
                        snd_soc_component_update_bits(arg1,uVar15,2,2);
                        usleep_range_state(0xd,0xf,2);
                        snd_soc_component_update_bits(arg1,uVar15,2,0);
                        iVar19 = iVar19 + 1;
                        puVar13 = puVar13 + 2;
                    } while (uVar20 + uVar14 < uVar1);
                    if ((uVar2 & 1) != 0) {
                        if (99 < uVar14) {
code_r0x08018e80:
    //WARNING: Does not return
                            pcVar5 = SoftwareBreakpoint(0x5512,0x8018e84);
                            (*pcVar5)();
                        }
                        uVar20 = uVar20 + uVar14;
code_r0x08018af8:
                        iVar19 = uVar20;
                        uVar2 = *(arg2 + uVar18 * 800 + iVar17 * 400 + uVar14 * 4 + 0x2ac);
                        if (iVar19 < 0) {
                            iVar19 = iVar19 + 1;
                        }
                        snd_soc_component_write(arg1,uVar9,uVar2 & 0xff);
                        snd_soc_component_write(arg1,uVar9 | 4,uVar2 >> 8 & 0xff);
                        snd_soc_component_write(arg1,uVar9 + 8,uVar2 >> 0x10 & 0xff);
                        snd_soc_component_write(arg1,uVar9 + 0xc,uVar2 >> 0x18);
                        snd_soc_component_write(arg1,uVar9 | 0x10,0);
                        snd_soc_component_write(arg1,uVar9 | 0x14,0);
                        snd_soc_component_write(arg1,uVar9 + 0x18,0);
                        snd_soc_component_write(arg1,uVar9 + 0x1c,0);
                        snd_soc_component_write(arg1,uVar10,iVar19 >> 1);
                        snd_soc_component_update_bits(arg1,uVar15,2,2);
                        usleep_range_state(0xd,0xf,2);
                        snd_soc_component_update_bits(arg1,uVar15,2,0);
                    }
                }
                else if ((uVar2 & 1) != 0) {
                    uVar14 = 0;
                    goto code_r0x08018af8;
                }
                *pcVar11 = '\x01';
            }
            iVar17 = 1;
            bVar4 = !bVar8;
            bVar8 = true;
        } while (bVar4);
        snd_soc_component_update_bits(arg1,uVar16,0x80,0);
        snd_soc_component_update_bits(arg1,0x1004,1,0);
        uVar15 = *(arg2 + 0x930);
        clk_disable(uVar15);
        clk_unprepare(uVar15);
        sym.lpass_cdc_rx_macro_mclk_enable(arg2,0,0);
    }
    else {
        iVar6 = 0;
    }
    return iVar6;
}


// ===== sym.lpass_cdc_rx_macro_get_channel_map @ 0x08018e84 (size 544) =====

void sym.lpass_cdc_rx_macro_get_channel_map(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    code *pcVar4;
    bool bVar5;
    bool bVar6;
    uint64_t uVar7;
    ulong uVar8;
    uint32_t *in_x4;
    uint32_t uVar9;
    uint64_t uVar10;
    uint32_t uVar11;
    ulong *in_x18;
    int64_t iVar12;
    ulong unaff_x30;
    int64_t iStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_48 = *(iVar12 + 0x5e0);
    iVar12 = *(arg1 + 0x58);
    iStack_58 = 0;
    uStack_50 = 0;
    uVar7 = sym.lpass_cdc_rx_macro_get_data(iVar12,&stack0xffffffffffffffb0,&stack0xffffffffffffffa8,0x80017d7);
    if ((uVar7 & 1) == 0) {
        uVar8 = 0xffffffea;
    }
    else {
        uVar9 = *(arg1 + 8) - 1;
        if (uVar9 < 7) {
    //switch table (6 cases) at 0x8001076
            switch(*(uVar9 + 0x8001076) * 4 + 0x8018f10) {
            default:
                uVar10 = *(iStack_58 + *(arg1 + 8) * 8 + 0x140);
                uVar2 = (uVar10 & 0x2a) >> 1 | (uVar10 & 0x15) << 1;
                uVar3 = (uVar2 & 0x3333333333333333) << 2;
                uVar7 = 6;
                if ((uVar10 & 0x3f) != 0) {
                    uVar7 = LZCOUNT((uVar3 >> 4 | ((uVar2 & 0xcccccccccccccccc) >> 2 | uVar3 & 0xf0f0f0f0f0f0f0f) << 4)
                                    << 0x38);
                }
                if (uVar7 < 6) {
                    uVar9 = 1 << (uVar7 & 0x1f);
                    if (((uVar7 < 5) && (uVar7 = -2L << (uVar7 & 0x3f) & uVar10 & 0x3f, uVar7 != 0)) &&
                       (uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1,
                       uVar2 = (uVar7 & 0x3333333333333333) << 2,
                       uVar11 = LZCOUNT((uVar2 >> 4 |
                                        ((uVar7 & 0xcccccccccccccccc) >> 2 | uVar2 & 0xf0f0f0f0f0f0f0f) << 4) << 0x38),
                       uVar11 < 6)) {
                        uVar9 = 1 << (uVar11 & 0x1f) | uVar9;
                    }
                }
                else {
                    uVar9 = 0;
                }
                if ((uVar9 & 0xc) != 0) {
                    uVar9 = uVar9 >> 2;
                }
                if ((uVar9 & 0x30) != 0) {
                    uVar9 = 1;
                }
                *in_x4 = uVar9;
                if (7 < *(arg1 + 8)) goto code_r0x080190a0;
                uVar8 = 0;
                *arg4 = *(iStack_58 + *(arg1 + 8) * 8 + 0x180);
                break;
            case 0x8018f88:
                uVar8 = 0;
                *in_x4 = 1;
                *arg4 = 1;
                break;
            case 0x8019014:
                uVar7 = snd_soc_component_read(iVar12,0x1198);
                bVar5 = (uVar7 & 0xf0) != 0;
                uVar9 = 1;
                if (bVar5) {
                    uVar9 = 2;
                }
                bVar6 = (uVar7 & 0xf) != 0;
                uVar11 = bVar5;
                if (bVar6) {
                    uVar11 = bVar5 | 2;
                }
                uVar1 = bVar5;
                if (bVar6) {
                    uVar1 = uVar9;
                }
                uVar7 = snd_soc_component_read(iVar12,0x119c);
                if ((uVar7 & 0xf) != 0) {
                    uVar1 = uVar1 + 1;
                    uVar11 = uVar11 | 4;
                }
                uVar8 = 0;
                *arg3 = uVar11;
                *arg2 = uVar1;
            }
        }
        else {
            uVar8 = ___ratelimit(obj.lpass_cdc_rx_macro_get_channel_map._rs,"lpass_cdc_rx_macro_get_channel_map");
            if (uVar8 != 0) {
                _dev_err(uStack_50,"%s: Invalid AIF\n","lpass_cdc_rx_macro_get_channel_map");
                uVar8 = 0;
            }
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_48) {
        return;
    }
    __stack_chk_fail(uVar8);
code_r0x080190a0:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x80190a4);
    (*pcVar4)();
}


// ===== sym.lpass_cdc_rx_macro_hw_params @ 0x080190a4 (size 1444) =====

void sym.lpass_cdc_rx_macro_hw_params(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint64_t uVar2;
    code *pcVar3;
    ushort uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    int iVar7;
    uint64_t uVar8;
    ulong uVar9;
    uchar *puVar10;
    uchar uVar11;
    uint64_t uVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar13;
    int64_t arg1_00;
    int64_t iVar14;
    uint32_t uVar15;
    ulong unaff_x30;
    uchar auVar16 [16];
    int64_t iStack_98;
    uchar auStack_90 [8];
    int64_t iStack_88;
    uchar auStack_80 [8];
    int64_t iStack_78;
    uchar auStack_70 [8];
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iStack_68 = *(iVar13 + 0x5e0);
    iStack_98 = 0;
    uVar8 = sym.lpass_cdc_rx_macro_get_data(*(arg3 + 0x58),auStack_90,&iStack_98,0x8002981);
    if ((uVar8 & 1) != 0) {
        if (*(arg1 + 0x3c) != 0) {
            uVar9 = 0;
            goto code_r0x080195e8;
        }
        iVar13 = *(arg3 + 0x58);
        iVar7 = *(arg2 + 0x128);
        iStack_88 = 0;
        uVar8 = sym.lpass_cdc_rx_macro_get_data(iVar13,auStack_80,&iStack_88,0x800190b);
        if ((uVar8 & 1) != 0) {
            if (iVar7 < 0x15888) {
                if (iVar7 < 32000) {
                    if (iVar7 == 8000) {
                        iVar13 = 0;
                    }
                    else {
                        if (iVar7 != 16000) {
code_r0x080195b0:
                            _dev_err(*(iVar13 + 0x18),"%s: Unsupported sample rate: %d\n",
                                     "lpass_cdc_rx_macro_set_interpolator_rate",iVar7);
                            goto code_r0x080195cc;
                        }
                        iVar13 = 1;
                    }
                }
                else if (iVar7 == 32000) {
                    iVar13 = 2;
                }
                else {
                    if (iVar7 == 0xac44) {
                        uVar11 = 1;
                        iVar13 = 7;
                        goto code_r0x0801926c;
                    }
                    if (iVar7 != 48000) goto code_r0x080195b0;
                    iVar13 = 3;
                }
code_r0x08019268:
                uVar11 = 0;
            }
            else {
                if (0x2edff < iVar7) {
                    if (iVar7 == 0x2ee00) {
                        iVar13 = 5;
                    }
                    else {
                        if (iVar7 == 0x56220) {
                            uVar11 = 1;
                            iVar13 = 10;
                            goto code_r0x0801926c;
                        }
                        if (iVar7 != 0x5dc00) goto code_r0x080195b0;
                        iVar13 = 6;
                    }
                    goto code_r0x08019268;
                }
                if (iVar7 == 0x15888) {
                    uVar11 = 1;
                    iVar13 = 8;
                }
                else {
                    if (iVar7 == 96000) {
                        iVar13 = 4;
                        goto code_r0x08019268;
                    }
                    if (iVar7 != 0x2b110) goto code_r0x080195b0;
                    uVar11 = 1;
                    iVar13 = 9;
                }
            }
code_r0x0801926c:
            iStack_78 = 0;
            *(iStack_88 + 0x52) = uVar11;
            arg1_00 = *(arg3 + 0x58);
            uVar8 = sym.lpass_cdc_rx_macro_get_data(arg1_00,auStack_70,&iStack_78,0x800299e);
            iVar14 = iStack_78;
            if ((uVar8 & 1) != 0) {
                if (8 < *(arg3 + 8)) goto code_r0x08019640;
                uVar11 = *(iVar13 * 8 + 0x8012b84);
                uVar12 = *(iStack_78 + *(arg3 + 8) * 8 + 0x140);
                uVar1 = (uVar12 & 0x2a) >> 1 | (uVar12 & 0x15) << 1;
                uVar2 = (uVar1 & 0x3333333333333333) << 2;
                uVar8 = 6;
                if ((uVar12 & 0x3f) != 0) {
                    uVar8 = LZCOUNT((uVar2 >> 4 | ((uVar1 & 0xcccccccccccccccc) >> 2 | uVar2 & 0xf0f0f0f0f0f0f0f) << 4)
                                    << 0x38);
                }
                uVar15 = uVar8;
                while (uVar15 < 6) {
                    uVar15 = uVar8 + 5;
                    uVar5 = snd_soc_component_read(arg1_00,0x1180);
                    uVar6 = snd_soc_component_read(arg1_00,0x1184);
                    if ((((uVar5 & 0xf) == uVar15) || ((uVar5 >> 4 & 0xf) == uVar15)) || ((uVar6 >> 4 & 0xf) == uVar15))
                    {
                        snd_soc_component_update_bits(arg1_00,0x1400,0xf,uVar11);
                    }
                    uVar5 = snd_soc_component_read(arg1_00,0x1188);
                    uVar6 = snd_soc_component_read(arg1_00,0x118c);
                    if ((((uVar5 & 0xf) == uVar15) || ((uVar5 >> 4 & 0xf) == uVar15)) || ((uVar6 >> 4 & 0xf) == uVar15))
                    {
                        snd_soc_component_update_bits(arg1_00,0x14c0,0xf,uVar11);
                    }
                    uVar5 = snd_soc_component_read(arg1_00,0x1190);
                    uVar6 = snd_soc_component_read(arg1_00,0x1194);
                    if ((((uVar5 & 0xf) == uVar15) || ((uVar5 >> 4 & 0xf) == uVar15)) || ((uVar6 >> 4 & 0xf) == uVar15))
                    {
                        snd_soc_component_update_bits(arg1_00,0x1580,0xf,uVar11);
                    }
                    if (8 < *(arg3 + 8)) goto code_r0x08019640;
                    if (4 < uVar8) break;
                    uVar15 = -1L << (uVar8 + 1 & 0x3f) & *(iVar14 + *(arg3 + 8) * 8 + 0x140);
                    uVar1 = (uVar15 & 0x2a) >> 1 | (uVar15 & 0x15) << 1;
                    uVar2 = (uVar1 & 0x3333333333333333) << 2;
                    uVar8 = 6;
                    if ((uVar15 & 0x3f) != 0) {
                        uVar8 = LZCOUNT((uVar2 >> 4 |
                                        ((uVar1 & 0xcccccccccccccccc) >> 2 | uVar2 & 0xf0f0f0f0f0f0f0f) << 4) << 0x38);
                    }
                    uVar15 = uVar8;
                }
                iVar14 = *(arg3 + 0x58);
                iStack_78 = 0;
                uVar8 = sym.lpass_cdc_rx_macro_get_data(iVar14,auStack_70,&iStack_78,0x80020a1);
                iVar13 = iStack_78;
                if ((uVar8 & 1) == 0) goto code_r0x080195cc;
                if (8 < *(arg3 + 8)) goto code_r0x08019640;
                uVar12 = *(iStack_78 + *(arg3 + 8) * 8 + 0x140);
                uVar1 = (uVar12 & 0x2a) >> 1 | (uVar12 & 0x15) << 1;
                uVar2 = (uVar1 & 0x3333333333333333) << 2;
                uVar8 = 6;
                if ((uVar12 & 0x3f) != 0) {
                    uVar8 = LZCOUNT((uVar2 >> 4 | ((uVar1 & 0xcccccccccccccccc) >> 2 | uVar2 & 0xf0f0f0f0f0f0f0f) << 4)
                                    << 0x38);
                }
                uVar15 = uVar8;
                while (uVar15 < 6) {
                    uVar15 = uVar8 + 1;
                    uVar5 = snd_soc_component_read(iVar14,0x1184);
                    if ((uVar5 & 0xf) == uVar15) {
                        snd_soc_component_update_bits(iVar14,0x1418,0xf,uVar11);
                    }
                    uVar5 = snd_soc_component_read(iVar14,0x118c);
                    if ((uVar5 & 0xf) == uVar15) {
                        snd_soc_component_update_bits(iVar14,0x14d8,0xf,uVar11);
                    }
                    uVar5 = snd_soc_component_read(iVar14,0x1194);
                    if ((uVar5 & 0xf) == uVar15) {
                        snd_soc_component_update_bits(iVar14,0x1598,0xf,uVar11);
                    }
                    if (8 < *(arg3 + 8)) goto code_r0x08019640;
                    if (4 < uVar8) break;
                    uVar15 = -1L << (uVar8 + 1 & 0x3f) & *(iVar13 + *(arg3 + 8) * 8 + 0x140);
                    uVar1 = (uVar15 & 0x2a) >> 1 | (uVar15 & 0x15) << 1;
                    uVar2 = (uVar1 & 0x3333333333333333) << 2;
                    uVar8 = 6;
                    if ((uVar15 & 0x3f) != 0) {
                        uVar8 = LZCOUNT((uVar2 >> 4 |
                                        ((uVar1 & 0xcccccccccccccccc) >> 2 | uVar2 & 0xf0f0f0f0f0f0f0f) << 4) << 0x38);
                    }
                    uVar15 = uVar8;
                }
                uVar15 = *(arg2 + 0x24);
                if (uVar15 == 0) {
                    uVar15 = *(arg2 + 0x28);
                    if (uVar15 != 0) {
                        uVar5 = 0x20;
                        goto code_r0x08019574;
                    }
                    uVar5 = 0;
                }
                else {
                    uVar5 = 0;
code_r0x08019574:
                    uVar15 = (uVar15 & 0xaaaaaaaa) >> 1 | (uVar15 & 0x55555555) << 1;
                    uVar15 = (uVar15 & 0xcccccccc) >> 2 | (uVar15 & 0x33333333) << 2;
                    uVar15 = (uVar15 & 0xf0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f) << 4;
                    uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
                    uVar5 = LZCOUNT(uVar15 >> 0x10 | uVar15 << 0x10) | uVar5;
                }
                uVar4 = snd_pcm_format_width(uVar5);
                if (7 < *(arg3 + 8)) {
code_r0x08019640:
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(0x5512,0x8019644);
                    (*pcVar3)();
                }
                uVar9 = 0;
                *(iStack_98 + *(arg3 + 8) * 2 + 0x1c0) = uVar4;
                goto code_r0x080195e8;
            }
        }
code_r0x080195cc:
        iVar7 = ___ratelimit(obj.lpass_cdc_rx_macro_hw_params._rs,"lpass_cdc_rx_macro_hw_params");
        if (iVar7 != 0) {
            _printk(0x8001ad2,"lpass_cdc_rx_macro_hw_params",*(arg2 + 0x128));
        }
    }
    uVar9 = 0xffffffea;
code_r0x080195e8:
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_68) {
        return;
    }
    auVar16 = __stack_chk_fail(uVar9);
    puVar10 = auVar16._0_8_;
    *extraout_x18 = sym.__cfi_check_fail;
    if (puVar10 != NULL) {
        switch(*puVar10) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            __ubsan_handle_cfi_check_fail_abort(puVar10,auVar16._8_8_,0);
            break;
        default:
            return;
        }
    }
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5502,0x80196a0);
    (*pcVar3)();
}


// ===== sym.__cfi_check_fail @ 0x08019648 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0801968c

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
    //switch table (4 cases) at 0x800107d
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80196a0);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080196c4 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register
              (reloc.lpass_cdc_rx_macro_probe.5c0fcf43324700bd174cccbefdf1d743.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x080196f8 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.lpass_cdc_rx_macro_probe.5c0fcf43324700bd174cccbefdf1d743.cfi_jt);
    return;
}

