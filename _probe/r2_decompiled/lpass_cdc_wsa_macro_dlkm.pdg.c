// decompiled from lpass_cdc_wsa_macro_dlkm by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08013000 (size 868) =====

//WARNING: Switch with 1 destination removed at 0x08019bb4

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (0x65013fe89c46b55 < arg1) {
        if (arg1 < 0x519d946a5cb8d608) {
            if (arg1 < 0x2b17460ce4bf82db) {
                if (arg1 != 0x65013fe89c46b56) {
                    if ((arg1 == 0x2882621ee1337d31) && ((pcVar1 + -0x8013478 >> 3 | pcVar1 << 0x3d) < 0x1e)) {
                        return;
                    }
                    goto code_r0x08019b74;
                }
                pcVar2 = sym.lpass_cdc_wsa_macro_set_port_map.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            }
            else {
                if (arg1 == 0x2b17460ce4bf82db) {
                    pcVar2 = sym.wsa_swrm_clock.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                    goto code_r0x08013348;
                }
                if (arg1 != 0x3a2d6f9b27d89e39) goto code_r0x08019b74;
                pcVar2 = sym.lpass_cdc_wsa_macro_get_channel_map.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            }
        }
        else if (arg1 < 0x6b84145aa65a8cf9) {
            if (arg1 != 0x519d946a5cb8d608) {
                if (arg1 != 0x6b571d3f779580cd) goto code_r0x08019b74;
                pcVar2 = sym.lpass_cdc_wsa_macro_get_cur_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                goto code_r0x08013348;
            }
            pcVar2 = sym.lpass_cdc_wsa_macro_set_cur_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else if (arg1 == 0x6b84145aa65a8cf9) {
            pcVar2 = sym.lpass_cdc_wsa_macro_event_handler.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else if (arg1 == 0x74f0ccf11b57c4f0) {
            pcVar2 = sym.lpass_cdc_wsa_macro_hw_params.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else {
            if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08019b74;
            pcVar2 = sym.cleanup_module.cfi_jt;
        }
        goto code_r0x08013318;
    }
    if (arg1 < -0x457ac4930f0f603a) {
        if (arg1 < -0x550b9e52359ac614) {
            if (arg1 != -0x749213c658cf941a) {
                if ((arg1 == -0x57be845bca9148ef) && ((pcVar1 + -0x80133d0 >> 3 | pcVar1 << 0x3d) < 4)) {
                    return;
                }
                goto code_r0x08019b74;
            }
            pcVar2 = sym.snd_soc_info_enum_double.cfi_jt;
        }
        else {
            if (arg1 != -0x550b9e52359ac614) {
                if ((arg1 == -0x49739d0000a0fe53) && ((pcVar1 + -0x8013410 >> 3 | pcVar1 << 0x3d) < 9)) {
                    return;
                }
                goto code_r0x08019b74;
            }
            pcVar2 = sym.lpass_cdc_wsa_macro_add_child_devices.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
    }
    else if (arg1 < -0xf2d15659b6de7a9) {
        if (arg1 == -0x457ac4930f0f603a) {
            pcVar2 = sym.lpass_cdc_wsa_macro_mute_stream.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
code_r0x08013318:
            if (pcVar1 == pcVar2) {
                return;
            }
            goto code_r0x08019b74;
        }
        if (arg1 != -0x3557318fb8d07b71) goto code_r0x08019b74;
        pcVar2 = sym.lpass_cdc_wsa_macro_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    }
    else {
        if (arg1 != -0xf2d15659b6de7a9) {
            if (arg1 != 0x2b3a43e29242445) goto code_r0x08019b74;
            pcVar2 = sym.init_module.cfi_jt;
            goto code_r0x08013318;
        }
        pcVar2 = sym.lpass_cdc_wsa_macro_deinit.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    }
code_r0x08013348:
    if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
        return;
    }
code_r0x08019b74:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8019bc8);
    (*pcVar1)();
}


// ===== sym.lpass_cdc_wsa_macro_set_cur_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08013370 (size 8) =====

ulong sym.lpass_cdc_wsa_macro_set_cur_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,uint64_t param_2)

{
    int iVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *(param_1 + 0x3a8);
    if ((piVar2 == NULL) || (*piVar2 == 0)) {
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_set_cur_state._rs,"lpass_cdc_wsa_macro_set_cur_state");
        if (iVar1 != 0) {
            _printk(0x8001107,"lpass_cdc_wsa_macro_set_cur_state");
        }
    }
    else {
        if (param_2 <= *(piVar2 + 0x22c)) {
            *(piVar2 + 0x45) = param_2;
            queue_work_on(0x20,_pm_runtime_force_resume,piVar2 + 0x46);
            return 0;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_set_cur_state._rs.260,"lpass_cdc_wsa_macro_set_cur_state");
        if (iVar1 != 0) {
            _dev_err(*piVar2,"%s: incorrect requested state:%d\n","lpass_cdc_wsa_macro_set_cur_state",param_2);
        }
    }
    return 0xffffffea;
}


// ===== sym.init_module.cfi_jt @ 0x08013378 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register
              (reloc.lpass_cdc_wsa_macro_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.lpass_cdc_wsa_macro_hw_params.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08013380 (size 8) =====

ulong sym.lpass_cdc_wsa_macro_hw_params.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                (int64_t param_1,int64_t param_2,int64_t param_3)

{
    uchar uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    code *pcVar4;
    uint32_t uVar5;
    int iVar6;
    uint32_t uVar7;
    int iVar8;
    uint uVar9;
    int64_t iVar10;
    int64_t iVar11;
    char *pcVar12;
    uint32_t uVar13;
    uint64_t uVar14;
    ushort uVar15;
    ulong *in_x18;
    ulong uVar16;
    int64_t iVar17;
    int64_t iVar18;
    int64_t iVar19;
    int64_t iVar20;
    uint64_t uVar21;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar19 = *(param_3 + 0x58);
    iVar10 = lpass_cdc_get_device_ptr(*(iVar19 + 0x18),2);
    if (iVar10 == 0) {
        iVar8 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar8 == 0) {
            return 0xffffffea;
        }
        pcVar12 = "%s: null device for macro!\n";
code_r0x08019490:
        _dev_err(*(iVar19 + 0x18),pcVar12,"lpass_cdc_wsa_macro_hw_params");
        return 0xffffffea;
    }
    iVar10 = *(iVar10 + 0x98);
    if ((iVar10 == 0) || (*(iVar10 + 0x108) == 0)) {
        iVar8 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar8 == 0) {
            return 0xffffffea;
        }
        pcVar12 = "%s: priv is null for macro!\n";
        goto code_r0x08019490;
    }
    if (*(param_1 + 0x3c) != 1) {
        if (*(param_1 + 0x3c) != 0) {
            return 0;
        }
        iVar8 = *(param_2 + 0x128);
        if (iVar8 == 48000) {
            iVar18 = 0;
code_r0x08019250:
            iVar17 = *(param_3 + 0x58);
            iVar11 = lpass_cdc_get_device_ptr(*(iVar17 + 0x18),2);
            if (iVar11 == 0) {
                iVar6 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
                if (iVar6 != 0) {
                    pcVar12 = "%s: null device for macro!\n";
code_r0x08019958:
                    _dev_err(*(iVar17 + 0x18),pcVar12,"lpass_cdc_wsa_macro_set_mix_interpolator_rate");
                }
            }
            else {
                iVar20 = *(iVar11 + 0x98);
                if ((iVar20 == 0) || (*(iVar20 + 0x108) == 0)) {
                    iVar6 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
                    if (iVar6 != 0) {
                        pcVar12 = "%s: priv is null for macro!\n";
                        goto code_r0x08019958;
                    }
                }
                else {
                    if (6 < *(param_3 + 8)) goto code_r0x080199c0;
                    uVar14 = *(iVar20 + *(param_3 + 8) * 8 + 0x118);
                    uVar21 = (uVar14 & 0xaa) >> 1 | (uVar14 & 0x155) << 1;
                    uVar2 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
                    uVar3 = (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar21 = 9;
                    if ((uVar14 & 0x1ff) != 0) {
                        uVar21 = LZCOUNT((uVar3 >> 8 |
                                         ((uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | uVar3 & 0xff00ff00ff00ff) << 8) << 0x30);
                    }
                    if (uVar21 < 9) {
                        uVar1 = *(iVar18 * 8 + 0x80122ec);
                        do {
                            if (3 < uVar21) {
                                iVar6 = ___ratelimit(obj.lpass_cdc_wsa_macro_set_mix_interpolator_rate._rs,
                                                     "lpass_cdc_wsa_macro_set_mix_interpolator_rate");
                                if (iVar6 != 0) {
                                    _dev_err(iVar11,"%s: Invalid RX port, Dai ID is %d\n",
                                             "lpass_cdc_wsa_macro_set_mix_interpolator_rate",*(param_3 + 8));
                                }
                                break;
                            }
                            uVar13 = uVar21 + 1;
                            uVar5 = snd_soc_component_read(iVar17,0x2104);
                            if ((uVar5 & 7) == uVar13) {
                                snd_soc_component_update_bits(iVar17,0x2418,0xf,uVar1);
                            }
                            uVar5 = snd_soc_component_read(iVar17,0x210c);
                            if ((uVar5 & 7) == uVar13) {
                                snd_soc_component_update_bits(iVar17,0x2498,0xf,uVar1);
                            }
                            if (6 < *(param_3 + 8)) goto code_r0x080199c0;
                            if (7 < uVar21) break;
                            uVar13 = -1L << (uVar21 + 1 & 0x3f) & *(iVar20 + *(param_3 + 8) * 8 + 0x118);
                            uVar21 = (uVar13 & 0xaa) >> 1 | (uVar13 & 0x155) << 1;
                            uVar2 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
                            uVar3 = (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
                            uVar21 = 9;
                            if ((uVar13 & 0x1ff) != 0) {
                                uVar21 = LZCOUNT((uVar3 >> 8 |
                                                 ((uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | uVar3 & 0xff00ff00ff00ff) << 8) <<
                                                 0x30);
                            }
                        } while (uVar21 < 9);
                        if (iVar8 < 24000) {
                            if (iVar8 == 8000) goto code_r0x08019638;
                            if (iVar8 == 16000) goto code_r0x08019630;
                        }
                        else {
                            if (iVar8 == 24000) goto code_r0x080197f4;
                            if (iVar8 == 32000) goto code_r0x08019580;
                        }
                    }
                }
            }
            if (iVar8 == 48000) {
                iVar18 = 4;
            }
            else if (iVar8 < 0x2ee00) {
                if (iVar8 == 0xac44) {
code_r0x080195dc:
                    iVar18 = 8;
                }
                else {
                    if (iVar8 != 96000) goto code_r0x080197f4;
                    iVar18 = 5;
                }
            }
            else {
                if (iVar8 != 0x2ee00) {
                    if (iVar8 == 0x5dc00) goto code_r0x080195e4;
                    goto code_r0x080197f4;
                }
                iVar18 = 6;
            }
code_r0x0801963c:
            iVar17 = *(param_3 + 0x58);
            iVar11 = lpass_cdc_get_device_ptr(*(iVar17 + 0x18),2);
            if (iVar11 == 0) {
                iVar8 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
                if (iVar8 != 0) {
                    pcVar12 = "%s: null device for macro!\n";
code_r0x0801993c:
                    _dev_err(*(iVar17 + 0x18),pcVar12,"lpass_cdc_wsa_macro_set_prim_interpolator_rate");
                }
            }
            else {
                iVar20 = *(iVar11 + 0x98);
                if ((iVar20 != 0) && (*(iVar20 + 0x108) != 0)) {
                    if (6 < *(param_3 + 8)) goto code_r0x080199c0;
                    uVar14 = *(iVar20 + *(param_3 + 8) * 8 + 0x118);
                    uVar21 = (uVar14 & 0xaa) >> 1 | (uVar14 & 0x155) << 1;
                    uVar2 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
                    uVar3 = (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar21 = 9;
                    if ((uVar14 & 0x1ff) != 0) {
                        uVar21 = LZCOUNT((uVar3 >> 8 |
                                         ((uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | uVar3 & 0xff00ff00ff00ff) << 8) << 0x30);
                    }
                    if (uVar21 < 9) {
                        uVar1 = *(iVar18 * 8 + 0x8012304);
                        do {
                            if (3 < uVar21) {
                                iVar8 = ___ratelimit(obj.lpass_cdc_wsa_macro_set_prim_interpolator_rate._rs,
                                                     "lpass_cdc_wsa_macro_set_prim_interpolator_rate");
                                if (iVar8 != 0) {
                                    _dev_err(iVar11,"%s: Invalid RX port, Dai ID is %d\n",
                                             "lpass_cdc_wsa_macro_set_prim_interpolator_rate",*(param_3 + 8));
                                }
                                goto code_r0x080197f4;
                            }
                            uVar13 = uVar21 + 1;
                            uVar5 = snd_soc_component_read(iVar17,0x2100);
                            uVar7 = snd_soc_component_read(iVar17,0x2104);
                            if ((((uVar5 & 7) == uVar13) || ((uVar5 >> 3 & 7) == uVar13)) ||
                               ((uVar7 >> 3 & 7) == uVar13)) {
                                snd_soc_component_update_bits(iVar17,0x2400,0xf,uVar1);
                            }
                            uVar5 = snd_soc_component_read(iVar17,0x2108);
                            uVar7 = snd_soc_component_read(iVar17,0x210c);
                            if ((((uVar5 & 7) == uVar13) || ((uVar5 >> 3 & 7) == uVar13)) ||
                               ((uVar7 >> 3 & 7) == uVar13)) {
                                snd_soc_component_update_bits(iVar17,0x2480,0xf,uVar1);
                            }
                            if (6 < *(param_3 + 8)) goto code_r0x080199c0;
                            if (7 < uVar21) break;
                            uVar13 = -1L << (uVar21 + 1 & 0x3f) & *(iVar20 + *(param_3 + 8) * 8 + 0x118);
                            uVar21 = (uVar13 & 0xaa) >> 1 | (uVar13 & 0x155) << 1;
                            uVar2 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
                            uVar3 = (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
                            uVar21 = 9;
                            if ((uVar13 & 0x1ff) != 0) {
                                uVar21 = LZCOUNT((uVar3 >> 8 |
                                                 ((uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | uVar3 & 0xff00ff00ff00ff) << 8) <<
                                                 0x30);
                            }
                        } while (uVar21 < 9);
                    }
                    uVar13 = *(param_2 + 0x24);
                    if (uVar13 == 0) {
                        uVar13 = *(param_2 + 0x28);
                        if (uVar13 != 0) {
                            uVar5 = 0x20;
                            goto code_r0x08019834;
                        }
                        uVar5 = 0;
                    }
                    else {
                        uVar5 = 0;
code_r0x08019834:
                        uVar13 = (uVar13 & 0xaaaaaaaa) >> 1 | (uVar13 & 0x55555555) << 1;
                        uVar13 = (uVar13 & 0xcccccccc) >> 2 | (uVar13 & 0x33333333) << 2;
                        uVar13 = (uVar13 & 0xf0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f) << 4;
                        uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
                        uVar5 = LZCOUNT(uVar13 >> 0x10 | uVar13 << 0x10) | uVar5;
                    }
                    iVar8 = snd_pcm_format_width(uVar5);
                    if (iVar8 != 0x20) {
                        if (iVar8 != 0x18) {
                            if (iVar8 != 0x10) {
                                iVar8 = ___ratelimit(obj.lpass_cdc_wsa_macro_hw_params._rs.247,
                                                     "lpass_cdc_wsa_macro_hw_params");
                                if (iVar8 == 0) {
                                    return 0xffffffea;
                                }
                                uVar13 = *(param_2 + 0x24);
                                uVar16 = *(iVar19 + 0x18);
                                if (uVar13 == 0) {
                                    uVar13 = *(param_2 + 0x28);
                                    if (uVar13 == 0) goto code_r0x080194d0;
                                    goto code_r0x08019908;
                                }
                                goto code_r0x0801996c;
                            }
                            uVar13 = *(param_3 + 8);
                            goto joined_r0x08019478;
                        }
                        goto code_r0x08019884;
                    }
                    goto code_r0x0801986c;
                }
                iVar8 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
                if (iVar8 != 0) {
                    pcVar12 = "%s: priv is null for macro!\n";
                    goto code_r0x0801993c;
                }
            }
        }
        else {
            if (iVar8 < 0xac44) {
                if (iVar8 == 8000) {
code_r0x08019638:
                    iVar18 = 0;
                }
                else if (iVar8 == 16000) {
code_r0x08019630:
                    iVar18 = 1;
                }
                else {
                    if (iVar8 != 32000) goto code_r0x080197f4;
code_r0x08019580:
                    iVar18 = 3;
                }
                goto code_r0x0801963c;
            }
            if (iVar8 < 0x2ee00) {
                if (iVar8 == 0xac44) goto code_r0x080195dc;
                if (iVar8 == 96000) {
                    iVar18 = 1;
                    goto code_r0x08019250;
                }
            }
            else {
                if (iVar8 == 0x5dc00) {
code_r0x080195e4:
                    iVar18 = 7;
                    goto code_r0x0801963c;
                }
                if (iVar8 == 0x2ee00) {
                    iVar18 = 2;
                    goto code_r0x08019250;
                }
            }
        }
code_r0x080197f4:
        iVar8 = ___ratelimit(obj.lpass_cdc_wsa_macro_hw_params._rs,"lpass_cdc_wsa_macro_hw_params");
        if (iVar8 == 0) {
            return 0xffffffea;
        }
        uVar16 = *(iVar19 + 0x18);
        uVar9 = *(param_2 + 0x128);
        pcVar12 = "%s: cannot set sample rate: %u\n";
        goto code_r0x08019998;
    }
    if (*(param_3 + 8) == 3) {
        *(iVar10 + 500) = *(param_2 + 0x128);
    }
    uVar13 = *(param_2 + 0x24);
    if (uVar13 == 0) {
        uVar13 = *(param_2 + 0x28);
        if (uVar13 != 0) {
            uVar5 = 0x20;
            goto code_r0x08019448;
        }
        uVar5 = 0;
    }
    else {
        uVar5 = 0;
code_r0x08019448:
        uVar13 = (uVar13 & 0xaaaaaaaa) >> 1 | (uVar13 & 0x55555555) << 1;
        uVar13 = (uVar13 & 0xcccccccc) >> 2 | (uVar13 & 0x33333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
        uVar5 = LZCOUNT(uVar13 >> 0x10 | uVar13 << 0x10) | uVar5;
    }
    iVar8 = snd_pcm_format_width(uVar5);
    if (iVar8 == 0x20) {
code_r0x0801986c:
        if (5 < *(param_3 + 8)) {
code_r0x080199c0:
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x5512,0x80199c4);
            (*pcVar4)();
        }
        iVar10 = iVar10 + *(param_3 + 8) * 2;
        uVar15 = 0x20;
code_r0x08019898:
        *(iVar10 + 0x178) = uVar15;
        return 0;
    }
    if (iVar8 == 0x18) {
code_r0x08019884:
        if (5 < *(param_3 + 8)) goto code_r0x080199c0;
        iVar10 = iVar10 + *(param_3 + 8) * 2;
        uVar15 = 0x18;
        goto code_r0x08019898;
    }
    if (iVar8 == 0x10) {
        uVar13 = *(param_3 + 8);
joined_r0x08019478:
        if (5 < uVar13) goto code_r0x080199c0;
        iVar10 = iVar10 + uVar13 * 2;
        uVar15 = 0x10;
        goto code_r0x08019898;
    }
    iVar8 = ___ratelimit(obj.lpass_cdc_wsa_macro_hw_params._rs.249,"lpass_cdc_wsa_macro_hw_params");
    if (iVar8 == 0) {
        return 0xffffffea;
    }
    uVar13 = *(param_2 + 0x24);
    uVar16 = *(iVar19 + 0x18);
    if (uVar13 == 0) {
        uVar13 = *(param_2 + 0x28);
        if (uVar13 != 0) {
code_r0x08019908:
            uVar5 = 0x20;
            goto code_r0x08019970;
        }
code_r0x080194d0:
        uVar5 = 0;
    }
    else {
code_r0x0801996c:
        uVar5 = 0;
code_r0x08019970:
        uVar13 = (uVar13 & 0xaaaaaaaa) >> 1 | (uVar13 & 0x55555555) << 1;
        uVar13 = (uVar13 & 0xcccccccc) >> 2 | (uVar13 & 0x33333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
        uVar5 = LZCOUNT(uVar13 >> 0x10 | uVar13 << 0x10) | uVar5;
    }
    uVar9 = snd_pcm_format_width(uVar5);
    pcVar12 = "%s: Invalid format 0x%x\n";
code_r0x08019998:
    _dev_err(uVar16,pcVar12,"lpass_cdc_wsa_macro_hw_params",uVar9);
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_event_handler.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08013388 (size 8) =====

ulong sym.lpass_cdc_wsa_macro_event_handler.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int16_t param_2)

{
    int iVar1;
    int64_t iVar2;
    char *pcVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = lpass_cdc_get_device_ptr(*(param_1 + 0x18),2);
    if (iVar2 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: null device for macro!\n";
    }
    else {
        iVar4 = *(iVar2 + 0x98);
        if ((iVar4 != 0) && (*(iVar4 + 0x108) != 0)) {
            if (param_2 == 7) {
                lpass_cdc_rsc_clk_reset(iVar2,2);
                lpass_cdc_rsc_clk_reset(iVar2,6);
            }
            else if (param_2 == 5) {
                __trace_bprintk(0x8015200,*0x8019000,"lpass_cdc_wsa_macro_event_handler");
                *(iVar4 + 0x28c) = 1;
                *(iVar4 + 0x29) = 1;
                if (*(iVar4 + 0x90) != NULL) {
                    swrm_wcd_notify(**(iVar4 + 0x90),7,0);
                }
            }
            else if (param_2 == 4) {
                *(iVar4 + 0x28c) = 0;
                __trace_bprintk(0x8015120,*0x8019000,"lpass_cdc_wsa_macro_event_handler");
                if (*(iVar4 + 0x90) != NULL) {
                    swrm_wcd_notify(**(iVar4 + 0x90),6,0);
                }
                if ((((*(iVar2 + 0x200) & 7) != 0) || (*(iVar2 + 0x20c) != 2)) &&
                   (iVar1 = lpass_cdc_runtime_suspend(iVar2), iVar1 == 0)) {
                    __pm_runtime_disable(iVar2,1);
                    __pm_runtime_set_status(iVar2,2);
                    pm_runtime_enable(iVar2);
                }
            }
            return 0;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(param_1 + 0x18),pcVar3,"lpass_cdc_wsa_macro_event_handler");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_set_port_map.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08013390 (size 8) =====

ulong sym.lpass_cdc_wsa_macro_set_port_map.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                (int64_t param_1,uint param_2,int param_3,ulong param_4)

{
    int iVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    char *pcVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar7;
    ulong unaff_x30;
    int iStack_48;
    uint uStack_44;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iVar2 = param_3;
    iVar3 = lpass_cdc_get_device_ptr(*(param_1 + 0x18),2);
    if (iVar3 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar1 != 0) {
            pcVar5 = "%s: null device for macro!\n";
code_r0x0801537c:
            iVar2 = 0x8001684;
            _dev_err(*(param_1 + 0x18),pcVar5);
        }
    }
    else {
        iVar3 = *(iVar3 + 0x98);
        if ((iVar3 != 0) && (*(iVar3 + 0x108) != 0)) {
            iStack_48 = param_3;
            uStack_44 = param_2;
            uStack_40 = param_4;
            if (*(iVar3 + 0x90) == NULL) {
                uVar4 = 0;
            }
            else {
                iVar2 = &iStack_48;
                uVar4 = swrm_wcd_notify(**(iVar3 + 0x90),9);
            }
            goto code_r0x0801533c;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar1 != 0) {
            pcVar5 = "%s: priv is null for macro!\n";
            goto code_r0x0801537c;
        }
    }
    uVar4 = 0xffffffea;
code_r0x0801533c:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return uVar4;
    }
    iVar3 = __stack_chk_fail(uVar4);
    *extraout_x18 = sym.lpass_cdc_wsa_macro_disable_vi_feedback;
    iVar6 = *(iVar3 + 0x28);
    iVar7 = iVar6 + -0xd0;
    iVar3 = lpass_cdc_get_device_ptr(*(iVar6 + -0xb8),2);
    if (iVar3 == 0) {
        iVar2 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar2 == 0) {
            return 0xffffffea;
        }
        pcVar5 = "%s: null device for macro!\n";
    }
    else {
        iVar3 = *(iVar3 + 0x98);
        if ((iVar3 != 0) && (*(iVar3 + 0x108) != 0)) {
            if (iVar2 == 8) {
                if ((*(iVar3 + 0x130) & 1) != 0) {
                    snd_soc_component_update_bits(iVar7,0x2244,0x20,0x20);
                    snd_soc_component_update_bits(iVar7,0x2264,0x20,0x20);
                    snd_soc_component_update_bits(iVar7,0x2244,0x10,0);
                    snd_soc_component_update_bits(iVar7,0x2264,0x10,0);
                }
                if ((*(iVar3 + 0x130) >> 1 & 1) != 0) {
                    snd_soc_component_update_bits(iVar7,0x2284,0x20,0x20);
                    snd_soc_component_update_bits(iVar7,0x22a4,0x20,0x20);
                    snd_soc_component_update_bits(iVar7,0x2284,0x10,0);
                    snd_soc_component_update_bits(iVar7,0x22a4,0x10,0);
                }
            }
            return 0;
        }
        iVar2 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar2 == 0) {
            return 0xffffffea;
        }
        pcVar5 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar6 + -0xb8),pcVar5,"lpass_cdc_wsa_macro_disable_vi_feedback");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_get_channel_map.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08013398 (size 8) =====

ulong sym.lpass_cdc_wsa_macro_get_channel_map.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                (int64_t param_1,uint32_t *param_2,uint32_t *param_3,uint *param_4,uint32_t *param_5)

{
    uint64_t uVar1;
    code *pcVar2;
    bool bVar3;
    bool bVar4;
    int iVar5;
    int64_t iVar6;
    ulong uVar7;
    uint64_t uVar8;
    char *pcVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    int64_t iVar12;
    uint64_t uVar13;
    uint32_t uVar14;
    uint uVar15;
    uint64_t uVar16;
    ulong *in_x18;
    int64_t iVar17;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar17 = *(param_1 + 0x58);
    iVar6 = lpass_cdc_get_device_ptr(*(iVar17 + 0x18),2);
    if (iVar6 == 0) {
        iVar5 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar5 == 0) {
            return 0xffffffea;
        }
        pcVar9 = "%s: null device for macro!\n";
    }
    else {
        iVar12 = *(iVar6 + 0x98);
        if ((iVar12 != 0) && (*(iVar12 + 0x108) != 0)) {
            switch(*(param_1 + 8)) {
            case 1:
            case 2:
                uVar13 = *(iVar12 + *(param_1 + 8) * 8 + 0x118);
                uVar8 = (uVar13 & 0xaa) >> 1 | (uVar13 & 0x155) << 1;
                uVar1 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
                uVar16 = (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar8 = 9;
                if ((uVar13 & 0x1ff) != 0) {
                    uVar8 = LZCOUNT((uVar16 >> 8 | ((uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | uVar16 & 0xff00ff00ff00ff) << 8)
                                    << 0x30);
                }
                if (uVar8 < 9) {
                    uVar15 = 1;
                    uVar11 = 1 << (uVar8 & 0x1f);
                    uVar10 = uVar11 & 0xffff;
                    if (uVar8 < 8) {
                        uVar16 = -2L << (uVar8 & 0x3f) & uVar13 & 0x1ff;
                        uVar8 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
                        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
                        uVar1 = (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar15 = 1;
                        uVar14 = LZCOUNT((uVar1 >> 8 |
                                         ((uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | uVar1 & 0xff00ff00ff00ff) << 8) << 0x30);
                        if (uVar16 != 0 && uVar14 < 9) {
                            uVar15 = 2;
                            uVar10 = (1 << (uVar14 & 0x1f) | uVar11) & 0xffff;
                        }
                    }
                }
                else {
                    uVar10 = 0;
                    uVar15 = 0;
                }
                if ((uVar10 & 0xc) != 0) {
                    uVar10 = uVar10 >> 2;
                }
                *param_5 = uVar10;
                *param_4 = uVar15;
                return 0;
            case 3:
                uVar8 = *(iVar12 + 0x130);
                iVar6 = 2;
                if ((uVar8 & 3) != 0) {
                    iVar6 = LZCOUNT(((uVar8 & 3) >> 1 | (uVar8 & 1) << 1) << 0x3e);
                }
                if (iVar6 < 2) {
                    uVar11 = 1;
                    uVar10 = 1 << (iVar6 & 0x1f) & 0xffff;
                    if (((iVar6 == 0) && (uVar11 = 1, (uVar8 >> 1 & 1) != 0)) &&
                       (uVar14 = LZCOUNT(((uVar8 & 2) >> 1) << 0x3e), uVar14 < 2)) {
                        uVar10 = 1 << (uVar14 & 0x1f) & 0xffffU | 1;
                        uVar11 = 2;
                    }
                }
                else {
                    uVar10 = 0;
                    uVar11 = 0;
                }
                if ((uVar10 & 0xc) != 0) {
                    uVar10 = uVar10 >> 2;
                }
                *param_3 = uVar10;
                *param_2 = uVar11;
                return 0;
            case 4:
                uVar8 = snd_soc_component_read(iVar17,0x2110);
                bVar3 = (uVar8 & 0x18) != 0;
                uVar10 = 1;
                if (bVar3) {
                    uVar10 = 2;
                }
                bVar4 = (uVar8 & 3) != 0;
                uVar14 = bVar3;
                uVar11 = uVar14;
                if (bVar4) {
                    uVar11 = uVar10;
                }
                *param_3 = bVar4 | uVar14 << 1;
                *param_2 = uVar11;
                return 0;
            case 5:
                goto code_r0x08018cec;
            default:
                uVar7 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_channel_map._rs,"lpass_cdc_wsa_macro_get_channel_map")
                ;
                if (uVar7 != 0) {
                    _dev_err(iVar6,"%s: Invalid AIF\n","lpass_cdc_wsa_macro_get_channel_map");
                    return 0;
                }
                return uVar7;
            }
        }
        iVar5 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar5 == 0) {
            return 0xffffffea;
        }
        pcVar9 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar17 + 0x18),pcVar9,"lpass_cdc_wsa_macro_get_channel_map");
    return 0xffffffea;
code_r0x08018cec:
    *param_3 = *(iVar12 + 0x140);
    if (5 < *(param_1 + 8)) {
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5512,0x8018d7c);
        (*pcVar2)();
    }
    *param_2 = *(iVar12 + *(param_1 + 8) * 8 + 0x148);
    return 0;
}


// ===== sym.lpass_cdc_wsa_macro_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080133a0 (size 8) =====

ulong sym.lpass_cdc_wsa_macro_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

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
        if (*(iVar2 + 0x220) != 0) {
            thermal_cooling_device_unregister(*(iVar2 + 0x220));
        }
        if (0 < *(iVar2 + 0x1c8)) {
            platform_device_unregister(*(iVar2 + 0x1b0));
            if (1 < *(iVar2 + 0x1c8)) {
                platform_device_unregister(*(iVar2 + 0x1b8));
                if (2 < *(iVar2 + 0x1c8)) {
                    platform_device_unregister(*(iVar2 + 0x1c0));
                }
            }
        }
        __pm_runtime_disable(param_1,1);
        __pm_runtime_set_status(param_1,2);
        lpass_cdc_unregister_macro(param_1,2);
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.lpass_cdc_wsa_macro_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080133a8 (size 8) =====

uint32_t sym.lpass_cdc_wsa_macro_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int64_t *piVar5;
    ulong uVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    char *pcVar10;
    ushort uVar11;
    uint uVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_d4;
    int iStack_d0;
    uint uStack_cc;
    ulong uStack_c8;
    code *pcStack_c0;
    code *pcStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    code *pcStack_a0;
    ulong uStack_98;
    code *pcStack_90;
    ulong uStack_88;
    code *pcStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    int64_t iStack_60;
    ulong uStack_58;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iVar9 = param_1 + 0x10;
    iStack_48 = *(iVar7 + 0x5e0);
    iStack_60 = 0;
    uStack_58 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    pcStack_80 = NULL;
    uStack_78 = 0;
    pcStack_90 = NULL;
    uStack_88 = 0;
    pcStack_a0 = NULL;
    uStack_98 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    pcStack_c0 = NULL;
    pcStack_b8 = NULL;
    uStack_c8 = 0;
    iStack_d0 = 1;
    uStack_cc = 0;
    uStack_d4 = 0;
    uVar4 = lpass_cdc_is_va_macro_registered(iVar9);
    if ((uVar4 & 1) == 0) {
        pcVar10 = "%s: va-macro not registered yet, defer\n";
code_r0x080139c0:
        _dev_err(iVar9,pcVar10,"lpass_cdc_wsa_macro_probe");
        uVar1 = 0xfffffdfb;
        goto code_r0x08013afc;
    }
    piVar5 = devm_kmalloc(iVar9,0x298,0xdc0);
    if (piVar5 == NULL) {
        uVar1 = 0xfffffff4;
        goto code_r0x08013afc;
    }
    uVar6 = *(param_1 + 0x300);
    *(piVar5 + 0x28c) = 1;
    *piVar5 = iVar9;
    uVar1 = of_property_read_variable_u32_array(uVar6,0x8001e24,&uStack_c8 + 4,1,0);
    if (uVar1 < 0) {
        _dev_err(iVar9,"%s: could not find %s entry in dt\n","lpass_cdc_wsa_macro_probe",0x8001e24);
        goto code_r0x08013afc;
    }
    iVar7 = of_find_property(*(param_1 + 0x300),"qcom,is-used-swr-gpio",0);
    if ((iVar7 != 0) &&
       (iVar2 = of_property_read_variable_u32_array(*(param_1 + 0x300),"qcom,is-used-swr-gpio",&iStack_d0,1,0),
       iVar2 < 0)) {
        _dev_err(iVar9,"%s: error reading %s in dt\n","lpass_cdc_wsa_macro_probe","qcom,is-used-swr-gpio");
        iStack_d0 = 1;
    }
    iVar7 = of_parse_phandle(*(param_1 + 0x300),"qcom,wsa-swr-gpios",0);
    piVar5[0x20] = iVar7;
    if ((iVar7 == 0) && (iStack_d0 != 0)) {
        pcVar10 = "%s: swr_gpios handle not provided!\n";
code_r0x080139e0:
        _dev_err(iVar9,pcVar10,"lpass_cdc_wsa_macro_probe");
        uVar1 = 0xffffffea;
        goto code_r0x08013afc;
    }
    iVar2 = msm_cdc_pinctrl_get_state();
    if ((iVar2 < 0) && (iStack_d0 != 0)) {
        pcVar10 = "%s: failed to get swr pin state\n";
        goto code_r0x080139c0;
    }
    msm_cdc_pinctrl_set_wakeup_capable(piVar5[0x20],0);
    iVar7 = devm_ioremap(iVar9,uStack_c8._4_4_,0x1000);
    if (iVar7 == 0) {
        pcVar10 = "%s: ioremap failed\n";
        goto code_r0x080139e0;
    }
    uStack_4c = 0;
    iVar8 = of_find_property(*(param_1 + 0x300),"qcom,wsa-rloads",&uStack_4c);
    if (iVar8 == 0) {
        pcVar10 = "%s: missing %s\n";
code_r0x08013b3c:
        _dev_info(iVar9,pcVar10,"lpass_cdc_wsa_macro_read_array","qcom,wsa-rloads");
    }
    else {
        if ((uStack_4c & 0xfffffffc) != 8) {
            pcVar10 = "%s: invalid number of %s\n";
            goto code_r0x08013b3c;
        }
        iVar2 = of_property_read_variable_u32_array(*(param_1 + 0x300),"qcom,wsa-rloads",piVar5 + 0x27c,2,0);
        if (iVar2 < 0) {
            pcVar10 = "%s: Failed to read %s\n";
            goto code_r0x08013b3c;
        }
    }
    uStack_4c = 0;
    iVar8 = of_find_property(*(param_1 + 0x300),"qcom,wsa-system-gains",&uStack_4c);
    if (iVar8 == 0) {
        pcVar10 = "%s: missing %s\n";
code_r0x08013b60:
        _dev_info(iVar9,pcVar10,"lpass_cdc_wsa_macro_read_array","qcom,wsa-system-gains");
    }
    else {
        if ((uStack_4c & 0xfffffffc) != 0x10) {
            pcVar10 = "%s: invalid number of %s\n";
            goto code_r0x08013b60;
        }
        iVar2 = of_property_read_variable_u32_array(*(param_1 + 0x300),"qcom,wsa-system-gains",piVar5 + 0x264,4,0);
        if (iVar2 < 0) {
            pcVar10 = "%s: Failed to read %s\n";
            goto code_r0x08013b60;
        }
    }
    uStack_4c = 0;
    iVar8 = of_find_property(*(param_1 + 0x300),"qcom,wsa-bat-cfgs",&uStack_4c);
    if (iVar8 == 0) {
        pcVar10 = "%s: missing %s\n";
code_r0x08013b84:
        _dev_info(iVar9,pcVar10,"lpass_cdc_wsa_macro_read_array","qcom,wsa-bat-cfgs");
    }
    else {
        if ((uStack_4c & 0xfffffffc) != 8) {
            pcVar10 = "%s: invalid number of %s\n";
            goto code_r0x08013b84;
        }
        iVar2 = of_property_read_variable_u32_array(*(param_1 + 0x300),"qcom,wsa-bat-cfgs",piVar5 + 0x274,2,0);
        if (iVar2 < 0) {
            pcVar10 = "%s: Failed to read %s\n";
            goto code_r0x08013b84;
        }
    }
    piVar5[0x35] = iVar7;
    *(piVar5 + 0x29) = 1;
    piVar5[0x1a] = 0xfffffffe0;
    piVar5[0x1b] = piVar5 + 0x1b;
    piVar5[0x1c] = piVar5 + 0x1b;
    piVar5[0x1d] = sym.lpass_cdc_wsa_macro_add_child_devices.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    piVar5[0x46] = 0xfffffffe0;
    piVar5[0x47] = piVar5 + 0x47;
    piVar5[0x48] = piVar5 + 0x47;
    piVar5[0x49] = sym.lpass_cdc_wsa_macro_cooling_adjust_gain.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    uVar6 = *(param_1 + 0x300);
    piVar5[0x13] = piVar5;
    piVar5[0x14] = 0;
    piVar5[0x15] = 0;
    piVar5[0x16] = 0;
    piVar5[0x17] = sym.wsa_swrm_clock.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    piVar5[0x18] = sym.lpass_cdc_wsa_macro_core_vote.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    piVar5[0x19] = 0;
    iVar2 = of_property_read_variable_u32_array(uVar6,"qcom,default-clk-id",&uStack_c8,1,0);
    if (iVar2 < 0) {
        _dev_err(iVar9,"%s: could not find %s entry in dt\n","lpass_cdc_wsa_macro_probe","qcom,mux0-clk-id");
        uVar11 = 2;
        uStack_c8 = CONCAT44(uStack_c8._4_4_,2);
    }
    else {
        uVar11 = uStack_c8;
    }
    *(piVar5 + 0x3e) = uVar11;
    *(param_1 + 0xa8) = piVar5;
    __mutex_init(piVar5 + 6,"&wsa_priv->mclk_lock",
                 reloc.lpass_cdc_wsa_macro_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    __mutex_init(piVar5 + 0xc,"&wsa_priv->swr_clk_lock",
                 reloc.lpass_cdc_wsa_macro_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    uStack_a8 = 0;
    pcStack_c0 = sym.lpass_cdc_wsa_macro_init.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    pcStack_b8 = sym.lpass_cdc_wsa_macro_deinit.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    uStack_70 = 0;
    uStack_68 = 0;
    pcStack_a0 = obj.lpass_cdc_wsa_macro_dai;
    uStack_98 = 0;
    uStack_b0 = 5;
    pcStack_90 = sym.lpass_cdc_wsa_macro_event_handler.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    uStack_88 = 0;
    pcStack_80 = sym.lpass_cdc_wsa_macro_set_port_map.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    uStack_78 = 0;
    uStack_58 = CONCAT22(piVar5[0x3e],piVar5[0x3e]);
    iStack_60 = iVar7;
    uVar1 = lpass_cdc_register_macro(iVar9,2,&pcStack_c0);
    if (uVar1 < 0) {
        _dev_err(iVar9,"%s: register macro failed\n","lpass_cdc_wsa_macro_probe");
        goto code_r0x08013afc;
    }
    iVar7 = of_find_property(*(*piVar5 + 0x2f0),"#cooling-cells",0);
    if (iVar7 != 0) {
        iVar2 = of_property_read_variable_u32_array(*(param_1 + 0x300),"qcom,thermal-max-state",&uStack_cc,1,0);
        uVar12 = uStack_cc;
        if (iVar2 < 0) {
            _dev_info(iVar9,"%s: could not find %s entry in dt\n","lpass_cdc_wsa_macro_probe",
                      "qcom,thermal-max-state");
            uVar12 = 0xb;
        }
        *(piVar5 + 0x22c) = uVar12;
        uVar4 = devm_thermal_of_cooling_device_register
                          (iVar9,*(*piVar5 + 0x2f0),0x8001ea6,piVar5,
                           reloc.lpass_cdc_wsa_macro_get_max_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
        piVar5[0x44] = uVar4;
        if (0xfffffffffffff000 < uVar4) {
            _dev_err(iVar9,"%s: failed to register wsa macro as cooling device\n","lpass_cdc_wsa_macro_probe");
            piVar5[0x44] = 0;
        }
    }
    uVar3 = of_property_read_variable_u32_array(*(param_1 + 0x300),"qcom,noise-gate-mode",&uStack_d4,1,0);
    uVar1 = uVar3 & uVar3 >> 0x1f;
    if (uVar3 < 0) {
        _dev_info(iVar9,"%s: could not find %s entry in dt\n","lpass_cdc_wsa_macro_probe","qcom,noise-gate-mode");
code_r0x08013aac:
        *(piVar5 + 0x51) = 0;
    }
    else {
        if (3 < uStack_d4) goto code_r0x08013aac;
        *(piVar5 + 0x51) = uStack_d4;
    }
    pm_runtime_set_autosuspend_delay(iVar9,0x32);
    __pm_runtime_use_autosuspend(iVar9,1);
    __pm_runtime_set_status(iVar9,2);
    *(param_1 + 0x210) = *(param_1 + 0x210) | 0x100;
    pm_runtime_enable(iVar9);
    queue_work_on(0x20,_pm_runtime_force_resume,piVar5 + 0x1a);
code_r0x08013afc:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_48) {
        iVar9 = __stack_chk_fail();
        *extraout_x18 = sym.lpass_cdc_wsa_macro_remove;
        iVar7 = *(iVar9 + 0xa8);
        if (iVar7 == 0) {
            uVar1 = 0xffffffea;
        }
        else {
            iVar9 = iVar9 + 0x10;
            if (*(iVar7 + 0x220) != 0) {
                thermal_cooling_device_unregister(*(iVar7 + 0x220));
            }
            if (((0 < *(iVar7 + 0x1c8)) && (platform_device_unregister(*(iVar7 + 0x1b0)), 1 < *(iVar7 + 0x1c8))) &&
               (platform_device_unregister(*(iVar7 + 0x1b8)), 2 < *(iVar7 + 0x1c8))) {
                platform_device_unregister(*(iVar7 + 0x1c0));
            }
            __pm_runtime_disable(iVar9,1);
            __pm_runtime_set_status(iVar9,2);
            lpass_cdc_unregister_macro(iVar9,2);
            uVar1 = 0;
        }
        return uVar1;
    }
    return uVar1;
}


// ===== sym.lpass_cdc_wsa_macro_deinit.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080133b0 (size 8) =====

ulong sym.lpass_cdc_wsa_macro_deinit.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int iVar1;
    int64_t iVar2;
    char *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = lpass_cdc_get_device_ptr(*(param_1 + 0x18),2);
    if (iVar2 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: null device for macro!\n";
    }
    else {
        iVar2 = *(iVar2 + 0x98);
        if ((iVar2 != 0) && (*(iVar2 + 0x108) != 0)) {
            *(iVar2 + 0x108) = 0;
            return 0;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(param_1 + 0x18),pcVar3,"lpass_cdc_wsa_macro_deinit");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_init.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080133b8 (size 8) =====

int sym.lpass_cdc_wsa_macro_init.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    uint32_t uVar15;
    code *pcVar16;
    int iVar17;
    int64_t iVar18;
    ulong uVar19;
    char *pcVar20;
    int64_t iVar21;
    int64_t iVar22;
    int iVar23;
    int iVar24;
    ulong *in_x18;
    int64_t iVar25;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar18 = lpass_cdc_get_device_ptr(*(param_1 + 0x18),2);
    if (iVar18 == 0) {
        uVar19 = *(param_1 + 0x18);
        pcVar20 = "%s: null device for macro!\n";
    }
    else {
        iVar25 = *(iVar18 + 0x98);
        if (iVar25 != 0) {
            iVar21 = param_1 + 0xd0;
            iVar17 = snd_soc_dapm_new_controls(iVar21,obj.lpass_cdc_wsa_macro_dapm_widgets,0x31);
            if (iVar17 < 0) {
                pcVar20 = "%s: Failed to add controls\n";
            }
            else {
                iVar17 = snd_soc_dapm_add_routes(iVar21,obj.wsa_audio_map,0x77);
                if (iVar17 < 0) {
                    pcVar20 = "%s: Failed to add routes\n";
                }
                else {
                    iVar17 = snd_soc_dapm_new_widgets(*(param_1 + 0xe8));
                    if (iVar17 < 0) {
                        pcVar20 = "%s: Failed to add widgets\n";
                    }
                    else {
                        iVar17 = snd_soc_add_component_controls(param_1,obj.lpass_cdc_wsa_macro_snd_controls,0x12);
                        if (-1 < iVar17) {
                            snd_soc_dapm_ignore_suspend(iVar21,"WSA_AIF1 Playback");
                            snd_soc_dapm_ignore_suspend(iVar21,"WSA_AIF_MIX1 Playback");
                            snd_soc_dapm_ignore_suspend(iVar21,"WSA_AIF_VI Capture");
                            snd_soc_dapm_ignore_suspend(iVar21,"WSA_AIF_ECHO Capture");
                            snd_soc_dapm_ignore_suspend(iVar21,"WSA_AIF_CPS Capture");
                            snd_soc_dapm_ignore_suspend(iVar21,"WSA_SPK1 OUT");
                            snd_soc_dapm_ignore_suspend(iVar21,"WSA_SPK2 OUT");
                            snd_soc_dapm_ignore_suspend(iVar21,"VIINPUT_WSA");
                            snd_soc_dapm_ignore_suspend(iVar21,"CPSINPUT_WSA");
                            snd_soc_dapm_ignore_suspend(iVar21,"WSA SRC0_INP");
                            snd_soc_dapm_ignore_suspend(iVar21,"WSA_TX DEC0_INP");
                            snd_soc_dapm_ignore_suspend(iVar21,"WSA_TX DEC1_INP");
                            snd_soc_dapm_sync(iVar21);
                            iVar18 = 0;
                            *(iVar25 + 0x108) = param_1;
                            *(iVar25 + 0x1d0) = 1;
                            do {
                                snd_soc_component_update_bits
                                          (param_1,*(obj.lpass_cdc_wsa_macro_reg_init + iVar18),*(iVar18 + 0x800a5a2)
                                           ,*(iVar18 + 0x800a5a3));
                                iVar18 = iVar18 + 4;
                            } while (iVar18 != 0x98);
                            iVar18 = lpass_cdc_get_device_ptr(*(param_1 + 0x18),2);
                            if (iVar18 == 0) {
                                iVar17 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,
                                                      "lpass_cdc_wsa_macro_get_data");
                                if (iVar17 == 0) {
                                    return 0;
                                }
                                pcVar20 = "%s: null device for macro!\n";
                            }
                            else {
                                iVar18 = *(iVar18 + 0x98);
                                if ((iVar18 != 0) && (*(iVar18 + 0x108) != 0)) {
                                    uVar13 = *(iVar18 + 0x27c);
                                    iVar25 = uVar13;
                                    uVar14 = *(iVar18 + 0x264);
                                    uVar15 = *(iVar18 + 0x274);
                                    if (uVar13 < 4) {
                                        snd_soc_component_update_bits(param_1,0x2b4c,0xe0,*(iVar25 * 4 + 0x8012348));
                                    }
                                    snd_soc_component_update_bits(param_1,0x2b50,0xf,uVar14);
                                    snd_soc_component_update_bits(param_1,0x2bc4,0xc0,uVar15 * 0x40 + -0x40);
                                    if (((uVar14 < 0x13) && (uVar15 < 7)) && (uVar13 < 4)) {
                                        if (uVar14 * 0x70 + uVar15 * 0x10 + iVar25 * 4 < 0x850) {
                                            iVar22 = uVar14 * 0x70;
                                            iVar21 = uVar15 * 0x10;
                                            iVar25 = iVar25 * 4;
                                            iVar17 = 0xff;
                                            if (*(obj.pbr_vth1_data + iVar25 + iVar21 + iVar22) != 0) {
                                                iVar17 = *(obj.pbr_vth1_data + iVar25 + iVar21 + iVar22);
                                            }
                                            iVar1 = 0xff;
                                            if (*(obj.pbr_vth2_data + iVar25 + iVar21 + iVar22) != 0) {
                                                iVar1 = *(obj.pbr_vth2_data + iVar25 + iVar21 + iVar22);
                                            }
                                            iVar23 = 0xff;
                                            iVar2 = iVar23;
                                            if (*(obj.pbr_vth3_data + iVar25 + iVar21 + iVar22) != 0) {
                                                iVar2 = *(obj.pbr_vth3_data + iVar25 + iVar21 + iVar22);
                                            }
                                            iVar3 = iVar23;
                                            if (*(obj.pbr_vth4_data + iVar25 + iVar21 + iVar22) != 0) {
                                                iVar3 = *(obj.pbr_vth4_data + iVar25 + iVar21 + iVar22);
                                            }
                                            iVar4 = iVar23;
                                            if (*(obj.pbr_vth5_data + iVar25 + iVar21 + iVar22) != 0) {
                                                iVar4 = *(obj.pbr_vth5_data + iVar25 + iVar21 + iVar22);
                                            }
                                            if (*(obj.pbr_vth6_data + iVar25 + iVar21 + iVar22) != 0) {
                                                iVar23 = *(obj.pbr_vth6_data + iVar25 + iVar21 + iVar22);
                                            }
                                            iVar24 = 0xff;
                                            iVar5 = iVar24;
                                            if (*(obj.pbr_vth7_data + iVar25 + iVar21 + iVar22) != 0) {
                                                iVar5 = *(obj.pbr_vth7_data + iVar25 + iVar21 + iVar22);
                                            }
                                            iVar6 = iVar24;
                                            if (*(obj.pbr_vth8_data + iVar25 + iVar21 + iVar22) != 0) {
                                                iVar6 = *(obj.pbr_vth8_data + iVar25 + iVar21 + iVar22);
                                            }
                                            iVar7 = iVar24;
                                            if (*(obj.pbr_vth9_data + iVar25 + iVar21 + iVar22) != 0) {
                                                iVar7 = *(obj.pbr_vth9_data + iVar25 + iVar21 + iVar22);
                                            }
                                            iVar8 = iVar24;
                                            if (*(obj.pbr_vth10_data + iVar25 + iVar21 + iVar22) != 0) {
                                                iVar8 = *(obj.pbr_vth10_data + iVar25 + iVar21 + iVar22);
                                            }
                                            iVar9 = iVar24;
                                            if (*(obj.pbr_vth11_data + iVar25 + iVar21 + iVar22) != 0) {
                                                iVar9 = *(obj.pbr_vth11_data + iVar25 + iVar21 + iVar22);
                                            }
                                            iVar10 = iVar24;
                                            if (*(obj.pbr_vth12_data + iVar25 + iVar21 + iVar22) != 0) {
                                                iVar10 = *(obj.pbr_vth12_data + iVar25 + iVar21 + iVar22);
                                            }
                                            iVar11 = iVar24;
                                            if (*(obj.pbr_vth13_data + iVar25 + iVar21 + iVar22) != 0) {
                                                iVar11 = *(obj.pbr_vth13_data + iVar25 + iVar21 + iVar22);
                                            }
                                            if (*(obj.pbr_vth14_data + iVar25 + iVar21 + iVar22) != 0) {
                                                iVar24 = *(obj.pbr_vth14_data + iVar25 + iVar21 + iVar22);
                                            }
                                            iVar12 = 0xff;
                                            if (*(obj.pbr_vth15_data + iVar25 + iVar21 + iVar22) != 0) {
                                                iVar12 = *(obj.pbr_vth15_data + iVar25 + iVar21 + iVar22);
                                            }
                                            snd_soc_component_write(param_1,0x2b08,iVar17);
                                            snd_soc_component_write(param_1,0x2b0c,iVar1);
                                            snd_soc_component_write(param_1,0x2b10,iVar2);
                                            snd_soc_component_write(param_1,0x2b14,iVar3);
                                            snd_soc_component_write(param_1,0x2b18,iVar4);
                                            snd_soc_component_write(param_1,0x2b1c,iVar23);
                                            snd_soc_component_write(param_1,0x2b20,iVar5);
                                            snd_soc_component_write(param_1,0x2b24,iVar6);
                                            snd_soc_component_write(param_1,0x2b28,iVar7);
                                            snd_soc_component_write(param_1,0x2b2c,iVar8);
                                            snd_soc_component_write(param_1,0x2b30,iVar9);
                                            snd_soc_component_write(param_1,0x2b34,iVar10);
                                            snd_soc_component_write(param_1,0x2b38,iVar11);
                                            snd_soc_component_write(param_1,0x2b3c,iVar24);
                                            snd_soc_component_write(param_1,0x2b40,iVar12);
                                            uVar13 = *(iVar18 + 0x280);
                                            iVar25 = uVar13;
                                            uVar14 = *(iVar18 + 0x26c);
                                            uVar15 = *(iVar18 + 0x278);
                                            if (uVar13 < 4) {
                                                snd_soc_component_update_bits
                                                          (param_1,0x2bb4,0xe0,*(iVar25 * 4 + 0x8012348));
                                            }
                                            snd_soc_component_update_bits(param_1,0x2bb8,0xf,uVar14);
                                            snd_soc_component_update_bits(param_1,0x2bc4,0x30,uVar15 * 0x10 + -0x10);
                                            if (((0x12 < uVar14) || (6 < uVar15)) || (3 < uVar13))
                                            goto code_r0x08015000;
                                            if (uVar14 * 0x70 + uVar15 * 0x10 + iVar25 * 4 < 0x850) {
                                                iVar18 = uVar14 * 0x70;
                                                iVar21 = uVar15 * 0x10;
                                                iVar25 = iVar25 * 4;
                                                iVar17 = 0xff;
                                                if (*(obj.pbr_vth1_data + iVar25 + iVar21 + iVar18) != 0) {
                                                    iVar17 = *(obj.pbr_vth1_data + iVar25 + iVar21 + iVar18);
                                                }
                                                iVar1 = 0xff;
                                                if (*(obj.pbr_vth2_data + iVar25 + iVar21 + iVar18) != 0) {
                                                    iVar1 = *(obj.pbr_vth2_data + iVar25 + iVar21 + iVar18);
                                                }
                                                iVar23 = 0xff;
                                                iVar2 = iVar23;
                                                if (*(obj.pbr_vth3_data + iVar25 + iVar21 + iVar18) != 0) {
                                                    iVar2 = *(obj.pbr_vth3_data + iVar25 + iVar21 + iVar18);
                                                }
                                                iVar3 = iVar23;
                                                if (*(obj.pbr_vth4_data + iVar25 + iVar21 + iVar18) != 0) {
                                                    iVar3 = *(obj.pbr_vth4_data + iVar25 + iVar21 + iVar18);
                                                }
                                                iVar4 = iVar23;
                                                if (*(obj.pbr_vth5_data + iVar25 + iVar21 + iVar18) != 0) {
                                                    iVar4 = *(obj.pbr_vth5_data + iVar25 + iVar21 + iVar18);
                                                }
                                                if (*(obj.pbr_vth6_data + iVar25 + iVar21 + iVar18) != 0) {
                                                    iVar23 = *(obj.pbr_vth6_data + iVar25 + iVar21 + iVar18);
                                                }
                                                iVar24 = 0xff;
                                                iVar5 = iVar24;
                                                if (*(obj.pbr_vth7_data + iVar25 + iVar21 + iVar18) != 0) {
                                                    iVar5 = *(obj.pbr_vth7_data + iVar25 + iVar21 + iVar18);
                                                }
                                                iVar6 = iVar24;
                                                if (*(obj.pbr_vth8_data + iVar25 + iVar21 + iVar18) != 0) {
                                                    iVar6 = *(obj.pbr_vth8_data + iVar25 + iVar21 + iVar18);
                                                }
                                                iVar7 = iVar24;
                                                if (*(obj.pbr_vth9_data + iVar25 + iVar21 + iVar18) != 0) {
                                                    iVar7 = *(obj.pbr_vth9_data + iVar25 + iVar21 + iVar18);
                                                }
                                                iVar8 = iVar24;
                                                if (*(obj.pbr_vth10_data + iVar25 + iVar21 + iVar18) != 0) {
                                                    iVar8 = *(obj.pbr_vth10_data + iVar25 + iVar21 + iVar18);
                                                }
                                                iVar9 = iVar24;
                                                if (*(obj.pbr_vth11_data + iVar25 + iVar21 + iVar18) != 0) {
                                                    iVar9 = *(obj.pbr_vth11_data + iVar25 + iVar21 + iVar18);
                                                }
                                                iVar10 = iVar24;
                                                if (*(obj.pbr_vth12_data + iVar25 + iVar21 + iVar18) != 0) {
                                                    iVar10 = *(obj.pbr_vth12_data + iVar25 + iVar21 + iVar18);
                                                }
                                                iVar11 = iVar24;
                                                if (*(obj.pbr_vth13_data + iVar25 + iVar21 + iVar18) != 0) {
                                                    iVar11 = *(obj.pbr_vth13_data + iVar25 + iVar21 + iVar18);
                                                }
                                                if (*(obj.pbr_vth14_data + iVar25 + iVar21 + iVar18) != 0) {
                                                    iVar24 = *(obj.pbr_vth14_data + iVar25 + iVar21 + iVar18);
                                                }
                                                iVar12 = 0xff;
                                                if (*(obj.pbr_vth15_data + iVar25 + iVar21 + iVar18) != 0) {
                                                    iVar12 = *(obj.pbr_vth15_data + iVar25 + iVar21 + iVar18);
                                                }
                                                snd_soc_component_write(param_1,0x2b74,iVar17);
                                                snd_soc_component_write(param_1,0x2b78,iVar1);
                                                snd_soc_component_write(param_1,0x2b7c,iVar2);
                                                snd_soc_component_write(param_1,0x2b80,iVar3);
                                                snd_soc_component_write(param_1,0x2b84,iVar4);
                                                snd_soc_component_write(param_1,0x2b88,iVar23);
                                                snd_soc_component_write(param_1,0x2b8c,iVar5);
                                                snd_soc_component_write(param_1,0x2b90,iVar6);
                                                snd_soc_component_write(param_1,0x2b94,iVar7);
                                                snd_soc_component_write(param_1,0x2b98,iVar8);
                                                snd_soc_component_write(param_1,0x2b9c,iVar9);
                                                snd_soc_component_write(param_1,0x2ba0,iVar10);
                                                snd_soc_component_write(param_1,0x2ba4,iVar11);
                                                snd_soc_component_write(param_1,0x2ba8,iVar24);
                                                snd_soc_component_write(param_1,0x2bac,iVar12);
                                                return 0;
                                            }
                                        }
    //WARNING: Does not return
                                        pcVar16 = SoftwareBreakpoint(1,0x8015008);
                                        (*pcVar16)();
                                    }
code_r0x08015000:
    //WARNING: Does not return
                                    pcVar16 = SoftwareBreakpoint(0x5512,0x8015004);
                                    (*pcVar16)();
                                }
                                iVar17 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,
                                                      "lpass_cdc_wsa_macro_get_data");
                                if (iVar17 == 0) {
                                    return 0;
                                }
                                pcVar20 = "%s: priv is null for macro!\n";
                            }
                            _dev_err(*(param_1 + 0x18),pcVar20,"lpass_cdc_wsa_macro_init_pbr");
                            return 0;
                        }
                        pcVar20 = "%s: Failed to add snd_ctls\n";
                    }
                }
            }
            _dev_err(iVar18,pcVar20,"lpass_cdc_wsa_macro_init");
            return iVar17;
        }
        uVar19 = *(param_1 + 0x18);
        pcVar20 = "%s: priv is null for macro!\n";
    }
    _dev_err(uVar19,pcVar20,"lpass_cdc_wsa_macro_init");
    return -0x16;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080133c0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.lpass_cdc_wsa_macro_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}


// ===== sym.lpass_cdc_wsa_macro_mute_stream.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080133c8 (size 8) =====

ulong sym.lpass_cdc_wsa_macro_mute_stream.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int param_2)

{
    int iVar1;
    char cVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    char *pcVar7;
    ulong *in_x18;
    int64_t iVar8;
    ulong uVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 != 0) {
        return 0;
    }
    iVar8 = *(param_1 + 0x58);
    iVar5 = lpass_cdc_get_device_ptr(*(iVar8 + 0x18),2);
    if (iVar5 == 0) {
        iVar4 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar4 == 0) {
            return 0xffffffea;
        }
        pcVar7 = "%s: null device for macro!\n";
    }
    else {
        if ((*(iVar5 + 0x98) != 0) && (*(*(iVar5 + 0x98) + 0x108) != 0)) {
            if (*(param_1 + 8) - 1U < 2) {
                cVar2 = snd_soc_component_read(iVar8,0x2100);
                uVar3 = snd_soc_component_read(iVar8,0x2104);
                uVar6 = snd_soc_component_read(iVar8,0x244c);
                if ((uVar6 & 1) != 0) {
                    if (cVar2 != '\0' || (uVar3 & 0x38) != 0) {
                        snd_soc_component_update_bits(iVar8,0x2400,0x20,0x20);
                    }
                    if ((uVar3 & 7) != 0) {
                        snd_soc_component_update_bits(iVar8,0x2400,0x20,0x20);
                        snd_soc_component_update_bits(iVar8,0x2418,0x20,0x20);
                    }
                }
                cVar2 = snd_soc_component_read(iVar8,0x2108);
                uVar3 = snd_soc_component_read(iVar8,0x210c);
                uVar6 = snd_soc_component_read(iVar8,0x24cc);
                if ((uVar6 & 1) != 0) {
                    if (cVar2 != '\0' || (uVar3 & 0x38) != 0) {
                        snd_soc_component_update_bits(iVar8,0x2480,0x20,0x20);
                    }
                    if ((uVar3 & 7) != 0) {
                        snd_soc_component_update_bits(iVar8,0x2480,0x20,0x20);
                        snd_soc_component_update_bits(iVar8,0x2498,0x20,0x20);
                    }
                }
                lpass_cdc_wsa_pa_on(iVar5,0);
                if (*(param_1 + 8) - 1U < 2) {
                    uVar9 = *(param_1 + 0x58);
                    snd_soc_component_update_bits(uVar9,0x2400,0x10,0);
                    snd_soc_component_update_bits(uVar9,0x2418,0x10,0);
                    snd_soc_component_update_bits(uVar9,0x2480,0x10,0);
                    snd_soc_component_update_bits(uVar9,0x2498,0x10,0);
                }
                iVar5 = lpass_cdc_get_device_ptr(*(iVar8 + 0x18),2);
                if (iVar5 == 0) {
                    uVar9 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
                    if (uVar9 == 0) {
                        return uVar9;
                    }
                    pcVar7 = "%s: null device for macro!\n";
                }
                else {
                    iVar5 = *(iVar5 + 0x98);
                    if ((iVar5 != 0) && (*(iVar5 + 0x108) != 0)) {
                        usleep_range_state(5000,0x157c,2);
                        iVar1 = *(iVar5 + 500);
                        iVar4 = 4;
                        if (iVar1 != 48000) {
                            iVar4 = (iVar1 == 24000) << 1;
                        }
                        if ((*(iVar5 + 0x130) & 1) != 0) {
                            snd_soc_component_update_bits((iVar1 == 24000) << 1,iVar8,0x2244,0x20,0x20);
                            snd_soc_component_update_bits(iVar8,0x2264,0x20,0x20);
                            snd_soc_component_update_bits(iVar8,0x2244,0xf,iVar4);
                            snd_soc_component_update_bits(iVar8,0x2264,0xf,iVar4);
                            snd_soc_component_update_bits(iVar8,0x2244,0x10,0x10);
                            snd_soc_component_update_bits(iVar8,0x2264,0x10,0x10);
                            snd_soc_component_update_bits(iVar8,0x2244,0x20,0);
                            snd_soc_component_update_bits(iVar8,0x2264,0x20,0);
                        }
                        if ((*(iVar5 + 0x130) >> 1 & 1) == 0) {
                            return 0;
                        }
                        snd_soc_component_update_bits(iVar8,0x2284,0x20,0x20);
                        snd_soc_component_update_bits(iVar8,0x22a4,0x20,0x20);
                        snd_soc_component_update_bits(iVar8,0x2284,0xf,iVar4);
                        snd_soc_component_update_bits(iVar8,0x22a4,0xf,iVar4);
                        snd_soc_component_update_bits(iVar8,0x2284,0x10,0x10);
                        snd_soc_component_update_bits(iVar8,0x22a4,0x10,0x10);
                        snd_soc_component_update_bits(iVar8,0x2284,0x20,0);
                        snd_soc_component_update_bits(iVar8,0x22a4,0x20,0);
                        return 0;
                    }
                    uVar9 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
                    if (uVar9 == 0) {
                        return uVar9;
                    }
                    pcVar7 = "%s: priv is null for macro!\n";
                }
                _dev_err(*(iVar8 + 0x18),pcVar7,"lpass_cdc_wsa_macro_enable_vi_decimator");
            }
            return 0;
        }
        iVar4 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar4 == 0) {
            return 0xffffffea;
        }
        pcVar7 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar8 + 0x18),pcVar7,"lpass_cdc_wsa_macro_mute_stream");
    return 0xffffffea;
}


