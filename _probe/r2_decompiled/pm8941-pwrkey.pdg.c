// decompiled from pm8941-pwrkey by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 340) =====

//WARNING: Switch with 1 destination removed at 0x08001c8c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x130f036e18103ac) {
        if (arg1 == -0x57be845bca9148ef) {
            pcVar2 = sym.pm8941_pwrkey_suspend.7de1c732bbb80e118c6e139c9d8df290.cfi_jt;
        }
        else {
            if (arg1 == -0x3987c0e26ee29729) {
                pcVar2 = sym.pm8941_pwrkey_irq.7de1c732bbb80e118c6e139c9d8df290.cfi_jt;
                goto code_r0x08001144;
            }
            if (arg1 != -0x3557318fb8d07b71) goto code_r0x08001c4c;
            pcVar2 = sym.pm8941_pwrkey_remove.7de1c732bbb80e118c6e139c9d8df290.cfi_jt;
        }
        if (1 < (pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d)) goto code_r0x08001c4c;
    }
    else {
        if (arg1 < 0x7d57972cd3914fb1) {
            if (arg1 == 0x130f036e18103ac) {
                pcVar2 = sym.mi_display_pwrkey_callback_set.cfi_jt;
            }
            else {
                if (arg1 != 0x2b3a43e29242445) goto code_r0x08001c4c;
                pcVar2 = sym.init_module.cfi_jt;
            }
        }
        else if (arg1 == 0x7d57972cd3914fb1) {
            pcVar2 = sym.pm8941_reboot_notify.7de1c732bbb80e118c6e139c9d8df290.cfi_jt;
        }
        else {
            if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001c4c;
            pcVar2 = sym.cleanup_module.cfi_jt;
        }
code_r0x08001144:
        if (pcVar1 != pcVar2) {
code_r0x08001c4c:
            *in_x18 = unaff_x30;
            if (arg3 != 0) {
                if (4 < *arg3) {
                    return;
                }
                __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
            }
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5502,0x8001ca0);
            (*pcVar1)();
        }
    }
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001160 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.pm8941_pwrkey_probe.7de1c732bbb80e118c6e139c9d8df290.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001168 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.pm8941_pwrkey_probe.7de1c732bbb80e118c6e139c9d8df290.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.mi_display_pwrkey_callback_set.cfi_jt @ 0x08001170 (size 8) =====

void sym.mi_display_pwrkey_callback_set.cfi_jt(ulong param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = param_1;
    _printk(0x80001e5,"mi_display_pwrkey_callback_set",param_1);
    return;
}


// ===== sym.pm8941_reboot_notify.7de1c732bbb80e118c6e139c9d8df290.cfi_jt @ 0x08001178 (size 8) =====

ulong sym.pm8941_reboot_notify.7de1c732bbb80e118c6e139c9d8df290.cfi_jt(int64_t param_1,uint64_t param_2)

{
    int iVar1;
    int iVar2;
    uint uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = 0x5a;
    if (*(param_1 + -8) != 0) {
        iVar2 = 0x5b;
    }
    iVar1 = regmap_update_bits_base(*(param_1 + -0x18),*(param_1 + -0x24) + iVar2,0x80,0,0,0,0);
    if (iVar1 != 0) {
        _dev_err(*(param_1 + -0x30),"unable to clear ps hold reset enable: %d\n",iVar1);
    }
    usleep_range_state(100,1000,2);
    uVar3 = 4;
    if ((param_2 & 0xfffffffffffffffe) != 2) {
        uVar3 = 7;
    }
    iVar1 = regmap_update_bits_base(*(param_1 + -0x18),*(param_1 + -0x24) + 0x5a,0xf,uVar3,0,0,0);
    if (iVar1 != 0) {
        _dev_err(*(param_1 + -0x30),"unable to set ps hold reset type: %d\n",iVar1);
    }
    iVar2 = regmap_update_bits_base(*(param_1 + -0x18),*(param_1 + -0x24) + iVar2,0x80,0x80,0,0,0);
    if (iVar2 != 0) {
        _dev_err(*(param_1 + -0x30),"unable to re-set enable: %d\n",iVar2);
    }
    return 0;
}


// ===== sym.pm8941_pwrkey_remove.7de1c732bbb80e118c6e139c9d8df290.cfi_jt @ 0x08001180 (size 8) =====

ulong sym.pm8941_pwrkey_remove.7de1c732bbb80e118c6e139c9d8df290.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(*(*(param_1 + 0xa8) + 0x60) + 8) != '\0') {
        unregister_reboot_notifier(*(param_1 + 0xa8) + 0x30);
    }
    return 0;
}


