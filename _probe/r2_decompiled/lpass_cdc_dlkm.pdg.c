// decompiled from lpass_cdc_dlkm by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08006000 (size 1728) =====

//WARNING: Switch with 1 destination removed at 0x08009ae8

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x5c594ca44e01319) {
        if (arg1 < -0x3557318fb8d07b71) {
            if (arg1 < -0x4c0d047d3924506d) {
                if (arg1 < -0x57be845bca9148ef) {
                    if (arg1 == -0x7c37a381f7ecc450) {
                        pcVar2 = sym.lpass_cdc_clk_rsc_request_clock.cfi_jt;
                    }
                    else {
                        if (arg1 != -0x6edb47309dd43d2a) goto code_r0x08009aa8;
                        pcVar2 = sym.lpass_cdc_register_macro.cfi_jt;
                    }
                }
                else {
                    if (arg1 == -0x57be845bca9148ef) {
                        pcVar2 = sym.lpass_cdc_get_version.cfi_jt;
                        goto code_r0x08006688;
                    }
                    if (arg1 != -0x550b9e52359ac614) goto code_r0x08009aa8;
                    pcVar2 = sym.lpass_cdc_add_child_devices.9324bdfcbd927cfdef84d736718185f6.cfi_jt;
                }
            }
            else if (arg1 < -0x481625551a0c9859) {
                if (arg1 == -0x4c0d047d3924506d) {
                    pcVar2 = sym.lpass_cdc_rsc_clk_reset.cfi_jt;
                }
                else {
                    if (arg1 != -0x48ef54602b463a27) goto code_r0x08009aa8;
                    pcVar2 = sym.lpass_cdc_ssr_disable.9324bdfcbd927cfdef84d736718185f6.cfi_jt;
                }
            }
            else if (arg1 == -0x481625551a0c9859) {
                pcVar2 = sym.lpass_cdc_register_res_clk.cfi_jt;
            }
            else if (arg1 == -0x3e3bcb3ebc51f4f6) {
                pcVar2 = sym.lpass_cdc_load_compander_coeff.cfi_jt;
            }
            else {
                if (arg1 != -0x3af46f3c646754ad) goto code_r0x08009aa8;
                pcVar2 = sym.__typeid__ZTSFiP6devicetE_global_addr;
            }
        }
        else if (arg1 < -0x137864a1a184e8a7) {
            if (arg1 < -0x2d1ef4d8549a89e5) {
                if (arg1 == -0x3557318fb8d07b71) {
                    if ((pcVar1 + -0x80067f8 >> 3 | pcVar1 << 0x3d) < 4) {
                        return;
                    }
                    goto code_r0x08009aa8;
                }
                if (arg1 != -0x3236d35ec86b4f45) goto code_r0x08009aa8;
                pcVar2 = sym.lpass_cdc_clk_rsc_fs_gen_request.cfi_jt;
code_r0x08006688:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 3) {
                    return;
                }
                goto code_r0x08009aa8;
            }
            if (arg1 != -0x2d1ef4d8549a89e5) {
                if (arg1 != -0x24709a60bea86fe2) goto code_r0x08009aa8;
                pcVar2 = sym.lpass_cdc_is_va_macro_registered.cfi_jt;
                goto code_r0x080065c4;
            }
            pcVar2 = sym.lpass_cdc_ssr_enable.9324bdfcbd927cfdef84d736718185f6.cfi_jt;
        }
        else if (arg1 < -0x12be6fcba435f658) {
            if (arg1 != -0x137864a1a184e8a7) {
                if (arg1 != -0x133b7e8d0b7609ce) goto code_r0x08009aa8;
                pcVar2 = sym.__typeid__ZTSFiP17snd_soc_componentbE_global_addr;
                goto code_r0x080065c4;
            }
            pcVar2 = sym.lpass_cdc_update_wcd_event.9324bdfcbd927cfdef84d736718185f6.cfi_jt;
        }
        else {
            if (arg1 == -0x12be6fcba435f658) {
                pcVar2 = sym.lpass_cdc_unregister_macro.cfi_jt;
code_r0x080065c4:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x08009aa8;
            }
            if (arg1 == -0xf2d15659b6de7a9) {
                pcVar2 = sym.__typeid__ZTSFiP17snd_soc_componentE_global_addr;
            }
            else {
                if (arg1 != 0x2b3a43e29242445) goto code_r0x08009aa8;
                pcVar2 = sym.init_module.cfi_jt;
            }
        }
    }
    else if (arg1 < 0x351f4ef19ff41e78) {
        if (arg1 < 0xf15b3680a0d7228) {
            if (arg1 < 0x6be91529ddea3c2) {
                if (arg1 == 0x5c594ca44e01319) {
                    pcVar2 = sym.lpass_cdc_dmic_clk_enable.cfi_jt;
                }
                else {
                    if (arg1 != 0x606f3ad30ac3619) goto code_r0x08009aa8;
                    pcVar2 = sym.lpass_cdc_update_compander_setting.cfi_jt;
                }
            }
            else {
                if (arg1 == 0x6be91529ddea3c2) {
                    pcVar2 = sym.lpass_cdc_is_writeable_register.d78f4c0e5331e61fce8fb3234b764113.cfi_jt;
                    goto code_r0x08006688;
                }
                if (arg1 != 0xe19e77a88b428b0) goto code_r0x08009aa8;
                pcVar2 = sym.lpass_cdc_set_port_map.cfi_jt;
            }
        }
        else if (arg1 < 0x276b3a09c1053cc9) {
            if (arg1 == 0xf15b3680a0d7228) {
                pcVar2 = sym.regmap_bus_gather_write.12c9b949d000a5e723071e3448d75e59.cfi_jt;
            }
            else {
                if (arg1 != 0x11f64198983f81e2) goto code_r0x08009aa8;
                pcVar2 = sym.lpass_cdc_get_rsc_clk_device_ptr.cfi_jt;
            }
        }
        else if (arg1 == 0x276b3a09c1053cc9) {
            pcVar2 = sym.__typeid__ZTSFiP14lpass_cdc_privtthE_global_addr;
        }
        else if (arg1 == 0x27d02c3d9b8cb996) {
            pcVar2 = sym.lpass_cdc_get_device_ptr.cfi_jt;
        }
        else {
            if (arg1 != 0x297acb8b67047b9e) goto code_r0x08009aa8;
            pcVar2 = sym.__typeid__ZTSFiP17snd_soc_componentjE_global_addr;
        }
    }
    else if (arg1 < 0x516c7c120760246b) {
        if (arg1 < 0x3f37d02e2e91c6d1) {
            if (arg1 == 0x351f4ef19ff41e78) {
                pcVar2 = sym.regmap_bus_read.12c9b949d000a5e723071e3448d75e59.cfi_jt;
            }
            else {
                if (arg1 != 0x3b795baa068bc3a6) goto code_r0x08009aa8;
                pcVar2 = sym.lpass_cdc_register_notifier.9324bdfcbd927cfdef84d736718185f6.cfi_jt;
            }
        }
        else if (arg1 == 0x3f37d02e2e91c6d1) {
            pcVar2 = sym.lpass_cdc_version_read.9324bdfcbd927cfdef84d736718185f6.cfi_jt;
        }
        else {
            if (arg1 != 0x4bdf73727f5fe9ab) goto code_r0x08009aa8;
            pcVar2 = sym.regmap_bus_write.12c9b949d000a5e723071e3448d75e59.cfi_jt;
        }
    }
    else if (arg1 < 0x5b83a3fd302a5421) {
        if (arg1 == 0x516c7c120760246b) {
            pcVar2 = sym.lpass_cdc_info_create_codec_entry.cfi_jt;
        }
        else {
            if (arg1 != 0x59be41b8a2279880) goto code_r0x08009aa8;
            pcVar2 = sym.__typeid__ZTSFiP14lpass_cdc_privttPhE_global_addr;
        }
    }
    else if (arg1 == 0x5b83a3fd302a5421) {
        pcVar2 = sym.lpass_cdc_unregister_res_clk.cfi_jt;
    }
    else if (arg1 == 0x7e04a0fb7ad8bcd5) {
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    else {
        if (arg1 != 0x7e6c99e1529760f9) goto code_r0x08009aa8;
        pcVar2 = sym.lpass_cdc_soc_codec_remove.9324bdfcbd927cfdef84d736718185f6.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08009aa8:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8009afc);
    (*pcVar1)();
}


// ===== sym.lpass_cdc_add_child_devices.9324bdfcbd927cfdef84d736718185f6.cfi_jt @ 0x080066c8 (size 8) =====

uint64_t sym.lpass_cdc_add_child_devices.9324bdfcbd927cfdef84d736718185f6.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    uint16_t uVar2;
    int64_t *piVar3;
    code *pcVar4;
    int64_t iVar5;
    ulong *puVar6;
    int64_t iVar7;
    uint64_t uVar8;
    uint32_t *puVar9;
    char *pcVar10;
    int64_t iVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
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
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    piVar3 = param_1 + -0x330;
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
    if (piVar3 == NULL) {
        uVar8 = _printk(0x8002b5e,"lpass_cdc_add_child_devices");
    }
    else {
        iVar5 = *piVar3;
        if ((iVar5 == 0) || (*(iVar5 + 0x2f0) == 0)) {
            pcVar10 = "%s: DT node for lpass_cdc does not exist\n";
code_r0x08009798:
            uVar8 = _dev_err(iVar5,pcVar10,"lpass_cdc_add_child_devices");
        }
        else {
            *(param_1 + 0xa8) = 0;
            puVar6 = of_get_next_available_child(*(iVar5 + 0x2f0),0);
            uVar8 = 0;
            if (puVar6 != NULL) {
                do {
                    iVar5 = of_find_property(puVar6,"qcom,split-codec",0);
                    strlcpy(&uStack_a8,*puVar6,0x4f);
                    iVar7 = platform_device_alloc(&uStack_a8,0xffffffff);
                    if (iVar7 == 0) {
                        iVar5 = *piVar3;
                        pcVar10 = "%s: pdev memory alloc failed\n";
                        goto code_r0x08009798;
                    }
                    iVar11 = *piVar3;
                    *(iVar7 + 0x300) = puVar6;
                    *(iVar7 + 0x70) = iVar11;
                    *(*piVar3 + 0x90) = param_1 + 0xb0;
                    if (iVar5 != 0) {
                        *(param_1 + 200) = iVar7 + 0x10;
                    }
                    uVar8 = platform_device_add(iVar7);
                    if (uVar8 != 0) {
                        _dev_err(iVar7 + 0x10,"%s: Cannot add platform device\n","lpass_cdc_add_child_devices");
                        uVar8 = platform_device_put(iVar7);
                        if ((((*(param_1 + 0xa8) != 0) &&
                             (uVar8 = platform_device_put(*(param_1 + 0x78)), 1 < *(param_1 + 0xa8))) &&
                            (uVar8 = platform_device_put(*(param_1 + 0x80)), 2 < *(param_1 + 0xa8))) &&
                           (((uVar8 = platform_device_put(*(param_1 + 0x88)), 3 < *(param_1 + 0xa8) &&
                             (uVar8 = platform_device_put(*(param_1 + 0x90)), 4 < *(param_1 + 0xa8))) &&
                            ((uVar8 = platform_device_put(*(param_1 + 0x98)), 5 < *(param_1 + 0xa8) &&
                             (uVar8 = platform_device_put(*(param_1 + 0xa0)), 6 < *(param_1 + 0xa8))))))) {
    //WARNING: Does not return
                            pcVar4 = SoftwareBreakpoint(0x5512,0x80098a8);
                            (*pcVar4)();
                        }
                        goto code_r0x080097bc;
                    }
                    uVar2 = *(param_1 + 0xa8);
                    if (5 < uVar2) goto code_r0x080097bc;
                    iVar5 = *piVar3;
                    *(param_1 + 0xa8) = uVar2 + 1;
                    *(param_1 + 0x78 + uVar2 * 8) = iVar7;
                    puVar6 = of_get_next_available_child(*(iVar5 + 0x2f0),puVar6);
                } while (puVar6 != NULL);
                uVar8 = 0;
            }
        }
    }
code_r0x080097bc:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_58) {
        puVar9 = __stack_chk_fail();
        *extraout_x18 = sym.readl;
        log_read_mmio(0x20,puVar9,0x80098b0);
        uVar1 = *puVar9;
        DataMemoryBarrier(0,1);
        log_post_read_mmio(uVar1,0x20,puVar9,0x80098f4);
        return uVar1;
    }
    return uVar8;
}


// ===== sym.lpass_cdc_load_compander_coeff.cfi_jt @ 0x080066d0 (size 8) =====

ulong sym.lpass_cdc_load_compander_coeff.cfi_jt
                (ulong param_1,ushort param_2,ushort param_3,int64_t param_4,uint16_t param_5)

{
    ulong *in_x18;
    uint64_t uVar1;
    uchar *puVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_5 != 0) {
        uVar1 = param_5;
        puVar2 = param_4 + 1;
        do {
            snd_soc_component_write(param_1,param_2,puVar2[-1]);
            snd_soc_component_write(param_1,param_3,*puVar2);
            uVar1 = uVar1 - 1;
            puVar2 = puVar2 + 2;
        } while (uVar1 != 0);
    }
    return 0;
}


// ===== sym.lpass_cdc_ssr_enable.9324bdfcbd927cfdef84d736718185f6.cfi_jt @ 0x080066d8 (size 8) =====

ulong sym.lpass_cdc_ssr_enable.9324bdfcbd927cfdef84d736718185f6.cfi_jt(ulong param_1,int64_t param_2)

{
    int64_t iVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_2 + 0xe0) == '\0') {
        pcVar2 = *(param_2 + 0x450);
        if (pcVar2 != NULL) {
            if (pcVar2 != sym.__typeid__ZTSFiP6devicetE_global_addr) {
                __cfi_slowpath_diag(0xc50b90c39b98ab53,pcVar2,0x8001bb0);
            }
            (*pcVar2)(*(param_2 + 0x448),5);
        }
        pcVar2 = *(param_2 + 0x118);
        if (pcVar2 != NULL) {
            __cfi_slowpath_diag(0x6b84145aa65a8cf9,pcVar2,0x8001bd0);
            (*pcVar2)(*(param_2 + 8),7,0);
        }
        pcVar2 = *(param_2 + 0x188);
        if (pcVar2 != NULL) {
            __cfi_slowpath_diag(0x6b84145aa65a8cf9,pcVar2,0x8001bd0);
            (*pcVar2)(*(param_2 + 8),7,0);
        }
        pcVar2 = *(param_2 + 0x1f8);
        if (pcVar2 != NULL) {
            __cfi_slowpath_diag(0x6b84145aa65a8cf9,pcVar2,0x8001bd0);
            (*pcVar2)(*(param_2 + 8),7,0);
        }
        pcVar2 = *(param_2 + 0x268);
        if (pcVar2 != NULL) {
            __cfi_slowpath_diag(0x6b84145aa65a8cf9,pcVar2,0x8001bd0);
            (*pcVar2)(*(param_2 + 8),7,0);
        }
        pcVar2 = *(param_2 + 0x2d8);
        if (pcVar2 != NULL) {
            __cfi_slowpath_diag(0x6b84145aa65a8cf9,pcVar2,0x8001bd0);
            (*pcVar2)(*(param_2 + 8),7,0);
        }
        __trace_bprintk(0x80088a0,*0x800b000,"lpass_cdc_ssr_enable");
        iVar1 = param_2 + 0x78;
        mutex_lock(iVar1);
        *(param_2 + 0xdf) = 1;
        mutex_unlock(iVar1);
        pcVar2 = *(param_2 + 0x450);
        if (pcVar2 != NULL) {
            if (pcVar2 != sym.__typeid__ZTSFiP6devicetE_global_addr) {
                __cfi_slowpath_diag(0xc50b90c39b98ab53,pcVar2,0x8001bf0);
            }
            (*pcVar2)(*(param_2 + 0x448),0xb);
        }
        pcVar2 = *(param_2 + 0x118);
        if (pcVar2 != NULL) {
            __cfi_slowpath_diag(0x6b84145aa65a8cf9,pcVar2,0x8001c10);
            (*pcVar2)(*(param_2 + 8),0xc,0);
        }
        pcVar2 = *(param_2 + 0x188);
        if (pcVar2 != NULL) {
            __cfi_slowpath_diag(0x6b84145aa65a8cf9,pcVar2,0x8001c10);
            (*pcVar2)(*(param_2 + 8),0xc,0);
        }
        pcVar2 = *(param_2 + 0x1f8);
        if (pcVar2 != NULL) {
            __cfi_slowpath_diag(0x6b84145aa65a8cf9,pcVar2,0x8001c10);
            (*pcVar2)(*(param_2 + 8),0xc,0);
        }
        pcVar2 = *(param_2 + 0x268);
        if (pcVar2 != NULL) {
            __cfi_slowpath_diag(0x6b84145aa65a8cf9,pcVar2,0x8001c10);
            (*pcVar2)(*(param_2 + 8),0xc,0);
        }
        pcVar2 = *(param_2 + 0x2d8);
        if (pcVar2 != NULL) {
            __cfi_slowpath_diag(0x6b84145aa65a8cf9,pcVar2,0x8001c10);
            (*pcVar2)(*(param_2 + 8),0xc,0);
        }
        regcache_cache_only(*(param_2 + 0x10),0);
        mutex_lock(iVar1);
        *(param_2 + 0xde) = 1;
        mutex_unlock(iVar1);
        regcache_mark_dirty(*(param_2 + 0x10));
        sym.lpass_cdc_clk_rsc_enable_all_clocks(*(param_2 + 0x448),1);
        regcache_sync(*(param_2 + 0x10));
        usleep_range_state(100,0x6e,2);
        sym.lpass_cdc_clk_rsc_enable_all_clocks(*(param_2 + 0x448),0);
        __trace_bprintk(0x8008a6c,*0x800b000,"lpass_cdc_ssr_enable");
        pcVar2 = *(param_2 + 0x118);
        if (pcVar2 != NULL) {
            __cfi_slowpath_diag(0x6b84145aa65a8cf9,pcVar2,0x8001c30);
            (*pcVar2)(*(param_2 + 8),5,0);
        }
        pcVar2 = *(param_2 + 0x188);
        if (pcVar2 != NULL) {
            __cfi_slowpath_diag(0x6b84145aa65a8cf9,pcVar2,0x8001c30);
            (*pcVar2)(*(param_2 + 8),5,0);
        }
        pcVar2 = *(param_2 + 0x1f8);
        if (pcVar2 != NULL) {
            __cfi_slowpath_diag(0x6b84145aa65a8cf9,pcVar2,0x8001c30);
            (*pcVar2)(*(param_2 + 8),5,0);
        }
        pcVar2 = *(param_2 + 0x268);
        if (pcVar2 != NULL) {
            __cfi_slowpath_diag(0x6b84145aa65a8cf9,pcVar2,0x8001c30);
            (*pcVar2)(*(param_2 + 8),5,0);
        }
        pcVar2 = *(param_2 + 0x2d8);
        if (pcVar2 != NULL) {
            __cfi_slowpath_diag(0x6b84145aa65a8cf9,pcVar2,0x8001c30);
            (*pcVar2)(*(param_2 + 8),5,0);
        }
        __trace_bprintk(0x8008ba4,*0x800b000,"lpass_cdc_ssr_enable");
        blocking_notifier_call_chain(param_2 + 0x400,4,*(param_2 + 0x3f8));
    }
    else {
        *(param_2 + 0xe0) = 0;
    }
    return 0;
}


// ===== sym.lpass_cdc_is_va_macro_registered.cfi_jt @ 0x080066e0 (size 8) =====

uint64_t sym.lpass_cdc_is_va_macro_registered.cfi_jt(int64_t param_1)

{
    int iVar1;
    uint64_t uVar2;
    char *pcVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        uVar2 = ___ratelimit(obj.lpass_cdc_is_va_macro_registered._rs,"lpass_cdc_is_va_macro_registered");
        if (uVar2 == 0) {
            return uVar2;
        }
        _printk(0x8002c0e,"lpass_cdc_is_va_macro_registered");
        return 0;
    }
    iVar1 = of_device_is_compatible(*(*(param_1 + 0x60) + 0x2f0),0x8002081);
    if (iVar1 == 0) {
        uVar2 = ___ratelimit(obj.lpass_cdc_is_va_macro_registered._rs.18,"lpass_cdc_is_va_macro_registered");
        if (uVar2 == 0) {
            return uVar2;
        }
        pcVar3 = "%s: child device calling is not added yet\n";
    }
    else {
        iVar4 = *(*(param_1 + 0x60) + 0x98);
        if (iVar4 != 0) {
            return *(iVar4 + 0xdc) != '\0';
        }
        uVar2 = ___ratelimit(obj.lpass_cdc_is_va_macro_registered._rs.20,"lpass_cdc_is_va_macro_registered");
        if (uVar2 == 0) {
            return uVar2;
        }
        pcVar3 = "%s: priv is null\n";
    }
    _dev_err(param_1,pcVar3,"lpass_cdc_is_va_macro_registered");
    return 0;
}


// ===== sym.lpass_cdc_check_core_votes.cfi_jt @ 0x080066e8 (size 8) =====

uint sym.lpass_cdc_check_core_votes.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    uint uVar1;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(param_1 + 0x60) + 0x98);
    __trace_bprintk(0x800809c,*0x800b000,"lpass_cdc_check_core_votes");
    mutex_lock(iVar2 + 0xa8);
    if (((*(iVar2 + 0xdf) == '\0') || ((*(iVar2 + 0x368) != 0 && (*(iVar2 + 0x378) == 0)))) ||
       ((*(iVar2 + 0x370) != 0 && (*(iVar2 + 0x37c) == 0)))) {
        uVar1 = 0;
    }
    else {
        uVar1 = 1;
    }
    mutex_unlock(iVar2 + 0xa8);
    __trace_bprintk(0x8008104,*0x800b000,"lpass_cdc_check_core_votes");
    return uVar1;
}


// ===== sym.init_module.cfi_jt @ 0x080066f0 (size 8) =====

ulong sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.lpass_cdc_probe.9324bdfcbd927cfdef84d736718185f6.cfi_jt,obj.__this_module);
    __platform_driver_register(reloc.lpass_cdc_clk_rsc_probe.c744908b27879af7a832d97c8febcb94.cfi_jt,obj.__this_module)
    ;
    return 0;
}


// ===== sym.lpass_cdc_register_res_clk.cfi_jt @ 0x080066f8 (size 8) =====

ulong sym.lpass_cdc_register_res_clk.cfi_jt(int64_t param_1,int64_t param_2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == 0) || (param_2 == 0)) {
        iVar1 = ___ratelimit(obj.lpass_cdc_register_res_clk._rs,"lpass_cdc_register_res_clk");
        if (iVar1 != 0) {
            _printk(0x8002774,"lpass_cdc_register_res_clk");
        }
    }
    else {
        iVar1 = of_device_is_compatible(*(*(param_1 + 0x60) + 0x2f0),0x8002081);
        if (iVar1 == 0) {
            iVar1 = ___ratelimit(obj.lpass_cdc_register_res_clk._rs.10,"lpass_cdc_register_res_clk");
            if (iVar1 != 0) {
                _dev_err(param_1,"%s: child device :%pK not added yet\n","lpass_cdc_register_res_clk",param_1);
            }
        }
        else {
            iVar2 = *(*(param_1 + 0x60) + 0x98);
            if (iVar2 != 0) {
                *(iVar2 + 0x448) = param_1;
                *(iVar2 + 0x450) = param_2;
                return 0;
            }
            iVar1 = ___ratelimit(obj.lpass_cdc_register_res_clk._rs.12,"lpass_cdc_register_res_clk");
            if (iVar1 != 0) {
                _dev_err(param_1,"%s: priv is null\n","lpass_cdc_register_res_clk");
            }
        }
    }
    return 0xffffffea;
}


// ===== sym.lpass_cdc_info_create_codec_entry.cfi_jt @ 0x08006700 (size 8) =====

ulong sym.lpass_cdc_info_create_codec_entry.cfi_jt(int64_t param_1,int64_t param_2)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = 0xffffffea;
    if ((param_1 != 0) && (param_2 != 0)) {
        iVar5 = *(*(param_2 + 0x18) + 0x98);
        if (*(iVar5 + 0x388) == 0) {
            iVar4 = *(param_2 + 0x20);
            iVar3 = snd_info_create_module_entry(*(param_1 + 0x38),"lpass-cdc");
            *(iVar5 + 0x388) = iVar3;
            if (iVar3 != 0) {
                *(iVar3 + 8) = 0x416d;
                iVar1 = snd_info_register(*(iVar5 + 0x388));
                if (-1 < iVar1) {
                    iVar3 = snd_info_create_card_entry(*(iVar4 + 0x48),"version",*(iVar5 + 0x388));
                    if (iVar3 == 0) {
                        iVar1 = ___ratelimit(obj.lpass_cdc_info_create_codec_entry._rs,
                                             "lpass_cdc_info_create_codec_entry");
                        if (iVar1 != 0) {
                            _dev_err(*(param_2 + 0x18),"%s: failed to create lpass_cdc version entry\n",
                                     "lpass_cdc_info_create_codec_entry");
                        }
                    }
                    else {
                        *(iVar3 + 0x40) = iVar5;
                        *(iVar3 + 0x10) = 0x20;
                        *(iVar3 + 0x18) = 1;
                        *(iVar3 + 0x20) = obj.lpass_cdc_info_ops;
                        iVar1 = snd_info_register();
                        if (-1 < iVar1) {
                            *(iVar5 + 0x390) = iVar3;
                            return 0;
                        }
                        snd_info_free_entry(iVar3);
                    }
                }
                snd_info_free_entry(*(iVar5 + 0x388));
            }
            uVar2 = 0xfffffff4;
        }
        else {
            uVar2 = 0;
        }
    }
    return uVar2;
}


// ===== sym.__typeid__ZTSFiP17snd_soc_componentjE_global_addr @ 0x08006708 (size 8) =====

ulong sym.__typeid__ZTSFiP17snd_soc_componentjE_global_addr(int64_t param_1,uint param_2)

{
    int iVar1;
    code *pcVar2;
    ulong *in_x18;
    int64_t *piVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 != 0) && (piVar3 = *(*(param_1 + 0x18) + 0x98), piVar3 != NULL)) {
        iVar1 = of_device_is_compatible(*(*piVar3 + 0x2f0),0x8002081);
        if (iVar1 != 0) {
            pcVar2 = piVar3[0x4e];
            if (pcVar2 != NULL) {
                if (pcVar2 != sym.__typeid__ZTSFiP17snd_soc_componentjE_global_addr) {
                    __cfi_slowpath_diag(0x297acb8b67047b9e,pcVar2,0x8001b10);
                }
                (*pcVar2)(param_1,param_2);
            }
            return 0;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_register_wake_irq._rs,"lpass_cdc_register_wake_irq");
        if (iVar1 != 0) {
            _dev_err(*(param_1 + 0x18),"%s: invalid codec\n","lpass_cdc_register_wake_irq");
        }
    }
    return 0xffffffea;
}


// ===== sym.lpass_cdc_unregister_macro.cfi_jt @ 0x08006710 (size 8) =====

void sym.lpass_cdc_unregister_macro.cfi_jt(int64_t param_1,uint16_t param_2)

{
    uint16_t uVar1;
    int iVar2;
    int64_t iVar3;
    ulong *puVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        iVar2 = ___ratelimit(obj.lpass_cdc_unregister_macro._rs,"lpass_cdc_unregister_macro");
        if (iVar2 == 0) {
            return;
        }
        _printk(0x8002c0e,"lpass_cdc_unregister_macro");
        return;
    }
    iVar2 = of_device_is_compatible(*(*(param_1 + 0x60) + 0x2f0),0x8002081);
    if (iVar2 == 0) {
        iVar2 = ___ratelimit(obj.lpass_cdc_unregister_macro._rs.26,"lpass_cdc_unregister_macro");
        if (iVar2 == 0) {
            return;
        }
        _dev_err(param_1,"%s: macro:%d not in valid registered macro-list\n","lpass_cdc_unregister_macro",param_2);
        return;
    }
    if ((4 < param_2) || (iVar3 = *(*(param_1 + 0x60) + 0x98), iVar3 == 0)) {
        iVar2 = ___ratelimit(obj.lpass_cdc_unregister_macro._rs.28,"lpass_cdc_unregister_macro");
        if (iVar2 == 0) {
            return;
        }
        _dev_err(param_1,"%s: priv is null or invalid macro\n","lpass_cdc_unregister_macro");
        return;
    }
    puVar4 = iVar3 + 0xe8 + param_2 * 0x70;
    *puVar4 = 0;
    *(puVar4 + 2) = 0;
    puVar4[6] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    if (param_2 != 3) {
        if (param_2 != 0) goto code_r0x08007684;
        *(iVar3 + 0x120) = 0;
        *(iVar3 + 0x138) = 0;
        *(iVar3 + 0x140) = 0;
    }
    *(iVar3 + 0xe8 + param_2 * 0x70 + 0x48) = 0;
code_r0x08007684:
    uVar1 = *(iVar3 + 0x322) - 1;
    *(iVar3 + 0x322) = uVar1;
    if (*(iVar3 + 0x324) - 1 == uVar1) {
        snd_soc_unregister_component(*(param_1 + 0x60));
    }
    return;
}


// ===== sym.lpass_cdc_clear_amic_tx_hold.cfi_jt @ 0x08006718 (size 8) =====

void sym.lpass_cdc_clear_amic_tx_hold.cfi_jt(int64_t param_1,int16_t param_2)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        uVar2 = 0x8002c0e;
    }
    else {
        iVar1 = of_device_is_compatible(*(param_1 + 0x2f0),0x8002081);
        if (iVar1 != 0) {
            iVar3 = *(param_1 + 0x98);
            if (iVar3 == 0) {
                _dev_err(param_1,"%s: priv is null\n","lpass_cdc_clear_amic_tx_hold");
                return;
            }
            if (3 < param_2 - 1U) {
                return;
            }
            blocking_notifier_call_chain(iVar3 + 0x400,*((param_2 - 1U) * 8 + 0x8003218),*(iVar3 + 0x3f8));
            return;
        }
        uVar2 = 0x80029c8;
    }
    _printk(uVar2,"lpass_cdc_clear_amic_tx_hold");
    return;
}


// ===== sym.regmap_bus_write.12c9b949d000a5e723071e3448d75e59.cfi_jt @ 0x08006720 (size 8) =====

ulong sym.regmap_bus_write.12c9b949d000a5e723071e3448d75e59.cfi_jt(int64_t param_1,int64_t param_2,uint64_t param_3)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x98) != 0) {
        if (1 < param_3) {
            uVar2 = sym.regmap_bus_gather_write(param_1,param_2,2,param_2 + 2);
            return uVar2;
        }
        iVar1 = ___ratelimit(obj.regmap_bus_write._rs,"regmap_bus_write");
        if (iVar1 != 0) {
            _dev_err(param_1,"%s: count %zd bytes < %d, not supported\n","regmap_bus_write",param_3,2);
            return 0xffffffea;
        }
    }
    return 0xffffffea;
}


// ===== sym.lpass_cdc_update_compander_setting.cfi_jt @ 0x08006728 (size 8) =====

ulong sym.lpass_cdc_update_compander_setting.cfi_jt(ulong param_1,uint32_t param_2,int *param_3)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    param_2 = param_2 & 0xffff;
    iVar3 = param_3[2];
    iVar2 = param_3[1];
    iVar4 = *param_3 - iVar2;
    snd_soc_component_write(param_1,param_2 + 8,6);
    iVar5 = 0xc;
    if (iVar4 < 0x12) {
        iVar5 = iVar4;
    }
    iVar1 = 0x12;
    if (iVar4 < 0x18) {
        iVar1 = iVar5;
    }
    snd_soc_component_write(param_1,param_2 + 0xc,iVar1);
    if (iVar4 < 0x42) {
        iVar5 = 0x18;
        if (iVar4 < 0x1e) {
            iVar5 = iVar4;
        }
        iVar1 = 0x1e;
        if (iVar4 < 0x24) {
            iVar1 = iVar5;
        }
        snd_soc_component_write(param_1,param_2 + 0x10,iVar1);
        if (iVar4 < 0x30) {
            iVar5 = 0x24;
            if (iVar4 < 0x2a) {
                iVar5 = iVar4;
            }
        }
        else {
            iVar5 = 0x2a;
        }
    }
    else {
        snd_soc_component_write(param_1,param_2 + 0x10,0x21);
        iVar5 = 0x30;
    }
    snd_soc_component_write(param_1,param_2 + 0x14,iVar5);
    iVar5 = 0x3f;
    if (iVar4 < 0x45) {
        iVar5 = 0x3c;
    }
    if (iVar4 < 0x42) {
        if (iVar4 < 0x3c) {
            iVar5 = 0x30;
            if (iVar4 < 0x36) {
                iVar5 = iVar4;
            }
        }
        else {
            iVar5 = 0x36;
        }
    }
    snd_soc_component_write(param_1,param_2 + 0x18,iVar5);
    snd_soc_component_write(param_1,param_2 + 0x1c,iVar4);
    iVar5 = iVar2 + 0x100;
    if (-1 < iVar2) {
        iVar5 = iVar2;
    }
    iVar1 = -iVar2;
    if (-1 < iVar2) {
        iVar1 = iVar2;
    }
    snd_soc_component_write(param_1,param_2 + 0x20,iVar5);
    snd_soc_component_write(param_1,param_2 + 0x24,iVar4 - iVar1);
    snd_soc_component_write(param_1,param_2 + 0x28,iVar3);
    return 0;
}


