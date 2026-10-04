// decompiled from lpass_cdc_tx_macro_dlkm by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x0800d000 (size 712) =====

//WARNING: Switch with 1 destination removed at 0x0800fce4

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0xf2d15659b6de7a9) {
        if (arg1 < -0x49739d0000a0fe53) {
            if (arg1 != -0x749213c658cf941a) {
                if (arg1 == -0x57be845bca9148ef) {
                    if ((pcVar1 + -0x800d320 >> 3 | pcVar1 << 0x3d) < 4) {
                        return;
                    }
                    goto code_r0x0800fca4;
                }
                if (arg1 != -0x550b9e52359ac614) goto code_r0x0800fca4;
                pcVar2 = sym.lpass_cdc_tx_macro_mute_update_callback.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt;
code_r0x0800d284:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 3) {
                    return;
                }
                goto code_r0x0800fca4;
            }
            pcVar2 = sym.snd_soc_info_enum_double.cfi_jt;
        }
        else {
            if (-0x2ee0710dce68437d < arg1) {
                if (arg1 == -0x2ee0710dce68437c) {
                    pcVar2 = sym.delayed_work_timer_fn.cfi_jt;
                }
                else {
                    if (arg1 != -0x133b7e8d0b7609ce) goto code_r0x0800fca4;
                    pcVar2 = sym.__lpass_cdc_tx_macro_mclk_enable.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt;
                }
                goto code_r0x0800d2b8;
            }
            if (arg1 == -0x49739d0000a0fe53) {
                pcVar2 = sym.lpass_cdc_tx_macro_mclk_event.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt;
                goto code_r0x0800d284;
            }
            if (arg1 != -0x3557318fb8d07b71) goto code_r0x0800fca4;
            pcVar2 = sym.lpass_cdc_tx_macro_remove.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt;
        }
code_r0x0800d244:
        if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
            return;
        }
    }
    else {
        if (arg1 < 0x3a2d6f9b27d89e39) {
            if (arg1 == -0xf2d15659b6de7a9) {
                pcVar2 = sym.lpass_cdc_tx_macro_deinit.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt;
                goto code_r0x0800d284;
            }
            if (arg1 != 0x2b3a43e29242445) {
                if ((arg1 == 0x2882621ee1337d31) && ((pcVar1 + -0x800d388 >> 3 | pcVar1 << 0x3d) < 0x13)) {
                    return;
                }
                goto code_r0x0800fca4;
            }
            pcVar2 = sym.init_module.cfi_jt;
        }
        else if (arg1 < 0x74f0ccf11b57c4f0) {
            if (arg1 == 0x3a2d6f9b27d89e39) {
                pcVar2 = sym.lpass_cdc_tx_macro_get_channel_map.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt;
            }
            else {
                if (arg1 != 0x6b84145aa65a8cf9) goto code_r0x0800fca4;
                pcVar2 = sym.lpass_cdc_tx_macro_event_handler.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt;
            }
        }
        else {
            if (arg1 != 0x74f0ccf11b57c4f0) {
                if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x0800fca4;
                pcVar2 = sym.lpass_cdc_tx_macro_mute_hs.cfi_jt;
                goto code_r0x0800d244;
            }
            pcVar2 = sym.lpass_cdc_tx_macro_hw_params.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt;
        }
code_r0x0800d2b8:
        if (pcVar1 == pcVar2) {
            return;
        }
    }
code_r0x0800fca4:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800fcf8);
    (*pcVar1)();
}


// ===== sym.delayed_work_timer_fn.cfi_jt @ 0x0800d2d0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.delayed_work_timer_fn.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.lpass_cdc_tx_macro_mute_hs.cfi_jt @ 0x0800d2d8 (size 8) =====

void sym.lpass_cdc_tx_macro_mute_hs.cfi_jt(void)

{
    ushort uVar1;
    ulong *in_x18;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != 0) {
        iVar2 = *(_segment.ehdr + 0x78);
        if ((*(_segment.ehdr + 0xa00) & 1) == 0) {
            uVar3 = 0;
            do {
                iVar4 = uVar3 * 4;
                uVar1 = snd_soc_component_read(iVar2,*(obj.LPASS_CDC_TX_TX_VOL_CTL + iVar4));
                *(_segment.ehdr + uVar3 * 2 + 0xa8a) = uVar1;
                _dev_info(*(iVar2 + 0x18),"%s: the reg value of TX%d before mute is: %#x \n",
                          "lpass_cdc_tx_macro_mute_hs",uVar3 & 0xffffffff,*(_segment.ehdr + uVar3 * 2 + 0xa8a));
                snd_soc_component_update_bits(iVar2,*(obj.LPASS_CDC_TX_TX_VOL_CTL + iVar4),0xff,0xac);
                uVar1 = snd_soc_component_read(iVar2,*(obj.LPASS_CDC_TX_TX_VOL_CTL + iVar4));
                _dev_info(*(iVar2 + 0x18),"%s: the reg value of TX%d after mute is: %#x \n",
                          "lpass_cdc_tx_macro_mute_hs",uVar3 & 0xffffffff,uVar1);
                uVar3 = uVar3 + 1;
            } while (uVar3 != 8);
            queue_delayed_work_on(0x20,_delayed_work_timer_fn,_segment.ehdr + 0xa00,300);
        }
        else {
            _dev_err(*(iVar2 + 0x18),"%s: there is already a work, give up unmute\n","lpass_cdc_tx_macro_mute_hs");
        }
    }
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x0800d2e0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.lpass_cdc_tx_macro_probe.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x0800d2e8 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register
              (reloc.lpass_cdc_tx_macro_probe.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.lpass_cdc_tx_macro_deinit.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt @ 0x0800d2f0 (size 8) =====

void sym.lpass_cdc_tx_macro_deinit.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt(int64_t param_1)

{
    uint8_t uVar1;
    uint8_t uVar2;
    int iVar3;
    code *pcVar4;
    int iVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    ulong uVar8;
    uint64_t uVar9;
    int64_t iVar10;
    int64_t *arg3;
    ulong uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    int64_t iVar12;
    ulong *puVar13;
    ulong unaff_x30;
    uchar auVar14 [12];
    int64_t iStack_158;
    uchar auStack_150 [8];
    int64_t iStack_148;
    ulong ***pppuStack_140;
    code *pcStack_138;
    int64_t iStack_e8;
    uchar auStack_e0 [8];
    int64_t iStack_d8;
    uchar ***pppuStack_d0;
    code *pcStack_c8;
    uint64_t uStack_c0;
    int64_t iStack_a8;
    uchar auStack_a0 [8];
    int64_t iStack_98;
    uchar **ppuStack_90;
    code *pcStack_88;
    int64_t iStack_78;
    uint64_t uStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    int64_t iStack_28;
    uchar auStack_20 [8];
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_18 = *(iVar12 + 0x5e0);
    arg3 = &iStack_28;
    iStack_28 = 0;
    uVar7 = sym.lpass_cdc_tx_macro_get_data(param_1,auStack_20,arg3,0x80007c1);
    if ((uVar7 & 1) == 0) {
        uVar8 = 0xffffffea;
    }
    else {
        uVar8 = 0;
        *(iStack_28 + 0x78) = 0;
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_18) {
        return;
    }
    auVar14 = __stack_chk_fail(uVar8);
    *extraout_x18 = sym.lpass_cdc_tx_macro_event_handler;
    pcStack_58 = sym.lpass_cdc_tx_macro_event_handler;
    iVar12 = sp_el0;
    uVar7 = arg3 & 0xffffffff;
    iStack_68 = *(iVar12 + 0x5e0);
    iStack_78 = 0;
    uStack_70 = 0;
    puStack_60 = &stack0xfffffffffffffff0;
    uVar9 = sym.lpass_cdc_tx_macro_get_data(auVar14._0_8_,&uStack_70,&iStack_78,0x8001509);
    iVar12 = iStack_78;
    if ((uVar9 & 1) == 0) {
        uVar8 = 0xffffffea;
    }
    else {
        uVar8 = 0;
        switch(auVar14._8_4_ & 0xffff) {
        case 4:
            __trace_bprintk(0x800dc6c,*0x8010000,"lpass_cdc_tx_macro_event_handler");
            uVar7 = uStack_70;
            if ((((*(uStack_70 + 0x200) & 7) == 0) && (*(uStack_70 + 0x20c) == 2)) ||
               (iVar5 = lpass_cdc_runtime_suspend(uStack_70), iVar5 != 0)) {
                uVar8 = 0;
            }
            else {
                __pm_runtime_disable(uVar7,1);
                __pm_runtime_set_status(uVar7,2);
                pm_runtime_enable(uVar7);
                uVar8 = 0;
            }
            break;
        case 5:
            __trace_bprintk(0x800dcf4,*0x8010000,"lpass_cdc_tx_macro_event_handler");
            uVar8 = 0;
            break;
        case 7:
            lpass_cdc_rsc_clk_reset(uStack_70,0);
            uVar8 = 0;
            break;
        case 10:
            if (*(iStack_78 + 0xb2c) != '\0') {
                snd_soc_component_update_bits(auVar14._0_8_,0x42c,0x40,arg3 << 6);
            }
            if (arg3 == 0) {
                uVar8 = 0;
                *(iVar12 + 0xb2d) = 0;
            }
            else {
                uVar8 = 0;
                *(iVar12 + 0xb2d) = 1;
            }
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_68) {
        return;
    }
    iVar10 = __stack_chk_fail(uVar8);
    *extraout_x18_00 = sym.lpass_cdc_tx_macro_clk_div_get;
    pcStack_88 = sym.lpass_cdc_tx_macro_clk_div_get;
    iVar12 = sp_el0;
    iStack_98 = *(iVar12 + 0x5e0);
    iStack_a8 = 0;
    ppuStack_90 = &puStack_60;
    uVar9 = sym.lpass_cdc_tx_macro_get_data(iVar10,auStack_a0,&iStack_a8,0x8000fb6);
    if ((uVar9 & 1) == 0) {
        uVar9 = 0xffffffea;
    }
    else {
        uVar9 = *(iStack_a8 + 0xa88);
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_98) {
        return;
    }
    auVar14 = __stack_chk_fail(uVar9);
    *extraout_x18_01 = sym.__lpass_cdc_tx_macro_mclk_enable;
    pcStack_c8 = sym.__lpass_cdc_tx_macro_mclk_enable;
    iVar12 = sp_el0;
    iStack_d8 = *(iVar12 + 0x5e0);
    iStack_e8 = 0;
    pppuStack_d0 = &ppuStack_90;
    uStack_c0 = uVar7;
    uVar7 = sym.lpass_cdc_tx_macro_get_data(auVar14._0_8_,auStack_e0,&iStack_e8,0x8000aae);
    if ((uVar7 & 1) == 0) {
        uVar8 = 0xffffffea;
    }
    else {
        uVar8 = sym.lpass_cdc_tx_macro_mclk_enable(iStack_e8,auVar14._8_4_ & 1);
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_d8) {
        return;
    }
    iVar10 = __stack_chk_fail(uVar8);
    *extraout_x18_02 = sym.lpass_cdc_tx_macro_tx_hpf_corner_freq_callback;
    pcStack_138 = sym.lpass_cdc_tx_macro_tx_hpf_corner_freq_callback;
    iVar12 = sp_el0;
    iStack_148 = *(iVar12 + 0x5e0);
    puVar13 = *(iVar10 + -0x10);
    iStack_158 = 0;
    uVar1 = *(iVar10 + -8);
    uVar2 = *(iVar10 + -7);
    iVar12 = puVar13[0xf];
    iVar3 = uVar1 * 0x80;
    iVar5 = iVar3 + 0x404;
    iVar3 = iVar3 + 0x418;
    pppuStack_140 = &pppuStack_d0;
    uVar7 = sym.lpass_cdc_tx_macro_get_data(iVar12,auStack_150,&iStack_158,0x8000fec);
    if ((((uVar7 & 1) == 0) || (uVar7 = snd_soc_component_read(iVar12,uVar1 * 8 + 0x104), (uVar7 & 1) == 0)) ||
       (*(iStack_158 + 0xb50) != '\0')) {
        snd_soc_component_update_bits(iVar12,iVar5,0x60,uVar2 << 5);
        snd_soc_component_update_bits(iVar12,iVar3,2,2);
        usleep_range_state(1000,0x3f2,2);
        uVar8 = 2;
        uVar11 = 0;
    }
    else {
        uVar6 = snd_soc_component_read(iVar12,*(iVar10 + -8) * 8 + 0x100);
        lpass_cdc_clear_amic_tx_hold(*(iVar12 + 0x18),uVar6 & 0xf);
        snd_soc_component_update_bits(iVar12,iVar5,0x60,uVar2 << 5);
        snd_soc_component_update_bits(iVar12,iVar3,3,2);
        if (7 < *(iVar10 + -8)) goto code_r0x0800e0f4;
        switch(*(puVar13 + *(iVar10 + -8) * 4 + 0xb30)) {
        default:
            uVar8 = 0x7d;
            uVar11 = 0x82;
            break;
        case 1:
            uVar8 = 0x3e;
            uVar11 = 0x41;
            break;
        case 3:
            uVar8 = 0x1f;
            uVar11 = 0x20;
            break;
        case 4:
            uVar8 = 0x14;
            uVar11 = 0x15;
            break;
        case 5:
            uVar8 = 10;
            uVar11 = 0xb;
            break;
        case 6:
            uVar8 = 5;
            uVar11 = 6;
        }
        usleep_range_state(uVar8,uVar11,2);
        uVar8 = 3;
        uVar11 = 1;
    }
    snd_soc_component_update_bits(iVar12,iVar3,uVar8,uVar11);
    mutex_lock(puVar13 + 9);
    iVar5 = *(puVar13 + 0xb54) + -1;
    *(puVar13 + 0xb54) = iVar5;
    if (iVar5 == 0) {
        pm_relax(*puVar13);
        iVar5 = *(puVar13 + 0xb54);
    }
    if (iVar5 < 0) {
        *(puVar13 + 0xb54) = 0;
    }
    mutex_unlock(puVar13 + 9);
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_148) {
        return;
    }
    __stack_chk_fail();
code_r0x0800e0f4:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x800e0f8);
    (*pcVar4)();
}


// ===== sym.lpass_cdc_tx_macro_clk_div_get.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt @ 0x0800d2f8 (size 8) =====

void sym.lpass_cdc_tx_macro_clk_div_get.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt(int64_t param_1)

{
    int iVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    int iVar4;
    code *pcVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    ulong uVar8;
    int64_t iVar9;
    ulong uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar11;
    ulong *puVar12;
    ulong unaff_x30;
    uchar auVar13 [12];
    int64_t iStack_d8;
    uchar auStack_d0 [8];
    int64_t iStack_c8;
    uchar **ppuStack_c0;
    code *pcStack_b8;
    int64_t iStack_68;
    uchar auStack_60 [8];
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    int64_t iStack_28;
    uchar auStack_20 [8];
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_18 = *(iVar11 + 0x5e0);
    iStack_28 = 0;
    uVar7 = sym.lpass_cdc_tx_macro_get_data(param_1,auStack_20,&iStack_28,0x8000fb6);
    if ((uVar7 & 1) == 0) {
        uVar7 = 0xffffffea;
    }
    else {
        uVar7 = *(iStack_28 + 0xa88);
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_18) {
        return;
    }
    auVar13 = __stack_chk_fail(uVar7);
    *extraout_x18 = sym.__lpass_cdc_tx_macro_mclk_enable;
    pcStack_48 = sym.__lpass_cdc_tx_macro_mclk_enable;
    iVar11 = sp_el0;
    iStack_58 = *(iVar11 + 0x5e0);
    iStack_68 = 0;
    puStack_50 = &stack0xfffffffffffffff0;
    uVar7 = sym.lpass_cdc_tx_macro_get_data(auVar13._0_8_,auStack_60,&iStack_68,0x8000aae);
    if ((uVar7 & 1) == 0) {
        uVar8 = 0xffffffea;
    }
    else {
        uVar8 = sym.lpass_cdc_tx_macro_mclk_enable(iStack_68,auVar13._8_4_ & 1);
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_58) {
        return;
    }
    iVar9 = __stack_chk_fail(uVar8);
    *extraout_x18_00 = sym.lpass_cdc_tx_macro_tx_hpf_corner_freq_callback;
    pcStack_b8 = sym.lpass_cdc_tx_macro_tx_hpf_corner_freq_callback;
    iVar11 = sp_el0;
    iStack_c8 = *(iVar11 + 0x5e0);
    puVar12 = *(iVar9 + -0x10);
    iStack_d8 = 0;
    uVar2 = *(iVar9 + -8);
    uVar3 = *(iVar9 + -7);
    iVar11 = puVar12[0xf];
    iVar4 = uVar2 * 0x80;
    iVar1 = iVar4 + 0x404;
    iVar4 = iVar4 + 0x418;
    ppuStack_c0 = &puStack_50;
    uVar7 = sym.lpass_cdc_tx_macro_get_data(iVar11,auStack_d0,&iStack_d8,0x8000fec);
    if ((((uVar7 & 1) == 0) || (uVar7 = snd_soc_component_read(iVar11,uVar2 * 8 + 0x104), (uVar7 & 1) == 0)) ||
       (*(iStack_d8 + 0xb50) != '\0')) {
        snd_soc_component_update_bits(iVar11,iVar1,0x60,uVar3 << 5);
        snd_soc_component_update_bits(iVar11,iVar4,2,2);
        usleep_range_state(1000,0x3f2,2);
        uVar8 = 2;
        uVar10 = 0;
    }
    else {
        uVar6 = snd_soc_component_read(iVar11,*(iVar9 + -8) * 8 + 0x100);
        lpass_cdc_clear_amic_tx_hold(*(iVar11 + 0x18),uVar6 & 0xf);
        snd_soc_component_update_bits(iVar11,iVar1,0x60,uVar3 << 5);
        snd_soc_component_update_bits(iVar11,iVar4,3,2);
        if (7 < *(iVar9 + -8)) goto code_r0x0800e0f4;
        switch(*(puVar12 + *(iVar9 + -8) * 4 + 0xb30)) {
        default:
            uVar8 = 0x7d;
            uVar10 = 0x82;
            break;
        case 1:
            uVar8 = 0x3e;
            uVar10 = 0x41;
            break;
        case 3:
            uVar8 = 0x1f;
            uVar10 = 0x20;
            break;
        case 4:
            uVar8 = 0x14;
            uVar10 = 0x15;
            break;
        case 5:
            uVar8 = 10;
            uVar10 = 0xb;
            break;
        case 6:
            uVar8 = 5;
            uVar10 = 6;
        }
        usleep_range_state(uVar8,uVar10,2);
        uVar8 = 3;
        uVar10 = 1;
    }
    snd_soc_component_update_bits(iVar11,iVar4,uVar8,uVar10);
    mutex_lock(puVar12 + 9);
    iVar1 = *(puVar12 + 0xb54) + -1;
    *(puVar12 + 0xb54) = iVar1;
    if (iVar1 == 0) {
        pm_relax(*puVar12);
        iVar1 = *(puVar12 + 0xb54);
    }
    if (iVar1 < 0) {
        *(puVar12 + 0xb54) = 0;
    }
    mutex_unlock(puVar12 + 9);
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_c8) {
        return;
    }
    __stack_chk_fail();
code_r0x0800e0f4:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x800e0f8);
    (*pcVar5)();
}


// ===== sym.lpass_cdc_tx_macro_init.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt @ 0x0800d300 (size 8) =====

int sym.lpass_cdc_tx_macro_init.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    uint uVar2;
    int iVar3;
    int64_t iVar4;
    ulong uVar5;
    char *pcVar6;
    ulong *in_x18;
    char cVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = lpass_cdc_get_device_ptr(*(param_1 + 0x18),0);
    if (iVar4 == 0) {
        uVar5 = *(param_1 + 0x18);
        pcVar6 = "%s: null device for macro!\n";
    }
    else {
        iVar8 = *(iVar4 + 0x98);
        if (iVar8 != 0) {
            iVar1 = param_1 + 0xd0;
            uVar2 = lpass_cdc_get_version(iVar4);
            *(iVar8 + 0xa9c) = uVar2;
            iVar3 = snd_soc_dapm_new_controls(iVar1,obj.lpass_cdc_tx_macro_dapm_widgets,0x29);
            if (iVar3 < 0) {
                pcVar6 = "%s: Failed to add controls\n";
            }
            else {
                iVar3 = snd_soc_dapm_add_routes(iVar1,obj.tx_audio_map,0xd6);
                if (iVar3 < 0) {
                    pcVar6 = "%s: Failed to add routes\n";
                }
                else {
                    iVar3 = snd_soc_dapm_new_widgets(*(param_1 + 0xe8));
                    if (iVar3 < 0) {
                        pcVar6 = "%s: Failed to add widgets\n";
                    }
                    else {
                        iVar3 = snd_soc_add_component_controls(param_1,obj.lpass_cdc_tx_macro_snd_controls,0x1c);
                        if (-1 < iVar3) {
                            snd_soc_dapm_ignore_suspend(iVar1,"TX_AIF1 Capture");
                            snd_soc_dapm_ignore_suspend(iVar1,"TX_AIF2 Capture");
                            snd_soc_dapm_ignore_suspend(iVar1,"TX_AIF3 Capture");
                            snd_soc_dapm_ignore_suspend(iVar1,"TX SWR_INPUT");
                            snd_soc_dapm_sync(iVar1);
                            iVar4 = 0;
                            cVar7 = '\0';
                            do {
                                iVar1 = iVar8 + iVar4;
                                *(iVar1 + 0x80) = iVar8;
                                *(iVar1 + 0x88) = cVar7;
                                *(iVar1 + 0x90) = 0xfffffffe0;
                                *(iVar1 + 0x98) = iVar1 + 0x98;
                                *(iVar1 + 0xa0) = iVar1 + 0x98;
                                *(iVar1 + 0xa8) =
                                     sym.lpass_cdc_tx_macro_tx_hpf_corner_freq_callback.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt
                                ;
                                init_timer_key(iVar1 + 0xc0,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                                cVar7 = cVar7 + '\x01';
                                iVar4 = iVar4 + 0x98;
                            } while (iVar4 != 0x4c0);
                            iVar3 = 0;
                            iVar4 = 0;
                            do {
                                iVar1 = iVar8 + iVar4;
                                *(iVar1 + 0x540) = iVar8;
                                *(iVar1 + 0x548) = iVar3;
                                *(iVar1 + 0x550) = 0xfffffffe0;
                                *(iVar1 + 0x558) = iVar1 + 0x558;
                                *(iVar1 + 0x560) = iVar1 + 0x558;
                                *(iVar1 + 0x568) =
                                     sym.lpass_cdc_tx_macro_mute_update_callback.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt
                                ;
                                init_timer_key(iVar1 + 0x580,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                                iVar4 = iVar4 + 0x98;
                                iVar3 = iVar3 + 1;
                            } while (iVar4 != 0x4c0);
                            *(iVar8 + 0xa00) = 0xfffffffe0;
                            *(iVar8 + 0xa08) = iVar8 + 0xa08;
                            *(iVar8 + 0xa10) = iVar8 + 0xa08;
                            *(iVar8 + 0xa18) = sym.tx_macro_hs_unmute_dwork.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt;
                            init_timer_key(iVar8 + 0xa30,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                            *(iVar8 + 0x78) = param_1;
                            snd_soc_component_update_bits(param_1,0x42c,0x3f,10);
                            return 0;
                        }
                        pcVar6 = "%s: Failed to add snd_ctls\n";
                    }
                }
            }
            _dev_err(iVar4,pcVar6,"lpass_cdc_tx_macro_init");
            return iVar3;
        }
        uVar5 = *(param_1 + 0x18);
        pcVar6 = "%s: priv is null for macro!\n";
    }
    _dev_err(uVar5,pcVar6,"lpass_cdc_tx_macro_init");
    return -0x16;
}


// ===== sym.lpass_cdc_tx_macro_get_channel_map.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt @ 0x0800d308 (size 8) =====

void sym.lpass_cdc_tx_macro_get_channel_map.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt
               (int64_t param_1,uint *param_2,uint *param_3)

{
    int64_t iVar1;
    code *pcVar2;
    uint64_t uVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    int64_t iStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    iStack_48 = 0;
    uStack_40 = 0;
    uVar3 = sym.lpass_cdc_tx_macro_get_data(*(param_1 + 0x58),&uStack_40,&iStack_48,0x80014e6);
    if ((uVar3 & 1) == 0) {
        uVar4 = 0xffffffea;
    }
    else if (*(param_1 + 8) - 1 < 3) {
        *param_3 = *(iStack_48 + *(param_1 + 8) * 8 + 0xaa0);
        if (3 < *(param_1 + 8)) goto code_r0x0800fa6c;
        uVar4 = 0;
        *param_2 = *(iStack_48 + *(param_1 + 8) * 8 + 0xac0);
    }
    else {
        uVar4 = ___ratelimit(obj.lpass_cdc_tx_macro_get_channel_map._rs,"lpass_cdc_tx_macro_get_channel_map");
        if (uVar4 != 0) {
            _dev_err(uStack_40,"%s: Invalid AIF\n","lpass_cdc_tx_macro_get_channel_map");
            uVar4 = 0;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(uVar4);
code_r0x0800fa6c:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x800fa70);
    (*pcVar2)();
}


// ===== sym.snd_soc_info_enum_double.cfi_jt @ 0x0800d310 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_info_enum_double.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.snd_soc_info_volsw.cfi_jt @ 0x0800d318 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_info_volsw.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.pm_runtime_force_resume.cfi_jt @ 0x0800d320 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.pm_runtime_force_resume.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.pm_runtime_force_suspend.cfi_jt @ 0x0800d328 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.pm_runtime_force_suspend.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.lpass_cdc_runtime_suspend.cfi_jt @ 0x0800d330 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.lpass_cdc_runtime_suspend.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.lpass_cdc_runtime_resume.cfi_jt @ 0x0800d338 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.lpass_cdc_runtime_resume.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.lpass_cdc_tx_macro_event_handler.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt @ 0x0800d340 (size 8) =====

void sym.lpass_cdc_tx_macro_event_handler.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt
               (int64_t param_1,ushort param_2,uint32_t param_3)

{
    uint8_t uVar1;
    uint8_t uVar2;
    int iVar3;
    code *pcVar4;
    int iVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    ulong uVar8;
    int64_t iVar9;
    ulong uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint64_t uVar11;
    int64_t iVar12;
    ulong *puVar13;
    ulong unaff_x30;
    uchar auVar14 [12];
    int64_t iStack_128;
    uchar auStack_120 [8];
    int64_t iStack_118;
    uchar ***pppuStack_110;
    code *pcStack_108;
    int64_t iStack_b8;
    uchar auStack_b0 [8];
    int64_t iStack_a8;
    uchar **ppuStack_a0;
    code *pcStack_98;
    uint64_t uStack_90;
    int64_t iStack_78;
    uchar auStack_70 [8];
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    int64_t iStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    uVar11 = param_3;
    iStack_38 = *(iVar12 + 0x5e0);
    iStack_48 = 0;
    uStack_40 = 0;
    uVar7 = sym.lpass_cdc_tx_macro_get_data(param_1,&uStack_40,&iStack_48,0x8001509);
    iVar12 = iStack_48;
    if ((uVar7 & 1) == 0) {
        uVar8 = 0xffffffea;
    }
    else {
        uVar8 = 0;
        switch(param_2) {
        case 4:
            __trace_bprintk(0x800dc6c,*0x8010000,"lpass_cdc_tx_macro_event_handler");
            uVar11 = uStack_40;
            if ((((*(uStack_40 + 0x200) & 7) == 0) && (*(uStack_40 + 0x20c) == 2)) ||
               (iVar5 = lpass_cdc_runtime_suspend(uStack_40), iVar5 != 0)) {
                uVar8 = 0;
            }
            else {
                __pm_runtime_disable(uVar11,1);
                __pm_runtime_set_status(uVar11,2);
                pm_runtime_enable(uVar11);
                uVar8 = 0;
            }
            break;
        case 5:
            __trace_bprintk(0x800dcf4,*0x8010000,"lpass_cdc_tx_macro_event_handler");
            uVar8 = 0;
            break;
        case 7:
            lpass_cdc_rsc_clk_reset(uStack_40,0);
            uVar8 = 0;
            break;
        case 10:
            if (*(iStack_48 + 0xb2c) != '\0') {
                snd_soc_component_update_bits(param_1,0x42c,0x40,param_3 << 6);
            }
            if (param_3 == 0) {
                uVar8 = 0;
                *(iVar12 + 0xb2d) = 0;
            }
            else {
                uVar8 = 0;
                *(iVar12 + 0xb2d) = 1;
            }
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_38) {
        return;
    }
    iVar9 = __stack_chk_fail(uVar8);
    *extraout_x18 = sym.lpass_cdc_tx_macro_clk_div_get;
    pcStack_58 = sym.lpass_cdc_tx_macro_clk_div_get;
    iVar12 = sp_el0;
    iStack_68 = *(iVar12 + 0x5e0);
    iStack_78 = 0;
    puStack_60 = &stack0xffffffffffffffd0;
    uVar7 = sym.lpass_cdc_tx_macro_get_data(iVar9,auStack_70,&iStack_78,0x8000fb6);
    if ((uVar7 & 1) == 0) {
        uVar7 = 0xffffffea;
    }
    else {
        uVar7 = *(iStack_78 + 0xa88);
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_68) {
        return;
    }
    auVar14 = __stack_chk_fail(uVar7);
    *extraout_x18_00 = sym.__lpass_cdc_tx_macro_mclk_enable;
    pcStack_98 = sym.__lpass_cdc_tx_macro_mclk_enable;
    iVar12 = sp_el0;
    iStack_a8 = *(iVar12 + 0x5e0);
    iStack_b8 = 0;
    ppuStack_a0 = &puStack_60;
    uStack_90 = uVar11;
    uVar11 = sym.lpass_cdc_tx_macro_get_data(auVar14._0_8_,auStack_b0,&iStack_b8,0x8000aae);
    if ((uVar11 & 1) == 0) {
        uVar8 = 0xffffffea;
    }
    else {
        uVar8 = sym.lpass_cdc_tx_macro_mclk_enable(iStack_b8,auVar14._8_4_ & 1);
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_a8) {
        return;
    }
    iVar9 = __stack_chk_fail(uVar8);
    *extraout_x18_01 = sym.lpass_cdc_tx_macro_tx_hpf_corner_freq_callback;
    pcStack_108 = sym.lpass_cdc_tx_macro_tx_hpf_corner_freq_callback;
    iVar12 = sp_el0;
    iStack_118 = *(iVar12 + 0x5e0);
    puVar13 = *(iVar9 + -0x10);
    iStack_128 = 0;
    uVar1 = *(iVar9 + -8);
    uVar2 = *(iVar9 + -7);
    iVar12 = puVar13[0xf];
    iVar3 = uVar1 * 0x80;
    iVar5 = iVar3 + 0x404;
    iVar3 = iVar3 + 0x418;
    pppuStack_110 = &ppuStack_a0;
    uVar11 = sym.lpass_cdc_tx_macro_get_data(iVar12,auStack_120,&iStack_128,0x8000fec);
    if ((((uVar11 & 1) == 0) || (uVar11 = snd_soc_component_read(iVar12,uVar1 * 8 + 0x104), (uVar11 & 1) == 0)) ||
       (*(iStack_128 + 0xb50) != '\0')) {
        snd_soc_component_update_bits(iVar12,iVar5,0x60,uVar2 << 5);
        snd_soc_component_update_bits(iVar12,iVar3,2,2);
        usleep_range_state(1000,0x3f2,2);
        uVar8 = 2;
        uVar10 = 0;
    }
    else {
        uVar6 = snd_soc_component_read(iVar12,*(iVar9 + -8) * 8 + 0x100);
        lpass_cdc_clear_amic_tx_hold(*(iVar12 + 0x18),uVar6 & 0xf);
        snd_soc_component_update_bits(iVar12,iVar5,0x60,uVar2 << 5);
        snd_soc_component_update_bits(iVar12,iVar3,3,2);
        if (7 < *(iVar9 + -8)) goto code_r0x0800e0f4;
        switch(*(puVar13 + *(iVar9 + -8) * 4 + 0xb30)) {
        default:
            uVar8 = 0x7d;
            uVar10 = 0x82;
            break;
        case 1:
            uVar8 = 0x3e;
            uVar10 = 0x41;
            break;
        case 3:
            uVar8 = 0x1f;
            uVar10 = 0x20;
            break;
        case 4:
            uVar8 = 0x14;
            uVar10 = 0x15;
            break;
        case 5:
            uVar8 = 10;
            uVar10 = 0xb;
            break;
        case 6:
            uVar8 = 5;
            uVar10 = 6;
        }
        usleep_range_state(uVar8,uVar10,2);
        uVar8 = 3;
        uVar10 = 1;
    }
    snd_soc_component_update_bits(iVar12,iVar3,uVar8,uVar10);
    mutex_lock(puVar13 + 9);
    iVar5 = *(puVar13 + 0xb54) + -1;
    *(puVar13 + 0xb54) = iVar5;
    if (iVar5 == 0) {
        pm_relax(*puVar13);
        iVar5 = *(puVar13 + 0xb54);
    }
    if (iVar5 < 0) {
        *(puVar13 + 0xb54) = 0;
    }
    mutex_unlock(puVar13 + 9);
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_118) {
        return;
    }
    __stack_chk_fail();
code_r0x0800e0f4:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x800e0f8);
    (*pcVar4)();
}


// ===== sym.__lpass_cdc_tx_macro_mclk_enable.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt @ 0x0800d348 (size 8) =====

void sym.__lpass_cdc_tx_macro_mclk_enable.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt(int64_t param_1,uint32_t param_2)

{
    int iVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    int iVar4;
    code *pcVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    ulong uVar8;
    int64_t iVar9;
    ulong uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar11;
    ulong *puVar12;
    ulong unaff_x30;
    int64_t iStack_a8;
    uchar auStack_a0 [8];
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    int64_t iStack_38;
    uchar auStack_30 [8];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_28 = *(iVar11 + 0x5e0);
    iStack_38 = 0;
    uVar7 = sym.lpass_cdc_tx_macro_get_data(param_1,auStack_30,&iStack_38,0x8000aae);
    if ((uVar7 & 1) == 0) {
        uVar8 = 0xffffffea;
    }
    else {
        uVar8 = sym.lpass_cdc_tx_macro_mclk_enable(iStack_38,param_2 & 1);
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_28) {
        return;
    }
    iVar9 = __stack_chk_fail(uVar8);
    *extraout_x18 = sym.lpass_cdc_tx_macro_tx_hpf_corner_freq_callback;
    pcStack_88 = sym.lpass_cdc_tx_macro_tx_hpf_corner_freq_callback;
    iVar11 = sp_el0;
    iStack_98 = *(iVar11 + 0x5e0);
    puVar12 = *(iVar9 + -0x10);
    iStack_a8 = 0;
    uVar2 = *(iVar9 + -8);
    uVar3 = *(iVar9 + -7);
    iVar11 = puVar12[0xf];
    iVar4 = uVar2 * 0x80;
    iVar1 = iVar4 + 0x404;
    iVar4 = iVar4 + 0x418;
    puStack_90 = &stack0xffffffffffffffe0;
    uVar7 = sym.lpass_cdc_tx_macro_get_data(iVar11,auStack_a0,&iStack_a8,0x8000fec);
    if ((((uVar7 & 1) == 0) || (uVar7 = snd_soc_component_read(iVar11,uVar2 * 8 + 0x104), (uVar7 & 1) == 0)) ||
       (*(iStack_a8 + 0xb50) != '\0')) {
        snd_soc_component_update_bits(iVar11,iVar1,0x60,uVar3 << 5);
        snd_soc_component_update_bits(iVar11,iVar4,2,2);
        usleep_range_state(1000,0x3f2,2);
        uVar8 = 2;
        uVar10 = 0;
    }
    else {
        uVar6 = snd_soc_component_read(iVar11,*(iVar9 + -8) * 8 + 0x100);
        lpass_cdc_clear_amic_tx_hold(*(iVar11 + 0x18),uVar6 & 0xf);
        snd_soc_component_update_bits(iVar11,iVar1,0x60,uVar3 << 5);
        snd_soc_component_update_bits(iVar11,iVar4,3,2);
        if (7 < *(iVar9 + -8)) goto code_r0x0800e0f4;
        switch(*(puVar12 + *(iVar9 + -8) * 4 + 0xb30)) {
        default:
            uVar8 = 0x7d;
            uVar10 = 0x82;
            break;
        case 1:
            uVar8 = 0x3e;
            uVar10 = 0x41;
            break;
        case 3:
            uVar8 = 0x1f;
            uVar10 = 0x20;
            break;
        case 4:
            uVar8 = 0x14;
            uVar10 = 0x15;
            break;
        case 5:
            uVar8 = 10;
            uVar10 = 0xb;
            break;
        case 6:
            uVar8 = 5;
            uVar10 = 6;
        }
        usleep_range_state(uVar8,uVar10,2);
        uVar8 = 3;
        uVar10 = 1;
    }
    snd_soc_component_update_bits(iVar11,iVar4,uVar8,uVar10);
    mutex_lock(puVar12 + 9);
    iVar1 = *(puVar12 + 0xb54) + -1;
    *(puVar12 + 0xb54) = iVar1;
    if (iVar1 == 0) {
        pm_relax(*puVar12);
        iVar1 = *(puVar12 + 0xb54);
    }
    if (iVar1 < 0) {
        *(puVar12 + 0xb54) = 0;
    }
    mutex_unlock(puVar12 + 9);
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_98) {
        return;
    }
    __stack_chk_fail();
code_r0x0800e0f4:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x800e0f8);
    (*pcVar5)();
}