// ===== sym.pm_runtime_force_resume.cfi_jt @ 0x080133d0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.pm_runtime_force_resume.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.lpass_cdc_runtime_suspend.cfi_jt @ 0x080133d8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.lpass_cdc_runtime_suspend.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.lpass_cdc_runtime_resume.cfi_jt @ 0x080133e0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.lpass_cdc_runtime_resume.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.pm_runtime_force_suspend.cfi_jt @ 0x080133e8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.pm_runtime_force_suspend.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.wsa_swrm_clock.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080133f0 (size 8) =====

int sym.wsa_swrm_clock.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t *param_1,uint64_t param_2)

{
    int iVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    char *pcVar5;
    int64_t iVar6;
    int16_t iVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = dev_get_regmap(*(*param_1 + 0x60),0);
    if (iVar3 == 0) {
        iVar1 = ___ratelimit(obj.wsa_swrm_clock._rs,"wsa_swrm_clock");
        if (iVar1 == 0) {
            return -0x16;
        }
        _dev_err(*param_1,"%s: regmap is NULL\n","wsa_swrm_clock");
        return -0x16;
    }
    mutex_lock(param_1 + 0xc);
    iVar6 = (*param_1)[0xe];
    if (iVar6 == 0) {
        iVar6 = **param_1;
    }
    pcVar5 = "enable";
    if ((param_2 & 1) == 0) {
        pcVar5 = "disable";
    }
    __trace_bprintk(0x8014068,*0x8019000,iVar6,"wsa_swrm_clock",pcVar5);
    if ((param_2 & 1) == 0) {
        if (*(param_1 + 0x26) == 0) {
            iVar1 = ___ratelimit(obj.wsa_swrm_clock._rs.46,"wsa_swrm_clock");
            if (iVar1 != 0) {
                _dev_err(*param_1,"%s: clock already disabled\n","wsa_swrm_clock");
            }
            iVar1 = 0;
            *(param_1 + 0x26) = 0;
            goto code_r0x08014280;
        }
        iVar7 = *(param_1 + 0x26) + -1;
        *(param_1 + 0x26) = iVar7;
        if (iVar7 == 0) {
            regmap_update_bits_base(iVar3,0x2008,1,0,0,0,0);
            sym.lpass_cdc_wsa_macro_mclk_enable(param_1,0);
            iVar1 = msm_cdc_pinctrl_select_sleep_state(param_1[0x20]);
            if (iVar1 < 0) {
                iVar2 = ___ratelimit(obj.wsa_swrm_clock._rs.48,"wsa_swrm_clock");
                if (iVar2 != 0) {
                    _dev_err(*param_1,"%s: wsa swr pinctrl disable failed\n","wsa_swrm_clock");
                }
                goto code_r0x08014280;
            }
        }
        else {
            iVar1 = 0;
        }
    }
    else {
        __pm_runtime_resume(*param_1,4);
        iVar7 = *(param_1 + 0x26);
        if (iVar7 == 0) {
            iVar1 = msm_cdc_pinctrl_select_active_state(param_1[0x20]);
            if (iVar1 < 0) {
                iVar2 = ___ratelimit(obj.wsa_swrm_clock._rs.42,"wsa_swrm_clock");
                if (iVar2 != 0) {
                    iVar3 = *param_1;
                    pcVar5 = "%s: wsa swr pinctrl enable failed\n";
code_r0x08014388:
                    _dev_err(iVar3,pcVar5,"wsa_swrm_clock");
                }
            }
            else {
                iVar1 = sym.lpass_cdc_wsa_macro_mclk_enable(param_1,1);
                if (-1 < iVar1) {
                    if (*(param_1 + 0x29) != '\0') {
                        regmap_update_bits_base(iVar3,0x2008,2,2,0,0,0);
                    }
                    regmap_update_bits_base(iVar3,0x2008,1,1,0,0,0);
                    if (*(param_1 + 0x29) != '\0') {
                        regmap_update_bits_base(iVar3,0x2008,2,0,0,0,0);
                    }
                    regmap_update_bits_base(iVar3,0x2008,0x1c,0xc,0,0,0);
                    iVar7 = *(param_1 + 0x26);
                    *(param_1 + 0x29) = 0;
                    goto code_r0x080140cc;
                }
                msm_cdc_pinctrl_select_sleep_state(param_1[0x20]);
                iVar2 = ___ratelimit(obj.wsa_swrm_clock._rs.44,"wsa_swrm_clock");
                if (iVar2 != 0) {
                    iVar3 = *param_1;
                    pcVar5 = "%s: wsa request clock enable failed\n";
                    goto code_r0x08014388;
                }
            }
            iVar3 = *param_1;
            uVar4 = ktime_get_mono_fast_ns();
            *(iVar3 + 0x218) = uVar4;
            __pm_runtime_suspend(*param_1,0xd);
            goto code_r0x08014280;
        }
        iVar1 = 0;
code_r0x080140cc:
        iVar3 = *param_1;
        *(param_1 + 0x26) = iVar7 + 1;
        uVar4 = ktime_get_mono_fast_ns();
        *(iVar3 + 0x218) = uVar4;
        __pm_runtime_suspend(*param_1,0xd);
    }
    iVar3 = (*param_1)[0xe];
    if (iVar3 == 0) {
        iVar3 = **param_1;
    }
    __trace_bprintk(0x801424c,*0x8019000,iVar3,"wsa_swrm_clock",*(param_1 + 0x26));
code_r0x08014280:
    mutex_unlock(param_1 + 0xc);
    return iVar1;
}


// ===== sym.lpass_cdc_wsa_macro_core_vote.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080133f8 (size 8) =====

uint sym.lpass_cdc_wsa_macro_core_vote.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t *param_1,uint64_t param_2)

