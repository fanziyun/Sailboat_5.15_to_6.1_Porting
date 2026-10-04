// decompiled from pinctrl_lpi_dlkm by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 996) =====

//WARNING: Switch with 1 destination removed at 0x08002bdc

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0xf0e53c515545f2) {
        if (arg1 < -0x3557318fb8d07b71) {
            if (arg1 < -0x587ffabaca612230) {
                if (arg1 == -0x77b69042ae34e22a) {
                    pcVar2 = sym.lpi_gpio_dbg_show.e8320cc28db5e5667bc805daa01140fb.cfi_jt;
                }
                else {
                    if (arg1 != -0x77a0775a4580c3cb) goto code_r0x08002b9c;
                    pcVar2 = sym.gpiochip_generic_free.cfi_jt;
                }
            }
            else if (arg1 == -0x587ffabaca612230) {
                pcVar2 = sym.lpi_gpio_set.e8320cc28db5e5667bc805daa01140fb.cfi_jt;
            }
            else {
                if (arg1 == -0x57be845bca9148ef) {
                    if ((pcVar1 + -0x8001488 >> 3 | pcVar1 << 0x3d) < 4) {
                        return;
                    }
                    goto code_r0x08002b9c;
                }
                if (arg1 != -0x48ef54602b463a27) goto code_r0x08002b9c;
                pcVar2 = sym.lpi_pinctrl_ssr_disable.e8320cc28db5e5667bc805daa01140fb.cfi_jt;
            }
        }
        else if (arg1 < -0x1cd02ce2833ba7b2) {
            if (arg1 == -0x3557318fb8d07b71) {
                pcVar2 = sym.lpi_pinctrl_remove.e8320cc28db5e5667bc805daa01140fb.cfi_jt;
code_r0x080013d0:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x08002b9c;
            }
            if (arg1 != -0x2d1ef4d8549a89e5) goto code_r0x08002b9c;
            pcVar2 = sym.lpi_pinctrl_ssr_enable.e8320cc28db5e5667bc805daa01140fb.cfi_jt;
        }
        else if (arg1 == -0x1cd02ce2833ba7b2) {
            pcVar2 = sym.lpi_config_get.e8320cc28db5e5667bc805daa01140fb.cfi_jt;
        }
        else {
            if (arg1 == -0x1cb09a6eed38ba56) {
                pcVar2 = sym.lpi_gpio_get_functions_count.e8320cc28db5e5667bc805daa01140fb.cfi_jt;
                goto code_r0x080013d0;
            }
            if (arg1 != -0x180cff1a9f8f2532) goto code_r0x08002b9c;
            pcVar2 = sym.lpi_gpio_get_group_pins.e8320cc28db5e5667bc805daa01140fb.cfi_jt;
        }
    }
    else if (arg1 < 0x377e9528983fbb7e) {
        if (arg1 < 0x2b3a43e29242445) {
            if (arg1 == 0xf0e53c515545f2) {
                pcVar2 = sym.lpi_config_set.e8320cc28db5e5667bc805daa01140fb.cfi_jt;
            }
            else {
                if (arg1 != 0x15d75c9cb8be166) goto code_r0x08002b9c;
                pcVar2 = sym.lpi_gpio_get_function_groups.e8320cc28db5e5667bc805daa01140fb.cfi_jt;
            }
        }
        else if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else {
            if (arg1 == 0x3b314f7e6c3546b) {
                if ((pcVar1 + -0x8001460 >> 3 | pcVar1 << 0x3d) < 3) {
                    return;
                }
                goto code_r0x08002b9c;
            }
            if (arg1 != 0x365d4a3aad0aad08) goto code_r0x08002b9c;
            pcVar2 = sym.lpi_gpio_direction_output.e8320cc28db5e5667bc805daa01140fb.cfi_jt;
        }
    }
    else if (arg1 < 0x59900d2c5a310a08) {
        if (arg1 == 0x377e9528983fbb7e) {
            pcVar2 = sym.pinctrl_utils_free_map.cfi_jt;
        }
        else {
            if (arg1 != 0x3a5b8105ef6fba43) {
                if (arg1 != 0x4bc94621579436b9) goto code_r0x08002b9c;
                pcVar2 = sym.lpi_gpio_get_group_name.e8320cc28db5e5667bc805daa01140fb.cfi_jt;
                goto code_r0x080013d0;
            }
            pcVar2 = sym.pinconf_generic_dt_node_to_map_group.e8320cc28db5e5667bc805daa01140fb.cfi_jt;
        }
    }
    else if (arg1 == 0x59900d2c5a310a08) {
        pcVar2 = sym.lpi_gpio_set_mux.e8320cc28db5e5667bc805daa01140fb.cfi_jt;
    }
    else if (arg1 == 0x7d57972cd3914fb1) {
        pcVar2 = sym.lpi_notifier_service_cb.e8320cc28db5e5667bc805daa01140fb.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08002b9c;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08002b9c:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002bf0);
    (*pcVar1)();
}


// ===== sym.lpi_gpio_get_group_name.e8320cc28db5e5667bc805daa01140fb.cfi_jt @ 0x080013f0 (size 8) =====

ulong sym.lpi_gpio_get_group_name.e8320cc28db5e5667bc805daa01140fb.cfi_jt(int64_t param_1,uint32_t param_2)

{
    return *(*(*(param_1 + 0x10) + 8) + param_2 * 0x18 + 8);
}


// ===== sym.lpi_gpio_get_function_name.e8320cc28db5e5667bc805daa01140fb.cfi_jt @ 0x080013f8 (size 8) =====

ulong sym.lpi_gpio_get_function_name.e8320cc28db5e5667bc805daa01140fb.cfi_jt(ulong param_1,uint32_t param_2)

{
    code *pcVar1;
    
    if (param_2 < 6) {
        return *(obj.lpi_gpio_functions + param_2 * 8);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8001ea0);
    (*pcVar1)();
}


// ===== sym.lpi_notifier_service_cb.e8320cc28db5e5667bc805daa01140fb.cfi_jt @ 0x08001400 (size 8) =====

ulong sym.lpi_notifier_service_cb.e8320cc28db5e5667bc805daa01140fb.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 == 1) {
        if (obj.initial_boot == 0x1) {
            obj.initial_boot = 0x0;
        }
        obj.lpi_dev_up = 0x1;
        snd_event_notify(_segment.ehdr,1);
    }
    else if (param_2 == 0) {
        if (obj.initial_boot == 0x1) {
            obj.initial_boot = 0x0;
        }
        else {
            obj.lpi_dev_up = 0x0;
        }
    }
    return 1;
}


// ===== sym.pinctrl_utils_free_map.cfi_jt @ 0x08001408 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.pinctrl_utils_free_map.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.lpi_gpio_dbg_show.e8320cc28db5e5667bc805daa01140fb.cfi_jt @ 0x08001410 (size 8) =====

void sym.lpi_gpio_dbg_show.e8320cc28db5e5667bc805daa01140fb.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong uVar1;
    ulong uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    uint64_t uVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_2 + 0x94) != 0) {
        iVar7 = 0;
        uVar6 = 0;
        do {
            iVar3 = gpiochip_get_data(param_2);
            iVar3 = *(*(*(iVar3 + 8) + 0x10) + 8) + iVar7;
            uVar2 = *(iVar3 + 8);
            iVar3 = *(iVar3 + 0x10);
            uVar4 = sym.lpi_gpio_read(iVar3,4);
            uVar5 = sym.lpi_gpio_read(iVar3,0);
            uVar1 = 0x800077d;
            if ((uVar4 & 2) != 0) {
                uVar1 = 0x80003e8;
            }
            seq_printf(param_1," %-8s: %-3s %d",uVar2,uVar1,uVar5 >> 2 & 0xf);
            seq_printf(param_1,"",((uVar5 & 0xffffffff) >> 5 & 0xe) + 2);
            seq_printf(param_1,0x8000430,*(obj.lpi_gpio_dbg_show_one.pulls + (uVar5 & 3) * 8));
            seq_puts(param_1,0x80006e1);
            uVar6 = uVar6 + 1;
            iVar7 = iVar7 + 0x18;
        } while (uVar6 < *(param_2 + 0x94));
    }
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001418 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.lpi_pinctrl_probe.e8320cc28db5e5667bc805daa01140fb.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001420 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.lpi_pinctrl_probe.e8320cc28db5e5667bc805daa01140fb.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.lpi_gpio_get_group_pins.e8320cc28db5e5667bc805daa01140fb.cfi_jt @ 0x08001428 (size 8) =====

ulong sym.lpi_gpio_get_group_pins.e8320cc28db5e5667bc805daa01140fb.cfi_jt
                (int64_t param_1,uint32_t param_2,int64_t *param_3,uint *param_4)

{
    *param_3 = *(*(param_1 + 0x10) + 8) + param_2 * 0x18;
    *param_4 = 1;
    return 0;
}


// ===== sym.lpi_gpio_get_function_groups.e8320cc28db5e5667bc805daa01140fb.cfi_jt @ 0x08001430 (size 8) =====