// ===== sym.lpass_cdc_tx_macro_hw_params.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt @ 0x0800d350 (size 8) =====

void sym.lpass_cdc_tx_macro_hw_params.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt
               (ulong param_1,int64_t param_2,int64_t param_3)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    code *pcVar4;
    int iVar5;
    uint64_t uVar6;
    ulong uVar7;
    uchar *puVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t arg1;
    uint uVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    int64_t iStack_68;
    uchar auStack_60 [8];
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_58 = *(iVar2 + 0x5e0);
    arg1 = *(param_3 + 0x58);
    iStack_68 = 0;
    uVar6 = sym.lpass_cdc_tx_macro_get_data(arg1,auStack_60,&iStack_68,0x8000db7);
    iVar2 = iStack_68;
    if ((uVar6 & 1) == 0) {
code_r0x0800fc38:
        uVar7 = 0xffffffea;
    }
    else {
        iVar5 = *(param_2 + 0x128);
        if (iVar5 < 48000) {
            if (iVar5 == 8000) {
                uVar10 = 0;
            }
            else if (iVar5 == 16000) {
                uVar10 = 1;
            }
            else {
                if (iVar5 != 32000) goto code_r0x0800fc20;
                uVar10 = 3;
            }
        }
        else if (iVar5 < 0x2ee00) {
            if (iVar5 == 48000) {
                uVar10 = 4;
            }
            else {
                if (iVar5 != 96000) {
code_r0x0800fc20:
                    iVar5 = ___ratelimit(obj.lpass_cdc_tx_macro_hw_params._rs,"lpass_cdc_tx_macro_hw_params");
                    if (iVar5 != 0) {
                        _dev_err(*(arg1 + 0x18),"%s: Invalid TX sample rate: %d\n","lpass_cdc_tx_macro_hw_params",
                                 *(param_2 + 0x128));
                        uVar7 = 0xffffffea;
                        goto code_r0x0800fc3c;
                    }
                    goto code_r0x0800fc38;
                }
                uVar10 = 5;
            }
        }
        else if (iVar5 == 0x2ee00) {
            uVar10 = 6;
        }
        else {
            if (iVar5 != 0x5dc00) goto code_r0x0800fc20;
            uVar10 = 7;
        }
        if (4 < *(param_3 + 8)) {
code_r0x0800fc98:
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x5512,0x800fc9c);
            (*pcVar4)();
        }
        uVar9 = *(iStack_68 + *(param_3 + 8) * 8 + 0xaa0);
        uVar6 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar3 = 8;
        if (uVar9 != 0) {
            uVar3 = LZCOUNT((uVar6 >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4) << 0x38);
        }
        while ((uVar3 & 0x38) == 0) {
            snd_soc_component_update_bits(arg1,uVar3 * 0x80 + 0x400,0xf,uVar10);
            if (4 < *(param_3 + 8)) goto code_r0x0800fc98;
            if (6 < uVar3) break;
            uVar1 = -1L << (uVar3 + 1 & 0x3f) & *(iVar2 + *(param_3 + 8) * 8 + 0xaa0);
            uVar6 = (uVar1 & 0xaa) >> 1 | (uVar1 & 0x55) << 1;
            uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
            uVar3 = 8;
            if ((uVar1 & 0xff) != 0) {
                uVar3 = LZCOUNT((uVar6 >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4) << 0x38);
            }
        }
        uVar7 = 0;
    }
code_r0x0800fc3c:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_58) {
        auVar11 = __stack_chk_fail(uVar7);
        puVar8 = auVar11._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar8 != NULL) {
            switch(*puVar8) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar8,auVar11._8_8_,0);
                break;
            default:
                return;
            }
        }
    //WARNING: Does not return
        pcVar4 = SoftwareBreakpoint(0x5502,0x800fcf8);
        (*pcVar4)();
    }
    return;
}


// ===== sym.lpass_cdc_tx_macro_mclk_event.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt @ 0x0800d358 (size 8) =====

void sym.lpass_cdc_tx_macro_mclk_event.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt
               (int64_t param_1,ulong param_2,int param_3)

{
    uint32_t uVar1;
    uint8_t uVar2;
    ulong *puVar3;
    code *pcVar4;
    int iVar5;
    uint64_t uVar6;
    ulong uVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar9 [16];
    int64_t iStack_88;
    uchar auStack_80 [8];
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    ulong *puStack_38;
    uchar auStack_30 [8];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_28 = *(iVar8 + 0x5e0);
    puStack_38 = NULL;
    uVar6 = sym.lpass_cdc_tx_macro_get_data(*(param_1 + 0x28) + -0xd0,auStack_30,&puStack_38,0x8000bed);
    puVar3 = puStack_38;
    if ((uVar6 & 1) == 0) {
code_r0x0800e9ec:
        uVar7 = 0xffffffea;
    }
    else if (param_3 == 8) {
        if (*(puStack_38 + 0x14) == '\0') {
            uVar7 = 0;
        }
        else {
            uVar7 = sym.lpass_cdc_tx_macro_mclk_enable(puStack_38,0);
        }
    }
    else {
        if (param_3 != 1) {
            iVar5 = ___ratelimit(obj.lpass_cdc_tx_macro_mclk_event._rs,"lpass_cdc_tx_macro_mclk_event");
            if (iVar5 != 0) {
                _dev_err(*puStack_38,"%s: invalid DAPM event %d\n","lpass_cdc_tx_macro_mclk_event",param_3);
            }
            goto code_r0x0800e9ec;
        }
        uVar7 = sym.lpass_cdc_tx_macro_mclk_enable(puStack_38,1);
        if (uVar7 == 0) {
            *(puVar3 + 0x14) = 1;
        }
        else {
            *(puVar3 + 0x14) = 0;
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_28) {
        return;
    }
    auVar9 = __stack_chk_fail(uVar7);
    *extraout_x18 = sym.lpass_cdc_tx_macro_tx_mixer_get;
    pcStack_68 = sym.lpass_cdc_tx_macro_tx_mixer_get;
    iVar8 = sp_el0;
    iStack_78 = *(iVar8 + 0x5e0);
    puStack_70 = &stack0xffffffffffffffe0;
    iVar8 = snd_soc_dapm_kcontrol_widget();
    uVar2 = *(iVar8 + 0x4c);
    uVar1 = *(*(auVar9._0_8_ + 0x78) + 0x18);
    iStack_88 = 0;
    uVar6 = sym.lpass_cdc_tx_macro_get_data(*(iVar8 + 0x28) + -0xd0,auStack_80,&iStack_88,0x80012c7);
    if ((uVar6 & 1) == 0) {
        uVar7 = 0xffffffea;
    }
    else {
        if (4 < uVar2) goto code_r0x0800eb24;
        uVar7 = 0;
        *(auVar9._8_8_ + 0x48) = *(iStack_88 + uVar2 * 8 + (uVar1 >> 3 & 0x1ffffff8) + 0xaa0) >> (uVar1 & 0x3f) & 1;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_78) {
        return;
    }
    __stack_chk_fail(uVar7);
code_r0x0800eb24:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x800eb28);
    (*pcVar4)();
}


// ===== sym.lpass_cdc_tx_macro_enable_dec.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt @ 0x0800d360 (size 8) =====

void sym.lpass_cdc_tx_macro_enable_dec.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt
               (int64_t param_1,ulong param_2,uint param_3)

{
    int iVar1;
    int iVar2;
    int iVar3;
    ulong *puVar4;
    uint8_t uVar5;
    int iVar6;
    ulong *puVar7;
    code *pcVar8;
    uint32_t uVar9;
    uint uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    ulong uVar13;
    ulong uVar14;
    int iVar15;
    ulong *in_x18;
    int64_t iVar16;
    char *pcVar17;
    int64_t iVar18;
    ulong unaff_x30;
    ulong *puStack_88;
    ulong uStack_80;
    int64_t iStack_78;
    uchar auStack_70 [8];
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar16 = sp_el0;
    iStack_68 = *(iVar16 + 0x5e0);
    puStack_88 = NULL;
    uStack_80 = 0;
    iVar16 = *(param_1 + 0x28) + -0xd0;
    uVar11 = sym.lpass_cdc_tx_macro_get_data(iVar16,&uStack_80,&puStack_88,0x8000e37);
    if ((uVar11 & 1) == 0) {
        uVar13 = 0xffffffea;
    }
    else {
        uVar5 = *(param_1 + 0x4c);
        uVar11 = uVar5;
        iVar6 = uVar5 * 0x80;
        iVar15 = iVar6 + 0x400;
        uVar9 = snd_soc_component_read(iVar16,iVar15);
        puVar7 = puStack_88;
        if (7 < uVar11) goto code_r0x0800e93c;
        iVar1 = iVar6 + 0x418;
        iVar2 = iVar6 + 0x404;
        iVar3 = uVar5 * 8 + 0x104;
        *(puStack_88 + uVar11 * 4 + 0xb30) = uVar9 & 0xf;
        iStack_78 = 0;
        uVar12 = sym.lpass_cdc_tx_macro_get_data(iVar16,auStack_70,&iStack_78,0x8000fec);
        if ((((uVar12 & 1) == 0) || (uVar12 = snd_soc_component_read(iVar16,iVar3), (uVar12 & 1) == 0)) ||
           (*(iStack_78 + 0xb50) != '\0')) {
            iVar18 = *(param_1 + 0x28) + -0xd0;
            uVar12 = snd_soc_component_read(iVar18,uVar5 * 8 + 0x100);
            uVar13 = 0;
            uVar14 = 1;
            switch(param_3) {
            case 2:
                goto code_r0x0800e3f8;
            default:
                goto code_r0x0800e8e0;
            case 4:
                goto code_r0x0800e6b4;
            case 8:
                uVar14 = 0;
            case 1:
                lpass_cdc_dmic_clk_enable(iVar18,((uVar12 & 0xffffffff) >> 4) + -1,0,uVar14);
            }
        }
        uVar13 = 0;
        switch(param_3) {
        case 1:
            snd_soc_component_update_bits(iVar16,iVar2,6,*(puVar7 + uVar11 * 4 + 0xb08) << 1);
            uVar13 = 0x10;
            uVar14 = 0x10;
code_r0x0800e8d4:
            snd_soc_component_update_bits(iVar16,iVar15,uVar13,uVar14);
            break;
        case 2:
code_r0x0800e3f8:
            snd_soc_component_update_bits(iVar16,iVar15,0x20,0x20);
            iStack_78 = 0;
            uVar12 = sym.lpass_cdc_tx_macro_get_data(iVar16,auStack_70,&iStack_78,0x8000fec);
            if ((((uVar12 & 1) == 0) || (uVar12 = snd_soc_component_read(iVar16,iVar3), (uVar12 & 1) == 0)) ||
               (*(iStack_78 + 0xb50) != '\0')) {
                snd_soc_component_update_bits(iVar16,iVar1,1,0);
                usleep_range_state(1000,0x3f2,2);
            }
            uVar9 = snd_soc_component_read(iVar16,iVar2);
            uVar9 = uVar9 >> 5 & 3;
            pcVar17 = puVar7 + uVar11 * 0x98 + 0x89;
            *pcVar17 = uVar9;
            if (uVar9 != 2) {
                snd_soc_component_update_bits(iVar16,iVar2,0x60,0x40);
            }
            iStack_78 = 0;
            uVar12 = sym.lpass_cdc_tx_macro_get_data(iVar16,auStack_70,&iStack_78,0x8000fec);
            if ((((uVar12 & 1) == 0) || (uVar12 = snd_soc_component_read(iVar16,iVar3), (uVar12 & 1) == 0)) ||
               (*(iStack_78 + 0xb50) != '\0')) {
                iVar15 = 0x28;
            }
            else {
                iVar15 = 0x82;
            }
            if (_segment.ehdr < iVar15) {
                _segment.ehdr = iVar15;
            }
            puVar4 = puVar7 + 9;
            mutex_lock(puVar4);
            iVar15 = *(puVar7 + 0xb54);
            *(puVar7 + 0xb54) = iVar15 + 1;
            if (iVar15 == 0) {
                pm_stay_awake(*puVar7);
            }
            mutex_unlock(puVar4);
            uVar13 = _snd_soc_info_volsw;
            uVar14 = __msecs_to_jiffies(_segment.ehdr);
            queue_delayed_work_on(0x20,uVar13,puVar7 + uVar11 * 0x13 + 0xaa,uVar14);
            if (*pcVar17 != '\x02') {
                mutex_lock(puVar4);
                iVar15 = *(puVar7 + 0xb54);
                *(puVar7 + 0xb54) = iVar15 + 1;
                if (iVar15 == 0) {
                    pm_stay_awake(*puVar7);
                }
                mutex_unlock(puVar4);
                queue_delayed_work_on(0x20,_snd_soc_info_volsw,puVar7 + uVar11 * 0x13 + 0x12,0x4b);
                snd_soc_component_update_bits(iVar16,iVar1,3,2);
                iStack_78 = 0;
                uVar11 = sym.lpass_cdc_tx_macro_get_data(iVar16,auStack_70,&iStack_78,0x8000fec);
                if ((((uVar11 & 1) == 0) || (uVar11 = snd_soc_component_read(iVar16,iVar3), (uVar11 & 1) == 0)) ||
                   (*(iStack_78 + 0xb50) != '\0')) {
                    snd_soc_component_update_bits(iVar16,iVar1,3,0);
                }
                snd_soc_component_update_bits(iVar16,iVar1,3,1);
                usleep_range_state(6000,0x177a,2);
            }
            uVar10 = snd_soc_component_read(iVar16,iVar6 + 0x40c);
            snd_soc_component_write(iVar16,iVar6 + 0x40c,uVar10);
            if (*(puVar7 + 0xb04) != '\0') {
                snd_soc_component_update_bits(iVar16,0x30dc,0xf,*(puVar7 + 0x165));
                snd_soc_component_update_bits(iVar16,iVar2,1,1);
                *(puVar7 + 0xb2c) = 1;
                if (*(puVar7 + 0xb2d) != '\0') {
                    iVar15 = 0x42c;
                    uVar13 = 0x40;
                    uVar14 = 0x40;
                    goto code_r0x0800e8d4;
                }
            }
            break;
        default:
            goto code_r0x0800e8e0;
        case 4:
code_r0x0800e6b4:
            uVar5 = *(puVar7 + uVar11 * 0x98 + 0x89);
            snd_soc_component_update_bits(iVar16,iVar15,0x10,0x10);
            uVar12 = cancel_delayed_work_sync(puVar7 + uVar11 * 0x13 + 0x12);
            if (((uVar12 & 1) != 0) && (uVar5 != 2)) {
                snd_soc_component_update_bits(iVar16,iVar2,0x60,uVar5 << 5);
                iStack_78 = 0;
                uVar12 = sym.lpass_cdc_tx_macro_get_data(iVar16,auStack_70,&iStack_78,0x8000fec);
                if (((uVar12 & 1) == 0) ||
                   ((uVar12 = snd_soc_component_read(iVar16,iVar3), (uVar12 & 1) == 0 ||
                    (*(iStack_78 + 0xb50) != '\0')))) {
                    uVar13 = 3;
                }
                else {
                    uVar13 = 2;
                }
                snd_soc_component_update_bits(iVar16,iVar1,3,uVar13);
                usleep_range_state(1000,0x3f2,2);
                snd_soc_component_update_bits(iVar16,iVar1,3,1);
            }
            puVar4 = puVar7 + 9;
            mutex_lock(puVar4);
            iVar15 = *(puVar7 + 0xb54) + -1;
            *(puVar7 + 0xb54) = iVar15;
            if (iVar15 == 0) {
                pm_relax(*puVar7);
                iVar15 = *(puVar7 + 0xb54);
            }
            if (iVar15 < 0) {
                *(puVar7 + 0xb54) = 0;
            }
            mutex_unlock(puVar4);
            cancel_delayed_work_sync(puVar7 + uVar11 * 0x13 + 0xaa);
            mutex_lock(puVar4);
            iVar15 = *(puVar7 + 0xb54) + -1;
            *(puVar7 + 0xb54) = iVar15;
            if (iVar15 == 0) {
                pm_relax(*puVar7);
                iVar15 = *(puVar7 + 0xb54);
            }
            if (iVar15 < 0) {
                *(puVar7 + 0xb54) = 0;
            }
            mutex_unlock(puVar4);
            uVar11 = snd_soc_component_read(iVar16,iVar3);
            if ((uVar11 & 1) != 0) {
                iVar15 = 0x88;
                uVar13 = 1;
code_r0x0800e8d0:
                uVar14 = 0;
                goto code_r0x0800e8d4;
            }
            break;
        case 8:
            snd_soc_component_update_bits(iVar16,iVar15,0x20,0);
            snd_soc_component_update_bits(iVar16,iVar15,0x40,0x40);
            snd_soc_component_update_bits(iVar16,iVar15,0x40,0);
            snd_soc_component_update_bits(iVar16,iVar2,6,0);
            snd_soc_component_update_bits(iVar16,iVar15,0x10,0);
            snd_soc_component_update_bits(iVar16,iVar15,0xf,4);
            if (*(puVar7 + 0xb04) != '\0') {
                snd_soc_component_update_bits(iVar16,iVar2,1,0);
                snd_soc_component_update_bits(iVar16,0x42c,0x40,0);
                iVar15 = 0x30dc;
                uVar13 = 0xf;
                *(puVar7 + 0xb2c) = 0;
                goto code_r0x0800e8d0;
            }
        }
        uVar13 = 0;
    }
code_r0x0800e8e0:
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_68) {
        return;
    }
    __stack_chk_fail(uVar13);
code_r0x0800e93c:
    //WARNING: Does not return
    pcVar8 = SoftwareBreakpoint(0x5512,0x800e940);
    (*pcVar8)();
}


// ===== sym.lpass_cdc_tx_macro_enable_micbias.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt @ 0x0800d368 (size 8) =====

ulong sym.lpass_cdc_tx_macro_enable_micbias.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt(void)

{
    return 0;
}


// ===== sym.lpass_cdc_tx_macro_mute_update_callback.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt @ 0x0800d370 (size 8) =====

void sym.lpass_cdc_tx_macro_mute_update_callback.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    ulong *puVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = *(param_1 + -0x10);
    snd_soc_component_update_bits(puVar2[0xf],(*(param_1 + -8) & 0xff) * 0x80 + 0x400,0x10,0);
    mutex_lock(puVar2 + 9);
    iVar1 = *(puVar2 + 0xb54) + -1;
    *(puVar2 + 0xb54) = iVar1;
    if (iVar1 == 0) {
        pm_relax(*puVar2);
        iVar1 = *(puVar2 + 0xb54);
    }
    if (iVar1 < 0) {
        *(puVar2 + 0xb54) = 0;
    }
    mutex_unlock(puVar2 + 9);
    return;
}


// ===== sym.tx_macro_hs_unmute_dwork.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt @ 0x0800d378 (size 8) =====

void sym.tx_macro_hs_unmute_dwork.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt(int64_t param_1)

{
    ushort uVar1;
    ulong *in_x18;
    uint64_t uVar2;
    ulong uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = 0;
    uVar3 = *(param_1 + -0x988);
    do {
        snd_soc_component_update_bits
                  (uVar3,*(obj.LPASS_CDC_TX_TX_VOL_CTL + uVar2 * 4),0xff,*(param_1 + 0x8a + uVar2 * 2));
        uVar1 = snd_soc_component_read(uVar3,*(obj.LPASS_CDC_TX_TX_VOL_CTL + uVar2 * 4));
        _dev_info(*(param_1 + -0xa00),"%s: the reg value of TX%d after unmute is: %#x \n","tx_macro_hs_unmute_dwork",
                  uVar2 & 0xffffffff,uVar1);
        uVar2 = uVar2 + 1;
    } while (uVar2 != 8);
    return;
}


// ===== sym.lpass_cdc_tx_macro_tx_hpf_corner_freq_callback.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt @ 0x0800d380 (size 8) =====

void sym.lpass_cdc_tx_macro_tx_hpf_corner_freq_callback.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt(int64_t param_1)

{
    int iVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    int iVar4;
    code *pcVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    ulong uVar8;
    ulong uVar9;
    ulong *in_x18;
    int64_t iVar10;
    ulong *puVar11;
    ulong unaff_x30;
    int64_t iStack_68;
    uchar auStack_60 [8];
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_58 = *(iVar10 + 0x5e0);
    puVar11 = *(param_1 + -0x10);
    iStack_68 = 0;
    uVar2 = *(param_1 + -8);
    uVar3 = *(param_1 + -7);
    iVar10 = puVar11[0xf];
    iVar4 = uVar2 * 0x80;
    iVar1 = iVar4 + 0x404;
    iVar4 = iVar4 + 0x418;
    uVar7 = sym.lpass_cdc_tx_macro_get_data(iVar10,auStack_60,&iStack_68,0x8000fec);
    if ((((uVar7 & 1) == 0) || (uVar7 = snd_soc_component_read(iVar10,uVar2 * 8 + 0x104), (uVar7 & 1) == 0)) ||
       (*(iStack_68 + 0xb50) != '\0')) {
        snd_soc_component_update_bits(iVar10,iVar1,0x60,uVar3 << 5);
        snd_soc_component_update_bits(iVar10,iVar4,2,2);
        usleep_range_state(1000,0x3f2,2);
        uVar8 = 2;
        uVar9 = 0;
    }
    else {
        uVar6 = snd_soc_component_read(iVar10,*(param_1 + -8) * 8 + 0x100);
        lpass_cdc_clear_amic_tx_hold(*(iVar10 + 0x18),uVar6 & 0xf);
        snd_soc_component_update_bits(iVar10,iVar1,0x60,uVar3 << 5);
        snd_soc_component_update_bits(iVar10,iVar4,3,2);
        if (7 < *(param_1 + -8)) goto code_r0x0800e0f4;
        switch(*(puVar11 + *(param_1 + -8) * 4 + 0xb30)) {
        default:
            uVar8 = 0x7d;
            uVar9 = 0x82;
            break;
        case 1:
            uVar8 = 0x3e;
            uVar9 = 0x41;
            break;
        case 3:
            uVar8 = 0x1f;
            uVar9 = 0x20;
            break;
        case 4:
            uVar8 = 0x14;
            uVar9 = 0x15;
            break;
        case 5:
            uVar8 = 10;
            uVar9 = 0xb;
            break;
        case 6:
            uVar8 = 5;
            uVar9 = 6;
        }
        usleep_range_state(uVar8,uVar9,2);
        uVar8 = 3;
        uVar9 = 1;
    }
    snd_soc_component_update_bits(iVar10,iVar4,uVar8,uVar9);
    mutex_lock(puVar11 + 9);
    iVar1 = *(puVar11 + 0xb54) + -1;
    *(puVar11 + 0xb54) = iVar1;
    if (iVar1 == 0) {
        pm_relax(*puVar11);
        iVar1 = *(puVar11 + 0xb54);
    }
    if (iVar1 < 0) {
        *(puVar11 + 0xb54) = 0;
    }
    mutex_unlock(puVar11 + 9);
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_58) {
        return;
    }
    __stack_chk_fail();
code_r0x0800e0f4:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x800e0f8);
    (*pcVar5)();
}


// ===== sym.lpass_cdc_tx_macro_tx_mixer_put.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt @ 0x0800d388 (size 8) =====

void sym.lpass_cdc_tx_macro_tx_mixer_put.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    uint64_t *puVar2;
    uint32_t uVar3;
    int iVar4;
    uint8_t uVar5;
    char cVar6;
    bool bVar7;
    code *pcVar8;
    int64_t iVar9;
    uint64_t uVar10;
    ulong uVar11;
    char *pcVar12;
    int64_t iVar13;
    ulong *in_x18;
    uint64_t uVar14;
    uint64_t uVar15;
    ulong unaff_x30;
    int64_t iStack_58;
    uchar auStack_50 [8];
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_48 = *(iVar9 + 0x5e0);
    iVar9 = snd_soc_dapm_kcontrol_widget();
    iVar13 = *(iVar9 + 0x28);
    uVar5 = *(iVar9 + 0x4c);
    uVar14 = uVar5;
    uVar3 = *(*(param_1 + 0x78) + 0x18);
    uVar15 = uVar3;
    iStack_58 = 0;
    iVar4 = *(param_2 + 0x48);
    uVar10 = sym.lpass_cdc_tx_macro_get_data(iVar13 + -0xd0,auStack_50,&iStack_58,0x80007fb);
    if ((uVar10 & 1) == 0) {
        uVar11 = 0xffffffea;
    }
    else {
        if (iVar4 == 0) {
            if (4 < uVar5) goto code_r0x0800eccc;
            iVar1 = iStack_58 + uVar14 * 8;
            uVar10 = uVar3 >> 3 & 0x1ffffff8;
            if ((*(iVar1 + 0xaa0 + uVar10) >> (uVar15 & 0x3f) & 1) == 0) {
                uVar11 = *(iVar13 + -0xb8);
                pcVar12 = "%s: channel is already disabled, dec_id = %d, dai_id = %d\n";
                goto code_r0x0800ecb0;
            }
            puVar2 = iVar1 + 0xaa0 + uVar10;
            *(iVar1 + 0xac0) = *(iVar1 + 0xac0) + -1;
            Hint_Prefetch(puVar2,2,0,1);
            do {
                cVar6 = '\x01';
                bVar7 = ExclusiveMonitorPass(puVar2,0x10);
                if (bVar7) {
                    *puVar2 = *puVar2 & (1L << (uVar15 & 0x3f) ^ 0xffffffffffffffffU);
                    cVar6 = ExclusiveMonitorsStatus();
                }
            } while (cVar6 != '\0');
        }
        else {
            if (4 < uVar5) goto code_r0x0800eccc;
            uVar10 = uVar3 >> 3 & 0x1ffffff8;
            iVar1 = iStack_58 + uVar14 * 8 + 0xaa0;
            if ((*(iVar1 + uVar10) >> (uVar15 & 0x3f) & 1) == 0) {
                puVar2 = iVar1 + uVar10;
                Hint_Prefetch(puVar2,2,0,1);
                do {
                    cVar6 = '\x01';
                    bVar7 = ExclusiveMonitorPass(puVar2,0x10);
                    if (bVar7) {
                        *puVar2 = *puVar2 | 1L << (uVar15 & 0x3f);
                        cVar6 = ExclusiveMonitorsStatus();
                    }
                } while (cVar6 != '\0');
                iVar13 = iStack_58 + uVar14 * 8;
                *(iVar13 + 0xac0) = *(iVar13 + 0xac0) + 1;
            }
            else {
                uVar11 = *(iVar13 + -0xb8);
                pcVar12 = "%s: channel is already enabled, dec_id = %d, dai_id = %d\n";
code_r0x0800ecb0:
                _dev_err(uVar11,pcVar12,"lpass_cdc_tx_macro_tx_mixer_put",uVar15,uVar14);
            }
        }
        snd_soc_dapm_mixer_update_power(*(iVar9 + 0x28),param_1,iVar4,0);
        uVar11 = 0;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_48) {
        return;
    }
    __stack_chk_fail(uVar11);
code_r0x0800eccc:
    //WARNING: Does not return
    pcVar8 = SoftwareBreakpoint(0x5512,0x800ecd0);
    (*pcVar8)();
}


// ===== sym.lpass_cdc_tx_macro_tx_mixer_get.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt @ 0x0800d390 (size 8) =====

void sym.lpass_cdc_tx_macro_tx_mixer_get.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint32_t uVar1;
    uint8_t uVar2;
    code *pcVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ulong uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    int64_t iStack_48;
    uchar auStack_40 [8];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    iVar4 = snd_soc_dapm_kcontrol_widget();
    uVar2 = *(iVar4 + 0x4c);
    uVar1 = *(*(param_1 + 0x78) + 0x18);
    iStack_48 = 0;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(*(iVar4 + 0x28) + -0xd0,auStack_40,&iStack_48,0x80012c7);
    if ((uVar5 & 1) == 0) {
        uVar6 = 0xffffffea;
    }
    else {
        if (4 < uVar2) goto code_r0x0800eb24;
        uVar6 = 0;
        *(param_2 + 0x48) = *(iStack_48 + uVar2 * 8 + (uVar1 >> 3 & 0x1ffffff8) + 0xaa0) >> (uVar1 & 0x3f) & 1;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(uVar6);
code_r0x0800eb24:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x800eb28);
    (*pcVar3)();
}


// ===== sym.lpass_cdc_tx_macro_dec_mode_get.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt @ 0x0800d398 (size 8) =====

void sym.lpass_cdc_tx_macro_dec_mode_get.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    code *pcVar2;
    uint64_t uVar3;
    ulong uVar4;
    ulong noname_0;
    ulong *in_x18;
    ulong unaff_x30;
    uint32_t uStack_3c;
    uchar auStack_38 [8];
    int64_t iStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    iStack_30 = 0;
    uStack_3c = 0;
    uVar3 = sym.lpass_cdc_tx_macro_get_data(*(param_1 + 0x80),auStack_38,&iStack_30,0x800140e);
    if ((uVar3 & 1) == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        uVar4 = sym.lpass_cdc_tx_macro_path_get(noname_0,&uStack_3c);
        if (uVar4 == 0) {
            if (7 < uStack_3c) goto code_r0x0800f2b4;
            uVar4 = 0;
            *(param_2 + 0x48) = *(iStack_30 + uStack_3c * 4 + 0xb08);
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return;
    }
    __stack_chk_fail(uVar4);
code_r0x0800f2b4:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x800f2b8);
    (*pcVar2)();
}


// ===== sym.lpass_cdc_tx_macro_bcs_ch_get.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt @ 0x0800d3a0 (size 8) =====

uint64_t sym.lpass_cdc_tx_macro_bcs_ch_get.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint uVar1;
    code *pcVar2;
    uint32_t uVar3;
    int iVar4;
    uint64_t uVar5;
    uint *puVar6;
    uint *puVar7;
    uint *puVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    int64_t iVar9;
    int64_t iVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    uchar auVar12 [16];
    int64_t iStack_178;
    ulong uStack_170;
    int64_t iStack_168;
    ulong **ppuStack_160;
    code *pcStack_158;
    uint *puStack_130;
    int64_t iStack_128;
    ulong **ppuStack_120;
    code *pcStack_118;
    int64_t iStack_110;
    int64_t iStack_108;
    uchar auStack_f8 [8];
    uchar auStack_f0 [8];
    int64_t iStack_e8;
    ulong **ppuStack_e0;
    code *pcStack_d8;
    int64_t iStack_d0;
    int64_t iStack_c8;
    uchar auStack_b8 [8];
    uchar auStack_b0 [8];
    int64_t iStack_a8;
    uchar **ppuStack_a0;
    code *pcStack_98;
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
    iVar10 = sp_el0;
    iStack_28 = *(iVar10 + 0x5e0);
    iStack_30 = 0;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(*(param_1 + 0x80),auStack_38,&iStack_30,0x8001018);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar5 = 0;
        *(param_2 + 0x48) = *(iStack_30 + 0xb28);
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_28) {
        return uVar5;
    }
    auVar11 = __stack_chk_fail(uVar5);
    *extraout_x18 = sym.lpass_cdc_tx_macro_bcs_ch_put;
    pcStack_58 = sym.lpass_cdc_tx_macro_bcs_ch_put;
    iVar10 = sp_el0;
    iStack_68 = *(iVar10 + 0x5e0);
    iStack_70 = 0;
    uVar1 = *(auVar11._8_8_ + 0x48);
    puStack_60 = &stack0xffffffffffffffe0;
    iStack_50 = param_2;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(*(auVar11._0_8_ + 0x80),auStack_78,&iStack_70,0x8001265);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar5 = 0;
        *(iStack_70 + 0xb28) = uVar1;
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_68) {
        return uVar5;
    }
    auVar11 = __stack_chk_fail(uVar5);
    *extraout_x18_00 = sym.lpass_cdc_tx_macro_get_bcs_ch_sel;
    pcStack_98 = sym.lpass_cdc_tx_macro_get_bcs_ch_sel;
    iVar10 = sp_el0;
    iStack_a8 = *(iVar10 + 0x5e0);
    iVar10 = *(auVar11._0_8_ + 0x80);
    ppuStack_a0 = &puStack_60;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(iVar10,auStack_b8,auStack_b0,0x800149b);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar3 = snd_soc_component_read(iVar10,0x30dc);
        uVar5 = 0;
        *(auVar11._8_8_ + 0x48) = uVar3 & 0xf;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_a8) {
        return uVar5;
    }
    auVar12 = __stack_chk_fail(uVar5);
    *extraout_x18_01 = sym.lpass_cdc_tx_macro_put_bcs_ch_sel;
    pcStack_d8 = sym.lpass_cdc_tx_macro_put_bcs_ch_sel;
    iVar9 = sp_el0;
    iStack_e8 = *(iVar9 + 0x5e0);
    iVar9 = *(auVar12._0_8_ + 0x80);
    ppuStack_e0 = &ppuStack_a0;
    iStack_d0 = iVar10;
    iStack_c8 = auVar11._8_8_;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(iVar9,auStack_f8,auStack_f0,0x8001308);
    if (((uVar5 & 1) == 0) || (0xc < *(auVar12._8_8_ + 0x48))) {
        uVar5 = 0xffffffea;
    }
    else {
        snd_soc_component_update_bits(iVar9,0x30dc,0xf);
        uVar5 = 0;
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_e8) {
        return uVar5;
    }
    auVar11 = __stack_chk_fail(uVar5);
    puVar8 = auVar11._8_8_;
    *extraout_x18_02 = sym.lpass_cdc_tx_macro_path_get;
    pcStack_118 = sym.lpass_cdc_tx_macro_path_get;
    iVar10 = sp_el0;
    iStack_128 = *(iVar10 + 0x5e0);
    puVar7 = 0xcc0;
    ppuStack_120 = &ppuStack_e0;
    iStack_110 = auVar12._8_8_;
    iStack_108 = iVar9;
    puVar6 = kstrndup(auVar11._0_8_,10);
    puStack_130 = puVar6;
    if (puVar6 == NULL) {
        uVar5 = 0xffffffea;
    }
    else {
        iVar10 = strsep(&puStack_130,0x800099f);
        if (iVar10 == 0) {
            iVar4 = ___ratelimit(obj.lpass_cdc_tx_macro_path_get._rs,"lpass_cdc_tx_macro_path_get");
            puVar8 = puVar7;
            if (iVar4 != 0) {
                puVar8 = puStack_130;
                _printk(0x8000ef9,"lpass_cdc_tx_macro_path_get");
            }
code_r0x0800f90c:
            uVar5 = 0xffffffea;
        }
        else {
            iVar10 = strpbrk(iVar10,"01234567");
            if (iVar10 == 0) {
                iVar4 = ___ratelimit(obj.lpass_cdc_tx_macro_path_get._rs.200,"lpass_cdc_tx_macro_path_get");
                puVar8 = puVar7;
                if (iVar4 != 0) {
                    _printk(0x80009a1,"lpass_cdc_tx_macro_path_get");
                    puVar8 = puVar7;
                }
                goto code_r0x0800f90c;
            }
            uVar3 = kstrtouint(iVar10,10);
            uVar5 = uVar3;
            if ((uVar3 < 0) &&
               (iVar4 = ___ratelimit(obj.lpass_cdc_tx_macro_path_get._rs.202,"lpass_cdc_tx_macro_path_get"),
               iVar4 != 0)) {
                puVar8 = puVar6;
                _printk(0x8000ffc,"lpass_cdc_tx_macro_path_get");
            }
        }
        kfree(puVar6);
        puVar7 = puVar8;
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_128) {
        return uVar5;
    }
    auVar11 = __stack_chk_fail();
    iVar9 = auVar11._0_8_;
    *extraout_x18_03 = sym.lpass_cdc_tx_macro_get_channel_map;
    pcStack_158 = sym.lpass_cdc_tx_macro_get_channel_map;
    iVar10 = sp_el0;
    iStack_168 = *(iVar10 + 0x5e0);
    iStack_178 = 0;
    uStack_170 = 0;
    ppuStack_160 = &ppuStack_120;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(*(iVar9 + 0x58),&uStack_170,&iStack_178,0x80014e6);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else if (*(iVar9 + 8) - 1 < 3) {
        *puVar7 = *(iStack_178 + *(iVar9 + 8) * 8 + 0xaa0);
        if (3 < *(iVar9 + 8)) goto code_r0x0800fa6c;
        uVar5 = 0;
        *auVar11._8_8_ = *(iStack_178 + *(iVar9 + 8) * 8 + 0xac0);
    }
    else {
        uVar5 = ___ratelimit(obj.lpass_cdc_tx_macro_get_channel_map._rs,"lpass_cdc_tx_macro_get_channel_map");
        if (uVar5 != 0) {
            _dev_err(uStack_170,"%s: Invalid AIF\n","lpass_cdc_tx_macro_get_channel_map");
            uVar5 = 0;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_168) {
        return uVar5;
    }
    __stack_chk_fail(uVar5);
code_r0x0800fa6c:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x800fa70);
    (*pcVar2)();
}