// ===== sym.pm8941_pwrkey_probe.7de1c732bbb80e118c6e139c9d8df290.cfi_jt @ 0x08001188 (size 8) =====

int sym.pm8941_pwrkey_probe.7de1c732bbb80e118c6e139c9d8df290.cfi_jt(int64_t param_1)

{
    int iVar1;
    int iVar2;
    int64_t iVar3;
    int64_t *piVar4;
    int64_t iVar5;
    uint32_t *puVar6;
    int64_t iVar7;
    char *pcVar8;
    int *piVar9;
    uint32_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar11;
    int64_t iVar12;
    ulong unaff_x30;
    int iStack_50;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_48 = *(iVar7 + 0x5e0);
    iVar7 = param_1 + 0x10;
    iStack_50 = 0;
    iVar2 = of_property_read_variable_u32_array(*(param_1 + 0x300),"debounce",&iStack_50,1,0);
    if (iVar2 < 0) {
        iStack_50 = 0x3d09;
    }
    else if (iStack_50 - 0x1e8481U < 0xffe17b80) {
        _dev_err(iVar7,"invalid debounce time: %u\n");
        iVar2 = -0x16;
        goto code_r0x08001718;
    }
    iVar3 = of_find_property(*(param_1 + 0x300),"bias-pull-up",0);
    piVar4 = devm_kmalloc(iVar7,0x68,0xdc0);
    if (piVar4 == NULL) {
code_r0x0800155c:
        iVar2 = -0xc;
        goto code_r0x08001718;
    }
    *piVar4 = iVar7;
    iVar5 = of_device_get_match_data(iVar7);
    piVar4[0xc] = iVar5;
    if (iVar5 == 0) {
        pcVar8 = "match data not found\n";
code_r0x080016b0:
        _dev_err(iVar7,pcVar8);
        iVar2 = -0x13;
        goto code_r0x08001718;
    }
    iVar12 = *(param_1 + 0x70);
    uVar11 = *(param_1 + 0x300);
    iVar5 = dev_get_regmap(iVar12,0);
    piVar4[3] = iVar5;
    if (iVar5 == 0) {
        uVar11 = *(iVar12 + 0x2f0);
        iVar5 = dev_get_regmap(*(iVar12 + 0x60),0);
        piVar4[3] = iVar5;
        if (iVar5 == 0) {
            pcVar8 = "failed to locate regmap\n";
            goto code_r0x080016b0;
        }
    }
    puVar6 = __of_get_address(uVar11,0,0xffffffff,0,0);
    if (puVar6 == NULL) {
        _dev_err(iVar7,"reg property missing\n");
        iVar2 = -0x16;
        goto code_r0x08001718;
    }
    uVar10 = (*puVar6 & 0xff00ff00) >> 8 | (*puVar6 & 0xff00ff) << 8;
    *(piVar4 + 0xc) = uVar10 >> 0x10 | uVar10 << 0x10;
    if ((*(piVar4[0xc] + 0xb) != '\0') && (puVar6 = __of_get_address(uVar11,1,0xffffffff,0,0), puVar6 != NULL)) {
        uVar10 = (*puVar6 & 0xff00ff00) >> 8 | (*puVar6 & 0xff00ff) << 8;
        *(piVar4 + 2) = uVar10 >> 0x10 | uVar10 << 0x10;
    }
    iVar2 = platform_get_irq(param_1,0);
    *(piVar4 + 1) = iVar2;
    if (iVar2 < 0) goto code_r0x08001718;
    iVar2 = regmap_read(piVar4[3],*(piVar4 + 0xc) + 1,piVar4 + 5);
    if (iVar2 == 0) {
        iVar2 = regmap_read(piVar4[3],*(piVar4 + 0xc) + 5,piVar4 + 0x2c);
        if (iVar2 == 0) {
            iVar2 = of_property_read_variable_u32_array(*(param_1 + 0x300),"linux,code",piVar4 + 9,1,0);
            if (iVar2 < 0) {
                *(piVar4 + 9) = 0x74;
            }
            iVar5 = devm_input_allocate_device(iVar7);
            piVar4[4] = iVar5;
            if (iVar5 == 0) goto code_r0x0800155c;
            input_set_capability(iVar5,1,piVar4[9]);
            *piVar4[4] = *(piVar4[0xc] + 0x10);
            *(piVar4[4] + 8) = *(piVar4[0xc] + 0x18);
            piVar9 = piVar4[0xc];
            if (*(piVar9 + 9) != '\0') {
                uVar10 = iStack_50 << 6;
                iStack_50 = 0x1f - LZCOUNT(uVar10 / 1000000);
                if (uVar10 < 1000000) {
                    iStack_50 = -1;
                }
                iVar2 = regmap_update_bits_base(piVar4[3],*(piVar4 + 0xc) + 0x71,7,iStack_50,0,0,0);
                if (iVar2 != 0) {
                    pcVar8 = "failed to set debounce: %d\n";
                    goto code_r0x0800170c;
                }
                piVar9 = piVar4[0xc];
            }
            if (*(piVar9 + 10) != '\0') {
                uStack_4c = 0;
                iVar2 = piVar4[2];
                if (*(piVar9 + 0xb) == '\0') {
                    if (iVar2 == 0) {
                        iVar2 = *(piVar4 + 0xc);
                    }
code_r0x0800156c:
                    iVar2 = regmap_read(piVar4[3],iVar2 + 0x71,&uStack_4c);
                    if (iVar2 != 0) goto code_r0x08001718;
                    if (*(piVar4 + 0x2c) < 4) {
                        uVar10 = ~uStack_4c & 7;
                    }
                    else {
                        uVar10 = ~uStack_4c & 0xf;
                    }
                    *(piVar4 + 0x4c) = 2000000 >> uVar10;
                }
                else {
                    if (iVar2 != 0) goto code_r0x0800156c;
                    _dev_err(*piVar4,"PON_PBS address missing, can\'t read HW debounce time\n");
                }
                piVar9 = piVar4[0xc];
            }
            iVar2 = *piVar9;
            if (iVar2 != 0) {
                iVar1 = 0;
                if (iVar3 != 0) {
                    iVar1 = iVar2;
                }
                iVar2 = regmap_update_bits_base(piVar4[3],*(piVar4 + 0xc) + 0x70,iVar2,iVar1,0,0,0);
                if (iVar2 != 0) {
                    pcVar8 = "failed to set pull: %d\n";
                    goto code_r0x0800170c;
                }
                piVar9 = piVar4[0xc];
            }
            iVar2 = devm_request_threaded_irq
                              (iVar7,piVar4[1],0,sym.pm8941_pwrkey_irq.7de1c732bbb80e118c6e139c9d8df290.cfi_jt,
                               0x2000,*(piVar9 + 4),piVar4);
            if (iVar2 == 0) {
                iVar2 = input_register_device(piVar4[4]);
                if (iVar2 == 0) {
                    if (*(piVar4[0xc] + 8) != '\0') {
                        piVar4[6] = sym.pm8941_reboot_notify.7de1c732bbb80e118c6e139c9d8df290.cfi_jt;
                        iVar2 = register_reboot_notifier();
                        if (iVar2 != 0) {
                            pcVar8 = "failed to register reboot notifier: %d\n";
                            goto code_r0x0800170c;
                        }
                    }
                    *(param_1 + 0xa8) = piVar4;
                    device_init_wakeup(iVar7,1);
                    iVar2 = 0;
                    goto code_r0x08001718;
                }
                pcVar8 = "failed to register input device: %d\n";
            }
            else {
                pcVar8 = "failed requesting IRQ: %d\n";
            }
        }
        else {
            pcVar8 = "failed to read subtype: %d\n";
        }
    }
    else {
        pcVar8 = "failed to read revision: %d\n";
    }
code_r0x0800170c:
    _dev_err(iVar7,pcVar8,iVar2);
code_r0x08001718:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_48) {
        iVar7 = __stack_chk_fail();
        *extraout_x18 = sym.pm8941_pwrkey_remove;
        if (*(*(*(iVar7 + 0xa8) + 0x60) + 8) != '\0') {
            unregister_reboot_notifier(*(iVar7 + 0xa8) + 0x30);
        }
        return 0;
    }
    return iVar2;
}