ulong sym.lpi_gpio_get_function_groups.e8320cc28db5e5667bc805daa01140fb.cfi_jt
                (int64_t param_1,ulong param_2,ulong *param_3,uint *param_4)

{
    *param_3 = obj.lpi_gpio_groups;
    *param_4 = *(*(param_1 + 0x10) + 0x10);
    return 0;
}


// ===== sym.gpiochip_generic_free.cfi_jt @ 0x08001438 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.gpiochip_generic_free.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.lpi_config_set.e8320cc28db5e5667bc805daa01140fb.cfi_jt @ 0x08001440 (size 8) =====

void sym.lpi_config_set.e8320cc28db5e5667bc805daa01140fb.cfi_jt
               (int64_t param_1,uint32_t param_2,int64_t param_3,uint32_t param_4)

{
    uint32_t uVar1;
    char cVar2;
    bool bVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int iVar6;
    ulong uVar7;
    uint64_t uVar8;
    uint64_t extraout_x8;
    uint64_t *extraout_x9;
    uint64_t *puVar9;
    uint64_t uVar10;
    uint64_t extraout_x10;
    ulong *in_x18;
    uint32_t *arg1;
    uint32_t unaff_w22;
    int64_t unaff_x23;
    int64_t unaff_x24;
    uint64_t unaff_x25;
    uint64_t *unaff_x26;
    int64_t unaff_x27;
    int64_t unaff_x28;
    ulong unaff_x30;
    uint64_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_68 = *(iVar4 + 0x5e0);
    uStack_70 = 0;
    arg1 = *(*(*(param_1 + 0x10) + 8) + param_2 * 0x18 + 0x10);
    if (param_4 == 0) goto code_r0x080025c0;
    iVar6 = 0;
    unaff_x27 = 1;
    unaff_x26 = &uStack_70;
    unaff_x28 = 0x800085c;
    unaff_x24 = *(*(param_1 + 0x68) + 0x98) + 0x298;
code_r0x08002410:
    uVar8 = *(param_3 + iVar6 * 8);
    if ((uVar8 & 0xff) < 0x18) {
    //WARNING: Could not recover jumptable at 0x08002434. Too many branches
    //WARNING: Treating indirect jump as call
        (*(*(unaff_x28 + (uVar8 & 0xff) * 4) + 0x8002428))();
        return;
    }
    uVar7 = 0xffffffea;
code_r0x08002660:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_68) {
        return;
    }
    __stack_chk_fail(uVar7);
    uVar8 = extraout_x8;
    puVar9 = extraout_x9;
    uVar10 = extraout_x10;
    do {
        Hint_Prefetch(puVar9,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar9,0x10);
            if (bVar3) {
                *puVar9 = *puVar9 & (uVar10 ^ 0xffffffffffffffff);
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        while( true ) {
            uVar5 = unaff_x25 >> 1;
            unaff_x25 = uVar5 & 0x7fffffff;
            uVar1 = *arg1 + 1;
            *arg1 = uVar1;
            if ((uVar8 & 1) == 0) {
                *arg1 = 0;
                sym.lpi_gpio_write(arg1,0,uStack_70);
                mutex_unlock(unaff_x24);
                iVar6 = 3;
                unaff_x23 = param_3;
                unaff_w22 = param_4;
                if (param_4 < 4) goto code_r0x080025c0;
                goto code_r0x08002410;
            }
            uVar8 = 0;
            puVar9 = unaff_x26 + (uVar1 >> 3 & 0x1ffffff8);
            uVar10 = unaff_x27 << (uVar1 & 0x3f);
            if ((uVar5 & 1) == 0) break;
            Hint_Prefetch(puVar9,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar9,0x10);
                if (bVar3) {
                    *puVar9 = *puVar9 | uVar10;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
        }
    } while( true );
code_r0x080025c0:
    param_4 = unaff_w22;
    param_3 = unaff_x23;
    *(arg1 + 4) = *(arg1 + 6);
    *arg1 = arg1[1];
    iVar6 = sym.lpi_gpio_read(arg1,0);
    uStack_70 = iVar6 & 0xfffffffffffffc3cU | arg1[0xc] | arg1[0xd] * 0x20 - 0x40 & 0xffffffc0;
    if (arg1[3] != '\0') {
        uStack_70 = uStack_70 | *(arg1 + 0xd) << 9;
    }
    sym.lpi_gpio_write(arg1,0,uStack_70);
    sym.lpi_gpio_write(arg1,4,arg1[3] << 1);
    uVar7 = 0;
    goto code_r0x08002660;
}


// ===== sym.lpi_pinctrl_ssr_enable.e8320cc28db5e5667bc805daa01140fb.cfi_jt @ 0x08001448 (size 8) =====

ulong sym.lpi_pinctrl_ssr_enable.e8320cc28db5e5667bc805daa01140fb.cfi_jt(ulong param_1)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == 0) {
        _dev_err(param_1,"","lpi_pinctrl_ssr_enable");
        uVar1 = 0xffffffea;
    }
    else if ((obj.initial_boot & 1) == 0) {
        iVar2 = *(_segment.ehdr + 0x98);
        __trace_bprintk(0x8002a28,*0x8002000,"lpi_pinctrl_ssr_enable");
        if ((obj.lpi_dev_up & 1) == 0) {
            msleep(100);
            if (*(iVar2 + 0x288) != 0) {
                digital_cdc_rsc_mgr_hw_vote_reset();
            }
            if (*(iVar2 + 0x290) != 0) {
                digital_cdc_rsc_mgr_hw_vote_reset();
            }
        }
        uVar1 = 0;
        obj.lpi_dev_up = 0x1;
    }
    else {
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.lpi_config_get.e8320cc28db5e5667bc805daa01140fb.cfi_jt @ 0x08001450 (size 8) =====

ulong sym.lpi_config_get.e8320cc28db5e5667bc805daa01140fb.cfi_jt(int64_t param_1,uint32_t param_2,uint64_t *param_3)

{
    bool bVar1;
    ulong uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    
    uVar2 = 0xffffffea;
    if (0x11 < (*param_3 & 0xff)) {
        return 0xffffffea;
    }
    uVar3 = *param_3 & 0xff;
    iVar5 = *(*(*(param_1 + 0x10) + 8) + param_2 * 0x18 + 0x10);
    switch(uVar3) {
    case 0:
        uVar4 = 2;
        *(iVar5 + 0x30) = 2;
        break;
    case 1:
        uVar4 = 0;
        *(iVar5 + 0x30) = 0;
        break;
    default:
        goto code_r0x08002374;
    case 3:
        bVar1 = *(iVar5 + 0x30) == 1;
        goto code_r0x0800235c;
    case 5:
        bVar1 = *(iVar5 + 0x30) == 3;
code_r0x0800235c:
        uVar4 = bVar1;
        break;
    case 0xc:
    case 0x11:
        uVar4 = *(iVar5 + 0xc);
    }
    uVar2 = 0;
    *param_3 = uVar3 | uVar4 << 8;
code_r0x08002374:
    return uVar2;
}


// ===== sym.lpi_pinctrl_ssr_disable.e8320cc28db5e5667bc805daa01140fb.cfi_jt @ 0x08001458 (size 8) =====

void sym.lpi_pinctrl_ssr_disable.e8320cc28db5e5667bc805daa01140fb.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __trace_bprintk(0x8002ab8,*0x8002000,"");
    obj.lpi_dev_up = 0x0;
    sym.lpi_pinctrl_suspend(param_1);
    return;
}


// ===== sym.gpiochip_generic_request.cfi_jt @ 0x08001460 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.gpiochip_generic_request.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.lpi_gpio_direction_input.e8320cc28db5e5667bc805daa01140fb.cfi_jt @ 0x08001468 (size 8) =====

void sym.lpi_gpio_direction_input.e8320cc28db5e5667bc805daa01140fb.cfi_jt(ulong param_1,uint64_t param_2)

{
    int64_t iVar1;
    uint64_t extraout_x1;
    uint64_t extraout_x1_00;
    int iVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong unaff_x30;
    uint64_t uStack_60;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    ulong uStack_30;
    int64_t iStack_28;
    
    iVar2 = &uStack_30;
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    iVar1 = gpiochip_get_data();
    uStack_30 = 0x10c;
    sym.lpi_config_set(*(iVar1 + 8),param_2 & 0xffffffff,&uStack_30,1);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.lpi_gpio_direction_output;
    pcStack_48 = sym.lpi_gpio_direction_output;
    iVar1 = sp_el0;
    iStack_58 = *(iVar1 + 0x5e0);
    puStack_50 = &stack0xffffffffffffffe0;
    iVar1 = gpiochip_get_data();
    uStack_60 = iVar2 << 8 | 0x11;
    sym.lpi_config_set(*(iVar1 + 8),extraout_x1 & 0xffffffff,&uStack_60,1);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_58) {
        return;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.lpi_gpio_get;
    iVar1 = gpiochip_get_data();
    sym.lpi_gpio_read(*(*(*(*(iVar1 + 8) + 0x10) + 8) + (extraout_x1_00 & 0xffffffff) * 0x18 + 0x10),0);
    return;
}