// ===== sym.lpass_cdc_tx_macro_bcs_ch_put.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt @ 0x0800d3a8 (size 8) =====

uint64_t sym.lpass_cdc_tx_macro_bcs_ch_put.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint uVar1;
    code *pcVar2;
    uint32_t uVar3;
    int iVar4;
    uint64_t uVar5;
    uint *puVar6;
    uint *puVar7;
    uint *puVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    int64_t iVar9;
    int64_t iVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    uchar auVar12 [16];
    int64_t iStack_138;
    ulong uStack_130;
    int64_t iStack_128;
    ulong **ppuStack_120;
    code *pcStack_118;
    uint *puStack_f0;
    int64_t iStack_e8;
    ulong **ppuStack_e0;
    code *pcStack_d8;
    int64_t iStack_d0;
    int64_t iStack_c8;
    uchar auStack_b8 [8];
    uchar auStack_b0 [8];
    int64_t iStack_a8;
    uchar **ppuStack_a0;
    code *pcStack_98;
    int64_t iStack_90;
    int64_t iStack_88;
    uchar auStack_78 [8];
    uchar auStack_70 [8];
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    uchar auStack_38 [8];
    int64_t iStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_28 = *(iVar10 + 0x5e0);
    iStack_30 = 0;
    uVar1 = *(param_2 + 0x48);
    uVar5 = sym.lpass_cdc_tx_macro_get_data(*(param_1 + 0x80),auStack_38,&iStack_30,0x8001265);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar5 = 0;
        *(iStack_30 + 0xb28) = uVar1;
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_28) {
        return uVar5;
    }
    auVar11 = __stack_chk_fail(uVar5);
    *extraout_x18 = sym.lpass_cdc_tx_macro_get_bcs_ch_sel;
    pcStack_58 = sym.lpass_cdc_tx_macro_get_bcs_ch_sel;
    iVar10 = sp_el0;
    iStack_68 = *(iVar10 + 0x5e0);
    iVar10 = *(auVar11._0_8_ + 0x80);
    puStack_60 = &stack0xffffffffffffffe0;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(iVar10,auStack_78,auStack_70,0x800149b);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar3 = snd_soc_component_read(iVar10,0x30dc);
        uVar5 = 0;
        *(auVar11._8_8_ + 0x48) = uVar3 & 0xf;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_68) {
        return uVar5;
    }
    auVar12 = __stack_chk_fail(uVar5);
    *extraout_x18_00 = sym.lpass_cdc_tx_macro_put_bcs_ch_sel;
    pcStack_98 = sym.lpass_cdc_tx_macro_put_bcs_ch_sel;
    iVar9 = sp_el0;
    iStack_a8 = *(iVar9 + 0x5e0);
    iVar9 = *(auVar12._0_8_ + 0x80);
    ppuStack_a0 = &puStack_60;
    iStack_90 = iVar10;
    iStack_88 = auVar11._8_8_;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(iVar9,auStack_b8,auStack_b0,0x8001308);
    if (((uVar5 & 1) == 0) || (0xc < *(auVar12._8_8_ + 0x48))) {
        uVar5 = 0xffffffea;
    }
    else {
        snd_soc_component_update_bits(iVar9,0x30dc,0xf);
        uVar5 = 0;
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_a8) {
        return uVar5;
    }
    auVar11 = __stack_chk_fail(uVar5);
    puVar8 = auVar11._8_8_;
    *extraout_x18_01 = sym.lpass_cdc_tx_macro_path_get;
    pcStack_d8 = sym.lpass_cdc_tx_macro_path_get;
    iVar10 = sp_el0;
    iStack_e8 = *(iVar10 + 0x5e0);
    puVar7 = 0xcc0;
    ppuStack_e0 = &ppuStack_a0;
    iStack_d0 = auVar12._8_8_;
    iStack_c8 = iVar9;
    puVar6 = kstrndup(auVar11._0_8_,10);
    puStack_f0 = puVar6;
    if (puVar6 == NULL) {
        uVar5 = 0xffffffea;
    }
    else {
        iVar10 = strsep(&puStack_f0,0x800099f);
        if (iVar10 == 0) {
            iVar4 = ___ratelimit(obj.lpass_cdc_tx_macro_path_get._rs,"lpass_cdc_tx_macro_path_get");
            puVar8 = puVar7;
            if (iVar4 != 0) {
                puVar8 = puStack_f0;
                _printk(0x8000ef9,"lpass_cdc_tx_macro_path_get");
            }
code_r0x0800f90c:
            uVar5 = 0xffffffea;
        }
        else {
            iVar10 = strpbrk(iVar10,"01234567");
            if (iVar10 == 0) {
                iVar4 = ___ratelimit(obj.lpass_cdc_tx_macro_path_get._rs.200,"lpass_cdc_tx_macro_path_get");
                puVar8 = puVar7;
                if (iVar4 != 0) {
                    _printk(0x80009a1,"lpass_cdc_tx_macro_path_get");
                    puVar8 = puVar7;
                }
                goto code_r0x0800f90c;
            }
            uVar3 = kstrtouint(iVar10,10);
            uVar5 = uVar3;
            if ((uVar3 < 0) &&
               (iVar4 = ___ratelimit(obj.lpass_cdc_tx_macro_path_get._rs.202,"lpass_cdc_tx_macro_path_get"),
               iVar4 != 0)) {
                puVar8 = puVar6;
                _printk(0x8000ffc,"lpass_cdc_tx_macro_path_get");
            }
        }
        kfree(puVar6);
        puVar7 = puVar8;
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_e8) {
        return uVar5;
    }
    auVar11 = __stack_chk_fail();
    iVar9 = auVar11._0_8_;
    *extraout_x18_02 = sym.lpass_cdc_tx_macro_get_channel_map;
    pcStack_118 = sym.lpass_cdc_tx_macro_get_channel_map;
    iVar10 = sp_el0;
    iStack_128 = *(iVar10 + 0x5e0);
    iStack_138 = 0;
    uStack_130 = 0;
    ppuStack_120 = &ppuStack_e0;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(*(iVar9 + 0x58),&uStack_130,&iStack_138,0x80014e6);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else if (*(iVar9 + 8) - 1 < 3) {
        *puVar7 = *(iStack_138 + *(iVar9 + 8) * 8 + 0xaa0);
        if (3 < *(iVar9 + 8)) goto code_r0x0800fa6c;
        uVar5 = 0;
        *auVar11._8_8_ = *(iStack_138 + *(iVar9 + 8) * 8 + 0xac0);
    }
    else {
        uVar5 = ___ratelimit(obj.lpass_cdc_tx_macro_get_channel_map._rs,"lpass_cdc_tx_macro_get_channel_map");
        if (uVar5 != 0) {
            _dev_err(uStack_130,"%s: Invalid AIF\n","lpass_cdc_tx_macro_get_channel_map");
            uVar5 = 0;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_128) {
        return uVar5;
    }
    __stack_chk_fail(uVar5);
code_r0x0800fa6c:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x800fa70);
    (*pcVar2)();
}


// ===== sym.snd_soc_put_volsw.cfi_jt @ 0x0800d3b0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_put_volsw.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.lpass_cdc_tx_macro_get_bcs_ch_sel.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt @ 0x0800d3b8 (size 8) =====

uint64_t sym.lpass_cdc_tx_macro_get_bcs_ch_sel.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt(int64_t param_1,int64_t param_2)

{
    code *pcVar1;
    uint32_t uVar2;
    int iVar3;
    uint64_t uVar4;
    uint *puVar5;
    uint *puVar6;
    uint *puVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t iVar8;
    int64_t iVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    uchar auVar11 [16];
    int64_t iStack_f8;
    ulong uStack_f0;
    int64_t iStack_e8;
    ulong **ppuStack_e0;
    code *pcStack_d8;
    uint *puStack_b0;
    int64_t iStack_a8;
    uchar **ppuStack_a0;
    code *pcStack_98;
    int64_t iStack_90;
    int64_t iStack_88;
    uchar auStack_78 [8];
    uchar auStack_70 [8];
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    int64_t iStack_50;
    int64_t iStack_48;
    uchar auStack_38 [8];
    uchar auStack_30 [8];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_28 = *(iVar9 + 0x5e0);
    iVar9 = *(param_1 + 0x80);
    uVar4 = sym.lpass_cdc_tx_macro_get_data(iVar9,auStack_38,auStack_30,0x800149b);
    if ((uVar4 & 1) == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        uVar2 = snd_soc_component_read(iVar9,0x30dc);
        uVar4 = 0;
        *(param_2 + 0x48) = uVar2 & 0xf;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_28) {
        return uVar4;
    }
    auVar10 = __stack_chk_fail(uVar4);
    *extraout_x18 = sym.lpass_cdc_tx_macro_put_bcs_ch_sel;
    pcStack_58 = sym.lpass_cdc_tx_macro_put_bcs_ch_sel;
    iVar8 = sp_el0;
    iStack_68 = *(iVar8 + 0x5e0);
    iVar8 = *(auVar10._0_8_ + 0x80);
    puStack_60 = &stack0xffffffffffffffe0;
    iStack_50 = iVar9;
    iStack_48 = param_2;
    uVar4 = sym.lpass_cdc_tx_macro_get_data(iVar8,auStack_78,auStack_70,0x8001308);
    if (((uVar4 & 1) == 0) || (0xc < *(auVar10._8_8_ + 0x48))) {
        uVar4 = 0xffffffea;
    }
    else {
        snd_soc_component_update_bits(iVar8,0x30dc,0xf);
        uVar4 = 0;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_68) {
        return uVar4;
    }
    auVar11 = __stack_chk_fail(uVar4);
    puVar7 = auVar11._8_8_;
    *extraout_x18_00 = sym.lpass_cdc_tx_macro_path_get;
    pcStack_98 = sym.lpass_cdc_tx_macro_path_get;
    iVar9 = sp_el0;
    iStack_a8 = *(iVar9 + 0x5e0);
    puVar6 = 0xcc0;
    ppuStack_a0 = &puStack_60;
    iStack_90 = auVar10._8_8_;
    iStack_88 = iVar8;
    puVar5 = kstrndup(auVar11._0_8_,10);
    puStack_b0 = puVar5;
    if (puVar5 == NULL) {
        uVar4 = 0xffffffea;
    }
    else {
        iVar9 = strsep(&puStack_b0,0x800099f);
        if (iVar9 == 0) {
            iVar3 = ___ratelimit(obj.lpass_cdc_tx_macro_path_get._rs,"lpass_cdc_tx_macro_path_get");
            puVar7 = puVar6;
            if (iVar3 != 0) {
                puVar7 = puStack_b0;
                _printk(0x8000ef9,"lpass_cdc_tx_macro_path_get");
            }
code_r0x0800f90c:
            uVar4 = 0xffffffea;
        }
        else {
            iVar9 = strpbrk(iVar9,"01234567");
            if (iVar9 == 0) {
                iVar3 = ___ratelimit(obj.lpass_cdc_tx_macro_path_get._rs.200,"lpass_cdc_tx_macro_path_get");
                puVar7 = puVar6;
                if (iVar3 != 0) {
                    _printk(0x80009a1,"lpass_cdc_tx_macro_path_get");
                    puVar7 = puVar6;
                }
                goto code_r0x0800f90c;
            }
            uVar2 = kstrtouint(iVar9,10);
            uVar4 = uVar2;
            if ((uVar2 < 0) &&
               (iVar3 = ___ratelimit(obj.lpass_cdc_tx_macro_path_get._rs.202,"lpass_cdc_tx_macro_path_get"),
               iVar3 != 0)) {
                puVar7 = puVar5;
                _printk(0x8000ffc,"lpass_cdc_tx_macro_path_get");
            }
        }
        kfree(puVar5);
        puVar6 = puVar7;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_a8) {
        return uVar4;
    }
    auVar10 = __stack_chk_fail();
    iVar8 = auVar10._0_8_;
    *extraout_x18_01 = sym.lpass_cdc_tx_macro_get_channel_map;
    pcStack_d8 = sym.lpass_cdc_tx_macro_get_channel_map;
    iVar9 = sp_el0;
    iStack_e8 = *(iVar9 + 0x5e0);
    iStack_f8 = 0;
    uStack_f0 = 0;
    ppuStack_e0 = &ppuStack_a0;
    uVar4 = sym.lpass_cdc_tx_macro_get_data(*(iVar8 + 0x58),&uStack_f0,&iStack_f8,0x80014e6);
    if ((uVar4 & 1) == 0) {
        uVar4 = 0xffffffea;
    }
    else if (*(iVar8 + 8) - 1 < 3) {
        *puVar6 = *(iStack_f8 + *(iVar8 + 8) * 8 + 0xaa0);
        if (3 < *(iVar8 + 8)) goto code_r0x0800fa6c;
        uVar4 = 0;
        *auVar10._8_8_ = *(iStack_f8 + *(iVar8 + 8) * 8 + 0xac0);
    }
    else {
        uVar4 = ___ratelimit(obj.lpass_cdc_tx_macro_get_channel_map._rs,"lpass_cdc_tx_macro_get_channel_map");
        if (uVar4 != 0) {
            _dev_err(uStack_f0,"%s: Invalid AIF\n","lpass_cdc_tx_macro_get_channel_map");
            uVar4 = 0;
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_e8) {
        return uVar4;
    }
    __stack_chk_fail(uVar4);
code_r0x0800fa6c:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x800fa70);
    (*pcVar1)();
}


// ===== sym.lpass_cdc_tx_macro_put_bcs_ch_sel.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt @ 0x0800d3c0 (size 8) =====

uint64_t sym.lpass_cdc_tx_macro_put_bcs_ch_sel.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt(int64_t param_1,int64_t param_2)

{
    code *pcVar1;
    uint32_t uVar2;
    int iVar3;
    uint64_t uVar4;
    uint *puVar5;
    int64_t iVar6;
    uint *puVar7;
    uint *puVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    int64_t iStack_b8;
    ulong uStack_b0;
    int64_t iStack_a8;
    uchar **ppuStack_a0;
    code *pcStack_98;
    uint *puStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    int64_t iStack_50;
    int64_t iStack_48;
    uchar auStack_38 [8];
    uchar auStack_30 [8];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_28 = *(iVar9 + 0x5e0);
    iVar9 = *(param_1 + 0x80);
    uVar4 = sym.lpass_cdc_tx_macro_get_data(iVar9,auStack_38,auStack_30,0x8001308);
    if (((uVar4 & 1) == 0) || (0xc < *(param_2 + 0x48))) {
        uVar4 = 0xffffffea;
    }
    else {
        snd_soc_component_update_bits(iVar9,0x30dc,0xf);
        uVar4 = 0;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_28) {
        return uVar4;
    }
    auVar10 = __stack_chk_fail(uVar4);
    puVar8 = auVar10._8_8_;
    *extraout_x18 = sym.lpass_cdc_tx_macro_path_get;
    pcStack_58 = sym.lpass_cdc_tx_macro_path_get;
    iVar6 = sp_el0;
    iStack_68 = *(iVar6 + 0x5e0);
    puVar7 = 0xcc0;
    puStack_60 = &stack0xffffffffffffffe0;
    iStack_50 = param_2;
    iStack_48 = iVar9;
    puVar5 = kstrndup(auVar10._0_8_,10);
    puStack_70 = puVar5;
    if (puVar5 == NULL) {
        uVar4 = 0xffffffea;
    }
    else {
        iVar9 = strsep(&puStack_70,0x800099f);
        if (iVar9 == 0) {
            iVar3 = ___ratelimit(obj.lpass_cdc_tx_macro_path_get._rs,"lpass_cdc_tx_macro_path_get");
            puVar8 = puVar7;
            if (iVar3 != 0) {
                puVar8 = puStack_70;
                _printk(0x8000ef9,"lpass_cdc_tx_macro_path_get");
            }
code_r0x0800f90c:
            uVar4 = 0xffffffea;
        }
        else {
            iVar9 = strpbrk(iVar9,"01234567");
            if (iVar9 == 0) {
                iVar3 = ___ratelimit(obj.lpass_cdc_tx_macro_path_get._rs.200,"lpass_cdc_tx_macro_path_get");
                puVar8 = puVar7;
                if (iVar3 != 0) {
                    _printk(0x80009a1,"lpass_cdc_tx_macro_path_get");
                    puVar8 = puVar7;
                }
                goto code_r0x0800f90c;
            }
            uVar2 = kstrtouint(iVar9,10);
            uVar4 = uVar2;
            if ((uVar2 < 0) &&
               (iVar3 = ___ratelimit(obj.lpass_cdc_tx_macro_path_get._rs.202,"lpass_cdc_tx_macro_path_get"),
               iVar3 != 0)) {
                puVar8 = puVar5;
                _printk(0x8000ffc,"lpass_cdc_tx_macro_path_get");
            }
        }
        kfree(puVar5);
        puVar7 = puVar8;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_68) {
        return uVar4;
    }
    auVar10 = __stack_chk_fail();
    iVar6 = auVar10._0_8_;
    *extraout_x18_00 = sym.lpass_cdc_tx_macro_get_channel_map;
    pcStack_98 = sym.lpass_cdc_tx_macro_get_channel_map;
    iVar9 = sp_el0;
    iStack_a8 = *(iVar9 + 0x5e0);
    iStack_b8 = 0;
    uStack_b0 = 0;
    ppuStack_a0 = &puStack_60;
    uVar4 = sym.lpass_cdc_tx_macro_get_data(*(iVar6 + 0x58),&uStack_b0,&iStack_b8,0x80014e6);
    if ((uVar4 & 1) == 0) {
        uVar4 = 0xffffffea;
    }
    else if (*(iVar6 + 8) - 1 < 3) {
        *puVar7 = *(iStack_b8 + *(iVar6 + 8) * 8 + 0xaa0);
        if (3 < *(iVar6 + 8)) goto code_r0x0800fa6c;
        uVar4 = 0;
        *auVar10._8_8_ = *(iStack_b8 + *(iVar6 + 8) * 8 + 0xac0);
    }
    else {
        uVar4 = ___ratelimit(obj.lpass_cdc_tx_macro_get_channel_map._rs,"lpass_cdc_tx_macro_get_channel_map");
        if (uVar4 != 0) {
            _dev_err(uStack_b0,"%s: Invalid AIF\n","lpass_cdc_tx_macro_get_channel_map");
            uVar4 = 0;
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_a8) {
        return uVar4;
    }
    __stack_chk_fail(uVar4);
code_r0x0800fa6c:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x800fa70);
    (*pcVar1)();
}


// ===== sym.snd_soc_dapm_put_enum_double.cfi_jt @ 0x0800d3c8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_dapm_put_enum_double.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.lpass_cdc_tx_macro_dec_mode_put.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt @ 0x0800d3d0 (size 8) =====

void sym.lpass_cdc_tx_macro_dec_mode_put.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint uVar1;
    int64_t iVar2;
    code *pcVar3;
    uint64_t uVar4;
    ulong uVar5;
    ulong noname_0;
    ulong *in_x18;
    ulong unaff_x30;
    uint32_t uStack_3c;
    uchar auStack_38 [8];
    int64_t iStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    iStack_30 = 0;
    uVar1 = *(param_2 + 0x48);
    uStack_3c = 0;
    uVar4 = sym.lpass_cdc_tx_macro_get_data(*(param_1 + 0x80),auStack_38,&iStack_30,0x8000e55);
    if ((uVar4 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar5 = sym.lpass_cdc_tx_macro_path_get(noname_0,&uStack_3c);
        if (uVar5 == 0) {
            if (7 < uStack_3c) goto code_r0x0800f36c;
            uVar5 = 0;
            *(iStack_30 + uStack_3c * 4 + 0xb08) = uVar1;
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return;
    }
    __stack_chk_fail(uVar5);
code_r0x0800f36c:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x800f370);
    (*pcVar3)();
}


// ===== sym.lpass_cdc_tx_macro_get_bcs.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt @ 0x0800d3d8 (size 8) =====

uint64_t sym.lpass_cdc_tx_macro_get_bcs.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint uVar1;
    code *pcVar2;
    uint32_t uVar3;
    int iVar4;
    uint64_t uVar5;
    uint *puVar6;
    uint *puVar7;
    uint *puVar8;
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
    ulong uVar9;
    int64_t iVar10;
    int64_t iVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    uchar auVar13 [16];
    int64_t iStack_278;
    ulong uStack_270;
    int64_t iStack_268;
    ulong **ppuStack_260;
    code *pcStack_258;
    uint *puStack_230;
    int64_t iStack_228;
    ulong **ppuStack_220;
    code *pcStack_218;
    int64_t iStack_210;
    int64_t iStack_208;
    uchar auStack_1f8 [8];
    uchar auStack_1f0 [8];
    int64_t iStack_1e8;
    ulong **ppuStack_1e0;
    code *pcStack_1d8;
    int64_t iStack_1d0;
    int64_t iStack_1c8;
    uchar auStack_1b8 [8];
    uchar auStack_1b0 [8];
    int64_t iStack_1a8;
    ulong **ppuStack_1a0;
    code *pcStack_198;
    uchar auStack_178 [8];
    int64_t iStack_170;
    int64_t iStack_168;
    ulong **ppuStack_160;
    code *pcStack_158;
    int64_t iStack_150;
    uchar auStack_138 [8];
    int64_t iStack_130;
    int64_t iStack_128;
    ulong **ppuStack_120;
    code *pcStack_118;
    ulong uStack_110;
    uchar auStack_f8 [8];
    int64_t iStack_f0;
    int64_t iStack_e8;
    ulong **ppuStack_e0;
    code *pcStack_d8;
    int64_t iStack_d0;
    uchar auStack_b8 [8];
    int64_t iStack_b0;
    int64_t iStack_a8;
    uchar **ppuStack_a0;
    code *pcStack_98;
    ulong uStack_90;
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
    iVar11 = sp_el0;
    iStack_28 = *(iVar11 + 0x5e0);
    iStack_30 = 0;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(*(param_1 + 0x80),auStack_38,&iStack_30,0x8000904);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar5 = 0;
        *(param_2 + 0x48) = *(iStack_30 + 0xb04);
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_28) {
        return uVar5;
    }
    auVar12 = __stack_chk_fail(uVar5);
    *extraout_x18 = sym.lpass_cdc_tx_macro_set_bcs;
    pcStack_58 = sym.lpass_cdc_tx_macro_set_bcs;
    iVar11 = sp_el0;
    iStack_68 = *(iVar11 + 0x5e0);
    iStack_70 = 0;
    uVar9 = *(auVar12._8_8_ + 0x48);
    puStack_60 = &stack0xffffffffffffffe0;
    iStack_50 = param_2;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(*(auVar12._0_8_ + 0x80),auStack_78,&iStack_70,0x80009c0);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar5 = 0;
        *(iStack_70 + 0xb04) = uVar9 != 0;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_68) {
        return uVar5;
    }
    auVar12 = __stack_chk_fail(uVar5);
    *extraout_x18_00 = sym.lpass_cdc_tx_macro_swr_dmic_get;
    pcStack_98 = sym.lpass_cdc_tx_macro_swr_dmic_get;
    iVar11 = sp_el0;
    iStack_a8 = *(iVar11 + 0x5e0);
    iStack_b0 = 0;
    ppuStack_a0 = &puStack_60;
    uStack_90 = uVar9;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(*(auVar12._0_8_ + 0x80),auStack_b8,&iStack_b0,0x80009db);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar5 = 0;
        *(auVar12._8_8_ + 0x48) = *(iStack_b0 + 0xb50);
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_a8) {
        return uVar5;
    }
    auVar13 = __stack_chk_fail(uVar5);
    *extraout_x18_01 = sym.lpass_cdc_tx_macro_swr_dmic_put;
    pcStack_d8 = sym.lpass_cdc_tx_macro_swr_dmic_put;
    iVar11 = sp_el0;
    iStack_e8 = *(iVar11 + 0x5e0);
    iStack_f0 = 0;
    uVar9 = *(auVar13._8_8_ + 0x48);
    ppuStack_e0 = &ppuStack_a0;
    iStack_d0 = auVar12._8_8_;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(*(auVar13._0_8_ + 0x80),auStack_f8,&iStack_f0,0x8000d0c);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar5 = 0;
        *(iStack_f0 + 0xb50) = uVar9 != 0;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_e8) {
        return uVar5;
    }
    auVar12 = __stack_chk_fail(uVar5);
    *extraout_x18_02 = sym.lpass_cdc_tx_macro_bcs_ch_get;
    pcStack_118 = sym.lpass_cdc_tx_macro_bcs_ch_get;
    iVar11 = sp_el0;
    iStack_128 = *(iVar11 + 0x5e0);
    iStack_130 = 0;
    ppuStack_120 = &ppuStack_e0;
    uStack_110 = uVar9;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(*(auVar12._0_8_ + 0x80),auStack_138,&iStack_130,0x8001018);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar5 = 0;
        *(auVar12._8_8_ + 0x48) = *(iStack_130 + 0xb28);
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_128) {
        return uVar5;
    }
    auVar13 = __stack_chk_fail(uVar5);
    *extraout_x18_03 = sym.lpass_cdc_tx_macro_bcs_ch_put;
    pcStack_158 = sym.lpass_cdc_tx_macro_bcs_ch_put;
    iVar11 = sp_el0;
    iStack_168 = *(iVar11 + 0x5e0);
    iStack_170 = 0;
    uVar1 = *(auVar13._8_8_ + 0x48);
    ppuStack_160 = &ppuStack_120;
    iStack_150 = auVar12._8_8_;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(*(auVar13._0_8_ + 0x80),auStack_178,&iStack_170,0x8001265);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar5 = 0;
        *(iStack_170 + 0xb28) = uVar1;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_168) {
        return uVar5;
    }
    auVar12 = __stack_chk_fail(uVar5);
    *extraout_x18_04 = sym.lpass_cdc_tx_macro_get_bcs_ch_sel;
    pcStack_198 = sym.lpass_cdc_tx_macro_get_bcs_ch_sel;
    iVar11 = sp_el0;
    iStack_1a8 = *(iVar11 + 0x5e0);
    iVar11 = *(auVar12._0_8_ + 0x80);
    ppuStack_1a0 = &ppuStack_160;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(iVar11,auStack_1b8,auStack_1b0,0x800149b);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar3 = snd_soc_component_read(iVar11,0x30dc);
        uVar5 = 0;
        *(auVar12._8_8_ + 0x48) = uVar3 & 0xf;
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_1a8) {
        return uVar5;
    }
    auVar13 = __stack_chk_fail(uVar5);
    *extraout_x18_05 = sym.lpass_cdc_tx_macro_put_bcs_ch_sel;
    pcStack_1d8 = sym.lpass_cdc_tx_macro_put_bcs_ch_sel;
    iVar10 = sp_el0;
    iStack_1e8 = *(iVar10 + 0x5e0);
    iVar10 = *(auVar13._0_8_ + 0x80);
    ppuStack_1e0 = &ppuStack_1a0;
    iStack_1d0 = iVar11;
    iStack_1c8 = auVar12._8_8_;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(iVar10,auStack_1f8,auStack_1f0,0x8001308);
    if (((uVar5 & 1) == 0) || (0xc < *(auVar13._8_8_ + 0x48))) {
        uVar5 = 0xffffffea;
    }
    else {
        snd_soc_component_update_bits(iVar10,0x30dc,0xf);
        uVar5 = 0;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_1e8) {
        return uVar5;
    }
    auVar12 = __stack_chk_fail(uVar5);
    puVar8 = auVar12._8_8_;
    *extraout_x18_06 = sym.lpass_cdc_tx_macro_path_get;
    pcStack_218 = sym.lpass_cdc_tx_macro_path_get;
    iVar11 = sp_el0;
    iStack_228 = *(iVar11 + 0x5e0);
    puVar7 = 0xcc0;
    ppuStack_220 = &ppuStack_1e0;
    iStack_210 = auVar13._8_8_;
    iStack_208 = iVar10;
    puVar6 = kstrndup(auVar12._0_8_,10);
    puStack_230 = puVar6;
    if (puVar6 == NULL) {
        uVar5 = 0xffffffea;
    }
    else {
        iVar11 = strsep(&puStack_230,0x800099f);
        if (iVar11 == 0) {
            iVar4 = ___ratelimit(obj.lpass_cdc_tx_macro_path_get._rs,"lpass_cdc_tx_macro_path_get");
            puVar8 = puVar7;
            if (iVar4 != 0) {
                puVar8 = puStack_230;
                _printk(0x8000ef9,"lpass_cdc_tx_macro_path_get");
            }
code_r0x0800f90c:
            uVar5 = 0xffffffea;
        }
        else {
            iVar11 = strpbrk(iVar11,"01234567");
            if (iVar11 == 0) {
                iVar4 = ___ratelimit(obj.lpass_cdc_tx_macro_path_get._rs.200,"lpass_cdc_tx_macro_path_get");
                puVar8 = puVar7;
                if (iVar4 != 0) {
                    _printk(0x80009a1,"lpass_cdc_tx_macro_path_get");
                    puVar8 = puVar7;
                }
                goto code_r0x0800f90c;
            }
            uVar3 = kstrtouint(iVar11,10);
            uVar5 = uVar3;
            if ((uVar3 < 0) &&
               (iVar4 = ___ratelimit(obj.lpass_cdc_tx_macro_path_get._rs.202,"lpass_cdc_tx_macro_path_get"),
               iVar4 != 0)) {
                puVar8 = puVar6;
                _printk(0x8000ffc,"lpass_cdc_tx_macro_path_get");
            }
        }
        kfree(puVar6);
        puVar7 = puVar8;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_228) {
        return uVar5;
    }
    auVar12 = __stack_chk_fail();
    iVar10 = auVar12._0_8_;
    *extraout_x18_07 = sym.lpass_cdc_tx_macro_get_channel_map;
    pcStack_258 = sym.lpass_cdc_tx_macro_get_channel_map;
    iVar11 = sp_el0;
    iStack_268 = *(iVar11 + 0x5e0);
    iStack_278 = 0;
    uStack_270 = 0;
    ppuStack_260 = &ppuStack_220;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(*(iVar10 + 0x58),&uStack_270,&iStack_278,0x80014e6);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else if (*(iVar10 + 8) - 1 < 3) {
        *puVar7 = *(iStack_278 + *(iVar10 + 8) * 8 + 0xaa0);
        if (3 < *(iVar10 + 8)) goto code_r0x0800fa6c;
        uVar5 = 0;
        *auVar12._8_8_ = *(iStack_278 + *(iVar10 + 8) * 8 + 0xac0);
    }
    else {
        uVar5 = ___ratelimit(obj.lpass_cdc_tx_macro_get_channel_map._rs,"lpass_cdc_tx_macro_get_channel_map");
        if (uVar5 != 0) {
            _dev_err(uStack_270,"%s: Invalid AIF\n","lpass_cdc_tx_macro_get_channel_map");
            uVar5 = 0;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_268) {
        return uVar5;
    }
    __stack_chk_fail(uVar5);
code_r0x0800fa6c:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x800fa70);
    (*pcVar2)();
}


// ===== sym.lpass_cdc_tx_macro_swr_dmic_put.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt @ 0x0800d3e0 (size 8) =====

uint64_t sym.lpass_cdc_tx_macro_swr_dmic_put.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint uVar1;
    code *pcVar2;
    uint32_t uVar3;
    int iVar4;
    uint64_t uVar5;
    uint *puVar6;
    uint *puVar7;
    uint *puVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong uVar9;
    int64_t iVar10;
    int64_t iVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    uchar auVar13 [16];
    int64_t iStack_1b8;
    ulong uStack_1b0;
    int64_t iStack_1a8;
    ulong **ppuStack_1a0;
    code *pcStack_198;
    uint *puStack_170;
    int64_t iStack_168;
    ulong **ppuStack_160;
    code *pcStack_158;
    int64_t iStack_150;
    int64_t iStack_148;
    uchar auStack_138 [8];
    uchar auStack_130 [8];
    int64_t iStack_128;
    ulong **ppuStack_120;
    code *pcStack_118;
    int64_t iStack_110;
    int64_t iStack_108;
    uchar auStack_f8 [8];
    uchar auStack_f0 [8];
    int64_t iStack_e8;
    ulong **ppuStack_e0;
    code *pcStack_d8;
    uchar auStack_b8 [8];
    int64_t iStack_b0;
    int64_t iStack_a8;
    uchar **ppuStack_a0;
    code *pcStack_98;
    int64_t iStack_90;
    uchar auStack_78 [8];
    int64_t iStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    ulong uStack_50;
    uchar auStack_38 [8];
    int64_t iStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_28 = *(iVar11 + 0x5e0);
    iStack_30 = 0;
    uVar9 = *(param_2 + 0x48);
    uVar5 = sym.lpass_cdc_tx_macro_get_data(*(param_1 + 0x80),auStack_38,&iStack_30,0x8000d0c);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar5 = 0;
        *(iStack_30 + 0xb50) = uVar9 != 0;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_28) {
        return uVar5;
    }
    auVar12 = __stack_chk_fail(uVar5);
    *extraout_x18 = sym.lpass_cdc_tx_macro_bcs_ch_get;
    pcStack_58 = sym.lpass_cdc_tx_macro_bcs_ch_get;
    iVar11 = sp_el0;
    iStack_68 = *(iVar11 + 0x5e0);
    iStack_70 = 0;
    puStack_60 = &stack0xffffffffffffffe0;
    uStack_50 = uVar9;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(*(auVar12._0_8_ + 0x80),auStack_78,&iStack_70,0x8001018);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar5 = 0;
        *(auVar12._8_8_ + 0x48) = *(iStack_70 + 0xb28);
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_68) {
        return uVar5;
    }
    auVar13 = __stack_chk_fail(uVar5);
    *extraout_x18_00 = sym.lpass_cdc_tx_macro_bcs_ch_put;
    pcStack_98 = sym.lpass_cdc_tx_macro_bcs_ch_put;
    iVar11 = sp_el0;
    iStack_a8 = *(iVar11 + 0x5e0);
    iStack_b0 = 0;
    uVar1 = *(auVar13._8_8_ + 0x48);
    ppuStack_a0 = &puStack_60;
    iStack_90 = auVar12._8_8_;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(*(auVar13._0_8_ + 0x80),auStack_b8,&iStack_b0,0x8001265);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar5 = 0;
        *(iStack_b0 + 0xb28) = uVar1;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_a8) {
        return uVar5;
    }
    auVar12 = __stack_chk_fail(uVar5);
    *extraout_x18_01 = sym.lpass_cdc_tx_macro_get_bcs_ch_sel;
    pcStack_d8 = sym.lpass_cdc_tx_macro_get_bcs_ch_sel;
    iVar11 = sp_el0;
    iStack_e8 = *(iVar11 + 0x5e0);
    iVar11 = *(auVar12._0_8_ + 0x80);
    ppuStack_e0 = &ppuStack_a0;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(iVar11,auStack_f8,auStack_f0,0x800149b);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar3 = snd_soc_component_read(iVar11,0x30dc);
        uVar5 = 0;
        *(auVar12._8_8_ + 0x48) = uVar3 & 0xf;
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_e8) {
        return uVar5;
    }
    auVar13 = __stack_chk_fail(uVar5);
    *extraout_x18_02 = sym.lpass_cdc_tx_macro_put_bcs_ch_sel;
    pcStack_118 = sym.lpass_cdc_tx_macro_put_bcs_ch_sel;
    iVar10 = sp_el0;
    iStack_128 = *(iVar10 + 0x5e0);
    iVar10 = *(auVar13._0_8_ + 0x80);
    ppuStack_120 = &ppuStack_e0;
    iStack_110 = iVar11;
    iStack_108 = auVar12._8_8_;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(iVar10,auStack_138,auStack_130,0x8001308);
    if (((uVar5 & 1) == 0) || (0xc < *(auVar13._8_8_ + 0x48))) {
        uVar5 = 0xffffffea;
    }
    else {
        snd_soc_component_update_bits(iVar10,0x30dc,0xf);
        uVar5 = 0;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_128) {
        return uVar5;
    }
    auVar12 = __stack_chk_fail(uVar5);
    puVar8 = auVar12._8_8_;
    *extraout_x18_03 = sym.lpass_cdc_tx_macro_path_get;
    pcStack_158 = sym.lpass_cdc_tx_macro_path_get;
    iVar11 = sp_el0;
    iStack_168 = *(iVar11 + 0x5e0);
    puVar7 = 0xcc0;
    ppuStack_160 = &ppuStack_120;
    iStack_150 = auVar13._8_8_;
    iStack_148 = iVar10;
    puVar6 = kstrndup(auVar12._0_8_,10);
    puStack_170 = puVar6;
    if (puVar6 == NULL) {
        uVar5 = 0xffffffea;
    }
    else {
        iVar11 = strsep(&puStack_170,0x800099f);
        if (iVar11 == 0) {
            iVar4 = ___ratelimit(obj.lpass_cdc_tx_macro_path_get._rs,"lpass_cdc_tx_macro_path_get");
            puVar8 = puVar7;
            if (iVar4 != 0) {
                puVar8 = puStack_170;
                _printk(0x8000ef9,"lpass_cdc_tx_macro_path_get");
            }
code_r0x0800f90c:
            uVar5 = 0xffffffea;
        }
        else {
            iVar11 = strpbrk(iVar11,"01234567");
            if (iVar11 == 0) {
                iVar4 = ___ratelimit(obj.lpass_cdc_tx_macro_path_get._rs.200,"lpass_cdc_tx_macro_path_get");
                puVar8 = puVar7;
                if (iVar4 != 0) {
                    _printk(0x80009a1,"lpass_cdc_tx_macro_path_get");
                    puVar8 = puVar7;
                }
                goto code_r0x0800f90c;
            }
            uVar3 = kstrtouint(iVar11,10);
            uVar5 = uVar3;
            if ((uVar3 < 0) &&
               (iVar4 = ___ratelimit(obj.lpass_cdc_tx_macro_path_get._rs.202,"lpass_cdc_tx_macro_path_get"),
               iVar4 != 0)) {
                puVar8 = puVar6;
                _printk(0x8000ffc,"lpass_cdc_tx_macro_path_get");
            }
        }
        kfree(puVar6);
        puVar7 = puVar8;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_168) {
        return uVar5;
    }
    auVar12 = __stack_chk_fail();
    iVar10 = auVar12._0_8_;
    *extraout_x18_04 = sym.lpass_cdc_tx_macro_get_channel_map;
    pcStack_198 = sym.lpass_cdc_tx_macro_get_channel_map;
    iVar11 = sp_el0;
    iStack_1a8 = *(iVar11 + 0x5e0);
    iStack_1b8 = 0;
    uStack_1b0 = 0;
    ppuStack_1a0 = &ppuStack_160;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(*(iVar10 + 0x58),&uStack_1b0,&iStack_1b8,0x80014e6);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else if (*(iVar10 + 8) - 1 < 3) {
        *puVar7 = *(iStack_1b8 + *(iVar10 + 8) * 8 + 0xaa0);
        if (3 < *(iVar10 + 8)) goto code_r0x0800fa6c;
        uVar5 = 0;
        *auVar12._8_8_ = *(iStack_1b8 + *(iVar10 + 8) * 8 + 0xac0);
    }
    else {
        uVar5 = ___ratelimit(obj.lpass_cdc_tx_macro_get_channel_map._rs,"lpass_cdc_tx_macro_get_channel_map");
        if (uVar5 != 0) {
            _dev_err(uStack_1b0,"%s: Invalid AIF\n","lpass_cdc_tx_macro_get_channel_map");
            uVar5 = 0;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_1a8) {
        return uVar5;
    }
    __stack_chk_fail(uVar5);
code_r0x0800fa6c:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x800fa70);
    (*pcVar2)();
}