{
    int iVar1;
    uint64_t uVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == NULL) {
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_core_vote._rs,"lpass_cdc_wsa_macro_core_vote");
        if (iVar1 != 0) {
            _printk(0x8001134,"lpass_cdc_wsa_macro_core_vote");
            return 0xffffffea;
        }
    }
    else if ((*(param_1 + 0x28c) != '\0') || ((param_2 & 1) == 0)) {
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


// ===== sym.lpass_cdc_wsa_macro_add_child_devices.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08013400 (size 8) =====

void sym.lpass_cdc_wsa_macro_add_child_devices.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    int64_t *piVar2;
    code *pcVar3;
    int iVar4;
    int64_t iVar5;
    ulong *puVar6;
    int64_t iVar7;
    char *pcVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar9;
    uint64_t uVar10;
    uint16_t uVar11;
    ulong unaff_x30;
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
    iVar5 = sp_el0;
    iStack_68 = *(iVar5 + 0x5e0);
    piVar2 = param_1 + -0xd0;
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
    if (piVar2 == NULL) {
        _printk(0x8000fad,"lpass_cdc_wsa_macro_add_child_devices");
    }
    else {
        iVar5 = *piVar2;
        if ((iVar5 == 0) || (*(iVar5 + 0x2f0) == 0)) {
            pcVar8 = "%s: DT node for wsa_priv does not exist\n";
code_r0x08013e64:
            _dev_err(iVar5,pcVar8,"lpass_cdc_wsa_macro_add_child_devices");
        }
        else {
            *(param_1 + 0xf8) = 0;
            puVar6 = of_get_next_available_child(*(iVar5 + 0x2f0),0);
            if (puVar6 != NULL) {
                uVar11 = 0;
                iVar9 = 0;
                do {
                    iVar5 = strnstr(*puVar6,"wsa_swr_master",0xe);
                    pcVar8 = "wsa_swr_ctrl";
                    if (iVar5 != 0) {
code_r0x08013db0:
                        strlcpy(&uStack_b8,pcVar8,0x4f);
                        iVar7 = platform_device_alloc(&uStack_b8,0xffffffff);
                        iVar5 = *piVar2;
                        if (iVar7 == 0) {
                            pcVar8 = "%s: pdev memory alloc failed\n";
                            goto code_r0x08013e64;
                        }
                        *(iVar7 + 0x70) = iVar5;
                        *(iVar7 + 0x300) = puVar6;
                        iVar5 = strnstr(*puVar6,"wsa_swr_master",0xe);
                        if (iVar5 == 0) {
code_r0x08013e30:
                            iVar4 = platform_device_add(iVar7);
                            if (iVar4 == 0) {
                                uVar1 = *(param_1 + 0xf8);
                                if (uVar1 < 3) {
                                    *(param_1 + 0xf8) = uVar1 + 1;
                                    if (2 < uVar1) goto code_r0x08013e58;
                                    *(param_1 + 0xe0 + uVar1 * 8) = iVar7;
                                    goto code_r0x08013d64;
                                }
                                break;
                            }
                            _dev_err(iVar7 + 0x10,"%s: Cannot add platform device\n",
                                     "lpass_cdc_wsa_macro_add_child_devices");
                        }
                        else {
                            iVar4 = platform_device_add_data(iVar7,param_1 + -0x38,0x38);
                            if (iVar4 == 0) {
                                uVar10 = uVar11;
                                iVar9 = krealloc(iVar9,uVar10 * 8 + 8,0xcc0);
                                if (iVar9 != 0) {
                                    uVar11 = uVar11 + 1;
                                    *(iVar9 + uVar10 * 8) = iVar7;
                                    *(param_1 + -0x40) = iVar9;
                                    goto code_r0x08013e30;
                                }
                                _dev_err(iVar7 + 0x10,"out of memory\n");
                            }
                            else {
                                _dev_err(iVar7 + 0x10,"%s: cannot add plat data ctrl:%d\n",
                                         "lpass_cdc_wsa_macro_add_child_devices",uVar11);
                            }
                        }
                        if ((((0 < *(param_1 + 0xf8)) &&
                             (platform_device_put(*(param_1 + 0xe0)), 1 < *(param_1 + 0xf8))) &&
                            (platform_device_put(*(param_1 + 0xe8)), 2 < *(param_1 + 0xf8))) &&
                           (platform_device_put(*(param_1 + 0xf0)), 3 < *(param_1 + 0xf8))) {
code_r0x08013e58:
    //WARNING: Does not return
                            pcVar3 = SoftwareBreakpoint(0x5512,0x8013e5c);
                            (*pcVar3)();
                        }
                        break;
                    }
                    iVar5 = strnstr(*puVar6,"msm_cdc_pinctrl",0xf);
                    if (iVar5 != 0) {
                        pcVar8 = *puVar6;
                        goto code_r0x08013db0;
                    }
code_r0x08013d64:
                    puVar6 = of_get_next_available_child(*(*piVar2 + 0x2f0),puVar6);
                } while (puVar6 != NULL);
            }
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_68) {
        iVar5 = __stack_chk_fail();
        *extraout_x18 = sym.lpass_cdc_wsa_macro_cooling_adjust_gain;
        if (iVar5 + -0x230 == NULL) {
            _printk(0x8001cff,"lpass_cdc_wsa_macro_cooling_adjust_gain");
        }
        else {
            iVar9 = *(iVar5 + -0x230);
            if ((iVar9 == 0) || (*(iVar9 + 0x2f0) == 0)) {
                _dev_err(iVar9,"%s: DT node for wsa_priv does not exist\n","lpass_cdc_wsa_macro_cooling_adjust_gain");
            }
            else if (*(iVar5 + -0x208) != '\0') {
                snd_soc_component_update_bits(*(iVar5 + -0x128),0x2414,0xff,*(iVar5 + -0x14) - *(iVar5 + -8));
                snd_soc_component_update_bits(*(iVar5 + -0x128),0x2494,0xff,*(iVar5 + -0x13) - *(iVar5 + -8));
            }
        }
        return;
    }
    return;
}


// ===== sym.lpass_cdc_wsa_macro_cooling_adjust_gain.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08013408 (size 8) =====

void sym.lpass_cdc_wsa_macro_cooling_adjust_gain.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 + -0x230 == NULL) {
        _printk(0x8001cff,"lpass_cdc_wsa_macro_cooling_adjust_gain");
    }
    else {
        iVar1 = *(param_1 + -0x230);
        if ((iVar1 == 0) || (*(iVar1 + 0x2f0) == 0)) {
            _dev_err(iVar1,"%s: DT node for wsa_priv does not exist\n","lpass_cdc_wsa_macro_cooling_adjust_gain");
        }
        else if (*(param_1 + -0x208) != '\0') {
            snd_soc_component_update_bits(*(param_1 + -0x128),0x2414,0xff,*(param_1 + -0x14) - *(param_1 + -8));
            snd_soc_component_update_bits(*(param_1 + -0x128),0x2494,0xff,*(param_1 + -0x13) - *(param_1 + -8));
        }
    }
    return;
}


// ===== sym.lpass_cdc_wsa_macro_enable_echo.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08013410 (size 8) =====

ulong sym.lpass_cdc_wsa_macro_enable_echo.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    char *pcVar5;
    int64_t iVar6;
    ulong *in_x18;
    int64_t iVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(param_1 + 0x28);
    iVar7 = iVar6 + -0xd0;
    iVar3 = lpass_cdc_get_device_ptr(*(iVar6 + -0xb8),2);
    if (iVar3 == 0) {
        iVar2 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar2 == 0) {
            return 0xffffffea;
        }
        pcVar5 = "%s: null device for macro!\n";
    }
    else {
        iVar8 = *(iVar3 + 0x98);
        if ((iVar8 != 0) && (*(iVar8 + 0x108) != 0)) {
            uVar4 = snd_soc_component_read(iVar7,0x2110);
            iVar2 = strcmp(*(param_1 + 8),"WSA RX_MIX EC0_MUX");
            uVar1 = uVar4;
            if (iVar2 != 0) {
                uVar1 = (uVar4 & 0xffffffff) >> 3;
            }
            uVar1 = (uVar1 & 7) - 1;
            if (uVar1 < 2) {
                if (*(iVar8 + (uVar1 & 0xffff) * 4 + 0x18) != 0) {
                    iVar2 = 1 << (uVar1 & 0x1f);
                    snd_soc_component_update_bits(iVar7,0x2110,iVar2,iVar2);
                    iVar2 = (uVar1 & 0xffff) * 0x40;
                    snd_soc_component_update_bits(iVar7,iVar2 + 0x2680U & 0xffc0,1,1);
                    snd_soc_component_update_bits(iVar7,iVar2 + 0x2684U & 0xfffc,0x1e,8);
                }
                return 0;
            }
            iVar2 = ___ratelimit(obj.lpass_cdc_wsa_macro_enable_echo._rs,"lpass_cdc_wsa_macro_enable_echo");
            if (iVar2 == 0) {
                return 0xffffffea;
            }
            pcVar5 = "%s: EC mix control not set correctly\n";
            goto code_r0x080156a0;
        }
        iVar2 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar2 == 0) {
            return 0xffffffea;
        }
        pcVar5 = "%s: priv is null for macro!\n";
    }
    iVar3 = *(iVar6 + -0xb8);
code_r0x080156a0:
    _dev_err(iVar3,pcVar5,"lpass_cdc_wsa_macro_enable_echo");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_enable_main_path.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08013418 (size 8) =====

ulong sym.lpass_cdc_wsa_macro_enable_main_path.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                (int64_t param_1,ulong param_2,int param_3)

{
    uint8_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t iVar5;
    char *pcVar6;
    int64_t iVar7;
    ulong *in_x18;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = *(param_1 + 0x28);
    iVar8 = iVar7 + -0xd0;
    iVar5 = lpass_cdc_get_device_ptr(*(iVar7 + -0xb8),2);
    if (iVar5 == 0) {
        iVar4 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar4 == 0) {
            return 0xffffffea;
        }
        pcVar6 = "%s: null device for macro!\n";
    }
    else {
        if ((*(iVar5 + 0x98) != 0) && (*(*(iVar5 + 0x98) + 0x108) != 0)) {
            if (param_3 == 1) {
                uVar1 = *(param_1 + 0x4c);
                iVar4 = uVar1 * 8;
                uVar2 = snd_soc_component_read(iVar8,iVar4 + 0x2100);
                uVar3 = snd_soc_component_read(iVar8,iVar4 + 0x2104);
                if ((((uVar2 & 0xe) == 10) || ((uVar2 & 0xe0) == 0xa0)) || ((uVar3 & 0xe0) == 0xa0)) {
                    snd_soc_component_update_bits(iVar8,uVar1 * 0x80 + 0x2400,0x20,0x20);
                    lpass_cdc_wsa_pa_on(iVar5,1);
                }
            }
            return 0;
        }
        iVar4 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar4 == 0) {
            return 0xffffffea;
        }
        pcVar6 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar7 + -0xb8),pcVar6,"lpass_cdc_wsa_macro_enable_main_path");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_spk_boost_event.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08013420 (size 8) =====

ulong sym.lpass_cdc_wsa_macro_spk_boost_event.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                (int64_t param_1,ulong param_2,int param_3)

{
    int iVar1;
    ulong uVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong uVar6;
    ulong uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar6 = *(param_1 + 8);
    iVar4 = *(param_1 + 0x28);
    iVar5 = iVar4 + -0xd0;
    iVar1 = strcmp(uVar6,"WSA_RX INT0 CHAIN");
    if (iVar1 == 0) {
        uVar6 = 0x2408;
        uVar7 = 0x2500;
    }
    else {
        iVar1 = strcmp(uVar6,"WSA_RX INT1 CHAIN");
        if (iVar1 != 0) {
            iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_spk_boost_event._rs,"lpass_cdc_wsa_macro_spk_boost_event");
            if (iVar1 == 0) {
                return 0xffffffea;
            }
            _dev_err(*(iVar4 + -0xb8),"%s: unknown widget: %s\n","lpass_cdc_wsa_macro_spk_boost_event",*(param_1 + 8)
                    );
            return 0xffffffea;
        }
        uVar6 = 0x2488;
        uVar7 = 0x2540;
    }
    if (param_3 == 8) {
        snd_soc_component_update_bits(iVar5,uVar7,0x10,0);
        uVar2 = 1;
        uVar3 = 0;
        uVar7 = uVar6;
    }
    else {
        if (param_3 != 1) {
            return 0;
        }
        snd_soc_component_update_bits(iVar5,uVar6,1,1);
        uVar2 = 0x10;
        uVar3 = 0x10;
    }
    snd_soc_component_update_bits(iVar5,uVar7,uVar2,uVar3);
    return 0;
}


// ===== sym.lpass_cdc_wsa_macro_disable_vi_feedback.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08013428 (size 8) =====

ulong sym.lpass_cdc_wsa_macro_disable_vi_feedback.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                (int64_t param_1,ulong param_2,int param_3)

{
    int iVar1;
    int64_t iVar2;
    char *pcVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(param_1 + 0x28);
    iVar5 = iVar4 + -0xd0;
    iVar2 = lpass_cdc_get_device_ptr(*(iVar4 + -0xb8),2);
    if (iVar2 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: null device for macro!\n";
    }
    else {
        iVar2 = *(iVar2 + 0x98);
        if ((iVar2 != 0) && (*(iVar2 + 0x108) != 0)) {
            if (param_3 == 8) {
                if ((*(iVar2 + 0x130) & 1) != 0) {
                    snd_soc_component_update_bits(iVar5,0x2244,0x20,0x20);
                    snd_soc_component_update_bits(iVar5,0x2264,0x20,0x20);
                    snd_soc_component_update_bits(iVar5,0x2244,0x10,0);
                    snd_soc_component_update_bits(iVar5,0x2264,0x10,0);
                }
                if ((*(iVar2 + 0x130) >> 1 & 1) != 0) {
                    snd_soc_component_update_bits(iVar5,0x2284,0x20,0x20);
                    snd_soc_component_update_bits(iVar5,0x22a4,0x20,0x20);
                    snd_soc_component_update_bits(iVar5,0x2284,0x10,0);
                    snd_soc_component_update_bits(iVar5,0x22a4,0x10,0);
                }
            }
            return 0;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar4 + -0xb8),pcVar3,"lpass_cdc_wsa_macro_disable_vi_feedback");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_mclk_event.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08013430 (size 8) =====

ulong sym.lpass_cdc_wsa_macro_mclk_event.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                (int64_t param_1,ulong param_2,int param_3)

{
    int iVar1;
    int64_t iVar2;
    ulong uVar3;
    char *pcVar4;
    ulong *in_x18;
    ulong *arg1;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(param_1 + 0x28);
    iVar2 = lpass_cdc_get_device_ptr(*(iVar5 + -0xb8),2);
    if (iVar2 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar4 = "%s: null device for macro!\n";
    }
    else {
        arg1 = *(iVar2 + 0x98);
        if ((arg1 != NULL) && (arg1[0x21] != 0)) {
            if (param_3 == 8) {
                if (*(arg1 + 5) == '\0') {
                    return 0;
                }
                sym.lpass_cdc_wsa_macro_mclk_enable(arg1,0);
                *(arg1 + 5) = 0;
                return 0;
            }
            if (param_3 != 1) {
                iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_mclk_event._rs,"lpass_cdc_wsa_macro_mclk_event");
                if (iVar1 == 0) {
                    return 0xffffffea;
                }
                _dev_err(*arg1,"%s: invalid DAPM event %d\n","lpass_cdc_wsa_macro_mclk_event",param_3);
                return 0xffffffea;
            }
            uVar3 = sym.lpass_cdc_wsa_macro_mclk_enable(arg1,1);
            if (uVar3 == 0) {
                *(arg1 + 5) = 1;
                return uVar3;
            }
            *(arg1 + 5) = 0;
            return uVar3;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar4 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar5 + -0xb8),pcVar4,"lpass_cdc_wsa_macro_mclk_event");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_enable_vbat.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08013438 (size 8) =====

ulong sym.lpass_cdc_wsa_macro_enable_vbat.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                (int64_t param_1,ulong param_2,int param_3)

{
    int *piVar1;
    int iVar2;
    int64_t iVar3;
    char *pcVar4;
    ulong uVar5;
    ulong uVar6;
    uint uVar7;
    int64_t iVar8;
    ulong *in_x18;
    int64_t iVar9;
    ulong uVar10;
    int64_t iVar11;
    uint64_t uVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = *(param_1 + 0x28);
    iVar9 = iVar8 + -0xd0;
    iVar3 = lpass_cdc_get_device_ptr(*(iVar8 + -0xb8),2);
    if (iVar3 == 0) {
        iVar2 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar2 == 0) {
            return 0xffffffea;
        }
        pcVar4 = "%s: null device for macro!\n";
    }
    else {
        iVar11 = *(iVar3 + 0x98);
        if ((iVar11 != 0) && (*(iVar11 + 0x108) != 0)) {
            uVar10 = *(param_1 + 8);
            iVar2 = strcmp(uVar10,"WSA_RX INT0 VBAT");
            if (iVar2 == 0) {
                uVar12 = 0;
                uVar7 = 0x2408;
            }
            else {
                iVar2 = strcmp(uVar10,"WSA_RX INT1 VBAT");
                uVar12 = iVar2 == 0;
                uVar7 = 0x2488;
                if (iVar2 != 0) {
                    uVar7 = 0;
                }
            }
            if (param_3 == 8) {
                snd_soc_component_update_bits(iVar9,0x2908,1,0);
                snd_soc_component_update_bits(iVar9,0x2904,1,0);
                snd_soc_component_update_bits(iVar9,0x2900,1,0);
                snd_soc_component_update_bits(iVar9,uVar7,0x80,0);
                snd_soc_component_update_bits(iVar9,0x2184,2,2);
                snd_soc_component_update_bits(iVar9,uVar7,2,0);
                snd_soc_component_update_bits(iVar9,0x21dc,0xff,0);
                snd_soc_component_update_bits(iVar9,0x21e0,0xff,0);
                snd_soc_component_update_bits(iVar9,0x21e4,0xff,0);
                snd_soc_component_update_bits(iVar9,0x21e8,0xff,0);
                snd_soc_component_update_bits(iVar9,0x21ec,0xff,0);
                snd_soc_component_update_bits(iVar9,0x21f0,0xff,0);
                snd_soc_component_update_bits(iVar9,0x21f4,0xff,0);
                snd_soc_component_update_bits(iVar9,0x21f8,0xff,0);
                snd_soc_component_update_bits(iVar9,0x21fc,0xff,0);
                iVar11 = iVar11 + uVar12 * 4;
                iVar2 = *(iVar11 + 0x1e0) + -1;
                *(iVar11 + 0x1e0) = iVar2;
                if (iVar2 == 0) {
                    snd_soc_component_update_bits(iVar9,uVar12 << 5 | 0x2640,1,0);
                    snd_soc_component_update_bits(iVar9,0x2118,1 << uVar12,0);
                }
                snd_soc_component_update_bits(iVar9,0x2184,1,0);
                uVar10 = 0x2180;
                uVar5 = 0x10;
                uVar6 = 0;
            }
            else {
                if (param_3 != 1) {
                    uVar10 = ___ratelimit(obj.lpass_cdc_wsa_macro_enable_vbat._rs,"lpass_cdc_wsa_macro_enable_vbat");
                    if (uVar10 != 0) {
                        _dev_err(iVar3,"%s: Invalid event %d\n","lpass_cdc_wsa_macro_enable_vbat",param_3);
                        return 0;
                    }
                    return uVar10;
                }
                snd_soc_component_update_bits(iVar9,0x2180,0x10,0x10);
                snd_soc_component_update_bits(iVar9,0x2184,1,1);
                snd_soc_component_update_bits(iVar9,uVar7,0x80,0x80);
                snd_soc_component_update_bits(iVar9,0x2184,2,0);
                iVar11 = iVar11 + uVar12 * 4;
                piVar1 = iVar11 + 0x1e0;
                iVar2 = *(iVar11 + 0x1e0);
                if (iVar2 == 0) {
                    snd_soc_component_update_bits(iVar9,uVar12 << 5 | 0x2640,1,1);
                    snd_soc_component_update_bits(iVar9,0x2118,1 << uVar12,1 << uVar12);
                    iVar2 = *piVar1;
                }
                *piVar1 = iVar2 + 1;
                snd_soc_component_update_bits(iVar9,uVar7,2,2);
                snd_soc_component_update_bits(iVar9,0x21dc,0xff,0xff);
                snd_soc_component_update_bits(iVar9,0x21e0,0xff,3);
                snd_soc_component_update_bits(iVar9,0x21e4,0xff,0);
                snd_soc_component_update_bits(iVar9,0x21e8,0xff,0xff);
                snd_soc_component_update_bits(iVar9,0x21ec,0xff,3);
                snd_soc_component_update_bits(iVar9,0x21f0,0xff,0);
                snd_soc_component_update_bits(iVar9,0x21f4,0xff,0xff);
                snd_soc_component_update_bits(iVar9,0x21f8,0xff,3);
                snd_soc_component_update_bits(iVar9,0x21fc,0xff,0);
                snd_soc_component_update_bits(iVar9,0x2900,1,1);
                snd_soc_component_update_bits(iVar9,0x2904,1,1);
                uVar10 = 0x2908;
                uVar5 = 1;
                uVar6 = 1;
            }
            snd_soc_component_update_bits(iVar9,uVar10,uVar5,uVar6);
            return 0;
        }
        iVar2 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar2 == 0) {
            return 0xffffffea;
        }
        pcVar4 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar8 + -0xb8),pcVar4,"lpass_cdc_wsa_macro_enable_vbat");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_enable_mix_path.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08013440 (size 8) =====

ulong sym.lpass_cdc_wsa_macro_enable_mix_path.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                (int64_t param_1,ulong param_2,int param_3)

{
    int iVar1;
    uint uVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong uVar5;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uchar extraout_q0_00 [16];
    uchar auVar6 [16];
    
    *in_x18 = unaff_x30;
    uVar5 = *(param_1 + 8);
    iVar3 = *(param_1 + 0x28);
    iVar4 = iVar3 + -0xd0;
    iVar1 = strcmp(uVar5,"WSA_RX0 MIX INP");
    if (iVar1 == 0) {
        uVar5 = 0x2420;
        auVar6 = extraout_q0;
    }
    else {
        iVar1 = strcmp(uVar5,"WSA_RX1 MIX INP");
        if (iVar1 != 0) {
            iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_enable_mix_path._rs,"lpass_cdc_wsa_macro_enable_mix_path");
            if (iVar1 == 0) {
                return 0;
            }
            _dev_err(*(iVar3 + -0xb8),"%s: No gain register avail for %s\n","lpass_cdc_wsa_macro_enable_mix_path",
                     *(param_1 + 8));
            return 0;
        }
        uVar5 = 0x24a0;
        auVar6 = extraout_q0_00;
    }
    if (param_3 == 8) {
        auVar6 = snd_soc_component_update_bits(iVar4,*(param_1 + 0x48),0x20,0);
        sym.lpass_cdc_wsa_macro_enable_swr(param_1,auVar6,8);
    }
    else if (param_3 == 1) {
        sym.lpass_cdc_wsa_macro_enable_swr(param_1,auVar6,1);
        uVar2 = snd_soc_component_read(iVar4,uVar5);
        snd_soc_component_write(iVar4,uVar5,uVar2);
    }
    return 0;
}


// ===== sym.lpass_cdc_wsa_macro_enable_swr.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08013448 (size 8) =====

ulong sym.lpass_cdc_wsa_macro_enable_swr.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
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
    iVar2 = lpass_cdc_get_device_ptr(*(iVar4 + -0xb8),2);
    if (iVar2 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: null device for macro!\n";
    }
    else {
        iVar2 = *(iVar2 + 0x98);
        if ((iVar2 != 0) && (*(iVar2 + 0x108) != 0)) {
            if (param_3 == 8) {
                iVar4 = strnstr(*(param_1 + 8),0x8001beb,8);
                if ((iVar4 == 0) && (*(iVar2 + 0x110) != 0)) {
                    *(iVar2 + 0x110) = *(iVar2 + 0x110) + -1;
                }
                iVar4 = strnstr(*(param_1 + 8),0x80021bd,8);
                if ((iVar4 == 0) && (*(iVar2 + 0x114) != 0)) {
                    *(iVar2 + 0x114) = *(iVar2 + 0x114) + -1;
                    return 0;
                }
            }
            else if (param_3 == 1) {
                iVar4 = strnstr(*(param_1 + 8),0x8001beb,8);
                if ((iVar4 == 0) && (*(iVar2 + 0x110) == 0)) {
                    *(iVar2 + 0x110) = 1;
                }
                iVar4 = strnstr(*(param_1 + 8),0x80021bd,8);
                if ((iVar4 == 0) && (*(iVar2 + 0x114) == 0)) {
                    *(iVar2 + 0x114) = 1;
                }
                if (*(iVar2 + 0x90) != NULL) {
                    swrm_wcd_notify(**(iVar2 + 0x90),2,0);
                    return 0;
                }
            }
            return 0;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar4 + -0xb8),pcVar3,"lpass_cdc_wsa_macro_enable_swr");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_enable_interpolator.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08013450 (size 8) =====

ulong sym.lpass_cdc_wsa_macro_enable_interpolator.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                (int64_t param_1,ulong param_2,int param_3)

{
    uchar uVar1;
    uint uVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    code *pcVar5;
    int iVar6;
    int iVar7;
    uint32_t uVar8;
    int64_t iVar9;
    char *pcVar10;
    int64_t iVar11;
    uint64_t uVar12;
    uint uVar13;
    ulong *in_x18;
    int64_t arg1;
    ulong uVar14;
    int64_t iVar15;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar11 = *(param_1 + 0x28);
    arg1 = iVar11 + -0xd0;
    iVar9 = lpass_cdc_get_device_ptr(*(iVar11 + -0xb8),2);
    if (iVar9 == 0) {
code_r0x08015b8c:
        iVar6 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar6 == 0) {
            return 0xffffffea;
        }
        pcVar10 = "%s: null device for macro!\n";
    }
    else {
        if ((*(iVar9 + 0x98) != 0) && (*(*(iVar9 + 0x98) + 0x108) != 0)) {
            iVar9 = lpass_cdc_get_device_ptr(*(iVar11 + -0xb8),2);
            if (iVar9 == 0) goto code_r0x08015b8c;
            iVar9 = *(iVar9 + 0x98);
            if ((iVar9 != 0) && (iVar15 = *(iVar9 + 0x108), iVar15 != 0)) {
                uVar14 = *(param_1 + 8);
                iVar6 = strcmp(uVar14,"WSA_RX INT0 INTERP");
                if (iVar6 == 0) {
                    iVar11 = 0x2400;
                }
                else {
                    iVar7 = strcmp(uVar14,"WSA_RX INT1 INTERP");
                    if (iVar7 != 0) {
                        iVar6 = ___ratelimit(obj.lpass_cdc_wsa_macro_enable_interpolator._rs,
                                             "lpass_cdc_wsa_macro_enable_interpolator");
                        if (iVar6 == 0) {
                            return 0xffffffea;
                        }
                        uVar14 = *(iVar11 + -0xb8);
                        pcVar10 = "%s: Interpolator reg not found\n";
                        goto code_r0x08015bd4;
                    }
                    iVar11 = 0x2480;
                }
                if (param_3 == 8) {
                    snd_soc_component_update_bits(arg1,0x2408,8,8);
                    sym.lpass_cdc_wsa_macro_config_compander(arg1,*(param_1 + 0x4c),8);
                    uVar3 = *(param_1 + 0x4c);
                    uVar12 = uVar3;
                    if (*(iVar9 + 0x284) != '\0') {
                        uVar13 = 0x2410;
                        if (uVar3 != 0) {
                            uVar13 = 0;
                        }
                        uVar1 = 2;
                        if (uVar3 != 1) {
                            uVar1 = uVar3 == 0;
                        }
                        uVar2 = 0x2490;
                        if (uVar3 != 1) {
                            uVar2 = uVar13;
                        }
                        if (1 < uVar3) {
code_r0x08015eb4:
    //WARNING: Does not return
                            pcVar5 = SoftwareBreakpoint(0x5512,0x8015eb8);
                            (*pcVar5)();
                        }
                        iVar15 = 0;
                        if ((*(iVar9 + 0x288) != 0) && (*(iVar9 + 0x288) != 2 || *(iVar9 + uVar12 * 4 + 0x10) < 5)) {
                            if (*(iVar9 + 0x260) == '\0') {
                                iVar15 = 0;
                            }
                            else {
                                iVar15 = (*(iVar9 + 0x1cc) == 0) << 7;
                            }
                        }
                        snd_soc_component_update_bits(arg1,uVar2,0x80,iVar15);
                        snd_soc_component_update_bits(arg1,0x2780,uVar1,0);
                        snd_soc_component_write(arg1,0x2790,0);
                        uVar12 = *(param_1 + 0x4c);
                    }
                    sym.lpass_cdc_wsa_macro_config_softclip(arg1,uVar12,8);
                    sym.lpass_cdc_was_macro_config_pbr(arg1,*(param_1 + 0x4c),8);
                    iVar9 = 8;
                }
                else {
                    if (param_3 == 2) {
                        if ((iVar6 == 0) &&
                           (uVar3 = *(iVar9 + 0x21c), uVar4 = *(iVar9 + 0x228),
                           uVar8 = snd_soc_component_read(iVar15,0x2414), uVar8 != (uVar3 - uVar4 & 0xff))) {
                            snd_soc_component_update_bits(*(iVar9 + 0x108),0x2414,0xff);
                        }
                        iVar6 = strcmp(*(param_1 + 8),"WSA_RX INT1 INTERP");
                        if ((iVar6 == 0) &&
                           (uVar3 = *(iVar9 + 0x21d), uVar4 = *(iVar9 + 0x228),
                           uVar8 = snd_soc_component_read(*(iVar9 + 0x108),0x2494), uVar8 != (uVar3 - uVar4 & 0xff)))
                        {
                            snd_soc_component_update_bits(*(iVar9 + 0x108),0x2494,0xff);
                        }
                        sym.lpass_cdc_wsa_macro_config_compander(arg1,*(param_1 + 0x4c),2);
                        uVar3 = *(param_1 + 0x4c);
                        uVar12 = uVar3;
                        if (*(iVar9 + 0x284) != '\0') {
                            uVar13 = 0x2410;
                            if (uVar3 != 0) {
                                uVar13 = 0;
                            }
                            uVar1 = 2;
                            if (uVar3 != 1) {
                                uVar1 = uVar3 == 0;
                            }
                            uVar2 = 0x2490;
                            if (uVar3 != 1) {
                                uVar2 = uVar13;
                            }
                            if (1 < uVar3) goto code_r0x08015eb4;
                            iVar11 = 0;
                            if ((*(iVar9 + 0x288) != 0) && (*(iVar9 + 0x288) != 2 || *(iVar9 + uVar12 * 4 + 0x10) < 5))
                            {
                                if (*(iVar9 + 0x260) == '\0') {
                                    iVar11 = 0;
                                }
                                else {
                                    iVar11 = (*(iVar9 + 0x1cc) == 0) << 7;
                                }
                            }
                            snd_soc_component_update_bits(arg1,uVar2,0x80,iVar11);
                            snd_soc_component_update_bits(arg1,0x2780,uVar1,uVar1);
                            uVar12 = *(param_1 + 0x4c);
                        }
                        sym.lpass_cdc_wsa_macro_config_softclip(arg1,uVar12,2);
                        sym.lpass_cdc_was_macro_config_pbr(arg1,*(param_1 + 0x4c),2);
                        if (*(iVar9 + 0x1cc) == 0) {
                            return 0;
                        }
                        snd_soc_component_update_bits(arg1,0x2408,8,0);
                        return 0;
                    }
                    if (param_3 != 1) {
                        return 0;
                    }
                    iVar9 = 1;
                }
                sym.lpass_cdc_wsa_macro_enable_prim_interpolator(arg1,iVar11,iVar9);
                return 0;
            }
        }
        iVar6 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar6 == 0) {
            return 0xffffffea;
        }
        pcVar10 = "%s: priv is null for macro!\n";
    }
    uVar14 = *(iVar11 + -0xb8);
code_r0x08015bd4:
    _dev_err(uVar14,pcVar10,"lpass_cdc_wsa_macro_enable_interpolator");
    return 0xffffffea;
}


// ===== sym.snd_soc_info_enum_double.cfi_jt @ 0x08013458 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_info_enum_double.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.snd_soc_info_volsw.cfi_jt @ 0x08013460 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_info_volsw.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.lpass_cdc_wsa_macro_get_cur_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08013468 (size 8) =====

ulong sym.lpass_cdc_wsa_macro_get_cur_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,uint64_t *param_2)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x3a8) == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_cur_state._rs,"lpass_cdc_wsa_macro_get_cur_state");
        if (iVar1 != 0) {
            _printk(0x8001107,"lpass_cdc_wsa_macro_get_cur_state");
        }
        uVar2 = 0xffffffea;
    }
    else {
        uVar2 = 0;
        *param_2 = *(*(param_1 + 0x3a8) + 0x228);
    }
    return uVar2;
}


// ===== sym.lpass_cdc_wsa_macro_get_max_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08013470 (size 8) =====

ulong sym.lpass_cdc_wsa_macro_get_max_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,uint64_t *param_2)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x3a8) == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_max_state._rs,"lpass_cdc_wsa_macro_get_max_state");
        if (iVar1 != 0) {
            _printk(0x8001107,"lpass_cdc_wsa_macro_get_max_state");
        }
        uVar2 = 0xffffffea;
    }
    else {
        uVar2 = 0;
        *param_2 = *(*(param_1 + 0x3a8) + 0x22c);
    }
    return uVar2;
}


// ===== sym.lpass_cdc_wsa_macro_comp_mode_put.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08013478 (size 8) =====

ulong sym.lpass_cdc_wsa_macro_comp_mode_put.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    int iVar1;
    int64_t iVar2;
    char *pcVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(param_1 + 0x80);
    iVar2 = lpass_cdc_get_device_ptr(*(iVar4 + 0x18),2);
    if (iVar2 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: null device for macro!\n";
    }
    else {
        iVar2 = *(iVar2 + 0x98);
        if ((iVar2 != 0) && (*(iVar2 + 0x108) != 0)) {
            strnstr(param_1 + 0x20,0x8001beb,8);
            iVar4 = strnstr(param_1 + 0x20,0x80021bd,8);
            if (0x12 < *(param_2 + 0x48)) {
                return 0;
            }
            *(iVar2 + (iVar4 != 0) * 4 + 0x10) = *(param_2 + 0x48);
            return 0;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar4 + 0x18),pcVar3,"lpass_cdc_wsa_macro_comp_mode_put");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_ear_spkrrecv_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08013480 (size 8) =====

ulong sym.lpass_cdc_wsa_macro_ear_spkrrecv_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    int iVar1;
    int64_t iVar2;
    char *pcVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(param_1 + 0x80);
    iVar2 = lpass_cdc_get_device_ptr(*(iVar4 + 0x18),2);
    if (iVar2 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: null device for macro!\n";
    }
    else {
        iVar2 = *(iVar2 + 0x98);
        if ((iVar2 != 0) && (*(iVar2 + 0x108) != 0)) {
            *(param_2 + 0x48) = *(iVar2 + 0x1cc);
            return 0;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar4 + 0x18),pcVar3,"lpass_cdc_wsa_macro_ear_spkrrecv_get");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_get_ec_hq.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08013488 (size 8) =====

ulong sym.lpass_cdc_wsa_macro_get_ec_hq.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    uint32_t uVar2;
    code *pcVar3;
    int iVar4;
    int64_t iVar5;
    char *pcVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x80);
    uVar2 = *(*(param_1 + 0x78) + 0x18);
    iVar5 = lpass_cdc_get_device_ptr(*(iVar1 + 0x18),2);
    if (iVar5 == 0) {
        iVar4 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar4 == 0) {
            return 0xffffffea;
        }
        pcVar6 = "%s: null device for macro!\n";
    }
    else {
        iVar5 = *(iVar5 + 0x98);
        if ((iVar5 != 0) && (*(iVar5 + 0x108) != 0)) {
            if (1 < uVar2) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x5512,0x801885c);
                (*pcVar3)();
            }
            *(param_2 + 0x48) = *(iVar5 + uVar2 * 4 + 0x18);
            return 0;
        }
        iVar4 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar4 == 0) {
            return 0xffffffea;
        }
        pcVar6 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar1 + 0x18),pcVar6,"lpass_cdc_wsa_macro_get_ec_hq");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_soft_clip_enable_put.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08013490 (size 8) =====

ulong sym.lpass_cdc_wsa_macro_soft_clip_enable_put.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                (int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    uint32_t uVar2;
    code *pcVar3;
    int iVar4;
    int64_t iVar5;
    char *pcVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x80);
    uVar2 = *(*(param_1 + 0x78) + 0x18);
    iVar5 = lpass_cdc_get_device_ptr(*(iVar1 + 0x18),2);
    if (iVar5 == 0) {
        iVar4 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar4 == 0) {
            return 0xffffffea;
        }
        pcVar6 = "%s: null device for macro!\n";
    }
    else {
        iVar5 = *(iVar5 + 0x98);
        if ((iVar5 != 0) && (*(iVar5 + 0x108) != 0)) {
            if (1 < uVar2) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x5512,0x80181cc);
                (*pcVar3)();
            }
            *(iVar5 + uVar2 * 4 + 0x1d8) = *(param_2 + 0x48);
            return 0;
        }
        iVar4 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar4 == 0) {
            return 0xffffffea;
        }
        pcVar6 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar1 + 0x18),pcVar6,"lpass_cdc_wsa_macro_soft_clip_enable_put");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_pbr_enable_put.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08013498 (size 8) =====