// ===== sym.lpass_cdc_get_rsc_clk_device_ptr.cfi_jt @ 0x08006730 (size 8) =====

ulong sym.lpass_cdc_get_rsc_clk_device_ptr.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_get_rsc_clk_device_ptr._rs,"lpass_cdc_get_rsc_clk_device_ptr");
        if (iVar1 == 0) {
            return 0;
        }
        uVar2 = 0x8002c0e;
    }
    else {
        iVar1 = of_device_is_compatible(*(param_1 + 0x2f0),0x8002081);
        if (iVar1 != 0) {
            if (*(param_1 + 0x98) != 0) {
                return *(*(param_1 + 0x98) + 0x448);
            }
            iVar1 = ___ratelimit(obj.lpass_cdc_get_rsc_clk_device_ptr._rs.8,"lpass_cdc_get_rsc_clk_device_ptr");
            if (iVar1 == 0) {
                return 0;
            }
            _dev_err(param_1,"%s: priv is null\n","lpass_cdc_get_rsc_clk_device_ptr");
            return 0;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_get_rsc_clk_device_ptr._rs.7,"lpass_cdc_get_rsc_clk_device_ptr");
        if (iVar1 == 0) {
            return 0;
        }
        uVar2 = 0x80029c8;
    }
    _printk(uVar2,"lpass_cdc_get_rsc_clk_device_ptr");
    return 0;
}


// ===== sym.__typeid__ZTSFiP17snd_soc_componentbE_global_addr @ 0x08006738 (size 8) =====

ulong sym.__typeid__ZTSFiP17snd_soc_componentbE_global_addr(int64_t param_1,uint32_t param_2)

{
    int iVar1;
    ulong uVar2;
    code *pcVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 != 0) && (piVar4 = *(*(param_1 + 0x18) + 0x98), piVar4 != NULL)) {
        iVar1 = of_device_is_compatible(*(*piVar4 + 0x2f0),0x8002081);
        if (iVar1 != 0) {
            pcVar3 = piVar4[0x27];
            if (pcVar3 != NULL) {
                if (1 < (pcVar3 + -0x8006738 >> 3 | pcVar3 << 0x3d)) {
                    __cfi_slowpath_diag(0xecc48172f489f632,pcVar3,0x8001b50);
                }
                uVar2 = (*pcVar3)(param_1,param_2 & 1);
                return uVar2;
            }
            return 0;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_register_event_listener._rs,"lpass_cdc_register_event_listener");
        if (iVar1 != 0) {
            _dev_err(*(param_1 + 0x18),"%s: invalid codec\n","lpass_cdc_register_event_listener");
            return 0xffffffea;
        }
    }
    return 0xffffffea;
}


// ===== sym.lpass_cdc_tx_mclk_enable.cfi_jt @ 0x08006740 (size 8) =====

ulong sym.lpass_cdc_tx_mclk_enable.cfi_jt(int64_t param_1,uint32_t param_2)

{
    int iVar1;
    ulong uVar2;
    code *pcVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 != 0) && (piVar4 = *(*(param_1 + 0x18) + 0x98), piVar4 != NULL)) {
        iVar1 = of_device_is_compatible(*(*piVar4 + 0x2f0),0x8002081);
        if (iVar1 != 0) {
            pcVar3 = piVar4[0x28];
            if (pcVar3 != NULL) {
                if (1 < (pcVar3 + -0x8006738 >> 3 | pcVar3 << 0x3d)) {
                    __cfi_slowpath_diag(0xecc48172f489f632,pcVar3,0x8001b30);
                }
                uVar2 = (*pcVar3)(param_1,param_2 & 1);
                return uVar2;
            }
            return 0;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_tx_mclk_enable._rs,"lpass_cdc_tx_mclk_enable");
        if (iVar1 != 0) {
            _dev_err(*(param_1 + 0x18),"%s: invalid codec\n","lpass_cdc_tx_mclk_enable");
            return 0xffffffea;
        }
    }
    return 0xffffffea;
}


// ===== sym.lpass_cdc_get_version.cfi_jt @ 0x08006748 (size 8) =====

uint sym.lpass_cdc_get_version.cfi_jt(int64_t param_1)

{
    int iVar1;
    char *pcVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        _printk(0x8002c0e,"lpass_cdc_get_version");
    }
    else {
        iVar1 = of_device_is_compatible(*(*(param_1 + 0x60) + 0x2f0),0x8002081);
        if (iVar1 == 0) {
            pcVar2 = "%s: child device for macro not added yet\n";
        }
        else {
            iVar3 = *(*(param_1 + 0x60) + 0x98);
            if (iVar3 != 0) {
                return *(iVar3 + 0x360);
            }
            pcVar2 = "%s: priv is null\n";
        }
        _dev_err(param_1,pcVar2,"lpass_cdc_get_version");
    }
    return 0xffffffea;
}


// ===== sym.lpass_cdc_runtime_suspend.cfi_jt @ 0x08006750 (size 8) =====

ulong sym.lpass_cdc_runtime_suspend.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(param_1 + 0x60) + 0x98);
    __trace_bprintk(0x8007f24,*0x800b000,"lpass_cdc_runtime_suspend");
    mutex_lock(iVar2 + 0xa8);
    iVar1 = *(iVar2 + 0x378);
    if (*(iVar2 + 0x368) != 0) {
        iVar1 = iVar1 + -1;
        *(iVar2 + 0x378) = iVar1;
        if (iVar1 == 0) {
            digital_cdc_rsc_mgr_hw_vote_disable(*(iVar2 + 0x368),param_1);
            iVar1 = *(iVar2 + 0x378);
        }
        if (iVar1 < 0) {
            iVar1 = 0;
            *(iVar2 + 0x378) = 0;
        }
    }
    __trace_bprintk(0x8007f70,*0x800b000,"lpass_cdc_runtime_suspend",iVar1);
    iVar1 = *(iVar2 + 0x37c);
    if (*(iVar2 + 0x370) != 0) {
        iVar1 = iVar1 + -1;
        *(iVar2 + 0x37c) = iVar1;
        if (iVar1 == 0) {
            digital_cdc_rsc_mgr_hw_vote_disable(*(iVar2 + 0x370),param_1);
            iVar1 = *(iVar2 + 0x37c);
        }
        if (iVar1 < 0) {
            iVar1 = 0;
            *(iVar2 + 0x37c) = 0;
        }
    }
    __trace_bprintk(0x8007fac,*0x800b000,"lpass_cdc_runtime_suspend",iVar1);
    iVar1 = *(iVar2 + 0x380) + -1;
    *(iVar2 + 0x380) = iVar1;
    if (iVar1 == 0) {
        sym.lpass_cdc_clk_rsc_request_clock(param_1,0,0,0);
        iVar1 = *(iVar2 + 0x380);
    }
    if (iVar1 < 0) {
        *(iVar2 + 0x380) = 0;
    }
    mutex_unlock(iVar2 + 0xa8);
    __trace_bprintk(0x8007fe8,*0x800b000,"lpass_cdc_runtime_suspend");
    return 0;
}


// ===== sym.lpass_cdc_runtime_resume.cfi_jt @ 0x08006758 (size 8) =====

ulong sym.lpass_cdc_runtime_resume.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    ulong *puVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = *(*(param_1 + 0x60) + 0x98);
    __trace_bprintk(0x8007d2c,*0x800b000,"lpass_cdc_runtime_resume");
    mutex_lock(puVar2 + 0x15);
    if (puVar2[0x6d] != 0) {
        iVar1 = *(puVar2 + 0x6f);
        if (iVar1 == 0) {
            iVar1 = digital_cdc_rsc_mgr_hw_vote_enable(puVar2[0x6d],param_1);
            if (iVar1 < 0) {
                iVar1 = ___ratelimit(obj.lpass_cdc_runtime_resume._rs,"lpass_cdc_runtime_resume");
                if (iVar1 != 0) {
                    _dev_err(param_1,"%s:lpass core hw enable failed\n","lpass_cdc_runtime_resume");
                }
                goto code_r0x08007da4;
            }
            iVar1 = *(puVar2 + 0x6f);
        }
        *(puVar2 + 0x6f) = iVar1 + 1;
        __trace_bprintk(0x8007d84,*0x800b000,"lpass_cdc_runtime_resume");
    }
code_r0x08007da4:
    if (puVar2[0x6e] == 0) goto code_r0x08007e18;
    iVar1 = *(puVar2 + 0x37c);
    if (iVar1 == 0) {
        iVar1 = digital_cdc_rsc_mgr_hw_vote_enable(puVar2[0x6e],param_1);
        if (-1 < iVar1) {
            iVar1 = *(puVar2 + 0x37c);
            goto code_r0x08007dc4;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_runtime_resume._rs.43,"lpass_cdc_runtime_resume");
        if (iVar1 != 0) {
            _dev_err(param_1,"%s:lpass audio hw enable failed\n","lpass_cdc_runtime_resume");
        }
    }
    else {
code_r0x08007dc4:
        *(puVar2 + 0x37c) = iVar1 + 1;
        __trace_bprintk(0x8007dcc,*0x800b000,"lpass_cdc_runtime_resume");
    }
    iVar1 = *(puVar2 + 0x70);
    if (iVar1 == 0) {
        iVar1 = sym.lpass_cdc_clk_rsc_request_clock(param_1,0,0,1);
        if (iVar1 < 0) {
            iVar1 = ___ratelimit(obj.lpass_cdc_runtime_resume._rs.49,"lpass_cdc_runtime_resume");
            if (iVar1 != 0) {
                _dev_err(param_1,"%s:lpass Tx core clk enable failed\n","lpass_cdc_runtime_resume");
            }
            goto code_r0x08007e18;
        }
        iVar1 = *(puVar2 + 0x70);
    }
    *(puVar2 + 0x70) = iVar1 + 1;
code_r0x08007e18:
    mutex_unlock(puVar2 + 0x15);
    __trace_bprintk(0x8007e20,*0x800b000,"lpass_cdc_runtime_resume");
    pm_runtime_set_autosuspend_delay(*puVar2,100);
    return 0;
}


// ===== sym.lpass_cdc_rsc_clk_reset.cfi_jt @ 0x08006760 (size 8) =====

ulong sym.lpass_cdc_rsc_clk_reset.cfi_jt(int64_t param_1,uint32_t param_2)

{
    int64_t iVar1;
    bool bVar2;
    int iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong uVar6;
    int iVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        uVar6 = 0x8002c0e;
    }
    else {
        if (7 < param_2) {
            _printk(0x8001e24,"lpass_cdc_rsc_clk_reset",param_2);
            return 0xffffffea;
        }
        iVar4 = sym.lpass_cdc_get_rsc_clk_device_ptr(*(param_1 + 0x60));
        if (iVar4 == 0) {
            uVar6 = 0x8002830;
        }
        else {
            iVar4 = *(iVar4 + 0x98);
            if (iVar4 != 0) {
                mutex_lock(iVar4 + 8);
                iVar1 = iVar4 + 0x68;
                uVar5 = __clk_is_enabled(*(iVar1 + param_2 * 8));
                if ((uVar5 & 1) == 0) {
                    __trace_bprintk(0x800a7a4,*0x800b000,"lpass_cdc_rsc_clk_reset",0);
                }
                else {
                    iVar7 = 0;
                    iVar8 = param_2 * 8;
                    do {
                        uVar6 = *(iVar1 + iVar8);
                        clk_disable(uVar6);
                        clk_unprepare(uVar6);
                        uVar5 = __clk_is_enabled(*(iVar1 + iVar8));
                        iVar7 = iVar7 + -1;
                    } while ((uVar5 & 1) != 0);
                    __trace_bprintk(0x800a7a4,*0x800b000,"lpass_cdc_rsc_clk_reset",-iVar7);
                    if (iVar7 != 0) {
                        do {
                            uVar6 = *(iVar1 + param_2 * 8);
                            iVar3 = clk_prepare(uVar6);
                            if ((iVar3 == 0) && (iVar3 = clk_enable(uVar6), iVar3 != 0)) {
                                clk_unprepare(uVar6);
                            }
                            bVar2 = iVar7 != -1;
                            iVar7 = iVar7 + 1;
                        } while (bVar2);
                    }
                }
                mutex_unlock(iVar4 + 8);
                return 0;
            }
            uVar6 = 0x800284e;
        }
    }
    _printk(uVar6,"lpass_cdc_rsc_clk_reset");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_register_notifier.9324bdfcbd927cfdef84d736718185f6.cfi_jt @ 0x08006768 (size 8) =====

ulong sym.lpass_cdc_register_notifier.9324bdfcbd927cfdef84d736718185f6.cfi_jt
                (int64_t param_1,ulong param_2,uint32_t param_3)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_register_notifier._rs,"lpass_cdc_register_notifier");
        if (iVar1 == 0) {
            uVar2 = 0xffffffea;
        }
        else {
            _printk(0x8002d45,"lpass_cdc_register_notifier");
            uVar2 = 0xffffffea;
        }
    }
    else if ((param_3 & 1) == 0) {
        uVar2 = blocking_notifier_chain_unregister(param_1 + 0x400);
    }
    else {
        uVar2 = blocking_notifier_chain_register();
    }
    return uVar2;
}


// ===== sym.lpass_cdc_unregister_res_clk.cfi_jt @ 0x08006770 (size 8) =====

void sym.lpass_cdc_unregister_res_clk.cfi_jt(int64_t param_1)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_unregister_res_clk._rs,"lpass_cdc_unregister_res_clk");
        if (iVar1 != 0) {
            _printk(0x800292a,"lpass_cdc_unregister_res_clk");
        }
    }
    else {
        iVar1 = of_device_is_compatible(*(*(param_1 + 0x60) + 0x2f0),0x8002081);
        if (iVar1 == 0) {
            iVar1 = ___ratelimit(obj.lpass_cdc_unregister_res_clk._rs.14,"lpass_cdc_unregister_res_clk");
            if (iVar1 != 0) {
                _dev_err(param_1,"%s: child device :%pK not added\n","lpass_cdc_unregister_res_clk",param_1);
            }
        }
        else {
            iVar2 = *(*(param_1 + 0x60) + 0x98);
            if (iVar2 == 0) {
                iVar1 = ___ratelimit(obj.lpass_cdc_unregister_res_clk._rs.16,"lpass_cdc_unregister_res_clk");
                if (iVar1 != 0) {
                    _dev_err(param_1,"%s: priv is null\n","lpass_cdc_unregister_res_clk");
                }
            }
            else {
                *(iVar2 + 0x450) = 0;
                *(iVar2 + 0x448) = 0;
            }
        }
    }
    return;
}


// ===== sym.__typeid__ZTSFiP6devicetE_global_addr @ 0x08006778 (size 8) =====

ulong sym.__typeid__ZTSFiP6devicetE_global_addr(int64_t param_1,int16_t param_2)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        uVar1 = 0x800288b;
    }
    else {
        iVar2 = *(param_1 + 0x98);
        if (iVar2 != 0) {
            mutex_lock(iVar2 + 8);
            if (param_2 == 4) {
                *(iVar2 + 0xd0) = 0;
            }
            else if (param_2 == 0xb) {
                *(iVar2 + 0xd1) = 1;
            }
            else if (param_2 == 5) {
                *(iVar2 + 0xd0) = 1;
            }
            mutex_unlock(iVar2 + 8);
            return 0;
        }
        uVar1 = 0x8002eb1;
    }
    _printk(uVar1,"lpass_cdc_clk_rsc_cb");
    return 0xffffffea;
}


// ===== sym.__typeid__ZTSFiP14lpass_cdc_privtthE_global_addr @ 0x08006780 (size 8) =====

uint sym.__typeid__ZTSFiP14lpass_cdc_privtthE_global_addr
               (int64_t param_1,uint16_t param_2,uint16_t param_3,uint32_t param_4)

{
    code *pcVar1;
    ulong uVar2;
    ulong *in_x18;
    uint uVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(param_1 + 0x78);
    if (*(param_1 + 0xde) == '\0') {
        uVar3 = 0xffffffea;
        goto code_r0x08009334;
    }
    if (*(param_1 + 0x250) == 0) {
code_r0x080092d8:
        if (4 < param_2) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5512,0x8009360);
            (*pcVar1)();
        }
        sym.writel(param_4 & 0xff,*(param_1 + param_2 * 0x70 + 0x148) + param_3);
    }
    else {
        __pm_runtime_resume(*(param_1 + 0x250),4);
        mutex_lock(param_1 + 0xa8);
        if (((*(param_1 + 0x368) == 0) || (*(param_1 + 0x378) != 0)) &&
           ((*(param_1 + 0x370) == 0 || (*(param_1 + 0x37c) != 0)))) goto code_r0x080092d8;
    }
    if (*(param_1 + 0x250) != 0) {
        mutex_unlock(param_1 + 0xa8);
        iVar4 = *(param_1 + 0x250);
        uVar2 = ktime_get_mono_fast_ns();
        *(iVar4 + 0x218) = uVar2;
        __pm_runtime_suspend(*(param_1 + 0x250),0xd);
    }
    uVar3 = 0;
code_r0x08009334:
    mutex_unlock(param_1 + 0x78);
    return uVar3;
}


// ===== sym.lpass_cdc_get_device_ptr.cfi_jt @ 0x08006788 (size 8) =====

ulong sym.lpass_cdc_get_device_ptr.cfi_jt(int64_t param_1,uint16_t param_2)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_get_device_ptr._rs,"lpass_cdc_get_device_ptr");
        if (iVar1 == 0) {
            return 0;
        }
        uVar2 = 0x8002c0e;
    }
    else {
        iVar1 = of_device_is_compatible(*(param_1 + 0x2f0),0x8002081);
        if (iVar1 != 0) {
            if ((param_2 < 5) && (*(param_1 + 0x98) != 0)) {
                return *(*(param_1 + 0x98) + param_2 * 0x70 + 0x100);
            }
            iVar1 = ___ratelimit(obj.lpass_cdc_get_device_ptr._rs.5,"lpass_cdc_get_device_ptr");
            if (iVar1 == 0) {
                return 0;
            }
            _dev_err(param_1,"%s: priv is null or invalid macro\n","lpass_cdc_get_device_ptr");
            return 0;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_get_device_ptr._rs.4,"lpass_cdc_get_device_ptr");
        if (iVar1 == 0) {
            return 0;
        }
        uVar2 = 0x80029c8;
    }
    _printk(uVar2,"lpass_cdc_get_device_ptr");
    return 0;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08006790 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.lpass_cdc_clk_rsc_probe.c744908b27879af7a832d97c8febcb94.cfi_jt);
    platform_driver_unregister(reloc.lpass_cdc_probe.9324bdfcbd927cfdef84d736718185f6.cfi_jt);
    return;
}


// ===== sym.lpass_cdc_version_read.9324bdfcbd927cfdef84d736718185f6.cfi_jt @ 0x08006798 (size 8) =====

uint64_t sym.lpass_cdc_version_read.9324bdfcbd927cfdef84d736718185f6.cfi_jt
                   (int64_t param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,ulong param_6)

{
    uint uVar1;
    uint16_t uVar2;
    bool bVar3;
    bool bVar4;
    bool bVar5;
    char cVar6;
    char cVar7;
    int iVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    int64_t iVar11;
    ulong uVar12;
    char *pcVar13;
    uint uVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar15;
    code *pcVar16;
    uint64_t uVar17;
    ulong unaff_x30;
    ulong uStack_40;
    unkbyte7 Stack_38;
    uchar uStack_31;
    unkbyte7 Stack_30;
    uchar uStack_29;
    ulong uStack_28;
    ulong uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_18 = *(iVar11 + 0x5e0);
    Stack_38 = 0;
    uStack_31 = 0;
    uStack_28 = 0;
    uStack_20 = 0;
    Stack_30 = 0;
    uStack_29 = 0;
    uStack_40 = param_6;
    if (*(param_1 + 0x40) == 0) {
        iVar8 = ___ratelimit(obj.lpass_cdc_version_read._rs,"lpass_cdc_version_read");
        if (iVar8 == 0) {
            uVar10 = 0xffffffffffffffea;
        }
        else {
            _printk(0x8002d45,"lpass_cdc_version_read");
            uVar10 = 0xffffffffffffffea;
        }
    }
    else {
        switch(*(*(param_1 + 0x40) + 0x360)) {
        case 1:
            pcVar13 = "LPASS-CDC_1_0\n";
            break;
        case 2:
            pcVar13 = "LPASS-CDC_1_1\n";
            break;
        case 3:
            pcVar13 = "LPASS-CDC_1_2\n";
            break;
        default:
            pcVar13 = "VER_UNDEFINED\n";
            break;
        case 5:
            pcVar13 = "LPASS-CDC_2_1\n";
            break;
        case 6:
            pcVar13 = "LPASS-CDC_2_5\n";
            break;
        case 7:
            pcVar13 = "LPASS-CDC_2_6\n";
        }
        Stack_38 = *pcVar13;
        uStack_31 = *(pcVar13 + 7);
        Stack_30 = *(pcVar13 + 7) >> 8;
        uVar10 = simple_read_from_buffer(param_4,param_5,&uStack_40,&Stack_38,0xe);
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_18) {
        return uVar10;
    }
    iVar11 = __stack_chk_fail(uVar10);
    *extraout_x18 = sym.lpass_cdc_soc_codec_probe;
    puVar15 = *(*(iVar11 + 0x18) + 0x98);
    snd_soc_component_init_regmap(iVar11,puVar15[2]);
    if (*(puVar15 + 0x6c) == 0) {
        uVar2 = *(puVar15 + 0x322);
        uVar9 = uVar2;
        if ((uVar2 != 1) && (uVar2 != 2)) {
            if (uVar2 < 3) goto code_r0x080082f0;
            uVar9 = 3;
        }
        *(puVar15 + 0x6c) = uVar9;
    }
code_r0x080082f0:
    cVar6 = snd_soc_component_read(iVar11,0x30c0);
    cVar7 = snd_soc_component_read(iVar11,0x30c4);
    uVar9 = snd_soc_component_read(iVar11,0x30c8);
    bVar3 = cVar7 == '\x0f';
    bVar4 = cVar6 == '\x02';
    bVar5 = (uVar9 & 0xfe) == 0x60;
    if (((((bVar4 && bVar3) && bVar5) || (bVar4 && bVar3)) || (cVar6 == '\x01' && bVar3)) || (bVar4 && cVar7 == '\x0e'))
    {
        uVar14 = 4;
        if (bVar4 && cVar7 == '\x0e') {
            uVar14 = 5;
        }
        uVar1 = 6;
        if (!bVar4 || !bVar3) {
            uVar1 = uVar14;
        }
        uVar14 = 7;
        if ((!bVar4 || !bVar3) || !bVar5) {
            uVar14 = uVar1;
        }
        *(puVar15 + 0x6c) = uVar14;
    }
    pcVar16 = puVar15[0x1d];
    if (pcVar16 == NULL) {
code_r0x080083bc:
        pcVar16 = puVar15[0x2b];
        if (pcVar16 != NULL) {
            if (pcVar16 != sym.__typeid__ZTSFiP17snd_soc_componentE_global_addr) {
                __cfi_slowpath_diag(0xf0d2ea9a64921857,pcVar16,0x8001b90);
            }
            uVar9 = (*pcVar16)(iVar11);
            if (uVar9 < 0) {
                uVar10 = uVar9;
                uVar17 = 1;
                goto code_r0x080084b0;
            }
        }
        pcVar16 = puVar15[0x39];
        if (pcVar16 != NULL) {
            if (pcVar16 != sym.__typeid__ZTSFiP17snd_soc_componentE_global_addr) {
                __cfi_slowpath_diag(0xf0d2ea9a64921857,pcVar16,0x8001b90);
            }
            uVar9 = (*pcVar16)(iVar11);
            if (uVar9 < 0) {
                uVar10 = uVar9;
                uVar17 = 2;
                goto code_r0x080084b0;
            }
        }
        pcVar16 = puVar15[0x47];
        if (pcVar16 != NULL) {
            if (pcVar16 != sym.__typeid__ZTSFiP17snd_soc_componentE_global_addr) {
                __cfi_slowpath_diag(0xf0d2ea9a64921857,pcVar16,0x8001b90);
            }
            uVar9 = (*pcVar16)(iVar11);
            if (uVar9 < 0) {
                uVar10 = uVar9;
                uVar17 = 3;
                goto code_r0x080084b0;
            }
        }
        pcVar16 = puVar15[0x55];
        if (pcVar16 != NULL) {
            if (pcVar16 != sym.__typeid__ZTSFiP17snd_soc_componentE_global_addr) {
                __cfi_slowpath_diag(0xf0d2ea9a64921857,pcVar16,0x8001b90);
            }
            uVar9 = (*pcVar16)(iVar11);
            if (uVar9 < 0) {
                uVar10 = uVar9;
                uVar17 = 4;
                goto code_r0x080084b0;
            }
        }
        puVar15[1] = iVar11;
        uVar9 = snd_event_client_register
                          (*puVar15,reloc.lpass_cdc_ssr_enable.9324bdfcbd927cfdef84d736718185f6.cfi_jt,puVar15);
        uVar17 = uVar9;
        if (uVar9 == 0) {
            snd_event_notify(*puVar15,1);
            return 0;
        }
        uVar12 = *(iVar11 + 0x18);
        pcVar13 = "%s: Registration with SND event FWK failed ret = %d\n";
        uVar10 = uVar17;
    }
    else {
        if (pcVar16 != sym.__typeid__ZTSFiP17snd_soc_componentE_global_addr) {
            __cfi_slowpath_diag(0xf0d2ea9a64921857,pcVar16,0x8001b90);
        }
        uVar9 = (*pcVar16)(iVar11);
        if (-1 < uVar9) goto code_r0x080083bc;
        uVar10 = uVar9;
        uVar17 = 0;
code_r0x080084b0:
        uVar12 = *(iVar11 + 0x18);
        pcVar13 = "%s: init for macro %d failed\n";
    }
    _dev_err(uVar12,pcVar13,"lpass_cdc_soc_codec_probe",uVar17);
    return uVar10;
}


// ===== sym.regmap_bus_gather_write.12c9b949d000a5e723071e3448d75e59.cfi_jt @ 0x080067a0 (size 8) =====

int sym.regmap_bus_gather_write.12c9b949d000a5e723071e3448d75e59.cfi_jt
              (int64_t param_1,uint16_t *param_2,int64_t param_3,int64_t param_4,uint64_t param_5)

{
    uint16_t uVar1;
    uint16_t uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    char *pcVar6;
    uint32_t uVar7;
    ulong *in_x18;
    int64_t iVar8;
    code *pcVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = *(param_1 + 0x98);
    if (iVar8 == 0) {
        iVar4 = ___ratelimit(obj.regmap_bus_gather_write._rs,"regmap_bus_gather_write");
        if (iVar4 == 0) {
            return -0x16;
        }
        pcVar6 = "%s: priv is NULL\n";
    }
    else {
        if ((param_2 != NULL) && (param_4 != 0)) {
            if (param_3 != 2) {
                iVar4 = ___ratelimit(obj.regmap_bus_gather_write._rs.4,"regmap_bus_gather_write");
                if (iVar4 == 0) {
                    return -0x16;
                }
                _dev_err(param_1,"%s: register size %zd bytes, not supported\n","regmap_bus_gather_write",param_3);
                return -0x16;
            }
            uVar1 = *param_2;
            if (uVar1 < 0x7a9) {
                uVar7 = 0;
            }
            else if (uVar1 - 0x1000 < 0xf8d) {
                uVar7 = 1;
            }
            else {
                uVar7 = uVar1;
                if (uVar7 - 0x2000 < 0xbe5) {
                    uVar7 = 2;
                }
                else if (uVar7 - 0x4000 < 0xbe5) {
                    uVar7 = 4;
                }
                else {
                    if (0x5a8 < uVar7 - 0x3000) {
                        return 0;
                    }
                    uVar7 = 3;
                }
            }
            uVar10 = uVar7;
            if (*(iVar8 + uVar10 + 0xd9) == '\0') {
                return 0;
            }
            mutex_lock();
            if (param_5 == 0) {
                iVar4 = -0x16;
            }
            else {
                uVar11 = 0;
                uVar1 = *(obj.macro_id_base_offset + uVar10 * 2);
                do {
                    uVar2 = *param_2;
                    pcVar9 = *(iVar8 + 0x3a0);
                    if (pcVar9 != sym.__typeid__ZTSFiP14lpass_cdc_privtthE_global_addr) {
                        __cfi_slowpath_diag(0x276b3a09c1053cc9,pcVar9,0x8001db0);
                    }
                    iVar3 = uVar11 * 4;
                    iVar4 = (*pcVar9)(iVar8,uVar10,(uVar2 - uVar1) + iVar3,*(param_4 + uVar11));
                    if (iVar4 < 0) {
                        iVar5 = ___ratelimit(obj.regmap_bus_gather_write._rs.6,"regmap_bus_gather_write");
                        if (iVar5 != 0) {
                            _dev_err(param_1,"%s: Codec write failed (%d), reg:0x%x, size:%zd\n",
                                     "regmap_bus_gather_write",iVar4,iVar3 + *param_2,param_5);
                        }
                        break;
                    }
                    uVar11 = uVar11 + 1;
                } while (uVar11 < param_5);
            }
            mutex_unlock(iVar8 + 0x48);
            return iVar4;
        }
        iVar4 = ___ratelimit(obj.regmap_bus_gather_write._rs.2,"regmap_bus_gather_write");
        if (iVar4 == 0) {
            return -0x16;
        }
        pcVar6 = "%s: reg or val is NULL\n";
    }
    _dev_err(param_1,pcVar6,"regmap_bus_gather_write");
    return -0x16;
}


// ===== sym.__typeid__ZTSFiP14lpass_cdc_privttPhE_global_addr @ 0x080067a8 (size 8) =====

uint sym.__typeid__ZTSFiP14lpass_cdc_privttPhE_global_addr
               (int64_t param_1,uint16_t param_2,uint16_t param_3,uchar *param_4)

{
    code *pcVar1;
    uchar uVar2;
    ulong uVar3;
    ulong *in_x18;
    uint uVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(param_1 + 0x78);
    if (*(param_1 + 0xde) == '\0') {
        uVar4 = 0xffffffea;
        goto code_r0x08009234;
    }
    if (*(param_1 + 0x250) == 0) {
code_r0x080091d8:
        if (4 < param_2) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5512,0x8009260);
            (*pcVar1)();
        }
        uVar2 = sym.readl(*(param_1 + param_2 * 0x70 + 0x148) + param_3);
        *param_4 = uVar2;
    }
    else {
        __pm_runtime_resume(*(param_1 + 0x250),4);
        mutex_lock(param_1 + 0xa8);
        if (((*(param_1 + 0x368) == 0) || (*(param_1 + 0x378) != 0)) &&
           ((*(param_1 + 0x370) == 0 || (*(param_1 + 0x37c) != 0)))) goto code_r0x080091d8;
    }
    if (*(param_1 + 0x250) != 0) {
        mutex_unlock(param_1 + 0xa8);
        iVar5 = *(param_1 + 0x250);
        uVar3 = ktime_get_mono_fast_ns();
        *(iVar5 + 0x218) = uVar3;
        __pm_runtime_suspend(*(param_1 + 0x250),0xd);
    }
    uVar4 = 0;
code_r0x08009234:
    mutex_unlock(param_1 + 0x78);
    return uVar4;
}


// ===== sym.lpass_cdc_set_port_map.cfi_jt @ 0x080067b0 (size 8) =====