// ===== sym.lpass_cdc_tx_macro_put_dec_enum.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt @ 0x0800d3e8 (size 8) =====

uint64_t sym.lpass_cdc_tx_macro_put_dec_enum.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ulong uVar6;
    int64_t *piVar7;
    int *piVar8;
    ulong in_x7;
    int64_t iVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t arg1;
    int *piVar10;
    ulong uVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    uchar *puVar13;
    code *pcVar14;
    int64_t iStack_58;
    uchar auStack_50 [8];
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    puVar13 = &stack0xffffffffffffffc0;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    iVar4 = snd_soc_dapm_kcontrol_widget();
    iVar9 = *(iVar4 + 0x28);
    arg1 = iVar9 + -0xd0;
    piVar10 = *(param_1 + 0x78);
    iStack_58 = 0;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(arg1,auStack_50,&iStack_58,0x800081b);
    if (((uVar5 & 1) != 0) && (uVar2 = *(param_2 + 0x48), uVar2 <= piVar10[2] - 1U)) {
        uVar1 = *piVar10 - 0x100U >> 3;
        if ((uVar1 | *piVar10 << 0x1d) < 8) {
            uVar11 = *(iVar4 + 8);
            piVar10 = uVar1 * 0x80 + 0x404;
            uVar6 = strlen(uVar11);
            iVar9 = strnstr(uVar11,"SMIC",uVar6);
            iVar4 = iStack_58;
            piVar8 = piVar10;
            if (iVar9 == 0) {
                if (uVar2 != 0) {
                    uVar6 = 0x80;
                    iVar4 = 0x80;
                    goto code_r0x0800ef8c;
                }
            }
            else if (uVar2 != 0) {
                if (*(iStack_58 + 0xb50) == '\0') {
                    uVar6 = 0x80;
                    iVar4 = 0;
                }
                else {
                    snd_soc_component_update_bits(arg1,piVar10,0x80,0x80);
                    snd_soc_component_update_bits(arg1,0x3094,0x80,0);
                    uVar6 = 0xe;
                    iVar4 = *(iVar4 + 0xa88) << 1;
                    piVar8 = uVar2 * 2 + 0xc6 & 0xfffc;
                }
code_r0x0800ef8c:
                snd_soc_component_update_bits(arg1,piVar8,uVar6,iVar4);
            }
            uVar5 = snd_soc_dapm_put_enum_double(param_1,param_2);
            goto code_r0x0800ef30;
        }
        iVar3 = ___ratelimit(obj.lpass_cdc_tx_macro_put_dec_enum._rs,"lpass_cdc_tx_macro_put_dec_enum");
        if (iVar3 != 0) {
            _dev_err(*(iVar9 + -0xb8),"%s: e->reg: 0x%x not expected\n","lpass_cdc_tx_macro_put_dec_enum",*piVar10);
            uVar5 = 0xffffffea;
            goto code_r0x0800ef30;
        }
    }
    uVar5 = 0xffffffea;
code_r0x0800ef30:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return uVar5;
    }
    auVar12 = __stack_chk_fail(uVar5);
    piVar7 = auVar12._0_8_;
    *extraout_x18 = sym.lpass_cdc_tx_macro_mclk_enable;
    pcVar14 = sym.lpass_cdc_tx_macro_mclk_enable;
    iVar4 = dev_get_regmap(*(*piVar7 + 0x60),0);
    if (iVar4 == 0) {
        iVar3 = ___ratelimit(obj.lpass_cdc_tx_macro_mclk_enable._rs,"lpass_cdc_tx_macro_mclk_enable");
        if (iVar3 == 0) {
            uVar5 = 0xffffffea;
        }
        else {
            _dev_err(*piVar7,"%s: regmap is NULL\n","lpass_cdc_tx_macro_mclk_enable");
            uVar5 = 0xffffffea;
        }
    }
    else {
        mutex_lock(piVar7 + 3);
        if ((auVar12._8_8_ & 1) == 0) {
            if (piVar7[2] < 1) {
                iVar3 = ___ratelimit(obj.lpass_cdc_tx_macro_mclk_enable._rs.156,"lpass_cdc_tx_macro_mclk_enable");
                if (iVar3 != 0) {
                    _dev_err(*piVar7,"%s: clock already disabled\n","lpass_cdc_tx_macro_mclk_enable");
                }
                uVar5 = 0;
                *(piVar7 + 2) = 0;
            }
            else {
                iVar3 = piVar7[2] + -1;
                *(piVar7 + 2) = iVar3;
                if (iVar3 == 0) {
                    regmap_update_bits_base
                              (iVar4,4,1,0,0,0,0,in_x7,puVar13,pcVar14,piVar10,arg1,param_1,param_2);
                    regmap_update_bits_base(iVar4,0,1,0,0,0,0);
                }
                lpass_cdc_clk_rsc_fs_gen_request(*piVar7,0);
                lpass_cdc_clk_rsc_request_clock(*piVar7,0,0,0);
                uVar5 = 0;
            }
        }
        else {
            uVar2 = lpass_cdc_clk_rsc_request_clock(*piVar7,0,0,1);
            uVar5 = uVar2;
            if (uVar2 < 0) {
                iVar3 = ___ratelimit(obj.lpass_cdc_tx_macro_mclk_enable._rs.154,"lpass_cdc_tx_macro_mclk_enable");
                if (iVar3 != 0) {
                    _dev_err(*piVar7,"%s: request clock enable failed\n","lpass_cdc_tx_macro_mclk_enable");
                }
            }
            else {
                lpass_cdc_clk_rsc_fs_gen_request(*piVar7,1);
                regcache_mark_dirty(iVar4);
                regcache_sync_region(iVar4,0,0x7a8);
                iVar3 = piVar7[2];
                if (iVar3 == 0) {
                    regmap_update_bits_base(iVar4,0,1,1,0,0,0);
                    regmap_update_bits_base(iVar4,4,1,1,0,0,0);
                    iVar3 = piVar7[2];
                }
                *(piVar7 + 2) = iVar3 + 1;
            }
        }
        mutex_unlock(piVar7 + 3);
    }
    return uVar5;
}


// ===== sym.snd_soc_get_volsw.cfi_jt @ 0x0800d3f0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_get_volsw.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.snd_soc_get_enum_double.cfi_jt @ 0x0800d3f8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_get_enum_double.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.snd_soc_put_enum_double.cfi_jt @ 0x0800d400 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_put_enum_double.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.snd_soc_dapm_get_enum_double.cfi_jt @ 0x0800d408 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_dapm_get_enum_double.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.lpass_cdc_tx_macro_set_bcs.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt @ 0x0800d410 (size 8) =====

uint64_t sym.lpass_cdc_tx_macro_set_bcs.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint uVar1;
    code *pcVar2;
    uint32_t uVar3;
    int iVar4;
    uint64_t uVar5;
    uint *puVar6;
    uint *puVar7;
    uint *puVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong uVar9;
    int64_t iVar10;
    int64_t iVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    uchar auVar13 [16];
    int64_t iStack_238;
    ulong uStack_230;
    int64_t iStack_228;
    ulong **ppuStack_220;
    code *pcStack_218;
    uint *puStack_1f0;
    int64_t iStack_1e8;
    ulong **ppuStack_1e0;
    code *pcStack_1d8;
    int64_t iStack_1d0;
    int64_t iStack_1c8;
    uchar auStack_1b8 [8];
    uchar auStack_1b0 [8];
    int64_t iStack_1a8;
    ulong **ppuStack_1a0;
    code *pcStack_198;
    int64_t iStack_190;
    int64_t iStack_188;
    uchar auStack_178 [8];
    uchar auStack_170 [8];
    int64_t iStack_168;
    ulong **ppuStack_160;
    code *pcStack_158;
    uchar auStack_138 [8];
    int64_t iStack_130;
    int64_t iStack_128;
    ulong **ppuStack_120;
    code *pcStack_118;
    int64_t iStack_110;
    uchar auStack_f8 [8];
    int64_t iStack_f0;
    int64_t iStack_e8;
    ulong **ppuStack_e0;
    code *pcStack_d8;
    ulong uStack_d0;
    uchar auStack_b8 [8];
    int64_t iStack_b0;
    int64_t iStack_a8;
    uchar **ppuStack_a0;
    code *pcStack_98;
    int64_t iStack_90;
    uchar auStack_78 [8];
    int64_t iStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    ulong uStack_50;
    uchar auStack_38 [8];
    int64_t iStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_28 = *(iVar11 + 0x5e0);
    iStack_30 = 0;
    uVar9 = *(param_2 + 0x48);
    uVar5 = sym.lpass_cdc_tx_macro_get_data(*(param_1 + 0x80),auStack_38,&iStack_30,0x80009c0);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar5 = 0;
        *(iStack_30 + 0xb04) = uVar9 != 0;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_28) {
        return uVar5;
    }
    auVar12 = __stack_chk_fail(uVar5);
    *extraout_x18 = sym.lpass_cdc_tx_macro_swr_dmic_get;
    pcStack_58 = sym.lpass_cdc_tx_macro_swr_dmic_get;
    iVar11 = sp_el0;
    iStack_68 = *(iVar11 + 0x5e0);
    iStack_70 = 0;
    puStack_60 = &stack0xffffffffffffffe0;
    uStack_50 = uVar9;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(*(auVar12._0_8_ + 0x80),auStack_78,&iStack_70,0x80009db);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar5 = 0;
        *(auVar12._8_8_ + 0x48) = *(iStack_70 + 0xb50);
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_68) {
        return uVar5;
    }
    auVar13 = __stack_chk_fail(uVar5);
    *extraout_x18_00 = sym.lpass_cdc_tx_macro_swr_dmic_put;
    pcStack_98 = sym.lpass_cdc_tx_macro_swr_dmic_put;
    iVar11 = sp_el0;
    iStack_a8 = *(iVar11 + 0x5e0);
    iStack_b0 = 0;
    uVar9 = *(auVar13._8_8_ + 0x48);
    ppuStack_a0 = &puStack_60;
    iStack_90 = auVar12._8_8_;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(*(auVar13._0_8_ + 0x80),auStack_b8,&iStack_b0,0x8000d0c);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar5 = 0;
        *(iStack_b0 + 0xb50) = uVar9 != 0;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_a8) {
        return uVar5;
    }
    auVar12 = __stack_chk_fail(uVar5);
    *extraout_x18_01 = sym.lpass_cdc_tx_macro_bcs_ch_get;
    pcStack_d8 = sym.lpass_cdc_tx_macro_bcs_ch_get;
    iVar11 = sp_el0;
    iStack_e8 = *(iVar11 + 0x5e0);
    iStack_f0 = 0;
    ppuStack_e0 = &ppuStack_a0;
    uStack_d0 = uVar9;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(*(auVar12._0_8_ + 0x80),auStack_f8,&iStack_f0,0x8001018);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar5 = 0;
        *(auVar12._8_8_ + 0x48) = *(iStack_f0 + 0xb28);
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_e8) {
        return uVar5;
    }
    auVar13 = __stack_chk_fail(uVar5);
    *extraout_x18_02 = sym.lpass_cdc_tx_macro_bcs_ch_put;
    pcStack_118 = sym.lpass_cdc_tx_macro_bcs_ch_put;
    iVar11 = sp_el0;
    iStack_128 = *(iVar11 + 0x5e0);
    iStack_130 = 0;
    uVar1 = *(auVar13._8_8_ + 0x48);
    ppuStack_120 = &ppuStack_e0;
    iStack_110 = auVar12._8_8_;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(*(auVar13._0_8_ + 0x80),auStack_138,&iStack_130,0x8001265);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar5 = 0;
        *(iStack_130 + 0xb28) = uVar1;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_128) {
        return uVar5;
    }
    auVar12 = __stack_chk_fail(uVar5);
    *extraout_x18_03 = sym.lpass_cdc_tx_macro_get_bcs_ch_sel;
    pcStack_158 = sym.lpass_cdc_tx_macro_get_bcs_ch_sel;
    iVar11 = sp_el0;
    iStack_168 = *(iVar11 + 0x5e0);
    iVar11 = *(auVar12._0_8_ + 0x80);
    ppuStack_160 = &ppuStack_120;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(iVar11,auStack_178,auStack_170,0x800149b);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar3 = snd_soc_component_read(iVar11,0x30dc);
        uVar5 = 0;
        *(auVar12._8_8_ + 0x48) = uVar3 & 0xf;
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_168) {
        return uVar5;
    }
    auVar13 = __stack_chk_fail(uVar5);
    *extraout_x18_04 = sym.lpass_cdc_tx_macro_put_bcs_ch_sel;
    pcStack_198 = sym.lpass_cdc_tx_macro_put_bcs_ch_sel;
    iVar10 = sp_el0;
    iStack_1a8 = *(iVar10 + 0x5e0);
    iVar10 = *(auVar13._0_8_ + 0x80);
    ppuStack_1a0 = &ppuStack_160;
    iStack_190 = iVar11;
    iStack_188 = auVar12._8_8_;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(iVar10,auStack_1b8,auStack_1b0,0x8001308);
    if (((uVar5 & 1) == 0) || (0xc < *(auVar13._8_8_ + 0x48))) {
        uVar5 = 0xffffffea;
    }
    else {
        snd_soc_component_update_bits(iVar10,0x30dc,0xf);
        uVar5 = 0;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_1a8) {
        return uVar5;
    }
    auVar12 = __stack_chk_fail(uVar5);
    puVar8 = auVar12._8_8_;
    *extraout_x18_05 = sym.lpass_cdc_tx_macro_path_get;
    pcStack_1d8 = sym.lpass_cdc_tx_macro_path_get;
    iVar11 = sp_el0;
    iStack_1e8 = *(iVar11 + 0x5e0);
    puVar7 = 0xcc0;
    ppuStack_1e0 = &ppuStack_1a0;
    iStack_1d0 = auVar13._8_8_;
    iStack_1c8 = iVar10;
    puVar6 = kstrndup(auVar12._0_8_,10);
    puStack_1f0 = puVar6;
    if (puVar6 == NULL) {
        uVar5 = 0xffffffea;
    }
    else {
        iVar11 = strsep(&puStack_1f0,0x800099f);
        if (iVar11 == 0) {
            iVar4 = ___ratelimit(obj.lpass_cdc_tx_macro_path_get._rs,"lpass_cdc_tx_macro_path_get");
            puVar8 = puVar7;
            if (iVar4 != 0) {
                puVar8 = puStack_1f0;
                _printk(0x8000ef9,"lpass_cdc_tx_macro_path_get");
            }
code_r0x0800f90c:
            uVar5 = 0xffffffea;
        }
        else {
            iVar11 = strpbrk(iVar11,"01234567");
            if (iVar11 == 0) {
                iVar4 = ___ratelimit(obj.lpass_cdc_tx_macro_path_get._rs.200,"lpass_cdc_tx_macro_path_get");
                puVar8 = puVar7;
                if (iVar4 != 0) {
                    _printk(0x80009a1,"lpass_cdc_tx_macro_path_get");
                    puVar8 = puVar7;
                }
                goto code_r0x0800f90c;
            }
            uVar3 = kstrtouint(iVar11,10);
            uVar5 = uVar3;
            if ((uVar3 < 0) &&
               (iVar4 = ___ratelimit(obj.lpass_cdc_tx_macro_path_get._rs.202,"lpass_cdc_tx_macro_path_get"),
               iVar4 != 0)) {
                puVar8 = puVar6;
                _printk(0x8000ffc,"lpass_cdc_tx_macro_path_get");
            }
        }
        kfree(puVar6);
        puVar7 = puVar8;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_1e8) {
        return uVar5;
    }
    auVar12 = __stack_chk_fail();
    iVar10 = auVar12._0_8_;
    *extraout_x18_06 = sym.lpass_cdc_tx_macro_get_channel_map;
    pcStack_218 = sym.lpass_cdc_tx_macro_get_channel_map;
    iVar11 = sp_el0;
    iStack_228 = *(iVar11 + 0x5e0);
    iStack_238 = 0;
    uStack_230 = 0;
    ppuStack_220 = &ppuStack_1e0;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(*(iVar10 + 0x58),&uStack_230,&iStack_238,0x80014e6);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else if (*(iVar10 + 8) - 1 < 3) {
        *puVar7 = *(iStack_238 + *(iVar10 + 8) * 8 + 0xaa0);
        if (3 < *(iVar10 + 8)) goto code_r0x0800fa6c;
        uVar5 = 0;
        *auVar12._8_8_ = *(iStack_238 + *(iVar10 + 8) * 8 + 0xac0);
    }
    else {
        uVar5 = ___ratelimit(obj.lpass_cdc_tx_macro_get_channel_map._rs,"lpass_cdc_tx_macro_get_channel_map");
        if (uVar5 != 0) {
            _dev_err(uStack_230,"%s: Invalid AIF\n","lpass_cdc_tx_macro_get_channel_map");
            uVar5 = 0;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_228) {
        return uVar5;
    }
    __stack_chk_fail(uVar5);
code_r0x0800fa6c:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x800fa70);
    (*pcVar2)();
}


// ===== sym.lpass_cdc_tx_macro_swr_dmic_get.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt @ 0x0800d418 (size 8) =====

uint64_t sym.lpass_cdc_tx_macro_swr_dmic_get.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint uVar1;
    code *pcVar2;
    uint32_t uVar3;
    int iVar4;
    uint64_t uVar5;
    uint *puVar6;
    uint *puVar7;
    uint *puVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong uVar9;
    int64_t iVar10;
    int64_t iVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    uchar auVar13 [16];
    int64_t iStack_1f8;
    ulong uStack_1f0;
    int64_t iStack_1e8;
    ulong **ppuStack_1e0;
    code *pcStack_1d8;
    uint *puStack_1b0;
    int64_t iStack_1a8;
    ulong **ppuStack_1a0;
    code *pcStack_198;
    int64_t iStack_190;
    int64_t iStack_188;
    uchar auStack_178 [8];
    uchar auStack_170 [8];
    int64_t iStack_168;
    ulong **ppuStack_160;
    code *pcStack_158;
    int64_t iStack_150;
    int64_t iStack_148;
    uchar auStack_138 [8];
    uchar auStack_130 [8];
    int64_t iStack_128;
    ulong **ppuStack_120;
    code *pcStack_118;
    uchar auStack_f8 [8];
    int64_t iStack_f0;
    int64_t iStack_e8;
    ulong **ppuStack_e0;
    code *pcStack_d8;
    int64_t iStack_d0;
    uchar auStack_b8 [8];
    int64_t iStack_b0;
    int64_t iStack_a8;
    uchar **ppuStack_a0;
    code *pcStack_98;
    ulong uStack_90;
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
    iVar11 = sp_el0;
    iStack_28 = *(iVar11 + 0x5e0);
    iStack_30 = 0;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(*(param_1 + 0x80),auStack_38,&iStack_30,0x80009db);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar5 = 0;
        *(param_2 + 0x48) = *(iStack_30 + 0xb50);
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_28) {
        return uVar5;
    }
    auVar12 = __stack_chk_fail(uVar5);
    *extraout_x18 = sym.lpass_cdc_tx_macro_swr_dmic_put;
    pcStack_58 = sym.lpass_cdc_tx_macro_swr_dmic_put;
    iVar11 = sp_el0;
    iStack_68 = *(iVar11 + 0x5e0);
    iStack_70 = 0;
    uVar9 = *(auVar12._8_8_ + 0x48);
    puStack_60 = &stack0xffffffffffffffe0;
    iStack_50 = param_2;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(*(auVar12._0_8_ + 0x80),auStack_78,&iStack_70,0x8000d0c);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar5 = 0;
        *(iStack_70 + 0xb50) = uVar9 != 0;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_68) {
        return uVar5;
    }
    auVar12 = __stack_chk_fail(uVar5);
    *extraout_x18_00 = sym.lpass_cdc_tx_macro_bcs_ch_get;
    pcStack_98 = sym.lpass_cdc_tx_macro_bcs_ch_get;
    iVar11 = sp_el0;
    iStack_a8 = *(iVar11 + 0x5e0);
    iStack_b0 = 0;
    ppuStack_a0 = &puStack_60;
    uStack_90 = uVar9;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(*(auVar12._0_8_ + 0x80),auStack_b8,&iStack_b0,0x8001018);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar5 = 0;
        *(auVar12._8_8_ + 0x48) = *(iStack_b0 + 0xb28);
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_a8) {
        return uVar5;
    }
    auVar13 = __stack_chk_fail(uVar5);
    *extraout_x18_01 = sym.lpass_cdc_tx_macro_bcs_ch_put;
    pcStack_d8 = sym.lpass_cdc_tx_macro_bcs_ch_put;
    iVar11 = sp_el0;
    iStack_e8 = *(iVar11 + 0x5e0);
    iStack_f0 = 0;
    uVar1 = *(auVar13._8_8_ + 0x48);
    ppuStack_e0 = &ppuStack_a0;
    iStack_d0 = auVar12._8_8_;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(*(auVar13._0_8_ + 0x80),auStack_f8,&iStack_f0,0x8001265);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar5 = 0;
        *(iStack_f0 + 0xb28) = uVar1;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_e8) {
        return uVar5;
    }
    auVar12 = __stack_chk_fail(uVar5);
    *extraout_x18_02 = sym.lpass_cdc_tx_macro_get_bcs_ch_sel;
    pcStack_118 = sym.lpass_cdc_tx_macro_get_bcs_ch_sel;
    iVar11 = sp_el0;
    iStack_128 = *(iVar11 + 0x5e0);
    iVar11 = *(auVar12._0_8_ + 0x80);
    ppuStack_120 = &ppuStack_e0;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(iVar11,auStack_138,auStack_130,0x800149b);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar3 = snd_soc_component_read(iVar11,0x30dc);
        uVar5 = 0;
        *(auVar12._8_8_ + 0x48) = uVar3 & 0xf;
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_128) {
        return uVar5;
    }
    auVar13 = __stack_chk_fail(uVar5);
    *extraout_x18_03 = sym.lpass_cdc_tx_macro_put_bcs_ch_sel;
    pcStack_158 = sym.lpass_cdc_tx_macro_put_bcs_ch_sel;
    iVar10 = sp_el0;
    iStack_168 = *(iVar10 + 0x5e0);
    iVar10 = *(auVar13._0_8_ + 0x80);
    ppuStack_160 = &ppuStack_120;
    iStack_150 = iVar11;
    iStack_148 = auVar12._8_8_;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(iVar10,auStack_178,auStack_170,0x8001308);
    if (((uVar5 & 1) == 0) || (0xc < *(auVar13._8_8_ + 0x48))) {
        uVar5 = 0xffffffea;
    }
    else {
        snd_soc_component_update_bits(iVar10,0x30dc,0xf);
        uVar5 = 0;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_168) {
        return uVar5;
    }
    auVar12 = __stack_chk_fail(uVar5);
    puVar8 = auVar12._8_8_;
    *extraout_x18_04 = sym.lpass_cdc_tx_macro_path_get;
    pcStack_198 = sym.lpass_cdc_tx_macro_path_get;
    iVar11 = sp_el0;
    iStack_1a8 = *(iVar11 + 0x5e0);
    puVar7 = 0xcc0;
    ppuStack_1a0 = &ppuStack_160;
    iStack_190 = auVar13._8_8_;
    iStack_188 = iVar10;
    puVar6 = kstrndup(auVar12._0_8_,10);
    puStack_1b0 = puVar6;
    if (puVar6 == NULL) {
        uVar5 = 0xffffffea;
    }
    else {
        iVar11 = strsep(&puStack_1b0,0x800099f);
        if (iVar11 == 0) {
            iVar4 = ___ratelimit(obj.lpass_cdc_tx_macro_path_get._rs,"lpass_cdc_tx_macro_path_get");
            puVar8 = puVar7;
            if (iVar4 != 0) {
                puVar8 = puStack_1b0;
                _printk(0x8000ef9,"lpass_cdc_tx_macro_path_get");
            }
code_r0x0800f90c:
            uVar5 = 0xffffffea;
        }
        else {
            iVar11 = strpbrk(iVar11,"01234567");
            if (iVar11 == 0) {
                iVar4 = ___ratelimit(obj.lpass_cdc_tx_macro_path_get._rs.200,"lpass_cdc_tx_macro_path_get");
                puVar8 = puVar7;
                if (iVar4 != 0) {
                    _printk(0x80009a1,"lpass_cdc_tx_macro_path_get");
                    puVar8 = puVar7;
                }
                goto code_r0x0800f90c;
            }
            uVar3 = kstrtouint(iVar11,10);
            uVar5 = uVar3;
            if ((uVar3 < 0) &&
               (iVar4 = ___ratelimit(obj.lpass_cdc_tx_macro_path_get._rs.202,"lpass_cdc_tx_macro_path_get"),
               iVar4 != 0)) {
                puVar8 = puVar6;
                _printk(0x8000ffc,"lpass_cdc_tx_macro_path_get");
            }
        }
        kfree(puVar6);
        puVar7 = puVar8;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_1a8) {
        return uVar5;
    }
    auVar12 = __stack_chk_fail();
    iVar10 = auVar12._0_8_;
    *extraout_x18_05 = sym.lpass_cdc_tx_macro_get_channel_map;
    pcStack_1d8 = sym.lpass_cdc_tx_macro_get_channel_map;
    iVar11 = sp_el0;
    iStack_1e8 = *(iVar11 + 0x5e0);
    iStack_1f8 = 0;
    uStack_1f0 = 0;
    ppuStack_1e0 = &ppuStack_1a0;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(*(iVar10 + 0x58),&uStack_1f0,&iStack_1f8,0x80014e6);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else if (*(iVar10 + 8) - 1 < 3) {
        *puVar7 = *(iStack_1f8 + *(iVar10 + 8) * 8 + 0xaa0);
        if (3 < *(iVar10 + 8)) goto code_r0x0800fa6c;
        uVar5 = 0;
        *auVar12._8_8_ = *(iStack_1f8 + *(iVar10 + 8) * 8 + 0xac0);
    }
    else {
        uVar5 = ___ratelimit(obj.lpass_cdc_tx_macro_get_channel_map._rs,"lpass_cdc_tx_macro_get_channel_map");
        if (uVar5 != 0) {
            _dev_err(uStack_1f0,"%s: Invalid AIF\n","lpass_cdc_tx_macro_get_channel_map");
            uVar5 = 0;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_1e8) {
        return uVar5;
    }
    __stack_chk_fail(uVar5);
code_r0x0800fa6c:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x800fa70);
    (*pcVar2)();
}


// ===== sym.lpass_cdc_tx_macro_remove.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt @ 0x0800d420 (size 8) =====

ulong sym.lpass_cdc_tx_macro_remove.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0xa8) == 0) {
        uVar1 = 0xffffffea;
    }
    else {
        param_1 = param_1 + 0x10;
        __pm_runtime_disable(param_1,1);
        __pm_runtime_set_status(param_1,2);
        lpass_cdc_unregister_macro(param_1,0);
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.lpass_cdc_tx_macro_probe.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt @ 0x0800d428 (size 8) =====

int sym.lpass_cdc_tx_macro_probe.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    int iVar2;
    uint64_t uVar3;
    int64_t *piVar4;
    ulong uVar5;
    int64_t iVar6;
    int64_t iVar7;
    ushort uVar8;
    uint32_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_b0;
    code *pcStack_a8;
    code *pcStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    code *pcStack_88;
    ulong uStack_80;
    code *pcStack_78;
    ulong uStack_70;
    ulong uStack_68;
    code *pcStack_60;
    ulong uStack_58;
    code *pcStack_50;
    int64_t iStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iVar7 = param_1 + 0x10;
    iStack_38 = *(iVar6 + 0x5e0);
    iStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    pcStack_50 = NULL;
    uStack_68 = 0;
    pcStack_60 = NULL;
    pcStack_78 = NULL;
    uStack_70 = 0;
    pcStack_88 = NULL;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    pcStack_a8 = NULL;
    pcStack_a0 = NULL;
    uStack_b0 = 0;
    uVar3 = lpass_cdc_is_va_macro_registered(iVar7);
    if ((uVar3 & 1) == 0) {
        _dev_err(iVar7,"%s: va-macro not registered yet, defer\n","lpass_cdc_tx_macro_probe");
        iVar2 = -0x205;
        goto code_r0x0800d69c;
    }
    piVar4 = devm_kmalloc(iVar7,0xb58,0xdc0);
    if (piVar4 == NULL) {
        iVar2 = -0xc;
        goto code_r0x0800d69c;
    }
    *(param_1 + 0xa8) = piVar4;
    uVar5 = *(param_1 + 0x300);
    _segment.ehdr = piVar4;
    *piVar4 = iVar7;
    iVar2 = of_property_read_variable_u32_array(uVar5,0x80011df,&uStack_b0 + 4,1,0);
    if (iVar2 < 0) {
        _dev_err(iVar7,"%s: could not find %s entry in dt\n","lpass_cdc_tx_macro_probe",0x80011df);
        goto code_r0x0800d69c;
    }
    *(param_1 + 0xa8) = piVar4;
    iVar6 = devm_ioremap(iVar7,uStack_b0._4_4_,0x1000);
    if (iVar6 == 0) {
        _dev_err(iVar7,"%s: ioremap failed\n","lpass_cdc_tx_macro_probe");
        iVar2 = -0xc;
        goto code_r0x0800d69c;
    }
    piVar4[0x15c] = iVar6;
    uVar5 = *(param_1 + 0x300);
    *(piVar4 + 0x16a) = 0;
    *(piVar4 + 0xb54) = 0;
    iVar2 = of_property_read_variable_u32_array(uVar5,"qcom,tx-dmic-sample-rate",&uStack_b0,1,0);
    if (iVar2 < 0) {
        _dev_err(iVar7,"%s: could not find sample_rate entry in dt\n","lpass_cdc_tx_macro_probe");
        uVar8 = 0;
code_r0x0800d764:
        *(piVar4 + 0x151) = uVar8;
        __mutex_init(piVar4 + 3,"&tx_priv->mclk_lock",obj.lpass_cdc_tx_macro_probe.__key);
        __mutex_init(piVar4 + 9,"&tx_priv->wlock",obj.lpass_cdc_tx_macro_probe.__key);
        uStack_90 = 0;
        pcStack_a8 = sym.lpass_cdc_tx_macro_init.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt;
        pcStack_a0 = sym.lpass_cdc_tx_macro_deinit.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt;
        uStack_40 = 0;
        pcStack_88 = obj.lpass_cdc_tx_macro_dai;
        uStack_80 = 0;
        uStack_98 = 3;
        pcStack_78 = sym.lpass_cdc_tx_macro_event_handler.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt;
        uStack_70 = 0;
        uStack_68 = 0;
        pcStack_60 = sym.lpass_cdc_tx_macro_clk_div_get.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt;
        uStack_58 = 0;
        pcStack_50 = sym.__lpass_cdc_tx_macro_mclk_enable.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt;
        iStack_48 = iVar6;
        iVar2 = lpass_cdc_register_macro(iVar7,0,&pcStack_a8);
        if (iVar2 == 0) {
            pm_runtime_set_autosuspend_delay(iVar7,0x32);
            __pm_runtime_use_autosuspend(iVar7,1);
            __pm_runtime_set_status(iVar7,2);
            *(param_1 + 0x210) = *(param_1 + 0x210) | 0x100;
            pm_runtime_enable(iVar7);
        }
        else {
            _dev_err(iVar7,"%s: register macro failed\n","lpass_cdc_tx_macro_probe");
        }
    }
    else {
        if (uStack_b0 != 0) {
            uVar1 = 0;
            if (uStack_b0 != 0) {
                uVar1 = 9600000 / uStack_b0;
            }
            if (uVar1 * uStack_b0 == 9600000) {
                uVar9 = uVar1 - 2;
                if ((uVar9 < 0xf) && ((0x4057U >> (uVar9 & 0x1f) & 1) != 0)) {
                    uVar8 = *((uVar1 - 2) * 2 + 0x800c3d8);
                    goto code_r0x0800d764;
                }
            }
        }
        iVar2 = -0x16;
    }
code_r0x0800d69c:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_38) {
        return iVar2;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18 = sym.lpass_cdc_tx_macro_remove;
    if (*(iVar7 + 0xa8) == 0) {
        iVar2 = -0x16;
    }
    else {
        iVar7 = iVar7 + 0x10;
        __pm_runtime_disable(iVar7,1);
        __pm_runtime_set_status(iVar7,2);
        lpass_cdc_unregister_macro(iVar7,0);
        iVar2 = 0;
    }
    return iVar2;
}


// ===== sym.lpass_cdc_tx_macro_mute_hs @ 0x0800d430 (size 316) =====

void sym.lpass_cdc_tx_macro_mute_hs(void)

{
    ushort uVar1;
    ulong *in_x18;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != 0) {
        iVar2 = *(_segment.ehdr + 0x78);
        if ((*(_segment.ehdr + 0xa00) & 1) == 0) {
            uVar3 = 0;
            do {
                iVar4 = uVar3 * 4;
                uVar1 = snd_soc_component_read(iVar2,*(obj.LPASS_CDC_TX_TX_VOL_CTL + iVar4));
                *(_segment.ehdr + uVar3 * 2 + 0xa8a) = uVar1;
                _dev_info(*(iVar2 + 0x18),"%s: the reg value of TX%d before mute is: %#x \n",
                          "lpass_cdc_tx_macro_mute_hs",uVar3 & 0xffffffff,*(_segment.ehdr + uVar3 * 2 + 0xa8a));
                snd_soc_component_update_bits(iVar2,*(obj.LPASS_CDC_TX_TX_VOL_CTL + iVar4),0xff,0xac);
                uVar1 = snd_soc_component_read(iVar2,*(obj.LPASS_CDC_TX_TX_VOL_CTL + iVar4));
                _dev_info(*(iVar2 + 0x18),"%s: the reg value of TX%d after mute is: %#x \n",
                          "lpass_cdc_tx_macro_mute_hs",uVar3 & 0xffffffff,uVar1);
                uVar3 = uVar3 + 1;
            } while (uVar3 != 8);
            queue_delayed_work_on(0x20,_delayed_work_timer_fn,_segment.ehdr + 0xa00,300);
        }
        else {
            _dev_err(*(iVar2 + 0x18),"%s: there is already a work, give up unmute\n","lpass_cdc_tx_macro_mute_hs");
        }
    }
    return;
}


// ===== sym.lpass_cdc_tx_macro_probe @ 0x0800d56c (size 756) =====

