// decompiled from mbhc_dlkm by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08004000 (size 976) =====

//WARNING: Switch with 1 destination removed at 0x08009f80

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x12f2e4d279e33bdb) {
        if (arg1 < -0x2ee0710dce68437c) {
            if (-0x41693dced3920c53 < arg1) {
                if (arg1 != -0x41693dced3920c52) {
                    if (arg1 == -0x3e7cbd2a45106ba3) {
                        if ((pcVar1 + -0x8004440 >> 3 | pcVar1 << 0x3d) < 5) {
                            return;
                        }
                    }
                    else if ((arg1 == -0x3987c0e26ee29729) && ((pcVar1 + -0x80044b0 >> 3 | pcVar1 << 0x3d) < 7)) {
                        return;
                    }
                    goto code_r0x08009f40;
                }
                pcVar2 = sym.wcd_cancel_btn_work.cfi_jt;
                goto code_r0x08004374;
            }
            if (arg1 != -0x57a863d6bb85b52a) {
                if ((arg1 == -0x550b9e52359ac614) && ((pcVar1 + -0x8004468 >> 3 | pcVar1 << 0x3d) < 3)) {
                    return;
                }
                goto code_r0x08009f40;
            }
            pcVar2 = sym.wcd_mbhc_start.cfi_jt;
        }
        else if (arg1 < 0x721796b16311303) {
            if (arg1 == -0x2ee0710dce68437c) {
                pcVar2 = sym.delayed_work_timer_fn.cfi_jt;
            }
            else {
                if (arg1 != 0x2b3a43e29242445) goto code_r0x08009f40;
                pcVar2 = sym.init_module.cfi_jt;
            }
        }
        else if (arg1 == 0x721796b16311303) {
            pcVar2 = sym.wcd_mbhc_find_plug_and_report.cfi_jt;
        }
        else if (arg1 == 0x7ff5a213d37b1a6) {
            pcVar2 = sym.headset_status_read.47703894683a65bd92c9bc7b673552c9.cfi_jt;
        }
        else {
            if (arg1 != 0xddf30cf7c7cb082) goto code_r0x08009f40;
            pcVar2 = sym.wcd_enable_curr_micbias.cfi_jt;
        }
    }
    else if (arg1 < 0x6ab7c10ba9a53fbb) {
        if (arg1 < 0x4c54c23d75c9d9bb) {
            if (arg1 == 0x12f2e4d279e33bdb) {
                pcVar2 = sym.__typeid__ZTSFvP8wcd_mbhcP11work_structE_global_addr;
            }
            else {
                if (arg1 != 0x1d7ed092cb04d3f1) goto code_r0x08009f40;
                pcVar2 = sym.headset_status_write.47703894683a65bd92c9bc7b673552c9.cfi_jt;
            }
        }
        else if (arg1 == 0x4c54c23d75c9d9bb) {
            pcVar2 = sym.wcd_mbhc_hs_elec_irq.cfi_jt;
        }
        else if (arg1 == 0x4dff3ba4559e66f7) {
            pcVar2 = sym.wcd_mbhc_init.cfi_jt;
        }
        else {
            if (arg1 != 0x65023f962479ff2b) goto code_r0x08009f40;
            pcVar2 = sym.wcd_mbhc_jack_report.cfi_jt;
        }
    }
    else if (arg1 < 0x7d57972cd3914fb1) {
        if (arg1 != 0x6ab7c10ba9a53fbb) {
            if (arg1 != 0x7bab4b804db7b328) goto code_r0x08009f40;
            pcVar2 = sym.__typeid__ZTSFbP8wcd_mbhcE_global_addr;
            goto code_r0x08004374;
        }
        pcVar2 = sym.wcd_mbhc_get_impedance.cfi_jt;
    }
    else {
        if (arg1 == 0x7d57972cd3914fb1) {
            pcVar2 = sym.wcd_mbhc_usbc_ana_event_handler.47703894683a65bd92c9bc7b673552c9.cfi_jt;
code_r0x08004374:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08009f40;
        }
        if (arg1 == 0x7e04a0fb7ad8bcd5) {
            pcVar2 = sym.cleanup_module.cfi_jt;
        }
        else {
            if (arg1 != 0x7f3209be271c335a) goto code_r0x08009f40;
            pcVar2 = sym.wcd_mbhc_report_plug.cfi_jt;
        }
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08009f40:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8009f94);
    (*pcVar1)();
}


// ===== sym.wcd_mbhc_start.cfi_jt @ 0x080043d8 (size 8) =====

uint32_t sym.wcd_mbhc_start.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong uVar1;
    code *pcVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    int *piVar7;
    uint64_t uVar8;
    int64_t iVar9;
    ulong unaff_x30;
    uchar noname_1 [16];
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        return 0xffffffea;
    }
    if (param_2 == 0) {
        return 0xffffffea;
    }
    iVar9 = *(*(param_1 + 0xf8) + 0x20);
    *(param_1 + 0x90) = param_2;
    _dev_printk(0x800349a,*(*(param_1 + 0xf8) + 0x18),"%s: enter\n","wcd_mbhc_start");
    piVar7 = param_2 + 0x58;
    *piVar7 = 0;
    iVar6 = of_find_property(*(*(iVar9 + 0x40) + 0x2f0),"qcom,msm-mbhc-usbc-audio-supported",0);
    uVar3 = 0;
    if (iVar6 != 0) {
        uVar3 = of_property_read_variable_u32_array
                          (*(*(iVar9 + 0x40) + 0x2f0),"qcom,msm-mbhc-usbc-audio-supported",piVar7,1,0);
        uVar3 = uVar3 & uVar3 >> 0x1f;
    }
    if ((*piVar7 == 0) || (uVar3 != 0)) {
        _dev_printk(0x800349a,*(iVar9 + 0x40),"%s: %s in dt node is missing or false\n","wcd_mbhc_start",
                    "qcom,msm-mbhc-usbc-audio-supported");
        _dev_printk(0x800349a,*(iVar9 + 0x40),0x80016b4,"wcd_mbhc_start");
        if (*piVar7 != 0) goto code_r0x0800622c;
code_r0x08006348:
        if (*(param_1 + 0xf4) == '\0') {
            iVar9 = *(param_1 + 0x90);
            uVar8 = 0;
            iVar6 = iVar9 + 0x24;
            do {
                if (*(iVar6 + uVar8 * 4) != 0) {
                    if (uVar8 < 6) {
                        iVar4 = snd_jack_set_key(*(param_1 + 0x2a8),*(uVar8 * 4 + 0x8003cb8));
                        if (iVar4 == 0) {
                            input_set_capability(*(*(param_1 + 0x2a8) + 0x20),1,*(iVar6 + uVar8 * 4));
                            _printk(0x8002b13,"wcd_mbhc_set_keycode",uVar8 & 0xffffffff,*(iVar6 + uVar8 * 4));
                            goto code_r0x08006378;
                        }
                        _printk(0x800291f,"wcd_mbhc_set_keycode",*(iVar9 + uVar8 * 4 + 0x24));
                    }
                    else if ((obj.wcd_mbhc_set_keycode.__already_done & 1) == 0) {
                        obj.wcd_mbhc_set_keycode.__already_done = 0x1;
                        __warn_printk("Wrong button number:%d\n",uVar8 & 0xffffffff);
    //WARNING: Does not return
                        pcVar2 = SoftwareBreakpoint(0x800,0x8006410);
                        (*pcVar2)();
                    }
                    _printk(0x800213f);
                    goto code_r0x0800643c;
                }
code_r0x08006378:
                uVar8 = uVar8 + 1;
            } while (uVar8 != 8);
            if (*(iVar9 + 0x24) != 0) {
                *(param_1 + 0xf4) = 1;
            }
        }
code_r0x0800643c:
        if (((**(param_1 + 0x90) == '\0') || (*(param_1 + 0x188) != 0)) || (*(param_1 + 400) != 0)) {
            sym.wcd_mbhc_initialise(param_1);
            uVar3 = 0;
            iVar4 = *piVar7;
        }
        else {
            uVar5 = jiffies_to_usecs(0x3ffffffffffffffe);
            uVar1 = 0x3ffffffffffffffe;
            if (3999999 < uVar5) {
                uVar1 = 1000;
            }
            queue_delayed_work_on(0x20,_snd_soc_jack_report,param_1 + 0x100,uVar1);
            iVar4 = *piVar7;
        }
        if (iVar4 != 0) {
            *(param_1 + 0x410) = 0;
            *(param_1 + 0x400) = sym.wcd_mbhc_usbc_ana_event_handler.47703894683a65bd92c9bc7b673552c9.cfi_jt;
            uVar3 = fsa4480_reg_notifier(param_1 + 0x400,*(param_1 + 0x3f8));
        }
    }
    else {
code_r0x0800622c:
        iVar6 = of_find_property(*(*(iVar9 + 0x40) + 0x2f0),"qcom,uart-audio-sw-gpio",0);
        if ((iVar6 == 0) ||
           (uVar3 = sym.wcd_mbhc_init_gpio(param_1,noname_1,param_2 + 0x60,param_2 + 0x68), uVar3 == 0)) {
            _dev_printk(0x800349a,*(*(param_1 + 0xf8) + 0x18),"%s: usbc analog enabled\n","wcd_mbhc_start");
            *(param_1 + 0xd4) = 2;
            iVar6 = of_parse_phandle(*(*(iVar9 + 0x40) + 0x2f0),"fsa4480-i2c-handle",0);
            *(param_1 + 0x3f8) = iVar6;
            if (iVar6 != 0) goto code_r0x08006348;
            _dev_err(*(iVar9 + 0x40),"%s: fsa4480 i2c node not found\n","wcd_mbhc_start");
            uVar3 = 0xffffffea;
        }
        _dev_printk(0x800349a,*(*(param_1 + 0xf8) + 0x18),"%s: leave %d\n","wcd_mbhc_start",uVar3);
    }
    return uVar3;
}


// ===== sym.wcd_mbhc_find_plug_and_report.cfi_jt @ 0x080043e0 (size 8) =====

void sym.wcd_mbhc_find_plug_and_report.cfi_jt(int64_t param_1,uint32_t param_2)

{
    char cVar1;
    int16_t iVar2;
    code *pcVar3;
    uint64_t uVar4;
    ulong uVar5;
    uint8_t uVar6;
    ulong uVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x3d0) != '\0') {
        uVar5 = 0x8001e4c;
        goto code_r0x08005fb0;
    }
    _printk(0x8002ab7,"wcd_mbhc_find_plug_and_report",*(param_1 + 0xc1),param_2);
    uVar4 = mutex_is_locked(param_1 + 0x328);
    if (((uVar4 & 1) == 0) && ((obj.wcd_mbhc_find_plug_and_report.__already_done & 1) == 0)) {
        obj.wcd_mbhc_find_plug_and_report.__already_done = 0x1;
        __warn_printk("%s: BCL should have acquired\n","wcd_mbhc_find_plug_and_report");
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x800,0x80060a8);
        (*pcVar3)();
    }
    uVar6 = *(param_1 + 0xc1);
    if (uVar6 == param_2) {
        _printk(0x80031be,"wcd_mbhc_find_plug_and_report");
    }
    else {
        switch(param_2) {
        case 1:
            if ((*(*(param_1 + 0x90) + 0x54) != '\0') && (pcVar3 = *(*(param_1 + 1000) + 0x18), pcVar3 != NULL)) {
                if (1 < (pcVar3 + -0x8004410 >> 3 | pcVar3 << 0x3d)) {
                    __cfi_slowpath_diag(0x7bab4b804db7b328,pcVar3,0x8000690);
                }
                (*pcVar3)(param_1);
                uVar6 = *(param_1 + 0xc1);
            }
            if (uVar6 == 2) {
                sym.wcd_mbhc_report_plug(param_1,0,1);
            }
            sym.wcd_mbhc_report_plug(param_1,1,3);
            uVar5 = *(param_1 + 0x418);
            uVar7 = 0x14;
            break;
        case 2:
            sym.wcd_mbhc_report_plug(param_1,1,1);
            uVar5 = *(param_1 + 0x418);
            uVar7 = 0x15;
            break;
        case 3:
            cVar1 = *(*(param_1 + 0x90) + 0x10);
            sym.wcd_mbhc_report_plug(param_1,1,4);
            extcon_set_state_sync(*(param_1 + 0x418),0x17,1);
            if (cVar1 == '\0') goto code_r0x08005fa8;
            _printk(0x8002860,"wcd_mbhc_find_plug_and_report");
            iVar8 = *(param_1 + 0x3a8);
            if (*(iVar8 + 0xb8) == 0) {
                iVar2 = *(iVar8 + 0x168);
                if (iVar2 != 0) goto code_r0x08006044;
code_r0x08005ec0:
                iVar2 = *(iVar8 + 0x48);
                if (iVar2 != 0) goto code_r0x08006060;
code_r0x08005ec8:
                iVar2 = *(iVar8 + 0xa8);
            }
            else {
                snd_soc_component_update_bits(*(param_1 + 0xf8),*(iVar8 + 0xb8),*(iVar8 + 0xba),0);
                iVar8 = *(param_1 + 0x3a8);
                iVar2 = *(iVar8 + 0x168);
                if (iVar2 == 0) goto code_r0x08005ec0;
code_r0x08006044:
                snd_soc_component_update_bits(*(param_1 + 0xf8),iVar2,*(iVar8 + 0x16a),0);
                iVar8 = *(param_1 + 0x3a8);
                iVar2 = *(iVar8 + 0x48);
                if (iVar2 == 0) goto code_r0x08005ec8;
code_r0x08006060:
                snd_soc_component_update_bits(*(param_1 + 0xf8),iVar2,*(iVar8 + 0x4a),1 << (*(iVar8 + 0x4b) & 0x1f));
                iVar8 = *(param_1 + 0x3a8);
                iVar2 = *(iVar8 + 0xa8);
            }
            if (iVar2 != 0) {
                snd_soc_component_update_bits(*(param_1 + 0xf8),iVar2,*(iVar8 + 0xaa),3 << (*(iVar8 + 0xab) & 0x1f));
            }
            sym.wcd_mbhc_hs_elec_irq(param_1,0,1);
            goto code_r0x08005fa8;
        case 4:
            if (uVar6 == 2) {
                sym.wcd_mbhc_report_plug(param_1,0,1);
                extcon_set_state_sync(*(param_1 + 0x418),0x15,0);
                uVar6 = *(param_1 + 0xc1);
            }
            if (uVar6 == 1) {
                sym.wcd_mbhc_report_plug(param_1,0,3);
                extcon_set_state_sync(*(param_1 + 0x418),0x14,0);
                uVar6 = *(param_1 + 0xc1);
            }
            if (uVar6 == 0) {
                *(param_1 + 0xc1) = 4;
            }
            uVar5 = *(param_1 + 0x418);
            uVar7 = 0x3e;
            break;
        default:
            __warn_printk("Unexpected current plug_type %d, plug_type %d [TF-HEADSET]\n",uVar6,param_2);
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x800,0x8005f40);
            (*pcVar3)();
        }
        extcon_set_state_sync(uVar5,uVar7,1);
    }
code_r0x08005fa8:
    uVar5 = 0x8002bbe;
code_r0x08005fb0:
    _printk(uVar5,"wcd_mbhc_find_plug_and_report");
    return;
}


// ===== sym.delayed_work_timer_fn.cfi_jt @ 0x080043e8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.delayed_work_timer_fn.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.wcd_enable_curr_micbias.cfi_jt @ 0x080043f0 (size 8) =====

void sym.wcd_enable_curr_micbias.cfi_jt(int64_t param_1,uint param_2)

{
    uint8_t uVar1;
    int16_t iVar2;
    int64_t iVar3;
    int iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(*(param_1 + 0x98) + 0xd0) != 0) {
        return;
    }
    _printk(0x80027d6,"wcd_enable_curr_micbias",param_2);
    switch(param_2) {
    case 0:
        iVar3 = *(param_1 + 0x3a8);
        if (*(iVar3 + 0x188) != 0) {
            snd_soc_component_update_bits(*(param_1 + 0xf8),*(iVar3 + 0x188),*(iVar3 + 0x18a),0);
            iVar3 = *(param_1 + 0x3a8);
        }
        if (*(iVar3 + 0x168) != 0) {
            snd_soc_component_update_bits
                      (*(param_1 + 0xf8),*(iVar3 + 0x168),*(iVar3 + 0x16a),3 << (*(iVar3 + 0x16b) & 0x1f));
        }
        sym.wcd_program_btn_threshold(param_1,0);
        break;
    case 1:
        iVar3 = *(param_1 + 0x3a8);
        if (*(iVar3 + 0x168) == 0) {
            iVar2 = *(iVar3 + 0xb8);
            if (iVar2 == 0) goto code_r0x0800484c;
code_r0x080048d4:
            snd_soc_component_update_bits(*(param_1 + 0xf8),iVar2,*(iVar3 + 0xba),1 << (*(iVar3 + 0xbb) & 0x1f));
            iVar3 = *(param_1 + 0x3a8);
            iVar2 = *(iVar3 + 0x188);
        }
        else {
            snd_soc_component_update_bits(*(param_1 + 0xf8),*(iVar3 + 0x168),*(iVar3 + 0x16a),0);
            iVar3 = *(param_1 + 0x3a8);
            iVar2 = *(iVar3 + 0xb8);
            if (iVar2 != 0) goto code_r0x080048d4;
code_r0x0800484c:
            iVar2 = *(iVar3 + 0x188);
        }
        if (iVar2 != 0) {
            uVar1 = *(iVar3 + 0x18b);
            iVar4 = 2;
code_r0x08004954:
            snd_soc_component_update_bits(*(param_1 + 0xf8),iVar2,*(iVar3 + 0x18a),iVar4 << (uVar1 & 0x1f));
        }
        goto code_r0x08004964;
    case 2:
        iVar3 = *(param_1 + 0x3a8);
        if (*(iVar3 + 0x168) == 0) {
            iVar2 = *(iVar3 + 0xb8);
            if (iVar2 == 0) goto code_r0x08004870;
code_r0x08004928:
            snd_soc_component_update_bits(*(param_1 + 0xf8),iVar2,*(iVar3 + 0xba),1 << (*(iVar3 + 0xbb) & 0x1f));
            iVar3 = *(param_1 + 0x3a8);
            iVar2 = *(iVar3 + 0x188);
        }
        else {
            snd_soc_component_update_bits
                      (*(param_1 + 0xf8),*(iVar3 + 0x168),*(iVar3 + 0x16a),3 << (*(iVar3 + 0x16b) & 0x1f));
            iVar3 = *(param_1 + 0x3a8);
            iVar2 = *(iVar3 + 0xb8);
            if (iVar2 != 0) goto code_r0x08004928;
code_r0x08004870:
            iVar2 = *(iVar3 + 0x188);
        }
        if (iVar2 != 0) {
            uVar1 = *(iVar3 + 0x18b);
            iVar4 = 1;
            goto code_r0x08004954;
        }
code_r0x08004964:
        sym.wcd_program_btn_threshold(param_1,1);
        break;
    case 3:
        iVar3 = *(param_1 + 0x3a8);
        if (*(iVar3 + 0x168) == 0) {
            iVar2 = *(iVar3 + 0xb8);
            if (iVar2 == 0) goto code_r0x08004894;
code_r0x08004990:
            snd_soc_component_update_bits(*(param_1 + 0xf8),iVar2,*(iVar3 + 0xba),1 << (*(iVar3 + 0xbb) & 0x1f));
            iVar3 = *(param_1 + 0x3a8);
            iVar2 = *(iVar3 + 0x188);
        }
        else {
            snd_soc_component_update_bits(*(param_1 + 0xf8),*(iVar3 + 0x168),*(iVar3 + 0x16a),0);
            iVar3 = *(param_1 + 0x3a8);
            iVar2 = *(iVar3 + 0xb8);
            if (iVar2 != 0) goto code_r0x08004990;
code_r0x08004894:
            iVar2 = *(iVar3 + 0x188);
        }
        if (iVar2 != 0) {
            snd_soc_component_update_bits(*(param_1 + 0xf8),iVar2,*(iVar3 + 0x18a),0);
        }
        break;
    default:
        _printk(0x8003296,"wcd_enable_curr_micbias");
    }
    _printk(0x80026ba,"wcd_enable_curr_micbias");
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080043f8 (size 8) =====

ulong sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __mutex_init(obj.wcd_mbhc_hs_elec_irq.__already_done,"&hphl_pa_lock",obj.init_completion.__key);
    __mutex_init(obj.hphr_pa_lock,"&hphr_pa_lock",obj.init_completion.__key);
    return 0;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08004400 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    return;
}


// ===== sym.wcd_mbhc_report_plug.cfi_jt @ 0x08004408 (size 8) =====

void sym.wcd_mbhc_report_plug.cfi_jt(int64_t param_1,int param_2,uint32_t param_3)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int16_t iVar5;
    uint uVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong uVar8;
    code *pcVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar8 = *(param_1 + 0xf8);
    uVar4 = mutex_is_locked(param_1 + 0x328);
    if (((uVar4 & 1) == 0) && ((obj.wcd_mbhc_report_plug.__already_done & 1) == 0)) {
        obj.wcd_mbhc_report_plug.__already_done = 0x1;
        __warn_printk("%s: BCL should have acquired\n","wcd_mbhc_report_plug");
    //WARNING: Does not return
        pcVar9 = SoftwareBreakpoint(0x800,0x8005554);
        (*pcVar9)();
    }
    _printk(0x80017e1,"wcd_mbhc_report_plug",param_2,*(param_1 + 0xa0));
    if (param_2 != 0) {
        if ((*(*(param_1 + 0x90) + 0x10) != '\0') &&
           ((((param_3 == 4 || (*(param_1 + 0xc1) == '\x03')) && (uVar3 = *(param_1 + 0xa0), uVar3 != 0)) &&
            (uVar3 != param_3)))) {
            if ((*(param_1 + 0xef) != '\0') && (uVar3 == 3)) {
                iVar7 = *(param_1 + 0x98);
                pcVar9 = *(iVar7 + 0xd0);
                if (pcVar9 == NULL) {
                    pcVar9 = *(iVar7 + 0xf0);
                    if (pcVar9 == NULL) goto code_r0x08004e98;
code_r0x08005054:
                    __cfi_slowpath_diag(0x155f259693f926eb,pcVar9,0x80005d0);
                    (*pcVar9)(uVar8,2,0);
                    pcVar9 = *(*(param_1 + 0x98) + 0x40);
                }
                else {
                    __cfi_slowpath_diag(0x1d4dfe77ec242b3c,pcVar9,0x80005b0);
                    (*pcVar9)(uVar8,2,3);
                    iVar7 = *(param_1 + 0x98);
                    pcVar9 = *(iVar7 + 0xf0);
                    if (pcVar9 != NULL) goto code_r0x08005054;
code_r0x08004e98:
                    pcVar9 = *(iVar7 + 0x40);
                }
                if (pcVar9 != NULL) {
                    __cfi_slowpath_diag(0x7e6c99e1529760f9,pcVar9,0x80005f0);
                    (*pcVar9)(uVar8);
                    iVar5 = *(*(param_1 + 0x3a8) + 0x188);
                    if (iVar5 != 0) {
                        snd_soc_component_update_bits(*(param_1 + 0xf8),iVar5,*(*(param_1 + 0x3a8) + 0x18a),0);
                    }
                }
                *(param_1 + 0xef) = 0;
            }
            *(param_1 + 0x1c4) = 0;
            *(param_1 + 0x1b8) = 0;
            if (*(param_1 + 0x3f0) == '\0') {
                _printk(0x800234f,"wcd_mbhc_report_plug",*(param_1 + 0xa0));
                sym.wcd_mbhc_jack_report(param_1,param_1 + 0x1c8,0,0xf);
                uVar6 = 0;
                uVar3 = *(param_1 + 0xc1) - 1;
                if (uVar3 < 4) {
                    uVar6 = *(uVar3 * 4 + 0x8003748);
                }
                extcon_set_state_sync(*(param_1 + 0x418),uVar6,0);
            }
            uVar3 = *(param_1 + 0xa0);
            if (uVar3 == 4) {
                _printk(0x8001e36,"wcd_mbhc_report_plug");
                sym.wcd_enable_curr_micbias(param_1,1);
                _printk(0x80033ca,"wcd_mbhc_report_plug");
                usleep_range_state(200,0xd2,2);
                sym.wcd_mbhc_hs_elec_irq(param_1,1,1);
                uVar3 = *(param_1 + 0xa0);
            }
            *(param_1 + 0xa0) = uVar3 & 0xfffffff8;
        }
        if ((param_3 == 1) && (*(param_1 + 0xc1) == '\x01')) {
            *(param_1 + 0xa0) = *(param_1 + 0xa0) & 0xfffffffc;
        }
        if (param_3 == 1) {
            *(param_1 + 0xc1) = 2;
        }
        else if (param_3 == 4) {
            *(param_1 + 0xc1) = 3;
        }
        else if (param_3 == 3) {
            *(param_1 + 0xc1) = 1;
            *(param_1 + 0x1b0) = _delayed_work_timer_fn;
        }
        else {
            _printk(0x8002826,"wcd_mbhc_report_plug",param_3);
        }
        pcVar9 = *(*(param_1 + 0x98) + 0xb8);
        uVar4 = 0;
        if (pcVar9 != NULL) {
            __cfi_slowpath_diag(0xf1cf56a12423eb51,pcVar9,0x8000610);
            uVar4 = (*pcVar9)(uVar8);
            uVar4 = uVar4 & 0xffffffff;
        }
        if (((*(param_1 + 0x1c0) != '\0') && (*(*(param_1 + 0x98) + 0x38) != 0)) &&
           (*(*(param_1 + 0x90) + 0x44) != 0 && (uVar4 & 1) == 0)) {
            iVar7 = *(param_1 + 0x3a8);
            if (*(iVar7 + 0xb8) == 0) {
                uVar3 = 0xea;
                iVar5 = *(iVar7 + 0x218);
joined_r0x08005510:
                if (iVar5 != 0) goto code_r0x08005514;
code_r0x080052dc:
                iVar5 = *(iVar7 + 0xb8);
            }
            else {
                uVar3 = snd_soc_component_read(*(param_1 + 0xf8));
                iVar7 = *(param_1 + 0x3a8);
                uVar3 = (uVar3 & *(iVar7 + 0xba)) >> (*(iVar7 + 0xbb) & 0x1f);
                if (*(iVar7 + 0xb8) != 0) {
                    snd_soc_component_update_bits(*(param_1 + 0xf8),*(iVar7 + 0xb8),*(iVar7 + 0xba),0);
                    iVar7 = *(param_1 + 0x3a8);
                    iVar5 = *(iVar7 + 0x218);
                    goto joined_r0x08005510;
                }
                iVar5 = *(iVar7 + 0x218);
                if (iVar5 == 0) goto code_r0x080052dc;
code_r0x08005514:
                snd_soc_component_update_bits(*(param_1 + 0xf8),iVar5,*(iVar7 + 0x21a),0);
                iVar7 = *(param_1 + 0x3a8);
                iVar5 = *(iVar7 + 0xb8);
            }
            if (iVar5 != 0) {
                snd_soc_component_update_bits(*(param_1 + 0xf8),iVar5,*(iVar7 + 0xba),1 << (*(iVar7 + 0xbb) & 0x1f));
            }
            pcVar9 = *(*(param_1 + 0x98) + 0x38);
            __cfi_slowpath_diag(0x2b7b5c5602187aa9,pcVar9,0x8000630);
            puVar1 = param_1 + 0x1bc;
            (*pcVar9)(param_1,param_1 + 0x1b8,puVar1);
            iVar7 = *(param_1 + 0x3a8);
            if (*(iVar7 + 0xb8) != 0) {
                snd_soc_component_update_bits
                          (*(param_1 + 0xf8),*(iVar7 + 0xb8),*(iVar7 + 0xba),uVar3 << (*(iVar7 + 0xbb) & 0x1f));
            }
            uVar3 = *(param_1 + 0x1b8);
            uVar2 = *(*(param_1 + 0x90) + 0x44);
            if (((uVar2 < uVar3) && (param_3 == 1)) && (uVar2 < *puVar1)) {
                *(param_1 + 0x3f0) = 1;
                *(param_1 + 0xc1) = 3;
                if (*(param_1 + 0xa0) != 0) {
                    uVar3 = *(param_1 + 0xa0) & 0xfffffff8;
                    *(param_1 + 0xa0) = uVar3;
                    sym.wcd_mbhc_jack_report(param_1,param_1 + 0x1c8,uVar3,0xf);
                }
                _printk(0x8002996,"wcd_mbhc_report_plug");
                uVar3 = *(param_1 + 0x1b8);
                param_3 = 4;
            }
            _printk(0x8001d5b,"wcd_mbhc_report_plug",uVar3,*puVar1);
        }
        if (((uVar4 & 1) == 0) || (*(param_1 + 0x3f0) == '\0')) {
            uVar3 = *(param_1 + 0xa0) | param_3;
            *(param_1 + 0xa0) = uVar3;
            if (param_3 == 1) {
                pcVar9 = *(*(param_1 + 0x98) + 0xd8);
                if (pcVar9 != NULL) {
                    __cfi_slowpath_diag(0x1be676a8fa3b6db7,pcVar9,0x8000650);
                    (*pcVar9)(uVar8,0);
                    uVar3 = *(param_1 + 0xa0);
                }
                param_3 = 1;
            }
        }
        else {
            *(param_1 + 0xc1) = 3;
            if (*(param_1 + 0xa0) == 0) {
                uVar3 = 4;
            }
            else {
                uVar3 = *(param_1 + 0xa0) & 0xfffffff8;
                *(param_1 + 0xa0) = uVar3;
                sym.wcd_mbhc_jack_report(param_1,param_1 + 0x1c8,uVar3,0xf);
                uVar3 = *(param_1 + 0xa0) | 4;
            }
            param_3 = 4;
            *(param_1 + 0xa0) = uVar3;
        }
        _printk(0x800260e,"wcd_mbhc_report_plug",param_3,uVar3);
        sym.wcd_mbhc_jack_report(param_1,param_1 + 0x1c8,*(param_1 + 0xa0) | 8,0xf);
        sym.wcd_mbhc_clr_and_turnon_hph_padac(param_1);
        goto code_r0x080054c4;
    }
    uVar3 = *(param_1 + 0xa0);
    if (uVar3 == 3) {
        lpass_cdc_tx_macro_mute_hs();
        uVar3 = *(param_1 + 0xa0);
    }
    *(param_1 + 0xa0) = uVar3 & (param_3 ^ 0xffffffff);
    uVar4 = cancel_delayed_work_sync(param_1);
    if ((uVar4 & 1) == 0) {
        if (*(param_1 + 0x88) != 0) {
            _printk(0x8001fae,"wcd_mbhc_report_plug",param_3);
            sym.wcd_mbhc_jack_report(param_1,param_1 + 0x278,0,*(param_1 + 0x88));
            *(param_1 + 0x88) = *(param_1 + 0x88) & 0xffff81ff;
        }
    }
    else {
        pcVar9 = *(*(param_1 + 0x98) + 0x90);
        __cfi_slowpath_diag(0xce1a9c61fa6df8c5,pcVar9,obj.hphr_pa_lock);
        (*pcVar9)(param_1,0);
        _printk(0x8002806,"wcd_mbhc_report_plug");
    }
    if (*(param_1 + 0xef) != '\0') {
        iVar7 = *(param_1 + 0x98);
        pcVar9 = *(iVar7 + 0xd0);
        if (pcVar9 == NULL) {
            pcVar9 = *(iVar7 + 0xf0);
            if (pcVar9 == NULL) goto code_r0x08004f00;
code_r0x08004f48:
            __cfi_slowpath_diag(0x155f259693f926eb,pcVar9,0x8000570);
            (*pcVar9)(uVar8,2,0);
            pcVar9 = *(*(param_1 + 0x98) + 0x40);
        }
        else {
            __cfi_slowpath_diag(0x1d4dfe77ec242b3c,pcVar9,obj.mbhc_debugfs_dir);
            (*pcVar9)(uVar8,2,3);
            iVar7 = *(param_1 + 0x98);
            pcVar9 = *(iVar7 + 0xf0);
            if (pcVar9 != NULL) goto code_r0x08004f48;
code_r0x08004f00:
            pcVar9 = *(iVar7 + 0x40);
        }
        if (pcVar9 != NULL) {
            __cfi_slowpath_diag(0x7e6c99e1529760f9,pcVar9,0x8000590);
            (*pcVar9)(uVar8);
            iVar5 = *(*(param_1 + 0x3a8) + 0x188);
            if (iVar5 != 0) {
                snd_soc_component_update_bits(*(param_1 + 0xf8),iVar5,*(*(param_1 + 0x3a8) + 0x18a),0);
            }
        }
        *(param_1 + 0xef) = 0;
    }
    *(param_1 + 0x1c4) = 0;
    *(param_1 + 0x1b8) = 0;
    _printk(0x8002fe3,"wcd_mbhc_report_plug",param_3,*(param_1 + 0xa0));
    sym.wcd_mbhc_jack_report(param_1,param_1 + 0x1c8,*(param_1 + 0xa0),0xf);
    sym.wcd_mbhc_set_and_turnoff_hph_padac(param_1);
    *(param_1 + 0xc1) = 0;
    *(param_1 + 0x3f0) = 0;
code_r0x080054c4:
    _printk(0x80024aa,"wcd_mbhc_report_plug",*(param_1 + 0xa0));
    return;
}


// ===== sym.__typeid__ZTSFbP8wcd_mbhcE_global_addr @ 0x08004410 (size 8) =====

bool sym.__typeid__ZTSFbP8wcd_mbhcE_global_addr(int64_t param_1)

{
    bool bVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(*(param_1 + 0x3a8) + 0x1d8) == 0) {
        bVar1 = true;
    }
    else {
        uVar2 = snd_soc_component_read(*(param_1 + 0xf8));
        bVar1 = (uVar2 & *(*(param_1 + 0x3a8) + 0x1da)) >> (*(*(param_1 + 0x3a8) + 0x1db) & 0x1f) != 0;
    }
    return bVar1;
}


// ===== sym.wcd_mbhc_adc_detect_anc_plug_type.63f800c968f307bf87ec7421f61e82fa.cfi_jt @ 0x08004418 (size 8) =====

bool sym.wcd_mbhc_adc_detect_anc_plug_type.63f800c968f307bf87ec7421f61e82fa.cfi_jt(int64_t param_1)

{
    char *pcVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int iVar6;
    uint64_t uVar7;
    int16_t iVar8;
    int64_t iVar9;
    ulong *in_x18;
    bool bVar10;
    uint32_t uVar11;
    code *pcVar12;
    uint32_t uVar13;
    uint64_t uVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(*(param_1 + 0x90) + 0x50) - 5U < 0xfffffffc) || (*(*(param_1 + 0x98) + 0xd0) == 0)) {
        return false;
    }
    if (*(*(param_1 + 0x3a8) + 0x2f8) == 0) {
        uVar2 = 0xea;
    }
    else {
        uVar2 = snd_soc_component_read(*(param_1 + 0xf8));
        iVar9 = *(param_1 + 0x3a8);
        uVar2 = (uVar2 & *(iVar9 + 0x2fa)) >> (*(iVar9 + 0x2fb) & 0x1f);
        if (*(iVar9 + 0x2f8) != 0) {
            snd_soc_component_update_bits(*(param_1 + 0xf8),*(iVar9 + 0x2f8),*(iVar9 + 0x2fa),0);
        }
    }
    sym.wcd_mbhc_hs_elec_irq(param_1,0,0);
    if (*(*(param_1 + 0x3a8) + 0xb8) == 0) {
        uVar3 = 0xffea;
    }
    else {
        uVar3 = snd_soc_component_read(*(param_1 + 0xf8));
        uVar3 = (uVar3 & *(*(param_1 + 0x3a8) + 0xba)) >> (*(*(param_1 + 0x3a8) + 0xbb) & 0x1f);
    }
    pcVar12 = *(*(param_1 + 0x98) + 0xd0);
    __cfi_slowpath_diag(0x1d4dfe77ec242b3c,pcVar12,0x8001350);
    (*pcVar12)(*(param_1 + 0xf8),*(*(param_1 + 0x90) + 0x50),2);
    iVar9 = *(param_1 + 0x3a8);
    if (*(iVar9 + 0xa8) == 0) {
        uVar5 = 0xea;
        iVar8 = *(iVar9 + 0x1f8);
joined_r0x0800c5ec:
        if (iVar8 != 0) goto code_r0x0800c460;
code_r0x0800c4d0:
        if (*(iVar9 + 0x2e8) == 0) goto code_r0x0800c4d8;
code_r0x0800c484:
        uVar4 = snd_soc_component_read(*(param_1 + 0xf8));
        uVar4 = (uVar4 & *(*(param_1 + 0x3a8) + 0x2ea)) >> (*(*(param_1 + 0x3a8) + 0x2eb) & 0x1f);
    }
    else {
        uVar5 = snd_soc_component_read(*(param_1 + 0xf8));
        iVar9 = *(param_1 + 0x3a8);
        uVar5 = (uVar5 & *(iVar9 + 0xaa)) >> (*(iVar9 + 0xab) & 0x1f);
        if (*(iVar9 + 0xa8) != 0) {
            snd_soc_component_update_bits(*(param_1 + 0xf8),*(iVar9 + 0xa8),*(iVar9 + 0xaa),0);
            iVar9 = *(param_1 + 0x3a8);
            iVar8 = *(iVar9 + 0x1f8);
            goto joined_r0x0800c5ec;
        }
        iVar8 = *(iVar9 + 0x1f8);
        if (iVar8 == 0) goto code_r0x0800c4d0;
code_r0x0800c460:
        snd_soc_component_update_bits(*(param_1 + 0xf8),iVar8,*(iVar9 + 0x1fa),1 << (*(iVar9 + 0x1fb) & 0x1f));
        if (*(*(param_1 + 0x3a8) + 0x2e8) != 0) goto code_r0x0800c484;
code_r0x0800c4d8:
        uVar4 = 0xea;
    }
    usleep_range_state(20000,0x4e84,2);
    if (*(*(param_1 + 0x3a8) + 0xe8) == 0) {
        uVar14 = 0xea;
    }
    else {
        uVar14 = snd_soc_component_read(*(param_1 + 0xf8));
        uVar14 = (uVar14 & *(*(param_1 + 0x3a8) + 0xea)) >> (*(*(param_1 + 0x3a8) + 0xeb) & 0x3f);
    }
    uVar7 = sym.wcd_swch_level_remove(param_1);
    if ((uVar7 & 1) == 0) {
        _printk(0x8001ac0,"wcd_mbhc_adc_detect_anc_plug_type",1);
        iVar6 = sym.wcd_measure_adc_once(param_1,2);
        if (iVar6 == 0) {
code_r0x0800c578:
            uVar13 = 0;
            uVar11 = 1;
        }
        else {
            if (3 < uVar14) goto code_r0x0800c98c;
            if (*(uVar14 * 4 + 0x8003758) <= iVar6) goto code_r0x0800c578;
            uVar11 = 0;
            uVar13 = 1;
        }
        uVar7 = sym.wcd_swch_level_remove(param_1);
        if ((uVar7 & 1) == 0) {
            _printk(0x8001ac0,"wcd_mbhc_adc_detect_anc_plug_type",2);
            iVar6 = sym.wcd_measure_adc_once(param_1,2);
            if (iVar6 == 0) {
code_r0x0800c5f4:
                uVar11 = uVar11 + 1;
            }
            else {
                if (3 < uVar14) goto code_r0x0800c98c;
                if (*(uVar14 * 4 + 0x8003758) <= iVar6) goto code_r0x0800c5f4;
                uVar13 = uVar13 + 1;
            }
            uVar7 = sym.wcd_swch_level_remove(param_1);
            if ((uVar7 & 1) == 0) {
                _printk(0x8001ac0,"wcd_mbhc_adc_detect_anc_plug_type",3);
                iVar6 = sym.wcd_measure_adc_once(param_1,2);
                if (iVar6 == 0) {
code_r0x0800c650:
                    uVar11 = uVar11 + 1;
                }
                else {
                    if (3 < uVar14) goto code_r0x0800c98c;
                    if (*(uVar14 * 4 + 0x8003758) <= iVar6) goto code_r0x0800c650;
                    uVar13 = uVar13 + 1;
                }
                uVar7 = sym.wcd_swch_level_remove(param_1);
                if ((uVar7 & 1) == 0) {
                    _printk(0x8001ac0,"wcd_mbhc_adc_detect_anc_plug_type",4);
                    iVar6 = sym.wcd_measure_adc_once(param_1,2);
                    if (iVar6 == 0) {
code_r0x0800c6ac:
                        uVar11 = uVar11 + 1;
                    }
                    else {
                        if (3 < uVar14) goto code_r0x0800c98c;
                        if (*(uVar14 * 4 + 0x8003758) <= iVar6) goto code_r0x0800c6ac;
                        uVar13 = uVar13 + 1;
                    }
                    uVar7 = sym.wcd_swch_level_remove(param_1);
                    if ((uVar7 & 1) == 0) {
                        _printk(0x8001ac0,"wcd_mbhc_adc_detect_anc_plug_type",5);
                        iVar6 = sym.wcd_measure_adc_once(param_1,2);
                        if (iVar6 == 0) {
code_r0x0800c708:
                            uVar11 = uVar11 + 1;
                        }
                        else {
                            if (3 < uVar14) goto code_r0x0800c98c;
                            if (*(uVar14 * 4 + 0x8003758) <= iVar6) goto code_r0x0800c708;
                            uVar13 = uVar13 + 1;
                        }
                        uVar7 = sym.wcd_swch_level_remove(param_1);
                        if ((uVar7 & 1) == 0) {
                            _printk(0x8001ac0,"wcd_mbhc_adc_detect_anc_plug_type",6);
                            iVar6 = sym.wcd_measure_adc_once(param_1,2);
                            if (iVar6 == 0) {
code_r0x0800c764:
                                uVar11 = uVar11 + 1;
                            }
                            else {
                                if (3 < uVar14) goto code_r0x0800c98c;
                                if (*(uVar14 * 4 + 0x8003758) <= iVar6) goto code_r0x0800c764;
                                uVar13 = uVar13 + 1;
                            }
                            uVar7 = sym.wcd_swch_level_remove(param_1);
                            if ((uVar7 & 1) == 0) {
                                _printk(0x8001ac0,"wcd_mbhc_adc_detect_anc_plug_type",7);
                                iVar6 = sym.wcd_measure_adc_once(param_1,2);
                                if (iVar6 == 0) {
code_r0x0800c960:
                                    uVar11 = uVar11 + 1;
                                }
                                else {
                                    if (3 < uVar14) {
code_r0x0800c98c:
    //WARNING: Does not return
                                        pcVar12 = SoftwareBreakpoint(0x5512,0x800c990);
                                        (*pcVar12)();
                                    }
                                    if (*(uVar14 * 4 + 0x8003758) <= iVar6) goto code_r0x0800c960;
                                    uVar13 = uVar13 + 1;
                                }
                                _printk(0x8002066,"wcd_mbhc_adc_detect_anc_plug_type",uVar13,uVar11);
                                bVar10 = uVar11 < uVar13;
                                goto code_r0x0800c78c;
                            }
                        }
                    }
                }
            }
        }
    }
    _printk(0x80017c6,"wcd_mbhc_adc_detect_anc_plug_type");
    bVar10 = false;
code_r0x0800c78c:
    iVar9 = *(param_1 + 0x3a8);
    if (*(iVar9 + 0x2e8) == 0) {
        iVar8 = *(iVar9 + 0x1f8);
    }
    else {
        snd_soc_component_update_bits
                  (*(param_1 + 0xf8),*(iVar9 + 0x2e8),*(iVar9 + 0x2ea),uVar4 << (*(iVar9 + 0x2eb) & 0x1f));
        iVar9 = *(param_1 + 0x3a8);
        iVar8 = *(iVar9 + 0x1f8);
    }
    if (iVar8 == 0) {
        iVar8 = *(iVar9 + 0xb8);
    }
    else {
        snd_soc_component_update_bits(*(param_1 + 0xf8),iVar8,*(iVar9 + 0x1fa),0);
        iVar9 = *(param_1 + 0x3a8);
        iVar8 = *(iVar9 + 0xb8);
    }
    if (iVar8 == 0) {
        iVar8 = *(iVar9 + 0x218);
    }
    else {
        snd_soc_component_update_bits(*(param_1 + 0xf8),iVar8,*(iVar9 + 0xba),0);
        iVar9 = *(param_1 + 0x3a8);
        iVar8 = *(iVar9 + 0x218);
    }
    if (iVar8 == 0) {
        iVar8 = *(iVar9 + 0xb8);
    }
    else {
        snd_soc_component_update_bits(*(param_1 + 0xf8),iVar8,*(iVar9 + 0x21a),0);
        iVar9 = *(param_1 + 0x3a8);
        iVar8 = *(iVar9 + 0xb8);
    }
    if (iVar8 != 0) {
        snd_soc_component_update_bits(*(param_1 + 0xf8),iVar8,*(iVar9 + 0xba),1 << (*(iVar9 + 0xbb) & 0x1f));
        iVar9 = *(param_1 + 0x3a8);
        if (*(iVar9 + 0xb8) != 0) {
            snd_soc_component_update_bits
                      (*(param_1 + 0xf8),*(iVar9 + 0xb8),*(iVar9 + 0xba),uVar3 << (*(iVar9 + 0xbb) & 0x1f));
            iVar9 = *(param_1 + 0x3a8);
        }
    }
    if (*(iVar9 + 0x2f8) != 0) {
        snd_soc_component_update_bits
                  (*(param_1 + 0xf8),*(iVar9 + 0x2f8),*(iVar9 + 0x2fa),uVar2 << (*(iVar9 + 0x2fb) & 0x1f));
        iVar9 = *(param_1 + 0x3a8);
    }
    if (*(iVar9 + 0xa8) != 0) {
        snd_soc_component_update_bits
                  (*(param_1 + 0xf8),*(iVar9 + 0xa8),*(iVar9 + 0xaa),uVar5 << (*(iVar9 + 0xab) & 0x1f));
    }
    pcVar12 = *(*(param_1 + 0x98) + 0xd0);
    __cfi_slowpath_diag(0x1d4dfe77ec242b3c,pcVar12,0x8001370);
    (*pcVar12)(*(param_1 + 0xf8),*(*(param_1 + 0x90) + 0x50),3);
    pcVar1 = 0x800317f;
    if (bVar10 == false) {
        pcVar1 = "not ";
    }
    _printk(0x800297f,"wcd_mbhc_adc_detect_anc_plug_type",pcVar1);
    return bVar10;
}


// ===== sym.__typeid__ZTSFvP8wcd_mbhcP11work_structE_global_addr @ 0x08004420 (size 8) =====

void sym.__typeid__ZTSFvP8wcd_mbhcP11work_structE_global_addr(int64_t param_1,ulong param_2)

{
    uint64_t uVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x800312a,"wcd_cancel_hs_detect_plug");
    *(param_1 + 0xee) = 1;
    _printk(0x80018cb,"wcd_cancel_hs_detect_plug");
    mutex_unlock(param_1 + 0x328);
    uVar1 = cancel_work_sync(param_2);
    if ((uVar1 & 1) != 0) {
        _printk(0x8003271,"wcd_cancel_hs_detect_plug");
        pcVar2 = *(*(param_1 + 0x98) + 0x90);
        __cfi_slowpath_diag(0xce1a9c61fa6df8c5,pcVar2,0x8001390);
        (*pcVar2)(param_1,0);
    }
    _printk(0x8002ef3,"wcd_cancel_hs_detect_plug");
    mutex_lock(param_1 + 0x328);
    _printk(0x8001a88,"wcd_cancel_hs_detect_plug");
    return;
}


// ===== sym.headset_status_write.47703894683a65bd92c9bc7b673552c9.cfi_jt @ 0x08004428 (size 8) =====

uint64_t sym.headset_status_write.47703894683a65bd92c9bc7b673552c9.cfi_jt
                   (ulong param_1,int64_t param_2,uint64_t param_3)

{
    uint64_t uVar1;
    ulong *puVar2;
    uint64_t uVar3;
    bool bVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t arg3;
    uint64_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar9 [16];
    uint uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    arg3 = param_3;
    if (2 < param_3) {
        arg3 = 3;
    }
    uStack_4c = 0;
    _printk(0x8002b30,"headset_status_write",_segment.ehdr,obj.headset_status);
    _segment.ehdr = _segment.ehdr + 1;
    __check_object_size(&uStack_4c,arg3,0);
    iVar5 = sym._copy_from_user(&uStack_4c,param_2,arg3);
    if (iVar5 == 0) {
        if (uStack_4c == '0') {
            *0x800054c = 0;
            _obj.headset_status = 0;
        }
    }
    else {
        param_3 = 0xfffffffffffffff2;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return param_3;
    }
    auVar9 = __stack_chk_fail();
    uVar7 = auVar9._8_8_;
    *extraout_x18 = sym._copy_from_user;
    puVar2 = sp_el0;
    uVar3 = (uVar7 << 8) >> 8;
    if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar8 = uVar7, (*puVar2 >> 0x1a & 1) != 0)) {
        uVar8 = uVar7 & uVar3;
    }
    bVar4 = CARRY8(uVar8,arg3);
    uVar8 = uVar8 + arg3;
    uVar1 = 0;
    if (!bVar4 || uVar8 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar8 = 0xffffffffffffffff;
    }
    uVar6 = arg3;
    if (!CARRY8(uVar8,~uVar1) && !CARRY8(uVar8 + ~uVar1,bVar4) || uVar8 == uVar1 + !bVar4) {
        if ((___cfi_slowpath_diag >> 0x18 & 1) == 0) {
            uVar8 = daif;
            if ((uVar8 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar2[1];
            InstructionSynchronizationBarrier();
            daif = uVar8;
        }
        if ((uVar7 & uVar3 & 0xffffff8000000000) != 0) {
            uVar7 = 0;
        }
        uVar6 = __arch_copy_from_user(auVar9._0_8_,uVar7,arg3);
        if ((___cfi_slowpath_diag >> 0x18 & 1) == 0) {
            uVar3 = daif;
            if ((uVar3 & 0x80) == 0) {
                uVar7 = daif;
                daif = uVar7 | 0xc0;
            }
            uVar7 = ttbr1_el1;
            ttbr0_el1 = (uVar7 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar7 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar3;
        }
    }
    if (uVar6 != 0) {
        memset(auVar9._0_8_ + (arg3 - uVar6),0,uVar6);
    }
    return uVar6;
}


// ===== sym.headset_status_read.47703894683a65bd92c9bc7b673552c9.cfi_jt @ 0x08004430 (size 8) =====

uint64_t sym.headset_status_read.47703894683a65bd92c9bc7b673552c9.cfi_jt
                   (ulong param_1,ulong param_2,ulong param_3,uint64_t param_4)

{
    uint64_t uVar1;
    ulong *puVar2;
    uint64_t uVar3;
    bool bVar4;
    ulong uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    uint64_t uVar8;
    int64_t arg2;
    uint64_t uVar9;
    uint64_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong unaff_x30;
    uchar auVar11 [16];
    uint uStack_cc;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
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
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    sprintf(&uStack_78,"0x%04x 0x%04x 0x%04x 0x%04x 0x%04x 0x%04x\n",_obj.headset_status & 0xffff,*0x8000546,
            *0x8000548,*0x800054a,*0x800054c,*0x800054e);
    _printk(0x8002b30,"headset_status_read",_segment.ehdr,&uStack_78);
    _segment.ehdr = _segment.ehdr + 1;
    uVar5 = strlen(&uStack_78);
    uVar6 = simple_read_from_buffer(param_2,param_3,param_4,&uStack_78,uVar5);
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_38) {
        return uVar6;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.headset_status_write;
    pcStack_b8 = sym.headset_status_write;
    iVar7 = sp_el0;
    iStack_c8 = *(iVar7 + 0x5e0);
    uVar6 = param_4;
    if (2 < param_4) {
        uVar6 = 3;
    }
    uStack_cc = 0;
    puStack_c0 = &stack0xffffffffffffffd0;
    _printk(0x8002b30,"headset_status_write",_segment.ehdr,obj.headset_status);
    _segment.ehdr = _segment.ehdr + 1;
    __check_object_size(&uStack_cc,uVar6,0);
    iVar7 = sym._copy_from_user(&uStack_cc,arg2,uVar6);
    if (iVar7 == 0) {
        if (uStack_cc == '0') {
            *0x800054c = 0;
            _obj.headset_status = 0;
        }
    }
    else {
        param_4 = 0xfffffffffffffff2;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_c8) {
        return param_4;
    }
    auVar11 = __stack_chk_fail();
    uVar9 = auVar11._8_8_;
    *extraout_x18_00 = sym._copy_from_user;
    puVar2 = sp_el0;
    uVar3 = (uVar9 << 8) >> 8;
    if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar10 = uVar9, (*puVar2 >> 0x1a & 1) != 0)) {
        uVar10 = uVar9 & uVar3;
    }
    bVar4 = CARRY8(uVar10,uVar6);
    uVar10 = uVar10 + uVar6;
    uVar1 = 0;
    if (!bVar4 || uVar10 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar10 = 0xffffffffffffffff;
    }
    uVar8 = uVar6;
    if (!CARRY8(uVar10,~uVar1) && !CARRY8(uVar10 + ~uVar1,bVar4) || uVar10 == uVar1 + !bVar4) {
        if ((___cfi_slowpath_diag >> 0x18 & 1) == 0) {
            uVar10 = daif;
            if ((uVar10 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar2[1];
            InstructionSynchronizationBarrier();
            daif = uVar10;
        }
        if ((uVar9 & uVar3 & 0xffffff8000000000) != 0) {
            uVar9 = 0;
        }
        uVar8 = __arch_copy_from_user(auVar11._0_8_,uVar9,uVar6);
        if ((___cfi_slowpath_diag >> 0x18 & 1) == 0) {
            uVar3 = daif;
            if ((uVar3 & 0x80) == 0) {
                uVar9 = daif;
                daif = uVar9 | 0xc0;
            }
            uVar9 = ttbr1_el1;
            ttbr0_el1 = (uVar9 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar9 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar3;
        }
    }
    if (uVar8 != 0) {
        memset(auVar11._0_8_ + (uVar6 - uVar8),0,uVar8);
    }
    return uVar8;
}


// ===== sym.wcd_mbhc_hs_elec_irq.cfi_jt @ 0x08004438 (size 8) =====

void sym.wcd_mbhc_hs_elec_irq.cfi_jt(int64_t param_1,uint64_t param_2,uint32_t param_3)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    uint uVar3;
    char cVar4;
    bool bVar5;
    uint64_t uVar6;
    uint *puVar7;
    ulong *in_x18;
    uint32_t uVar8;
    code *pcVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar6 = mutex_is_locked(param_1 + 0x328);
    if (((uVar6 & 1) == 0) && ((obj.wcd_mbhc_hs_elec_irq.__already_done & 1) == 0)) {
        obj.wcd_mbhc_hs_elec_irq.__already_done = 0x1;
        __warn_printk("%s: BCL should have acquired\n","wcd_mbhc_hs_elec_irq");
    //WARNING: Does not return
        pcVar9 = SoftwareBreakpoint(0x800,0x8004c3c);
        (*pcVar9)();
    }
    uVar8 = param_2;
    if (uVar8 == 1) {
        puVar7 = *(param_1 + 0x358) + 0x10;
    }
    else {
        if (uVar8 != 0) {
            _printk(0x8002f4a,"wcd_mbhc_hs_elec_irq",param_2 & 0xffffffff,param_3 & 1);
            return;
        }
        puVar7 = *(param_1 + 0x358) + 0xc;
    }
    uVar3 = *puVar7;
    uVar2 = param_3 & 1;
    _printk(0x8002e9d,"wcd_mbhc_hs_elec_irq",uVar3,uVar2,*(param_1 + 0x3d8));
    if ((*(param_1 + 0x3d8 + (uVar8 >> 6) * 8) >> (param_2 & 0x3f) & 1) != uVar2) {
        pcVar9 = *(*(param_1 + 0x98) + 0x70);
        __cfi_slowpath_diag(0x23d049188c4e6e9c,pcVar9,0x8000530);
        (*pcVar9)(*(param_1 + 0xf8),uVar3,uVar2);
        uVar6 = 1L << (param_2 & 0x3f);
        puVar1 = param_1 + 0x3d8 + ((param_2 & 0xffffffff) >> 3 & 0x1ffffff8);
        if ((param_3 & 1) == 0) {
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                    *puVar1 = *puVar1 & (uVar6 ^ 0xffffffffffffffff);
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
        }
        else {
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                    *puVar1 = *puVar1 | uVar6;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
        }
    }
    return;
}


// ===== sym.__typeid__ZTSFvP8wcd_mbhcE_global_addr @ 0x08004440 (size 8) =====

void sym.__typeid__ZTSFvP8wcd_mbhcE_global_addr(int64_t param_1)

{
    int16_t iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong uVar3;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = *(param_1 + 0xf8);
    _printk(0x8002012,"wcd_mbhc_adc_detect_plug_type");
    uVar2 = mutex_is_locked(param_1 + 0x328);
    if (((uVar2 & 1) == 0) && ((obj.wcd_mbhc_adc_detect_plug_type.__already_done & 1) == 0)) {
        obj.wcd_mbhc_adc_detect_plug_type.__already_done = 0x1;
        __warn_printk("%s: BCL should have acquired\n","wcd_mbhc_adc_detect_plug_type");
    //WARNING: Does not return
        pcVar4 = SoftwareBreakpoint(0x800,0x800c2f4);
        (*pcVar4)();
    }
    pcVar4 = *(*(param_1 + 0x98) + 0x100);
    if (pcVar4 != NULL) {
        __cfi_slowpath_diag(0x1be676a8fa3b6db7,pcVar4,0x80012f0);
        (*pcVar4)(uVar3,0);
    }
    iVar1 = *(*(param_1 + 0x3a8) + 0x2f8);
    if (iVar1 != 0) {
        snd_soc_component_update_bits(*(param_1 + 0xf8),iVar1,*(*(param_1 + 0x3a8) + 0x2fa),0);
    }
    pcVar4 = *(*(param_1 + 0x98) + 0xd0);
    if (pcVar4 == NULL) {
        uVar3 = 0x8001f4f;
    }
    else {
        __cfi_slowpath_diag(0x1d4dfe77ec242b3c,pcVar4,0x8001310);
        (*pcVar4)(uVar3,2,2);
        *(param_1 + 0x3b0) = 0;
        _printk(0x8002416,"wcd_schedule_hs_detect_plug");
        uVar2 = mutex_is_locked(param_1 + 0x328);
        if (((uVar2 & 1) == 0) && ((obj.wcd_schedule_hs_detect_plug.__already_done & 1) == 0)) {
            obj.wcd_schedule_hs_detect_plug.__already_done = 0x1;
            __warn_printk("%s: BCL should have acquired\n","wcd_schedule_hs_detect_plug");
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x800,0x800c318);
            (*pcVar4)();
        }
        *(param_1 + 0xee) = 0;
        pcVar4 = *(*(param_1 + 0x98) + 0x90);
        __cfi_slowpath_diag(0xce1a9c61fa6df8c5,pcVar4,0x8001330);
        (*pcVar4)(param_1,1);
        queue_work_on(0x20,_snd_soc_jack_report,param_1 + 0x360);
        uVar3 = 0x8002bbe;
    }
    _printk(uVar3,"wcd_mbhc_adc_detect_plug_type");
    return;
}


// ===== sym.wcd_mbhc_elec_hs_report_unplug.cfi_jt @ 0x08004448 (size 8) =====

void sym.wcd_mbhc_elec_hs_report_unplug.cfi_jt(int64_t param_1)

{
    uint64_t uVar1;
    int64_t iVar2;
    ulong *in_x18;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = cancel_delayed_work_sync();
    if ((uVar1 & 1) != 0) {
        pcVar3 = *(*(param_1 + 0x98) + 0x90);
        __cfi_slowpath_diag(0xce1a9c61fa6df8c5,pcVar3,obj.hphr_pa_lock);
        (*pcVar3)(param_1,0);
        _printk(0x8002806,"wcd_mbhc_elec_hs_report_unplug");
    }
    pcVar3 = *(*(param_1 + 1000) + 0x20);
    if (pcVar3 == NULL) {
        _printk(0x80026c6,"wcd_mbhc_elec_hs_report_unplug");
    }
    else {
        if (pcVar3 != sym.__typeid__ZTSFvP8wcd_mbhcP11work_structE_global_addr) {
            __cfi_slowpath_diag(0x12f2e4d279e33bdb,pcVar3,0x8000670);
        }
        (*pcVar3)(param_1,param_1 + 0x360);
    }
    _printk(0x80032ae,"wcd_mbhc_elec_hs_report_unplug");
    sym.wcd_mbhc_report_plug(param_1,1,4);
    extcon_set_state_sync(*(param_1 + 0x418),0x17,1);
    if ((*(param_1 + 0x1a8) & 1) != 0) {
        sym.wcd_mbhc_set_and_turnoff_hph_padac(param_1);
    }
    sym.wcd_mbhc_hs_elec_irq(param_1,1,0);
    sym.wcd_enable_curr_micbias(param_1,3);
    iVar2 = *(param_1 + 0x3a8);
    if (*(iVar2 + 0xb8) != 0) {
        snd_soc_component_update_bits(*(param_1 + 0xf8),*(iVar2 + 0xb8),*(iVar2 + 0xba),0);
        iVar2 = *(param_1 + 0x3a8);
    }
    if (*(iVar2 + 0xa8) != 0) {
        snd_soc_component_update_bits
                  (*(param_1 + 0xf8),*(iVar2 + 0xa8),*(iVar2 + 0xaa),3 << (*(iVar2 + 0xab) & 0x1f));
        iVar2 = *(param_1 + 0x3a8);
    }
    if (*(iVar2 + 0x48) != 0) {
        snd_soc_component_update_bits
                  (*(param_1 + 0xf8),*(iVar2 + 0x48),*(iVar2 + 0x4a),1 << (*(iVar2 + 0x4b) & 0x1f));
    }
    sym.wcd_mbhc_hs_elec_irq(param_1,0,1);
    return;
}


// ===== sym.wcd_mbhc_stop.cfi_jt @ 0x08004450 (size 8) =====

void sym.wcd_mbhc_stop.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    code *pcVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8002012,"wcd_mbhc_stop");
    if (((*(param_1 + 0xc1) != '\0') && (*(param_1 + 0x98) != 0)) &&
       (pcVar1 = *(*(param_1 + 0x98) + 0xe0), pcVar1 != NULL)) {
        __cfi_slowpath_diag(0x7e6c99e1529760f9,pcVar1,0x80006d0);
        (*pcVar1)(*(param_1 + 0xf8));
    }
    *(param_1 + 0xc1) = 0;
    *(param_1 + 0xa0) = 0;
    if ((*(param_1 + 0x98) != 0) && (pcVar1 = *(*(param_1 + 0x98) + 0x70), pcVar1 != NULL)) {
        __cfi_slowpath_diag(0x23d049188c4e6e9c,pcVar1,0x80006f0);
        (*pcVar1)(*(param_1 + 0xf8),*(*(param_1 + 0x358) + 0x14),0);
        pcVar1 = *(*(param_1 + 0x98) + 0x70);
        __cfi_slowpath_diag(0x23d049188c4e6e9c,pcVar1,0x8000710);
        (*pcVar1)(*(param_1 + 0xf8),*(*(param_1 + 0x358) + 0x18),0);
    }
    if ((*(param_1 + 0x188) != 0) || (*(param_1 + 400) != 0)) {
        cancel_delayed_work_sync(param_1 + 0x100);
        if (*(param_1 + 400) == 0) {
            release_firmware(*(param_1 + 0x188));
        }
        *(param_1 + 0x188) = 0;
        *(param_1 + 400) = 0;
    }
    if (*(*(param_1 + 0x90) + 0x58) != 0) {
        fsa4480_unreg_notifier(param_1 + 0x400,*(param_1 + 0x3f8));
    }
    _printk(0x8002bbe,"wcd_mbhc_stop");
    return;
}


// ===== sym.wcd_mbhc_adc_init.cfi_jt @ 0x08004458 (size 8) =====

void sym.wcd_mbhc_adc_init.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        _printk(0x8003517,"wcd_mbhc_adc_init");
    }
    else {
        *(param_1 + 0x360) = 0xfffffffe0;
        *(param_1 + 1000) = reloc.wcd_mbhc_adc_hs_ins_irq.63f800c968f307bf87ec7421f61e82fa.cfi_jt;
        *(param_1 + 0x368) = param_1 + 0x368;
        *(param_1 + 0x370) = param_1 + 0x368;
        *(param_1 + 0x378) = sym.wcd_correct_swch_plug.63f800c968f307bf87ec7421f61e82fa.cfi_jt;
    }
    return;
}


// ===== sym.wcd_mbhc_deinit.cfi_jt @ 0x08004460 (size 8) =====

void sym.wcd_mbhc_deinit.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong uVar1;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(param_1 + 0xf8);
    pcVar2 = *(*(param_1 + 0x98) + 0x78);
    __cfi_slowpath_diag(0x374739a980183585,pcVar2,0x8000970);
    (*pcVar2)(uVar1,**(param_1 + 0x358),param_1);
    pcVar2 = *(*(param_1 + 0x98) + 0x78);
    __cfi_slowpath_diag(0x374739a980183585,pcVar2,0x8000990);
    (*pcVar2)(uVar1,*(*(param_1 + 0x358) + 4),param_1);
    pcVar2 = *(*(param_1 + 0x98) + 0x78);
    __cfi_slowpath_diag(0x374739a980183585,pcVar2,0x80009b0);
    (*pcVar2)(uVar1,*(*(param_1 + 0x358) + 8),param_1);
    pcVar2 = *(*(param_1 + 0x98) + 0x78);
    __cfi_slowpath_diag(0x374739a980183585,pcVar2,0x80009d0);
    (*pcVar2)(uVar1,*(*(param_1 + 0x358) + 0xc),param_1);
    pcVar2 = *(*(param_1 + 0x98) + 0x78);
    __cfi_slowpath_diag(0x374739a980183585,pcVar2,0x80009f0);
    (*pcVar2)(uVar1,*(*(param_1 + 0x358) + 0x10),param_1);
    pcVar2 = *(*(param_1 + 0x98) + 0x78);
    __cfi_slowpath_diag(0x374739a980183585,pcVar2,0x8000a10);
    (*pcVar2)(uVar1,*(*(param_1 + 0x358) + 0x14),param_1);
    pcVar2 = *(*(param_1 + 0x98) + 0x78);
    __cfi_slowpath_diag(0x374739a980183585,pcVar2,0x8000a30);
    (*pcVar2)(uVar1,*(*(param_1 + 0x358) + 0x18),param_1);
    if ((*(param_1 + 0x98) != 0) && (pcVar2 = *(*(param_1 + 0x98) + 0x60), pcVar2 != NULL)) {
        __cfi_slowpath_diag(0xde385033fff74d90,pcVar2,0x8000a50);
        (*pcVar2)(param_1,param_1 + 0x390,0);
    }
    if (*(*(param_1 + 1000) + 0x20) != 0) {
        _printk(0x8002ef3,"wcd_mbhc_deinit");
        mutex_lock(param_1 + 0x328);
        _printk(0x8001a88,"wcd_mbhc_deinit");
        pcVar2 = *(*(param_1 + 1000) + 0x20);
        if (pcVar2 != sym.__typeid__ZTSFvP8wcd_mbhcP11work_structE_global_addr) {
            __cfi_slowpath_diag(0x12f2e4d279e33bdb,pcVar2,0x8000a70);
        }
        (*pcVar2)(param_1,param_1 + 0x360);
        _printk(0x80018cb,"wcd_mbhc_deinit");
        mutex_unlock(param_1 + 0x328);
    }
    return;
}


// ===== sym.wcd_correct_swch_plug.63f800c968f307bf87ec7421f61e82fa.cfi_jt @ 0x08004468 (size 8) =====

void sym.wcd_correct_swch_plug.63f800c968f307bf87ec7421f61e82fa.cfi_jt(int64_t param_1)

{
    char *pcVar1;
    uint32_t uVar2;
    bool bVar3;
    bool bVar4;
    bool bVar5;
    uint32_t uVar6;
    int iVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    int iVar12;
    uint32_t uVar13;
    uint64_t uVar14;
    ulong uVar15;
    int16_t iVar16;
    int64_t *piVar17;
    int64_t iVar18;
    bool bVar19;
    ulong *in_x18;
    int64_t arg1;
    uint32_t *puVar20;
    code *pcVar21;
    int64_t *piVar22;
    int64_t *piVar23;
    ulong *puVar24;
    uint32_t *puVar25;
    int64_t iVar26;
    ulong uVar27;
    ulong unaff_x30;
    uint32_t uStack_a4;
    int iStack_a0;
    uint32_t uStack_98;
    int iStack_94;
    
    *in_x18 = unaff_x30;
    _printk(0x8002012,"wcd_correct_swch_plug");
    puVar24 = param_1 + -0x268;
    arg1 = param_1 + -0x360;
    piVar17 = param_1 + -0x2d0;
    puVar20 = param_1 + -0x298;
    puVar25 = param_1 + -0x290;
    uVar27 = *puVar24;
    iVar26 = param_1 + -0x38;
    iStack_a0 = sym.wcd_mbhc_get_micbias(arg1);
    uVar6 = sym.wcd_mbhc_get_micbias(arg1);
    uVar13 = *puVar20;
    if (uVar13 == 0) {
        uVar13 = (uVar6 * 0x6a4) / 0x708;
    }
    else {
        uVar11 = *puVar25;
        if (uVar11 != uVar6) {
            uVar6 = uVar13 * uVar6;
            uVar13 = 0;
            if (uVar11 != 0) {
                uVar13 = uVar6 / uVar11;
            }
        }
    }
    _printk(0x8002ef3,"wcd_correct_swch_plug");
    mutex_lock(iVar26);
    _printk(0x8001a88,"wcd_correct_swch_plug");
    sym.wcd_mbhc_hs_elec_irq(arg1,0,0);
    _printk(0x80018cb,"wcd_correct_swch_plug");
    mutex_unlock(iVar26);
    uVar6 = 0;
    do {
        iVar7 = sym.wcd_check_cross_conn(arg1);
        uVar6 = uVar6 + 1;
    } while (uVar6 < *(param_1 + -0x28c));
    if (0 < iVar7) {
        pcVar21 = *(*piVar17 + 0x18);
        if (pcVar21 != NULL) {
            __cfi_slowpath_diag(0x75ef21adc6f2463b,pcVar21,0x80013b0);
            (*pcVar21)(uVar27,1);
            msleep(10);
            _printk(0x8003180,"wcd_correct_swch_plug");
            uVar27 = *puVar24;
            iStack_a0 = sym.wcd_mbhc_get_micbias(arg1);
            uVar6 = sym.wcd_mbhc_get_micbias(arg1);
            uVar13 = *puVar20;
            if (uVar13 == 0) {
                uVar13 = (uVar6 * 0x6a4) / 0x708;
            }
            else {
                uVar11 = *puVar25;
                if (uVar11 != uVar6) {
                    uVar6 = uVar13 * uVar6;
                    uVar13 = 0;
                    if (uVar11 != 0) {
                        uVar13 = uVar6 / uVar11;
                    }
                }
            }
            _printk(0x8002ef3,"wcd_correct_swch_plug");
            mutex_lock(iVar26);
            _printk(0x8001a88,"wcd_correct_swch_plug");
            sym.wcd_mbhc_hs_elec_irq(arg1,0,0);
            _printk(0x80018cb,"wcd_correct_swch_plug");
            mutex_unlock(iVar26);
            uVar6 = 0;
            do {
                iVar7 = sym.wcd_check_cross_conn(arg1);
                uVar6 = uVar6 + 1;
            } while (uVar6 < *(param_1 + -0x28c));
            if (iVar7 < 1) goto code_r0x0800a290;
        }
        uVar6 = 4;
        _printk(0x80022c1,"wcd_correct_swch_plug",4);
        iStack_94 = 0;
        goto code_r0x0800a6dc;
    }
code_r0x0800a290:
    _printk(0x8002012,"wcd_measure_adc_continuous");
    iVar18 = *(param_1 + 0x48);
    if (*(iVar18 + 0xa8) == 0) {
        iVar16 = *(iVar18 + 0x2e8);
        if (iVar16 != 0) goto code_r0x0800a308;
code_r0x0800a2b8:
        if (*(iVar18 + 0x298) != 0) goto code_r0x0800a32c;
code_r0x0800a2c0:
        uVar6 = 0xea;
        iVar16 = *(iVar18 + 0xb8);
joined_r0x0800a354:
        if (iVar16 == 0) goto code_r0x0800a358;
code_r0x0800a2cc:
        snd_soc_component_update_bits(*puVar24,iVar16,*(iVar18 + 0xba),0);
        iVar18 = *(param_1 + 0x48);
        iVar16 = *(iVar18 + 0x218);
    }
    else {
        snd_soc_component_update_bits(*puVar24,*(iVar18 + 0xa8),*(iVar18 + 0xaa),0);
        iVar18 = *(param_1 + 0x48);
        iVar16 = *(iVar18 + 0x2e8);
        if (iVar16 == 0) goto code_r0x0800a2b8;
code_r0x0800a308:
        snd_soc_component_update_bits(*puVar24,iVar16,*(iVar18 + 0x2ea),1 << (*(iVar18 + 0x2eb) & 0x1f));
        iVar18 = *(param_1 + 0x48);
        if (*(iVar18 + 0x298) == 0) goto code_r0x0800a2c0;
code_r0x0800a32c:
        uVar6 = snd_soc_component_read(*puVar24);
        iVar18 = *(param_1 + 0x48);
        uVar6 = (uVar6 & *(iVar18 + 0x29a)) >> (*(iVar18 + 0x29b) & 0x1f);
        if (*(iVar18 + 0x298) == 0) {
            iVar16 = *(iVar18 + 0xb8);
            goto joined_r0x0800a354;
        }
        snd_soc_component_update_bits(*puVar24,*(iVar18 + 0x298),*(iVar18 + 0x29a),0);
        iVar18 = *(param_1 + 0x48);
        iVar16 = *(iVar18 + 0xb8);
        if (iVar16 != 0) goto code_r0x0800a2cc;
code_r0x0800a358:
        iVar16 = *(iVar18 + 0x218);
    }
    if (iVar16 != 0) {
        snd_soc_component_update_bits(*puVar24,iVar16,*(iVar18 + 0x21a),1 << (*(iVar18 + 0x21b) & 0x1f));
    }
    pcVar21 = *(*(param_1 + -0x2c8) + 0x10);
    if (pcVar21 != NULL) {
        __cfi_slowpath_diag(0x7580eeff27e3c667,pcVar21,0x8001590);
        (*pcVar21)(arg1,1);
    }
    iVar18 = *(param_1 + 0x48);
    if (*(iVar18 + 0xb8) != 0) {
        snd_soc_component_update_bits(*puVar24,*(iVar18 + 0xb8),*(iVar18 + 0xba),1 << (*(iVar18 + 0xbb) & 0x1f));
    }
    pcVar21 = *(*(param_1 + -0x2c8) + 0x10);
    if (pcVar21 != NULL) {
        __cfi_slowpath_diag(0x7580eeff27e3c667,pcVar21,0x80015b0);
        (*pcVar21)(arg1,0);
    }
    iVar18 = *(param_1 + 0x48);
    if (*(iVar18 + 0x298) != 0) {
        snd_soc_component_update_bits(*puVar24,*(iVar18 + 0x298),*(iVar18 + 0x29a),1 << (*(iVar18 + 0x29b) & 0x1f));
    }
    usleep_range_state(3000,0xc1c,2);
    if (*(*(param_1 + 0x48) + 0x2c8) != 0) {
        snd_soc_component_read(*puVar24);
    }
    usleep_range_state(3000,0xc1c,2);
    if (*(*(param_1 + 0x48) + 0x2c8) != 0) {
        snd_soc_component_read(*puVar24);
    }
    usleep_range_state(3000,0xc1c,2);
    iVar18 = *(param_1 + 0x48);
    if (*(iVar18 + 0x2c8) == 0) {
        uVar11 = 0xea;
        iVar16 = *(iVar18 + 0x298);
    }
    else {
        uVar11 = snd_soc_component_read(*puVar24);
        iVar18 = *(param_1 + 0x48);
        uVar11 = (uVar11 & *(iVar18 + 0x2ca)) >> (*(iVar18 + 0x2cb) & 0x1f);
        iVar16 = *(iVar18 + 0x298);
    }
    if (iVar16 != 0) {
        snd_soc_component_update_bits(*puVar24,iVar16,*(iVar18 + 0x29a),uVar6 << (*(iVar18 + 0x29b) & 0x1f));
    }
    iVar7 = sym.wcd_mbhc_get_micbias(arg1);
    uVar9 = (uVar11 * iVar7 * 0x7d) / 18000;
    _printk(0x8002313,"wcd_measure_adc_continuous",uVar11,uVar9);
    uVar11 = sym.wcd_mbhc_get_micbias(arg1);
    uVar6 = *puVar20;
    if (uVar6 == 0) {
        uVar6 = (uVar11 * 0x6a4) / 0x708;
    }
    else {
        uVar8 = *puVar25;
        if (uVar8 != uVar11) {
            uVar11 = uVar6 * uVar11;
            uVar6 = 0;
            if (uVar8 != 0) {
                uVar6 = uVar11 / uVar8;
            }
        }
    }
    uVar8 = sym.wcd_mbhc_get_micbias(arg1);
    uVar11 = *(param_1 + -0x294);
    if (uVar11 == 0) {
        uVar11 = (uVar8 * 0x4b) / 0x708;
    }
    else {
        uVar10 = *puVar25;
        if (uVar10 != uVar8) {
            uVar8 = uVar11 * uVar8;
            uVar11 = 0;
            if (uVar10 != 0) {
                uVar11 = uVar8 / uVar10;
            }
        }
    }
    uVar8 = 3;
    if (uVar9 <= uVar6) {
        uVar8 = 1;
    }
    uVar6 = 2;
    if (uVar11 <= uVar9) {
        uVar6 = uVar8;
    }
    _printk(0x8002ca1,"wcd_mbhc_get_plug_from_adc",uVar6);
    if ((uVar6 - 1 < 2) && (uVar14 = sym.wcd_swch_level_remove(arg1), (uVar14 & 1) == 0)) {
        _printk(0x8002ef3,"wcd_correct_swch_plug");
        mutex_lock(iVar26);
        _printk(0x8001a88,"wcd_correct_swch_plug");
        sym.wcd_mbhc_find_plug_and_report(arg1,uVar6);
        _printk(0x80018cb,"wcd_correct_swch_plug");
        mutex_unlock(iVar26);
        iStack_94 = 1;
    }
    else {
        iStack_94 = 0;
    }
    if ((*(param_1 + -0x29f) | 4) != 5) goto code_r0x0800a6dc;
    iVar18 = *(param_1 + 0x48);
    if (*(iVar18 + 0x2e8) == 0) {
        iVar16 = *(iVar18 + 0x298);
        if (iVar16 != 0) goto code_r0x0800af98;
code_r0x0800a6b8:
        iVar16 = *(iVar18 + 0x2f8);
    }
    else {
        snd_soc_component_update_bits(*puVar24,*(iVar18 + 0x2e8),*(iVar18 + 0x2ea),0);
        iVar18 = *(param_1 + 0x48);
        iVar16 = *(iVar18 + 0x298);
        if (iVar16 == 0) goto code_r0x0800a6b8;
code_r0x0800af98:
        snd_soc_component_update_bits(*puVar24,iVar16,*(iVar18 + 0x29a),0);
        iVar18 = *(param_1 + 0x48);
        iVar16 = *(iVar18 + 0x2f8);
    }
    if (iVar16 != 0) {
        snd_soc_component_update_bits(*puVar24,iVar16,*(iVar18 + 0x2fa),1 << (*(iVar18 + 0x2fb) & 0x1f));
    }
code_r0x0800a6dc:
    piVar22 = param_1 + -0x2c8;
    pcVar21 = *(*piVar22 + 0x20);
    if (pcVar21 != NULL) {
        __cfi_slowpath_diag(0x7580eeff27e3c667,pcVar21,0x80013d0);
        (*pcVar21)(arg1,0);
    }
    uStack_98 = 0;
    bVar3 = false;
    uVar11 = 0;
    uStack_a4 = 0;
    bVar19 = false;
    iVar18 = _delayed_work_timer_fn + 0x2ee;
    bVar4 = bVar3;
code_r0x0800a740:
    do {
        uVar9 = uStack_a4;
        bVar5 = bVar19;
code_r0x0800a758:
        bVar19 = bVar5;
        uStack_a4 = uVar9;
        if (iVar18 - _delayed_work_timer_fn < 0) {
            if (!bVar19 && uVar6 == 1) {
                uVar6 = 1;
                _printk(0x80025bd,"wcd_correct_swch_plug",1,*(param_1 + -0x29f));
                if (*(param_1 + -0x29f) != '\x01') {
                    bVar19 = false;
                    goto code_r0x0800b298;
                }
                iVar18 = *(param_1 + 0x48);
                if (*(iVar18 + 0x2e8) == 0) {
                    iVar16 = *(iVar18 + 0x298);
                }
                else {
                    snd_soc_component_update_bits(*puVar24,*(iVar18 + 0x2e8),*(iVar18 + 0x2ea),0);
                    iVar18 = *(param_1 + 0x48);
                    iVar16 = *(iVar18 + 0x298);
                }
                if (iVar16 != 0) {
                    snd_soc_component_update_bits(*puVar24,iVar16,*(iVar18 + 0x29a),0);
                }
                goto code_r0x0800b38c;
            }
            if (uVar6 != 3) goto code_r0x0800b298;
            pcVar21 = *(*piVar22 + 0xf0);
            if (*(*piVar22 + 0xd0) == 0) {
                if (pcVar21 != NULL) goto code_r0x0800b068;
            }
            else {
                if (pcVar21 == NULL) {
                    _printk(0x8002fb2,"wcd_is_special_headset");
                    goto code_r0x0800b26c;
                }
code_r0x0800b068:
                __cfi_slowpath_diag(0x155f259693f926eb,pcVar21,0x8001650);
                iVar7 = (*pcVar21)(*puVar24,2,1);
                if (iVar7 != 0) {
                    _printk(0x8001c8c,"wcd_is_special_headset",1);
                    uVar15 = cdev_tevent_alloc(0x36008a0a);
                    cdev_tevent_add_int(uVar15,"MbhcStage",1);
                    cdev_tevent_write(uVar15);
                    cdev_tevent_destroy(uVar15);
                    goto code_r0x0800b26c;
                }
            }
            uVar6 = sym.wcd_mbhc_get_micbias(arg1);
            uVar13 = *puVar20;
            if ((uVar13 == 0) || (uVar11 = *puVar25, uVar11 == 0x708)) {
                uVar13 = (uVar6 * 0x6a4) / 0x708;
            }
            else if (uVar11 != uVar6) {
                uVar6 = uVar13 * uVar6;
                uVar13 = 0;
                if (uVar11 != 0) {
                    uVar13 = uVar6 / uVar11;
                }
            }
            iVar7 = -0x32;
            break;
        }
        if ((*(param_1 + -0x272) != '\0') || (msleep(0x14), *(param_1 + -0x272) != '\0')) {
            _printk(0x8002e83,"wcd_correct_swch_plug",1);
            if (*(param_1 + -0x271) != '\0') {
                pcVar21 = *(*piVar22 + 0xf0);
                __cfi_slowpath_diag(0x155f259693f926eb,pcVar21,0x80015d0);
                (*pcVar21)(*puVar24,2,0);
                pcVar21 = *(*piVar22 + 0x40);
                if (pcVar21 != NULL) {
                    __cfi_slowpath_diag(0x7e6c99e1529760f9,pcVar21,0x80015f0);
                    (*pcVar21)(*puVar24);
                }
                *(param_1 + -0x271) = 0;
            }
            goto code_r0x0800b424;
        }
        msleep(0xb4);
        if ((*(*piVar17 + 0x18) == 0) && (*(*piVar17 + 0x58) != 0)) {
            msleep(200);
        }
        uVar8 = sym.wcd_measure_adc_once(arg1,1);
        uVar9 = sym.wcd_mbhc_get_micbias(arg1);
        uVar6 = *puVar20;
        if (uVar6 == 0) {
            uVar6 = (uVar9 * 0x6a4) / 0x708;
        }
        else {
            uVar10 = *puVar25;
            if (uVar10 != uVar9) {
                uVar9 = uVar6 * uVar9;
                uVar6 = 0;
                if (uVar10 != 0) {
                    uVar6 = uVar9 / uVar10;
                }
            }
        }
        uVar10 = sym.wcd_mbhc_get_micbias(arg1);
        uVar9 = *(param_1 + -0x294);
        if (uVar9 == 0) {
            uVar9 = (uVar10 * 0x4b) / 0x708;
        }
        else {
            uVar2 = *puVar25;
            if (uVar2 != uVar10) {
                uVar10 = uVar9 * uVar10;
                uVar9 = 0;
                if (uVar2 != 0) {
                    uVar9 = uVar10 / uVar2;
                }
            }
        }
        uVar10 = 3;
        if (uVar8 <= uVar6) {
            uVar10 = 1;
        }
        uVar6 = 2;
        if (uVar9 <= uVar8) {
            uVar6 = uVar10;
        }
        _printk(0x8002ca1,"wcd_mbhc_get_plug_from_adc",uVar6);
        if ((uVar13 < uVar8) && (!bVar3)) {
            _printk(0x8002012,"wcd_mbhc_adc_check_for_spl_headset");
            pcVar21 = *(*piVar22 + 0xf0);
            if (pcVar21 == NULL) {
code_r0x0800ab18:
                bVar3 = false;
            }
            else {
                __cfi_slowpath_diag(0x155f259693f926eb,pcVar21,0x8001610);
                (*pcVar21)(*puVar24,*(*piVar17 + 0x4c),1);
                usleep_range_state(10000,0x2774,2);
                iVar7 = sym.wcd_measure_adc_once(arg1,1);
                uVar8 = sym.wcd_mbhc_get_micbias(arg1);
                uVar9 = *puVar20;
                if ((uVar9 == 0) || (uVar10 = *puVar25, uVar10 == 0x708)) {
                    uVar9 = (uVar8 * 0x6a4) / 0x708;
                }
                else if (uVar10 != uVar8) {
                    uVar8 = uVar9 * uVar8;
                    uVar9 = 0;
                    if (uVar10 != 0) {
                        uVar9 = uVar8 / uVar10;
                    }
                }
                uVar10 = sym.wcd_mbhc_get_micbias(arg1);
                uVar8 = *(param_1 + -0x294);
                if (uVar8 == 0) {
                    uVar8 = (uVar10 * 0x4b) / 0x708;
                }
                else {
                    uVar2 = *puVar25;
                    if (uVar2 != uVar10) {
                        uVar10 = uVar8 * uVar10;
                        uVar8 = 0;
                        if (uVar2 != 0) {
                            uVar8 = uVar10 / uVar2;
                        }
                    }
                }
                if ((uVar9 < iVar7) || (iVar7 < uVar8)) {
                    pcVar21 = *(*piVar22 + 0xf0);
                    __cfi_slowpath_diag(0x155f259693f926eb,pcVar21,0x8001630);
                    (*pcVar21)(*puVar24,*(*piVar17 + 0x4c),0);
                    usleep_range_state(10000,0x2774,2);
                    goto code_r0x0800ab18;
                }
                bVar3 = true;
                _printk(0x800347a,"wcd_mbhc_adc_check_for_spl_headset",1);
            }
            _printk(0x8002bbe,"wcd_mbhc_adc_check_for_spl_headset");
            uVar8 = sym.wcd_measure_adc_once(arg1,1);
            if (bVar3) {
                iVar7 = sym.wcd_mbhc_get_micbias(arg1);
                iVar7 = iVar7 * uVar13;
                bVar3 = true;
                uVar13 = 0;
                if (iStack_a0 != 0) {
                    uVar13 = iVar7 / iStack_a0;
                }
                *(param_1 + -0x271) = 1;
            }
        }
        pcVar21 = *(*piVar22 + 0xb8);
        if (pcVar21 != NULL) {
            __cfi_slowpath_diag(0xf1cf56a12423eb51,pcVar21,0x80013f0);
            uVar11 = (*pcVar21)(*puVar24);
        }
        uVar9 = uStack_a4;
        if ((uVar13 < uVar8) || ((uVar11 & 1) != 0)) {
            if (uVar8 <= uVar13) goto code_r0x0800acac;
            _printk(0x8002b80,"wcd_correct_swch_plug");
            uVar6 = 3;
            bVar5 = true;
            goto code_r0x0800a758;
        }
        iVar7 = sym.wcd_check_cross_conn(arg1);
        uVar11 = 0;
        bVar5 = bVar19;
        if (iVar7 < 0) goto code_r0x0800a758;
        if (iVar7 != 0) {
            uVar11 = 0;
            uVar8 = *(param_1 + -0x28c);
            uStack_a4 = 0;
            uStack_98 = uStack_98 + 1;
            uVar9 = uStack_a4;
            if (uVar8 <= uStack_98) {
                if (uVar8 < uStack_98) {
                    _printk(0x8001867,"wcd_correct_swch_plug");
                    uVar6 = 4;
                    goto code_r0x0800b298;
                }
                if ((uStack_98 == uVar8) && (pcVar21 = *(*piVar17 + 0x18), pcVar21 != NULL)) {
                    __cfi_slowpath_diag(0x75ef21adc6f2463b,pcVar21,0x8001410);
                    uVar14 = (*pcVar21)(uVar27,1);
                    if ((uVar14 & 1) != 0) {
                        _printk(0x80022ed,"wcd_correct_swch_plug");
                        uVar11 = 0;
                        uStack_a4 = 0;
                        uVar6 = 4;
                        uVar9 = uStack_a4;
                        goto code_r0x0800a758;
                    }
                }
                uVar6 = 4;
                _printk(0x800337c,"wcd_correct_swch_plug",4);
                uVar11 = 0;
                uVar9 = 0;
                bVar5 = false;
            }
            goto code_r0x0800a758;
        }
        uVar11 = sym.wcd_mbhc_get_micbias(arg1);
        uVar6 = *puVar20;
        if (uVar6 == 0) {
            uVar6 = (uVar11 * 0x6a4) / 0x708;
        }
        else {
            uVar9 = *puVar25;
            if (uVar9 != uVar11) {
                uVar11 = uVar6 * uVar11;
                uVar6 = 0;
                if (uVar9 != 0) {
                    uVar6 = uVar11 / uVar9;
                }
            }
        }
        uVar9 = sym.wcd_mbhc_get_micbias(arg1);
        uVar11 = *(param_1 + -0x294);
        if (uVar11 == 0) {
            uVar11 = (uVar9 * 0x4b) / 0x708;
        }
        else {
            uVar10 = *puVar25;
            if (uVar10 != uVar9) {
                uVar9 = uVar11 * uVar9;
                uVar11 = 0;
                if (uVar10 != 0) {
                    uVar11 = uVar9 / uVar10;
                }
            }
        }
        uVar9 = 3;
        if (uVar8 <= uVar6) {
            uVar9 = 1;
        }
        uVar6 = 2;
        if (uVar11 <= uVar8) {
            uVar6 = uVar9;
        }
        uVar9 = uStack_a4 + 1;
        _printk(0x8002ca1,"wcd_mbhc_get_plug_from_adc",uVar6);
        uVar11 = 0;
        if (uVar9 < *(param_1 + -0x28c)) {
            uStack_a4 = 0;
            uStack_98 = 0;
            if (!bVar3) goto code_r0x0800a758;
        }
        else {
            uStack_a4 = 0;
            uStack_98 = 0;
        }
code_r0x0800acac:
        _printk(0x800337c,"wcd_correct_swch_plug",uVar6);
        uVar9 = sym.wcd_mbhc_get_micbias(arg1);
        uVar6 = *puVar20;
        if (uVar6 == 0) {
            uVar6 = (uVar9 * 0x6a4) / 0x708;
        }
        else {
            uVar10 = *puVar25;
            if (uVar10 != uVar9) {
                uVar9 = uVar6 * uVar9;
                uVar6 = 0;
                if (uVar10 != 0) {
                    uVar6 = uVar9 / uVar10;
                }
            }
        }
        uVar10 = sym.wcd_mbhc_get_micbias(arg1);
        uVar9 = *(param_1 + -0x294);
        if (uVar9 == 0) {
            uVar9 = (uVar10 * 0x4b) / 0x708;
        }
        else {
            uVar2 = *puVar25;
            if (uVar2 != uVar10) {
                uVar10 = uVar9 * uVar10;
                uVar9 = 0;
                if (uVar2 != 0) {
                    uVar9 = uVar10 / uVar2;
                }
            }
        }
        uVar10 = 3;
        if (uVar8 <= uVar6) {
            uVar10 = 1;
        }
        uVar6 = 2;
        if (uVar9 <= uVar8) {
            uVar6 = uVar10;
        }
        _printk(0x8002ca1,"wcd_mbhc_get_plug_from_adc",uVar6);
        if ((bVar4 ^ 1U) & bVar3) {
            _printk(0x8002ef3,"wcd_correct_swch_plug");
            mutex_lock(iVar26);
            _printk(0x8001a88,"wcd_correct_swch_plug");
            sym.wcd_mbhc_find_plug_and_report(arg1,uVar6);
            _printk(0x80018cb,"wcd_correct_swch_plug");
            mutex_unlock(iVar26);
            bVar3 = true;
            iStack_94 = 2;
            bVar4 = bVar3;
            goto code_r0x0800a740;
        }
        if (!bVar4) {
            uVar9 = uStack_a4;
            bVar5 = false;
            if ((*(param_1 + -0x29f) | 4) != 5) {
                uVar14 = sym.wcd_swch_level_remove(arg1);
                bVar5 = false;
                if ((uVar14 & 1) == 0) {
                    pcVar1 = "special ";
                    if (!bVar3) {
                        pcVar1 = 0x800317f;
                    }
                    _printk(0x8001c4a,"wcd_correct_swch_plug",pcVar1);
                    goto code_r0x0800b298;
                }
            }
            goto code_r0x0800a758;
        }
        bVar4 = true;
    } while( true );
    while (iVar7 = iVar7 + -0x32, iVar7 != -0x802) {
        if (*(param_1 + -0x272) != '\0') {
            _printk(0x8002e83,"wcd_is_special_headset",1);
            bVar3 = false;
            goto code_r0x0800b1ec;
        }
        msleep(0x32);
        iVar12 = sym.wcd_measure_adc_once(arg1,1);
        if (iVar12 <= uVar13) {
            _printk(0x800243a,"wcd_is_special_headset",-iVar7);
            if (iVar7 == -2000) {
                _printk(0x800352b,"wcd_is_special_headset");
            }
            _printk(0x80030a5,"wcd_is_special_headset");
            bVar3 = true;
            *(param_1 + -0x271) = 1;
            goto code_r0x0800b1ec;
        }
    }
    _printk(0x800352b,"wcd_is_special_headset");
    bVar3 = false;
code_r0x0800b1ec:
    pcVar21 = *(*piVar22 + 0xf0);
    if ((pcVar21 != NULL) && (*(param_1 + -0x271) == '\0')) {
        __cfi_slowpath_diag(0x155f259693f926eb,pcVar21,0x8001670);
        (*pcVar21)(*puVar24,2,0);
    }
    _printk(0x8002121,"wcd_is_special_headset",*(param_1 + -0x271));
    if (bVar3) {
        _printk(0x8002101,"wcd_correct_swch_plug",3);
        uVar6 = 1;
    }
    else {
code_r0x0800b26c:
        iVar18 = *(param_1 + 0x48);
        if (*(iVar18 + 0x308) != 0) {
            snd_soc_component_update_bits
                      (*puVar24,*(iVar18 + 0x308),*(iVar18 + 0x30a),1 << (*(iVar18 + 0x30b) & 0x1f));
        }
        uVar6 = 3;
    }
code_r0x0800b298:
    uVar14 = sym.wcd_swch_level_remove(arg1);
    if ((uVar14 & 1) == 0) {
        _printk(0x8003067,"wcd_correct_swch_plug",uVar6,bVar19,*(param_1 + -0x270));
        piVar23 = param_1 + 0x48;
        iVar18 = *piVar23;
        if (*(iVar18 + 0x2e8) != 0) {
            snd_soc_component_update_bits(*puVar24,*(iVar18 + 0x2e8),*(iVar18 + 0x2ea),0);
            iVar18 = *piVar23;
        }
        if (*(iVar18 + 0x298) != 0) {
            snd_soc_component_update_bits(*puVar24,*(iVar18 + 0x298),*(iVar18 + 0x29a),0);
        }
        _printk(0x8002ef3,"wcd_correct_swch_plug");
        mutex_lock(iVar26);
        _printk(0x8001a88,"wcd_correct_swch_plug");
        sym.wcd_mbhc_find_plug_and_report(arg1,uVar6);
        _printk(0x80018cb,"wcd_correct_swch_plug");
        mutex_unlock(iVar26);
        if (uVar6 == 1) {
            iStack_94 = 3;
code_r0x0800b38c:
            iVar18 = *(param_1 + 0x48);
            if (*(iVar18 + 0x2f8) != 0) {
                snd_soc_component_update_bits
                          (*puVar24,*(iVar18 + 0x2f8),*(iVar18 + 0x2fa),1 << (*(iVar18 + 0x2fb) & 0x1f));
            }
            uVar6 = 1;
            *(param_1 + -0x271) = 1;
        }
        else {
            iVar16 = *(*piVar23 + 0x2f8);
            if (iVar16 != 0) {
                snd_soc_component_update_bits(*puVar24,iVar16,*(*piVar23 + 0x2fa),0);
            }
            iStack_94 = 3;
        }
        iVar18 = *piVar22;
        pcVar21 = *(iVar18 + 0x20);
        if (pcVar21 != NULL) {
            __cfi_slowpath_diag(0x7580eeff27e3c667,pcVar21,0x8001430);
            (*pcVar21)(arg1,1);
            iVar18 = *piVar22;
        }
        if (*(iVar18 + 0xd0) != 0) {
            pcVar21 = *(iVar18 + 0x98);
            __cfi_slowpath_diag(0x8520705fd5e55046,pcVar21,0x8001690);
            uVar13 = (*pcVar21)(arg1,2);
            if (uVar6 == 1) {
                if (*(param_1 + -0x26f) == '\0' && (uVar13 & 1) == 0) {
                    iVar18 = *(param_1 + 0x48);
                    if (*(iVar18 + 0x168) != 0) {
                        snd_soc_component_update_bits
                                  (*puVar24,*(iVar18 + 0x168),*(iVar18 + 0x16a),3 << (*(iVar18 + 0x16b) & 0x1f));
                        uVar6 = 1;
                        goto code_r0x0800b424;
                    }
                }
                uVar6 = 1;
            }
            else if (uVar6 == 2) {
                iVar18 = *(param_1 + 0x48);
                if (*(iVar18 + 0x168) == 0) {
                    uVar6 = 2;
                }
                else {
                    snd_soc_component_update_bits
                              (*puVar24,*(iVar18 + 0x168),*(iVar18 + 0x16a),3 << (*(iVar18 + 0x16b) & 0x1f));
                    uVar6 = 2;
                }
            }
            else {
                iVar16 = *(*(param_1 + 0x48) + 0x168);
                if (iVar16 != 0) {
                    snd_soc_component_update_bits(*puVar24,iVar16,*(*(param_1 + 0x48) + 0x16a),0);
                }
            }
        }
    }
    else {
        _printk(0x80017c6,"wcd_correct_swch_plug");
    }
code_r0x0800b424:
    pcVar21 = *(*piVar22 + 0xd0);
    if ((pcVar21 != NULL) && (*(param_1 + -0x271) == '\0')) {
        __cfi_slowpath_diag(0x1d4dfe77ec242b3c,pcVar21,0x8001450);
        (*pcVar21)(uVar27,2,3);
    }
    if ((uVar6 != 2) || (*(param_1 + -0x271) == '\0')) goto code_r0x0800b560;
    iVar18 = *piVar22;
    pcVar21 = *(iVar18 + 0xd0);
    if (pcVar21 == NULL) {
        pcVar21 = *(iVar18 + 0xf0);
        if (pcVar21 != NULL) goto code_r0x0800b4d4;
code_r0x0800b48c:
        pcVar21 = *(iVar18 + 0x40);
    }
    else {
        __cfi_slowpath_diag(0x1d4dfe77ec242b3c,pcVar21,0x8001470);
        (*pcVar21)(uVar27,2,3);
        iVar18 = *piVar22;
        pcVar21 = *(iVar18 + 0xf0);
        if (pcVar21 == NULL) goto code_r0x0800b48c;
code_r0x0800b4d4:
        __cfi_slowpath_diag(0x155f259693f926eb,pcVar21,0x8001490);
        (*pcVar21)(uVar27,2,0);
        pcVar21 = *(*piVar22 + 0x40);
    }
    if (pcVar21 != NULL) {
        __cfi_slowpath_diag(0x7e6c99e1529760f9,pcVar21,0x80014b0);
        (*pcVar21)(uVar27);
        iVar16 = *(*(param_1 + 0x48) + 0x188);
        if (iVar16 != 0) {
            snd_soc_component_update_bits(*puVar24,iVar16,*(*(param_1 + 0x48) + 0x18a),0);
        }
    }
    *(param_1 + -0x271) = 0;
code_r0x0800b560:
    if (((*(*piVar17 + 0x10) != '\0') && (uVar6 - 1 < 2)) && (*(param_1 + -0x272) == '\0')) {
        _printk(0x8002ef3,"wcd_correct_swch_plug");
        mutex_lock(iVar26);
        _printk(0x8001a88,"wcd_correct_swch_plug");
        sym.wcd_mbhc_hs_elec_irq(arg1,1,1);
        _printk(0x80018cb,"wcd_correct_swch_plug");
        mutex_unlock(iVar26);
    }
    if (uVar6 == 2) {
        _printk(0x8002ef3,"wcd_correct_swch_plug");
        mutex_lock(iVar26);
        _printk(0x8001a88,"wcd_correct_swch_plug");
        sym.wcd_mbhc_hs_elec_irq(arg1,0,1);
        _printk(0x80018cb,"wcd_correct_swch_plug");
        mutex_unlock(iVar26);
    }
    iVar26 = *piVar22;
    pcVar21 = *(iVar26 + 0x100);
    if (pcVar21 != NULL) {
        __cfi_slowpath_diag(0x1be676a8fa3b6db7,pcVar21,0x80014d0);
        (*pcVar21)(uVar27,1);
        iVar26 = *piVar22;
    }
    pcVar21 = *(iVar26 + 0x90);
    __cfi_slowpath_diag(0xce1a9c61fa6df8c5,pcVar21,0x80014f0);
    (*pcVar21)(arg1,0);
    if (iStack_94 == 0) {
        _printk(0x8001c65,"wcd_correct_swch_plug");
        uVar27 = cdev_tevent_alloc(0x36008a0b);
        cdev_tevent_add_int(uVar27,"MbhcStage",1);
        cdev_tevent_write(uVar27);
        cdev_tevent_destroy(uVar27);
    }
    _printk(0x8002bbe,"wcd_correct_swch_plug");
    return;
}


// ===== sym.wcd_mbhc_fw_read.47703894683a65bd92c9bc7b673552c9.cfi_jt @ 0x08004470 (size 8) =====

void sym.wcd_mbhc_fw_read.47703894683a65bd92c9bc7b673552c9.cfi_jt(int64_t param_1)

{
    uint64_t *puVar1;
    bool bVar2;
    int iVar3;
    uint32_t uVar4;
    uint64_t *puVar5;
    uint64_t *puVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar7;
    int iVar8;
    int64_t iVar9;
    ulong unaff_x30;
    uint64_t *puStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_68 = *(iVar9 + 0x5e0);
    iVar8 = 1;
    iVar9 = *(param_1 + -8);
    puStack_70 = NULL;
    do {
        _printk(0x8002181,"wcd_mbhc_fw_read",iVar8);
        pcVar7 = *(*(param_1 + -0x68) + 0x50);
        if (pcVar7 != NULL) {
            __cfi_slowpath_diag(0x7ec14beac6d10d85,pcVar7,0x8000cd0);
            puVar5 = (*pcVar7)(param_1 + -0x100,2);
            if (puVar5 == NULL) goto code_r0x08007b9c;
            _printk(0x800201f,"wcd_mbhc_fw_read");
            _printk(0x8001951,"wcd_mbhc_fw_read");
            puVar6 = puVar5 + 1;
            bVar2 = true;
code_r0x08007c78:
            if (0x69 < *puVar6) {
                puVar1 = puVar5;
                if (!bVar2) {
                    puVar1 = puStack_70 + 1;
                }
                if (*(*puVar1 + 0x41) * 4 + 0x56 <= *puVar6) {
                    if (bVar2) {
                        *(*(param_1 + -0x70) + 8) = *puVar5;
                        *(param_1 + 0x90) = puVar5;
                    }
                    else {
                        *(*(param_1 + -0x70) + 8) = puStack_70[1];
                        *(param_1 + 0x88) = puStack_70;
                    }
                    goto code_r0x08007cd0;
                }
            }
            _printk(0x8002c55,"wcd_mbhc_fw_read");
            if (!bVar2) {
                release_firmware(puStack_70);
            }
            goto code_r0x08007cd0;
        }
code_r0x08007b9c:
        iVar3 = request_firmware(&puStack_70,"wcd9320/wcd9320_mbhc.bin",*(iVar9 + 0x18));
        if (iVar3 == 0) {
            _printk(0x800201f,"wcd_mbhc_fw_read");
            _printk(0x8001aa2,"wcd_mbhc_fw_read");
            puVar5 = NULL;
            bVar2 = false;
            puVar6 = puStack_70;
            goto code_r0x08007c78;
        }
        usleep_range_state(4000000,0x3d0964,2);
        iVar8 = iVar8 + 1;
    } while (iVar8 != 0x10);
    _printk(0x8001aa2,"wcd_mbhc_fw_read");
    _printk(0x8001bc4,"wcd_mbhc_fw_read");
code_r0x08007cd0:
    sym.wcd_mbhc_initialise(param_1 + -0x100);
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_68) {
        return;
    }
    iVar9 = __stack_chk_fail();
    *extraout_x18 = sym.wcd_btn_lpress_fn;
    _printk(0x8002044,"wcd_btn_lpress_fn");
    if (*(*(iVar9 + 0x3a8) + 0x158) == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        uVar4 = snd_soc_component_read(*(iVar9 + 0xf8));
        uVar4 = (uVar4 & *(*(iVar9 + 0x3a8) + 0x15a)) >> (*(*(iVar9 + 0x3a8) + 0x15b) & 0x1f);
    }
    if (*(iVar9 + 0xc1) == '\x01') {
        _printk(0x8001eae,"wcd_btn_lpress_fn",uVar4);
        sym.wcd_mbhc_jack_report(iVar9,iVar9 + 0x278,*(iVar9 + 0x88),*(iVar9 + 0x88));
    }
    _printk(0x8002bbe,"wcd_btn_lpress_fn");
    pcVar7 = *(*(iVar9 + 0x98) + 0x90);
    __cfi_slowpath_diag(0xce1a9c61fa6df8c5,pcVar7,0x8000cf0);
    (*pcVar7)(iVar9,0);
    return;
}


// ===== sym.wcd_btn_lpress_fn.47703894683a65bd92c9bc7b673552c9.cfi_jt @ 0x08004478 (size 8) =====

void sym.wcd_btn_lpress_fn.47703894683a65bd92c9bc7b673552c9.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8002044,"wcd_btn_lpress_fn");
    if (*(*(param_1 + 0x3a8) + 0x158) == 0) {
        uVar1 = 0xffffffea;
    }
    else {
        uVar1 = snd_soc_component_read(*(param_1 + 0xf8));
        uVar1 = (uVar1 & *(*(param_1 + 0x3a8) + 0x15a)) >> (*(*(param_1 + 0x3a8) + 0x15b) & 0x1f);
    }
    if (*(param_1 + 0xc1) == '\x01') {
        _printk(0x8001eae,"wcd_btn_lpress_fn",uVar1);
        sym.wcd_mbhc_jack_report(param_1,param_1 + 0x278,*(param_1 + 0x88),*(param_1 + 0x88));
    }
    _printk(0x8002bbe,"wcd_btn_lpress_fn");
    pcVar2 = *(*(param_1 + 0x98) + 0x90);
    __cfi_slowpath_diag(0xce1a9c61fa6df8c5,pcVar2,0x8000cf0);
    (*pcVar2)(param_1,0);
    return;
}


// ===== sym.wcd_mbhc_usbc_ana_event_handler.47703894683a65bd92c9bc7b673552c9.cfi_jt @ 0x08004480 (size 8) =====

ulong sym.wcd_mbhc_usbc_ana_event_handler.47703894683a65bd92c9bc7b673552c9.cfi_jt(int64_t param_1,int64_t param_2)

{
    int16_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    code *pcVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0x400) {
        uVar2 = 0xffffffea;
    }
    else {
        iVar4 = *(param_1 + -0x370);
        _dev_printk(0x800349a,*(*(param_1 + -0x308) + 0x18),"%s: mode = %lu\n","wcd_mbhc_usbc_ana_event_handler",
                    param_2);
        if (param_2 == 1) {
            msm_cdc_pinctrl_select_active_state();
            _dev_printk(0x800349a,*(*(param_1 + -0x308) + 0x18),"disable uart\n");
            pcVar3 = *(*(param_1 + -0x368) + 0x80);
            if (pcVar3 != NULL) {
                __cfi_slowpath_diag(0x1be676a8fa3b6db7,pcVar3,0x8000c90);
                (*pcVar3)(*(param_1 + -0x308),0);
                pcVar3 = *(*(param_1 + -0x368) + 0x80);
                __cfi_slowpath_diag(0x1be676a8fa3b6db7,pcVar3,0x8000cb0);
                (*pcVar3)(*(param_1 + -0x308),1);
            }
            iVar1 = *(*(param_1 + -0x58) + 8);
            if (iVar1 != 0) {
                snd_soc_component_update_bits(*(param_1 + -0x308),iVar1,*(*(param_1 + -0x58) + 10),0);
                iVar4 = *(param_1 + -0x58);
                if (*(iVar4 + 8) != 0) {
                    snd_soc_component_update_bits
                              (*(param_1 + -0x308),*(iVar4 + 8),*(iVar4 + 10),1 << (*(iVar4 + 0xb) & 0x1f));
                }
            }
        }
        else {
            msm_cdc_pinctrl_select_sleep_state(*(iVar4 + 0x68));
            _dev_printk(0x800349a,*(*(param_1 + -0x308) + 0x18),"enable uart\n");
        }
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.wcd_event_notify.47703894683a65bd92c9bc7b673552c9.cfi_jt @ 0x08004488 (size 8) =====

ulong sym.wcd_event_notify.47703894683a65bd92c9bc7b673552c9.cfi_jt(ulong param_1,int param_2,int64_t param_3)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint64_t arg2;
    char *pcVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong uVar9;
    code *pcVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar6 = param_2 - 1;
    if (uVar6 < 0x10) {
        pcVar7 = *(uVar6 * 8 + 0x8003cd0);
    }
    else {
        pcVar7 = "WCD_EVENT_INVALID";
    }
    uVar9 = *(param_3 + 0xf8);
    _printk(0x80034cb,"wcd_event_notify",pcVar7);
    pcVar10 = *(*(param_3 + 0x98) + 0x98);
    if (pcVar10 == NULL) {
        uVar4 = 0;
        uVar5 = 0;
    }
    else {
        __cfi_slowpath_diag(0x8520705fd5e55046,pcVar10,0x8000d10);
        uVar4 = (*pcVar10)(param_3,2);
        pcVar10 = *(*(param_3 + 0x98) + 0x98);
        __cfi_slowpath_diag(0x8520705fd5e55046,pcVar10,0x8000d30);
        uVar5 = (*pcVar10)(param_3,1);
    }
    if (0xf < uVar6) {
        return 0;
    }
    switch(uVar6) {
    case 0:
        if ((*(*(param_3 + 0x98) + 0xd0) != 0) && (*(param_3 + 0xef) == '\0')) {
            iVar8 = *(param_3 + 0x3a8);
            if (*(iVar8 + 0xb8) != 0) {
                uVar6 = snd_soc_component_read(*(param_3 + 0xf8));
                iVar8 = *(param_3 + 0x3a8);
                if ((uVar6 & *(iVar8 + 0xba)) >> (*(iVar8 + 0xbb) & 0x1f) == 0) {
                    return 0;
                }
            }
            if (*(iVar8 + 0x168) != 0) {
                snd_soc_component_update_bits
                          (*(param_3 + 0xf8),*(iVar8 + 0x168),*(iVar8 + 0x16a),3 << (*(iVar8 + 0x16b) & 0x1f));
            }
        }
        break;
    case 1:
        iVar8 = *(param_3 + 0x98);
        if (*(iVar8 + 0xd0) == 0) {
            *(param_3 + 0xf1) = 0;
        }
        if (*(param_3 + 0xef) == '\0') {
            pcVar10 = *(iVar8 + 0x48);
            if (pcVar10 != NULL) {
                __cfi_slowpath_diag(0x1be676a8fa3b6db7,pcVar10,0x8000df0);
                (*pcVar10)(uVar9,0);
                iVar8 = *(param_3 + 0x98);
            }
            pcVar10 = *(iVar8 + 0x40);
            if ((pcVar10 != NULL) && (*(param_3 + 0xef) == '\0')) {
                __cfi_slowpath_diag(0x7e6c99e1529760f9,pcVar10,0x8000e10);
                (*pcVar10)(uVar9);
            }
            if ((*(param_3 + 0x1a8) & 1) == 0) {
                arg2 = *(param_3 + 0x1a8) & 2;
            }
            else {
                arg2 = 2;
            }
            sym.wcd_enable_curr_micbias(param_3,arg2);
            pcVar10 = *(*(param_3 + 0x98) + 0x58);
            if (pcVar10 == NULL) {
                return 0;
            }
            __cfi_slowpath_diag(0x7c983a9917f6b4a7,pcVar10,0x8000e30);
            (*pcVar10)(uVar9,uVar5 & 1,0);
            return 0;
        }
        goto code_r0x080082c8;
    case 3:
        if (*(param_3 + 0xef) != '\0') {
            iVar8 = *(param_3 + 0x98);
            pcVar10 = *(iVar8 + 0xa8);
            if (pcVar10 != NULL) {
                __cfi_slowpath_diag(0x23d049188c4e6e9c,pcVar10,0x8000d50);
                (*pcVar10)(uVar9,0,1);
                pcVar10 = *(*(param_3 + 0x98) + 0xa8);
                __cfi_slowpath_diag(0x23d049188c4e6e9c,pcVar10,0x8000d70);
                (*pcVar10)(uVar9,1,1);
                msleep(0x32);
                iVar8 = *(param_3 + 0x98);
            }
            pcVar10 = *(iVar8 + 0x48);
            if (pcVar10 != NULL) {
                __cfi_slowpath_diag(0x1be676a8fa3b6db7,pcVar10,0x8000d90);
                (*pcVar10)(uVar9,1);
                iVar8 = *(param_3 + 0x98);
            }
            pcVar10 = *(iVar8 + 0xa8);
            if (pcVar10 != NULL) {
                __cfi_slowpath_diag(0x23d049188c4e6e9c,pcVar10,0x8000db0);
                (*pcVar10)(uVar9,0,0);
            }
        }
        if (*(*(param_3 + 0x98) + 0xd0) == 0) {
            *(param_3 + 0xf1) = 1;
            sym.wcd_enable_curr_micbias(param_3,1);
        }
        else {
            iVar8 = *(param_3 + 0x3a8);
            if (*(iVar8 + 0xb8) != 0) {
                uVar6 = snd_soc_component_read(*(param_3 + 0xf8));
                iVar8 = *(param_3 + 0x3a8);
                if ((uVar6 & *(iVar8 + 0xba)) >> (*(iVar8 + 0xbb) & 0x1f) == 0) goto code_r0x0800832c;
            }
            if (*(iVar8 + 0x168) != 0) {
                snd_soc_component_update_bits(*(param_3 + 0xf8),*(iVar8 + 0x168),*(iVar8 + 0x16a),0);
            }
        }
code_r0x0800832c:
        pcVar10 = *(*(param_3 + 0x98) + 0x58);
        if (pcVar10 != NULL) {
            __cfi_slowpath_diag(0x7c983a9917f6b4a7,pcVar10,0x8000dd0);
            (*pcVar10)(uVar9,uVar5 & 1,1);
        }
        break;
    case 5:
        *(param_3 + 0xf1) = 0;
        _printk(0x80021d5,"wcd_event_notify",0);
        break;
    case 7:
        *(param_3 + 0xf1) = 1;
        _printk(0x80021d5,"wcd_event_notify",1);
        break;
    case 8:
        puVar1 = param_3 + 0x1a8;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = *puVar1 | 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if ((uVar4 & 1) != 0) goto code_r0x080082c8;
code_r0x08008480:
        iVar8 = 2;
        goto code_r0x08008488;
    case 9:
        mutex_lock(obj.wcd_mbhc_hs_elec_irq.__already_done);
        puVar1 = param_3 + 0x198;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = *puVar1 & 0xfffffffffffffffe;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        puVar1 = param_3 + 0x1a8;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = *puVar1 & 0xfffffffffffffffe;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        sym.wcd_enable_curr_micbias(param_3,uVar4 & 1);
        mutex_unlock(obj.wcd_mbhc_hs_elec_irq.__already_done);
        puVar1 = param_3 + 0x1a0;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = *puVar1 & 0xfffffffffffffffe;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        break;
    case 10:
        puVar1 = param_3 + 0x1a8;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = *puVar1 | 2;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if ((uVar4 & 1) == 0) goto code_r0x08008480;
code_r0x080082c8:
        iVar8 = 1;
code_r0x08008488:
        sym.wcd_enable_curr_micbias(param_3,iVar8);
        break;
    case 0xb:
        mutex_lock(obj.hphr_pa_lock);
        puVar1 = param_3 + 0x198;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = *puVar1 & 0xfffffffffffffffd;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        puVar1 = param_3 + 0x1a8;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = *puVar1 & 0xfffffffffffffffd;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        sym.wcd_enable_curr_micbias(param_3,uVar4 & 1);
        mutex_unlock(obj.hphr_pa_lock);
        puVar1 = param_3 + 0x1a0;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = *puVar1 & 0xfffffffffffffffd;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        break;
    case 0xe:
        pcVar10 = *(*(param_3 + 0x98) + 0x70);
        __cfi_slowpath_diag(0x23d049188c4e6e9c,pcVar10,0x8000e50);
        iVar8 = *(param_3 + 0x358);
        uVar9 = 0;
        goto code_r0x08008308;
    case 0xf:
        pcVar10 = *(*(param_3 + 0x98) + 0x70);
        __cfi_slowpath_diag(0x23d049188c4e6e9c,pcVar10,0x8000e70);
        iVar8 = *(param_3 + 0x358);
        uVar9 = 1;
code_r0x08008308:
        (*pcVar10)(*(param_3 + 0xf8),*(iVar8 + 0x14),uVar9);
    }
    return 0;
}


// ===== sym.wcd_mbhc_jack_report.cfi_jt @ 0x08004490 (size 8) =====

void sym.wcd_mbhc_jack_report.cfi_jt(int64_t param_1,int64_t param_2,uint param_3,int param_4)

{
    int iVar1;
    int iVar2;
    uint16_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8002685,"wcd_mbhc_jack_report",*(param_2 + 0x50),param_3,param_4);
    snd_soc_jack_report(param_2,param_3,param_4);
    iVar1 = *(param_1 + 0xa0);
    iVar2 = *(param_2 + 0x50);
    if (_segment.ehdr == 3) {
        _segment.ehdr = 0;
    }
    _printk(0x8002217,"add_headset_event",iVar1,param_4,iVar2);
    if (iVar1 == 3) {
        if (param_4 == 0x1000) {
            if (iVar2 != 0) {
                uVar3 = _segment.ehdr | 0xf0;
                if ((_segment.ehdr & 0xf0) < 0xe1) {
                    uVar3 = _segment.ehdr + 0x10;
                }
                _segment.ehdr = CONCAT22(*0x8000002,uVar3);
                return;
            }
            iVar1 = _segment.ehdr + 1;
            uVar3 = _segment.ehdr | 0xf;
            if (((_segment.ehdr & 0xffff ^ 0xffffffff) & 0xf) != 0) {
                uVar3 = _segment.ehdr + 1;
            }
            *0x8000002 = iVar1 >> 0x10;
            _segment.ehdr = CONCAT22(*0x8000002,uVar3 | iVar1 * 0x100);
            return;
        }
        if (param_4 == 0x2000) {
            if (iVar2 != 0) {
                uVar3 = _segment.ehdr | 0xf0;
                if ((_segment.ehdr & 0xf0) < 0xe1) {
                    uVar3 = _segment.ehdr + 0x10;
                }
                _segment.ehdr = CONCAT22(*0x8000002,uVar3);
                return;
            }
            iVar1 = _segment.ehdr + 1;
            uVar3 = _segment.ehdr | 0xf;
            if (((_segment.ehdr & 0xffff ^ 0xffffffff) & 0xf) != 0) {
                uVar3 = _segment.ehdr + 1;
            }
            *0x8000002 = iVar1 >> 0x10;
            _segment.ehdr = CONCAT22(*0x8000002,uVar3 | iVar1 * 0x100);
            return;
        }
        if (param_4 == 0x4000) {
            if (iVar2 != 0) {
                uVar3 = _segment.ehdr | 0xf0;
                if ((_segment.ehdr & 0xf0) < 0xe1) {
                    uVar3 = _segment.ehdr + 0x10;
                }
                _segment.ehdr = CONCAT22(*0x8000002,uVar3);
                return;
            }
            iVar1 = _segment.ehdr + 1;
            uVar3 = _segment.ehdr | 0xf;
            if (((_segment.ehdr & 0xffff ^ 0xffffffff) & 0xf) != 0) {
                uVar3 = _segment.ehdr + 1;
            }
            *0x8000002 = iVar1 >> 0x10;
            _segment.ehdr = CONCAT22(*0x8000002,uVar3 | iVar1 * 0x100);
            return;
        }
        uVar4 = _segment.ehdr & 0xffff | 0xf;
        if (((_segment.ehdr & 0xffff ^ 0xffffffff) & 0xf) != 0) {
            uVar4 = (_segment.ehdr & 0xffff) + 1;
        }
        uVar5 = uVar4 | 0xf0;
        if ((uVar4 & 0xf0) < 0xe1) {
            uVar5 = uVar4 + 0x10;
        }
    }
    else {
        if (iVar1 != 1) {
            if (iVar1 != 0) {
                return;
            }
            uVar4 = _segment.ehdr & 0xffff | 0xf;
            if (((_segment.ehdr & 0xffff ^ 0xffffffff) & 0xf) != 0) {
                uVar4 = (_segment.ehdr & 0xffff) + 1;
            }
            uVar3 = uVar4 | 0xf0;
            if ((uVar4 & 0xf0) < 0xe1) {
                uVar3 = uVar4 + 0x10;
            }
            _segment.ehdr = CONCAT22(*0x8000002,uVar3);
            return;
        }
        uVar5 = _segment.ehdr & 0xffff | 0xf;
        if (((_segment.ehdr & 0xffff ^ 0xffffffff) & 0xf) != 0) {
            uVar5 = (_segment.ehdr & 0xffff) + 1;
        }
    }
    uVar3 = uVar5 | 0xf00;
    if ((uVar5 & 0xf00) < 0xe01) {
        uVar3 = uVar5 + 0x100;
    }
    _segment.ehdr = CONCAT22(*0x8000002,uVar3);
    return;
}


// ===== sym.wcd_mbhc_init.cfi_jt @ 0x08004498 (size 8) =====

uint32_t sym.wcd_mbhc_init.cfi_jt
                   (ulong *param_1,code *param_2,ulong *param_3,int64_t param_4,int64_t param_5,uint8_t param_6)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    uint32_t uVar4;
    int iVar5;
    ulong uVar6;
    uint64_t uVar7;
    char *pcVar8;
    uint uVar9;
    int64_t *piVar10;
    uint uVar11;
    uint uVar12;
    ulong *in_x18;
    code *pcVar13;
    int64_t iVar14;
    ulong unaff_x30;
    ulong uStack_70;
    ulong uStack_68;
    uint uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iStack_58 = *(iVar14 + 0x5e0);
    iVar14 = *(param_2 + 0x20);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    _printk(0x8002012,"wcd_mbhc_init");
    uVar4 = of_property_read_variable_u32_array
                      (*(*(iVar14 + 0x40) + 0x2f0),"qcom,msm-mbhc-hphl-swh",&uStack_70 + 4,1,0);
    if (uVar4 < 0) {
        param_1 = cdev_tevent_alloc(0x36008a09);
        cdev_tevent_add_int(param_1,"MbhcStage",0);
        cdev_tevent_add_int(param_1,"MissingNodeType",0);
        cdev_tevent_write(param_1);
        cdev_tevent_destroy(param_1);
        uVar6 = *(iVar14 + 0x40);
        pcVar8 = "qcom,msm-mbhc-hphl-swh";
code_r0x080070b4:
        _dev_err(uVar6,"%s: missing %s in dt node [TF-HEADSET]\n","wcd_mbhc_init",pcVar8);
        goto code_r0x080070b8;
    }
    uVar4 = of_property_read_variable_u32_array(*(*(iVar14 + 0x40) + 0x2f0),"qcom,msm-mbhc-gnd-swh",&uStack_70,1,0);
    if (uVar4 < 0) {
        param_1 = cdev_tevent_alloc(0x36008a09);
        cdev_tevent_add_int(param_1,"MbhcStage",0);
        cdev_tevent_add_int(param_1,"MissingNodeType",1);
        cdev_tevent_write(param_1);
        cdev_tevent_destroy(param_1);
        uVar6 = *(iVar14 + 0x40);
        pcVar8 = "qcom,msm-mbhc-gnd-swh";
        goto code_r0x080070b4;
    }
    iVar5 = of_property_read_variable_u32_array
                      (*(*(iVar14 + 0x40) + 0x2f0),"qcom,msm-mbhc-hs-mic-max-threshold-mv",param_1 + 0x19,1,0);
    if (iVar5 < 0) {
        _dev_printk(0x800349a,*(iVar14 + 0x40),"%s: missing %s in dt node\n","wcd_mbhc_init",
                    "qcom,msm-mbhc-hs-mic-max-threshold-mv");
    }
    iVar5 = of_property_read_variable_u32_array
                      (*(*(iVar14 + 0x40) + 0x2f0),"qcom,msm-mbhc-hs-mic-min-threshold-mv",param_1 + 0xcc,1,0);
    if (iVar5 < 0) {
        _dev_printk(0x800349a,*(iVar14 + 0x40),"%s: missing %s in dt node\n","wcd_mbhc_init",
                    "qcom,msm-mbhc-hs-mic-min-threshold-mv");
    }
    uVar4 = of_property_read_variable_u32_array
                      (*(*(iVar14 + 0x40) + 0x2f0),"qcom,msm-mbhc-moist-cfg",&uStack_68,3,0);
    if (uVar4 < 0) {
        _dev_printk(0x800349a,*(iVar14 + 0x40),"%s: no qcom,msm-mbhc-moist-cfg in DT\n","wcd_mbhc_init");
        uVar11 = 3;
        uVar9 = 1;
        uVar12 = 1;
    }
    else {
        uVar9 = uStack_68;
        uVar11 = uStack_68._4_4_;
        uVar12 = uStack_60;
    }
    *(param_1 + 0xdc) = uVar11;
    *(param_1 + 0x1c) = uVar12;
    *(param_1 + 0xc2) = 0;
    *(param_1 + 0x18) = 0;
    param_1[0x1f] = param_2;
    param_1[0x6b] = param_4;
    *(param_1 + 0x38) = param_6 & 1;
    *(param_1 + 0xef) = 0;
    *(param_1 + 0xc3) = uStack_70._4_4_ != 0;
    *(param_1 + 0xc4) = uStack_70 != 0;
    param_1[0x13] = param_3;
    *(param_1 + 0x1e) = 0;
    *(param_1 + 0xf2) = 0;
    *(param_1 + 0xf5) = 0;
    *(param_1 + 0x1c4) = 0;
    param_1[0x75] = param_5;
    *(param_1 + 0xd4) = 4;
    *(param_1 + 0x1b) = uVar9;
    *(param_1 + 0xe4) = 0x6400000064;
    if (param_4 == 0) {
        _printk(0x8002bcb,"wcd_mbhc_init");
        uVar4 = 0xffffffea;
        goto code_r0x080070d0;
    }
    if (param_5 == 0) {
        uVar6 = *(param_2 + 0x18);
        pcVar8 = "%s: mbhc registers are not defined\n";
    }
    else {
        if ((((param_3 != NULL) && (param_3[0xd] != 0)) && (param_3[0xe] != 0)) &&
           (((param_3[0xf] != 0 && (param_3[0x11] != 0)) &&
            ((param_3[0x12] != 0 && ((param_3[0x14] != 0 && (param_3[0x18] != 0)))))))) {
            if (param_1[0x3f] == 0) {
                uVar4 = snd_soc_card_jack_new(*(param_2 + 0x20),"Headset Jack",0xf,param_1 + 0x39,0,0);
                if (uVar4 == 0) {
                    uVar4 = snd_soc_card_jack_new(*(param_2 + 0x20),"Button Jack",0x7e00,param_1 + 0x4f,0,0);
                    if (uVar4 != 0) {
                        _printk(0x8001b60);
                        goto code_r0x080070d0;
                    }
                    uVar4 = snd_jack_set_key(param_1[0x55],0x4000,0xe2);
                    if (uVar4 == 0) {
                        param_1[0x20] = 0xfffffffe0;
                        param_1[0x21] = param_1 + 0x21;
                        param_1[0x22] = param_1 + 0x21;
                        param_1[0x23] = sym.wcd_mbhc_fw_read.47703894683a65bd92c9bc7b673552c9.cfi_jt;
                        init_timer_key(param_1 + 0x26,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                        *param_1 = 0xfffffffe0;
                        param_1[1] = param_1 + 1;
                        param_1[2] = param_1 + 1;
                        param_1[3] = sym.wcd_btn_lpress_fn.47703894683a65bd92c9bc7b673552c9.cfi_jt;
                        init_timer_key(param_1 + 6,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                        uVar4 = 0;
                        goto code_r0x08007310;
                    }
                    uVar6 = 0x8002393;
                }
                else {
                    uVar6 = 0x8002c1e;
                }
                _printk(uVar6,"wcd_mbhc_init");
                goto code_r0x080070d0;
            }
            uVar4 = uVar4 & uVar4 >> 0x1f;
code_r0x08007310:
            *(param_1 + 0x76) = 0;
            __init_swait_queue_head(param_1 + 0x77,"&x->wait",obj.init_completion.__key);
            param_3 = param_1 + 0x72;
            param_1[0x72] = sym.wcd_event_notify.47703894683a65bd92c9bc7b673552c9.cfi_jt;
            pcVar13 = *(param_1[0x13] + 0x60);
            if (pcVar13 != NULL) {
                __cfi_slowpath_diag(0xde385033fff74d90,pcVar13,0x8000730);
                uVar4 = (*pcVar13)(param_1,param_3,1);
                if (uVar4 != 0) {
                    uVar6 = 0x8001b7d;
                    goto code_r0x080070c0;
                }
            }
            __init_waitqueue_head(param_1 + 0x15,"&mbhc->wait_btn_press",obj.wcd_mbhc_hs_elec_irq.__already_done);
            __mutex_init(param_1 + 0x65,"&mbhc->codec_resource_lock",obj.wcd_mbhc_hs_elec_irq.__already_done);
            if (*(param_1 + 0x3d4) != 0) {
                if (*(param_1 + 0x3d4) == 1) {
                    sym.wcd_mbhc_adc_init(param_1);
                }
                else {
                    _printk(0x8002517,"wcd_mbhc_init");
                }
            }
            piVar10 = param_1[0x7d];
            if ((((piVar10 == NULL) || (*piVar10 == 0)) || (piVar10[1] == 0)) ||
               ((piVar10[2] == 0 || (piVar10[4] == 0)))) {
                _printk(0x800215c,"wcd_mbhc_init");
                goto code_r0x08007444;
            }
            pcVar13 = *(param_1[0x13] + 0x68);
            __cfi_slowpath_diag(0x86e29da66b60381b,pcVar13,0x8000750);
            uVar4 = (*pcVar13)(param_2,*param_1[0x6b],
                               sym.wcd_mbhc_mech_plug_detect_irq.47703894683a65bd92c9bc7b673552c9.cfi_jt,"mbhc sw intr"
                               ,param_1);
            if (uVar4 != 0) {
                _printk(0x8002ec9,"wcd_mbhc_init",*param_1[0x6b],uVar4);
                goto code_r0x08007444;
            }
            pcVar13 = *(param_1[0x13] + 0x68);
            __cfi_slowpath_diag(0x86e29da66b60381b,pcVar13,0x8000770);
            uVar4 = (*pcVar13)(param_2,*(param_1[0x6b] + 4),
                               sym.wcd_mbhc_btn_press_handler.47703894683a65bd92c9bc7b673552c9.cfi_jt,
                               "Button Press detect",param_1);
            if (uVar4 != 0) goto code_r0x080077cc;
            pcVar13 = *(param_1[0x13] + 0x68);
            __cfi_slowpath_diag(0x86e29da66b60381b,pcVar13,0x8000790);
            uVar4 = (*pcVar13)(param_2,*(param_1[0x6b] + 8),
                               sym.wcd_mbhc_release_handler.47703894683a65bd92c9bc7b673552c9.cfi_jt,
                               "Button Release detect",param_1);
            if (uVar4 != 0) {
                _printk(0x80029f6,"wcd_mbhc_init",*(param_1[0x6b] + 8));
                goto code_r0x08007a1c;
            }
            pcVar13 = *(param_1[0x13] + 0x68);
            __cfi_slowpath_diag(0x86e29da66b60381b,pcVar13,0x80007b0);
            uVar4 = (*pcVar13)(param_2,*(param_1[0x6b] + 0xc),*param_1[0x7d],"Elect Insert",param_1);
            if (uVar4 == 0) {
                pcVar13 = *(param_1[0x13] + 0x70);
                __cfi_slowpath_diag(0x23d049188c4e6e9c,pcVar13,0x80007d0);
                (*pcVar13)(param_2,*(param_1[0x6b] + 0xc),0);
                puVar1 = param_1 + 0x7b;
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar3) {
                        *puVar1 = *puVar1 & 0xfffffffffffffffe;
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
                pcVar13 = *(param_1[0x13] + 0x68);
                __cfi_slowpath_diag(0x86e29da66b60381b,pcVar13,0x80007f0);
                uVar4 = (*pcVar13)(param_2,*(param_1[0x6b] + 0x10),*(param_1[0x7d] + 8),"Elect Remove",param_1);
                if (uVar4 == 0) {
                    pcVar13 = *(param_1[0x13] + 0x70);
                    __cfi_slowpath_diag(0x23d049188c4e6e9c,pcVar13,0x8000810);
                    (*pcVar13)(param_2,*(param_1[0x6b] + 0x10),0);
                    Hint_Prefetch(puVar1,2,0,1);
                    do {
                        cVar2 = '\x01';
                        bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar3) {
                            *puVar1 = *puVar1 & 0xfffffffffffffffd;
                            cVar2 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar2 != '\0');
                    pcVar13 = *(param_1[0x13] + 0x68);
                    __cfi_slowpath_diag(0x86e29da66b60381b,pcVar13,0x8000830);
                    uVar4 = (*pcVar13)(param_2,*(param_1[0x6b] + 0x14),
                                       sym.wcd_mbhc_hphl_ocp_irq.47703894683a65bd92c9bc7b673552c9.cfi_jt,
                                       "HPH_L OCP detect",param_1);
                    if (uVar4 == 0) {
                        pcVar13 = *(param_1[0x13] + 0x68);
                        __cfi_slowpath_diag(0x86e29da66b60381b,pcVar13,0x8000850);
                        uVar4 = (*pcVar13)(param_2,*(param_1[0x6b] + 0x18),
                                           sym.wcd_mbhc_hphr_ocp_irq.47703894683a65bd92c9bc7b673552c9.cfi_jt,
                                           "HPH_R OCP detect",param_1);
                        if (uVar4 == 0) {
                            if (param_1[0x83] != 0) {
code_r0x080078b4:
                                *(param_1 + 0x7a) = 0;
                                _printk(0x8002203,"wcd_mbhc_init",0);
                                uVar4 = 0;
                                goto code_r0x080070d0;
                            }
                            uVar7 = devm_extcon_dev_allocate(*(param_2 + 0x18),obj.mbhc_ext_dev_supported_table);
                            param_1[0x83] = uVar7;
                            if (uVar7 < 0xfffffffffffff001) {
                                uVar4 = devm_extcon_dev_register(*(param_2 + 0x18),uVar7);
                                if (uVar4 == 0) goto code_r0x080078b4;
                                _printk(0x8001e79,"wcd_mbhc_init");
                            }
                            else {
                                uVar4 = 0;
                            }
                            pcVar13 = *(param_1[0x13] + 0x78);
                            __cfi_slowpath_diag(0x374739a980183585,pcVar13,0x8000870);
                            (*pcVar13)(param_2,*(param_1[0x6b] + 0x18),param_1);
                        }
                        else {
                            _printk(0x80029f6,"wcd_mbhc_init",*(param_1[0x6b] + 0x18));
                        }
                        pcVar13 = *(param_1[0x13] + 0x78);
                        __cfi_slowpath_diag(0x374739a980183585,pcVar13,0x8000890);
                        (*pcVar13)(param_2,*(param_1[0x6b] + 0x14),param_1);
                    }
                    else {
                        _printk(0x80029f6,"wcd_mbhc_init",*(param_1[0x6b] + 0x14));
                    }
                    pcVar13 = *(param_1[0x13] + 0x78);
                    __cfi_slowpath_diag(0x374739a980183585,pcVar13,0x80008b0);
                    (*pcVar13)(param_2,*(param_1[0x6b] + 0x10),param_1);
                }
                else {
                    _printk(0x80029f6,"wcd_mbhc_init",*(param_1[0x6b] + 0x10));
                }
                pcVar13 = *(param_1[0x13] + 0x78);
                __cfi_slowpath_diag(0x374739a980183585,pcVar13,0x80008d0);
                (*pcVar13)(param_2,*(param_1[0x6b] + 0xc),param_1);
            }
            else {
                _printk(0x80029f6,"wcd_mbhc_init",*(param_1[0x6b] + 0xc));
            }
            pcVar13 = *(param_1[0x13] + 0x78);
            __cfi_slowpath_diag(0x374739a980183585,pcVar13,0x80008f0);
            (*pcVar13)(param_2,*(param_1[0x6b] + 8),param_1);
code_r0x08007a1c:
            pcVar13 = *(param_1[0x13] + 0x78);
            __cfi_slowpath_diag(0x374739a980183585,pcVar13,0x8000910);
            (*pcVar13)(param_2,*(param_1[0x6b] + 4),param_1);
            goto code_r0x08007a58;
        }
        uVar6 = *(param_2 + 0x18);
        pcVar8 = "%s: required mbhc callbacks are not defined\n";
    }
    _dev_err(uVar6,pcVar8,"wcd_mbhc_init");
    uVar4 = 0xffffffea;
code_r0x080070d0:
    while( true ) {
        iVar14 = sp_el0;
        if (*(iVar14 + 0x5e0) == iStack_58) break;
        uVar4 = __stack_chk_fail();
code_r0x080077cc:
        _printk(0x80029f6,"wcd_mbhc_init",*(param_1[0x6b] + 4));
code_r0x08007a58:
        pcVar13 = *(param_1[0x13] + 0x78);
        __cfi_slowpath_diag(0x374739a980183585,pcVar13,0x8000930);
        (*pcVar13)(param_2,*param_1[0x6b],param_1);
code_r0x08007444:
        param_2 = *(param_1[0x13] + 0x60);
        if (param_2 != NULL) {
            __cfi_slowpath_diag(0xde385033fff74d90,param_2,0x8000950);
            (*param_2)(param_1,param_3,0);
        }
code_r0x080070b8:
        uVar6 = 0x8002203;
code_r0x080070c0:
        _printk(uVar6,"wcd_mbhc_init",uVar4);
    }
    return uVar4;
}


// ===== sym.wcd_cancel_btn_work.cfi_jt @ 0x080044a0 (size 8) =====

uint32_t sym.wcd_cancel_btn_work.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = cancel_delayed_work_sync();
    if ((uVar1 & 1) != 0) {
        pcVar2 = *(*(param_1 + 0x98) + 0x90);
        __cfi_slowpath_diag(0xce1a9c61fa6df8c5,pcVar2,obj.hphr_pa_lock);
        (*pcVar2)(param_1,0);
    }
    return uVar1 & 1;
}


// ===== sym.wcd_mbhc_get_button_mask.cfi_jt @ 0x080044a8 (size 8) =====

uint sym.wcd_mbhc_get_button_mask.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    uint uVar2;
    ulong *in_x18;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar3 = *(*(param_1 + 0x98) + 0x88);
    __cfi_slowpath_diag(0xf0d2ea9a64921857,pcVar3,0x80006b0);
    uVar1 = (*pcVar3)(*(param_1 + 0xf8));
    if (uVar1 < 6) {
        uVar2 = *(uVar1 * 4 + 0x8003cb8);
    }
    else {
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.wcd_mbhc_release_handler.47703894683a65bd92c9bc7b673552c9.cfi_jt @ 0x080044b0 (size 8) =====

ulong sym.wcd_mbhc_release_handler.47703894683a65bd92c9bc7b673552c9.cfi_jt(ulong param_1,int64_t param_2)

{
    uint32_t uVar1;
    ulong uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8002012,"wcd_mbhc_release_handler");
    _printk(0x8002ef3,"wcd_mbhc_release_handler");
    mutex_lock(param_2 + 0x328);
    _printk(0x8001a88,"wcd_mbhc_release_handler");
    if (*(*(param_2 + 0x3a8) + 0x1d8) == 0) {
code_r0x08009408:
        uVar2 = 0x8002d44;
    }
    else {
        uVar1 = snd_soc_component_read(*(param_2 + 0xf8));
        if ((uVar1 & *(*(param_2 + 0x3a8) + 0x1da)) >> (*(*(param_2 + 0x3a8) + 0x1db) & 0x1f) != 0)
        goto code_r0x08009408;
        if (*(param_2 + 0xc0) != '\0') {
            *(param_2 + 0xc0) = 0;
            if ((*(param_2 + 0x3d4) == 0) && (*(param_2 + 0xc1) == '\x02')) {
                sym.wcd_mbhc_find_plug_and_report(param_2,1);
                goto code_r0x0800941c;
            }
            if ((*(param_2 + 0x89) & 0x7e) == 0) goto code_r0x0800941c;
            uVar3 = cancel_delayed_work_sync(param_2);
            if ((uVar3 & 1) == 0) {
                _printk(0x80030ec,"wcd_mbhc_release_handler");
                uVar1 = *(param_2 + 0x88);
code_r0x0800955c:
                sym.wcd_mbhc_jack_report(param_2,param_2 + 0x278,0,uVar1);
            }
            else {
                pcVar4 = *(*(param_2 + 0x98) + 0x90);
                __cfi_slowpath_diag(0xce1a9c61fa6df8c5,pcVar4,obj.hphr_pa_lock);
                (*pcVar4)(param_2,0);
                if (*(param_2 + 0xc2) == '\0') {
                    _printk(0x8001847,"wcd_mbhc_release_handler",*(param_2 + 0x88));
                    sym.wcd_mbhc_jack_report(param_2,param_2 + 0x278,*(param_2 + 0x88),*(param_2 + 0x88));
                    _printk(0x80034e0,"wcd_mbhc_release_handler",*(param_2 + 0x88));
                    uVar1 = *(param_2 + 0x88);
                    goto code_r0x0800955c;
                }
                _printk(0x8002661,"wcd_mbhc_release_handler");
            }
            *(param_2 + 0x88) = *(param_2 + 0x88) & 0xffff81ff;
            goto code_r0x0800941c;
        }
        uVar2 = 0x8002d6b;
    }
    _printk(uVar2,"wcd_mbhc_release_handler");
code_r0x0800941c:
    _printk(0x8002bbe,"wcd_mbhc_release_handler");
    _printk(0x80018cb,"wcd_mbhc_release_handler");
    mutex_unlock(param_2 + 0x328);
    return 1;
}


// ===== sym.wcd_mbhc_adc_hs_rem_irq.63f800c968f307bf87ec7421f61e82fa.cfi_jt @ 0x080044b8 (size 8) =====

ulong sym.wcd_mbhc_adc_hs_rem_irq.63f800c968f307bf87ec7421f61e82fa.cfi_jt(ulong param_1,int64_t param_2)

{
    uint32_t uVar1;
    int16_t iVar2;
    bool bVar3;
    uint32_t uVar4;
    int iVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    ulong uVar8;
    ulong uVar9;
    int64_t iVar10;
    ulong *in_x18;
    code *pcVar11;
    int iVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8002012,"wcd_mbhc_adc_hs_rem_irq");
    _printk(0x8002ef3,"wcd_mbhc_adc_hs_rem_irq");
    mutex_lock(param_2 + 0x328);
    _printk(0x8001a88,"wcd_mbhc_adc_hs_rem_irq");
    iVar10 = _delayed_work_timer_fn;
    uVar4 = sym.wcd_mbhc_get_micbias(param_2);
    uVar6 = *(param_2 + 200);
    if (uVar6 == 0) {
        uVar6 = (uVar4 * 0x6a4) / 0x708;
    }
    else {
        uVar1 = *(param_2 + 0xd0);
        if (uVar1 != uVar4) {
            uVar4 = uVar6 * uVar4;
            uVar6 = 0;
            if (uVar1 != 0) {
                uVar6 = uVar4 / uVar1;
            }
        }
    }
    pcVar11 = *(*(param_2 + 0x98) + 0xd0);
    if (pcVar11 != NULL) {
        __cfi_slowpath_diag(0x1d4dfe77ec242b3c,pcVar11,0x8001250);
        (*pcVar11)(*(param_2 + 0xf8),2,2);
    }
    iVar12 = 1;
    do {
        usleep_range_state(10000,0x2774,2);
        iVar5 = sym.wcd_measure_adc_once(param_2,1);
        _printk(0x8001bf5,"wcd_mbhc_adc_hs_rem_irq",iVar5);
        if ((iVar5 <= uVar6) && (3 < iVar12)) {
            _printk(0x80023ef,"wcd_mbhc_adc_hs_rem_irq");
            pcVar11 = *(*(param_2 + 0x98) + 0xd0);
            if (pcVar11 != NULL) {
                __cfi_slowpath_diag(0x1d4dfe77ec242b3c,pcVar11,0x8001270);
                (*pcVar11)(*(param_2 + 0xf8),2,3);
            }
            goto code_r0x0800c0e4;
        }
        iVar12 = iVar12 + 1;
    } while (-1 < (iVar10 + 0x19) - _delayed_work_timer_fn);
    pcVar11 = *(*(param_2 + 0x98) + 0xd0);
    if (pcVar11 != NULL) {
        __cfi_slowpath_diag(0x1d4dfe77ec242b3c,pcVar11,0x8001290);
        (*pcVar11)(*(param_2 + 0xf8),2,3);
    }
    uVar7 = sym.wcd_swch_level_remove(param_2);
    if ((uVar7 & 1) != 0) {
        _printk(0x800258a,"wcd_mbhc_adc_hs_rem_irq");
        goto code_r0x0800c0e4;
    }
    if ((*(*(param_2 + 0x90) + 0x48) == '\0') && (*(*(param_2 + 0x90) + 0x5c) == '\0')) {
        bVar3 = false;
    }
    else {
        pcVar11 = *(*(param_2 + 0x98) + 0xb8);
        bVar3 = false;
        if (pcVar11 != NULL) {
            __cfi_slowpath_diag(0xf1cf56a12423eb51,pcVar11,0x80012b0);
            uVar7 = (*pcVar11)(*(param_2 + 0xf8));
            if ((uVar7 & 1) == 0) {
                bVar3 = false;
            }
            else {
                iVar2 = *(*(param_2 + 0x3a8) + 0x1c8);
                if (iVar2 != 0) {
                    snd_soc_component_update_bits(*(param_2 + 0xf8),iVar2,*(*(param_2 + 0x3a8) + 0x1ca),0);
                }
                bVar3 = true;
            }
        }
        iVar10 = *(param_2 + 0x3a8);
        if (*(iVar10 + 0x238) != 0) {
            snd_soc_component_update_bits
                      (*(param_2 + 0xf8),*(iVar10 + 0x238),*(iVar10 + 0x23a),1 << (*(iVar10 + 0x23b) & 0x1f));
            iVar10 = *(param_2 + 0x3a8);
        }
        if (*(iVar10 + 0x248) != 0) {
            snd_soc_component_update_bits
                      (*(param_2 + 0xf8),*(iVar10 + 0x248),*(iVar10 + 0x24a),1 << (*(iVar10 + 0x24b) & 0x1f));
        }
        usleep_range_state(50000,0xc3b4,2);
        if (*(*(param_2 + 0x3a8) + 0x228) != 0) {
            uVar6 = snd_soc_component_read(*(param_2 + 0xf8));
            if (((*(*(param_2 + 0x90) + 0x48) != '\0') || (*(*(param_2 + 0x90) + 0x5c) != '\0')) &&
               ((uVar6 & *(*(param_2 + 0x3a8) + 0x22a)) >> (*(*(param_2 + 0x3a8) + 0x22b) & 0x1f) == 0)) {
                _printk(0x8001dd7,"wcd_mbhc_adc_hs_rem_irq");
                iVar10 = *(param_2 + 0x3a8);
                if (*(iVar10 + 8) == 0) {
                    iVar2 = *(iVar10 + 0x28);
                    if (iVar2 == 0) goto code_r0x0800bec8;
code_r0x0800c028:
                    snd_soc_component_update_bits
                              (*(param_2 + 0xf8),iVar2,*(iVar10 + 0x2a),1 << (*(iVar10 + 0x2b) & 0x1f));
                    iVar10 = *(param_2 + 0x3a8);
                    iVar2 = *(iVar10 + 8);
                    if (iVar2 != 0) goto code_r0x0800c04c;
code_r0x0800bed0:
                    iVar2 = *(iVar10 + 0xb8);
                    if (iVar2 == 0) goto code_r0x0800bed8;
code_r0x0800c070:
                    snd_soc_component_update_bits(*(param_2 + 0xf8),iVar2,*(iVar10 + 0xba),0);
                    iVar10 = *(param_2 + 0x3a8);
                    iVar2 = *(iVar10 + 0x168);
                }
                else {
                    snd_soc_component_update_bits(*(param_2 + 0xf8),*(iVar10 + 8),*(iVar10 + 10),0);
                    iVar10 = *(param_2 + 0x3a8);
                    iVar2 = *(iVar10 + 0x28);
                    if (iVar2 != 0) goto code_r0x0800c028;
code_r0x0800bec8:
                    iVar2 = *(iVar10 + 8);
                    if (iVar2 == 0) goto code_r0x0800bed0;
code_r0x0800c04c:
                    snd_soc_component_update_bits
                              (*(param_2 + 0xf8),iVar2,*(iVar10 + 10),1 << (*(iVar10 + 0xb) & 0x1f));
                    iVar10 = *(param_2 + 0x3a8);
                    iVar2 = *(iVar10 + 0xb8);
                    if (iVar2 != 0) goto code_r0x0800c070;
code_r0x0800bed8:
                    iVar2 = *(iVar10 + 0x168);
                }
                if (iVar2 != 0) {
                    snd_soc_component_update_bits(*(param_2 + 0xf8),iVar2,*(iVar10 + 0x16a),0);
                }
                *(param_2 + 0xf0) = 0;
                *(param_2 + 0xc0) = 0;
                switch(*(param_2 + 0xc1)) {
                case 1:
                    sym.wcd_mbhc_report_plug(param_2,0,3);
                    uVar8 = *(param_2 + 0x418);
                    uVar9 = 0x14;
                    break;
                case 2:
                    sym.wcd_mbhc_report_plug(param_2,0,1);
                    uVar8 = *(param_2 + 0x418);
                    uVar9 = 0x15;
                    break;
                case 3:
                    sym.wcd_mbhc_report_plug(param_2,0,4);
                    uVar8 = *(param_2 + 0x418);
                    uVar9 = 0x17;
                    break;
                case 4:
                    uVar8 = *(param_2 + 0x418);
                    uVar9 = 0x3e;
                    break;
                default:
                    goto code_r0x0800c0e4;
                }
                extcon_set_state_sync(uVar8,uVar9,0);
                goto code_r0x0800c0e4;
            }
        }
    }
    if (*(param_2 + 0xc1) == '\x02') {
        *(param_2 + 0xf5) = 1;
    }
    iVar10 = *(param_2 + 0x3a8);
    if (*(iVar10 + 0x2f8) == 0) {
        iVar2 = *(iVar10 + 0x2e8);
        if (iVar2 == 0) goto code_r0x0800bf68;
code_r0x0800bfec:
        snd_soc_component_update_bits(*(param_2 + 0xf8),iVar2,*(iVar10 + 0x2ea),0);
        iVar10 = *(param_2 + 0x3a8);
        iVar2 = *(iVar10 + 0x298);
    }
    else {
        snd_soc_component_update_bits(*(param_2 + 0xf8),*(iVar10 + 0x2f8),*(iVar10 + 0x2fa),0);
        iVar10 = *(param_2 + 0x3a8);
        iVar2 = *(iVar10 + 0x2e8);
        if (iVar2 != 0) goto code_r0x0800bfec;
code_r0x0800bf68:
        iVar2 = *(iVar10 + 0x298);
    }
    if (iVar2 != 0) {
        snd_soc_component_update_bits(*(param_2 + 0xf8),iVar2,*(iVar10 + 0x29a),0);
    }
    sym.wcd_mbhc_elec_hs_report_unplug(param_2);
    iVar2 = *(*(param_2 + 0x3a8) + 0x168);
    if (iVar2 != 0) {
        snd_soc_component_update_bits(*(param_2 + 0xf8),iVar2,*(*(param_2 + 0x3a8) + 0x16a),0);
    }
    if (bVar3) {
        iVar10 = *(param_2 + 0x3a8);
        if (*(iVar10 + 0x1c8) != 0) {
            snd_soc_component_update_bits
                      (*(param_2 + 0xf8),*(iVar10 + 0x1c8),*(iVar10 + 0x1ca),3 << (*(iVar10 + 0x1cb) & 0x1f));
        }
    }
code_r0x0800c0e4:
    _printk(0x80018cb,"wcd_mbhc_adc_hs_rem_irq");
    mutex_unlock(param_2 + 0x328);
    _printk(0x8002bbe,"wcd_mbhc_adc_hs_rem_irq");
    return 1;
}


// ===== sym.wcd_mbhc_adc_hs_ins_irq.63f800c968f307bf87ec7421f61e82fa.cfi_jt @ 0x080044c0 (size 8) =====

ulong sym.wcd_mbhc_adc_hs_ins_irq.63f800c968f307bf87ec7421f61e82fa.cfi_jt(ulong param_1,int64_t param_2)

{
    int64_t iVar1;
    uint32_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8002012,"wcd_mbhc_adc_hs_ins_irq");
    if (*(param_2 + 0xf5) == '\0') {
        if (((((*(*(param_2 + 0x3a8) + 0x108) != 0) &&
              (uVar2 = snd_soc_component_read(*(param_2 + 0xf8)),
              (uVar2 & *(*(param_2 + 0x3a8) + 0x10a)) >> (*(*(param_2 + 0x3a8) + 0x10b) & 0x1f) == 0)) &&
             (usleep_range_state(30000,0x7594,2), *(*(param_2 + 0x3a8) + 0x108) != 0)) &&
            ((uVar2 = snd_soc_component_read(*(param_2 + 0xf8)),
             (uVar2 & *(*(param_2 + 0x3a8) + 0x10a)) >> (*(*(param_2 + 0x3a8) + 0x10b) & 0x1f) == 0 &&
             (usleep_range_state(30000,0x7594,2), *(*(param_2 + 0x3a8) + 0x108) != 0)))) &&
           ((uVar2 = snd_soc_component_read(*(param_2 + 0xf8)),
            (uVar2 & *(*(param_2 + 0x3a8) + 0x10a)) >> (*(*(param_2 + 0x3a8) + 0x10b) & 0x1f) == 0 &&
            ((usleep_range_state(30000,0x7594,2), *(*(param_2 + 0x3a8) + 0x108) != 0 &&
             (uVar2 = snd_soc_component_read(*(param_2 + 0xf8)),
             (uVar2 & *(*(param_2 + 0x3a8) + 0x10a)) >> (*(*(param_2 + 0x3a8) + 0x10b) & 0x1f) == 0)))))) {
            usleep_range_state(30000,0x7594,2);
            _printk(0x8002ef3,"wcd_mbhc_adc_hs_ins_irq");
            iVar1 = param_2 + 0x328;
            mutex_lock(iVar1);
            _printk(0x8001a88,"wcd_mbhc_adc_hs_ins_irq");
            if (*(param_2 + 0xc1) == '\x02') {
                sym.wcd_mbhc_hs_elec_irq(param_2,0,0);
                iVar4 = *(param_2 + 0x3a8);
                if (*(iVar4 + 0x2f8) != 0) {
                    snd_soc_component_update_bits
                              (*(param_2 + 0xf8),*(iVar4 + 0x2f8),*(iVar4 + 0x2fa),1 << (*(iVar4 + 0x2fb) & 0x1f));
                }
                sym.wcd_mbhc_find_plug_and_report(param_2,1);
            }
            else {
                if (*(*(param_2 + 0x90) + 0x10) != '\0') {
                    _printk(0x800340d,"wcd_mbhc_adc_hs_ins_irq");
                    sym.wcd_mbhc_hs_elec_irq(param_2,0,0);
                    iVar4 = *(param_2 + 0x3a8);
                    if (*(iVar4 + 0xa8) != 0) {
                        snd_soc_component_update_bits(*(param_2 + 0xf8),*(iVar4 + 0xa8),*(iVar4 + 0xaa),0);
                        iVar4 = *(param_2 + 0x3a8);
                    }
                    if (*(iVar4 + 0x308) != 0) {
                        snd_soc_component_update_bits(*(param_2 + 0xf8),*(iVar4 + 0x308),*(iVar4 + 0x30a),0);
                    }
                    *(param_2 + 0xf0) = 0;
                    *(param_2 + 0x3f0) = 0;
                    *(param_2 + 0xf2) = 1;
                    sym.wcd_mbhc_adc_detect_plug_type(param_2);
                    _printk(0x80018cb,"wcd_mbhc_adc_hs_ins_irq");
                    mutex_unlock(iVar1);
                    uVar3 = 0x8002bbe;
                    goto code_r0x0800ba6c;
                }
                _printk(0x800178e,"wcd_mbhc_adc_hs_ins_irq");
            }
            _printk(0x80018cb,"wcd_mbhc_adc_hs_ins_irq");
            mutex_unlock(iVar1);
            return 1;
        }
        uVar3 = 0x8002dcd;
    }
    else {
        *(param_2 + 0xf5) = 0;
        uVar3 = 0x8002bbe;
    }
code_r0x0800ba6c:
    _printk(uVar3,"wcd_mbhc_adc_hs_ins_irq");
    return 1;
}


// ===== sym.wcd_mbhc_mech_plug_detect_irq.47703894683a65bd92c9bc7b673552c9.cfi_jt @ 0x080044c8 (size 8) =====

ulong sym.wcd_mbhc_mech_plug_detect_irq.47703894683a65bd92c9bc7b673552c9.cfi_jt(ulong param_1,int64_t param_2)

{
    int16_t iVar1;
    bool bVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong uVar6;
    code *pcVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8002012,"wcd_mbhc_mech_plug_detect_irq");
    if (param_2 == 0) {
        _printk(0x8002051,"wcd_mbhc_mech_plug_detect_irq");
        return 0;
    }
    pcVar7 = *(*(param_2 + 0x98) + 0x90);
    __cfi_slowpath_diag(0xce1a9c61fa6df8c5,pcVar7,0x8000e90);
    uVar4 = (*pcVar7)(param_2,1);
    if ((uVar4 & 1) == 0) {
        _printk(0x800323e,"wcd_mbhc_mech_plug_detect_irq");
        uVar6 = 0;
        goto code_r0x08008f94;
    }
    iVar8 = *(param_2 + 0xf8);
    _dev_printk(0x800349a,*(iVar8 + 0x18),"%s: enter\n","wcd_mbhc_swch_irq_handler");
    _printk(0x8002ef3,"wcd_mbhc_swch_irq_handler");
    mutex_lock(param_2 + 0x328);
    _printk(0x8001a88,"wcd_mbhc_swch_irq_handler");
    *(param_2 + 0xc2) = 1;
    uVar4 = cancel_delayed_work_sync(param_2);
    if ((uVar4 & 1) != 0) {
        pcVar7 = *(*(param_2 + 0x98) + 0x90);
        __cfi_slowpath_diag(0xce1a9c61fa6df8c5,pcVar7,obj.hphr_pa_lock);
        (*pcVar7)(param_2,0);
        _printk(0x8002806,"wcd_mbhc_swch_irq_handler");
    }
    if (*(*(param_2 + 0x3a8) + 0x28) == 0) {
        bVar2 = true;
    }
    else {
        uVar3 = snd_soc_component_read(*(param_2 + 0xf8));
        iVar5 = *(param_2 + 0x3a8);
        uVar3 = (uVar3 & *(iVar5 + 0x2a)) >> (*(iVar5 + 0x2b) & 0x1f);
        bVar2 = uVar3 != 0;
        if (*(iVar5 + 0x28) != 0) {
            snd_soc_component_update_bits
                      (*(param_2 + 0xf8),*(iVar5 + 0x28),*(iVar5 + 0x2a),(uVar3 == 0) << (*(iVar5 + 0x2b) & 0x1f));
        }
    }
    _printk(0x8002a54,"wcd_mbhc_swch_irq_handler",*(param_2 + 0xc1),bVar2);
    pcVar7 = *(*(param_2 + 1000) + 0x20);
    if (pcVar7 == NULL) {
        _printk(0x80026c6,"wcd_mbhc_swch_irq_handler");
    }
    else {
        if (pcVar7 != sym.__typeid__ZTSFvP8wcd_mbhcP11work_structE_global_addr) {
            __cfi_slowpath_diag(0x12f2e4d279e33bdb,pcVar7,0x8000ed0);
        }
        (*pcVar7)(param_2,param_2 + 0x360);
    }
    iVar5 = *(param_2 + 0x98);
    pcVar7 = *(iVar5 + 0xd8);
    if (pcVar7 != NULL) {
        __cfi_slowpath_diag(0x1be676a8fa3b6db7,pcVar7,0x8000ef0);
        (*pcVar7)(iVar8,1);
        iVar5 = *(param_2 + 0x98);
    }
    pcVar7 = *(iVar5 + 0x98);
    uVar3 = 0;
    if (pcVar7 != NULL) {
        __cfi_slowpath_diag(0x8520705fd5e55046,pcVar7,0x8000f10);
        uVar3 = (*pcVar7)(param_2,1);
    }
    if ((*(param_2 + 0xc1) == '\0' & bVar2) == 1) {
        if ((*(*(param_2 + 0x90) + 0x48) != '\0') || (*(*(param_2 + 0x90) + 0x5c) != '\0')) {
            iVar5 = *(param_2 + 0x98);
            pcVar7 = *(iVar5 + 0x130);
            if ((pcVar7 != NULL) && ((*(iVar5 + 0x138) != 0 && (*(iVar5 + 0x140) != 0)))) {
                if (1 < (pcVar7 + -0x8004410 >> 3 | pcVar7 << 0x3d)) {
                    __cfi_slowpath_diag(0x7bab4b804db7b328,pcVar7,0x8001110);
                }
                uVar4 = (*pcVar7)(param_2);
                if ((uVar4 & 1) != 0) {
                    iVar8 = *(param_2 + 0x3a8);
                    if (*(iVar8 + 8) != 0) {
                        snd_soc_component_update_bits(*(param_2 + 0xf8),*(iVar8 + 8),*(iVar8 + 10),0);
                        iVar8 = *(param_2 + 0x3a8);
                    }
                    if (*(iVar8 + 0x18) != 0) {
                        snd_soc_component_update_bits(*(param_2 + 0xf8),*(iVar8 + 0x18),*(iVar8 + 0x1a),0);
                    }
                    pcVar7 = *(*(param_2 + 0x98) + 0x138);
                    __cfi_slowpath_diag(0x7580eeff27e3c667,pcVar7,0x8001130);
                    (*pcVar7)(param_2,1);
                    iVar8 = *(param_2 + 0x3a8);
                    if (*(iVar8 + 0x28) != 0) {
                        snd_soc_component_update_bits
                                  (*(param_2 + 0xf8),*(iVar8 + 0x28),*(iVar8 + 0x2a),1 << (*(iVar8 + 0x2b) & 0x1f));
                        iVar8 = *(param_2 + 0x3a8);
                    }
                    if (*(iVar8 + 8) != 0) {
                        snd_soc_component_update_bits
                                  (*(param_2 + 0xf8),*(iVar8 + 8),*(iVar8 + 10),1 << (*(iVar8 + 0xb) & 0x1f));
                    }
                    if (*(*(param_2 + 0x90) + 0x21) != '\0') {
                        iVar8 = *(param_2 + 0x3a8);
                        if (*(iVar8 + 0x18) != 0) {
                            snd_soc_component_update_bits
                                      (*(param_2 + 0xf8),*(iVar8 + 0x18),*(iVar8 + 0x1a),
                                       1 << (*(iVar8 + 0x1b) & 0x1f));
                        }
                    }
                    goto code_r0x08008f28;
                }
                pcVar7 = *(*(param_2 + 0x98) + 0x138);
                __cfi_slowpath_diag(0x7580eeff27e3c667,pcVar7,0x8001150);
                (*pcVar7)(param_2,0);
                pcVar7 = *(*(param_2 + 0x98) + 0x140);
                __cfi_slowpath_diag(0x7580eeff27e3c667,pcVar7,0x8001170);
                (*pcVar7)(param_2,0);
            }
        }
        pcVar7 = *(*(param_2 + 0x98) + 0xa0);
        __cfi_slowpath_diag(0x1be676a8fa3b6db7,pcVar7,0x8000f30);
        (*pcVar7)(iVar8,1);
        pcVar7 = *(*(param_2 + 0x98) + 0xa8);
        if (pcVar7 != NULL) {
            __cfi_slowpath_diag(0x23d049188c4e6e9c,pcVar7,0x8000f50);
            (*pcVar7)(iVar8,2,1);
        }
        if ((*(*(param_2 + 0x90) + 0x20) == '\0') && (pcVar7 = *(*(param_2 + 0x98) + 0xb0), pcVar7 != NULL)) {
            __cfi_slowpath_diag(0x23d049188c4e6e9c,pcVar7,0x8000f70);
            (*pcVar7)(iVar8,1,1);
        }
        iVar1 = *(*(param_2 + 0x3a8) + 0x1e8);
        if (iVar1 != 0) {
            snd_soc_component_update_bits(*(param_2 + 0xf8),iVar1,*(*(param_2 + 0x3a8) + 0x1ea),0);
        }
        iVar5 = *(param_2 + 0x98);
        pcVar7 = *(iVar5 + 0x30);
        if (pcVar7 != NULL) {
            __cfi_slowpath_diag(0x7e6c99e1529760f9,pcVar7,0x8000f90);
            (*pcVar7)(iVar8);
            iVar5 = *(param_2 + 0x98);
        }
        pcVar7 = *(iVar5 + 0x28);
        if (pcVar7 != NULL) {
            __cfi_slowpath_diag(0x4200096b11704f5,pcVar7,0x8000fb0);
            (*pcVar7)(param_2,1);
        }
        *(param_2 + 0xf0) = 0;
        *(param_2 + 0xc0) = 0;
        *(*(param_2 + 0x90) + 0x70) = 0;
        if (*(param_2 + 1000) != 0) {
            pcVar7 = *(*(param_2 + 1000) + 0x10);
            if (4 < (pcVar7 + -0x8004440 >> 3 | pcVar7 << 0x3d)) {
                __cfi_slowpath_diag(0xc18342d5baef945d,pcVar7,0x8000fd0);
            }
            (*pcVar7)(param_2);
        }
    }
    else if (*(param_2 + 0xc1) == '\0' || bVar2 != false) {
        if (bVar2 == false) {
            pcVar7 = *(*(param_2 + 0x98) + 0x28);
            if (pcVar7 != NULL) {
                __cfi_slowpath_diag(0x4200096b11704f5,pcVar7,0x80010f0);
                (*pcVar7)(param_2,0);
            }
            iVar8 = *(param_2 + 0x3a8);
            if (*(iVar8 + 0xb8) != 0) {
                snd_soc_component_update_bits(*(param_2 + 0xf8),*(iVar8 + 0xb8),*(iVar8 + 0xba),0);
                iVar8 = *(param_2 + 0x3a8);
            }
            if (*(iVar8 + 0x168) != 0) {
                snd_soc_component_update_bits(*(param_2 + 0xf8),*(iVar8 + 0x168),*(iVar8 + 0x16a),0);
            }
            *(param_2 + 0xf5) = 0;
        }
    }
    else {
        iVar5 = *(param_2 + 0x98);
        pcVar7 = *(iVar5 + 0xd0);
        if (pcVar7 != NULL) {
            __cfi_slowpath_diag(0x1d4dfe77ec242b3c,pcVar7,0x8000ff0);
            (*pcVar7)(iVar8,2,3);
            iVar5 = *(param_2 + 0x98);
        }
        pcVar7 = *(iVar5 + 0x28);
        if (pcVar7 != NULL) {
            __cfi_slowpath_diag(0x4200096b11704f5,pcVar7,0x8001010);
            (*pcVar7)(param_2,0);
        }
        iVar5 = *(param_2 + 0x3a8);
        if (*(iVar5 + 0xb8) != 0) {
            snd_soc_component_update_bits(*(param_2 + 0xf8),*(iVar5 + 0xb8),*(iVar5 + 0xba),0);
            iVar5 = *(param_2 + 0x3a8);
        }
        if (*(iVar5 + 0x168) != 0) {
            snd_soc_component_update_bits(*(param_2 + 0xf8),*(iVar5 + 0x168),*(iVar5 + 0x16a),0);
        }
        iVar5 = *(param_2 + 0x98);
        pcVar7 = *(iVar5 + 0xa8);
        if (pcVar7 != NULL) {
            __cfi_slowpath_diag(0x23d049188c4e6e9c,pcVar7,0x8001030);
            (*pcVar7)(iVar8,2,0);
            iVar5 = *(param_2 + 0x98);
        }
        pcVar7 = *(iVar5 + 0x58);
        if (pcVar7 != NULL) {
            __cfi_slowpath_diag(0x7c983a9917f6b4a7,pcVar7,0x8001050);
            (*pcVar7)(iVar8,uVar3 & 1,0);
        }
        *(param_2 + 0xf0) = 0;
        *(param_2 + 0xc0) = 0;
        iVar5 = 1;
        uVar6 = 0x15;
        switch(*(param_2 + 0xc1)) {
        case 1:
            pcVar7 = *(*(param_2 + 0x98) + 0xb0);
            if (pcVar7 != NULL) {
                __cfi_slowpath_diag(0x23d049188c4e6e9c,pcVar7,0x8001070);
                (*pcVar7)(iVar8,1,0);
            }
            iVar8 = *(param_2 + 0x3a8);
            if (*(iVar8 + 0x1e8) != 0) {
                snd_soc_component_update_bits
                          (*(param_2 + 0xf8),*(iVar8 + 0x1e8),*(iVar8 + 0x1ea),1 << (*(iVar8 + 0x1eb) & 0x1f));
            }
            iVar5 = 3;
            uVar6 = 0x14;
            break;
        case 2:
            break;
        case 3:
            if (*(param_2 + 0x3d4) == 1) {
                iVar1 = *(*(param_2 + 0x3a8) + 0x308);
                if (iVar1 != 0) {
                    snd_soc_component_update_bits(*(param_2 + 0xf8),iVar1,*(*(param_2 + 0x3a8) + 0x30a),0);
                }
            }
            iVar5 = 4;
            uVar6 = 0x17;
            *(param_2 + 0xf2) = 0;
            break;
        default:
            _printk(0x8002a85,"wcd_mbhc_swch_irq_handler");
        case 4:
            iVar5 = 1;
            uVar6 = 0x3e;
        }
        sym.wcd_mbhc_hs_elec_irq(param_2,1,0);
        sym.wcd_mbhc_hs_elec_irq(param_2,0,0);
        iVar8 = *(param_2 + 0x3a8);
        if (*(iVar8 + 0x48) != 0) {
            snd_soc_component_update_bits
                      (*(param_2 + 0xf8),*(iVar8 + 0x48),*(iVar8 + 0x4a),1 << (*(iVar8 + 0x4b) & 0x1f));
            iVar8 = *(param_2 + 0x3a8);
        }
        if (*(iVar8 + 0xa8) != 0) {
            snd_soc_component_update_bits(*(param_2 + 0xf8),*(iVar8 + 0xa8),*(iVar8 + 0xaa),0);
        }
        *(param_2 + 0xf5) = 0;
        sym.wcd_mbhc_report_plug(param_2,0,iVar5);
        extcon_set_state_sync(*(param_2 + 0x418),uVar6,0);
        if (*(*(param_2 + 0x90) + 0x58) != 0) {
            iVar1 = *(*(param_2 + 0x3a8) + 8);
            if (iVar1 != 0) {
                snd_soc_component_update_bits(*(param_2 + 0xf8),iVar1,*(*(param_2 + 0x3a8) + 10),0);
            }
            pcVar7 = *(*(param_2 + 0x98) + 0x80);
            if (pcVar7 != NULL) {
                __cfi_slowpath_diag(0x1be676a8fa3b6db7,pcVar7,0x8001090);
                (*pcVar7)(*(param_2 + 0xf8),0);
            }
        }
        if ((*(*(param_2 + 0x90) + 0x48) != '\0') || (*(*(param_2 + 0x90) + 0x5c) != '\0')) {
            iVar8 = *(param_2 + 0x98);
            pcVar7 = *(iVar8 + 0x138);
            if (pcVar7 != NULL) {
                __cfi_slowpath_diag(0x7580eeff27e3c667,pcVar7,0x80010b0);
                (*pcVar7)(param_2,0);
                iVar8 = *(param_2 + 0x98);
            }
            pcVar7 = *(iVar8 + 0x140);
            if (pcVar7 != NULL) {
                __cfi_slowpath_diag(0x7580eeff27e3c667,pcVar7,0x80010d0);
                (*pcVar7)(param_2,0);
            }
        }
    }
code_r0x08008f28:
    *(param_2 + 0xc2) = 0;
    _printk(0x80018cb,"wcd_mbhc_swch_irq_handler");
    mutex_unlock(param_2 + 0x328);
    _printk(0x8002bbe,"wcd_mbhc_swch_irq_handler");
    pcVar7 = *(*(param_2 + 0x98) + 0x90);
    __cfi_slowpath_diag(0xce1a9c61fa6df8c5,pcVar7,0x8000eb0);
    (*pcVar7)(param_2,0);
    uVar6 = 1;
code_r0x08008f94:
    _printk(0x8001ff3,"wcd_mbhc_mech_plug_detect_irq",uVar6);
    return uVar6;
}


// ===== sym.wcd_mbhc_hphr_ocp_irq.47703894683a65bd92c9bc7b673552c9.cfi_jt @ 0x080044d0 (size 8) =====

ulong sym.wcd_mbhc_hphr_ocp_irq.47703894683a65bd92c9bc7b673552c9.cfi_jt(ulong param_1,int64_t param_2)

{
    int16_t iVar1;
    uint64_t uVar2;
    code *pcVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8002da2,"wcd_mbhc_hphr_ocp_irq");
    if (param_2 == 0) {
        _printk(0x8002f90,"wcd_mbhc_hphr_ocp_irq");
    }
    else if (*(param_2 + 0x3e0) == '\0') {
        pcVar3 = *(*(param_2 + 0x98) + 0x110);
        if (pcVar3 != NULL) {
            if (1 < (pcVar3 + -0x8004410 >> 3 | pcVar3 << 0x3d)) {
                __cfi_slowpath_diag(0x7bab4b804db7b328,pcVar3,0x8001210);
            }
            uVar2 = (*pcVar3)(param_2);
            if ((uVar2 & 1) != 0) {
                return 1;
            }
        }
        if (*(param_2 + 0xa5) < 0x14) {
            *(param_2 + 0xa5) = *(param_2 + 0xa5) + 1;
            _printk(0x80023d1,"wcd_mbhc_hphr_ocp_irq");
            iVar1 = *(*(param_2 + 0x3a8) + 0x148);
            if (iVar1 != 0) {
                snd_soc_component_update_bits(*(param_2 + 0xf8),iVar1,*(*(param_2 + 0x3a8) + 0x14a),0);
                iVar4 = *(param_2 + 0x3a8);
                if (*(iVar4 + 0x148) != 0) {
                    snd_soc_component_update_bits
                              (*(param_2 + 0xf8),*(iVar4 + 0x148),*(iVar4 + 0x14a),1 << (*(iVar4 + 0x14b) & 0x1f));
                }
            }
        }
        else {
            pcVar3 = *(*(param_2 + 0x98) + 0x70);
            __cfi_slowpath_diag(0x23d049188c4e6e9c,pcVar3,0x8001230);
            (*pcVar3)(*(param_2 + 0xf8),*(*(param_2 + 0x358) + 0x18),0);
            sym.wcd_mbhc_jack_report(param_2,param_2 + 0x1c8,*(param_2 + 0xa0),0xf);
        }
    }
    else {
        *(param_2 + 0x3e0) = 0;
    }
    return 1;
}


// ===== sym.wcd_mbhc_btn_press_handler.47703894683a65bd92c9bc7b673552c9.cfi_jt @ 0x080044d8 (size 8) =====

ulong sym.wcd_mbhc_btn_press_handler.47703894683a65bd92c9bc7b673552c9.cfi_jt(ulong param_1,int64_t param_2)

{
    uint32_t uVar1;
    uint uVar2;
    uint64_t uVar3;
    ulong uVar4;
    ulong *in_x18;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8002012,"wcd_mbhc_btn_press_handler");
    complete(param_2 + 0x3b0);
    _printk(0x8002ef3,"wcd_mbhc_btn_press_handler");
    mutex_lock(param_2 + 0x328);
    _printk(0x8001a88,"wcd_mbhc_btn_press_handler");
    uVar3 = cancel_delayed_work_sync(param_2);
    if ((uVar3 & 1) != 0) {
        pcVar5 = *(*(param_2 + 0x98) + 0x90);
        __cfi_slowpath_diag(0xce1a9c61fa6df8c5,pcVar5,obj.hphr_pa_lock);
        (*pcVar5)(param_2,0);
    }
    if ((*(*(param_2 + 0x3a8) + 0x1d8) == 0) ||
       (uVar1 = snd_soc_component_read(*(param_2 + 0xf8)),
       (uVar1 & *(*(param_2 + 0x3a8) + 0x1da)) >> (*(*(param_2 + 0x3a8) + 0x1db) & 0x1f) != 0)) {
        uVar4 = 0x8002d44;
    }
    else {
        if (*(param_2 + 0xc0) != '\0') {
            _printk(0x80020cc,"wcd_mbhc_btn_press_handler");
        }
        *(param_2 + 0xc0) = 1;
        uVar1 = jiffies_to_msecs(_delayed_work_timer_fn - *(param_2 + 0x1b0));
        _printk(0x800264b,"wcd_mbhc_btn_press_handler",uVar1);
        if (uVar1 < 0xfa) {
            uVar4 = 0x8002940;
        }
        else if (*(param_2 + 0xc2) == '\0') {
            pcVar5 = *(*(param_2 + 0x98) + 0x88);
            __cfi_slowpath_diag(0xf0d2ea9a64921857,pcVar5,0x80006b0);
            uVar2 = (*pcVar5)(*(param_2 + 0xf8));
            switch(uVar2) {
            case 0:
                uVar1 = 0x4000;
                *(param_2 + 0xf0) = 1;
                break;
            case 1:
                uVar1 = 0x2000;
                break;
            case 2:
                uVar1 = 0x1000;
                break;
            case 3:
                uVar1 = 0x800;
                break;
            case 4:
                uVar1 = 0x400;
                break;
            case 5:
                uVar1 = 0x200;
                break;
            default:
                uVar1 = 0;
            }
            if (*(param_2 + 0xc1) == '\x01') {
                *(param_2 + 0x88) = *(param_2 + 0x88) | uVar1;
                pcVar5 = *(*(param_2 + 0x98) + 0x90);
                __cfi_slowpath_diag(0xce1a9c61fa6df8c5,pcVar5,0x8001190);
                (*pcVar5)(param_2,1);
                uVar3 = queue_delayed_work_on(0x20,_snd_soc_jack_report,param_2,100);
                if ((uVar3 & 1) == 0) {
                    __warn_printk("Button pressed twice without release event\n");
    //WARNING: Does not return
                    pcVar5 = SoftwareBreakpoint(0x800,0x8009324);
                    (*pcVar5)();
                }
                goto code_r0x080091a4;
            }
            uVar4 = 0x8001818;
        }
        else {
            uVar4 = 0x8001f1e;
        }
    }
    _printk(uVar4,"wcd_mbhc_btn_press_handler");
code_r0x080091a4:
    _printk(0x8002bbe,"wcd_mbhc_btn_press_handler");
    _printk(0x80018cb,"wcd_mbhc_btn_press_handler");
    mutex_unlock(param_2 + 0x328);
    return 1;
}


// ===== sym.wcd_mbhc_hphl_ocp_irq.47703894683a65bd92c9bc7b673552c9.cfi_jt @ 0x080044e0 (size 8) =====

ulong sym.wcd_mbhc_hphl_ocp_irq.47703894683a65bd92c9bc7b673552c9.cfi_jt(ulong param_1,int64_t param_2)

{
    int16_t iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    code *pcVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8001771,"wcd_mbhc_hphl_ocp_irq");
    if (param_2 == 0) {
        _printk(0x800225d,"wcd_mbhc_hphl_ocp_irq");
    }
    else {
        pcVar4 = *(*(param_2 + 0x98) + 0x110);
        if (pcVar4 != NULL) {
            if (1 < (pcVar4 + -0x8004410 >> 3 | pcVar4 << 0x3d)) {
                __cfi_slowpath_diag(0x7bab4b804db7b328,pcVar4,0x80011d0);
            }
            uVar3 = (*pcVar4)(param_2);
            if ((uVar3 & 1) != 0) {
                if (*(*(param_2 + 0x3a8) + 0x288) == 0) {
                    return 1;
                }
                uVar2 = snd_soc_component_read(*(param_2 + 0xf8));
                if ((uVar2 & *(*(param_2 + 0x3a8) + 0x28a)) >> (*(*(param_2 + 0x3a8) + 0x28b) & 0x1f) == 0) {
                    return 1;
                }
                *(param_2 + 0x3e0) = 1;
                return 1;
            }
        }
        if (*(param_2 + 0xa4) < 0x14) {
            *(param_2 + 0xa4) = *(param_2 + 0xa4) + 1;
            _printk(0x8002768,"wcd_mbhc_hphl_ocp_irq");
            iVar1 = *(*(param_2 + 0x3a8) + 0x148);
            if (iVar1 != 0) {
                snd_soc_component_update_bits(*(param_2 + 0xf8),iVar1,*(*(param_2 + 0x3a8) + 0x14a),0);
                iVar5 = *(param_2 + 0x3a8);
                if (*(iVar5 + 0x148) != 0) {
                    snd_soc_component_update_bits
                              (*(param_2 + 0xf8),*(iVar5 + 0x148),*(iVar5 + 0x14a),1 << (*(iVar5 + 0x14b) & 0x1f));
                }
            }
        }
        else {
            pcVar4 = *(*(param_2 + 0x98) + 0x70);
            __cfi_slowpath_diag(0x23d049188c4e6e9c,pcVar4,0x80011f0);
            (*pcVar4)(*(param_2 + 0xf8),*(*(param_2 + 0x358) + 0x14),0);
            sym.wcd_mbhc_jack_report(param_2,param_2 + 0x1c8,*(param_2 + 0xa0),0xf);
        }
    }
    return 1;
}


// ===== sym.wcd_mbhc_get_impedance.cfi_jt @ 0x080044e8 (size 8) =====

uint sym.wcd_mbhc_get_impedance.cfi_jt(int64_t param_1,int *param_2,int *param_3)

{
    int iVar1;
    uint uVar2;
    
    *param_2 = *(param_1 + 0x1b8);
    iVar1 = *(param_1 + 0x1bc);
    *param_3 = iVar1;
    uVar2 = 0xffffffea;
    if (iVar1 != 0 && *param_2 != 0) {
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.wcd_mbhc_jack_report @ 0x080044f0 (size 632) =====

void sym.wcd_mbhc_jack_report(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    uint16_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    ulong *in_x18;
    int iVar5;
    uint64_t uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar6 = arg4 & 0xffffffff;
    _printk(0x8002685,"wcd_mbhc_jack_report",*(arg2 + 0x50),arg3 & 0xffffffffU,uVar6);
    snd_soc_jack_report(arg2,arg3 & 0xffffffffU,uVar6);
    iVar5 = *(arg1 + 0xa0);
    iVar1 = *(arg2 + 0x50);
    if (_segment.ehdr == 3) {
        _segment.ehdr = 0;
    }
    _printk(0x8002217,"add_headset_event",iVar5,uVar6,iVar1);
    if (iVar5 == 3) {
        iVar5 = arg4;
        if (iVar5 == 0x1000) {
            if (iVar1 != 0) {
                uVar2 = _segment.ehdr | 0xf0;
                if ((_segment.ehdr & 0xf0) < 0xe1) {
                    uVar2 = _segment.ehdr + 0x10;
                }
                _segment.ehdr = CONCAT22(*0x8000002,uVar2);
                return;
            }
            iVar5 = _segment.ehdr + 1;
            uVar2 = _segment.ehdr | 0xf;
            if (((_segment.ehdr & 0xffff ^ 0xffffffff) & 0xf) != 0) {
                uVar2 = _segment.ehdr + 1;
            }
            *0x8000002 = iVar5 >> 0x10;
            _segment.ehdr = CONCAT22(*0x8000002,uVar2 | iVar5 * 0x100);
            return;
        }
        if (iVar5 == 0x2000) {
            if (iVar1 != 0) {
                uVar2 = _segment.ehdr | 0xf0;
                if ((_segment.ehdr & 0xf0) < 0xe1) {
                    uVar2 = _segment.ehdr + 0x10;
                }
                _segment.ehdr = CONCAT22(*0x8000002,uVar2);
                return;
            }
            iVar5 = _segment.ehdr + 1;
            uVar2 = _segment.ehdr | 0xf;
            if (((_segment.ehdr & 0xffff ^ 0xffffffff) & 0xf) != 0) {
                uVar2 = _segment.ehdr + 1;
            }
            *0x8000002 = iVar5 >> 0x10;
            _segment.ehdr = CONCAT22(*0x8000002,uVar2 | iVar5 * 0x100);
            return;
        }
        if (iVar5 == 0x4000) {
            if (iVar1 != 0) {
                uVar2 = _segment.ehdr | 0xf0;
                if ((_segment.ehdr & 0xf0) < 0xe1) {
                    uVar2 = _segment.ehdr + 0x10;
                }
                _segment.ehdr = CONCAT22(*0x8000002,uVar2);
                return;
            }
            iVar5 = _segment.ehdr + 1;
            uVar2 = _segment.ehdr | 0xf;
            if (((_segment.ehdr & 0xffff ^ 0xffffffff) & 0xf) != 0) {
                uVar2 = _segment.ehdr + 1;
            }
            *0x8000002 = iVar5 >> 0x10;
            _segment.ehdr = CONCAT22(*0x8000002,uVar2 | iVar5 * 0x100);
            return;
        }
        uVar3 = _segment.ehdr & 0xffff | 0xf;
        if (((_segment.ehdr & 0xffff ^ 0xffffffff) & 0xf) != 0) {
            uVar3 = (_segment.ehdr & 0xffff) + 1;
        }
        uVar4 = uVar3 | 0xf0;
        if ((uVar3 & 0xf0) < 0xe1) {
            uVar4 = uVar3 + 0x10;
        }
    }
    else {
        if (iVar5 != 1) {
            if (iVar5 != 0) {
                return;
            }
            uVar3 = _segment.ehdr & 0xffff | 0xf;
            if (((_segment.ehdr & 0xffff ^ 0xffffffff) & 0xf) != 0) {
                uVar3 = (_segment.ehdr & 0xffff) + 1;
            }
            uVar2 = uVar3 | 0xf0;
            if ((uVar3 & 0xf0) < 0xe1) {
                uVar2 = uVar3 + 0x10;
            }
            _segment.ehdr = CONCAT22(*0x8000002,uVar2);
            return;
        }
        uVar4 = _segment.ehdr & 0xffff | 0xf;
        if (((_segment.ehdr & 0xffff ^ 0xffffffff) & 0xf) != 0) {
            uVar4 = (_segment.ehdr & 0xffff) + 1;
        }
    }
    uVar2 = uVar4 | 0xf00;
    if ((uVar4 & 0xf00) < 0xe01) {
        uVar2 = uVar4 + 0x100;
    }
    _segment.ehdr = CONCAT22(*0x8000002,uVar2);
    return;
}


// ===== sym.wcd_enable_curr_micbias @ 0x08004768 (size 628) =====

void sym.wcd_enable_curr_micbias(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    int16_t iVar2;
    int64_t iVar3;
    int iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(*(arg1 + 0x98) + 0xd0) != 0) {
        return;
    }
    _printk(0x80027d6,"wcd_enable_curr_micbias",arg2 & 0xffffffffU);
    if (3 < arg2) {
        _printk(0x8003296,"wcd_enable_curr_micbias");
        goto code_r0x080049c4;
    }
    //switch table (4 cases) at 0x80016b0
    switch(*((arg2 & 0xffffffffU) + 0x80016b0) * 4 + 0x80047e0) {
    case 0x80047e4:
        iVar3 = *(arg1 + 0x3a8);
        if (*(iVar3 + 0x188) != 0) {
            snd_soc_component_update_bits(*(arg1 + 0xf8),*(iVar3 + 0x188),*(iVar3 + 0x18a),0);
            iVar3 = *(arg1 + 0x3a8);
        }
        if (*(iVar3 + 0x168) != 0) {
            snd_soc_component_update_bits
                      (*(arg1 + 0xf8),*(iVar3 + 0x168),*(iVar3 + 0x16a),3 << (*(iVar3 + 0x16b) & 0x1f));
        }
        sym.wcd_program_btn_threshold(arg1,0);
        goto code_r0x080049c4;
    case 0x8004838:
        iVar3 = *(arg1 + 0x3a8);
        if (*(iVar3 + 0x168) == 0) {
            iVar2 = *(iVar3 + 0xb8);
            if (iVar2 == 0) goto code_r0x0800484c;
code_r0x080048d4:
            snd_soc_component_update_bits(*(arg1 + 0xf8),iVar2,*(iVar3 + 0xba),1 << (*(iVar3 + 0xbb) & 0x1f));
            iVar3 = *(arg1 + 0x3a8);
            iVar2 = *(iVar3 + 0x188);
        }
        else {
            snd_soc_component_update_bits(*(arg1 + 0xf8),*(iVar3 + 0x168),*(iVar3 + 0x16a),0);
            iVar3 = *(arg1 + 0x3a8);
            iVar2 = *(iVar3 + 0xb8);
            if (iVar2 != 0) goto code_r0x080048d4;
code_r0x0800484c:
            iVar2 = *(iVar3 + 0x188);
        }
        if (iVar2 != 0) {
            uVar1 = *(iVar3 + 0x18b);
            iVar4 = 2;
code_r0x08004954:
            snd_soc_component_update_bits(*(arg1 + 0xf8),iVar2,*(iVar3 + 0x18a),iVar4 << (uVar1 & 0x1f));
        }
        break;
    case 0x800485c:
        iVar3 = *(arg1 + 0x3a8);
        if (*(iVar3 + 0x168) == 0) {
            iVar2 = *(iVar3 + 0xb8);
            if (iVar2 == 0) goto code_r0x08004870;
code_r0x08004928:
            snd_soc_component_update_bits(*(arg1 + 0xf8),iVar2,*(iVar3 + 0xba),1 << (*(iVar3 + 0xbb) & 0x1f));
            iVar3 = *(arg1 + 0x3a8);
            iVar2 = *(iVar3 + 0x188);
        }
        else {
            snd_soc_component_update_bits
                      (*(arg1 + 0xf8),*(iVar3 + 0x168),*(iVar3 + 0x16a),3 << (*(iVar3 + 0x16b) & 0x1f));
            iVar3 = *(arg1 + 0x3a8);
            iVar2 = *(iVar3 + 0xb8);
            if (iVar2 != 0) goto code_r0x08004928;
code_r0x08004870:
            iVar2 = *(iVar3 + 0x188);
        }
        if (iVar2 != 0) {
            uVar1 = *(iVar3 + 0x18b);
            iVar4 = 1;
            goto code_r0x08004954;
        }
        break;
    case 0x8004880:
        iVar3 = *(arg1 + 0x3a8);
        if (*(iVar3 + 0x168) == 0) {
            iVar2 = *(iVar3 + 0xb8);
            if (iVar2 == 0) goto code_r0x08004894;
code_r0x08004990:
            snd_soc_component_update_bits(*(arg1 + 0xf8),iVar2,*(iVar3 + 0xba),1 << (*(iVar3 + 0xbb) & 0x1f));
            iVar3 = *(arg1 + 0x3a8);
            iVar2 = *(iVar3 + 0x188);
        }
        else {
            snd_soc_component_update_bits(*(arg1 + 0xf8),*(iVar3 + 0x168),*(iVar3 + 0x16a),0);
            iVar3 = *(arg1 + 0x3a8);
            iVar2 = *(iVar3 + 0xb8);
            if (iVar2 != 0) goto code_r0x08004990;
code_r0x08004894:
            iVar2 = *(iVar3 + 0x188);
        }
        if (iVar2 != 0) {
            snd_soc_component_update_bits(*(arg1 + 0xf8),iVar2,*(iVar3 + 0x18a),0);
        }
        goto code_r0x080049c4;
    }
    sym.wcd_program_btn_threshold(arg1,1);
code_r0x080049c4:
    _printk(0x80026ba,"wcd_enable_curr_micbias");
    return;
}


// ===== sym.wcd_program_btn_threshold @ 0x080049dc (size 184) =====

void sym.wcd_program_btn_threshold(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    ulong *in_x18;
    int64_t iVar2;
    code *pcVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0xf8);
    iVar4 = *(*(arg1 + 0x90) + 8);
    if (iVar4 == 0) {
        _dev_err(*(*(iVar2 + 0x20) + 0x40),"%s: calibration data is NULL\n","wcd_program_btn_threshold");
    }
    else {
        pcVar3 = *(*(arg1 + 0x98) + 0xc0);
        uVar1 = *(iVar4 + 0x41);
        __cfi_slowpath_diag(0x2ae1a75badba2808,pcVar3,0x8000a90);
        (*pcVar3)(iVar2,iVar4 + 0x50,iVar4 + 0x50 + uVar1 * 2,*(iVar4 + 0x41),arg2 & 1);
    }
    return;
}


// ===== sym.wcd_cancel_btn_work @ 0x08004a94 (size 120) =====

uint32_t sym.wcd_cancel_btn_work(int64_t arg1)

{
    uint32_t uVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = cancel_delayed_work_sync();
    if ((uVar1 & 1) != 0) {
        pcVar2 = *(*(arg1 + 0x98) + 0x90);
        __cfi_slowpath_diag(0xce1a9c61fa6df8c5,pcVar2,obj.hphr_pa_lock);
        (*pcVar2)(arg1,0);
    }
    return uVar1 & 1;
}


// ===== sym.wcd_swch_level_remove @ 0x08004b0c (size 100) =====

bool sym.wcd_swch_level_remove(int64_t arg1)

{
    bool bVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(*(arg1 + 0x3a8) + 0x1d8) == 0) {
        bVar1 = true;
    }
    else {
        uVar2 = snd_soc_component_read(*(arg1 + 0xf8));
        bVar1 = (uVar2 & *(*(arg1 + 0x3a8) + 0x1da)) >> (*(*(arg1 + 0x3a8) + 0x1db) & 0x1f) != 0;
    }
    return bVar1;
}


// ===== sym.wcd_mbhc_get_impedance @ 0x08004b70 (size 48) =====

uint sym.wcd_mbhc_get_impedance(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint uVar2;
    
    *arg2 = *(arg1 + 0x1b8);
    iVar1 = *(arg1 + 0x1bc);
    *arg3 = iVar1;
    uVar2 = 0xffffffea;
    if (iVar1 != 0 && *arg2 != 0) {
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.wcd_mbhc_hs_elec_irq @ 0x08004ba0 (size 456) =====

void sym.wcd_mbhc_hs_elec_irq(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    uint uVar3;
    char cVar4;
    bool bVar5;
    uint64_t uVar6;
    uint *puVar7;
    ulong *in_x18;
    uint32_t uVar8;
    code *pcVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar6 = mutex_is_locked(arg1 + 0x328);
    if (((uVar6 & 1) == 0) && ((obj.wcd_mbhc_hs_elec_irq.__already_done & 1) == 0)) {
        obj.wcd_mbhc_hs_elec_irq.__already_done = 0x1;
        __warn_printk("%s: BCL should have acquired\n","wcd_mbhc_hs_elec_irq");
    //WARNING: Does not return
        pcVar9 = SoftwareBreakpoint(0x800,0x8004c3c);
        (*pcVar9)();
    }
    uVar8 = arg2;
    if (uVar8 == 1) {
        puVar7 = *(arg1 + 0x358) + 0x10;
    }
    else {
        if (uVar8 != 0) {
            _printk(0x8002f4a,"wcd_mbhc_hs_elec_irq",arg2 & 0xffffffff,arg3 & 1);
            return;
        }
        puVar7 = *(arg1 + 0x358) + 0xc;
    }
    uVar3 = *puVar7;
    uVar2 = arg3 & 1;
    _printk(0x8002e9d,"wcd_mbhc_hs_elec_irq",uVar3,uVar2,*(arg1 + 0x3d8));
    if ((*(arg1 + 0x3d8 + (uVar8 >> 6) * 8) >> (arg2 & 0x3fU) & 1) != uVar2) {
        pcVar9 = *(*(arg1 + 0x98) + 0x70);
        __cfi_slowpath_diag(0x23d049188c4e6e9c,pcVar9,0x8000530);
        (*pcVar9)(*(arg1 + 0xf8),uVar3,uVar2);
        uVar6 = 1L << (arg2 & 0x3fU);
        puVar1 = arg1 + 0x3d8 + ((arg2 & 0xffffffffU) >> 3 & 0x1ffffff8);
        if ((arg3 & 1U) == 0) {
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                    *puVar1 = *puVar1 & (uVar6 ^ 0xffffffffffffffff);
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
        }
        else {
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                    *puVar1 = *puVar1 | uVar6;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
        }
    }
    return;
}


// ===== sym.wcd_mbhc_report_plug @ 0x08004d68 (size 2028) =====

void sym.wcd_mbhc_report_plug(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int16_t iVar5;
    uint uVar6;
    int64_t iVar7;
    ulong *in_x18;
    uint32_t uVar8;
    uint64_t uVar9;
    ulong uVar10;
    code *pcVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar9 = arg3 & 0xffffffff;
    uVar10 = *(arg1 + 0xf8);
    uVar4 = mutex_is_locked(arg1 + 0x328);
    if (((uVar4 & 1) == 0) && ((obj.wcd_mbhc_report_plug.__already_done & 1) == 0)) {
        obj.wcd_mbhc_report_plug.__already_done = 0x1;
        __warn_printk("%s: BCL should have acquired\n","wcd_mbhc_report_plug");
    //WARNING: Does not return
        pcVar11 = SoftwareBreakpoint(0x800,0x8005554);
        (*pcVar11)();
    }
    _printk(0x80017e1,"wcd_mbhc_report_plug",arg2 & 0xffffffff,*(arg1 + 0xa0));
    uVar8 = arg3;
    if (arg2 != 0) {
        if ((*(*(arg1 + 0x90) + 0x10) != '\0') &&
           ((((uVar8 == 4 || (*(arg1 + 0xc1) == '\x03')) && (uVar3 = *(arg1 + 0xa0), uVar3 != 0)) && (uVar3 != uVar8)))
           ) {
            if ((*(arg1 + 0xef) != '\0') && (uVar3 == 3)) {
                iVar7 = *(arg1 + 0x98);
                pcVar11 = *(iVar7 + 0xd0);
                if (pcVar11 == NULL) {
                    pcVar11 = *(iVar7 + 0xf0);
                    if (pcVar11 == NULL) goto code_r0x08004e98;
code_r0x08005054:
                    __cfi_slowpath_diag(0x155f259693f926eb,pcVar11,0x80005d0);
                    (*pcVar11)(uVar10,2,0);
                    pcVar11 = *(*(arg1 + 0x98) + 0x40);
                }
                else {
                    __cfi_slowpath_diag(0x1d4dfe77ec242b3c,pcVar11,0x80005b0);
                    (*pcVar11)(uVar10,2,3);
                    iVar7 = *(arg1 + 0x98);
                    pcVar11 = *(iVar7 + 0xf0);
                    if (pcVar11 != NULL) goto code_r0x08005054;
code_r0x08004e98:
                    pcVar11 = *(iVar7 + 0x40);
                }
                if (pcVar11 != NULL) {
                    __cfi_slowpath_diag(0x7e6c99e1529760f9,pcVar11,0x80005f0);
                    (*pcVar11)(uVar10);
                    iVar5 = *(*(arg1 + 0x3a8) + 0x188);
                    if (iVar5 != 0) {
                        snd_soc_component_update_bits(*(arg1 + 0xf8),iVar5,*(*(arg1 + 0x3a8) + 0x18a),0);
                    }
                }
                *(arg1 + 0xef) = 0;
            }
            *(arg1 + 0x1c4) = 0;
            *(arg1 + 0x1b8) = 0;
            if (*(arg1 + 0x3f0) == '\0') {
                _printk(0x800234f,"wcd_mbhc_report_plug",*(arg1 + 0xa0));
                sym.wcd_mbhc_jack_report(arg1,arg1 + 0x1c8,0,0xf);
                uVar6 = 0;
                uVar3 = *(arg1 + 0xc1) - 1;
                if (uVar3 < 4) {
                    uVar6 = *(uVar3 * 4 + 0x8003748);
                }
                extcon_set_state_sync(*(arg1 + 0x418),uVar6,0);
            }
            uVar3 = *(arg1 + 0xa0);
            if (uVar3 == 4) {
                _printk(0x8001e36,"wcd_mbhc_report_plug");
                sym.wcd_enable_curr_micbias(arg1,1);
                _printk(0x80033ca,"wcd_mbhc_report_plug");
                usleep_range_state(200,0xd2,2);
                sym.wcd_mbhc_hs_elec_irq(arg1,1,1);
                uVar3 = *(arg1 + 0xa0);
            }
            *(arg1 + 0xa0) = uVar3 & 0xfffffff8;
        }
        if ((uVar8 == 1) && (*(arg1 + 0xc1) == '\x01')) {
            *(arg1 + 0xa0) = *(arg1 + 0xa0) & 0xfffffffc;
        }
        if (uVar8 == 1) {
            *(arg1 + 0xc1) = 2;
        }
        else if (uVar8 == 4) {
            *(arg1 + 0xc1) = 3;
        }
        else if (uVar8 == 3) {
            *(arg1 + 0xc1) = 1;
            *(arg1 + 0x1b0) = _delayed_work_timer_fn;
        }
        else {
            _printk(0x8002826,"wcd_mbhc_report_plug",uVar9);
        }
        pcVar11 = *(*(arg1 + 0x98) + 0xb8);
        uVar4 = 0;
        if (pcVar11 != NULL) {
            __cfi_slowpath_diag(0xf1cf56a12423eb51,pcVar11,0x8000610);
            uVar4 = (*pcVar11)(uVar10);
            uVar4 = uVar4 & 0xffffffff;
        }
        if (((*(arg1 + 0x1c0) != '\0') && (*(*(arg1 + 0x98) + 0x38) != 0)) &&
           (*(*(arg1 + 0x90) + 0x44) != 0 && (uVar4 & 1) == 0)) {
            iVar7 = *(arg1 + 0x3a8);
            if (*(iVar7 + 0xb8) == 0) {
                uVar3 = 0xea;
                iVar5 = *(iVar7 + 0x218);
joined_r0x08005510:
                if (iVar5 != 0) goto code_r0x08005514;
code_r0x080052dc:
                iVar5 = *(iVar7 + 0xb8);
            }
            else {
                uVar3 = snd_soc_component_read(*(arg1 + 0xf8));
                iVar7 = *(arg1 + 0x3a8);
                uVar3 = (uVar3 & *(iVar7 + 0xba)) >> (*(iVar7 + 0xbb) & 0x1f);
                if (*(iVar7 + 0xb8) != 0) {
                    snd_soc_component_update_bits(*(arg1 + 0xf8),*(iVar7 + 0xb8),*(iVar7 + 0xba),0);
                    iVar7 = *(arg1 + 0x3a8);
                    iVar5 = *(iVar7 + 0x218);
                    goto joined_r0x08005510;
                }
                iVar5 = *(iVar7 + 0x218);
                if (iVar5 == 0) goto code_r0x080052dc;
code_r0x08005514:
                snd_soc_component_update_bits(*(arg1 + 0xf8),iVar5,*(iVar7 + 0x21a),0);
                iVar7 = *(arg1 + 0x3a8);
                iVar5 = *(iVar7 + 0xb8);
            }
            if (iVar5 != 0) {
                snd_soc_component_update_bits(*(arg1 + 0xf8),iVar5,*(iVar7 + 0xba),1 << (*(iVar7 + 0xbb) & 0x1f));
            }
            pcVar11 = *(*(arg1 + 0x98) + 0x38);
            __cfi_slowpath_diag(0x2b7b5c5602187aa9,pcVar11,0x8000630);
            puVar1 = arg1 + 0x1bc;
            (*pcVar11)(arg1,arg1 + 0x1b8,puVar1);
            iVar7 = *(arg1 + 0x3a8);
            if (*(iVar7 + 0xb8) != 0) {
                snd_soc_component_update_bits
                          (*(arg1 + 0xf8),*(iVar7 + 0xb8),*(iVar7 + 0xba),uVar3 << (*(iVar7 + 0xbb) & 0x1f));
            }
            uVar3 = *(arg1 + 0x1b8);
            uVar2 = *(*(arg1 + 0x90) + 0x44);
            if (((uVar2 < uVar3) && (uVar8 == 1)) && (uVar2 < *puVar1)) {
                *(arg1 + 0x3f0) = 1;
                *(arg1 + 0xc1) = 3;
                if (*(arg1 + 0xa0) != 0) {
                    uVar8 = *(arg1 + 0xa0) & 0xfffffff8;
                    *(arg1 + 0xa0) = uVar8;
                    sym.wcd_mbhc_jack_report(arg1,arg1 + 0x1c8,uVar8,0xf);
                }
                _printk(0x8002996,"wcd_mbhc_report_plug");
                uVar3 = *(arg1 + 0x1b8);
                uVar9 = 4;
            }
            _printk(0x8001d5b,"wcd_mbhc_report_plug",uVar3,*puVar1);
        }
        if (((uVar4 & 1) == 0) || (*(arg1 + 0x3f0) == '\0')) {
            uVar8 = *(arg1 + 0xa0) | uVar9;
            *(arg1 + 0xa0) = uVar8;
            if (uVar9 == 1) {
                pcVar11 = *(*(arg1 + 0x98) + 0xd8);
                if (pcVar11 != NULL) {
                    __cfi_slowpath_diag(0x1be676a8fa3b6db7,pcVar11,0x8000650);
                    (*pcVar11)(uVar10,0);
                    uVar8 = *(arg1 + 0xa0);
                }
                uVar9 = 1;
            }
        }
        else {
            *(arg1 + 0xc1) = 3;
            if (*(arg1 + 0xa0) == 0) {
                uVar8 = 4;
            }
            else {
                uVar8 = *(arg1 + 0xa0) & 0xfffffff8;
                *(arg1 + 0xa0) = uVar8;
                sym.wcd_mbhc_jack_report(arg1,arg1 + 0x1c8,uVar8,0xf);
                uVar8 = *(arg1 + 0xa0) | 4;
            }
            uVar9 = 4;
            *(arg1 + 0xa0) = uVar8;
        }
        _printk(0x800260e,"wcd_mbhc_report_plug",uVar9,uVar8);
        sym.wcd_mbhc_jack_report(arg1,arg1 + 0x1c8,*(arg1 + 0xa0) | 8,0xf);
        sym.wcd_mbhc_clr_and_turnon_hph_padac(arg1);
        goto code_r0x080054c4;
    }
    uVar3 = *(arg1 + 0xa0);
    if (uVar3 == 3) {
        lpass_cdc_tx_macro_mute_hs();
        uVar3 = *(arg1 + 0xa0);
    }
    *(arg1 + 0xa0) = uVar3 & (uVar8 ^ 0xffffffff);
    uVar4 = cancel_delayed_work_sync(arg1);
    if ((uVar4 & 1) == 0) {
        if (*(arg1 + 0x88) != 0) {
            _printk(0x8001fae,"wcd_mbhc_report_plug",arg3 & 0xffffffff);
            sym.wcd_mbhc_jack_report(arg1,arg1 + 0x278,0,*(arg1 + 0x88));
            *(arg1 + 0x88) = *(arg1 + 0x88) & 0xffff81ff;
        }
    }
    else {
        pcVar11 = *(*(arg1 + 0x98) + 0x90);
        __cfi_slowpath_diag(0xce1a9c61fa6df8c5,pcVar11,obj.hphr_pa_lock);
        (*pcVar11)(arg1,0);
        _printk(0x8002806,"wcd_mbhc_report_plug");
    }
    if (*(arg1 + 0xef) != '\0') {
        iVar7 = *(arg1 + 0x98);
        pcVar11 = *(iVar7 + 0xd0);
        if (pcVar11 == NULL) {
            pcVar11 = *(iVar7 + 0xf0);
            if (pcVar11 == NULL) goto code_r0x08004f00;
code_r0x08004f48:
            __cfi_slowpath_diag(0x155f259693f926eb,pcVar11,0x8000570);
            (*pcVar11)(uVar10,2,0);
            pcVar11 = *(*(arg1 + 0x98) + 0x40);
        }
        else {
            __cfi_slowpath_diag(0x1d4dfe77ec242b3c,pcVar11,obj.mbhc_debugfs_dir);
            (*pcVar11)(uVar10,2,3);
            iVar7 = *(arg1 + 0x98);
            pcVar11 = *(iVar7 + 0xf0);
            if (pcVar11 != NULL) goto code_r0x08004f48;
code_r0x08004f00:
            pcVar11 = *(iVar7 + 0x40);
        }
        if (pcVar11 != NULL) {
            __cfi_slowpath_diag(0x7e6c99e1529760f9,pcVar11,0x8000590);
            (*pcVar11)(uVar10);
            iVar5 = *(*(arg1 + 0x3a8) + 0x188);
            if (iVar5 != 0) {
                snd_soc_component_update_bits(*(arg1 + 0xf8),iVar5,*(*(arg1 + 0x3a8) + 0x18a),0);
            }
        }
        *(arg1 + 0xef) = 0;
    }
    *(arg1 + 0x1c4) = 0;
    *(arg1 + 0x1b8) = 0;
    _printk(0x8002fe3,"wcd_mbhc_report_plug",uVar9,*(arg1 + 0xa0));
    sym.wcd_mbhc_jack_report(arg1,arg1 + 0x1c8,*(arg1 + 0xa0),0xf);
    sym.wcd_mbhc_set_and_turnoff_hph_padac(arg1);
    *(arg1 + 0xc1) = 0;
    *(arg1 + 0x3f0) = 0;
code_r0x080054c4:
    _printk(0x80024aa,"wcd_mbhc_report_plug",*(arg1 + 0xa0));
    return;
}


// ===== sym.wcd_mbhc_set_and_turnoff_hph_padac @ 0x08005558 (size 784) =====

void sym.wcd_mbhc_set_and_turnoff_hph_padac(int64_t arg1)

{
    uint64_t *puVar1;
    int16_t iVar2;
    int iVar3;
    char cVar4;
    bool bVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    ulong *in_x18;
    code *pcVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(*(arg1 + 0x3a8) + 0x198) == 0) {
        iVar3 = 0x395f8;
        iVar2 = *(*(arg1 + 0x3a8) + 0x1c8);
    }
    else {
        uVar6 = snd_soc_component_read(*(arg1 + 0xf8));
        iVar8 = *(arg1 + 0x3a8);
        iVar3 = (((uVar6 & *(iVar8 + 0x19a)) >> (*(iVar8 + 0x19b) & 0x1f)) + 1 & 0xff) * 1000;
        iVar2 = *(iVar8 + 0x1c8);
    }
    if ((iVar2 == 0) ||
       (uVar6 = snd_soc_component_read(*(arg1 + 0xf8)),
       (uVar6 & *(*(arg1 + 0x3a8) + 0x1ca)) >> (*(*(arg1 + 0x3a8) + 0x1cb) & 0x1f) != 0)) {
        _printk(0x8002af0,"wcd_mbhc_set_and_turnoff_hph_padac");
        puVar1 = arg1 + 0x198;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar4 = '\x01';
            bVar5 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
                *puVar1 = *puVar1 | 1;
                cVar4 = ExclusiveMonitorsStatus();
            }
        } while (cVar4 != '\0');
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar4 = '\x01';
            bVar5 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
                *puVar1 = *puVar1 | 2;
                cVar4 = ExclusiveMonitorsStatus();
            }
        } while (cVar4 != '\0');
        iVar8 = *(arg1 + 0x3a8);
        if (*(iVar8 + 600) != 0) {
            snd_soc_component_update_bits(*(arg1 + 0xf8),*(iVar8 + 600),*(iVar8 + 0x25a),0);
            iVar8 = *(arg1 + 0x3a8);
        }
        if (*(iVar8 + 0x268) != 0) {
            snd_soc_component_update_bits(*(arg1 + 0xf8),*(iVar8 + 0x268),*(iVar8 + 0x26a),0);
        }
    }
    else {
        _printk(0x800253e,"wcd_mbhc_set_and_turnoff_hph_padac");
    }
    iVar2 = *(*(arg1 + 0x3a8) + 0x1c8);
    if (iVar2 != 0) {
        snd_soc_component_update_bits(*(arg1 + 0xf8),iVar2,*(*(arg1 + 0x3a8) + 0x1ca),0);
    }
    usleep_range_state(iVar3,iVar3 + 0x32,2);
    pcVar9 = *(*(arg1 + 0x98) + 0x120);
    if (pcVar9 != NULL) {
        if (1 < (pcVar9 + -0x8004410 >> 3 | pcVar9 << 0x3d)) {
            __cfi_slowpath_diag(0x7bab4b804db7b328,pcVar9,0x8000ab0);
        }
        uVar7 = (*pcVar9)(arg1);
        if ((uVar7 & 1) != 0) {
            usleep_range_state(20000,0x4e84,2);
            _printk(0x80026ef,"wcd_mbhc_set_and_turnoff_hph_padac");
            puVar1 = arg1 + 0x1a0;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                    *puVar1 = *puVar1 | 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                    *puVar1 = *puVar1 | 2;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            pcVar9 = *(*(arg1 + 0x98) + 0x118);
            if (pcVar9 == NULL) {
                _printk(0x80033ef,"wcd_mbhc_set_and_turnoff_hph_padac");
            }
            else {
                __cfi_slowpath_diag(0x9e8b8a3c656d5ac5,pcVar9,0x8000ad0);
                (*pcVar9)(*(arg1 + 0xf8),0,0);
                pcVar9 = *(*(arg1 + 0x98) + 0x118);
                __cfi_slowpath_diag(0x9e8b8a3c656d5ac5,pcVar9,0x8000af0);
                (*pcVar9)(*(arg1 + 0xf8),0,1);
            }
        }
    }
    return;
}


// ===== sym.wcd_mbhc_clr_and_turnon_hph_padac @ 0x08005868 (size 804) =====

void sym.wcd_mbhc_clr_and_turnon_hph_padac(int64_t arg1)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    uint32_t uVar4;
    int64_t iVar5;
    ulong *in_x18;
    int iVar6;
    code *pcVar7;
    uint64_t uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(*(arg1 + 0x3a8) + 0x198) == 0) {
        iVar6 = 0x395f8;
    }
    else {
        uVar4 = snd_soc_component_read(*(arg1 + 0xf8));
        iVar6 = (((uVar4 & *(*(arg1 + 0x3a8) + 0x19a)) >> (*(*(arg1 + 0x3a8) + 0x19b) & 0x1f)) + 1 & 0xff) * 1000;
    }
    mutex_lock(obj.hphr_pa_lock);
    puVar1 = arg1 + 0x198;
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
            *puVar1 = uVar8 & 0xfffffffffffffffd;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    DataMemoryBarrier(2,3);
    uVar4 = uVar8;
    if ((uVar4 >> 1 & 1) != 0) {
        _printk(0x8003301,"wcd_mbhc_clr_and_turnon_hph_padac");
        iVar5 = *(arg1 + 0x3a8);
        if (*(iVar5 + 0x1a8) != 0) {
            snd_soc_component_update_bits
                      (*(arg1 + 0xf8),*(iVar5 + 0x1a8),*(iVar5 + 0x1aa),1 << (*(iVar5 + 0x1ab) & 0x1f));
        }
    }
    mutex_unlock(obj.hphr_pa_lock);
    mutex_lock(obj.wcd_mbhc_hs_elec_irq.__already_done);
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
            *puVar1 = uVar8 & 0xfffffffffffffffe;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    DataMemoryBarrier(2,3);
    if ((uVar8 & 1) == 0) {
        mutex_unlock(obj.wcd_mbhc_hs_elec_irq.__already_done);
        if ((uVar4 >> 1 & 1) == 0) goto code_r0x08005928;
    }
    else {
        _printk(0x80016ef,"wcd_mbhc_clr_and_turnon_hph_padac");
        iVar5 = *(arg1 + 0x3a8);
        if (*(iVar5 + 0x1b8) != 0) {
            snd_soc_component_update_bits
                      (*(arg1 + 0xf8),*(iVar5 + 0x1b8),*(iVar5 + 0x1ba),1 << (*(iVar5 + 0x1bb) & 0x1f));
        }
        mutex_unlock(obj.wcd_mbhc_hs_elec_irq.__already_done);
    }
    _printk(0x8003037,"wcd_mbhc_clr_and_turnon_hph_padac");
    usleep_range_state(iVar6,iVar6 + 0x32,2);
code_r0x08005928:
    puVar1 = arg1 + 0x1a0;
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
            *puVar1 = uVar8 & 0xfffffffffffffffe;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    DataMemoryBarrier(2,3);
    if ((uVar8 & 1) != 0) {
        usleep_range_state(20000,0x4e84,2);
        _printk(0x800209f,"wcd_mbhc_clr_and_turnon_hph_padac");
        pcVar7 = *(*(arg1 + 0x98) + 0x118);
        if (pcVar7 != NULL) {
            __cfi_slowpath_diag(0x9e8b8a3c656d5ac5,pcVar7,0x8000b10);
            (*pcVar7)(*(arg1 + 0xf8),1,0);
        }
    }
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
            *puVar1 = uVar8 & 0xfffffffffffffffd;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    DataMemoryBarrier(2,3);
    if ((uVar8 >> 1 & 1) != 0) {
        usleep_range_state(20000,0x4e84,2);
        _printk(0x80028f2,"wcd_mbhc_clr_and_turnon_hph_padac");
        pcVar7 = *(*(arg1 + 0x98) + 0x118);
        if (pcVar7 != NULL) {
            __cfi_slowpath_diag(0x9e8b8a3c656d5ac5,pcVar7,0x8000b30);
            (*pcVar7)(*(arg1 + 0xf8),1,1);
        }
    }
    return;
}


// ===== sym.wcd_mbhc_elec_hs_report_unplug @ 0x08005b8c (size 444) =====

void sym.wcd_mbhc_elec_hs_report_unplug(int64_t arg1)

{
    uint64_t uVar1;
    int64_t iVar2;
    ulong *in_x18;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = cancel_delayed_work_sync();
    if ((uVar1 & 1) != 0) {
        pcVar3 = *(*(arg1 + 0x98) + 0x90);
        __cfi_slowpath_diag(0xce1a9c61fa6df8c5,pcVar3,obj.hphr_pa_lock);
        (*pcVar3)(arg1,0);
        _printk(0x8002806,"wcd_mbhc_elec_hs_report_unplug");
    }
    pcVar3 = *(*(arg1 + 1000) + 0x20);
    if (pcVar3 == NULL) {
        _printk(0x80026c6,"wcd_mbhc_elec_hs_report_unplug");
    }
    else {
        if (pcVar3 != sym.__typeid__ZTSFvP8wcd_mbhcP11work_structE_global_addr) {
            __cfi_slowpath_diag(0x12f2e4d279e33bdb,pcVar3,0x8000670);
        }
        (*pcVar3)(arg1,arg1 + 0x360);
    }
    _printk(0x80032ae,"wcd_mbhc_elec_hs_report_unplug");
    sym.wcd_mbhc_report_plug(arg1,1,4);
    extcon_set_state_sync(*(arg1 + 0x418),0x17,1);
    if ((*(arg1 + 0x1a8) & 1) != 0) {
        sym.wcd_mbhc_set_and_turnoff_hph_padac(arg1);
    }
    sym.wcd_mbhc_hs_elec_irq(arg1,1,0);
    sym.wcd_enable_curr_micbias(arg1,3);
    iVar2 = *(arg1 + 0x3a8);
    if (*(iVar2 + 0xb8) != 0) {
        snd_soc_component_update_bits(*(arg1 + 0xf8),*(iVar2 + 0xb8),*(iVar2 + 0xba),0);
        iVar2 = *(arg1 + 0x3a8);
    }
    if (*(iVar2 + 0xa8) != 0) {
        snd_soc_component_update_bits(*(arg1 + 0xf8),*(iVar2 + 0xa8),*(iVar2 + 0xaa),3 << (*(iVar2 + 0xab) & 0x1f));
        iVar2 = *(arg1 + 0x3a8);
    }
    if (*(iVar2 + 0x48) != 0) {
        snd_soc_component_update_bits(*(arg1 + 0xf8),*(iVar2 + 0x48),*(iVar2 + 0x4a),1 << (*(iVar2 + 0x4b) & 0x1f));
    }
    sym.wcd_mbhc_hs_elec_irq(arg1,0,1);
    return;
}


// ===== sym.wcd_mbhc_find_plug_and_report @ 0x08005d48 (size 904) =====

void sym.wcd_mbhc_find_plug_and_report(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int16_t iVar2;
    uint32_t uVar3;
    code *pcVar4;
    uint64_t uVar5;
    ulong uVar6;
    uint8_t uVar7;
    ulong uVar8;
    int64_t iVar9;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x3d0) != '\0') {
        uVar6 = 0x8001e4c;
        goto code_r0x08005fb0;
    }
    _printk(0x8002ab7,"wcd_mbhc_find_plug_and_report",*(arg1 + 0xc1),arg2 & 0xffffffffU);
    uVar5 = mutex_is_locked(arg1 + 0x328);
    if (((uVar5 & 1) == 0) && ((obj.wcd_mbhc_find_plug_and_report.__already_done & 1) == 0)) {
        obj.wcd_mbhc_find_plug_and_report.__already_done = 0x1;
        __warn_printk("%s: BCL should have acquired\n","wcd_mbhc_find_plug_and_report");
    //WARNING: Does not return
        pcVar4 = SoftwareBreakpoint(0x800,0x80060a8);
        (*pcVar4)();
    }
    uVar7 = *(arg1 + 0xc1);
    if (uVar7 == arg2) {
        _printk(0x80031be,"wcd_mbhc_find_plug_and_report");
    }
    else {
        uVar3 = arg2 - 1;
        if (3 < uVar3) {
            __warn_printk("Unexpected current plug_type %d, plug_type %d [TF-HEADSET]\n",uVar7,arg2 & 0xffffffffU);
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x800,0x8005f40);
            (*pcVar4)();
        }
    //switch table (3 cases) at 0x8003554
        switch(*(uVar3 * 4 + 0x8003554) + 0x8005de4) {
        case 0x8005df8:
            if ((*(*(arg1 + 0x90) + 0x54) != '\0') && (pcVar4 = *(*(arg1 + 1000) + 0x18), pcVar4 != NULL)) {
                if (1 < (pcVar4 + -0x8004410 >> 3 | pcVar4 << 0x3d)) {
                    __cfi_slowpath_diag(0x7bab4b804db7b328,pcVar4,0x8000690);
                }
                (*pcVar4)(arg1);
                uVar7 = *(arg1 + 0xc1);
            }
            if (uVar7 == 2) {
                sym.wcd_mbhc_report_plug(arg1,0,1);
            }
            sym.wcd_mbhc_report_plug(arg1,1,3);
            uVar6 = *(arg1 + 0x418);
            uVar8 = 0x14;
            break;
        case 0x8005e6c:
            cVar1 = *(*(arg1 + 0x90) + 0x10);
            sym.wcd_mbhc_report_plug(arg1,1,4);
            extcon_set_state_sync(*(arg1 + 0x418),0x17,1);
            if (cVar1 == '\0') goto code_r0x08005fa8;
            _printk(0x8002860,"wcd_mbhc_find_plug_and_report");
            iVar9 = *(arg1 + 0x3a8);
            if (*(iVar9 + 0xb8) == 0) {
                iVar2 = *(iVar9 + 0x168);
                if (iVar2 != 0) goto code_r0x08006044;
code_r0x08005ec0:
                iVar2 = *(iVar9 + 0x48);
                if (iVar2 != 0) goto code_r0x08006060;
code_r0x08005ec8:
                iVar2 = *(iVar9 + 0xa8);
            }
            else {
                snd_soc_component_update_bits(*(arg1 + 0xf8),*(iVar9 + 0xb8),*(iVar9 + 0xba),0);
                iVar9 = *(arg1 + 0x3a8);
                iVar2 = *(iVar9 + 0x168);
                if (iVar2 == 0) goto code_r0x08005ec0;
code_r0x08006044:
                snd_soc_component_update_bits(*(arg1 + 0xf8),iVar2,*(iVar9 + 0x16a),0);
                iVar9 = *(arg1 + 0x3a8);
                iVar2 = *(iVar9 + 0x48);
                if (iVar2 == 0) goto code_r0x08005ec8;
code_r0x08006060:
                snd_soc_component_update_bits(*(arg1 + 0xf8),iVar2,*(iVar9 + 0x4a),1 << (*(iVar9 + 0x4b) & 0x1f));
                iVar9 = *(arg1 + 0x3a8);
                iVar2 = *(iVar9 + 0xa8);
            }
            if (iVar2 != 0) {
                snd_soc_component_update_bits(*(arg1 + 0xf8),iVar2,*(iVar9 + 0xaa),3 << (*(iVar9 + 0xab) & 0x1f));
            }
            sym.wcd_mbhc_hs_elec_irq(arg1,0,1);
            goto code_r0x08005fa8;
        case 0x8005f00:
            if (uVar7 == 2) {
                sym.wcd_mbhc_report_plug(arg1,0,1);
                extcon_set_state_sync(*(arg1 + 0x418),0x15,0);
                uVar7 = *(arg1 + 0xc1);
            }
            if (uVar7 == 1) {
                sym.wcd_mbhc_report_plug(arg1,0,3);
                extcon_set_state_sync(*(arg1 + 0x418),0x14,0);
                uVar7 = *(arg1 + 0xc1);
            }
            if (uVar7 == 0) {
                *(arg1 + 0xc1) = 4;
            }
            uVar6 = *(arg1 + 0x418);
            uVar8 = 0x3e;
            break;
        case 0x8005f88:
            sym.wcd_mbhc_report_plug(arg1,1,1);
            uVar6 = *(arg1 + 0x418);
            uVar8 = 0x15;
        }
        extcon_set_state_sync(uVar6,uVar8,1);
    }
code_r0x08005fa8:
    uVar6 = 0x8002bbe;
code_r0x08005fb0:
    _printk(uVar6,"wcd_mbhc_find_plug_and_report");
    return;
}


// ===== sym.wcd_mbhc_get_button_mask @ 0x080060d0 (size 120) =====

uint sym.wcd_mbhc_get_button_mask(int64_t arg1)

{
    uint32_t uVar1;
    uint uVar2;
    ulong *in_x18;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar3 = *(*(arg1 + 0x98) + 0x88);
    __cfi_slowpath_diag(0xf0d2ea9a64921857,pcVar3,0x80006b0);
    uVar1 = (*pcVar3)(*(arg1 + 0xf8));
    if (uVar1 < 6) {
        uVar2 = *(uVar1 * 4 + 0x8003cb8);
    }
    else {
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.wcd_mbhc_start @ 0x08006148 (size 908) =====

uint32_t sym.wcd_mbhc_start(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    code *pcVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    int *piVar7;
    uint64_t uVar8;
    int64_t iVar9;
    ulong unaff_x30;
    uchar noname_1 [16];
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        return 0xffffffea;
    }
    if (arg2 == 0) {
        return 0xffffffea;
    }
    iVar9 = *(*(arg1 + 0xf8) + 0x20);
    *(arg1 + 0x90) = arg2;
    _dev_printk(0x800349a,*(*(arg1 + 0xf8) + 0x18),"%s: enter\n","wcd_mbhc_start");
    piVar7 = arg2 + 0x58;
    *piVar7 = 0;
    iVar6 = of_find_property(*(*(iVar9 + 0x40) + 0x2f0),"qcom,msm-mbhc-usbc-audio-supported",0);
    uVar3 = 0;
    if (iVar6 != 0) {
        uVar3 = of_property_read_variable_u32_array
                          (*(*(iVar9 + 0x40) + 0x2f0),"qcom,msm-mbhc-usbc-audio-supported",piVar7,1,0);
        uVar3 = uVar3 & uVar3 >> 0x1f;
    }
    if ((*piVar7 == 0) || (uVar3 != 0)) {
        _dev_printk(0x800349a,*(iVar9 + 0x40),"%s: %s in dt node is missing or false\n","wcd_mbhc_start",
                    "qcom,msm-mbhc-usbc-audio-supported");
        _dev_printk(0x800349a,*(iVar9 + 0x40),0x80016b4,"wcd_mbhc_start");
        if (*piVar7 != 0) goto code_r0x0800622c;
code_r0x08006348:
        if (*(arg1 + 0xf4) == '\0') {
            iVar9 = *(arg1 + 0x90);
            uVar8 = 0;
            iVar6 = iVar9 + 0x24;
            do {
                if (*(iVar6 + uVar8 * 4) != 0) {
                    if (uVar8 < 6) {
                        iVar4 = snd_jack_set_key(*(arg1 + 0x2a8),*(uVar8 * 4 + 0x8003cb8));
                        if (iVar4 == 0) {
                            input_set_capability(*(*(arg1 + 0x2a8) + 0x20),1,*(iVar6 + uVar8 * 4));
                            _printk(0x8002b13,"wcd_mbhc_set_keycode",uVar8 & 0xffffffff,*(iVar6 + uVar8 * 4));
                            goto code_r0x08006378;
                        }
                        _printk(0x800291f,"wcd_mbhc_set_keycode",*(iVar9 + uVar8 * 4 + 0x24));
                    }
                    else if ((obj.wcd_mbhc_set_keycode.__already_done & 1) == 0) {
                        obj.wcd_mbhc_set_keycode.__already_done = 0x1;
                        __warn_printk("Wrong button number:%d\n",uVar8 & 0xffffffff);
    //WARNING: Does not return
                        pcVar2 = SoftwareBreakpoint(0x800,0x8006410);
                        (*pcVar2)();
                    }
                    _printk(0x800213f);
                    goto code_r0x0800643c;
                }
code_r0x08006378:
                uVar8 = uVar8 + 1;
            } while (uVar8 != 8);
            if (*(iVar9 + 0x24) != 0) {
                *(arg1 + 0xf4) = 1;
            }
        }
code_r0x0800643c:
        if (((**(arg1 + 0x90) == '\0') || (*(arg1 + 0x188) != 0)) || (*(arg1 + 400) != 0)) {
            sym.wcd_mbhc_initialise(arg1);
            uVar3 = 0;
            iVar4 = *piVar7;
        }
        else {
            uVar5 = jiffies_to_usecs(0x3ffffffffffffffe);
            uVar1 = 0x3ffffffffffffffe;
            if (3999999 < uVar5) {
                uVar1 = 1000;
            }
            queue_delayed_work_on(0x20,_snd_soc_jack_report,arg1 + 0x100,uVar1);
            iVar4 = *piVar7;
        }
        if (iVar4 != 0) {
            *(arg1 + 0x410) = 0;
            *(arg1 + 0x400) = sym.wcd_mbhc_usbc_ana_event_handler.47703894683a65bd92c9bc7b673552c9.cfi_jt;
            uVar3 = fsa4480_reg_notifier(arg1 + 0x400,*(arg1 + 0x3f8));
        }
    }
    else {
code_r0x0800622c:
        iVar6 = of_find_property(*(*(iVar9 + 0x40) + 0x2f0),"qcom,uart-audio-sw-gpio",0);
        if ((iVar6 == 0) || (uVar3 = sym.wcd_mbhc_init_gpio(arg1,noname_1,arg2 + 0x60,arg2 + 0x68), uVar3 == 0)) {
            _dev_printk(0x800349a,*(*(arg1 + 0xf8) + 0x18),"%s: usbc analog enabled\n","wcd_mbhc_start");
            *(arg1 + 0xd4) = 2;
            iVar6 = of_parse_phandle(*(*(iVar9 + 0x40) + 0x2f0),"fsa4480-i2c-handle",0);
            *(arg1 + 0x3f8) = iVar6;
            if (iVar6 != 0) goto code_r0x08006348;
            _dev_err(*(iVar9 + 0x40),"%s: fsa4480 i2c node not found\n","wcd_mbhc_start");
            uVar3 = 0xffffffea;
        }
        _dev_printk(0x800349a,*(*(arg1 + 0xf8) + 0x18),"%s: leave %d\n","wcd_mbhc_start",uVar3);
    }
    return uVar3;
}


// ===== sym.wcd_mbhc_init_gpio @ 0x080064d4 (size 252) =====

ulong sym.wcd_mbhc_init_gpio(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint32_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t in_x1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = 0xffffffea;
    if ((arg1 != 0) && (in_x1 != 0)) {
        iVar1 = *(*(arg1 + 0xf8) + 0x20);
        _dev_printk(0x800349a,*(*(arg1 + 0xf8) + 0x18),"%s: gpio %s\n","wcd_mbhc_init_gpio",
                    "qcom,uart-audio-sw-gpio");
        iVar4 = of_parse_phandle(*(*(iVar1 + 0x40) + 0x2f0),"qcom,uart-audio-sw-gpio",0);
        uVar3 = 0;
        *arg3 = iVar4;
        if (iVar4 == 0) {
            uVar2 = of_get_named_gpio_flags(*(*(iVar1 + 0x40) + 0x2f0),"qcom,uart-audio-sw-gpio",0,0);
            uVar3 = 0;
            *arg2 = uVar2;
            if (0x1ff < uVar2) {
                _dev_err(*(iVar1 + 0x40),"%s, property %s not in node %s","wcd_mbhc_init_gpio",
                         "qcom,uart-audio-sw-gpio",*(*(*(iVar1 + 0x40) + 0x2f0) + 0x10));
                uVar3 = 0xffffffea;
            }
        }
    }
    return uVar3;
}


// ===== sym.wcd_mbhc_initialise @ 0x080065d0 (size 1476) =====

void sym.wcd_mbhc_initialise(int64_t arg1)

{
    uchar uVar1;
    uint8_t uVar2;
    int16_t iVar3;
    bool bVar4;
    ulong uVar5;
    ulong uVar6;
    int64_t iVar7;
    int iVar8;
    ulong *in_x18;
    ulong uVar9;
    code *pcVar10;
    int64_t iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar9 = *(arg1 + 0xf8);
    _printk(0x8002012,"wcd_mbhc_initialise");
    _printk(0x8002ef3,"wcd_mbhc_initialise");
    mutex_lock(arg1 + 0x328);
    _printk(0x8001a88,"wcd_mbhc_initialise");
    _segment.ehdr = debugfs_create_dir("mbhc",0);
    if (_segment.ehdr < 0xfffffffffffff001) {
        _printk(0x8002714,"wcd_mbhc_initialise");
        debugfs_create_file("headset_status",0x1b6,_segment.ehdr,0,reloc.__this_module);
    }
    pcVar10 = *(*(arg1 + 0x98) + 0x128);
    if (pcVar10 == NULL) {
        pcVar10 = *(*(arg1 + 0x98) + 200);
        if (pcVar10 != NULL) {
            uVar6 = 0x8000b70;
            uVar5 = 0x2019e0d33881f30a;
            goto code_r0x08006700;
        }
        iVar7 = *(arg1 + 0x3a8);
        if (*(iVar7 + 0x58) != 0) {
            snd_soc_component_update_bits
                      (*(arg1 + 0xf8),*(iVar7 + 0x58),*(iVar7 + 0x5a),3 << (*(iVar7 + 0x5b) & 0x1f));
        }
    }
    else {
        uVar6 = 0x8000b50;
        uVar5 = 0x129e179694a2de07;
code_r0x08006700:
        __cfi_slowpath_diag(uVar5,pcVar10,uVar6);
        (*pcVar10)(uVar9,0xffffffff);
    }
    if (((*(*(arg1 + 0x90) + 0x48) == '\0') || (pcVar10 = *(*(arg1 + 0x98) + 0x108), pcVar10 == NULL)) ||
       (*(*(arg1 + 0x90) + 0x5c) != '\0')) {
        pcVar10 = *(*(arg1 + 0x98) + 0x140);
        if (pcVar10 != NULL) {
            __cfi_slowpath_diag(0x7580eeff27e3c667,pcVar10,0x8000bb0);
            (*pcVar10)(arg1,0);
        }
    }
    else {
        if (4 < (pcVar10 + -0x8004440 >> 3 | pcVar10 << 0x3d)) {
            __cfi_slowpath_diag(0xc18342d5baef945d,pcVar10,0x8000b90);
        }
        (*pcVar10)(arg1);
    }
    if (*(*(arg1 + 0x90) + 0x58) != 0) {
        pcVar10 = *(*(arg1 + 0x98) + 0x128);
        if (pcVar10 == NULL) {
            pcVar10 = *(*(arg1 + 0x98) + 200);
            if (pcVar10 == NULL) {
                iVar3 = *(*(arg1 + 0x3a8) + 0x58);
                if (iVar3 != 0) {
                    snd_soc_component_update_bits(*(arg1 + 0xf8),iVar3,*(*(arg1 + 0x3a8) + 0x5a),0);
                }
                goto code_r0x08006820;
            }
            __cfi_slowpath_diag(0x2019e0d33881f30a,pcVar10,0x8000bf0);
            uVar6 = 0;
        }
        else {
            __cfi_slowpath_diag(0x129e179694a2de07,pcVar10,0x8000bd0);
            uVar6 = 0x18;
        }
        (*pcVar10)(uVar9,uVar6);
    }
code_r0x08006820:
    iVar7 = *(arg1 + 0x3a8);
    if (*(iVar7 + 0x78) == 0) {
        iVar3 = *(iVar7 + 0x88);
        if (iVar3 == 0) goto code_r0x08006834;
code_r0x08006910:
        snd_soc_component_update_bits
                  (*(arg1 + 0xf8),iVar3,*(iVar7 + 0x8a),*(arg1 + 0xc4) << (*(iVar7 + 0x8b) & 0x1f));
        iVar7 = *(arg1 + 0x3a8);
        iVar3 = *(iVar7 + 0x98);
    }
    else {
        snd_soc_component_update_bits
                  (*(arg1 + 0xf8),*(iVar7 + 0x78),*(iVar7 + 0x7a),*(arg1 + 0xc3) << (*(iVar7 + 0x7b) & 0x1f));
        iVar7 = *(arg1 + 0x3a8);
        iVar3 = *(iVar7 + 0x88);
        if (iVar3 != 0) goto code_r0x08006910;
code_r0x08006834:
        iVar3 = *(iVar7 + 0x98);
    }
    if (iVar3 != 0) {
        snd_soc_component_update_bits(*(arg1 + 0xf8),iVar3,*(iVar7 + 0x9a),1 << (*(iVar7 + 0x9b) & 0x1f));
    }
    if ((*(*(arg1 + 0x90) + 0x21) != '\0') && (pcVar10 = *(*(arg1 + 0x98) + 0xf8), pcVar10 != NULL)) {
        __cfi_slowpath_diag(0x1be676a8fa3b6db7,pcVar10,0x8000c10);
        (*pcVar10)(uVar9,1);
    }
    iVar7 = *(arg1 + 0x3a8);
    if (*(iVar7 + 0x68) != 0) {
        snd_soc_component_update_bits(*(arg1 + 0xf8),*(iVar7 + 0x68),*(iVar7 + 0x6a),1 << (*(iVar7 + 0x6b) & 0x1f));
        iVar7 = *(arg1 + 0x3a8);
    }
    iVar3 = *(iVar7 + 8);
    if (*(*(arg1 + 0x90) + 0x58) == 0) {
        if (iVar3 == 0) goto code_r0x0800694c;
        uVar6 = *(arg1 + 0xf8);
        uVar1 = *(iVar7 + 10);
        iVar8 = 1 << (*(iVar7 + 0xb) & 0x1f);
    }
    else {
        if (iVar3 == 0) goto code_r0x0800694c;
        uVar6 = *(arg1 + 0xf8);
        iVar8 = 0;
        uVar1 = *(iVar7 + 10);
    }
    snd_soc_component_update_bits(uVar6,iVar3,uVar1,iVar8);
code_r0x0800694c:
    iVar7 = *(arg1 + 0x3a8);
    if (*(iVar7 + 200) != 0) {
        iVar8 = 0xb;
        if (*(*(arg1 + 0x90) + 0x58) != 0) {
            iVar8 = 8;
        }
        snd_soc_component_update_bits
                  (*(arg1 + 0xf8),*(iVar7 + 200),*(iVar7 + 0xca),iVar8 << (*(iVar7 + 0xcb) & 0x1f));
        iVar7 = *(arg1 + 0x3a8);
    }
    if (*(iVar7 + 0xd8) != 0) {
        snd_soc_component_update_bits(*(arg1 + 0xf8),*(iVar7 + 0xd8),*(iVar7 + 0xda),3 << (*(iVar7 + 0xdb) & 0x1f));
    }
    pcVar10 = *(*(arg1 + 0x98) + 0xa0);
    __cfi_slowpath_diag(0x1be676a8fa3b6db7,pcVar10,0x8000c30);
    (*pcVar10)(uVar9,1);
    pcVar10 = *(*(arg1 + 0x98) + 0x80);
    if (pcVar10 != NULL) {
        bVar4 = *(*(arg1 + 0x90) + 0x58) == 0;
        uVar6 = 0x8000c70;
        if (!bVar4) {
            uVar6 = 0x8000c50;
        }
        __cfi_slowpath_diag(0x1be676a8fa3b6db7,pcVar10,uVar6);
        (*pcVar10)(uVar9,bVar4);
    }
    iVar8 = (*(*(*(arg1 + 0x90) + 8) + 0x30) + -0x578) / 100;
    _dev_printk(0x800349a,*(*(arg1 + 0xf8) + 0x18),"%s: reg_val  = %x\n","wcd_program_hs_vref",iVar8);
    iVar7 = *(arg1 + 0x3a8);
    if (*(iVar7 + 0xe8) != 0) {
        snd_soc_component_update_bits
                  (*(arg1 + 0xf8),*(iVar7 + 0xe8),*(iVar7 + 0xea),iVar8 << (*(iVar7 + 0xeb) & 0x1f));
    }
    iVar7 = *(arg1 + 0xf8);
    iVar11 = *(*(arg1 + 0x90) + 8);
    if (iVar11 == 0) {
        _dev_err(*(*(iVar7 + 0x20) + 0x40),"%s: calibration data is NULL\n","wcd_program_btn_threshold");
    }
    else {
        uVar2 = *(iVar11 + 0x41);
        pcVar10 = *(*(arg1 + 0x98) + 0xc0);
        __cfi_slowpath_diag(0x2ae1a75badba2808,pcVar10,0x8000a90);
        (*pcVar10)(iVar7,iVar11 + 0x50,iVar11 + 0x50 + uVar2 * 2,*(iVar11 + 0x41),0);
    }
    *(arg1 + 0x3b0) = 0;
    _printk(0x80018cb,"wcd_mbhc_initialise");
    mutex_unlock(arg1 + 0x328);
    _printk(0x8002bbe,"wcd_mbhc_initialise");
    return;
}


// ===== sym.wcd_mbhc_usbc_ana_event_handler @ 0x08006b94 (size 368) =====

ulong sym.wcd_mbhc_usbc_ana_event_handler(int64_t arg1,int64_t arg2)

{
    int16_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    code *pcVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0x400) {
        uVar2 = 0xffffffea;
    }
    else {
        iVar4 = *(arg1 + -0x370);
        _dev_printk(0x800349a,*(*(arg1 + -0x308) + 0x18),"%s: mode = %lu\n","wcd_mbhc_usbc_ana_event_handler",arg2);
        if (arg2 == 1) {
            msm_cdc_pinctrl_select_active_state();
            _dev_printk(0x800349a,*(*(arg1 + -0x308) + 0x18),"disable uart\n");
            pcVar3 = *(*(arg1 + -0x368) + 0x80);
            if (pcVar3 != NULL) {
                __cfi_slowpath_diag(0x1be676a8fa3b6db7,pcVar3,0x8000c90);
                (*pcVar3)(*(arg1 + -0x308),0);
                pcVar3 = *(*(arg1 + -0x368) + 0x80);
                __cfi_slowpath_diag(0x1be676a8fa3b6db7,pcVar3,0x8000cb0);
                (*pcVar3)(*(arg1 + -0x308),1);
            }
            iVar1 = *(*(arg1 + -0x58) + 8);
            if (iVar1 != 0) {
                snd_soc_component_update_bits(*(arg1 + -0x308),iVar1,*(*(arg1 + -0x58) + 10),0);
                iVar4 = *(arg1 + -0x58);
                if (*(iVar4 + 8) != 0) {
                    snd_soc_component_update_bits
                              (*(arg1 + -0x308),*(iVar4 + 8),*(iVar4 + 10),1 << (*(iVar4 + 0xb) & 0x1f));
                }
            }
        }
        else {
            msm_cdc_pinctrl_select_sleep_state(*(iVar4 + 0x68));
            _dev_printk(0x800349a,*(*(arg1 + -0x308) + 0x18),"enable uart\n");
        }
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.wcd_mbhc_stop @ 0x08006d04 (size 356) =====

void sym.wcd_mbhc_stop(int64_t arg1)

{
    ulong *in_x18;
    code *pcVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8002012,"wcd_mbhc_stop");
    if (((*(arg1 + 0xc1) != '\0') && (*(arg1 + 0x98) != 0)) && (pcVar1 = *(*(arg1 + 0x98) + 0xe0), pcVar1 != NULL)) {
        __cfi_slowpath_diag(0x7e6c99e1529760f9,pcVar1,0x80006d0);
        (*pcVar1)(*(arg1 + 0xf8));
    }
    *(arg1 + 0xc1) = 0;
    *(arg1 + 0xa0) = 0;
    if ((*(arg1 + 0x98) != 0) && (pcVar1 = *(*(arg1 + 0x98) + 0x70), pcVar1 != NULL)) {
        __cfi_slowpath_diag(0x23d049188c4e6e9c,pcVar1,0x80006f0);
        (*pcVar1)(*(arg1 + 0xf8),*(*(arg1 + 0x358) + 0x14),0);
        pcVar1 = *(*(arg1 + 0x98) + 0x70);
        __cfi_slowpath_diag(0x23d049188c4e6e9c,pcVar1,0x8000710);
        (*pcVar1)(*(arg1 + 0xf8),*(*(arg1 + 0x358) + 0x18),0);
    }
    if ((*(arg1 + 0x188) != 0) || (*(arg1 + 400) != 0)) {
        cancel_delayed_work_sync(arg1 + 0x100);
        if (*(arg1 + 400) == 0) {
            release_firmware(*(arg1 + 0x188));
        }
        *(arg1 + 0x188) = 0;
        *(arg1 + 400) = 0;
    }
    if (*(*(arg1 + 0x90) + 0x58) != 0) {
        fsa4480_unreg_notifier(arg1 + 0x400,*(arg1 + 0x3f8));
    }
    _printk(0x8002bbe,"wcd_mbhc_stop");
    return;
}


// ===== sym.wcd_mbhc_init @ 0x08006e68 (size 3200) =====

uint32_t sym.wcd_mbhc_init(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    uint32_t uVar4;
    int iVar5;
    ulong uVar6;
    uint64_t uVar7;
    char *pcVar8;
    int64_t in_x4;
    uint8_t in_w5;
    uint uVar9;
    int64_t *piVar10;
    uint uVar11;
    uint uVar12;
    ulong *in_x18;
    code *pcVar13;
    int64_t iVar14;
    ulong unaff_x30;
    ulong uStack_70;
    ulong uStack_68;
    uint uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iStack_58 = *(iVar14 + 0x5e0);
    iVar14 = *(arg2 + 0x20);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    _printk(0x8002012,"wcd_mbhc_init");
    uVar4 = of_property_read_variable_u32_array
                      (*(*(iVar14 + 0x40) + 0x2f0),"qcom,msm-mbhc-hphl-swh",&uStack_70 + 4,1,0);
    if (uVar4 < 0) {
        arg1 = cdev_tevent_alloc(0x36008a09);
        cdev_tevent_add_int(arg1,"MbhcStage",0);
        cdev_tevent_add_int(arg1,"MissingNodeType",0);
        cdev_tevent_write(arg1);
        cdev_tevent_destroy(arg1);
        uVar6 = *(iVar14 + 0x40);
        pcVar8 = "qcom,msm-mbhc-hphl-swh";
code_r0x080070b4:
        _dev_err(uVar6,"%s: missing %s in dt node [TF-HEADSET]\n","wcd_mbhc_init",pcVar8);
        goto code_r0x080070b8;
    }
    uVar4 = of_property_read_variable_u32_array(*(*(iVar14 + 0x40) + 0x2f0),"qcom,msm-mbhc-gnd-swh",&uStack_70,1,0);
    if (uVar4 < 0) {
        arg1 = cdev_tevent_alloc(0x36008a09);
        cdev_tevent_add_int(arg1,"MbhcStage",0);
        cdev_tevent_add_int(arg1,"MissingNodeType",1);
        cdev_tevent_write(arg1);
        cdev_tevent_destroy(arg1);
        uVar6 = *(iVar14 + 0x40);
        pcVar8 = "qcom,msm-mbhc-gnd-swh";
        goto code_r0x080070b4;
    }
    iVar5 = of_property_read_variable_u32_array
                      (*(*(iVar14 + 0x40) + 0x2f0),"qcom,msm-mbhc-hs-mic-max-threshold-mv",arg1 + 200,1,0);
    if (iVar5 < 0) {
        _dev_printk(0x800349a,*(iVar14 + 0x40),"%s: missing %s in dt node\n","wcd_mbhc_init",
                    "qcom,msm-mbhc-hs-mic-max-threshold-mv");
    }
    iVar5 = of_property_read_variable_u32_array
                      (*(*(iVar14 + 0x40) + 0x2f0),"qcom,msm-mbhc-hs-mic-min-threshold-mv",arg1 + 0xcc,1,0);
    if (iVar5 < 0) {
        _dev_printk(0x800349a,*(iVar14 + 0x40),"%s: missing %s in dt node\n","wcd_mbhc_init",
                    "qcom,msm-mbhc-hs-mic-min-threshold-mv");
    }
    uVar4 = of_property_read_variable_u32_array
                      (*(*(iVar14 + 0x40) + 0x2f0),"qcom,msm-mbhc-moist-cfg",&uStack_68,3,0);
    if (uVar4 < 0) {
        _dev_printk(0x800349a,*(iVar14 + 0x40),"%s: no qcom,msm-mbhc-moist-cfg in DT\n","wcd_mbhc_init");
        uVar11 = 3;
        uVar9 = 1;
        uVar12 = 1;
    }
    else {
        uVar9 = uStack_68;
        uVar11 = uStack_68._4_4_;
        uVar12 = uStack_60;
    }
    *(arg1 + 0xdc) = uVar11;
    *(arg1 + 0xe0) = uVar12;
    *(arg1 + 0xc2) = 0;
    *(arg1 + 0xc0) = 0;
    *(arg1 + 0xf8) = arg2;
    *(arg1 + 0x358) = arg4;
    *(arg1 + 0x1c0) = in_w5 & 1;
    *(arg1 + 0xef) = 0;
    *(arg1 + 0xc3) = uStack_70._4_4_ != 0;
    *(arg1 + 0xc4) = uStack_70 != 0;
    *(arg1 + 0x98) = arg3;
    *(arg1 + 0xf0) = 0;
    *(arg1 + 0xf2) = 0;
    *(arg1 + 0xf5) = 0;
    *(arg1 + 0x1c4) = 0;
    *(arg1 + 0x3a8) = in_x4;
    *(arg1 + 0xd4) = 4;
    *(arg1 + 0xd8) = uVar9;
    *(arg1 + 0xe4) = 0x6400000064;
    if (arg4 == 0) {
        _printk(0x8002bcb,"wcd_mbhc_init");
        uVar4 = 0xffffffea;
        goto code_r0x080070d0;
    }
    if (in_x4 == 0) {
        uVar6 = *(arg2 + 0x18);
        pcVar8 = "%s: mbhc registers are not defined\n";
    }
    else {
        if ((((arg3 != 0) && (*(arg3 + 0x68) != 0)) && (*(arg3 + 0x70) != 0)) &&
           (((*(arg3 + 0x78) != 0 && (*(arg3 + 0x88) != 0)) &&
            ((*(arg3 + 0x90) != 0 && ((*(arg3 + 0xa0) != 0 && (*(arg3 + 0xc0) != 0)))))))) {
            if (*(arg1 + 0x1f8) == 0) {
                uVar4 = snd_soc_card_jack_new(*(arg2 + 0x20),"Headset Jack",0xf,arg1 + 0x1c8,0,0);
                if (uVar4 == 0) {
                    uVar4 = snd_soc_card_jack_new(*(arg2 + 0x20),"Button Jack",0x7e00,arg1 + 0x278,0,0);
                    if (uVar4 != 0) {
                        _printk(0x8001b60);
                        goto code_r0x080070d0;
                    }
                    uVar4 = snd_jack_set_key(*(arg1 + 0x2a8),0x4000,0xe2);
                    if (uVar4 == 0) {
                        *(arg1 + 0x100) = 0xfffffffe0;
                        *(arg1 + 0x108) = arg1 + 0x108;
                        *(arg1 + 0x110) = arg1 + 0x108;
                        *(arg1 + 0x118) = sym.wcd_mbhc_fw_read.47703894683a65bd92c9bc7b673552c9.cfi_jt;
                        init_timer_key(arg1 + 0x130,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                        *arg1 = 0xfffffffe0;
                        *(arg1 + 8) = arg1 + 8;
                        *(arg1 + 0x10) = arg1 + 8;
                        *(arg1 + 0x18) = sym.wcd_btn_lpress_fn.47703894683a65bd92c9bc7b673552c9.cfi_jt;
                        init_timer_key(arg1 + 0x30,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                        uVar4 = 0;
                        goto code_r0x08007310;
                    }
                    uVar6 = 0x8002393;
                }
                else {
                    uVar6 = 0x8002c1e;
                }
                _printk(uVar6,"wcd_mbhc_init");
                goto code_r0x080070d0;
            }
            uVar4 = uVar4 & uVar4 >> 0x1f;
code_r0x08007310:
            *(arg1 + 0x3b0) = 0;
            __init_swait_queue_head(arg1 + 0x3b8,"&x->wait",obj.init_completion.__key);
            arg3 = arg1 + 0x390;
            *(arg1 + 0x390) = sym.wcd_event_notify.47703894683a65bd92c9bc7b673552c9.cfi_jt;
            pcVar13 = *(*(arg1 + 0x98) + 0x60);
            if (pcVar13 != NULL) {
                __cfi_slowpath_diag(0xde385033fff74d90,pcVar13,0x8000730);
                uVar4 = (*pcVar13)(arg1,arg3,1);
                if (uVar4 != 0) {
                    uVar6 = 0x8001b7d;
                    goto code_r0x080070c0;
                }
            }
            __init_waitqueue_head(arg1 + 0xa8,"&mbhc->wait_btn_press",obj.wcd_mbhc_hs_elec_irq.__already_done);
            __mutex_init(arg1 + 0x328,"&mbhc->codec_resource_lock",obj.wcd_mbhc_hs_elec_irq.__already_done);
            if (*(arg1 + 0x3d4) != 0) {
                if (*(arg1 + 0x3d4) == 1) {
                    sym.wcd_mbhc_adc_init(arg1);
                }
                else {
                    _printk(0x8002517,"wcd_mbhc_init");
                }
            }
            piVar10 = *(arg1 + 1000);
            if ((((piVar10 == NULL) || (*piVar10 == 0)) || (piVar10[1] == 0)) ||
               ((piVar10[2] == 0 || (piVar10[4] == 0)))) {
                _printk(0x800215c,"wcd_mbhc_init");
                goto code_r0x08007444;
            }
            pcVar13 = *(*(arg1 + 0x98) + 0x68);
            __cfi_slowpath_diag(0x86e29da66b60381b,pcVar13,0x8000750);
            uVar4 = (*pcVar13)(arg2,**(arg1 + 0x358),
                               sym.wcd_mbhc_mech_plug_detect_irq.47703894683a65bd92c9bc7b673552c9.cfi_jt,"mbhc sw intr"
                               ,arg1);
            if (uVar4 != 0) {
                _printk(0x8002ec9,"wcd_mbhc_init",**(arg1 + 0x358),uVar4);
                goto code_r0x08007444;
            }
            pcVar13 = *(*(arg1 + 0x98) + 0x68);
            __cfi_slowpath_diag(0x86e29da66b60381b,pcVar13,0x8000770);
            uVar4 = (*pcVar13)(arg2,*(*(arg1 + 0x358) + 4),
                               sym.wcd_mbhc_btn_press_handler.47703894683a65bd92c9bc7b673552c9.cfi_jt,
                               "Button Press detect",arg1);
            if (uVar4 != 0) goto code_r0x080077cc;
            pcVar13 = *(*(arg1 + 0x98) + 0x68);
            __cfi_slowpath_diag(0x86e29da66b60381b,pcVar13,0x8000790);
            uVar4 = (*pcVar13)(arg2,*(*(arg1 + 0x358) + 8),
                               sym.wcd_mbhc_release_handler.47703894683a65bd92c9bc7b673552c9.cfi_jt,
                               "Button Release detect",arg1);
            if (uVar4 != 0) {
                _printk(0x80029f6,"wcd_mbhc_init",*(*(arg1 + 0x358) + 8));
                goto code_r0x08007a1c;
            }
            pcVar13 = *(*(arg1 + 0x98) + 0x68);
            __cfi_slowpath_diag(0x86e29da66b60381b,pcVar13,0x80007b0);
            uVar4 = (*pcVar13)(arg2,*(*(arg1 + 0x358) + 0xc),**(arg1 + 1000),"Elect Insert",arg1);
            if (uVar4 == 0) {
                pcVar13 = *(*(arg1 + 0x98) + 0x70);
                __cfi_slowpath_diag(0x23d049188c4e6e9c,pcVar13,0x80007d0);
                (*pcVar13)(arg2,*(*(arg1 + 0x358) + 0xc),0);
                puVar1 = arg1 + 0x3d8;
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar3) {
                        *puVar1 = *puVar1 & 0xfffffffffffffffe;
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
                pcVar13 = *(*(arg1 + 0x98) + 0x68);
                __cfi_slowpath_diag(0x86e29da66b60381b,pcVar13,0x80007f0);
                uVar4 = (*pcVar13)(arg2,*(*(arg1 + 0x358) + 0x10),*(*(arg1 + 1000) + 8),"Elect Remove",arg1);
                if (uVar4 == 0) {
                    pcVar13 = *(*(arg1 + 0x98) + 0x70);
                    __cfi_slowpath_diag(0x23d049188c4e6e9c,pcVar13,0x8000810);
                    (*pcVar13)(arg2,*(*(arg1 + 0x358) + 0x10),0);
                    Hint_Prefetch(puVar1,2,0,1);
                    do {
                        cVar2 = '\x01';
                        bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar3) {
                            *puVar1 = *puVar1 & 0xfffffffffffffffd;
                            cVar2 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar2 != '\0');
                    pcVar13 = *(*(arg1 + 0x98) + 0x68);
                    __cfi_slowpath_diag(0x86e29da66b60381b,pcVar13,0x8000830);
                    uVar4 = (*pcVar13)(arg2,*(*(arg1 + 0x358) + 0x14),
                                       sym.wcd_mbhc_hphl_ocp_irq.47703894683a65bd92c9bc7b673552c9.cfi_jt,
                                       "HPH_L OCP detect",arg1);
                    if (uVar4 == 0) {
                        pcVar13 = *(*(arg1 + 0x98) + 0x68);
                        __cfi_slowpath_diag(0x86e29da66b60381b,pcVar13,0x8000850);
                        uVar4 = (*pcVar13)(arg2,*(*(arg1 + 0x358) + 0x18),
                                           sym.wcd_mbhc_hphr_ocp_irq.47703894683a65bd92c9bc7b673552c9.cfi_jt,
                                           "HPH_R OCP detect",arg1);
                        if (uVar4 == 0) {
                            if (*(arg1 + 0x418) != 0) {
code_r0x080078b4:
                                *(arg1 + 0x3d0) = 0;
                                _printk(0x8002203,"wcd_mbhc_init",0);
                                uVar4 = 0;
                                goto code_r0x080070d0;
                            }
                            uVar7 = devm_extcon_dev_allocate(*(arg2 + 0x18),obj.mbhc_ext_dev_supported_table);
                            *(arg1 + 0x418) = uVar7;
                            if (uVar7 < 0xfffffffffffff001) {
                                uVar4 = devm_extcon_dev_register(*(arg2 + 0x18),uVar7);
                                if (uVar4 == 0) goto code_r0x080078b4;
                                _printk(0x8001e79,"wcd_mbhc_init");
                            }
                            else {
                                uVar4 = 0;
                            }
                            pcVar13 = *(*(arg1 + 0x98) + 0x78);
                            __cfi_slowpath_diag(0x374739a980183585,pcVar13,0x8000870);
                            (*pcVar13)(arg2,*(*(arg1 + 0x358) + 0x18),arg1);
                        }
                        else {
                            _printk(0x80029f6,"wcd_mbhc_init",*(*(arg1 + 0x358) + 0x18));
                        }
                        pcVar13 = *(*(arg1 + 0x98) + 0x78);
                        __cfi_slowpath_diag(0x374739a980183585,pcVar13,0x8000890);
                        (*pcVar13)(arg2,*(*(arg1 + 0x358) + 0x14),arg1);
                    }
                    else {
                        _printk(0x80029f6,"wcd_mbhc_init",*(*(arg1 + 0x358) + 0x14));
                    }
                    pcVar13 = *(*(arg1 + 0x98) + 0x78);
                    __cfi_slowpath_diag(0x374739a980183585,pcVar13,0x80008b0);
                    (*pcVar13)(arg2,*(*(arg1 + 0x358) + 0x10),arg1);
                }
                else {
                    _printk(0x80029f6,"wcd_mbhc_init",*(*(arg1 + 0x358) + 0x10));
                }
                pcVar13 = *(*(arg1 + 0x98) + 0x78);
                __cfi_slowpath_diag(0x374739a980183585,pcVar13,0x80008d0);
                (*pcVar13)(arg2,*(*(arg1 + 0x358) + 0xc),arg1);
            }
            else {
                _printk(0x80029f6,"wcd_mbhc_init",*(*(arg1 + 0x358) + 0xc));
            }
            pcVar13 = *(*(arg1 + 0x98) + 0x78);
            __cfi_slowpath_diag(0x374739a980183585,pcVar13,0x80008f0);
            (*pcVar13)(arg2,*(*(arg1 + 0x358) + 8),arg1);
code_r0x08007a1c:
            pcVar13 = *(*(arg1 + 0x98) + 0x78);
            __cfi_slowpath_diag(0x374739a980183585,pcVar13,0x8000910);
            (*pcVar13)(arg2,*(*(arg1 + 0x358) + 4),arg1);
            goto code_r0x08007a58;
        }
        uVar6 = *(arg2 + 0x18);
        pcVar8 = "%s: required mbhc callbacks are not defined\n";
    }
    _dev_err(uVar6,pcVar8,"wcd_mbhc_init");
    uVar4 = 0xffffffea;
code_r0x080070d0:
    while( true ) {
        iVar14 = sp_el0;
        if (*(iVar14 + 0x5e0) == iStack_58) break;
        uVar4 = __stack_chk_fail();
code_r0x080077cc:
        _printk(0x80029f6,"wcd_mbhc_init",*(*(arg1 + 0x358) + 4));
code_r0x08007a58:
        pcVar13 = *(*(arg1 + 0x98) + 0x78);
        __cfi_slowpath_diag(0x374739a980183585,pcVar13,0x8000930);
        (*pcVar13)(arg2,**(arg1 + 0x358),arg1);
code_r0x08007444:
        arg2 = *(*(arg1 + 0x98) + 0x60);
        if (arg2 != NULL) {
            __cfi_slowpath_diag(0xde385033fff74d90,arg2,0x8000950);
            (*arg2)(arg1,arg3,0);
        }
code_r0x080070b8:
        uVar6 = 0x8002203;
code_r0x080070c0:
        _printk(uVar6,"wcd_mbhc_init",uVar4);
    }
    return uVar4;
}


// ===== sym.wcd_mbhc_fw_read @ 0x08007ae8 (size 596) =====

void sym.wcd_mbhc_fw_read(int64_t arg1)

{
    uint64_t *puVar1;
    bool bVar2;
    int iVar3;
    uint32_t uVar4;
    uint64_t *puVar5;
    uint64_t *puVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar7;
    int iVar8;
    int64_t iVar9;
    ulong unaff_x30;
    uint64_t *puStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_68 = *(iVar9 + 0x5e0);
    iVar8 = 1;
    iVar9 = *(arg1 + -8);
    puStack_70 = NULL;
    do {
        _printk(0x8002181,"wcd_mbhc_fw_read",iVar8);
        pcVar7 = *(*(arg1 + -0x68) + 0x50);
        if (pcVar7 != NULL) {
            __cfi_slowpath_diag(0x7ec14beac6d10d85,pcVar7,0x8000cd0);
            puVar5 = (*pcVar7)(arg1 + -0x100,2);
            if (puVar5 == NULL) goto code_r0x08007b9c;
            _printk(0x800201f,"wcd_mbhc_fw_read");
            _printk(0x8001951,"wcd_mbhc_fw_read");
            puVar6 = puVar5 + 1;
            bVar2 = true;
code_r0x08007c78:
            if (0x69 < *puVar6) {
                puVar1 = puVar5;
                if (!bVar2) {
                    puVar1 = puStack_70 + 1;
                }
                if (*(*puVar1 + 0x41) * 4 + 0x56 <= *puVar6) {
                    if (bVar2) {
                        *(*(arg1 + -0x70) + 8) = *puVar5;
                        *(arg1 + 0x90) = puVar5;
                    }
                    else {
                        *(*(arg1 + -0x70) + 8) = puStack_70[1];
                        *(arg1 + 0x88) = puStack_70;
                    }
                    goto code_r0x08007cd0;
                }
            }
            _printk(0x8002c55,"wcd_mbhc_fw_read");
            if (!bVar2) {
                release_firmware(puStack_70);
            }
            goto code_r0x08007cd0;
        }
code_r0x08007b9c:
        iVar3 = request_firmware(&puStack_70,"wcd9320/wcd9320_mbhc.bin",*(iVar9 + 0x18));
        if (iVar3 == 0) {
            _printk(0x800201f,"wcd_mbhc_fw_read");
            _printk(0x8001aa2,"wcd_mbhc_fw_read");
            puVar5 = NULL;
            bVar2 = false;
            puVar6 = puStack_70;
            goto code_r0x08007c78;
        }
        usleep_range_state(4000000,0x3d0964,2);
        iVar8 = iVar8 + 1;
    } while (iVar8 != 0x10);
    _printk(0x8001aa2,"wcd_mbhc_fw_read");
    _printk(0x8001bc4,"wcd_mbhc_fw_read");
code_r0x08007cd0:
    sym.wcd_mbhc_initialise(arg1 + -0x100);
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_68) {
        return;
    }
    iVar9 = __stack_chk_fail();
    *extraout_x18 = sym.wcd_btn_lpress_fn;
    _printk(0x8002044,"wcd_btn_lpress_fn");
    if (*(*(iVar9 + 0x3a8) + 0x158) == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        uVar4 = snd_soc_component_read(*(iVar9 + 0xf8));
        uVar4 = (uVar4 & *(*(iVar9 + 0x3a8) + 0x15a)) >> (*(*(iVar9 + 0x3a8) + 0x15b) & 0x1f);
    }
    if (*(iVar9 + 0xc1) == '\x01') {
        _printk(0x8001eae,"wcd_btn_lpress_fn",uVar4);
        sym.wcd_mbhc_jack_report(iVar9,iVar9 + 0x278,*(iVar9 + 0x88),*(iVar9 + 0x88));
    }
    _printk(0x8002bbe,"wcd_btn_lpress_fn");
    pcVar7 = *(*(iVar9 + 0x98) + 0x90);
    __cfi_slowpath_diag(0xce1a9c61fa6df8c5,pcVar7,0x8000cf0);
    (*pcVar7)(iVar9,0);
    return;
}


// ===== sym.wcd_btn_lpress_fn @ 0x08007d3c (size 236) =====

void sym.wcd_btn_lpress_fn(int64_t arg1)

{
    uint32_t uVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8002044,"wcd_btn_lpress_fn");
    if (*(*(arg1 + 0x3a8) + 0x158) == 0) {
        uVar1 = 0xffffffea;
    }
    else {
        uVar1 = snd_soc_component_read(*(arg1 + 0xf8));
        uVar1 = (uVar1 & *(*(arg1 + 0x3a8) + 0x15a)) >> (*(*(arg1 + 0x3a8) + 0x15b) & 0x1f);
    }
    if (*(arg1 + 0xc1) == '\x01') {
        _printk(0x8001eae,"wcd_btn_lpress_fn",uVar1);
        sym.wcd_mbhc_jack_report(arg1,arg1 + 0x278,*(arg1 + 0x88),*(arg1 + 0x88));
    }
    _printk(0x8002bbe,"wcd_btn_lpress_fn");
    pcVar2 = *(*(arg1 + 0x98) + 0x90);
    __cfi_slowpath_diag(0xce1a9c61fa6df8c5,pcVar2,0x8000cf0);
    (*pcVar2)(arg1,0);
    return;
}


// ===== sym.wcd_event_notify @ 0x08007e28 (size 1864) =====

ulong sym.wcd_event_notify(ulong noname_0,int64_t arg1,int64_t arg2)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint64_t arg2_00;
    char *pcVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong uVar9;
    code *pcVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar6 = arg1 - 1;
    if (uVar6 < 0x10) {
        pcVar7 = *(uVar6 * 8 + 0x8003cd0);
    }
    else {
        pcVar7 = "WCD_EVENT_INVALID";
    }
    uVar9 = *(arg2 + 0xf8);
    _printk(0x80034cb,"wcd_event_notify",pcVar7);
    pcVar10 = *(*(arg2 + 0x98) + 0x98);
    if (pcVar10 == NULL) {
        uVar4 = 0;
        uVar5 = 0;
    }
    else {
        __cfi_slowpath_diag(0x8520705fd5e55046,pcVar10,0x8000d10);
        uVar4 = (*pcVar10)(arg2,2);
        pcVar10 = *(*(arg2 + 0x98) + 0x98);
        __cfi_slowpath_diag(0x8520705fd5e55046,pcVar10,0x8000d30);
        uVar5 = (*pcVar10)(arg2,1);
    }
    if (0xf < uVar6) {
        return 0;
    }
    //switch table (16 cases) at 0x8003564
    switch(*(uVar6 * 4 + 0x8003564) + 0x8007f1c) {
    case 0x8007f30:
        if ((*(*(arg2 + 0x98) + 0xd0) != 0) && (*(arg2 + 0xef) == '\0')) {
            iVar8 = *(arg2 + 0x3a8);
            if (*(iVar8 + 0xb8) != 0) {
                uVar6 = snd_soc_component_read(*(arg2 + 0xf8));
                iVar8 = *(arg2 + 0x3a8);
                if ((uVar6 & *(iVar8 + 0xba)) >> (*(iVar8 + 0xbb) & 0x1f) == 0) {
                    return 0;
                }
            }
            if (*(iVar8 + 0x168) != 0) {
                snd_soc_component_update_bits
                          (*(arg2 + 0xf8),*(iVar8 + 0x168),*(iVar8 + 0x16a),3 << (*(iVar8 + 0x16b) & 0x1f));
            }
        }
        break;
    case 0x8007f98:
        mutex_lock(obj.hphr_pa_lock);
        puVar1 = arg2 + 0x198;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = *puVar1 & 0xfffffffffffffffd;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        puVar1 = arg2 + 0x1a8;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = *puVar1 & 0xfffffffffffffffd;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        sym.wcd_enable_curr_micbias(arg2,uVar4 & 1);
        mutex_unlock(obj.hphr_pa_lock);
        puVar1 = arg2 + 0x1a0;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = *puVar1 & 0xfffffffffffffffd;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        break;
    case 0x8008000:
        pcVar10 = *(*(arg2 + 0x98) + 0x70);
        __cfi_slowpath_diag(0x23d049188c4e6e9c,pcVar10,0x8000e50);
        iVar8 = *(arg2 + 0x358);
        uVar9 = 0;
        goto code_r0x08008308;
    case 0x8008038:
        mutex_lock(obj.wcd_mbhc_hs_elec_irq.__already_done);
        puVar1 = arg2 + 0x198;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = *puVar1 & 0xfffffffffffffffe;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        puVar1 = arg2 + 0x1a8;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = *puVar1 & 0xfffffffffffffffe;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        sym.wcd_enable_curr_micbias(arg2,uVar4 & 1);
        mutex_unlock(obj.wcd_mbhc_hs_elec_irq.__already_done);
        puVar1 = arg2 + 0x1a0;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = *puVar1 & 0xfffffffffffffffe;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        break;
    case 0x80080a0:
        puVar1 = arg2 + 0x1a8;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = *puVar1 | 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if ((uVar4 & 1) != 0) goto code_r0x080082c8;
code_r0x08008480:
        iVar8 = 2;
        goto code_r0x08008488;
    case 0x80080c0:
        if (*(arg2 + 0xef) != '\0') {
            iVar8 = *(arg2 + 0x98);
            pcVar10 = *(iVar8 + 0xa8);
            if (pcVar10 != NULL) {
                __cfi_slowpath_diag(0x23d049188c4e6e9c,pcVar10,0x8000d50);
                (*pcVar10)(uVar9,0,1);
                pcVar10 = *(*(arg2 + 0x98) + 0xa8);
                __cfi_slowpath_diag(0x23d049188c4e6e9c,pcVar10,0x8000d70);
                (*pcVar10)(uVar9,1,1);
                msleep(0x32);
                iVar8 = *(arg2 + 0x98);
            }
            pcVar10 = *(iVar8 + 0x48);
            if (pcVar10 != NULL) {
                __cfi_slowpath_diag(0x1be676a8fa3b6db7,pcVar10,0x8000d90);
                (*pcVar10)(uVar9,1);
                iVar8 = *(arg2 + 0x98);
            }
            pcVar10 = *(iVar8 + 0xa8);
            if (pcVar10 != NULL) {
                __cfi_slowpath_diag(0x23d049188c4e6e9c,pcVar10,0x8000db0);
                (*pcVar10)(uVar9,0,0);
            }
        }
        if (*(*(arg2 + 0x98) + 0xd0) == 0) {
            *(arg2 + 0xf1) = 1;
            sym.wcd_enable_curr_micbias(arg2,1);
        }
        else {
            iVar8 = *(arg2 + 0x3a8);
            if (*(iVar8 + 0xb8) != 0) {
                uVar6 = snd_soc_component_read(*(arg2 + 0xf8));
                iVar8 = *(arg2 + 0x3a8);
                if ((uVar6 & *(iVar8 + 0xba)) >> (*(iVar8 + 0xbb) & 0x1f) == 0) goto code_r0x0800832c;
            }
            if (*(iVar8 + 0x168) != 0) {
                snd_soc_component_update_bits(*(arg2 + 0xf8),*(iVar8 + 0x168),*(iVar8 + 0x16a),0);
            }
        }
code_r0x0800832c:
        pcVar10 = *(*(arg2 + 0x98) + 0x58);
        if (pcVar10 != NULL) {
            __cfi_slowpath_diag(0x7c983a9917f6b4a7,pcVar10,0x8000dd0);
            (*pcVar10)(uVar9,uVar5 & 1,1);
        }
        break;
    case 0x8008210:
        iVar8 = *(arg2 + 0x98);
        if (*(iVar8 + 0xd0) == 0) {
            *(arg2 + 0xf1) = 0;
        }
        if (*(arg2 + 0xef) == '\0') {
            pcVar10 = *(iVar8 + 0x48);
            if (pcVar10 != NULL) {
                __cfi_slowpath_diag(0x1be676a8fa3b6db7,pcVar10,0x8000df0);
                (*pcVar10)(uVar9,0);
                iVar8 = *(arg2 + 0x98);
            }
            pcVar10 = *(iVar8 + 0x40);
            if ((pcVar10 != NULL) && (*(arg2 + 0xef) == '\0')) {
                __cfi_slowpath_diag(0x7e6c99e1529760f9,pcVar10,0x8000e10);
                (*pcVar10)(uVar9);
            }
            if ((*(arg2 + 0x1a8) & 1) == 0) {
                arg2_00 = *(arg2 + 0x1a8) & 2;
            }
            else {
                arg2_00 = 2;
            }
            sym.wcd_enable_curr_micbias(arg2,arg2_00);
            pcVar10 = *(*(arg2 + 0x98) + 0x58);
            if (pcVar10 == NULL) {
                return 0;
            }
            __cfi_slowpath_diag(0x7c983a9917f6b4a7,pcVar10,0x8000e30);
            (*pcVar10)(uVar9,uVar5 & 1,0);
            return 0;
        }
        goto code_r0x080082c8;
    case 0x80082b0:
        puVar1 = arg2 + 0x1a8;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = *puVar1 | 2;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if ((uVar4 & 1) == 0) goto code_r0x08008480;
code_r0x080082c8:
        iVar8 = 1;
code_r0x08008488:
        sym.wcd_enable_curr_micbias(arg2,iVar8);
        break;
    case 0x80082d8:
        pcVar10 = *(*(arg2 + 0x98) + 0x70);
        __cfi_slowpath_diag(0x23d049188c4e6e9c,pcVar10,0x8000e70);
        iVar8 = *(arg2 + 0x358);
        uVar9 = 1;
code_r0x08008308:
        (*pcVar10)(*(arg2 + 0xf8),*(iVar8 + 0x14),uVar9);
        break;
    case 0x80083bc:
        *(arg2 + 0xf1) = 1;
        _printk(0x80021d5,"wcd_event_notify",1);
        break;
    case 0x80083e4:
        *(arg2 + 0xf1) = 0;
        _printk(0x80021d5,"wcd_event_notify",0);
    }
    return 0;
}


// ===== sym.wcd_mbhc_mech_plug_detect_irq @ 0x08008570 (size 2788) =====

ulong sym.wcd_mbhc_mech_plug_detect_irq(ulong noname_0,int64_t arg1)

{
    int16_t iVar1;
    bool bVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong uVar6;
    code *pcVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8002012,"wcd_mbhc_mech_plug_detect_irq");
    if (arg1 == 0) {
        _printk(0x8002051,"wcd_mbhc_mech_plug_detect_irq");
        return 0;
    }
    pcVar7 = *(*(arg1 + 0x98) + 0x90);
    __cfi_slowpath_diag(0xce1a9c61fa6df8c5,pcVar7,0x8000e90);
    uVar4 = (*pcVar7)(arg1,1);
    if ((uVar4 & 1) == 0) {
        _printk(0x800323e,"wcd_mbhc_mech_plug_detect_irq");
        uVar6 = 0;
        goto code_r0x08008f94;
    }
    iVar8 = *(arg1 + 0xf8);
    _dev_printk(0x800349a,*(iVar8 + 0x18),"%s: enter\n","wcd_mbhc_swch_irq_handler");
    _printk(0x8002ef3,"wcd_mbhc_swch_irq_handler");
    mutex_lock(arg1 + 0x328);
    _printk(0x8001a88,"wcd_mbhc_swch_irq_handler");
    *(arg1 + 0xc2) = 1;
    uVar4 = cancel_delayed_work_sync(arg1);
    if ((uVar4 & 1) != 0) {
        pcVar7 = *(*(arg1 + 0x98) + 0x90);
        __cfi_slowpath_diag(0xce1a9c61fa6df8c5,pcVar7,obj.hphr_pa_lock);
        (*pcVar7)(arg1,0);
        _printk(0x8002806,"wcd_mbhc_swch_irq_handler");
    }
    if (*(*(arg1 + 0x3a8) + 0x28) == 0) {
        bVar2 = true;
    }
    else {
        uVar3 = snd_soc_component_read(*(arg1 + 0xf8));
        iVar5 = *(arg1 + 0x3a8);
        uVar3 = (uVar3 & *(iVar5 + 0x2a)) >> (*(iVar5 + 0x2b) & 0x1f);
        bVar2 = uVar3 != 0;
        if (*(iVar5 + 0x28) != 0) {
            snd_soc_component_update_bits
                      (*(arg1 + 0xf8),*(iVar5 + 0x28),*(iVar5 + 0x2a),(uVar3 == 0) << (*(iVar5 + 0x2b) & 0x1f));
        }
    }
    _printk(0x8002a54,"wcd_mbhc_swch_irq_handler",*(arg1 + 0xc1),bVar2);
    pcVar7 = *(*(arg1 + 1000) + 0x20);
    if (pcVar7 == NULL) {
        _printk(0x80026c6,"wcd_mbhc_swch_irq_handler");
    }
    else {
        if (pcVar7 != sym.__typeid__ZTSFvP8wcd_mbhcP11work_structE_global_addr) {
            __cfi_slowpath_diag(0x12f2e4d279e33bdb,pcVar7,0x8000ed0);
        }
        (*pcVar7)(arg1,arg1 + 0x360);
    }
    iVar5 = *(arg1 + 0x98);
    pcVar7 = *(iVar5 + 0xd8);
    if (pcVar7 != NULL) {
        __cfi_slowpath_diag(0x1be676a8fa3b6db7,pcVar7,0x8000ef0);
        (*pcVar7)(iVar8,1);
        iVar5 = *(arg1 + 0x98);
    }
    pcVar7 = *(iVar5 + 0x98);
    uVar3 = 0;
    if (pcVar7 != NULL) {
        __cfi_slowpath_diag(0x8520705fd5e55046,pcVar7,0x8000f10);
        uVar3 = (*pcVar7)(arg1,1);
    }
    if ((*(arg1 + 0xc1) == '\0' & bVar2) == 1) {
        if ((*(*(arg1 + 0x90) + 0x48) != '\0') || (*(*(arg1 + 0x90) + 0x5c) != '\0')) {
            iVar5 = *(arg1 + 0x98);
            pcVar7 = *(iVar5 + 0x130);
            if ((pcVar7 != NULL) && ((*(iVar5 + 0x138) != 0 && (*(iVar5 + 0x140) != 0)))) {
                if (1 < (pcVar7 + -0x8004410 >> 3 | pcVar7 << 0x3d)) {
                    __cfi_slowpath_diag(0x7bab4b804db7b328,pcVar7,0x8001110);
                }
                uVar4 = (*pcVar7)(arg1);
                if ((uVar4 & 1) != 0) {
                    iVar8 = *(arg1 + 0x3a8);
                    if (*(iVar8 + 8) != 0) {
                        snd_soc_component_update_bits(*(arg1 + 0xf8),*(iVar8 + 8),*(iVar8 + 10),0);
                        iVar8 = *(arg1 + 0x3a8);
                    }
                    if (*(iVar8 + 0x18) != 0) {
                        snd_soc_component_update_bits(*(arg1 + 0xf8),*(iVar8 + 0x18),*(iVar8 + 0x1a),0);
                    }
                    pcVar7 = *(*(arg1 + 0x98) + 0x138);
                    __cfi_slowpath_diag(0x7580eeff27e3c667,pcVar7,0x8001130);
                    (*pcVar7)(arg1,1);
                    iVar8 = *(arg1 + 0x3a8);
                    if (*(iVar8 + 0x28) != 0) {
                        snd_soc_component_update_bits
                                  (*(arg1 + 0xf8),*(iVar8 + 0x28),*(iVar8 + 0x2a),1 << (*(iVar8 + 0x2b) & 0x1f));
                        iVar8 = *(arg1 + 0x3a8);
                    }
                    if (*(iVar8 + 8) != 0) {
                        snd_soc_component_update_bits
                                  (*(arg1 + 0xf8),*(iVar8 + 8),*(iVar8 + 10),1 << (*(iVar8 + 0xb) & 0x1f));
                    }
                    if (*(*(arg1 + 0x90) + 0x21) != '\0') {
                        iVar8 = *(arg1 + 0x3a8);
                        if (*(iVar8 + 0x18) != 0) {
                            snd_soc_component_update_bits
                                      (*(arg1 + 0xf8),*(iVar8 + 0x18),*(iVar8 + 0x1a),1 << (*(iVar8 + 0x1b) & 0x1f));
                        }
                    }
                    goto code_r0x08008f28;
                }
                pcVar7 = *(*(arg1 + 0x98) + 0x138);
                __cfi_slowpath_diag(0x7580eeff27e3c667,pcVar7,0x8001150);
                (*pcVar7)(arg1,0);
                pcVar7 = *(*(arg1 + 0x98) + 0x140);
                __cfi_slowpath_diag(0x7580eeff27e3c667,pcVar7,0x8001170);
                (*pcVar7)(arg1,0);
            }
        }
        pcVar7 = *(*(arg1 + 0x98) + 0xa0);
        __cfi_slowpath_diag(0x1be676a8fa3b6db7,pcVar7,0x8000f30);
        (*pcVar7)(iVar8,1);
        pcVar7 = *(*(arg1 + 0x98) + 0xa8);
        if (pcVar7 != NULL) {
            __cfi_slowpath_diag(0x23d049188c4e6e9c,pcVar7,0x8000f50);
            (*pcVar7)(iVar8,2,1);
        }
        if ((*(*(arg1 + 0x90) + 0x20) == '\0') && (pcVar7 = *(*(arg1 + 0x98) + 0xb0), pcVar7 != NULL)) {
            __cfi_slowpath_diag(0x23d049188c4e6e9c,pcVar7,0x8000f70);
            (*pcVar7)(iVar8,1,1);
        }
        iVar1 = *(*(arg1 + 0x3a8) + 0x1e8);
        if (iVar1 != 0) {
            snd_soc_component_update_bits(*(arg1 + 0xf8),iVar1,*(*(arg1 + 0x3a8) + 0x1ea),0);
        }
        iVar5 = *(arg1 + 0x98);
        pcVar7 = *(iVar5 + 0x30);
        if (pcVar7 != NULL) {
            __cfi_slowpath_diag(0x7e6c99e1529760f9,pcVar7,0x8000f90);
            (*pcVar7)(iVar8);
            iVar5 = *(arg1 + 0x98);
        }
        pcVar7 = *(iVar5 + 0x28);
        if (pcVar7 != NULL) {
            __cfi_slowpath_diag(0x4200096b11704f5,pcVar7,0x8000fb0);
            (*pcVar7)(arg1,1);
        }
        *(arg1 + 0xf0) = 0;
        *(arg1 + 0xc0) = 0;
        *(*(arg1 + 0x90) + 0x70) = 0;
        if (*(arg1 + 1000) != 0) {
            pcVar7 = *(*(arg1 + 1000) + 0x10);
            if (4 < (pcVar7 + -0x8004440 >> 3 | pcVar7 << 0x3d)) {
                __cfi_slowpath_diag(0xc18342d5baef945d,pcVar7,0x8000fd0);
            }
            (*pcVar7)(arg1);
        }
    }
    else if (*(arg1 + 0xc1) == '\0' || bVar2 != false) {
        if (bVar2 == false) {
            pcVar7 = *(*(arg1 + 0x98) + 0x28);
            if (pcVar7 != NULL) {
                __cfi_slowpath_diag(0x4200096b11704f5,pcVar7,0x80010f0);
                (*pcVar7)(arg1,0);
            }
            iVar8 = *(arg1 + 0x3a8);
            if (*(iVar8 + 0xb8) != 0) {
                snd_soc_component_update_bits(*(arg1 + 0xf8),*(iVar8 + 0xb8),*(iVar8 + 0xba),0);
                iVar8 = *(arg1 + 0x3a8);
            }
            if (*(iVar8 + 0x168) != 0) {
                snd_soc_component_update_bits(*(arg1 + 0xf8),*(iVar8 + 0x168),*(iVar8 + 0x16a),0);
            }
            *(arg1 + 0xf5) = 0;
        }
    }
    else {
        iVar5 = *(arg1 + 0x98);
        pcVar7 = *(iVar5 + 0xd0);
        if (pcVar7 != NULL) {
            __cfi_slowpath_diag(0x1d4dfe77ec242b3c,pcVar7,0x8000ff0);
            (*pcVar7)(iVar8,2,3);
            iVar5 = *(arg1 + 0x98);
        }
        pcVar7 = *(iVar5 + 0x28);
        if (pcVar7 != NULL) {
            __cfi_slowpath_diag(0x4200096b11704f5,pcVar7,0x8001010);
            (*pcVar7)(arg1,0);
        }
        iVar5 = *(arg1 + 0x3a8);
        if (*(iVar5 + 0xb8) != 0) {
            snd_soc_component_update_bits(*(arg1 + 0xf8),*(iVar5 + 0xb8),*(iVar5 + 0xba),0);
            iVar5 = *(arg1 + 0x3a8);
        }
        if (*(iVar5 + 0x168) != 0) {
            snd_soc_component_update_bits(*(arg1 + 0xf8),*(iVar5 + 0x168),*(iVar5 + 0x16a),0);
        }
        iVar5 = *(arg1 + 0x98);
        pcVar7 = *(iVar5 + 0xa8);
        if (pcVar7 != NULL) {
            __cfi_slowpath_diag(0x23d049188c4e6e9c,pcVar7,0x8001030);
            (*pcVar7)(iVar8,2,0);
            iVar5 = *(arg1 + 0x98);
        }
        pcVar7 = *(iVar5 + 0x58);
        if (pcVar7 != NULL) {
            __cfi_slowpath_diag(0x7c983a9917f6b4a7,pcVar7,0x8001050);
            (*pcVar7)(iVar8,uVar3 & 1,0);
        }
        *(arg1 + 0xf0) = 0;
        *(arg1 + 0xc0) = 0;
        uVar3 = *(arg1 + 0xc1) - 1;
        if (uVar3 < 4) {
            iVar5 = 1;
            uVar6 = 0x15;
    //switch table (4 cases) at 0x80035a4
            switch(*(uVar3 + 0x80035a4) * 4 + 0x8008b08) {
            case 0x8008b0c:
                pcVar7 = *(*(arg1 + 0x98) + 0xb0);
                if (pcVar7 != NULL) {
                    __cfi_slowpath_diag(0x23d049188c4e6e9c,pcVar7,0x8001070);
                    (*pcVar7)(iVar8,1,0);
                }
                iVar8 = *(arg1 + 0x3a8);
                if (*(iVar8 + 0x1e8) != 0) {
                    snd_soc_component_update_bits
                              (*(arg1 + 0xf8),*(iVar8 + 0x1e8),*(iVar8 + 0x1ea),1 << (*(iVar8 + 0x1eb) & 0x1f));
                }
                iVar5 = 3;
                uVar6 = 0x14;
                break;
            case 0x8008b90:
                goto code_r0x08008b90;
            case 0x8008ba0:
                if (*(arg1 + 0x3d4) == 1) {
                    iVar1 = *(*(arg1 + 0x3a8) + 0x308);
                    if (iVar1 != 0) {
                        snd_soc_component_update_bits(*(arg1 + 0xf8),iVar1,*(*(arg1 + 0x3a8) + 0x30a),0);
                    }
                }
                iVar5 = 4;
                uVar6 = 0x17;
                *(arg1 + 0xf2) = 0;
            }
        }
        else {
            _printk(0x8002a85,"wcd_mbhc_swch_irq_handler");
code_r0x08008b90:
            iVar5 = 1;
            uVar6 = 0x3e;
        }
        sym.wcd_mbhc_hs_elec_irq(arg1,1,0);
        sym.wcd_mbhc_hs_elec_irq(arg1,0,0);
        iVar8 = *(arg1 + 0x3a8);
        if (*(iVar8 + 0x48) != 0) {
            snd_soc_component_update_bits
                      (*(arg1 + 0xf8),*(iVar8 + 0x48),*(iVar8 + 0x4a),1 << (*(iVar8 + 0x4b) & 0x1f));
            iVar8 = *(arg1 + 0x3a8);
        }
        if (*(iVar8 + 0xa8) != 0) {
            snd_soc_component_update_bits(*(arg1 + 0xf8),*(iVar8 + 0xa8),*(iVar8 + 0xaa),0);
        }
        *(arg1 + 0xf5) = 0;
        sym.wcd_mbhc_report_plug(arg1,0,iVar5);
        extcon_set_state_sync(*(arg1 + 0x418),uVar6,0);
        if (*(*(arg1 + 0x90) + 0x58) != 0) {
            iVar1 = *(*(arg1 + 0x3a8) + 8);
            if (iVar1 != 0) {
                snd_soc_component_update_bits(*(arg1 + 0xf8),iVar1,*(*(arg1 + 0x3a8) + 10),0);
            }
            pcVar7 = *(*(arg1 + 0x98) + 0x80);
            if (pcVar7 != NULL) {
                __cfi_slowpath_diag(0x1be676a8fa3b6db7,pcVar7,0x8001090);
                (*pcVar7)(*(arg1 + 0xf8),0);
            }
        }
        if ((*(*(arg1 + 0x90) + 0x48) != '\0') || (*(*(arg1 + 0x90) + 0x5c) != '\0')) {
            iVar8 = *(arg1 + 0x98);
            pcVar7 = *(iVar8 + 0x138);
            if (pcVar7 != NULL) {
                __cfi_slowpath_diag(0x7580eeff27e3c667,pcVar7,0x80010b0);
                (*pcVar7)(arg1,0);
                iVar8 = *(arg1 + 0x98);
            }
            pcVar7 = *(iVar8 + 0x140);
            if (pcVar7 != NULL) {
                __cfi_slowpath_diag(0x7580eeff27e3c667,pcVar7,0x80010d0);
                (*pcVar7)(arg1,0);
            }
        }
    }
code_r0x08008f28:
    *(arg1 + 0xc2) = 0;
    _printk(0x80018cb,"wcd_mbhc_swch_irq_handler");
    mutex_unlock(arg1 + 0x328);
    _printk(0x8002bbe,"wcd_mbhc_swch_irq_handler");
    pcVar7 = *(*(arg1 + 0x98) + 0x90);
    __cfi_slowpath_diag(0xce1a9c61fa6df8c5,pcVar7,0x8000eb0);
    (*pcVar7)(arg1,0);
    uVar6 = 1;
code_r0x08008f94:
    _printk(0x8001ff3,"wcd_mbhc_mech_plug_detect_irq",uVar6);
    return uVar6;
}


// ===== sym.wcd_mbhc_btn_press_handler @ 0x08009054 (size 788) =====

ulong sym.wcd_mbhc_btn_press_handler(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    uint uVar2;
    uint64_t uVar3;
    ulong uVar4;
    ulong *in_x18;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8002012,"wcd_mbhc_btn_press_handler");
    complete(arg1 + 0x3b0);
    _printk(0x8002ef3,"wcd_mbhc_btn_press_handler");
    mutex_lock(arg1 + 0x328);
    _printk(0x8001a88,"wcd_mbhc_btn_press_handler");
    uVar3 = cancel_delayed_work_sync(arg1);
    if ((uVar3 & 1) != 0) {
        pcVar5 = *(*(arg1 + 0x98) + 0x90);
        __cfi_slowpath_diag(0xce1a9c61fa6df8c5,pcVar5,obj.hphr_pa_lock);
        (*pcVar5)(arg1,0);
    }
    if ((*(*(arg1 + 0x3a8) + 0x1d8) == 0) ||
       (uVar1 = snd_soc_component_read(*(arg1 + 0xf8)),
       (uVar1 & *(*(arg1 + 0x3a8) + 0x1da)) >> (*(*(arg1 + 0x3a8) + 0x1db) & 0x1f) != 0)) {
        uVar4 = 0x8002d44;
    }
    else {
        if (*(arg1 + 0xc0) != '\0') {
            _printk(0x80020cc,"wcd_mbhc_btn_press_handler");
        }
        *(arg1 + 0xc0) = 1;
        uVar1 = jiffies_to_msecs(_delayed_work_timer_fn - *(arg1 + 0x1b0));
        _printk(0x800264b,"wcd_mbhc_btn_press_handler",uVar1);
        if (uVar1 < 0xfa) {
            uVar4 = 0x8002940;
        }
        else if (*(arg1 + 0xc2) == '\0') {
            pcVar5 = *(*(arg1 + 0x98) + 0x88);
            __cfi_slowpath_diag(0xf0d2ea9a64921857,pcVar5,0x80006b0);
            uVar2 = (*pcVar5)(*(arg1 + 0xf8));
    //switch table (6 cases) at 0x80035a8
            switch(uVar2) {
            case 0:
                uVar1 = 0x4000;
                *(arg1 + 0xf0) = 1;
                break;
            case 1:
                uVar1 = 0x2000;
                break;
            case 2:
                uVar1 = 0x1000;
                break;
            case 3:
                uVar1 = 0x800;
                break;
            case 4:
                uVar1 = 0x400;
                break;
            case 5:
                uVar1 = 0x200;
                break;
            default:
                uVar1 = 0;
            }
            if (*(arg1 + 0xc1) == '\x01') {
                *(arg1 + 0x88) = *(arg1 + 0x88) | uVar1;
                pcVar5 = *(*(arg1 + 0x98) + 0x90);
                __cfi_slowpath_diag(0xce1a9c61fa6df8c5,pcVar5,0x8001190);
                (*pcVar5)(arg1,1);
                uVar3 = queue_delayed_work_on(0x20,_snd_soc_jack_report,arg1,100);
                if ((uVar3 & 1) == 0) {
                    __warn_printk("Button pressed twice without release event\n");
    //WARNING: Does not return
                    pcVar5 = SoftwareBreakpoint(0x800,0x8009324);
                    (*pcVar5)();
                }
                goto code_r0x080091a4;
            }
            uVar4 = 0x8001818;
        }
        else {
            uVar4 = 0x8001f1e;
        }
    }
    _printk(uVar4,"wcd_mbhc_btn_press_handler");
code_r0x080091a4:
    _printk(0x8002bbe,"wcd_mbhc_btn_press_handler");
    _printk(0x80018cb,"wcd_mbhc_btn_press_handler");
    mutex_unlock(arg1 + 0x328);
    return 1;
}


// ===== sym.wcd_mbhc_release_handler @ 0x08009368 (size 548) =====

ulong sym.wcd_mbhc_release_handler(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    ulong uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8002012,"wcd_mbhc_release_handler");
    _printk(0x8002ef3,"wcd_mbhc_release_handler");
    mutex_lock(arg1 + 0x328);
    _printk(0x8001a88,"wcd_mbhc_release_handler");
    if (*(*(arg1 + 0x3a8) + 0x1d8) == 0) {
code_r0x08009408:
        uVar2 = 0x8002d44;
    }
    else {
        uVar1 = snd_soc_component_read(*(arg1 + 0xf8));
        if ((uVar1 & *(*(arg1 + 0x3a8) + 0x1da)) >> (*(*(arg1 + 0x3a8) + 0x1db) & 0x1f) != 0) goto code_r0x08009408;
        if (*(arg1 + 0xc0) != '\0') {
            *(arg1 + 0xc0) = 0;
            if ((*(arg1 + 0x3d4) == 0) && (*(arg1 + 0xc1) == '\x02')) {
                sym.wcd_mbhc_find_plug_and_report(arg1,1);
                goto code_r0x0800941c;
            }
            if ((*(arg1 + 0x89) & 0x7e) == 0) goto code_r0x0800941c;
            uVar3 = cancel_delayed_work_sync(arg1);
            if ((uVar3 & 1) == 0) {
                _printk(0x80030ec,"wcd_mbhc_release_handler");
                uVar1 = *(arg1 + 0x88);
code_r0x0800955c:
                sym.wcd_mbhc_jack_report(arg1,arg1 + 0x278,0,uVar1);
            }
            else {
                pcVar4 = *(*(arg1 + 0x98) + 0x90);
                __cfi_slowpath_diag(0xce1a9c61fa6df8c5,pcVar4,obj.hphr_pa_lock);
                (*pcVar4)(arg1,0);
                if (*(arg1 + 0xc2) == '\0') {
                    _printk(0x8001847,"wcd_mbhc_release_handler",*(arg1 + 0x88));
                    sym.wcd_mbhc_jack_report(arg1,arg1 + 0x278,*(arg1 + 0x88),*(arg1 + 0x88));
                    _printk(0x80034e0,"wcd_mbhc_release_handler",*(arg1 + 0x88));
                    uVar1 = *(arg1 + 0x88);
                    goto code_r0x0800955c;
                }
                _printk(0x8002661,"wcd_mbhc_release_handler");
            }
            *(arg1 + 0x88) = *(arg1 + 0x88) & 0xffff81ff;
            goto code_r0x0800941c;
        }
        uVar2 = 0x8002d6b;
    }
    _printk(uVar2,"wcd_mbhc_release_handler");
code_r0x0800941c:
    _printk(0x8002bbe,"wcd_mbhc_release_handler");
    _printk(0x80018cb,"wcd_mbhc_release_handler");
    mutex_unlock(arg1 + 0x328);
    return 1;
}


// ===== sym.wcd_mbhc_hphl_ocp_irq @ 0x0800958c (size 440) =====

ulong sym.wcd_mbhc_hphl_ocp_irq(ulong noname_0,int64_t arg1)

{
    int16_t iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    code *pcVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8001771,"wcd_mbhc_hphl_ocp_irq");
    if (arg1 == 0) {
        _printk(0x800225d,"wcd_mbhc_hphl_ocp_irq");
    }
    else {
        pcVar4 = *(*(arg1 + 0x98) + 0x110);
        if (pcVar4 != NULL) {
            if (1 < (pcVar4 + -0x8004410 >> 3 | pcVar4 << 0x3d)) {
                __cfi_slowpath_diag(0x7bab4b804db7b328,pcVar4,0x80011d0);
            }
            uVar3 = (*pcVar4)(arg1);
            if ((uVar3 & 1) != 0) {
                if (*(*(arg1 + 0x3a8) + 0x288) == 0) {
                    return 1;
                }
                uVar2 = snd_soc_component_read(*(arg1 + 0xf8));
                if ((uVar2 & *(*(arg1 + 0x3a8) + 0x28a)) >> (*(*(arg1 + 0x3a8) + 0x28b) & 0x1f) == 0) {
                    return 1;
                }
                *(arg1 + 0x3e0) = 1;
                return 1;
            }
        }
        if (*(arg1 + 0xa4) < 0x14) {
            *(arg1 + 0xa4) = *(arg1 + 0xa4) + 1;
            _printk(0x8002768,"wcd_mbhc_hphl_ocp_irq");
            iVar1 = *(*(arg1 + 0x3a8) + 0x148);
            if (iVar1 != 0) {
                snd_soc_component_update_bits(*(arg1 + 0xf8),iVar1,*(*(arg1 + 0x3a8) + 0x14a),0);
                iVar5 = *(arg1 + 0x3a8);
                if (*(iVar5 + 0x148) != 0) {
                    snd_soc_component_update_bits
                              (*(arg1 + 0xf8),*(iVar5 + 0x148),*(iVar5 + 0x14a),1 << (*(iVar5 + 0x14b) & 0x1f));
                }
            }
        }
        else {
            pcVar4 = *(*(arg1 + 0x98) + 0x70);
            __cfi_slowpath_diag(0x23d049188c4e6e9c,pcVar4,0x80011f0);
            (*pcVar4)(*(arg1 + 0xf8),*(*(arg1 + 0x358) + 0x14),0);
            sym.wcd_mbhc_jack_report(arg1,arg1 + 0x1c8,*(arg1 + 0xa0),0xf);
        }
    }
    return 1;
}


// ===== sym.wcd_mbhc_hphr_ocp_irq @ 0x08009744 (size 400) =====

ulong sym.wcd_mbhc_hphr_ocp_irq(ulong noname_0,int64_t arg1)

{
    int16_t iVar1;
    uint64_t uVar2;
    code *pcVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8002da2,"wcd_mbhc_hphr_ocp_irq");
    if (arg1 == 0) {
        _printk(0x8002f90,"wcd_mbhc_hphr_ocp_irq");
    }
    else if (*(arg1 + 0x3e0) == '\0') {
        pcVar3 = *(*(arg1 + 0x98) + 0x110);
        if (pcVar3 != NULL) {
            if (1 < (pcVar3 + -0x8004410 >> 3 | pcVar3 << 0x3d)) {
                __cfi_slowpath_diag(0x7bab4b804db7b328,pcVar3,0x8001210);
            }
            uVar2 = (*pcVar3)(arg1);
            if ((uVar2 & 1) != 0) {
                return 1;
            }
        }
        if (*(arg1 + 0xa5) < 0x14) {
            *(arg1 + 0xa5) = *(arg1 + 0xa5) + 1;
            _printk(0x80023d1,"wcd_mbhc_hphr_ocp_irq");
            iVar1 = *(*(arg1 + 0x3a8) + 0x148);
            if (iVar1 != 0) {
                snd_soc_component_update_bits(*(arg1 + 0xf8),iVar1,*(*(arg1 + 0x3a8) + 0x14a),0);
                iVar4 = *(arg1 + 0x3a8);
                if (*(iVar4 + 0x148) != 0) {
                    snd_soc_component_update_bits
                              (*(arg1 + 0xf8),*(iVar4 + 0x148),*(iVar4 + 0x14a),1 << (*(iVar4 + 0x14b) & 0x1f));
                }
            }
        }
        else {
            pcVar3 = *(*(arg1 + 0x98) + 0x70);
            __cfi_slowpath_diag(0x23d049188c4e6e9c,pcVar3,0x8001230);
            (*pcVar3)(*(arg1 + 0xf8),*(*(arg1 + 0x358) + 0x18),0);
            sym.wcd_mbhc_jack_report(arg1,arg1 + 0x1c8,*(arg1 + 0xa0),0xf);
        }
    }
    else {
        *(arg1 + 0x3e0) = 0;
    }
    return 1;
}


// ===== sym.wcd_mbhc_deinit @ 0x080098d4 (size 716) =====

void sym.wcd_mbhc_deinit(int64_t arg1)

{
    ulong *in_x18;
    ulong uVar1;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(arg1 + 0xf8);
    pcVar2 = *(*(arg1 + 0x98) + 0x78);
    __cfi_slowpath_diag(0x374739a980183585,pcVar2,0x8000970);
    (*pcVar2)(uVar1,**(arg1 + 0x358),arg1);
    pcVar2 = *(*(arg1 + 0x98) + 0x78);
    __cfi_slowpath_diag(0x374739a980183585,pcVar2,0x8000990);
    (*pcVar2)(uVar1,*(*(arg1 + 0x358) + 4),arg1);
    pcVar2 = *(*(arg1 + 0x98) + 0x78);
    __cfi_slowpath_diag(0x374739a980183585,pcVar2,0x80009b0);
    (*pcVar2)(uVar1,*(*(arg1 + 0x358) + 8),arg1);
    pcVar2 = *(*(arg1 + 0x98) + 0x78);
    __cfi_slowpath_diag(0x374739a980183585,pcVar2,0x80009d0);
    (*pcVar2)(uVar1,*(*(arg1 + 0x358) + 0xc),arg1);
    pcVar2 = *(*(arg1 + 0x98) + 0x78);
    __cfi_slowpath_diag(0x374739a980183585,pcVar2,0x80009f0);
    (*pcVar2)(uVar1,*(*(arg1 + 0x358) + 0x10),arg1);
    pcVar2 = *(*(arg1 + 0x98) + 0x78);
    __cfi_slowpath_diag(0x374739a980183585,pcVar2,0x8000a10);
    (*pcVar2)(uVar1,*(*(arg1 + 0x358) + 0x14),arg1);
    pcVar2 = *(*(arg1 + 0x98) + 0x78);
    __cfi_slowpath_diag(0x374739a980183585,pcVar2,0x8000a30);
    (*pcVar2)(uVar1,*(*(arg1 + 0x358) + 0x18),arg1);
    if ((*(arg1 + 0x98) != 0) && (pcVar2 = *(*(arg1 + 0x98) + 0x60), pcVar2 != NULL)) {
        __cfi_slowpath_diag(0xde385033fff74d90,pcVar2,0x8000a50);
        (*pcVar2)(arg1,arg1 + 0x390,0);
    }
    if (*(*(arg1 + 1000) + 0x20) != 0) {
        _printk(0x8002ef3,"wcd_mbhc_deinit");
        mutex_lock(arg1 + 0x328);
        _printk(0x8001a88,"wcd_mbhc_deinit");
        pcVar2 = *(*(arg1 + 1000) + 0x20);
        if (pcVar2 != sym.__typeid__ZTSFvP8wcd_mbhcP11work_structE_global_addr) {
            __cfi_slowpath_diag(0x12f2e4d279e33bdb,pcVar2,0x8000a70);
        }
        (*pcVar2)(arg1,arg1 + 0x360);
        _printk(0x80018cb,"wcd_mbhc_deinit");
        mutex_unlock(arg1 + 0x328);
    }
    return;
}


// ===== sym.headset_status_read @ 0x08009ba0 (size 244) =====

uint64_t sym.headset_status_read(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    uint64_t uVar3;
    bool bVar4;
    ulong uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    uint64_t uVar8;
    int64_t arg2_00;
    uint64_t uVar9;
    uint64_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong unaff_x30;
    uchar auVar11 [16];
    uint uStack_cc;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
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
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    sprintf(&uStack_78,"0x%04x 0x%04x 0x%04x 0x%04x 0x%04x 0x%04x\n",_obj.headset_status & 0xffff,*0x8000546,
            *0x8000548,*0x800054a,*0x800054c,*0x800054e);
    _printk(0x8002b30,"headset_status_read",_segment.ehdr,&uStack_78);
    _segment.ehdr = _segment.ehdr + 1;
    uVar5 = strlen(&uStack_78);
    uVar6 = simple_read_from_buffer(arg1,arg2,arg3,&uStack_78,uVar5);
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_38) {
        return uVar6;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.headset_status_write;
    pcStack_b8 = sym.headset_status_write;
    iVar7 = sp_el0;
    iStack_c8 = *(iVar7 + 0x5e0);
    uVar6 = arg3;
    if (2 < arg3) {
        uVar6 = 3;
    }
    uStack_cc = 0;
    puStack_c0 = &stack0xffffffffffffffd0;
    _printk(0x8002b30,"headset_status_write",_segment.ehdr,obj.headset_status);
    _segment.ehdr = _segment.ehdr + 1;
    __check_object_size(&uStack_cc,uVar6,0);
    iVar7 = sym._copy_from_user(&uStack_cc,arg2_00,uVar6);
    if (iVar7 == 0) {
        if (uStack_cc == '0') {
            *0x800054c = 0;
            _obj.headset_status = 0;
        }
    }
    else {
        arg3 = 0xfffffffffffffff2;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_c8) {
        return arg3;
    }
    auVar11 = __stack_chk_fail();
    uVar9 = auVar11._8_8_;
    *extraout_x18_00 = sym._copy_from_user;
    puVar2 = sp_el0;
    uVar3 = (uVar9 << 8) >> 8;
    if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar10 = uVar9, (*puVar2 >> 0x1a & 1) != 0)) {
        uVar10 = uVar9 & uVar3;
    }
    bVar4 = CARRY8(uVar10,uVar6);
    uVar10 = uVar10 + uVar6;
    uVar1 = 0;
    if (!bVar4 || uVar10 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar10 = 0xffffffffffffffff;
    }
    uVar8 = uVar6;
    if (!CARRY8(uVar10,~uVar1) && !CARRY8(uVar10 + ~uVar1,bVar4) || uVar10 == uVar1 + !bVar4) {
        if ((___cfi_slowpath_diag >> 0x18 & 1) == 0) {
            uVar10 = daif;
            if ((uVar10 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar2[1];
            InstructionSynchronizationBarrier();
            daif = uVar10;
        }
        if ((uVar9 & uVar3 & 0xffffff8000000000) != 0) {
            uVar9 = 0;
        }
        uVar8 = __arch_copy_from_user(auVar11._0_8_,uVar9,uVar6);
        if ((___cfi_slowpath_diag >> 0x18 & 1) == 0) {
            uVar3 = daif;
            if ((uVar3 & 0x80) == 0) {
                uVar9 = daif;
                daif = uVar9 | 0xc0;
            }
            uVar9 = ttbr1_el1;
            ttbr0_el1 = (uVar9 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar9 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar3;
        }
    }
    if (uVar8 != 0) {
        memset(auVar11._0_8_ + (uVar6 - uVar8),0,uVar8);
    }
    return uVar8;
}


// ===== sym.headset_status_write @ 0x08009c94 (size 244) =====

uint64_t sym.headset_status_write(ulong noname_0,int64_t arg1,uint32_t arg2)

{
    uint64_t uVar1;
    ulong *puVar2;
    bool bVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t arg3;
    uint64_t uVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    uint uStack_4c;
    int64_t iStack_48;
    
    uVar8 = arg2;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    arg3 = uVar8;
    if (2 < uVar8) {
        arg3 = 3;
    }
    uStack_4c = 0;
    _printk(0x8002b30,"headset_status_write",_segment.ehdr,obj.headset_status);
    _segment.ehdr = _segment.ehdr + 1;
    __check_object_size(&uStack_4c,arg3,0);
    iVar4 = sym._copy_from_user(&uStack_4c,arg1,arg3);
    if (iVar4 == 0) {
        if (uStack_4c == '0') {
            *0x800054c = 0;
            _obj.headset_status = 0;
        }
    }
    else {
        uVar8 = 0xfffffffffffffff2;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return uVar8;
    }
    auVar9 = __stack_chk_fail();
    uVar6 = auVar9._8_8_;
    *extraout_x18 = sym._copy_from_user;
    puVar2 = sp_el0;
    uVar8 = (uVar6 << 8) >> 8;
    if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar7 = uVar6, (*puVar2 >> 0x1a & 1) != 0)) {
        uVar7 = uVar6 & uVar8;
    }
    bVar3 = CARRY8(uVar7,arg3);
    uVar7 = uVar7 + arg3;
    uVar1 = 0;
    if (!bVar3 || uVar7 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar3) {
        uVar7 = 0xffffffffffffffff;
    }
    uVar5 = arg3;
    if (!CARRY8(uVar7,~uVar1) && !CARRY8(uVar7 + ~uVar1,bVar3) || uVar7 == uVar1 + !bVar3) {
        if ((___cfi_slowpath_diag >> 0x18 & 1) == 0) {
            uVar7 = daif;
            if ((uVar7 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar2[1];
            InstructionSynchronizationBarrier();
            daif = uVar7;
        }
        if ((uVar6 & uVar8 & 0xffffff8000000000) != 0) {
            uVar6 = 0;
        }
        uVar5 = __arch_copy_from_user(auVar9._0_8_,uVar6,arg3);
        if ((___cfi_slowpath_diag >> 0x18 & 1) == 0) {
            uVar8 = daif;
            if ((uVar8 & 0x80) == 0) {
                uVar6 = daif;
                daif = uVar6 | 0xc0;
            }
            uVar6 = ttbr1_el1;
            ttbr0_el1 = (uVar6 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar6 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar8;
        }
    }
    if (uVar5 != 0) {
        memset(auVar9._0_8_ + (arg3 - uVar5),0,uVar5);
    }
    return uVar5;
}


// ===== sym._copy_from_user @ 0x08009d88 (size 376) =====

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
        if ((___cfi_slowpath_diag >> 0x18 & 1) == 0) {
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
        if ((___cfi_slowpath_diag >> 0x18 & 1) == 0) {
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


// ===== sym.__cfi_check_fail @ 0x08009f3c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08009f80

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
    //switch table (4 cases) at 0x80035c0
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8009f94);
    (*pcVar1)();
}


// ===== sym.wcd_mbhc_adc_init @ 0x08009f94 (size 104) =====

void sym.wcd_mbhc_adc_init(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x8003517,"wcd_mbhc_adc_init");
    }
    else {
        *(arg1 + 0x360) = 0xfffffffe0;
        *(arg1 + 1000) = reloc.wcd_mbhc_adc_hs_ins_irq.63f800c968f307bf87ec7421f61e82fa.cfi_jt;
        *(arg1 + 0x368) = arg1 + 0x368;
        *(arg1 + 0x370) = arg1 + 0x368;
        *(arg1 + 0x378) = sym.wcd_correct_swch_plug.63f800c968f307bf87ec7421f61e82fa.cfi_jt;
    }
    return;
}


// ===== sym.wcd_correct_swch_plug @ 0x08009ffc (size 6288) =====

void sym.wcd_correct_swch_plug(int64_t arg1)

{
    char *pcVar1;
    uint32_t uVar2;
    bool bVar3;
    bool bVar4;
    bool bVar5;
    uint32_t uVar6;
    int iVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    int iVar12;
    uint32_t uVar13;
    uint64_t uVar14;
    ulong uVar15;
    int16_t iVar16;
    int64_t *piVar17;
    int64_t iVar18;
    bool bVar19;
    ulong *in_x18;
    int64_t arg1_00;
    uint32_t *puVar20;
    code *pcVar21;
    int64_t *piVar22;
    int64_t *piVar23;
    ulong *puVar24;
    uint32_t *puVar25;
    int64_t iVar26;
    ulong uVar27;
    ulong unaff_x30;
    uint32_t uStack_a4;
    int iStack_a0;
    uint32_t uStack_98;
    int iStack_94;
    
    *in_x18 = unaff_x30;
    _printk(0x8002012,"wcd_correct_swch_plug");
    puVar24 = arg1 + -0x268;
    arg1_00 = arg1 + -0x360;
    piVar17 = arg1 + -0x2d0;
    puVar20 = arg1 + -0x298;
    puVar25 = arg1 + -0x290;
    uVar27 = *puVar24;
    iVar26 = arg1 + -0x38;
    iStack_a0 = sym.wcd_mbhc_get_micbias(arg1_00);
    uVar6 = sym.wcd_mbhc_get_micbias(arg1_00);
    uVar13 = *puVar20;
    if (uVar13 == 0) {
        uVar13 = (uVar6 * 0x6a4) / 0x708;
    }
    else {
        uVar11 = *puVar25;
        if (uVar11 != uVar6) {
            uVar6 = uVar13 * uVar6;
            uVar13 = 0;
            if (uVar11 != 0) {
                uVar13 = uVar6 / uVar11;
            }
        }
    }
    _printk(0x8002ef3,"wcd_correct_swch_plug");
    mutex_lock(iVar26);
    _printk(0x8001a88,"wcd_correct_swch_plug");
    sym.wcd_mbhc_hs_elec_irq(arg1_00,0,0);
    _printk(0x80018cb,"wcd_correct_swch_plug");
    mutex_unlock(iVar26);
    uVar6 = 0;
    do {
        iVar7 = sym.wcd_check_cross_conn(arg1_00);
        uVar6 = uVar6 + 1;
    } while (uVar6 < *(arg1 + -0x28c));
    if (0 < iVar7) {
        pcVar21 = *(*piVar17 + 0x18);
        if (pcVar21 != NULL) {
            __cfi_slowpath_diag(0x75ef21adc6f2463b,pcVar21,0x80013b0);
            (*pcVar21)(uVar27,1);
            msleep(10);
            _printk(0x8003180,"wcd_correct_swch_plug");
            uVar27 = *puVar24;
            iStack_a0 = sym.wcd_mbhc_get_micbias(arg1_00);
            uVar6 = sym.wcd_mbhc_get_micbias(arg1_00);
            uVar13 = *puVar20;
            if (uVar13 == 0) {
                uVar13 = (uVar6 * 0x6a4) / 0x708;
            }
            else {
                uVar11 = *puVar25;
                if (uVar11 != uVar6) {
                    uVar6 = uVar13 * uVar6;
                    uVar13 = 0;
                    if (uVar11 != 0) {
                        uVar13 = uVar6 / uVar11;
                    }
                }
            }
            _printk(0x8002ef3,"wcd_correct_swch_plug");
            mutex_lock(iVar26);
            _printk(0x8001a88,"wcd_correct_swch_plug");
            sym.wcd_mbhc_hs_elec_irq(arg1_00,0,0);
            _printk(0x80018cb,"wcd_correct_swch_plug");
            mutex_unlock(iVar26);
            uVar6 = 0;
            do {
                iVar7 = sym.wcd_check_cross_conn(arg1_00);
                uVar6 = uVar6 + 1;
            } while (uVar6 < *(arg1 + -0x28c));
            if (iVar7 < 1) goto code_r0x0800a290;
        }
        uVar6 = 4;
        _printk(0x80022c1,"wcd_correct_swch_plug",4);
        iStack_94 = 0;
        goto code_r0x0800a6dc;
    }
code_r0x0800a290:
    _printk(0x8002012,"wcd_measure_adc_continuous");
    iVar18 = *(arg1 + 0x48);
    if (*(iVar18 + 0xa8) == 0) {
        iVar16 = *(iVar18 + 0x2e8);
        if (iVar16 != 0) goto code_r0x0800a308;
code_r0x0800a2b8:
        if (*(iVar18 + 0x298) != 0) goto code_r0x0800a32c;
code_r0x0800a2c0:
        uVar6 = 0xea;
        iVar16 = *(iVar18 + 0xb8);
joined_r0x0800a354:
        if (iVar16 == 0) goto code_r0x0800a358;
code_r0x0800a2cc:
        snd_soc_component_update_bits(*puVar24,iVar16,*(iVar18 + 0xba),0);
        iVar18 = *(arg1 + 0x48);
        iVar16 = *(iVar18 + 0x218);
    }
    else {
        snd_soc_component_update_bits(*puVar24,*(iVar18 + 0xa8),*(iVar18 + 0xaa),0);
        iVar18 = *(arg1 + 0x48);
        iVar16 = *(iVar18 + 0x2e8);
        if (iVar16 == 0) goto code_r0x0800a2b8;
code_r0x0800a308:
        snd_soc_component_update_bits(*puVar24,iVar16,*(iVar18 + 0x2ea),1 << (*(iVar18 + 0x2eb) & 0x1f));
        iVar18 = *(arg1 + 0x48);
        if (*(iVar18 + 0x298) == 0) goto code_r0x0800a2c0;
code_r0x0800a32c:
        uVar6 = snd_soc_component_read(*puVar24);
        iVar18 = *(arg1 + 0x48);
        uVar6 = (uVar6 & *(iVar18 + 0x29a)) >> (*(iVar18 + 0x29b) & 0x1f);
        if (*(iVar18 + 0x298) == 0) {
            iVar16 = *(iVar18 + 0xb8);
            goto joined_r0x0800a354;
        }
        snd_soc_component_update_bits(*puVar24,*(iVar18 + 0x298),*(iVar18 + 0x29a),0);
        iVar18 = *(arg1 + 0x48);
        iVar16 = *(iVar18 + 0xb8);
        if (iVar16 != 0) goto code_r0x0800a2cc;
code_r0x0800a358:
        iVar16 = *(iVar18 + 0x218);
    }
    if (iVar16 != 0) {
        snd_soc_component_update_bits(*puVar24,iVar16,*(iVar18 + 0x21a),1 << (*(iVar18 + 0x21b) & 0x1f));
    }
    pcVar21 = *(*(arg1 + -0x2c8) + 0x10);
    if (pcVar21 != NULL) {
        __cfi_slowpath_diag(0x7580eeff27e3c667,pcVar21,0x8001590);
        (*pcVar21)(arg1_00,1);
    }
    iVar18 = *(arg1 + 0x48);
    if (*(iVar18 + 0xb8) != 0) {
        snd_soc_component_update_bits(*puVar24,*(iVar18 + 0xb8),*(iVar18 + 0xba),1 << (*(iVar18 + 0xbb) & 0x1f));
    }
    pcVar21 = *(*(arg1 + -0x2c8) + 0x10);
    if (pcVar21 != NULL) {
        __cfi_slowpath_diag(0x7580eeff27e3c667,pcVar21,0x80015b0);
        (*pcVar21)(arg1_00,0);
    }
    iVar18 = *(arg1 + 0x48);
    if (*(iVar18 + 0x298) != 0) {
        snd_soc_component_update_bits(*puVar24,*(iVar18 + 0x298),*(iVar18 + 0x29a),1 << (*(iVar18 + 0x29b) & 0x1f));
    }
    usleep_range_state(3000,0xc1c,2);
    if (*(*(arg1 + 0x48) + 0x2c8) != 0) {
        snd_soc_component_read(*puVar24);
    }
    usleep_range_state(3000,0xc1c,2);
    if (*(*(arg1 + 0x48) + 0x2c8) != 0) {
        snd_soc_component_read(*puVar24);
    }
    usleep_range_state(3000,0xc1c,2);
    iVar18 = *(arg1 + 0x48);
    if (*(iVar18 + 0x2c8) == 0) {
        uVar11 = 0xea;
        iVar16 = *(iVar18 + 0x298);
    }
    else {
        uVar11 = snd_soc_component_read(*puVar24);
        iVar18 = *(arg1 + 0x48);
        uVar11 = (uVar11 & *(iVar18 + 0x2ca)) >> (*(iVar18 + 0x2cb) & 0x1f);
        iVar16 = *(iVar18 + 0x298);
    }
    if (iVar16 != 0) {
        snd_soc_component_update_bits(*puVar24,iVar16,*(iVar18 + 0x29a),uVar6 << (*(iVar18 + 0x29b) & 0x1f));
    }
    iVar7 = sym.wcd_mbhc_get_micbias(arg1_00);
    uVar9 = (uVar11 * iVar7 * 0x7d) / 18000;
    _printk(0x8002313,"wcd_measure_adc_continuous",uVar11,uVar9);
    uVar11 = sym.wcd_mbhc_get_micbias(arg1_00);
    uVar6 = *puVar20;
    if (uVar6 == 0) {
        uVar6 = (uVar11 * 0x6a4) / 0x708;
    }
    else {
        uVar8 = *puVar25;
        if (uVar8 != uVar11) {
            uVar11 = uVar6 * uVar11;
            uVar6 = 0;
            if (uVar8 != 0) {
                uVar6 = uVar11 / uVar8;
            }
        }
    }
    uVar8 = sym.wcd_mbhc_get_micbias(arg1_00);
    uVar11 = *(arg1 + -0x294);
    if (uVar11 == 0) {
        uVar11 = (uVar8 * 0x4b) / 0x708;
    }
    else {
        uVar10 = *puVar25;
        if (uVar10 != uVar8) {
            uVar8 = uVar11 * uVar8;
            uVar11 = 0;
            if (uVar10 != 0) {
                uVar11 = uVar8 / uVar10;
            }
        }
    }
    uVar8 = 3;
    if (uVar9 <= uVar6) {
        uVar8 = 1;
    }
    uVar6 = 2;
    if (uVar11 <= uVar9) {
        uVar6 = uVar8;
    }
    _printk(0x8002ca1,"wcd_mbhc_get_plug_from_adc",uVar6);
    if ((uVar6 - 1 < 2) && (uVar14 = sym.wcd_swch_level_remove(arg1_00), (uVar14 & 1) == 0)) {
        _printk(0x8002ef3,"wcd_correct_swch_plug");
        mutex_lock(iVar26);
        _printk(0x8001a88,"wcd_correct_swch_plug");
        sym.wcd_mbhc_find_plug_and_report(arg1_00,uVar6);
        _printk(0x80018cb,"wcd_correct_swch_plug");
        mutex_unlock(iVar26);
        iStack_94 = 1;
    }
    else {
        iStack_94 = 0;
    }
    if ((*(arg1 + -0x29f) | 4) != 5) goto code_r0x0800a6dc;
    iVar18 = *(arg1 + 0x48);
    if (*(iVar18 + 0x2e8) == 0) {
        iVar16 = *(iVar18 + 0x298);
        if (iVar16 != 0) goto code_r0x0800af98;
code_r0x0800a6b8:
        iVar16 = *(iVar18 + 0x2f8);
    }
    else {
        snd_soc_component_update_bits(*puVar24,*(iVar18 + 0x2e8),*(iVar18 + 0x2ea),0);
        iVar18 = *(arg1 + 0x48);
        iVar16 = *(iVar18 + 0x298);
        if (iVar16 == 0) goto code_r0x0800a6b8;
code_r0x0800af98:
        snd_soc_component_update_bits(*puVar24,iVar16,*(iVar18 + 0x29a),0);
        iVar18 = *(arg1 + 0x48);
        iVar16 = *(iVar18 + 0x2f8);
    }
    if (iVar16 != 0) {
        snd_soc_component_update_bits(*puVar24,iVar16,*(iVar18 + 0x2fa),1 << (*(iVar18 + 0x2fb) & 0x1f));
    }
code_r0x0800a6dc:
    piVar22 = arg1 + -0x2c8;
    pcVar21 = *(*piVar22 + 0x20);
    if (pcVar21 != NULL) {
        __cfi_slowpath_diag(0x7580eeff27e3c667,pcVar21,0x80013d0);
        (*pcVar21)(arg1_00,0);
    }
    uStack_98 = 0;
    bVar3 = false;
    uVar11 = 0;
    uStack_a4 = 0;
    bVar19 = false;
    iVar18 = _delayed_work_timer_fn + 0x2ee;
    bVar4 = bVar3;
code_r0x0800a740:
    do {
        uVar9 = uStack_a4;
        bVar5 = bVar19;
code_r0x0800a758:
        bVar19 = bVar5;
        uStack_a4 = uVar9;
        if (iVar18 - _delayed_work_timer_fn < 0) {
            if (!bVar19 && uVar6 == 1) {
                uVar6 = 1;
                _printk(0x80025bd,"wcd_correct_swch_plug",1,*(arg1 + -0x29f));
                if (*(arg1 + -0x29f) != '\x01') {
                    bVar19 = false;
                    goto code_r0x0800b298;
                }
                iVar18 = *(arg1 + 0x48);
                if (*(iVar18 + 0x2e8) == 0) {
                    iVar16 = *(iVar18 + 0x298);
                }
                else {
                    snd_soc_component_update_bits(*puVar24,*(iVar18 + 0x2e8),*(iVar18 + 0x2ea),0);
                    iVar18 = *(arg1 + 0x48);
                    iVar16 = *(iVar18 + 0x298);
                }
                if (iVar16 != 0) {
                    snd_soc_component_update_bits(*puVar24,iVar16,*(iVar18 + 0x29a),0);
                }
                goto code_r0x0800b38c;
            }
            if (uVar6 != 3) goto code_r0x0800b298;
            pcVar21 = *(*piVar22 + 0xf0);
            if (*(*piVar22 + 0xd0) == 0) {
                if (pcVar21 != NULL) goto code_r0x0800b068;
            }
            else {
                if (pcVar21 == NULL) {
                    _printk(0x8002fb2,"wcd_is_special_headset");
                    goto code_r0x0800b26c;
                }
code_r0x0800b068:
                __cfi_slowpath_diag(0x155f259693f926eb,pcVar21,0x8001650);
                iVar7 = (*pcVar21)(*puVar24,2,1);
                if (iVar7 != 0) {
                    _printk(0x8001c8c,"wcd_is_special_headset",1);
                    uVar15 = cdev_tevent_alloc(0x36008a0a);
                    cdev_tevent_add_int(uVar15,"MbhcStage",1);
                    cdev_tevent_write(uVar15);
                    cdev_tevent_destroy(uVar15);
                    goto code_r0x0800b26c;
                }
            }
            uVar6 = sym.wcd_mbhc_get_micbias(arg1_00);
            uVar13 = *puVar20;
            if ((uVar13 == 0) || (uVar11 = *puVar25, uVar11 == 0x708)) {
                uVar13 = (uVar6 * 0x6a4) / 0x708;
            }
            else if (uVar11 != uVar6) {
                uVar6 = uVar13 * uVar6;
                uVar13 = 0;
                if (uVar11 != 0) {
                    uVar13 = uVar6 / uVar11;
                }
            }
            iVar7 = -0x32;
            break;
        }
        if ((*(arg1 + -0x272) != '\0') || (msleep(0x14), *(arg1 + -0x272) != '\0')) {
            _printk(0x8002e83,"wcd_correct_swch_plug",1);
            if (*(arg1 + -0x271) != '\0') {
                pcVar21 = *(*piVar22 + 0xf0);
                __cfi_slowpath_diag(0x155f259693f926eb,pcVar21,0x80015d0);
                (*pcVar21)(*puVar24,2,0);
                pcVar21 = *(*piVar22 + 0x40);
                if (pcVar21 != NULL) {
                    __cfi_slowpath_diag(0x7e6c99e1529760f9,pcVar21,0x80015f0);
                    (*pcVar21)(*puVar24);
                }
                *(arg1 + -0x271) = 0;
            }
            goto code_r0x0800b424;
        }
        msleep(0xb4);
        if ((*(*piVar17 + 0x18) == 0) && (*(*piVar17 + 0x58) != 0)) {
            msleep(200);
        }
        uVar8 = sym.wcd_measure_adc_once(arg1_00,1);
        uVar9 = sym.wcd_mbhc_get_micbias(arg1_00);
        uVar6 = *puVar20;
        if (uVar6 == 0) {
            uVar6 = (uVar9 * 0x6a4) / 0x708;
        }
        else {
            uVar10 = *puVar25;
            if (uVar10 != uVar9) {
                uVar9 = uVar6 * uVar9;
                uVar6 = 0;
                if (uVar10 != 0) {
                    uVar6 = uVar9 / uVar10;
                }
            }
        }
        uVar10 = sym.wcd_mbhc_get_micbias(arg1_00);
        uVar9 = *(arg1 + -0x294);
        if (uVar9 == 0) {
            uVar9 = (uVar10 * 0x4b) / 0x708;
        }
        else {
            uVar2 = *puVar25;
            if (uVar2 != uVar10) {
                uVar10 = uVar9 * uVar10;
                uVar9 = 0;
                if (uVar2 != 0) {
                    uVar9 = uVar10 / uVar2;
                }
            }
        }
        uVar10 = 3;
        if (uVar8 <= uVar6) {
            uVar10 = 1;
        }
        uVar6 = 2;
        if (uVar9 <= uVar8) {
            uVar6 = uVar10;
        }
        _printk(0x8002ca1,"wcd_mbhc_get_plug_from_adc",uVar6);
        if ((uVar13 < uVar8) && (!bVar3)) {
            _printk(0x8002012,"wcd_mbhc_adc_check_for_spl_headset");
            pcVar21 = *(*piVar22 + 0xf0);
            if (pcVar21 == NULL) {
code_r0x0800ab18:
                bVar3 = false;
            }
            else {
                __cfi_slowpath_diag(0x155f259693f926eb,pcVar21,0x8001610);
                (*pcVar21)(*puVar24,*(*piVar17 + 0x4c),1);
                usleep_range_state(10000,0x2774,2);
                iVar7 = sym.wcd_measure_adc_once(arg1_00,1);
                uVar8 = sym.wcd_mbhc_get_micbias(arg1_00);
                uVar9 = *puVar20;
                if ((uVar9 == 0) || (uVar10 = *puVar25, uVar10 == 0x708)) {
                    uVar9 = (uVar8 * 0x6a4) / 0x708;
                }
                else if (uVar10 != uVar8) {
                    uVar8 = uVar9 * uVar8;
                    uVar9 = 0;
                    if (uVar10 != 0) {
                        uVar9 = uVar8 / uVar10;
                    }
                }
                uVar10 = sym.wcd_mbhc_get_micbias(arg1_00);
                uVar8 = *(arg1 + -0x294);
                if (uVar8 == 0) {
                    uVar8 = (uVar10 * 0x4b) / 0x708;
                }
                else {
                    uVar2 = *puVar25;
                    if (uVar2 != uVar10) {
                        uVar10 = uVar8 * uVar10;
                        uVar8 = 0;
                        if (uVar2 != 0) {
                            uVar8 = uVar10 / uVar2;
                        }
                    }
                }
                if ((uVar9 < iVar7) || (iVar7 < uVar8)) {
                    pcVar21 = *(*piVar22 + 0xf0);
                    __cfi_slowpath_diag(0x155f259693f926eb,pcVar21,0x8001630);
                    (*pcVar21)(*puVar24,*(*piVar17 + 0x4c),0);
                    usleep_range_state(10000,0x2774,2);
                    goto code_r0x0800ab18;
                }
                bVar3 = true;
                _printk(0x800347a,"wcd_mbhc_adc_check_for_spl_headset",1);
            }
            _printk(0x8002bbe,"wcd_mbhc_adc_check_for_spl_headset");
            uVar8 = sym.wcd_measure_adc_once(arg1_00,1);
            if (bVar3) {
                iVar7 = sym.wcd_mbhc_get_micbias(arg1_00);
                iVar7 = iVar7 * uVar13;
                bVar3 = true;
                uVar13 = 0;
                if (iStack_a0 != 0) {
                    uVar13 = iVar7 / iStack_a0;
                }
                *(arg1 + -0x271) = 1;
            }
        }
        pcVar21 = *(*piVar22 + 0xb8);
        if (pcVar21 != NULL) {
            __cfi_slowpath_diag(0xf1cf56a12423eb51,pcVar21,0x80013f0);
            uVar11 = (*pcVar21)(*puVar24);
        }
        uVar9 = uStack_a4;
        if ((uVar13 < uVar8) || ((uVar11 & 1) != 0)) {
            if (uVar8 <= uVar13) goto code_r0x0800acac;
            _printk(0x8002b80,"wcd_correct_swch_plug");
            uVar6 = 3;
            bVar5 = true;
            goto code_r0x0800a758;
        }
        iVar7 = sym.wcd_check_cross_conn(arg1_00);
        uVar11 = 0;
        bVar5 = bVar19;
        if (iVar7 < 0) goto code_r0x0800a758;
        if (iVar7 != 0) {
            uVar11 = 0;
            uVar8 = *(arg1 + -0x28c);
            uStack_a4 = 0;
            uStack_98 = uStack_98 + 1;
            uVar9 = uStack_a4;
            if (uVar8 <= uStack_98) {
                if (uVar8 < uStack_98) {
                    _printk(0x8001867,"wcd_correct_swch_plug");
                    uVar6 = 4;
                    goto code_r0x0800b298;
                }
                if ((uStack_98 == uVar8) && (pcVar21 = *(*piVar17 + 0x18), pcVar21 != NULL)) {
                    __cfi_slowpath_diag(0x75ef21adc6f2463b,pcVar21,0x8001410);
                    uVar14 = (*pcVar21)(uVar27,1);
                    if ((uVar14 & 1) != 0) {
                        _printk(0x80022ed,"wcd_correct_swch_plug");
                        uVar11 = 0;
                        uStack_a4 = 0;
                        uVar6 = 4;
                        uVar9 = uStack_a4;
                        goto code_r0x0800a758;
                    }
                }
                uVar6 = 4;
                _printk(0x800337c,"wcd_correct_swch_plug",4);
                uVar11 = 0;
                uVar9 = 0;
                bVar5 = false;
            }
            goto code_r0x0800a758;
        }
        uVar11 = sym.wcd_mbhc_get_micbias(arg1_00);
        uVar6 = *puVar20;
        if (uVar6 == 0) {
            uVar6 = (uVar11 * 0x6a4) / 0x708;
        }
        else {
            uVar9 = *puVar25;
            if (uVar9 != uVar11) {
                uVar11 = uVar6 * uVar11;
                uVar6 = 0;
                if (uVar9 != 0) {
                    uVar6 = uVar11 / uVar9;
                }
            }
        }
        uVar9 = sym.wcd_mbhc_get_micbias(arg1_00);
        uVar11 = *(arg1 + -0x294);
        if (uVar11 == 0) {
            uVar11 = (uVar9 * 0x4b) / 0x708;
        }
        else {
            uVar10 = *puVar25;
            if (uVar10 != uVar9) {
                uVar9 = uVar11 * uVar9;
                uVar11 = 0;
                if (uVar10 != 0) {
                    uVar11 = uVar9 / uVar10;
                }
            }
        }
        uVar9 = 3;
        if (uVar8 <= uVar6) {
            uVar9 = 1;
        }
        uVar6 = 2;
        if (uVar11 <= uVar8) {
            uVar6 = uVar9;
        }
        uVar9 = uStack_a4 + 1;
        _printk(0x8002ca1,"wcd_mbhc_get_plug_from_adc",uVar6);
        uVar11 = 0;
        if (uVar9 < *(arg1 + -0x28c)) {
            uStack_a4 = 0;
            uStack_98 = 0;
            if (!bVar3) goto code_r0x0800a758;
        }
        else {
            uStack_a4 = 0;
            uStack_98 = 0;
        }
code_r0x0800acac:
        _printk(0x800337c,"wcd_correct_swch_plug",uVar6);
        uVar9 = sym.wcd_mbhc_get_micbias(arg1_00);
        uVar6 = *puVar20;
        if (uVar6 == 0) {
            uVar6 = (uVar9 * 0x6a4) / 0x708;
        }
        else {
            uVar10 = *puVar25;
            if (uVar10 != uVar9) {
                uVar9 = uVar6 * uVar9;
                uVar6 = 0;
                if (uVar10 != 0) {
                    uVar6 = uVar9 / uVar10;
                }
            }
        }
        uVar10 = sym.wcd_mbhc_get_micbias(arg1_00);
        uVar9 = *(arg1 + -0x294);
        if (uVar9 == 0) {
            uVar9 = (uVar10 * 0x4b) / 0x708;
        }
        else {
            uVar2 = *puVar25;
            if (uVar2 != uVar10) {
                uVar10 = uVar9 * uVar10;
                uVar9 = 0;
                if (uVar2 != 0) {
                    uVar9 = uVar10 / uVar2;
                }
            }
        }
        uVar10 = 3;
        if (uVar8 <= uVar6) {
            uVar10 = 1;
        }
        uVar6 = 2;
        if (uVar9 <= uVar8) {
            uVar6 = uVar10;
        }
        _printk(0x8002ca1,"wcd_mbhc_get_plug_from_adc",uVar6);
        if ((bVar4 ^ 1U) & bVar3) {
            _printk(0x8002ef3,"wcd_correct_swch_plug");
            mutex_lock(iVar26);
            _printk(0x8001a88,"wcd_correct_swch_plug");
            sym.wcd_mbhc_find_plug_and_report(arg1_00,uVar6);
            _printk(0x80018cb,"wcd_correct_swch_plug");
            mutex_unlock(iVar26);
            bVar3 = true;
            iStack_94 = 2;
            bVar4 = bVar3;
            goto code_r0x0800a740;
        }
        if (!bVar4) {
            uVar9 = uStack_a4;
            bVar5 = false;
            if ((*(arg1 + -0x29f) | 4) != 5) {
                uVar14 = sym.wcd_swch_level_remove(arg1_00);
                bVar5 = false;
                if ((uVar14 & 1) == 0) {
                    pcVar1 = "special ";
                    if (!bVar3) {
                        pcVar1 = 0x800317f;
                    }
                    _printk(0x8001c4a,"wcd_correct_swch_plug",pcVar1);
                    goto code_r0x0800b298;
                }
            }
            goto code_r0x0800a758;
        }
        bVar4 = true;
    } while( true );
    while (iVar7 = iVar7 + -0x32, iVar7 != -0x802) {
        if (*(arg1 + -0x272) != '\0') {
            _printk(0x8002e83,"wcd_is_special_headset",1);
            bVar3 = false;
            goto code_r0x0800b1ec;
        }
        msleep(0x32);
        iVar12 = sym.wcd_measure_adc_once(arg1_00,1);
        if (iVar12 <= uVar13) {
            _printk(0x800243a,"wcd_is_special_headset",-iVar7);
            if (iVar7 == -2000) {
                _printk(0x800352b,"wcd_is_special_headset");
            }
            _printk(0x80030a5,"wcd_is_special_headset");
            bVar3 = true;
            *(arg1 + -0x271) = 1;
            goto code_r0x0800b1ec;
        }
    }
    _printk(0x800352b,"wcd_is_special_headset");
    bVar3 = false;
code_r0x0800b1ec:
    pcVar21 = *(*piVar22 + 0xf0);
    if ((pcVar21 != NULL) && (*(arg1 + -0x271) == '\0')) {
        __cfi_slowpath_diag(0x155f259693f926eb,pcVar21,0x8001670);
        (*pcVar21)(*puVar24,2,0);
    }
    _printk(0x8002121,"wcd_is_special_headset",*(arg1 + -0x271));
    if (bVar3) {
        _printk(0x8002101,"wcd_correct_swch_plug",3);
        uVar6 = 1;
    }
    else {
code_r0x0800b26c:
        iVar18 = *(arg1 + 0x48);
        if (*(iVar18 + 0x308) != 0) {
            snd_soc_component_update_bits
                      (*puVar24,*(iVar18 + 0x308),*(iVar18 + 0x30a),1 << (*(iVar18 + 0x30b) & 0x1f));
        }
        uVar6 = 3;
    }
code_r0x0800b298:
    uVar14 = sym.wcd_swch_level_remove(arg1_00);
    if ((uVar14 & 1) == 0) {
        _printk(0x8003067,"wcd_correct_swch_plug",uVar6,bVar19,*(arg1 + -0x270));
        piVar23 = arg1 + 0x48;
        iVar18 = *piVar23;
        if (*(iVar18 + 0x2e8) != 0) {
            snd_soc_component_update_bits(*puVar24,*(iVar18 + 0x2e8),*(iVar18 + 0x2ea),0);
            iVar18 = *piVar23;
        }
        if (*(iVar18 + 0x298) != 0) {
            snd_soc_component_update_bits(*puVar24,*(iVar18 + 0x298),*(iVar18 + 0x29a),0);
        }
        _printk(0x8002ef3,"wcd_correct_swch_plug");
        mutex_lock(iVar26);
        _printk(0x8001a88,"wcd_correct_swch_plug");
        sym.wcd_mbhc_find_plug_and_report(arg1_00,uVar6);
        _printk(0x80018cb,"wcd_correct_swch_plug");
        mutex_unlock(iVar26);
        if (uVar6 == 1) {
            iStack_94 = 3;
code_r0x0800b38c:
            iVar18 = *(arg1 + 0x48);
            if (*(iVar18 + 0x2f8) != 0) {
                snd_soc_component_update_bits
                          (*puVar24,*(iVar18 + 0x2f8),*(iVar18 + 0x2fa),1 << (*(iVar18 + 0x2fb) & 0x1f));
            }
            uVar6 = 1;
            *(arg1 + -0x271) = 1;
        }
        else {
            iVar16 = *(*piVar23 + 0x2f8);
            if (iVar16 != 0) {
                snd_soc_component_update_bits(*puVar24,iVar16,*(*piVar23 + 0x2fa),0);
            }
            iStack_94 = 3;
        }
        iVar18 = *piVar22;
        pcVar21 = *(iVar18 + 0x20);
        if (pcVar21 != NULL) {
            __cfi_slowpath_diag(0x7580eeff27e3c667,pcVar21,0x8001430);
            (*pcVar21)(arg1_00,1);
            iVar18 = *piVar22;
        }
        if (*(iVar18 + 0xd0) != 0) {
            pcVar21 = *(iVar18 + 0x98);
            __cfi_slowpath_diag(0x8520705fd5e55046,pcVar21,0x8001690);
            uVar13 = (*pcVar21)(arg1_00,2);
            if (uVar6 == 1) {
                if (*(arg1 + -0x26f) == '\0' && (uVar13 & 1) == 0) {
                    iVar18 = *(arg1 + 0x48);
                    if (*(iVar18 + 0x168) != 0) {
                        snd_soc_component_update_bits
                                  (*puVar24,*(iVar18 + 0x168),*(iVar18 + 0x16a),3 << (*(iVar18 + 0x16b) & 0x1f));
                        uVar6 = 1;
                        goto code_r0x0800b424;
                    }
                }
                uVar6 = 1;
            }
            else if (uVar6 == 2) {
                iVar18 = *(arg1 + 0x48);
                if (*(iVar18 + 0x168) == 0) {
                    uVar6 = 2;
                }
                else {
                    snd_soc_component_update_bits
                              (*puVar24,*(iVar18 + 0x168),*(iVar18 + 0x16a),3 << (*(iVar18 + 0x16b) & 0x1f));
                    uVar6 = 2;
                }
            }
            else {
                iVar16 = *(*(arg1 + 0x48) + 0x168);
                if (iVar16 != 0) {
                    snd_soc_component_update_bits(*puVar24,iVar16,*(*(arg1 + 0x48) + 0x16a),0);
                }
            }
        }
    }
    else {
        _printk(0x80017c6,"wcd_correct_swch_plug");
    }
code_r0x0800b424:
    pcVar21 = *(*piVar22 + 0xd0);
    if ((pcVar21 != NULL) && (*(arg1 + -0x271) == '\0')) {
        __cfi_slowpath_diag(0x1d4dfe77ec242b3c,pcVar21,0x8001450);
        (*pcVar21)(uVar27,2,3);
    }
    if ((uVar6 != 2) || (*(arg1 + -0x271) == '\0')) goto code_r0x0800b560;
    iVar18 = *piVar22;
    pcVar21 = *(iVar18 + 0xd0);
    if (pcVar21 == NULL) {
        pcVar21 = *(iVar18 + 0xf0);
        if (pcVar21 != NULL) goto code_r0x0800b4d4;
code_r0x0800b48c:
        pcVar21 = *(iVar18 + 0x40);
    }
    else {
        __cfi_slowpath_diag(0x1d4dfe77ec242b3c,pcVar21,0x8001470);
        (*pcVar21)(uVar27,2,3);
        iVar18 = *piVar22;
        pcVar21 = *(iVar18 + 0xf0);
        if (pcVar21 == NULL) goto code_r0x0800b48c;
code_r0x0800b4d4:
        __cfi_slowpath_diag(0x155f259693f926eb,pcVar21,0x8001490);
        (*pcVar21)(uVar27,2,0);
        pcVar21 = *(*piVar22 + 0x40);
    }
    if (pcVar21 != NULL) {
        __cfi_slowpath_diag(0x7e6c99e1529760f9,pcVar21,0x80014b0);
        (*pcVar21)(uVar27);
        iVar16 = *(*(arg1 + 0x48) + 0x188);
        if (iVar16 != 0) {
            snd_soc_component_update_bits(*puVar24,iVar16,*(*(arg1 + 0x48) + 0x18a),0);
        }
    }
    *(arg1 + -0x271) = 0;
code_r0x0800b560:
    if (((*(*piVar17 + 0x10) != '\0') && (uVar6 - 1 < 2)) && (*(arg1 + -0x272) == '\0')) {
        _printk(0x8002ef3,"wcd_correct_swch_plug");
        mutex_lock(iVar26);
        _printk(0x8001a88,"wcd_correct_swch_plug");
        sym.wcd_mbhc_hs_elec_irq(arg1_00,1,1);
        _printk(0x80018cb,"wcd_correct_swch_plug");
        mutex_unlock(iVar26);
    }
    if (uVar6 == 2) {
        _printk(0x8002ef3,"wcd_correct_swch_plug");
        mutex_lock(iVar26);
        _printk(0x8001a88,"wcd_correct_swch_plug");
        sym.wcd_mbhc_hs_elec_irq(arg1_00,0,1);
        _printk(0x80018cb,"wcd_correct_swch_plug");
        mutex_unlock(iVar26);
    }
    iVar26 = *piVar22;
    pcVar21 = *(iVar26 + 0x100);
    if (pcVar21 != NULL) {
        __cfi_slowpath_diag(0x1be676a8fa3b6db7,pcVar21,0x80014d0);
        (*pcVar21)(uVar27,1);
        iVar26 = *piVar22;
    }
    pcVar21 = *(iVar26 + 0x90);
    __cfi_slowpath_diag(0xce1a9c61fa6df8c5,pcVar21,0x80014f0);
    (*pcVar21)(arg1_00,0);
    if (iStack_94 == 0) {
        _printk(0x8001c65,"wcd_correct_swch_plug");
        uVar27 = cdev_tevent_alloc(0x36008a0b);
        cdev_tevent_add_int(uVar27,"MbhcStage",1);
        cdev_tevent_write(uVar27);
        cdev_tevent_destroy(uVar27);
    }
    _printk(0x8002bbe,"wcd_correct_swch_plug");
    return;
}


// ===== sym.wcd_mbhc_adc_hs_ins_irq @ 0x0800b88c (size 740) =====

ulong sym.wcd_mbhc_adc_hs_ins_irq(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8002012,"wcd_mbhc_adc_hs_ins_irq");
    if (*(arg1 + 0xf5) == '\0') {
        if (((((*(*(arg1 + 0x3a8) + 0x108) != 0) &&
              (uVar2 = snd_soc_component_read(*(arg1 + 0xf8)),
              (uVar2 & *(*(arg1 + 0x3a8) + 0x10a)) >> (*(*(arg1 + 0x3a8) + 0x10b) & 0x1f) == 0)) &&
             (usleep_range_state(30000,0x7594,2), *(*(arg1 + 0x3a8) + 0x108) != 0)) &&
            ((uVar2 = snd_soc_component_read(*(arg1 + 0xf8)),
             (uVar2 & *(*(arg1 + 0x3a8) + 0x10a)) >> (*(*(arg1 + 0x3a8) + 0x10b) & 0x1f) == 0 &&
             (usleep_range_state(30000,0x7594,2), *(*(arg1 + 0x3a8) + 0x108) != 0)))) &&
           ((uVar2 = snd_soc_component_read(*(arg1 + 0xf8)),
            (uVar2 & *(*(arg1 + 0x3a8) + 0x10a)) >> (*(*(arg1 + 0x3a8) + 0x10b) & 0x1f) == 0 &&
            ((usleep_range_state(30000,0x7594,2), *(*(arg1 + 0x3a8) + 0x108) != 0 &&
             (uVar2 = snd_soc_component_read(*(arg1 + 0xf8)),
             (uVar2 & *(*(arg1 + 0x3a8) + 0x10a)) >> (*(*(arg1 + 0x3a8) + 0x10b) & 0x1f) == 0)))))) {
            usleep_range_state(30000,0x7594,2);
            _printk(0x8002ef3,"wcd_mbhc_adc_hs_ins_irq");
            iVar1 = arg1 + 0x328;
            mutex_lock(iVar1);
            _printk(0x8001a88,"wcd_mbhc_adc_hs_ins_irq");
            if (*(arg1 + 0xc1) == '\x02') {
                sym.wcd_mbhc_hs_elec_irq(arg1,0,0);
                iVar4 = *(arg1 + 0x3a8);
                if (*(iVar4 + 0x2f8) != 0) {
                    snd_soc_component_update_bits
                              (*(arg1 + 0xf8),*(iVar4 + 0x2f8),*(iVar4 + 0x2fa),1 << (*(iVar4 + 0x2fb) & 0x1f));
                }
                sym.wcd_mbhc_find_plug_and_report(arg1,1);
            }
            else {
                if (*(*(arg1 + 0x90) + 0x10) != '\0') {
                    _printk(0x800340d,"wcd_mbhc_adc_hs_ins_irq");
                    sym.wcd_mbhc_hs_elec_irq(arg1,0,0);
                    iVar4 = *(arg1 + 0x3a8);
                    if (*(iVar4 + 0xa8) != 0) {
                        snd_soc_component_update_bits(*(arg1 + 0xf8),*(iVar4 + 0xa8),*(iVar4 + 0xaa),0);
                        iVar4 = *(arg1 + 0x3a8);
                    }
                    if (*(iVar4 + 0x308) != 0) {
                        snd_soc_component_update_bits(*(arg1 + 0xf8),*(iVar4 + 0x308),*(iVar4 + 0x30a),0);
                    }
                    *(arg1 + 0xf0) = 0;
                    *(arg1 + 0x3f0) = 0;
                    *(arg1 + 0xf2) = 1;
                    sym.wcd_mbhc_adc_detect_plug_type(arg1);
                    _printk(0x80018cb,"wcd_mbhc_adc_hs_ins_irq");
                    mutex_unlock(iVar1);
                    uVar3 = 0x8002bbe;
                    goto code_r0x0800ba6c;
                }
                _printk(0x800178e,"wcd_mbhc_adc_hs_ins_irq");
            }
            _printk(0x80018cb,"wcd_mbhc_adc_hs_ins_irq");
            mutex_unlock(iVar1);
            return 1;
        }
        uVar3 = 0x8002dcd;
    }
    else {
        *(arg1 + 0xf5) = 0;
        uVar3 = 0x8002bbe;
    }
code_r0x0800ba6c:
    _printk(uVar3,"wcd_mbhc_adc_hs_ins_irq");
    return 1;
}


// ===== sym.wcd_mbhc_adc_hs_rem_irq @ 0x0800bb70 (size 1484) =====

ulong sym.wcd_mbhc_adc_hs_rem_irq(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    int16_t iVar2;
    bool bVar3;
    uint32_t uVar4;
    int iVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    ulong uVar8;
    ulong uVar9;
    int64_t iVar10;
    ulong *in_x18;
    code *pcVar11;
    int iVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8002012,"wcd_mbhc_adc_hs_rem_irq");
    _printk(0x8002ef3,"wcd_mbhc_adc_hs_rem_irq");
    mutex_lock(arg1 + 0x328);
    _printk(0x8001a88,"wcd_mbhc_adc_hs_rem_irq");
    iVar10 = _delayed_work_timer_fn;
    uVar4 = sym.wcd_mbhc_get_micbias(arg1);
    uVar6 = *(arg1 + 200);
    if (uVar6 == 0) {
        uVar6 = (uVar4 * 0x6a4) / 0x708;
    }
    else {
        uVar1 = *(arg1 + 0xd0);
        if (uVar1 != uVar4) {
            uVar4 = uVar6 * uVar4;
            uVar6 = 0;
            if (uVar1 != 0) {
                uVar6 = uVar4 / uVar1;
            }
        }
    }
    pcVar11 = *(*(arg1 + 0x98) + 0xd0);
    if (pcVar11 != NULL) {
        __cfi_slowpath_diag(0x1d4dfe77ec242b3c,pcVar11,0x8001250);
        (*pcVar11)(*(arg1 + 0xf8),2,2);
    }
    iVar12 = 1;
    do {
        usleep_range_state(10000,0x2774,2);
        iVar5 = sym.wcd_measure_adc_once(arg1,1);
        _printk(0x8001bf5,"wcd_mbhc_adc_hs_rem_irq",iVar5);
        if ((iVar5 <= uVar6) && (3 < iVar12)) {
            _printk(0x80023ef,"wcd_mbhc_adc_hs_rem_irq");
            pcVar11 = *(*(arg1 + 0x98) + 0xd0);
            if (pcVar11 != NULL) {
                __cfi_slowpath_diag(0x1d4dfe77ec242b3c,pcVar11,0x8001270);
                (*pcVar11)(*(arg1 + 0xf8),2,3);
            }
            goto code_r0x0800c0e4;
        }
        iVar12 = iVar12 + 1;
    } while (-1 < (iVar10 + 0x19) - _delayed_work_timer_fn);
    pcVar11 = *(*(arg1 + 0x98) + 0xd0);
    if (pcVar11 != NULL) {
        __cfi_slowpath_diag(0x1d4dfe77ec242b3c,pcVar11,0x8001290);
        (*pcVar11)(*(arg1 + 0xf8),2,3);
    }
    uVar7 = sym.wcd_swch_level_remove(arg1);
    if ((uVar7 & 1) != 0) {
        _printk(0x800258a,"wcd_mbhc_adc_hs_rem_irq");
        goto code_r0x0800c0e4;
    }
    if ((*(*(arg1 + 0x90) + 0x48) == '\0') && (*(*(arg1 + 0x90) + 0x5c) == '\0')) {
        bVar3 = false;
    }
    else {
        pcVar11 = *(*(arg1 + 0x98) + 0xb8);
        bVar3 = false;
        if (pcVar11 != NULL) {
            __cfi_slowpath_diag(0xf1cf56a12423eb51,pcVar11,0x80012b0);
            uVar7 = (*pcVar11)(*(arg1 + 0xf8));
            if ((uVar7 & 1) == 0) {
                bVar3 = false;
            }
            else {
                iVar2 = *(*(arg1 + 0x3a8) + 0x1c8);
                if (iVar2 != 0) {
                    snd_soc_component_update_bits(*(arg1 + 0xf8),iVar2,*(*(arg1 + 0x3a8) + 0x1ca),0);
                }
                bVar3 = true;
            }
        }
        iVar10 = *(arg1 + 0x3a8);
        if (*(iVar10 + 0x238) != 0) {
            snd_soc_component_update_bits
                      (*(arg1 + 0xf8),*(iVar10 + 0x238),*(iVar10 + 0x23a),1 << (*(iVar10 + 0x23b) & 0x1f));
            iVar10 = *(arg1 + 0x3a8);
        }
        if (*(iVar10 + 0x248) != 0) {
            snd_soc_component_update_bits
                      (*(arg1 + 0xf8),*(iVar10 + 0x248),*(iVar10 + 0x24a),1 << (*(iVar10 + 0x24b) & 0x1f));
        }
        usleep_range_state(50000,0xc3b4,2);
        if (*(*(arg1 + 0x3a8) + 0x228) != 0) {
            uVar6 = snd_soc_component_read(*(arg1 + 0xf8));
            if (((*(*(arg1 + 0x90) + 0x48) != '\0') || (*(*(arg1 + 0x90) + 0x5c) != '\0')) &&
               ((uVar6 & *(*(arg1 + 0x3a8) + 0x22a)) >> (*(*(arg1 + 0x3a8) + 0x22b) & 0x1f) == 0)) {
                _printk(0x8001dd7,"wcd_mbhc_adc_hs_rem_irq");
                iVar10 = *(arg1 + 0x3a8);
                if (*(iVar10 + 8) == 0) {
                    iVar2 = *(iVar10 + 0x28);
                    if (iVar2 == 0) goto code_r0x0800bec8;
code_r0x0800c028:
                    snd_soc_component_update_bits
                              (*(arg1 + 0xf8),iVar2,*(iVar10 + 0x2a),1 << (*(iVar10 + 0x2b) & 0x1f));
                    iVar10 = *(arg1 + 0x3a8);
                    iVar2 = *(iVar10 + 8);
                    if (iVar2 != 0) goto code_r0x0800c04c;
code_r0x0800bed0:
                    iVar2 = *(iVar10 + 0xb8);
                    if (iVar2 == 0) goto code_r0x0800bed8;
code_r0x0800c070:
                    snd_soc_component_update_bits(*(arg1 + 0xf8),iVar2,*(iVar10 + 0xba),0);
                    iVar10 = *(arg1 + 0x3a8);
                    iVar2 = *(iVar10 + 0x168);
                }
                else {
                    snd_soc_component_update_bits(*(arg1 + 0xf8),*(iVar10 + 8),*(iVar10 + 10),0);
                    iVar10 = *(arg1 + 0x3a8);
                    iVar2 = *(iVar10 + 0x28);
                    if (iVar2 != 0) goto code_r0x0800c028;
code_r0x0800bec8:
                    iVar2 = *(iVar10 + 8);
                    if (iVar2 == 0) goto code_r0x0800bed0;
code_r0x0800c04c:
                    snd_soc_component_update_bits(*(arg1 + 0xf8),iVar2,*(iVar10 + 10),1 << (*(iVar10 + 0xb) & 0x1f));
                    iVar10 = *(arg1 + 0x3a8);
                    iVar2 = *(iVar10 + 0xb8);
                    if (iVar2 != 0) goto code_r0x0800c070;
code_r0x0800bed8:
                    iVar2 = *(iVar10 + 0x168);
                }
                if (iVar2 != 0) {
                    snd_soc_component_update_bits(*(arg1 + 0xf8),iVar2,*(iVar10 + 0x16a),0);
                }
                *(arg1 + 0xf0) = 0;
                *(arg1 + 0xc0) = 0;
                uVar6 = *(arg1 + 0xc1) - 1;
                if (uVar6 < 4) {
    //switch table (3 cases) at 0x8003768
                    switch(*(uVar6 + 0x8003768) * 4 + 0x800bf20) {
                    case 0x800bf24:
                        sym.wcd_mbhc_report_plug(arg1,0,3);
                        uVar8 = *(arg1 + 0x418);
                        uVar9 = 0x14;
                        break;
                    case 0x800c094:
                        sym.wcd_mbhc_report_plug(arg1,0,1);
                        uVar8 = *(arg1 + 0x418);
                        uVar9 = 0x15;
                        break;
                    case 0x800c0b4:
                        sym.wcd_mbhc_report_plug(arg1,0,4);
                        uVar8 = *(arg1 + 0x418);
                        uVar9 = 0x17;
                        break;
                    case 0x800c0d4:
                        uVar8 = *(arg1 + 0x418);
                        uVar9 = 0x3e;
                    }
                    extcon_set_state_sync(uVar8,uVar9,0);
                }
                goto code_r0x0800c0e4;
            }
        }
    }
    if (*(arg1 + 0xc1) == '\x02') {
        *(arg1 + 0xf5) = 1;
    }
    iVar10 = *(arg1 + 0x3a8);
    if (*(iVar10 + 0x2f8) == 0) {
        iVar2 = *(iVar10 + 0x2e8);
        if (iVar2 == 0) goto code_r0x0800bf68;
code_r0x0800bfec:
        snd_soc_component_update_bits(*(arg1 + 0xf8),iVar2,*(iVar10 + 0x2ea),0);
        iVar10 = *(arg1 + 0x3a8);
        iVar2 = *(iVar10 + 0x298);
    }
    else {
        snd_soc_component_update_bits(*(arg1 + 0xf8),*(iVar10 + 0x2f8),*(iVar10 + 0x2fa),0);
        iVar10 = *(arg1 + 0x3a8);
        iVar2 = *(iVar10 + 0x2e8);
        if (iVar2 != 0) goto code_r0x0800bfec;
code_r0x0800bf68:
        iVar2 = *(iVar10 + 0x298);
    }
    if (iVar2 != 0) {
        snd_soc_component_update_bits(*(arg1 + 0xf8),iVar2,*(iVar10 + 0x29a),0);
    }
    sym.wcd_mbhc_elec_hs_report_unplug(arg1);
    iVar2 = *(*(arg1 + 0x3a8) + 0x168);
    if (iVar2 != 0) {
        snd_soc_component_update_bits(*(arg1 + 0xf8),iVar2,*(*(arg1 + 0x3a8) + 0x16a),0);
    }
    if (bVar3) {
        iVar10 = *(arg1 + 0x3a8);
        if (*(iVar10 + 0x1c8) != 0) {
            snd_soc_component_update_bits
                      (*(arg1 + 0xf8),*(iVar10 + 0x1c8),*(iVar10 + 0x1ca),3 << (*(iVar10 + 0x1cb) & 0x1f));
        }
    }
code_r0x0800c0e4:
    _printk(0x80018cb,"wcd_mbhc_adc_hs_rem_irq");
    mutex_unlock(arg1 + 0x328);
    _printk(0x8002bbe,"wcd_mbhc_adc_hs_rem_irq");
    return 1;
}


// ===== sym.wcd_mbhc_adc_detect_plug_type @ 0x0800c13c (size 476) =====

void sym.wcd_mbhc_adc_detect_plug_type(int64_t arg1)

{
    int16_t iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong uVar3;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = *(arg1 + 0xf8);
    _printk(0x8002012,"wcd_mbhc_adc_detect_plug_type");
    uVar2 = mutex_is_locked(arg1 + 0x328);
    if (((uVar2 & 1) == 0) && ((obj.wcd_mbhc_adc_detect_plug_type.__already_done & 1) == 0)) {
        obj.wcd_mbhc_adc_detect_plug_type.__already_done = 0x1;
        __warn_printk("%s: BCL should have acquired\n","wcd_mbhc_adc_detect_plug_type");
    //WARNING: Does not return
        pcVar4 = SoftwareBreakpoint(0x800,0x800c2f4);
        (*pcVar4)();
    }
    pcVar4 = *(*(arg1 + 0x98) + 0x100);
    if (pcVar4 != NULL) {
        __cfi_slowpath_diag(0x1be676a8fa3b6db7,pcVar4,0x80012f0);
        (*pcVar4)(uVar3,0);
    }
    iVar1 = *(*(arg1 + 0x3a8) + 0x2f8);
    if (iVar1 != 0) {
        snd_soc_component_update_bits(*(arg1 + 0xf8),iVar1,*(*(arg1 + 0x3a8) + 0x2fa),0);
    }
    pcVar4 = *(*(arg1 + 0x98) + 0xd0);
    if (pcVar4 == NULL) {
        uVar3 = 0x8001f4f;
    }
    else {
        __cfi_slowpath_diag(0x1d4dfe77ec242b3c,pcVar4,0x8001310);
        (*pcVar4)(uVar3,2,2);
        *(arg1 + 0x3b0) = 0;
        _printk(0x8002416,"wcd_schedule_hs_detect_plug");
        uVar2 = mutex_is_locked(arg1 + 0x328);
        if (((uVar2 & 1) == 0) && ((obj.wcd_schedule_hs_detect_plug.__already_done & 1) == 0)) {
            obj.wcd_schedule_hs_detect_plug.__already_done = 0x1;
            __warn_printk("%s: BCL should have acquired\n","wcd_schedule_hs_detect_plug");
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x800,0x800c318);
            (*pcVar4)();
        }
        *(arg1 + 0xee) = 0;
        pcVar4 = *(*(arg1 + 0x98) + 0x90);
        __cfi_slowpath_diag(0xce1a9c61fa6df8c5,pcVar4,0x8001330);
        (*pcVar4)(arg1,1);
        queue_work_on(0x20,_snd_soc_jack_report,arg1 + 0x360);
        uVar3 = 0x8002bbe;
    }
    _printk(uVar3,"wcd_mbhc_adc_detect_plug_type");
    return;
}


// ===== sym.wcd_mbhc_adc_detect_anc_plug_type @ 0x0800c31c (size 1652) =====

bool sym.wcd_mbhc_adc_detect_anc_plug_type(int64_t arg1)

{
    char *pcVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int iVar6;
    uint64_t uVar7;
    int16_t iVar8;
    int64_t iVar9;
    ulong *in_x18;
    bool bVar10;
    uint32_t uVar11;
    code *pcVar12;
    uint32_t uVar13;
    uint64_t uVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(*(arg1 + 0x90) + 0x50) - 5U < 0xfffffffc) || (*(*(arg1 + 0x98) + 0xd0) == 0)) {
        return false;
    }
    if (*(*(arg1 + 0x3a8) + 0x2f8) == 0) {
        uVar2 = 0xea;
    }
    else {
        uVar2 = snd_soc_component_read(*(arg1 + 0xf8));
        iVar9 = *(arg1 + 0x3a8);
        uVar2 = (uVar2 & *(iVar9 + 0x2fa)) >> (*(iVar9 + 0x2fb) & 0x1f);
        if (*(iVar9 + 0x2f8) != 0) {
            snd_soc_component_update_bits(*(arg1 + 0xf8),*(iVar9 + 0x2f8),*(iVar9 + 0x2fa),0);
        }
    }
    sym.wcd_mbhc_hs_elec_irq(arg1,0,0);
    if (*(*(arg1 + 0x3a8) + 0xb8) == 0) {
        uVar3 = 0xffea;
    }
    else {
        uVar3 = snd_soc_component_read(*(arg1 + 0xf8));
        uVar3 = (uVar3 & *(*(arg1 + 0x3a8) + 0xba)) >> (*(*(arg1 + 0x3a8) + 0xbb) & 0x1f);
    }
    pcVar12 = *(*(arg1 + 0x98) + 0xd0);
    __cfi_slowpath_diag(0x1d4dfe77ec242b3c,pcVar12,0x8001350);
    (*pcVar12)(*(arg1 + 0xf8),*(*(arg1 + 0x90) + 0x50),2);
    iVar9 = *(arg1 + 0x3a8);
    if (*(iVar9 + 0xa8) == 0) {
        uVar5 = 0xea;
        iVar8 = *(iVar9 + 0x1f8);
joined_r0x0800c5ec:
        if (iVar8 != 0) goto code_r0x0800c460;
code_r0x0800c4d0:
        if (*(iVar9 + 0x2e8) == 0) goto code_r0x0800c4d8;
code_r0x0800c484:
        uVar4 = snd_soc_component_read(*(arg1 + 0xf8));
        uVar4 = (uVar4 & *(*(arg1 + 0x3a8) + 0x2ea)) >> (*(*(arg1 + 0x3a8) + 0x2eb) & 0x1f);
    }
    else {
        uVar5 = snd_soc_component_read(*(arg1 + 0xf8));
        iVar9 = *(arg1 + 0x3a8);
        uVar5 = (uVar5 & *(iVar9 + 0xaa)) >> (*(iVar9 + 0xab) & 0x1f);
        if (*(iVar9 + 0xa8) != 0) {
            snd_soc_component_update_bits(*(arg1 + 0xf8),*(iVar9 + 0xa8),*(iVar9 + 0xaa),0);
            iVar9 = *(arg1 + 0x3a8);
            iVar8 = *(iVar9 + 0x1f8);
            goto joined_r0x0800c5ec;
        }
        iVar8 = *(iVar9 + 0x1f8);
        if (iVar8 == 0) goto code_r0x0800c4d0;
code_r0x0800c460:
        snd_soc_component_update_bits(*(arg1 + 0xf8),iVar8,*(iVar9 + 0x1fa),1 << (*(iVar9 + 0x1fb) & 0x1f));
        if (*(*(arg1 + 0x3a8) + 0x2e8) != 0) goto code_r0x0800c484;
code_r0x0800c4d8:
        uVar4 = 0xea;
    }
    usleep_range_state(20000,0x4e84,2);
    if (*(*(arg1 + 0x3a8) + 0xe8) == 0) {
        uVar14 = 0xea;
    }
    else {
        uVar14 = snd_soc_component_read(*(arg1 + 0xf8));
        uVar14 = (uVar14 & *(*(arg1 + 0x3a8) + 0xea)) >> (*(*(arg1 + 0x3a8) + 0xeb) & 0x3f);
    }
    uVar7 = sym.wcd_swch_level_remove(arg1);
    if ((uVar7 & 1) == 0) {
        _printk(0x8001ac0,"wcd_mbhc_adc_detect_anc_plug_type",1);
        iVar6 = sym.wcd_measure_adc_once(arg1,2);
        if (iVar6 == 0) {
code_r0x0800c578:
            uVar13 = 0;
            uVar11 = 1;
        }
        else {
            if (3 < uVar14) goto code_r0x0800c98c;
            if (*(uVar14 * 4 + 0x8003758) <= iVar6) goto code_r0x0800c578;
            uVar11 = 0;
            uVar13 = 1;
        }
        uVar7 = sym.wcd_swch_level_remove(arg1);
        if ((uVar7 & 1) == 0) {
            _printk(0x8001ac0,"wcd_mbhc_adc_detect_anc_plug_type",2);
            iVar6 = sym.wcd_measure_adc_once(arg1,2);
            if (iVar6 == 0) {
code_r0x0800c5f4:
                uVar11 = uVar11 + 1;
            }
            else {
                if (3 < uVar14) goto code_r0x0800c98c;
                if (*(uVar14 * 4 + 0x8003758) <= iVar6) goto code_r0x0800c5f4;
                uVar13 = uVar13 + 1;
            }
            uVar7 = sym.wcd_swch_level_remove(arg1);
            if ((uVar7 & 1) == 0) {
                _printk(0x8001ac0,"wcd_mbhc_adc_detect_anc_plug_type",3);
                iVar6 = sym.wcd_measure_adc_once(arg1,2);
                if (iVar6 == 0) {
code_r0x0800c650:
                    uVar11 = uVar11 + 1;
                }
                else {
                    if (3 < uVar14) goto code_r0x0800c98c;
                    if (*(uVar14 * 4 + 0x8003758) <= iVar6) goto code_r0x0800c650;
                    uVar13 = uVar13 + 1;
                }
                uVar7 = sym.wcd_swch_level_remove(arg1);
                if ((uVar7 & 1) == 0) {
                    _printk(0x8001ac0,"wcd_mbhc_adc_detect_anc_plug_type",4);
                    iVar6 = sym.wcd_measure_adc_once(arg1,2);
                    if (iVar6 == 0) {
code_r0x0800c6ac:
                        uVar11 = uVar11 + 1;
                    }
                    else {
                        if (3 < uVar14) goto code_r0x0800c98c;
                        if (*(uVar14 * 4 + 0x8003758) <= iVar6) goto code_r0x0800c6ac;
                        uVar13 = uVar13 + 1;
                    }
                    uVar7 = sym.wcd_swch_level_remove(arg1);
                    if ((uVar7 & 1) == 0) {
                        _printk(0x8001ac0,"wcd_mbhc_adc_detect_anc_plug_type",5);
                        iVar6 = sym.wcd_measure_adc_once(arg1,2);
                        if (iVar6 == 0) {
code_r0x0800c708:
                            uVar11 = uVar11 + 1;
                        }
                        else {
                            if (3 < uVar14) goto code_r0x0800c98c;
                            if (*(uVar14 * 4 + 0x8003758) <= iVar6) goto code_r0x0800c708;
                            uVar13 = uVar13 + 1;
                        }
                        uVar7 = sym.wcd_swch_level_remove(arg1);
                        if ((uVar7 & 1) == 0) {
                            _printk(0x8001ac0,"wcd_mbhc_adc_detect_anc_plug_type",6);
                            iVar6 = sym.wcd_measure_adc_once(arg1,2);
                            if (iVar6 == 0) {
code_r0x0800c764:
                                uVar11 = uVar11 + 1;
                            }
                            else {
                                if (3 < uVar14) goto code_r0x0800c98c;
                                if (*(uVar14 * 4 + 0x8003758) <= iVar6) goto code_r0x0800c764;
                                uVar13 = uVar13 + 1;
                            }
                            uVar7 = sym.wcd_swch_level_remove(arg1);
                            if ((uVar7 & 1) == 0) {
                                _printk(0x8001ac0,"wcd_mbhc_adc_detect_anc_plug_type",7);
                                iVar6 = sym.wcd_measure_adc_once(arg1,2);
                                if (iVar6 == 0) {
code_r0x0800c960:
                                    uVar11 = uVar11 + 1;
                                }
                                else {
                                    if (3 < uVar14) {
code_r0x0800c98c:
    //WARNING: Does not return
                                        pcVar12 = SoftwareBreakpoint(0x5512,0x800c990);
                                        (*pcVar12)();
                                    }
                                    if (*(uVar14 * 4 + 0x8003758) <= iVar6) goto code_r0x0800c960;
                                    uVar13 = uVar13 + 1;
                                }
                                _printk(0x8002066,"wcd_mbhc_adc_detect_anc_plug_type",uVar13,uVar11);
                                bVar10 = uVar11 < uVar13;
                                goto code_r0x0800c78c;
                            }
                        }
                    }
                }
            }
        }
    }
    _printk(0x80017c6,"wcd_mbhc_adc_detect_anc_plug_type");
    bVar10 = false;
code_r0x0800c78c:
    iVar9 = *(arg1 + 0x3a8);
    if (*(iVar9 + 0x2e8) == 0) {
        iVar8 = *(iVar9 + 0x1f8);
    }
    else {
        snd_soc_component_update_bits
                  (*(arg1 + 0xf8),*(iVar9 + 0x2e8),*(iVar9 + 0x2ea),uVar4 << (*(iVar9 + 0x2eb) & 0x1f));
        iVar9 = *(arg1 + 0x3a8);
        iVar8 = *(iVar9 + 0x1f8);
    }
    if (iVar8 == 0) {
        iVar8 = *(iVar9 + 0xb8);
    }
    else {
        snd_soc_component_update_bits(*(arg1 + 0xf8),iVar8,*(iVar9 + 0x1fa),0);
        iVar9 = *(arg1 + 0x3a8);
        iVar8 = *(iVar9 + 0xb8);
    }
    if (iVar8 == 0) {
        iVar8 = *(iVar9 + 0x218);
    }
    else {
        snd_soc_component_update_bits(*(arg1 + 0xf8),iVar8,*(iVar9 + 0xba),0);
        iVar9 = *(arg1 + 0x3a8);
        iVar8 = *(iVar9 + 0x218);
    }
    if (iVar8 == 0) {
        iVar8 = *(iVar9 + 0xb8);
    }
    else {
        snd_soc_component_update_bits(*(arg1 + 0xf8),iVar8,*(iVar9 + 0x21a),0);
        iVar9 = *(arg1 + 0x3a8);
        iVar8 = *(iVar9 + 0xb8);
    }
    if (iVar8 != 0) {
        snd_soc_component_update_bits(*(arg1 + 0xf8),iVar8,*(iVar9 + 0xba),1 << (*(iVar9 + 0xbb) & 0x1f));
        iVar9 = *(arg1 + 0x3a8);
        if (*(iVar9 + 0xb8) != 0) {
            snd_soc_component_update_bits
                      (*(arg1 + 0xf8),*(iVar9 + 0xb8),*(iVar9 + 0xba),uVar3 << (*(iVar9 + 0xbb) & 0x1f));
            iVar9 = *(arg1 + 0x3a8);
        }
    }
    if (*(iVar9 + 0x2f8) != 0) {
        snd_soc_component_update_bits
                  (*(arg1 + 0xf8),*(iVar9 + 0x2f8),*(iVar9 + 0x2fa),uVar2 << (*(iVar9 + 0x2fb) & 0x1f));
        iVar9 = *(arg1 + 0x3a8);
    }
    if (*(iVar9 + 0xa8) != 0) {
        snd_soc_component_update_bits
                  (*(arg1 + 0xf8),*(iVar9 + 0xa8),*(iVar9 + 0xaa),uVar5 << (*(iVar9 + 0xab) & 0x1f));
    }
    pcVar12 = *(*(arg1 + 0x98) + 0xd0);
    __cfi_slowpath_diag(0x1d4dfe77ec242b3c,pcVar12,0x8001370);
    (*pcVar12)(*(arg1 + 0xf8),*(*(arg1 + 0x90) + 0x50),3);
    pcVar1 = 0x800317f;
    if (bVar10 == false) {
        pcVar1 = "not ";
    }
    _printk(0x800297f,"wcd_mbhc_adc_detect_anc_plug_type",pcVar1);
    return bVar10;
}


// ===== sym.wcd_cancel_hs_detect_plug @ 0x0800c990 (size 248) =====

void sym.wcd_cancel_hs_detect_plug(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x800312a,"wcd_cancel_hs_detect_plug");
    *(arg1 + 0xee) = 1;
    _printk(0x80018cb,"wcd_cancel_hs_detect_plug");
    mutex_unlock(arg1 + 0x328);
    uVar1 = cancel_work_sync(arg2);
    if ((uVar1 & 1) != 0) {
        _printk(0x8003271,"wcd_cancel_hs_detect_plug");
        pcVar2 = *(*(arg1 + 0x98) + 0x90);
        __cfi_slowpath_diag(0xce1a9c61fa6df8c5,pcVar2,0x8001390);
        (*pcVar2)(arg1,0);
    }
    _printk(0x8002ef3,"wcd_cancel_hs_detect_plug");
    mutex_lock(arg1 + 0x328);
    _printk(0x8001a88,"wcd_cancel_hs_detect_plug");
    return;
}


// ===== sym.wcd_measure_adc_once @ 0x0800ca88 (size 760) =====

int sym.wcd_measure_adc_once(int64_t arg1,int64_t arg2)

{
    int16_t iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t iVar5;
    ulong *in_x18;
    uint32_t uVar6;
    uint32_t uVar7;
    int iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8002012,"wcd_measure_adc_once");
    iVar5 = *(arg1 + 0x3a8);
    if (*(iVar5 + 0x2e8) != 0) {
        snd_soc_component_update_bits(*(arg1 + 0xf8),*(iVar5 + 0x2e8),*(iVar5 + 0x2ea),0);
        iVar5 = *(arg1 + 0x3a8);
    }
    if (*(iVar5 + 0x298) == 0) {
        uVar2 = 0xea;
        iVar1 = *(iVar5 + 0xb8);
    }
    else {
        uVar2 = snd_soc_component_read(*(arg1 + 0xf8));
        iVar5 = *(arg1 + 0x3a8);
        uVar2 = (uVar2 & *(iVar5 + 0x29a)) >> (*(iVar5 + 0x29b) & 0x1f);
        if (*(iVar5 + 0x298) == 0) {
            iVar1 = *(iVar5 + 0xb8);
        }
        else {
            snd_soc_component_update_bits(*(arg1 + 0xf8),*(iVar5 + 0x298),*(iVar5 + 0x29a),0);
            iVar5 = *(arg1 + 0x3a8);
            iVar1 = *(iVar5 + 0xb8);
        }
    }
    if (iVar1 == 0) {
        iVar1 = *(iVar5 + 0x218);
    }
    else {
        snd_soc_component_update_bits(*(arg1 + 0xf8),iVar1,*(iVar5 + 0xba),0);
        iVar5 = *(arg1 + 0x3a8);
        iVar1 = *(iVar5 + 0x218);
    }
    if (iVar1 == 0) {
        iVar1 = *(iVar5 + 0xb8);
    }
    else {
        snd_soc_component_update_bits(*(arg1 + 0xf8),iVar1,*(iVar5 + 0x21a),arg2 << (*(iVar5 + 0x21b) & 0x1f));
        iVar5 = *(arg1 + 0x3a8);
        iVar1 = *(iVar5 + 0xb8);
    }
    if (iVar1 == 0) {
        iVar1 = *(iVar5 + 0x298);
    }
    else {
        snd_soc_component_update_bits(*(arg1 + 0xf8),iVar1,*(iVar5 + 0xba),1 << (*(iVar5 + 0xbb) & 0x1f));
        iVar5 = *(arg1 + 0x3a8);
        iVar1 = *(iVar5 + 0x298);
    }
    if (iVar1 != 0) {
        snd_soc_component_update_bits(*(arg1 + 0xf8),iVar1,*(iVar5 + 0x29a),1 << (*(iVar5 + 0x29b) & 0x1f));
    }
    iVar8 = 5;
    do {
        usleep_range_state(600,0x262,2);
        iVar5 = *(arg1 + 0x3a8);
        if (*(iVar5 + 0x2b8) == 0) {
            uVar3 = 0xea;
        }
        else {
            uVar3 = snd_soc_component_read(*(arg1 + 0xf8));
            iVar5 = *(arg1 + 0x3a8);
            uVar3 = (uVar3 & *(iVar5 + 0x2ba)) >> (*(iVar5 + 699) & 0x1f);
            if (uVar3 == 0) {
                if (*(iVar5 + 0x2a8) == 0) {
                    uVar6 = 0xea;
                }
                else {
                    uVar3 = snd_soc_component_read(*(arg1 + 0xf8));
                    iVar5 = *(arg1 + 0x3a8);
                    uVar6 = (uVar3 & *(iVar5 + 0x2aa)) >> (*(iVar5 + 0x2ab) & 0x1f);
                    if (uVar6 == 0) {
                        uVar3 = 0;
                        goto code_r0x0800cb60;
                    }
                }
                if (*(iVar5 + 0x2c8) == 0) {
                    uVar7 = 0xea;
                }
                else {
                    uVar3 = snd_soc_component_read(*(arg1 + 0xf8));
                    uVar7 = (uVar3 & *(*(arg1 + 0x3a8) + 0x2ca)) >> (*(*(arg1 + 0x3a8) + 0x2cb) & 0x1f);
                }
                _printk(0x80025a5,"wcd_measure_adc_once",uVar7);
                iVar4 = sym.wcd_mbhc_get_micbias(arg1);
                uVar3 = 0;
                iVar4 = (uVar7 * iVar4 * 0x7d) / 18000;
                iVar5 = *(arg1 + 0x3a8);
                iVar1 = *(iVar5 + 0x298);
                goto joined_r0x0800cd78;
            }
        }
code_r0x0800cb60:
        iVar8 = iVar8 + -1;
    } while (iVar8 != -1);
    iVar4 = 0;
    uVar6 = 0;
    iVar1 = *(iVar5 + 0x298);
joined_r0x0800cd78:
    if (iVar1 != 0) {
        snd_soc_component_update_bits(*(arg1 + 0xf8),iVar1,*(iVar5 + 0x29a),uVar2 << (*(iVar5 + 0x29b) & 0x1f));
    }
    if (iVar8 < 1) {
        _printk(0x8001c21,"wcd_measure_adc_once",uVar6,uVar3);
        iVar4 = -0x16;
    }
    else {
        _printk(0x8003443,"wcd_measure_adc_once",uVar6,uVar3,iVar4);
    }
    _printk(0x8002bbe,"wcd_measure_adc_once");
    return iVar4;
}


// ===== sym.wcd_mbhc_get_micbias @ 0x0800cd80 (size 268) =====

//WARNING: Type propagation algorithm not settling

int sym.wcd_mbhc_get_micbias(int64_t arg1)

{
    int16_t iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    ulong uVar10;
    int64_t iVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    int iVar12;
    code *pcVar13;
    uint uVar14;
    ulong unaff_x30;
    int iStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_28 = *(iVar8 + 0x5e0);
    iStack_2c = 0;
    pcVar13 = *(*(arg1 + 0x98) + 0x18);
    if (pcVar13 == NULL) {
        if (*(*(arg1 + 0x3a8) + 0x2d8) == 0) {
            uVar2 = 0xea;
        }
        else {
            uVar2 = snd_soc_component_read(*(arg1 + 0xf8));
            uVar2 = (uVar2 & *(*(arg1 + 0x3a8) + 0x2da)) >> (*(*(arg1 + 0x3a8) + 0x2db) & 0x1f);
        }
        iVar12 = uVar2 * 0x32 + 1000;
        _printk(0x8002282,"wcd_mbhc_get_micbias",uVar2,iVar12);
    }
    else {
        __cfi_slowpath_diag(0xee71287c339f8a6e,pcVar13,0x80012d0);
        (*pcVar13)(arg1,&iStack_2c);
        _printk(0x8003117,"wcd_mbhc_get_micbias",iStack_2c);
        iVar12 = iStack_2c;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_28) {
        iVar8 = __stack_chk_fail();
        *extraout_x18 = sym.wcd_check_cross_conn;
        _printk(0x8002012,"wcd_check_cross_conn");
        uVar9 = sym.wcd_swch_level_remove(iVar8);
        if ((uVar9 & 1) != 0) {
            _printk(0x80017c6,"wcd_check_cross_conn");
            return -0x16;
        }
        pcVar13 = *(*(iVar8 + 0x98) + 0xb8);
        if (pcVar13 != NULL) {
            __cfi_slowpath_diag(0xf1cf56a12423eb51,pcVar13,0x8001510);
            uVar9 = (*pcVar13)(*(iVar8 + 0xf8));
            if ((uVar9 & 1) != 0) {
                return -0x16;
            }
        }
        if (*(*(iVar8 + 0x3a8) + 0xa8) == 0) {
            uVar2 = 0xea;
        }
        else {
            uVar2 = snd_soc_component_read(*(iVar8 + 0xf8));
            iVar11 = *(iVar8 + 0x3a8);
            uVar2 = (uVar2 & *(iVar11 + 0xaa)) >> (*(iVar11 + 0xab) & 0x1f);
            if (*(iVar11 + 0xa8) != 0) {
                snd_soc_component_update_bits(*(iVar8 + 0xf8),*(iVar11 + 0xa8),*(iVar11 + 0xaa),0);
            }
        }
        pcVar13 = *(*(iVar8 + 0x98) + 8);
        if (pcVar13 != NULL) {
            __cfi_slowpath_diag(0x7580eeff27e3c667,pcVar13,0x8001530);
            (*pcVar13)(iVar8,0);
        }
        iVar11 = *(iVar8 + 0x3a8);
        if (*(iVar11 + 0x2e8) == 0) {
            uVar5 = 0xea;
            iVar1 = *(iVar11 + 0x298);
        }
        else {
            uVar5 = snd_soc_component_read(*(iVar8 + 0xf8));
            iVar11 = *(iVar8 + 0x3a8);
            uVar5 = (uVar5 & *(iVar11 + 0x2ea)) >> (*(iVar11 + 0x2eb) & 0x1f);
            iVar1 = *(iVar11 + 0x298);
        }
        if (iVar1 == 0) {
            uVar3 = 0xea;
            iVar1 = *(iVar11 + 0xb8);
        }
        else {
            uVar3 = snd_soc_component_read(*(iVar8 + 0xf8));
            iVar11 = *(iVar8 + 0x3a8);
            uVar3 = (uVar3 & *(iVar11 + 0x29a)) >> (*(iVar11 + 0x29b) & 0x1f);
            iVar1 = *(iVar11 + 0xb8);
        }
        if (iVar1 == 0) {
            uVar4 = 0xea;
        }
        else {
            uVar4 = snd_soc_component_read(*(iVar8 + 0xf8));
            uVar4 = (uVar4 & *(*(iVar8 + 0x3a8) + 0xba)) >> (*(*(iVar8 + 0x3a8) + 0xbb) & 0x1f);
        }
        uVar6 = sym.wcd_measure_adc_once(iVar8,4);
        if (uVar6 < 0) {
            iVar12 = 0;
            uVar14 = 0;
            uVar10 = 0x8001f83;
        }
        else {
            uVar7 = sym.wcd_measure_adc_once(iVar8,5);
            if (uVar7 < 0) {
                iVar12 = 0;
                uVar14 = 0;
                uVar10 = 0x8001a24;
            }
            else {
                pcVar13 = **(iVar8 + 0x98);
                if (pcVar13 != NULL) {
                    if (4 < (pcVar13 + -0x8004440 >> 3 | pcVar13 << 0x3d)) {
                        __cfi_slowpath_diag(0xc18342d5baef945d,pcVar13,0x8001550);
                    }
                    (*pcVar13)(iVar8);
                }
                if ((*(iVar8 + 0xe4) < uVar6) || (*(iVar8 + 0xe8) < uVar7)) {
                    uVar14 = 4;
                    iVar12 = 1;
                    uVar10 = 0x8001df7;
                }
                else {
                    iVar12 = 0;
                    uVar14 = 0;
                    uVar10 = 0x800188f;
                }
            }
        }
        _printk(uVar10,"wcd_check_cross_conn");
        iVar11 = *(iVar8 + 0x3a8);
        if (*(iVar11 + 0xb8) == 0) {
            iVar1 = *(iVar11 + 0x218);
        }
        else {
            snd_soc_component_update_bits(*(iVar8 + 0xf8),*(iVar11 + 0xb8),*(iVar11 + 0xba),0);
            iVar11 = *(iVar8 + 0x3a8);
            iVar1 = *(iVar11 + 0x218);
        }
        if (iVar1 == 0) {
            iVar1 = *(iVar11 + 0xb8);
        }
        else {
            snd_soc_component_update_bits(*(iVar8 + 0xf8),iVar1,*(iVar11 + 0x21a),0);
            iVar11 = *(iVar8 + 0x3a8);
            iVar1 = *(iVar11 + 0xb8);
        }
        if (iVar1 == 0) {
            iVar1 = *(iVar11 + 0x298);
        }
        else {
            snd_soc_component_update_bits(*(iVar8 + 0xf8),iVar1,*(iVar11 + 0xba),1 << (*(iVar11 + 0xbb) & 0x1f));
            iVar11 = *(iVar8 + 0x3a8);
            iVar1 = *(iVar11 + 0x298);
        }
        if (iVar1 == 0) {
            iVar1 = *(iVar11 + 0x2e8);
        }
        else {
            snd_soc_component_update_bits
                      (*(iVar8 + 0xf8),iVar1,*(iVar11 + 0x29a),uVar3 << (*(iVar11 + 0x29b) & 0x1f));
            iVar11 = *(iVar8 + 0x3a8);
            iVar1 = *(iVar11 + 0x2e8);
        }
        if (iVar1 == 0) {
            iVar1 = *(iVar11 + 0xb8);
        }
        else {
            snd_soc_component_update_bits
                      (*(iVar8 + 0xf8),iVar1,*(iVar11 + 0x2ea),uVar5 << (*(iVar11 + 0x2eb) & 0x1f));
            iVar11 = *(iVar8 + 0x3a8);
            iVar1 = *(iVar11 + 0xb8);
        }
        if (iVar1 != 0) {
            snd_soc_component_update_bits(*(iVar8 + 0xf8),iVar1,*(iVar11 + 0xba),uVar4 << (*(iVar11 + 0xbb) & 0x1f));
        }
        pcVar13 = *(*(iVar8 + 0x98) + 8);
        if (pcVar13 != NULL) {
            __cfi_slowpath_diag(0x7580eeff27e3c667,pcVar13,0x8001570);
            (*pcVar13)(iVar8,1);
        }
        iVar11 = *(iVar8 + 0x3a8);
        if (*(iVar11 + 0xa8) != 0) {
            snd_soc_component_update_bits
                      (*(iVar8 + 0xf8),*(iVar11 + 0xa8),*(iVar11 + 0xaa),uVar2 << (*(iVar11 + 0xab) & 0x1f));
        }
        _printk(0x8001e1a,"wcd_check_cross_conn",uVar14);
        return iVar12;
    }
    return iVar12;
}


// ===== sym.wcd_check_cross_conn @ 0x0800ce8c (size 1052) =====

//WARNING: Type propagation algorithm not settling

ulong sym.wcd_check_cross_conn(int64_t arg1)

{
    int16_t iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong uVar9;
    int64_t iVar10;
    ulong *in_x18;
    code *pcVar11;
    ulong uVar12;
    uint uVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8002012,"wcd_check_cross_conn");
    uVar8 = sym.wcd_swch_level_remove(arg1);
    if ((uVar8 & 1) != 0) {
        _printk(0x80017c6,"wcd_check_cross_conn");
        return 0xffffffea;
    }
    pcVar11 = *(*(arg1 + 0x98) + 0xb8);
    if (pcVar11 != NULL) {
        __cfi_slowpath_diag(0xf1cf56a12423eb51,pcVar11,0x8001510);
        uVar8 = (*pcVar11)(*(arg1 + 0xf8));
        if ((uVar8 & 1) != 0) {
            return 0xffffffea;
        }
    }
    if (*(*(arg1 + 0x3a8) + 0xa8) == 0) {
        uVar2 = 0xea;
    }
    else {
        uVar2 = snd_soc_component_read(*(arg1 + 0xf8));
        iVar10 = *(arg1 + 0x3a8);
        uVar2 = (uVar2 & *(iVar10 + 0xaa)) >> (*(iVar10 + 0xab) & 0x1f);
        if (*(iVar10 + 0xa8) != 0) {
            snd_soc_component_update_bits(*(arg1 + 0xf8),*(iVar10 + 0xa8),*(iVar10 + 0xaa),0);
        }
    }
    pcVar11 = *(*(arg1 + 0x98) + 8);
    if (pcVar11 != NULL) {
        __cfi_slowpath_diag(0x7580eeff27e3c667,pcVar11,0x8001530);
        (*pcVar11)(arg1,0);
    }
    iVar10 = *(arg1 + 0x3a8);
    if (*(iVar10 + 0x2e8) == 0) {
        uVar5 = 0xea;
        iVar1 = *(iVar10 + 0x298);
    }
    else {
        uVar5 = snd_soc_component_read(*(arg1 + 0xf8));
        iVar10 = *(arg1 + 0x3a8);
        uVar5 = (uVar5 & *(iVar10 + 0x2ea)) >> (*(iVar10 + 0x2eb) & 0x1f);
        iVar1 = *(iVar10 + 0x298);
    }
    if (iVar1 == 0) {
        uVar3 = 0xea;
        iVar1 = *(iVar10 + 0xb8);
    }
    else {
        uVar3 = snd_soc_component_read(*(arg1 + 0xf8));
        iVar10 = *(arg1 + 0x3a8);
        uVar3 = (uVar3 & *(iVar10 + 0x29a)) >> (*(iVar10 + 0x29b) & 0x1f);
        iVar1 = *(iVar10 + 0xb8);
    }
    if (iVar1 == 0) {
        uVar4 = 0xea;
    }
    else {
        uVar4 = snd_soc_component_read(*(arg1 + 0xf8));
        uVar4 = (uVar4 & *(*(arg1 + 0x3a8) + 0xba)) >> (*(*(arg1 + 0x3a8) + 0xbb) & 0x1f);
    }
    uVar6 = sym.wcd_measure_adc_once(arg1,4);
    if (uVar6 < 0) {
        uVar12 = 0;
        uVar13 = 0;
        uVar9 = 0x8001f83;
    }
    else {
        uVar7 = sym.wcd_measure_adc_once(arg1,5);
        if (uVar7 < 0) {
            uVar12 = 0;
            uVar13 = 0;
            uVar9 = 0x8001a24;
        }
        else {
            pcVar11 = **(arg1 + 0x98);
            if (pcVar11 != NULL) {
                if (4 < (pcVar11 + -0x8004440 >> 3 | pcVar11 << 0x3d)) {
                    __cfi_slowpath_diag(0xc18342d5baef945d,pcVar11,0x8001550);
                }
                (*pcVar11)(arg1);
            }
            if ((*(arg1 + 0xe4) < uVar6) || (*(arg1 + 0xe8) < uVar7)) {
                uVar13 = 4;
                uVar12 = 1;
                uVar9 = 0x8001df7;
            }
            else {
                uVar12 = 0;
                uVar13 = 0;
                uVar9 = 0x800188f;
            }
        }
    }
    _printk(uVar9,"wcd_check_cross_conn");
    iVar10 = *(arg1 + 0x3a8);
    if (*(iVar10 + 0xb8) == 0) {
        iVar1 = *(iVar10 + 0x218);
    }
    else {
        snd_soc_component_update_bits(*(arg1 + 0xf8),*(iVar10 + 0xb8),*(iVar10 + 0xba),0);
        iVar10 = *(arg1 + 0x3a8);
        iVar1 = *(iVar10 + 0x218);
    }
    if (iVar1 == 0) {
        iVar1 = *(iVar10 + 0xb8);
    }
    else {
        snd_soc_component_update_bits(*(arg1 + 0xf8),iVar1,*(iVar10 + 0x21a),0);
        iVar10 = *(arg1 + 0x3a8);
        iVar1 = *(iVar10 + 0xb8);
    }
    if (iVar1 == 0) {
        iVar1 = *(iVar10 + 0x298);
    }
    else {
        snd_soc_component_update_bits(*(arg1 + 0xf8),iVar1,*(iVar10 + 0xba),1 << (*(iVar10 + 0xbb) & 0x1f));
        iVar10 = *(arg1 + 0x3a8);
        iVar1 = *(iVar10 + 0x298);
    }
    if (iVar1 == 0) {
        iVar1 = *(iVar10 + 0x2e8);
    }
    else {
        snd_soc_component_update_bits(*(arg1 + 0xf8),iVar1,*(iVar10 + 0x29a),uVar3 << (*(iVar10 + 0x29b) & 0x1f));
        iVar10 = *(arg1 + 0x3a8);
        iVar1 = *(iVar10 + 0x2e8);
    }
    if (iVar1 == 0) {
        iVar1 = *(iVar10 + 0xb8);
    }
    else {
        snd_soc_component_update_bits(*(arg1 + 0xf8),iVar1,*(iVar10 + 0x2ea),uVar5 << (*(iVar10 + 0x2eb) & 0x1f));
        iVar10 = *(arg1 + 0x3a8);
        iVar1 = *(iVar10 + 0xb8);
    }
    if (iVar1 != 0) {
        snd_soc_component_update_bits(*(arg1 + 0xf8),iVar1,*(iVar10 + 0xba),uVar4 << (*(iVar10 + 0xbb) & 0x1f));
    }
    pcVar11 = *(*(arg1 + 0x98) + 8);
    if (pcVar11 != NULL) {
        __cfi_slowpath_diag(0x7580eeff27e3c667,pcVar11,0x8001570);
        (*pcVar11)(arg1,1);
    }
    iVar10 = *(arg1 + 0x3a8);
    if (*(iVar10 + 0xa8) != 0) {
        snd_soc_component_update_bits
                  (*(arg1 + 0xf8),*(iVar10 + 0xa8),*(iVar10 + 0xaa),uVar2 << (*(iVar10 + 0xab) & 0x1f));
    }
    _printk(0x8001e1a,"wcd_check_cross_conn",uVar13);
    return uVar12;
}


// ===== sym.init_module @ 0x0800d3f0 (size 92) =====

ulong sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __mutex_init(obj.wcd_mbhc_hs_elec_irq.__already_done,"&hphl_pa_lock",obj.init_completion.__key);
    __mutex_init(obj.hphr_pa_lock,"&hphr_pa_lock",obj.init_completion.__key);
    return 0;
}


// ===== sym.cleanup_module @ 0x0800d44c (size 12) =====

void sym.cleanup_module(void)

{
    return;
}