// ===== sym.lpi_gpio_get.e8320cc28db5e5667bc805daa01140fb.cfi_jt @ 0x08001470 (size 8) =====

void sym.lpi_gpio_get.e8320cc28db5e5667bc805daa01140fb.cfi_jt(ulong param_1,uint64_t param_2)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = gpiochip_get_data();
    sym.lpi_gpio_read(*(*(*(*(iVar1 + 8) + 0x10) + 8) + (param_2 & 0xffffffff) * 0x18 + 0x10),0);
    return;
}


// ===== sym.lpi_gpio_get_functions_count.e8320cc28db5e5667bc805daa01140fb.cfi_jt @ 0x08001478 (size 8) =====

ulong sym.lpi_gpio_get_functions_count.e8320cc28db5e5667bc805daa01140fb.cfi_jt(void)

{
    return 6;
}


// ===== sym.lpi_gpio_get_groups_count.e8320cc28db5e5667bc805daa01140fb.cfi_jt @ 0x08001480 (size 8) =====

uint sym.lpi_gpio_get_groups_count.e8320cc28db5e5667bc805daa01140fb.cfi_jt(int64_t param_1)

{
    return *(*(param_1 + 0x10) + 0x10);
}


// ===== sym.lpi_pinctrl_suspend.cfi_jt @ 0x08001488 (size 8) =====

ulong sym.lpi_pinctrl_suspend.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __trace_bprintk(0x80014dc,*0x8002000,"lpi_pinctrl_suspend");
    if (((*(param_1 + 0x200) & 7) != 0) || (*(param_1 + 0x20c) != 2)) {
        sym.lpi_pinctrl_runtime_suspend(param_1);
        __pm_runtime_disable(param_1,1);
        __pm_runtime_set_status(param_1,2);
        pm_runtime_enable(param_1);
    }
    return 0;
}


// ===== sym.lpi_pinctrl_runtime_suspend.cfi_jt @ 0x08001490 (size 8) =====

ulong sym.lpi_pinctrl_runtime_suspend.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x98);
    iVar1 = *(iVar2 + 0x288);
    __trace_bprintk(0x8001588,*0x8002000,"");
    if ((*(iVar2 + 0x288) != 0) || (iVar1 = *(iVar2 + 0x290), iVar1 != 0)) {
        mutex_lock(iVar2 + 0x2d0);
        if (*(iVar2 + 0x2c8) != '\0') {
            digital_cdc_rsc_mgr_hw_vote_disable(iVar1,param_1);
            *(iVar2 + 0x2c8) = 0;
        }
        mutex_unlock(iVar2 + 0x2d0);
        __trace_bprintk(0x80015ec,*0x8002000,"");
    }
    return 0;
}


// ===== sym.lpi_pinctrl_runtime_resume.cfi_jt @ 0x08001498 (size 8) =====

ulong sym.lpi_pinctrl_runtime_resume.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0x98);
    iVar2 = *(iVar3 + 0x288);
    __trace_bprintk(0x8001654,*0x8002000,"");
    if ((*(iVar3 + 0x288) != 0) || (iVar2 = *(iVar3 + 0x290), iVar2 != 0)) {
        mutex_lock(iVar3 + 0x2d0);
        iVar1 = digital_cdc_rsc_mgr_hw_vote_enable(iVar2,param_1);
        if (iVar1 < 0) {
            pm_runtime_set_autosuspend_delay(param_1,1);
            iVar1 = ___ratelimit(obj.lpi_pinctrl_runtime_resume._rs,"");
            if (iVar1 != 0) {
                _dev_err(param_1,"%s:lpass core hw island enable failed\n","");
            }
        }
        else {
            *(iVar3 + 0x2c8) = 1;
            pm_runtime_set_autosuspend_delay(param_1,100);
        }
        mutex_unlock(iVar3 + 0x2d0);
        __trace_bprintk(0x80016ec,*0x8002000,"");
    }
    return 0;
}


// ===== sym.lpi_pinctrl_resume.cfi_jt @ 0x080014a0 (size 8) =====

ulong sym.lpi_pinctrl_resume.cfi_jt(void)

{
    return 0;
}


// ===== sym.lpi_gpio_direction_output.e8320cc28db5e5667bc805daa01140fb.cfi_jt @ 0x080014a8 (size 8) =====

void sym.lpi_gpio_direction_output.e8320cc28db5e5667bc805daa01140fb.cfi_jt(ulong param_1,uint64_t param_2,int param_3)

{
    int64_t iVar1;
    uint64_t extraout_x1;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint64_t uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    iVar1 = gpiochip_get_data();
    uStack_30 = param_3 << 8 | 0x11;
    sym.lpi_config_set(*(iVar1 + 8),param_2 & 0xffffffff,&uStack_30,1);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.lpi_gpio_get;
    iVar1 = gpiochip_get_data();
    sym.lpi_gpio_read(*(*(*(*(iVar1 + 8) + 0x10) + 8) + (extraout_x1 & 0xffffffff) * 0x18 + 0x10),0);
    return;
}


// ===== sym.lpi_gpio_set_mux.e8320cc28db5e5667bc805daa01140fb.cfi_jt @ 0x080014b0 (size 8) =====

ulong sym.lpi_gpio_set_mux.e8320cc28db5e5667bc805daa01140fb.cfi_jt(int64_t param_1,uint param_2,uint64_t param_3)

{
    uint32_t uVar1;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(*(*(param_1 + 0x10) + 8) + (param_3 & 0xffffffff) * 0x18 + 0x10);
    if (arg1 != 0) {
        *(arg1 + 0x38) = param_2;
        uVar1 = sym.lpi_gpio_read(arg1,0);
        sym.lpi_gpio_write(arg1,0,uVar1 & 0xffffffc3 | *(arg1 + 0x38) << 2);
    }
    return 0;
}


// ===== sym.lpi_pinctrl_remove.e8320cc28db5e5667bc805daa01140fb.cfi_jt @ 0x080014b8 (size 8) =====

ulong sym.lpi_pinctrl_remove.e8320cc28db5e5667bc805daa01140fb.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = param_1 + 0x10;
    iVar2 = *(param_1 + 0xa8);
    __pm_runtime_disable(iVar1,1);
    __pm_runtime_set_status(iVar1,2);
    snd_event_client_deregister(iVar1);
    audio_notifier_deregister("");
    gpiochip_remove(iVar2 + 0x10);
    return 0;
}


// ===== sym.lpi_pinctrl_probe.e8320cc28db5e5667bc805daa01140fb.cfi_jt @ 0x080014c0 (size 8) =====