ulong sym.lpass_cdc_set_port_map.cfi_jt(int64_t param_1,uint32_t param_2,int64_t param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t *piVar2;
    code *pcVar3;
    uint32_t uVar4;
    ulong *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) &&
       (piVar2 = *(*(param_1 + 0x18) + 0x98), piVar2 != NULL)) {
        iVar1 = of_device_is_compatible(*(*piVar2 + 0x2f0),0x8002081);
        if (iVar1 != 0) {
            puVar5 = param_3 + 8;
            uVar4 = 0;
            do {
                if (4 < *(puVar5 + -1)) {
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(0x5512,0x8006984);
                    (*pcVar3)();
                }
                pcVar3 = piVar2[*(puVar5 + -1) * 0xe + 0x25];
                if (pcVar3 != NULL) {
                    __cfi_slowpath_diag(0x65013fe89c46b56,pcVar3,0x8001af0);
                    (*pcVar3)(param_1,*(puVar5 + -4),0xd,*puVar5);
                }
                uVar4 = uVar4 + 1;
                puVar5 = puVar5 + 2;
            } while ((uVar4 & 0xffff) < param_2);
            return 0;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_set_port_map._rs,"lpass_cdc_set_port_map");
        if (iVar1 != 0) {
            _dev_err(*piVar2,"%s: invalid codec\n","lpass_cdc_set_port_map");
        }
    }
    return 0xffffffea;
}


// ===== sym.lpass_cdc_register_macro.cfi_jt @ 0x080067b8 (size 8) =====

int sym.lpass_cdc_register_macro.cfi_jt(int64_t param_1,uint16_t param_2,ulong *param_3)

{
    int iVar1;
    ulong *puVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong *puVar5;
    uint64_t uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == 0) || (param_3 == NULL)) {
        _printk(0x8002000,"lpass_cdc_register_macro");
    }
    else {
        iVar1 = of_device_is_compatible(*(*(param_1 + 0x60) + 0x2f0),0x8002081);
        if (iVar1 == 0) {
            _dev_err(param_1,"%s: child device for macro:%d not added yet\n","lpass_cdc_register_macro",param_2);
        }
        else {
            if ((param_2 < 5) && (puVar5 = *(*(param_1 + 0x60) + 0x98), puVar5 != NULL)) {
                uVar6 = param_2;
                puVar2 = puVar5 + uVar6 * 0xe + 0x1d;
                *(puVar2 + 0xd) = *(param_3 + 0xd);
                *(puVar2 + 0x6a) = *(param_3 + 0x6a);
                *puVar2 = *param_3;
                puVar2[1] = param_3[1];
                puVar2[0xc] = param_3[0xc];
                *(puVar2 + 2) = *(param_3 + 2);
                puVar2[4] = param_3[4];
                puVar2[6] = param_3[6];
                uVar3 = param_3[8];
                puVar2[3] = param_1;
                puVar2[8] = uVar3;
                *(puVar5 + param_2 * 2 + 0x326) = *(obj.lpass_cdc_mclk_mux_tbl + uVar6 * 4);
                if (param_2 == 3) {
                    puVar5[0x50] = param_3[9];
                    puVar5[0x4e] = param_3[7];
                }
                else if (param_2 == 0) {
                    puVar5[0x24] = param_3[7];
                    puVar5[0x27] = param_3[10];
                    puVar5[0x28] = param_3[0xb];
                    puVar5[0x26] = param_3[9];
                }
                puVar2 = puVar5 + 3;
                mutex_lock(puVar2);
                *(puVar5 + 100) = *(puVar5 + 100) + *(param_3 + 2);
                *(puVar5 + 0x322) = *(puVar5 + 0x322) + 1;
                (puVar5 + 0xd9)[uVar6] = '\x01';
                _dev_info(param_1,"%s: register macro successful:%d\n","lpass_cdc_register_macro",param_2);
                if (*(puVar5 + 0x322) == *(puVar5 + 0x324)) {
                    iVar4 = puVar5[99];
                    if (iVar4 == 0) {
                        iVar4 = devm_kmalloc(*puVar5,*(puVar5 + 100) * 0xf0,0xdc0);
                        puVar5[99] = iVar4;
                        if (iVar4 == 0) {
                            _dev_err(param_1,"%s: copy_dais failed\n","lpass_cdc_register_macro");
                            mutex_unlock(puVar2);
                            return -0xc;
                        }
                    }
                    if (puVar5[0x21] != 0) {
                        memcpy(iVar4,puVar5[0x21],*(puVar5 + 0x1f) * 0xf0);
                        iVar4 = iVar4 + *(puVar5 + 0x1f) * 0xf0;
                    }
                    if (puVar5[0x2f] != 0) {
                        memcpy(iVar4,puVar5[0x2f],*(puVar5 + 0x2d) * 0xf0);
                        iVar4 = iVar4 + *(puVar5 + 0x2d) * 0xf0;
                    }
                    if (puVar5[0x3d] != 0) {
                        memcpy(iVar4,puVar5[0x3d],*(puVar5 + 0x3b) * 0xf0);
                        iVar4 = iVar4 + *(puVar5 + 0x3b) * 0xf0;
                    }
                    if (puVar5[0x4b] != 0) {
                        memcpy(iVar4,puVar5[0x4b],*(puVar5 + 0x49) * 0xf0);
                        iVar4 = iVar4 + *(puVar5 + 0x49) * 0xf0;
                    }
                    if (puVar5[0x59] != 0) {
                        memcpy(iVar4,puVar5[0x59],*(puVar5 + 0x57) * 0xf0);
                    }
                    if (*(puVar5 + 0xd9) == '\0') {
                        *0x80004a0 = 2;
                        *(puVar5 + 0x32a) = 2;
                        *0x80004a4 = 3;
                        *(puVar5 + 0x32c) = 3;
                    }
                    iVar1 = snd_soc_register_component(*(param_1 + 0x60),obj.lpass_cdc,puVar5[99],*(puVar5 + 100));
                    if (iVar1 < 0) {
                        _dev_err(param_1,"%s: register codec failed\n","lpass_cdc_register_macro");
                        mutex_unlock(puVar2);
                        return iVar1;
                    }
                }
                mutex_unlock(puVar2);
                return 0;
            }
            _dev_err(param_1,"%s: priv is null or invalid macro\n","lpass_cdc_register_macro");
        }
    }
    return -0x16;
}


// ===== sym.lpass_cdc_update_wcd_event.9324bdfcbd927cfdef84d736718185f6.cfi_jt @ 0x080067c0 (size 8) =====

ulong sym.lpass_cdc_update_wcd_event.9324bdfcbd927cfdef84d736718185f6.cfi_jt
                (ulong *param_1,ushort param_2,uint param_3)

{
    int iVar1;
    ulong uVar2;
    ulong uVar3;
    ulong *in_x18;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == NULL) {
        iVar1 = ___ratelimit(obj.lpass_cdc_update_wcd_event._rs,"lpass_cdc_update_wcd_event");
        if (iVar1 != 0) {
            _printk(0x80027ee,"lpass_cdc_update_wcd_event");
        }
code_r0x080093fc:
        uVar2 = 0xffffffea;
    }
    else {
        switch(param_2) {
        case 1:
            pcVar4 = param_1[0x31];
            if (pcVar4 != NULL) {
                __cfi_slowpath_diag(0x6b84145aa65a8cf9,pcVar4,0x8001cb0);
                uVar2 = param_1[1];
                uVar3 = 1;
code_r0x080095c0:
                (*pcVar4)(uVar2,uVar3,param_3);
            }
            break;
        case 2:
            pcVar4 = param_1[0x31];
            if (pcVar4 != NULL) {
                __cfi_slowpath_diag(0x6b84145aa65a8cf9,pcVar4,0x8001cd0);
                uVar2 = param_1[1];
                uVar3 = 2;
                goto code_r0x080095c0;
            }
            break;
        case 3:
            pcVar4 = param_1[0x31];
            if (pcVar4 != NULL) {
                __cfi_slowpath_diag(0x6b84145aa65a8cf9,pcVar4,0x8001cf0);
                uVar2 = param_1[1];
                uVar3 = 3;
                goto code_r0x080095c0;
            }
            break;
        case 4:
            pcVar4 = param_1[0x31];
            if (pcVar4 != NULL) {
                __cfi_slowpath_diag(0x6b84145aa65a8cf9,pcVar4,0x8001d10);
                uVar2 = param_1[1];
                uVar3 = 9;
                goto code_r0x080095c0;
            }
            break;
        case 5:
            pcVar4 = param_1[0x23];
            if (pcVar4 != NULL) {
                __cfi_slowpath_diag(0x6b84145aa65a8cf9,pcVar4,0x8001d30);
                uVar2 = param_1[1];
                uVar3 = 10;
                goto code_r0x080095c0;
            }
            break;
        case 6:
            pcVar4 = param_1[0x31];
            if (pcVar4 != NULL) {
                __cfi_slowpath_diag(0x6b84145aa65a8cf9,pcVar4,0x8001d50);
                uVar2 = param_1[1];
                uVar3 = 0xd;
                goto code_r0x080095c0;
            }
            break;
        case 7:
            pcVar4 = param_1[0x31];
            if (pcVar4 != NULL) {
                __cfi_slowpath_diag(0x6b84145aa65a8cf9,pcVar4,0x8001d70);
                uVar2 = param_1[1];
                uVar3 = 0xe;
                goto code_r0x080095c0;
            }
            break;
        case 8:
            pcVar4 = param_1[0x31];
            if (pcVar4 != NULL) {
                __cfi_slowpath_diag(0x6b84145aa65a8cf9,pcVar4,0x8001d90);
                uVar2 = param_1[1];
                uVar3 = 0xf;
                goto code_r0x080095c0;
            }
            break;
        default:
            iVar1 = ___ratelimit(obj.lpass_cdc_update_wcd_event._rs.108,"lpass_cdc_update_wcd_event");
            if (iVar1 != 0) {
                _dev_err(*param_1,"%s: Invalid event %d trigger from wcd\n","lpass_cdc_update_wcd_event",param_2);
            }
            goto code_r0x080093fc;
        }
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.__typeid__ZTSFiP17snd_soc_componentE_global_addr @ 0x080067c8 (size 8) =====

int sym.__typeid__ZTSFiP17snd_soc_componentE_global_addr(int64_t param_1)

{
    uint uVar1;
    uint16_t uVar2;
    bool bVar3;
    bool bVar4;
    bool bVar5;
    char cVar6;
    char cVar7;
    uint32_t uVar8;
    int iVar9;
    ulong uVar10;
    char *pcVar11;
    int iVar12;
    uint uVar13;
    ulong *in_x18;
    ulong *puVar14;
    code *pcVar15;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar14 = *(*(param_1 + 0x18) + 0x98);
    snd_soc_component_init_regmap(param_1,puVar14[2]);
    if (*(puVar14 + 0x6c) == 0) {
        uVar2 = *(puVar14 + 0x322);
        uVar8 = uVar2;
        if ((uVar2 != 1) && (uVar2 != 2)) {
            if (uVar2 < 3) goto code_r0x080082f0;
            uVar8 = 3;
        }
        *(puVar14 + 0x6c) = uVar8;
    }
code_r0x080082f0:
    cVar6 = snd_soc_component_read(param_1,0x30c0);
    cVar7 = snd_soc_component_read(param_1,0x30c4);
    uVar8 = snd_soc_component_read(param_1,0x30c8);
    bVar3 = cVar7 == '\x0f';
    bVar4 = cVar6 == '\x02';
    bVar5 = (uVar8 & 0xfe) == 0x60;
    if (((((bVar4 && bVar3) && bVar5) || (bVar4 && bVar3)) || (cVar6 == '\x01' && bVar3)) || (bVar4 && cVar7 == '\x0e'))
    {
        uVar13 = 4;
        if (bVar4 && cVar7 == '\x0e') {
            uVar13 = 5;
        }
        uVar1 = 6;
        if (!bVar4 || !bVar3) {
            uVar1 = uVar13;
        }
        uVar13 = 7;
        if ((!bVar4 || !bVar3) || !bVar5) {
            uVar13 = uVar1;
        }
        *(puVar14 + 0x6c) = uVar13;
    }
    pcVar15 = puVar14[0x1d];
    if (pcVar15 == NULL) {
code_r0x080083bc:
        pcVar15 = puVar14[0x2b];
        if (pcVar15 != NULL) {
            if (pcVar15 != sym.__typeid__ZTSFiP17snd_soc_componentE_global_addr) {
                __cfi_slowpath_diag(0xf0d2ea9a64921857,pcVar15,0x8001b90);
            }
            iVar9 = (*pcVar15)(param_1);
            if (iVar9 < 0) {
                iVar12 = 1;
                goto code_r0x080084b0;
            }
        }
        pcVar15 = puVar14[0x39];
        if (pcVar15 != NULL) {
            if (pcVar15 != sym.__typeid__ZTSFiP17snd_soc_componentE_global_addr) {
                __cfi_slowpath_diag(0xf0d2ea9a64921857,pcVar15,0x8001b90);
            }
            iVar9 = (*pcVar15)(param_1);
            if (iVar9 < 0) {
                iVar12 = 2;
                goto code_r0x080084b0;
            }
        }
        pcVar15 = puVar14[0x47];
        if (pcVar15 != NULL) {
            if (pcVar15 != sym.__typeid__ZTSFiP17snd_soc_componentE_global_addr) {
                __cfi_slowpath_diag(0xf0d2ea9a64921857,pcVar15,0x8001b90);
            }
            iVar9 = (*pcVar15)(param_1);
            if (iVar9 < 0) {
                iVar12 = 3;
                goto code_r0x080084b0;
            }
        }
        pcVar15 = puVar14[0x55];
        if (pcVar15 != NULL) {
            if (pcVar15 != sym.__typeid__ZTSFiP17snd_soc_componentE_global_addr) {
                __cfi_slowpath_diag(0xf0d2ea9a64921857,pcVar15,0x8001b90);
            }
            iVar9 = (*pcVar15)(param_1);
            if (iVar9 < 0) {
                iVar12 = 4;
                goto code_r0x080084b0;
            }
        }
        puVar14[1] = param_1;
        iVar9 = snd_event_client_register
                          (*puVar14,reloc.lpass_cdc_ssr_enable.9324bdfcbd927cfdef84d736718185f6.cfi_jt,puVar14);
        if (iVar9 == 0) {
            snd_event_notify(*puVar14,1);
            return 0;
        }
        uVar10 = *(param_1 + 0x18);
        pcVar11 = "%s: Registration with SND event FWK failed ret = %d\n";
        iVar12 = iVar9;
    }
    else {
        if (pcVar15 != sym.__typeid__ZTSFiP17snd_soc_componentE_global_addr) {
            __cfi_slowpath_diag(0xf0d2ea9a64921857,pcVar15,0x8001b90);
        }
        iVar9 = (*pcVar15)(param_1);
        if (-1 < iVar9) goto code_r0x080083bc;
        iVar12 = 0;
code_r0x080084b0:
        uVar10 = *(param_1 + 0x18);
        pcVar11 = "%s: init for macro %d failed\n";
    }
    _dev_err(uVar10,pcVar11,"lpass_cdc_soc_codec_probe",iVar12);
    return iVar9;
}


// ===== sym.lpass_cdc_dmic_clk_enable.cfi_jt @ 0x080067d0 (size 8) =====

ulong sym.lpass_cdc_dmic_clk_enable.cfi_jt(int64_t param_1,uint64_t param_2,int param_3,uint64_t param_4)

{
    int64_t iVar1;
    uint32_t uVar2;
    int iVar3;
    uint uVar4;
    uint uVar5;
    ulong uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    code *pcVar9;
    int64_t iVar10;
    int64_t iVar11;
    uint8_t uVar12;
    int64_t iVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (7 < param_2) {
        iVar3 = ___ratelimit(obj.lpass_cdc_dmic_clk_enable._rs,"lpass_cdc_dmic_clk_enable");
        if (iVar3 == 0) {
            return 0xffffffea;
        }
        _dev_err(*(param_1 + 0x18),"%s: Invalid DMIC Selection\n","lpass_cdc_dmic_clk_enable");
        return 0xffffffea;
    }
    uVar7 = -(param_2 >> 0x1f & 1) & 0xfffffff800000000 | (param_2 & 0xffffffff) << 3;
    uVar8 = -(param_2 >> 0x1f & 1) & 0xfffffffc00000000 | (param_2 & 0xffffffff) << 2;
    iVar13 = *(uVar7 + 0x8005d58);
    iVar10 = *(uVar7 + 0x8005d98);
    uVar4 = *(uVar8 + 0x80031f8);
    iVar11 = *(*(param_1 + 0x18) + 0x98);
    uVar5 = *(uVar8 + 0x80031d8);
    if ((param_4 & 1) == 0) {
        iVar3 = *(iVar11 + iVar13) + -1;
        *(iVar11 + iVar13) = iVar3;
        if (iVar3 == 0) {
            snd_soc_component_update_bits(param_1,uVar4,1,0);
            snd_soc_component_update_bits(param_1,uVar4,0xe,0);
            uVar12 = 0;
        }
        else {
            iVar13 = 0;
            if (param_3 != 0) {
                iVar13 = 0x150;
            }
            pcVar9 = *(*(*(param_1 + 0x18) + 0x98) + iVar13 + 0x130);
            if (pcVar9 == NULL) {
                uVar2 = 1;
            }
            else {
                if (pcVar9 != sym.__typeid__ZTSFiP17snd_soc_componentE_global_addr) {
                    __cfi_slowpath_diag(0xf0d2ea9a64921857,pcVar9,0x8001b70);
                }
                uVar2 = (*pcVar9)(param_1);
                if (uVar2 < 0) {
                    uVar2 = 1;
                }
            }
            uVar12 = *(iVar11 + iVar10);
            if ((uVar2 & 0xff) < uVar12) {
                iVar13 = 0x150;
                if (param_3 != 0) {
                    iVar13 = 0;
                }
                pcVar9 = *(*(*(param_1 + 0x18) + 0x98) + iVar13 + 0x130);
                if (pcVar9 == NULL) {
                    uVar2 = 1;
                }
                else {
                    if (pcVar9 != sym.__typeid__ZTSFiP17snd_soc_componentE_global_addr) {
                        __cfi_slowpath_diag(0xf0d2ea9a64921857,pcVar9,0x8001b70);
                    }
                    uVar2 = (*pcVar9)(param_1);
                    if (uVar2 < 0) {
                        uVar2 = 1;
                    }
                }
                uVar12 = uVar2;
                snd_soc_component_update_bits(param_1,0x3094,uVar5,uVar5);
                snd_soc_component_update_bits(param_1,uVar4,0xe,(uVar2 & 0xff) << 1);
                snd_soc_component_update_bits(param_1,0x3094,uVar5,0);
            }
        }
    }
    else {
        iVar1 = 0;
        if (param_3 != 0) {
            iVar1 = 0x150;
        }
        pcVar9 = *(iVar11 + iVar1 + 0x130);
        if (pcVar9 == NULL) {
            uVar2 = 1;
        }
        else {
            if (pcVar9 != sym.__typeid__ZTSFiP17snd_soc_componentE_global_addr) {
                __cfi_slowpath_diag(0xf0d2ea9a64921857,pcVar9,0x8001b70);
            }
            uVar2 = (*pcVar9)(param_1);
            if (uVar2 < 0) {
                uVar2 = 1;
            }
        }
        iVar3 = *(iVar11 + iVar13);
        *(iVar11 + iVar13) = iVar3 + 1;
        if (iVar3 == 0) {
            snd_soc_component_update_bits(param_1,0x3094,0x80,0);
            snd_soc_component_update_bits(param_1,uVar4,0xe,(uVar2 & 0xff) << 1);
            uVar5 = 1;
            uVar6 = 1;
        }
        else {
            uVar12 = *(iVar11 + iVar10);
            if (*(iVar11 + iVar10) <= (uVar2 & 0xff)) goto code_r0x080070d8;
            snd_soc_component_update_bits(param_1,0x3094,uVar5,uVar5);
            snd_soc_component_update_bits(param_1,uVar4,0xe,(uVar2 & 0xff) << 1);
            uVar4 = 0x3094;
            uVar6 = 0;
        }
        snd_soc_component_update_bits(param_1,uVar4,uVar5,uVar6);
        uVar12 = uVar2;
    }
code_r0x080070d8:
    *(iVar11 + iVar10) = uVar12;
    return 0;
}


// ===== sym.regmap_bus_read.12c9b949d000a5e723071e3448d75e59.cfi_jt @ 0x080067d8 (size 8) =====

uint32_t sym.regmap_bus_read.12c9b949d000a5e723071e3448d75e59.cfi_jt
                   (int64_t param_1,uint16_t *param_2,int64_t param_3,int64_t param_4,uint64_t param_5)

{
    uint16_t uVar1;
    uint16_t uVar2;
    int iVar3;
    uint32_t uVar4;
    int iVar5;
    char *pcVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar7;
    code *pcVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    uchar auStack_6c [4];
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    iVar7 = *(param_1 + 0x98);
    auStack_6c[0] = 0;
    if (iVar7 == 0) {
        iVar3 = ___ratelimit(obj.regmap_bus_read._rs,"regmap_bus_read");
        if (iVar3 != 0) {
            pcVar6 = "%s: priv is NULL\n";
code_r0x0800a18c:
            _dev_err(param_1,pcVar6,"regmap_bus_read");
            uVar4 = 0xffffffea;
            goto code_r0x0800a1c0;
        }
    }
    else if ((param_2 == NULL) || (param_4 == 0)) {
        iVar3 = ___ratelimit(obj.regmap_bus_read._rs.8,"regmap_bus_read");
        if (iVar3 != 0) {
            pcVar6 = "%s: reg or val is NULL\n";
            goto code_r0x0800a18c;
        }
    }
    else {
        if (param_3 == 2) {
            uVar1 = *param_2;
            if (uVar1 < 0x7a9) {
                uVar4 = 0;
code_r0x0800a24c:
                uVar9 = uVar4;
                if (*(iVar7 + uVar9 + 0xd9) != '\0') {
                    mutex_lock();
                    if (param_5 == 0) {
                        uVar4 = 0xffffffea;
                    }
                    else {
                        uVar10 = 0;
                        uVar1 = *(obj.macro_id_base_offset + uVar9 * 2);
                        do {
                            uVar2 = *param_2;
                            pcVar8 = *(iVar7 + 0x398);
                            if (pcVar8 != sym.__typeid__ZTSFiP14lpass_cdc_privttPhE_global_addr) {
                                __cfi_slowpath_diag(0x59be41b8a2279880,pcVar8,0x8001dd0);
                            }
                            iVar3 = uVar10 * 4;
                            uVar4 = (*pcVar8)(iVar7,uVar9,(uVar2 - uVar1) + iVar3,auStack_6c);
                            if (uVar4 < 0) {
                                iVar5 = ___ratelimit(obj.regmap_bus_read._rs.10,"regmap_bus_read");
                                if (iVar5 != 0) {
                                    _dev_err(param_1,"%s: Codec read failed (%d), reg: 0x%x, size:%zd\n",
                                             "regmap_bus_read",uVar4,iVar3 + *param_2,param_5);
                                }
                                break;
                            }
                            *(param_4 + uVar10) = auStack_6c[0];
                            uVar10 = uVar10 + 1;
                        } while (uVar10 < param_5);
                    }
                    mutex_unlock(iVar7 + 0x48);
                    goto code_r0x0800a1c0;
                }
            }
            else {
                if (uVar1 - 0x1000 < 0xf8d) {
                    uVar4 = 1;
                    goto code_r0x0800a24c;
                }
                uVar4 = uVar1;
                if (uVar4 - 0x2000 < 0xbe5) {
                    uVar4 = 2;
                    goto code_r0x0800a24c;
                }
                if (uVar4 - 0x4000 < 0xbe5) {
                    uVar4 = 4;
                    goto code_r0x0800a24c;
                }
                if (uVar4 - 0x3000 < 0x5a9) {
                    uVar4 = 3;
                    goto code_r0x0800a24c;
                }
            }
            uVar4 = 0;
            goto code_r0x0800a1c0;
        }
        iVar3 = ___ratelimit(obj.regmap_bus_read._rs.9,"regmap_bus_read");
        if (iVar3 != 0) {
            _dev_err(param_1,"%s: register size %zd bytes, not supported\n","regmap_bus_read",param_3);
            uVar4 = 0xffffffea;
            goto code_r0x0800a1c0;
        }
    }
    uVar4 = 0xffffffea;
code_r0x0800a1c0:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_68) {
        return uVar4;
    }
    auVar11 = __stack_chk_fail();
    *extraout_x18 = sym.lpass_cdc_is_writeable_register;
    iVar7 = *(auVar11._0_8_ + 0x98);
    if (iVar7 != 0) {
        uVar4 = sym.lpass_cdc_get_macro_id(*(iVar7 + 0xd8),auVar11._8_8_);
        if (-1 < uVar4) {
            if (4 < uVar4) {
    //WARNING: Does not return
                pcVar8 = SoftwareBreakpoint(0x5512,0x800a414);
                (*pcVar8)();
            }
            uVar9 = uVar4;
            if ((*(iVar7 + uVar9 + 0xd9) != '\0') && (*(reloc.lpass_cdc_tx_reg_access + uVar9 * 8) != 0)) {
                return *(*(reloc.lpass_cdc_tx_reg_access + uVar9 * 8) +
                        (auVar11._8_4_ - *(obj.macro_id_base_offset + uVar9 * 2) >> 2 & 0xffff)) >> 1 & 1;
            }
        }
    }
    return 0;
}


// ===== sym.lpass_cdc_clk_rsc_fs_gen_request.cfi_jt @ 0x080067e0 (size 8) =====

void sym.lpass_cdc_clk_rsc_fs_gen_request.cfi_jt(int64_t param_1,uint64_t param_2)

{
    int iVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong *in_x18;
    uint32_t uVar5;
    uint64_t uVar6;
    int64_t *piVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        uVar3 = 0x8002c0e;
    }
    else {
        iVar2 = sym.lpass_cdc_get_rsc_clk_device_ptr(*(param_1 + 0x60));
        if (iVar2 == 0) {
            uVar3 = 0x8002830;
        }
        else {
            piVar7 = *(iVar2 + 0x98);
            if (piVar7 == NULL) {
                uVar3 = 0x800284e;
            }
            else {
                iVar2 = dev_get_regmap(*(*piVar7 + 0x60),0);
                if (iVar2 != 0) {
                    mutex_lock(piVar7 + 7);
                    iVar1 = piVar7[0x19];
                    if ((param_2 & 1) == 0) {
                        if (iVar1 < 1) {
                            iVar1 = ___ratelimit(obj.lpass_cdc_clk_rsc_fs_gen_request._rs,
                                                 "lpass_cdc_clk_rsc_fs_gen_request");
                            if (iVar1 != 0) {
                                _dev_err(*piVar7,"%s: req_seq_cnt: %d is already disabled\n",
                                         "lpass_cdc_clk_rsc_fs_gen_request",piVar7[0x19]);
                            }
                            *(piVar7 + 0x19) = 0;
                        }
                        else {
                            *(piVar7 + 0x19) = iVar1 + -1;
                            if (iVar1 + -1 == 0) {
                                iVar1 = *(piVar7 + 0xd4) * 3;
                                uVar5 = iVar1 - 3;
                                uVar6 = uVar5;
                                if (-1 < uVar5) {
                                    iVar1 = iVar1 + -2;
                                    do {
                                        regmap_update_bits_base
                                                  (iVar2,*(piVar7[0x1b] + uVar6 * 4),*(piVar7[0x1b] + iVar1 * 4),0,0
                                                   ,0,0);
                                        uVar6 = uVar6 - 3;
                                        iVar1 = iVar1 + -3;
                                    } while (-1 < uVar6);
                                }
                            }
                        }
                    }
                    else {
                        *(piVar7 + 0x19) = iVar1 + 1;
                        if ((iVar1 == 0) && (*(piVar7 + 0xd4) * 3 != 0)) {
                            uVar5 = 0;
                            do {
                                iVar4 = piVar7[0x1b];
                                regmap_update_bits_base
                                          (iVar2,*(iVar4 + uVar5 * 4),*(iVar4 + (uVar5 + 1) * 4),
                                           *(iVar4 + (uVar5 + 2) * 4),0,0,0);
                                uVar5 = uVar5 + 3;
                            } while (uVar5 < *(piVar7 + 0xd4) * 3);
                        }
                    }
                    mutex_unlock(piVar7 + 7);
                    return;
                }
                uVar3 = 0x8002542;
            }
        }
    }
    _printk(uVar3,"lpass_cdc_clk_rsc_fs_gen_request");
    return;
}


// ===== sym.lpass_cdc_clk_rsc_enable_all_clocks.cfi_jt @ 0x080067e8 (size 8) =====

void sym.lpass_cdc_clk_rsc_enable_all_clocks.cfi_jt(int64_t param_1,uint64_t param_2)

{
    int iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong uVar4;
    ulong *in_x18;
    int64_t iVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        uVar4 = 0x8002c0e;
    }
    else {
        iVar2 = sym.lpass_cdc_get_rsc_clk_device_ptr(*(param_1 + 0x60));
        if (iVar2 == 0) {
            uVar4 = 0x8002830;
        }
        else {
            iVar2 = *(iVar2 + 0x98);
            if (iVar2 != 0) {
                mutex_lock(iVar2 + 8);
                iVar6 = 0;
                do {
                    iVar5 = *(iVar2 + 0x68 + iVar6);
                    if ((param_2 & 1) == 0) {
                        if ((iVar5 != 0) && (uVar3 = __clk_is_enabled(iVar5), (uVar3 & 1) != 0)) {
                            iVar5 = *(iVar2 + 0x68 + iVar6);
                            clk_disable(iVar5);
                            goto code_r0x0800a8ec;
                        }
                    }
                    else if (((iVar5 != 0) && (iVar1 = clk_prepare(iVar5), iVar1 == 0)) &&
                            (iVar1 = clk_enable(iVar5), iVar1 != 0)) {
code_r0x0800a8ec:
                        clk_unprepare(iVar5);
                    }
                    iVar6 = iVar6 + 8;
                    if (iVar6 == 0x40) {
                        mutex_unlock(iVar2 + 8);
                        return;
                    }
                } while( true );
            }
            uVar4 = 0x80025ee;
        }
    }
    _printk(uVar4,"lpass_cdc_clk_rsc_enable_all_clocks");
    return;
}


// ===== sym.lpass_cdc_wsa_pa_on.cfi_jt @ 0x080067f0 (size 8) =====

void sym.lpass_cdc_wsa_pa_on.cfi_jt(int64_t param_1,uint64_t param_2)

{
    int iVar1;
    ulong uVar2;
    char *pcVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_pa_on._rs,"lpass_cdc_wsa_pa_on");
        if (iVar1 == 0) {
            return;
        }
        _printk(0x8002c0e,"lpass_cdc_wsa_pa_on");
        return;
    }
    iVar1 = of_device_is_compatible(*(*(param_1 + 0x60) + 0x2f0),0x8002081);
    if (iVar1 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_pa_on._rs.29,"lpass_cdc_wsa_pa_on");
        if (iVar1 == 0) {
            return;
        }
        pcVar3 = "%s: not a valid child dev\n";
    }
    else {
        iVar4 = *(*(param_1 + 0x60) + 0x98);
        if (iVar4 != 0) {
            if ((param_2 & 1) == 0) {
                uVar2 = 5;
            }
            else {
                uVar2 = 6;
            }
            blocking_notifier_call_chain(iVar4 + 0x400,uVar2,*(iVar4 + 0x3f8));
            return;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_pa_on._rs.31,"lpass_cdc_wsa_pa_on");
        if (iVar1 == 0) {
            return;
        }
        pcVar3 = "%s: priv is null\n";
    }
    _dev_err(param_1,pcVar3,"lpass_cdc_wsa_pa_on");
    return;
}


// ===== sym.lpass_cdc_clk_rsc_remove.c744908b27879af7a832d97c8febcb94.cfi_jt @ 0x080067f8 (size 8) =====

uint sym.lpass_cdc_clk_rsc_remove.c744908b27879af7a832d97c8febcb94.cfi_jt(int64_t param_1)