ulong sym.lpass_cdc_wsa_macro_pbr_enable_put.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    int iVar1;
    int64_t iVar2;
    char *pcVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(param_1 + 0x80);
    iVar2 = lpass_cdc_get_device_ptr(*(iVar4 + 0x18),2);
    if (iVar2 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: null device for macro!\n";
    }
    else {
        iVar2 = *(iVar2 + 0x98);
        if ((iVar2 != 0) && (*(iVar2 + 0x108) != 0)) {
            *(iVar2 + 0x260) = *(param_2 + 0x48) != 0;
            return 0;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar4 + 0x18),pcVar3,"lpass_cdc_wsa_macro_pbr_enable_put");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_idle_detect_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080134a0 (size 8) =====

ulong sym.lpass_cdc_wsa_macro_idle_detect_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    int iVar1;
    int64_t iVar2;
    char *pcVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(param_1 + 0x80);
    iVar2 = lpass_cdc_get_device_ptr(*(iVar4 + 0x18),2);
    if (iVar2 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: null device for macro!\n";
    }
    else {
        iVar2 = *(iVar2 + 0x98);
        if ((iVar2 != 0) && (*(iVar2 + 0x108) != 0)) {
            *(param_2 + 0x48) = *(iVar2 + 0x284);
            return 0;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar4 + 0x18),pcVar3,"lpass_cdc_wsa_macro_idle_detect_get");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_cps_feed_mixer_put.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080134a8 (size 8) =====

ulong sym.lpass_cdc_wsa_macro_cps_feed_mixer_put.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                (int64_t param_1,int64_t param_2)

{
    uint64_t *puVar1;
    int iVar2;
    uint8_t uVar3;
    char cVar4;
    bool bVar5;
    code *pcVar6;
    int iVar7;
    int64_t iVar8;
    int64_t iVar9;
    char *pcVar10;
    ulong *in_x18;
    uint64_t uVar11;
    int64_t iVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = snd_soc_dapm_kcontrol_widget();
    iVar12 = *(iVar8 + 0x28);
    uVar3 = *(iVar8 + 0x4c);
    uVar11 = uVar3;
    iVar7 = *(*(param_1 + 0x78) + 0x18);
    iVar2 = *(param_2 + 0x48);
    iVar9 = lpass_cdc_get_device_ptr(*(iVar12 + -0xb8),2);
    if (iVar9 == 0) {
        iVar7 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar7 == 0) {
            return 0xffffffea;
        }
        pcVar10 = "%s: null device for macro!\n";
code_r0x08016be4:
        _dev_err(*(iVar12 + -0xb8),pcVar10,"lpass_cdc_wsa_macro_cps_feed_mixer_put");
        return 0xffffffea;
    }
    iVar9 = *(iVar9 + 0x98);
    if ((iVar9 == 0) || (*(iVar9 + 0x108) == 0)) {
        iVar7 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar7 == 0) {
            return 0xffffffea;
        }
        pcVar10 = "%s: priv is null for macro!\n";
        goto code_r0x08016be4;
    }
    if (iVar2 == 0) {
        if (iVar7 == 1) {
            if (6 < uVar3) goto code_r0x08016bfc;
            iVar12 = iVar9 + uVar11 * 8;
            if ((*(iVar12 + 0x118) >> 1 & 1) == 0) goto code_r0x08016ba8;
            puVar1 = iVar12 + 0x118;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                    *puVar1 = *puVar1 & 0xfffffffffffffffd;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
        }
        else {
            if (iVar7 != 0) goto code_r0x08016ba8;
            if (6 < uVar3) goto code_r0x08016bfc;
            iVar12 = iVar9 + uVar11 * 8;
            if ((*(iVar12 + 0x118) & 1) == 0) goto code_r0x08016ba8;
            puVar1 = iVar12 + 0x118;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                    *puVar1 = *puVar1 & 0xfffffffffffffffe;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
        }
        iVar12 = -1;
    }
    else if (iVar7 == 1) {
        if (6 < uVar3) {
code_r0x08016bfc:
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x5512,0x8016c00);
            (*pcVar6)();
        }
        iVar12 = iVar9 + uVar11 * 8;
        if ((*(iVar12 + 0x118) >> 1 & 1) != 0) goto code_r0x08016ba8;
        puVar1 = iVar12 + 0x118;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar4 = '\x01';
            bVar5 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
                *puVar1 = *puVar1 | 2;
                cVar4 = ExclusiveMonitorsStatus();
            }
        } while (cVar4 != '\0');
        iVar12 = 1;
    }
    else {
        if (iVar7 != 0) goto code_r0x08016ba8;
        if (6 < uVar3) goto code_r0x08016bfc;
        iVar12 = iVar9 + uVar11 * 8;
        if ((*(iVar12 + 0x118) & 1) != 0) goto code_r0x08016ba8;
        puVar1 = iVar12 + 0x118;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar4 = '\x01';
            bVar5 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
                *puVar1 = *puVar1 | 1;
                cVar4 = ExclusiveMonitorsStatus();
            }
        } while (cVar4 != '\0');
        iVar12 = 1;
    }
    iVar9 = iVar9 + uVar11 * 8;
    *(iVar9 + 0x148) = *(iVar9 + 0x148) + iVar12;
code_r0x08016ba8:
    snd_soc_dapm_mixer_update_power(*(iVar8 + 0x28),param_1,iVar2,0);
    return 0;
}


// ===== sym.lpass_cdc_wsa_macro_cps_feed_mixer_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080134b0 (size 8) =====

ulong sym.lpass_cdc_wsa_macro_cps_feed_mixer_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                (int64_t param_1,int64_t param_2)

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
    iVar5 = lpass_cdc_get_device_ptr(*(iVar7 + -0xb8),2);
    if (iVar5 == 0) {
        iVar4 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar4 == 0) {
            return 0xffffffea;
        }
        pcVar6 = "%s: null device for macro!\n";
    }
    else {
        iVar5 = *(iVar5 + 0x98);
        if ((iVar5 != 0) && (*(iVar5 + 0x108) != 0)) {
            if (6 < uVar2) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x5512,0x8016a24);
                (*pcVar3)();
            }
            if ((*(iVar5 + uVar2 * 8 + (uVar1 >> 3 & 0x1ffffff8) + 0x118) >> (uVar1 & 0x3f) & 1) == 0) {
                *(param_2 + 0x48) = 0;
                return 0;
            }
            *(param_2 + 0x48) = 1;
            return 0;
        }
        iVar4 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar4 == 0) {
            return 0xffffffea;
        }
        pcVar6 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar7 + -0xb8),pcVar6,"lpass_cdc_wsa_macro_cps_feed_mixer_get");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_ear_spkrrecv_put.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080134b8 (size 8) =====

ulong sym.lpass_cdc_wsa_macro_ear_spkrrecv_put.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    int iVar1;
    int64_t iVar2;
    char *pcVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(param_1 + 0x80);
    iVar2 = lpass_cdc_get_device_ptr(*(iVar4 + 0x18),2);
    if (iVar2 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: null device for macro!\n";
    }
    else {
        iVar2 = *(iVar2 + 0x98);
        if ((iVar2 != 0) && (*(iVar2 + 0x108) != 0)) {
            *(iVar2 + 0x1cc) = *(param_2 + 0x48);
            return 0;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar4 + 0x18),pcVar3,"lpass_cdc_wsa_macro_ear_spkrrecv_put");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_set_ec_hq.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080134c0 (size 8) =====

ulong sym.lpass_cdc_wsa_macro_set_ec_hq.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    uint uVar2;
    uint32_t uVar3;
    code *pcVar4;
    int iVar5;
    int64_t iVar6;
    char *pcVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x80);
    uVar2 = *(param_2 + 0x48);
    uVar3 = *(*(param_1 + 0x78) + 0x18);
    iVar6 = lpass_cdc_get_device_ptr(*(iVar1 + 0x18),2);
    if (iVar6 == 0) {
        iVar5 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar5 == 0) {
            return 0xffffffea;
        }
        pcVar7 = "%s: null device for macro!\n";
    }
    else {
        iVar6 = *(iVar6 + 0x98);
        if ((iVar6 != 0) && (*(iVar6 + 0x108) != 0)) {
            if (1 < uVar3) {
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x5512,0x8018930);
                (*pcVar4)();
            }
            *(iVar6 + uVar3 * 4 + 0x18) = uVar2;
            return 0;
        }
        iVar5 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar5 == 0) {
            return 0xffffffea;
        }
        pcVar7 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar1 + 0x18),pcVar7,"lpass_cdc_wsa_macro_set_ec_hq");
    return 0xffffffea;
}


// ===== sym.snd_soc_dapm_put_enum_double.cfi_jt @ 0x080134c8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_dapm_put_enum_double.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.lpass_cdc_wsa_macro_rx_mux_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080134d0 (size 8) =====

ulong sym.lpass_cdc_wsa_macro_rx_mux_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,int64_t param_2)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    char *pcVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = snd_soc_dapm_kcontrol_widget();
    iVar6 = *(iVar3 + 0x28);
    iVar4 = lpass_cdc_get_device_ptr(*(iVar6 + -0xb8),2);
    if (iVar4 == 0) {
        iVar2 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar2 == 0) {
            return 0xffffffea;
        }
        pcVar5 = "%s: null device for macro!\n";
    }
    else {
        iVar4 = *(iVar4 + 0x98);
        if ((iVar4 != 0) && (*(iVar4 + 0x108) != 0)) {
            if (8 < *(iVar3 + 0x4c)) {
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x5512,0x8016d80);
                (*pcVar1)();
            }
            *(param_2 + 0x48) = *(iVar4 + *(iVar3 + 0x4c) * 4 + 0x184);
            return 0;
        }
        iVar2 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar2 == 0) {
            return 0xffffffea;
        }
        pcVar5 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar6 + -0xb8),pcVar5,"lpass_cdc_wsa_macro_rx_mux_get");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_get_rx_mute_status.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080134d8 (size 8) =====

ulong sym.lpass_cdc_wsa_macro_get_rx_mute_status.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                (int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    uint32_t uVar2;
    code *pcVar3;
    int iVar4;
    int64_t iVar5;
    char *pcVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x80);
    uVar2 = *(*(param_1 + 0x78) + 0x18);
    iVar5 = lpass_cdc_get_device_ptr(*(iVar1 + 0x18),2);
    if (iVar5 == 0) {
        iVar4 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar4 == 0) {
            return 0xffffffea;
        }
        pcVar6 = "%s: null device for macro!\n";
    }
    else {
        iVar5 = *(iVar5 + 0x98);
        if ((iVar5 != 0) && (*(iVar5 + 0x108) != 0)) {
            if (8 < uVar2) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x5512,0x8018420);
                (*pcVar3)();
            }
            *(param_2 + 0x48) = *(iVar5 + uVar2 * 4 + 0x1f8);
            return 0;
        }
        iVar4 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar4 == 0) {
            return 0xffffffea;
        }
        pcVar6 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar1 + 0x18),pcVar6,"lpass_cdc_wsa_macro_get_rx_mute_status");
    return 0xffffffea;
}


// ===== sym.snd_soc_get_volsw.cfi_jt @ 0x080134e0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_get_volsw.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.lpass_cdc_wsa_macro_vi_feed_mixer_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080134e8 (size 8) =====

ulong sym.lpass_cdc_wsa_macro_vi_feed_mixer_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                (int64_t param_1,int64_t param_2)

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
    iVar5 = lpass_cdc_get_device_ptr(*(iVar7 + -0xb8),2);
    if (iVar5 == 0) {
        iVar4 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar4 == 0) {
            return 0xffffffea;
        }
        pcVar6 = "%s: null device for macro!\n";
    }
    else {
        iVar5 = *(iVar5 + 0x98);
        if ((iVar5 != 0) && (*(iVar5 + 0x108) != 0)) {
            if (6 < uVar2) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x5512,0x80166d0);
                (*pcVar3)();
            }
            if ((*(iVar5 + uVar2 * 8 + (uVar1 >> 3 & 0x1ffffff8) + 0x118) >> (uVar1 & 0x3f) & 1) == 0) {
                *(param_2 + 0x48) = 0;
                return 0;
            }
            *(param_2 + 0x48) = 1;
            return 0;
        }
        iVar4 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar4 == 0) {
            return 0xffffffea;
        }
        pcVar6 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar7 + -0xb8),pcVar6,"lpass_cdc_wsa_macro_vi_feed_mixer_get");
    return 0xffffffea;
}


// ===== sym.snd_soc_dapm_put_volsw.cfi_jt @ 0x080134f0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_dapm_put_volsw.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.lpass_cdc_wsa_macro_soft_clip_enable_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080134f8 (size 8) =====

ulong sym.lpass_cdc_wsa_macro_soft_clip_enable_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                (int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    uint32_t uVar2;
    code *pcVar3;
    int iVar4;
    int64_t iVar5;
    char *pcVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x80);
    uVar2 = *(*(param_1 + 0x78) + 0x18);
    iVar5 = lpass_cdc_get_device_ptr(*(iVar1 + 0x18),2);
    if (iVar5 == 0) {
        iVar4 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar4 == 0) {
            return 0xffffffea;
        }
        pcVar6 = "%s: null device for macro!\n";
    }
    else {
        iVar5 = *(iVar5 + 0x98);
        if ((iVar5 != 0) && (*(iVar5 + 0x108) != 0)) {
            if (1 < uVar2) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x5512,0x80180f4);
                (*pcVar3)();
            }
            *(param_2 + 0x48) = *(iVar5 + uVar2 * 4 + 0x1d8);
            return 0;
        }
        iVar4 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar4 == 0) {
            return 0xffffffea;
        }
        pcVar6 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar1 + 0x18),pcVar6,"lpass_cdc_wsa_macro_soft_clip_enable_get");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_comp_mode_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08013500 (size 8) =====

ulong sym.lpass_cdc_wsa_macro_comp_mode_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    int iVar1;
    int64_t iVar2;
    char *pcVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(param_1 + 0x80);
    iVar2 = lpass_cdc_get_device_ptr(*(iVar4 + 0x18),2);
    if (iVar2 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: null device for macro!\n";
    }
    else {
        iVar2 = *(iVar2 + 0x98);
        if ((iVar2 != 0) && (*(iVar2 + 0x108) != 0)) {
            strnstr(param_1 + 0x20,0x8001beb,8);
            iVar4 = strnstr(param_1 + 0x20,0x80021bd,8);
            *(param_2 + 0x48) = *(iVar2 + (iVar4 != 0) * 4 + 0x10);
            return 0;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar4 + 0x18),pcVar3,"lpass_cdc_wsa_macro_comp_mode_get");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_idle_detect_put.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08013508 (size 8) =====

ulong sym.lpass_cdc_wsa_macro_idle_detect_put.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    int iVar1;
    int64_t iVar2;
    char *pcVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(param_1 + 0x80);
    iVar2 = lpass_cdc_get_device_ptr(*(iVar4 + 0x18),2);
    if (iVar2 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: null device for macro!\n";
    }
    else {
        iVar2 = *(iVar2 + 0x98);
        if ((iVar2 != 0) && (*(iVar2 + 0x108) != 0)) {
            *(iVar2 + 0x284) = *(param_2 + 0x48);
            return 0;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar4 + 0x18),pcVar3,"lpass_cdc_wsa_macro_idle_detect_put");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_set_rx_mute_status.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08013510 (size 8) =====

uint sym.lpass_cdc_wsa_macro_set_rx_mute_status.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
               (int64_t param_1,int64_t param_2)

{
    uint32_t uVar1;
    code *pcVar2;
    int iVar3;
    int iVar4;
    int64_t iVar5;
    ulong uVar6;
    char *pcVar7;
    ulong *in_x18;
    uint uVar8;
    int64_t *piVar9;
    int64_t iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar10 = *(param_1 + 0x80);
    iVar3 = *(param_2 + 0x48);
    uVar1 = *(*(param_1 + 0x78) + 0x18);
    iVar5 = lpass_cdc_get_device_ptr(*(iVar10 + 0x18),2);
    if (iVar5 == 0) {
        iVar3 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar3 == 0) {
            return 0xffffffea;
        }
        pcVar7 = "%s: null device for macro!\n";
code_r0x080185a0:
        _dev_err(*(iVar10 + 0x18),pcVar7,"lpass_cdc_wsa_macro_set_rx_mute_status");
        return 0xffffffea;
    }
    piVar9 = *(iVar5 + 0x98);
    if ((piVar9 == NULL) || (piVar9[0x21] == 0)) {
        iVar3 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar3 == 0) {
            return 0xffffffea;
        }
        pcVar7 = "%s: priv is null for macro!\n";
        goto code_r0x080185a0;
    }
    __pm_runtime_resume(*piVar9,4);
    switch(uVar1) {
    case 0:
        uVar6 = 0x2400;
        break;
    case 1:
        uVar6 = 0x2480;
        break;
    case 2:
        uVar6 = 0x2418;
        break;
    case 3:
        uVar6 = 0x2498;
        break;
    default:
        iVar4 = ___ratelimit(obj.lpass_cdc_wsa_macro_set_rx_mute_status._rs,"lpass_cdc_wsa_macro_set_rx_mute_status");
        if (iVar4 != 0) {
            _printk(0x8001999,"lpass_cdc_wsa_macro_set_rx_mute_status",uVar1);
        }
        uVar8 = 0xffffffea;
        goto code_r0x08018550;
    }
    snd_soc_component_update_bits(iVar10,uVar6,0x10,iVar3 << 4);
    uVar8 = 0;
code_r0x08018550:
    iVar10 = *piVar9;
    uVar6 = ktime_get_mono_fast_ns();
    *(iVar10 + 0x218) = uVar6;
    __pm_runtime_suspend(*piVar9,0xd);
    if (8 < uVar1) {
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5512,0x80185d8);
        (*pcVar2)();
    }
    *(piVar9 + uVar1 * 4 + 0x1f8) = iVar3;
    return uVar8;
}


// ===== sym.lpass_cdc_wsa_macro_set_compander.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08013518 (size 8) =====

ulong sym.lpass_cdc_wsa_macro_set_compander.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    uint uVar2;
    uint32_t uVar3;
    code *pcVar4;
    int iVar5;
    int64_t iVar6;
    char *pcVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x80);
    uVar2 = *(param_2 + 0x48);
    uVar3 = *(*(param_1 + 0x78) + 0x18);
    iVar6 = lpass_cdc_get_device_ptr(*(iVar1 + 0x18),2);
    if (iVar6 == 0) {
        iVar5 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar5 == 0) {
            return 0xffffffea;
        }
        pcVar7 = "%s: null device for macro!\n";
    }
    else {
        iVar6 = *(iVar6 + 0x98);
        if ((iVar6 != 0) && (*(iVar6 + 0x108) != 0)) {
            if (1 < uVar3) {
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x5512,0x8018784);
                (*pcVar4)();
            }
            *(iVar6 + uVar3 * 4 + 8) = uVar2;
            return 0;
        }
        iVar5 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar5 == 0) {
            return 0xffffffea;
        }
        pcVar7 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar1 + 0x18),pcVar7,"lpass_cdc_wsa_macro_set_compander");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_vbat_bcl_gsm_mode_func_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08013520 (size 8) =====

ulong sym.lpass_cdc_wsa_macro_vbat_bcl_gsm_mode_func_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                (int64_t param_1,int64_t param_2)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = snd_soc_component_read(*(param_1 + 0x80),0x2184);
    *(param_2 + 0x48) = uVar1 >> 2 & 1;
    return 0;
}


// ===== sym.lpass_cdc_wsa_macro_vi_feed_mixer_put.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08013528 (size 8) =====

ulong sym.lpass_cdc_wsa_macro_vi_feed_mixer_put.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                (int64_t param_1,int64_t param_2)

{
    uint64_t *puVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    int64_t iVar6;
    int64_t iVar7;
    char *pcVar8;
    ulong *in_x18;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = snd_soc_dapm_kcontrol_widget();
    iVar9 = *(iVar6 + 0x28);
    iVar5 = *(param_2 + 0x48);
    iVar2 = *(*(param_1 + 0x78) + 0x18);
    iVar7 = lpass_cdc_get_device_ptr(*(iVar9 + -0xb8),2);
    if (iVar7 == 0) {
        iVar5 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar5 == 0) {
            return 0xffffffea;
        }
        pcVar8 = "%s: null device for macro!\n";
code_r0x08016860:
        _dev_err(*(iVar9 + -0xb8),pcVar8,"lpass_cdc_wsa_macro_vi_feed_mixer_put");
        return 0xffffffea;
    }
    iVar7 = *(iVar7 + 0x98);
    if ((iVar7 == 0) || (*(iVar7 + 0x108) == 0)) {
        iVar5 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar5 == 0) {
            return 0xffffffea;
        }
        pcVar8 = "%s: priv is null for macro!\n";
        goto code_r0x08016860;
    }
    *(iVar7 + 0x2c) = *(param_2 + 0x48);
    if (iVar5 == 0) {
        if (iVar2 == 1) {
            if ((*(iVar7 + 0x130) >> 1 & 1) == 0) goto code_r0x08016824;
            puVar1 = iVar7 + 0x130;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = *puVar1 & 0xfffffffffffffffd;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
        }
        else {
            if ((iVar2 != 0) || ((*(iVar7 + 0x130) & 1) == 0)) goto code_r0x08016824;
            puVar1 = iVar7 + 0x130;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = *puVar1 & 0xfffffffffffffffe;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
        }
        iVar9 = -1;
    }
    else if (iVar2 == 1) {
        if ((*(iVar7 + 0x130) >> 1 & 1) != 0) goto code_r0x08016824;
        puVar1 = iVar7 + 0x130;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
                *puVar1 = *puVar1 | 2;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        iVar9 = 1;
    }
    else {
        if ((iVar2 != 0) || ((*(iVar7 + 0x130) & 1) != 0)) goto code_r0x08016824;
        puVar1 = iVar7 + 0x130;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
                *puVar1 = *puVar1 | 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        iVar9 = 1;
    }
    *(iVar7 + 0x160) = *(iVar7 + 0x160) + iVar9;
code_r0x08016824:
    snd_soc_dapm_mixer_update_power(*(iVar6 + 0x28),param_1,iVar5,0);
    return 0;
}


// ===== sym.lpass_cdc_wsa_macro_set_digital_volume.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08013530 (size 8) =====

uint sym.lpass_cdc_wsa_macro_set_digital_volume.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2)

{
    int64_t iVar1;
    int64_t iVar2;
    char cVar3;
    uint uVar4;
    uint32_t uVar5;
    int iVar6;
    int iVar7;
    int64_t iVar8;
    ulong uVar9;
    char *pcVar10;
    ulong *in_x18;
    ulong *puVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x78);
    iVar2 = *(param_1 + 0x80);
    iVar8 = lpass_cdc_get_device_ptr(*(iVar2 + 0x18),2);
    if (iVar8 == 0) {
        iVar7 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar7 == 0) {
            return 0xffffffea;
        }
        pcVar10 = "%s: null device for macro!\n";
    }
    else {
        puVar11 = *(iVar8 + 0x98);
        if ((puVar11 != NULL) && (puVar11[0x21] != 0)) {
            uVar4 = snd_soc_put_volsw(param_1,param_2);
            iVar7 = *(iVar1 + 0xc);
            if (iVar7 == 0x2494) {
                iVar6 = snd_soc_component_read(puVar11[0x21],0x2494);
                iVar7 = *(puVar11 + 0x45);
                *(puVar11 + 0x21d) = iVar6;
                uVar5 = iVar6 - iVar7;
                cVar3 = *(puVar11 + 5);
joined_r0x080182e4:
                if (cVar3 == '\0') {
                    return uVar4;
                }
                if (iVar7 != 0) {
                    snd_soc_component_update_bits(puVar11[0x21],*(iVar1 + 0xc),0xff,uVar5 & 0xff);
                    return uVar4;
                }
                return uVar4;
            }
            if (iVar7 == 0x2414) {
                uVar5 = snd_soc_component_read(puVar11[0x21],0x2414);
                iVar7 = *(puVar11 + 0x45);
                *(puVar11 + 0x21c) = uVar5;
                uVar5 = (uVar5 & 0xff) - iVar7;
                cVar3 = *(puVar11 + 5);
                goto joined_r0x080182e4;
            }
            iVar7 = ___ratelimit(obj.lpass_cdc_wsa_macro_set_digital_volume._rs.222,
                                 "lpass_cdc_wsa_macro_set_digital_volume");
            if (iVar7 == 0) {
                return 0xffffffea;
            }
            uVar9 = *puVar11;
            pcVar10 = "%s: Incorrect RX Path selected\n";
            goto code_r0x08018338;
        }
        iVar7 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar7 == 0) {
            return 0xffffffea;
        }
        pcVar10 = "%s: priv is null for macro!\n";
    }
    uVar9 = *(iVar2 + 0x18);
code_r0x08018338:
    _dev_err(uVar9,pcVar10,"lpass_cdc_wsa_macro_set_digital_volume");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_rx_mux_put.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08013538 (size 8) =====

ulong sym.lpass_cdc_wsa_macro_rx_mux_put.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    int *piVar1;
    uint64_t *puVar2;
    uint32_t uVar3;
    uint8_t uVar4;
    char cVar5;
    bool bVar6;
    code *pcVar7;
    int iVar8;
    int64_t iVar9;
    int64_t iVar10;
    char *pcVar11;
    int64_t iVar12;
    uint64_t uVar13;
    ulong *in_x18;
    uint64_t uVar14;
    ulong uVar15;
    int64_t iVar16;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar9 = snd_soc_dapm_kcontrol_widget();
    iVar16 = *(iVar9 + 0x28);
    uVar15 = *(param_1 + 0x78);
    uVar14 = *(param_2 + 0x48);
    iVar10 = lpass_cdc_get_device_ptr(*(iVar16 + -0xb8),2);
    if (iVar10 == 0) {
        iVar8 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar8 == 0) {
            return 0xffffffea;
        }
        pcVar11 = "%s: null device for macro!\n";
code_r0x08016fbc:
        _dev_err(*(iVar16 + -0xb8),pcVar11,"lpass_cdc_wsa_macro_rx_mux_put");
        return 0xffffffea;
    }
    iVar12 = *(iVar10 + 0x98);
    if ((iVar12 == 0) || (*(iVar12 + 0x108) == 0)) {
        iVar8 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar8 == 0) {
            return 0xffffffea;
        }
        pcVar11 = "%s: priv is null for macro!\n";
        goto code_r0x08016fbc;
    }
    if (8 < *(iVar9 + 0x4c)) {
code_r0x08016fd0:
    //WARNING: Does not return
        pcVar7 = SoftwareBreakpoint(0x5512,0x8016fd4);
        (*pcVar7)();
    }
    iVar16 = iVar12 + *(iVar9 + 0x4c) * 4;
    piVar1 = iVar16 + 0x184;
    iVar8 = uVar14;
    if (iVar8 == 0) {
        uVar3 = *(iVar16 + 0x184);
        if (uVar3 == 0) {
            uVar15 = ___ratelimit(obj.lpass_cdc_wsa_macro_rx_mux_put._rs,"lpass_cdc_wsa_macro_rx_mux_put");
            if (uVar15 == 0) {
                return uVar15;
            }
            pcVar11 = "%s: AIF reset already\n";
        }
        else {
            if (uVar3 < 6) {
                iVar12 = iVar12 + uVar3 * 8;
                *piVar1 = 0;
                if (*(iVar12 + 0x148) != 0) {
                    uVar4 = *(iVar9 + 0x4c);
                    puVar2 = iVar12 + (uVar4 >> 3 & 0x18) + 0x118;
                    Hint_Prefetch(puVar2,2,0,1);
                    do {
                        cVar5 = '\x01';
                        bVar6 = ExclusiveMonitorPass(puVar2,0x10);
                        if (bVar6) {
                            *puVar2 = *puVar2 & (1L << (uVar4 & 0x3f) ^ 0xffffffffffffffffU);
                            cVar5 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar5 != '\0');
                    iVar10 = -1;
                    goto code_r0x08016e48;
                }
                goto code_r0x08016e54;
            }
            uVar15 = ___ratelimit(obj.lpass_cdc_wsa_macro_rx_mux_put._rs.139,"lpass_cdc_wsa_macro_rx_mux_put");
            if (uVar15 == 0) {
                return uVar15;
            }
            pcVar11 = "%s: Invalid AIF reset\n";
        }
        _dev_err(iVar10,pcVar11,"lpass_cdc_wsa_macro_rx_mux_put");
    }
    else {
        *piVar1 = iVar8;
        if (1 < iVar8 - 1U) {
            iVar8 = ___ratelimit(obj.lpass_cdc_wsa_macro_rx_mux_put._rs.141,"lpass_cdc_wsa_macro_rx_mux_put");
            if (iVar8 == 0) {
                return 0xffffffea;
            }
            _dev_err(iVar10,"%s: Invalid AIF_ID for WSA RX MUX %d\n","lpass_cdc_wsa_macro_rx_mux_put",
                     uVar14 & 0xffffffff);
            return 0xffffffea;
        }
        uVar13 = uVar14 & 0xffffffff;
        if (6 < uVar13) goto code_r0x08016fd0;
        uVar4 = *(iVar9 + 0x4c);
        puVar2 = iVar12 + uVar13 * 8 + (uVar4 >> 3 & 0x18) + 0x118;
        Hint_Prefetch(puVar2,2,0,1);
        do {
            cVar5 = '\x01';
            bVar6 = ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
                *puVar2 = *puVar2 | 1L << (uVar4 & 0x3f);
                cVar5 = ExclusiveMonitorsStatus();
            }
        } while (cVar5 != '\0');
        iVar12 = iVar12 + uVar13 * 8;
        iVar10 = 1;
code_r0x08016e48:
        *(iVar12 + 0x148) = *(iVar12 + 0x148) + iVar10;
code_r0x08016e54:
        snd_soc_dapm_mux_update_power(*(iVar9 + 0x28),param_1,uVar14 & 0xffffffff,uVar15,0);
    }
    return 0;
}


// ===== sym.lpass_cdc_wsa_macro_get_compander.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08013540 (size 8) =====

ulong sym.lpass_cdc_wsa_macro_get_compander.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    uint32_t uVar2;
    code *pcVar3;
    int iVar4;
    int64_t iVar5;
    char *pcVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x80);
    uVar2 = *(*(param_1 + 0x78) + 0x18);
    iVar5 = lpass_cdc_get_device_ptr(*(iVar1 + 0x18),2);
    if (iVar5 == 0) {
        iVar4 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar4 == 0) {
            return 0xffffffea;
        }
        pcVar6 = "%s: null device for macro!\n";
    }
    else {
        iVar5 = *(iVar5 + 0x98);
        if ((iVar5 != 0) && (*(iVar5 + 0x108) != 0)) {
            if (1 < uVar2) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x5512,0x80186b0);
                (*pcVar3)();
            }
            *(param_2 + 0x48) = *(iVar5 + uVar2 * 4 + 8);
            return 0;
        }
        iVar4 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar4 == 0) {
            return 0xffffffea;
        }
        pcVar6 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar1 + 0x18),pcVar6,"lpass_cdc_wsa_macro_get_compander");
    return 0xffffffea;
}


// ===== sym.snd_soc_dapm_get_enum_double.cfi_jt @ 0x08013548 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_dapm_get_enum_double.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.lpass_cdc_wsa_macro_vbat_bcl_gsm_mode_func_put.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08013550 (size 8) =====

ulong sym.lpass_cdc_wsa_macro_vbat_bcl_gsm_mode_func_put.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                (int64_t param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    snd_soc_component_update_bits(*(param_1 + 0x80),0x2184,4,(*(param_2 + 0x48) != 0) << 2);
    return 0;
}


// ===== sym.lpass_cdc_wsa_macro_pbr_enable_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08013558 (size 8) =====

ulong sym.lpass_cdc_wsa_macro_pbr_enable_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    int iVar1;
    int64_t iVar2;
    char *pcVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(param_1 + 0x80);
    iVar2 = lpass_cdc_get_device_ptr(*(iVar4 + 0x18),2);
    if (iVar2 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: null device for macro!\n";
    }
    else {
        iVar2 = *(iVar2 + 0x98);
        if ((iVar2 != 0) && (*(iVar2 + 0x108) != 0)) {
            *(param_2 + 0x48) = *(iVar2 + 0x260);
            return 0;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar4 + 0x18),pcVar3,"lpass_cdc_wsa_macro_pbr_enable_get");
    return 0xffffffea;
}


// ===== sym.snd_soc_dapm_get_volsw.cfi_jt @ 0x08013560 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_dapm_get_volsw.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.lpass_cdc_wsa_macro_probe @ 0x08013568 (size 1708) =====