// ===== sym.pm8941_pwrkey_suspend.7de1c732bbb80e118c6e139c9d8df290.cfi_jt @ 0x08001190 (size 8) =====

ulong sym.pm8941_pwrkey_suspend.7de1c732bbb80e118c6e139c9d8df290.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((*(param_1 + 0x10c) & 1) != 0) && (*(param_1 + 0x148) != 0)) {
        irq_set_irq_wake(*(*(param_1 + 0x98) + 8),1);
    }
    return 0;
}


// ===== sym.pm8941_pwrkey_resume.7de1c732bbb80e118c6e139c9d8df290.cfi_jt @ 0x08001198 (size 8) =====

ulong sym.pm8941_pwrkey_resume.7de1c732bbb80e118c6e139c9d8df290.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((*(param_1 + 0x10c) & 1) != 0) && (*(param_1 + 0x148) != 0)) {
        irq_set_irq_wake(*(*(param_1 + 0x98) + 8),0);
    }
    return 0;
}


// ===== sym.pm8941_pwrkey_irq.7de1c732bbb80e118c6e139c9d8df290.cfi_jt @ 0x080011a0 (size 8) =====

ulong sym.pm8941_pwrkey_irq.7de1c732bbb80e118c6e139c9d8df290.cfi_jt(ulong param_1,ulong *param_2)