{
    uint uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0xa8);
    sym.lpass_cdc_unregister_res_clk(param_1 + 0x10);
    of_platform_depopulate(param_1 + 0x10);
    uVar1 = 0xffffffea;
    if (iVar2 != 0) {
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.lpass_cdc_clk_rsc_probe.c744908b27879af7a832d97c8febcb94.cfi_jt @ 0x08006800 (size 8) =====

uint64_t sym.lpass_cdc_clk_rsc_probe.c744908b27879af7a832d97c8febcb94.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t *piVar3;
    int64_t iVar4;
    ulong *puVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong uVar8;
    char *pcVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar10;
    ulong unaff_x30;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iVar7 = param_1 + 0x10;
    iStack_58 = *(iVar4 + 0x5e0);
    uStack_60 = 0;
    piVar3 = devm_kmalloc(iVar7,0x120,0xdc0);
    if (piVar3 == NULL) {
code_r0x0800b9c8:
        uVar10 = 0xfffffff4;
    }
    else {
        iVar4 = of_find_property(*(param_1 + 0x300),"qcom,fs-gen-sequence",&uStack_60 + 4);
        if (iVar4 == 0) {
            _dev_err(iVar7,"%s: unable to find qcom,fs-gen-sequence property\n","lpass_cdc_clk_rsc_probe");
            uVar10 = 0xffffffea;
            goto code_r0x0800b9cc;
        }
        iVar2 = uStack_60._4_4_ / 0xc;
        *(piVar3 + 0xd4) = iVar2;
        iVar4 = devm_kmalloc(iVar7,uStack_60._4_4_,0xdc0);
        piVar3[0x1b] = iVar4;
        if (iVar4 == 0) goto code_r0x0800b9c8;
        uVar1 = of_property_read_variable_u32_array(*(param_1 + 0x300),"qcom,fs-gen-sequence",iVar4,iVar2 * 3,0);
        if (uVar1 < 0) {
            uVar10 = uVar1;
            pcVar9 = "%s: unable to parse fs-gen-sequence, ret = %d\n";
        }
        else {
            uVar1 = of_property_read_string_helper(*(param_1 + 0x300),"clock-names",0,0,0);
            uVar10 = uVar1;
            if (uVar1 - 9 < 0xfffffff8) {
                _dev_err(iVar7,"%s: Invalid number of clocks %d","lpass_cdc_clk_rsc_probe",uVar10);
                uVar10 = 0xffffffea;
                goto code_r0x0800b9cc;
            }
            puVar5 = devm_kmalloc(iVar7,uVar10 << 3,0xdc0);
            if (puVar5 == NULL) goto code_r0x0800b9c8;
            of_property_read_string_helper(*(param_1 + 0x300),"clock-names",puVar5,uVar10,0);
            iVar4 = 0x68;
            pcVar9 = "tx_core_clk";
            do {
                uVar8 = *puVar5;
                *(piVar3 + iVar4) = 0;
                iVar2 = strcmp(pcVar9,uVar8);
                if ((iVar2 == 0) ||
                   ((uVar1 != 1 &&
                    ((iVar2 = strcmp(pcVar9,puVar5[1]), iVar2 == 0 ||
                     ((uVar1 != 2 &&
                      ((iVar2 = strcmp(pcVar9,puVar5[2]), iVar2 == 0 ||
                       ((uVar1 != 3 &&
                        ((iVar2 = strcmp(pcVar9,puVar5[3]), iVar2 == 0 ||
                         ((uVar1 != 4 &&
                          ((iVar2 = strcmp(pcVar9,puVar5[4]), iVar2 == 0 ||
                           ((uVar1 != 5 &&
                            ((iVar2 = strcmp(pcVar9,puVar5[5]), iVar2 == 0 ||
                             ((uVar1 != 6 &&
                              ((iVar2 = strcmp(pcVar9,puVar5[6]), iVar2 == 0 ||
                               ((uVar1 != 7 && (iVar2 = strcmp(pcVar9,puVar5[7]), iVar2 == 0))))))))))))))))))))))))))
                   )) {
                    uVar10 = devm_clk_get(iVar7,pcVar9);
                    if (0xfffffffffffff000 < uVar10) {
                        _dev_err(iVar7,"%s: clk get failed for %s with ret %d\n","lpass_cdc_clk_rsc_probe",pcVar9,
                                 uVar10 & 0xffffffff);
                        goto code_r0x0800b9cc;
                    }
                    *(piVar3 + iVar4) = uVar10;
                }
                iVar4 = iVar4 + 8;
                pcVar9 = pcVar9 + 0x1e;
            } while (iVar4 != 0xa8);
            iVar2 = of_property_read_variable_u32_array
                              (*(param_1 + 0x300),"qcom,rx_mclk_mode_muxsel",&uStack_60,1,0);
            if (-1 < iVar2) {
                iVar4 = devm_ioremap(iVar7,uStack_60 & 0xffffffff,4);
                piVar3[0x21] = iVar4;
                if (iVar4 != 0) goto code_r0x0800b834;
                pcVar9 = "%s: ioremap failed for rx muxsel\n";
code_r0x0800b9b8:
                _dev_err(iVar7,pcVar9,"lpass_cdc_clk_rsc_probe");
                goto code_r0x0800b9c8;
            }
code_r0x0800b834:
            iVar2 = of_property_read_variable_u32_array
                              (*(param_1 + 0x300),"qcom,wsa_mclk_mode_muxsel",&uStack_60,1,0);
            if (-1 < iVar2) {
                iVar4 = devm_ioremap(iVar7,uStack_60 & 0xffffffff,4);
                piVar3[0x22] = iVar4;
                if (iVar4 == 0) {
                    pcVar9 = "%s: ioremap failed for wsa muxsel\n";
                    goto code_r0x0800b9b8;
                }
            }
            iVar2 = of_property_read_variable_u32_array
                              (*(param_1 + 0x300),"qcom,va_mclk_mode_muxsel",&uStack_60,1,0);
            if (-1 < iVar2) {
                iVar4 = devm_ioremap(iVar7,uStack_60 & 0xffffffff,4);
                piVar3[0x23] = iVar4;
                if (iVar4 == 0) {
                    pcVar9 = "%s: ioremap failed for va muxsel\n";
                    goto code_r0x0800b9b8;
                }
            }
            uVar6 = sym.lpass_cdc_register_res_clk(iVar7,0x8006778);
            uVar10 = uVar6 & 0xffffffff;
            if (-1 < uVar6) {
                *piVar3 = iVar7;
                *(piVar3 + 0x1a) = 0x101;
                __mutex_init(piVar3 + 1,"&priv->rsc_clk_lock",obj.lpass_cdc_probe.__key);
                __mutex_init(piVar3 + 7,"&priv->fs_gen_lock",obj.lpass_cdc_probe.__key);
                *(param_1 + 0xa8) = piVar3;
                goto code_r0x0800b9cc;
            }
            pcVar9 = "%s: Failed to register cb %d";
        }
        _dev_err(iVar7,pcVar9,"lpass_cdc_clk_rsc_probe",uVar10);
    }
code_r0x0800b9cc:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_58) {
        iVar7 = __stack_chk_fail();
        *extraout_x18 = sym.lpass_cdc_clk_rsc_remove;
        iVar4 = *(iVar7 + 0xa8);
        sym.lpass_cdc_unregister_res_clk(iVar7 + 0x10);
        of_platform_depopulate(iVar7 + 0x10);
        uVar1 = 0xffffffea;
        if (iVar4 != 0) {
            uVar1 = 0;
        }
        return uVar1;
    }
    return uVar10 & 0xffffffff;
}


// ===== sym.lpass_cdc_remove.9324bdfcbd927cfdef84d736718185f6.cfi_jt @ 0x08006808 (size 8) =====

ulong sym.lpass_cdc_remove.9324bdfcbd927cfdef84d736718185f6.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0xa8) == 0) {
        uVar1 = 0xffffffea;
    }
    else {
        of_platform_depopulate(param_1 + 0x10);
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.lpass_cdc_probe.9324bdfcbd927cfdef84d736718185f6.cfi_jt @ 0x08006810 (size 8) =====

int sym.lpass_cdc_probe.9324bdfcbd927cfdef84d736718185f6.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong uVar2;
    int iVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iVar7 = param_1 + 0x10;
    iStack_38 = *(iVar1 + 0x5e0);
    uStack_3c = 0;
    piVar4 = devm_kmalloc(iVar7,0x470,0xdc0);
    if (piVar4 == NULL) {
        iVar3 = -0xc;
    }
    else {
        iVar3 = of_property_read_variable_u32_array(*(param_1 + 0x300),"qcom,num-macros",&uStack_3c,1,0);
        if (iVar3 < 0) {
            _dev_err(iVar7,"%s:num-macros property not found\n","lpass_cdc_probe");
        }
        else {
            *(piVar4 + 0x324) = uStack_3c;
            if ((uStack_3c & 0xffff) < 6) {
                of_property_read_variable_u32_array(*(param_1 + 0x300),"qcom,lpass-cdc-version",piVar4 + 0x6c,1,0);
                __init_rwsem(piVar4 + 0x80,"&(&priv->notifier)->rwsem",obj.lpass_cdc_probe.__key);
                piVar4[0x88] = 0;
                *piVar4 = iVar7;
                *(piVar4 + 0xde) = 0x101;
                *(piVar4 + 0x1c) = 1;
                uVar5 = __devm_regmap_init(iVar7,obj.regmap_bus_config.llvm.14991791794097483029,iVar7,
                                           obj.lpass_cdc_regmap_config,0,0);
                piVar4[2] = uVar5;
                if ((uVar5 == 0) || (0xfffffffffffff000 < uVar5)) {
                    _dev_err(iVar7,"%s:regmap init failed\n","lpass_cdc_probe");
                    iVar3 = -0x16;
                }
                else {
                    devm_regmap_qti_debugfs_register(*piVar4,uVar5);
                    piVar4[0x7c] = piVar4;
                    piVar4[0x73] = sym.__typeid__ZTSFiP14lpass_cdc_privttPhE_global_addr;
                    piVar4[0x6f] = 0;
                    *(param_1 + 0xa8) = piVar4;
                    piVar4[0x74] = sym.__typeid__ZTSFiP14lpass_cdc_privtthE_global_addr;
                    piVar4[0x7d] = sym.lpass_cdc_update_wcd_event.9324bdfcbd927cfdef84d736718185f6.cfi_jt;
                    piVar4[0x7e] = sym.lpass_cdc_register_notifier.9324bdfcbd927cfdef84d736718185f6.cfi_jt;
                    __mutex_init(piVar4 + 3,"&priv->macro_lock",obj.lpass_cdc_probe.__key);
                    __mutex_init(piVar4 + 9,"&priv->io_lock",obj.lpass_cdc_probe.__key);
                    __mutex_init(piVar4 + 0xf,"&priv->clk_lock",obj.lpass_cdc_probe.__key);
                    __mutex_init(piVar4 + 0x15,"&priv->vote_lock",obj.lpass_cdc_probe.__key);
                    piVar4[0x66] = 0xfffffffe0;
                    piVar4[0x67] = piVar4 + 0x67;
                    piVar4[0x68] = piVar4 + 0x67;
                    piVar4[0x69] = sym.lpass_cdc_add_child_devices.9324bdfcbd927cfdef84d736718185f6.cfi_jt;
                    uVar6 = devm_clk_get(iVar7,"lpass_core_hw_vote");
                    uVar5 = 0;
                    if (uVar6 < 0xfffffffffffff001) {
                        uVar5 = uVar6;
                    }
                    piVar4[0x6d] = uVar5;
                    uVar6 = devm_clk_get(iVar7,"lpass_audio_hw_vote");
                    uVar2 = _of_device_is_compatible;
                    uVar5 = 0;
                    if (uVar6 < 0xfffffffffffff001) {
                        uVar5 = uVar6;
                    }
                    piVar4[0x6e] = uVar5;
                    queue_work_on(0x20,uVar2,piVar4 + 0x66);
                    iVar3 = 0;
                }
            }
            else {
                _dev_err(iVar7,"%s:num_macros(%d) > MAX_MACRO(%d) than supported\n","lpass_cdc_probe",
                         uStack_3c & 0xffff,5);
                iVar3 = -0x16;
            }
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_38) {
        return iVar3;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18 = sym.lpass_cdc_remove;
    if (*(iVar7 + 0xa8) == 0) {
        iVar3 = -0x16;
    }
    else {
        of_platform_depopulate(iVar7 + 0x10);
        iVar3 = 0;
    }
    return iVar3;
}


// ===== sym.lpass_cdc_ssr_disable.9324bdfcbd927cfdef84d736718185f6.cfi_jt @ 0x08006818 (size 8) =====

void sym.lpass_cdc_ssr_disable.9324bdfcbd927cfdef84d736718185f6.cfi_jt(ulong param_1,ulong *param_2)

{
    int iVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_2 + 0xde) == '\0') {
        iVar1 = ___ratelimit(obj.lpass_cdc_ssr_disable._rs,"lpass_cdc_ssr_disable");
        if (iVar1 != 0) {
            _dev_err(*param_2,"%s: already disabled\n","lpass_cdc_ssr_disable");
        }
    }
    else {
        blocking_notifier_call_chain(param_2 + 0x80,2,param_2[0x7f]);
        regcache_cache_only(param_2[2],1);
        mutex_lock(param_2 + 0xf);
        *(param_2 + 0xde) = 0;
        mutex_unlock(param_2 + 0xf);
        pcVar2 = param_2[0x8a];
        if (pcVar2 != NULL) {
            if (pcVar2 != sym.__typeid__ZTSFiP6devicetE_global_addr) {
                __cfi_slowpath_diag(0xc50b90c39b98ab53,pcVar2,0x8001c50);
            }
            (*pcVar2)(param_2[0x89],4);
        }
        pcVar2 = param_2[0x23];
        if (pcVar2 != NULL) {
            __cfi_slowpath_diag(0x6b84145aa65a8cf9,pcVar2,0x8001c70);
            (*pcVar2)(param_2[1],4,0);
        }
        pcVar2 = param_2[0x31];
        if (pcVar2 != NULL) {
            __cfi_slowpath_diag(0x6b84145aa65a8cf9,pcVar2,0x8001c70);
            (*pcVar2)(param_2[1],4,0);
        }
        pcVar2 = param_2[0x3f];
        if (pcVar2 != NULL) {
            __cfi_slowpath_diag(0x6b84145aa65a8cf9,pcVar2,0x8001c70);
            (*pcVar2)(param_2[1],4,0);
        }
        pcVar2 = param_2[0x4d];
        if (pcVar2 != NULL) {
            __cfi_slowpath_diag(0x6b84145aa65a8cf9,pcVar2,0x8001c70);
            (*pcVar2)(param_2[1],4,0);
        }
        pcVar2 = param_2[0x5b];
        if (pcVar2 != NULL) {
            __cfi_slowpath_diag(0x6b84145aa65a8cf9,pcVar2,0x8001c70);
            (*pcVar2)(param_2[1],4,0);
        }
        blocking_notifier_call_chain(param_2 + 0x80,3,param_2[0x7f]);
    }
    return;
}


// ===== sym.lpass_cdc_is_writeable_register.d78f4c0e5331e61fce8fb3234b764113.cfi_jt @ 0x08006820 (size 8) =====

uint8_t sym.lpass_cdc_is_writeable_register.d78f4c0e5331e61fce8fb3234b764113.cfi_jt(int64_t param_1,int64_t param_2)

{
    code *pcVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(param_1 + 0x98);
    if ((iVar4 != 0) && (uVar2 = sym.lpass_cdc_get_macro_id(*(iVar4 + 0xd8),param_2), -1 < uVar2)) {
        if (4 < uVar2) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5512,0x800a414);
            (*pcVar1)();
        }
        uVar3 = uVar2;
        if ((*(iVar4 + uVar3 + 0xd9) != '\0') && (*(reloc.lpass_cdc_tx_reg_access + uVar3 * 8) != 0)) {
            return *(*(reloc.lpass_cdc_tx_reg_access + uVar3 * 8) +
                    (param_2 - *(obj.macro_id_base_offset + uVar3 * 2) >> 2 & 0xffff)) >> 1 & 1;
        }
    }
    return 0;
}


// ===== sym.lpass_cdc_is_readable_register.d78f4c0e5331e61fce8fb3234b764113.cfi_jt @ 0x08006828 (size 8) =====

uint8_t sym.lpass_cdc_is_readable_register.d78f4c0e5331e61fce8fb3234b764113.cfi_jt(int64_t param_1,int64_t param_2)

{
    code *pcVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(param_1 + 0x98);
    if ((iVar4 != 0) && (uVar2 = sym.lpass_cdc_get_macro_id(*(iVar4 + 0xd8),param_2), -1 < uVar2)) {
        if (4 < uVar2) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5512,0x800a4a4);
            (*pcVar1)();
        }
        uVar3 = uVar2;
        if ((*(iVar4 + uVar3 + 0xd9) != '\0') && (*(reloc.lpass_cdc_tx_reg_access + uVar3 * 8) != 0)) {
            return *(*(reloc.lpass_cdc_tx_reg_access + uVar3 * 8) +
                    (param_2 - *(obj.macro_id_base_offset + uVar3 * 2) >> 2 & 0xffff)) & 1;
        }
    }
    return 0;
}


// ===== sym.lpass_cdc_is_volatile_register.d78f4c0e5331e61fce8fb3234b764113.cfi_jt @ 0x08006830 (size 8) =====

ulong sym.lpass_cdc_is_volatile_register.d78f4c0e5331e61fce8fb3234b764113.cfi_jt(ulong param_1,int param_2)

{
    ulong uVar1;
    int iVar2;
    
    uVar1 = 1;
    if (param_2 < 0x1818) {
        if (param_2 < 0x1400) {
            if (param_2 < 0x1088) {
                switch(param_2) {
                case 0x1020:
                case 0x1024:
                case 0x102c:
                case 0x1030:
                case 0x1034:
                case 0x1038:
                case 0x1040:
                case 0x1044:
                case 0x1078:
                    return uVar1;
                case 0x1021:
                case 0x1022:
                case 0x1023:
                case 0x1025:
                case 0x1026:
                case 0x1027:
                case 0x1028:
                case 0x1029:
                case 0x102a:
                case 0x102b:
                case 0x102d:
                case 0x102e:
                case 0x102f:
                case 0x1031:
                case 0x1032:
                case 0x1033:
                case 0x1035:
                case 0x1036:
                case 0x1037:
                case 0x1039:
                case 0x103a:
                case 0x103b:
                case 0x103c:
                case 0x103d:
                case 0x103e:
                case 0x103f:
                case 0x1041:
                case 0x1042:
                case 0x1043:
                case 0x1045:
                case 0x1046:
                case 0x1047:
                case 0x1048:
                case 0x1049:
                case 0x104a:
                case 0x104b:
                case 0x104c:
                case 0x104d:
                case 0x104e:
                case 0x104f:
                case 0x1050:
                case 0x1051:
                case 0x1052:
                case 0x1053:
                case 0x1054:
                case 0x1055:
                case 0x1056:
                case 0x1057:
                case 0x1058:
                case 0x1059:
                case 0x105a:
                case 0x105b:
                case 0x105c:
                case 0x105d:
                case 0x105e:
                case 0x105f:
                case 0x1060:
                case 0x1061:
                case 0x1062:
                case 0x1063:
                case 0x1064:
                case 0x1065:
                case 0x1066:
                case 0x1067:
                case 0x1068:
                case 0x1069:
                case 0x106a:
                case 0x106b:
                case 0x106c:
                case 0x106d:
                case 0x106e:
                case 0x106f:
                case 0x1070:
                case 0x1071:
                case 0x1072:
                case 0x1073:
                case 0x1074:
                case 0x1075:
                case 0x1076:
                case 0x1077:
                    goto code_r0x0800a70c;
                default:
                    if (0x14 < param_2 - 0xc0U) {
                        return 0;
                    }
                    if ((1 << (param_2 - 0xc0U & 0x1f) & 0x111111U) != 0) {
                        return uVar1;
                    }
                    return 0;
                }
            }
            if (param_2 < 0x1368) {
                if (param_2 == 0x1088) {
                    return uVar1;
                }
                iVar2 = 0x12d4;
            }
            else {
                if (param_2 == 0x1368) {
                    return uVar1;
                }
                iVar2 = 5000;
            }
        }
        else {
            switch(param_2) {
            case 0x145c:
            case 0x1464:
            case 0x1468:
            case 0x146c:
            case 0x1470:
            case 0x1474:
            case 0x1478:
            case 0x147c:
            case 0x1480:
            case 0x1484:
            case 0x14c0:
                goto code_r0x0800a508;
            case 0x145d:
            case 0x145e:
            case 0x145f:
            case 0x1460:
            case 0x1461:
            case 0x1462:
            case 0x1463:
            case 0x1465:
            case 0x1466:
            case 0x1467:
            case 0x1469:
            case 0x146a:
            case 0x146b:
            case 0x146d:
            case 0x146e:
            case 0x146f:
            case 0x1471:
            case 0x1472:
            case 0x1473:
            case 0x1475:
            case 0x1476:
            case 0x1477:
            case 0x1479:
            case 0x147a:
            case 0x147b:
            case 0x147d:
            case 0x147e:
            case 0x147f:
            case 0x1481:
            case 0x1482:
            case 0x1483:
            case 0x1485:
            case 0x1486:
            case 0x1487:
            case 0x1488:
            case 0x1489:
            case 0x148a:
            case 0x148b:
            case 0x148c:
            case 0x148d:
            case 0x148e:
            case 0x148f:
            case 0x1490:
            case 0x1491:
            case 0x1492:
            case 0x1493:
            case 0x1494:
            case 0x1495:
            case 0x1496:
            case 0x1497:
            case 0x1498:
            case 0x1499:
            case 0x149a:
            case 0x149b:
            case 0x149c:
            case 0x149d:
            case 0x149e:
            case 0x149f:
            case 0x14a0:
            case 0x14a1:
            case 0x14a2:
            case 0x14a3:
            case 0x14a4:
            case 0x14a5:
            case 0x14a6:
            case 0x14a7:
            case 0x14a8:
            case 0x14a9:
            case 0x14aa:
            case 0x14ab:
            case 0x14ac:
            case 0x14ad:
            case 0x14ae:
            case 0x14af:
            case 0x14b0:
            case 0x14b1:
            case 0x14b2:
            case 0x14b3:
            case 0x14b4:
            case 0x14b5:
            case 0x14b6:
            case 0x14b7:
            case 0x14b8:
            case 0x14b9:
            case 0x14ba:
            case 0x14bb:
            case 0x14bc:
            case 0x14bd:
            case 0x14be:
            case 0x14bf:
                goto code_r0x0800a70c;
            default:
                if ((param_2 - 0x151cU < 0x29) && ((1L << (param_2 - 0x151cU & 0x3f) & 0x11111111101U) != 0)) {
                    return uVar1;
                }
                iVar2 = 0x1400;
            }
        }
    }
    else if (param_2 < 0x21d4) {
        if (param_2 < 0x1aac) {
            if (param_2 < 0x1a2c) {
                if (param_2 == 0x1818) {
                    return uVar1;
                }
                iVar2 = 0x1878;
            }
            else {
                if (param_2 == 0x1a2c) {
                    return uVar1;
                }
                iVar2 = 0x1a30;
            }
        }
        else {
            switch(param_2) {
            case 0x1d10:
            case 0x1d14:
            case 0x1d18:
            case 0x1d1c:
            case 0x1d20:
            case 0x1d50:
            case 0x1d54:
            case 0x1d58:
            case 0x1d5c:
            case 0x1d60:
            case 0x1d90:
            case 0x1d94:
            case 0x1d98:
            case 0x1d9c:
            case 0x1da0:
                goto code_r0x0800a508;
            case 0x1d11:
            case 0x1d12:
            case 0x1d13:
            case 0x1d15:
            case 0x1d16:
            case 0x1d17:
            case 0x1d19:
            case 0x1d1a:
            case 0x1d1b:
            case 0x1d1d:
            case 0x1d1e:
            case 0x1d1f:
            case 0x1d21:
            case 0x1d22:
            case 0x1d23:
            case 0x1d24:
            case 0x1d25:
            case 0x1d26:
            case 0x1d27:
            case 0x1d28:
            case 0x1d29:
            case 0x1d2a:
            case 0x1d2b:
            case 0x1d2c:
            case 0x1d2d:
            case 0x1d2e:
            case 0x1d2f:
            case 0x1d30:
            case 0x1d31:
            case 0x1d32:
            case 0x1d33:
            case 0x1d34:
            case 0x1d35:
            case 0x1d36:
            case 0x1d37:
            case 0x1d38:
            case 0x1d39:
            case 0x1d3a:
            case 0x1d3b:
            case 0x1d3c:
            case 0x1d3d:
            case 0x1d3e:
            case 0x1d3f:
            case 0x1d40:
            case 0x1d41:
            case 0x1d42:
            case 0x1d43:
            case 0x1d44:
            case 0x1d45:
            case 0x1d46:
            case 0x1d47:
            case 0x1d48:
            case 0x1d49:
            case 0x1d4a:
            case 0x1d4b:
            case 0x1d4c:
            case 0x1d4d:
            case 0x1d4e:
            case 0x1d4f:
            case 0x1d51:
            case 0x1d52:
            case 0x1d53:
            case 0x1d55:
            case 0x1d56:
            case 0x1d57:
            case 0x1d59:
            case 0x1d5a:
            case 0x1d5b:
            case 0x1d5d:
            case 0x1d5e:
            case 0x1d5f:
            case 0x1d61:
            case 0x1d62:
            case 0x1d63:
            case 0x1d64:
            case 0x1d65:
            case 0x1d66:
            case 0x1d67:
            case 0x1d68:
            case 0x1d69:
            case 0x1d6a:
            case 0x1d6b:
            case 0x1d6c:
            case 0x1d6d:
            case 0x1d6e:
            case 0x1d6f:
            case 0x1d70:
            case 0x1d71:
            case 0x1d72:
            case 0x1d73:
            case 0x1d74:
            case 0x1d75:
            case 0x1d76:
            case 0x1d77:
            case 0x1d78:
            case 0x1d79:
            case 0x1d7a:
            case 0x1d7b:
            case 0x1d7c:
            case 0x1d7d:
            case 0x1d7e:
            case 0x1d7f:
            case 0x1d80:
            case 0x1d81:
            case 0x1d82:
            case 0x1d83:
            case 0x1d84:
            case 0x1d85:
            case 0x1d86:
            case 0x1d87:
            case 0x1d88:
            case 0x1d89:
            case 0x1d8a:
            case 0x1d8b:
            case 0x1d8c:
            case 0x1d8d:
            case 0x1d8e:
            case 0x1d8f:
            case 0x1d91:
            case 0x1d92:
            case 0x1d93:
            case 0x1d95:
            case 0x1d96:
            case 0x1d97:
            case 0x1d99:
            case 0x1d9a:
            case 0x1d9b:
            case 0x1d9d:
            case 0x1d9e:
            case 0x1d9f:
                goto code_r0x0800a70c;
            default:
                if (param_2 == 0x1aac) {
                    return uVar1;
                }
                iVar2 = 0x1ab0;
            }
        }
    }
    else if (param_2 < 0x3084) {
        if (param_2 < 0x2388) {
            if (param_2 == 0x21d4) {
                return uVar1;
            }
            iVar2 = 0x2368;
        }
        else {
            if (param_2 == 0x2388) {
                return uVar1;
            }
            if (param_2 == 0x2598) {
                return uVar1;
            }
            iVar2 = 0x25f8;
        }
    }
    else {
        if (param_2 < 0x41d4) {
            switch(param_2) {
            case 0x3084:
            case 0x3088:
            case 0x308c:
            case 0x3090:
            case 0x30c0:
            case 0x30c4:
            case 0x30c8:
            case 0x30cc:
                goto code_r0x0800a508;
            default:
                goto code_r0x0800a70c;
            }
        }
        if (param_2 < 0x4388) {
            if (param_2 == 0x41d4) {
                return uVar1;
            }
            iVar2 = 0x4368;
        }
        else {
            if (param_2 == 0x4388) {
                return uVar1;
            }
            if (param_2 == 0x4598) {
                return uVar1;
            }
            iVar2 = 0x45f8;
        }
    }
    if (param_2 == iVar2) {
code_r0x0800a508:
        return uVar1;
    }
code_r0x0800a70c:
    return 0;
}


// ===== sym.lpass_cdc_clk_rsc_request_clock.cfi_jt @ 0x08006838 (size 8) =====

int sym.lpass_cdc_clk_rsc_request_clock.cfi_jt(int64_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
    ulong *puVar1;
    code *pcVar2;
    int iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong *arg1;
    ulong uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        uVar5 = 0x8002c0e;
code_r0x0800ae4c:
        _printk(uVar5,"lpass_cdc_clk_rsc_request_clock");
        return -0x16;
    }
    if ((7 < param_2) && (7 < param_3)) {
        _printk(0x8001fc1,"lpass_cdc_clk_rsc_request_clock",param_3,param_2);
        return -0x16;
    }
    iVar4 = sym.lpass_cdc_get_rsc_clk_device_ptr(*(param_1 + 0x60));
    if (iVar4 == 0) {
        uVar5 = 0x8002830;
        goto code_r0x0800ae4c;
    }
    arg1 = *(iVar4 + 0x98);
    if (arg1 == NULL) {
        uVar5 = 0x800284e;
        goto code_r0x0800ae4c;
    }
    puVar1 = arg1 + 1;
    mutex_lock(puVar1);
    if ((*(arg1 + 0x1a) == '\0') && ((param_4 & 1) != 0)) {
        iVar3 = ___ratelimit(obj.lpass_cdc_clk_rsc_request_clock._rs,"lpass_cdc_clk_rsc_request_clock");
        if (iVar3 != 0) {
            _dev_err(*arg1,"%s: SSR is in progress..\n","lpass_cdc_clk_rsc_request_clock");
        }
        __trace_bprintk(0x800abe0,*0x800b000,"lpass_cdc_clk_rsc_request_clock");
        iVar3 = -0x16;
        goto code_r0x0800ae74;
    }
    if (7 < param_3) {
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5512,0x800b00c);
        (*pcVar2)();
    }
    *(arg1 + param_3 * 4 + 0xe0) = param_2;
    if (param_2 == param_3) {
        iVar3 = sym.lpass_cdc_clk_rsc_mux0_clk_request(arg1,param_3);
joined_r0x0800ac54:
        if (iVar3 < 0) goto code_r0x0800ae74;
    }
    else if (param_3 != 3) {
        iVar3 = sym.lpass_cdc_clk_rsc_mux1_clk_request(arg1,param_3);
        goto joined_r0x0800ac54;
    }
    if ((param_4 & 1) == 0) {
        if (param_2 == param_3 || param_3 != 3) {
            iVar3 = *(arg1 + 0xcc);
            if (iVar3 == *(arg1 + 0x15)) {
                while (iVar3 != 0) {
                    iVar3 = sym.lpass_cdc_clk_rsc_mux1_clk_request(arg1,3);
                    if (iVar3 < 0) goto code_r0x0800ae74;
                    if (*(arg1 + 0x15) < 1) {
                        iVar3 = ___ratelimit(obj.lpass_cdc_clk_rsc_mux0_clk_request._rs.26,
                                             "lpass_cdc_clk_rsc_mux0_clk_request");
                        if (iVar3 != 0) {
                            _dev_err(*arg1,"%s: clk_id: %d is already disabled\n","lpass_cdc_clk_rsc_mux0_clk_request"
                                     ,0);
                        }
                        *(arg1 + 0x15) = 0;
                    }
                    else {
                        iVar3 = *(arg1 + 0x15) + -1;
                        *(arg1 + 0x15) = iVar3;
                        if (iVar3 == 0) {
                            uVar5 = arg1[0xd];
                            clk_disable(uVar5);
                            clk_unprepare(uVar5);
                        }
                    }
                    iVar3 = *(arg1 + 0xcc) + -1;
                    *(arg1 + 0xcc) = iVar3;
                }
            }
            goto code_r0x0800af48;
        }
        iVar3 = *(arg1 + 0xb4);
        if (iVar3 != 0) {
            if (arg1[0x23] != 0) {
                if (iVar3 < 1) {
                    iVar3 = ___ratelimit(obj.lpass_cdc_clk_rsc_mux1_clk_request._rs.19,
                                         "lpass_cdc_clk_rsc_mux1_clk_request");
                    if (iVar3 != 0) {
                        _dev_err(*arg1,"%s: clk_id: %d is already disabled\n","lpass_cdc_clk_rsc_mux1_clk_request",3)
                        ;
                    }
                    *(arg1 + 0xb4) = 0;
                }
                else {
                    *(arg1 + 0xb4) = iVar3 + -1;
                    if (iVar3 + -1 == 0) {
                        uVar5 = arg1[0x10];
                        clk_disable(uVar5);
                        clk_unprepare(uVar5);
                    }
                }
            }
            goto code_r0x0800af48;
        }
        if (*(arg1 + 0xcc) == 0) goto code_r0x0800af48;
        if (*(arg1 + 0x15) < 1) {
            iVar3 = ___ratelimit(obj.lpass_cdc_clk_rsc_mux0_clk_request._rs.26,"lpass_cdc_clk_rsc_mux0_clk_request");
            if (iVar3 != 0) {
                _dev_err(*arg1,"%s: clk_id: %d is already disabled\n","lpass_cdc_clk_rsc_mux0_clk_request",0);
            }
            *(arg1 + 0x15) = 0;
        }
        else {
            iVar3 = *(arg1 + 0x15) + -1;
            *(arg1 + 0x15) = iVar3;
            if (iVar3 == 0) {
                uVar5 = arg1[0xd];
                clk_disable(uVar5);
                clk_unprepare(uVar5);
            }
        }
        iVar3 = *(arg1 + 0xcc) + -1;
    }
    else {
        if (param_2 == param_3 || param_3 != 3) {
            if (0 < *(arg1 + 0x15)) {
                iVar3 = *(arg1 + 0xb4);
                while (0 < iVar3) {
                    iVar3 = sym.lpass_cdc_clk_rsc_mux0_clk_request(arg1,0);
                    if (iVar3 < 0) goto code_r0x0800ae74;
                    if (arg1[0x23] == 0) {
code_r0x0800ac90:
                        iVar3 = *(arg1 + 0xb4);
                    }
                    else {
                        if (*(arg1 + 0xb4) < 1) {
                            iVar3 = ___ratelimit(obj.lpass_cdc_clk_rsc_mux1_clk_request._rs.19,
                                                 "lpass_cdc_clk_rsc_mux1_clk_request");
                            if (iVar3 != 0) {
                                _dev_err(*arg1,"%s: clk_id: %d is already disabled\n",
                                         "lpass_cdc_clk_rsc_mux1_clk_request",3);
                            }
                            *(arg1 + 0xb4) = 0;
                            iVar3 = *(arg1 + 0xcc) + 1;
                            goto code_r0x0800af40;
                        }
                        iVar3 = *(arg1 + 0xb4) + -1;
                        *(arg1 + 0xb4) = iVar3;
                        if (iVar3 == 0) {
                            uVar5 = arg1[0x10];
                            clk_disable(uVar5);
                            clk_unprepare(uVar5);
                            goto code_r0x0800ac90;
                        }
                    }
                    *(arg1 + 0xcc) = *(arg1 + 0xcc) + 1;
                }
            }
            goto code_r0x0800af48;
        }
        if (*(arg1 + 0x15) == 0) {
            iVar3 = sym.lpass_cdc_clk_rsc_mux1_clk_request(arg1,3);
            if (iVar3 < 0) goto code_r0x0800ae74;
            goto code_r0x0800af48;
        }
        iVar3 = sym.lpass_cdc_clk_rsc_mux0_clk_request(arg1,0);
        if (iVar3 < 0) {
code_r0x0800ae74:
            mutex_unlock(puVar1);
            return iVar3;
        }
        iVar3 = *(arg1 + 0xcc) + 1;
    }