uint32_t sym.lpass_cdc_wsa_macro_probe(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int64_t *piVar5;
    ulong uVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    char *pcVar10;
    ushort uVar11;
    uint uVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_d4;
    int iStack_d0;
    uint uStack_cc;
    ulong uStack_c8;
    code *pcStack_c0;
    code *pcStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    code *pcStack_a0;
    ulong uStack_98;
    code *pcStack_90;
    ulong uStack_88;
    code *pcStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    int64_t iStack_60;
    ulong uStack_58;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iVar9 = arg1 + 0x10;
    iStack_48 = *(iVar7 + 0x5e0);
    iStack_60 = 0;
    uStack_58 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    pcStack_80 = NULL;
    uStack_78 = 0;
    pcStack_90 = NULL;
    uStack_88 = 0;
    pcStack_a0 = NULL;
    uStack_98 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    pcStack_c0 = NULL;
    pcStack_b8 = NULL;
    uStack_c8 = 0;
    iStack_d0 = 1;
    uStack_cc = 0;
    uStack_d4 = 0;
    uVar4 = lpass_cdc_is_va_macro_registered(iVar9);
    if ((uVar4 & 1) == 0) {
        pcVar10 = "%s: va-macro not registered yet, defer\n";
code_r0x080139c0:
        _dev_err(iVar9,pcVar10,"lpass_cdc_wsa_macro_probe");
        uVar1 = 0xfffffdfb;
        goto code_r0x08013afc;
    }
    piVar5 = devm_kmalloc(iVar9,0x298,0xdc0);
    if (piVar5 == NULL) {
        uVar1 = 0xfffffff4;
        goto code_r0x08013afc;
    }
    uVar6 = *(arg1 + 0x300);
    *(piVar5 + 0x28c) = 1;
    *piVar5 = iVar9;
    uVar1 = of_property_read_variable_u32_array(uVar6,0x8001e24,&uStack_c8 + 4,1,0);
    if (uVar1 < 0) {
        _dev_err(iVar9,"%s: could not find %s entry in dt\n","lpass_cdc_wsa_macro_probe",0x8001e24);
        goto code_r0x08013afc;
    }
    iVar7 = of_find_property(*(arg1 + 0x300),"qcom,is-used-swr-gpio",0);
    if ((iVar7 != 0) &&
       (iVar2 = of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,is-used-swr-gpio",&iStack_d0,1,0),
       iVar2 < 0)) {
        _dev_err(iVar9,"%s: error reading %s in dt\n","lpass_cdc_wsa_macro_probe","qcom,is-used-swr-gpio");
        iStack_d0 = 1;
    }
    iVar7 = of_parse_phandle(*(arg1 + 0x300),"qcom,wsa-swr-gpios",0);
    piVar5[0x20] = iVar7;
    if ((iVar7 == 0) && (iStack_d0 != 0)) {
        pcVar10 = "%s: swr_gpios handle not provided!\n";
code_r0x080139e0:
        _dev_err(iVar9,pcVar10,"lpass_cdc_wsa_macro_probe");
        uVar1 = 0xffffffea;
        goto code_r0x08013afc;
    }
    iVar2 = msm_cdc_pinctrl_get_state();
    if ((iVar2 < 0) && (iStack_d0 != 0)) {
        pcVar10 = "%s: failed to get swr pin state\n";
        goto code_r0x080139c0;
    }
    msm_cdc_pinctrl_set_wakeup_capable(piVar5[0x20],0);
    iVar7 = devm_ioremap(iVar9,uStack_c8._4_4_,0x1000);
    if (iVar7 == 0) {
        pcVar10 = "%s: ioremap failed\n";
        goto code_r0x080139e0;
    }
    uStack_4c = 0;
    iVar8 = of_find_property(*(arg1 + 0x300),"qcom,wsa-rloads",&uStack_4c);
    if (iVar8 == 0) {
        pcVar10 = "%s: missing %s\n";
code_r0x08013b3c:
        _dev_info(iVar9,pcVar10,"lpass_cdc_wsa_macro_read_array","qcom,wsa-rloads");
    }
    else {
        if ((uStack_4c & 0xfffffffc) != 8) {
            pcVar10 = "%s: invalid number of %s\n";
            goto code_r0x08013b3c;
        }
        iVar2 = of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,wsa-rloads",piVar5 + 0x27c,2,0);
        if (iVar2 < 0) {
            pcVar10 = "%s: Failed to read %s\n";
            goto code_r0x08013b3c;
        }
    }
    uStack_4c = 0;
    iVar8 = of_find_property(*(arg1 + 0x300),"qcom,wsa-system-gains",&uStack_4c);
    if (iVar8 == 0) {
        pcVar10 = "%s: missing %s\n";
code_r0x08013b60:
        _dev_info(iVar9,pcVar10,"lpass_cdc_wsa_macro_read_array","qcom,wsa-system-gains");
    }
    else {
        if ((uStack_4c & 0xfffffffc) != 0x10) {
            pcVar10 = "%s: invalid number of %s\n";
            goto code_r0x08013b60;
        }
        iVar2 = of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,wsa-system-gains",piVar5 + 0x264,4,0);
        if (iVar2 < 0) {
            pcVar10 = "%s: Failed to read %s\n";
            goto code_r0x08013b60;
        }
    }
    uStack_4c = 0;
    iVar8 = of_find_property(*(arg1 + 0x300),"qcom,wsa-bat-cfgs",&uStack_4c);
    if (iVar8 == 0) {
        pcVar10 = "%s: missing %s\n";
code_r0x08013b84:
        _dev_info(iVar9,pcVar10,"lpass_cdc_wsa_macro_read_array","qcom,wsa-bat-cfgs");
    }
    else {
        if ((uStack_4c & 0xfffffffc) != 8) {
            pcVar10 = "%s: invalid number of %s\n";
            goto code_r0x08013b84;
        }
        iVar2 = of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,wsa-bat-cfgs",piVar5 + 0x274,2,0);
        if (iVar2 < 0) {
            pcVar10 = "%s: Failed to read %s\n";
            goto code_r0x08013b84;
        }
    }
    piVar5[0x35] = iVar7;
    *(piVar5 + 0x29) = 1;
    piVar5[0x1a] = 0xfffffffe0;
    piVar5[0x1b] = piVar5 + 0x1b;
    piVar5[0x1c] = piVar5 + 0x1b;
    piVar5[0x1d] = sym.lpass_cdc_wsa_macro_add_child_devices.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    piVar5[0x46] = 0xfffffffe0;
    piVar5[0x47] = piVar5 + 0x47;
    piVar5[0x48] = piVar5 + 0x47;
    piVar5[0x49] = sym.lpass_cdc_wsa_macro_cooling_adjust_gain.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    uVar6 = *(arg1 + 0x300);
    piVar5[0x13] = piVar5;
    piVar5[0x14] = 0;
    piVar5[0x15] = 0;
    piVar5[0x16] = 0;
    piVar5[0x17] = sym.wsa_swrm_clock.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    piVar5[0x18] = sym.lpass_cdc_wsa_macro_core_vote.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    piVar5[0x19] = 0;
    iVar2 = of_property_read_variable_u32_array(uVar6,"qcom,default-clk-id",&uStack_c8,1,0);
    if (iVar2 < 0) {
        _dev_err(iVar9,"%s: could not find %s entry in dt\n","lpass_cdc_wsa_macro_probe","qcom,mux0-clk-id");
        uVar11 = 2;
        uStack_c8 = CONCAT44(uStack_c8._4_4_,2);
    }
    else {
        uVar11 = uStack_c8;
    }
    *(piVar5 + 0x3e) = uVar11;
    *(arg1 + 0xa8) = piVar5;
    __mutex_init(piVar5 + 6,"&wsa_priv->mclk_lock",
                 reloc.lpass_cdc_wsa_macro_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    __mutex_init(piVar5 + 0xc,"&wsa_priv->swr_clk_lock",
                 reloc.lpass_cdc_wsa_macro_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    uStack_a8 = 0;
    pcStack_c0 = sym.lpass_cdc_wsa_macro_init.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    pcStack_b8 = sym.lpass_cdc_wsa_macro_deinit.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    uStack_70 = 0;
    uStack_68 = 0;
    pcStack_a0 = obj.lpass_cdc_wsa_macro_dai;
    uStack_98 = 0;
    uStack_b0 = 5;
    pcStack_90 = sym.lpass_cdc_wsa_macro_event_handler.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    uStack_88 = 0;
    pcStack_80 = sym.lpass_cdc_wsa_macro_set_port_map.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    uStack_78 = 0;
    uStack_58 = CONCAT22(piVar5[0x3e],piVar5[0x3e]);
    iStack_60 = iVar7;
    uVar1 = lpass_cdc_register_macro(iVar9,2,&pcStack_c0);
    if (uVar1 < 0) {
        _dev_err(iVar9,"%s: register macro failed\n","lpass_cdc_wsa_macro_probe");
        goto code_r0x08013afc;
    }
    iVar7 = of_find_property(*(*piVar5 + 0x2f0),"#cooling-cells",0);
    if (iVar7 != 0) {
        iVar2 = of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,thermal-max-state",&uStack_cc,1,0);
        uVar12 = uStack_cc;
        if (iVar2 < 0) {
            _dev_info(iVar9,"%s: could not find %s entry in dt\n","lpass_cdc_wsa_macro_probe",
                      "qcom,thermal-max-state");
            uVar12 = 0xb;
        }
        *(piVar5 + 0x22c) = uVar12;
        uVar4 = devm_thermal_of_cooling_device_register
                          (iVar9,*(*piVar5 + 0x2f0),0x8001ea6,piVar5,
                           reloc.lpass_cdc_wsa_macro_get_max_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
        piVar5[0x44] = uVar4;
        if (0xfffffffffffff000 < uVar4) {
            _dev_err(iVar9,"%s: failed to register wsa macro as cooling device\n","lpass_cdc_wsa_macro_probe");
            piVar5[0x44] = 0;
        }
    }
    uVar3 = of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,noise-gate-mode",&uStack_d4,1,0);
    uVar1 = uVar3 & uVar3 >> 0x1f;
    if (uVar3 < 0) {
        _dev_info(iVar9,"%s: could not find %s entry in dt\n","lpass_cdc_wsa_macro_probe","qcom,noise-gate-mode");
code_r0x08013aac:
        *(piVar5 + 0x51) = 0;
    }
    else {
        if (3 < uStack_d4) goto code_r0x08013aac;
        *(piVar5 + 0x51) = uStack_d4;
    }
    pm_runtime_set_autosuspend_delay(iVar9,0x32);
    __pm_runtime_use_autosuspend(iVar9,1);
    __pm_runtime_set_status(iVar9,2);
    *(arg1 + 0x210) = *(arg1 + 0x210) | 0x100;
    pm_runtime_enable(iVar9);
    queue_work_on(0x20,_pm_runtime_force_resume,piVar5 + 0x1a);
code_r0x08013afc:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_48) {
        iVar9 = __stack_chk_fail();
        *extraout_x18 = sym.lpass_cdc_wsa_macro_remove;
        iVar7 = *(iVar9 + 0xa8);
        if (iVar7 == 0) {
            uVar1 = 0xffffffea;
        }
        else {
            iVar9 = iVar9 + 0x10;
            if (*(iVar7 + 0x220) != 0) {
                thermal_cooling_device_unregister(*(iVar7 + 0x220));
            }
            if (((0 < *(iVar7 + 0x1c8)) && (platform_device_unregister(*(iVar7 + 0x1b0)), 1 < *(iVar7 + 0x1c8))) &&
               (platform_device_unregister(*(iVar7 + 0x1b8)), 2 < *(iVar7 + 0x1c8))) {
                platform_device_unregister(*(iVar7 + 0x1c0));
            }
            __pm_runtime_disable(iVar9,1);
            __pm_runtime_set_status(iVar9,2);
            lpass_cdc_unregister_macro(iVar9,2);
            uVar1 = 0;
        }
        return uVar1;
    }
    return uVar1;
}


// ===== sym.lpass_cdc_wsa_macro_remove @ 0x08013c14 (size 176) =====

ulong sym.lpass_cdc_wsa_macro_remove(int64_t arg1)

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
        if (*(iVar2 + 0x220) != 0) {
            thermal_cooling_device_unregister(*(iVar2 + 0x220));
        }
        if (0 < *(iVar2 + 0x1c8)) {
            platform_device_unregister(*(iVar2 + 0x1b0));
            if (1 < *(iVar2 + 0x1c8)) {
                platform_device_unregister(*(iVar2 + 0x1b8));
                if (2 < *(iVar2 + 0x1c8)) {
                    platform_device_unregister(*(iVar2 + 0x1c0));
                }
            }
        }
        __pm_runtime_disable(arg1,1);
        __pm_runtime_set_status(arg1,2);
        lpass_cdc_unregister_macro(arg1,2);
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.lpass_cdc_wsa_macro_add_child_devices @ 0x08013cc4 (size 680) =====

void sym.lpass_cdc_wsa_macro_add_child_devices(int64_t arg1)

{
    uint32_t uVar1;
    int64_t *piVar2;
    code *pcVar3;
    int iVar4;
    int64_t iVar5;
    ulong *puVar6;
    int64_t iVar7;
    char *pcVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar9;
    uint64_t uVar10;
    uint16_t uVar11;
    ulong unaff_x30;
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
    iVar5 = sp_el0;
    iStack_68 = *(iVar5 + 0x5e0);
    piVar2 = arg1 + -0xd0;
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
    if (piVar2 == NULL) {
        _printk(0x8000fad,"lpass_cdc_wsa_macro_add_child_devices");
    }
    else {
        iVar5 = *piVar2;
        if ((iVar5 == 0) || (*(iVar5 + 0x2f0) == 0)) {
            pcVar8 = "%s: DT node for wsa_priv does not exist\n";
code_r0x08013e64:
            _dev_err(iVar5,pcVar8,"lpass_cdc_wsa_macro_add_child_devices");
        }
        else {
            *(arg1 + 0xf8) = 0;
            puVar6 = of_get_next_available_child(*(iVar5 + 0x2f0),0);
            if (puVar6 != NULL) {
                uVar11 = 0;
                iVar9 = 0;
                do {
                    iVar5 = strnstr(*puVar6,"wsa_swr_master",0xe);
                    pcVar8 = "wsa_swr_ctrl";
                    if (iVar5 != 0) {
code_r0x08013db0:
                        strlcpy(&uStack_b8,pcVar8,0x4f);
                        iVar7 = platform_device_alloc(&uStack_b8,0xffffffff);
                        iVar5 = *piVar2;
                        if (iVar7 == 0) {
                            pcVar8 = "%s: pdev memory alloc failed\n";
                            goto code_r0x08013e64;
                        }
                        *(iVar7 + 0x70) = iVar5;
                        *(iVar7 + 0x300) = puVar6;
                        iVar5 = strnstr(*puVar6,"wsa_swr_master",0xe);
                        if (iVar5 == 0) {
code_r0x08013e30:
                            iVar4 = platform_device_add(iVar7);
                            if (iVar4 == 0) {
                                uVar1 = *(arg1 + 0xf8);
                                if (uVar1 < 3) {
                                    *(arg1 + 0xf8) = uVar1 + 1;
                                    if (2 < uVar1) goto code_r0x08013e58;
                                    *(arg1 + 0xe0 + uVar1 * 8) = iVar7;
                                    goto code_r0x08013d64;
                                }
                                break;
                            }
                            _dev_err(iVar7 + 0x10,"%s: Cannot add platform device\n",
                                     "lpass_cdc_wsa_macro_add_child_devices");
                        }
                        else {
                            iVar4 = platform_device_add_data(iVar7,arg1 + -0x38,0x38);
                            if (iVar4 == 0) {
                                uVar10 = uVar11;
                                iVar9 = krealloc(iVar9,uVar10 * 8 + 8,0xcc0);
                                if (iVar9 != 0) {
                                    uVar11 = uVar11 + 1;
                                    *(iVar9 + uVar10 * 8) = iVar7;
                                    *(arg1 + -0x40) = iVar9;
                                    goto code_r0x08013e30;
                                }
                                _dev_err(iVar7 + 0x10,"out of memory\n");
                            }
                            else {
                                _dev_err(iVar7 + 0x10,"%s: cannot add plat data ctrl:%d\n",
                                         "lpass_cdc_wsa_macro_add_child_devices",uVar11);
                            }
                        }
                        if ((((0 < *(arg1 + 0xf8)) && (platform_device_put(*(arg1 + 0xe0)), 1 < *(arg1 + 0xf8))) &&
                            (platform_device_put(*(arg1 + 0xe8)), 2 < *(arg1 + 0xf8))) &&
                           (platform_device_put(*(arg1 + 0xf0)), 3 < *(arg1 + 0xf8))) {
code_r0x08013e58:
    //WARNING: Does not return
                            pcVar3 = SoftwareBreakpoint(0x5512,0x8013e5c);
                            (*pcVar3)();
                        }
                        break;
                    }
                    iVar5 = strnstr(*puVar6,"msm_cdc_pinctrl",0xf);
                    if (iVar5 != 0) {
                        pcVar8 = *puVar6;
                        goto code_r0x08013db0;
                    }
code_r0x08013d64:
                    puVar6 = of_get_next_available_child(*(*piVar2 + 0x2f0),puVar6);
                } while (puVar6 != NULL);
            }
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_68) {
        iVar5 = __stack_chk_fail();
        *extraout_x18 = sym.lpass_cdc_wsa_macro_cooling_adjust_gain;
        if (iVar5 + -0x230 == NULL) {
            _printk(0x8001cff,"lpass_cdc_wsa_macro_cooling_adjust_gain");
        }
        else {
            iVar9 = *(iVar5 + -0x230);
            if ((iVar9 == 0) || (*(iVar9 + 0x2f0) == 0)) {
                _dev_err(iVar9,"%s: DT node for wsa_priv does not exist\n","lpass_cdc_wsa_macro_cooling_adjust_gain");
            }
            else if (*(iVar5 + -0x208) != '\0') {
                snd_soc_component_update_bits(*(iVar5 + -0x128),0x2414,0xff,*(iVar5 + -0x14) - *(iVar5 + -8));
                snd_soc_component_update_bits(*(iVar5 + -0x128),0x2494,0xff,*(iVar5 + -0x13) - *(iVar5 + -8));
            }
        }
        return;
    }
    return;
}


// ===== sym.lpass_cdc_wsa_macro_cooling_adjust_gain @ 0x08013f6c (size 184) =====

void sym.lpass_cdc_wsa_macro_cooling_adjust_gain(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 + -0x230 == NULL) {
        _printk(0x8001cff,"lpass_cdc_wsa_macro_cooling_adjust_gain");
    }
    else {
        iVar1 = *(arg1 + -0x230);
        if ((iVar1 == 0) || (*(iVar1 + 0x2f0) == 0)) {
            _dev_err(iVar1,"%s: DT node for wsa_priv does not exist\n","lpass_cdc_wsa_macro_cooling_adjust_gain");
        }
        else if (*(arg1 + -0x208) != '\0') {
            snd_soc_component_update_bits(*(arg1 + -0x128),0x2414,0xff,*(arg1 + -0x14) - *(arg1 + -8));
            snd_soc_component_update_bits(*(arg1 + -0x128),0x2494,0xff,*(arg1 + -0x13) - *(arg1 + -8));
        }
    }
    return;
}


// ===== sym.wsa_swrm_clock @ 0x08014024 (size 884) =====

ulong sym.wsa_swrm_clock(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = dev_get_regmap(*(*arg1 + 0x60),0);
    if (iVar2 == 0) {
        iVar1 = ___ratelimit(obj.wsa_swrm_clock._rs,"wsa_swrm_clock");
        if (iVar1 != 0) {
            _dev_err(*arg1,"%s: regmap is NULL\n","wsa_swrm_clock");
        }
        return 0xffffffea;
    }
    uVar3 = mutex_lock(arg1 + 0x60);
    return uVar3;
}


// ===== sym.lpass_cdc_wsa_macro_core_vote @ 0x08014398 (size 188) =====

uint sym.lpass_cdc_wsa_macro_core_vote(int64_t arg1)

{
    int iVar1;
    uint64_t uVar2;
    ulong uVar3;
    uint64_t in_x1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_core_vote._rs,"lpass_cdc_wsa_macro_core_vote");
        if (iVar1 != 0) {
            _printk(0x8001134,"lpass_cdc_wsa_macro_core_vote");
            return 0xffffffea;
        }
    }
    else if ((*(arg1 + 0x28c) != '\0') || ((in_x1 & 1) == 0)) {
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


// ===== sym.lpass_cdc_wsa_macro_mclk_enable @ 0x08014454 (size 604) =====

int sym.lpass_cdc_wsa_macro_mclk_enable(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int iVar2;
    int64_t iVar3;
    int16_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = dev_get_regmap(*(*arg1 + 0x60),0);
    if (iVar3 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_mclk_enable._rs,"lpass_cdc_wsa_macro_mclk_enable");
        if (iVar1 == 0) {
            return -0x16;
        }
        _dev_err(*arg1,"%s: regmap is NULL\n","lpass_cdc_wsa_macro_mclk_enable");
        return -0x16;
    }
    mutex_lock(arg1 + 0x30);
    iVar4 = *(arg1 + 0x24);
    if ((arg2 & 1U) == 0) {
        if (iVar4 == 0) {
            iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_mclk_enable._rs.55,"lpass_cdc_wsa_macro_mclk_enable");
            if (iVar1 != 0) {
                _dev_err(*arg1,"%s: clock already disabled\n","lpass_cdc_wsa_macro_mclk_enable");
            }
            iVar1 = 0;
            *(arg1 + 0x24) = 0;
        }
        else {
            *(arg1 + 0x24) = iVar4 + -1;
            if (iVar4 + -1 == 0) {
                regmap_update_bits_base(iVar3,0x2004,1,0,0,0,0);
                regmap_update_bits_base(iVar3,0x2000,1,0,0,0,0);
                lpass_cdc_clk_rsc_fs_gen_request(*arg1,0);
                lpass_cdc_clk_rsc_request_clock(*arg1,*(arg1 + 0x1f0),*(arg1 + 0x1f0),0);
            }
            iVar1 = 0;
        }
    }
    else {
        if (iVar4 == 0) {
            iVar1 = lpass_cdc_clk_rsc_request_clock(*arg1,*(arg1 + 0x1f0),*(arg1 + 0x1f0),1);
            if (iVar1 < 0) {
                iVar2 = ___ratelimit(obj.lpass_cdc_wsa_macro_mclk_enable._rs.54,"lpass_cdc_wsa_macro_mclk_enable");
                if (iVar2 != 0) {
                    _dev_err(*arg1,"%s: wsa request clock enable failed\n","lpass_cdc_wsa_macro_mclk_enable");
                }
                goto code_r0x08014634;
            }
            lpass_cdc_clk_rsc_fs_gen_request(*arg1,1);
            regcache_mark_dirty(iVar3);
            regcache_sync_region(iVar3,0x2000,0x2be4);
            regmap_update_bits_base(iVar3,0x2088,1,1,0,0,0);
            regmap_update_bits_base(iVar3,0x2000,1,1,0,0,0);
            regmap_update_bits_base(iVar3,0x2004,1,1,0,0,0);
            iVar4 = *(arg1 + 0x24);
        }
        else {
            iVar1 = 0;
        }
        *(arg1 + 0x24) = iVar4 + 1;
    }
code_r0x08014634:
    mutex_unlock(arg1 + 0x30);
    return iVar1;
}


// ===== sym.lpass_cdc_wsa_macro_init @ 0x080146b0 (size 2392) =====

int sym.lpass_cdc_wsa_macro_init(int64_t arg1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    uint32_t uVar15;
    code *pcVar16;
    int iVar17;
    int64_t iVar18;
    ulong uVar19;
    char *pcVar20;
    int64_t iVar21;
    int64_t iVar22;
    int iVar23;
    int iVar24;
    ulong *in_x18;
    int64_t iVar25;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar18 = lpass_cdc_get_device_ptr(*(arg1 + 0x18),2);
    if (iVar18 == 0) {
        uVar19 = *(arg1 + 0x18);
        pcVar20 = "%s: null device for macro!\n";
    }
    else {
        iVar25 = *(iVar18 + 0x98);
        if (iVar25 != 0) {
            iVar21 = arg1 + 0xd0;
            iVar17 = snd_soc_dapm_new_controls(iVar21,obj.lpass_cdc_wsa_macro_dapm_widgets,0x31);
            if (iVar17 < 0) {
                pcVar20 = "%s: Failed to add controls\n";
            }
            else {
                iVar17 = snd_soc_dapm_add_routes(iVar21,obj.wsa_audio_map,0x77);
                if (iVar17 < 0) {
                    pcVar20 = "%s: Failed to add routes\n";
                }
                else {
                    iVar17 = snd_soc_dapm_new_widgets(*(arg1 + 0xe8));
                    if (iVar17 < 0) {
                        pcVar20 = "%s: Failed to add widgets\n";
                    }
                    else {
                        iVar17 = snd_soc_add_component_controls(arg1,obj.lpass_cdc_wsa_macro_snd_controls,0x12);
                        if (-1 < iVar17) {
                            snd_soc_dapm_ignore_suspend(iVar21,"WSA_AIF1 Playback");
                            snd_soc_dapm_ignore_suspend(iVar21,"WSA_AIF_MIX1 Playback");
                            snd_soc_dapm_ignore_suspend(iVar21,"WSA_AIF_VI Capture");
                            snd_soc_dapm_ignore_suspend(iVar21,"WSA_AIF_ECHO Capture");
                            snd_soc_dapm_ignore_suspend(iVar21,"WSA_AIF_CPS Capture");
                            snd_soc_dapm_ignore_suspend(iVar21,"WSA_SPK1 OUT");
                            snd_soc_dapm_ignore_suspend(iVar21,"WSA_SPK2 OUT");
                            snd_soc_dapm_ignore_suspend(iVar21,"VIINPUT_WSA");
                            snd_soc_dapm_ignore_suspend(iVar21,"CPSINPUT_WSA");
                            snd_soc_dapm_ignore_suspend(iVar21,"WSA SRC0_INP");
                            snd_soc_dapm_ignore_suspend(iVar21,"WSA_TX DEC0_INP");
                            snd_soc_dapm_ignore_suspend(iVar21,"WSA_TX DEC1_INP");
                            snd_soc_dapm_sync(iVar21);
                            iVar18 = 0;
                            *(iVar25 + 0x108) = arg1;
                            *(iVar25 + 0x1d0) = 1;
                            do {
                                snd_soc_component_update_bits
                                          (arg1,*(obj.lpass_cdc_wsa_macro_reg_init + iVar18),*(iVar18 + 0x800a5a2),
                                           *(iVar18 + 0x800a5a3));
                                iVar18 = iVar18 + 4;
                            } while (iVar18 != 0x98);
                            iVar18 = lpass_cdc_get_device_ptr(*(arg1 + 0x18),2);
                            if (iVar18 == 0) {
                                iVar17 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,
                                                      "lpass_cdc_wsa_macro_get_data");
                                if (iVar17 == 0) {
                                    return 0;
                                }
                                pcVar20 = "%s: null device for macro!\n";
                            }
                            else {
                                iVar18 = *(iVar18 + 0x98);
                                if ((iVar18 != 0) && (*(iVar18 + 0x108) != 0)) {
                                    uVar13 = *(iVar18 + 0x27c);
                                    iVar25 = uVar13;
                                    uVar14 = *(iVar18 + 0x264);
                                    uVar15 = *(iVar18 + 0x274);
                                    if (uVar13 < 4) {
                                        snd_soc_component_update_bits(arg1,0x2b4c,0xe0,*(iVar25 * 4 + 0x8012348));
                                    }
                                    snd_soc_component_update_bits(arg1,0x2b50,0xf,uVar14);
                                    snd_soc_component_update_bits(arg1,0x2bc4,0xc0,uVar15 * 0x40 + -0x40);
                                    if (((uVar14 < 0x13) && (uVar15 < 7)) && (uVar13 < 4)) {
                                        if (uVar14 * 0x70 + uVar15 * 0x10 + iVar25 * 4 < 0x850) {
                                            iVar22 = uVar14 * 0x70;
                                            iVar21 = uVar15 * 0x10;
                                            iVar25 = iVar25 * 4;
                                            iVar17 = 0xff;
                                            if (*(obj.pbr_vth1_data + iVar25 + iVar21 + iVar22) != 0) {
                                                iVar17 = *(obj.pbr_vth1_data + iVar25 + iVar21 + iVar22);
                                            }
                                            iVar1 = 0xff;
                                            if (*(obj.pbr_vth2_data + iVar25 + iVar21 + iVar22) != 0) {
                                                iVar1 = *(obj.pbr_vth2_data + iVar25 + iVar21 + iVar22);
                                            }
                                            iVar23 = 0xff;
                                            iVar2 = iVar23;
                                            if (*(obj.pbr_vth3_data + iVar25 + iVar21 + iVar22) != 0) {
                                                iVar2 = *(obj.pbr_vth3_data + iVar25 + iVar21 + iVar22);
                                            }
                                            iVar3 = iVar23;
                                            if (*(obj.pbr_vth4_data + iVar25 + iVar21 + iVar22) != 0) {
                                                iVar3 = *(obj.pbr_vth4_data + iVar25 + iVar21 + iVar22);
                                            }
                                            iVar4 = iVar23;
                                            if (*(obj.pbr_vth5_data + iVar25 + iVar21 + iVar22) != 0) {
                                                iVar4 = *(obj.pbr_vth5_data + iVar25 + iVar21 + iVar22);
                                            }
                                            if (*(obj.pbr_vth6_data + iVar25 + iVar21 + iVar22) != 0) {
                                                iVar23 = *(obj.pbr_vth6_data + iVar25 + iVar21 + iVar22);
                                            }
                                            iVar24 = 0xff;
                                            iVar5 = iVar24;
                                            if (*(obj.pbr_vth7_data + iVar25 + iVar21 + iVar22) != 0) {
                                                iVar5 = *(obj.pbr_vth7_data + iVar25 + iVar21 + iVar22);
                                            }
                                            iVar6 = iVar24;
                                            if (*(obj.pbr_vth8_data + iVar25 + iVar21 + iVar22) != 0) {
                                                iVar6 = *(obj.pbr_vth8_data + iVar25 + iVar21 + iVar22);
                                            }
                                            iVar7 = iVar24;
                                            if (*(obj.pbr_vth9_data + iVar25 + iVar21 + iVar22) != 0) {
                                                iVar7 = *(obj.pbr_vth9_data + iVar25 + iVar21 + iVar22);
                                            }
                                            iVar8 = iVar24;
                                            if (*(obj.pbr_vth10_data + iVar25 + iVar21 + iVar22) != 0) {
                                                iVar8 = *(obj.pbr_vth10_data + iVar25 + iVar21 + iVar22);
                                            }
                                            iVar9 = iVar24;
                                            if (*(obj.pbr_vth11_data + iVar25 + iVar21 + iVar22) != 0) {
                                                iVar9 = *(obj.pbr_vth11_data + iVar25 + iVar21 + iVar22);
                                            }
                                            iVar10 = iVar24;
                                            if (*(obj.pbr_vth12_data + iVar25 + iVar21 + iVar22) != 0) {
                                                iVar10 = *(obj.pbr_vth12_data + iVar25 + iVar21 + iVar22);
                                            }
                                            iVar11 = iVar24;
                                            if (*(obj.pbr_vth13_data + iVar25 + iVar21 + iVar22) != 0) {
                                                iVar11 = *(obj.pbr_vth13_data + iVar25 + iVar21 + iVar22);
                                            }
                                            if (*(obj.pbr_vth14_data + iVar25 + iVar21 + iVar22) != 0) {
                                                iVar24 = *(obj.pbr_vth14_data + iVar25 + iVar21 + iVar22);
                                            }
                                            iVar12 = 0xff;
                                            if (*(obj.pbr_vth15_data + iVar25 + iVar21 + iVar22) != 0) {
                                                iVar12 = *(obj.pbr_vth15_data + iVar25 + iVar21 + iVar22);
                                            }
                                            snd_soc_component_write(arg1,0x2b08,iVar17);
                                            snd_soc_component_write(arg1,0x2b0c,iVar1);
                                            snd_soc_component_write(arg1,0x2b10,iVar2);
                                            snd_soc_component_write(arg1,0x2b14,iVar3);
                                            snd_soc_component_write(arg1,0x2b18,iVar4);
                                            snd_soc_component_write(arg1,0x2b1c,iVar23);
                                            snd_soc_component_write(arg1,0x2b20,iVar5);
                                            snd_soc_component_write(arg1,0x2b24,iVar6);
                                            snd_soc_component_write(arg1,0x2b28,iVar7);
                                            snd_soc_component_write(arg1,0x2b2c,iVar8);
                                            snd_soc_component_write(arg1,0x2b30,iVar9);
                                            snd_soc_component_write(arg1,0x2b34,iVar10);
                                            snd_soc_component_write(arg1,0x2b38,iVar11);
                                            snd_soc_component_write(arg1,0x2b3c,iVar24);
                                            snd_soc_component_write(arg1,0x2b40,iVar12);
                                            uVar13 = *(iVar18 + 0x280);
                                            iVar25 = uVar13;
                                            uVar14 = *(iVar18 + 0x26c);
                                            uVar15 = *(iVar18 + 0x278);
                                            if (uVar13 < 4) {
                                                snd_soc_component_update_bits
                                                          (arg1,0x2bb4,0xe0,*(iVar25 * 4 + 0x8012348));
                                            }
                                            snd_soc_component_update_bits(arg1,0x2bb8,0xf,uVar14);
                                            snd_soc_component_update_bits(arg1,0x2bc4,0x30,uVar15 * 0x10 + -0x10);
                                            if (((0x12 < uVar14) || (6 < uVar15)) || (3 < uVar13))
                                            goto code_r0x08015000;
                                            if (uVar14 * 0x70 + uVar15 * 0x10 + iVar25 * 4 < 0x850) {
                                                iVar18 = uVar14 * 0x70;
                                                iVar21 = uVar15 * 0x10;
                                                iVar25 = iVar25 * 4;
                                                iVar17 = 0xff;
                                                if (*(obj.pbr_vth1_data + iVar25 + iVar21 + iVar18) != 0) {
                                                    iVar17 = *(obj.pbr_vth1_data + iVar25 + iVar21 + iVar18);
                                                }
                                                iVar1 = 0xff;
                                                if (*(obj.pbr_vth2_data + iVar25 + iVar21 + iVar18) != 0) {
                                                    iVar1 = *(obj.pbr_vth2_data + iVar25 + iVar21 + iVar18);
                                                }
                                                iVar23 = 0xff;
                                                iVar2 = iVar23;
                                                if (*(obj.pbr_vth3_data + iVar25 + iVar21 + iVar18) != 0) {
                                                    iVar2 = *(obj.pbr_vth3_data + iVar25 + iVar21 + iVar18);
                                                }
                                                iVar3 = iVar23;
                                                if (*(obj.pbr_vth4_data + iVar25 + iVar21 + iVar18) != 0) {
                                                    iVar3 = *(obj.pbr_vth4_data + iVar25 + iVar21 + iVar18);
                                                }
                                                iVar4 = iVar23;
                                                if (*(obj.pbr_vth5_data + iVar25 + iVar21 + iVar18) != 0) {
                                                    iVar4 = *(obj.pbr_vth5_data + iVar25 + iVar21 + iVar18);
                                                }
                                                if (*(obj.pbr_vth6_data + iVar25 + iVar21 + iVar18) != 0) {
                                                    iVar23 = *(obj.pbr_vth6_data + iVar25 + iVar21 + iVar18);
                                                }
                                                iVar24 = 0xff;
                                                iVar5 = iVar24;
                                                if (*(obj.pbr_vth7_data + iVar25 + iVar21 + iVar18) != 0) {
                                                    iVar5 = *(obj.pbr_vth7_data + iVar25 + iVar21 + iVar18);
                                                }
                                                iVar6 = iVar24;
                                                if (*(obj.pbr_vth8_data + iVar25 + iVar21 + iVar18) != 0) {
                                                    iVar6 = *(obj.pbr_vth8_data + iVar25 + iVar21 + iVar18);
                                                }
                                                iVar7 = iVar24;
                                                if (*(obj.pbr_vth9_data + iVar25 + iVar21 + iVar18) != 0) {
                                                    iVar7 = *(obj.pbr_vth9_data + iVar25 + iVar21 + iVar18);
                                                }
                                                iVar8 = iVar24;
                                                if (*(obj.pbr_vth10_data + iVar25 + iVar21 + iVar18) != 0) {
                                                    iVar8 = *(obj.pbr_vth10_data + iVar25 + iVar21 + iVar18);
                                                }
                                                iVar9 = iVar24;
                                                if (*(obj.pbr_vth11_data + iVar25 + iVar21 + iVar18) != 0) {
                                                    iVar9 = *(obj.pbr_vth11_data + iVar25 + iVar21 + iVar18);
                                                }
                                                iVar10 = iVar24;
                                                if (*(obj.pbr_vth12_data + iVar25 + iVar21 + iVar18) != 0) {
                                                    iVar10 = *(obj.pbr_vth12_data + iVar25 + iVar21 + iVar18);
                                                }
                                                iVar11 = iVar24;
                                                if (*(obj.pbr_vth13_data + iVar25 + iVar21 + iVar18) != 0) {
                                                    iVar11 = *(obj.pbr_vth13_data + iVar25 + iVar21 + iVar18);
                                                }
                                                if (*(obj.pbr_vth14_data + iVar25 + iVar21 + iVar18) != 0) {
                                                    iVar24 = *(obj.pbr_vth14_data + iVar25 + iVar21 + iVar18);
                                                }
                                                iVar12 = 0xff;
                                                if (*(obj.pbr_vth15_data + iVar25 + iVar21 + iVar18) != 0) {
                                                    iVar12 = *(obj.pbr_vth15_data + iVar25 + iVar21 + iVar18);
                                                }
                                                snd_soc_component_write(arg1,0x2b74,iVar17);
                                                snd_soc_component_write(arg1,0x2b78,iVar1);
                                                snd_soc_component_write(arg1,0x2b7c,iVar2);
                                                snd_soc_component_write(arg1,0x2b80,iVar3);
                                                snd_soc_component_write(arg1,0x2b84,iVar4);
                                                snd_soc_component_write(arg1,0x2b88,iVar23);
                                                snd_soc_component_write(arg1,0x2b8c,iVar5);
                                                snd_soc_component_write(arg1,0x2b90,iVar6);
                                                snd_soc_component_write(arg1,0x2b94,iVar7);
                                                snd_soc_component_write(arg1,0x2b98,iVar8);
                                                snd_soc_component_write(arg1,0x2b9c,iVar9);
                                                snd_soc_component_write(arg1,0x2ba0,iVar10);
                                                snd_soc_component_write(arg1,0x2ba4,iVar11);
                                                snd_soc_component_write(arg1,0x2ba8,iVar24);
                                                snd_soc_component_write(arg1,0x2bac,iVar12);
                                                return 0;
                                            }
                                        }
    //WARNING: Does not return
                                        pcVar16 = SoftwareBreakpoint(1,0x8015008);
                                        (*pcVar16)();
                                    }
code_r0x08015000:
    //WARNING: Does not return
                                    pcVar16 = SoftwareBreakpoint(0x5512,0x8015004);
                                    (*pcVar16)();
                                }
                                iVar17 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,
                                                      "lpass_cdc_wsa_macro_get_data");
                                if (iVar17 == 0) {
                                    return 0;
                                }
                                pcVar20 = "%s: priv is null for macro!\n";
                            }
                            _dev_err(*(arg1 + 0x18),pcVar20,"lpass_cdc_wsa_macro_init_pbr");
                            return 0;
                        }
                        pcVar20 = "%s: Failed to add snd_ctls\n";
                    }
                }
            }
            _dev_err(iVar18,pcVar20,"lpass_cdc_wsa_macro_init");
            return iVar17;
        }
        uVar19 = *(arg1 + 0x18);
        pcVar20 = "%s: priv is null for macro!\n";
    }
    _dev_err(uVar19,pcVar20,"lpass_cdc_wsa_macro_init");
    return -0x16;
}


// ===== sym.lpass_cdc_wsa_macro_deinit @ 0x08015008 (size 180) =====

