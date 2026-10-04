// decompiled from xiaomi_wifi_gpio by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 340) =====

//WARNING: Switch with 1 destination removed at 0x080017d4

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x3557318fb8d07b71) {
        if (arg1 == -0x550b9e52359ac614) {
            pcVar2 = sym.gpio_debounce_work.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else if (arg1 == -0x4d7e2f04b135d45c) {
            pcVar2 = sym.sar_status_set.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else {
            if (arg1 != -0x3987c0e26ee29729) goto code_r0x08001794;
            pcVar2 = sym.gpio_testing_threaded_irq_handler.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
    }
    else if (arg1 < 0x2b3a43e29242445) {
        if (arg1 == -0x3557318fb8d07b71) {
            if ((pcVar1 + -0x8001190 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08001794;
        }
        if (arg1 != -0x2ee0710dce68437c) goto code_r0x08001794;
        pcVar2 = sym.delayed_work_timer_fn.cfi_jt;
    }
    else if (arg1 == 0x2b3a43e29242445) {
        pcVar2 = sym.init_module.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001794;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001794:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80017e8);
    (*pcVar1)();
}


// ===== sym.gpio_debounce_work.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001160 (size 8) =====

void sym.gpio_debounce_work.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int *piVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    code *pcVar5;
    int64_t arg1;
    ulong *in_x18;
    ulong *puVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    gpio_to_desc(_segment.ehdr);
    arg1 = gpiod_get_raw_value();
    _segment.ehdr = arg1;
    sym.sar_send_status(arg1);
    puVar6 = param_1 + -0x18;
    _dev_info(*puVar6,"gpio status: %d\n",_segment.ehdr);
    piVar1 = param_1 + -8;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        iVar4 = *piVar1 + -1;
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
            *piVar1 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    DataMemoryBarrier(2,3);
    if (iVar4 < 0) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x8001688);
        (*pcVar5)();
    }
    if (iVar4 == 0) {
        _dev_info(*puVar6,"PM relax, count: %d\n",*(param_1 + -8));
        pm_relax(*puVar6);
    }
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001168 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = get_hw_country_version();
    if (iVar1 == 0) {
        genl_unregister_family(obj.sar_fam);
        platform_driver_unregister(reloc.xiaomi_wifi_gpio_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    }
    else {
        _printk(0x80003b2,"wifi_gpio_driver_exit");
    }
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001170 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = get_hw_country_version();
    if (iVar1 == 0) {
        iVar1 = genl_register_family(obj.sar_fam);
        if (iVar1 == 0) {
            iVar1 = __platform_driver_register
                              (reloc.xiaomi_wifi_gpio_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
            if (iVar1 != 0) {
                genl_unregister_family(obj.sar_fam);
            }
        }
    }
    else {
        _printk(0x800029e,"wifi_gpio_driver_init");
        iVar1 = 0;
    }
    return iVar1;
}


// ===== sym.delayed_work_timer_fn.cfi_jt @ 0x08001178 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.delayed_work_timer_fn.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.sar_status_set.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001180 (size 8) =====

void sym.sar_status_set.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(void)

{
    int64_t arg1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    gpio_to_desc(_segment.ehdr);
    arg1 = gpiod_get_raw_value();
    _segment.ehdr = arg1;
    sym.sar_send_status(arg1);
    return;
}


// ===== sym.gpio_testing_threaded_irq_handler.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001188 (size 8) =====

ulong sym.gpio_testing_threaded_irq_handler.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(uint param_1,ulong *param_2)

{
    int iVar1;
    char cVar2;
    bool bVar3;
    ulong uVar4;
    ulong uVar5;
    ulong *in_x18;
    int *piVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar6 = param_2 + 2;
    _dev_info(*param_2,"irq [%d] triggered\n",param_1);
    Hint_Prefetch(piVar6,2,0,1);
    do {
        iVar1 = *piVar6;
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
            *piVar6 = iVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    DataMemoryBarrier(2,3);
    if (iVar1 + 1 < 2) {
        _dev_info(*param_2,"PM stay awake, count: %d\n",param_2[2]);
        pm_stay_awake(*param_2);
    }
    else {
        *piVar6 = 1;
    }
    uVar4 = _gpiod_get_raw_value;
    uVar5 = __msecs_to_jiffies(*(param_2 + 1));
    mod_delayed_work_on(0x20,uVar4,param_2 + 3,uVar5);
    return 1;
}


// ===== sym.xiaomi_wifi_gpio_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001190 (size 8) =====

ulong sym.xiaomi_wifi_gpio_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong *puVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = *(param_1 + 0xa8);
    cancel_delayed_work_sync(puVar1 + 3);
    dev_pm_clear_wake_irq(*puVar1);
    device_init_wakeup(param_1 + 0x10,0);
    _printk(0x800023a,"xiaomi_wifi_gpio_remove");
    return 0;
}


// ===== sym.xiaomi_wifi_gpio_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001198 (size 8) =====

int sym.xiaomi_wifi_gpio_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int iVar2;
    uint uVar3;
    int64_t *piVar4;
    char *pcVar5;
    ulong *in_x18;
    ulong uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = param_1 + 0x10;
    uVar6 = *(param_1 + 0x300);
    piVar4 = devm_kmalloc(iVar1,0xa0,0xdc0);
    if (piVar4 == NULL) {
        iVar2 = -0xc;
    }
    else {
        iVar2 = of_property_read_variable_u32_array(uVar6,"debounce-time",piVar4 + 1,1,0);
        if (iVar2 < 0) {
            _dev_info(iVar1,"Failed to get debounce-time, use default.\n");
            *(piVar4 + 1) = 0x32;
        }
        _segment.ehdr = of_get_named_gpio_flags(uVar6,"gpio",0,0);
        if (_segment.ehdr < 0) {
            _dev_err(iVar1,"Failed to get ant gpio %d\n",_segment.ehdr);
            iVar2 = _segment.ehdr;
        }
        else {
            iVar2 = devm_gpio_request(iVar1,_segment.ehdr,"gpio");
            if (iVar2 == 0) {
                gpio_to_desc(_segment.ehdr);
                gpiod_direction_input();
                gpio_to_desc(_segment.ehdr);
                uVar3 = gpiod_to_irq();
                *(piVar4 + 0xc) = uVar3;
                piVar4[3] = 0xfffffffe0;
                *piVar4 = iVar1;
                piVar4[4] = piVar4 + 4;
                piVar4[5] = piVar4 + 4;
                piVar4[6] = sym.gpio_debounce_work.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                init_timer_key(piVar4 + 9,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                iVar2 = devm_request_threaded_irq
                                  (iVar1,*(piVar4 + 0xc),0,
                                   sym.gpio_testing_threaded_irq_handler.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,0x2003
                                   ,"xiaomi_wifi_gpio",piVar4);
                if (iVar2 < 0) {
                    _dev_err(iVar1,"Failed to request irq.\n");
                    iVar2 = -0x10;
                }
                else {
                    iVar2 = device_init_wakeup(iVar1,1);
                    if (iVar2 == 0) {
                        iVar2 = dev_pm_set_wake_irq(iVar1,*(piVar4 + 0xc));
                        if (iVar2 == 0) {
                            *(param_1 + 0xa8) = piVar4;
                            _printk(0x80001c6);
                            return 0;
                        }
                        pcVar5 = "Failed to set wake irq %d\n";
                    }
                    else {
                        pcVar5 = "Failed to configure device as wakeup %d\n";
                    }
                    _dev_err(iVar1,pcVar5,iVar2);
                }
            }
            else {
                _dev_err(iVar1,"Request gpio failed %d\n");
            }
        }
    }
    return iVar2;
}


// ===== sym.sar_status_set @ 0x080011a0 (size 60) =====

void sym.sar_status_set(void)

{
    int64_t arg1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    gpio_to_desc(_segment.ehdr);
    arg1 = gpiod_get_raw_value();
    _segment.ehdr = arg1;
    sym.sar_send_status(arg1);
    return;
}


// ===== sym.sar_send_status @ 0x080011dc (size 376) =====

int sym.sar_send_status(int64_t arg1)

{
    code *pcVar1;
    int iVar2;
    int iVar3;
    uint uVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t *piVar7;
    char *pcVar8;
    int *piVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar10;
    ulong unaff_x30;
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    iVar5 = __alloc_skb(0xe80,0xa20,0,0xffffffff);
    if (iVar5 == 0) {
        iVar2 = -0xc;
        goto code_r0x08001304;
    }
    iVar6 = genlmsg_put(iVar5,0,0,obj.sar_fam,0,2);
    if (iVar6 == 0) {
code_r0x080012e8:
        kfree_skb(iVar5);
        iVar3 = -0x5a;
    }
    else {
        uStack_3c = arg1;
        iVar2 = nla_put(iVar5,1,4,&uStack_3c);
        piVar9 = iVar6 + -0x14;
        if (iVar2 != 0) {
            if (piVar9 != NULL) {
                if (piVar9 < *(iVar5 + 0xd8)) {
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x800,0x8001348);
                    (*pcVar1)();
                }
                skb_trim(iVar5,piVar9 - *(iVar5 + 0xd8));
            }
            goto code_r0x080012e8;
        }
        *piVar9 = (*(iVar5 + 0xd0) + *(iVar5 + 200)) - piVar9;
        uVar10 = _delayed_work_timer_fn;
        uVar4 = _sym.__cfi_check;
        if (*0x80019f7 == '\0') {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x800,0x8001340);
            (*pcVar1)();
        }
        *(iVar5 + 0x38) = _sym.__cfi_check;
        iVar3 = netlink_broadcast(uVar10,iVar5,0,uVar4,0xa20);
        iVar2 = 0;
        if ((-1 < iVar3) || (iVar3 == -3)) goto code_r0x08001304;
    }
    _printk(0x80003da,iVar3);
    iVar2 = iVar3;
code_r0x08001304:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return iVar2;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18 = sym.xiaomi_wifi_gpio_probe;
    iVar5 = iVar6 + 0x10;
    uVar10 = *(iVar6 + 0x300);
    piVar7 = devm_kmalloc(iVar5,0xa0,0xdc0);
    if (piVar7 == NULL) {
        iVar2 = -0xc;
    }
    else {
        iVar2 = of_property_read_variable_u32_array(uVar10,"debounce-time",piVar7 + 1,1,0);
        if (iVar2 < 0) {
            _dev_info(iVar5,"Failed to get debounce-time, use default.\n");
            *(piVar7 + 1) = 0x32;
        }
        _segment.ehdr = of_get_named_gpio_flags(uVar10,"gpio",0,0);
        if (_segment.ehdr < 0) {
            _dev_err(iVar5,"Failed to get ant gpio %d\n",_segment.ehdr);
            iVar2 = _segment.ehdr;
        }
        else {
            iVar2 = devm_gpio_request(iVar5,_segment.ehdr,"gpio");
            if (iVar2 == 0) {
                gpio_to_desc(_segment.ehdr);
                gpiod_direction_input();
                gpio_to_desc(_segment.ehdr);
                uVar4 = gpiod_to_irq();
                *(piVar7 + 0xc) = uVar4;
                piVar7[3] = 0xfffffffe0;
                *piVar7 = iVar5;
                piVar7[4] = piVar7 + 4;
                piVar7[5] = piVar7 + 4;
                piVar7[6] = sym.gpio_debounce_work.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                init_timer_key(piVar7 + 9,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                iVar2 = devm_request_threaded_irq
                                  (iVar5,*(piVar7 + 0xc),0,
                                   sym.gpio_testing_threaded_irq_handler.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,0x2003
                                   ,"xiaomi_wifi_gpio",piVar7);
                if (iVar2 < 0) {
                    _dev_err(iVar5,"Failed to request irq.\n");
                    iVar2 = -0x10;
                }
                else {
                    iVar2 = device_init_wakeup(iVar5,1);
                    if (iVar2 == 0) {
                        iVar2 = dev_pm_set_wake_irq(iVar5,*(piVar7 + 0xc));
                        if (iVar2 == 0) {
                            *(iVar6 + 0xa8) = piVar7;
                            _printk(0x80001c6);
                            return 0;
                        }
                        pcVar8 = "Failed to set wake irq %d\n";
                    }
                    else {
                        pcVar8 = "Failed to configure device as wakeup %d\n";
                    }
                    _dev_err(iVar5,pcVar8,iVar2);
                }
            }
            else {
                _dev_err(iVar5,"Request gpio failed %d\n");
            }
        }
    }
    return iVar2;
}


// ===== sym.xiaomi_wifi_gpio_probe @ 0x08001354 (size 536) =====

int sym.xiaomi_wifi_gpio_probe(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    uint uVar3;
    int64_t *piVar4;
    char *pcVar5;
    ulong *in_x18;
    ulong uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg1 + 0x10;
    uVar6 = *(arg1 + 0x300);
    piVar4 = devm_kmalloc(iVar1,0xa0,0xdc0);
    if (piVar4 == NULL) {
        iVar2 = -0xc;
    }
    else {
        iVar2 = of_property_read_variable_u32_array(uVar6,"debounce-time",piVar4 + 1,1,0);
        if (iVar2 < 0) {
            _dev_info(iVar1,"Failed to get debounce-time, use default.\n");
            *(piVar4 + 1) = 0x32;
        }
        _segment.ehdr = of_get_named_gpio_flags(uVar6,"gpio",0,0);
        if (_segment.ehdr < 0) {
            _dev_err(iVar1,"Failed to get ant gpio %d\n",_segment.ehdr);
            iVar2 = _segment.ehdr;
        }
        else {
            iVar2 = devm_gpio_request(iVar1,_segment.ehdr,"gpio");
            if (iVar2 == 0) {
                gpio_to_desc(_segment.ehdr);
                gpiod_direction_input();
                gpio_to_desc(_segment.ehdr);
                uVar3 = gpiod_to_irq();
                *(piVar4 + 0xc) = uVar3;
                piVar4[3] = 0xfffffffe0;
                *piVar4 = iVar1;
                piVar4[4] = piVar4 + 4;
                piVar4[5] = piVar4 + 4;
                piVar4[6] = sym.gpio_debounce_work.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                init_timer_key(piVar4 + 9,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                iVar2 = devm_request_threaded_irq
                                  (iVar1,*(piVar4 + 0xc),0,
                                   sym.gpio_testing_threaded_irq_handler.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,0x2003
                                   ,"xiaomi_wifi_gpio",piVar4);
                if (iVar2 < 0) {
                    _dev_err(iVar1,"Failed to request irq.\n");
                    iVar2 = -0x10;
                }
                else {
                    iVar2 = device_init_wakeup(iVar1,1);
                    if (iVar2 == 0) {
                        iVar2 = dev_pm_set_wake_irq(iVar1,*(piVar4 + 0xc));
                        if (iVar2 == 0) {
                            *(arg1 + 0xa8) = piVar4;
                            _printk(0x80001c6);
                            return 0;
                        }
                        pcVar5 = "Failed to set wake irq %d\n";
                    }
                    else {
                        pcVar5 = "Failed to configure device as wakeup %d\n";
                    }
                    _dev_err(iVar1,pcVar5,iVar2);
                }
            }
            else {
                _dev_err(iVar1,"Request gpio failed %d\n");
            }
        }
    }
    return iVar2;
}


// ===== sym.xiaomi_wifi_gpio_remove @ 0x0800156c (size 100) =====

ulong sym.xiaomi_wifi_gpio_remove(int64_t arg1)

{
    ulong *in_x18;
    ulong *puVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = *(arg1 + 0xa8);
    cancel_delayed_work_sync(puVar1 + 3);
    dev_pm_clear_wake_irq(*puVar1);
    device_init_wakeup(arg1 + 0x10,0);
    _printk(0x800023a,"xiaomi_wifi_gpio_remove");
    return 0;
}


// ===== sym.gpio_debounce_work @ 0x080015d0 (size 220) =====

void sym.gpio_debounce_work(int64_t arg1)

{
    int *piVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    code *pcVar5;
    int64_t arg1_00;
    ulong *in_x18;
    ulong *puVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    gpio_to_desc(_segment.ehdr);
    arg1_00 = gpiod_get_raw_value();
    _segment.ehdr = arg1_00;
    sym.sar_send_status(arg1_00);
    puVar6 = arg1 + -0x18;
    _dev_info(*puVar6,"gpio status: %d\n",_segment.ehdr);
    piVar1 = arg1 + -8;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        iVar4 = *piVar1 + -1;
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
            *piVar1 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    DataMemoryBarrier(2,3);
    if (iVar4 < 0) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x8001688);
        (*pcVar5)();
    }
    if (iVar4 == 0) {
        _dev_info(*puVar6,"PM relax, count: %d\n",*(arg1 + -8));
        pm_relax(*puVar6);
    }
    return;
}


// ===== sym.gpio_testing_threaded_irq_handler @ 0x080016ac (size 224) =====

ulong sym.gpio_testing_threaded_irq_handler(int64_t arg1,int64_t arg2)

{
    int iVar1;
    char cVar2;
    bool bVar3;
    ulong uVar4;
    ulong uVar5;
    ulong *in_x18;
    int *piVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar6 = arg2 + 0x10;
    _dev_info(*arg2,"irq [%d] triggered\n",arg1 & 0xffffffff);
    Hint_Prefetch(piVar6,2,0,1);
    do {
        iVar1 = *piVar6;
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
            *piVar6 = iVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    DataMemoryBarrier(2,3);
    if (iVar1 + 1 < 2) {
        _dev_info(*arg2,"PM stay awake, count: %d\n",*(arg2 + 0x10));
        pm_stay_awake(*arg2);
    }
    else {
        *piVar6 = 1;
    }
    uVar4 = _gpiod_get_raw_value;
    uVar5 = __msecs_to_jiffies(*(arg2 + 8));
    mod_delayed_work_on(0x20,uVar4,arg2 + 0x18,uVar5);
    return 1;
}


// ===== sym.__cfi_check_fail @ 0x08001790 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080017d4

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
    //switch table (4 cases) at 0x8000437
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80017e8);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080017f4 (size 140) =====

int sym.init_module(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = get_hw_country_version();
    if (iVar1 == 0) {
        iVar1 = genl_register_family(obj.sar_fam);
        if (iVar1 == 0) {
            iVar1 = __platform_driver_register
                              (reloc.xiaomi_wifi_gpio_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
            if (iVar1 != 0) {
                genl_unregister_family(obj.sar_fam);
            }
        }
    }
    else {
        _printk(0x800029e,"wifi_gpio_driver_init");
        iVar1 = 0;
    }
    return iVar1;
}


// ===== sym.cleanup_module @ 0x08001880 (size 88) =====

void sym.cleanup_module(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = get_hw_country_version();
    if (iVar1 == 0) {
        genl_unregister_family(obj.sar_fam);
        platform_driver_unregister(reloc.xiaomi_wifi_gpio_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    }
    else {
        _printk(0x80003b2,"wifi_gpio_driver_exit");
    }
    return;
}