{
    int iVar1;
    int iVar2;
    int64_t iVar3;
    ulong *extraout_x1;
    ulong *extraout_x1_00;
    ulong in_x7;
    uint uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar5;
    code *unaff_x21;
    ulong unaff_x22;
    ulong unaff_x30;
    uchar auVar6 [16];
    uchar *puVar7;
    code *pcVar8;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    puVar7 = &stack0xffffffffffffffd0;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_3c = 0;
    uVar5 = *(param_2[0xc] + 0x10);
    iVar1 = strcmp(uVar5,"pmic_pwrkey_bark");
    if (iVar1 == 0) {
        iVar1 = regmap_read(param_2[3],*(param_2 + 0xc) + 0x10,&uStack_3c);
        pcVar8 = _segment.ehdr;
        if ((iVar1 == 0) && (uStack_3c = uStack_3c & *(param_2[0xc] + 4), uStack_3c != 0)) {
            if (_segment.ehdr != NULL) {
                __cfi_slowpath_diag(0x47ce015a85343a42,_segment.ehdr,0x8000180);
                (*pcVar8)(1);
            }
            _dev_err(*param_2,"pwrkey_bark_irq trigger, call notifier chain to start mtdoops dump");
            atomic_notifier_call_chain(reloc.pm8941_pwrkey_probe.7de1c732bbb80e118c6e139c9d8df290.cfi_jt,0,0);
        }
    }
    else {
        iVar1 = strcmp(uVar5,"pmic_pwrkey_resin_bark");
        if (iVar1 == 0) {
            iVar1 = regmap_read(param_2[3],*(param_2 + 0xc) + 0x10,&uStack_3c);
            pcVar8 = _segment.ehdr;
            if (iVar1 != 0) goto code_r0x080019c8;
            uStack_3c = uStack_3c & *(param_2[0xc] + 4);
            if (uStack_3c != 0) {
                unaff_x21 = _printk;
                *extraout_x1 = unaff_x22;
                if (pcVar8 != NULL) {
                    __cfi_slowpath_diag(0x47ce015a85343a42,pcVar8,0x80001a0);
                    (*pcVar8)(1);
                }
                _printk(0x800065f);
                console_verbose();
                _printk(0x8000338);
                sym.show_state_filter_single(2);
                sym.show_state_filter_single(0);
                _printk(0x800037f);
                *extraout_x1_00 = unaff_x22;
            }
        }
        if (*(param_2 + 0x4c) != 0) {
            iVar3 = ktime_get();
            if ((iVar3 - param_2[10]) / 1000 < *(param_2 + 0x4c)) goto code_r0x080019c8;
        }
        iVar1 = regmap_read(param_2[3],*(param_2 + 0xc) + 0x10,&uStack_3c);
        if (iVar1 == 0) {
            uStack_3c = uStack_3c & *(param_2[0xc] + 4);
            if ((*(param_2 + 0x4c) != 0) && (uStack_3c == 0)) {
                uVar5 = ktime_get();
                param_2[10] = uVar5;
            }
            if ((*(param_2 + 0xb) == '\0') && (uStack_3c == 0)) {
                input_event(param_2[4],1,*(param_2 + 9),1);
                input_event(param_2[4],0,0,0);
            }
            *(param_2 + 0xb) = uStack_3c != 0;
            input_event(param_2[4],1,*(param_2 + 9));
            input_event(param_2[4],0,0,0);
            pcVar8 = _segment.ehdr;
            if (((*(param_2 + 9) == 0x74) && (uStack_3c == 0)) && (_segment.ehdr != NULL)) {
                __cfi_slowpath_diag(0x47ce015a85343a42,_segment.ehdr,0x80001c0);
                (*pcVar8)(2);
            }
        }
    }
code_r0x080019c8:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return 1;
    }
    auVar6 = __stack_chk_fail();
    iVar3 = auVar6._0_8_;
    *extraout_x18 = sym.pm8941_reboot_notify;
    pcVar8 = sym.pm8941_reboot_notify;
    iVar1 = 0x5a;
    if (*(iVar3 + -8) != 0) {
        iVar1 = 0x5b;
    }
    iVar2 = regmap_update_bits_base
                      (*(iVar3 + -0x18),*(iVar3 + -0x24) + iVar1,0x80,0,0,0,0,in_x7,puVar7,
                       sym.pm8941_reboot_notify,unaff_x21);
    if (iVar2 != 0) {
        _dev_err(*(iVar3 + -0x30),"unable to clear ps hold reset enable: %d\n",iVar2);
    }
    usleep_range_state(100,1000,2);
    uVar4 = 4;
    if ((auVar6._8_8_ & 0xfffffffffffffffe) != 2) {
        uVar4 = 7;
    }
    iVar2 = regmap_update_bits_base
                      (*(iVar3 + -0x18),*(iVar3 + -0x24) + 0x5a,0xf,uVar4,0,0,0,in_x7,puVar7,pcVar8,unaff_x21)
    ;
    if (iVar2 != 0) {
        _dev_err(*(iVar3 + -0x30),"unable to set ps hold reset type: %d\n",iVar2);
    }
    iVar1 = regmap_update_bits_base(*(iVar3 + -0x18),*(iVar3 + -0x24) + iVar1,0x80,0x80,0,0,0);
    if (iVar1 != 0) {
        _dev_err(*(iVar3 + -0x30),"unable to re-set enable: %d\n",iVar1);
    }
    return 0;
}