ulong sym.lpass_cdc_wsa_macro_deinit(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    char *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = lpass_cdc_get_device_ptr(*(arg1 + 0x18),2);
    if (iVar2 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: null device for macro!\n";
    }
    else {
        iVar2 = *(iVar2 + 0x98);
        if ((iVar2 != 0) && (*(iVar2 + 0x108) != 0)) {
            *(iVar2 + 0x108) = 0;
            return 0;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(arg1 + 0x18),pcVar3,"lpass_cdc_wsa_macro_deinit");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_event_handler @ 0x080150bc (size 452) =====

ulong sym.lpass_cdc_wsa_macro_event_handler(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    char *pcVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = lpass_cdc_get_device_ptr(*(arg1 + 0x18),2);
    if (iVar3 == 0) {
        iVar2 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar2 == 0) {
            return 0xffffffea;
        }
        pcVar4 = "%s: null device for macro!\n";
    }
    else {
        iVar5 = *(iVar3 + 0x98);
        if ((iVar5 != 0) && (*(iVar5 + 0x108) != 0)) {
            uVar1 = arg2 & 0xffff;
            if (uVar1 == 7) {
                lpass_cdc_rsc_clk_reset(iVar3,2);
                lpass_cdc_rsc_clk_reset(iVar3,6);
            }
            else if (uVar1 == 5) {
                __trace_bprintk(0x8015200,*0x8019000,"lpass_cdc_wsa_macro_event_handler");
                *(iVar5 + 0x28c) = 1;
                *(iVar5 + 0x29) = 1;
                if (*(iVar5 + 0x90) != NULL) {
                    swrm_wcd_notify(**(iVar5 + 0x90),7,0);
                }
            }
            else if (uVar1 == 4) {
                *(iVar5 + 0x28c) = 0;
                __trace_bprintk(0x8015120,*0x8019000,"lpass_cdc_wsa_macro_event_handler");
                if (*(iVar5 + 0x90) != NULL) {
                    swrm_wcd_notify(**(iVar5 + 0x90),6,0);
                }
                if ((((*(iVar3 + 0x200) & 7) != 0) || (*(iVar3 + 0x20c) != 2)) &&
                   (iVar2 = lpass_cdc_runtime_suspend(iVar3), iVar2 == 0)) {
                    __pm_runtime_disable(iVar3,1);
                    __pm_runtime_set_status(iVar3,2);
                    pm_runtime_enable(iVar3);
                }
            }
            return 0;
        }
        iVar2 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar2 == 0) {
            return 0xffffffea;
        }
        pcVar4 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(arg1 + 0x18),pcVar4,"lpass_cdc_wsa_macro_event_handler");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_set_port_map @ 0x08015280 (size 276) =====

ulong sym.lpass_cdc_wsa_macro_set_port_map(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    char *pcVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar7;
    ulong unaff_x30;
    int iStack_48;
    uint uStack_44;
    int64_t iStack_40;
    int64_t iStack_38;
    
    iVar1 = arg3;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iVar2 = iVar1;
    iVar3 = lpass_cdc_get_device_ptr(*(arg1 + 0x18),2);
    if (iVar3 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar1 != 0) {
            pcVar5 = "%s: null device for macro!\n";
code_r0x0801537c:
            iVar2 = 0x8001684;
            _dev_err(*(arg1 + 0x18),pcVar5);
        }
    }
    else {
        iVar3 = *(iVar3 + 0x98);
        if ((iVar3 != 0) && (*(iVar3 + 0x108) != 0)) {
            iStack_48 = iVar1;
            uStack_44 = arg2;
            iStack_40 = arg4;
            if (*(iVar3 + 0x90) == NULL) {
                uVar4 = 0;
            }
            else {
                iVar2 = &iStack_48;
                uVar4 = swrm_wcd_notify(**(iVar3 + 0x90),9);
            }
            goto code_r0x0801533c;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar1 != 0) {
            pcVar5 = "%s: priv is null for macro!\n";
            goto code_r0x0801537c;
        }
    }
    uVar4 = 0xffffffea;
code_r0x0801533c:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return uVar4;
    }
    iVar3 = __stack_chk_fail(uVar4);
    *extraout_x18 = sym.lpass_cdc_wsa_macro_disable_vi_feedback;
    iVar6 = *(iVar3 + 0x28);
    iVar7 = iVar6 + -0xd0;
    iVar3 = lpass_cdc_get_device_ptr(*(iVar6 + -0xb8),2);
    if (iVar3 == 0) {
        iVar2 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar2 == 0) {
            return 0xffffffea;
        }
        pcVar5 = "%s: null device for macro!\n";
    }
    else {
        iVar3 = *(iVar3 + 0x98);
        if ((iVar3 != 0) && (*(iVar3 + 0x108) != 0)) {
            if (iVar2 == 8) {
                if ((*(iVar3 + 0x130) & 1) != 0) {
                    snd_soc_component_update_bits(iVar7,0x2244,0x20,0x20);
                    snd_soc_component_update_bits(iVar7,0x2264,0x20,0x20);
                    snd_soc_component_update_bits(iVar7,0x2244,0x10,0);
                    snd_soc_component_update_bits(iVar7,0x2264,0x10,0);
                }
                if ((*(iVar3 + 0x130) >> 1 & 1) != 0) {
                    snd_soc_component_update_bits(iVar7,0x2284,0x20,0x20);
                    snd_soc_component_update_bits(iVar7,0x22a4,0x20,0x20);
                    snd_soc_component_update_bits(iVar7,0x2284,0x10,0);
                    snd_soc_component_update_bits(iVar7,0x22a4,0x10,0);
                }
            }
            return 0;
        }
        iVar2 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar2 == 0) {
            return 0xffffffea;
        }
        pcVar5 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar6 + -0xb8),pcVar5,"lpass_cdc_wsa_macro_disable_vi_feedback");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_disable_vi_feedback @ 0x08015394 (size 376) =====

ulong sym.lpass_cdc_wsa_macro_disable_vi_feedback(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    char *pcVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0x28);
    iVar5 = iVar4 + -0xd0;
    iVar2 = lpass_cdc_get_device_ptr(*(iVar4 + -0xb8),2);
    if (iVar2 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: null device for macro!\n";
    }
    else {
        iVar2 = *(iVar2 + 0x98);
        if ((iVar2 != 0) && (*(iVar2 + 0x108) != 0)) {
            if (arg2 == 8) {
                if ((*(iVar2 + 0x130) & 1) != 0) {
                    snd_soc_component_update_bits(iVar5,0x2244,0x20,0x20);
                    snd_soc_component_update_bits(iVar5,0x2264,0x20,0x20);
                    snd_soc_component_update_bits(iVar5,0x2244,0x10,0);
                    snd_soc_component_update_bits(iVar5,0x2264,0x10,0);
                }
                if ((*(iVar2 + 0x130) >> 1 & 1) != 0) {
                    snd_soc_component_update_bits(iVar5,0x2284,0x20,0x20);
                    snd_soc_component_update_bits(iVar5,0x22a4,0x20,0x20);
                    snd_soc_component_update_bits(iVar5,0x2284,0x10,0);
                    snd_soc_component_update_bits(iVar5,0x22a4,0x10,0);
                }
            }
            return 0;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar4 + -0xb8),pcVar3,"lpass_cdc_wsa_macro_disable_vi_feedback");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_enable_echo @ 0x0801550c (size 412) =====

ulong sym.lpass_cdc_wsa_macro_enable_echo(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    char *pcVar5;
    int64_t iVar6;
    ulong *in_x18;
    int64_t iVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(arg1 + 0x28);
    iVar7 = iVar6 + -0xd0;
    iVar3 = lpass_cdc_get_device_ptr(*(iVar6 + -0xb8),2);
    if (iVar3 == 0) {
        iVar2 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar2 == 0) {
            return 0xffffffea;
        }
        pcVar5 = "%s: null device for macro!\n";
    }
    else {
        iVar8 = *(iVar3 + 0x98);
        if ((iVar8 != 0) && (*(iVar8 + 0x108) != 0)) {
            uVar4 = snd_soc_component_read(iVar7,0x2110);
            iVar2 = strcmp(*(arg1 + 8),"WSA RX_MIX EC0_MUX");
            uVar1 = uVar4;
            if (iVar2 != 0) {
                uVar1 = (uVar4 & 0xffffffff) >> 3;
            }
            uVar1 = (uVar1 & 7) - 1;
            if (uVar1 < 2) {
                if (*(iVar8 + (uVar1 & 0xffff) * 4 + 0x18) != 0) {
                    iVar2 = 1 << (uVar1 & 0x1f);
                    snd_soc_component_update_bits(iVar7,0x2110,iVar2,iVar2);
                    iVar2 = (uVar1 & 0xffff) * 0x40;
                    snd_soc_component_update_bits(iVar7,iVar2 + 0x2680U & 0xffc0,1,1);
                    snd_soc_component_update_bits(iVar7,iVar2 + 0x2684U & 0xfffc,0x1e,8);
                }
                return 0;
            }
            iVar2 = ___ratelimit(obj.lpass_cdc_wsa_macro_enable_echo._rs,"lpass_cdc_wsa_macro_enable_echo");
            if (iVar2 == 0) {
                return 0xffffffea;
            }
            pcVar5 = "%s: EC mix control not set correctly\n";
            goto code_r0x080156a0;
        }
        iVar2 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar2 == 0) {
            return 0xffffffea;
        }
        pcVar5 = "%s: priv is null for macro!\n";
    }
    iVar3 = *(iVar6 + -0xb8);
code_r0x080156a0:
    _dev_err(iVar3,pcVar5,"lpass_cdc_wsa_macro_enable_echo");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_enable_swr @ 0x080156a8 (size 408) =====

ulong sym.lpass_cdc_wsa_macro_enable_swr(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    char *pcVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0x28);
    iVar2 = lpass_cdc_get_device_ptr(*(iVar4 + -0xb8),2);
    if (iVar2 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: null device for macro!\n";
    }
    else {
        iVar2 = *(iVar2 + 0x98);
        if ((iVar2 != 0) && (*(iVar2 + 0x108) != 0)) {
            if (arg2 == 8) {
                iVar4 = strnstr(*(arg1 + 8),0x8001beb,8);
                if ((iVar4 == 0) && (*(iVar2 + 0x110) != 0)) {
                    *(iVar2 + 0x110) = *(iVar2 + 0x110) + -1;
                }
                iVar4 = strnstr(*(arg1 + 8),0x80021bd,8);
                if ((iVar4 == 0) && (*(iVar2 + 0x114) != 0)) {
                    *(iVar2 + 0x114) = *(iVar2 + 0x114) + -1;
                    return 0;
                }
            }
            else if (arg2 == 1) {
                iVar4 = strnstr(*(arg1 + 8),0x8001beb,8);
                if ((iVar4 == 0) && (*(iVar2 + 0x110) == 0)) {
                    *(iVar2 + 0x110) = 1;
                }
                iVar4 = strnstr(*(arg1 + 8),0x80021bd,8);
                if ((iVar4 == 0) && (*(iVar2 + 0x114) == 0)) {
                    *(iVar2 + 0x114) = 1;
                }
                if (*(iVar2 + 0x90) != NULL) {
                    swrm_wcd_notify(**(iVar2 + 0x90),2,0);
                    return 0;
                }
            }
            return 0;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar4 + -0xb8),pcVar3,"lpass_cdc_wsa_macro_enable_swr");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_enable_mix_path @ 0x08015840 (size 276) =====

ulong sym.lpass_cdc_wsa_macro_enable_mix_path(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    uint uVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong uVar5;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uchar extraout_q0_00 [16];
    uchar auVar6 [16];
    
    *in_x18 = unaff_x30;
    uVar5 = *(arg1 + 8);
    iVar3 = *(arg1 + 0x28);
    iVar4 = iVar3 + -0xd0;
    iVar1 = strcmp(uVar5,"WSA_RX0 MIX INP");
    if (iVar1 == 0) {
        uVar5 = 0x2420;
        auVar6 = extraout_q0;
    }
    else {
        iVar1 = strcmp(uVar5,"WSA_RX1 MIX INP");
        if (iVar1 != 0) {
            iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_enable_mix_path._rs,"lpass_cdc_wsa_macro_enable_mix_path");
            if (iVar1 == 0) {
                return 0;
            }
            _dev_err(*(iVar3 + -0xb8),"%s: No gain register avail for %s\n","lpass_cdc_wsa_macro_enable_mix_path",
                     *(arg1 + 8));
            return 0;
        }
        uVar5 = 0x24a0;
        auVar6 = extraout_q0_00;
    }
    if (arg2 == 8) {
        auVar6 = snd_soc_component_update_bits(iVar4,*(arg1 + 0x48),0x20,0);
        sym.lpass_cdc_wsa_macro_enable_swr(arg1,auVar6,8);
    }
    else if (arg2 == 1) {
        sym.lpass_cdc_wsa_macro_enable_swr(arg1,auVar6,1);
        uVar2 = snd_soc_component_read(iVar4,uVar5);
        snd_soc_component_write(iVar4,uVar5,uVar2);
    }
    return 0;
}


// ===== sym.lpass_cdc_wsa_macro_enable_main_path @ 0x08015954 (size 332) =====

ulong sym.lpass_cdc_wsa_macro_enable_main_path(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint8_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t iVar5;
    char *pcVar6;
    int64_t iVar7;
    ulong *in_x18;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = *(arg1 + 0x28);
    iVar8 = iVar7 + -0xd0;
    iVar5 = lpass_cdc_get_device_ptr(*(iVar7 + -0xb8),2);
    if (iVar5 == 0) {
        iVar4 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar4 == 0) {
            return 0xffffffea;
        }
        pcVar6 = "%s: null device for macro!\n";
    }
    else {
        if ((*(iVar5 + 0x98) != 0) && (*(*(iVar5 + 0x98) + 0x108) != 0)) {
            if (arg2 == 1) {
                uVar1 = *(arg1 + 0x4c);
                iVar4 = uVar1 * 8;
                uVar2 = snd_soc_component_read(iVar8,iVar4 + 0x2100);
                uVar3 = snd_soc_component_read(iVar8,iVar4 + 0x2104);
                if ((((uVar2 & 0xe) == 10) || ((uVar2 & 0xe0) == 0xa0)) || ((uVar3 & 0xe0) == 0xa0)) {
                    snd_soc_component_update_bits(iVar8,uVar1 * 0x80 + 0x2400,0x20,0x20);
                    lpass_cdc_wsa_pa_on(iVar5,1);
                }
            }
            return 0;
        }
        iVar4 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar4 == 0) {
            return 0xffffffea;
        }
        pcVar6 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar7 + -0xb8),pcVar6,"lpass_cdc_wsa_macro_enable_main_path");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_enable_interpolator @ 0x08015aa0 (size 1048) =====

ulong sym.lpass_cdc_wsa_macro_enable_interpolator(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uchar uVar1;
    uint uVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    code *pcVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    uint32_t uVar9;
    int64_t iVar10;
    char *pcVar11;
    int64_t iVar12;
    uint64_t uVar13;
    uint uVar14;
    ulong *in_x18;
    int64_t arg1_00;
    ulong uVar15;
    int64_t iVar16;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar12 = *(arg1 + 0x28);
    iVar8 = arg2;
    arg1_00 = iVar12 + -0xd0;
    iVar10 = lpass_cdc_get_device_ptr(*(iVar12 + -0xb8),2);
    if (iVar10 == 0) {
code_r0x08015b8c:
        iVar8 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar8 == 0) {
            return 0xffffffea;
        }
        pcVar11 = "%s: null device for macro!\n";
    }
    else {
        if ((*(iVar10 + 0x98) != 0) && (*(*(iVar10 + 0x98) + 0x108) != 0)) {
            iVar10 = lpass_cdc_get_device_ptr(*(iVar12 + -0xb8),2);
            if (iVar10 == 0) goto code_r0x08015b8c;
            iVar10 = *(iVar10 + 0x98);
            if ((iVar10 != 0) && (iVar16 = *(iVar10 + 0x108), iVar16 != 0)) {
                uVar15 = *(arg1 + 8);
                iVar6 = strcmp(uVar15,"WSA_RX INT0 INTERP");
                if (iVar6 == 0) {
                    iVar12 = 0x2400;
                }
                else {
                    iVar7 = strcmp(uVar15,"WSA_RX INT1 INTERP");
                    if (iVar7 != 0) {
                        iVar8 = ___ratelimit(obj.lpass_cdc_wsa_macro_enable_interpolator._rs,
                                             "lpass_cdc_wsa_macro_enable_interpolator");
                        if (iVar8 == 0) {
                            return 0xffffffea;
                        }
                        uVar15 = *(iVar12 + -0xb8);
                        pcVar11 = "%s: Interpolator reg not found\n";
                        goto code_r0x08015bd4;
                    }
                    iVar12 = 0x2480;
                }
                if (iVar8 == 8) {
                    snd_soc_component_update_bits(arg1_00,0x2408,8,8);
                    sym.lpass_cdc_wsa_macro_config_compander(arg1_00,*(arg1 + 0x4c),8);
                    uVar3 = *(arg1 + 0x4c);
                    uVar13 = uVar3;
                    if (*(iVar10 + 0x284) != '\0') {
                        uVar14 = 0x2410;
                        if (uVar3 != 0) {
                            uVar14 = 0;
                        }
                        uVar1 = 2;
                        if (uVar3 != 1) {
                            uVar1 = uVar3 == 0;
                        }
                        uVar2 = 0x2490;
                        if (uVar3 != 1) {
                            uVar2 = uVar14;
                        }
                        if (1 < uVar3) {
code_r0x08015eb4:
    //WARNING: Does not return
                            pcVar5 = SoftwareBreakpoint(0x5512,0x8015eb8);
                            (*pcVar5)();
                        }
                        iVar16 = 0;
                        if ((*(iVar10 + 0x288) != 0) && (*(iVar10 + 0x288) != 2 || *(iVar10 + uVar13 * 4 + 0x10) < 5)) {
                            if (*(iVar10 + 0x260) == '\0') {
                                iVar16 = 0;
                            }
                            else {
                                iVar16 = (*(iVar10 + 0x1cc) == 0) << 7;
                            }
                        }
                        snd_soc_component_update_bits(arg1_00,uVar2,0x80,iVar16);
                        snd_soc_component_update_bits(arg1_00,0x2780,uVar1,0);
                        snd_soc_component_write(arg1_00,0x2790,0);
                        uVar13 = *(arg1 + 0x4c);
                    }
                    sym.lpass_cdc_wsa_macro_config_softclip(arg1_00,uVar13,8);
                    sym.lpass_cdc_was_macro_config_pbr(arg1_00,*(arg1 + 0x4c),8);
                    iVar10 = 8;
                }
                else {
                    if (iVar8 == 2) {
                        if ((iVar6 == 0) &&
                           (uVar3 = *(iVar10 + 0x21c), uVar4 = *(iVar10 + 0x228),
                           uVar9 = snd_soc_component_read(iVar16,0x2414), uVar9 != (uVar3 - uVar4 & 0xff))) {
                            snd_soc_component_update_bits(*(iVar10 + 0x108),0x2414,0xff);
                        }
                        iVar8 = strcmp(*(arg1 + 8),"WSA_RX INT1 INTERP");
                        if ((iVar8 == 0) &&
                           (uVar3 = *(iVar10 + 0x21d), uVar4 = *(iVar10 + 0x228),
                           uVar9 = snd_soc_component_read(*(iVar10 + 0x108),0x2494), uVar9 != (uVar3 - uVar4 & 0xff)))
                        {
                            snd_soc_component_update_bits(*(iVar10 + 0x108),0x2494,0xff);
                        }
                        sym.lpass_cdc_wsa_macro_config_compander(arg1_00,*(arg1 + 0x4c),2);
                        uVar3 = *(arg1 + 0x4c);
                        uVar13 = uVar3;
                        if (*(iVar10 + 0x284) != '\0') {
                            uVar14 = 0x2410;
                            if (uVar3 != 0) {
                                uVar14 = 0;
                            }
                            uVar1 = 2;
                            if (uVar3 != 1) {
                                uVar1 = uVar3 == 0;
                            }
                            uVar2 = 0x2490;
                            if (uVar3 != 1) {
                                uVar2 = uVar14;
                            }
                            if (1 < uVar3) goto code_r0x08015eb4;
                            iVar12 = 0;
                            if ((*(iVar10 + 0x288) != 0) &&
                               (*(iVar10 + 0x288) != 2 || *(iVar10 + uVar13 * 4 + 0x10) < 5)) {
                                if (*(iVar10 + 0x260) == '\0') {
                                    iVar12 = 0;
                                }
                                else {
                                    iVar12 = (*(iVar10 + 0x1cc) == 0) << 7;
                                }
                            }
                            snd_soc_component_update_bits(arg1_00,uVar2,0x80,iVar12);
                            snd_soc_component_update_bits(arg1_00,0x2780,uVar1,uVar1);
                            uVar13 = *(arg1 + 0x4c);
                        }
                        sym.lpass_cdc_wsa_macro_config_softclip(arg1_00,uVar13,2);
                        sym.lpass_cdc_was_macro_config_pbr(arg1_00,*(arg1 + 0x4c),2);
                        if (*(iVar10 + 0x1cc) == 0) {
                            return 0;
                        }
                        snd_soc_component_update_bits(arg1_00,0x2408,8,0);
                        return 0;
                    }
                    if (iVar8 != 1) {
                        return 0;
                    }
                    iVar10 = 1;
                }
                sym.lpass_cdc_wsa_macro_enable_prim_interpolator(arg1_00,iVar12,iVar10);
                return 0;
            }
        }
        iVar8 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar8 == 0) {
            return 0xffffffea;
        }
        pcVar11 = "%s: priv is null for macro!\n";
    }
    uVar15 = *(iVar12 + -0xb8);
code_r0x08015bd4:
    _dev_err(uVar15,pcVar11,"lpass_cdc_wsa_macro_enable_interpolator");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_spk_boost_event @ 0x08015eb8 (size 300) =====

ulong sym.lpass_cdc_wsa_macro_spk_boost_event(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong uVar6;
    ulong uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar6 = *(arg1 + 8);
    iVar4 = *(arg1 + 0x28);
    iVar5 = iVar4 + -0xd0;
    iVar1 = strcmp(uVar6,"WSA_RX INT0 CHAIN");
    if (iVar1 == 0) {
        uVar6 = 0x2408;
        uVar7 = 0x2500;
    }
    else {
        iVar1 = strcmp(uVar6,"WSA_RX INT1 CHAIN");
        if (iVar1 != 0) {
            iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_spk_boost_event._rs,"lpass_cdc_wsa_macro_spk_boost_event");
            if (iVar1 == 0) {
                return 0xffffffea;
            }
            _dev_err(*(iVar4 + -0xb8),"%s: unknown widget: %s\n","lpass_cdc_wsa_macro_spk_boost_event",*(arg1 + 8));
            return 0xffffffea;
        }
        uVar6 = 0x2488;
        uVar7 = 0x2540;
    }
    if (arg2 == 8) {
        snd_soc_component_update_bits(iVar5,uVar7,0x10,0);
        uVar2 = 1;
        uVar3 = 0;
        uVar7 = uVar6;
    }
    else {
        if (arg2 != 1) {
            return 0;
        }
        snd_soc_component_update_bits(iVar5,uVar6,1,1);
        uVar2 = 0x10;
        uVar3 = 0x10;
    }
    snd_soc_component_update_bits(iVar5,uVar7,uVar2,uVar3);
    return 0;
}


// ===== sym.lpass_cdc_wsa_macro_enable_vbat @ 0x08015fe4 (size 1180) =====

ulong sym.lpass_cdc_wsa_macro_enable_vbat(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int *piVar1;
    int iVar2;
    int64_t iVar3;
    char *pcVar4;
    ulong uVar5;
    ulong uVar6;
    uint uVar7;
    int64_t iVar8;
    ulong *in_x18;
    int64_t iVar9;
    ulong uVar10;
    int64_t iVar11;
    uint64_t uVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = *(arg1 + 0x28);
    iVar9 = iVar8 + -0xd0;
    iVar3 = lpass_cdc_get_device_ptr(*(iVar8 + -0xb8),2);
    if (iVar3 == 0) {
        iVar2 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar2 == 0) {
            return 0xffffffea;
        }
        pcVar4 = "%s: null device for macro!\n";
    }
    else {
        iVar11 = *(iVar3 + 0x98);
        if ((iVar11 != 0) && (*(iVar11 + 0x108) != 0)) {
            uVar10 = *(arg1 + 8);
            iVar2 = strcmp(uVar10,"WSA_RX INT0 VBAT");
            if (iVar2 == 0) {
                uVar12 = 0;
                uVar7 = 0x2408;
            }
            else {
                iVar2 = strcmp(uVar10,"WSA_RX INT1 VBAT");
                uVar12 = iVar2 == 0;
                uVar7 = 0x2488;
                if (iVar2 != 0) {
                    uVar7 = 0;
                }
            }
            if (arg2 == 8) {
                snd_soc_component_update_bits(iVar9,0x2908,1,0);
                snd_soc_component_update_bits(iVar9,0x2904,1,0);
                snd_soc_component_update_bits(iVar9,0x2900,1,0);
                snd_soc_component_update_bits(iVar9,uVar7,0x80,0);
                snd_soc_component_update_bits(iVar9,0x2184,2,2);
                snd_soc_component_update_bits(iVar9,uVar7,2,0);
                snd_soc_component_update_bits(iVar9,0x21dc,0xff,0);
                snd_soc_component_update_bits(iVar9,0x21e0,0xff,0);
                snd_soc_component_update_bits(iVar9,0x21e4,0xff,0);
                snd_soc_component_update_bits(iVar9,0x21e8,0xff,0);
                snd_soc_component_update_bits(iVar9,0x21ec,0xff,0);
                snd_soc_component_update_bits(iVar9,0x21f0,0xff,0);
                snd_soc_component_update_bits(iVar9,0x21f4,0xff,0);
                snd_soc_component_update_bits(iVar9,0x21f8,0xff,0);
                snd_soc_component_update_bits(iVar9,0x21fc,0xff,0);
                iVar11 = iVar11 + uVar12 * 4;
                iVar2 = *(iVar11 + 0x1e0) + -1;
                *(iVar11 + 0x1e0) = iVar2;
                if (iVar2 == 0) {
                    snd_soc_component_update_bits(iVar9,uVar12 << 5 | 0x2640,1,0);
                    snd_soc_component_update_bits(iVar9,0x2118,1 << uVar12,0);
                }
                snd_soc_component_update_bits(iVar9,0x2184,1,0);
                uVar10 = 0x2180;
                uVar5 = 0x10;
                uVar6 = 0;
            }
            else {
                if (arg2 != 1) {
                    uVar10 = ___ratelimit(obj.lpass_cdc_wsa_macro_enable_vbat._rs,"lpass_cdc_wsa_macro_enable_vbat");
                    if (uVar10 != 0) {
                        _dev_err(iVar3,"%s: Invalid event %d\n","lpass_cdc_wsa_macro_enable_vbat",arg2 & 0xffffffff);
                        return 0;
                    }
                    return uVar10;
                }
                snd_soc_component_update_bits(iVar9,0x2180,0x10,0x10);
                snd_soc_component_update_bits(iVar9,0x2184,1,1);
                snd_soc_component_update_bits(iVar9,uVar7,0x80,0x80);
                snd_soc_component_update_bits(iVar9,0x2184,2,0);
                iVar11 = iVar11 + uVar12 * 4;
                piVar1 = iVar11 + 0x1e0;
                iVar2 = *(iVar11 + 0x1e0);
                if (iVar2 == 0) {
                    snd_soc_component_update_bits(iVar9,uVar12 << 5 | 0x2640,1,1);
                    snd_soc_component_update_bits(iVar9,0x2118,1 << uVar12,1 << uVar12);
                    iVar2 = *piVar1;
                }
                *piVar1 = iVar2 + 1;
                snd_soc_component_update_bits(iVar9,uVar7,2,2);
                snd_soc_component_update_bits(iVar9,0x21dc,0xff,0xff);
                snd_soc_component_update_bits(iVar9,0x21e0,0xff,3);
                snd_soc_component_update_bits(iVar9,0x21e4,0xff,0);
                snd_soc_component_update_bits(iVar9,0x21e8,0xff,0xff);
                snd_soc_component_update_bits(iVar9,0x21ec,0xff,3);
                snd_soc_component_update_bits(iVar9,0x21f0,0xff,0);
                snd_soc_component_update_bits(iVar9,0x21f4,0xff,0xff);
                snd_soc_component_update_bits(iVar9,0x21f8,0xff,3);
                snd_soc_component_update_bits(iVar9,0x21fc,0xff,0);
                snd_soc_component_update_bits(iVar9,0x2900,1,1);
                snd_soc_component_update_bits(iVar9,0x2904,1,1);
                uVar10 = 0x2908;
                uVar5 = 1;
                uVar6 = 1;
            }
            snd_soc_component_update_bits(iVar9,uVar10,uVar5,uVar6);
            return 0;
        }
        iVar2 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar2 == 0) {
            return 0xffffffea;
        }
        pcVar4 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar8 + -0xb8),pcVar4,"lpass_cdc_wsa_macro_enable_vbat");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_mclk_event @ 0x08016480 (size 324) =====

ulong sym.lpass_cdc_wsa_macro_mclk_event(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong uVar3;
    char *pcVar4;
    ulong *in_x18;
    ulong *arg1_00;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(arg1 + 0x28);
    iVar2 = lpass_cdc_get_device_ptr(*(iVar5 + -0xb8),2);
    if (iVar2 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar4 = "%s: null device for macro!\n";
    }
    else {
        arg1_00 = *(iVar2 + 0x98);
        if ((arg1_00 != NULL) && (arg1_00[0x21] != 0)) {
            if (arg2 == 8) {
                if (*(arg1_00 + 5) == '\0') {
                    return 0;
                }
                sym.lpass_cdc_wsa_macro_mclk_enable(arg1_00,0);
                *(arg1_00 + 5) = 0;
                return 0;
            }
            if (arg2 != 1) {
                iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_mclk_event._rs,"lpass_cdc_wsa_macro_mclk_event");
                if (iVar1 == 0) {
                    return 0xffffffea;
                }
                _dev_err(*arg1_00,"%s: invalid DAPM event %d\n","lpass_cdc_wsa_macro_mclk_event",arg2 & 0xffffffff);
                return 0xffffffea;
            }
            uVar3 = sym.lpass_cdc_wsa_macro_mclk_enable(arg1_00,1);
            if (uVar3 == 0) {
                *(arg1_00 + 5) = arg2;
                return uVar3;
            }
            *(arg1_00 + 5) = 0;
            return uVar3;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar4 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar5 + -0xb8),pcVar4,"lpass_cdc_wsa_macro_mclk_event");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_vi_feed_mixer_get @ 0x080165c4 (size 268) =====

ulong sym.lpass_cdc_wsa_macro_vi_feed_mixer_get(int64_t arg1,int64_t arg2)

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
    iVar5 = lpass_cdc_get_device_ptr(*(iVar7 + -0xb8),2);
    if (iVar5 == 0) {
        iVar4 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar4 == 0) {
            return 0xffffffea;
        }
        pcVar6 = "%s: null device for macro!\n";
    }
    else {
        iVar5 = *(iVar5 + 0x98);
        if ((iVar5 != 0) && (*(iVar5 + 0x108) != 0)) {
            if (6 < uVar2) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x5512,0x80166d0);
                (*pcVar3)();
            }
            if ((*(iVar5 + uVar2 * 8 + (uVar1 >> 3 & 0x1ffffff8) + 0x118) >> (uVar1 & 0x3f) & 1) == 0) {
                *(arg2 + 0x48) = 0;
                return 0;
            }
            *(arg2 + 0x48) = 1;
            return 0;
        }
        iVar4 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar4 == 0) {
            return 0xffffffea;
        }
        pcVar6 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar7 + -0xb8),pcVar6,"lpass_cdc_wsa_macro_vi_feed_mixer_get");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_vi_feed_mixer_put @ 0x080166d0 (size 584) =====

ulong sym.lpass_cdc_wsa_macro_vi_feed_mixer_put(int64_t arg1,int64_t arg2)

{
    uint64_t *puVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    int64_t iVar6;
    int64_t iVar7;
    char *pcVar8;
    ulong *in_x18;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = snd_soc_dapm_kcontrol_widget();
    iVar9 = *(iVar6 + 0x28);
    iVar5 = *(arg2 + 0x48);
    iVar2 = *(*(arg1 + 0x78) + 0x18);
    iVar7 = lpass_cdc_get_device_ptr(*(iVar9 + -0xb8),2);
    if (iVar7 == 0) {
        iVar5 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar5 == 0) {
            return 0xffffffea;
        }
        pcVar8 = "%s: null device for macro!\n";
code_r0x08016860:
        _dev_err(*(iVar9 + -0xb8),pcVar8,"lpass_cdc_wsa_macro_vi_feed_mixer_put");
        return 0xffffffea;
    }
    iVar7 = *(iVar7 + 0x98);
    if ((iVar7 == 0) || (*(iVar7 + 0x108) == 0)) {
        iVar5 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar5 == 0) {
            return 0xffffffea;
        }
        pcVar8 = "%s: priv is null for macro!\n";
        goto code_r0x08016860;
    }
    *(iVar7 + 0x2c) = *(arg2 + 0x48);
    if (iVar5 == 0) {
        if (iVar2 == 1) {
            if ((*(iVar7 + 0x130) >> 1 & 1) == 0) goto code_r0x08016824;
            puVar1 = iVar7 + 0x130;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = *puVar1 & 0xfffffffffffffffd;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
        }
        else {
            if ((iVar2 != 0) || ((*(iVar7 + 0x130) & 1) == 0)) goto code_r0x08016824;
            puVar1 = iVar7 + 0x130;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = *puVar1 & 0xfffffffffffffffe;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
        }
        iVar9 = -1;
    }
    else if (iVar2 == 1) {
        if ((*(iVar7 + 0x130) >> 1 & 1) != 0) goto code_r0x08016824;
        puVar1 = iVar7 + 0x130;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
                *puVar1 = *puVar1 | 2;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        iVar9 = 1;
    }
    else {
        if ((iVar2 != 0) || ((*(iVar7 + 0x130) & 1) != 0)) goto code_r0x08016824;
        puVar1 = iVar7 + 0x130;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
                *puVar1 = *puVar1 | 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        iVar9 = 1;
    }
    *(iVar7 + 0x160) = *(iVar7 + 0x160) + iVar9;
code_r0x08016824:
    snd_soc_dapm_mixer_update_power(*(iVar6 + 0x28),arg1,iVar5,0);
    return 0;
}


// ===== sym.lpass_cdc_wsa_macro_cps_feed_mixer_get @ 0x08016918 (size 268) =====

ulong sym.lpass_cdc_wsa_macro_cps_feed_mixer_get(int64_t arg1,int64_t arg2)

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
    iVar5 = lpass_cdc_get_device_ptr(*(iVar7 + -0xb8),2);
    if (iVar5 == 0) {
        iVar4 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar4 == 0) {
            return 0xffffffea;
        }
        pcVar6 = "%s: null device for macro!\n";
    }
    else {
        iVar5 = *(iVar5 + 0x98);
        if ((iVar5 != 0) && (*(iVar5 + 0x108) != 0)) {
            if (6 < uVar2) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x5512,0x8016a24);
                (*pcVar3)();
            }
            if ((*(iVar5 + uVar2 * 8 + (uVar1 >> 3 & 0x1ffffff8) + 0x118) >> (uVar1 & 0x3f) & 1) == 0) {
                *(arg2 + 0x48) = 0;
                return 0;
            }
            *(arg2 + 0x48) = 1;
            return 0;
        }
        iVar4 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar4 == 0) {
            return 0xffffffea;
        }
        pcVar6 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar7 + -0xb8),pcVar6,"lpass_cdc_wsa_macro_cps_feed_mixer_get");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_cps_feed_mixer_put @ 0x08016a24 (size 636) =====

ulong sym.lpass_cdc_wsa_macro_cps_feed_mixer_put(int64_t arg1,int64_t arg2)