uint64_t sym.lpi_pinctrl_probe.e8320cc28db5e5667bc805daa01140fb.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    uint uVar3;
    int iVar4;
    uint uVar5;
    uchar auVar6 [16];
    code *pcVar7;
    uint32_t uVar8;
    int iVar9;
    uint64_t uVar10;
    int64_t *piVar11;
    ulong uVar12;
    uint *puVar13;
    int64_t *piVar14;
    uint64_t uVar15;
    int64_t iVar16;
    char *pcVar17;
    int64_t iVar18;
    int64_t iVar19;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar20;
    ulong *puVar21;
    ulong unaff_x30;
    uint uStack_74;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar19 = sp_el0;
    iStack_68 = *(iVar19 + 0x5e0);
    uStack_70 = 0;
    uStack_74 = 0;
    uVar10 = audio_notifier_probe_status();
    if ((uVar10 & 1) == 0) {
        _printk(0x8000328,"lpi_pinctrl_probe");
        uVar10 = 0xfffffdfb;
        goto code_r0x08001a90;
    }
    piVar1 = param_1 + 0x10;
    uVar8 = of_property_read_variable_u32_array(*(param_1 + 0x300),0x8000702,&uStack_70,1,0);
    if (uVar8 < 0) {
        uVar10 = uVar8;
        _dev_err(piVar1,"missing base address\n");
        goto code_r0x08001a90;
    }
    uVar10 = of_property_read_variable_u32_array(*(param_1 + 0x300),"",&uStack_70 + 4,1,0);
    if (uVar10 < 0) {
        uVar10 = uVar10 & 0xffffffff;
        goto code_r0x08001a90;
    }
    if (0x20 < uStack_70._4_4_) {
    //WARNING: Does not return
        pcVar7 = SoftwareBreakpoint(0x800,0x8001d68);
        (*pcVar7)();
    }
    uVar8 = of_property_read_variable_u32_array
                      (*(param_1 + 0x300),"qcom,lpi-offset-tbl",obj.lpi_pinctrl_runtime_resume._rs,uStack_70._4_4_,0
                      );
    if (uVar8 < 0) {
        uVar10 = uVar8;
        _dev_err(piVar1,"",uVar10);
        goto code_r0x08001a90;
    }
    iVar9 = of_property_read_variable_u32_array(*(param_1 + 0x300),"",obj.lpi_slew_offset,uStack_70._4_4_,0);
    if ((iVar9 < 0) && (0 < uStack_70._4_4_)) {
        iVar19 = 0;
        do {
            if (iVar19 == 400) goto code_r0x08001d70;
            *(obj.lpi_slew_offset + iVar19) = 0xffffffff;
            iVar19 = iVar19 + 4;
        } while (uStack_70._4_4_ * 4 - iVar19 != 0);
    }
    iVar9 = of_property_read_variable_u32_array(*(param_1 + 0x300),"",obj.lpi_slew_base,uStack_70._4_4_,0);
    if (iVar9 < 0) {
        if (0 < uStack_70._4_4_) {
            iVar19 = 0;
            do {
                if (iVar19 == 400) goto code_r0x08001d70;
                *(obj.lpi_slew_base + iVar19) = 0xffffffff;
                iVar19 = iVar19 + 4;
            } while (uStack_70._4_4_ * 4 - iVar19 != 0);
        }
    }
    piVar11 = devm_kmalloc(piVar1,0x300,0xdc0);
    if (piVar11 != NULL) {
        *(param_1 + 0xa8) = piVar11;
        uVar12 = *(param_1 + 0x300);
        *piVar11 = piVar1;
        uStack_74 = 0;
        iVar9 = of_property_read_variable_u32_array(uVar12,"",&uStack_74,1,0);
        if (-1 < iVar9) {
            iVar19 = devm_ioremap(piVar1,uStack_74,0x1000);
            if (iVar19 != 0) goto code_r0x0800192c;
            pcVar17 = "";
code_r0x08001cd0:
            _dev_err(piVar1,pcVar17,"lpi_pinctrl_probe");
            uVar10 = 0xfffffff4;
            goto code_r0x08001a90;
        }
        iVar19 = 0;
code_r0x0800192c:
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uStack_70._4_4_;
        if ((SUB168(auVar6 * ZEXT816(0x18),8) == 0) &&
           (iVar16 = devm_kmalloc(piVar1,uStack_70._4_4_ * 0x18,0xdc0), iVar16 != 0)) {
            if ((uStack_70._4_4_ >> 0x3a == 0) &&
               ((puVar13 = devm_kmalloc(piVar1,uStack_70._4_4_ << 6,0xdc0), puVar13 != NULL &&
                (piVar14 = devm_kmalloc(piVar1,0x58,0xdc0), piVar14 != NULL)))) {
                piVar14[3] = reloc.lpi_gpio_get_groups_count.e8320cc28db5e5667bc805daa01140fb.cfi_jt;
                piVar14[4] = obj.lpi_gpio_pinmux_ops;
                iVar18 = *(param_1 + 0x80);
                piVar14[5] = obj.lpi_gpio_pinconf_ops;
                piVar14[6] = obj.__this_module;
                if (iVar18 == 0) {
                    iVar18 = *piVar1;
                }
                *piVar14 = iVar18;
                piVar14[1] = iVar16;
                *(piVar14 + 2) = uStack_70._4_4_;
                iVar18 = devm_ioremap(piVar1,uStack_70 & 0xffffffff,0x20000);
                if (iVar18 != 0) {
                    piVar11[0x50] = iVar18;
                    iVar9 = uStack_70._4_4_;
                    if (0 < uStack_70._4_4_) {
                        iVar20 = 0;
                        puVar21 = iVar16 + 0x10;
                        do {
                            *puVar21 = puVar13;
                            *(puVar21 + -2) = iVar20;
                            if (iVar20 == 0x20) {
code_r0x08001d70:
    //WARNING: Does not return
                                pcVar7 = SoftwareBreakpoint(0x5512,0x8001d74);
                                (*pcVar7)();
                            }
                            uVar12 = *(obj.lpi_gpio_groups + iVar20 * 8);
                            iVar16 = iVar20 * 4;
                            *(puVar13 + 4) = iVar18;
                            *(puVar13 + 6) = iVar18;
                            *(puVar13 + 8) = iVar19;
                            *(puVar13 + 10) = 0;
                            uVar3 = *(obj.lpi_slew_offset + iVar16);
                            puVar21[-1] = uVar12;
                            iVar4 = *(obj.lpi_slew_base + iVar16);
                            uVar5 = *(obj.lpi_pinctrl_runtime_resume._rs + iVar16);
                            puVar13[1] = uVar5;
                            puVar13[2] = uVar3;
                            *puVar13 = uVar5;
                            if (1 < iVar4 + 1U) {
                                uVar12 = devm_ioremap(piVar1,iVar4,4);
                                *(puVar13 + 10) = uVar12;
                                iVar9 = uStack_70._4_4_;
                            }
                            iVar20 = iVar20 + 1;
                            puVar21 = puVar21 + 3;
                            puVar13 = puVar13 + 0x10;
                        } while (iVar20 < iVar9);
                    }
                    piVar2 = piVar11 + 2;
                    memcpy(piVar2,obj.lpi_gpio_template,0x270);
                    iVar19 = *(param_1 + 0x80);
                    *(piVar11 + 0xa4) = iVar9;
                    *(piVar11 + 0x14) = 0xffffffff;
                    piVar11[4] = piVar1;
                    if (iVar19 == 0) {
                        iVar19 = *piVar1;
                    }
                    piVar11[2] = iVar19;
                    *(piVar11 + 0x4c) = 2;
                    *(piVar11 + 0x16) = 0;
                    __mutex_init(piVar11 + 0x53,"",obj.lpi_pinctrl_probe.__key);
                    __mutex_init(piVar11 + 0x5a,"",obj.lpi_pinctrl_probe.__key);
                    uVar10 = devm_pinctrl_register(piVar1,piVar14,piVar11);
                    piVar11[1] = uVar10;
                    if (uVar10 < 0xfffffffffffff001) {
                        uVar8 = gpiochip_add_data_with_key(piVar2,piVar11,0,0);
                        if (uVar8 == 0) {
                            iVar19 = *(param_1 + 0x80);
                            if (iVar19 == 0) {
                                iVar19 = *piVar1;
                            }
                            uVar8 = gpiochip_add_pin_range(piVar2,iVar19,0,0,uStack_70._4_4_);
                            if (uVar8 == 0) {
                                obj.lpi_dev_up = 0x1;
                                obj.initial_boot = 0x1;
                                _segment.ehdr = piVar1;
                                uVar8 = snd_event_client_register
                                                  (piVar1,
                                                   reloc.lpi_pinctrl_ssr_enable.e8320cc28db5e5667bc805daa01140fb.cfi_jt
                                                   ,0);
                                if (uVar8 == 0) {
                                    snd_event_notify(piVar1,1);
                                    uVar8 = audio_notifier_register
                                                      ("",0,
                                                       reloc.lpi_notifier_service_cb.e8320cc28db5e5667bc805daa01140fb.cfi_jt
                                                      );
                                    if (-1 < uVar8) {
                                        uVar15 = devm_clk_get(piVar1,"lpass_core_hw_vote");
                                        uVar10 = 0;
                                        if (uVar15 < 0xfffffffffffff001) {
                                            uVar10 = uVar15;
                                        }
                                        piVar11[0x51] = uVar10;
                                        uVar15 = devm_clk_get(piVar1,"lpass_audio_hw_vote");
                                        uVar10 = 0;
                                        if (uVar15 < 0xfffffffffffff001) {
                                            uVar10 = uVar15;
                                        }
                                        *(piVar11 + 0x59) = 0;
                                        piVar11[0x52] = uVar10;
                                        pm_runtime_set_autosuspend_delay(piVar1,100);
                                        __pm_runtime_use_autosuspend(piVar1,1);
                                        __pm_runtime_set_status(piVar1,2);
                                        pm_runtime_enable(piVar1);
                                        uVar10 = 0;
                                        goto code_r0x08001a90;
                                    }
                                    uVar10 = uVar8;
                                    _printk(0x80005f2,"lpi_pinctrl_probe",uVar10);
                                }
                                else {
                                    uVar10 = uVar8;
                                    _dev_err(piVar1,"%s: snd_event registration failed, ret [%d]\n",
                                             "lpi_pinctrl_probe",uVar10);
                                }
                            }
                            else {
                                uVar10 = uVar8;
                                _dev_err(piVar1,"failed to add pin range\n");
                            }
                            gpiochip_remove(piVar2);
                        }
                        else {
                            uVar10 = uVar8;
                            _dev_err(*piVar11,"can\'t add gpio chip\n");
                        }
                    }
                    goto code_r0x08001a90;
                }
                pcVar17 = "%s devm_ioremap failed\n";
                goto code_r0x08001cd0;
            }
        }
    }
    uVar10 = 0xfffffff4;
code_r0x08001a90:
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) != iStack_68) {
        iVar16 = __stack_chk_fail();
        *extraout_x18 = sym.lpi_pinctrl_remove;
        iVar19 = iVar16 + 0x10;
        iVar16 = *(iVar16 + 0xa8);
        __pm_runtime_disable(iVar19,1);
        __pm_runtime_set_status(iVar19,2);
        snd_event_client_deregister(iVar19);
        audio_notifier_deregister("");
        gpiochip_remove(iVar16 + 0x10);
        return 0;
    }
    return uVar10 & 0xffffffff;
}


// ===== sym.lpi_gpio_set.e8320cc28db5e5667bc805daa01140fb.cfi_jt @ 0x080014c8 (size 8) =====