int sym.lpass_cdc_tx_macro_probe(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    uint64_t uVar3;
    int64_t *piVar4;
    ulong uVar5;
    int64_t iVar6;
    int64_t iVar7;
    ushort uVar8;
    uint32_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_b0;
    code *pcStack_a8;
    code *pcStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    code *pcStack_88;
    ulong uStack_80;
    code *pcStack_78;
    ulong uStack_70;
    ulong uStack_68;
    code *pcStack_60;
    ulong uStack_58;
    code *pcStack_50;
    int64_t iStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iVar7 = arg1 + 0x10;
    iStack_38 = *(iVar6 + 0x5e0);
    iStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    pcStack_50 = NULL;
    uStack_68 = 0;
    pcStack_60 = NULL;
    pcStack_78 = NULL;
    uStack_70 = 0;
    pcStack_88 = NULL;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    pcStack_a8 = NULL;
    pcStack_a0 = NULL;
    uStack_b0 = 0;
    uVar3 = lpass_cdc_is_va_macro_registered(iVar7);
    if ((uVar3 & 1) == 0) {
        _dev_err(iVar7,"%s: va-macro not registered yet, defer\n","lpass_cdc_tx_macro_probe");
        iVar2 = -0x205;
        goto code_r0x0800d69c;
    }
    piVar4 = devm_kmalloc(iVar7,0xb58,0xdc0);
    if (piVar4 == NULL) {
        iVar2 = -0xc;
        goto code_r0x0800d69c;
    }
    *(arg1 + 0xa8) = piVar4;
    uVar5 = *(arg1 + 0x300);
    _segment.ehdr = piVar4;
    *piVar4 = iVar7;
    iVar2 = of_property_read_variable_u32_array(uVar5,0x80011df,&uStack_b0 + 4,1,0);
    if (iVar2 < 0) {
        _dev_err(iVar7,"%s: could not find %s entry in dt\n","lpass_cdc_tx_macro_probe",0x80011df);
        goto code_r0x0800d69c;
    }
    *(arg1 + 0xa8) = piVar4;
    iVar6 = devm_ioremap(iVar7,uStack_b0._4_4_,0x1000);
    if (iVar6 == 0) {
        _dev_err(iVar7,"%s: ioremap failed\n","lpass_cdc_tx_macro_probe");
        iVar2 = -0xc;
        goto code_r0x0800d69c;
    }
    piVar4[0x15c] = iVar6;
    uVar5 = *(arg1 + 0x300);
    *(piVar4 + 0x16a) = 0;
    *(piVar4 + 0xb54) = 0;
    iVar2 = of_property_read_variable_u32_array(uVar5,"qcom,tx-dmic-sample-rate",&uStack_b0,1,0);
    if (iVar2 < 0) {
        _dev_err(iVar7,"%s: could not find sample_rate entry in dt\n","lpass_cdc_tx_macro_probe");
        uVar8 = 0;
code_r0x0800d764:
        *(piVar4 + 0x151) = uVar8;
        __mutex_init(piVar4 + 3,"&tx_priv->mclk_lock",obj.lpass_cdc_tx_macro_probe.__key);
        __mutex_init(piVar4 + 9,"&tx_priv->wlock",obj.lpass_cdc_tx_macro_probe.__key);
        uStack_90 = 0;
        pcStack_a8 = sym.lpass_cdc_tx_macro_init.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt;
        pcStack_a0 = sym.lpass_cdc_tx_macro_deinit.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt;
        uStack_40 = 0;
        pcStack_88 = obj.lpass_cdc_tx_macro_dai;
        uStack_80 = 0;
        uStack_98 = 3;
        pcStack_78 = sym.lpass_cdc_tx_macro_event_handler.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt;
        uStack_70 = 0;
        uStack_68 = 0;
        pcStack_60 = sym.lpass_cdc_tx_macro_clk_div_get.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt;
        uStack_58 = 0;
        pcStack_50 = sym.__lpass_cdc_tx_macro_mclk_enable.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt;
        iStack_48 = iVar6;
        iVar2 = lpass_cdc_register_macro(iVar7,0,&pcStack_a8);
        if (iVar2 == 0) {
            pm_runtime_set_autosuspend_delay(iVar7,0x32);
            __pm_runtime_use_autosuspend(iVar7,1);
            __pm_runtime_set_status(iVar7,2);
            *(arg1 + 0x210) = *(arg1 + 0x210) | 0x100;
            pm_runtime_enable(iVar7);
        }
        else {
            _dev_err(iVar7,"%s: register macro failed\n","lpass_cdc_tx_macro_probe");
        }
    }
    else {
        if (uStack_b0 != 0) {
            uVar1 = 0;
            if (uStack_b0 != 0) {
                uVar1 = 9600000 / uStack_b0;
            }
            if (uVar1 * uStack_b0 == 9600000) {
                uVar9 = uVar1 - 2;
                if ((uVar9 < 0xf) && ((0x4057U >> (uVar9 & 0x1f) & 1) != 0)) {
                    uVar8 = *((uVar1 - 2) * 2 + 0x800c3d8);
                    goto code_r0x0800d764;
                }
            }
        }
        iVar2 = -0x16;
    }
code_r0x0800d69c:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_38) {
        return iVar2;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18 = sym.lpass_cdc_tx_macro_remove;
    if (*(iVar7 + 0xa8) == 0) {
        iVar2 = -0x16;
    }
    else {
        iVar7 = iVar7 + 0x10;
        __pm_runtime_disable(iVar7,1);
        __pm_runtime_set_status(iVar7,2);
        lpass_cdc_unregister_macro(iVar7,0);
        iVar2 = 0;
    }
    return iVar2;
}


// ===== sym.lpass_cdc_tx_macro_remove @ 0x0800d860 (size 100) =====

ulong sym.lpass_cdc_tx_macro_remove(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0xa8) == 0) {
        uVar1 = 0xffffffea;
    }
    else {
        arg1 = arg1 + 0x10;
        __pm_runtime_disable(arg1,1);
        __pm_runtime_set_status(arg1,2);
        lpass_cdc_unregister_macro(arg1,0);
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.lpass_cdc_tx_macro_init @ 0x0800d8c4 (size 688) =====

int sym.lpass_cdc_tx_macro_init(int64_t arg1)

{
    int64_t iVar1;
    uint uVar2;
    int iVar3;
    int64_t iVar4;
    ulong uVar5;
    char *pcVar6;
    ulong *in_x18;
    char cVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = lpass_cdc_get_device_ptr(*(arg1 + 0x18),0);
    if (iVar4 == 0) {
        uVar5 = *(arg1 + 0x18);
        pcVar6 = "%s: null device for macro!\n";
    }
    else {
        iVar8 = *(iVar4 + 0x98);
        if (iVar8 != 0) {
            iVar1 = arg1 + 0xd0;
            uVar2 = lpass_cdc_get_version(iVar4);
            *(iVar8 + 0xa9c) = uVar2;
            iVar3 = snd_soc_dapm_new_controls(iVar1,obj.lpass_cdc_tx_macro_dapm_widgets,0x29);
            if (iVar3 < 0) {
                pcVar6 = "%s: Failed to add controls\n";
            }
            else {
                iVar3 = snd_soc_dapm_add_routes(iVar1,obj.tx_audio_map,0xd6);
                if (iVar3 < 0) {
                    pcVar6 = "%s: Failed to add routes\n";
                }
                else {
                    iVar3 = snd_soc_dapm_new_widgets(*(arg1 + 0xe8));
                    if (iVar3 < 0) {
                        pcVar6 = "%s: Failed to add widgets\n";
                    }
                    else {
                        iVar3 = snd_soc_add_component_controls(arg1,obj.lpass_cdc_tx_macro_snd_controls,0x1c);
                        if (-1 < iVar3) {
                            snd_soc_dapm_ignore_suspend(iVar1,"TX_AIF1 Capture");
                            snd_soc_dapm_ignore_suspend(iVar1,"TX_AIF2 Capture");
                            snd_soc_dapm_ignore_suspend(iVar1,"TX_AIF3 Capture");
                            snd_soc_dapm_ignore_suspend(iVar1,"TX SWR_INPUT");
                            snd_soc_dapm_sync(iVar1);
                            iVar4 = 0;
                            cVar7 = '\0';
                            do {
                                iVar1 = iVar8 + iVar4;
                                *(iVar1 + 0x80) = iVar8;
                                *(iVar1 + 0x88) = cVar7;
                                *(iVar1 + 0x90) = 0xfffffffe0;
                                *(iVar1 + 0x98) = iVar1 + 0x98;
                                *(iVar1 + 0xa0) = iVar1 + 0x98;
                                *(iVar1 + 0xa8) =
                                     sym.lpass_cdc_tx_macro_tx_hpf_corner_freq_callback.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt
                                ;
                                init_timer_key(iVar1 + 0xc0,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                                cVar7 = cVar7 + '\x01';
                                iVar4 = iVar4 + 0x98;
                            } while (iVar4 != 0x4c0);
                            iVar3 = 0;
                            iVar4 = 0;
                            do {
                                iVar1 = iVar8 + iVar4;
                                *(iVar1 + 0x540) = iVar8;
                                *(iVar1 + 0x548) = iVar3;
                                *(iVar1 + 0x550) = 0xfffffffe0;
                                *(iVar1 + 0x558) = iVar1 + 0x558;
                                *(iVar1 + 0x560) = iVar1 + 0x558;
                                *(iVar1 + 0x568) =
                                     sym.lpass_cdc_tx_macro_mute_update_callback.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt
                                ;
                                init_timer_key(iVar1 + 0x580,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                                iVar4 = iVar4 + 0x98;
                                iVar3 = iVar3 + 1;
                            } while (iVar4 != 0x4c0);
                            *(iVar8 + 0xa00) = 0xfffffffe0;
                            *(iVar8 + 0xa08) = iVar8 + 0xa08;
                            *(iVar8 + 0xa10) = iVar8 + 0xa08;
                            *(iVar8 + 0xa18) = sym.tx_macro_hs_unmute_dwork.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt;
                            init_timer_key(iVar8 + 0xa30,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                            *(iVar8 + 0x78) = arg1;
                            snd_soc_component_update_bits(arg1,0x42c,0x3f,10);
                            return 0;
                        }
                        pcVar6 = "%s: Failed to add snd_ctls\n";
                    }
                }
            }
            _dev_err(iVar4,pcVar6,"lpass_cdc_tx_macro_init");
            return iVar3;
        }
        uVar5 = *(arg1 + 0x18);
        pcVar6 = "%s: priv is null for macro!\n";
    }
    _dev_err(uVar5,pcVar6,"lpass_cdc_tx_macro_init");
    return -0x16;
}


// ===== sym.lpass_cdc_tx_macro_deinit @ 0x0800db74 (size 124) =====

void sym.lpass_cdc_tx_macro_deinit(int64_t arg1)

{
    uint8_t uVar1;
    uint8_t uVar2;
    int iVar3;
    code *pcVar4;
    int iVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    ulong uVar8;
    uint64_t uVar9;
    int64_t iVar10;
    int64_t *arg3;
    ulong uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    int64_t iVar12;
    ulong *puVar13;
    ulong unaff_x30;
    uchar auVar14 [12];
    int64_t iStack_158;
    uchar auStack_150 [8];
    int64_t iStack_148;
    ulong ***pppuStack_140;
    code *pcStack_138;
    int64_t iStack_e8;
    uchar auStack_e0 [8];
    int64_t iStack_d8;
    uchar ***pppuStack_d0;
    code *pcStack_c8;
    uint64_t uStack_c0;
    int64_t iStack_a8;
    uchar auStack_a0 [8];
    int64_t iStack_98;
    uchar **ppuStack_90;
    code *pcStack_88;
    int64_t iStack_78;
    uint64_t uStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    int64_t iStack_28;
    uchar auStack_20 [8];
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_18 = *(iVar12 + 0x5e0);
    arg3 = &iStack_28;
    iStack_28 = 0;
    uVar7 = sym.lpass_cdc_tx_macro_get_data(arg1,auStack_20,arg3,0x80007c1);
    if ((uVar7 & 1) == 0) {
        uVar8 = 0xffffffea;
    }
    else {
        uVar8 = 0;
        *(iStack_28 + 0x78) = 0;
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_18) {
        return;
    }
    auVar14 = __stack_chk_fail(uVar8);
    *extraout_x18 = sym.lpass_cdc_tx_macro_event_handler;
    pcStack_58 = sym.lpass_cdc_tx_macro_event_handler;
    iVar12 = sp_el0;
    uVar7 = arg3 & 0xffffffff;
    iStack_68 = *(iVar12 + 0x5e0);
    iStack_78 = 0;
    uStack_70 = 0;
    puStack_60 = &stack0xfffffffffffffff0;
    uVar9 = sym.lpass_cdc_tx_macro_get_data(auVar14._0_8_,&uStack_70,&iStack_78,0x8001509);
    iVar12 = iStack_78;
    if ((uVar9 & 1) == 0) {
        uVar8 = 0xffffffea;
    }
    else {
        uVar8 = 0;
        switch(auVar14._8_4_ & 0xffff) {
        case 4:
            __trace_bprintk(0x800dc6c,*0x8010000,"lpass_cdc_tx_macro_event_handler");
            uVar7 = uStack_70;
            if ((((*(uStack_70 + 0x200) & 7) == 0) && (*(uStack_70 + 0x20c) == 2)) ||
               (iVar5 = lpass_cdc_runtime_suspend(uStack_70), iVar5 != 0)) {
                uVar8 = 0;
            }
            else {
                __pm_runtime_disable(uVar7,1);
                __pm_runtime_set_status(uVar7,2);
                pm_runtime_enable(uVar7);
                uVar8 = 0;
            }
            break;
        case 5:
            __trace_bprintk(0x800dcf4,*0x8010000,"lpass_cdc_tx_macro_event_handler");
            uVar8 = 0;
            break;
        case 7:
            lpass_cdc_rsc_clk_reset(uStack_70,0);
            uVar8 = 0;
            break;
        case 10:
            if (*(iStack_78 + 0xb2c) != '\0') {
                snd_soc_component_update_bits(auVar14._0_8_,0x42c,0x40,arg3 << 6);
            }
            if (arg3 == 0) {
                uVar8 = 0;
                *(iVar12 + 0xb2d) = 0;
            }
            else {
                uVar8 = 0;
                *(iVar12 + 0xb2d) = 1;
            }
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_68) {
        return;
    }
    iVar10 = __stack_chk_fail(uVar8);
    *extraout_x18_00 = sym.lpass_cdc_tx_macro_clk_div_get;
    pcStack_88 = sym.lpass_cdc_tx_macro_clk_div_get;
    iVar12 = sp_el0;
    iStack_98 = *(iVar12 + 0x5e0);
    iStack_a8 = 0;
    ppuStack_90 = &puStack_60;
    uVar9 = sym.lpass_cdc_tx_macro_get_data(iVar10,auStack_a0,&iStack_a8,0x8000fb6);
    if ((uVar9 & 1) == 0) {
        uVar9 = 0xffffffea;
    }
    else {
        uVar9 = *(iStack_a8 + 0xa88);
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_98) {
        return;
    }
    auVar14 = __stack_chk_fail(uVar9);
    *extraout_x18_01 = sym.__lpass_cdc_tx_macro_mclk_enable;
    pcStack_c8 = sym.__lpass_cdc_tx_macro_mclk_enable;
    iVar12 = sp_el0;
    iStack_d8 = *(iVar12 + 0x5e0);
    iStack_e8 = 0;
    pppuStack_d0 = &ppuStack_90;
    uStack_c0 = uVar7;
    uVar7 = sym.lpass_cdc_tx_macro_get_data(auVar14._0_8_,auStack_e0,&iStack_e8,0x8000aae);
    if ((uVar7 & 1) == 0) {
        uVar8 = 0xffffffea;
    }
    else {
        uVar8 = sym.lpass_cdc_tx_macro_mclk_enable(iStack_e8,auVar14._8_4_ & 1);
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_d8) {
        return;
    }
    iVar10 = __stack_chk_fail(uVar8);
    *extraout_x18_02 = sym.lpass_cdc_tx_macro_tx_hpf_corner_freq_callback;
    pcStack_138 = sym.lpass_cdc_tx_macro_tx_hpf_corner_freq_callback;
    iVar12 = sp_el0;
    iStack_148 = *(iVar12 + 0x5e0);
    puVar13 = *(iVar10 + -0x10);
    iStack_158 = 0;
    uVar1 = *(iVar10 + -8);
    uVar2 = *(iVar10 + -7);
    iVar12 = puVar13[0xf];
    iVar3 = uVar1 * 0x80;
    iVar5 = iVar3 + 0x404;
    iVar3 = iVar3 + 0x418;
    pppuStack_140 = &pppuStack_d0;
    uVar7 = sym.lpass_cdc_tx_macro_get_data(iVar12,auStack_150,&iStack_158,0x8000fec);
    if ((((uVar7 & 1) == 0) || (uVar7 = snd_soc_component_read(iVar12,uVar1 * 8 + 0x104), (uVar7 & 1) == 0)) ||
       (*(iStack_158 + 0xb50) != '\0')) {
        snd_soc_component_update_bits(iVar12,iVar5,0x60,uVar2 << 5);
        snd_soc_component_update_bits(iVar12,iVar3,2,2);
        usleep_range_state(1000,0x3f2,2);
        uVar8 = 2;
        uVar11 = 0;
    }
    else {
        uVar6 = snd_soc_component_read(iVar12,*(iVar10 + -8) * 8 + 0x100);
        lpass_cdc_clear_amic_tx_hold(*(iVar12 + 0x18),uVar6 & 0xf);
        snd_soc_component_update_bits(iVar12,iVar5,0x60,uVar2 << 5);
        snd_soc_component_update_bits(iVar12,iVar3,3,2);
        if (7 < *(iVar10 + -8)) goto code_r0x0800e0f4;
        switch(*(puVar13 + *(iVar10 + -8) * 4 + 0xb30)) {
        default:
            uVar8 = 0x7d;
            uVar11 = 0x82;
            break;
        case 1:
            uVar8 = 0x3e;
            uVar11 = 0x41;
            break;
        case 3:
            uVar8 = 0x1f;
            uVar11 = 0x20;
            break;
        case 4:
            uVar8 = 0x14;
            uVar11 = 0x15;
            break;
        case 5:
            uVar8 = 10;
            uVar11 = 0xb;
            break;
        case 6:
            uVar8 = 5;
            uVar11 = 6;
        }
        usleep_range_state(uVar8,uVar11,2);
        uVar8 = 3;
        uVar11 = 1;
    }
    snd_soc_component_update_bits(iVar12,iVar3,uVar8,uVar11);
    mutex_lock(puVar13 + 9);
    iVar5 = *(puVar13 + 0xb54) + -1;
    *(puVar13 + 0xb54) = iVar5;
    if (iVar5 == 0) {
        pm_relax(*puVar13);
        iVar5 = *(puVar13 + 0xb54);
    }
    if (iVar5 < 0) {
        *(puVar13 + 0xb54) = 0;
    }
    mutex_unlock(puVar13 + 9);
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_148) {
        return;
    }
    __stack_chk_fail();
code_r0x0800e0f4:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x800e0f8);
    (*pcVar4)();
}


// ===== sym.lpass_cdc_tx_macro_event_handler @ 0x0800dbf0 (size 436) =====

void sym.lpass_cdc_tx_macro_event_handler(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    uint8_t uVar2;
    int iVar3;
    code *pcVar4;
    int iVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    ulong uVar8;
    int64_t iVar9;
    ulong uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint64_t uVar11;
    int64_t iVar12;
    ulong *puVar13;
    ulong unaff_x30;
    uchar auVar14 [12];
    int64_t iStack_128;
    uchar auStack_120 [8];
    int64_t iStack_118;
    uchar *puStack_110;
    code *pcStack_108;
    int64_t iStack_b8;
    uchar auStack_b0 [8];
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    uint64_t uStack_90;
    int64_t iStack_78;
    uchar auStack_70 [8];
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    int64_t iStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    uVar11 = arg3 & 0xffffffff;
    iStack_38 = *(iVar12 + 0x5e0);
    iStack_48 = 0;
    uStack_40 = 0;
    uVar7 = sym.lpass_cdc_tx_macro_get_data(arg1,&stack0xffffffffffffffc0,&stack0xffffffffffffffb8,0x8001509);
    iVar12 = iStack_48;
    if ((uVar7 & 1) == 0) {
        uVar8 = 0xffffffea;
    }
    else {
        uVar8 = 0;
        uVar6 = (arg2 & 0xffff) - 4;
        if (uVar6 < 7) {
    //switch table (6 cases) at 0x8000738
            switch(*(uVar6 + 0x8000738) * 4 + 0x800dc6c) {
            case 0x800dc70:
                __trace_bprintk(0x800dc6c,*0x8010000,"lpass_cdc_tx_macro_event_handler");
                uVar11 = uStack_40;
                if ((((*(uStack_40 + 0x200) & 7) == 0) && (*(uStack_40 + 0x20c) == 2)) ||
                   (iVar5 = lpass_cdc_runtime_suspend(uStack_40), iVar5 != 0)) {
                    uVar8 = 0;
                }
                else {
                    __pm_runtime_disable(uVar11,1);
                    __pm_runtime_set_status(uVar11,2);
                    pm_runtime_enable(uVar11);
                    uVar8 = 0;
                }
                break;
            case 0x800dcf8:
                __trace_bprintk(0x800dcf4,*0x8010000,"lpass_cdc_tx_macro_event_handler");
                uVar8 = 0;
                break;
            case 0x800dd20:
                lpass_cdc_rsc_clk_reset(uStack_40,0);
                uVar8 = 0;
                break;
            case 0x800dd38:
                if (*(iStack_48 + 0xb2c) != '\0') {
                    snd_soc_component_update_bits(arg1,0x42c,0x40,arg3 << 6);
                }
                if (arg3 == 0) {
                    uVar8 = 0;
                    *(iVar12 + 0xb2d) = 0;
                }
                else {
                    uVar8 = 0;
                    *(iVar12 + 0xb2d) = 1;
                }
            }
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_38) {
        return;
    }
    iVar9 = __stack_chk_fail(uVar8);
    *extraout_x18 = sym.lpass_cdc_tx_macro_clk_div_get;
    pcStack_58 = sym.lpass_cdc_tx_macro_clk_div_get;
    iVar12 = sp_el0;
    iStack_68 = *(iVar12 + 0x5e0);
    iStack_78 = 0;
    puStack_60 = &stack0xffffffffffffffd0;
    uVar7 = sym.lpass_cdc_tx_macro_get_data(iVar9,&stack0xffffffffffffff90,&stack0xffffffffffffff88,0x8000fb6);
    if ((uVar7 & 1) == 0) {
        uVar7 = 0xffffffea;
    }
    else {
        uVar7 = *(iStack_78 + 0xa88);
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_68) {
        return;
    }
    auVar14 = __stack_chk_fail(uVar7);
    *extraout_x18_00 = sym.__lpass_cdc_tx_macro_mclk_enable;
    pcStack_98 = sym.__lpass_cdc_tx_macro_mclk_enable;
    iVar12 = sp_el0;
    iStack_a8 = *(iVar12 + 0x5e0);
    iStack_b8 = 0;
    puStack_a0 = &stack0xffffffffffffffa0;
    uStack_90 = uVar11;
    uVar11 = sym.lpass_cdc_tx_macro_get_data
                       (auVar14._0_8_,&stack0xffffffffffffff50,&stack0xffffffffffffff48,0x8000aae);
    if ((uVar11 & 1) == 0) {
        uVar8 = 0xffffffea;
    }
    else {
        uVar8 = sym.lpass_cdc_tx_macro_mclk_enable(iStack_b8,auVar14._8_4_ & 1);
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_a8) {
        return;
    }
    iVar9 = __stack_chk_fail(uVar8);
    *extraout_x18_01 = sym.lpass_cdc_tx_macro_tx_hpf_corner_freq_callback;
    pcStack_108 = sym.lpass_cdc_tx_macro_tx_hpf_corner_freq_callback;
    iVar12 = sp_el0;
    iStack_118 = *(iVar12 + 0x5e0);
    puVar13 = *(iVar9 + -0x10);
    iStack_128 = 0;
    uVar1 = *(iVar9 + -8);
    uVar2 = *(iVar9 + -7);
    iVar12 = puVar13[0xf];
    iVar3 = uVar1 * 0x80;
    iVar5 = iVar3 + 0x404;
    iVar3 = iVar3 + 0x418;
    puStack_110 = &stack0xffffffffffffff60;
    uVar11 = sym.lpass_cdc_tx_macro_get_data(iVar12,&stack0xfffffffffffffee0,&stack0xfffffffffffffed8,0x8000fec);
    if ((((uVar11 & 1) == 0) || (uVar11 = snd_soc_component_read(iVar12,uVar1 * 8 + 0x104), (uVar11 & 1) == 0)) ||
       (*(iStack_128 + 0xb50) != '\0')) {
        snd_soc_component_update_bits(iVar12,iVar5,0x60,uVar2 << 5);
        snd_soc_component_update_bits(iVar12,iVar3,2,2);
        usleep_range_state(1000,0x3f2,2);
        uVar8 = 2;
        uVar10 = 0;
    }
    else {
        uVar6 = snd_soc_component_read(iVar12,*(iVar9 + -8) * 8 + 0x100);
        lpass_cdc_clear_amic_tx_hold(*(iVar12 + 0x18),uVar6 & 0xf);
        snd_soc_component_update_bits(iVar12,iVar5,0x60,uVar2 << 5);
        snd_soc_component_update_bits(iVar12,iVar3,3,2);
        if (7 < *(iVar9 + -8)) goto code_r0x0800e0f4;
        switch(*(puVar13 + *(iVar9 + -8) * 4 + 0xb30)) {
        default:
            uVar8 = 0x7d;
            uVar10 = 0x82;
            break;
        case 1:
            uVar8 = 0x3e;
            uVar10 = 0x41;
            break;
        case 3:
            uVar8 = 0x1f;
            uVar10 = 0x20;
            break;
        case 4:
            uVar8 = 0x14;
            uVar10 = 0x15;
            break;
        case 5:
            uVar8 = 10;
            uVar10 = 0xb;
            break;
        case 6:
            uVar8 = 5;
            uVar10 = 6;
        }
        usleep_range_state(uVar8,uVar10,2);
        uVar8 = 3;
        uVar10 = 1;
    }
    snd_soc_component_update_bits(iVar12,iVar3,uVar8,uVar10);
    mutex_lock(puVar13 + 9);
    iVar5 = *(puVar13 + 0xb54) + -1;
    *(puVar13 + 0xb54) = iVar5;
    if (iVar5 == 0) {
        pm_relax(*puVar13);
        iVar5 = *(puVar13 + 0xb54);
    }
    if (iVar5 < 0) {
        *(puVar13 + 0xb54) = 0;
    }
    mutex_unlock(puVar13 + 9);
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_118) {
        return;
    }
    __stack_chk_fail();
code_r0x0800e0f4:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x800e0f8);
    (*pcVar4)();
}


// ===== sym.lpass_cdc_tx_macro_clk_div_get @ 0x0800dda4 (size 120) =====

void sym.lpass_cdc_tx_macro_clk_div_get(int64_t arg1)

{
    int iVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    int iVar4;
    code *pcVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    ulong uVar8;
    int64_t iVar9;
    ulong uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar11;
    ulong *puVar12;
    ulong unaff_x30;
    uchar auVar13 [12];
    int64_t iStack_d8;
    uchar auStack_d0 [8];
    int64_t iStack_c8;
    uchar **ppuStack_c0;
    code *pcStack_b8;
    int64_t iStack_68;
    uchar auStack_60 [8];
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    int64_t iStack_28;
    uchar auStack_20 [8];
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_18 = *(iVar11 + 0x5e0);
    iStack_28 = 0;
    uVar7 = sym.lpass_cdc_tx_macro_get_data(arg1,auStack_20,&iStack_28,0x8000fb6);
    if ((uVar7 & 1) == 0) {
        uVar7 = 0xffffffea;
    }
    else {
        uVar7 = *(iStack_28 + 0xa88);
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_18) {
        return;
    }
    auVar13 = __stack_chk_fail(uVar7);
    *extraout_x18 = sym.__lpass_cdc_tx_macro_mclk_enable;
    pcStack_48 = sym.__lpass_cdc_tx_macro_mclk_enable;
    iVar11 = sp_el0;
    iStack_58 = *(iVar11 + 0x5e0);
    iStack_68 = 0;
    puStack_50 = &stack0xfffffffffffffff0;
    uVar7 = sym.lpass_cdc_tx_macro_get_data(auVar13._0_8_,auStack_60,&iStack_68,0x8000aae);
    if ((uVar7 & 1) == 0) {
        uVar8 = 0xffffffea;
    }
    else {
        uVar8 = sym.lpass_cdc_tx_macro_mclk_enable(iStack_68,auVar13._8_4_ & 1);
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_58) {
        return;
    }
    iVar9 = __stack_chk_fail(uVar8);
    *extraout_x18_00 = sym.lpass_cdc_tx_macro_tx_hpf_corner_freq_callback;
    pcStack_b8 = sym.lpass_cdc_tx_macro_tx_hpf_corner_freq_callback;
    iVar11 = sp_el0;
    iStack_c8 = *(iVar11 + 0x5e0);
    puVar12 = *(iVar9 + -0x10);
    iStack_d8 = 0;
    uVar2 = *(iVar9 + -8);
    uVar3 = *(iVar9 + -7);
    iVar11 = puVar12[0xf];
    iVar4 = uVar2 * 0x80;
    iVar1 = iVar4 + 0x404;
    iVar4 = iVar4 + 0x418;
    ppuStack_c0 = &puStack_50;
    uVar7 = sym.lpass_cdc_tx_macro_get_data(iVar11,auStack_d0,&iStack_d8,0x8000fec);
    if ((((uVar7 & 1) == 0) || (uVar7 = snd_soc_component_read(iVar11,uVar2 * 8 + 0x104), (uVar7 & 1) == 0)) ||
       (*(iStack_d8 + 0xb50) != '\0')) {
        snd_soc_component_update_bits(iVar11,iVar1,0x60,uVar3 << 5);
        snd_soc_component_update_bits(iVar11,iVar4,2,2);
        usleep_range_state(1000,0x3f2,2);
        uVar8 = 2;
        uVar10 = 0;
    }
    else {
        uVar6 = snd_soc_component_read(iVar11,*(iVar9 + -8) * 8 + 0x100);
        lpass_cdc_clear_amic_tx_hold(*(iVar11 + 0x18),uVar6 & 0xf);
        snd_soc_component_update_bits(iVar11,iVar1,0x60,uVar3 << 5);
        snd_soc_component_update_bits(iVar11,iVar4,3,2);
        if (7 < *(iVar9 + -8)) goto code_r0x0800e0f4;
        switch(*(puVar12 + *(iVar9 + -8) * 4 + 0xb30)) {
        default:
            uVar8 = 0x7d;
            uVar10 = 0x82;
            break;
        case 1:
            uVar8 = 0x3e;
            uVar10 = 0x41;
            break;
        case 3:
            uVar8 = 0x1f;
            uVar10 = 0x20;
            break;
        case 4:
            uVar8 = 0x14;
            uVar10 = 0x15;
            break;
        case 5:
            uVar8 = 10;
            uVar10 = 0xb;
            break;
        case 6:
            uVar8 = 5;
            uVar10 = 6;
        }
        usleep_range_state(uVar8,uVar10,2);
        uVar8 = 3;
        uVar10 = 1;
    }
    snd_soc_component_update_bits(iVar11,iVar4,uVar8,uVar10);
    mutex_lock(puVar12 + 9);
    iVar1 = *(puVar12 + 0xb54) + -1;
    *(puVar12 + 0xb54) = iVar1;
    if (iVar1 == 0) {
        pm_relax(*puVar12);
        iVar1 = *(puVar12 + 0xb54);
    }
    if (iVar1 < 0) {
        *(puVar12 + 0xb54) = 0;
    }
    mutex_unlock(puVar12 + 9);
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_c8) {
        return;
    }
    __stack_chk_fail();
code_r0x0800e0f4:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x800e0f8);
    (*pcVar5)();
}


// ===== sym.__lpass_cdc_tx_macro_mclk_enable @ 0x0800de1c (size 136) =====

void sym.__lpass_cdc_tx_macro_mclk_enable(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    int iVar4;
    code *pcVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    ulong uVar8;
    int64_t iVar9;
    ulong uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar11;
    ulong *puVar12;
    ulong unaff_x30;
    int64_t iStack_a8;
    uchar auStack_a0 [8];
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    int64_t iStack_38;
    uchar auStack_30 [8];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_28 = *(iVar11 + 0x5e0);
    iStack_38 = 0;
    uVar7 = sym.lpass_cdc_tx_macro_get_data(arg1,auStack_30,&iStack_38,0x8000aae);
    if ((uVar7 & 1) == 0) {
        uVar8 = 0xffffffea;
    }
    else {
        uVar8 = sym.lpass_cdc_tx_macro_mclk_enable(iStack_38,arg2 & 1);
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_28) {
        return;
    }
    iVar9 = __stack_chk_fail(uVar8);
    *extraout_x18 = sym.lpass_cdc_tx_macro_tx_hpf_corner_freq_callback;
    pcStack_88 = sym.lpass_cdc_tx_macro_tx_hpf_corner_freq_callback;
    iVar11 = sp_el0;
    iStack_98 = *(iVar11 + 0x5e0);
    puVar12 = *(iVar9 + -0x10);
    iStack_a8 = 0;
    uVar2 = *(iVar9 + -8);
    uVar3 = *(iVar9 + -7);
    iVar11 = puVar12[0xf];
    iVar4 = uVar2 * 0x80;
    iVar1 = iVar4 + 0x404;
    iVar4 = iVar4 + 0x418;
    puStack_90 = &stack0xffffffffffffffe0;
    uVar7 = sym.lpass_cdc_tx_macro_get_data(iVar11,auStack_a0,&iStack_a8,0x8000fec);
    if ((((uVar7 & 1) == 0) || (uVar7 = snd_soc_component_read(iVar11,uVar2 * 8 + 0x104), (uVar7 & 1) == 0)) ||
       (*(iStack_a8 + 0xb50) != '\0')) {
        snd_soc_component_update_bits(iVar11,iVar1,0x60,uVar3 << 5);
        snd_soc_component_update_bits(iVar11,iVar4,2,2);
        usleep_range_state(1000,0x3f2,2);
        uVar8 = 2;
        uVar10 = 0;
    }
    else {
        uVar6 = snd_soc_component_read(iVar11,*(iVar9 + -8) * 8 + 0x100);
        lpass_cdc_clear_amic_tx_hold(*(iVar11 + 0x18),uVar6 & 0xf);
        snd_soc_component_update_bits(iVar11,iVar1,0x60,uVar3 << 5);
        snd_soc_component_update_bits(iVar11,iVar4,3,2);
        if (7 < *(iVar9 + -8)) goto code_r0x0800e0f4;
        switch(*(puVar12 + *(iVar9 + -8) * 4 + 0xb30)) {
        default:
            uVar8 = 0x7d;
            uVar10 = 0x82;
            break;
        case 1:
            uVar8 = 0x3e;
            uVar10 = 0x41;
            break;
        case 3:
            uVar8 = 0x1f;
            uVar10 = 0x20;
            break;
        case 4:
            uVar8 = 0x14;
            uVar10 = 0x15;
            break;
        case 5:
            uVar8 = 10;
            uVar10 = 0xb;
            break;
        case 6:
            uVar8 = 5;
            uVar10 = 6;
        }
        usleep_range_state(uVar8,uVar10,2);
        uVar8 = 3;
        uVar10 = 1;
    }
    snd_soc_component_update_bits(iVar11,iVar4,uVar8,uVar10);
    mutex_lock(puVar12 + 9);
    iVar1 = *(puVar12 + 0xb54) + -1;
    *(puVar12 + 0xb54) = iVar1;
    if (iVar1 == 0) {
        pm_relax(*puVar12);
        iVar1 = *(puVar12 + 0xb54);
    }
    if (iVar1 < 0) {
        *(puVar12 + 0xb54) = 0;
    }
    mutex_unlock(puVar12 + 9);
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_98) {
        return;
    }
    __stack_chk_fail();
code_r0x0800e0f4:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x800e0f8);
    (*pcVar5)();
}


// ===== sym.lpass_cdc_tx_macro_tx_hpf_corner_freq_callback @ 0x0800dea4 (size 596) =====

void sym.lpass_cdc_tx_macro_tx_hpf_corner_freq_callback(int64_t arg1)