{
    uint64_t *puVar1;
    int iVar2;
    uint8_t uVar3;
    char cVar4;
    bool bVar5;
    code *pcVar6;
    int iVar7;
    int64_t iVar8;
    int64_t iVar9;
    char *pcVar10;
    ulong *in_x18;
    uint64_t uVar11;
    int64_t iVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = snd_soc_dapm_kcontrol_widget();
    iVar12 = *(iVar8 + 0x28);
    uVar3 = *(iVar8 + 0x4c);
    uVar11 = uVar3;
    iVar7 = *(*(arg1 + 0x78) + 0x18);
    iVar2 = *(arg2 + 0x48);
    iVar9 = lpass_cdc_get_device_ptr(*(iVar12 + -0xb8),2);
    if (iVar9 == 0) {
        iVar7 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar7 == 0) {
            return 0xffffffea;
        }
        pcVar10 = "%s: null device for macro!\n";
code_r0x08016be4:
        _dev_err(*(iVar12 + -0xb8),pcVar10,"lpass_cdc_wsa_macro_cps_feed_mixer_put");
        return 0xffffffea;
    }
    iVar9 = *(iVar9 + 0x98);
    if ((iVar9 == 0) || (*(iVar9 + 0x108) == 0)) {
        iVar7 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar7 == 0) {
            return 0xffffffea;
        }
        pcVar10 = "%s: priv is null for macro!\n";
        goto code_r0x08016be4;
    }
    if (iVar2 == 0) {
        if (iVar7 == 1) {
            if (6 < uVar3) goto code_r0x08016bfc;
            iVar12 = iVar9 + uVar11 * 8;
            if ((*(iVar12 + 0x118) >> 1 & 1) == 0) goto code_r0x08016ba8;
            puVar1 = iVar12 + 0x118;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                    *puVar1 = *puVar1 & 0xfffffffffffffffd;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
        }
        else {
            if (iVar7 != 0) goto code_r0x08016ba8;
            if (6 < uVar3) goto code_r0x08016bfc;
            iVar12 = iVar9 + uVar11 * 8;
            if ((*(iVar12 + 0x118) & 1) == 0) goto code_r0x08016ba8;
            puVar1 = iVar12 + 0x118;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                    *puVar1 = *puVar1 & 0xfffffffffffffffe;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
        }
        iVar12 = -1;
    }
    else if (iVar7 == 1) {
        if (6 < uVar3) {
code_r0x08016bfc:
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x5512,0x8016c00);
            (*pcVar6)();
        }
        iVar12 = iVar9 + uVar11 * 8;
        if ((*(iVar12 + 0x118) >> 1 & 1) != 0) goto code_r0x08016ba8;
        puVar1 = iVar12 + 0x118;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar4 = '\x01';
            bVar5 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
                *puVar1 = *puVar1 | 2;
                cVar4 = ExclusiveMonitorsStatus();
            }
        } while (cVar4 != '\0');
        iVar12 = 1;
    }
    else {
        if (iVar7 != 0) goto code_r0x08016ba8;
        if (6 < uVar3) goto code_r0x08016bfc;
        iVar12 = iVar9 + uVar11 * 8;
        if ((*(iVar12 + 0x118) & 1) != 0) goto code_r0x08016ba8;
        puVar1 = iVar12 + 0x118;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar4 = '\x01';
            bVar5 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
                *puVar1 = *puVar1 | 1;
                cVar4 = ExclusiveMonitorsStatus();
            }
        } while (cVar4 != '\0');
        iVar12 = 1;
    }
    iVar9 = iVar9 + uVar11 * 8;
    *(iVar9 + 0x148) = *(iVar9 + 0x148) + iVar12;
code_r0x08016ba8:
    snd_soc_dapm_mixer_update_power(*(iVar8 + 0x28),arg1,iVar2,0);
    return 0;
}


// ===== sym.lpass_cdc_wsa_macro_rx_mux_get @ 0x08016ca0 (size 224) =====

ulong sym.lpass_cdc_wsa_macro_rx_mux_get(ulong noname_0,int64_t arg1)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    char *pcVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = snd_soc_dapm_kcontrol_widget();
    iVar6 = *(iVar3 + 0x28);
    iVar4 = lpass_cdc_get_device_ptr(*(iVar6 + -0xb8),2);
    if (iVar4 == 0) {
        iVar2 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar2 == 0) {
            return 0xffffffea;
        }
        pcVar5 = "%s: null device for macro!\n";
    }
    else {
        iVar4 = *(iVar4 + 0x98);
        if ((iVar4 != 0) && (*(iVar4 + 0x108) != 0)) {
            if (8 < *(iVar3 + 0x4c)) {
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x5512,0x8016d80);
                (*pcVar1)();
            }
            *(arg1 + 0x48) = *(iVar4 + *(iVar3 + 0x4c) * 4 + 0x184);
            return 0;
        }
        iVar2 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar2 == 0) {
            return 0xffffffea;
        }
        pcVar5 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar6 + -0xb8),pcVar5,"lpass_cdc_wsa_macro_rx_mux_get");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_rx_mux_put @ 0x08016d80 (size 668) =====

ulong sym.lpass_cdc_wsa_macro_rx_mux_put(int64_t arg1,int64_t arg2)

{
    int *piVar1;
    uint64_t *puVar2;
    uint32_t uVar3;
    uint8_t uVar4;
    char cVar5;
    bool bVar6;
    code *pcVar7;
    int iVar8;
    int64_t iVar9;
    int64_t iVar10;
    char *pcVar11;
    int64_t iVar12;
    uint64_t uVar13;
    ulong *in_x18;
    uint64_t uVar14;
    ulong uVar15;
    int64_t iVar16;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar9 = snd_soc_dapm_kcontrol_widget();
    iVar16 = *(iVar9 + 0x28);
    uVar15 = *(arg1 + 0x78);
    uVar14 = *(arg2 + 0x48);
    iVar10 = lpass_cdc_get_device_ptr(*(iVar16 + -0xb8),2);
    if (iVar10 == 0) {
        iVar8 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar8 == 0) {
            return 0xffffffea;
        }
        pcVar11 = "%s: null device for macro!\n";
code_r0x08016fbc:
        _dev_err(*(iVar16 + -0xb8),pcVar11,"lpass_cdc_wsa_macro_rx_mux_put");
        return 0xffffffea;
    }
    iVar12 = *(iVar10 + 0x98);
    if ((iVar12 == 0) || (*(iVar12 + 0x108) == 0)) {
        iVar8 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar8 == 0) {
            return 0xffffffea;
        }
        pcVar11 = "%s: priv is null for macro!\n";
        goto code_r0x08016fbc;
    }
    if (8 < *(iVar9 + 0x4c)) {
code_r0x08016fd0:
    //WARNING: Does not return
        pcVar7 = SoftwareBreakpoint(0x5512,0x8016fd4);
        (*pcVar7)();
    }
    iVar16 = iVar12 + *(iVar9 + 0x4c) * 4;
    piVar1 = iVar16 + 0x184;
    iVar8 = uVar14;
    if (iVar8 == 0) {
        uVar3 = *(iVar16 + 0x184);
        if (uVar3 == 0) {
            uVar15 = ___ratelimit(obj.lpass_cdc_wsa_macro_rx_mux_put._rs,"lpass_cdc_wsa_macro_rx_mux_put");
            if (uVar15 == 0) {
                return uVar15;
            }
            pcVar11 = "%s: AIF reset already\n";
        }
        else {
            if (uVar3 < 6) {
                iVar12 = iVar12 + uVar3 * 8;
                *piVar1 = 0;
                if (*(iVar12 + 0x148) != 0) {
                    uVar4 = *(iVar9 + 0x4c);
                    puVar2 = iVar12 + (uVar4 >> 3 & 0x18) + 0x118;
                    Hint_Prefetch(puVar2,2,0,1);
                    do {
                        cVar5 = '\x01';
                        bVar6 = ExclusiveMonitorPass(puVar2,0x10);
                        if (bVar6) {
                            *puVar2 = *puVar2 & (1L << (uVar4 & 0x3f) ^ 0xffffffffffffffffU);
                            cVar5 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar5 != '\0');
                    iVar10 = -1;
                    goto code_r0x08016e48;
                }
                goto code_r0x08016e54;
            }
            uVar15 = ___ratelimit(obj.lpass_cdc_wsa_macro_rx_mux_put._rs.139,"lpass_cdc_wsa_macro_rx_mux_put");
            if (uVar15 == 0) {
                return uVar15;
            }
            pcVar11 = "%s: Invalid AIF reset\n";
        }
        _dev_err(iVar10,pcVar11,"lpass_cdc_wsa_macro_rx_mux_put");
    }
    else {
        *piVar1 = iVar8;
        if (1 < iVar8 - 1U) {
            iVar8 = ___ratelimit(obj.lpass_cdc_wsa_macro_rx_mux_put._rs.141,"lpass_cdc_wsa_macro_rx_mux_put");
            if (iVar8 == 0) {
                return 0xffffffea;
            }
            _dev_err(iVar10,"%s: Invalid AIF_ID for WSA RX MUX %d\n","lpass_cdc_wsa_macro_rx_mux_put",
                     uVar14 & 0xffffffff);
            return 0xffffffea;
        }
        uVar13 = uVar14 & 0xffffffff;
        if (6 < uVar13) goto code_r0x08016fd0;
        uVar4 = *(iVar9 + 0x4c);
        puVar2 = iVar12 + uVar13 * 8 + (uVar4 >> 3 & 0x18) + 0x118;
        Hint_Prefetch(puVar2,2,0,1);
        do {
            cVar5 = '\x01';
            bVar6 = ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
                *puVar2 = *puVar2 | 1L << (uVar4 & 0x3f);
                cVar5 = ExclusiveMonitorsStatus();
            }
        } while (cVar5 != '\0');
        iVar12 = iVar12 + uVar13 * 8;
        iVar10 = 1;
code_r0x08016e48:
        *(iVar12 + 0x148) = *(iVar12 + 0x148) + iVar10;
code_r0x08016e54:
        snd_soc_dapm_mux_update_power(*(iVar9 + 0x28),arg1,uVar14 & 0xffffffff,uVar15,0);
    }
    return 0;
}


// ===== sym.lpass_cdc_wsa_macro_enable_prim_interpolator @ 0x0801701c (size 768) =====

void sym.lpass_cdc_wsa_macro_enable_prim_interpolator(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint uVar2;
    int16_t iVar3;
    int iVar4;
    uint32_t uVar5;
    int64_t iVar6;
    char *pcVar7;
    ulong uVar8;
    ulong uVar9;
    uint uVar10;
    uint32_t uVar11;
    ulong *in_x18;
    uint32_t uVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = lpass_cdc_get_device_ptr(*(arg1 + 0x18),2);
    if (iVar6 == 0) {
        iVar4 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar4 == 0) {
            return;
        }
        pcVar7 = "%s: null device for macro!\n";
    }
    else {
        iVar6 = *(iVar6 + 0x98);
        if ((iVar6 != 0) && (*(iVar6 + 0x108) != 0)) {
            uVar11 = 0;
            uVar5 = arg2 & 0xffff;
            if (uVar5 < 0x2480) {
                uVar12 = 0x2400;
                if ((uVar5 != 0x2400) && (uVar5 != 0x2418)) {
                    uVar12 = 0;
                }
            }
            else if ((uVar5 == 0x2498) || (uVar12 = 0, uVar5 == 0x2480)) {
                uVar12 = 0x2480;
                uVar11 = 1;
            }
            if (arg3 == 8) {
                iVar6 = iVar6 + uVar11 * 2;
                iVar3 = *(iVar6 + 0x20) + -1;
                *(iVar6 + 0x20) = iVar3;
                if (iVar3 != 0) {
                    return;
                }
                snd_soc_component_update_bits(arg1,uVar12,0x20,0);
                snd_soc_component_update_bits(arg1,uVar12 + 0x4c,1,0);
                snd_soc_component_update_bits(arg1,uVar12,0x40,0x40);
                snd_soc_component_update_bits(arg1,uVar12,0x40,0);
                iVar4 = 0x2404;
                if (uVar12 != 0x2400) {
                    iVar4 = 0;
                }
                iVar1 = 0x2484;
                if (uVar12 != 0x2480) {
                    iVar1 = iVar4;
                }
                if (iVar1 == 0) {
                    return;
                }
                uVar5 = 0x2430;
                if (uVar12 != 0x2400) {
                    uVar5 = 0;
                }
                uVar11 = 0x24b0;
                if (uVar12 != 0x2480) {
                    uVar11 = uVar5;
                }
                snd_soc_component_update_bits(arg1,iVar1,4,0);
                snd_soc_component_update_bits(arg1,uVar11,3,0);
                uVar8 = 0x3c;
                uVar9 = 0;
            }
            else {
                if (arg3 != 1) {
                    return;
                }
                iVar6 = iVar6 + uVar11 * 2;
                iVar3 = *(iVar6 + 0x20);
                *(iVar6 + 0x20) = iVar3 + 1;
                if (iVar3 == 0) {
                    snd_soc_component_update_bits(arg1,uVar12 + 0x10,3,3);
                    snd_soc_component_update_bits(arg1,uVar12,0x10,0x10);
                    iVar4 = 0x2404;
                    if (uVar12 != 0x2400) {
                        iVar4 = 0;
                    }
                    iVar1 = 0x2484;
                    if (uVar12 != 0x2480) {
                        iVar1 = iVar4;
                    }
                    if (iVar1 != 0) {
                        uVar10 = 0x2430;
                        if (uVar12 != 0x2400) {
                            uVar10 = 0;
                        }
                        uVar2 = 0x24b0;
                        if (uVar12 != 0x2480) {
                            uVar2 = uVar10;
                        }
                        snd_soc_component_update_bits(arg1,uVar2,0x3c,0x10);
                        snd_soc_component_update_bits(arg1,uVar2,3,1);
                        snd_soc_component_update_bits(arg1,iVar1,4,4);
                    }
                    snd_soc_component_update_bits(arg1,uVar12 + 0x4c,1,1);
                }
                uVar11 = arg2 & 0xffff;
                if (uVar12 == uVar11) {
                    return;
                }
                uVar5 = snd_soc_component_read(arg1,uVar12);
                if ((uVar5 >> 4 & 1) == 0) {
                    return;
                }
                uVar8 = 0x10;
                uVar9 = 0x10;
            }
            snd_soc_component_update_bits(arg1,uVar11,uVar8,uVar9);
            return;
        }
        iVar4 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar4 == 0) {
            return;
        }
        pcVar7 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(arg1 + 0x18),pcVar7,"lpass_cdc_wsa_macro_enable_prim_interpolator");
    return;
}


// ===== sym.lpass_cdc_wsa_macro_config_compander @ 0x0801731c (size 708) =====

void sym.lpass_cdc_wsa_macro_config_compander(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int iVar4;
    int iVar5;
    uint16_t uVar6;
    int iVar7;
    code *pcVar8;
    int iVar9;
    int64_t iVar10;
    char *pcVar11;
    uint32_t uVar12;
    uint uVar13;
    int iVar14;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar9 = arg2;
    iVar10 = lpass_cdc_get_device_ptr(*(arg1 + 0x18),2);
    if (iVar10 == 0) {
        iVar9 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar9 == 0) {
            return;
        }
        pcVar11 = "%s: null device for macro!\n";
    }
    else {
        iVar10 = *(iVar10 + 0x98);
        if ((iVar10 != 0) && (*(iVar10 + 0x108) != 0)) {
            if (1 < iVar9) {
                _dev_err(*(arg1 + 0x18),"%s: Invalid compander value: %d\n","lpass_cdc_wsa_macro_config_compander",
                         arg2 & 0xffffffff);
                return;
            }
            if (*(iVar10 + iVar9 * 4 + 8) == 0) {
                return;
            }
            iVar2 = iVar10 + iVar9 * 4;
            uVar6 = *(iVar2 + 0x10);
            iVar4 = *(iVar2 + 0x274);
            uVar12 = 0;
            if (uVar6 < 0x13) {
                uVar12 = uVar6;
            }
            if (iVar4 != 0) {
                uVar1 = *(iVar10 + 0x1cc) + iVar9 * 2;
                if (3 < uVar1) {
    //WARNING: Does not return
                    pcVar8 = SoftwareBreakpoint(0x5512,0x80175e0);
                    (*pcVar8)();
                }
                iVar5 = *(iVar10 + uVar1 * 4 + 0x264);
                iVar7 = iVar5 * -0xf;
                iVar14 = iVar7 + 0xd2;
                uVar13 = 0x18;
    //switch table (6 cases) at 0x8000df8
                switch(iVar4) {
                case 1:
                case 4:
                    iVar14 = iVar7 + 0x10e;
                    uVar13 = 0;
                    if (iVar5 < 6) {
                        iVar14 = 0xd2;
                    }
                    break;
                default:
                    uVar13 = 0;
                    break;
                case 3:
                case 6:
                    break;
                }
                *(uVar12 * 0xc + 0x8000a04) = uVar13;
                *(obj.comp_setting_table + uVar12 * 0xc) = (iVar14 << 1) / 10;
            }
            uVar12 = iVar9 * 0x60 + 0x2580;
            uVar1 = iVar9 * 0x80 + 0x2404;
            if ((arg3 & 3U) != 0) {
                lpass_cdc_update_compander_setting(arg1,iVar9 * 0x60 + 0x25a0);
                uVar3 = uVar12 & 0xffff;
                snd_soc_component_update_bits(arg1,uVar3,1,1);
                snd_soc_component_update_bits(arg1,uVar3,2,2);
                snd_soc_component_update_bits(arg1,uVar3,2,0);
                snd_soc_component_update_bits(arg1,uVar1 & 0xffff,2,2);
            }
            if ((arg3 & 0xcU) == 0) {
                return;
            }
            uVar12 = uVar12 & 0xffff;
            snd_soc_component_update_bits(arg1,uVar12,4,4);
            snd_soc_component_update_bits(arg1,uVar1 & 0xffff,2,0);
            snd_soc_component_update_bits(arg1,uVar12,2,2);
            snd_soc_component_update_bits(arg1,uVar12,2,0);
            snd_soc_component_update_bits(arg1,uVar12,1,0);
            snd_soc_component_update_bits(arg1,uVar12,4,0);
            return;
        }
        iVar9 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar9 == 0) {
            return;
        }
        pcVar11 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(arg1 + 0x18),pcVar11,"lpass_cdc_wsa_macro_config_compander");
    return;
}


// ===== sym.lpass_cdc_wsa_macro_config_softclip @ 0x080175e0 (size 448) =====

void sym.lpass_cdc_wsa_macro_config_softclip(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int *piVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    int64_t iVar6;
    char *pcVar7;
    int iVar8;
    ulong *in_x18;
    uint64_t uVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = arg2;
    iVar6 = lpass_cdc_get_device_ptr(*(arg1 + 0x18),2);
    if (iVar6 == 0) {
        iVar5 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar5 == 0) {
            return;
        }
        pcVar7 = "%s: null device for macro!\n";
    }
    else {
        iVar6 = *(iVar6 + 0x98);
        if ((iVar6 != 0) && (*(iVar6 + 0x108) != 0)) {
            uVar9 = iVar5 == 1;
            if (*(iVar6 + uVar9 * 4 + 0x1d8) == 0) {
                return;
            }
            uVar4 = (iVar5 == 1) << 5;
            uVar3 = (iVar5 == 1) << 5 | 0x2644;
            if ((arg3 & 3U) != 0) {
                iVar2 = iVar6 + uVar9 * 4;
                piVar1 = iVar2 + 0x1e0;
                iVar8 = *(iVar2 + 0x1e0);
                if (iVar8 == 0) {
                    snd_soc_component_update_bits(arg1,uVar4 | 0x2640,1,1);
                    snd_soc_component_update_bits(arg1,0x2118,1 << uVar9,1 << uVar9);
                    iVar8 = *piVar1;
                }
                *piVar1 = iVar8 + 1;
                snd_soc_component_update_bits(arg1,uVar3,1,1);
            }
            if ((arg3 & 0xcU) == 0) {
                return;
            }
            snd_soc_component_update_bits(arg1,uVar3,1,0);
            iVar6 = iVar6 + uVar9 * 4;
            iVar8 = *(iVar6 + 0x1e0) + -1;
            *(iVar6 + 0x1e0) = iVar8;
            if (iVar8 != 0) {
                return;
            }
            snd_soc_component_update_bits(arg1,uVar4 | 0x2640,1,0);
            snd_soc_component_update_bits(arg1,0x2118,1 << (iVar5 == 1),0);
            return;
        }
        iVar5 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar5 == 0) {
            return;
        }
        pcVar7 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(arg1 + 0x18),pcVar7,"lpass_cdc_wsa_macro_config_softclip");
    return;
}


// ===== sym.lpass_cdc_was_macro_config_pbr @ 0x080177a0 (size 752) =====

void sym.lpass_cdc_was_macro_config_pbr(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    char cVar2;
    bool bVar3;
    code *pcVar4;
    int iVar5;
    int64_t iVar6;
    char *pcVar7;
    ulong *in_x18;
    uint uVar8;
    uint uVar9;
    uint uVar10;
    uint32_t uVar11;
    uint64_t uVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar11 = arg2;
    iVar6 = lpass_cdc_get_device_ptr(*(arg1 + 0x18),2);
    if (iVar6 == 0) {
        iVar5 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar5 == 0) {
            return;
        }
        pcVar7 = "%s: null device for macro!\n";
code_r0x08017860:
        _dev_err(*(arg1 + 0x18),pcVar7,"lpass_cdc_was_macro_config_pbr");
        return;
    }
    iVar6 = *(iVar6 + 0x98);
    if ((iVar6 == 0) || (*(iVar6 + 0x108) == 0)) {
        iVar5 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar5 == 0) {
            return;
        }
        pcVar7 = "%s: priv is null for macro!\n";
        goto code_r0x08017860;
    }
    if (uVar11 == 0) {
        uVar8 = 0x2408;
        uVar9 = 0x2410;
        uVar10 = 0x2580;
        uVar12 = arg2 & 0xffffffff;
        cVar2 = *(iVar6 + 0x260);
    }
    else {
        if (uVar11 != 1) {
            bVar3 = false;
            uVar10 = 0;
            uVar9 = 0;
            uVar8 = 0;
            uVar12 = 0;
            cVar2 = *(iVar6 + 0x260);
            goto joined_r0x080178ac;
        }
        uVar8 = 0x2488;
        uVar9 = 0x2490;
        uVar10 = 0x25e0;
        uVar12 = 1;
        cVar2 = *(iVar6 + 0x260);
    }
    bVar3 = true;
joined_r0x080178ac:
    if (cVar2 == '\0') {
        return;
    }
    if (1 < uVar11) {
    //WARNING: Does not return
        pcVar4 = SoftwareBreakpoint(0x5512,0x8017a90);
        (*pcVar4)();
    }
    if (3 < *(iVar6 + (arg2 & 0xffffffffU) * 4 + 0x274)) {
        return;
    }
    if (6 < *(iVar6 + (uVar11 << 1) * 4 + 0x264)) {
        return;
    }
    if (!bVar3 || *(iVar6 + 0x1cc) != 0) {
        return;
    }
    iVar1 = iVar6 + uVar12 * 4;
    uVar11 = uVar12;
    if ((arg3 & 3U) != 0) {
        snd_soc_component_update_bits(arg1,uVar10,8,8);
        snd_soc_component_update_bits(arg1,uVar9,0x40,0x40);
        snd_soc_component_update_bits(arg1,uVar8,0x80,0x80);
        iVar5 = *(iVar1 + 0x1e0);
        if (iVar5 == 0) {
            iVar5 = 1 << (uVar11 & 0x1f);
            snd_soc_component_update_bits(arg1,uVar11 << 5 | 0x2640,1,1);
            snd_soc_component_update_bits(arg1,0x2118,iVar5,iVar5);
            iVar5 = *(iVar1 + 0x1e0);
        }
        *(iVar1 + 0x1e0) = iVar5 + 1;
        iVar5 = *(iVar6 + 0x290);
        if (iVar5 == 0) {
            snd_soc_component_update_bits(arg1,0x2b00,1,1);
            iVar5 = *(iVar6 + 0x290);
        }
        *(iVar6 + 0x290) = iVar5 + 1;
    }
    if ((arg3 & 0xcU) == 0) {
        return;
    }
    if (*(iVar6 + 0x290) == 1) {
        snd_soc_component_update_bits(arg1,0x2b00,1,0);
    }
    iVar5 = *(iVar1 + 0x1e0) + -1;
    *(iVar1 + 0x1e0) = iVar5;
    if (iVar5 == 0) {
        snd_soc_component_update_bits(arg1,uVar11 << 5 | 0x2640,1,0);
        snd_soc_component_update_bits(arg1,0x2118,1 << (uVar11 & 0x1f),0);
    }
    snd_soc_component_update_bits(arg1,uVar10,8,0);
    snd_soc_component_update_bits(arg1,uVar9,0x40,0);
    snd_soc_component_update_bits(arg1,uVar8,0x80,0);
    uVar11 = *(iVar6 + 0x290) - 1;
    *(iVar6 + 0x290) = uVar11 & (uVar11 >> 0x1f ^ 0xffffffffU);
    return;
}


// ===== sym.lpass_cdc_wsa_macro_vbat_bcl_gsm_mode_func_get @ 0x08017a90 (size 72) =====

ulong sym.lpass_cdc_wsa_macro_vbat_bcl_gsm_mode_func_get(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = snd_soc_component_read(*(arg1 + 0x80),0x2184);
    *(arg2 + 0x48) = uVar1 >> 2 & 1;
    return 0;
}


// ===== sym.lpass_cdc_wsa_macro_vbat_bcl_gsm_mode_func_put @ 0x08017ad8 (size 68) =====

ulong sym.lpass_cdc_wsa_macro_vbat_bcl_gsm_mode_func_put(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    snd_soc_component_update_bits(*(arg1 + 0x80),0x2184,4,(*(arg2 + 0x48) != 0) << 2);
    return 0;
}


// ===== sym.lpass_cdc_wsa_macro_comp_mode_get @ 0x08017b1c (size 256) =====

ulong sym.lpass_cdc_wsa_macro_comp_mode_get(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    char *pcVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0x80);
    iVar2 = lpass_cdc_get_device_ptr(*(iVar4 + 0x18),2);
    if (iVar2 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: null device for macro!\n";
    }
    else {
        iVar2 = *(iVar2 + 0x98);
        if ((iVar2 != 0) && (*(iVar2 + 0x108) != 0)) {
            strnstr(arg1 + 0x20,0x8001beb,8);
            iVar4 = strnstr(arg1 + 0x20,0x80021bd,8);
            *(arg2 + 0x48) = *(iVar2 + (iVar4 != 0) * 4 + 0x10);
            return 0;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar4 + 0x18),pcVar3,"lpass_cdc_wsa_macro_comp_mode_get");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_comp_mode_put @ 0x08017c1c (size 272) =====

ulong sym.lpass_cdc_wsa_macro_comp_mode_put(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    char *pcVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0x80);
    iVar2 = lpass_cdc_get_device_ptr(*(iVar4 + 0x18),2);
    if (iVar2 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: null device for macro!\n";
    }
    else {
        iVar2 = *(iVar2 + 0x98);
        if ((iVar2 != 0) && (*(iVar2 + 0x108) != 0)) {
            strnstr(arg1 + 0x20,0x8001beb,8);
            iVar4 = strnstr(arg1 + 0x20,0x80021bd,8);
            if (0x12 < *(arg2 + 0x48)) {
                return 0;
            }
            *(iVar2 + (iVar4 != 0) * 4 + 0x10) = *(arg2 + 0x48);
            return 0;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar4 + 0x18),pcVar3,"lpass_cdc_wsa_macro_comp_mode_put");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_ear_spkrrecv_get @ 0x08017d2c (size 188) =====

ulong sym.lpass_cdc_wsa_macro_ear_spkrrecv_get(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    char *pcVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0x80);
    iVar2 = lpass_cdc_get_device_ptr(*(iVar4 + 0x18),2);
    if (iVar2 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: null device for macro!\n";
    }
    else {
        iVar2 = *(iVar2 + 0x98);
        if ((iVar2 != 0) && (*(iVar2 + 0x108) != 0)) {
            *(arg2 + 0x48) = *(iVar2 + 0x1cc);
            return 0;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar4 + 0x18),pcVar3,"lpass_cdc_wsa_macro_ear_spkrrecv_get");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_ear_spkrrecv_put @ 0x08017de8 (size 188) =====

ulong sym.lpass_cdc_wsa_macro_ear_spkrrecv_put(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    char *pcVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0x80);
    iVar2 = lpass_cdc_get_device_ptr(*(iVar4 + 0x18),2);
    if (iVar2 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: null device for macro!\n";
    }
    else {
        iVar2 = *(iVar2 + 0x98);
        if ((iVar2 != 0) && (*(iVar2 + 0x108) != 0)) {
            *(iVar2 + 0x1cc) = *(arg2 + 0x48);
            return 0;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar4 + 0x18),pcVar3,"lpass_cdc_wsa_macro_ear_spkrrecv_put");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_idle_detect_get @ 0x08017ea4 (size 188) =====

ulong sym.lpass_cdc_wsa_macro_idle_detect_get(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    char *pcVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0x80);
    iVar2 = lpass_cdc_get_device_ptr(*(iVar4 + 0x18),2);
    if (iVar2 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: null device for macro!\n";
    }
    else {
        iVar2 = *(iVar2 + 0x98);
        if ((iVar2 != 0) && (*(iVar2 + 0x108) != 0)) {
            *(arg2 + 0x48) = *(iVar2 + 0x284);
            return 0;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar4 + 0x18),pcVar3,"lpass_cdc_wsa_macro_idle_detect_get");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_idle_detect_put @ 0x08017f60 (size 188) =====

ulong sym.lpass_cdc_wsa_macro_idle_detect_put(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    char *pcVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0x80);
    iVar2 = lpass_cdc_get_device_ptr(*(iVar4 + 0x18),2);
    if (iVar2 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: null device for macro!\n";
    }
    else {
        iVar2 = *(iVar2 + 0x98);
        if ((iVar2 != 0) && (*(iVar2 + 0x108) != 0)) {
            *(iVar2 + 0x284) = *(arg2 + 0x48);
            return 0;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar4 + 0x18),pcVar3,"lpass_cdc_wsa_macro_idle_detect_put");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_soft_clip_enable_get @ 0x0801801c (size 216) =====

ulong sym.lpass_cdc_wsa_macro_soft_clip_enable_get(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t uVar2;
    code *pcVar3;
    int iVar4;
    int64_t iVar5;
    char *pcVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x80);
    uVar2 = *(*(arg1 + 0x78) + 0x18);
    iVar5 = lpass_cdc_get_device_ptr(*(iVar1 + 0x18),2);
    if (iVar5 == 0) {
        iVar4 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar4 == 0) {
            return 0xffffffea;
        }
        pcVar6 = "%s: null device for macro!\n";
    }
    else {
        iVar5 = *(iVar5 + 0x98);
        if ((iVar5 != 0) && (*(iVar5 + 0x108) != 0)) {
            if (1 < uVar2) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x5512,0x80180f4);
                (*pcVar3)();
            }
            *(arg2 + 0x48) = *(iVar5 + uVar2 * 4 + 0x1d8);
            return 0;
        }
        iVar4 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar4 == 0) {
            return 0xffffffea;
        }
        pcVar6 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar1 + 0x18),pcVar6,"lpass_cdc_wsa_macro_soft_clip_enable_get");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_soft_clip_enable_put @ 0x080180f4 (size 216) =====

ulong sym.lpass_cdc_wsa_macro_soft_clip_enable_put(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t uVar2;
    code *pcVar3;
    int iVar4;
    int64_t iVar5;
    char *pcVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x80);
    uVar2 = *(*(arg1 + 0x78) + 0x18);
    iVar5 = lpass_cdc_get_device_ptr(*(iVar1 + 0x18),2);
    if (iVar5 == 0) {
        iVar4 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar4 == 0) {
            return 0xffffffea;
        }
        pcVar6 = "%s: null device for macro!\n";
    }
    else {
        iVar5 = *(iVar5 + 0x98);
        if ((iVar5 != 0) && (*(iVar5 + 0x108) != 0)) {
            if (1 < uVar2) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x5512,0x80181cc);
                (*pcVar3)();
            }
            *(iVar5 + uVar2 * 4 + 0x1d8) = *(arg2 + 0x48);
            return 0;
        }
        iVar4 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar4 == 0) {
            return 0xffffffea;
        }
        pcVar6 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar1 + 0x18),pcVar6,"lpass_cdc_wsa_macro_soft_clip_enable_put");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_set_digital_volume @ 0x080181cc (size 380) =====

uint sym.lpass_cdc_wsa_macro_set_digital_volume(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    char cVar3;
    uint uVar4;
    uint32_t uVar5;
    int iVar6;
    int iVar7;
    int64_t iVar8;
    ulong uVar9;
    char *pcVar10;
    ulong *in_x18;
    ulong *puVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x78);
    iVar2 = *(arg1 + 0x80);
    iVar8 = lpass_cdc_get_device_ptr(*(iVar2 + 0x18),2);
    if (iVar8 == 0) {
        iVar7 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar7 == 0) {
            return 0xffffffea;
        }
        pcVar10 = "%s: null device for macro!\n";
    }
    else {
        puVar11 = *(iVar8 + 0x98);
        if ((puVar11 != NULL) && (puVar11[0x21] != 0)) {
            uVar4 = snd_soc_put_volsw(arg1,arg2);
            iVar7 = *(iVar1 + 0xc);
            if (iVar7 == 0x2494) {
                iVar6 = snd_soc_component_read(puVar11[0x21],0x2494);
                iVar7 = *(puVar11 + 0x45);
                *(puVar11 + 0x21d) = iVar6;
                uVar5 = iVar6 - iVar7;
                cVar3 = *(puVar11 + 5);
joined_r0x080182e4:
                if (cVar3 == '\0') {
                    return uVar4;
                }
                if (iVar7 != 0) {
                    snd_soc_component_update_bits(puVar11[0x21],*(iVar1 + 0xc),0xff,uVar5 & 0xff);
                    return uVar4;
                }
                return uVar4;
            }
            if (iVar7 == 0x2414) {
                uVar5 = snd_soc_component_read(puVar11[0x21],0x2414);
                iVar7 = *(puVar11 + 0x45);
                *(puVar11 + 0x21c) = uVar5;
                uVar5 = (uVar5 & 0xff) - iVar7;
                cVar3 = *(puVar11 + 5);
                goto joined_r0x080182e4;
            }
            iVar7 = ___ratelimit(obj.lpass_cdc_wsa_macro_set_digital_volume._rs.222,
                                 "lpass_cdc_wsa_macro_set_digital_volume");
            if (iVar7 == 0) {
                return 0xffffffea;
            }
            uVar9 = *puVar11;
            pcVar10 = "%s: Incorrect RX Path selected\n";
            goto code_r0x08018338;
        }
        iVar7 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar7 == 0) {
            return 0xffffffea;
        }
        pcVar10 = "%s: priv is null for macro!\n";
    }
    uVar9 = *(iVar2 + 0x18);
code_r0x08018338:
    _dev_err(uVar9,pcVar10,"lpass_cdc_wsa_macro_set_digital_volume");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_get_rx_mute_status @ 0x08018348 (size 216) =====

ulong sym.lpass_cdc_wsa_macro_get_rx_mute_status(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t uVar2;
    code *pcVar3;
    int iVar4;
    int64_t iVar5;
    char *pcVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x80);
    uVar2 = *(*(arg1 + 0x78) + 0x18);
    iVar5 = lpass_cdc_get_device_ptr(*(iVar1 + 0x18),2);
    if (iVar5 == 0) {
        iVar4 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar4 == 0) {
            return 0xffffffea;
        }
        pcVar6 = "%s: null device for macro!\n";
    }
    else {
        iVar5 = *(iVar5 + 0x98);
        if ((iVar5 != 0) && (*(iVar5 + 0x108) != 0)) {
            if (8 < uVar2) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x5512,0x8018420);
                (*pcVar3)();
            }
            *(arg2 + 0x48) = *(iVar5 + uVar2 * 4 + 0x1f8);
            return 0;
        }
        iVar4 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar4 == 0) {
            return 0xffffffea;
        }
        pcVar6 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar1 + 0x18),pcVar6,"lpass_cdc_wsa_macro_get_rx_mute_status");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_set_rx_mute_status @ 0x08018420 (size 440) =====