void sym.lpi_gpio_set.e8320cc28db5e5667bc805daa01140fb.cfi_jt(ulong param_1,uint64_t param_2,int param_3)

{
    ulong uVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar8;
    int64_t iVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    uint64_t uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    iVar3 = gpiochip_get_data();
    uStack_30 = param_3 << 8 | 0x11;
    sym.lpi_config_set(*(iVar3 + 8),param_2 & 0xffffffff,&uStack_30,1);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return;
    }
    auVar10 = __stack_chk_fail();
    iVar3 = auVar10._8_8_;
    uVar4 = auVar10._0_8_;
    *extraout_x18 = sym.lpi_gpio_dbg_show;
    if (*(iVar3 + 0x94) != 0) {
        iVar9 = 0;
        uVar8 = 0;
        do {
            iVar5 = gpiochip_get_data(iVar3);
            iVar5 = *(*(*(iVar5 + 8) + 0x10) + 8) + iVar9;
            uVar2 = *(iVar5 + 8);
            iVar5 = *(iVar5 + 0x10);
            uVar6 = sym.lpi_gpio_read(iVar5,4);
            uVar7 = sym.lpi_gpio_read(iVar5,0);
            uVar1 = 0x800077d;
            if ((uVar6 & 2) != 0) {
                uVar1 = 0x80003e8;
            }
            seq_printf(uVar4," %-8s: %-3s %d",uVar2,uVar1,uVar7 >> 2 & 0xf);
            seq_printf(uVar4,"",((uVar7 & 0xffffffff) >> 5 & 0xe) + 2);
            seq_printf(uVar4,0x8000430,*(obj.lpi_gpio_dbg_show_one.pulls + (uVar7 & 3) * 8));
            seq_puts(uVar4,0x80006e1);
            uVar8 = uVar8 + 1;
            iVar9 = iVar9 + 0x18;
        } while (uVar8 < *(iVar3 + 0x94));
    }
    return;
}


// ===== sym.pinconf_generic_dt_node_to_map_group.e8320cc28db5e5667bc805daa01140fb.cfi_jt @ 0x080014d0 (size 8) =====

void sym.pinconf_generic_dt_node_to_map_group.e8320cc28db5e5667bc805daa01140fb.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pinconf_generic_dt_node_to_map();
    return;
}


// ===== sym.lpi_pinctrl_suspend @ 0x080014d8 (size 148) =====

ulong sym.lpi_pinctrl_suspend(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __trace_bprintk(0x80014dc,*0x8002000,"lpi_pinctrl_suspend");
    if (((*(arg1 + 0x200) & 7) != 0) || (*(arg1 + 0x20c) != 2)) {
        sym.lpi_pinctrl_runtime_suspend(arg1);
        __pm_runtime_disable(arg1,1);
        __pm_runtime_set_status(arg1,2);
        pm_runtime_enable(arg1);
    }
    return 0;
}


// ===== sym.lpi_pinctrl_runtime_suspend @ 0x0800156c (size 188) =====

ulong sym.lpi_pinctrl_runtime_suspend(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x98);
    iVar2 = *(iVar3 + 0x288);
    __trace_bprintk(0x8001588,*0x8002000,"");
    if ((*(iVar3 + 0x288) == 0) && (iVar2 = *(iVar3 + 0x290), iVar2 == 0)) {
        return 0;
    }
    mutex_lock(iVar3 + 0x2d0);
    if (*(iVar3 + 0x2c8) != '\0') {
        digital_cdc_rsc_mgr_hw_vote_disable(iVar2,arg1);
        *(iVar3 + 0x2c8) = 0;
    }
    uVar1 = mutex_unlock(iVar3 + 0x2d0);
    return uVar1;
}


// ===== sym.lpi_pinctrl_resume @ 0x08001628 (size 16) =====

ulong sym.lpi_pinctrl_resume(int64_t arg1)

{
    return 0;
}


// ===== sym.lpi_pinctrl_runtime_resume @ 0x08001638 (size 268) =====

ulong sym.lpi_pinctrl_runtime_resume(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0x98);
    iVar3 = *(iVar4 + 0x288);
    __trace_bprintk(0x8001654,*0x8002000,"");
    if ((*(iVar4 + 0x288) == 0) && (iVar3 = *(iVar4 + 0x290), iVar3 == 0)) {
        return 0;
    }
    mutex_lock(iVar4 + 0x2d0);
    iVar1 = digital_cdc_rsc_mgr_hw_vote_enable(iVar3,arg1);
    if (iVar1 < 0) {
        pm_runtime_set_autosuspend_delay(arg1,1);
        iVar1 = ___ratelimit(obj.lpi_pinctrl_runtime_resume._rs,"");
        if (iVar1 != 0) {
            _dev_err(arg1,"%s:lpass core hw island enable failed\n","");
        }
    }
    else {
        *(iVar4 + 0x2c8) = 1;
        pm_runtime_set_autosuspend_delay(arg1,100);
    }
    uVar2 = mutex_unlock(iVar4 + 0x2d0);
    return uVar2;
}


// ===== sym.lpi_pinctrl_probe @ 0x08001744 (size 1588) =====