code_r0x0800af40:
    *(arg1 + 0xcc) = iVar3;
code_r0x0800af48:
    __trace_bprintk(0x800af44,*0x800b000,"lpass_cdc_clk_rsc_request_clock",*(arg1 + param_3 * 4 + 0xa8),param_3,
                    param_4 & 1);
    mutex_unlock(puVar1);
    return 0;
}


// ===== sym.lpass_cdc_soc_codec_remove.9324bdfcbd927cfdef84d736718185f6.cfi_jt @ 0x08006840 (size 8) =====

void sym.lpass_cdc_soc_codec_remove.9324bdfcbd927cfdef84d736718185f6.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong *puVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = *(*(param_1 + 0x18) + 0x98);
    snd_event_client_deregister(*puVar2);
    pcVar1 = puVar2[0x1e];
    if (pcVar1 != NULL) {
        if (pcVar1 != sym.__typeid__ZTSFiP17snd_soc_componentE_global_addr) {
            __cfi_slowpath_diag(0xf0d2ea9a64921857,pcVar1,0x8001c90);
        }
        (*pcVar1)(param_1);
    }
    pcVar1 = puVar2[0x2c];
    if (pcVar1 != NULL) {
        if (pcVar1 != sym.__typeid__ZTSFiP17snd_soc_componentE_global_addr) {
            __cfi_slowpath_diag(0xf0d2ea9a64921857,pcVar1,0x8001c90);
        }
        (*pcVar1)(param_1);
    }
    pcVar1 = puVar2[0x3a];
    if (pcVar1 != NULL) {
        if (pcVar1 != sym.__typeid__ZTSFiP17snd_soc_componentE_global_addr) {
            __cfi_slowpath_diag(0xf0d2ea9a64921857,pcVar1,0x8001c90);
        }
        (*pcVar1)(param_1);
    }
    pcVar1 = puVar2[0x48];
    if (pcVar1 != NULL) {
        if (pcVar1 != sym.__typeid__ZTSFiP17snd_soc_componentE_global_addr) {
            __cfi_slowpath_diag(0xf0d2ea9a64921857,pcVar1,0x8001c90);
        }
        (*pcVar1)(param_1);
    }
    pcVar1 = puVar2[0x56];
    if (pcVar1 != NULL) {
        if (pcVar1 != sym.__typeid__ZTSFiP17snd_soc_componentE_global_addr) {
            __cfi_slowpath_diag(0xf0d2ea9a64921857,pcVar1,0x8001c90);
        }
        (*pcVar1)(param_1);
    }
    return;
}


// ===== sym.lpass_cdc_set_port_map @ 0x08006848 (size 316) =====

ulong sym.lpass_cdc_set_port_map(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong *in_x18;
    int64_t *piVar2;
    code *pcVar3;
    uint32_t uVar4;
    ulong *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((((arg1 != 0) && (arg2 != 0)) && (arg3 != 0)) && (piVar2 = *(*(arg1 + 0x18) + 0x98), piVar2 != NULL)) {
        iVar1 = of_device_is_compatible(*(*piVar2 + 0x2f0),0x8002081);
        if (iVar1 != 0) {
            puVar5 = arg3 + 8;
            uVar4 = 0;
            do {
                if (4 < *(puVar5 + -1)) {
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(0x5512,0x8006984);
                    (*pcVar3)();
                }
                pcVar3 = piVar2[*(puVar5 + -1) * 0xe + 0x25];
                if (pcVar3 != NULL) {
                    __cfi_slowpath_diag(0x65013fe89c46b56,pcVar3,0x8001af0);
                    (*pcVar3)(arg1,*(puVar5 + -4),0xd,*puVar5);
                }
                uVar4 = uVar4 + 1;
                puVar5 = puVar5 + 2;
            } while ((uVar4 & 0xffff) < arg2);
            return 0;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_set_port_map._rs,"lpass_cdc_set_port_map");
        if (iVar1 != 0) {
            _dev_err(*piVar2,"%s: invalid codec\n","lpass_cdc_set_port_map");
        }
    }
    return 0xffffffea;
}


// ===== sym.lpass_cdc_clear_amic_tx_hold @ 0x08006984 (size 188) =====

void sym.lpass_cdc_clear_amic_tx_hold(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        uVar3 = 0x8002c0e;
    }
    else {
        iVar2 = of_device_is_compatible(*(arg1 + 0x2f0),0x8002081);
        if (iVar2 != 0) {
            iVar4 = *(arg1 + 0x98);
            if (iVar4 == 0) {
                _dev_err(arg1,"%s: priv is null\n","lpass_cdc_clear_amic_tx_hold");
                return;
            }
            uVar1 = arg2 - 1;
            if (3 < (uVar1 & 0xffff)) {
                return;
            }
            blocking_notifier_call_chain(iVar4 + 0x400,*(uVar1 * 8 + 0x8003218),*(iVar4 + 0x3f8));
            return;
        }
        uVar3 = 0x80029c8;
    }
    _printk(uVar3,"lpass_cdc_clear_amic_tx_hold");
    return;
}


// ===== sym.lpass_cdc_get_device_ptr @ 0x08006a40 (size 252) =====

ulong sym.lpass_cdc_get_device_ptr(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_get_device_ptr._rs,"lpass_cdc_get_device_ptr");
        if (iVar1 == 0) {
            return 0;
        }
        uVar2 = 0x8002c0e;
    }
    else {
        iVar1 = of_device_is_compatible(*(arg1 + 0x2f0),0x8002081);
        if (iVar1 != 0) {
            if (((arg2 & 0xffff) < 5) && (*(arg1 + 0x98) != 0)) {
                return *(*(arg1 + 0x98) + (arg2 & 0xffffU) * 0x70 + 0x100);
            }
            iVar1 = ___ratelimit(obj.lpass_cdc_get_device_ptr._rs.5,"lpass_cdc_get_device_ptr");
            if (iVar1 == 0) {
                return 0;
            }
            _dev_err(arg1,"%s: priv is null or invalid macro\n","lpass_cdc_get_device_ptr");
            return 0;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_get_device_ptr._rs.4,"lpass_cdc_get_device_ptr");
        if (iVar1 == 0) {
            return 0;
        }
        uVar2 = 0x80029c8;
    }
    _printk(uVar2,"lpass_cdc_get_device_ptr");
    return 0;
}


// ===== sym.lpass_cdc_get_rsc_clk_device_ptr @ 0x08006b3c (size 224) =====

ulong sym.lpass_cdc_get_rsc_clk_device_ptr(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_get_rsc_clk_device_ptr._rs,"lpass_cdc_get_rsc_clk_device_ptr");
        if (iVar1 == 0) {
            return 0;
        }
        uVar2 = 0x8002c0e;
    }
    else {
        iVar1 = of_device_is_compatible(*(arg1 + 0x2f0),0x8002081);
        if (iVar1 != 0) {
            if (*(arg1 + 0x98) != 0) {
                return *(*(arg1 + 0x98) + 0x448);
            }
            iVar1 = ___ratelimit(obj.lpass_cdc_get_rsc_clk_device_ptr._rs.8,"lpass_cdc_get_rsc_clk_device_ptr");
            if (iVar1 == 0) {
                return 0;
            }
            _dev_err(arg1,"%s: priv is null\n","lpass_cdc_get_rsc_clk_device_ptr");
            return 0;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_get_rsc_clk_device_ptr._rs.7,"lpass_cdc_get_rsc_clk_device_ptr");
        if (iVar1 == 0) {
            return 0;
        }
        uVar2 = 0x80029c8;
    }
    _printk(uVar2,"lpass_cdc_get_rsc_clk_device_ptr");
    return 0;
}


// ===== sym.lpass_cdc_register_res_clk @ 0x08006c1c (size 268) =====

ulong sym.lpass_cdc_register_res_clk(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (arg2 == 0)) {
        iVar1 = ___ratelimit(obj.lpass_cdc_register_res_clk._rs,"lpass_cdc_register_res_clk");
        if (iVar1 != 0) {
            _printk(0x8002774,"lpass_cdc_register_res_clk");
        }
    }
    else {
        iVar1 = of_device_is_compatible(*(*(arg1 + 0x60) + 0x2f0),0x8002081);
        if (iVar1 == 0) {
            iVar1 = ___ratelimit(obj.lpass_cdc_register_res_clk._rs.10,"lpass_cdc_register_res_clk");
            if (iVar1 != 0) {
                _dev_err(arg1,"%s: child device :%pK not added yet\n","lpass_cdc_register_res_clk",arg1);
            }
        }
        else {
            iVar2 = *(*(arg1 + 0x60) + 0x98);
            if (iVar2 != 0) {
                *(iVar2 + 0x448) = arg1;
                *(iVar2 + 0x450) = arg2;
                return 0;
            }
            iVar1 = ___ratelimit(obj.lpass_cdc_register_res_clk._rs.12,"lpass_cdc_register_res_clk");
            if (iVar1 != 0) {
                _dev_err(arg1,"%s: priv is null\n","lpass_cdc_register_res_clk");
            }
        }
    }
    return 0xffffffea;
}


// ===== sym.lpass_cdc_unregister_res_clk @ 0x08006d28 (size 252) =====

void sym.lpass_cdc_unregister_res_clk(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_unregister_res_clk._rs,"lpass_cdc_unregister_res_clk");
        if (iVar1 != 0) {
            _printk(0x800292a,"lpass_cdc_unregister_res_clk");
        }
    }
    else {
        iVar1 = of_device_is_compatible(*(*(arg1 + 0x60) + 0x2f0),0x8002081);
        if (iVar1 == 0) {
            iVar1 = ___ratelimit(obj.lpass_cdc_unregister_res_clk._rs.14,"lpass_cdc_unregister_res_clk");
            if (iVar1 != 0) {
                _dev_err(arg1,"%s: child device :%pK not added\n","lpass_cdc_unregister_res_clk",arg1);
            }
        }
        else {
            iVar2 = *(*(arg1 + 0x60) + 0x98);
            if (iVar2 == 0) {
                iVar1 = ___ratelimit(obj.lpass_cdc_unregister_res_clk._rs.16,"lpass_cdc_unregister_res_clk");
                if (iVar1 != 0) {
                    _dev_err(arg1,"%s: priv is null\n","lpass_cdc_unregister_res_clk");
                }
            }
            else {
                *(iVar2 + 0x450) = 0;
                *(iVar2 + 0x448) = 0;
            }
        }
    }
    return;
}


// ===== sym.lpass_cdc_dmic_clk_enable @ 0x08006e24 (size 848) =====

ulong sym.lpass_cdc_dmic_clk_enable(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    uint32_t uVar3;
    int iVar4;
    uint uVar5;
    uint uVar6;
    uint64_t in_x3;
    ulong uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    code *pcVar10;
    int64_t iVar11;
    int64_t iVar12;
    uint8_t uVar13;
    int64_t iVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (7 < arg2) {
        iVar4 = ___ratelimit(obj.lpass_cdc_dmic_clk_enable._rs,"lpass_cdc_dmic_clk_enable");
        if (iVar4 == 0) {
            return 0xffffffea;
        }
        _dev_err(*(arg1 + 0x18),"%s: Invalid DMIC Selection\n","lpass_cdc_dmic_clk_enable");
        return 0xffffffea;
    }
    uVar8 = -(arg2 >> 0x1f) & 0xfffffff800000000 | arg2 << 3;
    uVar9 = -(arg2 >> 0x1f) & 0xfffffffc00000000 | arg2 << 2;
    iVar14 = *(uVar8 + 0x8005d58);
    iVar4 = arg3;
    iVar11 = *(uVar8 + 0x8005d98);
    uVar5 = *(uVar9 + 0x80031f8);
    iVar12 = *(*(arg1 + 0x18) + 0x98);
    uVar6 = *(uVar9 + 0x80031d8);
    if ((in_x3 & 1) == 0) {
        iVar2 = *(iVar12 + iVar14) + -1;
        *(iVar12 + iVar14) = iVar2;
        if (iVar2 == 0) {
            snd_soc_component_update_bits(arg1,uVar5,1,0);
            snd_soc_component_update_bits(arg1,uVar5,0xe,0);
            uVar13 = 0;
        }
        else {
            iVar14 = 0;
            if (iVar4 != 0) {
                iVar14 = 0x150;
            }
            pcVar10 = *(*(*(arg1 + 0x18) + 0x98) + iVar14 + 0x130);
            if (pcVar10 == NULL) {
                uVar3 = 1;
            }
            else {
                if (pcVar10 != sym.__typeid__ZTSFiP17snd_soc_componentE_global_addr) {
                    __cfi_slowpath_diag(0xf0d2ea9a64921857,pcVar10,0x8001b70);
                }
                uVar3 = (*pcVar10)(arg1);
                if (uVar3 < 0) {
                    uVar3 = 1;
                }
            }
            uVar13 = *(iVar12 + iVar11);
            if ((uVar3 & 0xff) < uVar13) {
                iVar14 = 0x150;
                if (iVar4 != 0) {
                    iVar14 = 0;
                }
                pcVar10 = *(*(*(arg1 + 0x18) + 0x98) + iVar14 + 0x130);
                if (pcVar10 == NULL) {
                    uVar3 = 1;
                }
                else {
                    if (pcVar10 != sym.__typeid__ZTSFiP17snd_soc_componentE_global_addr) {
                        __cfi_slowpath_diag(0xf0d2ea9a64921857,pcVar10,0x8001b70);
                    }
                    uVar3 = (*pcVar10)(arg1);
                    if (uVar3 < 0) {
                        uVar3 = 1;
                    }
                }
                uVar13 = uVar3;
                snd_soc_component_update_bits(arg1,0x3094,uVar6,uVar6);
                snd_soc_component_update_bits(arg1,uVar5,0xe,(uVar3 & 0xff) << 1);
                snd_soc_component_update_bits(arg1,0x3094,uVar6,0);
            }
        }
    }
    else {
        iVar1 = 0;
        if (iVar4 != 0) {
            iVar1 = 0x150;
        }
        pcVar10 = *(iVar12 + iVar1 + 0x130);
        if (pcVar10 == NULL) {
            uVar3 = 1;
        }
        else {
            if (pcVar10 != sym.__typeid__ZTSFiP17snd_soc_componentE_global_addr) {
                __cfi_slowpath_diag(0xf0d2ea9a64921857,pcVar10,0x8001b70);
            }
            uVar3 = (*pcVar10)(arg1);
            if (uVar3 < 0) {
                uVar3 = 1;
            }
        }
        iVar4 = *(iVar12 + iVar14);
        *(iVar12 + iVar14) = iVar4 + 1;
        if (iVar4 == 0) {
            snd_soc_component_update_bits(arg1,0x3094,0x80,0);
            snd_soc_component_update_bits(arg1,uVar5,0xe,(uVar3 & 0xff) << 1);
            uVar6 = 1;
            uVar7 = 1;
        }
        else {
            uVar13 = *(iVar12 + iVar11);
            if (*(iVar12 + iVar11) <= (uVar3 & 0xff)) goto code_r0x080070d8;
            snd_soc_component_update_bits(arg1,0x3094,uVar6,uVar6);
            snd_soc_component_update_bits(arg1,uVar5,0xe,(uVar3 & 0xff) << 1);
            uVar5 = 0x3094;
            uVar7 = 0;
        }
        snd_soc_component_update_bits(arg1,uVar5,uVar6,uVar7);
        uVar13 = uVar3;
    }
code_r0x080070d8:
    *(iVar12 + iVar11) = uVar13;
    return 0;
}


// ===== sym.lpass_cdc_is_va_macro_registered @ 0x08007174 (size 244) =====

uint64_t sym.lpass_cdc_is_va_macro_registered(int64_t arg1)

{
    int iVar1;
    uint64_t uVar2;
    char *pcVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        uVar2 = ___ratelimit(obj.lpass_cdc_is_va_macro_registered._rs,"lpass_cdc_is_va_macro_registered");
        if (uVar2 == 0) {
            return uVar2;
        }
        _printk(0x8002c0e,"lpass_cdc_is_va_macro_registered");
        return 0;
    }
    iVar1 = of_device_is_compatible(*(*(arg1 + 0x60) + 0x2f0),0x8002081);
    if (iVar1 == 0) {
        uVar2 = ___ratelimit(obj.lpass_cdc_is_va_macro_registered._rs.18,"lpass_cdc_is_va_macro_registered");
        if (uVar2 == 0) {
            return uVar2;
        }
        pcVar3 = "%s: child device calling is not added yet\n";
    }
    else {
        iVar4 = *(*(arg1 + 0x60) + 0x98);
        if (iVar4 != 0) {
            return *(iVar4 + 0xdc) != '\0';
        }
        uVar2 = ___ratelimit(obj.lpass_cdc_is_va_macro_registered._rs.20,"lpass_cdc_is_va_macro_registered");
        if (uVar2 == 0) {
            return uVar2;
        }
        pcVar3 = "%s: priv is null\n";
    }
    _dev_err(arg1,pcVar3,"lpass_cdc_is_va_macro_registered");
    return 0;
}


// ===== sym.lpass_cdc_register_macro @ 0x08007268 (size 896) =====

int sym.lpass_cdc_register_macro(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    ulong *puVar3;
    ulong uVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong *puVar6;
    uint64_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (arg3 == 0)) {
        _printk(0x8002000,"lpass_cdc_register_macro");
    }
    else {
        uVar1 = arg2;
        iVar2 = of_device_is_compatible(*(*(arg1 + 0x60) + 0x2f0),0x8002081);
        if (iVar2 == 0) {
            _dev_err(arg1,"%s: child device for macro:%d not added yet\n","lpass_cdc_register_macro",uVar1 & 0xffff);
        }
        else {
            if (((uVar1 & 0xffff) < 5) && (puVar6 = *(*(arg1 + 0x60) + 0x98), puVar6 != NULL)) {
                uVar7 = arg2 & 0xffff;
                puVar3 = puVar6 + uVar7 * 0xe + 0x1d;
                *(puVar3 + 0xd) = *(arg3 + 0x68);
                *(puVar3 + 0x6a) = *(arg3 + 0x6a);
                *puVar3 = *arg3;
                puVar3[1] = *(arg3 + 8);
                puVar3[0xc] = *(arg3 + 0x60);
                *(puVar3 + 2) = *(arg3 + 0x10);
                puVar3[4] = *(arg3 + 0x20);
                puVar3[6] = *(arg3 + 0x30);
                uVar4 = *(arg3 + 0x40);
                puVar3[3] = arg1;
                puVar3[8] = uVar4;
                *(puVar6 + (arg2 & 0xffffU) * 2 + 0x326) = *(obj.lpass_cdc_mclk_mux_tbl + uVar7 * 4);
                if ((uVar1 & 0xffff) == 3) {
                    puVar6[uVar7 * 0xe + 0x26] = *(arg3 + 0x48);
                    puVar6[uVar7 * 0xe + 0x24] = *(arg3 + 0x38);
                }
                else if ((arg2 & 0xffffU) == 0) {
                    puVar6[uVar7 * 0xe + 0x24] = *(arg3 + 0x38);
                    puVar6[uVar7 * 0xe + 0x27] = *(arg3 + 0x50);
                    puVar6[uVar7 * 0xe + 0x28] = *(arg3 + 0x58);
                    puVar6[uVar7 * 0xe + 0x26] = *(arg3 + 0x48);
                }
                puVar3 = puVar6 + 3;
                mutex_lock(puVar3);
                *(puVar6 + 100) = *(puVar6 + 100) + *(arg3 + 0x10);
                *(puVar6 + 0x322) = *(puVar6 + 0x322) + 1;
                (puVar6 + 0xd9)[uVar7] = '\x01';
                _dev_info(arg1,"%s: register macro successful:%d\n","lpass_cdc_register_macro",uVar1 & 0xffff);
                if (*(puVar6 + 0x322) == *(puVar6 + 0x324)) {
                    iVar5 = puVar6[99];
                    if (iVar5 == 0) {
                        iVar5 = devm_kmalloc(*puVar6,*(puVar6 + 100) * 0xf0,0xdc0);
                        puVar6[99] = iVar5;
                        if (iVar5 == 0) {
                            _dev_err(arg1,"%s: copy_dais failed\n","lpass_cdc_register_macro");
                            mutex_unlock(puVar3);
                            return -0xc;
                        }
                    }
                    if (puVar6[0x21] != 0) {
                        memcpy(iVar5,puVar6[0x21],*(puVar6 + 0x1f) * 0xf0);
                        iVar5 = iVar5 + *(puVar6 + 0x1f) * 0xf0;
                    }
                    if (puVar6[0x2f] != 0) {
                        memcpy(iVar5,puVar6[0x2f],*(puVar6 + 0x2d) * 0xf0);
                        iVar5 = iVar5 + *(puVar6 + 0x2d) * 0xf0;
                    }
                    if (puVar6[0x3d] != 0) {
                        memcpy(iVar5,puVar6[0x3d],*(puVar6 + 0x3b) * 0xf0);
                        iVar5 = iVar5 + *(puVar6 + 0x3b) * 0xf0;
                    }
                    if (puVar6[0x4b] != 0) {
                        memcpy(iVar5,puVar6[0x4b],*(puVar6 + 0x49) * 0xf0);
                        iVar5 = iVar5 + *(puVar6 + 0x49) * 0xf0;
                    }
                    if (puVar6[0x59] != 0) {
                        memcpy(iVar5,puVar6[0x59],*(puVar6 + 0x57) * 0xf0);
                    }
                    if (*(puVar6 + 0xd9) == '\0') {
                        *0x80004a0 = 2;
                        *(puVar6 + 0x32a) = 2;
                        *0x80004a4 = 3;
                        *(puVar6 + 0x32c) = 3;
                    }
                    iVar2 = snd_soc_register_component(*(arg1 + 0x60),obj.lpass_cdc,puVar6[99],*(puVar6 + 100));
                    if (iVar2 < 0) {
                        _dev_err(arg1,"%s: register codec failed\n","lpass_cdc_register_macro");
                        mutex_unlock(puVar3);
                        return iVar2;
                    }
                }
                mutex_unlock(puVar3);
                return 0;
            }
            _dev_err(arg1,"%s: priv is null or invalid macro\n","lpass_cdc_register_macro");
        }
    }
    return -0x16;
}


// ===== sym.lpass_cdc_unregister_macro @ 0x080075e8 (size 372) =====

void sym.lpass_cdc_unregister_macro(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint16_t uVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong *puVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        iVar4 = ___ratelimit(obj.lpass_cdc_unregister_macro._rs,"lpass_cdc_unregister_macro");
        if (iVar4 == 0) {
            return;
        }
        _printk(0x8002c0e,"lpass_cdc_unregister_macro");
        return;
    }
    uVar3 = arg2;
    iVar4 = of_device_is_compatible(*(*(arg1 + 0x60) + 0x2f0),0x8002081);
    if (iVar4 == 0) {
        iVar4 = ___ratelimit(obj.lpass_cdc_unregister_macro._rs.26,"lpass_cdc_unregister_macro");
        if (iVar4 == 0) {
            return;
        }
        _dev_err(arg1,"%s: macro:%d not in valid registered macro-list\n","lpass_cdc_unregister_macro",uVar3 & 0xffff
                );
        return;
    }
    if ((4 < (uVar3 & 0xffff)) || (iVar5 = *(*(arg1 + 0x60) + 0x98), iVar5 == 0)) {
        iVar4 = ___ratelimit(obj.lpass_cdc_unregister_macro._rs.28,"lpass_cdc_unregister_macro");
        if (iVar4 == 0) {
            return;
        }
        _dev_err(arg1,"%s: priv is null or invalid macro\n","lpass_cdc_unregister_macro");
        return;
    }
    uVar6 = arg2 & 0xffff;
    iVar1 = iVar5 + 0xe8;
    puVar8 = iVar1 + uVar6 * 0x70;
    *puVar8 = 0;
    *(puVar8 + 2) = 0;
    puVar8[6] = 0;
    puVar8[3] = 0;
    puVar8[4] = 0;
    if ((uVar3 & 0xffff) != 3) {
        if ((arg2 & 0xffffU) != 0) goto code_r0x08007684;
        iVar7 = iVar1 + uVar6 * 0x70;
        *(iVar7 + 0x38) = 0;
        *(iVar7 + 0x50) = 0;
        *(iVar7 + 0x58) = 0;
    }
    *(iVar1 + uVar6 * 0x70 + 0x48) = 0;
code_r0x08007684:
    uVar2 = *(iVar5 + 0x322) - 1;
    *(iVar5 + 0x322) = uVar2;
    if (*(iVar5 + 0x324) - 1 == uVar2) {
        snd_soc_unregister_component(*(arg1 + 0x60));
    }
    return;
}


// ===== sym.lpass_cdc_wsa_pa_on @ 0x0800775c (size 252) =====

void sym.lpass_cdc_wsa_pa_on(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    char *pcVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_pa_on._rs,"lpass_cdc_wsa_pa_on");
        if (iVar1 == 0) {
            return;
        }
        _printk(0x8002c0e,"lpass_cdc_wsa_pa_on");
        return;
    }
    iVar1 = of_device_is_compatible(*(*(arg1 + 0x60) + 0x2f0),0x8002081);
    if (iVar1 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_pa_on._rs.29,"lpass_cdc_wsa_pa_on");
        if (iVar1 == 0) {
            return;
        }
        pcVar3 = "%s: not a valid child dev\n";
    }
    else {
        iVar4 = *(*(arg1 + 0x60) + 0x98);
        if (iVar4 != 0) {
            if ((arg2 & 1U) == 0) {
                uVar2 = 5;
            }
            else {
                uVar2 = 6;
            }
            blocking_notifier_call_chain(iVar4 + 0x400,uVar2,*(iVar4 + 0x3f8));
            return;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_wsa_pa_on._rs.31,"lpass_cdc_wsa_pa_on");
        if (iVar1 == 0) {
            return;
        }
        pcVar3 = "%s: priv is null\n";
    }
    _dev_err(arg1,pcVar3,"lpass_cdc_wsa_pa_on");
    return;
}


// ===== sym.lpass_cdc_get_version @ 0x08007858 (size 160) =====

uint sym.lpass_cdc_get_version(int64_t arg1)

{
    int iVar1;
    char *pcVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x8002c0e,"lpass_cdc_get_version");
    }
    else {
        iVar1 = of_device_is_compatible(*(*(arg1 + 0x60) + 0x2f0),0x8002081);
        if (iVar1 == 0) {
            pcVar2 = "%s: child device for macro not added yet\n";
        }
        else {
            iVar3 = *(*(arg1 + 0x60) + 0x98);
            if (iVar3 != 0) {
                return *(iVar3 + 0x360);
            }
            pcVar2 = "%s: priv is null\n";
        }
        _dev_err(arg1,pcVar2,"lpass_cdc_get_version");
    }
    return 0xffffffea;
}


// ===== sym.lpass_cdc_info_create_codec_entry @ 0x080078f8 (size 292) =====

ulong sym.lpass_cdc_info_create_codec_entry(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = 0xffffffea;
    if ((arg1 != 0) && (arg2 != 0)) {
        iVar5 = *(*(arg2 + 0x18) + 0x98);
        if (*(iVar5 + 0x388) == 0) {
            iVar4 = *(arg2 + 0x20);
            iVar3 = snd_info_create_module_entry(*(arg1 + 0x38),"lpass-cdc");
            *(iVar5 + 0x388) = iVar3;
            if (iVar3 != 0) {
                *(iVar3 + 8) = 0x416d;
                iVar1 = snd_info_register(*(iVar5 + 0x388));
                if (-1 < iVar1) {
                    iVar3 = snd_info_create_card_entry(*(iVar4 + 0x48),"version",*(iVar5 + 0x388));
                    if (iVar3 == 0) {
                        iVar1 = ___ratelimit(obj.lpass_cdc_info_create_codec_entry._rs,
                                             "lpass_cdc_info_create_codec_entry");
                        if (iVar1 != 0) {
                            _dev_err(*(arg2 + 0x18),"%s: failed to create lpass_cdc version entry\n",
                                     "lpass_cdc_info_create_codec_entry");
                        }
                    }
                    else {
                        *(iVar3 + 0x40) = iVar5;
                        *(iVar3 + 0x10) = 0x20;
                        *(iVar3 + 0x18) = 1;
                        *(iVar3 + 0x20) = obj.lpass_cdc_info_ops;
                        iVar1 = snd_info_register();
                        if (-1 < iVar1) {
                            *(iVar5 + 0x390) = iVar3;
                            return 0;
                        }
                        snd_info_free_entry(iVar3);
                    }
                }
                snd_info_free_entry(*(iVar5 + 0x388));
            }
            uVar2 = 0xfffffff4;
        }
        else {
            uVar2 = 0;
        }
    }
    return uVar2;
}


// ===== sym.lpass_cdc_register_wake_irq @ 0x08007a1c (size 240) =====

ulong sym.lpass_cdc_register_wake_irq(int64_t arg1,int64_t arg2)

{
    int iVar1;
    code *pcVar2;
    ulong *in_x18;
    int64_t *piVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 != 0) && (piVar3 = *(*(arg1 + 0x18) + 0x98), piVar3 != NULL)) {
        iVar1 = of_device_is_compatible(*(*piVar3 + 0x2f0),0x8002081);
        if (iVar1 != 0) {
            pcVar2 = piVar3[0x4e];
            if (pcVar2 != NULL) {
                if (pcVar2 != sym.__typeid__ZTSFiP17snd_soc_componentjE_global_addr) {
                    __cfi_slowpath_diag(0x297acb8b67047b9e,pcVar2,0x8001b10);
                }
                (*pcVar2)(arg1,arg2 & 0xffffffff);
            }
            return 0;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_register_wake_irq._rs,"lpass_cdc_register_wake_irq");
        if (iVar1 != 0) {
            _dev_err(*(arg1 + 0x18),"%s: invalid codec\n","lpass_cdc_register_wake_irq");
        }
    }
    return 0xffffffea;
}


// ===== sym.lpass_cdc_tx_mclk_enable @ 0x08007b0c (size 256) =====

ulong sym.lpass_cdc_tx_mclk_enable(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    code *pcVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 != 0) && (piVar4 = *(*(arg1 + 0x18) + 0x98), piVar4 != NULL)) {
        iVar1 = of_device_is_compatible(*(*piVar4 + 0x2f0),0x8002081);
        if (iVar1 != 0) {
            pcVar3 = piVar4[0x28];
            if (pcVar3 != NULL) {
                if (1 < (pcVar3 + -0x8006738 >> 3 | pcVar3 << 0x3d)) {
                    __cfi_slowpath_diag(0xecc48172f489f632,pcVar3,0x8001b30);
                }
                uVar2 = (*pcVar3)(arg1,arg2 & 1);
                return uVar2;
            }
            return 0;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_tx_mclk_enable._rs,"lpass_cdc_tx_mclk_enable");
        if (iVar1 != 0) {
            _dev_err(*(arg1 + 0x18),"%s: invalid codec\n","lpass_cdc_tx_mclk_enable");
            return 0xffffffea;
        }
    }
    return 0xffffffea;
}