uint sym.lpass_cdc_wsa_macro_set_rx_mute_status(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    code *pcVar2;
    int iVar3;
    int iVar4;
    int64_t iVar5;
    ulong uVar6;
    char *pcVar7;
    ulong *in_x18;
    uint uVar8;
    int64_t *piVar9;
    int64_t iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar10 = *(arg1 + 0x80);
    iVar3 = *(arg2 + 0x48);
    uVar1 = *(*(arg1 + 0x78) + 0x18);
    iVar5 = lpass_cdc_get_device_ptr(*(iVar10 + 0x18),2);
    if (iVar5 == 0) {
        iVar3 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar3 == 0) {
            return 0xffffffea;
        }
        pcVar7 = "%s: null device for macro!\n";
    }
    else {
        piVar9 = *(iVar5 + 0x98);
        if ((piVar9 != NULL) && (piVar9[0x21] != 0)) {
            __pm_runtime_resume(*piVar9,4);
            if (uVar1 < 4) {
    //switch table (4 cases) at 0x8000dfe
                switch(*(uVar1 + 0x8000dfe) * 4 + 0x8018494) {
                case 0x8018498:
                    uVar6 = 0x2400;
                    break;
                case 0x8018510:
                    uVar6 = 0x2480;
                    break;
                case 0x8018524:
                    uVar6 = 0x2418;
                    break;
                case 0x8018538:
                    uVar6 = 0x2498;
                }
                snd_soc_component_update_bits(iVar10,uVar6,0x10,iVar3 << 4);
                uVar8 = 0;
            }
            else {
                iVar4 = ___ratelimit(obj.lpass_cdc_wsa_macro_set_rx_mute_status._rs,
                                     "lpass_cdc_wsa_macro_set_rx_mute_status");
                if (iVar4 != 0) {
                    _printk(0x8001999,"lpass_cdc_wsa_macro_set_rx_mute_status",uVar1);
                }
                uVar8 = 0xffffffea;
            }
            iVar10 = *piVar9;
            uVar6 = ktime_get_mono_fast_ns();
            *(iVar10 + 0x218) = uVar6;
            __pm_runtime_suspend(*piVar9,0xd);
            if (8 < uVar1) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x5512,0x80185d8);
                (*pcVar2)();
            }
            *(piVar9 + uVar1 * 4 + 0x1f8) = iVar3;
            return uVar8;
        }
        iVar3 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar3 == 0) {
            return 0xffffffea;
        }
        pcVar7 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar10 + 0x18),pcVar7,"lpass_cdc_wsa_macro_set_rx_mute_status");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_get_compander @ 0x080185d8 (size 216) =====

ulong sym.lpass_cdc_wsa_macro_get_compander(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t uVar2;
    code *pcVar3;
    int iVar4;
    int64_t iVar5;
    char *pcVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x80);
    uVar2 = *(*(arg1 + 0x78) + 0x18);
    iVar5 = lpass_cdc_get_device_ptr(*(iVar1 + 0x18),2);
    if (iVar5 == 0) {
        iVar4 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar4 == 0) {
            return 0xffffffea;
        }
        pcVar6 = "%s: null device for macro!\n";
    }
    else {
        iVar5 = *(iVar5 + 0x98);
        if ((iVar5 != 0) && (*(iVar5 + 0x108) != 0)) {
            if (1 < uVar2) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x5512,0x80186b0);
                (*pcVar3)();
            }
            *(arg2 + 0x48) = *(iVar5 + uVar2 * 4 + 8);
            return 0;
        }
        iVar4 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar4 == 0) {
            return 0xffffffea;
        }
        pcVar6 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar1 + 0x18),pcVar6,"lpass_cdc_wsa_macro_get_compander");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_set_compander @ 0x080186b0 (size 212) =====

ulong sym.lpass_cdc_wsa_macro_set_compander(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint uVar2;
    uint32_t uVar3;
    code *pcVar4;
    int iVar5;
    int64_t iVar6;
    char *pcVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x80);
    uVar2 = *(arg2 + 0x48);
    uVar3 = *(*(arg1 + 0x78) + 0x18);
    iVar6 = lpass_cdc_get_device_ptr(*(iVar1 + 0x18),2);
    if (iVar6 == 0) {
        iVar5 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar5 == 0) {
            return 0xffffffea;
        }
        pcVar7 = "%s: null device for macro!\n";
    }
    else {
        iVar6 = *(iVar6 + 0x98);
        if ((iVar6 != 0) && (*(iVar6 + 0x108) != 0)) {
            if (1 < uVar3) {
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x5512,0x8018784);
                (*pcVar4)();
            }
            *(iVar6 + uVar3 * 4 + 8) = uVar2;
            return 0;
        }
        iVar5 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar5 == 0) {
            return 0xffffffea;
        }
        pcVar7 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar1 + 0x18),pcVar7,"lpass_cdc_wsa_macro_set_compander");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_get_ec_hq @ 0x08018784 (size 216) =====

ulong sym.lpass_cdc_wsa_macro_get_ec_hq(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t uVar2;
    code *pcVar3;
    int iVar4;
    int64_t iVar5;
    char *pcVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x80);
    uVar2 = *(*(arg1 + 0x78) + 0x18);
    iVar5 = lpass_cdc_get_device_ptr(*(iVar1 + 0x18),2);
    if (iVar5 == 0) {
        iVar4 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar4 == 0) {
            return 0xffffffea;
        }
        pcVar6 = "%s: null device for macro!\n";
    }
    else {
        iVar5 = *(iVar5 + 0x98);
        if ((iVar5 != 0) && (*(iVar5 + 0x108) != 0)) {
            if (1 < uVar2) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x5512,0x801885c);
                (*pcVar3)();
            }
            *(arg2 + 0x48) = *(iVar5 + uVar2 * 4 + 0x18);
            return 0;
        }
        iVar4 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar4 == 0) {
            return 0xffffffea;
        }
        pcVar6 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar1 + 0x18),pcVar6,"lpass_cdc_wsa_macro_get_ec_hq");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_set_ec_hq @ 0x0801885c (size 212) =====

ulong sym.lpass_cdc_wsa_macro_set_ec_hq(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint uVar2;
    uint32_t uVar3;
    code *pcVar4;
    int iVar5;
    int64_t iVar6;
    char *pcVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x80);
    uVar2 = *(arg2 + 0x48);
    uVar3 = *(*(arg1 + 0x78) + 0x18);
    iVar6 = lpass_cdc_get_device_ptr(*(iVar1 + 0x18),2);
    if (iVar6 == 0) {
        iVar5 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar5 == 0) {
            return 0xffffffea;
        }
        pcVar7 = "%s: null device for macro!\n";
    }
    else {
        iVar6 = *(iVar6 + 0x98);
        if ((iVar6 != 0) && (*(iVar6 + 0x108) != 0)) {
            if (1 < uVar3) {
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x5512,0x8018930);
                (*pcVar4)();
            }
            *(iVar6 + uVar3 * 4 + 0x18) = uVar2;
            return 0;
        }
        iVar5 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar5 == 0) {
            return 0xffffffea;
        }
        pcVar7 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar1 + 0x18),pcVar7,"lpass_cdc_wsa_macro_set_ec_hq");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_pbr_enable_get @ 0x08018930 (size 188) =====

ulong sym.lpass_cdc_wsa_macro_pbr_enable_get(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    char *pcVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0x80);
    iVar2 = lpass_cdc_get_device_ptr(*(iVar4 + 0x18),2);
    if (iVar2 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: null device for macro!\n";
    }
    else {
        iVar2 = *(iVar2 + 0x98);
        if ((iVar2 != 0) && (*(iVar2 + 0x108) != 0)) {
            *(arg2 + 0x48) = *(iVar2 + 0x260);
            return 0;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar4 + 0x18),pcVar3,"lpass_cdc_wsa_macro_pbr_enable_get");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_pbr_enable_put @ 0x080189ec (size 196) =====

ulong sym.lpass_cdc_wsa_macro_pbr_enable_put(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    char *pcVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0x80);
    iVar2 = lpass_cdc_get_device_ptr(*(iVar4 + 0x18),2);
    if (iVar2 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: null device for macro!\n";
    }
    else {
        iVar2 = *(iVar2 + 0x98);
        if ((iVar2 != 0) && (*(iVar2 + 0x108) != 0)) {
            *(iVar2 + 0x260) = *(arg2 + 0x48) != 0;
            return 0;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar1 == 0) {
            return 0xffffffea;
        }
        pcVar3 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar4 + 0x18),pcVar3,"lpass_cdc_wsa_macro_pbr_enable_put");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_get_channel_map @ 0x08018ab0 (size 712) =====

ulong sym.lpass_cdc_wsa_macro_get_channel_map(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    code *pcVar2;
    bool bVar3;
    bool bVar4;
    int iVar5;
    int64_t iVar6;
    ulong uVar7;
    uint64_t uVar8;
    char *pcVar9;
    uint32_t *in_x4;
    uint32_t uVar10;
    int64_t iVar11;
    uint64_t uVar12;
    uint32_t uVar13;
    uint uVar14;
    uint64_t uVar15;
    uint32_t uVar16;
    ulong *in_x18;
    int64_t iVar17;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar17 = *(arg1 + 0x58);
    iVar6 = lpass_cdc_get_device_ptr(*(iVar17 + 0x18),2);
    if (iVar6 == 0) {
        iVar5 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar5 == 0) {
            return 0xffffffea;
        }
        pcVar9 = "%s: null device for macro!\n";
    }
    else {
        iVar11 = *(iVar6 + 0x98);
        if ((iVar11 != 0) && (*(iVar11 + 0x108) != 0)) {
            uVar10 = *(arg1 + 8) - 1;
            if (4 < uVar10) {
                uVar7 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_channel_map._rs,"lpass_cdc_wsa_macro_get_channel_map")
                ;
                if (uVar7 != 0) {
                    _dev_err(iVar6,"%s: Invalid AIF\n","lpass_cdc_wsa_macro_get_channel_map");
                    return 0;
                }
                return uVar7;
            }
    //switch table (4 cases) at 0x8000e02
            switch(*(uVar10 + 0x8000e02) * 4 + 0x8018b34) {
            case 0x8018b38:
                uVar12 = *(iVar11 + *(arg1 + 8) * 8 + 0x118);
                uVar8 = (uVar12 & 0xaa) >> 1 | (uVar12 & 0x155) << 1;
                uVar1 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
                uVar15 = (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar8 = 9;
                if ((uVar12 & 0x1ff) != 0) {
                    uVar8 = LZCOUNT((uVar15 >> 8 | ((uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | uVar15 & 0xff00ff00ff00ff) << 8)
                                    << 0x30);
                }
                if (uVar8 < 9) {
                    uVar14 = 1;
                    uVar16 = 1 << (uVar8 & 0x1f);
                    uVar10 = uVar16 & 0xffff;
                    if (uVar8 < 8) {
                        uVar15 = -2L << (uVar8 & 0x3f) & uVar12 & 0x1ff;
                        uVar8 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
                        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
                        uVar1 = (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar14 = 1;
                        uVar13 = LZCOUNT((uVar1 >> 8 |
                                         ((uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | uVar1 & 0xff00ff00ff00ff) << 8) << 0x30);
                        if (uVar15 != 0 && uVar13 < 9) {
                            uVar14 = 2;
                            uVar10 = (1 << (uVar13 & 0x1f) | uVar16) & 0xffff;
                        }
                    }
                }
                else {
                    uVar10 = 0;
                    uVar14 = 0;
                }
                if ((uVar10 & 0xc) != 0) {
                    uVar10 = uVar10 >> 2;
                }
                *in_x4 = uVar10;
                *arg4 = uVar14;
                return 0;
            case 0x8018c44:
                uVar8 = *(iVar11 + 0x130);
                iVar6 = 2;
                if ((uVar8 & 3) != 0) {
                    iVar6 = LZCOUNT(((uVar8 & 3) >> 1 | (uVar8 & 1) << 1) << 0x3e);
                }
                if (iVar6 < 2) {
                    uVar14 = 1;
                    uVar10 = 1 << (iVar6 & 0x1f) & 0xffff;
                    if (((iVar6 == 0) && (uVar14 = 1, (uVar8 >> 1 & 1) != 0)) &&
                       (uVar16 = LZCOUNT(((uVar8 & 2) >> 1) << 0x3e), uVar16 < 2)) {
                        uVar10 = 1 << (uVar16 & 0x1f) & 0xffffU | 1;
                        uVar14 = 2;
                    }
                }
                else {
                    uVar10 = 0;
                    uVar14 = 0;
                }
                if ((uVar10 & 0xc) != 0) {
                    uVar10 = uVar10 >> 2;
                }
                *arg3 = uVar10;
                *arg2 = uVar14;
                return 0;
            case 0x8018cac:
                uVar8 = snd_soc_component_read(iVar17,0x2110);
                bVar3 = (uVar8 & 0x18) != 0;
                uVar10 = 1;
                if (bVar3) {
                    uVar10 = 2;
                }
                bVar4 = (uVar8 & 3) != 0;
                uVar13 = bVar3;
                uVar16 = uVar13;
                if (bVar4) {
                    uVar16 = uVar10;
                }
                *arg3 = bVar4 | uVar13 << 1;
                *arg2 = uVar16;
                return 0;
            }
            *arg3 = *(iVar11 + 0x140);
            if (5 < *(arg1 + 8)) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x5512,0x8018d7c);
                (*pcVar2)();
            }
            *arg2 = *(iVar11 + *(arg1 + 8) * 8 + 0x148);
            return 0;
        }
        iVar5 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar5 == 0) {
            return 0xffffffea;
        }
        pcVar9 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar17 + 0x18),pcVar9,"lpass_cdc_wsa_macro_get_channel_map");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_mute_stream @ 0x08018d7c (size 1112) =====

ulong sym.lpass_cdc_wsa_macro_mute_stream(int64_t arg1)

{
    int iVar1;
    char cVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int in_w1;
    char *pcVar7;
    ulong *in_x18;
    int64_t iVar8;
    ulong uVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (in_w1 != 0) {
        return 0;
    }
    iVar8 = *(arg1 + 0x58);
    iVar5 = lpass_cdc_get_device_ptr(*(iVar8 + 0x18),2);
    if (iVar5 == 0) {
        iVar4 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar4 == 0) {
            return 0xffffffea;
        }
        pcVar7 = "%s: null device for macro!\n";
    }
    else {
        if ((*(iVar5 + 0x98) != 0) && (*(*(iVar5 + 0x98) + 0x108) != 0)) {
            if (*(arg1 + 8) - 1U < 2) {
                cVar2 = snd_soc_component_read(iVar8,0x2100);
                uVar3 = snd_soc_component_read(iVar8,0x2104);
                uVar6 = snd_soc_component_read(iVar8,0x244c);
                if ((uVar6 & 1) != 0) {
                    if (cVar2 != '\0' || (uVar3 & 0x38) != 0) {
                        snd_soc_component_update_bits(iVar8,0x2400,0x20,0x20);
                    }
                    if ((uVar3 & 7) != 0) {
                        snd_soc_component_update_bits(iVar8,0x2400,0x20,0x20);
                        snd_soc_component_update_bits(iVar8,0x2418,0x20,0x20);
                    }
                }
                cVar2 = snd_soc_component_read(iVar8,0x2108);
                uVar3 = snd_soc_component_read(iVar8,0x210c);
                uVar6 = snd_soc_component_read(iVar8,0x24cc);
                if ((uVar6 & 1) != 0) {
                    if (cVar2 != '\0' || (uVar3 & 0x38) != 0) {
                        snd_soc_component_update_bits(iVar8,0x2480,0x20,0x20);
                    }
                    if ((uVar3 & 7) != 0) {
                        snd_soc_component_update_bits(iVar8,0x2480,0x20,0x20);
                        snd_soc_component_update_bits(iVar8,0x2498,0x20,0x20);
                    }
                }
                lpass_cdc_wsa_pa_on(iVar5,0);
                if (*(arg1 + 8) - 1U < 2) {
                    uVar9 = *(arg1 + 0x58);
                    snd_soc_component_update_bits(uVar9,0x2400,0x10,0);
                    uVar9 = snd_soc_component_update_bits(uVar9,0x2418,0x10,0);
                    return uVar9;
                }
                iVar5 = lpass_cdc_get_device_ptr(*(iVar8 + 0x18),2);
                if (iVar5 == 0) {
                    uVar9 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
                    if (uVar9 == 0) {
                        return uVar9;
                    }
                    pcVar7 = "%s: null device for macro!\n";
                }
                else {
                    iVar5 = *(iVar5 + 0x98);
                    if ((iVar5 != 0) && (*(iVar5 + 0x108) != 0)) {
                        usleep_range_state(5000,0x157c,2);
                        iVar1 = *(iVar5 + 500);
                        iVar4 = 4;
                        if (iVar1 != 48000) {
                            iVar4 = (iVar1 == 24000) << 1;
                        }
                        if ((*(iVar5 + 0x130) & 1) != 0) {
                            snd_soc_component_update_bits((iVar1 == 24000) << 1,iVar8,0x2244,0x20,0x20);
                            snd_soc_component_update_bits(iVar8,0x2264,0x20,0x20);
                            snd_soc_component_update_bits(iVar8,0x2244,0xf,iVar4);
                            snd_soc_component_update_bits(iVar8,0x2264,0xf,iVar4);
                            snd_soc_component_update_bits(iVar8,0x2244,0x10,0x10);
                            snd_soc_component_update_bits(iVar8,0x2264,0x10,0x10);
                            snd_soc_component_update_bits(iVar8,0x2244,0x20,0);
                            snd_soc_component_update_bits(iVar8,0x2264,0x20,0);
                        }
                        if ((*(iVar5 + 0x130) >> 1 & 1) == 0) {
                            return 0;
                        }
                        snd_soc_component_update_bits(iVar8,0x2284,0x20,0x20);
                        snd_soc_component_update_bits(iVar8,0x22a4,0x20,0x20);
                        snd_soc_component_update_bits(iVar8,0x2284,0xf,iVar4);
                        snd_soc_component_update_bits(iVar8,0x22a4,0xf,iVar4);
                        snd_soc_component_update_bits(iVar8,0x2284,0x10,0x10);
                        snd_soc_component_update_bits(iVar8,0x22a4,0x10,0x10);
                        snd_soc_component_update_bits(iVar8,0x2284,0x20,0);
                        snd_soc_component_update_bits(iVar8,0x22a4,0x20,0);
                        return 0;
                    }
                    uVar9 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
                    if (uVar9 == 0) {
                        return uVar9;
                    }
                    pcVar7 = "%s: priv is null for macro!\n";
                }
                _dev_err(*(iVar8 + 0x18),pcVar7,"lpass_cdc_wsa_macro_enable_vi_decimator");
            }
            return 0;
        }
        iVar4 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar4 == 0) {
            return 0xffffffea;
        }
        pcVar7 = "%s: priv is null for macro!\n";
    }
    _dev_err(*(iVar8 + 0x18),pcVar7,"lpass_cdc_wsa_macro_mute_stream");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_hw_params @ 0x080191d4 (size 2032) =====

ulong sym.lpass_cdc_wsa_macro_hw_params(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    code *pcVar4;
    uint32_t uVar5;
    int iVar6;
    uint32_t uVar7;
    int iVar8;
    uint uVar9;
    int64_t iVar10;
    int64_t iVar11;
    char *pcVar12;
    uint32_t uVar13;
    uint64_t uVar14;
    ushort uVar15;
    ulong *in_x18;
    ulong uVar16;
    int64_t iVar17;
    int64_t iVar18;
    int64_t iVar19;
    int64_t iVar20;
    uint64_t uVar21;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar19 = *(arg3 + 0x58);
    iVar10 = lpass_cdc_get_device_ptr(*(iVar19 + 0x18),2);
    if (iVar10 == 0) {
        iVar8 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
        if (iVar8 == 0) {
            return 0xffffffea;
        }
        pcVar12 = "%s: null device for macro!\n";
code_r0x08019490:
        _dev_err(*(iVar19 + 0x18),pcVar12,"lpass_cdc_wsa_macro_hw_params");
        return 0xffffffea;
    }
    iVar10 = *(iVar10 + 0x98);
    if ((iVar10 == 0) || (*(iVar10 + 0x108) == 0)) {
        iVar8 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
        if (iVar8 == 0) {
            return 0xffffffea;
        }
        pcVar12 = "%s: priv is null for macro!\n";
        goto code_r0x08019490;
    }
    if (*(arg1 + 0x3c) != 1) {
        if (*(arg1 + 0x3c) != 0) {
            return 0;
        }
        iVar8 = *(arg2 + 0x128);
        if (iVar8 == 48000) {
            iVar18 = 0;
code_r0x08019250:
            iVar17 = *(arg3 + 0x58);
            iVar11 = lpass_cdc_get_device_ptr(*(iVar17 + 0x18),2);
            if (iVar11 == 0) {
                iVar6 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
                if (iVar6 != 0) {
                    pcVar12 = "%s: null device for macro!\n";
code_r0x08019958:
                    _dev_err(*(iVar17 + 0x18),pcVar12,"lpass_cdc_wsa_macro_set_mix_interpolator_rate");
                }
            }
            else {
                iVar20 = *(iVar11 + 0x98);
                if ((iVar20 == 0) || (*(iVar20 + 0x108) == 0)) {
                    iVar6 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
                    if (iVar6 != 0) {
                        pcVar12 = "%s: priv is null for macro!\n";
                        goto code_r0x08019958;
                    }
                }
                else {
                    if (6 < *(arg3 + 8)) goto code_r0x080199c0;
                    uVar14 = *(iVar20 + *(arg3 + 8) * 8 + 0x118);
                    uVar21 = (uVar14 & 0xaa) >> 1 | (uVar14 & 0x155) << 1;
                    uVar2 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
                    uVar3 = (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar21 = 9;
                    if ((uVar14 & 0x1ff) != 0) {
                        uVar21 = LZCOUNT((uVar3 >> 8 |
                                         ((uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | uVar3 & 0xff00ff00ff00ff) << 8) << 0x30);
                    }
                    if (uVar21 < 9) {
                        uVar1 = *(iVar18 * 8 + 0x80122ec);
                        do {
                            if (3 < uVar21) {
                                iVar6 = ___ratelimit(obj.lpass_cdc_wsa_macro_set_mix_interpolator_rate._rs,
                                                     "lpass_cdc_wsa_macro_set_mix_interpolator_rate");
                                if (iVar6 != 0) {
                                    _dev_err(iVar11,"%s: Invalid RX port, Dai ID is %d\n",
                                             "lpass_cdc_wsa_macro_set_mix_interpolator_rate",*(arg3 + 8));
                                }
                                break;
                            }
                            uVar13 = uVar21 + 1;
                            uVar5 = snd_soc_component_read(iVar17,0x2104);
                            if ((uVar5 & 7) == uVar13) {
                                snd_soc_component_update_bits(iVar17,0x2418,0xf,uVar1);
                            }
                            uVar5 = snd_soc_component_read(iVar17,0x210c);
                            if ((uVar5 & 7) == uVar13) {
                                snd_soc_component_update_bits(iVar17,0x2498,0xf,uVar1);
                            }
                            if (6 < *(arg3 + 8)) goto code_r0x080199c0;
                            if (7 < uVar21) break;
                            uVar13 = -1L << (uVar21 + 1 & 0x3f) & *(iVar20 + *(arg3 + 8) * 8 + 0x118);
                            uVar21 = (uVar13 & 0xaa) >> 1 | (uVar13 & 0x155) << 1;
                            uVar2 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
                            uVar3 = (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
                            uVar21 = 9;
                            if ((uVar13 & 0x1ff) != 0) {
                                uVar21 = LZCOUNT((uVar3 >> 8 |
                                                 ((uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | uVar3 & 0xff00ff00ff00ff) << 8) <<
                                                 0x30);
                            }
                        } while (uVar21 < 9);
                        if (iVar8 < 24000) {
                            if (iVar8 == 8000) goto code_r0x08019638;
                            if (iVar8 == 16000) goto code_r0x08019630;
                        }
                        else {
                            if (iVar8 == 24000) goto code_r0x080197f4;
                            if (iVar8 == 32000) goto code_r0x08019580;
                        }
                    }
                }
            }
            if (iVar8 == 48000) {
                iVar18 = 4;
            }
            else if (iVar8 < 0x2ee00) {
                if (iVar8 == 0xac44) {
code_r0x080195dc:
                    iVar18 = 8;
                }
                else {
                    if (iVar8 != 96000) goto code_r0x080197f4;
                    iVar18 = 5;
                }
            }
            else {
                if (iVar8 != 0x2ee00) {
                    if (iVar8 == 0x5dc00) goto code_r0x080195e4;
                    goto code_r0x080197f4;
                }
                iVar18 = 6;
            }
code_r0x0801963c:
            iVar17 = *(arg3 + 0x58);
            iVar11 = lpass_cdc_get_device_ptr(*(iVar17 + 0x18),2);
            if (iVar11 == 0) {
                iVar8 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs,"lpass_cdc_wsa_macro_get_data");
                if (iVar8 != 0) {
                    pcVar12 = "%s: null device for macro!\n";
code_r0x0801993c:
                    _dev_err(*(iVar17 + 0x18),pcVar12,"lpass_cdc_wsa_macro_set_prim_interpolator_rate");
                }
            }
            else {
                iVar20 = *(iVar11 + 0x98);
                if ((iVar20 != 0) && (*(iVar20 + 0x108) != 0)) {
                    if (6 < *(arg3 + 8)) goto code_r0x080199c0;
                    uVar14 = *(iVar20 + *(arg3 + 8) * 8 + 0x118);
                    uVar21 = (uVar14 & 0xaa) >> 1 | (uVar14 & 0x155) << 1;
                    uVar2 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
                    uVar3 = (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar21 = 9;
                    if ((uVar14 & 0x1ff) != 0) {
                        uVar21 = LZCOUNT((uVar3 >> 8 |
                                         ((uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | uVar3 & 0xff00ff00ff00ff) << 8) << 0x30);
                    }
                    if (uVar21 < 9) {
                        uVar1 = *(iVar18 * 8 + 0x8012304);
                        do {
                            if (3 < uVar21) {
                                iVar8 = ___ratelimit(obj.lpass_cdc_wsa_macro_set_prim_interpolator_rate._rs,
                                                     "lpass_cdc_wsa_macro_set_prim_interpolator_rate");
                                if (iVar8 != 0) {
                                    _dev_err(iVar11,"%s: Invalid RX port, Dai ID is %d\n",
                                             "lpass_cdc_wsa_macro_set_prim_interpolator_rate",*(arg3 + 8));
                                }
                                goto code_r0x080197f4;
                            }
                            uVar13 = uVar21 + 1;
                            uVar5 = snd_soc_component_read(iVar17,0x2100);
                            uVar7 = snd_soc_component_read(iVar17,0x2104);
                            if ((((uVar5 & 7) == uVar13) || ((uVar5 >> 3 & 7) == uVar13)) ||
                               ((uVar7 >> 3 & 7) == uVar13)) {
                                snd_soc_component_update_bits(iVar17,0x2400,0xf,uVar1);
                            }
                            uVar5 = snd_soc_component_read(iVar17,0x2108);
                            uVar7 = snd_soc_component_read(iVar17,0x210c);
                            if ((((uVar5 & 7) == uVar13) || ((uVar5 >> 3 & 7) == uVar13)) ||
                               ((uVar7 >> 3 & 7) == uVar13)) {
                                snd_soc_component_update_bits(iVar17,0x2480,0xf,uVar1);
                            }
                            if (6 < *(arg3 + 8)) goto code_r0x080199c0;
                            if (7 < uVar21) break;
                            uVar13 = -1L << (uVar21 + 1 & 0x3f) & *(iVar20 + *(arg3 + 8) * 8 + 0x118);
                            uVar21 = (uVar13 & 0xaa) >> 1 | (uVar13 & 0x155) << 1;
                            uVar2 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
                            uVar3 = (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
                            uVar21 = 9;
                            if ((uVar13 & 0x1ff) != 0) {
                                uVar21 = LZCOUNT((uVar3 >> 8 |
                                                 ((uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | uVar3 & 0xff00ff00ff00ff) << 8) <<
                                                 0x30);
                            }
                        } while (uVar21 < 9);
                    }
                    uVar13 = *(arg2 + 0x24);
                    if (uVar13 == 0) {
                        uVar13 = *(arg2 + 0x28);
                        if (uVar13 != 0) {
                            uVar5 = 0x20;
                            goto code_r0x08019834;
                        }
                        uVar5 = 0;
                    }
                    else {
                        uVar5 = 0;
code_r0x08019834:
                        uVar13 = (uVar13 & 0xaaaaaaaa) >> 1 | (uVar13 & 0x55555555) << 1;
                        uVar13 = (uVar13 & 0xcccccccc) >> 2 | (uVar13 & 0x33333333) << 2;
                        uVar13 = (uVar13 & 0xf0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f) << 4;
                        uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
                        uVar5 = LZCOUNT(uVar13 >> 0x10 | uVar13 << 0x10) | uVar5;
                    }
                    iVar8 = snd_pcm_format_width(uVar5);
                    if (iVar8 != 0x20) {
                        if (iVar8 != 0x18) {
                            if (iVar8 != 0x10) {
                                iVar8 = ___ratelimit(obj.lpass_cdc_wsa_macro_hw_params._rs.247,
                                                     "lpass_cdc_wsa_macro_hw_params");
                                if (iVar8 == 0) {
                                    return 0xffffffea;
                                }
                                uVar13 = *(arg2 + 0x24);
                                uVar16 = *(iVar19 + 0x18);
                                if (uVar13 == 0) {
                                    uVar13 = *(arg2 + 0x28);
                                    if (uVar13 == 0) goto code_r0x080194d0;
                                    goto code_r0x08019908;
                                }
                                goto code_r0x0801996c;
                            }
                            uVar13 = *(arg3 + 8);
                            goto joined_r0x08019478;
                        }
                        goto code_r0x08019884;
                    }
                    goto code_r0x0801986c;
                }
                iVar8 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_data._rs.117,"lpass_cdc_wsa_macro_get_data");
                if (iVar8 != 0) {
                    pcVar12 = "%s: priv is null for macro!\n";
                    goto code_r0x0801993c;
                }
            }
        }
        else {
            if (iVar8 < 0xac44) {
                if (iVar8 == 8000) {
code_r0x08019638:
                    iVar18 = 0;
                }
                else if (iVar8 == 16000) {
code_r0x08019630:
                    iVar18 = 1;
                }
                else {
                    if (iVar8 != 32000) goto code_r0x080197f4;
code_r0x08019580:
                    iVar18 = 3;
                }
                goto code_r0x0801963c;
            }
            if (iVar8 < 0x2ee00) {
                if (iVar8 == 0xac44) goto code_r0x080195dc;
                if (iVar8 == 96000) {
                    iVar18 = 1;
                    goto code_r0x08019250;
                }
            }
            else {
                if (iVar8 == 0x5dc00) {
code_r0x080195e4:
                    iVar18 = 7;
                    goto code_r0x0801963c;
                }
                if (iVar8 == 0x2ee00) {
                    iVar18 = 2;
                    goto code_r0x08019250;
                }
            }
        }
code_r0x080197f4:
        iVar8 = ___ratelimit(obj.lpass_cdc_wsa_macro_hw_params._rs,"lpass_cdc_wsa_macro_hw_params");
        if (iVar8 == 0) {
            return 0xffffffea;
        }
        uVar16 = *(iVar19 + 0x18);
        uVar9 = *(arg2 + 0x128);
        pcVar12 = "%s: cannot set sample rate: %u\n";
        goto code_r0x08019998;
    }
    if (*(arg3 + 8) == 3) {
        *(iVar10 + 500) = *(arg2 + 0x128);
    }
    uVar13 = *(arg2 + 0x24);
    if (uVar13 == 0) {
        uVar13 = *(arg2 + 0x28);
        if (uVar13 != 0) {
            uVar5 = 0x20;
            goto code_r0x08019448;
        }
        uVar5 = 0;
    }
    else {
        uVar5 = 0;
code_r0x08019448:
        uVar13 = (uVar13 & 0xaaaaaaaa) >> 1 | (uVar13 & 0x55555555) << 1;
        uVar13 = (uVar13 & 0xcccccccc) >> 2 | (uVar13 & 0x33333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
        uVar5 = LZCOUNT(uVar13 >> 0x10 | uVar13 << 0x10) | uVar5;
    }
    iVar8 = snd_pcm_format_width(uVar5);
    if (iVar8 == 0x20) {
code_r0x0801986c:
        if (5 < *(arg3 + 8)) {
code_r0x080199c0:
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x5512,0x80199c4);
            (*pcVar4)();
        }
        iVar10 = iVar10 + *(arg3 + 8) * 2;
        uVar15 = 0x20;
code_r0x08019898:
        *(iVar10 + 0x178) = uVar15;
        return 0;
    }
    if (iVar8 == 0x18) {
code_r0x08019884:
        if (5 < *(arg3 + 8)) goto code_r0x080199c0;
        iVar10 = iVar10 + *(arg3 + 8) * 2;
        uVar15 = 0x18;
        goto code_r0x08019898;
    }
    if (iVar8 == 0x10) {
        uVar13 = *(arg3 + 8);
joined_r0x08019478:
        if (5 < uVar13) goto code_r0x080199c0;
        iVar10 = iVar10 + uVar13 * 2;
        uVar15 = 0x10;
        goto code_r0x08019898;
    }
    iVar8 = ___ratelimit(obj.lpass_cdc_wsa_macro_hw_params._rs.249,"lpass_cdc_wsa_macro_hw_params");
    if (iVar8 == 0) {
        return 0xffffffea;
    }
    uVar13 = *(arg2 + 0x24);
    uVar16 = *(iVar19 + 0x18);
    if (uVar13 == 0) {
        uVar13 = *(arg2 + 0x28);
        if (uVar13 != 0) {
code_r0x08019908:
            uVar5 = 0x20;
            goto code_r0x08019970;
        }
code_r0x080194d0:
        uVar5 = 0;
    }
    else {
code_r0x0801996c:
        uVar5 = 0;
code_r0x08019970:
        uVar13 = (uVar13 & 0xaaaaaaaa) >> 1 | (uVar13 & 0x55555555) << 1;
        uVar13 = (uVar13 & 0xcccccccc) >> 2 | (uVar13 & 0x33333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
        uVar5 = LZCOUNT(uVar13 >> 0x10 | uVar13 << 0x10) | uVar5;
    }
    uVar9 = snd_pcm_format_width(uVar5);
    pcVar12 = "%s: Invalid format 0x%x\n";
code_r0x08019998:
    _dev_err(uVar16,pcVar12,"lpass_cdc_wsa_macro_hw_params",uVar9);
    return 0xffffffea;
}


// ===== sym.lpass_cdc_wsa_macro_get_max_state @ 0x080199c4 (size 108) =====

ulong sym.lpass_cdc_wsa_macro_get_max_state(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x3a8) == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_max_state._rs,"lpass_cdc_wsa_macro_get_max_state");
        if (iVar1 != 0) {
            _printk(0x8001107,"lpass_cdc_wsa_macro_get_max_state");
        }
        uVar2 = 0xffffffea;
    }
    else {
        uVar2 = 0;
        *arg2 = *(*(arg1 + 0x3a8) + 0x22c);
    }
    return uVar2;
}


// ===== sym.lpass_cdc_wsa_macro_get_cur_state @ 0x08019a30 (size 108) =====

ulong sym.lpass_cdc_wsa_macro_get_cur_state(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x3a8) == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_get_cur_state._rs,"lpass_cdc_wsa_macro_get_cur_state");
        if (iVar1 != 0) {
            _printk(0x8001107,"lpass_cdc_wsa_macro_get_cur_state");
        }
        uVar2 = 0xffffffea;
    }
    else {
        uVar2 = 0;
        *arg2 = *(*(arg1 + 0x3a8) + 0x228);
    }
    return uVar2;
}


// ===== sym.lpass_cdc_wsa_macro_set_cur_state @ 0x08019a9c (size 212) =====

ulong sym.lpass_cdc_wsa_macro_set_cur_state(int64_t arg1,uint32_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *(arg1 + 0x3a8);
    if ((piVar2 == NULL) || (*piVar2 == 0)) {
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_set_cur_state._rs,"lpass_cdc_wsa_macro_set_cur_state");
        if (iVar1 != 0) {
            _printk(0x8001107,"lpass_cdc_wsa_macro_set_cur_state");
        }
    }
    else {
        if (arg2 <= *(piVar2 + 0x22c)) {
            *(piVar2 + 0x45) = arg2;
            queue_work_on(0x20,_pm_runtime_force_resume,piVar2 + 0x46);
            return 0;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_macro_set_cur_state._rs.260,"lpass_cdc_wsa_macro_set_cur_state");
        if (iVar1 != 0) {
            _dev_err(*piVar2,"%s: incorrect requested state:%d\n","lpass_cdc_wsa_macro_set_cur_state",arg2);
        }
    }
    return 0xffffffea;
}


// ===== sym.__cfi_check_fail @ 0x08019b70 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08019bb4

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
    //switch table (4 cases) at 0x8000e07
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8019bc8);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08019bd4 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register
              (reloc.lpass_cdc_wsa_macro_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08019c08 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.lpass_cdc_wsa_macro_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}