uint64_t sym.lpi_pinctrl_probe(int64_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    uint uVar3;
    int iVar4;
    uint uVar5;
    uchar auVar6 [16];
    code *pcVar7;
    uint32_t uVar8;
    int iVar9;
    uint64_t uVar10;
    int64_t *piVar11;
    ulong uVar12;
    uint *puVar13;
    int64_t *piVar14;
    uint64_t uVar15;
    int64_t iVar16;
    char *pcVar17;
    int64_t iVar18;
    int64_t iVar19;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar20;
    ulong *puVar21;
    ulong unaff_x30;
    uint uStack_74;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar19 = sp_el0;
    iStack_68 = *(iVar19 + 0x5e0);
    uStack_70 = 0;
    uStack_74 = 0;
    uVar10 = audio_notifier_probe_status();
    if ((uVar10 & 1) == 0) {
        _printk(0x8000328,"lpi_pinctrl_probe");
        uVar10 = 0xfffffdfb;
        goto code_r0x08001a90;
    }
    piVar1 = arg1 + 0x10;
    uVar8 = of_property_read_variable_u32_array(*(arg1 + 0x300),0x8000702,&uStack_70,1,0);
    if (uVar8 < 0) {
        uVar10 = uVar8;
        _dev_err(piVar1,"missing base address\n");
        goto code_r0x08001a90;
    }
    uVar10 = of_property_read_variable_u32_array(*(arg1 + 0x300),"",&uStack_70 + 4,1,0);
    if (uVar10 < 0) {
        uVar10 = uVar10 & 0xffffffff;
        goto code_r0x08001a90;
    }
    if (0x20 < uStack_70._4_4_) {
    //WARNING: Does not return
        pcVar7 = SoftwareBreakpoint(0x800,0x8001d68);
        (*pcVar7)();
    }
    uVar8 = of_property_read_variable_u32_array
                      (*(arg1 + 0x300),"qcom,lpi-offset-tbl",obj.lpi_pinctrl_runtime_resume._rs,uStack_70._4_4_,0);
    if (uVar8 < 0) {
        uVar10 = uVar8;
        _dev_err(piVar1,"",uVar10);
        goto code_r0x08001a90;
    }
    iVar9 = of_property_read_variable_u32_array(*(arg1 + 0x300),"",obj.lpi_slew_offset,uStack_70._4_4_,0);
    if ((iVar9 < 0) && (0 < uStack_70._4_4_)) {
        iVar19 = 0;
        do {
            if (iVar19 == 400) goto code_r0x08001d70;
            *(obj.lpi_slew_offset + iVar19) = 0xffffffff;
            iVar19 = iVar19 + 4;
        } while (uStack_70._4_4_ * 4 - iVar19 != 0);
    }
    iVar9 = of_property_read_variable_u32_array(*(arg1 + 0x300),"",obj.lpi_slew_base,uStack_70._4_4_,0);
    if (iVar9 < 0) {
        if (0 < uStack_70._4_4_) {
            iVar19 = 0;
            do {
                if (iVar19 == 400) goto code_r0x08001d70;
                *(obj.lpi_slew_base + iVar19) = 0xffffffff;
                iVar19 = iVar19 + 4;
            } while (uStack_70._4_4_ * 4 - iVar19 != 0);
        }
    }
    piVar11 = devm_kmalloc(piVar1,0x300,0xdc0);
    if (piVar11 != NULL) {
        *(arg1 + 0xa8) = piVar11;
        uVar12 = *(arg1 + 0x300);
        *piVar11 = piVar1;
        uStack_74 = 0;
        iVar9 = of_property_read_variable_u32_array(uVar12,"",&uStack_74,1,0);
        if (-1 < iVar9) {
            iVar19 = devm_ioremap(piVar1,uStack_74,0x1000);
            if (iVar19 != 0) goto code_r0x0800192c;
            pcVar17 = "";
code_r0x08001cd0:
            _dev_err(piVar1,pcVar17,"lpi_pinctrl_probe");
            uVar10 = 0xfffffff4;
            goto code_r0x08001a90;
        }
        iVar19 = 0;
code_r0x0800192c:
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uStack_70._4_4_;
        if ((SUB168(auVar6 * ZEXT816(0x18),8) == 0) &&
           (iVar16 = devm_kmalloc(piVar1,uStack_70._4_4_ * 0x18,0xdc0), iVar16 != 0)) {
            if ((uStack_70._4_4_ >> 0x3a == 0) &&
               ((puVar13 = devm_kmalloc(piVar1,uStack_70._4_4_ << 6,0xdc0), puVar13 != NULL &&
                (piVar14 = devm_kmalloc(piVar1,0x58,0xdc0), piVar14 != NULL)))) {
                piVar14[3] = reloc.lpi_gpio_get_groups_count.e8320cc28db5e5667bc805daa01140fb.cfi_jt;
                piVar14[4] = obj.lpi_gpio_pinmux_ops;
                iVar18 = *(arg1 + 0x80);
                piVar14[5] = obj.lpi_gpio_pinconf_ops;
                piVar14[6] = obj.__this_module;
                if (iVar18 == 0) {
                    iVar18 = *piVar1;
                }
                *piVar14 = iVar18;
                piVar14[1] = iVar16;
                *(piVar14 + 2) = uStack_70._4_4_;
                iVar18 = devm_ioremap(piVar1,uStack_70 & 0xffffffff,0x20000);
                if (iVar18 != 0) {
                    piVar11[0x50] = iVar18;
                    iVar9 = uStack_70._4_4_;
                    if (0 < uStack_70._4_4_) {
                        iVar20 = 0;
                        puVar21 = iVar16 + 0x10;
                        do {
                            *puVar21 = puVar13;
                            *(puVar21 + -2) = iVar20;
                            if (iVar20 == 0x20) {
code_r0x08001d70:
    //WARNING: Does not return
                                pcVar7 = SoftwareBreakpoint(0x5512,0x8001d74);
                                (*pcVar7)();
                            }
                            uVar12 = *(obj.lpi_gpio_groups + iVar20 * 8);
                            iVar16 = iVar20 * 4;
                            *(puVar13 + 4) = iVar18;
                            *(puVar13 + 6) = iVar18;
                            *(puVar13 + 8) = iVar19;
                            *(puVar13 + 10) = 0;
                            uVar3 = *(obj.lpi_slew_offset + iVar16);
                            puVar21[-1] = uVar12;
                            iVar4 = *(obj.lpi_slew_base + iVar16);
                            uVar5 = *(obj.lpi_pinctrl_runtime_resume._rs + iVar16);
                            puVar13[1] = uVar5;
                            puVar13[2] = uVar3;
                            *puVar13 = uVar5;
                            if (1 < iVar4 + 1U) {
                                uVar12 = devm_ioremap(piVar1,iVar4,4);
                                *(puVar13 + 10) = uVar12;
                                iVar9 = uStack_70._4_4_;
                            }
                            iVar20 = iVar20 + 1;
                            puVar21 = puVar21 + 3;
                            puVar13 = puVar13 + 0x10;
                        } while (iVar20 < iVar9);
                    }
                    piVar2 = piVar11 + 2;
                    memcpy(piVar2,obj.lpi_gpio_template,0x270);
                    iVar19 = *(arg1 + 0x80);
                    *(piVar11 + 0xa4) = iVar9;
                    *(piVar11 + 0x14) = 0xffffffff;
                    piVar11[4] = piVar1;
                    if (iVar19 == 0) {
                        iVar19 = *piVar1;
                    }
                    piVar11[2] = iVar19;
                    *(piVar11 + 0x4c) = 2;
                    *(piVar11 + 0x16) = 0;
                    __mutex_init(piVar11 + 0x53,"",obj.lpi_pinctrl_probe.__key);
                    __mutex_init(piVar11 + 0x5a,"",obj.lpi_pinctrl_probe.__key);
                    uVar10 = devm_pinctrl_register(piVar1,piVar14,piVar11);
                    piVar11[1] = uVar10;
                    if (uVar10 < 0xfffffffffffff001) {
                        uVar8 = gpiochip_add_data_with_key(piVar2,piVar11,0,0);
                        if (uVar8 == 0) {
                            iVar19 = *(arg1 + 0x80);
                            if (iVar19 == 0) {
                                iVar19 = *piVar1;
                            }
                            uVar8 = gpiochip_add_pin_range(piVar2,iVar19,0,0,uStack_70._4_4_);
                            if (uVar8 == 0) {
                                obj.lpi_dev_up = 0x1;
                                obj.initial_boot = 0x1;
                                _segment.ehdr = piVar1;
                                uVar8 = snd_event_client_register
                                                  (piVar1,
                                                   reloc.lpi_pinctrl_ssr_enable.e8320cc28db5e5667bc805daa01140fb.cfi_jt
                                                   ,0);
                                if (uVar8 == 0) {
                                    snd_event_notify(piVar1,1);
                                    uVar8 = audio_notifier_register
                                                      ("",0,
                                                       reloc.lpi_notifier_service_cb.e8320cc28db5e5667bc805daa01140fb.cfi_jt
                                                      );
                                    if (-1 < uVar8) {
                                        uVar15 = devm_clk_get(piVar1,"lpass_core_hw_vote");
                                        uVar10 = 0;
                                        if (uVar15 < 0xfffffffffffff001) {
                                            uVar10 = uVar15;
                                        }
                                        piVar11[0x51] = uVar10;
                                        uVar15 = devm_clk_get(piVar1,"lpass_audio_hw_vote");
                                        uVar10 = 0;
                                        if (uVar15 < 0xfffffffffffff001) {
                                            uVar10 = uVar15;
                                        }
                                        *(piVar11 + 0x59) = 0;
                                        piVar11[0x52] = uVar10;
                                        pm_runtime_set_autosuspend_delay(piVar1,100);
                                        __pm_runtime_use_autosuspend(piVar1,1);
                                        __pm_runtime_set_status(piVar1,2);
                                        pm_runtime_enable(piVar1);
                                        uVar10 = 0;
                                        goto code_r0x08001a90;
                                    }
                                    uVar10 = uVar8;
                                    _printk(0x80005f2,"lpi_pinctrl_probe",uVar10);
                                }
                                else {
                                    uVar10 = uVar8;
                                    _dev_err(piVar1,"%s: snd_event registration failed, ret [%d]\n",
                                             "lpi_pinctrl_probe",uVar10);
                                }
                            }
                            else {
                                uVar10 = uVar8;
                                _dev_err(piVar1,"failed to add pin range\n");
                            }
                            gpiochip_remove(piVar2);
                        }
                        else {
                            uVar10 = uVar8;
                            _dev_err(*piVar11,"can\'t add gpio chip\n");
                        }
                    }
                    goto code_r0x08001a90;
                }
                pcVar17 = "%s devm_ioremap failed\n";
                goto code_r0x08001cd0;
            }
        }
    }
    uVar10 = 0xfffffff4;
code_r0x08001a90:
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) != iStack_68) {
        iVar16 = __stack_chk_fail();
        *extraout_x18 = sym.lpi_pinctrl_remove;
        iVar19 = iVar16 + 0x10;
        iVar16 = *(iVar16 + 0xa8);
        __pm_runtime_disable(iVar19,1);
        __pm_runtime_set_status(iVar19,2);
        snd_event_client_deregister(iVar19);
        audio_notifier_deregister("");
        gpiochip_remove(iVar16 + 0x10);
        return 0;
    }
    return uVar10 & 0xffffffff;
}


// ===== sym.lpi_pinctrl_remove @ 0x08001d78 (size 104) =====

ulong sym.lpi_pinctrl_remove(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg1 + 0x10;
    iVar2 = *(arg1 + 0xa8);
    __pm_runtime_disable(iVar1,1);
    __pm_runtime_set_status(iVar1,2);
    snd_event_client_deregister(iVar1);
    audio_notifier_deregister("");
    gpiochip_remove(iVar2 + 0x10);
    return 0;
}


// ===== sym.lpi_gpio_get_groups_count @ 0x08001de0 (size 20) =====

uint sym.lpi_gpio_get_groups_count(int64_t arg1)

{
    return *(*(arg1 + 0x10) + 0x10);
}


// ===== sym.lpi_gpio_get_group_name @ 0x08001df4 (size 32) =====

ulong sym.lpi_gpio_get_group_name(int64_t arg1,int64_t arg2)

{
    return *(*(*(arg1 + 0x10) + 8) + (arg2 & 0xffffffffU) * 0x18 + 8);
}


// ===== sym.lpi_gpio_get_group_pins @ 0x08001e14 (size 44) =====

ulong sym.lpi_gpio_get_group_pins(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    *arg3 = *(*(arg1 + 0x10) + 8) + (arg2 & 0xffffffffU) * 0x18;
    *arg4 = 1;
    return 0;
}


// ===== sym.pinconf_generic_dt_node_to_map_group @ 0x08001e40 (size 40) =====

void sym.pinconf_generic_dt_node_to_map_group(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pinconf_generic_dt_node_to_map();
    return;
}


// ===== sym.lpi_gpio_get_functions_count @ 0x08001e68 (size 16) =====