// ===== sym.show_state_filter_single @ 0x080011a8 (size 176) =====

void sym.show_state_filter_single(int64_t arg1)

{
    ulong *in_x18;
    ulong *puVar1;
    ulong *puVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x80002f8);
    __rcu_read_lock();
    for (puVar1 = *0x80074d8; puVar1 != 0x80074d8; puVar1 = *puVar1) {
        for (puVar2 = *(puVar1[100] + 0x10); puVar1[100] + 0x10 != puVar2; puVar2 = *puVar2) {
            touch_softlockup_watchdog();
            if (*(puVar2 + -0xce) == arg1) {
                sched_show_task(puVar2 + -0xd3);
            }
        }
    }
    __rcu_read_unlock();
    return;
}


// ===== sym.mi_display_pwrkey_callback_set @ 0x08001268 (size 64) =====

void sym.mi_display_pwrkey_callback_set(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = arg1;
    _printk(0x80001e5,"mi_display_pwrkey_callback_set",arg1);
    return;
}


// ===== sym.pm8941_pwrkey_probe @ 0x080012a8 (size 1196) =====

int sym.pm8941_pwrkey_probe(int64_t arg1)

{
    int iVar1;
    int iVar2;
    int64_t iVar3;
    int64_t *piVar4;
    int64_t iVar5;
    uint32_t *puVar6;
    int64_t iVar7;
    char *pcVar8;
    int *piVar9;
    uint32_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar11;
    int64_t iVar12;
    ulong unaff_x30;
    int iStack_50;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_48 = *(iVar7 + 0x5e0);
    iVar7 = arg1 + 0x10;
    iStack_50 = 0;
    iVar2 = of_property_read_variable_u32_array(*(arg1 + 0x300),"debounce",&iStack_50,1,0);
    if (iVar2 < 0) {
        iStack_50 = 0x3d09;
    }
    else if (iStack_50 - 0x1e8481U < 0xffe17b80) {
        _dev_err(iVar7,"invalid debounce time: %u\n");
        iVar2 = -0x16;
        goto code_r0x08001718;
    }
    iVar3 = of_find_property(*(arg1 + 0x300),"bias-pull-up",0);
    piVar4 = devm_kmalloc(iVar7,0x68,0xdc0);
    if (piVar4 == NULL) {
code_r0x0800155c:
        iVar2 = -0xc;
        goto code_r0x08001718;
    }
    *piVar4 = iVar7;
    iVar5 = of_device_get_match_data(iVar7);
    piVar4[0xc] = iVar5;
    if (iVar5 == 0) {
        pcVar8 = "match data not found\n";
code_r0x080016b0:
        _dev_err(iVar7,pcVar8);
        iVar2 = -0x13;
        goto code_r0x08001718;
    }
    iVar12 = *(arg1 + 0x70);
    uVar11 = *(arg1 + 0x300);
    iVar5 = dev_get_regmap(iVar12,0);
    piVar4[3] = iVar5;
    if (iVar5 == 0) {
        uVar11 = *(iVar12 + 0x2f0);
        iVar5 = dev_get_regmap(*(iVar12 + 0x60),0);
        piVar4[3] = iVar5;
        if (iVar5 == 0) {
            pcVar8 = "failed to locate regmap\n";
            goto code_r0x080016b0;
        }
    }
    puVar6 = __of_get_address(uVar11,0,0xffffffff,0,0);
    if (puVar6 == NULL) {
        _dev_err(iVar7,"reg property missing\n");
        iVar2 = -0x16;
        goto code_r0x08001718;
    }
    uVar10 = (*puVar6 & 0xff00ff00) >> 8 | (*puVar6 & 0xff00ff) << 8;
    *(piVar4 + 0xc) = uVar10 >> 0x10 | uVar10 << 0x10;
    if ((*(piVar4[0xc] + 0xb) != '\0') && (puVar6 = __of_get_address(uVar11,1,0xffffffff,0,0), puVar6 != NULL)) {
        uVar10 = (*puVar6 & 0xff00ff00) >> 8 | (*puVar6 & 0xff00ff) << 8;
        *(piVar4 + 2) = uVar10 >> 0x10 | uVar10 << 0x10;
    }
    iVar2 = platform_get_irq(arg1,0);
    *(piVar4 + 1) = iVar2;
    if (iVar2 < 0) goto code_r0x08001718;
    iVar2 = regmap_read(piVar4[3],*(piVar4 + 0xc) + 1,piVar4 + 5);
    if (iVar2 == 0) {
        iVar2 = regmap_read(piVar4[3],*(piVar4 + 0xc) + 5,piVar4 + 0x2c);
        if (iVar2 == 0) {
            iVar2 = of_property_read_variable_u32_array(*(arg1 + 0x300),"linux,code",piVar4 + 9,1,0);
            if (iVar2 < 0) {
                *(piVar4 + 9) = 0x74;
            }
            iVar5 = devm_input_allocate_device(iVar7);
            piVar4[4] = iVar5;
            if (iVar5 == 0) goto code_r0x0800155c;
            input_set_capability(iVar5,1,piVar4[9]);
            *piVar4[4] = *(piVar4[0xc] + 0x10);
            *(piVar4[4] + 8) = *(piVar4[0xc] + 0x18);
            piVar9 = piVar4[0xc];
            if (*(piVar9 + 9) != '\0') {
                uVar10 = iStack_50 << 6;
                iStack_50 = 0x1f - LZCOUNT(uVar10 / 1000000);
                if (uVar10 < 1000000) {
                    iStack_50 = -1;
                }
                iVar2 = regmap_update_bits_base(piVar4[3],*(piVar4 + 0xc) + 0x71,7,iStack_50,0,0,0);
                if (iVar2 != 0) {
                    pcVar8 = "failed to set debounce: %d\n";
                    goto code_r0x0800170c;
                }
                piVar9 = piVar4[0xc];
            }
            if (*(piVar9 + 10) != '\0') {
                uStack_4c = 0;
                iVar2 = piVar4[2];
                if (*(piVar9 + 0xb) == '\0') {
                    if (iVar2 == 0) {
                        iVar2 = *(piVar4 + 0xc);
                    }
code_r0x0800156c:
                    iVar2 = regmap_read(piVar4[3],iVar2 + 0x71,&uStack_4c);
                    if (iVar2 != 0) goto code_r0x08001718;
                    if (*(piVar4 + 0x2c) < 4) {
                        uVar10 = ~uStack_4c & 7;
                    }
                    else {
                        uVar10 = ~uStack_4c & 0xf;
                    }
                    *(piVar4 + 0x4c) = 2000000 >> uVar10;
                }
                else {
                    if (iVar2 != 0) goto code_r0x0800156c;
                    _dev_err(*piVar4,"PON_PBS address missing, can\'t read HW debounce time\n");
                }
                piVar9 = piVar4[0xc];
            }
            iVar2 = *piVar9;
            if (iVar2 != 0) {
                iVar1 = 0;
                if (iVar3 != 0) {
                    iVar1 = iVar2;
                }
                iVar2 = regmap_update_bits_base(piVar4[3],*(piVar4 + 0xc) + 0x70,iVar2,iVar1,0,0,0);
                if (iVar2 != 0) {
                    pcVar8 = "failed to set pull: %d\n";
                    goto code_r0x0800170c;
                }
                piVar9 = piVar4[0xc];
            }
            iVar2 = devm_request_threaded_irq
                              (iVar7,piVar4[1],0,sym.pm8941_pwrkey_irq.7de1c732bbb80e118c6e139c9d8df290.cfi_jt,
                               0x2000,*(piVar9 + 4),piVar4);
            if (iVar2 == 0) {
                iVar2 = input_register_device(piVar4[4]);
                if (iVar2 == 0) {
                    if (*(piVar4[0xc] + 8) != '\0') {
                        piVar4[6] = sym.pm8941_reboot_notify.7de1c732bbb80e118c6e139c9d8df290.cfi_jt;
                        iVar2 = register_reboot_notifier();
                        if (iVar2 != 0) {
                            pcVar8 = "failed to register reboot notifier: %d\n";
                            goto code_r0x0800170c;
                        }
                    }
                    *(arg1 + 0xa8) = piVar4;
                    device_init_wakeup(iVar7,1);
                    iVar2 = 0;
                    goto code_r0x08001718;
                }
                pcVar8 = "failed to register input device: %d\n";
            }
            else {
                pcVar8 = "failed requesting IRQ: %d\n";
            }
        }
        else {
            pcVar8 = "failed to read subtype: %d\n";
        }
    }
    else {
        pcVar8 = "failed to read revision: %d\n";
    }
code_r0x0800170c:
    _dev_err(iVar7,pcVar8,iVar2);
code_r0x08001718:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_48) {
        iVar7 = __stack_chk_fail();
        *extraout_x18 = sym.pm8941_pwrkey_remove;
        if (*(*(*(iVar7 + 0xa8) + 0x60) + 8) != '\0') {
            unregister_reboot_notifier(*(iVar7 + 0xa8) + 0x30);
        }
        return 0;
    }
    return iVar2;
}