// ===== sym.lpass_cdc_register_event_listener @ 0x08007c0c (size 256) =====

ulong sym.lpass_cdc_register_event_listener(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    code *pcVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 != 0) && (piVar4 = *(*(arg1 + 0x18) + 0x98), piVar4 != NULL)) {
        iVar1 = of_device_is_compatible(*(*piVar4 + 0x2f0),0x8002081);
        if (iVar1 != 0) {
            pcVar3 = piVar4[0x27];
            if (pcVar3 != NULL) {
                if (1 < (pcVar3 + -0x8006738 >> 3 | pcVar3 << 0x3d)) {
                    __cfi_slowpath_diag(0xecc48172f489f632,pcVar3,0x8001b50);
                }
                uVar2 = (*pcVar3)(arg1,arg2 & 1);
                return uVar2;
            }
            return 0;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_register_event_listener._rs,"lpass_cdc_register_event_listener");
        if (iVar1 != 0) {
            _dev_err(*(arg1 + 0x18),"%s: invalid codec\n","lpass_cdc_register_event_listener");
            return 0xffffffea;
        }
    }
    return 0xffffffea;
}


// ===== sym.lpass_cdc_runtime_resume @ 0x08007d0c (size 504) =====

void sym.lpass_cdc_runtime_resume(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(arg1 + 0x60) + 0x98);
    __trace_bprintk(0x8007d2c,*0x800b000,"lpass_cdc_runtime_resume");
    mutex_lock(iVar2 + 0xa8);
    if (*(iVar2 + 0x368) != 0) {
        iVar1 = *(iVar2 + 0x378);
        if (iVar1 == 0) {
            iVar1 = digital_cdc_rsc_mgr_hw_vote_enable(*(iVar2 + 0x368),arg1);
            if (iVar1 < 0) {
                iVar1 = ___ratelimit(obj.lpass_cdc_runtime_resume._rs,"lpass_cdc_runtime_resume");
                if (iVar1 != 0) {
                    _dev_err(arg1,"%s:lpass core hw enable failed\n","lpass_cdc_runtime_resume");
                }
                goto code_r0x08007da4;
            }
            iVar1 = *(iVar2 + 0x378);
        }
        *(iVar2 + 0x378) = iVar1 + 1;
        __trace_bprintk(0x8007d84,*0x800b000,"lpass_cdc_runtime_resume");
    }
code_r0x08007da4:
    if (*(iVar2 + 0x370) == 0) goto code_r0x08007e18;
    iVar1 = *(iVar2 + 0x37c);
    if (iVar1 == 0) {
        iVar1 = digital_cdc_rsc_mgr_hw_vote_enable(*(iVar2 + 0x370),arg1);
        if (-1 < iVar1) {
            iVar1 = *(iVar2 + 0x37c);
            goto code_r0x08007dc4;
        }
        iVar1 = ___ratelimit(obj.lpass_cdc_runtime_resume._rs.43,"lpass_cdc_runtime_resume");
        if (iVar1 != 0) {
            _dev_err(arg1,"%s:lpass audio hw enable failed\n","lpass_cdc_runtime_resume");
        }
    }
    else {
code_r0x08007dc4:
        *(iVar2 + 0x37c) = iVar1 + 1;
        __trace_bprintk(0x8007dcc,*0x800b000,"lpass_cdc_runtime_resume");
    }
    iVar1 = *(iVar2 + 0x380);
    if (iVar1 == 0) {
        iVar1 = sym.lpass_cdc_clk_rsc_request_clock(arg1,0,0,1);
        if (iVar1 < 0) {
            iVar1 = ___ratelimit(obj.lpass_cdc_runtime_resume._rs.49,"lpass_cdc_runtime_resume");
            if (iVar1 != 0) {
                _dev_err(arg1,"%s:lpass Tx core clk enable failed\n","lpass_cdc_runtime_resume");
            }
            goto code_r0x08007e18;
        }
        iVar1 = *(iVar2 + 0x380);
    }
    *(iVar2 + 0x380) = iVar1 + 1;
code_r0x08007e18:
    mutex_unlock(iVar2 + 0xa8);
    return;
}


// ===== sym.lpass_cdc_runtime_suspend @ 0x08007f04 (size 380) =====

void sym.lpass_cdc_runtime_suspend(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(arg1 + 0x60) + 0x98);
    __trace_bprintk(0x8007f24,*0x800b000,"lpass_cdc_runtime_suspend");
    mutex_lock(iVar2 + 0xa8);
    iVar1 = *(iVar2 + 0x378);
    if (*(iVar2 + 0x368) != 0) {
        iVar1 = iVar1 + -1;
        *(iVar2 + 0x378) = iVar1;
        if (iVar1 == 0) {
            digital_cdc_rsc_mgr_hw_vote_disable(*(iVar2 + 0x368),arg1);
            iVar1 = *(iVar2 + 0x378);
        }
        if (iVar1 < 0) {
            iVar1 = 0;
            *(iVar2 + 0x378) = 0;
        }
    }
    __trace_bprintk(0x8007f70,*0x800b000,"lpass_cdc_runtime_suspend",iVar1);
    iVar1 = *(iVar2 + 0x37c);
    if (*(iVar2 + 0x370) != 0) {
        iVar1 = iVar1 + -1;
        *(iVar2 + 0x37c) = iVar1;
        if (iVar1 == 0) {
            digital_cdc_rsc_mgr_hw_vote_disable(*(iVar2 + 0x370),arg1);
            iVar1 = *(iVar2 + 0x37c);
        }
        if (iVar1 < 0) {
            iVar1 = 0;
            *(iVar2 + 0x37c) = 0;
        }
    }
    __trace_bprintk(0x8007fac,*0x800b000,"lpass_cdc_runtime_suspend",iVar1);
    iVar1 = *(iVar2 + 0x380) + -1;
    *(iVar2 + 0x380) = iVar1;
    if (iVar1 == 0) {
        sym.lpass_cdc_clk_rsc_request_clock(arg1,0,0,0);
        iVar1 = *(iVar2 + 0x380);
    }
    if (iVar1 < 0) {
        *(iVar2 + 0x380) = 0;
    }
    mutex_unlock(iVar2 + 0xa8);
    return;
}


// ===== sym.lpass_cdc_check_core_votes @ 0x08008080 (size 188) =====

void sym.lpass_cdc_check_core_votes(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(*(arg1 + 0x60) + 0x98);
    __trace_bprintk(0x800809c,*0x800b000,"lpass_cdc_check_core_votes");
    iVar1 = iVar1 + 0xa8;
    mutex_lock(iVar1);
    mutex_unlock(iVar1);
    return;
}


// ===== sym.lpass_cdc_version_read @ 0x0800813c (size 348) =====

uint64_t sym.lpass_cdc_version_read(int64_t arg1,uchar noname_1 [16],uchar noname_2 [16],int64_t arg2)

{
    uint uVar1;
    uint16_t uVar2;
    int64_t iVar3;
    bool bVar4;
    bool bVar5;
    bool bVar6;
    char cVar7;
    char cVar8;
    int iVar9;
    uint32_t uVar10;
    uint64_t uVar11;
    ulong uVar12;
    char *pcVar13;
    int64_t iVar14;
    uint uVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar16;
    code *pcVar17;
    uint64_t uVar18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iVar14 = *(iVar14 + 0x5e0);
    if (*(arg1 + 0x40) == 0) {
        iVar9 = ___ratelimit(obj.lpass_cdc_version_read._rs,"lpass_cdc_version_read");
        if (iVar9 == 0) {
            uVar11 = 0xffffffffffffffea;
        }
        else {
            _printk(0x8002d45,"lpass_cdc_version_read");
            uVar11 = 0xffffffffffffffea;
        }
    }
    else {
        uVar10 = *(*(arg1 + 0x40) + 0x360) - 1;
        if (uVar10 < 7) {
    //switch table (7 cases) at 0x8001df0
            switch(*(uVar10 + 0x8001df0) * 4 + 0x800819c) {
            case 0x80081a0:
                break;
            case 0x80081d0:
                break;
            case 0x80081e0:
                break;
            case 0x80081f0:
                goto code_r0x080081f0;
            case 0x8008200:
                break;
            case 0x8008210:
                break;
            case 0x8008220:
            }
        }
        else {
code_r0x080081f0:
        }
        uVar11 = simple_read_from_buffer(arg2);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iVar14) {
        return uVar11;
    }
    iVar14 = __stack_chk_fail(uVar11);
    *extraout_x18 = sym.lpass_cdc_soc_codec_probe;
    puVar16 = *(*(iVar14 + 0x18) + 0x98);
    snd_soc_component_init_regmap(iVar14,puVar16[2]);
    if (*(puVar16 + 0x6c) == 0) {
        uVar2 = *(puVar16 + 0x322);
        uVar10 = uVar2;
        if ((uVar2 != 1) && (uVar2 != 2)) {
            if (uVar2 < 3) goto code_r0x080082f0;
            uVar10 = 3;
        }
        *(puVar16 + 0x6c) = uVar10;
    }
code_r0x080082f0:
    cVar7 = snd_soc_component_read(iVar14,0x30c0);
    cVar8 = snd_soc_component_read(iVar14,0x30c4);
    uVar10 = snd_soc_component_read(iVar14,0x30c8);
    bVar4 = cVar8 == '\x0f';
    bVar5 = cVar7 == '\x02';
    bVar6 = (uVar10 & 0xfe) == 0x60;
    if (((((bVar5 && bVar4) && bVar6) || (bVar5 && bVar4)) || (cVar7 == '\x01' && bVar4)) || (bVar5 && cVar8 == '\x0e'))
    {
        uVar15 = 4;
        if (bVar5 && cVar8 == '\x0e') {
            uVar15 = 5;
        }
        uVar1 = 6;
        if (!bVar5 || !bVar4) {
            uVar1 = uVar15;
        }
        uVar15 = 7;
        if ((!bVar5 || !bVar4) || !bVar6) {
            uVar15 = uVar1;
        }
        *(puVar16 + 0x6c) = uVar15;
    }
    pcVar17 = puVar16[0x1d];
    if (pcVar17 == NULL) {
code_r0x080083bc:
        pcVar17 = puVar16[0x2b];
        if (pcVar17 != NULL) {
            if (pcVar17 != sym.__typeid__ZTSFiP17snd_soc_componentE_global_addr) {
                __cfi_slowpath_diag(0xf0d2ea9a64921857,pcVar17,0x8001b90);
            }
            uVar10 = (*pcVar17)(iVar14);
            if (uVar10 < 0) {
                uVar11 = uVar10;
                uVar18 = 1;
                goto code_r0x080084b0;
            }
        }
        pcVar17 = puVar16[0x39];
        if (pcVar17 != NULL) {
            if (pcVar17 != sym.__typeid__ZTSFiP17snd_soc_componentE_global_addr) {
                __cfi_slowpath_diag(0xf0d2ea9a64921857,pcVar17,0x8001b90);
            }
            uVar10 = (*pcVar17)(iVar14);
            if (uVar10 < 0) {
                uVar11 = uVar10;
                uVar18 = 2;
                goto code_r0x080084b0;
            }
        }
        pcVar17 = puVar16[0x47];
        if (pcVar17 != NULL) {
            if (pcVar17 != sym.__typeid__ZTSFiP17snd_soc_componentE_global_addr) {
                __cfi_slowpath_diag(0xf0d2ea9a64921857,pcVar17,0x8001b90);
            }
            uVar10 = (*pcVar17)(iVar14);
            if (uVar10 < 0) {
                uVar11 = uVar10;
                uVar18 = 3;
                goto code_r0x080084b0;
            }
        }
        pcVar17 = puVar16[0x55];
        if (pcVar17 != NULL) {
            if (pcVar17 != sym.__typeid__ZTSFiP17snd_soc_componentE_global_addr) {
                __cfi_slowpath_diag(0xf0d2ea9a64921857,pcVar17,0x8001b90);
            }
            uVar10 = (*pcVar17)(iVar14);
            if (uVar10 < 0) {
                uVar11 = uVar10;
                uVar18 = 4;
                goto code_r0x080084b0;
            }
        }
        puVar16[1] = iVar14;
        uVar10 = snd_event_client_register
                           (*puVar16,reloc.lpass_cdc_ssr_enable.9324bdfcbd927cfdef84d736718185f6.cfi_jt,puVar16);
        uVar18 = uVar10;
        if (uVar10 == 0) {
            snd_event_notify(*puVar16,1);
            return 0;
        }
        uVar12 = *(iVar14 + 0x18);
        pcVar13 = "%s: Registration with SND event FWK failed ret = %d\n";
        uVar11 = uVar18;
    }
    else {
        if (pcVar17 != sym.__typeid__ZTSFiP17snd_soc_componentE_global_addr) {
            __cfi_slowpath_diag(0xf0d2ea9a64921857,pcVar17,0x8001b90);
        }
        uVar10 = (*pcVar17)(iVar14);
        if (-1 < uVar10) goto code_r0x080083bc;
        uVar11 = uVar10;
        uVar18 = 0;
code_r0x080084b0:
        uVar12 = *(iVar14 + 0x18);
        pcVar13 = "%s: init for macro %d failed\n";
    }
    _dev_err(uVar12,pcVar13,"lpass_cdc_soc_codec_probe",uVar18);
    return uVar11;
}


// ===== sym.lpass_cdc_soc_codec_probe @ 0x08008298 (size 768) =====

int sym.lpass_cdc_soc_codec_probe(int64_t arg1)

{
    uint uVar1;
    uint16_t uVar2;
    bool bVar3;
    bool bVar4;
    bool bVar5;
    char cVar6;
    char cVar7;
    uint32_t uVar8;
    int iVar9;
    ulong uVar10;
    char *pcVar11;
    int iVar12;
    uint uVar13;
    ulong *in_x18;
    ulong *puVar14;
    code *pcVar15;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar14 = *(*(arg1 + 0x18) + 0x98);
    snd_soc_component_init_regmap(arg1,puVar14[2]);
    if (*(puVar14 + 0x6c) == 0) {
        uVar2 = *(puVar14 + 0x322);
        uVar8 = uVar2;
        if ((uVar2 != 1) && (uVar2 != 2)) {
            if (uVar2 < 3) goto code_r0x080082f0;
            uVar8 = 3;
        }
        *(puVar14 + 0x6c) = uVar8;
    }
code_r0x080082f0:
    cVar6 = snd_soc_component_read(arg1,0x30c0);
    cVar7 = snd_soc_component_read(arg1,0x30c4);
    uVar8 = snd_soc_component_read(arg1,0x30c8);
    bVar3 = cVar7 == '\x0f';
    bVar4 = cVar6 == '\x02';
    bVar5 = (uVar8 & 0xfe) == 0x60;
    if (((((bVar4 && bVar3) && bVar5) || (bVar4 && bVar3)) || (cVar6 == '\x01' && bVar3)) || (bVar4 && cVar7 == '\x0e'))
    {
        uVar13 = 4;
        if (bVar4 && cVar7 == '\x0e') {
            uVar13 = 5;
        }
        uVar1 = 6;
        if (!bVar4 || !bVar3) {
            uVar1 = uVar13;
        }
        uVar13 = 7;
        if ((!bVar4 || !bVar3) || !bVar5) {
            uVar13 = uVar1;
        }
        *(puVar14 + 0x6c) = uVar13;
    }
    pcVar15 = puVar14[0x1d];
    if (pcVar15 == NULL) {
code_r0x080083bc:
        pcVar15 = puVar14[0x2b];
        if (pcVar15 != NULL) {
            if (pcVar15 != sym.__typeid__ZTSFiP17snd_soc_componentE_global_addr) {
                __cfi_slowpath_diag(0xf0d2ea9a64921857,pcVar15,0x8001b90);
            }
            iVar9 = (*pcVar15)(arg1);
            if (iVar9 < 0) {
                iVar12 = 1;
                goto code_r0x080084b0;
            }
        }
        pcVar15 = puVar14[0x39];
        if (pcVar15 != NULL) {
            if (pcVar15 != sym.__typeid__ZTSFiP17snd_soc_componentE_global_addr) {
                __cfi_slowpath_diag(0xf0d2ea9a64921857,pcVar15,0x8001b90);
            }
            iVar9 = (*pcVar15)(arg1);
            if (iVar9 < 0) {
                iVar12 = 2;
                goto code_r0x080084b0;
            }
        }
        pcVar15 = puVar14[0x47];
        if (pcVar15 != NULL) {
            if (pcVar15 != sym.__typeid__ZTSFiP17snd_soc_componentE_global_addr) {
                __cfi_slowpath_diag(0xf0d2ea9a64921857,pcVar15,0x8001b90);
            }
            iVar9 = (*pcVar15)(arg1);
            if (iVar9 < 0) {
                iVar12 = 3;
                goto code_r0x080084b0;
            }
        }
        pcVar15 = puVar14[0x55];
        if (pcVar15 != NULL) {
            if (pcVar15 != sym.__typeid__ZTSFiP17snd_soc_componentE_global_addr) {
                __cfi_slowpath_diag(0xf0d2ea9a64921857,pcVar15,0x8001b90);
            }
            iVar9 = (*pcVar15)(arg1);
            if (iVar9 < 0) {
                iVar12 = 4;
                goto code_r0x080084b0;
            }
        }
        puVar14[1] = arg1;
        iVar9 = snd_event_client_register
                          (*puVar14,reloc.lpass_cdc_ssr_enable.9324bdfcbd927cfdef84d736718185f6.cfi_jt,puVar14);
        if (iVar9 == 0) {
            snd_event_notify(*puVar14,1);
            return 0;
        }
        uVar10 = *(arg1 + 0x18);
        pcVar11 = "%s: Registration with SND event FWK failed ret = %d\n";
        iVar12 = iVar9;
    }
    else {
        if (pcVar15 != sym.__typeid__ZTSFiP17snd_soc_componentE_global_addr) {
            __cfi_slowpath_diag(0xf0d2ea9a64921857,pcVar15,0x8001b90);
        }
        iVar9 = (*pcVar15)(arg1);
        if (-1 < iVar9) goto code_r0x080083bc;
        iVar12 = 0;
code_r0x080084b0:
        uVar10 = *(arg1 + 0x18);
        pcVar11 = "%s: init for macro %d failed\n";
    }
    _dev_err(uVar10,pcVar11,"lpass_cdc_soc_codec_probe",iVar12);
    return iVar9;
}


// ===== sym.lpass_cdc_soc_codec_remove @ 0x08008598 (size 416) =====

void sym.lpass_cdc_soc_codec_remove(int64_t arg1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong *puVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = *(*(arg1 + 0x18) + 0x98);
    snd_event_client_deregister(*puVar2);
    pcVar1 = puVar2[0x1e];
    if (pcVar1 != NULL) {
        if (pcVar1 != sym.__typeid__ZTSFiP17snd_soc_componentE_global_addr) {
            __cfi_slowpath_diag(0xf0d2ea9a64921857,pcVar1,0x8001c90);
        }
        (*pcVar1)(arg1);
    }
    pcVar1 = puVar2[0x2c];
    if (pcVar1 != NULL) {
        if (pcVar1 != sym.__typeid__ZTSFiP17snd_soc_componentE_global_addr) {
            __cfi_slowpath_diag(0xf0d2ea9a64921857,pcVar1,0x8001c90);
        }
        (*pcVar1)(arg1);
    }
    pcVar1 = puVar2[0x3a];
    if (pcVar1 != NULL) {
        if (pcVar1 != sym.__typeid__ZTSFiP17snd_soc_componentE_global_addr) {
            __cfi_slowpath_diag(0xf0d2ea9a64921857,pcVar1,0x8001c90);
        }
        (*pcVar1)(arg1);
    }
    pcVar1 = puVar2[0x48];
    if (pcVar1 != NULL) {
        if (pcVar1 != sym.__typeid__ZTSFiP17snd_soc_componentE_global_addr) {
            __cfi_slowpath_diag(0xf0d2ea9a64921857,pcVar1,0x8001c90);
        }
        (*pcVar1)(arg1);
    }
    pcVar1 = puVar2[0x56];
    if (pcVar1 != NULL) {
        if (pcVar1 != sym.__typeid__ZTSFiP17snd_soc_componentE_global_addr) {
            __cfi_slowpath_diag(0xf0d2ea9a64921857,pcVar1,0x8001c90);
        }
        (*pcVar1)(arg1);
    }
    return;
}


// ===== sym.lpass_cdc_ssr_enable @ 0x08008738 (size 1288) =====

ulong sym.lpass_cdc_ssr_enable(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg2 + 0xe0) != '\0') {
        *(arg2 + 0xe0) = 0;
        return 0;
    }
    pcVar3 = *(arg2 + 0x450);
    if (pcVar3 != NULL) {
        if (pcVar3 != sym.__typeid__ZTSFiP6devicetE_global_addr) {
            __cfi_slowpath_diag(0xc50b90c39b98ab53,pcVar3,0x8001bb0);
        }
        (*pcVar3)(*(arg2 + 0x448),5);
    }
    pcVar3 = *(arg2 + 0x118);
    if (pcVar3 != NULL) {
        __cfi_slowpath_diag(0x6b84145aa65a8cf9,pcVar3,0x8001bd0);
        (*pcVar3)(*(arg2 + 8),7,0);
    }
    pcVar3 = *(arg2 + 0x188);
    if (pcVar3 != NULL) {
        __cfi_slowpath_diag(0x6b84145aa65a8cf9,pcVar3,0x8001bd0);
        (*pcVar3)(*(arg2 + 8),7,0);
    }
    pcVar3 = *(arg2 + 0x1f8);
    if (pcVar3 != NULL) {
        __cfi_slowpath_diag(0x6b84145aa65a8cf9,pcVar3,0x8001bd0);
        (*pcVar3)(*(arg2 + 8),7,0);
    }
    pcVar3 = *(arg2 + 0x268);
    if (pcVar3 != NULL) {
        __cfi_slowpath_diag(0x6b84145aa65a8cf9,pcVar3,0x8001bd0);
        (*pcVar3)(*(arg2 + 8),7,0);
    }
    pcVar3 = *(arg2 + 0x2d8);
    if (pcVar3 != NULL) {
        __cfi_slowpath_diag(0x6b84145aa65a8cf9,pcVar3,0x8001bd0);
        uVar2 = (*pcVar3)(*(arg2 + 8),7,0);
        return uVar2;
    }
    __trace_bprintk(0x80088a0,*0x800b000,"lpass_cdc_ssr_enable");
    iVar1 = arg2 + 0x78;
    mutex_lock(iVar1);
    *(arg2 + 0xdf) = 1;
    mutex_unlock(iVar1);
    pcVar3 = *(arg2 + 0x450);
    if (pcVar3 != NULL) {
        if (pcVar3 != sym.__typeid__ZTSFiP6devicetE_global_addr) {
            __cfi_slowpath_diag(0xc50b90c39b98ab53,pcVar3,0x8001bf0);
        }
        (*pcVar3)(*(arg2 + 0x448),0xb);
    }
    pcVar3 = *(arg2 + 0x118);
    if (pcVar3 != NULL) {
        __cfi_slowpath_diag(0x6b84145aa65a8cf9,pcVar3,0x8001c10);
        (*pcVar3)(*(arg2 + 8),0xc,0);
    }
    pcVar3 = *(arg2 + 0x188);
    if (pcVar3 != NULL) {
        __cfi_slowpath_diag(0x6b84145aa65a8cf9,pcVar3,0x8001c10);
        (*pcVar3)(*(arg2 + 8),0xc,0);
    }
    pcVar3 = *(arg2 + 0x1f8);
    if (pcVar3 != NULL) {
        __cfi_slowpath_diag(0x6b84145aa65a8cf9,pcVar3,0x8001c10);
        (*pcVar3)(*(arg2 + 8),0xc,0);
    }
    pcVar3 = *(arg2 + 0x268);
    if (pcVar3 != NULL) {
        __cfi_slowpath_diag(0x6b84145aa65a8cf9,pcVar3,0x8001c10);
        (*pcVar3)(*(arg2 + 8),0xc,0);
    }
    pcVar3 = *(arg2 + 0x2d8);
    if (pcVar3 != NULL) {
        __cfi_slowpath_diag(0x6b84145aa65a8cf9,pcVar3,0x8001c10);
        (*pcVar3)(*(arg2 + 8),0xc,0);
    }
    regcache_cache_only(*(arg2 + 0x10),0);
    mutex_lock(iVar1);
    *(arg2 + 0xde) = 1;
    mutex_unlock(iVar1);
    regcache_mark_dirty(*(arg2 + 0x10));
    sym.lpass_cdc_clk_rsc_enable_all_clocks(*(arg2 + 0x448),1);
    regcache_sync(*(arg2 + 0x10));
    usleep_range_state(100,0x6e,2);
    uVar2 = sym.lpass_cdc_clk_rsc_enable_all_clocks(*(arg2 + 0x448),0);
    return uVar2;
}


// ===== sym.lpass_cdc_ssr_disable @ 0x08008c40 (size 548) =====

void sym.lpass_cdc_ssr_disable(ulong noname_0,int64_t arg1)

{
    int iVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0xde) == '\0') {
        iVar1 = ___ratelimit(obj.lpass_cdc_ssr_disable._rs,"lpass_cdc_ssr_disable");
        if (iVar1 != 0) {
            _dev_err(*arg1,"%s: already disabled\n","lpass_cdc_ssr_disable");
        }
    }
    else {
        blocking_notifier_call_chain(arg1 + 0x400,2,*(arg1 + 0x3f8));
        regcache_cache_only(*(arg1 + 0x10),1);
        mutex_lock(arg1 + 0x78);
        *(arg1 + 0xde) = 0;
        mutex_unlock(arg1 + 0x78);
        pcVar2 = *(arg1 + 0x450);
        if (pcVar2 != NULL) {
            if (pcVar2 != sym.__typeid__ZTSFiP6devicetE_global_addr) {
                __cfi_slowpath_diag(0xc50b90c39b98ab53,pcVar2,0x8001c50);
            }
            (*pcVar2)(*(arg1 + 0x448),4);
        }
        pcVar2 = *(arg1 + 0x118);
        if (pcVar2 != NULL) {
            __cfi_slowpath_diag(0x6b84145aa65a8cf9,pcVar2,0x8001c70);
            (*pcVar2)(*(arg1 + 8),4,0);
        }
        pcVar2 = *(arg1 + 0x188);
        if (pcVar2 != NULL) {
            __cfi_slowpath_diag(0x6b84145aa65a8cf9,pcVar2,0x8001c70);
            (*pcVar2)(*(arg1 + 8),4,0);
        }
        pcVar2 = *(arg1 + 0x1f8);
        if (pcVar2 != NULL) {
            __cfi_slowpath_diag(0x6b84145aa65a8cf9,pcVar2,0x8001c70);
            (*pcVar2)(*(arg1 + 8),4,0);
        }
        pcVar2 = *(arg1 + 0x268);
        if (pcVar2 != NULL) {
            __cfi_slowpath_diag(0x6b84145aa65a8cf9,pcVar2,0x8001c70);
            (*pcVar2)(*(arg1 + 8),4,0);
        }
        pcVar2 = *(arg1 + 0x2d8);
        if (pcVar2 != NULL) {
            __cfi_slowpath_diag(0x6b84145aa65a8cf9,pcVar2,0x8001c70);
            (*pcVar2)(*(arg1 + 8),4,0);
        }
        blocking_notifier_call_chain(arg1 + 0x400,3,*(arg1 + 0x3f8));
    }
    return;
}


// ===== sym.lpass_cdc_probe @ 0x08008e64 (size 704) =====

int sym.lpass_cdc_probe(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    int iVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iVar7 = arg1 + 0x10;
    iStack_38 = *(iVar1 + 0x5e0);
    uStack_3c = 0;
    piVar4 = devm_kmalloc(iVar7,0x470,0xdc0);
    if (piVar4 == NULL) {
        iVar3 = -0xc;
    }
    else {
        iVar3 = of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,num-macros",&uStack_3c,1,0);
        if (iVar3 < 0) {
            _dev_err(iVar7,"%s:num-macros property not found\n","lpass_cdc_probe");
        }
        else {
            *(piVar4 + 0x324) = uStack_3c;
            if ((uStack_3c & 0xffff) < 6) {
                of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,lpass-cdc-version",piVar4 + 0x6c,1,0);
                __init_rwsem(piVar4 + 0x80,"&(&priv->notifier)->rwsem",obj.lpass_cdc_probe.__key);
                piVar4[0x88] = 0;
                *piVar4 = iVar7;
                *(piVar4 + 0xde) = 0x101;
                *(piVar4 + 0x1c) = 1;
                uVar5 = __devm_regmap_init(iVar7,obj.regmap_bus_config.llvm.14991791794097483029,iVar7,
                                           obj.lpass_cdc_regmap_config,0,0);
                piVar4[2] = uVar5;
                if ((uVar5 == 0) || (0xfffffffffffff000 < uVar5)) {
                    _dev_err(iVar7,"%s:regmap init failed\n","lpass_cdc_probe");
                    iVar3 = -0x16;
                }
                else {
                    devm_regmap_qti_debugfs_register(*piVar4,uVar5);
                    piVar4[0x7c] = piVar4;
                    piVar4[0x73] = sym.__typeid__ZTSFiP14lpass_cdc_privttPhE_global_addr;
                    piVar4[0x6f] = 0;
                    *(arg1 + 0xa8) = piVar4;
                    piVar4[0x74] = sym.__typeid__ZTSFiP14lpass_cdc_privtthE_global_addr;
                    piVar4[0x7d] = sym.lpass_cdc_update_wcd_event.9324bdfcbd927cfdef84d736718185f6.cfi_jt;
                    piVar4[0x7e] = sym.lpass_cdc_register_notifier.9324bdfcbd927cfdef84d736718185f6.cfi_jt;
                    __mutex_init(piVar4 + 3,"&priv->macro_lock",obj.lpass_cdc_probe.__key);
                    __mutex_init(piVar4 + 9,"&priv->io_lock",obj.lpass_cdc_probe.__key);
                    __mutex_init(piVar4 + 0xf,"&priv->clk_lock",obj.lpass_cdc_probe.__key);
                    __mutex_init(piVar4 + 0x15,"&priv->vote_lock",obj.lpass_cdc_probe.__key);
                    piVar4[0x66] = 0xfffffffe0;
                    piVar4[0x67] = piVar4 + 0x67;
                    piVar4[0x68] = piVar4 + 0x67;
                    piVar4[0x69] = sym.lpass_cdc_add_child_devices.9324bdfcbd927cfdef84d736718185f6.cfi_jt;
                    uVar6 = devm_clk_get(iVar7,"lpass_core_hw_vote");
                    uVar5 = 0;
                    if (uVar6 < 0xfffffffffffff001) {
                        uVar5 = uVar6;
                    }
                    piVar4[0x6d] = uVar5;
                    uVar6 = devm_clk_get(iVar7,"lpass_audio_hw_vote");
                    uVar2 = _of_device_is_compatible;
                    uVar5 = 0;
                    if (uVar6 < 0xfffffffffffff001) {
                        uVar5 = uVar6;
                    }
                    piVar4[0x6e] = uVar5;
                    queue_work_on(0x20,uVar2,piVar4 + 0x66);
                    iVar3 = 0;
                }
            }
            else {
                _dev_err(iVar7,"%s:num_macros(%d) > MAX_MACRO(%d) than supported\n","lpass_cdc_probe",
                         uStack_3c & 0xffff,5);
                iVar3 = -0x16;
            }
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_38) {
        return iVar3;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18 = sym.lpass_cdc_remove;
    if (*(iVar7 + 0xa8) == 0) {
        iVar3 = -0x16;
    }
    else {
        of_platform_depopulate(iVar7 + 0x10);
        iVar3 = 0;
    }
    return iVar3;
}


// ===== sym.lpass_cdc_remove @ 0x08009124 (size 60) =====

ulong sym.lpass_cdc_remove(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0xa8) == 0) {
        uVar1 = 0xffffffea;
    }
    else {
        of_platform_depopulate(arg1 + 0x10);
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.__lpass_cdc_reg_read @ 0x08009160 (size 256) =====

uint sym.__lpass_cdc_reg_read(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    code *pcVar1;
    uchar uVar2;
    ulong uVar3;
    ulong *in_x18;
    uint uVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(arg1 + 0x78);
    if (*(arg1 + 0xde) == '\0') {
        uVar4 = 0xffffffea;
        goto code_r0x08009234;
    }
    if (*(arg1 + 0x250) == 0) {
code_r0x080091d8:
        if (4 < (arg2 & 0xffff)) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5512,0x8009260);
            (*pcVar1)();
        }
        uVar2 = sym.readl(*(arg1 + (arg2 & 0xffffU) * 0x70 + 0x148) + (arg3 & 0xffffU));
        *arg4 = uVar2;
    }
    else {
        __pm_runtime_resume(*(arg1 + 0x250),4);
        mutex_lock(arg1 + 0xa8);
        if (((*(arg1 + 0x368) == 0) || (*(arg1 + 0x378) != 0)) && ((*(arg1 + 0x370) == 0 || (*(arg1 + 0x37c) != 0))))
        goto code_r0x080091d8;
    }
    if (*(arg1 + 0x250) != 0) {
        mutex_unlock(arg1 + 0xa8);
        iVar5 = *(arg1 + 0x250);
        uVar3 = ktime_get_mono_fast_ns();
        *(iVar5 + 0x218) = uVar3;
        __pm_runtime_suspend(*(arg1 + 0x250),0xd);
    }
    uVar4 = 0;
code_r0x08009234:
    mutex_unlock(arg1 + 0x78);
    return uVar4;
}