{
    int iVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    int iVar4;
    code *pcVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    ulong uVar8;
    ulong uVar9;
    ulong *in_x18;
    int64_t iVar10;
    ulong *puVar11;
    ulong unaff_x30;
    int64_t iStack_68;
    uchar auStack_60 [8];
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_58 = *(iVar10 + 0x5e0);
    puVar11 = *(arg1 + -0x10);
    iStack_68 = 0;
    uVar2 = *(arg1 + -8);
    uVar3 = *(arg1 + -7);
    iVar10 = puVar11[0xf];
    iVar4 = uVar2 * 0x80;
    iVar1 = iVar4 + 0x404;
    iVar4 = iVar4 + 0x418;
    uVar7 = sym.lpass_cdc_tx_macro_get_data(iVar10,&stack0xffffffffffffffa0,&stack0xffffffffffffff98,0x8000fec);
    if ((((uVar7 & 1) == 0) || (uVar7 = snd_soc_component_read(iVar10,uVar2 * 8 + 0x104), (uVar7 & 1) == 0)) ||
       (*(iStack_68 + 0xb50) != '\0')) {
        snd_soc_component_update_bits(iVar10,iVar1,0x60,uVar3 << 5);
        snd_soc_component_update_bits(iVar10,iVar4,2,2);
        usleep_range_state(1000,0x3f2,2);
        uVar8 = 2;
        uVar9 = 0;
    }
    else {
        uVar6 = snd_soc_component_read(iVar10,*(arg1 + -8) * 8 + 0x100);
        lpass_cdc_clear_amic_tx_hold(*(iVar10 + 0x18),uVar6 & 0xf);
        snd_soc_component_update_bits(iVar10,iVar1,0x60,uVar3 << 5);
        snd_soc_component_update_bits(iVar10,iVar4,3,2);
        if (7 < *(arg1 + -8)) goto code_r0x0800e0f4;
        uVar6 = *(puVar11 + *(arg1 + -8) * 4 + 0xb30);
        if (uVar6 < 7) {
    //switch table (6 cases) at 0x800073f
            switch(*(uVar6 + 0x800073f) * 4 + 0x800e078) {
            case 0x800e07c:
                goto code_r0x0800e07c;
            case 0x800e08c:
                uVar8 = 0x3e;
                uVar9 = 0x41;
                break;
            case 0x800e09c:
                uVar8 = 0x1f;
                uVar9 = 0x20;
                break;
            case 0x800e0ac:
                uVar8 = 0x14;
                uVar9 = 0x15;
                break;
            case 0x800e0bc:
                uVar8 = 10;
                uVar9 = 0xb;
                break;
            case 0x800e0cc:
                uVar8 = 5;
                uVar9 = 6;
            }
        }
        else {
code_r0x0800e07c:
            uVar8 = 0x7d;
            uVar9 = 0x82;
        }
        usleep_range_state(uVar8,uVar9,2);
        uVar8 = 3;
        uVar9 = 1;
    }
    snd_soc_component_update_bits(iVar10,iVar4,uVar8,uVar9);
    mutex_lock(puVar11 + 9);
    iVar1 = *(puVar11 + 0xb54) + -1;
    *(puVar11 + 0xb54) = iVar1;
    if (iVar1 == 0) {
        pm_relax(*puVar11);
        iVar1 = *(puVar11 + 0xb54);
    }
    if (iVar1 < 0) {
        *(puVar11 + 0xb54) = 0;
    }
    mutex_unlock(puVar11 + 9);
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_58) {
        return;
    }
    __stack_chk_fail();
code_r0x0800e0f4:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x800e0f8);
    (*pcVar5)();
}


// ===== sym.lpass_cdc_tx_macro_mute_update_callback @ 0x0800e0f8 (size 136) =====

void sym.lpass_cdc_tx_macro_mute_update_callback(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong *puVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = *(arg1 + -0x10);
    snd_soc_component_update_bits(puVar2[0xf],(*(arg1 + -8) & 0xff) * 0x80 + 0x400,0x10,0);
    mutex_lock(puVar2 + 9);
    iVar1 = *(puVar2 + 0xb54) + -1;
    *(puVar2 + 0xb54) = iVar1;
    if (iVar1 == 0) {
        pm_relax(*puVar2);
        iVar1 = *(puVar2 + 0xb54);
    }
    if (iVar1 < 0) {
        *(puVar2 + 0xb54) = 0;
    }
    mutex_unlock(puVar2 + 9);
    return;
}


// ===== sym.tx_macro_hs_unmute_dwork @ 0x0800e180 (size 184) =====

void sym.tx_macro_hs_unmute_dwork(int64_t arg1)

{
    ushort uVar1;
    ulong *in_x18;
    uint64_t uVar2;
    ulong uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = 0;
    uVar3 = *(arg1 + -0x988);
    do {
        snd_soc_component_update_bits
                  (uVar3,*(obj.LPASS_CDC_TX_TX_VOL_CTL + uVar2 * 4),0xff,*(arg1 + 0x8a + uVar2 * 2));
        uVar1 = snd_soc_component_read(uVar3,*(obj.LPASS_CDC_TX_TX_VOL_CTL + uVar2 * 4));
        _dev_info(*(arg1 + -0xa00),"%s: the reg value of TX%d after unmute is: %#x \n","tx_macro_hs_unmute_dwork",
                  uVar2 & 0xffffffff,uVar1);
        uVar2 = uVar2 + 1;
    } while (uVar2 != 8);
    return;
}


// ===== sym.lpass_cdc_tx_macro_enable_micbias @ 0x0800e238 (size 16) =====

ulong sym.lpass_cdc_tx_macro_enable_micbias(int64_t arg1)

{
    return 0;
}


// ===== sym.lpass_cdc_tx_macro_enable_dec @ 0x0800e248 (size 1784) =====

void sym.lpass_cdc_tx_macro_enable_dec(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int iVar2;
    int iVar3;
    ulong *puVar4;
    uint8_t uVar5;
    int iVar6;
    ulong *puVar7;
    code *pcVar8;
    uint32_t uVar9;
    uint uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    ulong uVar13;
    ulong uVar14;
    int iVar15;
    ulong *in_x18;
    int64_t iVar16;
    char *pcVar17;
    int64_t iVar18;
    ulong unaff_x30;
    ulong *puStack_88;
    ulong uStack_80;
    int64_t iStack_78;
    uchar auStack_70 [8];
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar16 = sp_el0;
    iStack_68 = *(iVar16 + 0x5e0);
    puStack_88 = NULL;
    uStack_80 = 0;
    iVar16 = *(arg1 + 0x28) + -0xd0;
    uVar11 = sym.lpass_cdc_tx_macro_get_data(iVar16,&stack0xffffffffffffff80,&stack0xffffffffffffff78,0x8000e37);
    if ((uVar11 & 1) == 0) {
        uVar13 = 0xffffffea;
        goto code_r0x0800e8e0;
    }
    uVar5 = *(arg1 + 0x4c);
    uVar11 = uVar5;
    iVar6 = uVar5 * 0x80;
    iVar15 = iVar6 + 0x400;
    uVar9 = snd_soc_component_read(iVar16,iVar15);
    puVar7 = puStack_88;
    if (7 < uVar11) goto code_r0x0800e93c;
    iVar1 = iVar6 + 0x418;
    iVar2 = iVar6 + 0x404;
    iVar3 = uVar5 * 8 + 0x104;
    *(puStack_88 + uVar11 * 4 + 0xb30) = uVar9 & 0xf;
    iStack_78 = 0;
    uVar12 = sym.lpass_cdc_tx_macro_get_data(iVar16,&stack0xffffffffffffff90,&stack0xffffffffffffff88,0x8000fec);
    if ((((uVar12 & 1) == 0) || (uVar12 = snd_soc_component_read(iVar16,iVar3), (uVar12 & 1) == 0)) ||
       (*(iStack_78 + 0xb50) != '\0')) {
        iVar18 = *(arg1 + 0x28) + -0xd0;
        uVar12 = snd_soc_component_read(iVar18,uVar5 * 8 + 0x100);
        uVar13 = 0;
        uVar9 = arg2 - 1;
        if (uVar9 < 8) {
            uVar14 = 1;
    //switch table (7 cases) at 0x8000746
            switch(*(uVar9 * 2 + 0x8000746) * 4 + 0x800e370) {
            case 0x800e374:
                uVar14 = 0;
            case 0x800e37c:
                lpass_cdc_dmic_clk_enable(iVar18,((uVar12 & 0xffffffff) >> 4) + -1,0,uVar14);
                break;
            case 0x800e3f8:
                goto code_r0x0800e3f8;
            case 0x800e6b4:
                goto code_r0x0800e6b4;
            default:
                goto code_r0x0800e8e0;
            }
            goto code_r0x0800e390;
        }
    }
    else {
code_r0x0800e390:
        uVar13 = 0;
        uVar9 = arg2 - 1;
        if (uVar9 < 8) {
    //switch table (7 cases) at 0x8000756
            switch(*(uVar9 * 2 + 0x8000756) * 4 + 0x800e3b8) {
            case 0x800e3bc:
                snd_soc_component_update_bits(iVar16,iVar2,6,*(puVar7 + uVar11 * 4 + 0xb08) << 1);
                uVar13 = 0x10;
                uVar14 = 0x10;
code_r0x0800e8d4:
                snd_soc_component_update_bits(iVar16,iVar15,uVar13,uVar14);
                break;
            case 0x800e3f8:
code_r0x0800e3f8:
                snd_soc_component_update_bits(iVar16,iVar15,0x20,0x20);
                iStack_78 = 0;
                uVar12 = sym.lpass_cdc_tx_macro_get_data
                                   (iVar16,&stack0xffffffffffffff90,&stack0xffffffffffffff88,0x8000fec);
                if ((((uVar12 & 1) == 0) || (uVar12 = snd_soc_component_read(iVar16,iVar3), (uVar12 & 1) == 0)) ||
                   (*(iStack_78 + 0xb50) != '\0')) {
                    snd_soc_component_update_bits(iVar16,iVar1,1,0);
                    usleep_range_state(1000,0x3f2,2);
                }
                uVar9 = snd_soc_component_read(iVar16,iVar2);
                uVar9 = uVar9 >> 5 & 3;
                pcVar17 = puVar7 + uVar11 * 0x98 + 0x89;
                *pcVar17 = uVar9;
                if (uVar9 != 2) {
                    snd_soc_component_update_bits(iVar16,iVar2,0x60,0x40);
                }
                iStack_78 = 0;
                uVar12 = sym.lpass_cdc_tx_macro_get_data
                                   (iVar16,&stack0xffffffffffffff90,&stack0xffffffffffffff88,0x8000fec);
                if ((((uVar12 & 1) == 0) || (uVar12 = snd_soc_component_read(iVar16,iVar3), (uVar12 & 1) == 0)) ||
                   (*(iStack_78 + 0xb50) != '\0')) {
                    iVar15 = 0x28;
                }
                else {
                    iVar15 = 0x82;
                }
                if (_segment.ehdr < iVar15) {
                    _segment.ehdr = iVar15;
                }
                puVar4 = puVar7 + 9;
                mutex_lock(puVar4);
                iVar15 = *(puVar7 + 0xb54);
                *(puVar7 + 0xb54) = iVar15 + 1;
                if (iVar15 == 0) {
                    pm_stay_awake(*puVar7);
                }
                mutex_unlock(puVar4);
                uVar13 = _snd_soc_info_volsw;
                uVar14 = __msecs_to_jiffies(_segment.ehdr);
                queue_delayed_work_on(0x20,uVar13,puVar7 + uVar11 * 0x13 + 0xaa,uVar14);
                if (*pcVar17 != '\x02') {
                    mutex_lock(puVar4);
                    iVar15 = *(puVar7 + 0xb54);
                    *(puVar7 + 0xb54) = iVar15 + 1;
                    if (iVar15 == 0) {
                        pm_stay_awake(*puVar7);
                    }
                    mutex_unlock(puVar4);
                    queue_delayed_work_on(0x20,_snd_soc_info_volsw,puVar7 + uVar11 * 0x13 + 0x12,0x4b);
                    snd_soc_component_update_bits(iVar16,iVar1,3,2);
                    iStack_78 = 0;
                    uVar11 = sym.lpass_cdc_tx_macro_get_data
                                       (iVar16,&stack0xffffffffffffff90,&stack0xffffffffffffff88,0x8000fec);
                    if ((((uVar11 & 1) == 0) || (uVar11 = snd_soc_component_read(iVar16,iVar3), (uVar11 & 1) == 0)) ||
                       (*(iStack_78 + 0xb50) != '\0')) {
                        snd_soc_component_update_bits(iVar16,iVar1,3,0);
                    }
                    snd_soc_component_update_bits(iVar16,iVar1,3,1);
                    usleep_range_state(6000,0x177a,2);
                }
                uVar10 = snd_soc_component_read(iVar16,iVar6 + 0x40c);
                snd_soc_component_write(iVar16,iVar6 + 0x40c,uVar10);
                if (*(puVar7 + 0xb04) != '\0') {
                    snd_soc_component_update_bits(iVar16,0x30dc,0xf,*(puVar7 + 0x165));
                    snd_soc_component_update_bits(iVar16,iVar2,1,1);
                    *(puVar7 + 0xb2c) = 1;
                    if (*(puVar7 + 0xb2d) != '\0') {
                        iVar15 = 0x42c;
                        uVar13 = 0x40;
                        uVar14 = 0x40;
                        goto code_r0x0800e8d4;
                    }
                }
                break;
            case 0x800e6b4:
code_r0x0800e6b4:
                uVar5 = *(puVar7 + uVar11 * 0x98 + 0x89);
                snd_soc_component_update_bits(iVar16,iVar15,0x10,0x10);
                uVar12 = cancel_delayed_work_sync(puVar7 + uVar11 * 0x13 + 0x12);
                if (((uVar12 & 1) != 0) && (uVar5 != 2)) {
                    snd_soc_component_update_bits(iVar16,iVar2,0x60,uVar5 << 5);
                    iStack_78 = 0;
                    uVar12 = sym.lpass_cdc_tx_macro_get_data
                                       (iVar16,&stack0xffffffffffffff90,&stack0xffffffffffffff88,0x8000fec);
                    if (((uVar12 & 1) == 0) ||
                       ((uVar12 = snd_soc_component_read(iVar16,iVar3), (uVar12 & 1) == 0 ||
                        (*(iStack_78 + 0xb50) != '\0')))) {
                        uVar13 = 3;
                    }
                    else {
                        uVar13 = 2;
                    }
                    snd_soc_component_update_bits(iVar16,iVar1,3,uVar13);
                    usleep_range_state(1000,0x3f2,2);
                    snd_soc_component_update_bits(iVar16,iVar1,3,1);
                }
                puVar4 = puVar7 + 9;
                mutex_lock(puVar4);
                iVar15 = *(puVar7 + 0xb54) + -1;
                *(puVar7 + 0xb54) = iVar15;
                if (iVar15 == 0) {
                    pm_relax(*puVar7);
                    iVar15 = *(puVar7 + 0xb54);
                }
                if (iVar15 < 0) {
                    *(puVar7 + 0xb54) = 0;
                }
                mutex_unlock(puVar4);
                cancel_delayed_work_sync(puVar7 + uVar11 * 0x13 + 0xaa);
                mutex_lock(puVar4);
                iVar15 = *(puVar7 + 0xb54) + -1;
                *(puVar7 + 0xb54) = iVar15;
                if (iVar15 == 0) {
                    pm_relax(*puVar7);
                    iVar15 = *(puVar7 + 0xb54);
                }
                if (iVar15 < 0) {
                    *(puVar7 + 0xb54) = 0;
                }
                mutex_unlock(puVar4);
                uVar11 = snd_soc_component_read(iVar16,iVar3);
                if ((uVar11 & 1) != 0) {
                    iVar15 = 0x88;
                    uVar13 = 1;
code_r0x0800e8d0:
                    uVar14 = 0;
                    goto code_r0x0800e8d4;
                }
                break;
            case 0x800e818:
                snd_soc_component_update_bits(iVar16,iVar15,0x20,0);
                snd_soc_component_update_bits(iVar16,iVar15,0x40,0x40);
                snd_soc_component_update_bits(iVar16,iVar15,0x40,0);
                snd_soc_component_update_bits(iVar16,iVar2,6,0);
                snd_soc_component_update_bits(iVar16,iVar15,0x10,0);
                snd_soc_component_update_bits(iVar16,iVar15,0xf,4);
                if (*(puVar7 + 0xb04) != '\0') {
                    snd_soc_component_update_bits(iVar16,iVar2,1,0);
                    snd_soc_component_update_bits(iVar16,0x42c,0x40,0);
                    iVar15 = 0x30dc;
                    uVar13 = 0xf;
                    *(puVar7 + 0xb2c) = 0;
                    goto code_r0x0800e8d0;
                }
                break;
            default:
                goto code_r0x0800e8e0;
            }
            uVar13 = 0;
        }
    }
code_r0x0800e8e0:
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_68) {
        return;
    }
    __stack_chk_fail(uVar13);
code_r0x0800e93c:
    //WARNING: Does not return
    pcVar8 = SoftwareBreakpoint(0x5512,0x800e940);
    (*pcVar8)();
}


// ===== sym.lpass_cdc_tx_macro_mclk_event @ 0x0800e940 (size 276) =====

void sym.lpass_cdc_tx_macro_mclk_event(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint32_t uVar1;
    uint8_t uVar2;
    ulong *puVar3;
    code *pcVar4;
    int iVar5;
    uint64_t uVar6;
    ulong uVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar9 [16];
    int64_t iStack_88;
    uchar auStack_80 [8];
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    ulong *puStack_38;
    uchar auStack_30 [8];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_28 = *(iVar8 + 0x5e0);
    puStack_38 = NULL;
    uVar6 = sym.lpass_cdc_tx_macro_get_data(*(arg1 + 0x28) + -0xd0,auStack_30,&puStack_38,0x8000bed);
    puVar3 = puStack_38;
    if ((uVar6 & 1) == 0) {
code_r0x0800e9ec:
        uVar7 = 0xffffffea;
    }
    else if (arg2 == 8) {
        if (*(puStack_38 + 0x14) == '\0') {
            uVar7 = 0;
        }
        else {
            uVar7 = sym.lpass_cdc_tx_macro_mclk_enable(puStack_38,0);
        }
    }
    else {
        if (arg2 != 1) {
            iVar5 = ___ratelimit(obj.lpass_cdc_tx_macro_mclk_event._rs,"lpass_cdc_tx_macro_mclk_event");
            if (iVar5 != 0) {
                _dev_err(*puStack_38,"%s: invalid DAPM event %d\n","lpass_cdc_tx_macro_mclk_event",arg2 & 0xffffffff)
                ;
            }
            goto code_r0x0800e9ec;
        }
        uVar7 = sym.lpass_cdc_tx_macro_mclk_enable(puStack_38,1);
        if (uVar7 == 0) {
            *(puVar3 + 0x14) = 1;
        }
        else {
            *(puVar3 + 0x14) = 0;
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_28) {
        return;
    }
    auVar9 = __stack_chk_fail(uVar7);
    *extraout_x18 = sym.lpass_cdc_tx_macro_tx_mixer_get;
    pcStack_68 = sym.lpass_cdc_tx_macro_tx_mixer_get;
    iVar8 = sp_el0;
    iStack_78 = *(iVar8 + 0x5e0);
    puStack_70 = &stack0xffffffffffffffe0;
    iVar8 = snd_soc_dapm_kcontrol_widget();
    uVar2 = *(iVar8 + 0x4c);
    uVar1 = *(*(auVar9._0_8_ + 0x78) + 0x18);
    iStack_88 = 0;
    uVar6 = sym.lpass_cdc_tx_macro_get_data(*(iVar8 + 0x28) + -0xd0,auStack_80,&iStack_88,0x80012c7);
    if ((uVar6 & 1) == 0) {
        uVar7 = 0xffffffea;
    }
    else {
        if (4 < uVar2) goto code_r0x0800eb24;
        uVar7 = 0;
        *(auVar9._8_8_ + 0x48) = *(iStack_88 + uVar2 * 8 + (uVar1 >> 3 & 0x1ffffff8) + 0xaa0) >> (uVar1 & 0x3f) & 1;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_78) {
        return;
    }
    __stack_chk_fail(uVar7);
code_r0x0800eb24:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x800eb28);
    (*pcVar4)();
}


// ===== sym.lpass_cdc_tx_macro_tx_mixer_get @ 0x0800ea54 (size 212) =====

void sym.lpass_cdc_tx_macro_tx_mixer_get(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint8_t uVar2;
    code *pcVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ulong uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    int64_t iStack_48;
    uchar auStack_40 [8];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    iVar4 = snd_soc_dapm_kcontrol_widget();
    uVar2 = *(iVar4 + 0x4c);
    uVar1 = *(*(arg1 + 0x78) + 0x18);
    iStack_48 = 0;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(*(iVar4 + 0x28) + -0xd0,auStack_40,&iStack_48,0x80012c7);
    if ((uVar5 & 1) == 0) {
        uVar6 = 0xffffffea;
    }
    else {
        if (4 < uVar2) goto code_r0x0800eb24;
        uVar6 = 0;
        *(arg2 + 0x48) = *(iStack_48 + uVar2 * 8 + (uVar1 >> 3 & 0x1ffffff8) + 0xaa0) >> (uVar1 & 0x3f) & 1;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(uVar6);
code_r0x0800eb24:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x800eb28);
    (*pcVar3)();
}


// ===== sym.lpass_cdc_tx_macro_tx_mixer_put @ 0x0800eb28 (size 496) =====

void sym.lpass_cdc_tx_macro_tx_mixer_put(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t *puVar2;
    uint32_t uVar3;
    int iVar4;
    uint8_t uVar5;
    char cVar6;
    bool bVar7;
    code *pcVar8;
    int64_t iVar9;
    uint64_t uVar10;
    ulong uVar11;
    char *pcVar12;
    int64_t iVar13;
    ulong *in_x18;
    uint64_t uVar14;
    uint64_t uVar15;
    ulong unaff_x30;
    int64_t iStack_58;
    uchar auStack_50 [8];
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_48 = *(iVar9 + 0x5e0);
    iVar9 = snd_soc_dapm_kcontrol_widget();
    iVar13 = *(iVar9 + 0x28);
    uVar5 = *(iVar9 + 0x4c);
    uVar14 = uVar5;
    uVar3 = *(*(arg1 + 0x78) + 0x18);
    uVar15 = uVar3;
    iStack_58 = 0;
    iVar4 = *(arg2 + 0x48);
    uVar10 = sym.lpass_cdc_tx_macro_get_data(iVar13 + -0xd0,auStack_50,&iStack_58,0x80007fb);
    if ((uVar10 & 1) == 0) {
        uVar11 = 0xffffffea;
    }
    else {
        if (iVar4 == 0) {
            if (4 < uVar5) goto code_r0x0800eccc;
            iVar1 = iStack_58 + uVar14 * 8;
            uVar10 = uVar3 >> 3 & 0x1ffffff8;
            if ((*(iVar1 + 0xaa0 + uVar10) >> (uVar15 & 0x3f) & 1) == 0) {
                uVar11 = *(iVar13 + -0xb8);
                pcVar12 = "%s: channel is already disabled, dec_id = %d, dai_id = %d\n";
                goto code_r0x0800ecb0;
            }
            puVar2 = iVar1 + 0xaa0 + uVar10;
            *(iVar1 + 0xac0) = *(iVar1 + 0xac0) + -1;
            Hint_Prefetch(puVar2,2,0,1);
            do {
                cVar6 = '\x01';
                bVar7 = ExclusiveMonitorPass(puVar2,0x10);
                if (bVar7) {
                    *puVar2 = *puVar2 & (1L << (uVar15 & 0x3f) ^ 0xffffffffffffffffU);
                    cVar6 = ExclusiveMonitorsStatus();
                }
            } while (cVar6 != '\0');
        }
        else {
            if (4 < uVar5) goto code_r0x0800eccc;
            uVar10 = uVar3 >> 3 & 0x1ffffff8;
            iVar1 = iStack_58 + uVar14 * 8 + 0xaa0;
            if ((*(iVar1 + uVar10) >> (uVar15 & 0x3f) & 1) == 0) {
                puVar2 = iVar1 + uVar10;
                Hint_Prefetch(puVar2,2,0,1);
                do {
                    cVar6 = '\x01';
                    bVar7 = ExclusiveMonitorPass(puVar2,0x10);
                    if (bVar7) {
                        *puVar2 = *puVar2 | 1L << (uVar15 & 0x3f);
                        cVar6 = ExclusiveMonitorsStatus();
                    }
                } while (cVar6 != '\0');
                iVar13 = iStack_58 + uVar14 * 8;
                *(iVar13 + 0xac0) = *(iVar13 + 0xac0) + 1;
            }
            else {
                uVar11 = *(iVar13 + -0xb8);
                pcVar12 = "%s: channel is already enabled, dec_id = %d, dai_id = %d\n";
code_r0x0800ecb0:
                _dev_err(uVar11,pcVar12,"lpass_cdc_tx_macro_tx_mixer_put",uVar15,uVar14);
            }
        }
        snd_soc_dapm_mixer_update_power(*(iVar9 + 0x28),arg1,iVar4,0);
        uVar11 = 0;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_48) {
        return;
    }
    __stack_chk_fail(uVar11);
code_r0x0800eccc:
    //WARNING: Does not return
    pcVar8 = SoftwareBreakpoint(0x5512,0x800ecd0);
    (*pcVar8)();
}


// ===== sym.lpass_cdc_tx_macro_get_data @ 0x0800ed18 (size 232) =====

ulong sym.lpass_cdc_tx_macro_get_data(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    ulong uVar2;
    char *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = lpass_cdc_get_device_ptr(*(arg1 + 0x18),0);
    *arg2 = iVar1;
    if (iVar1 == 0) {
        uVar2 = ___ratelimit(obj.lpass_cdc_tx_macro_get_data._rs,"lpass_cdc_tx_macro_get_data");
        if (uVar2 == 0) {
            return uVar2;
        }
        pcVar3 = "%s: null device for macro!\n";
    }
    else {
        iVar1 = *(iVar1 + 0x98);
        *arg3 = iVar1;
        if (iVar1 == 0) {
            uVar2 = ___ratelimit(obj.lpass_cdc_tx_macro_get_data._rs.80,"lpass_cdc_tx_macro_get_data");
            if (uVar2 == 0) {
                return uVar2;
            }
            pcVar3 = "%s: priv is null for macro!\n";
        }
        else {
            if (*(iVar1 + 0x78) != 0) {
                return 1;
            }
            uVar2 = ___ratelimit(obj.lpass_cdc_tx_macro_get_data._rs.81,"lpass_cdc_tx_macro_get_data");
            if (uVar2 == 0) {
                return uVar2;
            }
            pcVar3 = "%s: tx_priv->component not initialized!\n";
        }
    }
    _dev_err(*(arg1 + 0x18),pcVar3,arg4);
    return 0;
}


// ===== sym.lpass_cdc_tx_macro_put_dec_enum @ 0x0800ee00 (size 456) =====

uint64_t sym.lpass_cdc_tx_macro_put_dec_enum(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ulong uVar6;
    int64_t *piVar7;
    int *piVar8;
    ulong in_x7;
    int64_t iVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t arg1_00;
    int *piVar10;
    ulong uVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    uchar *puVar13;
    code *pcVar14;
    int64_t iStack_58;
    uchar auStack_50 [8];
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    puVar13 = &stack0xffffffffffffffc0;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    iVar4 = snd_soc_dapm_kcontrol_widget();
    iVar9 = *(iVar4 + 0x28);
    arg1_00 = iVar9 + -0xd0;
    piVar10 = *(arg1 + 0x78);
    iStack_58 = 0;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(arg1_00,auStack_50,&iStack_58,0x800081b);
    if (((uVar5 & 1) != 0) && (uVar2 = *(arg2 + 0x48), uVar2 <= piVar10[2] - 1U)) {
        uVar1 = *piVar10 - 0x100U >> 3;
        if ((uVar1 | *piVar10 << 0x1d) < 8) {
            uVar11 = *(iVar4 + 8);
            piVar10 = uVar1 * 0x80 + 0x404;
            uVar6 = strlen(uVar11);
            iVar9 = strnstr(uVar11,"SMIC",uVar6);
            iVar4 = iStack_58;
            piVar8 = piVar10;
            if (iVar9 == 0) {
                if (uVar2 != 0) {
                    uVar6 = 0x80;
                    iVar4 = 0x80;
                    goto code_r0x0800ef8c;
                }
            }
            else if (uVar2 != 0) {
                if (*(iStack_58 + 0xb50) == '\0') {
                    uVar6 = 0x80;
                    iVar4 = 0;
                }
                else {
                    snd_soc_component_update_bits(arg1_00,piVar10,0x80,0x80);
                    snd_soc_component_update_bits(arg1_00,0x3094,0x80,0);
                    uVar6 = 0xe;
                    iVar4 = *(iVar4 + 0xa88) << 1;
                    piVar8 = uVar2 * 2 + 0xc6 & 0xfffc;
                }
code_r0x0800ef8c:
                snd_soc_component_update_bits(arg1_00,piVar8,uVar6,iVar4);
            }
            uVar5 = snd_soc_dapm_put_enum_double(arg1,arg2);
            goto code_r0x0800ef30;
        }
        iVar3 = ___ratelimit(obj.lpass_cdc_tx_macro_put_dec_enum._rs,"lpass_cdc_tx_macro_put_dec_enum");
        if (iVar3 != 0) {
            _dev_err(*(iVar9 + -0xb8),"%s: e->reg: 0x%x not expected\n","lpass_cdc_tx_macro_put_dec_enum",*piVar10);
            uVar5 = 0xffffffea;
            goto code_r0x0800ef30;
        }
    }
    uVar5 = 0xffffffea;
code_r0x0800ef30:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return uVar5;
    }
    auVar12 = __stack_chk_fail(uVar5);
    piVar7 = auVar12._0_8_;
    *extraout_x18 = sym.lpass_cdc_tx_macro_mclk_enable;
    pcVar14 = sym.lpass_cdc_tx_macro_mclk_enable;
    iVar4 = dev_get_regmap(*(*piVar7 + 0x60),0);
    if (iVar4 == 0) {
        iVar3 = ___ratelimit(obj.lpass_cdc_tx_macro_mclk_enable._rs,"lpass_cdc_tx_macro_mclk_enable");
        if (iVar3 == 0) {
            uVar5 = 0xffffffea;
        }
        else {
            _dev_err(*piVar7,"%s: regmap is NULL\n","lpass_cdc_tx_macro_mclk_enable");
            uVar5 = 0xffffffea;
        }
    }
    else {
        mutex_lock(piVar7 + 3);
        if ((auVar12._8_8_ & 1) == 0) {
            if (piVar7[2] < 1) {
                iVar3 = ___ratelimit(obj.lpass_cdc_tx_macro_mclk_enable._rs.156,"lpass_cdc_tx_macro_mclk_enable");
                if (iVar3 != 0) {
                    _dev_err(*piVar7,"%s: clock already disabled\n","lpass_cdc_tx_macro_mclk_enable");
                }
                uVar5 = 0;
                *(piVar7 + 2) = 0;
            }
            else {
                iVar3 = piVar7[2] + -1;
                *(piVar7 + 2) = iVar3;
                if (iVar3 == 0) {
                    regmap_update_bits_base
                              (iVar4,4,1,0,0,0,0,in_x7,puVar13,pcVar14,piVar10,arg1_00,arg1,arg2);
                    regmap_update_bits_base(iVar4,0,1,0,0,0,0);
                }
                lpass_cdc_clk_rsc_fs_gen_request(*piVar7,0);
                lpass_cdc_clk_rsc_request_clock(*piVar7,0,0,0);
                uVar5 = 0;
            }
        }
        else {
            uVar2 = lpass_cdc_clk_rsc_request_clock(*piVar7,0,0,1);
            uVar5 = uVar2;
            if (uVar2 < 0) {
                iVar3 = ___ratelimit(obj.lpass_cdc_tx_macro_mclk_enable._rs.154,"lpass_cdc_tx_macro_mclk_enable");
                if (iVar3 != 0) {
                    _dev_err(*piVar7,"%s: request clock enable failed\n","lpass_cdc_tx_macro_mclk_enable");
                }
            }
            else {
                lpass_cdc_clk_rsc_fs_gen_request(*piVar7,1);
                regcache_mark_dirty(iVar4);
                regcache_sync_region(iVar4,0,0x7a8);
                iVar3 = piVar7[2];
                if (iVar3 == 0) {
                    regmap_update_bits_base(iVar4,0,1,1,0,0,0);
                    regmap_update_bits_base(iVar4,4,1,1,0,0,0);
                    iVar3 = piVar7[2];
                }
                *(piVar7 + 2) = iVar3 + 1;
            }
        }
        mutex_unlock(piVar7 + 3);
    }
    return uVar5;
}


// ===== sym.lpass_cdc_tx_macro_mclk_enable @ 0x0800efc8 (size 564) =====

int sym.lpass_cdc_tx_macro_mclk_enable(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = dev_get_regmap(*(*arg1 + 0x60),0);
    if (iVar3 == 0) {
        iVar1 = ___ratelimit(obj.lpass_cdc_tx_macro_mclk_enable._rs,"lpass_cdc_tx_macro_mclk_enable");
        if (iVar1 == 0) {
            iVar1 = -0x16;
        }
        else {
            _dev_err(*arg1,"%s: regmap is NULL\n","lpass_cdc_tx_macro_mclk_enable");
            iVar1 = -0x16;
        }
    }
    else {
        mutex_lock(arg1 + 0x18);
        if ((arg2 & 1U) == 0) {
            if (*(arg1 + 0x10) < 1) {
                iVar1 = ___ratelimit(obj.lpass_cdc_tx_macro_mclk_enable._rs.156,"lpass_cdc_tx_macro_mclk_enable");
                if (iVar1 != 0) {
                    _dev_err(*arg1,"%s: clock already disabled\n","lpass_cdc_tx_macro_mclk_enable");
                }
                iVar1 = 0;
                *(arg1 + 0x10) = 0;
            }
            else {
                iVar1 = *(arg1 + 0x10) + -1;
                *(arg1 + 0x10) = iVar1;
                if (iVar1 == 0) {
                    regmap_update_bits_base(iVar3,4,1,0,0,0,0);
                    regmap_update_bits_base(iVar3,0,1,0,0,0,0);
                }
                lpass_cdc_clk_rsc_fs_gen_request(*arg1,0);
                lpass_cdc_clk_rsc_request_clock(*arg1,0,0,0);
                iVar1 = 0;
            }
        }
        else {
            iVar1 = lpass_cdc_clk_rsc_request_clock(*arg1,0,0,1);
            if (iVar1 < 0) {
                iVar2 = ___ratelimit(obj.lpass_cdc_tx_macro_mclk_enable._rs.154,"lpass_cdc_tx_macro_mclk_enable");
                if (iVar2 != 0) {
                    _dev_err(*arg1,"%s: request clock enable failed\n","lpass_cdc_tx_macro_mclk_enable");
                }
            }
            else {
                lpass_cdc_clk_rsc_fs_gen_request(*arg1,1);
                regcache_mark_dirty(iVar3);
                regcache_sync_region(iVar3,0,0x7a8);
                iVar2 = *(arg1 + 0x10);
                if (iVar2 == 0) {
                    regmap_update_bits_base(iVar3,0,1,1,0,0,0);
                    regmap_update_bits_base(iVar3,4,1,1,0,0,0);
                    iVar2 = *(arg1 + 0x10);
                }
                *(arg1 + 0x10) = iVar2 + 1;
            }
        }
        mutex_unlock(arg1 + 0x18);
    }
    return iVar1;
}


// ===== sym.lpass_cdc_tx_macro_dec_mode_get @ 0x0800f1fc (size 188) =====

void sym.lpass_cdc_tx_macro_dec_mode_get(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    code *pcVar2;
    uint64_t uVar3;
    ulong uVar4;
    ulong noname_0;
    ulong *in_x18;
    ulong unaff_x30;
    uint32_t uStack_3c;
    uchar auStack_38 [8];
    int64_t iStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    iStack_30 = 0;
    uStack_3c = 0;
    uVar3 = sym.lpass_cdc_tx_macro_get_data(*(arg1 + 0x80),auStack_38,&iStack_30,0x800140e);
    if ((uVar3 & 1) == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        uVar4 = sym.lpass_cdc_tx_macro_path_get(noname_0,&uStack_3c);
        if (uVar4 == 0) {
            if (7 < uStack_3c) goto code_r0x0800f2b4;
            uVar4 = 0;
            *(arg2 + 0x48) = *(iStack_30 + uStack_3c * 4 + 0xb08);
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return;
    }
    __stack_chk_fail(uVar4);
code_r0x0800f2b4:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x800f2b8);
    (*pcVar2)();
}


// ===== sym.lpass_cdc_tx_macro_dec_mode_put @ 0x0800f2b8 (size 184) =====