// ===== sym.pm8941_pwrkey_remove @ 0x08001754 (size 60) =====

ulong sym.pm8941_pwrkey_remove(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(*(*(arg1 + 0xa8) + 0x60) + 8) != '\0') {
        unregister_reboot_notifier(*(arg1 + 0xa8) + 0x30);
    }
    return 0;
}


// ===== sym.pm8941_pwrkey_irq @ 0x08001790 (size 772) =====

ulong sym.pm8941_pwrkey_irq(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int iVar2;
    int64_t iVar3;
    ulong *extraout_x1;
    ulong *extraout_x1_00;
    ulong in_x7;
    uint uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar5;
    code *unaff_x21;
    ulong unaff_x22;
    ulong unaff_x30;
    uchar auVar6 [16];
    uchar *puVar7;
    code *pcVar8;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    puVar7 = &stack0xffffffffffffffd0;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_3c = 0;
    uVar5 = *(*(arg2 + 0x60) + 0x10);
    iVar1 = strcmp(uVar5,"pmic_pwrkey_bark");
    if (iVar1 == 0) {
        iVar1 = regmap_read(*(arg2 + 0x18),*(arg2 + 0xc) + 0x10,&uStack_3c);
        pcVar8 = _segment.ehdr;
        if ((iVar1 == 0) && (uStack_3c = uStack_3c & *(*(arg2 + 0x60) + 4), uStack_3c != 0)) {
            if (_segment.ehdr != NULL) {
                __cfi_slowpath_diag(0x47ce015a85343a42,_segment.ehdr,0x8000180);
                (*pcVar8)(1);
            }
            _dev_err(*arg2,"pwrkey_bark_irq trigger, call notifier chain to start mtdoops dump");
            atomic_notifier_call_chain(reloc.pm8941_pwrkey_probe.7de1c732bbb80e118c6e139c9d8df290.cfi_jt,0,0);
        }
    }
    else {
        iVar1 = strcmp(uVar5,"pmic_pwrkey_resin_bark");
        if (iVar1 == 0) {
            iVar1 = regmap_read(*(arg2 + 0x18),*(arg2 + 0xc) + 0x10,&uStack_3c);
            pcVar8 = _segment.ehdr;
            if (iVar1 != 0) goto code_r0x080019c8;
            uStack_3c = uStack_3c & *(*(arg2 + 0x60) + 4);
            if (uStack_3c != 0) {
                unaff_x21 = _printk;
                *extraout_x1 = unaff_x22;
                if (pcVar8 != NULL) {
                    __cfi_slowpath_diag(0x47ce015a85343a42,pcVar8,0x80001a0);
                    (*pcVar8)(1);
                }
                _printk(0x800065f);
                console_verbose();
                _printk(0x8000338);
                sym.show_state_filter_single(2);
                sym.show_state_filter_single(0);
                _printk(0x800037f);
                *extraout_x1_00 = unaff_x22;
            }
        }
        if (*(arg2 + 0x4c) != 0) {
            iVar3 = ktime_get();
            if ((iVar3 - *(arg2 + 0x50)) / 1000 < *(arg2 + 0x4c)) goto code_r0x080019c8;
        }
        iVar1 = regmap_read(*(arg2 + 0x18),*(arg2 + 0xc) + 0x10,&uStack_3c);
        if (iVar1 == 0) {
            uStack_3c = uStack_3c & *(*(arg2 + 0x60) + 4);
            if ((*(arg2 + 0x4c) != 0) && (uStack_3c == 0)) {
                uVar5 = ktime_get();
                *(arg2 + 0x50) = uVar5;
            }
            if ((*(arg2 + 0x58) == '\0') && (uStack_3c == 0)) {
                input_event(*(arg2 + 0x20),1,*(arg2 + 0x48),1);
                input_event(*(arg2 + 0x20),0,0,0);
            }
            *(arg2 + 0x58) = uStack_3c != 0;
            input_event(*(arg2 + 0x20),1,*(arg2 + 0x48));
            input_event(*(arg2 + 0x20),0,0,0);
            pcVar8 = _segment.ehdr;
            if (((*(arg2 + 0x48) == 0x74) && (uStack_3c == 0)) && (_segment.ehdr != NULL)) {
                __cfi_slowpath_diag(0x47ce015a85343a42,_segment.ehdr,0x80001c0);
                (*pcVar8)(2);
            }
        }
    }
code_r0x080019c8:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return 1;
    }
    auVar6 = __stack_chk_fail();
    iVar3 = auVar6._0_8_;
    *extraout_x18 = sym.pm8941_reboot_notify;
    pcVar8 = sym.pm8941_reboot_notify;
    iVar1 = 0x5a;
    if (*(iVar3 + -8) != 0) {
        iVar1 = 0x5b;
    }
    iVar2 = regmap_update_bits_base
                      (*(iVar3 + -0x18),*(iVar3 + -0x24) + iVar1,0x80,0,0,0,0,in_x7,puVar7,
                       sym.pm8941_reboot_notify,unaff_x21);
    if (iVar2 != 0) {
        _dev_err(*(iVar3 + -0x30),"unable to clear ps hold reset enable: %d\n",iVar2);
    }
    usleep_range_state(100,1000,2);
    uVar4 = 4;
    if ((auVar6._8_8_ & 0xfffffffffffffffe) != 2) {
        uVar4 = 7;
    }
    iVar2 = regmap_update_bits_base
                      (*(iVar3 + -0x18),*(iVar3 + -0x24) + 0x5a,0xf,uVar4,0,0,0,in_x7,puVar7,pcVar8,unaff_x21)
    ;
    if (iVar2 != 0) {
        _dev_err(*(iVar3 + -0x30),"unable to set ps hold reset type: %d\n",iVar2);
    }
    iVar1 = regmap_update_bits_base(*(iVar3 + -0x18),*(iVar3 + -0x24) + iVar1,0x80,0x80,0,0,0);
    if (iVar1 != 0) {
        _dev_err(*(iVar3 + -0x30),"unable to re-set enable: %d\n",iVar1);
    }
    return 0;
}