// ===== sym.__lpass_cdc_reg_write @ 0x08009260 (size 256) =====

uint sym.__lpass_cdc_reg_write(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    code *pcVar1;
    ulong uVar2;
    ulong *in_x18;
    uint uVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(arg1 + 0x78);
    if (*(arg1 + 0xde) == '\0') {
        uVar3 = 0xffffffea;
        goto code_r0x08009334;
    }
    if (*(arg1 + 0x250) == 0) {
code_r0x080092d8:
        if (4 < (arg2 & 0xffff)) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5512,0x8009360);
            (*pcVar1)();
        }
        sym.writel(arg4 & 0xff,*(arg1 + (arg2 & 0xffffU) * 0x70 + 0x148) + (arg3 & 0xffffU));
    }
    else {
        __pm_runtime_resume(*(arg1 + 0x250),4);
        mutex_lock(arg1 + 0xa8);
        if (((*(arg1 + 0x368) == 0) || (*(arg1 + 0x378) != 0)) && ((*(arg1 + 0x370) == 0 || (*(arg1 + 0x37c) != 0))))
        goto code_r0x080092d8;
    }
    if (*(arg1 + 0x250) != 0) {
        mutex_unlock(arg1 + 0xa8);
        iVar4 = *(arg1 + 0x250);
        uVar2 = ktime_get_mono_fast_ns();
        *(iVar4 + 0x218) = uVar2;
        __pm_runtime_suspend(*(arg1 + 0x250),0xd);
    }
    uVar3 = 0;
code_r0x08009334:
    mutex_unlock(arg1 + 0x78);
    return uVar3;
}


// ===== sym.lpass_cdc_update_wcd_event @ 0x08009360 (size 668) =====

ulong sym.lpass_cdc_update_wcd_event(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    ulong uVar4;
    ulong uVar5;
    ulong *in_x18;
    code *pcVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        iVar3 = ___ratelimit(obj.lpass_cdc_update_wcd_event._rs,"lpass_cdc_update_wcd_event");
        if (iVar3 != 0) {
            _printk(0x80027ee,"lpass_cdc_update_wcd_event");
        }
        return 0xffffffea;
    }
    uVar1 = arg2 & 0xffff;
    uVar2 = uVar1 - 1;
    if (uVar2 < 8) {
    //switch table (7 cases) at 0x8001df7
        switch(*(uVar2 + 0x8001df7) * 4 + 0x80093ac) {
        case 0x80093b0:
            pcVar6 = *(arg1 + 0x188);
            if (pcVar6 == NULL) {
                return 0;
            }
            __cfi_slowpath_diag(0x6b84145aa65a8cf9,pcVar6,0x8001cb0);
            uVar4 = *(arg1 + 8);
            uVar5 = 1;
            break;
        case 0x8009440:
            pcVar6 = *(arg1 + 0x188);
            if (pcVar6 == NULL) {
                return 0;
            }
            __cfi_slowpath_diag(0x6b84145aa65a8cf9,pcVar6,0x8001cd0);
            uVar4 = *(arg1 + 8);
            uVar5 = 2;
            break;
        case 0x8009478:
            pcVar6 = *(arg1 + 0x188);
            if (pcVar6 == NULL) {
                return 0;
            }
            __cfi_slowpath_diag(0x6b84145aa65a8cf9,pcVar6,0x8001cf0);
            uVar4 = *(arg1 + 8);
            uVar5 = 3;
            break;
        case 0x80094b0:
            pcVar6 = *(arg1 + 0x188);
            if (pcVar6 == NULL) {
                return 0;
            }
            __cfi_slowpath_diag(0x6b84145aa65a8cf9,pcVar6,0x8001d10);
            uVar4 = *(arg1 + 8);
            uVar5 = 9;
            break;
        case 0x80094e8:
            pcVar6 = *(arg1 + 0x118);
            if (pcVar6 == NULL) {
                return 0;
            }
            __cfi_slowpath_diag(0x6b84145aa65a8cf9,pcVar6,0x8001d30);
            uVar4 = *(arg1 + 8);
            uVar5 = 10;
            break;
        case 0x8009520:
            pcVar6 = *(arg1 + 0x188);
            if (pcVar6 == NULL) {
                return 0;
            }
            __cfi_slowpath_diag(0x6b84145aa65a8cf9,pcVar6,0x8001d50);
            uVar4 = *(arg1 + 8);
            uVar5 = 0xd;
            break;
        case 0x8009558:
            pcVar6 = *(arg1 + 0x188);
            if (pcVar6 == NULL) {
                return 0;
            }
            __cfi_slowpath_diag(0x6b84145aa65a8cf9,pcVar6,0x8001d70);
            uVar4 = *(arg1 + 8);
            uVar5 = 0xe;
            break;
        case 0x8009590:
            pcVar6 = *(arg1 + 0x188);
            if (pcVar6 == NULL) {
                return 0;
            }
            __cfi_slowpath_diag(0x6b84145aa65a8cf9,pcVar6,0x8001d90);
            uVar4 = *(arg1 + 8);
            uVar5 = 0xf;
        }
        (*pcVar6)(uVar4,uVar5,arg3 & 0xffffffff);
        return 0;
    }
    iVar3 = ___ratelimit(obj.lpass_cdc_update_wcd_event._rs.108,"lpass_cdc_update_wcd_event");
    if (iVar3 == 0) {
        return 0xffffffea;
    }
    _dev_err(*arg1,"%s: Invalid event %d trigger from wcd\n","lpass_cdc_update_wcd_event",uVar1);
    return 0xffffffea;
}


// ===== sym.lpass_cdc_register_notifier @ 0x080095fc (size 116) =====

ulong sym.lpass_cdc_register_notifier(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    uint32_t in_w2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_register_notifier._rs,"lpass_cdc_register_notifier");
        if (iVar1 == 0) {
            uVar2 = 0xffffffea;
        }
        else {
            _printk(0x8002d45,"lpass_cdc_register_notifier");
            uVar2 = 0xffffffea;
        }
    }
    else if ((in_w2 & 1) == 0) {
        uVar2 = blocking_notifier_chain_unregister(arg1 + 0x400);
    }
    else {
        uVar2 = blocking_notifier_chain_register();
    }
    return uVar2;
}


// ===== sym.lpass_cdc_add_child_devices @ 0x08009670 (size 572) =====

uint64_t sym.lpass_cdc_add_child_devices(int64_t arg1)

{
    uint32_t uVar1;
    uint16_t uVar2;
    int64_t *piVar3;
    code *pcVar4;
    int64_t iVar5;
    ulong *puVar6;
    int64_t iVar7;
    uint64_t uVar8;
    uint32_t *puVar9;
    char *pcVar10;
    int64_t iVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
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
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    piVar3 = arg1 + -0x330;
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
    if (piVar3 == NULL) {
        uVar8 = _printk(0x8002b5e,"lpass_cdc_add_child_devices");
    }
    else {
        iVar5 = *piVar3;
        if ((iVar5 == 0) || (*(iVar5 + 0x2f0) == 0)) {
            pcVar10 = "%s: DT node for lpass_cdc does not exist\n";
code_r0x08009798:
            uVar8 = _dev_err(iVar5,pcVar10,"lpass_cdc_add_child_devices");
        }
        else {
            *(arg1 + 0xa8) = 0;
            puVar6 = of_get_next_available_child(*(iVar5 + 0x2f0),0);
            uVar8 = 0;
            if (puVar6 != NULL) {
                do {
                    iVar5 = of_find_property(puVar6,"qcom,split-codec",0);
                    strlcpy(&uStack_a8,*puVar6,0x4f);
                    iVar7 = platform_device_alloc(&uStack_a8,0xffffffff);
                    if (iVar7 == 0) {
                        iVar5 = *piVar3;
                        pcVar10 = "%s: pdev memory alloc failed\n";
                        goto code_r0x08009798;
                    }
                    iVar11 = *piVar3;
                    *(iVar7 + 0x300) = puVar6;
                    *(iVar7 + 0x70) = iVar11;
                    *(*piVar3 + 0x90) = arg1 + 0xb0;
                    if (iVar5 != 0) {
                        *(arg1 + 200) = iVar7 + 0x10;
                    }
                    uVar8 = platform_device_add(iVar7);
                    if (uVar8 != 0) {
                        _dev_err(iVar7 + 0x10,"%s: Cannot add platform device\n","lpass_cdc_add_child_devices");
                        uVar8 = platform_device_put(iVar7);
                        if ((((*(arg1 + 0xa8) != 0) &&
                             (uVar8 = platform_device_put(*(arg1 + 0x78)), 1 < *(arg1 + 0xa8))) &&
                            (uVar8 = platform_device_put(*(arg1 + 0x80)), 2 < *(arg1 + 0xa8))) &&
                           (((uVar8 = platform_device_put(*(arg1 + 0x88)), 3 < *(arg1 + 0xa8) &&
                             (uVar8 = platform_device_put(*(arg1 + 0x90)), 4 < *(arg1 + 0xa8))) &&
                            ((uVar8 = platform_device_put(*(arg1 + 0x98)), 5 < *(arg1 + 0xa8) &&
                             (uVar8 = platform_device_put(*(arg1 + 0xa0)), 6 < *(arg1 + 0xa8))))))) {
    //WARNING: Does not return
                            pcVar4 = SoftwareBreakpoint(0x5512,0x80098a8);
                            (*pcVar4)();
                        }
                        goto code_r0x080097bc;
                    }
                    uVar2 = *(arg1 + 0xa8);
                    if (5 < uVar2) goto code_r0x080097bc;
                    iVar5 = *piVar3;
                    *(arg1 + 0xa8) = uVar2 + 1;
                    *(arg1 + 0x78 + uVar2 * 8) = iVar7;
                    puVar6 = of_get_next_available_child(*(iVar5 + 0x2f0),puVar6);
                } while (puVar6 != NULL);
                uVar8 = 0;
            }
        }
    }
code_r0x080097bc:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_58) {
        puVar9 = __stack_chk_fail();
        *extraout_x18 = sym.readl;
        log_read_mmio(0x20,puVar9,0x80098b0);
        uVar1 = *puVar9;
        DataMemoryBarrier(0,1);
        log_post_read_mmio(uVar1,0x20,puVar9,0x80098f4);
        return uVar1;
    }
    return uVar8;
}


// ===== sym.readl @ 0x080098ac (size 124) =====

uint sym.readl(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x80098b0);
    uVar1 = *arg1;
    DataMemoryBarrier(0,1);
    log_post_read_mmio(uVar1,0x20,arg1,0x80098f4);
    return uVar1;
}


// ===== sym.readl_1 @ 0x0800992c (size 124) =====

uint sym.readl_1(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8009930);
    uVar1 = *arg1;
    DataMemoryBarrier(0,1);
    log_post_read_mmio(uVar1,0x20,arg1,0x8009974);
    return uVar1;
}


// ===== sym.writel @ 0x080099ac (size 124) =====

void sym.writel(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x80099c8);
    DataMemoryBarrier(0,2);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x80099f4);
    return;
}


// ===== sym.writel_1 @ 0x08009a28 (size 124) =====

void sym.writel_1(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8009a44);
    DataMemoryBarrier(0,2);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8009a70);
    return;
}


// ===== sym.__cfi_check_fail @ 0x08009aa4 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08009ae8

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
    //switch table (4 cases) at 0x8001dff
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8009afc);
    (*pcVar1)();
}


// ===== sym.lpass_cdc_load_compander_coeff @ 0x08009afc (size 128) =====

ulong sym.lpass_cdc_load_compander_coeff(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t in_w4;
    ulong *in_x18;
    uint64_t uVar1;
    uchar *puVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (in_w4 != 0) {
        uVar1 = in_w4;
        puVar2 = arg4 + 1;
        do {
            snd_soc_component_write(arg1,arg2 & 0xffff,puVar2[-1]);
            snd_soc_component_write(arg1,arg3 & 0xffff,*puVar2);
            uVar1 = uVar1 - 1;
            puVar2 = puVar2 + 2;
        } while (uVar1 != 0);
    }
    return 0;
}


// ===== sym.lpass_cdc_update_compander_setting @ 0x08009b7c (size 376) =====

ulong sym.lpass_cdc_update_compander_setting(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    int iVar3;
    uint uVar4;
    int iVar5;
    int iVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = arg2 & 0xffff;
    uVar4 = *(arg3 + 8);
    iVar3 = *(arg3 + 4);
    iVar5 = *arg3 - iVar3;
    snd_soc_component_write(arg1,uVar1 + 8,6);
    iVar6 = 0xc;
    if (iVar5 < 0x12) {
        iVar6 = iVar5;
    }
    iVar2 = 0x12;
    if (iVar5 < 0x18) {
        iVar2 = iVar6;
    }
    snd_soc_component_write(arg1,uVar1 + 0xc,iVar2);
    if (iVar5 < 0x42) {
        iVar6 = 0x18;
        if (iVar5 < 0x1e) {
            iVar6 = iVar5;
        }
        iVar2 = 0x1e;
        if (iVar5 < 0x24) {
            iVar2 = iVar6;
        }
        snd_soc_component_write(arg1,uVar1 + 0x10,iVar2);
        if (iVar5 < 0x30) {
            iVar6 = 0x24;
            if (iVar5 < 0x2a) {
                iVar6 = iVar5;
            }
        }
        else {
            iVar6 = 0x2a;
        }
    }
    else {
        snd_soc_component_write(arg1,uVar1 + 0x10,0x21);
        iVar6 = 0x30;
    }
    snd_soc_component_write(arg1,uVar1 + 0x14,iVar6);
    iVar6 = 0x3f;
    if (iVar5 < 0x45) {
        iVar6 = 0x3c;
    }
    if (iVar5 < 0x42) {
        if (iVar5 < 0x3c) {
            iVar6 = 0x30;
            if (iVar5 < 0x36) {
                iVar6 = iVar5;
            }
        }
        else {
            iVar6 = 0x36;
        }
    }
    snd_soc_component_write(arg1,uVar1 + 0x18,iVar6);
    snd_soc_component_write(arg1,uVar1 + 0x1c,iVar5);
    iVar6 = iVar3 + 0x100;
    if (-1 < iVar3) {
        iVar6 = iVar3;
    }
    iVar2 = -iVar3;
    if (-1 < iVar3) {
        iVar2 = iVar3;
    }
    snd_soc_component_write(arg1,uVar1 + 0x20,iVar6);
    snd_soc_component_write(arg1,uVar1 + 0x24,iVar5 - iVar2);
    snd_soc_component_write(arg1,uVar1 + 0x28,uVar4);
    return 0;
}


// ===== sym.lpass_cdc_get_macro_id @ 0x08009cf4 (size 128) =====

uint sym.lpass_cdc_get_macro_id(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint uVar2;
    
    uVar1 = arg2 & 0xffff;
    if (uVar1 < 0x7a9) {
        return 0;
    }
    if (uVar1 - 0x1000 < 0xf8d) {
        return 1;
    }
    if (uVar1 - 0x2000 < 0xbe5) {
        return 2;
    }
    if (uVar1 - 0x4000 < 0xbe5) {
        return 4;
    }
    uVar2 = 3;
    if (0x5a8 < uVar1 - 0x3000) {
        uVar2 = 0xffffffea;
    }
    return uVar2;
}


// ===== sym.lpass_cdc_regmap_init @ 0x08009d74 (size 60) =====

void sym.lpass_cdc_regmap_init(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __devm_regmap_init(arg1,obj.regmap_bus_config.llvm.14991791794097483029,arg1,arg2,0,0);
    return;
}


// ===== sym.regmap_bus_write @ 0x08009db0 (size 156) =====

ulong sym.regmap_bus_write(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x98) != 0) {
        if (1 < arg3) {
            uVar2 = sym.regmap_bus_gather_write(arg1,arg2,2,arg2 + 2);
            return uVar2;
        }
        iVar1 = ___ratelimit(obj.regmap_bus_write._rs,"regmap_bus_write");
        if (iVar1 != 0) {
            _dev_err(arg1,"%s: count %zd bytes < %d, not supported\n","regmap_bus_write",arg3,2);
            return 0xffffffea;
        }
    }
    return 0xffffffea;
}


// ===== sym.regmap_bus_gather_write @ 0x08009e4c (size 644) =====

int sym.regmap_bus_gather_write(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t uVar1;
    uint16_t uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    char *pcVar6;
    uint64_t in_x4;
    uint32_t uVar7;
    ulong *in_x18;
    int64_t iVar8;
    code *pcVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = *(arg1 + 0x98);
    if (iVar8 == 0) {
        iVar4 = ___ratelimit(obj.regmap_bus_gather_write._rs,"regmap_bus_gather_write");
        if (iVar4 == 0) {
            return -0x16;
        }
        pcVar6 = "%s: priv is NULL\n";
    }
    else {
        if ((arg2 != 0) && (arg4 != 0)) {
            if (arg3 != 2) {
                iVar4 = ___ratelimit(obj.regmap_bus_gather_write._rs.4,"regmap_bus_gather_write");
                if (iVar4 == 0) {
                    return -0x16;
                }
                _dev_err(arg1,"%s: register size %zd bytes, not supported\n","regmap_bus_gather_write",arg3);
                return -0x16;
            }
            uVar1 = *arg2;
            if (uVar1 < 0x7a9) {
                uVar7 = 0;
            }
            else if (uVar1 - 0x1000 < 0xf8d) {
                uVar7 = 1;
            }
            else {
                uVar7 = uVar1;
                if (uVar7 - 0x2000 < 0xbe5) {
                    uVar7 = 2;
                }
                else if (uVar7 - 0x4000 < 0xbe5) {
                    uVar7 = 4;
                }
                else {
                    if (0x5a8 < uVar7 - 0x3000) {
                        return 0;
                    }
                    uVar7 = 3;
                }
            }
            uVar10 = uVar7;
            if (*(iVar8 + uVar10 + 0xd9) == '\0') {
                return 0;
            }
            mutex_lock();
            if (in_x4 == 0) {
                iVar4 = -0x16;
            }
            else {
                uVar11 = 0;
                uVar1 = *(obj.macro_id_base_offset + uVar10 * 2);
                do {
                    uVar2 = *arg2;
                    pcVar9 = *(iVar8 + 0x3a0);
                    if (pcVar9 != sym.__typeid__ZTSFiP14lpass_cdc_privtthE_global_addr) {
                        __cfi_slowpath_diag(0x276b3a09c1053cc9,pcVar9,0x8001db0);
                    }
                    iVar3 = uVar11 * 4;
                    iVar4 = (*pcVar9)(iVar8,uVar10,(uVar2 - uVar1) + iVar3,*(arg4 + uVar11));
                    if (iVar4 < 0) {
                        iVar5 = ___ratelimit(obj.regmap_bus_gather_write._rs.6,"regmap_bus_gather_write");
                        if (iVar5 != 0) {
                            _dev_err(arg1,"%s: Codec write failed (%d), reg:0x%x, size:%zd\n",
                                     "regmap_bus_gather_write",iVar4,iVar3 + *arg2);
                        }
                        break;
                    }
                    uVar11 = uVar11 + 1;
                } while (uVar11 < in_x4);
            }
            mutex_unlock(iVar8 + 0x48);
            return iVar4;
        }
        iVar4 = ___ratelimit(obj.regmap_bus_gather_write._rs.2,"regmap_bus_gather_write");
        if (iVar4 == 0) {
            return -0x16;
        }
        pcVar6 = "%s: reg or val is NULL\n";
    }
    _dev_err(arg1,pcVar6,"regmap_bus_gather_write");
    return -0x16;
}


// ===== sym.regmap_bus_read @ 0x0800a0d0 (size 692) =====

uint32_t sym.regmap_bus_read(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t uVar1;
    uint16_t uVar2;
    int iVar3;
    uint32_t uVar4;
    int iVar5;
    char *pcVar6;
    uint64_t in_x4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar7;
    code *pcVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    uchar auStack_6c [4];
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    iVar7 = *(arg1 + 0x98);
    auStack_6c[0] = 0;
    if (iVar7 == 0) {
        iVar3 = ___ratelimit(obj.regmap_bus_read._rs,"regmap_bus_read");
        if (iVar3 != 0) {
            pcVar6 = "%s: priv is NULL\n";
code_r0x0800a18c:
            _dev_err(arg1,pcVar6,"regmap_bus_read");
            uVar4 = 0xffffffea;
            goto code_r0x0800a1c0;
        }
    }
    else if ((arg2 == 0) || (arg4 == 0)) {
        iVar3 = ___ratelimit(obj.regmap_bus_read._rs.8,"regmap_bus_read");
        if (iVar3 != 0) {
            pcVar6 = "%s: reg or val is NULL\n";
            goto code_r0x0800a18c;
        }
    }
    else {
        if (arg3 == 2) {
            uVar1 = *arg2;
            if (uVar1 < 0x7a9) {
                uVar4 = 0;
code_r0x0800a24c:
                uVar9 = uVar4;
                if (*(iVar7 + uVar9 + 0xd9) != '\0') {
                    mutex_lock();
                    if (in_x4 == 0) {
                        uVar4 = 0xffffffea;
                    }
                    else {
                        uVar10 = 0;
                        uVar1 = *(obj.macro_id_base_offset + uVar9 * 2);
                        do {
                            uVar2 = *arg2;
                            pcVar8 = *(iVar7 + 0x398);
                            if (pcVar8 != sym.__typeid__ZTSFiP14lpass_cdc_privttPhE_global_addr) {
                                __cfi_slowpath_diag(0x59be41b8a2279880,pcVar8,0x8001dd0);
                            }
                            iVar3 = uVar10 * 4;
                            uVar4 = (*pcVar8)(iVar7,uVar9,(uVar2 - uVar1) + iVar3,auStack_6c);
                            if (uVar4 < 0) {
                                iVar5 = ___ratelimit(obj.regmap_bus_read._rs.10,"regmap_bus_read");
                                if (iVar5 != 0) {
                                    _dev_err(arg1,"%s: Codec read failed (%d), reg: 0x%x, size:%zd\n",
                                             "regmap_bus_read",uVar4,iVar3 + *arg2);
                                }
                                break;
                            }
                            *(arg4 + uVar10) = auStack_6c[0];
                            uVar10 = uVar10 + 1;
                        } while (uVar10 < in_x4);
                    }
                    mutex_unlock(iVar7 + 0x48);
                    goto code_r0x0800a1c0;
                }
            }
            else {
                if (uVar1 - 0x1000 < 0xf8d) {
                    uVar4 = 1;
                    goto code_r0x0800a24c;
                }
                uVar4 = uVar1;
                if (uVar4 - 0x2000 < 0xbe5) {
                    uVar4 = 2;
                    goto code_r0x0800a24c;
                }
                if (uVar4 - 0x4000 < 0xbe5) {
                    uVar4 = 4;
                    goto code_r0x0800a24c;
                }
                if (uVar4 - 0x3000 < 0x5a9) {
                    uVar4 = 3;
                    goto code_r0x0800a24c;
                }
            }
            uVar4 = 0;
            goto code_r0x0800a1c0;
        }
        iVar3 = ___ratelimit(obj.regmap_bus_read._rs.9,"regmap_bus_read");
        if (iVar3 != 0) {
            _dev_err(arg1,"%s: register size %zd bytes, not supported\n","regmap_bus_read",arg3);
            uVar4 = 0xffffffea;
            goto code_r0x0800a1c0;
        }
    }
    uVar4 = 0xffffffea;
code_r0x0800a1c0:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_68) {
        return uVar4;
    }
    auVar11 = __stack_chk_fail();
    *extraout_x18 = sym.lpass_cdc_is_writeable_register;
    iVar7 = *(auVar11._0_8_ + 0x98);
    if (iVar7 != 0) {
        uVar4 = sym.lpass_cdc_get_macro_id(*(iVar7 + 0xd8),auVar11._8_8_);
        if (-1 < uVar4) {
            if (4 < uVar4) {
    //WARNING: Does not return
                pcVar8 = SoftwareBreakpoint(0x5512,0x800a414);
                (*pcVar8)();
            }
            uVar9 = uVar4;
            if ((*(iVar7 + uVar9 + 0xd9) != '\0') && (*(reloc.lpass_cdc_tx_reg_access + uVar9 * 8) != 0)) {
                return *(*(reloc.lpass_cdc_tx_reg_access + uVar9 * 8) +
                        (auVar11._8_4_ - *(obj.macro_id_base_offset + uVar9 * 2) >> 2 & 0xffff)) >> 1 & 1;
            }
        }
    }
    return 0;
}


// ===== sym.lpass_cdc_is_writeable_register @ 0x0800a384 (size 144) =====

uint8_t sym.lpass_cdc_is_writeable_register(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0x98);
    if (iVar4 != 0) {
        uVar2 = sym.lpass_cdc_get_macro_id(*(iVar4 + 0xd8),arg2);
        if (-1 < uVar2) {
            if (4 < uVar2) {
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x5512,0x800a414);
                (*pcVar1)();
            }
            uVar3 = uVar2;
            if ((*(iVar4 + uVar3 + 0xd9) != '\0') && (*(reloc.lpass_cdc_tx_reg_access + uVar3 * 8) != 0)) {
                return *(*(reloc.lpass_cdc_tx_reg_access + uVar3 * 8) +
                        (arg2 - *(obj.macro_id_base_offset + uVar3 * 2) >> 2 & 0xffff)) >> 1 & 1;
            }
        }
    }
    return 0;
}


// ===== sym.lpass_cdc_is_readable_register @ 0x0800a414 (size 144) =====

uint8_t sym.lpass_cdc_is_readable_register(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0x98);
    if (iVar4 != 0) {
        uVar2 = sym.lpass_cdc_get_macro_id(*(iVar4 + 0xd8),arg2);
        if (-1 < uVar2) {
            if (4 < uVar2) {
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x5512,0x800a4a4);
                (*pcVar1)();
            }
            uVar3 = uVar2;
            if ((*(iVar4 + uVar3 + 0xd9) != '\0') && (*(reloc.lpass_cdc_tx_reg_access + uVar3 * 8) != 0)) {
                return *(*(reloc.lpass_cdc_tx_reg_access + uVar3 * 8) +
                        (arg2 - *(obj.macro_id_base_offset + uVar3 * 2) >> 2 & 0xffff)) & 1;
            }
        }
    }
    return 0;
}


// ===== sym.lpass_cdc_is_volatile_register @ 0x0800a4a4 (size 1040) =====

ulong sym.lpass_cdc_is_volatile_register(ulong noname_0,int64_t arg1)

{
    ulong uVar1;
    int iVar2;
    int iVar3;
    
    iVar2 = arg1;
    uVar1 = 1;
    if (iVar2 < 0x1818) {
        if (iVar2 < 0x1400) {
            if (iVar2 < 0x1088) {
                if (iVar2 - 0x1020U < 0x59) {
    //switch table (89 cases) at 0x8003242
                    switch(*((iVar2 - 0x1020U) + 0x8003242) * 4 + 0x800a500) {
                    case 0x800a508:
                        return uVar1;
                    case 0x800a70c:
                        return 0;
                    }
                }
                if (iVar2 - 0xc0U < 0x15) {
                    if ((1 << (iVar2 - 0xc0U & 0x1f) & 0x111111U) != 0) {
                        return uVar1;
                    }
                    return 0;
                }
                return 0;
            }
            if (iVar2 < 0x1368) {
                if (iVar2 == 0x1088) {
                    return uVar1;
                }
                iVar3 = 0x12d4;
            }
            else {
                if (iVar2 == 0x1368) {
                    return uVar1;
                }
                iVar3 = 5000;
            }
        }
        else {
            if (iVar2 - 0x145cU < 0x65) {
    //switch table (73 cases) at 0x800329b
                switch(*((iVar2 - 0x145cU) + 0x800329b) * 4 + 0x800a500) {
                case 0x800a508:
                    return uVar1;
                case 0x800a70c:
                    return 0;
                }
            }
            if ((iVar2 - 0x151cU < 0x29) && ((1L << (iVar2 - 0x151cU & 0x3f) & 0x11111111101U) != 0)) {
                return uVar1;
            }
            iVar3 = 0x1400;
        }
    }
    else if (iVar2 < 0x21d4) {
        if (iVar2 < 0x1aac) {
            if (iVar2 < 0x1a2c) {
                if (iVar2 == 0x1818) {
                    return uVar1;
                }
                iVar3 = 0x1878;
            }
            else {
                if (iVar2 == 0x1a2c) {
                    return uVar1;
                }
                iVar3 = 0x1a30;
            }
        }
        else {
            if (iVar2 - 0x1d10U < 0x91) {
    //switch table (145 cases) at 0x8003300
                switch(*((iVar2 - 0x1d10U) + 0x8003300) * 4 + 0x800a500) {
                case 0x800a508:
                    return uVar1;
                case 0x800a70c:
                    return 0;
                }
            }
            if (iVar2 == 0x1aac) {
                return uVar1;
            }
            iVar3 = 0x1ab0;
        }
    }
    else if (iVar2 < 0x3084) {
        if (iVar2 < 0x2388) {
            if (iVar2 == 0x21d4) {
                return uVar1;
            }
            iVar3 = 0x2368;
        }
        else {
            if (iVar2 == 0x2388) {
                return uVar1;
            }
            if (iVar2 == 0x2598) {
                return uVar1;
            }
            iVar3 = 0x25f8;
        }
    }
    else {
        if (iVar2 < 0x41d4) {
            if (iVar2 - 0x3084U < 0x49) {
    //switch table (72 cases) at 0x8003391
                switch(*((iVar2 - 0x3084U) + 0x8003391) * 4 + 0x800a500) {
                case 0x800a508:
                    return uVar1;
                case 0x800a70c:
                    return 0;
                }
            }
            return 0;
        }
        if (iVar2 < 0x4388) {
            if (iVar2 == 0x41d4) {
                return uVar1;
            }
            iVar3 = 0x4368;
        }
        else {
            if (iVar2 == 0x4388) {
                return uVar1;
            }
            if (iVar2 == 0x4598) {
                return uVar1;
            }
            iVar3 = 0x45f8;
        }
    }
    if (iVar2 != iVar3) {
        return 0;
    }
    return uVar1;
}


// ===== sym.lpass_cdc_rsc_clk_reset @ 0x0800a718 (size 388) =====

ulong sym.lpass_cdc_rsc_clk_reset(int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    bool bVar2;
    int iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ulong *in_x18;
    uint64_t uVar6;
    ulong uVar7;
    int iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        uVar7 = 0x8002c0e;
    }
    else {
        uVar6 = arg2;
        if (7 < arg2) {
            _printk(0x8001e24,"lpass_cdc_rsc_clk_reset",uVar6);
            return 0xffffffea;
        }
        iVar4 = sym.lpass_cdc_get_rsc_clk_device_ptr(*(arg1 + 0x60));
        if (iVar4 == 0) {
            uVar7 = 0x8002830;
        }
        else {
            iVar4 = *(iVar4 + 0x98);
            if (iVar4 != 0) {
                mutex_lock(iVar4 + 8);
                iVar1 = iVar4 + 0x68;
                uVar5 = __clk_is_enabled(*(iVar1 + uVar6 * 8));
                if ((uVar5 & 1) == 0) {
                    __trace_bprintk(0x800a7a4,*0x800b000,"lpass_cdc_rsc_clk_reset",0);
                }
                else {
                    iVar8 = 0;
                    do {
                        uVar7 = *(iVar1 + uVar6 * 8);
                        clk_disable(uVar7);
                        clk_unprepare(uVar7);
                        uVar5 = __clk_is_enabled(*(iVar1 + uVar6 * 8));
                        iVar8 = iVar8 + -1;
                    } while ((uVar5 & 1) != 0);
                    __trace_bprintk(0x800a7a4,*0x800b000,"lpass_cdc_rsc_clk_reset",-iVar8);
                    if (iVar8 != 0) {
                        do {
                            uVar7 = *(iVar1 + uVar6 * 8);
                            iVar3 = clk_prepare(uVar7);
                            if ((iVar3 == 0) && (iVar3 = clk_enable(uVar7), iVar3 != 0)) {
                                clk_unprepare(uVar7);
                            }
                            bVar2 = iVar8 != -1;
                            iVar8 = iVar8 + 1;
                        } while (bVar2);
                    }
                }
                mutex_unlock(iVar4 + 8);
                return 0;
            }
            uVar7 = 0x800284e;
        }
    }
    _printk(uVar7,"lpass_cdc_rsc_clk_reset");
    return 0xffffffea;
}