ulong sym.lpi_gpio_get_functions_count(void)

{
    return 6;
}


// ===== sym.lpi_gpio_get_function_name @ 0x08001e78 (size 40) =====

ulong sym.lpi_gpio_get_function_name(ulong noname_0,uint32_t arg1)

{
    code *pcVar1;
    
    if (arg1 < 6) {
        return *(obj.lpi_gpio_functions + arg1 * 8);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8001ea0);
    (*pcVar1)();
}


// ===== sym.lpi_gpio_get_function_groups @ 0x08001ea0 (size 40) =====

ulong sym.lpi_gpio_get_function_groups(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    *arg2 = obj.lpi_gpio_groups;
    *arg3 = *(*(arg1 + 0x10) + 0x10);
    return 0;
}


// ===== sym.lpi_gpio_set_mux @ 0x08001ec8 (size 108) =====

ulong sym.lpi_gpio_set_mux(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(*(*(arg1 + 0x10) + 8) + (arg3 & 0xffffffffU) * 0x18 + 0x10);
    if (arg1_00 != 0) {
        *(arg1_00 + 0x38) = arg2;
        uVar1 = sym.lpi_gpio_read(arg1_00,0);
        sym.lpi_gpio_write(arg1_00,0,uVar1 & 0xffffffc3 | *(arg1_00 + 0x38) << 2);
    }
    return 0;
}


// ===== sym.lpi_gpio_read @ 0x08001f34 (size 400) =====

int sym.lpi_gpio_read(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    ulong uVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != 0) {
        if ((obj.lpi_dev_up & 1) != 0) {
            iVar5 = *(_segment.ehdr + 0x98);
            __pm_runtime_resume(_segment.ehdr,4);
            iVar1 = iVar5 + 0x2d0;
            mutex_lock(iVar1);
            if (*(iVar5 + 0x2c8) == '\0') {
                iVar2 = ___ratelimit(obj.lpi_gpio_read.rtl,"lpi_gpio_read");
                if ((iVar2 != 0) && (iVar2 = ___ratelimit(obj.lpi_gpio_read._rs.45,"lpi_gpio_read"), iVar2 != 0)) {
                    _printk(0x80004c4,"lpi_gpio_read");
                }
                iVar2 = -0x16;
            }
            else {
                iVar2 = sym.readl(*(arg1 + 0x10) + *arg1 + (arg2 & 0xffffffffU));
                if ((iVar2 < 0) && (iVar3 = ___ratelimit(obj.lpi_gpio_read._rs.47,"lpi_gpio_read"), iVar3 != 0)) {
                    _printk(0x8000706,"lpi_gpio_read",arg2 & 0xffffffffU);
                }
            }
            mutex_unlock(iVar1);
            iVar1 = _segment.ehdr;
            uVar4 = ktime_get_mono_fast_ns();
            *(iVar1 + 0x218) = uVar4;
            __pm_runtime_suspend(_segment.ehdr,0xd);
            return iVar2;
        }
        iVar2 = ___ratelimit(obj.lpi_gpio_read.rtl,"lpi_gpio_read");
        if ((iVar2 != 0) && (iVar2 = ___ratelimit(obj.lpi_gpio_read._rs.43,"lpi_gpio_read"), iVar2 != 0)) {
            _printk(0x80007f1,"lpi_gpio_read");
            return 0;
        }
    }
    return 0;
}


// ===== sym.lpi_gpio_write @ 0x080020c4 (size 264) =====

void sym.lpi_gpio_write(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((_segment.ehdr != 0) && (obj.lpi_dev_up == 0x1)) {
        iVar4 = *(_segment.ehdr + 0x98);
        __pm_runtime_resume(_segment.ehdr,4);
        iVar1 = iVar4 + 0x2d0;
        mutex_lock(iVar1);
        if (*(iVar4 + 0x2c8) == '\0') {
            iVar2 = ___ratelimit(obj.lpi_gpio_write.rtl,"");
            if ((iVar2 != 0) && (iVar2 = ___ratelimit(obj.lpi_gpio_write._rs.49,""), iVar2 != 0)) {
                _printk(0x80004c4,"");
            }
        }
        else {
            sym.writel(arg3 & 0xffffffff,*(arg1 + 0x10) + *arg1 + (arg2 & 0xffffffffU));
        }
        mutex_unlock(iVar1);
        iVar1 = _segment.ehdr;
        uVar3 = ktime_get_mono_fast_ns();
        *(iVar1 + 0x218) = uVar3;
        __pm_runtime_suspend(_segment.ehdr,0xd);
    }
    return;
}


// ===== sym.readl @ 0x080021cc (size 124) =====

uint sym.readl(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x80021d0);
    uVar1 = *arg1;
    DataMemoryBarrier(0,1);
    log_post_read_mmio(uVar1,0x20,arg1,0x8002214);
    return uVar1;
}


// ===== sym.writel @ 0x0800224c (size 124) =====

void sym.writel(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8002268);
    DataMemoryBarrier(0,2);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8002294);
    return;
}


// ===== sym.lpi_config_get @ 0x080022c8 (size 176) =====

ulong sym.lpi_config_get(int64_t arg1,int64_t arg2,int64_t arg3)

{
    bool bVar1;
    ulong uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    
    uVar2 = 0xffffffea;
    if (0x11 < (*arg3 & 0xff)) {
        return 0xffffffea;
    }
    uVar3 = *arg3 & 0xff;
    iVar5 = *(*(*(arg1 + 0x10) + 8) + (arg2 & 0xffffffffU) * 0x18 + 0x10);
    //switch table (18 cases) at 0x8000847
    switch(*(uVar3 + 0x8000847) * 4 + 0x8002314) {
    case 0x8002318:
        uVar4 = *(iVar5 + 0xc);
        break;
    case 0x8002324:
        uVar4 = 2;
        *(iVar5 + 0x30) = 2;
        break;
    case 0x8002334:
        uVar4 = 0;
        *(iVar5 + 0x30) = 0;
        break;
    case 0x8002344:
        bVar1 = *(iVar5 + 0x30) == 1;
        goto code_r0x0800235c;
    case 0x8002354:
        bVar1 = *(iVar5 + 0x30) == 3;
code_r0x0800235c:
        uVar4 = bVar1;
        break;
    case 0x8002374:
        goto code_r0x08002374;
    }
    uVar2 = 0;
    *arg3 = uVar3 | uVar4 << 8;
code_r0x08002374:
    return uVar2;
}


// ===== sym.lpi_config_set @ 0x08002378 (size 892) =====