void sym.lpass_cdc_tx_macro_dec_mode_put(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    int64_t iVar2;
    code *pcVar3;
    uint64_t uVar4;
    ulong uVar5;
    ulong noname_0;
    ulong *in_x18;
    ulong unaff_x30;
    uint32_t uStack_3c;
    uchar auStack_38 [8];
    int64_t iStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    iStack_30 = 0;
    uVar1 = *(arg2 + 0x48);
    uStack_3c = 0;
    uVar4 = sym.lpass_cdc_tx_macro_get_data(*(arg1 + 0x80),auStack_38,&iStack_30,0x8000e55);
    if ((uVar4 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar5 = sym.lpass_cdc_tx_macro_path_get(noname_0,&uStack_3c);
        if (uVar5 == 0) {
            if (7 < uStack_3c) goto code_r0x0800f36c;
            uVar5 = 0;
            *(iStack_30 + uStack_3c * 4 + 0xb08) = uVar1;
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return;
    }
    __stack_chk_fail(uVar5);
code_r0x0800f36c:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x800f370);
    (*pcVar3)();
}


// ===== sym.lpass_cdc_tx_macro_get_bcs @ 0x0800f370 (size 144) =====

uint64_t sym.lpass_cdc_tx_macro_get_bcs(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    code *pcVar2;
    uint32_t uVar3;
    int iVar4;
    uint64_t uVar5;
    uint *puVar6;
    uint *puVar7;
    uint *puVar8;
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
    ulong uVar9;
    int64_t iVar10;
    int64_t iVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    uchar auVar13 [16];
    int64_t iStack_278;
    ulong uStack_270;
    int64_t iStack_268;
    ulong **ppuStack_260;
    code *pcStack_258;
    uint *puStack_230;
    int64_t iStack_228;
    ulong **ppuStack_220;
    code *pcStack_218;
    int64_t iStack_210;
    int64_t iStack_208;
    uchar auStack_1f8 [8];
    uchar auStack_1f0 [8];
    int64_t iStack_1e8;
    ulong **ppuStack_1e0;
    code *pcStack_1d8;
    int64_t iStack_1d0;
    int64_t iStack_1c8;
    uchar auStack_1b8 [8];
    uchar auStack_1b0 [8];
    int64_t iStack_1a8;
    ulong **ppuStack_1a0;
    code *pcStack_198;
    uchar auStack_178 [8];
    int64_t iStack_170;
    int64_t iStack_168;
    ulong **ppuStack_160;
    code *pcStack_158;
    int64_t iStack_150;
    uchar auStack_138 [8];
    int64_t iStack_130;
    int64_t iStack_128;
    ulong **ppuStack_120;
    code *pcStack_118;
    ulong uStack_110;
    uchar auStack_f8 [8];
    int64_t iStack_f0;
    int64_t iStack_e8;
    ulong **ppuStack_e0;
    code *pcStack_d8;
    int64_t iStack_d0;
    uchar auStack_b8 [8];
    int64_t iStack_b0;
    int64_t iStack_a8;
    uchar **ppuStack_a0;
    code *pcStack_98;
    ulong uStack_90;
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
    iVar11 = sp_el0;
    iStack_28 = *(iVar11 + 0x5e0);
    iStack_30 = 0;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(*(arg1 + 0x80),auStack_38,&iStack_30,0x8000904);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar5 = 0;
        *(arg2 + 0x48) = *(iStack_30 + 0xb04);
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_28) {
        return uVar5;
    }
    auVar12 = __stack_chk_fail(uVar5);
    *extraout_x18 = sym.lpass_cdc_tx_macro_set_bcs;
    pcStack_58 = sym.lpass_cdc_tx_macro_set_bcs;
    iVar11 = sp_el0;
    iStack_68 = *(iVar11 + 0x5e0);
    iStack_70 = 0;
    uVar9 = *(auVar12._8_8_ + 0x48);
    puStack_60 = &stack0xffffffffffffffe0;
    iStack_50 = arg2;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(*(auVar12._0_8_ + 0x80),auStack_78,&iStack_70,0x80009c0);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar5 = 0;
        *(iStack_70 + 0xb04) = uVar9 != 0;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_68) {
        return uVar5;
    }
    auVar12 = __stack_chk_fail(uVar5);
    *extraout_x18_00 = sym.lpass_cdc_tx_macro_swr_dmic_get;
    pcStack_98 = sym.lpass_cdc_tx_macro_swr_dmic_get;
    iVar11 = sp_el0;
    iStack_a8 = *(iVar11 + 0x5e0);
    iStack_b0 = 0;
    ppuStack_a0 = &puStack_60;
    uStack_90 = uVar9;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(*(auVar12._0_8_ + 0x80),auStack_b8,&iStack_b0,0x80009db);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar5 = 0;
        *(auVar12._8_8_ + 0x48) = *(iStack_b0 + 0xb50);
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_a8) {
        return uVar5;
    }
    auVar13 = __stack_chk_fail(uVar5);
    *extraout_x18_01 = sym.lpass_cdc_tx_macro_swr_dmic_put;
    pcStack_d8 = sym.lpass_cdc_tx_macro_swr_dmic_put;
    iVar11 = sp_el0;
    iStack_e8 = *(iVar11 + 0x5e0);
    iStack_f0 = 0;
    uVar9 = *(auVar13._8_8_ + 0x48);
    ppuStack_e0 = &ppuStack_a0;
    iStack_d0 = auVar12._8_8_;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(*(auVar13._0_8_ + 0x80),auStack_f8,&iStack_f0,0x8000d0c);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar5 = 0;
        *(iStack_f0 + 0xb50) = uVar9 != 0;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_e8) {
        return uVar5;
    }
    auVar12 = __stack_chk_fail(uVar5);
    *extraout_x18_02 = sym.lpass_cdc_tx_macro_bcs_ch_get;
    pcStack_118 = sym.lpass_cdc_tx_macro_bcs_ch_get;
    iVar11 = sp_el0;
    iStack_128 = *(iVar11 + 0x5e0);
    iStack_130 = 0;
    ppuStack_120 = &ppuStack_e0;
    uStack_110 = uVar9;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(*(auVar12._0_8_ + 0x80),auStack_138,&iStack_130,0x8001018);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar5 = 0;
        *(auVar12._8_8_ + 0x48) = *(iStack_130 + 0xb28);
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_128) {
        return uVar5;
    }
    auVar13 = __stack_chk_fail(uVar5);
    *extraout_x18_03 = sym.lpass_cdc_tx_macro_bcs_ch_put;
    pcStack_158 = sym.lpass_cdc_tx_macro_bcs_ch_put;
    iVar11 = sp_el0;
    iStack_168 = *(iVar11 + 0x5e0);
    iStack_170 = 0;
    uVar1 = *(auVar13._8_8_ + 0x48);
    ppuStack_160 = &ppuStack_120;
    iStack_150 = auVar12._8_8_;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(*(auVar13._0_8_ + 0x80),auStack_178,&iStack_170,0x8001265);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar5 = 0;
        *(iStack_170 + 0xb28) = uVar1;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_168) {
        return uVar5;
    }
    auVar12 = __stack_chk_fail(uVar5);
    *extraout_x18_04 = sym.lpass_cdc_tx_macro_get_bcs_ch_sel;
    pcStack_198 = sym.lpass_cdc_tx_macro_get_bcs_ch_sel;
    iVar11 = sp_el0;
    iStack_1a8 = *(iVar11 + 0x5e0);
    iVar11 = *(auVar12._0_8_ + 0x80);
    ppuStack_1a0 = &ppuStack_160;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(iVar11,auStack_1b8,auStack_1b0,0x800149b);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar3 = snd_soc_component_read(iVar11,0x30dc);
        uVar5 = 0;
        *(auVar12._8_8_ + 0x48) = uVar3 & 0xf;
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_1a8) {
        return uVar5;
    }
    auVar13 = __stack_chk_fail(uVar5);
    *extraout_x18_05 = sym.lpass_cdc_tx_macro_put_bcs_ch_sel;
    pcStack_1d8 = sym.lpass_cdc_tx_macro_put_bcs_ch_sel;
    iVar10 = sp_el0;
    iStack_1e8 = *(iVar10 + 0x5e0);
    iVar10 = *(auVar13._0_8_ + 0x80);
    ppuStack_1e0 = &ppuStack_1a0;
    iStack_1d0 = iVar11;
    iStack_1c8 = auVar12._8_8_;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(iVar10,auStack_1f8,auStack_1f0,0x8001308);
    if (((uVar5 & 1) == 0) || (0xc < *(auVar13._8_8_ + 0x48))) {
        uVar5 = 0xffffffea;
    }
    else {
        snd_soc_component_update_bits(iVar10,0x30dc,0xf);
        uVar5 = 0;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_1e8) {
        return uVar5;
    }
    auVar12 = __stack_chk_fail(uVar5);
    puVar8 = auVar12._8_8_;
    *extraout_x18_06 = sym.lpass_cdc_tx_macro_path_get;
    pcStack_218 = sym.lpass_cdc_tx_macro_path_get;
    iVar11 = sp_el0;
    iStack_228 = *(iVar11 + 0x5e0);
    puVar7 = 0xcc0;
    ppuStack_220 = &ppuStack_1e0;
    iStack_210 = auVar13._8_8_;
    iStack_208 = iVar10;
    puVar6 = kstrndup(auVar12._0_8_,10);
    puStack_230 = puVar6;
    if (puVar6 == NULL) {
        uVar5 = 0xffffffea;
    }
    else {
        iVar11 = strsep(&puStack_230,0x800099f);
        if (iVar11 == 0) {
            iVar4 = ___ratelimit(obj.lpass_cdc_tx_macro_path_get._rs,"lpass_cdc_tx_macro_path_get");
            puVar8 = puVar7;
            if (iVar4 != 0) {
                puVar8 = puStack_230;
                _printk(0x8000ef9,"lpass_cdc_tx_macro_path_get");
            }
code_r0x0800f90c:
            uVar5 = 0xffffffea;
        }
        else {
            iVar11 = strpbrk(iVar11,"01234567");
            if (iVar11 == 0) {
                iVar4 = ___ratelimit(obj.lpass_cdc_tx_macro_path_get._rs.200,"lpass_cdc_tx_macro_path_get");
                puVar8 = puVar7;
                if (iVar4 != 0) {
                    _printk(0x80009a1,"lpass_cdc_tx_macro_path_get");
                    puVar8 = puVar7;
                }
                goto code_r0x0800f90c;
            }
            uVar3 = kstrtouint(iVar11,10);
            uVar5 = uVar3;
            if ((uVar3 < 0) &&
               (iVar4 = ___ratelimit(obj.lpass_cdc_tx_macro_path_get._rs.202,"lpass_cdc_tx_macro_path_get"),
               iVar4 != 0)) {
                puVar8 = puVar6;
                _printk(0x8000ffc,"lpass_cdc_tx_macro_path_get");
            }
        }
        kfree(puVar6);
        puVar7 = puVar8;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_228) {
        return uVar5;
    }
    auVar12 = __stack_chk_fail();
    iVar10 = auVar12._0_8_;
    *extraout_x18_07 = sym.lpass_cdc_tx_macro_get_channel_map;
    pcStack_258 = sym.lpass_cdc_tx_macro_get_channel_map;
    iVar11 = sp_el0;
    iStack_268 = *(iVar11 + 0x5e0);
    iStack_278 = 0;
    uStack_270 = 0;
    ppuStack_260 = &ppuStack_220;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(*(iVar10 + 0x58),&uStack_270,&iStack_278,0x80014e6);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else if (*(iVar10 + 8) - 1 < 3) {
        *puVar7 = *(iStack_278 + *(iVar10 + 8) * 8 + 0xaa0);
        if (3 < *(iVar10 + 8)) goto code_r0x0800fa6c;
        uVar5 = 0;
        *auVar12._8_8_ = *(iStack_278 + *(iVar10 + 8) * 8 + 0xac0);
    }
    else {
        uVar5 = ___ratelimit(obj.lpass_cdc_tx_macro_get_channel_map._rs,"lpass_cdc_tx_macro_get_channel_map");
        if (uVar5 != 0) {
            _dev_err(uStack_270,"%s: Invalid AIF\n","lpass_cdc_tx_macro_get_channel_map");
            uVar5 = 0;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_268) {
        return uVar5;
    }
    __stack_chk_fail(uVar5);
code_r0x0800fa6c:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x800fa70);
    (*pcVar2)();
}


// ===== sym.lpass_cdc_tx_macro_set_bcs @ 0x0800f400 (size 148) =====

uint64_t sym.lpass_cdc_tx_macro_set_bcs(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    code *pcVar2;
    uint32_t uVar3;
    int iVar4;
    uint64_t uVar5;
    uint *puVar6;
    uint *puVar7;
    uint *puVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong uVar9;
    int64_t iVar10;
    int64_t iVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    uchar auVar13 [16];
    int64_t iStack_238;
    ulong uStack_230;
    int64_t iStack_228;
    ulong **ppuStack_220;
    code *pcStack_218;
    uint *puStack_1f0;
    int64_t iStack_1e8;
    ulong **ppuStack_1e0;
    code *pcStack_1d8;
    int64_t iStack_1d0;
    int64_t iStack_1c8;
    uchar auStack_1b8 [8];
    uchar auStack_1b0 [8];
    int64_t iStack_1a8;
    ulong **ppuStack_1a0;
    code *pcStack_198;
    int64_t iStack_190;
    int64_t iStack_188;
    uchar auStack_178 [8];
    uchar auStack_170 [8];
    int64_t iStack_168;
    ulong **ppuStack_160;
    code *pcStack_158;
    uchar auStack_138 [8];
    int64_t iStack_130;
    int64_t iStack_128;
    ulong **ppuStack_120;
    code *pcStack_118;
    int64_t iStack_110;
    uchar auStack_f8 [8];
    int64_t iStack_f0;
    int64_t iStack_e8;
    ulong **ppuStack_e0;
    code *pcStack_d8;
    ulong uStack_d0;
    uchar auStack_b8 [8];
    int64_t iStack_b0;
    int64_t iStack_a8;
    uchar **ppuStack_a0;
    code *pcStack_98;
    int64_t iStack_90;
    uchar auStack_78 [8];
    int64_t iStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    ulong uStack_50;
    uchar auStack_38 [8];
    int64_t iStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_28 = *(iVar11 + 0x5e0);
    iStack_30 = 0;
    uVar9 = *(arg2 + 0x48);
    uVar5 = sym.lpass_cdc_tx_macro_get_data(*(arg1 + 0x80),auStack_38,&iStack_30,0x80009c0);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar5 = 0;
        *(iStack_30 + 0xb04) = uVar9 != 0;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_28) {
        return uVar5;
    }
    auVar12 = __stack_chk_fail(uVar5);
    *extraout_x18 = sym.lpass_cdc_tx_macro_swr_dmic_get;
    pcStack_58 = sym.lpass_cdc_tx_macro_swr_dmic_get;
    iVar11 = sp_el0;
    iStack_68 = *(iVar11 + 0x5e0);
    iStack_70 = 0;
    puStack_60 = &stack0xffffffffffffffe0;
    uStack_50 = uVar9;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(*(auVar12._0_8_ + 0x80),auStack_78,&iStack_70,0x80009db);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar5 = 0;
        *(auVar12._8_8_ + 0x48) = *(iStack_70 + 0xb50);
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_68) {
        return uVar5;
    }
    auVar13 = __stack_chk_fail(uVar5);
    *extraout_x18_00 = sym.lpass_cdc_tx_macro_swr_dmic_put;
    pcStack_98 = sym.lpass_cdc_tx_macro_swr_dmic_put;
    iVar11 = sp_el0;
    iStack_a8 = *(iVar11 + 0x5e0);
    iStack_b0 = 0;
    uVar9 = *(auVar13._8_8_ + 0x48);
    ppuStack_a0 = &puStack_60;
    iStack_90 = auVar12._8_8_;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(*(auVar13._0_8_ + 0x80),auStack_b8,&iStack_b0,0x8000d0c);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar5 = 0;
        *(iStack_b0 + 0xb50) = uVar9 != 0;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_a8) {
        return uVar5;
    }
    auVar12 = __stack_chk_fail(uVar5);
    *extraout_x18_01 = sym.lpass_cdc_tx_macro_bcs_ch_get;
    pcStack_d8 = sym.lpass_cdc_tx_macro_bcs_ch_get;
    iVar11 = sp_el0;
    iStack_e8 = *(iVar11 + 0x5e0);
    iStack_f0 = 0;
    ppuStack_e0 = &ppuStack_a0;
    uStack_d0 = uVar9;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(*(auVar12._0_8_ + 0x80),auStack_f8,&iStack_f0,0x8001018);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar5 = 0;
        *(auVar12._8_8_ + 0x48) = *(iStack_f0 + 0xb28);
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_e8) {
        return uVar5;
    }
    auVar13 = __stack_chk_fail(uVar5);
    *extraout_x18_02 = sym.lpass_cdc_tx_macro_bcs_ch_put;
    pcStack_118 = sym.lpass_cdc_tx_macro_bcs_ch_put;
    iVar11 = sp_el0;
    iStack_128 = *(iVar11 + 0x5e0);
    iStack_130 = 0;
    uVar1 = *(auVar13._8_8_ + 0x48);
    ppuStack_120 = &ppuStack_e0;
    iStack_110 = auVar12._8_8_;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(*(auVar13._0_8_ + 0x80),auStack_138,&iStack_130,0x8001265);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar5 = 0;
        *(iStack_130 + 0xb28) = uVar1;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_128) {
        return uVar5;
    }
    auVar12 = __stack_chk_fail(uVar5);
    *extraout_x18_03 = sym.lpass_cdc_tx_macro_get_bcs_ch_sel;
    pcStack_158 = sym.lpass_cdc_tx_macro_get_bcs_ch_sel;
    iVar11 = sp_el0;
    iStack_168 = *(iVar11 + 0x5e0);
    iVar11 = *(auVar12._0_8_ + 0x80);
    ppuStack_160 = &ppuStack_120;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(iVar11,auStack_178,auStack_170,0x800149b);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar3 = snd_soc_component_read(iVar11,0x30dc);
        uVar5 = 0;
        *(auVar12._8_8_ + 0x48) = uVar3 & 0xf;
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_168) {
        return uVar5;
    }
    auVar13 = __stack_chk_fail(uVar5);
    *extraout_x18_04 = sym.lpass_cdc_tx_macro_put_bcs_ch_sel;
    pcStack_198 = sym.lpass_cdc_tx_macro_put_bcs_ch_sel;
    iVar10 = sp_el0;
    iStack_1a8 = *(iVar10 + 0x5e0);
    iVar10 = *(auVar13._0_8_ + 0x80);
    ppuStack_1a0 = &ppuStack_160;
    iStack_190 = iVar11;
    iStack_188 = auVar12._8_8_;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(iVar10,auStack_1b8,auStack_1b0,0x8001308);
    if (((uVar5 & 1) == 0) || (0xc < *(auVar13._8_8_ + 0x48))) {
        uVar5 = 0xffffffea;
    }
    else {
        snd_soc_component_update_bits(iVar10,0x30dc,0xf);
        uVar5 = 0;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_1a8) {
        return uVar5;
    }
    auVar12 = __stack_chk_fail(uVar5);
    puVar8 = auVar12._8_8_;
    *extraout_x18_05 = sym.lpass_cdc_tx_macro_path_get;
    pcStack_1d8 = sym.lpass_cdc_tx_macro_path_get;
    iVar11 = sp_el0;
    iStack_1e8 = *(iVar11 + 0x5e0);
    puVar7 = 0xcc0;
    ppuStack_1e0 = &ppuStack_1a0;
    iStack_1d0 = auVar13._8_8_;
    iStack_1c8 = iVar10;
    puVar6 = kstrndup(auVar12._0_8_,10);
    puStack_1f0 = puVar6;
    if (puVar6 == NULL) {
        uVar5 = 0xffffffea;
    }
    else {
        iVar11 = strsep(&puStack_1f0,0x800099f);
        if (iVar11 == 0) {
            iVar4 = ___ratelimit(obj.lpass_cdc_tx_macro_path_get._rs,"lpass_cdc_tx_macro_path_get");
            puVar8 = puVar7;
            if (iVar4 != 0) {
                puVar8 = puStack_1f0;
                _printk(0x8000ef9,"lpass_cdc_tx_macro_path_get");
            }
code_r0x0800f90c:
            uVar5 = 0xffffffea;
        }
        else {
            iVar11 = strpbrk(iVar11,"01234567");
            if (iVar11 == 0) {
                iVar4 = ___ratelimit(obj.lpass_cdc_tx_macro_path_get._rs.200,"lpass_cdc_tx_macro_path_get");
                puVar8 = puVar7;
                if (iVar4 != 0) {
                    _printk(0x80009a1,"lpass_cdc_tx_macro_path_get");
                    puVar8 = puVar7;
                }
                goto code_r0x0800f90c;
            }
            uVar3 = kstrtouint(iVar11,10);
            uVar5 = uVar3;
            if ((uVar3 < 0) &&
               (iVar4 = ___ratelimit(obj.lpass_cdc_tx_macro_path_get._rs.202,"lpass_cdc_tx_macro_path_get"),
               iVar4 != 0)) {
                puVar8 = puVar6;
                _printk(0x8000ffc,"lpass_cdc_tx_macro_path_get");
            }
        }
        kfree(puVar6);
        puVar7 = puVar8;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_1e8) {
        return uVar5;
    }
    auVar12 = __stack_chk_fail();
    iVar10 = auVar12._0_8_;
    *extraout_x18_06 = sym.lpass_cdc_tx_macro_get_channel_map;
    pcStack_218 = sym.lpass_cdc_tx_macro_get_channel_map;
    iVar11 = sp_el0;
    iStack_228 = *(iVar11 + 0x5e0);
    iStack_238 = 0;
    uStack_230 = 0;
    ppuStack_220 = &ppuStack_1e0;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(*(iVar10 + 0x58),&uStack_230,&iStack_238,0x80014e6);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else if (*(iVar10 + 8) - 1 < 3) {
        *puVar7 = *(iStack_238 + *(iVar10 + 8) * 8 + 0xaa0);
        if (3 < *(iVar10 + 8)) goto code_r0x0800fa6c;
        uVar5 = 0;
        *auVar12._8_8_ = *(iStack_238 + *(iVar10 + 8) * 8 + 0xac0);
    }
    else {
        uVar5 = ___ratelimit(obj.lpass_cdc_tx_macro_get_channel_map._rs,"lpass_cdc_tx_macro_get_channel_map");
        if (uVar5 != 0) {
            _dev_err(uStack_230,"%s: Invalid AIF\n","lpass_cdc_tx_macro_get_channel_map");
            uVar5 = 0;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_228) {
        return uVar5;
    }
    __stack_chk_fail(uVar5);
code_r0x0800fa6c:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x800fa70);
    (*pcVar2)();
}


// ===== sym.lpass_cdc_tx_macro_swr_dmic_get @ 0x0800f494 (size 144) =====

uint64_t sym.lpass_cdc_tx_macro_swr_dmic_get(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    code *pcVar2;
    uint32_t uVar3;
    int iVar4;
    uint64_t uVar5;
    uint *puVar6;
    uint *puVar7;
    uint *puVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong uVar9;
    int64_t iVar10;
    int64_t iVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    uchar auVar13 [16];
    int64_t iStack_1f8;
    ulong uStack_1f0;
    int64_t iStack_1e8;
    ulong **ppuStack_1e0;
    code *pcStack_1d8;
    uint *puStack_1b0;
    int64_t iStack_1a8;
    ulong **ppuStack_1a0;
    code *pcStack_198;
    int64_t iStack_190;
    int64_t iStack_188;
    uchar auStack_178 [8];
    uchar auStack_170 [8];
    int64_t iStack_168;
    ulong **ppuStack_160;
    code *pcStack_158;
    int64_t iStack_150;
    int64_t iStack_148;
    uchar auStack_138 [8];
    uchar auStack_130 [8];
    int64_t iStack_128;
    ulong **ppuStack_120;
    code *pcStack_118;
    uchar auStack_f8 [8];
    int64_t iStack_f0;
    int64_t iStack_e8;
    ulong **ppuStack_e0;
    code *pcStack_d8;
    int64_t iStack_d0;
    uchar auStack_b8 [8];
    int64_t iStack_b0;
    int64_t iStack_a8;
    uchar **ppuStack_a0;
    code *pcStack_98;
    ulong uStack_90;
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
    iVar11 = sp_el0;
    iStack_28 = *(iVar11 + 0x5e0);
    iStack_30 = 0;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(*(arg1 + 0x80),auStack_38,&iStack_30,0x80009db);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar5 = 0;
        *(arg2 + 0x48) = *(iStack_30 + 0xb50);
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_28) {
        return uVar5;
    }
    auVar12 = __stack_chk_fail(uVar5);
    *extraout_x18 = sym.lpass_cdc_tx_macro_swr_dmic_put;
    pcStack_58 = sym.lpass_cdc_tx_macro_swr_dmic_put;
    iVar11 = sp_el0;
    iStack_68 = *(iVar11 + 0x5e0);
    iStack_70 = 0;
    uVar9 = *(auVar12._8_8_ + 0x48);
    puStack_60 = &stack0xffffffffffffffe0;
    iStack_50 = arg2;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(*(auVar12._0_8_ + 0x80),auStack_78,&iStack_70,0x8000d0c);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar5 = 0;
        *(iStack_70 + 0xb50) = uVar9 != 0;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_68) {
        return uVar5;
    }
    auVar12 = __stack_chk_fail(uVar5);
    *extraout_x18_00 = sym.lpass_cdc_tx_macro_bcs_ch_get;
    pcStack_98 = sym.lpass_cdc_tx_macro_bcs_ch_get;
    iVar11 = sp_el0;
    iStack_a8 = *(iVar11 + 0x5e0);
    iStack_b0 = 0;
    ppuStack_a0 = &puStack_60;
    uStack_90 = uVar9;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(*(auVar12._0_8_ + 0x80),auStack_b8,&iStack_b0,0x8001018);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar5 = 0;
        *(auVar12._8_8_ + 0x48) = *(iStack_b0 + 0xb28);
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_a8) {
        return uVar5;
    }
    auVar13 = __stack_chk_fail(uVar5);
    *extraout_x18_01 = sym.lpass_cdc_tx_macro_bcs_ch_put;
    pcStack_d8 = sym.lpass_cdc_tx_macro_bcs_ch_put;
    iVar11 = sp_el0;
    iStack_e8 = *(iVar11 + 0x5e0);
    iStack_f0 = 0;
    uVar1 = *(auVar13._8_8_ + 0x48);
    ppuStack_e0 = &ppuStack_a0;
    iStack_d0 = auVar12._8_8_;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(*(auVar13._0_8_ + 0x80),auStack_f8,&iStack_f0,0x8001265);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar5 = 0;
        *(iStack_f0 + 0xb28) = uVar1;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_e8) {
        return uVar5;
    }
    auVar12 = __stack_chk_fail(uVar5);
    *extraout_x18_02 = sym.lpass_cdc_tx_macro_get_bcs_ch_sel;
    pcStack_118 = sym.lpass_cdc_tx_macro_get_bcs_ch_sel;
    iVar11 = sp_el0;
    iStack_128 = *(iVar11 + 0x5e0);
    iVar11 = *(auVar12._0_8_ + 0x80);
    ppuStack_120 = &ppuStack_e0;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(iVar11,auStack_138,auStack_130,0x800149b);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar3 = snd_soc_component_read(iVar11,0x30dc);
        uVar5 = 0;
        *(auVar12._8_8_ + 0x48) = uVar3 & 0xf;
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_128) {
        return uVar5;
    }
    auVar13 = __stack_chk_fail(uVar5);
    *extraout_x18_03 = sym.lpass_cdc_tx_macro_put_bcs_ch_sel;
    pcStack_158 = sym.lpass_cdc_tx_macro_put_bcs_ch_sel;
    iVar10 = sp_el0;
    iStack_168 = *(iVar10 + 0x5e0);
    iVar10 = *(auVar13._0_8_ + 0x80);
    ppuStack_160 = &ppuStack_120;
    iStack_150 = iVar11;
    iStack_148 = auVar12._8_8_;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(iVar10,auStack_178,auStack_170,0x8001308);
    if (((uVar5 & 1) == 0) || (0xc < *(auVar13._8_8_ + 0x48))) {
        uVar5 = 0xffffffea;
    }
    else {
        snd_soc_component_update_bits(iVar10,0x30dc,0xf);
        uVar5 = 0;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_168) {
        return uVar5;
    }
    auVar12 = __stack_chk_fail(uVar5);
    puVar8 = auVar12._8_8_;
    *extraout_x18_04 = sym.lpass_cdc_tx_macro_path_get;
    pcStack_198 = sym.lpass_cdc_tx_macro_path_get;
    iVar11 = sp_el0;
    iStack_1a8 = *(iVar11 + 0x5e0);
    puVar7 = 0xcc0;
    ppuStack_1a0 = &ppuStack_160;
    iStack_190 = auVar13._8_8_;
    iStack_188 = iVar10;
    puVar6 = kstrndup(auVar12._0_8_,10);
    puStack_1b0 = puVar6;
    if (puVar6 == NULL) {
        uVar5 = 0xffffffea;
    }
    else {
        iVar11 = strsep(&puStack_1b0,0x800099f);
        if (iVar11 == 0) {
            iVar4 = ___ratelimit(obj.lpass_cdc_tx_macro_path_get._rs,"lpass_cdc_tx_macro_path_get");
            puVar8 = puVar7;
            if (iVar4 != 0) {
                puVar8 = puStack_1b0;
                _printk(0x8000ef9,"lpass_cdc_tx_macro_path_get");
            }
code_r0x0800f90c:
            uVar5 = 0xffffffea;
        }
        else {
            iVar11 = strpbrk(iVar11,"01234567");
            if (iVar11 == 0) {
                iVar4 = ___ratelimit(obj.lpass_cdc_tx_macro_path_get._rs.200,"lpass_cdc_tx_macro_path_get");
                puVar8 = puVar7;
                if (iVar4 != 0) {
                    _printk(0x80009a1,"lpass_cdc_tx_macro_path_get");
                    puVar8 = puVar7;
                }
                goto code_r0x0800f90c;
            }
            uVar3 = kstrtouint(iVar11,10);
            uVar5 = uVar3;
            if ((uVar3 < 0) &&
               (iVar4 = ___ratelimit(obj.lpass_cdc_tx_macro_path_get._rs.202,"lpass_cdc_tx_macro_path_get"),
               iVar4 != 0)) {
                puVar8 = puVar6;
                _printk(0x8000ffc,"lpass_cdc_tx_macro_path_get");
            }
        }
        kfree(puVar6);
        puVar7 = puVar8;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_1a8) {
        return uVar5;
    }
    auVar12 = __stack_chk_fail();
    iVar10 = auVar12._0_8_;
    *extraout_x18_05 = sym.lpass_cdc_tx_macro_get_channel_map;
    pcStack_1d8 = sym.lpass_cdc_tx_macro_get_channel_map;
    iVar11 = sp_el0;
    iStack_1e8 = *(iVar11 + 0x5e0);
    iStack_1f8 = 0;
    uStack_1f0 = 0;
    ppuStack_1e0 = &ppuStack_1a0;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(*(iVar10 + 0x58),&uStack_1f0,&iStack_1f8,0x80014e6);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else if (*(iVar10 + 8) - 1 < 3) {
        *puVar7 = *(iStack_1f8 + *(iVar10 + 8) * 8 + 0xaa0);
        if (3 < *(iVar10 + 8)) goto code_r0x0800fa6c;
        uVar5 = 0;
        *auVar12._8_8_ = *(iStack_1f8 + *(iVar10 + 8) * 8 + 0xac0);
    }
    else {
        uVar5 = ___ratelimit(obj.lpass_cdc_tx_macro_get_channel_map._rs,"lpass_cdc_tx_macro_get_channel_map");
        if (uVar5 != 0) {
            _dev_err(uStack_1f0,"%s: Invalid AIF\n","lpass_cdc_tx_macro_get_channel_map");
            uVar5 = 0;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_1e8) {
        return uVar5;
    }
    __stack_chk_fail(uVar5);
code_r0x0800fa6c:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x800fa70);
    (*pcVar2)();
}


// ===== sym.lpass_cdc_tx_macro_swr_dmic_put @ 0x0800f524 (size 148) =====

uint64_t sym.lpass_cdc_tx_macro_swr_dmic_put(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    code *pcVar2;
    uint32_t uVar3;
    int iVar4;
    uint64_t uVar5;
    uint *puVar6;
    uint *puVar7;
    uint *puVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong uVar9;
    int64_t iVar10;
    int64_t iVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    uchar auVar13 [16];
    int64_t iStack_1b8;
    ulong uStack_1b0;
    int64_t iStack_1a8;
    ulong **ppuStack_1a0;
    code *pcStack_198;
    uint *puStack_170;
    int64_t iStack_168;
    ulong **ppuStack_160;
    code *pcStack_158;
    int64_t iStack_150;
    int64_t iStack_148;
    uchar auStack_138 [8];
    uchar auStack_130 [8];
    int64_t iStack_128;
    ulong **ppuStack_120;
    code *pcStack_118;
    int64_t iStack_110;
    int64_t iStack_108;
    uchar auStack_f8 [8];
    uchar auStack_f0 [8];
    int64_t iStack_e8;
    ulong **ppuStack_e0;
    code *pcStack_d8;
    uchar auStack_b8 [8];
    int64_t iStack_b0;
    int64_t iStack_a8;
    uchar **ppuStack_a0;
    code *pcStack_98;
    int64_t iStack_90;
    uchar auStack_78 [8];
    int64_t iStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    ulong uStack_50;
    uchar auStack_38 [8];
    int64_t iStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_28 = *(iVar11 + 0x5e0);
    iStack_30 = 0;
    uVar9 = *(arg2 + 0x48);
    uVar5 = sym.lpass_cdc_tx_macro_get_data(*(arg1 + 0x80),auStack_38,&iStack_30,0x8000d0c);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar5 = 0;
        *(iStack_30 + 0xb50) = uVar9 != 0;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_28) {
        return uVar5;
    }
    auVar12 = __stack_chk_fail(uVar5);
    *extraout_x18 = sym.lpass_cdc_tx_macro_bcs_ch_get;
    pcStack_58 = sym.lpass_cdc_tx_macro_bcs_ch_get;
    iVar11 = sp_el0;
    iStack_68 = *(iVar11 + 0x5e0);
    iStack_70 = 0;
    puStack_60 = &stack0xffffffffffffffe0;
    uStack_50 = uVar9;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(*(auVar12._0_8_ + 0x80),auStack_78,&iStack_70,0x8001018);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar5 = 0;
        *(auVar12._8_8_ + 0x48) = *(iStack_70 + 0xb28);
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_68) {
        return uVar5;
    }
    auVar13 = __stack_chk_fail(uVar5);
    *extraout_x18_00 = sym.lpass_cdc_tx_macro_bcs_ch_put;
    pcStack_98 = sym.lpass_cdc_tx_macro_bcs_ch_put;
    iVar11 = sp_el0;
    iStack_a8 = *(iVar11 + 0x5e0);
    iStack_b0 = 0;
    uVar1 = *(auVar13._8_8_ + 0x48);
    ppuStack_a0 = &puStack_60;
    iStack_90 = auVar12._8_8_;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(*(auVar13._0_8_ + 0x80),auStack_b8,&iStack_b0,0x8001265);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar5 = 0;
        *(iStack_b0 + 0xb28) = uVar1;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_a8) {
        return uVar5;
    }
    auVar12 = __stack_chk_fail(uVar5);
    *extraout_x18_01 = sym.lpass_cdc_tx_macro_get_bcs_ch_sel;
    pcStack_d8 = sym.lpass_cdc_tx_macro_get_bcs_ch_sel;
    iVar11 = sp_el0;
    iStack_e8 = *(iVar11 + 0x5e0);
    iVar11 = *(auVar12._0_8_ + 0x80);
    ppuStack_e0 = &ppuStack_a0;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(iVar11,auStack_f8,auStack_f0,0x800149b);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar3 = snd_soc_component_read(iVar11,0x30dc);
        uVar5 = 0;
        *(auVar12._8_8_ + 0x48) = uVar3 & 0xf;
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_e8) {
        return uVar5;
    }
    auVar13 = __stack_chk_fail(uVar5);
    *extraout_x18_02 = sym.lpass_cdc_tx_macro_put_bcs_ch_sel;
    pcStack_118 = sym.lpass_cdc_tx_macro_put_bcs_ch_sel;
    iVar10 = sp_el0;
    iStack_128 = *(iVar10 + 0x5e0);
    iVar10 = *(auVar13._0_8_ + 0x80);
    ppuStack_120 = &ppuStack_e0;
    iStack_110 = iVar11;
    iStack_108 = auVar12._8_8_;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(iVar10,auStack_138,auStack_130,0x8001308);
    if (((uVar5 & 1) == 0) || (0xc < *(auVar13._8_8_ + 0x48))) {
        uVar5 = 0xffffffea;
    }
    else {
        snd_soc_component_update_bits(iVar10,0x30dc,0xf);
        uVar5 = 0;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_128) {
        return uVar5;
    }
    auVar12 = __stack_chk_fail(uVar5);
    puVar8 = auVar12._8_8_;
    *extraout_x18_03 = sym.lpass_cdc_tx_macro_path_get;
    pcStack_158 = sym.lpass_cdc_tx_macro_path_get;
    iVar11 = sp_el0;
    iStack_168 = *(iVar11 + 0x5e0);
    puVar7 = 0xcc0;
    ppuStack_160 = &ppuStack_120;
    iStack_150 = auVar13._8_8_;
    iStack_148 = iVar10;
    puVar6 = kstrndup(auVar12._0_8_,10);
    puStack_170 = puVar6;
    if (puVar6 == NULL) {
        uVar5 = 0xffffffea;
    }
    else {
        iVar11 = strsep(&puStack_170,0x800099f);
        if (iVar11 == 0) {
            iVar4 = ___ratelimit(obj.lpass_cdc_tx_macro_path_get._rs,"lpass_cdc_tx_macro_path_get");
            puVar8 = puVar7;
            if (iVar4 != 0) {
                puVar8 = puStack_170;
                _printk(0x8000ef9,"lpass_cdc_tx_macro_path_get");
            }
code_r0x0800f90c:
            uVar5 = 0xffffffea;
        }
        else {
            iVar11 = strpbrk(iVar11,"01234567");
            if (iVar11 == 0) {
                iVar4 = ___ratelimit(obj.lpass_cdc_tx_macro_path_get._rs.200,"lpass_cdc_tx_macro_path_get");
                puVar8 = puVar7;
                if (iVar4 != 0) {
                    _printk(0x80009a1,"lpass_cdc_tx_macro_path_get");
                    puVar8 = puVar7;
                }
                goto code_r0x0800f90c;
            }
            uVar3 = kstrtouint(iVar11,10);
            uVar5 = uVar3;
            if ((uVar3 < 0) &&
               (iVar4 = ___ratelimit(obj.lpass_cdc_tx_macro_path_get._rs.202,"lpass_cdc_tx_macro_path_get"),
               iVar4 != 0)) {
                puVar8 = puVar6;
                _printk(0x8000ffc,"lpass_cdc_tx_macro_path_get");
            }
        }
        kfree(puVar6);
        puVar7 = puVar8;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_168) {
        return uVar5;
    }
    auVar12 = __stack_chk_fail();
    iVar10 = auVar12._0_8_;
    *extraout_x18_04 = sym.lpass_cdc_tx_macro_get_channel_map;
    pcStack_198 = sym.lpass_cdc_tx_macro_get_channel_map;
    iVar11 = sp_el0;
    iStack_1a8 = *(iVar11 + 0x5e0);
    iStack_1b8 = 0;
    uStack_1b0 = 0;
    ppuStack_1a0 = &ppuStack_160;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(*(iVar10 + 0x58),&uStack_1b0,&iStack_1b8,0x80014e6);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else if (*(iVar10 + 8) - 1 < 3) {
        *puVar7 = *(iStack_1b8 + *(iVar10 + 8) * 8 + 0xaa0);
        if (3 < *(iVar10 + 8)) goto code_r0x0800fa6c;
        uVar5 = 0;
        *auVar12._8_8_ = *(iStack_1b8 + *(iVar10 + 8) * 8 + 0xac0);
    }
    else {
        uVar5 = ___ratelimit(obj.lpass_cdc_tx_macro_get_channel_map._rs,"lpass_cdc_tx_macro_get_channel_map");
        if (uVar5 != 0) {
            _dev_err(uStack_1b0,"%s: Invalid AIF\n","lpass_cdc_tx_macro_get_channel_map");
            uVar5 = 0;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_1a8) {
        return uVar5;
    }
    __stack_chk_fail(uVar5);
code_r0x0800fa6c:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x800fa70);
    (*pcVar2)();
}