// ===== sym.pm8941_reboot_notify @ 0x08001a94 (size 300) =====

ulong sym.pm8941_reboot_notify(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int iVar2;
    uint uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = 0x5a;
    if (*(arg1 + -8) != 0) {
        iVar2 = 0x5b;
    }
    iVar1 = regmap_update_bits_base(*(arg1 + -0x18),*(arg1 + -0x24) + iVar2,0x80,0,0,0,0);
    if (iVar1 != 0) {
        _dev_err(*(arg1 + -0x30),"unable to clear ps hold reset enable: %d\n",iVar1);
    }
    usleep_range_state(100,1000,2);
    uVar3 = 4;
    if ((arg2 & 0xfffffffffffffffeU) != 2) {
        uVar3 = 7;
    }
    iVar1 = regmap_update_bits_base(*(arg1 + -0x18),*(arg1 + -0x24) + 0x5a,0xf,uVar3,0,0,0);
    if (iVar1 != 0) {
        _dev_err(*(arg1 + -0x30),"unable to set ps hold reset type: %d\n",iVar1);
    }
    iVar2 = regmap_update_bits_base(*(arg1 + -0x18),*(arg1 + -0x24) + iVar2,0x80,0x80,0,0,0);
    if (iVar2 != 0) {
        _dev_err(*(arg1 + -0x30),"unable to re-set enable: %d\n",iVar2);
    }
    return 0;
}


// ===== sym.pm8941_pwrkey_suspend @ 0x08001bc0 (size 68) =====

ulong sym.pm8941_pwrkey_suspend(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((*(arg1 + 0x10c) & 1) != 0) && (*(arg1 + 0x148) != 0)) {
        irq_set_irq_wake(*(*(arg1 + 0x98) + 8),1);
    }
    return 0;
}


// ===== sym.pm8941_pwrkey_resume @ 0x08001c04 (size 68) =====

ulong sym.pm8941_pwrkey_resume(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((*(arg1 + 0x10c) & 1) != 0) && (*(arg1 + 0x148) != 0)) {
        irq_set_irq_wake(*(*(arg1 + 0x98) + 8),0);
    }
    return 0;
}


// ===== sym.__cfi_check_fail @ 0x08001c48 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001c8c

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
    //switch table (4 cases) at 0x80001e0
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001ca0);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001cdc (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.pm8941_pwrkey_probe.7de1c732bbb80e118c6e139c9d8df290.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08001d10 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.pm8941_pwrkey_probe.7de1c732bbb80e118c6e139c9d8df290.cfi_jt);
    return;
}