void sym.lpi_config_set(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    char cVar2;
    bool bVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int iVar6;
    ulong uVar7;
    uint64_t uVar8;
    uint64_t extraout_x8;
    uint64_t *extraout_x9;
    uint64_t *puVar9;
    uint64_t uVar10;
    uint64_t extraout_x10;
    ulong *in_x18;
    uint32_t *arg1_00;
    uint64_t unaff_x22;
    int64_t unaff_x23;
    int64_t unaff_x24;
    uint64_t unaff_x25;
    uchar *unaff_x26;
    int64_t unaff_x27;
    int64_t unaff_x28;
    ulong unaff_x30;
    uint64_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_68 = *(iVar4 + 0x5e0);
    uStack_70 = 0;
    arg1_00 = *(*(*(arg1 + 0x10) + 8) + (arg2 & 0xffffffffU) * 0x18 + 0x10);
    if (arg4 == 0) goto code_r0x080025c0;
    unaff_x22 = arg4 & 0xffffffff;
    iVar6 = 0;
    unaff_x27 = 1;
    unaff_x26 = &stack0xffffffffffffff90;
    unaff_x28 = 0x800085c;
    unaff_x24 = *(*(arg1 + 0x68) + 0x98) + 0x298;
code_r0x08002410:
    uVar8 = *(arg3 + iVar6 * 8);
    if ((uVar8 & 0xff) < 0x18) {
    //WARNING: Could not recover jumptable at 0x08002434. Too many branches
    //WARNING: Treating indirect jump as call
        (*(*(unaff_x28 + (uVar8 & 0xff) * 4) + 0x8002428))();
        return;
    }
    uVar7 = 0xffffffea;
code_r0x08002660:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_68) {
        return;
    }
    __stack_chk_fail(uVar7);
    uVar8 = extraout_x8;
    puVar9 = extraout_x9;
    uVar10 = extraout_x10;
    do {
        Hint_Prefetch(puVar9,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar9,0x10);
            if (bVar3) {
                *puVar9 = *puVar9 & (uVar10 ^ 0xffffffffffffffff);
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        while( true ) {
            uVar5 = unaff_x25 >> 1;
            unaff_x25 = uVar5 & 0x7fffffff;
            uVar1 = *arg1_00 + 1;
            *arg1_00 = uVar1;
            if ((uVar8 & 1) == 0) {
                *arg1_00 = 0;
                sym.lpi_gpio_write(arg1_00,0,uStack_70);
                mutex_unlock(unaff_x24);
                iVar6 = 3;
                unaff_x23 = arg3;
                if (unaff_x22 < 4) goto code_r0x080025c0;
                goto code_r0x08002410;
            }
            uVar8 = 0;
            puVar9 = unaff_x26 + (uVar1 >> 3 & 0x1ffffff8);
            uVar10 = unaff_x27 << (uVar1 & 0x3f);
            if ((uVar5 & 1) == 0) break;
            Hint_Prefetch(puVar9,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar9,0x10);
                if (bVar3) {
                    *puVar9 = *puVar9 | uVar10;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
        }
    } while( true );
code_r0x080025c0:
    arg3 = unaff_x23;
    *(arg1_00 + 4) = *(arg1_00 + 6);
    *arg1_00 = arg1_00[1];
    iVar6 = sym.lpi_gpio_read(arg1_00,0);
    uStack_70 = iVar6 & 0xfffffffffffffc3cU | arg1_00[0xc] | arg1_00[0xd] * 0x20 - 0x40 & 0xffffffc0;
    if (arg1_00[3] != '\0') {
        uStack_70 = uStack_70 | *(arg1_00 + 0xd) << 9;
    }
    sym.lpi_gpio_write(arg1_00,0,uStack_70);
    sym.lpi_gpio_write(arg1_00,4,arg1_00[3] << 1);
    uVar7 = 0;
    goto code_r0x08002660;
}


// ===== sym.lpi_gpio_direction_input @ 0x080026f4 (size 120) =====

void sym.lpi_gpio_direction_input(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    uint64_t extraout_x1;
    uint64_t extraout_x1_00;
    int iVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong unaff_x30;
    uint64_t uStack_60;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    ulong uStack_30;
    int64_t iStack_28;
    
    iVar2 = &uStack_30;
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    iVar1 = gpiochip_get_data();
    uStack_30 = 0x10c;
    sym.lpi_config_set(*(iVar1 + 8),arg1 & 0xffffffff,&uStack_30,1);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.lpi_gpio_direction_output;
    pcStack_48 = sym.lpi_gpio_direction_output;
    iVar1 = sp_el0;
    iStack_58 = *(iVar1 + 0x5e0);
    puStack_50 = &stack0xffffffffffffffe0;
    iVar1 = gpiochip_get_data();
    uStack_60 = iVar2 << 8 | 0x11;
    sym.lpi_config_set(*(iVar1 + 8),extraout_x1 & 0xffffffff,&uStack_60,1);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_58) {
        return;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.lpi_gpio_get;
    iVar1 = gpiochip_get_data();
    sym.lpi_gpio_read(*(*(*(*(iVar1 + 8) + 0x10) + 8) + (extraout_x1_00 & 0xffffffff) * 0x18 + 0x10),0);
    return;
}


// ===== sym.lpi_gpio_direction_output @ 0x0800276c (size 128) =====

void sym.lpi_gpio_direction_output(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t extraout_x1;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint64_t uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    iVar1 = gpiochip_get_data();
    uStack_30 = arg2 << 8 | 0x11;
    sym.lpi_config_set(*(iVar1 + 8),arg1 & 0xffffffff,&uStack_30,1);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.lpi_gpio_get;
    iVar1 = gpiochip_get_data();
    sym.lpi_gpio_read(*(*(*(*(iVar1 + 8) + 0x10) + 8) + (extraout_x1 & 0xffffffff) * 0x18 + 0x10),0);
    return;
}


// ===== sym.lpi_gpio_get @ 0x080027ec (size 80) =====

void sym.lpi_gpio_get(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = gpiochip_get_data();
    sym.lpi_gpio_read(*(*(*(*(iVar1 + 8) + 0x10) + 8) + (arg1 & 0xffffffffU) * 0x18 + 0x10),0);
    return;
}


// ===== sym.lpi_gpio_set @ 0x0800283c (size 128) =====

void sym.lpi_gpio_set(ulong noname_0,int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar8;
    int64_t iVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    uint64_t uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    iVar3 = gpiochip_get_data();
    uStack_30 = arg2 << 8 | 0x11;
    sym.lpi_config_set(*(iVar3 + 8),arg1 & 0xffffffff,&uStack_30,1);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return;
    }
    auVar10 = __stack_chk_fail();
    iVar3 = auVar10._8_8_;
    uVar4 = auVar10._0_8_;
    *extraout_x18 = sym.lpi_gpio_dbg_show;
    if (*(iVar3 + 0x94) != 0) {
        iVar9 = 0;
        uVar8 = 0;
        do {
            iVar5 = gpiochip_get_data(iVar3);
            iVar5 = *(*(*(iVar5 + 8) + 0x10) + 8) + iVar9;
            uVar2 = *(iVar5 + 8);
            iVar5 = *(iVar5 + 0x10);
            uVar6 = sym.lpi_gpio_read(iVar5,4);
            uVar7 = sym.lpi_gpio_read(iVar5,0);
            uVar1 = 0x800077d;
            if ((uVar6 & 2) != 0) {
                uVar1 = 0x80003e8;
            }
            seq_printf(uVar4," %-8s: %-3s %d",uVar2,uVar1,uVar7 >> 2 & 0xf);
            seq_printf(uVar4,"",((uVar7 & 0xffffffff) >> 5 & 0xe) + 2);
            seq_printf(uVar4,0x8000430,*(obj.lpi_gpio_dbg_show_one.pulls + (uVar7 & 3) * 8));
            seq_puts(uVar4,0x80006e1);
            uVar8 = uVar8 + 1;
            iVar9 = iVar9 + 0x18;
        } while (uVar8 < *(iVar3 + 0x94));
    }
    return;
}


// ===== sym.lpi_gpio_dbg_show @ 0x080028bc (size 312) =====

void sym.lpi_gpio_dbg_show(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    ulong uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    uint64_t uVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg2 + 0x94) != 0) {
        iVar7 = 0;
        uVar6 = 0;
        do {
            iVar3 = gpiochip_get_data(arg2);
            iVar3 = *(*(*(iVar3 + 8) + 0x10) + 8) + iVar7;
            uVar2 = *(iVar3 + 8);
            iVar3 = *(iVar3 + 0x10);
            uVar4 = sym.lpi_gpio_read(iVar3,4);
            uVar5 = sym.lpi_gpio_read(iVar3,0);
            uVar1 = 0x800077d;
            if ((uVar4 & 2) != 0) {
                uVar1 = 0x80003e8;
            }
            seq_printf(arg1," %-8s: %-3s %d",uVar2,uVar1,uVar5 >> 2 & 0xf);
            seq_printf(arg1,"",((uVar5 & 0xffffffff) >> 5 & 0xe) + 2);
            seq_printf(arg1,0x8000430,*(obj.lpi_gpio_dbg_show_one.pulls + (uVar5 & 3) * 8));
            seq_puts(arg1,0x80006e1);
            uVar6 = uVar6 + 1;
            iVar7 = iVar7 + 0x18;
        } while (uVar6 < *(arg2 + 0x94));
    }
    return;
}


// ===== sym.lpi_pinctrl_ssr_enable @ 0x080029f4 (size 192) =====

ulong sym.lpi_pinctrl_ssr_enable(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == 0) {
        _dev_err(arg1,"","lpi_pinctrl_ssr_enable");
        uVar1 = 0xffffffea;
    }
    else if ((obj.initial_boot & 1) == 0) {
        iVar2 = *(_segment.ehdr + 0x98);
        __trace_bprintk(0x8002a28,*0x8002000,"lpi_pinctrl_ssr_enable");
        if ((obj.lpi_dev_up & 1) == 0) {
            msleep(100);
            if (*(iVar2 + 0x288) != 0) {
                digital_cdc_rsc_mgr_hw_vote_reset();
            }
            if (*(iVar2 + 0x290) != 0) {
                digital_cdc_rsc_mgr_hw_vote_reset();
            }
        }
        uVar1 = 0;
        obj.lpi_dev_up = 0x1;
    }
    else {
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.lpi_pinctrl_ssr_disable @ 0x08002ab4 (size 96) =====

void sym.lpi_pinctrl_ssr_disable(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __trace_bprintk(0x8002ab8,*0x8002000,"");
    obj.lpi_dev_up = 0x0;
    sym.lpi_pinctrl_suspend(arg1);
    return;
}


// ===== sym.lpi_notifier_service_cb @ 0x08002b14 (size 132) =====

ulong sym.lpi_notifier_service_cb(int64_t arg1,uint32_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 1) {
        if (obj.initial_boot == 0x1) {
            obj.initial_boot = 0x0;
        }
        obj.lpi_dev_up = 0x1;
        snd_event_notify(_segment.ehdr,1);
    }
    else if (arg2 == 0) {
        if (obj.initial_boot == 0x1) {
            obj.initial_boot = 0x0;
        }
        else {
            obj.lpi_dev_up = 0x0;
        }
    }
    return 1;
}


// ===== sym.__cfi_check_fail @ 0x08002b98 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08002bdc

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
    //switch table (4 cases) at 0x80008bc
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002bf0);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08002bf4 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.lpi_pinctrl_probe.e8320cc28db5e5667bc805daa01140fb.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08002c28 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.lpi_pinctrl_probe.e8320cc28db5e5667bc805daa01140fb.cfi_jt);
    return;
}