// ===== sym.lpass_cdc_tx_macro_bcs_ch_get @ 0x0800f5b8 (size 144) =====

uint64_t sym.lpass_cdc_tx_macro_bcs_ch_get(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    code *pcVar2;
    uint32_t uVar3;
    int iVar4;
    uint64_t uVar5;
    uint *puVar6;
    uint *puVar7;
    uint *puVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    int64_t iVar9;
    int64_t iVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    uchar auVar12 [16];
    int64_t iStack_178;
    ulong uStack_170;
    int64_t iStack_168;
    ulong **ppuStack_160;
    code *pcStack_158;
    uint *puStack_130;
    int64_t iStack_128;
    ulong **ppuStack_120;
    code *pcStack_118;
    int64_t iStack_110;
    int64_t iStack_108;
    uchar auStack_f8 [8];
    uchar auStack_f0 [8];
    int64_t iStack_e8;
    ulong **ppuStack_e0;
    code *pcStack_d8;
    int64_t iStack_d0;
    int64_t iStack_c8;
    uchar auStack_b8 [8];
    uchar auStack_b0 [8];
    int64_t iStack_a8;
    uchar **ppuStack_a0;
    code *pcStack_98;
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
    iVar10 = sp_el0;
    iStack_28 = *(iVar10 + 0x5e0);
    iStack_30 = 0;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(*(arg1 + 0x80),auStack_38,&iStack_30,0x8001018);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar5 = 0;
        *(arg2 + 0x48) = *(iStack_30 + 0xb28);
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_28) {
        return uVar5;
    }
    auVar11 = __stack_chk_fail(uVar5);
    *extraout_x18 = sym.lpass_cdc_tx_macro_bcs_ch_put;
    pcStack_58 = sym.lpass_cdc_tx_macro_bcs_ch_put;
    iVar10 = sp_el0;
    iStack_68 = *(iVar10 + 0x5e0);
    iStack_70 = 0;
    uVar1 = *(auVar11._8_8_ + 0x48);
    puStack_60 = &stack0xffffffffffffffe0;
    iStack_50 = arg2;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(*(auVar11._0_8_ + 0x80),auStack_78,&iStack_70,0x8001265);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar5 = 0;
        *(iStack_70 + 0xb28) = uVar1;
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_68) {
        return uVar5;
    }
    auVar11 = __stack_chk_fail(uVar5);
    *extraout_x18_00 = sym.lpass_cdc_tx_macro_get_bcs_ch_sel;
    pcStack_98 = sym.lpass_cdc_tx_macro_get_bcs_ch_sel;
    iVar10 = sp_el0;
    iStack_a8 = *(iVar10 + 0x5e0);
    iVar10 = *(auVar11._0_8_ + 0x80);
    ppuStack_a0 = &puStack_60;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(iVar10,auStack_b8,auStack_b0,0x800149b);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar3 = snd_soc_component_read(iVar10,0x30dc);
        uVar5 = 0;
        *(auVar11._8_8_ + 0x48) = uVar3 & 0xf;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_a8) {
        return uVar5;
    }
    auVar12 = __stack_chk_fail(uVar5);
    *extraout_x18_01 = sym.lpass_cdc_tx_macro_put_bcs_ch_sel;
    pcStack_d8 = sym.lpass_cdc_tx_macro_put_bcs_ch_sel;
    iVar9 = sp_el0;
    iStack_e8 = *(iVar9 + 0x5e0);
    iVar9 = *(auVar12._0_8_ + 0x80);
    ppuStack_e0 = &ppuStack_a0;
    iStack_d0 = iVar10;
    iStack_c8 = auVar11._8_8_;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(iVar9,auStack_f8,auStack_f0,0x8001308);
    if (((uVar5 & 1) == 0) || (0xc < *(auVar12._8_8_ + 0x48))) {
        uVar5 = 0xffffffea;
    }
    else {
        snd_soc_component_update_bits(iVar9,0x30dc,0xf);
        uVar5 = 0;
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_e8) {
        return uVar5;
    }
    auVar11 = __stack_chk_fail(uVar5);
    puVar8 = auVar11._8_8_;
    *extraout_x18_02 = sym.lpass_cdc_tx_macro_path_get;
    pcStack_118 = sym.lpass_cdc_tx_macro_path_get;
    iVar10 = sp_el0;
    iStack_128 = *(iVar10 + 0x5e0);
    puVar7 = 0xcc0;
    ppuStack_120 = &ppuStack_e0;
    iStack_110 = auVar12._8_8_;
    iStack_108 = iVar9;
    puVar6 = kstrndup(auVar11._0_8_,10);
    puStack_130 = puVar6;
    if (puVar6 == NULL) {
        uVar5 = 0xffffffea;
    }
    else {
        iVar10 = strsep(&puStack_130,0x800099f);
        if (iVar10 == 0) {
            iVar4 = ___ratelimit(obj.lpass_cdc_tx_macro_path_get._rs,"lpass_cdc_tx_macro_path_get");
            puVar8 = puVar7;
            if (iVar4 != 0) {
                puVar8 = puStack_130;
                _printk(0x8000ef9,"lpass_cdc_tx_macro_path_get");
            }
code_r0x0800f90c:
            uVar5 = 0xffffffea;
        }
        else {
            iVar10 = strpbrk(iVar10,"01234567");
            if (iVar10 == 0) {
                iVar4 = ___ratelimit(obj.lpass_cdc_tx_macro_path_get._rs.200,"lpass_cdc_tx_macro_path_get");
                puVar8 = puVar7;
                if (iVar4 != 0) {
                    _printk(0x80009a1,"lpass_cdc_tx_macro_path_get");
                    puVar8 = puVar7;
                }
                goto code_r0x0800f90c;
            }
            uVar3 = kstrtouint(iVar10,10);
            uVar5 = uVar3;
            if ((uVar3 < 0) &&
               (iVar4 = ___ratelimit(obj.lpass_cdc_tx_macro_path_get._rs.202,"lpass_cdc_tx_macro_path_get"),
               iVar4 != 0)) {
                puVar8 = puVar6;
                _printk(0x8000ffc,"lpass_cdc_tx_macro_path_get");
            }
        }
        kfree(puVar6);
        puVar7 = puVar8;
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_128) {
        return uVar5;
    }
    auVar11 = __stack_chk_fail();
    iVar9 = auVar11._0_8_;
    *extraout_x18_03 = sym.lpass_cdc_tx_macro_get_channel_map;
    pcStack_158 = sym.lpass_cdc_tx_macro_get_channel_map;
    iVar10 = sp_el0;
    iStack_168 = *(iVar10 + 0x5e0);
    iStack_178 = 0;
    uStack_170 = 0;
    ppuStack_160 = &ppuStack_120;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(*(iVar9 + 0x58),&uStack_170,&iStack_178,0x80014e6);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else if (*(iVar9 + 8) - 1 < 3) {
        *puVar7 = *(iStack_178 + *(iVar9 + 8) * 8 + 0xaa0);
        if (3 < *(iVar9 + 8)) goto code_r0x0800fa6c;
        uVar5 = 0;
        *auVar11._8_8_ = *(iStack_178 + *(iVar9 + 8) * 8 + 0xac0);
    }
    else {
        uVar5 = ___ratelimit(obj.lpass_cdc_tx_macro_get_channel_map._rs,"lpass_cdc_tx_macro_get_channel_map");
        if (uVar5 != 0) {
            _dev_err(uStack_170,"%s: Invalid AIF\n","lpass_cdc_tx_macro_get_channel_map");
            uVar5 = 0;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_168) {
        return uVar5;
    }
    __stack_chk_fail(uVar5);
code_r0x0800fa6c:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x800fa70);
    (*pcVar2)();
}


// ===== sym.lpass_cdc_tx_macro_bcs_ch_put @ 0x0800f648 (size 140) =====

uint64_t sym.lpass_cdc_tx_macro_bcs_ch_put(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    code *pcVar2;
    uint32_t uVar3;
    int iVar4;
    uint64_t uVar5;
    uint *puVar6;
    uint *puVar7;
    uint *puVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    int64_t iVar9;
    int64_t iVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    uchar auVar12 [16];
    int64_t iStack_138;
    ulong uStack_130;
    int64_t iStack_128;
    ulong **ppuStack_120;
    code *pcStack_118;
    uint *puStack_f0;
    int64_t iStack_e8;
    ulong **ppuStack_e0;
    code *pcStack_d8;
    int64_t iStack_d0;
    int64_t iStack_c8;
    uchar auStack_b8 [8];
    uchar auStack_b0 [8];
    int64_t iStack_a8;
    uchar **ppuStack_a0;
    code *pcStack_98;
    int64_t iStack_90;
    int64_t iStack_88;
    uchar auStack_78 [8];
    uchar auStack_70 [8];
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    uchar auStack_38 [8];
    int64_t iStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_28 = *(iVar10 + 0x5e0);
    iStack_30 = 0;
    uVar1 = *(arg2 + 0x48);
    uVar5 = sym.lpass_cdc_tx_macro_get_data(*(arg1 + 0x80),auStack_38,&iStack_30,0x8001265);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar5 = 0;
        *(iStack_30 + 0xb28) = uVar1;
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_28) {
        return uVar5;
    }
    auVar11 = __stack_chk_fail(uVar5);
    *extraout_x18 = sym.lpass_cdc_tx_macro_get_bcs_ch_sel;
    pcStack_58 = sym.lpass_cdc_tx_macro_get_bcs_ch_sel;
    iVar10 = sp_el0;
    iStack_68 = *(iVar10 + 0x5e0);
    iVar10 = *(auVar11._0_8_ + 0x80);
    puStack_60 = &stack0xffffffffffffffe0;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(iVar10,auStack_78,auStack_70,0x800149b);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar3 = snd_soc_component_read(iVar10,0x30dc);
        uVar5 = 0;
        *(auVar11._8_8_ + 0x48) = uVar3 & 0xf;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_68) {
        return uVar5;
    }
    auVar12 = __stack_chk_fail(uVar5);
    *extraout_x18_00 = sym.lpass_cdc_tx_macro_put_bcs_ch_sel;
    pcStack_98 = sym.lpass_cdc_tx_macro_put_bcs_ch_sel;
    iVar9 = sp_el0;
    iStack_a8 = *(iVar9 + 0x5e0);
    iVar9 = *(auVar12._0_8_ + 0x80);
    ppuStack_a0 = &puStack_60;
    iStack_90 = iVar10;
    iStack_88 = auVar11._8_8_;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(iVar9,auStack_b8,auStack_b0,0x8001308);
    if (((uVar5 & 1) == 0) || (0xc < *(auVar12._8_8_ + 0x48))) {
        uVar5 = 0xffffffea;
    }
    else {
        snd_soc_component_update_bits(iVar9,0x30dc,0xf);
        uVar5 = 0;
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_a8) {
        return uVar5;
    }
    auVar11 = __stack_chk_fail(uVar5);
    puVar8 = auVar11._8_8_;
    *extraout_x18_01 = sym.lpass_cdc_tx_macro_path_get;
    pcStack_d8 = sym.lpass_cdc_tx_macro_path_get;
    iVar10 = sp_el0;
    iStack_e8 = *(iVar10 + 0x5e0);
    puVar7 = 0xcc0;
    ppuStack_e0 = &ppuStack_a0;
    iStack_d0 = auVar12._8_8_;
    iStack_c8 = iVar9;
    puVar6 = kstrndup(auVar11._0_8_,10);
    puStack_f0 = puVar6;
    if (puVar6 == NULL) {
        uVar5 = 0xffffffea;
    }
    else {
        iVar10 = strsep(&puStack_f0,0x800099f);
        if (iVar10 == 0) {
            iVar4 = ___ratelimit(obj.lpass_cdc_tx_macro_path_get._rs,"lpass_cdc_tx_macro_path_get");
            puVar8 = puVar7;
            if (iVar4 != 0) {
                puVar8 = puStack_f0;
                _printk(0x8000ef9,"lpass_cdc_tx_macro_path_get");
            }
code_r0x0800f90c:
            uVar5 = 0xffffffea;
        }
        else {
            iVar10 = strpbrk(iVar10,"01234567");
            if (iVar10 == 0) {
                iVar4 = ___ratelimit(obj.lpass_cdc_tx_macro_path_get._rs.200,"lpass_cdc_tx_macro_path_get");
                puVar8 = puVar7;
                if (iVar4 != 0) {
                    _printk(0x80009a1,"lpass_cdc_tx_macro_path_get");
                    puVar8 = puVar7;
                }
                goto code_r0x0800f90c;
            }
            uVar3 = kstrtouint(iVar10,10);
            uVar5 = uVar3;
            if ((uVar3 < 0) &&
               (iVar4 = ___ratelimit(obj.lpass_cdc_tx_macro_path_get._rs.202,"lpass_cdc_tx_macro_path_get"),
               iVar4 != 0)) {
                puVar8 = puVar6;
                _printk(0x8000ffc,"lpass_cdc_tx_macro_path_get");
            }
        }
        kfree(puVar6);
        puVar7 = puVar8;
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_e8) {
        return uVar5;
    }
    auVar11 = __stack_chk_fail();
    iVar9 = auVar11._0_8_;
    *extraout_x18_02 = sym.lpass_cdc_tx_macro_get_channel_map;
    pcStack_118 = sym.lpass_cdc_tx_macro_get_channel_map;
    iVar10 = sp_el0;
    iStack_128 = *(iVar10 + 0x5e0);
    iStack_138 = 0;
    uStack_130 = 0;
    ppuStack_120 = &ppuStack_e0;
    uVar5 = sym.lpass_cdc_tx_macro_get_data(*(iVar9 + 0x58),&uStack_130,&iStack_138,0x80014e6);
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffffea;
    }
    else if (*(iVar9 + 8) - 1 < 3) {
        *puVar7 = *(iStack_138 + *(iVar9 + 8) * 8 + 0xaa0);
        if (3 < *(iVar9 + 8)) goto code_r0x0800fa6c;
        uVar5 = 0;
        *auVar11._8_8_ = *(iStack_138 + *(iVar9 + 8) * 8 + 0xac0);
    }
    else {
        uVar5 = ___ratelimit(obj.lpass_cdc_tx_macro_get_channel_map._rs,"lpass_cdc_tx_macro_get_channel_map");
        if (uVar5 != 0) {
            _dev_err(uStack_130,"%s: Invalid AIF\n","lpass_cdc_tx_macro_get_channel_map");
            uVar5 = 0;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_128) {
        return uVar5;
    }
    __stack_chk_fail(uVar5);
code_r0x0800fa6c:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x800fa70);
    (*pcVar2)();
}


// ===== sym.lpass_cdc_tx_macro_get_bcs_ch_sel @ 0x0800f6d4 (size 152) =====

uint64_t sym.lpass_cdc_tx_macro_get_bcs_ch_sel(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    uint32_t uVar2;
    int iVar3;
    uint64_t uVar4;
    uint *puVar5;
    uint *puVar6;
    uint *puVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t iVar8;
    int64_t iVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    uchar auVar11 [16];
    int64_t iStack_f8;
    ulong uStack_f0;
    int64_t iStack_e8;
    ulong **ppuStack_e0;
    code *pcStack_d8;
    uint *puStack_b0;
    int64_t iStack_a8;
    uchar **ppuStack_a0;
    code *pcStack_98;
    int64_t iStack_90;
    int64_t iStack_88;
    uchar auStack_78 [8];
    uchar auStack_70 [8];
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    int64_t iStack_50;
    int64_t iStack_48;
    uchar auStack_38 [8];
    uchar auStack_30 [8];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_28 = *(iVar9 + 0x5e0);
    iVar9 = *(arg1 + 0x80);
    uVar4 = sym.lpass_cdc_tx_macro_get_data(iVar9,auStack_38,auStack_30,0x800149b);
    if ((uVar4 & 1) == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        uVar2 = snd_soc_component_read(iVar9,0x30dc);
        uVar4 = 0;
        *(arg2 + 0x48) = uVar2 & 0xf;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_28) {
        return uVar4;
    }
    auVar10 = __stack_chk_fail(uVar4);
    *extraout_x18 = sym.lpass_cdc_tx_macro_put_bcs_ch_sel;
    pcStack_58 = sym.lpass_cdc_tx_macro_put_bcs_ch_sel;
    iVar8 = sp_el0;
    iStack_68 = *(iVar8 + 0x5e0);
    iVar8 = *(auVar10._0_8_ + 0x80);
    puStack_60 = &stack0xffffffffffffffe0;
    iStack_50 = iVar9;
    iStack_48 = arg2;
    uVar4 = sym.lpass_cdc_tx_macro_get_data(iVar8,auStack_78,auStack_70,0x8001308);
    if (((uVar4 & 1) == 0) || (0xc < *(auVar10._8_8_ + 0x48))) {
        uVar4 = 0xffffffea;
    }
    else {
        snd_soc_component_update_bits(iVar8,0x30dc,0xf);
        uVar4 = 0;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_68) {
        return uVar4;
    }
    auVar11 = __stack_chk_fail(uVar4);
    puVar7 = auVar11._8_8_;
    *extraout_x18_00 = sym.lpass_cdc_tx_macro_path_get;
    pcStack_98 = sym.lpass_cdc_tx_macro_path_get;
    iVar9 = sp_el0;
    iStack_a8 = *(iVar9 + 0x5e0);
    puVar6 = 0xcc0;
    ppuStack_a0 = &puStack_60;
    iStack_90 = auVar10._8_8_;
    iStack_88 = iVar8;
    puVar5 = kstrndup(auVar11._0_8_,10);
    puStack_b0 = puVar5;
    if (puVar5 == NULL) {
        uVar4 = 0xffffffea;
    }
    else {
        iVar9 = strsep(&puStack_b0,0x800099f);
        if (iVar9 == 0) {
            iVar3 = ___ratelimit(obj.lpass_cdc_tx_macro_path_get._rs,"lpass_cdc_tx_macro_path_get");
            puVar7 = puVar6;
            if (iVar3 != 0) {
                puVar7 = puStack_b0;
                _printk(0x8000ef9,"lpass_cdc_tx_macro_path_get");
            }
code_r0x0800f90c:
            uVar4 = 0xffffffea;
        }
        else {
            iVar9 = strpbrk(iVar9,"01234567");
            if (iVar9 == 0) {
                iVar3 = ___ratelimit(obj.lpass_cdc_tx_macro_path_get._rs.200,"lpass_cdc_tx_macro_path_get");
                puVar7 = puVar6;
                if (iVar3 != 0) {
                    _printk(0x80009a1,"lpass_cdc_tx_macro_path_get");
                    puVar7 = puVar6;
                }
                goto code_r0x0800f90c;
            }
            uVar2 = kstrtouint(iVar9,10);
            uVar4 = uVar2;
            if ((uVar2 < 0) &&
               (iVar3 = ___ratelimit(obj.lpass_cdc_tx_macro_path_get._rs.202,"lpass_cdc_tx_macro_path_get"),
               iVar3 != 0)) {
                puVar7 = puVar5;
                _printk(0x8000ffc,"lpass_cdc_tx_macro_path_get");
            }
        }
        kfree(puVar5);
        puVar6 = puVar7;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_a8) {
        return uVar4;
    }
    auVar10 = __stack_chk_fail();
    iVar8 = auVar10._0_8_;
    *extraout_x18_01 = sym.lpass_cdc_tx_macro_get_channel_map;
    pcStack_d8 = sym.lpass_cdc_tx_macro_get_channel_map;
    iVar9 = sp_el0;
    iStack_e8 = *(iVar9 + 0x5e0);
    iStack_f8 = 0;
    uStack_f0 = 0;
    ppuStack_e0 = &ppuStack_a0;
    uVar4 = sym.lpass_cdc_tx_macro_get_data(*(iVar8 + 0x58),&uStack_f0,&iStack_f8,0x80014e6);
    if ((uVar4 & 1) == 0) {
        uVar4 = 0xffffffea;
    }
    else if (*(iVar8 + 8) - 1 < 3) {
        *puVar6 = *(iStack_f8 + *(iVar8 + 8) * 8 + 0xaa0);
        if (3 < *(iVar8 + 8)) goto code_r0x0800fa6c;
        uVar4 = 0;
        *auVar10._8_8_ = *(iStack_f8 + *(iVar8 + 8) * 8 + 0xac0);
    }
    else {
        uVar4 = ___ratelimit(obj.lpass_cdc_tx_macro_get_channel_map._rs,"lpass_cdc_tx_macro_get_channel_map");
        if (uVar4 != 0) {
            _dev_err(uStack_f0,"%s: Invalid AIF\n","lpass_cdc_tx_macro_get_channel_map");
            uVar4 = 0;
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_e8) {
        return uVar4;
    }
    __stack_chk_fail(uVar4);
code_r0x0800fa6c:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x800fa70);
    (*pcVar1)();
}


// ===== sym.lpass_cdc_tx_macro_put_bcs_ch_sel @ 0x0800f76c (size 160) =====

uint64_t sym.lpass_cdc_tx_macro_put_bcs_ch_sel(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    uint32_t uVar2;
    int iVar3;
    uint64_t uVar4;
    uint *puVar5;
    int64_t iVar6;
    uint *puVar7;
    uint *puVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    int64_t iStack_b8;
    ulong uStack_b0;
    int64_t iStack_a8;
    uchar **ppuStack_a0;
    code *pcStack_98;
    uint *puStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    int64_t iStack_50;
    int64_t iStack_48;
    uchar auStack_38 [8];
    uchar auStack_30 [8];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_28 = *(iVar9 + 0x5e0);
    iVar9 = *(arg1 + 0x80);
    uVar4 = sym.lpass_cdc_tx_macro_get_data(iVar9,auStack_38,auStack_30,0x8001308);
    if (((uVar4 & 1) == 0) || (0xc < *(arg2 + 0x48))) {
        uVar4 = 0xffffffea;
    }
    else {
        snd_soc_component_update_bits(iVar9,0x30dc,0xf);
        uVar4 = 0;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_28) {
        return uVar4;
    }
    auVar10 = __stack_chk_fail(uVar4);
    puVar8 = auVar10._8_8_;
    *extraout_x18 = sym.lpass_cdc_tx_macro_path_get;
    pcStack_58 = sym.lpass_cdc_tx_macro_path_get;
    iVar6 = sp_el0;
    iStack_68 = *(iVar6 + 0x5e0);
    puVar7 = 0xcc0;
    puStack_60 = &stack0xffffffffffffffe0;
    iStack_50 = arg2;
    iStack_48 = iVar9;
    puVar5 = kstrndup(auVar10._0_8_,10);
    puStack_70 = puVar5;
    if (puVar5 == NULL) {
        uVar4 = 0xffffffea;
    }
    else {
        iVar9 = strsep(&puStack_70,0x800099f);
        if (iVar9 == 0) {
            iVar3 = ___ratelimit(obj.lpass_cdc_tx_macro_path_get._rs,"lpass_cdc_tx_macro_path_get");
            puVar8 = puVar7;
            if (iVar3 != 0) {
                puVar8 = puStack_70;
                _printk(0x8000ef9,"lpass_cdc_tx_macro_path_get");
            }
code_r0x0800f90c:
            uVar4 = 0xffffffea;
        }
        else {
            iVar9 = strpbrk(iVar9,"01234567");
            if (iVar9 == 0) {
                iVar3 = ___ratelimit(obj.lpass_cdc_tx_macro_path_get._rs.200,"lpass_cdc_tx_macro_path_get");
                puVar8 = puVar7;
                if (iVar3 != 0) {
                    _printk(0x80009a1,"lpass_cdc_tx_macro_path_get");
                    puVar8 = puVar7;
                }
                goto code_r0x0800f90c;
            }
            uVar2 = kstrtouint(iVar9,10);
            uVar4 = uVar2;
            if ((uVar2 < 0) &&
               (iVar3 = ___ratelimit(obj.lpass_cdc_tx_macro_path_get._rs.202,"lpass_cdc_tx_macro_path_get"),
               iVar3 != 0)) {
                puVar8 = puVar5;
                _printk(0x8000ffc,"lpass_cdc_tx_macro_path_get");
            }
        }
        kfree(puVar5);
        puVar7 = puVar8;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_68) {
        return uVar4;
    }
    auVar10 = __stack_chk_fail();
    iVar6 = auVar10._0_8_;
    *extraout_x18_00 = sym.lpass_cdc_tx_macro_get_channel_map;
    pcStack_98 = sym.lpass_cdc_tx_macro_get_channel_map;
    iVar9 = sp_el0;
    iStack_a8 = *(iVar9 + 0x5e0);
    iStack_b8 = 0;
    uStack_b0 = 0;
    ppuStack_a0 = &puStack_60;
    uVar4 = sym.lpass_cdc_tx_macro_get_data(*(iVar6 + 0x58),&uStack_b0,&iStack_b8,0x80014e6);
    if ((uVar4 & 1) == 0) {
        uVar4 = 0xffffffea;
    }
    else if (*(iVar6 + 8) - 1 < 3) {
        *puVar7 = *(iStack_b8 + *(iVar6 + 8) * 8 + 0xaa0);
        if (3 < *(iVar6 + 8)) goto code_r0x0800fa6c;
        uVar4 = 0;
        *auVar10._8_8_ = *(iStack_b8 + *(iVar6 + 8) * 8 + 0xac0);
    }
    else {
        uVar4 = ___ratelimit(obj.lpass_cdc_tx_macro_get_channel_map._rs,"lpass_cdc_tx_macro_get_channel_map");
        if (uVar4 != 0) {
            _dev_err(uStack_b0,"%s: Invalid AIF\n","lpass_cdc_tx_macro_get_channel_map");
            uVar4 = 0;
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_a8) {
        return uVar4;
    }
    __stack_chk_fail(uVar4);
code_r0x0800fa6c:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x800fa70);
    (*pcVar1)();
}


// ===== sym.lpass_cdc_tx_macro_path_get @ 0x0800f80c (size 344) =====

uint64_t sym.lpass_cdc_tx_macro_path_get(ulong noname_0,int64_t arg1)

{
    code *pcVar1;
    uint32_t uVar2;
    int iVar3;
    ulong in_x0;
    uint *puVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint *puVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    int64_t iStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    uint *puStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    puVar7 = 0xcc0;
    puVar4 = kstrndup(in_x0,10);
    puStack_30 = puVar4;
    if (puVar4 == NULL) {
        uVar8 = 0xffffffea;
    }
    else {
        iVar5 = strsep(&puStack_30,0x800099f);
        if (iVar5 == 0) {
            iVar3 = ___ratelimit(obj.lpass_cdc_tx_macro_path_get._rs,"lpass_cdc_tx_macro_path_get");
            arg1 = puVar7;
            if (iVar3 != 0) {
                arg1 = puStack_30;
                _printk(0x8000ef9,"lpass_cdc_tx_macro_path_get");
            }
code_r0x0800f90c:
            uVar8 = 0xffffffea;
        }
        else {
            iVar5 = strpbrk(iVar5,"01234567");
            if (iVar5 == 0) {
                iVar3 = ___ratelimit(obj.lpass_cdc_tx_macro_path_get._rs.200,"lpass_cdc_tx_macro_path_get");
                arg1 = puVar7;
                if (iVar3 != 0) {
                    _printk(0x80009a1,"lpass_cdc_tx_macro_path_get");
                    arg1 = puVar7;
                }
                goto code_r0x0800f90c;
            }
            uVar2 = kstrtouint(iVar5,10);
            uVar8 = uVar2;
            if ((uVar2 < 0) &&
               (iVar3 = ___ratelimit(obj.lpass_cdc_tx_macro_path_get._rs.202,"lpass_cdc_tx_macro_path_get"),
               iVar3 != 0)) {
                arg1 = puVar4;
                _printk(0x8000ffc,"lpass_cdc_tx_macro_path_get");
            }
        }
        kfree(puVar4);
        puVar7 = arg1;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_28) {
        return uVar8;
    }
    auVar9 = __stack_chk_fail();
    iVar6 = auVar9._0_8_;
    *extraout_x18 = sym.lpass_cdc_tx_macro_get_channel_map;
    pcStack_58 = sym.lpass_cdc_tx_macro_get_channel_map;
    iVar5 = sp_el0;
    iStack_68 = *(iVar5 + 0x5e0);
    iStack_78 = 0;
    uStack_70 = 0;
    puStack_60 = &stack0xffffffffffffffe0;
    uVar8 = sym.lpass_cdc_tx_macro_get_data(*(iVar6 + 0x58),&uStack_70,&iStack_78,0x80014e6);
    if ((uVar8 & 1) == 0) {
        uVar8 = 0xffffffea;
    }
    else if (*(iVar6 + 8) - 1 < 3) {
        *puVar7 = *(iStack_78 + *(iVar6 + 8) * 8 + 0xaa0);
        if (3 < *(iVar6 + 8)) goto code_r0x0800fa6c;
        uVar8 = 0;
        *auVar9._8_8_ = *(iStack_78 + *(iVar6 + 8) * 8 + 0xac0);
    }
    else {
        uVar8 = ___ratelimit(obj.lpass_cdc_tx_macro_get_channel_map._rs,"lpass_cdc_tx_macro_get_channel_map");
        if (uVar8 != 0) {
            _dev_err(uStack_70,"%s: Invalid AIF\n","lpass_cdc_tx_macro_get_channel_map");
            uVar8 = 0;
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_68) {
        return uVar8;
    }
    __stack_chk_fail(uVar8);
code_r0x0800fa6c:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x800fa70);
    (*pcVar1)();
}


// ===== sym.lpass_cdc_tx_macro_get_channel_map @ 0x0800f964 (size 268) =====

void sym.lpass_cdc_tx_macro_get_channel_map(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    code *pcVar2;
    uint64_t uVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    int64_t iStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    iStack_48 = 0;
    uStack_40 = 0;
    uVar3 = sym.lpass_cdc_tx_macro_get_data(*(arg1 + 0x58),&uStack_40,&iStack_48,0x80014e6);
    if ((uVar3 & 1) == 0) {
        uVar4 = 0xffffffea;
    }
    else if (*(arg1 + 8) - 1 < 3) {
        *arg3 = *(iStack_48 + *(arg1 + 8) * 8 + 0xaa0);
        if (3 < *(arg1 + 8)) goto code_r0x0800fa6c;
        uVar4 = 0;
        *arg2 = *(iStack_48 + *(arg1 + 8) * 8 + 0xac0);
    }
    else {
        uVar4 = ___ratelimit(obj.lpass_cdc_tx_macro_get_channel_map._rs,"lpass_cdc_tx_macro_get_channel_map");
        if (uVar4 != 0) {
            _dev_err(uStack_40,"%s: Invalid AIF\n","lpass_cdc_tx_macro_get_channel_map");
            uVar4 = 0;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(uVar4);
code_r0x0800fa6c:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x800fa70);
    (*pcVar2)();
}


// ===== sym.lpass_cdc_tx_macro_hw_params @ 0x0800fa70 (size 560) =====

void sym.lpass_cdc_tx_macro_hw_params(ulong noname_0,int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    code *pcVar4;
    int iVar5;
    uint64_t uVar6;
    ulong uVar7;
    uchar *puVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t arg1_00;
    uint uVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    int64_t iStack_68;
    uchar auStack_60 [8];
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_58 = *(iVar2 + 0x5e0);
    arg1_00 = *(arg2 + 0x58);
    iStack_68 = 0;
    uVar6 = sym.lpass_cdc_tx_macro_get_data(arg1_00,auStack_60,&iStack_68,0x8000db7);
    iVar2 = iStack_68;
    if ((uVar6 & 1) == 0) {
code_r0x0800fc38:
        uVar7 = 0xffffffea;
    }
    else {
        iVar5 = *(arg1 + 0x128);
        if (iVar5 < 48000) {
            if (iVar5 == 8000) {
                uVar10 = 0;
            }
            else if (iVar5 == 16000) {
                uVar10 = 1;
            }
            else {
                if (iVar5 != 32000) goto code_r0x0800fc20;
                uVar10 = 3;
            }
        }
        else if (iVar5 < 0x2ee00) {
            if (iVar5 == 48000) {
                uVar10 = 4;
            }
            else {
                if (iVar5 != 96000) {
code_r0x0800fc20:
                    iVar5 = ___ratelimit(obj.lpass_cdc_tx_macro_hw_params._rs,"lpass_cdc_tx_macro_hw_params");
                    if (iVar5 != 0) {
                        _dev_err(*(arg1_00 + 0x18),"%s: Invalid TX sample rate: %d\n","lpass_cdc_tx_macro_hw_params",
                                 *(arg1 + 0x128));
                        uVar7 = 0xffffffea;
                        goto code_r0x0800fc3c;
                    }
                    goto code_r0x0800fc38;
                }
                uVar10 = 5;
            }
        }
        else if (iVar5 == 0x2ee00) {
            uVar10 = 6;
        }
        else {
            if (iVar5 != 0x5dc00) goto code_r0x0800fc20;
            uVar10 = 7;
        }
        if (4 < *(arg2 + 8)) {
code_r0x0800fc98:
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x5512,0x800fc9c);
            (*pcVar4)();
        }
        uVar9 = *(iStack_68 + *(arg2 + 8) * 8 + 0xaa0);
        uVar6 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar3 = 8;
        if (uVar9 != 0) {
            uVar3 = LZCOUNT((uVar6 >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4) << 0x38);
        }
        while ((uVar3 & 0x38) == 0) {
            snd_soc_component_update_bits(arg1_00,uVar3 * 0x80 + 0x400,0xf,uVar10);
            if (4 < *(arg2 + 8)) goto code_r0x0800fc98;
            if (6 < uVar3) break;
            uVar1 = -1L << (uVar3 + 1 & 0x3f) & *(iVar2 + *(arg2 + 8) * 8 + 0xaa0);
            uVar6 = (uVar1 & 0xaa) >> 1 | (uVar1 & 0x55) << 1;
            uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
            uVar3 = 8;
            if ((uVar1 & 0xff) != 0) {
                uVar3 = LZCOUNT((uVar6 >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4) << 0x38);
            }
        }
        uVar7 = 0;
    }
code_r0x0800fc3c:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_58) {
        auVar11 = __stack_chk_fail(uVar7);
        puVar8 = auVar11._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar8 != NULL) {
            switch(*puVar8) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar8,auVar11._8_8_,0);
                break;
            default:
                return;
            }
        }
    //WARNING: Does not return
        pcVar4 = SoftwareBreakpoint(0x5502,0x800fcf8);
        (*pcVar4)();
    }
    return;
}


// ===== sym.__cfi_check_fail @ 0x0800fca0 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800fce4

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
    //switch table (4 cases) at 0x8000766
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800fcf8);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x0800fd20 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register
              (reloc.lpass_cdc_tx_macro_probe.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x0800fd54 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.lpass_cdc_tx_macro_probe.5b6619861e1a228dc5fbc66a018b2e17.cfi_jt);
    return;
}