// ===== sym.lpass_cdc_clk_rsc_enable_all_clocks @ 0x0800a89c (size 256) =====

void sym.lpass_cdc_clk_rsc_enable_all_clocks(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong uVar4;
    ulong *in_x18;
    int64_t iVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        uVar4 = 0x8002c0e;
    }
    else {
        iVar2 = sym.lpass_cdc_get_rsc_clk_device_ptr(*(arg1 + 0x60));
        if (iVar2 == 0) {
            uVar4 = 0x8002830;
        }
        else {
            iVar2 = *(iVar2 + 0x98);
            if (iVar2 != 0) {
                mutex_lock(iVar2 + 8);
                iVar6 = 0;
                do {
                    iVar5 = *(iVar2 + 0x68 + iVar6);
                    if ((arg2 & 1U) == 0) {
                        if ((iVar5 != 0) && (uVar3 = __clk_is_enabled(iVar5), (uVar3 & 1) != 0)) {
                            iVar5 = *(iVar2 + 0x68 + iVar6);
                            clk_disable(iVar5);
                            goto code_r0x0800a8ec;
                        }
                    }
                    else if (((iVar5 != 0) && (iVar1 = clk_prepare(iVar5), iVar1 == 0)) &&
                            (iVar1 = clk_enable(iVar5), iVar1 != 0)) {
code_r0x0800a8ec:
                        clk_unprepare(iVar5);
                    }
                    iVar6 = iVar6 + 8;
                    if (iVar6 == 0x40) {
                        mutex_unlock(iVar2 + 8);
                        return;
                    }
                } while( true );
            }
            uVar4 = 0x80025ee;
        }
    }
    _printk(uVar4,"lpass_cdc_clk_rsc_enable_all_clocks");
    return;
}


// ===== sym.lpass_cdc_clk_rsc_fs_gen_request @ 0x0800a99c (size 444) =====

void sym.lpass_cdc_clk_rsc_fs_gen_request(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong *in_x18;
    uint32_t uVar5;
    uint64_t uVar6;
    int64_t *piVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        uVar3 = 0x8002c0e;
    }
    else {
        iVar2 = sym.lpass_cdc_get_rsc_clk_device_ptr(*(arg1 + 0x60));
        if (iVar2 == 0) {
            uVar3 = 0x8002830;
        }
        else {
            piVar7 = *(iVar2 + 0x98);
            if (piVar7 == NULL) {
                uVar3 = 0x800284e;
            }
            else {
                iVar2 = dev_get_regmap(*(*piVar7 + 0x60),0);
                if (iVar2 != 0) {
                    mutex_lock(piVar7 + 7);
                    iVar1 = piVar7[0x19];
                    if ((arg2 & 1U) == 0) {
                        if (iVar1 < 1) {
                            iVar1 = ___ratelimit(obj.lpass_cdc_clk_rsc_fs_gen_request._rs,
                                                 "lpass_cdc_clk_rsc_fs_gen_request");
                            if (iVar1 != 0) {
                                _dev_err(*piVar7,"%s: req_seq_cnt: %d is already disabled\n",
                                         "lpass_cdc_clk_rsc_fs_gen_request",piVar7[0x19]);
                            }
                            *(piVar7 + 0x19) = 0;
                        }
                        else {
                            *(piVar7 + 0x19) = iVar1 + -1;
                            if (iVar1 + -1 == 0) {
                                iVar1 = *(piVar7 + 0xd4) * 3;
                                uVar5 = iVar1 - 3;
                                uVar6 = uVar5;
                                if (-1 < uVar5) {
                                    iVar1 = iVar1 + -2;
                                    do {
                                        regmap_update_bits_base
                                                  (iVar2,*(piVar7[0x1b] + uVar6 * 4),*(piVar7[0x1b] + iVar1 * 4),0,0
                                                   ,0,0);
                                        uVar6 = uVar6 - 3;
                                        iVar1 = iVar1 + -3;
                                    } while (-1 < uVar6);
                                }
                            }
                        }
                    }
                    else {
                        *(piVar7 + 0x19) = iVar1 + 1;
                        if ((iVar1 == 0) && (*(piVar7 + 0xd4) * 3 != 0)) {
                            uVar5 = 0;
                            do {
                                iVar4 = piVar7[0x1b];
                                regmap_update_bits_base
                                          (iVar2,*(iVar4 + uVar5 * 4),*(iVar4 + (uVar5 + 1) * 4),
                                           *(iVar4 + (uVar5 + 2) * 4),0,0,0);
                                uVar5 = uVar5 + 3;
                            } while (uVar5 < *(piVar7 + 0xd4) * 3);
                        }
                    }
                    mutex_unlock(piVar7 + 7);
                    return;
                }
                uVar3 = 0x8002542;
            }
        }
    }
    _printk(uVar3,"lpass_cdc_clk_rsc_fs_gen_request");
    return;
}


// ===== sym.lpass_cdc_clk_rsc_request_clock @ 0x0800ab58 (size 1204) =====

int sym.lpass_cdc_clk_rsc_request_clock(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *puVar1;
    uint32_t uVar2;
    code *pcVar3;
    int iVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong *arg1_00;
    ulong uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        uVar6 = 0x8002c0e;
code_r0x0800ae4c:
        _printk(uVar6,"lpass_cdc_clk_rsc_request_clock");
        return -0x16;
    }
    uVar2 = arg3;
    if ((7 < arg2) && (7 < uVar2)) {
        _printk(0x8001fc1,"lpass_cdc_clk_rsc_request_clock",arg3 & 0xffffffff,arg2);
        return -0x16;
    }
    iVar5 = sym.lpass_cdc_get_rsc_clk_device_ptr(*(arg1 + 0x60));
    if (iVar5 == 0) {
        uVar6 = 0x8002830;
        goto code_r0x0800ae4c;
    }
    arg1_00 = *(iVar5 + 0x98);
    if (arg1_00 == NULL) {
        uVar6 = 0x800284e;
        goto code_r0x0800ae4c;
    }
    puVar1 = arg1_00 + 1;
    mutex_lock(puVar1);
    if ((*(arg1_00 + 0x1a) == '\0') && ((arg4 & 1U) != 0)) {
        iVar4 = ___ratelimit(obj.lpass_cdc_clk_rsc_request_clock._rs,"lpass_cdc_clk_rsc_request_clock");
        if (iVar4 != 0) {
            _dev_err(*arg1_00,"%s: SSR is in progress..\n","lpass_cdc_clk_rsc_request_clock");
        }
        __trace_bprintk(0x800abe0,*0x800b000,"lpass_cdc_clk_rsc_request_clock");
        iVar4 = -0x16;
        goto code_r0x0800ae74;
    }
    if (7 < uVar2) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5512,0x800b00c);
        (*pcVar3)();
    }
    *(arg1_00 + uVar2 * 4 + 0xe0) = arg2;
    if (arg2 == uVar2) {
        iVar4 = sym.lpass_cdc_clk_rsc_mux0_clk_request(arg1_00,arg3 & 0xffffffff);
joined_r0x0800ac54:
        if (iVar4 < 0) goto code_r0x0800ae74;
    }
    else if (uVar2 != 3) {
        iVar4 = sym.lpass_cdc_clk_rsc_mux1_clk_request(arg1_00,arg3 & 0xffffffff);
        goto joined_r0x0800ac54;
    }
    if ((arg4 & 1U) == 0) {
        if (arg2 == uVar2 || uVar2 != 3) {
            iVar4 = *(arg1_00 + 0xcc);
            if (iVar4 == *(arg1_00 + 0x15)) {
                while (iVar4 != 0) {
                    iVar4 = sym.lpass_cdc_clk_rsc_mux1_clk_request(arg1_00,3);
                    if (iVar4 < 0) goto code_r0x0800ae74;
                    if (*(arg1_00 + 0x15) < 1) {
                        iVar4 = ___ratelimit(obj.lpass_cdc_clk_rsc_mux0_clk_request._rs.26,
                                             "lpass_cdc_clk_rsc_mux0_clk_request");
                        if (iVar4 != 0) {
                            _dev_err(*arg1_00,"%s: clk_id: %d is already disabled\n",
                                     "lpass_cdc_clk_rsc_mux0_clk_request",0);
                        }
                        *(arg1_00 + 0x15) = 0;
                    }
                    else {
                        iVar4 = *(arg1_00 + 0x15) + -1;
                        *(arg1_00 + 0x15) = iVar4;
                        if (iVar4 == 0) {
                            uVar6 = arg1_00[0xd];
                            clk_disable(uVar6);
                            clk_unprepare(uVar6);
                        }
                    }
                    iVar4 = *(arg1_00 + 0xcc) + -1;
                    *(arg1_00 + 0xcc) = iVar4;
                }
            }
            goto code_r0x0800af48;
        }
        iVar4 = *(arg1_00 + 0xb4);
        if (iVar4 != 0) {
            if (arg1_00[0x23] != 0) {
                if (iVar4 < 1) {
                    iVar4 = ___ratelimit(obj.lpass_cdc_clk_rsc_mux1_clk_request._rs.19,
                                         "lpass_cdc_clk_rsc_mux1_clk_request");
                    if (iVar4 != 0) {
                        _dev_err(*arg1_00,"%s: clk_id: %d is already disabled\n","lpass_cdc_clk_rsc_mux1_clk_request"
                                 ,3);
                    }
                    *(arg1_00 + 0xb4) = 0;
                }
                else {
                    *(arg1_00 + 0xb4) = iVar4 + -1;
                    if (iVar4 + -1 == 0) {
                        uVar6 = arg1_00[0x10];
                        clk_disable(uVar6);
                        clk_unprepare(uVar6);
                    }
                }
            }
            goto code_r0x0800af48;
        }
        if (*(arg1_00 + 0xcc) == 0) goto code_r0x0800af48;
        if (*(arg1_00 + 0x15) < 1) {
            iVar4 = ___ratelimit(obj.lpass_cdc_clk_rsc_mux0_clk_request._rs.26,"lpass_cdc_clk_rsc_mux0_clk_request");
            if (iVar4 != 0) {
                _dev_err(*arg1_00,"%s: clk_id: %d is already disabled\n","lpass_cdc_clk_rsc_mux0_clk_request",0);
            }
            *(arg1_00 + 0x15) = 0;
        }
        else {
            iVar4 = *(arg1_00 + 0x15) + -1;
            *(arg1_00 + 0x15) = iVar4;
            if (iVar4 == 0) {
                uVar6 = arg1_00[0xd];
                clk_disable(uVar6);
                clk_unprepare(uVar6);
            }
        }
        iVar4 = *(arg1_00 + 0xcc) + -1;
    }
    else {
        if (arg2 == uVar2 || uVar2 != 3) {
            if (0 < *(arg1_00 + 0x15)) {
                iVar4 = *(arg1_00 + 0xb4);
                while (0 < iVar4) {
                    iVar4 = sym.lpass_cdc_clk_rsc_mux0_clk_request(arg1_00,0);
                    if (iVar4 < 0) goto code_r0x0800ae74;
                    if (arg1_00[0x23] == 0) {
code_r0x0800ac90:
                        iVar4 = *(arg1_00 + 0xb4);
                    }
                    else {
                        if (*(arg1_00 + 0xb4) < 1) {
                            iVar4 = ___ratelimit(obj.lpass_cdc_clk_rsc_mux1_clk_request._rs.19,
                                                 "lpass_cdc_clk_rsc_mux1_clk_request");
                            if (iVar4 != 0) {
                                _dev_err(*arg1_00,"%s: clk_id: %d is already disabled\n",
                                         "lpass_cdc_clk_rsc_mux1_clk_request",3);
                            }
                            *(arg1_00 + 0xb4) = 0;
                            iVar4 = *(arg1_00 + 0xcc) + 1;
                            goto code_r0x0800af40;
                        }
                        iVar4 = *(arg1_00 + 0xb4) + -1;
                        *(arg1_00 + 0xb4) = iVar4;
                        if (iVar4 == 0) {
                            uVar6 = arg1_00[0x10];
                            clk_disable(uVar6);
                            clk_unprepare(uVar6);
                            goto code_r0x0800ac90;
                        }
                    }
                    *(arg1_00 + 0xcc) = *(arg1_00 + 0xcc) + 1;
                }
            }
            goto code_r0x0800af48;
        }
        if (*(arg1_00 + 0x15) == 0) {
            iVar4 = sym.lpass_cdc_clk_rsc_mux1_clk_request(arg1_00,3);
            if (iVar4 < 0) goto code_r0x0800ae74;
            goto code_r0x0800af48;
        }
        iVar4 = sym.lpass_cdc_clk_rsc_mux0_clk_request(arg1_00,0);
        if (iVar4 < 0) {
code_r0x0800ae74:
            mutex_unlock(puVar1);
            return iVar4;
        }
        iVar4 = *(arg1_00 + 0xcc) + 1;
    }
code_r0x0800af40:
    *(arg1_00 + 0xcc) = iVar4;
code_r0x0800af48:
    __trace_bprintk(0x800af44,*0x800b000,"lpass_cdc_clk_rsc_request_clock",*(arg1_00 + uVar2 * 4 + 0xa8),
                    arg3 & 0xffffffff,arg4 & 1);
    mutex_unlock(puVar1);
    return 0;
}


// ===== sym.lpass_cdc_clk_rsc_mux1_clk_request @ 0x0800b00c (size 1028) =====

uint64_t sym.lpass_cdc_clk_rsc_mux1_clk_request(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    code *pcVar2;
    int iVar3;
    uint32_t uVar4;
    int iVar5;
    uint64_t uVar6;
    uint64_t in_x2;
    ulong *in_x18;
    int64_t iVar7;
    int *piVar8;
    int64_t arg2_00;
    int64_t iVar9;
    ulong uVar10;
    int *piVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = arg2;
    if (iVar3 - 1U < 4) {
    //switch table (4 cases) at 0x8005a58
        switch(*((iVar3 - 1U) + 0x8005a58) * 4 + 0x800b058) {
        case 0x800b05c:
            arg2_00 = *(arg1 + 0x110);
            if (arg2_00 == 0) goto code_r0x0800b110;
            goto code_r0x0800b0b4;
        case 0x800b0a8:
            arg2_00 = *(arg1 + 0x108);
            break;
        case 0x800b104:
            arg2_00 = *(arg1 + 0x118);
        }
        if (arg2_00 != 0) {
code_r0x0800b0b4:
            iVar9 = iVar3;
            uVar1 = *(arg1 + iVar3 * 4 + 0xe0);
            iVar7 = uVar1;
            piVar11 = arg1 + iVar9 * 4 + 0xa8;
            iVar5 = *piVar11;
            if ((in_x2 & 1) == 0) {
                if (iVar5 < 1) {
                    iVar3 = ___ratelimit(obj.lpass_cdc_clk_rsc_mux1_clk_request._rs.19,
                                         "lpass_cdc_clk_rsc_mux1_clk_request");
                    if (iVar3 != 0) {
                        _dev_err(*arg1,"%s: clk_id: %d is already disabled\n","lpass_cdc_clk_rsc_mux1_clk_request",
                                 arg2 & 0xffffffff);
                    }
                    uVar4 = 0;
                    *piVar11 = 0;
                    goto code_r0x0800b114;
                }
                *piVar11 = iVar5 + -1;
                if (iVar5 + -1 == 0) {
                    if (iVar3 == 3) {
code_r0x0800b23c:
                        uVar4 = 0;
                    }
                    else {
                        uVar4 = sym.lpass_cdc_clk_rsc_mux0_clk_request(arg1,uVar1);
                        if (uVar4 == 0) {
                            if (*(arg1 + 0xd1) != '\0') {
                                sym.writel_1(0,arg2_00);
                                uVar6 = sym.readl_1(arg2_00);
                                return uVar6;
                            }
                            goto code_r0x0800b23c;
                        }
                    }
                    uVar10 = *(arg1 + iVar9 * 8 + 0x68);
                    clk_disable(uVar10);
                    clk_unprepare(uVar10);
                    if ((iVar3 == 3) || (uVar4 != 0)) goto code_r0x0800b114;
                    if (7 < uVar1) goto code_r0x0800b40c;
                    piVar11 = arg1 + iVar7 * 4 + 0xa8;
                    if (*piVar11 < 1) {
                        iVar3 = ___ratelimit(obj.lpass_cdc_clk_rsc_mux0_clk_request._rs.26,
                                             "lpass_cdc_clk_rsc_mux0_clk_request");
                        if (iVar3 != 0) {
                            _dev_err(*arg1,"%s: clk_id: %d is already disabled\n","lpass_cdc_clk_rsc_mux0_clk_request"
                                     ,uVar1);
                        }
                        uVar4 = 0;
                        *piVar11 = 0;
                        goto code_r0x0800b114;
                    }
                    iVar3 = *piVar11 + -1;
                    *piVar11 = iVar3;
                    if (iVar3 == 0) {
                        uVar10 = *(arg1 + iVar7 * 8 + 0x68);
                        clk_disable(uVar10);
                        clk_unprepare(uVar10);
                    }
                }
                uVar4 = 0;
                goto code_r0x0800b114;
            }
            if (iVar5 == 0) {
                if ((iVar3 != 3) && (uVar4 = sym.lpass_cdc_clk_rsc_mux0_clk_request(arg1,uVar1), uVar4 < 0))
                goto code_r0x0800b114;
                uVar10 = *(arg1 + iVar9 * 8 + 0x68);
                uVar4 = clk_prepare(uVar10);
                if (uVar4 == 0) {
                    uVar4 = clk_enable(uVar10);
                    if (uVar4 != 0) {
                        clk_unprepare(uVar10);
                        goto code_r0x0800b184;
                    }
                }
                else {
code_r0x0800b184:
                    if (uVar4 < 0) {
                        iVar5 = ___ratelimit(obj.lpass_cdc_clk_rsc_mux1_clk_request._rs,
                                             "lpass_cdc_clk_rsc_mux1_clk_request");
                        if (iVar5 != 0) {
                            _dev_err(*arg1,"%s:clk_id %d enable failed\n","lpass_cdc_clk_rsc_mux1_clk_request",
                                     arg2 & 0xffffffff);
                        }
                        if (iVar3 != 3) {
                            sym.lpass_cdc_clk_rsc_mux0_clk_request(arg1,uVar1);
                        }
                        goto code_r0x0800b114;
                    }
                }
                if (iVar3 != 3) {
                    if (*(arg1 + 0xd1) != '\0') {
                        sym.writel_1(1,arg2_00);
                        uVar6 = sym.readl_1(arg2_00);
                        return uVar6;
                    }
                    if (7 < uVar1) {
code_r0x0800b40c:
    //WARNING: Does not return
                        pcVar2 = SoftwareBreakpoint(0x5512,0x800b410);
                        (*pcVar2)();
                    }
                    piVar8 = arg1 + iVar7 * 4 + 0xa8;
                    if (*piVar8 < 1) {
                        iVar3 = ___ratelimit(obj.lpass_cdc_clk_rsc_mux0_clk_request._rs.26,
                                             "lpass_cdc_clk_rsc_mux0_clk_request");
                        if (iVar3 != 0) {
                            _dev_err(*arg1,"%s: clk_id: %d is already disabled\n","lpass_cdc_clk_rsc_mux0_clk_request"
                                     ,uVar1);
                        }
                        *piVar8 = 0;
                    }
                    else {
                        iVar3 = *piVar8 + -1;
                        *piVar8 = iVar3;
                        if (iVar3 == 0) {
                            uVar10 = *(arg1 + iVar7 * 8 + 0x68);
                            clk_disable(uVar10);
                            clk_unprepare(uVar10);
                        }
                    }
                }
            }
            else {
                uVar4 = 0;
            }
            *piVar11 = *piVar11 + 1;
            goto code_r0x0800b114;
        }
    }
    else {
        iVar3 = ___ratelimit(obj.lpass_cdc_clk_rsc_get_clk_muxsel._rs,"lpass_cdc_clk_rsc_get_clk_muxsel");
        if (iVar3 != 0) {
            _dev_err(*arg1,"%s: Invalid case\n","lpass_cdc_clk_rsc_get_clk_muxsel");
            uVar4 = 0xffffffea;
            goto code_r0x0800b114;
        }
    }
code_r0x0800b110:
    uVar4 = 0xffffffea;
code_r0x0800b114:
    return uVar4;
}


// ===== sym.lpass_cdc_clk_rsc_mux0_clk_request @ 0x0800b410 (size 372) =====

int sym.lpass_cdc_clk_rsc_mux0_clk_request(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    int iVar2;
    int iVar3;
    uint64_t in_x2;
    int64_t iVar4;
    ulong *in_x18;
    uint32_t uVar5;
    ulong uVar6;
    int *piVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar5 = arg2;
    iVar4 = uVar5;
    if ((in_x2 & 1) == 0) {
        if (uVar5 < 8) {
            piVar7 = arg1 + iVar4 * 4 + 0xa8;
            if (0 < *piVar7) {
                iVar2 = *piVar7 + -1;
                *piVar7 = iVar2;
                if (iVar2 == 0) {
                    uVar6 = *(arg1 + iVar4 * 8 + 0x68);
                    clk_disable(uVar6);
                    clk_unprepare(uVar6);
                }
                return 0;
            }
            iVar2 = ___ratelimit(obj.lpass_cdc_clk_rsc_mux0_clk_request._rs.26,"lpass_cdc_clk_rsc_mux0_clk_request");
            if (iVar2 != 0) {
                _dev_err(*arg1,"%s: clk_id: %d is already disabled\n","lpass_cdc_clk_rsc_mux0_clk_request",
                         arg2 & 0xffffffffU);
            }
            *piVar7 = 0;
            return 0;
        }
    }
    else if (uVar5 < 8) {
        piVar7 = arg1 + iVar4 * 4 + 0xa8;
        if (*piVar7 == 0) {
            uVar6 = *(arg1 + iVar4 * 8 + 0x68);
            iVar2 = clk_prepare(uVar6);
            if (iVar2 == 0) {
                iVar2 = clk_enable(uVar6);
                if (iVar2 == 0) goto code_r0x0800b4fc;
                clk_unprepare(uVar6);
            }
            if (iVar2 < 0) {
                iVar3 = ___ratelimit(obj.lpass_cdc_clk_rsc_mux0_clk_request._rs,"lpass_cdc_clk_rsc_mux0_clk_request");
                if (iVar3 == 0) {
                    return iVar2;
                }
                _dev_err(*arg1,"%s:clk_id %d enable failed\n","lpass_cdc_clk_rsc_mux0_clk_request",arg2 & 0xffffffffU
                        );
                return iVar2;
            }
        }
        else {
            iVar2 = 0;
        }
code_r0x0800b4fc:
        *piVar7 = *piVar7 + 1;
        return iVar2;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x800b584);
    (*pcVar1)();
}


// ===== sym.lpass_cdc_clk_rsc_mgr_init @ 0x0800b584 (size 52) =====

void sym.lpass_cdc_clk_rsc_mgr_init(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.lpass_cdc_clk_rsc_probe.c744908b27879af7a832d97c8febcb94.cfi_jt,obj.__this_module)
    ;
    return;
}


// ===== sym.lpass_cdc_clk_rsc_mgr_exit @ 0x0800b5b8 (size 44) =====

void sym.lpass_cdc_clk_rsc_mgr_exit(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.lpass_cdc_clk_rsc_probe.c744908b27879af7a832d97c8febcb94.cfi_jt);
    return;
}


// ===== sym.lpass_cdc_clk_rsc_probe @ 0x0800b5e4 (size 1064) =====

uint64_t sym.lpass_cdc_clk_rsc_probe(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t *piVar3;
    int64_t iVar4;
    ulong *puVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong uVar8;
    char *pcVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar10;
    ulong unaff_x30;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iVar7 = arg1 + 0x10;
    iStack_58 = *(iVar4 + 0x5e0);
    uStack_60 = 0;
    piVar3 = devm_kmalloc(iVar7,0x120,0xdc0);
    if (piVar3 == NULL) {
code_r0x0800b9c8:
        uVar10 = 0xfffffff4;
    }
    else {
        iVar4 = of_find_property(*(arg1 + 0x300),"qcom,fs-gen-sequence",&uStack_60 + 4);
        if (iVar4 == 0) {
            _dev_err(iVar7,"%s: unable to find qcom,fs-gen-sequence property\n","lpass_cdc_clk_rsc_probe");
            uVar10 = 0xffffffea;
            goto code_r0x0800b9cc;
        }
        iVar2 = uStack_60._4_4_ / 0xc;
        *(piVar3 + 0xd4) = iVar2;
        iVar4 = devm_kmalloc(iVar7,uStack_60._4_4_,0xdc0);
        piVar3[0x1b] = iVar4;
        if (iVar4 == 0) goto code_r0x0800b9c8;
        uVar1 = of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,fs-gen-sequence",iVar4,iVar2 * 3,0);
        if (uVar1 < 0) {
            uVar10 = uVar1;
            pcVar9 = "%s: unable to parse fs-gen-sequence, ret = %d\n";
        }
        else {
            uVar1 = of_property_read_string_helper(*(arg1 + 0x300),"clock-names",0,0,0);
            uVar10 = uVar1;
            if (uVar1 - 9 < 0xfffffff8) {
                _dev_err(iVar7,"%s: Invalid number of clocks %d","lpass_cdc_clk_rsc_probe",uVar10);
                uVar10 = 0xffffffea;
                goto code_r0x0800b9cc;
            }
            puVar5 = devm_kmalloc(iVar7,uVar10 << 3,0xdc0);
            if (puVar5 == NULL) goto code_r0x0800b9c8;
            of_property_read_string_helper(*(arg1 + 0x300),"clock-names",puVar5,uVar10,0);
            iVar4 = 0x68;
            pcVar9 = "tx_core_clk";
            do {
                uVar8 = *puVar5;
                *(piVar3 + iVar4) = 0;
                iVar2 = strcmp(pcVar9,uVar8);
                if ((iVar2 == 0) ||
                   ((uVar1 != 1 &&
                    ((iVar2 = strcmp(pcVar9,puVar5[1]), iVar2 == 0 ||
                     ((uVar1 != 2 &&
                      ((iVar2 = strcmp(pcVar9,puVar5[2]), iVar2 == 0 ||
                       ((uVar1 != 3 &&
                        ((iVar2 = strcmp(pcVar9,puVar5[3]), iVar2 == 0 ||
                         ((uVar1 != 4 &&
                          ((iVar2 = strcmp(pcVar9,puVar5[4]), iVar2 == 0 ||
                           ((uVar1 != 5 &&
                            ((iVar2 = strcmp(pcVar9,puVar5[5]), iVar2 == 0 ||
                             ((uVar1 != 6 &&
                              ((iVar2 = strcmp(pcVar9,puVar5[6]), iVar2 == 0 ||
                               ((uVar1 != 7 && (iVar2 = strcmp(pcVar9,puVar5[7]), iVar2 == 0))))))))))))))))))))))))))
                   )) {
                    uVar10 = devm_clk_get(iVar7,pcVar9);
                    if (0xfffffffffffff000 < uVar10) {
                        _dev_err(iVar7,"%s: clk get failed for %s with ret %d\n","lpass_cdc_clk_rsc_probe",pcVar9,
                                 uVar10 & 0xffffffff);
                        goto code_r0x0800b9cc;
                    }
                    *(piVar3 + iVar4) = uVar10;
                }
                iVar4 = iVar4 + 8;
                pcVar9 = pcVar9 + 0x1e;
            } while (iVar4 != 0xa8);
            iVar2 = of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,rx_mclk_mode_muxsel",&uStack_60,1,0);
            if (-1 < iVar2) {
                iVar4 = devm_ioremap(iVar7,uStack_60 & 0xffffffff,4);
                piVar3[0x21] = iVar4;
                if (iVar4 != 0) goto code_r0x0800b834;
                pcVar9 = "%s: ioremap failed for rx muxsel\n";
code_r0x0800b9b8:
                _dev_err(iVar7,pcVar9,"lpass_cdc_clk_rsc_probe");
                goto code_r0x0800b9c8;
            }
code_r0x0800b834:
            iVar2 = of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,wsa_mclk_mode_muxsel",&uStack_60,1,0);
            if (-1 < iVar2) {
                iVar4 = devm_ioremap(iVar7,uStack_60 & 0xffffffff,4);
                piVar3[0x22] = iVar4;
                if (iVar4 == 0) {
                    pcVar9 = "%s: ioremap failed for wsa muxsel\n";
                    goto code_r0x0800b9b8;
                }
            }
            iVar2 = of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,va_mclk_mode_muxsel",&uStack_60,1,0);
            if (-1 < iVar2) {
                iVar4 = devm_ioremap(iVar7,uStack_60 & 0xffffffff,4);
                piVar3[0x23] = iVar4;
                if (iVar4 == 0) {
                    pcVar9 = "%s: ioremap failed for va muxsel\n";
                    goto code_r0x0800b9b8;
                }
            }
            uVar6 = sym.lpass_cdc_register_res_clk(iVar7,0x8006778);
            uVar10 = uVar6 & 0xffffffff;
            if (-1 < uVar6) {
                *piVar3 = iVar7;
                *(piVar3 + 0x1a) = 0x101;
                __mutex_init(piVar3 + 1,"&priv->rsc_clk_lock",obj.lpass_cdc_probe.__key);
                __mutex_init(piVar3 + 7,"&priv->fs_gen_lock",obj.lpass_cdc_probe.__key);
                *(arg1 + 0xa8) = piVar3;
                goto code_r0x0800b9cc;
            }
            pcVar9 = "%s: Failed to register cb %d";
        }
        _dev_err(iVar7,pcVar9,"lpass_cdc_clk_rsc_probe",uVar10);
    }
code_r0x0800b9cc:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_58) {
        iVar7 = __stack_chk_fail();
        *extraout_x18 = sym.lpass_cdc_clk_rsc_remove;
        iVar4 = *(iVar7 + 0xa8);
        sym.lpass_cdc_unregister_res_clk(iVar7 + 0x10);
        of_platform_depopulate(iVar7 + 0x10);
        uVar1 = 0xffffffea;
        if (iVar4 != 0) {
            uVar1 = 0;
        }
        return uVar1;
    }
    return uVar10 & 0xffffffff;
}


// ===== sym.lpass_cdc_clk_rsc_remove @ 0x0800ba0c (size 76) =====

uint sym.lpass_cdc_clk_rsc_remove(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0xa8);
    sym.lpass_cdc_unregister_res_clk(arg1 + 0x10);
    of_platform_depopulate(arg1 + 0x10);
    uVar1 = 0xffffffea;
    if (iVar2 != 0) {
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.lpass_cdc_clk_rsc_cb @ 0x0800ba58 (size 184) =====

ulong sym.lpass_cdc_clk_rsc_cb(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        uVar2 = 0x800288b;
    }
    else {
        iVar3 = *(arg1 + 0x98);
        if (iVar3 != 0) {
            mutex_lock(iVar3 + 8);
            uVar1 = arg2 & 0xffff;
            if (uVar1 == 4) {
                *(iVar3 + 0xd0) = 0;
            }
            else if (uVar1 == 0xb) {
                *(iVar3 + 0xd1) = 1;
            }
            else if (uVar1 == 5) {
                *(iVar3 + 0xd0) = 1;
            }
            mutex_unlock(iVar3 + 8);
            return 0;
        }
        uVar2 = 0x8002eb1;
    }
    _printk(uVar2,"lpass_cdc_clk_rsc_cb");
    return 0xffffffea;
}


// ===== sym.init_module @ 0x0800bddc (size 84) =====

ulong sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.lpass_cdc_probe.9324bdfcbd927cfdef84d736718185f6.cfi_jt,obj.__this_module);
    __platform_driver_register(reloc.lpass_cdc_clk_rsc_probe.c744908b27879af7a832d97c8febcb94.cfi_jt,obj.__this_module)
    ;
    return 0;
}


// ===== sym.cleanup_module @ 0x0800be30 (size 56) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.lpass_cdc_clk_rsc_probe.c744908b27879af7a832d97c8febcb94.cfi_jt);
    platform_driver_unregister(reloc.lpass_cdc_probe.9324bdfcbd927cfdef84d736718185f6.cfi_jt);
    return;
}

